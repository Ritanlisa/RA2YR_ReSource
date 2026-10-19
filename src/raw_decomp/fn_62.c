// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00620050  DrawSurfaceLineAlpha  this=-  sig=csp ====
int __fastcall DrawSurfaceLineAlpha(int a1, int *a2, int *a3, __int16 a4, unsigned __int8 a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  int result; // eax
  __int16 *v10; // edi
  unsigned int v11; // edx
  int v12; // eax
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
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 92))(a1, v5, v60); /*0x620095*/
  v10 = (__int16 *)result; /*0x620098*/
  if ( result ) /*0x62009c*/
  {
    if ( v60 == v6 ) /*0x6200a8*/
    {
      if ( v45 == 1 ) /*0x6200b3*/
      {
        LOBYTE(v6) = a4; /*0x6200bb*/
        BYTE1(v6) = a4; /*0x6200bf*/
        v11 = v7 - v5 + 1; /*0x6200c4*/
        v12 = v6 << 16; /*0x6200c6*/
        LOWORD(v12) = v6; /*0x6200c9*/
        memset32(v10, v12, v11 >> 2); /*0x6200cf*/
        memset(&v10[2 * (v11 >> 2)], a4, v11 & 3); /*0x6200d6*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6200de*/
        LOBYTE(result) = 1; /*0x6200e1*/
        return result; /*0x6200ea*/
      }
      v13 = v7 - v5; /*0x6200ed*/
      if ( v13 >= 0 ) /*0x6200ef*/
      {
        v14 = a5; /*0x6200fd*/
        v15 = 255 - a5; /*0x620108*/
        v16 = a4; /*0x62010a*/
        v55 = a5; /*0x620111*/
        v57 = v15; /*0x620115*/
        v65 = v10; /*0x62011d*/
        v66 = v13 + 1; /*0x620121*/
        while ( 1 ) /*0x620142*/
        {
          v17 = *v10; /*0x620142*/
          g_GameScreenConfig = v15; /*0x62014a*/
          v18 = (v15 * (unsigned __int16)(v17 & HIWORD(g_ScreenSaverState)) /*0x62018a*/
               + v14 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & a4)) >> 8;
          LOWORD(v18) = HIWORD(g_ScreenSaverState) & v18; /*0x62018d*/
          v19 = v18 /*0x6201a3*/
              | g_ScreenSaverState
              & ((v15 * (unsigned __int16)(v17 & g_ScreenSaverState)
                + v14 * (unsigned int)(unsigned __int16)(v16 & g_ScreenSaverState)) >> 8);
          v16 = a4; /*0x6201a5*/
          g_GameScreenFlags = v14; /*0x6201bd*/
          *v65 = ((v15 * (unsigned __int16)(v17 & g_CreditsScreenState) /*0x6201c3*/
                 + v14 * (unsigned int)(unsigned __int16)(a4 & g_CreditsScreenState)) >> 8)
               | v19;
          v10 = ++v65; /*0x6201c6*/
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
            *(_BYTE *)v10 = v22; /*0x620236*/
          }
          else
          {
            v23 = *v10; /*0x620241*/
            g_GameScreenFlags = a5; /*0x62024f*/
            v62 = v22; /*0x620291*/
            g_GameScreenConfig = 255 - a5; /*0x6202a4*/
            v24 = HIWORD(g_ScreenSaverState) /*0x6202dd*/
                & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v22)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v23)) >> 8)
                | g_ScreenSaverState
                & ((a5 * (unsigned __int16)(v22 & g_ScreenSaverState)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v23)) >> 8);
            v22 = a4; /*0x6202e5*/
            v20 = v47; /*0x6202ec*/
            *v10 = ((a5 * (unsigned __int16)(v62 & g_CreditsScreenState) /*0x6202f7*/
                   + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v23)) >> 8)
                 | v24;
          }
          v10 = (__int16 *)((char *)v10 + v20); /*0x6202fe*/
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
              *((_BYTE *)v10 + v39) = v41; /*0x6204ab*/
            }
            else
            {
              v42 = v10[v39]; /*0x6204b3*/
              g_GameScreenFlags = a5; /*0x6204c6*/
              v64 = v41; /*0x620508*/
              g_GameScreenConfig = 255 - a5; /*0x62051b*/
              v43 = HIWORD(g_ScreenSaverState) /*0x620554*/
                  & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v41)
                    + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v42)) >> 8)
                  | g_ScreenSaverState
                  & ((a5 * (unsigned __int16)(v41 & g_ScreenSaverState)
                    + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v42)) >> 8);
              v41 = a4; /*0x62055c*/
              v39 = v53; /*0x620563*/
              v40 = v51; /*0x620569*/
              v10[v53] = ((a5 * (unsigned __int16)(v64 & g_CreditsScreenState) /*0x620572*/
                         + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v42)) >> 8)
                       | v43;
              v28 = 2 * v25; /*0x620576*/
            }
            if ( v40 > 0 ) /*0x62057c*/
            {
              v53 = ++v39; /*0x620583*/
              v40 -= v56; /*0x620587*/
            }
            v40 += v28; /*0x620591*/
            v10 = (__int16 *)((char *)v10 + v48); /*0x620593*/
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
              *((_BYTE *)v10 + v31) = v32; /*0x62037b*/
            }
            else
            {
              v33 = v10[v31]; /*0x620387*/
              g_GameScreenFlags = a5; /*0x620396*/
              v34 = 255 - a5; /*0x62039c*/
              v63 = v32; /*0x6203d8*/
              v35 = g_ScreenSaverState /*0x6203e5*/
                  & ((a5 * (unsigned __int16)(v32 & g_ScreenSaverState)
                    + v34 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v33)) >> 8);
              g_GameScreenConfig = v34; /*0x6203eb*/
              v36 = (a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v32) /*0x620411*/
                   + v34 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v33)) >> 8;
              LOWORD(v36) = HIWORD(g_ScreenSaverState) & v36; /*0x620414*/
              v37 = v36 | v35; /*0x620424*/
              v32 = a4; /*0x62042c*/
              v25 = v58; /*0x620435*/
              v30 = v50; /*0x620439*/
              v38 = ((a5 * (unsigned __int16)(v63 & g_CreditsScreenState) /*0x620440*/
                    + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v33)) >> 8)
                  | v37;
              v31 = v52; /*0x620442*/
              v10[v52] = v38; /*0x620446*/
              v28 = v54; /*0x62044a*/
            }
            if ( v30 > 0 ) /*0x620450*/
            {
              v10 = (__int16 *)((char *)v10 + v48); /*0x620456*/
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
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x620311*/
    LOBYTE(result) = 1; /*0x620314*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6205bc*/
  }
  return result; /*0x6200e3*/
}



// ==== 0x006205D0  Scrollbar_Draw  this=ObjectClass  sig=csp ====
int __fastcall Scrollbar_Draw(
        int a1,
        int *a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  int result; // eax
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
      v13 = a2[1]; /*0x620615*/
      v14 = v9 + *a2; /*0x620618*/
      v25[0] = a2[2] - v9 + *a2 - 2; /*0x62061a*/
      v26[0] = v14; /*0x620624*/
      v25[1] = v9 + v13; /*0x62062c*/
      v26[1] = v9 + v13; /*0x620630*/
      DrawSurfaceLineAlpha(a1, v26, v25, v23, a6); /*0x620641*/
      v15 = *a2; /*0x620649*/
      v16 = a2[1]; /*0x620651*/
      v27 = a2[2] - v9 + *a2 - 1; /*0x620654*/
      v17 = a2[3]; /*0x620658*/
      v29[0] = v9 + v15; /*0x62065f*/
      v28 = v16 - v9 + v17 - 1; /*0x620670*/
      v29[1] = v28; /*0x620674*/
      DrawSurfaceLineAlpha(a1, v29, &v27, v10, a8); /*0x620680*/
      v18 = a2[3]; /*0x620687*/
      v19 = a2[1]; /*0x62068d*/
      v30[0] = *a2 + v9; /*0x620692*/
      v31[0] = v30[0]; /*0x620698*/
      v31[1] = v19 + v9 + 1; /*0x6206a8*/
      v30[1] = v19 - v9 + v18 - 1; /*0x6206ac*/
      DrawSurfaceLineAlpha(a1, v31, v30, v23, a5); /*0x6206c1*/
      v20 = a2[3]; /*0x6206cd*/
      v21 = a2[1]; /*0x6206d4*/
      v32[0] = *a2 - v9 + a2[2] - 1; /*0x6206d9*/
      v33[0] = v32[0]; /*0x6206df*/
      v22 = v21 - v9 + v20 - 2; /*0x6206e9*/
      v10 = v24; /*0x6206ed*/
      v33[1] = v9 + v21; /*0x6206f1*/
      v32[1] = v22; /*0x6206f6*/
      result = DrawSurfaceLineAlpha(a1, v33, v32, v24, a7); /*0x620706*/
      ++v9; /*0x62070b*/
    }
    while ( v9 < a4 ); /*0x620710*/
  }
  return result; /*0x620716*/
}



// ==== 0x00620720  DrawScrollArrowUI  this=ObjectClass  sig=csp ====
void __fastcall UI_DrawScrollArrow(int *a1, _DWORD *a2, int a3, int a4, char a5)
{
  char v7; // al
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD v14[2]; // [esp+Ch] [ebp-40h] BYREF
  int v15; // [esp+14h] [ebp-38h]
  int v16; // [esp+18h] [ebp-34h]
  _DWORD v17[4]; // [esp+1Ch] [ebp-30h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  if ( a1 ) /*0x62072c*/
  {
    v7 = 114; /*0x620736*/
    if ( a4 ) /*0x62073a*/
      v7 = 112; /*0x62073c*/
    if ( a3 ) /*0x620744*/
      sprintf(Buffer, "guparrow%c.pcx", v7); /*0x620754*/
    else
      sprintf(Buffer, "gdnarrow%c.pcx", v7); /*0x620764*/
    v8 = HashTable::Find(g_DialogHashTable, &Buffer[a5 == 0], 0); /*0x620788*/
    if ( v8 ) /*0x62078c*/
    {
      v9 = a2[1]; /*0x620790*/
      v10 = a2[2]; /*0x620793*/
      v14[0] = *a2; /*0x620796*/
      v11 = a2[3]; /*0x62079a*/
      v14[1] = v9; /*0x62079d*/
      v15 = v10; /*0x6207a1*/
      v16 = v11; /*0x6207a5*/
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8); /*0x6207b0*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6207be*/
      v17[1] = 0; /*0x6207c2*/
      v17[0] = 0; /*0x6207ca*/
      v17[2] = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8); /*0x6207d9*/
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6207e1*/
      v13 = *a1; /*0x6207e7*/
      v17[3] = v12; /*0x6207ea*/
      (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD, int))(v13 + 8))(a1, v14, v8, v17, 0, 1); /*0x6207ff*/
    }
  }
}



// ==== 0x00620870  sub_620870  this=-  sig=ida-proto ====
int __fastcall sub_620870(unsigned __int16 a1)
{
  int v1; // eax

  v1 = (unsigned __int8)((unsigned __int8)(a1 >> g_BitShift_Blue) << g_BitMask_Red); /*0x6208c7*/
  BYTE1(v1) = 2; /*0x6208d2*/
  return (unsigned __int8)((unsigned __int8)(a1 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x6208e5*/
       | (((unsigned __int8)((unsigned __int8)(a1 >> g_BitMask_Green) << g_BitMask_Blue) | (v1 << 8)) << 8);
}



// ==== 0x006208F0  DrawDialogGradient  this=ObjectClass  sig=csp ====
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
  if ( a4 == -1 && dword_AC4624 != -1 ) /*0x620911*/
    v4 = ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x62095c*/
       | (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue);
  v7 = dword_AC1B94; /*0x620963*/
  v29 = dword_AC1B98; /*0x62096c*/
  v30 = dword_AC1B94; /*0x620970*/
  if ( dword_AC1B98 == -1 ) /*0x620974*/
  {
    v33 = -1; /*0x620976*/
  }
  else
  {
    v33 = ((int)(unsigned __int8)dword_AC1B98 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6209bf*/
        | (BYTE1(dword_AC1B98) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(dword_AC1B98) >> g_BitMask_Red << g_BitShift_Blue);
    v7 = dword_AC1B94; /*0x6209c3*/
  }
  if ( v7 == -1 ) /*0x6209ca*/
    v34 = -1; /*0x6209cc*/
  else
    v34 = ((int)(unsigned __int8)v7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620a16*/
        | (BYTE1(v7) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(dword_AC1B94) >> g_BitMask_Red << g_BitShift_Blue);
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
          v4 = ((int)(unsigned __int8)v23 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620c3e*/
             | (BYTE1(v23) >> g_BitMask_Blue << g_BitMask_Green)
             | (BYTE2(v42) >> g_BitMask_Red << g_BitShift_Blue);
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
  v9 = (39 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d3e*/
     | (248 >> g_BitMask_Blue << g_BitMask_Green)
     | (116 >> g_BitMask_Red << g_BitShift_Blue);
  v10 = (19 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d7d*/
      | (123 >> g_BitMask_Blue << g_BitMask_Green)
      | (57 >> g_BitMask_Red << g_BitShift_Blue);
  v24 = (30 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620dbf*/
      | (186 >> g_BitMask_Blue << g_BitMask_Green)
      | (87 >> g_BitMask_Red << g_BitShift_Blue);
  v22 = 0; /*0x620dfb*/
  v25 = (24 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620e0d*/
      | (153 >> g_BitMask_Blue << g_BitMask_Green)
      | (71 >> g_BitMask_Red << g_BitShift_Blue);
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



// ==== 0x00620F60  Surface_Render  this=ObjectClass  sig=csp ====
int __fastcall sub_620F60(int a1, _WORD *a2, int *yTop, _BYTE *a4, int a5, int a6)
{
  _BYTE *v6; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ebx
  int v12; // [esp+10h] [ebp-Ch]
  int yTopa; // [esp+20h] [ebp+4h]
  int v16; // [esp+28h] [ebp+Ch]

  v6 = a4; /*0x620fab*/
  v8 = yTop[2]; /*0x620fc5*/
  v9 = yTop[3] - yTop[1]; /*0x620fd0*/
  yTopa = yTop[1]; /*0x620fd2*/
  v10 = v8 - *yTop; /*0x620fda*/
  v16 = ((unsigned __int8)a5 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620fdc*/
      | (BYTE2(a5) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(a5) >> g_BitMask_Blue << g_BitMask_Green);
  v12 = *yTop; /*0x620fe2*/
  if ( !a4 ) /*0x620fe6*/
    v6 = (_BYTE *)g_FogOfWarState; /*0x620fe8*/
  Char::Swap(v6, 1); /*0x620ff2*/
  TextGroup::SetRect(v6, yTop); /*0x620ffa*/
  Property::Set(v6, v16); /*0x621006*/
  Font::Print((int)v6, a1, a2, v12, yTopa, v10, v9, 0, 0, 0); /*0x62102e*/
  return 0; /*0x621035*/
}



// ==== 0x00621040  PrintFontLayout  this=-  sig=csp ====
int __fastcall PrintFontLayout(
        int a1,
        unsigned __int16 *a2,
        int *a3,
        Text *a4,
        int yTop,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  Char *v15; // ebx
  __int16 v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]

  v10 = a3; /*0x62109d*/
  v11 = a3[3]; /*0x6210a1*/
  v12 = a3[2] - *a3; /*0x6210ab*/
  v18 = *a3; /*0x6210ad*/
  v13 = ((unsigned __int8)yTop >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6210b1*/
      | (BYTE2(yTop) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(yTop) >> g_BitMask_Blue << g_BitMask_Green);
  yTop = a3[1]; /*0x6210b6*/
  v14 = v11 - yTop; /*0x6210ba*/
  v17 = v13; /*0x6210c0*/
  v15 = (Char *)a4; /*0x6210c4*/
  if ( (a6 & 4) != 0 ) /*0x6210ca*/
  {
    Text::Layout(a4, a2, (int *)&a4, &a3, v12); /*0x6210da*/
    yTop += (v14 - (int)a3) / 2; /*0x6210f2*/
  }
  Char::Swap(v15, 1); /*0x6210fa*/
  TextGroup::SetRect((TextGroup *)v15, v10); /*0x621102*/
  Property::Set((Property *)v15, v17); /*0x62110e*/
  Font::Print((int)v15, a1, a2, v18, yTop, v12, v14, a6, a9, a10); /*0x62113f*/
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
        int a1,
        Text *a2,
        int *yTop,
        unsigned __int16 *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int a9)
{
  Text *v9; // edi
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // [esp+4h] [ebp-20h] BYREF
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20; // [esp+Ch] [ebp-18h]
  int v21; // [esp+10h] [ebp-14h]
  _DWORD v22[4]; // [esp+14h] [ebp-10h] BYREF
  int yTopa; // [esp+28h] [ebp+4h]

  v9 = a2; /*0x6211dc*/
  if ( !stru_A8EB00.?[412] ) /*0x6211e0*/
    return 0; /*0x6211e8*/
  if ( !a8 ) /*0x6211f1*/
    a8 = (int *)DSurface_Alternate; /*0x6211f9*/
  v12 = *yTop; /*0x621234*/
  v21 = yTop[3]; /*0x621255*/
  v13 = ((unsigned __int8)a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x621259*/
      | (BYTE1(a1) >> g_BitMask_Blue << g_BitMask_Green)
      | (BYTE2(a1) >> g_BitMask_Red << g_BitShift_Blue);
  yTopa = yTop[1]; /*0x62125e*/
  v14 = yTop[2]; /*0x621262*/
  v20 = v14; /*0x621267*/
  if ( !a2 ) /*0x62126b*/
    v9 = g_FogOfWarState; /*0x62126d*/
  Text::Layout(v9, a4, &v18, &v19, v14); /*0x621285*/
  switch ( a6 ) /*0x621291*/
  {
    case 1: /*0x621291*/
      v12 += (v20 - v18 + 1) / 2; /*0x6212a3*/
      break;
    case 2: /*0x621291*/
      v12 += (v18 + 1) / -2; /*0x6212ba*/
      break;
    case 3: /*0x621291*/
      v12 += -1 - v18; /*0x6212cc*/
      break;
    case 4: /*0x621291*/
      v12 = v20 - v18 + v12 - 1; /*0x6212df*/
      break;
  }
  switch ( a7 ) /*0x6212ea*/
  {
    case 1: /*0x6212ea*/
      v15 = (v21 - v19 + 1) / 2; /*0x6212fa*/
LABEL_21:
      yTopa += v15; /*0x621321*/
      break; /*0x621321*/
    case 2: /*0x6212ea*/
      v15 = (v19 + 1) / -2; /*0x62130f*/
      goto LABEL_21; /*0x621311*/
    case 3: /*0x6212ea*/
      v15 = -1 - v19; /*0x62131f*/
      goto LABEL_21; /*0x62131f*/
  }
  v16 = *yTop; /*0x621325*/
  v17 = yTop[1]; /*0x621327*/
  v22[0] = v16; /*0x621332*/
  v22[1] = v17; /*0x621336*/
  v22[2] = v20 + v16; /*0x621342*/
  v22[3] = v21 + v17; /*0x621346*/
  Char::Swap((Char *)v9, 1); /*0x62134a*/
  TextGroup::SetRect((TextGroup *)v9, v22); /*0x621356*/
  Property::Set((Property *)v9, v13); /*0x62135e*/
  return FontRenderer::DrawText(v9, a8, a4, v12, yTopa, a5, a9) - v12; /*0x6211e4*/
}



// ==== 0x006213A0  Dialog::Resize  this=AbstractClass  sig=csp ====
LONG __thiscall Dialog_Resize(char *this)
{
  LONG result; // eax
  int SystemMetrics; // esi
  HWND v4; // esi
  HWND v5; // [esp+8h] [ebp-24h] BYREF
  struct tagRECT v6; // [esp+Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = g_DSurface_Primary; /*0x6213a0*/
  if ( g_DSurface_Primary ) /*0x6213ae*/
  {
    result = DSurface_Alternate; /*0x6213b4*/
    if ( DSurface_Alternate ) /*0x6213bb*/
    {
      ScreenDialogToClient(*((HWND *)this + 5), &v6); /*0x6213c8*/
      GetClientRect(*((HWND *)this + 5), &Rect); /*0x6213d6*/
      result = GetWindowLongA(*((HWND *)this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor' & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6.left += SystemMetrics; /*0x62140e*/
        v6.right -= SystemMetrics; /*0x62141c*/
        v6.top += result; /*0x621420*/
        v6.bottom -= result; /*0x621424*/
      }
      if ( *(_DWORD *)this == 4 ) /*0x62142c*/
      {
        result = dword_AC1B04; /*0x62142e*/
        v4 = (HWND)this->abstractFlags; /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( dword_AC1B04 ) /*0x62143c*/
        {
          result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v5) & ((1 << dword_AC1B0C) - 1))); /*0x62145d*/
          if ( result ) /*0x621462*/
          {
            while ( *(HWND *)result != v5 ) /*0x62146a*/
            {
              result = *(_DWORD *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(_DWORD *)(result + 232) = this->ptr_8; /*0x621491*/
              InvalidateRect(v4, (const RECT *)(this + 28), 0); /*0x621497*/
              return UpdateWindow(v4); /*0x62149e*/
            }
          }
        }
      }
    }
  }
  return result; /*0x621476*/
}



// ==== 0x006214B0  SetupDialogRenderBuffer  this=ObjectClass  sig=csp ====
int __fastcall Dialog_SetupRenderBuffer(int *a1, HWND a2, unsigned __int8 a3)
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
  if ( dword_AC1B04 ) /*0x6214cc*/
  {
    v6 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x6214ed*/
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
    ++g_GameScreenState; /*0x6215a1*/
    v29[2] = Rect.right + 1; /*0x6215a7*/
    v29[3] = Rect.bottom + 1; /*0x6215ab*/
    Parent = GetParent(hWnd); /*0x6215af*/
    v24 = Parent; /*0x6215bd*/
    if ( dword_AC1B04 ) /*0x6215c1*/
    {
      v11 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v24) & ((1 << dword_AC1B0C) - 1))); /*0x6215e2*/
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
      if ( g_DSurface_Primary ) /*0x62168c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))( /*0x6216a1*/
          v7,
          v29,
          g_DSurface_Primary,
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
          *v13++ = ((v17 * (unsigned int)(unsigned __int16)(v18 & g_CreditsScreenState)) >> 8) /*0x621763*/
                 | g_ScreenSaverState & ((v17 * (unsigned int)(unsigned __int16)(v18 & g_ScreenSaverState)) >> 8)
                 | HIWORD(g_ScreenSaverState)
                 & ((v17 * (unsigned int)(unsigned __int16)(v18 & HIWORD(g_ScreenSaverState))) >> 8);
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
  return (*(int (__thiscall **)(int, int *, _DWORD *, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x6217cc*/
           DSurface_Alternate,
           v3,
           v7,
           v35,
           0,
           1);
}



// ==== 0x006217E0  UI_Helper_6217E0  this=Color  sig=csp ====
void __fastcall sub_6217E0(_DWORD *a1, int a2, __int16 a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ebp
  int v6; // ebx
  __int16 v7; // di
  int v8; // ecx
  int v9; // eax
  _WORD *v10; // ecx
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
  _WORD *v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  __int16 v25; // [esp+24h] [ebp-Ch]
  int v28; // [esp+38h] [ebp+8h]

  v4 = a1; /*0x6217ea*/
  v5 = a2; /*0x6217ec*/
  v6 = (a1[2] * a4) >> 16; /*0x6217fa*/
  v19 = 1; /*0x6217fd*/
  v20 = v6; /*0x621805*/
  if ( v6 >= 0 ) /*0x621809*/
  {
    if ( !v6 ) /*0x621811*/
    {
      v6 = 1; /*0x621813*/
      v20 = 1; /*0x621818*/
    }
    v24 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x62182c*/
    if ( v24 ) /*0x621830*/
    {
      v28 = 0; /*0x621839*/
      if ( (int)v4[3] > 0 ) /*0x621843*/
      {
        v7 = a3; /*0x62184a*/
        do /*0x6219b1*/
        {
          v8 = *v4 + (v28 + v4[1]) * ((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5) / 2); /*0x62186b*/
          v9 = v4[3] / 4; /*0x621876*/
          if ( v28 == 3 * v9 ) /*0x621880*/
            v19 = 1; /*0x621882*/
          if ( v28 == v9 ) /*0x62188e*/
            v19 = 0; /*0x621890*/
          if ( v6 > 0 ) /*0x62189a*/
          {
            v23 = v6; /*0x6218a4*/
            v10 = (_WORD *)(v24 + 2 * v8); /*0x6218a8*/
            v11 = 255; /*0x6218ab*/
            v21 = v10; /*0x6218b0*/
            v22 = 255; /*0x6218b4*/
            do /*0x62199d*/
            {
              if ( v19 ) /*0x6218be*/
              {
                v12 = v11 / v4[2]; /*0x6218c5*/
                v13 = *v10; /*0x6218d8*/
                v25 = v7; /*0x6218e7*/
                g_GameScreenFlags = v12; /*0x6218fc*/
                g_GameScreenConfig = 255 - v12; /*0x621908*/
                v14 = g_ScreenSaverState /*0x62192d*/
                    & ((g_GameScreenConfig * (unsigned __int16)(v13 & g_ScreenSaverState)
                      + v12 * (unsigned int)(unsigned __int16)(v7 & g_ScreenSaverState)) >> 8);
                v15 = HIWORD(g_ScreenSaverState) /*0x621946*/
                    & ((g_GameScreenConfig * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v13)
                      + v12 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v7)) >> 8);
                v16 = g_GameScreenConfig * (unsigned __int16)(v13 & g_CreditsScreenState); /*0x621958*/
                v4 = a1; /*0x62195b*/
                v6 = v20; /*0x62195f*/
                v17 = v16 + v12 * (unsigned __int16)(v25 & g_CreditsScreenState); /*0x621963*/
                v10 = v21; /*0x621965*/
                LOWORD(v14) = v15 | v14; /*0x621969*/
                v7 = a3; /*0x62196b*/
                *v21 = (v17 >> 8) | v14; /*0x621974*/
                v5 = a2; /*0x621977*/
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
        while ( v28 < v4[3] ); /*0x6219b1*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x6219bd*/
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
            LOWORD(v11) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621a5b*/
            LOWORD(v14) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621a65*/
            v14 &= g_ScreenSaverState; /*0x621a68*/
            LOWORD(v15) = (unsigned __int16)v15 >> 1; /*0x621a6e*/
            v17 = v14 | v11; /*0x621a71*/
            LOWORD(v14) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621a7a*/
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
            LOWORD(v20) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621b03*/
            LOWORD(v19) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621b0d*/
            v19 &= g_ScreenSaverState; /*0x621b10*/
            LOWORD(v22) = (unsigned __int16)v22 >> 1; /*0x621b16*/
            v24 = v19 | v20; /*0x621b19*/
            LOWORD(v19) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621b22*/
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
int __fastcall DSurface::FillRectWithColor(int *a1, int a2, __int16 a3, unsigned __int8 a4)
{
  int *v4; // esi
  int v5; // ebp
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

  v4 = a1; /*0x621b85*/
  v5 = a2; /*0x621b87*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x621b9c*/
  v25 = result; /*0x621ba1*/
  if ( result ) /*0x621ba5*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5); /*0x621bb2*/
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
          v5 = a2; /*0x621cf4*/
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
            v17 = g_ScreenSaverState /*0x621c6d*/
                & ((v14 * (unsigned __int16)(v16 & g_ScreenSaverState)
                  + v12 * (unsigned int)(unsigned __int16)(v15 & g_ScreenSaverState)) >> 8);
            v18 = v14 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v16) /*0x621c8a*/
                + v12 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & a3);
            v15 = a3; /*0x621c8c*/
            g_GameScreenFlags = v12; /*0x621ca0*/
            v19 = g_GameScreenConfig * (unsigned __int16)(v16 & g_CreditsScreenState); /*0x621cb1*/
            v4 = a1; /*0x621cb8*/
            v13 = v20 + 1; /*0x621cbe*/
            *v20++ = ((v19 + v12 * (unsigned int)(unsigned __int16)(a3 & g_CreditsScreenState)) >> 8) /*0x621cca*/
                   | HIWORD(g_ScreenSaverState) & (v18 >> 8)
                   | v17;
            if ( ++v21 >= a1[2] + *a1 ) /*0x621ce0*/
              break; /*0x621ce0*/
            v12 = a4; /*0x621c27*/
            v14 = 255 - a4; /*0x621c2b*/
          }
          v5 = a2; /*0x621ce6*/
          v8 = v23; /*0x621cea*/
          v10 = v24; /*0x621cee*/
        }
        v10 += v27; /*0x621cff*/
        v23 = ++v8; /*0x621d09*/
        v24 = v10; /*0x621d0d*/
      }
      while ( v8 < v4[3] + v4[1] ); /*0x621d11*/
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x621d1c*/
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
  ObjectClass v18[4]; // [esp+28h] [ebp-300h] BYREF

  v16 = HashTable::Find(&g_DialogHashTable, aBitsIPcx, v18); /*0x621d5e*/
  v4 = 0; /*0x621d6b*/
  v17 = HashTable::Find(&g_DialogHashTable, aBitsAPcx, 0); /*0x621d6d*/
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



// ==== 0x00621E90  Dialog::DrawBackground  this=Dialog  sig=csp ====
void __thiscall Dialog::DrawBackground(Dialog *this)
{
  int v1; // ebp
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  int v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  Dialog **v11; // eax
  _DWORD *v12; // eax
  Dialog **v13; // eax
  int v14; // edi
  Dialog **v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  void *NeedsSaveOrLink; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  int v28; // [esp+10h] [ebp-58h] BYREF
  Dialog *v29; // [esp+14h] [ebp-54h] BYREF
  int v30; // [esp+18h] [ebp-50h] BYREF
  LONG v31; // [esp+1Ch] [ebp-4Ch]
  LONG v32; // [esp+20h] [ebp-48h]
  LONG v33; // [esp+24h] [ebp-44h]
  LONG left; // [esp+28h] [ebp-40h] BYREF
  LONG top; // [esp+2Ch] [ebp-3Ch]
  LONG v36; // [esp+30h] [ebp-38h]
  LONG v37; // [esp+34h] [ebp-34h]
  struct tagRECT v38; // [esp+38h] [ebp-30h] BYREF
  int v39; // [esp+48h] [ebp-20h] BYREF
  LONG v40; // [esp+4Ch] [ebp-1Ch]
  LONG v41; // [esp+50h] [ebp-18h]
  LONG v42; // [esp+54h] [ebp-14h]
  struct tagRECT Rect; // [esp+58h] [ebp-10h] BYREF

  v1 = 0; /*0x621e9c*/
  v3 = 0; /*0x621ea0*/
  v30 = (int)this; /*0x621ea4*/
  v28 = (int)this; /*0x621ea8*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x621eac*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x621ec3*/
                    + 4 * HashTable::ComputeHash((int *)&g_DialogPool.__pad_208[56], (int)&v28));
    if ( v4 ) /*0x621ec8*/
    {
      while ( *v4 != v28 ) /*0x621ed0*/
      {
        v4 = (_DWORD *)v4[129]; /*0x621ed2*/
        if ( !v4 ) /*0x621eda*/
          goto LABEL_7; /*0x621eda*/
      }
      v3 = v4 + 1; /*0x621ee2*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x621ee7*/
  {
    GetClientRect((HWND)this, &Rect); /*0x621ef3*/
    ScreenDialogToClient((HWND)this, &v38); /*0x621eff*/
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
      v7 = v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = __2_YAPAXI_Z(0x20u); /*0x621f5b*/
        if ( v7 ) /*0x621f62*/
        {
          v8 = Rect.right; /*0x621f64*/
          v9 = Rect.bottom; /*0x621f68*/
          *(_DWORD *)(v7 + 4) = Rect.right; /*0x621f6c*/
          *(_DWORD *)(v7 + 8) = v9; /*0x621f74*/
          *(_DWORD *)(v7 + 12) = 0; /*0x621f7c*/
          *(_DWORD *)v7 = &XSurface_Vtable; /*0x621f7f*/
          *(_DWORD *)(v7 + 16) = 2; /*0x621f85*/
          Buffer::Init((Buffer *)(v7 + 20), 0, 2 * v9 * v8); /*0x621f8c*/
          *(_DWORD *)v7 = &BSurface_Vtable; /*0x621f91*/
        }
        else
        {
          v7 = 0; /*0x621f99*/
        }
        v3[4] = v7; /*0x621f9b*/
        bottom = v37; /*0x621fa3*/
        ++g_GameScreenState; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x621fc5*/
        {
          RenderCreditsScreen(v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int *)v7, &left, *((_BYTE *)v3 + 212) == 0); /*0x621ffe*/
          v29 = this; /*0x62200a*/
          if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x62200e*/
          {
            v11 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62202f*/
                              + 4
                              * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                               & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v11 ) /*0x622034*/
            {
              while ( *v11 != v29 ) /*0x62203c*/
              {
                v11 = (Dialog **)v11[129]; /*0x62203e*/
                if ( !v11 ) /*0x622046*/
                  goto LABEL_29; /*0x622046*/
              }
              v12 = v11 + 1; /*0x62204e*/
              if ( v12 ) /*0x622053*/
                v1 = v12[29]; /*0x622055*/
            }
          }
LABEL_29:
          v29 = this; /*0x622058*/
          if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x622084*/
                            + 4
                            * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v13 ) /*0x622089*/
            goto LABEL_33; /*0x622089*/
          while ( *v13 != v29 ) /*0x622091*/
          {
            v13 = (Dialog **)v13[129]; /*0x622093*/
            if ( !v13 ) /*0x62209b*/
              goto LABEL_33; /*0x62209b*/
          }
          v16 = v13 + 1; /*0x6220ee*/
          if ( v16 ) /*0x6220f3*/
            v14 = v16[56]; /*0x6220f5*/
          else
LABEL_33:
            v14 = 0; /*0x62209d*/
          v29 = (Dialog *)v30; /*0x6220aa*/
          if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6220cf*/
                            + 4
                            * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v15 ) /*0x6220d4*/
            goto LABEL_43; /*0x6220d4*/
          while ( *v15 != v29 ) /*0x6220dc*/
          {
            v15 = (Dialog **)v15[129]; /*0x6220de*/
            if ( !v15 ) /*0x6220e6*/
              goto LABEL_43; /*0x6220e6*/
          }
          v17 = v15 + 1; /*0x622101*/
          if ( v17 ) /*0x622106*/
            v18 = v17[57]; /*0x622108*/
          else
LABEL_43:
            v18 = 0; /*0x622110*/
          UI_Draw_72E730(v7, &left, v1, v14, v18); /*0x62211b*/
          if ( *((_BYTE *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0(v7, &left); /*0x622130*/
          if ( *((_BYTE *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860(v7, &left); /*0x622145*/
          if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622159*/
          {
            v19 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62217e*/
                             + 4
                             * ((*(int (__thiscall **)(int *))&g_DialogPool.__pad_208[80])(&v30)
                              & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (_DWORD *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((_BYTE *)v20 + 215) ) /*0x6221b3*/
                UI_Draw_72E920(v7, &left); /*0x6221c7*/
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
        v21 = *(_DWORD *)v7; /*0x622204*/
        v39 = 0; /*0x62220a*/
        v40 = 0; /*0x62220e*/
        (*(void (__thiscall **)(int, int *, DSurface *, LONG *, _DWORD, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          DSurface_Alternate,
          &left,
          0,
          1);
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x62221a*/
        {
          NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x622229*/
          if ( NeedsSaveOrLink ) /*0x622231*/
          {
            if ( NeedsSaveOrLink == (void *)1 ) /*0x622243*/
            {
              v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1240]; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1244]; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1236]; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1232]; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP(v7, v24, v23, 0, &v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(&g_DialogHashTable, off_833654, 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x622318*/
        if ( (int)g_DisplayWidth > v26 ) /*0x622321*/
          v30 += (int)&g_DisplayWidth->__pad_0[-v26] / -2; /*0x622332*/
        if ( (int)*(&g_DisplayWidth + 1) > v27 ) /*0x62233d*/
          v31 += (int)&(*(&g_DisplayWidth + 1))->__pad_0[-v27] / -2; /*0x62234e*/
        (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*((void (__thiscall **)(DSurface *, LONG *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x6223b3*/
          DSurface_Alternate,
          &left,
          v7,
          &v39,
          0,
          1);
      }
    }
  }
}



// ==== 0x006223C0  ObjectClass::DestroyDialog  this=ObjectClass  sig=csp ====
_DWORD *__thiscall DestroyDialog(ObjectClass *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD **)&g_DialogPool.__pad_208[60]; /*0x6223c1*/
  v4 = this; /*0x6223c9*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6223cd*/
  {
    result = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6223ee*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v4)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x6223f3*/
    {
      while ( (ObjectClass *)*result != v4 ) /*0x6223fb*/
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
          return (_DWORD *)--g_GameScreenState; /*0x62242e*/
        }
      }
    }
  }
  return result; /*0x622407*/
}



// ==== 0x00622470  AddDynamicVector  this=-  sig=csp ====
BOOL __stdcall DynamicVectorClass_Add(HWND a1, int *a2)
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
int UI_Process(ObjectClass *this)
{
  int result; // eax
  bool v2; // zf

  result = dword_AC48EC; /*0x622610*/
  v2 = dword_AC48EC == 0; /*0x622615*/
  if ( dword_AC48EC > 0 ) /*0x622617*/
  {
    result = dword_AC48EC - 1; /*0x622619*/
    dword_AC48EC = result; /*0x62261a*/
    v2 = result == 0; /*0x62261f*/
  }
  if ( v2 && stru_887598.lineTrailer ) /*0x62262b*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer) ) /*0x62262f*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x62263e*/
    return dword_AC48EC; /*0x622641*/
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
      hWnd = v10; /*0x6226f9*/
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



// ==== 0x00622720  Dialog::Destroy  this=Dialog  sig=csp ====
int __thiscall Dialog::Destroy(Dialog *this)
{
  int result; // eax
  Dialog **i; // ecx
  int v4; // eax
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  Dialog *v8; // [esp+0h] [ebp-8h]

  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x62272a*/
  Dialog::IdleProcess(v8, (ObjectClass *)this); /*0x622731*/
  DestroyWindow((HWND)this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( g_DialogTrackingList > 0 ) /*0x622749*/
  {
    for ( i = (Dialog **)&stru_B72D28; *i != this; i += 2 ) /*0x62274f*/
    {
      if ( ++result >= g_DialogTrackingList ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * result + 12004648),
      (const void *)(8 * result + 12004656),
      8 * (g_DialogTrackingList + 0x1FFFFFFF * (result + 1)));
    v4 = g_DialogTrackingList; /*0x622788*/
    *(&g_ClipboardBuffer + 2 * g_DialogTrackingList) = 0; /*0x622790*/
    dword_B72D24[2 * v4] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    g_DialogTrackingList = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      hWnd = 0; /*0x6227de*/
      dword_B72F48 = 0; /*0x6227e5*/
      SetForegroundWindow(g_hWnd); /*0x6227eb*/
      return (int)SetFocus(g_hWnd); /*0x6227f7*/
    }
    else
    {
      v6 = *(&g_ClipboardBuffer + 2 * v5); /*0x6227a8*/
      v7 = dword_B72D24[2 * v5]; /*0x6227af*/
      hWnd = v6; /*0x6227b7*/
      dword_B72F48 = v7; /*0x6227bd*/
      SetForegroundWindow(v6); /*0x6227c2*/
      return (int)SetFocus(hWnd); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/
}



// ==== 0x00622800  Dialog::Show  this=Dialog  sig=csp ====
int __thiscall Dialog::Show(Dialog *this)
{
  ShowWindow((HWND)this, 1); /*0x622806*/
  SetForegroundWindow((HWND)this); /*0x62280d*/
  return Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x62281e*/
}



// ==== 0x00622820  SetupDialog  this=AbstractClass  sig=csp ====
int __fastcall SetupDialog(Dialog *hWnd, int a2)
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
  dword_AC48A8 = (int)hWnd; /*0x622836*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 1); /*0x622844*/
  Dialog::InitWindow((HWND)hWnd, 1); /*0x622849*/
  EnumChildWindows((HWND)hWnd, Dialog::SubclassEditControl, 1); /*0x622856*/
  EnumChildWindows((HWND)hWnd, Dialog::InitializeControls, 0); /*0x622861*/
  Dialog::InitializeControls((HWND)hWnd, 0); /*0x622865*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 0); /*0x622871*/
  Dialog::InitWindow((HWND)hWnd, 0); /*0x622875*/
  Dialog::GetField(hWnd); /*0x62287c*/
  lParam[0] = (LPARAM)hWnd; /*0x622890*/
  v14 = 0; /*0x622894*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622898*/
  if ( v14 ) /*0x6228a3*/
    *(_DWORD *)(v14 + 108) = a2; /*0x6228a5*/
  if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x6228ad*/
    Control::CreateControlDialog((Control *)hWnd); /*0x6228b8*/
  lParam[0] = (LPARAM)hWnd; /*0x6228cc*/
  v14 = 0; /*0x6228d0*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6228d4*/
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
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622947*/
  if ( v14 ) /*0x622952*/
  {
    v6 = *(_DWORD *)(v14 + 108); /*0x622954*/
    v7 = v6 == 188 || v6 == 189 || v6 == 258 || v6 == 194 || v6 == 201 || v6 == 3014; /*0x622985*/
    *(_BYTE *)(v14 + 214) = v7; /*0x62298a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62299f*/
  v14 = 0; /*0x6229a3*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6229a7*/
  if ( v14 ) /*0x6229b2*/
  {
    v8 = *(_DWORD *)(v14 + 108); /*0x6229b4*/
    v9 = v8 == 259 || v8 == 3015; /*0x6229c9*/
    *(_BYTE *)(v14 + 215) = v9; /*0x6229ce*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x6229e3*/
  v14 = 0; /*0x6229e7*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6229eb*/
  if ( v14 ) /*0x6229f6*/
  {
    v10 = *(_DWORD *)(v14 + 108); /*0x6229f8*/
    v11 = v10 == 264 || v10 == 3014; /*0x622a0d*/
    *(_BYTE *)(v14 + 216) = v11; /*0x622a12*/
  }
  EnumChildWindows((HWND)hWnd, GadgetClass::FindByWindow, 0); /*0x622a1f*/
  if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x622a23*/
  {
    lParam[0] = 640; /*0x622a3d*/
    lParam[1] = 480; /*0x622a4d*/
    MoveWindow((HWND)hWnd, 0, 0, (int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1), 0); /*0x622a51*/
    dword_AC48A8 = (int)hWnd; /*0x622a5b*/
    EnumChildWindows((HWND)hWnd, (WNDENUMPROC)RepositionDialogControls, (LPARAM)lParam); /*0x622a68*/
  }
  else
  {
    lParam[0] = (LPARAM)hWnd; /*0x622a7e*/
    v14 = 0; /*0x622a82*/
    HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622a86*/
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
  return Dialog::RestoreParent(hWnd); /*0x622b42*/
}



// ==== 0x00622B50  BaseDialogProc  this=-  sig=csp ====
int __userpurge BaseDialogProc@<eax>(HWND hWnd@<ecx>, unsigned int a2@<edx>, int a3, DeleteAndZero a4)
{
  int result; // eax
  int v6; // eax
  int v7; // edi
  HWND DlgItem; // eax
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // ebx
  HWND v12; // eax
  HWND v13; // ebx
  LPARAM v14; // ebp
  void (__stdcall *v15)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  char *v19; // eax
  wchar_t *v20; // eax
  unsigned __int16 v21; // bx
  void (__stdcall *v22)(HWND, WNDENUMPROC, LPARAM); // edi
  wchar_t *StringCSF; // [esp-4h] [ebp-44h]
  DeleteAndZero v24; // [esp+10h] [ebp-30h] BYREF
  DeleteAndZero v25; // [esp+1Ch] [ebp-24h] BYREF
  HWND v26[2]; // [esp+28h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  if ( a2 > 0x84 ) /*0x622b5f*/
  {
    if ( a2 > 0x497 ) /*0x622ea0*/
    {
      if ( a2 == 1260 ) /*0x6230be*/
        EnumChildWindows(hWnd, sub_60AA60, 0); /*0x6230c8*/
      return 0; /*0x6230c8*/
    }
    if ( a2 == 1175 ) /*0x622ea6*/
    {
      SendMessageA(hWnd, 0x4A9u, (WPARAM)hWnd, 1); /*0x6230a6*/
      return 0; /*0x6230b5*/
    }
    if ( a2 != 272 ) /*0x622eb2*/
    {
      if ( a2 > 0x131 && a2 <= 0x138 ) /*0x622ec6*/
        return (int)GetStockObject(4); /*0x622edb*/
      return 0; /*0x622ec6*/
    }
    ++*(_DWORD *)&stru_A8EB00.?[424]; /*0x622eed*/
    if ( *(_DWORD *)a4.__pad_0 ) /*0x622ef3*/
    {
      v21 = **(_WORD **)a4.__pad_0; /*0x622efb*/
      DialogClass::RegisterWinClasses(); /*0x622efe*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x622f03*/
      dword_AC48A8 = (int)hWnd; /*0x622f09*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 1); /*0x622f17*/
      Dialog::InitWindow(hWnd, 1); /*0x622f1c*/
      EnumChildWindows(hWnd, Dialog::SubclassEditControl, 1); /*0x622f29*/
      EnumChildWindows(hWnd, Dialog::InitializeControls, 0); /*0x622f32*/
      Dialog::InitializeControls(hWnd, 0); /*0x622f36*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 0); /*0x622f42*/
      Dialog::InitWindow(hWnd, 0); /*0x622f46*/
      Dialog::GetField((Dialog *)hWnd); /*0x622f4d*/
      UI_Helper_60D2C0((int)hWnd, v21); /*0x622f56*/
      if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x622f60*/
        Control::CreateControlDialog((Control *)hWnd); /*0x622f6b*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x622f72*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x622f79*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x622f80*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x622f87*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x622f93*/
      if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x622f97*/
      {
LABEL_41:
        v26[0] = (HWND)640; /*0x622fa4*/
        v26[1] = (HWND)480; /*0x622fb4*/
        ResizeDialogAndEnum(hWnd, (LPARAM)v26); /*0x622fbe*/
LABEL_48:
        v22(hWnd, Dialog::HandleTabKey, 0); /*0x623071*/
        v22(hWnd, Dialog::DispatchEvent, 0); /*0x623081*/
        Dialog::RestoreParent((Dialog *)hWnd); /*0x623085*/
        SetFocus(hWnd); /*0x62308b*/
        return 0; /*0x62309a*/
      }
    }
    else
    {
      InitializeDialogControls(hWnd, 0); /*0x622fcc*/
      Dialog::GetField((Dialog *)hWnd); /*0x622fd3*/
      v26[0] = hWnd; /*0x622fe7*/
      *(_DWORD *)a4.__pad_0 = 0; /*0x622feb*/
      HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], v26, &a4); /*0x622fef*/
      if ( *(_DWORD *)a4.__pad_0 ) /*0x622ffa*/
        *(_DWORD *)(*(_DWORD *)a4.__pad_0 + 108) = 0; /*0x622ffc*/
      if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x623004*/
        Control::CreateControlDialog((Control *)hWnd); /*0x62300f*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x623016*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x62301d*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x623024*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x62302b*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x623030*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x62303d*/
      if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x623041*/
        goto LABEL_41; /*0x623048*/
    }
    UI_Helper_60C7D0((ObjectClass *)hWnd); /*0x62306c*/
    goto LABEL_48; /*0x62306c*/
  }
  if ( a2 != 132 ) /*0x622b65*/
  {
    switch ( a2 ) /*0x622b7f*/
    {
      case 2u: /*0x622b7f*/
        DialogQueue::RemoveEntry((DialogQueue *)hWnd); /*0x622b88*/
        --*(_DWORD *)&stru_A8EB00.?[424]; /*0x622b9b*/
        SetFocus(g_hWnd); /*0x622ba1*/
        return 0; /*0x622bb0*/
      case 0xFu: /*0x622b7f*/
        *(_DWORD *)a4.__pad_0 = hWnd; /*0x622bd0*/
        if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622bd6*/
          return 0; /*0x622bd6*/
        result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x622bf1*/
                           + 4 * HashTable::ComputeHash((int *)&g_DialogPool.__pad_208[56], (int)&a4));
        if ( !result ) /*0x622bf6*/
          return 0; /*0x622bf6*/
        break; /*0x622bf6*/
      case 0x14u: /*0x622b7f*/
        return 1;
      case 0x2Bu: /*0x622b7f*/
        Dialog::Resize(*(char **)a4.__pad_0); /*0x622bb7*/
        return 1; /*0x622bc8*/
      default:
        return 0;
    }
    while ( *(_DWORD *)result != *(_DWORD *)a4.__pad_0 ) /*0x622c02*/
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
        ValidateRect(hWnd, 0); /*0x622c38*/
        return 1; /*0x622c3e*/
      }
      else
      {
        Dialog::DrawBackground((Dialog *)hWnd); /*0x622c4f*/
        v24.DeleteAndZero_field_0x04 = (int)hWnd; /*0x622c63*/
        *(_DWORD *)a4.__pad_0 = 0; /*0x622c67*/
        HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], &v24.DeleteAndZero_field_0x04, &a4); /*0x622c6f*/
        v7 = *(_DWORD *)a4.__pad_0; /*0x622c74*/
        if ( *(_DWORD *)a4.__pad_0 && *(_BYTE *)(*(_DWORD *)a4.__pad_0 + 190) ) /*0x622c7c*/
        {
          DlgItem = GetDlgItem(hWnd, 1818); /*0x622c8c*/
          if ( DlgItem ) /*0x622c94*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x622ca0*/
          RenderGadgetClassAnimation(hWnd, 0); /*0x622caa*/
          *(_BYTE *)(v7 + 190) = 0; /*0x622caf*/
        }
        ValidateRect(hWnd, 0); /*0x622cb9*/
        return 0; /*0x622cbf*/
      }
    }
    return 0; /*0x6230d1*/
  }
  v26[0] = GetDlgItem(hWnd, 1685); /*0x622cd9*/
  if ( !v26[0] ) /*0x622cdd*/
    return 0; /*0x622cdd*/
  v9 = *(unsigned __int16 *)a4.__pad_0; /*0x622cef*/
  v10 = *(unsigned __int16 *)&a4.__pad_0[2]; /*0x622cf5*/
  GetWindowRect(hWnd, &Rect); /*0x622cf8*/
  v11 = v9 - Rect.left; /*0x622d0c*/
  v24.DeleteAndZero_field_0x08 = v10 - Rect.top; /*0x622d12*/
  unknown_libname_74(&a4); /*0x622d16*/
  v12 = ChildWindowFromPointEx(hWnd, (POINT)__PAIR64__(v24.DeleteAndZero_field_0x08, v11), 1u); /*0x622d24*/
  v13 = v12; /*0x622d2a*/
  if ( v12 ) /*0x622d2e*/
  {
    v14 = (unsigned __int16)v9 | ((unsigned __int16)v10 << 16); /*0x622d43*/
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622d45*/
    v16 = SendMessageA(v12, 0x4E8u, 0, v14); /*0x622d54*/
    UI_Assign((wchar_t **)&v24.DeleteAndZero_field_0x04, hWnd, (LPARAM)v13, v16); /*0x622d5e*/
    WideString::AssignFromPtr( /*0x622d6c*/
      (wchar_t **)&v25.DeleteAndZero_field_0x04,
      (const wchar_t **)&v24.DeleteAndZero_field_0x04);
    DeleteAndZero::Alt((DeleteAndZero *)&v24.DeleteAndZero_field_0x04); /*0x622d75*/
    WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.DeleteAndZero_field_0x04); /*0x622d83*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x04); /*0x622d8c*/
    v17 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x622d9a*/
    if ( !wcscmp(v17, &g_TypeClass_DefaultString) ) /*0x622da0*/
    {
      unknown_libname_74(&v25); /*0x622db4*/
      v24.DeleteAndZero_field_0x04 = (int)v13; /*0x622dbd*/
      v24.DeleteAndZero_field_0x08 = -1; /*0x622dca*/
      SendMessageA(hWnd, 0x4E9u, 0, (LPARAM)&v24.DeleteAndZero_field_0x04); /*0x622dd2*/
      WideString::AssignFromPtr((wchar_t **)&v25.DeleteAndZero_field_0x08, (const wchar_t **)&v25); /*0x622ddd*/
      DeleteAndZero::Alt(&v25); /*0x622de6*/
      WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.DeleteAndZero_field_0x08); /*0x622df4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x08); /*0x622dfd*/
      v18 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x622e0b*/
      if ( !wcscmp(v18, &g_TypeClass_DefaultString) ) /*0x622e11*/
      {
        v19 = DlgSkirmishMenuProc(hWnd, v13); /*0x622e21*/
        if ( v19 ) /*0x622e28*/
        {
          StringCSF = GetStringCSF((wchar_t *)v19, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x622e3d*/
          WideString::Assign((wchar_t **)&v24, StringCSF); /*0x622e3e*/
        }
        else
        {
          WideString::Assign((wchar_t **)&v24, &g_TypeClass_DefaultString); /*0x622e49*/
        }
        WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v24); /*0x622e57*/
        DeleteAndZero::Alt(&v24); /*0x622e60*/
      }
    }
  }
  else
  {
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622e67*/
  }
  v20 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x622e71*/
  v15(v26[0], 0x4B2u, 0, (LPARAM)v20); /*0x622e83*/
  DeleteAndZero::Alt(&a4); /*0x622e89*/
  return 0; /*0x622ba9*/
}



// ==== 0x00623120  Dialog::PumpMessages  this=Dialog  sig=csp ====
int Dialog::PumpMessages()
{
  int result; // eax

  MessageLoop(); /*0x623120*/
  if ( !dword_A8B238[0] || dword_A8B238[0] == 5 || byte_A8D60E || dword_A8DAB4 ) /*0x623143*/
  {
    result = Event::Dispatch(); /*0x62315a*/
  }
  else if ( !VtableStub::55CBF0() ) /*0x623145*/
  {
    result = GameFrameLoop(); /*0x62314e*/
    if ( (_BYTE)result ) /*0x623155*/
    {
      LOBYTE(result) = 1; /*0x623157*/
      return result; /*0x623159*/
    }
  }
  LOBYTE(result) = 0; /*0x62315f*/
  return result; /*0x623159*/
}



// ==== 0x00623170  UI_Connect  this=Dialog  sig=csp ====
BOOL __fastcall sub_623170(HWND hWnd, LONG a2, LONG a3)
{
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-20h] BYREF
  struct tagPOINT Point; // [esp+1Ch] [ebp-10h] BYREF
  struct tagPOINT v10; // [esp+24h] [ebp-8h] BYREF

  v10 = *(struct tagPOINT *)&g_DisplayWidth; /*0x623185*/
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



// ==== 0x00623230  CreateMessageBox  this=Dialog  sig=ida-proto ====
HWND __fastcall MessageBox_Create(LPARAM lParam, LPARAM a2, LONG dwNewLong)
{
  HWND v5; // esi
  HWND DlgItem; // eax
  HWND v7; // edi

  v5 = (HWND)CreateDialog(0xF0u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_6232B0, 0); /*0x623249*/
  if ( v5 ) /*0x62324d*/
  {
    SetWindowLongA(v5, 8, dwNewLong); /*0x623257*/
    DlgItem = GetDlgItem(v5, 1456); /*0x623269*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62327a*/
    if ( a2 ) /*0x62327e*/
    {
      v7 = GetDlgItem(v5, 1472); /*0x623288*/
      SendMessageA(v7, 0x4B2u, 0, a2); /*0x623293*/
      EnableWindow(v7, 1); /*0x623298*/
      ShowWindow(v7, 5); /*0x6232a1*/
    }
  }
  return v5; /*0x6232a9*/
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
        EventBuffer::Enqueue(dword_87F770, 27); /*0x6232f9*/
        *WindowLongA = 1; /*0x6232fe*/
      }
    }
    return 0; /*0x623301*/
  }
  return result; /*0x623303*/
}



// ==== 0x00623310  Network_Start  this=Dialog  sig=csp ====
BOOL __fastcall sub_623310(HWND hWnd, LPARAM lParam)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem(hWnd, 1456); /*0x62331c*/
  SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62332b*/
  return UpdateWindow(hWnd); /*0x623338*/
}



// ==== 0x00623340  DialogControl::Constructor  this=DialogControl  sig=csp ====
_DWORD *__thiscall DialogControl::Constructor(DialogControl *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  memset(this, 0, 0x200u); /*0x62334d*/
  *((_DWORD *)this + 26) = 11; /*0x62334f*/
  *((_DWORD *)this + 25) = g_FogOfWarState; /*0x62335d*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  this->q00F = v3; /*0x623379*/
  this->q004 = 0; /*0x62337c*/
  *((_DWORD *)this + 23) = 0; /*0x62337f*/
  *((_DWORD *)this + 36) = -1; /*0x623382*/
  return this->__pad_0; /*0x62338e*/
}



// ==== 0x006233A0  Dialog::CleanupTree  this=Dialog  sig=csp ====
void __thiscall Dialog::CleanupTree(Dialog *this)
{
  int i; // ecx
  int *v3; // eax
  int *v4; // edx
  DeleteAndZero *Dialog_field_0x3C; // esi

  if ( this->Dialog_field_0x28 ) /*0x6233a3*/
  {
    __3_YAXPAX_Z(this->Dialog_field_0x28); /*0x6233ab*/
    this->Dialog_field_0x28 = 0; /*0x6233b3*/
  }
  for ( i = this->Dialog_field_0x34; i; i = this->Dialog_field_0x34 ) /*0x6233bf*/
  {
    v3 = (int *)i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( (int *)i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (int *)*v3; /*0x6233cf*/
      if ( !v3 ) /*0x6233d3*/
        goto LABEL_12; /*0x6233d3*/
    }
    if ( v4 ) /*0x6233dd*/
      *v4 = *v3; /*0x6233e1*/
    else
      this->Dialog_field_0x34 = *v3; /*0x6233e7*/
    __3_YAXPAX_Z(v3); /*0x6233eb*/
LABEL_12:
    ; /*0x6233f3*/
  }
  Dialog_field_0x3C = (DeleteAndZero *)this->Dialog_field_0x3C; /*0x6233fa*/
  if ( Dialog_field_0x3C ) /*0x6233ff*/
  {
    DeleteAndZero::Alt(Dialog_field_0x3C); /*0x623403*/
    __3_YAXPAX_Z(Dialog_field_0x3C); /*0x623409*/
  }
}



// ==== 0x00623460  LinkedList::Remove  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Remove(LinkedList *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // edx

  result = *((_DWORD *)this + 13); /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( result ) /*0x623468*/
  {
    while ( a2 != (_DWORD *)result ) /*0x623470*/
    {
      v3 = (_DWORD *)result; /*0x623472*/
      result = *(_DWORD *)result; /*0x623474*/
      if ( !result ) /*0x623478*/
        return result; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *(_DWORD *)result; /*0x623489*/
    else
      *((_DWORD *)this + 13) = *(_DWORD *)result; /*0x62349a*/
    __3_YAXPAX_Z((void *)result); /*0x62348b*/
  }
  return result; /*0x62347a*/
}



// ==== 0x006234B0  SymbolTable::Rebuild  this=SymbolTable  sig=csp ====
void __thiscall SymbolTable::Rebuild(SymbolTable *this, int **a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  int **j; // esi
  int v7; // eax
  int v8; // eax

  for ( i = (_DWORD *)*((_DWORD *)this + 13); i; i = (_DWORD *)*((_DWORD *)this + 13) ) /*0x6234b9*/
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
      *((_DWORD *)this + 13) = *v4; /*0x6234e1*/
    __3_YAXPAX_Z(v4); /*0x6234e5*/
LABEL_10:
    ; /*0x6234ed*/
  }
  for ( j = a2; j; j = (int **)*j ) /*0x6234fa*/
  {
    v7 = wcslen((const wchar_t *)j[2]); /*0x623500*/
    v8 = __2_YAPAXI_Z(2 * v7 + 18); /*0x62350a*/
    if ( v8 ) /*0x623514*/
    {
      *(_DWORD *)(v8 + 8) = v8 + 16; /*0x623519*/
      *(_DWORD *)v8 = *((_DWORD *)this + 13); /*0x62351f*/
      *(_DWORD *)(v8 + 4) = 0; /*0x623521*/
      *((_DWORD *)this + 13) = v8; /*0x623528*/
    }
    *(_DWORD *)(v8 + 12) = j[3]; /*0x62352e*/
    *(_DWORD *)(v8 + 4) = j[1]; /*0x623534*/
    wcscpy(*(wchar_t **)(v8 + 8), (const wchar_t *)j[2]); /*0x62353f*/
  }
}



// ==== 0x00623560  GadgetClass::SetTooltip  this=GadgetClass  sig=csp ====
void __thiscall GadgetClass::SetTooltip(GadgetClass *this, wchar_t *String)
{
  int v3; // eax
  wchar_t *v4; // eax

  if ( *((_DWORD *)this + 10) ) /*0x623564*/
  {
    __3_YAXPAX_Z(*((void **)this + 10)); /*0x62356c*/
    *((_DWORD *)this + 10) = 0; /*0x623574*/
  }
  if ( String ) /*0x623581*/
  {
    if ( *String ) /*0x623583*/
    {
      v3 = wcslen(String); /*0x62358a*/
      v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x623594*/
      *((_DWORD *)this + 10) = v4; /*0x62359b*/
      wcscpy(v4, String); /*0x62359e*/
    }
  }
}



// ==== 0x006235B0  ObjectClass::method_6235B0  this=ObjectClass  sig=csp ====
void __thiscall sub_6235B0(ObjectClass *this, wchar_t *Format)
{
  wchar_t *v3; // eax

  if ( this->owningHouseIndex ) /*0x6235b4*/
  {
    __3_YAXPAX_Z((void *)this->owningHouseIndex); /*0x6235bc*/
    this->owningHouseIndex = 0; /*0x6235c4*/
  }
  if ( Format ) /*0x6235d1*/
  {
    if ( *(_BYTE *)Format ) /*0x6235d3*/
    {
      v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2); /*0x6235ea*/
      this->owningHouseIndex = (int)v3; /*0x6235f6*/
      swprintf(v3, (const size_t)g_Str_Trace__hs, Format); /*0x6235f9*/
    }
  }
}



// ==== 0x00623610  DialogClass::CopyTemplateStruct  this=AbstractClass  sig=csp ====
_DWORD *__thiscall DialogClass::CopyTemplateStruct(DialogClass *this, _DWORD *a2)
{
  void *v3; // edx
  void *v4; // eax
  const wchar_t *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  void **v9; // ecx
  int **i; // esi
  void **v11; // eax
  void **v12; // edx
  int v13; // eax
  void **v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = this->field_34; /*0x62361c*/
  v4 = *(void **)&this->__pad_0[40]; /*0x62361f*/
  v15 = *((_DWORD *)this + 15); /*0x623624*/
  if ( this == (DialogClass *)a2 ) /*0x623628*/
    return this->__pad_0; /*0x62362a*/
  qmemcpy(this, a2, 0x200u); /*0x62363d*/
  *(_DWORD *)&this->__pad_0[40] = v4; /*0x623645*/
  *((_DWORD *)this + 15) = v15; /*0x623648*/
  this->field_34 = v3; /*0x62364b*/
  v6 = (const wchar_t *)a2[10]; /*0x62364e*/
  if ( v4 ) /*0x623653*/
  {
    __3_YAXPAX_Z(v4); /*0x623656*/
    *(_DWORD *)&this->__pad_0[40] = 0; /*0x62365e*/
  }
  if ( v6 && *v6 ) /*0x623665*/
  {
    v7 = wcslen(v6); /*0x62366b*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623675*/
    *(_DWORD *)&this->__pad_0[40] = v8; /*0x62367c*/
    wcscpy(v8, v6); /*0x62367f*/
  }
  v9 = (void **)this->field_34; /*0x623687*/
  for ( i = (int **)a2[13]; v9; v9 = (void **)this->field_34 ) /*0x62368f*/
  {
    v11 = v9; /*0x623691*/
    v12 = 0; /*0x623693*/
    while ( v9 != v11 ) /*0x62369b*/
    {
      v12 = v11; /*0x62369d*/
      v11 = (void **)*v11; /*0x62369f*/
      if ( !v11 ) /*0x6236a3*/
        goto LABEL_17; /*0x6236a3*/
    }
    if ( v12 ) /*0x6236ad*/
      *v12 = *v11; /*0x6236b1*/
    else
      this->field_34 = *v11; /*0x6236b7*/
    __3_YAXPAX_Z(v11); /*0x6236bb*/
LABEL_17:
    ; /*0x6236c3*/
  }
  for ( ; i; i = (int **)*i ) /*0x6236cc*/
  {
    v13 = wcslen((const wchar_t *)i[2]); /*0x6236d2*/
    v14 = (void **)__2_YAPAXI_Z(2 * v13 + 18); /*0x6236dc*/
    if ( v14 ) /*0x6236e6*/
    {
      v14[2] = v14 + 4; /*0x6236eb*/
      *v14 = this->field_34; /*0x6236f1*/
      v14[1] = 0; /*0x6236f3*/
      this->field_34 = v14; /*0x6236f6*/
    }
    v14[3] = i[3]; /*0x6236fc*/
    v14[1] = i[1]; /*0x623702*/
    wcscpy((wchar_t *)v14[2], (const wchar_t *)i[2]); /*0x62370d*/
  }
  return this->__pad_0; /*0x62362c*/
}



// ==== 0x00623730  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_623730(ObjectClass *this, _DWORD *a2)
{
  TagClass *attachedTag; // edx
  void *owningHouseIndex; // eax
  int v5; // ebp
  const wchar_t *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  TagClass *v9; // ecx
  int **i; // esi
  TagClass **v11; // eax
  TagClass **v12; // edx
  int v13; // eax
  int v14; // eax

  attachedTag = this->attachedTag; /*0x623741*/
  owningHouseIndex = (void *)this->owningHouseIndex; /*0x623744*/
  v5 = this->ambientSoundController[0]; /*0x623747*/
  qmemcpy(this, a2, 0x200u); /*0x62374a*/
  this->ambientSoundController[0] = v5; /*0x623750*/
  this->owningHouseIndex = (int)owningHouseIndex; /*0x623755*/
  this->attachedTag = attachedTag; /*0x623758*/
  v6 = (const wchar_t *)a2[10]; /*0x62375b*/
  if ( owningHouseIndex ) /*0x623760*/
  {
    __3_YAXPAX_Z(owningHouseIndex); /*0x623763*/
    this->owningHouseIndex = 0; /*0x62376b*/
  }
  if ( v6 && *v6 ) /*0x623772*/
  {
    v7 = wcslen(v6); /*0x623778*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623782*/
    this->owningHouseIndex = (int)v8; /*0x623789*/
    wcscpy(v8, v6); /*0x62378c*/
  }
  v9 = this->attachedTag; /*0x623794*/
  for ( i = (int **)a2[13]; v9; v9 = this->attachedTag ) /*0x62379c*/
  {
    v11 = (TagClass **)v9; /*0x62379e*/
    v12 = 0; /*0x6237a0*/
    while ( v9 != (TagClass *)v11 ) /*0x6237a8*/
    {
      v12 = v11; /*0x6237aa*/
      v11 = (TagClass **)*v11; /*0x6237ac*/
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
    v14 = __2_YAPAXI_Z(2 * v13 + 18); /*0x6237e9*/
    if ( v14 ) /*0x6237f3*/
    {
      *(_DWORD *)(v14 + 8) = v14 + 16; /*0x6237f8*/
      *(_DWORD *)v14 = this->attachedTag; /*0x6237fe*/
      *(_DWORD *)(v14 + 4) = 0; /*0x623800*/
      this->attachedTag = (TagClass *)v14; /*0x623803*/
    }
    *(_DWORD *)(v14 + 12) = i[3]; /*0x623809*/
    *(_DWORD *)(v14 + 4) = i[1]; /*0x62380f*/
    wcscpy(*(wchar_t **)(v14 + 8), (const wchar_t *)i[2]); /*0x62381a*/
  }
  return &this->AbstractClass; /*0x623828*/
}



// ==== 0x00623840  ListBox::Clear  this=ListBox  sig=csp ====
int __thiscall ListBox::Clear(ListBox *this)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)this, 0x146u, 0, 0); /*0x623855*/
  v3 = v2 - 1; /*0x623859*/
  if ( v2 ) /*0x62385c*/
  {
    do /*0x62386e*/
      SendMessageA((HWND)this, 0x144u, v3, 0); /*0x623867*/
    while ( v3-- ); /*0x62386e*/
  }
  return 0; /*0x623870*/
}



// ==== 0x00623880  DrawTextRendererMultiline  this=ObjectClass  sig=csp ====
char __fastcall TextRenderer_DrawMultiline(
        _DWORD *a1,
        int *a2,
        wchar_t *String,
        int a4,
        _DWORD *a5,
        int a6,
        signed int *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  const wchar_t *v11; // edi
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
  unsigned __int16 *v27; // edi
  int v28; // ebp
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  _DWORD *v33; // ebp
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
  signed int v50; // [esp+14h] [ebp-102Ch]
  int v51; // [esp+14h] [ebp-102Ch]
  int v52; // [esp+18h] [ebp-1028h] BYREF
  int v53; // [esp+1Ch] [ebp-1024h]
  int v54; // [esp+20h] [ebp-1020h] BYREF
  int v55; // [esp+24h] [ebp-101Ch]
  int v56; // [esp+28h] [ebp-1018h]
  _DWORD *v57; // [esp+2Ch] [ebp-1014h]
  _DWORD v58[4]; // [esp+30h] [ebp-1010h] BYREF
  wchar_t Destination[2048]; // [esp+40h] [ebp-1000h] BYREF

  v57 = a1; /*0x62388a*/
  v54 = -1; /*0x62388e*/
  v11 = String; /*0x62389a*/
  v12 = 0; /*0x6238a1*/
  v49 = 0; /*0x6238a7*/
  v52 = 0; /*0x6238ab*/
  if ( !String ) /*0x6238af*/
    v11 = &g_TypeClass_DefaultString; /*0x6238b1*/
  v14 = wcslen(v11); /*0x6238b7*/
  v15 = a4; /*0x6238bc*/
  if ( a4 < 0 || a4 > v14 ) /*0x6238cc*/
    v15 = 0; /*0x6238ce*/
  if ( a8 ) /*0x6238d9*/
  {
    ProcessCompositionIME(); /*0x6238db*/
    v49 = dword_B73564; /*0x6238eb*/
    v52 = dword_B7356C; /*0x6238ef*/
    v12 = dword_B73564; /*0x6238f3*/
  }
  Destination[0] = 0; /*0x623900*/
  wcsncpy(Destination, v11, 0x800u); /*0x623907*/
  if ( v12 ) /*0x623911*/
  {
    wcsncpy(&Destination[v15], WideCharStr, 2048 - v15); /*0x623925*/
    wcsncpy(&Destination[v12 + v15], &v11[v15], 2048 - v12 - v15); /*0x623940*/
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
    v56 = v15 + MaxCount; /*0x6239a4*/
    v19 = v15 + MaxCount; /*0x6239a8*/
  }
  else
  {
    v19 = v15; /*0x623994*/
    v56 = v15; /*0x623996*/
  }
  if ( v19 < *a7 + 5 ) /*0x6239b8*/
  {
    if ( v19 < 5 ) /*0x6239bd*/
      *a7 = 0; /*0x6239c6*/
    else
      *a7 = v19 - 5; /*0x6239c2*/
  }
  if ( *a7 < v16 ) /*0x6239ce*/
  {
    do /*0x623a03*/
    {
      v20 = *a7; /*0x6239d0*/
      if ( MessageListClass::CountCharsInWidth(&Destination[*a7], a2[2] - 5, 0, 0) >= v56 - v20 ) /*0x6239f8*/
        break; /*0x6239f8*/
      v21 = v20 + 1; /*0x6239fe*/
      *a7 = v21; /*0x623a01*/
    }
    while ( v21 < v50 ); /*0x623a03*/
    v16 = v50; /*0x623a05*/
  }
  v22 = v15 - *a7; /*0x623a0d*/
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
  v27 = &Destination[*a7]; /*0x623a5d*/
  if ( a10 ) /*0x623a6a*/
  {
    v28 = a2[3] + 2; /*0x623a79*/
    v29 = Text::MeasureWidth((int)v27, 0); /*0x623a7c*/
    v30 = *a2 - 1; /*0x623a89*/
    v31 = a2[1] - 1; /*0x623a8a*/
    v58[2] = v29 + 5; /*0x623a8b*/
    v58[1] = v31; /*0x623a8f*/
    v58[0] = v30; /*0x623a97*/
    v32 = *v57; /*0x623a9f*/
    v58[3] = v28; /*0x623aa4*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v32 + 20))(v57, v58, 0); /*0x623aa8*/
    v24 = v49; /*0x623aab*/
  }
  if ( v51 ) /*0x623ab5*/
  {
    v33 = v57; /*0x623abe*/
    v34 = DrawTextRendererTextAligned(a6, a5, a2, v27, v51, 0, 0, (int)v57, a11); /*0x623ad9*/
    v35 = a2[2] - v34; /*0x623ae5*/
    *a2 += v34; /*0x623ae7*/
    a2[2] = v35; /*0x623ae9*/
    if ( v35 < 0 ) /*0x623aec*/
      a2[2] = 0; /*0x623aee*/
    v24 = v49; /*0x623af9*/
    v27 += v51; /*0x623afd*/
  }
  else
  {
    v33 = v57; /*0x623b02*/
  }
  if ( v24 ) /*0x623b08*/
  {
    v36 = v51 + *a7; /*0x623b14*/
    v37 = v56 - v36; /*0x623b1a*/
    if ( v56 - v36 < 0 || v37 > v24 ) /*0x623b20*/
    {
      v38 = -1; /*0x623b2e*/
    }
    else
    {
      v38 = v24 - v37; /*0x623b24*/
      v24 = v56 - v36; /*0x623b26*/
      v49 = v56 - v36; /*0x623b28*/
    }
    if ( v24 > 0 ) /*0x623b33*/
    {
      v39 = DrawTextRendererTextAligned(dword_AC4618, a5, a2, v27, v24, 0, 0, (int)v33, a11); /*0x623b52*/
      v40 = a2[2] - v39; /*0x623b5e*/
      *a2 += v39; /*0x623b60*/
      a2[2] = v40; /*0x623b62*/
      if ( v40 < 0 ) /*0x623b65*/
        a2[2] = 0; /*0x623b67*/
      v27 += v49; /*0x623b72*/
    }
    if ( v38 >= 0 ) /*0x623b77*/
    {
      v54 = *a2; /*0x623b7b*/
      if ( v38 ) /*0x623b7f*/
      {
        v41 = DrawTextRendererTextAligned(dword_AC4618, a5, a2, v27, v38, 0, 0, (int)v33, a11); /*0x623b9e*/
        v42 = a2[2] - v41; /*0x623baa*/
        *a2 += v41; /*0x623bac*/
        a2[2] = v42; /*0x623bae*/
        if ( v42 < 0 ) /*0x623bb1*/
          a2[2] = 0; /*0x623bb3*/
        v27 += v38; /*0x623bba*/
      }
    }
  }
  else
  {
    v54 = *a2; /*0x623bc1*/
  }
  if ( v52 ) /*0x623bcb*/
  {
    v43 = DrawTextRendererTextAligned(a6, a5, a2, v27, v52, 0, 0, (int)v33, a11); /*0x623beb*/
    v44 = a2[2] - v43; /*0x623bf7*/
    *a2 += v43; /*0x623bf9*/
    a2[2] = v44; /*0x623bfb*/
    if ( v44 < 0 ) /*0x623bfe*/
      a2[2] = 0; /*0x623c00*/
  }
  result = 0; /*0x623c0e*/
  if ( !a8 || (v46 = v54, v54 <= 0) || dword_AC48C8 ) /*0x623c2a*/
  {
    dword_AC48C8 = 0; /*0x623cb7*/
  }
  else
  {
    v47 = a2[3]; /*0x623c33*/
    v53 = a2[1]; /*0x623c36*/
    v55 = v53 + v47 - 2; /*0x623c4d*/
    v52 = v54; /*0x623c5c*/
    DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c60*/
    v48 = a2[3]; /*0x623c68*/
    v53 = a2[1]; /*0x623c6e*/
    v54 = v46 + 1; /*0x623c72*/
    v52 = v46 + 1; /*0x623c76*/
    v55 = v53 + v48 - 2; /*0x623c8d*/
    result = DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c98*/
    dword_AC48C8 = 0; /*0x623c9d*/
  }
  return result; /*0x623ca7*/
}



// ==== 0x00623CD0  CD::CreateDialog  this=CD  sig=csp ====
int __thiscall CD::CreateDialog(CD *this)
{
  HWND Dialog; // eax
  Dialog *v3; // esi
  HWND DlgItem; // eax
  ObjectClass *v6; // [esp+0h] [ebp-Ch]
  LONG dwNewLong; // [esp+8h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x623ce1*/
  Dialog = (HWND)CreateDialog(0x10Du, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_623DA0, 0); /*0x623ce9*/
  v3 = (Dialog *)Dialog; /*0x623cee*/
  if ( Dialog ) /*0x623cf2*/
  {
    DlgItem = GetDlgItem(Dialog, 1456); /*0x623cfe*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this); /*0x623d0d*/
    SetWindowLongA((HWND)v3, 8, (LONG)&dwNewLong); /*0x623d1b*/
    ShowWindow((HWND)v3, 1); /*0x623d24*/
    SetForegroundWindow((HWND)v3); /*0x623d2b*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x623d37*/
    if ( dwNewLong < 0 ) /*0x623d42*/
    {
      do /*0x623d81*/
        MessageLoop(); /*0x623d44*/
      while ( (!*(_DWORD *)&dword_A8B238 /*0x623d81*/
            || *(_DWORD *)&dword_A8B238 == 5
            || BYTE2(stru_A8D600.Network_field_0xC)
            || dword_A8DAB4
            || VtableStub::55CBF0()
            || !(unsigned __int8)GameFrameLoop(v6))
           && dwNewLong < 0 );
    }
    Dialog::Destroy(v3); /*0x623d85*/
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
int __thiscall Memory_Pop(ObjectClass *this)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)this, 0x18Bu, 0, 0); /*0x623e15*/
  v3 = v2 - 1; /*0x623e19*/
  if ( v2 ) /*0x623e1c*/
  {
    do /*0x623e2e*/
      SendMessageA((HWND)this, 0x182u, v3, 0); /*0x623e27*/
    while ( v3-- ); /*0x623e2e*/
  }
  return 0; /*0x623e30*/
}



// ==== 0x00623E40  GetDialogText  this=-  sig=csp ====
LRESULT __fastcall GetDialogText(HWND hWnd, String *a2)
{
  LRESULT v4; // edi
  char *v6; // esi
  LRESULT v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623e54*/
  if ( v4 > 0 ) /*0x623e58*/
  {
    v6 = (char *)__2_YAPAXI_Z(v4 + 2); /*0x623e74*/
    v7 = SendMessageA(hWnd, 0x4B5u, v4 + 1, (LPARAM)v6); /*0x623e87*/
    String::Assign_Alt(a2, v6); /*0x623e8a*/
    __3_YAXPAX_Z(v6); /*0x623e90*/
    return v7; /*0x623e98*/
  }
  else
  {
    DeleteAndZero::Alt2((DeleteAndZero *)a2); /*0x623e5c*/
    return 0; /*0x623e61*/
  }
}



// ==== 0x00623EA0  GetEditControlText  this=-  sig=csp ====
LRESULT __fastcall GetEditControlText(HWND hWnd, WideString *a2)
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
    SafeDelete::Ptr((SafeDelete *)a2); /*0x623ebc*/
    return 0; /*0x623ec1*/
  }
}



// ==== 0x00623F00  GetListBoxItemText  this=ObjectClass  sig=csp ====
int __fastcall GetListBoxItemText(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x18Au, wParam, 0); /*0x623f19*/
  if ( v5 <= 0 ) /*0x623f1d*/
    DeleteAndZero::Alt2(a3); /*0x623f23*/
  v6 = (char *)__2_YAPAXI_Z(v5 + 2); /*0x623f34*/
  v7 = SendMessageA(hWnd, 0x4B7u, wParam, (LPARAM)v6); /*0x623f40*/
  String::Assign_Alt(a3, v6); /*0x623f47*/
  __3_YAXPAX_Z(v6); /*0x623f4d*/
  return v7; /*0x623f57*/
}



// ==== 0x00623F60  UI_Assign_623F60  this=CampaignScore  sig=csp ====
LRESULT __fastcall sub_623F60(HWND hWnd, WPARAM wParam, void **a3)
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
LRESULT __fastcall sub_623FC0(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    DeleteAndZero::Alt2(a3); /*0x623fe3*/
  v6 = (char *)__2_YAPAXI_Z(v5 + 2); /*0x623ff4*/
  v7 = SendMessageA(hWnd, 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  String::Assign_Alt(a3, v6); /*0x624007*/
  __3_YAXPAX_Z(v6); /*0x62400d*/
  return v7; /*0x624017*/
}



// ==== 0x00624020  MainLobbyDlgProcWOL_Assign  this=-  sig=csp ====
LRESULT __fastcall sub_624020(HWND hWnd, WPARAM wParam, void **a3)
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
_DWORD *__thiscall sub_624080(ObjectClass *this)
{
  this->AbstractClass = &OwnerDraw::DialogControl::`vftable'; /*0x624082*/
  return &this->AbstractClass; /*0x624088*/
}



// ==== 0x00624090  DialogControl@OwnerDraw::method  this=DialogControl@OwnerDraw  sig=csp ====
void __thiscall sub_624090(_DWORD *this)
{
  *this = &OwnerDraw::DialogControl::`vftable'; /*0x624090*/
}



// ==== 0x00624110  SimpleDialogControl::Constructor  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall SimpleDialogControl::Constructor(SimpleDialogControl *this)
{
  *((_DWORD *)this + 1) = 0; /*0x624114*/
  *((_BYTE *)this + 8) = 0; /*0x624117*/
  *this = (SimpleDialogControl)&OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
  return this; /*0x624120*/
}



// ==== 0x00624130  OwnerDrawControl::InitVtable  this=DialogControl@OwnerDraw  sig=csp ====
int __thiscall OwnerDrawControl::InitVtable(OwnerDrawControl *this)
{
  int result; // eax

  *this = (OwnerDrawControl)&OwnerDraw::DialogControl::`vftable'; /*0x624130*/
  return result; /*0x624136*/
}



// ==== 0x00624140  FactionSelectDialogControl_WorldDominationTour::FindAndMark  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall HashTable::FindAndMark(FactionSelectDialogControl_WorldDominationTour *this, int a2, int a3)
{
  int result; // eax

  this->m_4 = a3; /*0x62414c*/
  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x62414f*/
  a3 = a2; /*0x624156*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x62415a*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62417d*/
                       + 4
                       * ((*(int (__thiscall **)(int *))&g_DialogPool.__pad_208[80])(&a3)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
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
      LOBYTE(this->m_8) = 1; /*0x6241af*/
    }
    else
    {
LABEL_5:
      LOBYTE(this->m_8) = 1; /*0x624196*/
    }
  }
  else
  {
    LOBYTE(this->m_8) = 1; /*0x6241b7*/
  }
  return result; /*0x624199*/
}



// ==== 0x006241C0  SimpleDialogControl@OwnerDraw::Release  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall ObjectClass::Release(_BYTE *this)
{
  int result; // eax

  LOBYTE(result) = *(this + 8); /*0x6241c0*/
  return result; /*0x6241c3*/
}



// ==== 0x006241D0  SimpleDialogControl@OwnerDraw::GetMember01  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall ObjectClass_GetMember01(_DWORD *this)
{
  return *(this + 1); /*0x6241d3*/
}



// ==== 0x006241E0  SimpleDialogControl_OwnerDraw::StubReturnFalse  this=SimpleDialogControl@OwnerDraw  sig=csp ====
char __thiscall StreamWrapper::StubReturnFalse(SimpleDialogControl_OwnerDraw *this)
{
  return 0; /*0x6241e2*/
}



// ==== 0x006241F0  RunDialog  this=-  sig=csp ====
int __fastcall RunDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3)
{
  HWND Dialog; // eax
  Dialog *v4; // edi
  TechnoTypeClass *v6; // ecx
  ObjectClass *v7; // [esp+0h] [ebp-8h]

  Dialog = (HWND)CreateDialog(a1, a2, a3); /*0x6241f7*/
  v4 = (Dialog *)Dialog; /*0x6241fc*/
  if ( Dialog ) /*0x624200*/
  {
    ShowWindow(Dialog, 1); /*0x624215*/
    SetForegroundWindow((HWND)v4); /*0x62421c*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x624228*/
    if ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x624231*/
    {
      while ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 16))(a3) ) /*0x624241*/
      {
        MessageLoop(); /*0x624243*/
        if ( !*(_DWORD *)&dword_A8B238 /*0x624266*/
          || *(_DWORD *)&dword_A8B238 == 5
          || BYTE2(stru_A8D600.Network_field_0xC)
          || dword_A8DAB4 )
        {
          Event::Dispatch(); /*0x62427c*/
        }
        else if ( !VtableStub::55CBF0() && (unsigned __int8)GameFrameLoop(v7) ) /*0x624271*/
        {
          break; /*0x624278*/
        }
        LOBYTE(v6) = 0; /*0x624281*/
        ScreenSaver::Process(v6, v7); /*0x624283*/
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
char __thiscall sub_6242B0(ObjectClass *this)
{
  int v2; // eax
  HWND v3; // edi
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = (HWND)this; /*0x6242c4*/
  GetClassNameA((HWND)this, ClassName, 128); /*0x6242c8*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x6242df*/
    return 1; /*0x62430a*/
  if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x624325*/
    return 1; /*0x624350*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x6243c1*/
    && *(_DWORD *)&g_DialogPool.__pad_208[60]
    && (v2 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56]
                       + 4
                       * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&hWnd)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)))) != 0 )
  {
    v3 = hWnd; /*0x6243c3*/
    while ( *(HWND *)v2 != hWnd ) /*0x6243c9*/
    {
      v2 = *(_DWORD *)(v2 + 516); /*0x6243cb*/
      if ( !v2 ) /*0x6243d3*/
        return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x6243d3*/
    }
    return *(_DWORD *)(v2 + 108) == 1; /*0x6243e8*/
  }
  else
  {
    v3 = hWnd; /*0x6243f2*/
    return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x624445*/
  }
}



// ==== 0x00624460  Options::ClearComboBoxes  this=Options  sig=csp ====
void __thiscall Options::ClearComboBoxes(Options *this)
{
  DeleteAndZero::Alt((DeleteAndZero *)&this->field_8); /*0x624466*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->field_4); /*0x62446e*/
}



// ==== 0x00624480  DeleteAndZero::OrFree  this=DeleteAndZero  sig=csp ====
void **__thiscall DeleteAndZero::OrFree(DeleteAndZero *this, char a2)
{
  DeleteAndZero::Alt(this); /*0x624483*/
  if ( (a2 & 1) != 0 ) /*0x62448d*/
    __3_YAXPAX_Z(this); /*0x624490*/
  return (void **)this; /*0x62449a*/
}



// ==== 0x006244A0  DialogControl_OwnerDraw::Destructor  this=DialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor(
        DialogControl_OwnerDraw *this,
        char a2)
{
  *(_DWORD *)this = &OwnerDraw::DialogControl::`vftable'; /*0x6244a9*/
  if ( (a2 & 1) != 0 ) /*0x6244af*/
    __3_YAXPAX_Z(this); /*0x6244b2*/
  return this; /*0x6244bc*/
}



// ==== 0x006244C0  SimpleDialogControl_OwnerDraw::Destructor_0  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(
        SimpleDialogControl_OwnerDraw *this,
        char a2)
{
  *(_DWORD *)this = &OwnerDraw::DialogControl::`vftable'; /*0x6244c9*/
  if ( (a2 & 1) != 0 ) /*0x6244cf*/
    __3_YAXPAX_Z(this); /*0x6244d2*/
  return this; /*0x6244dc*/
}



// ==== 0x006244E0  Options::DeleteAndZero  this=Options  sig=csp ====
int __thiscall Options::DeleteAndZero(Options *this)
{
  int v2; // ebx
  int v3; // ebp
  char *v4; // esi
  int result; // eax

  v2 = 0; /*0x6244e4*/
  if ( *(int *)this->__pad_0 <= 0 ) /*0x6244e9*/
  {
    *(_DWORD *)this->__pad_0 = 0; /*0x62451b*/
  }
  else
  {
    v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      v4 = (char *)this->field_8 + v3; /*0x6244f4*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 4)); /*0x624501*/
      result = *(_DWORD *)this->__pad_0; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *(_DWORD *)this->__pad_0 ); /*0x62450e*/
    *(_DWORD *)this->__pad_0 = 0; /*0x624511*/
  }
  return result; /*0x624518*/
}



// ==== 0x00624530  SymbolTable::Insert  this=SymbolTable  sig=csp ====
char __thiscall SymbolTable::Insert(SymbolTable *this, _DWORD *a2, int ***Block)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  SymbolTable *v8; // ebp
  void *v9; // edx
  const wchar_t *v10; // esi
  int v11; // eax
  wchar_t *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  double v16; // st7
  int v17; // ecx
  void *v18; // edi
  unsigned int v19; // edx
  int ***v20; // edi
  int v21; // ebp
  int **v22; // esi
  int v23; // edx
  int *v24; // ecx
  int **v25; // eax
  _DWORD *v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int ***Blocka; // [esp+28h] [ebp+8h]

  v4 = (_DWORD *)__2_YAPAXI_Z(0x208u); /*0x624543*/
  if ( v4 ) /*0x62454a*/
  {
    memset(v4 + 1, 0, 0x200u); /*0x624558*/
    v4[27] = 11; /*0x62455a*/
    v4[26] = g_FogOfWarState; /*0x624568*/
    v5 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x62456b*/
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
  v8 = (SymbolTable *)(v7 + 1); /*0x6245b3*/
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
      *(_DWORD *)v8[5].__pad_0 = 0; /*0x6245fd*/
    }
    if ( v10 && *v10 ) /*0x624608*/
    {
      v11 = wcslen(v10); /*0x62460f*/
      v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x624619*/
      *(_DWORD *)v8[5].__pad_0 = v12; /*0x624620*/
      wcscpy(v12, v10); /*0x624623*/
    }
    SymbolTable::Rebuild(v8, Block[13]); /*0x624635*/
    v7 = v27; /*0x62463a*/
  }
  v7[129] = 0; /*0x624642*/
  v13 = (*((int (__thiscall **)(_DWORD *))this + 6))(a2) & ((1 << *((_DWORD *)this + 3)) - 1); /*0x62465c*/
  v14 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v13); /*0x62465e*/
  *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v13) = v27; /*0x62466c*/
  if ( v14 ) /*0x624666*/
    v27[129] = v14; /*0x624676*/
  v15 = *((_DWORD *)this + 2); /*0x62467f*/
  v16 = (double)(unsigned int)++this->SymbolTable_field_0x04; /*0x62468d*/
  if ( v16 / (double)v15 >= *((double *)this + 5) && *((_BYTE *)this + 20) != 1 ) /*0x6246b2*/
  {
    Blocka = *(int ****)this->__pad_0; /*0x6246bd*/
    v17 = *((_DWORD *)this + 3) + 1; /*0x6246cb*/
    *((_DWORD *)this + 2) = 2 * v15; /*0x6246cd*/
    *((_DWORD *)this + 3) = v17; /*0x6246d0*/
    v18 = (void *)__2_YAPAXI_Z(8 * v15); /*0x6246db*/
    v19 = 4 * *((_DWORD *)this + 2); /*0x6246e0*/
    *(_DWORD *)this->__pad_0 = v18; /*0x6246e7*/
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
            v23 = (*((int (__thiscall **)(int **))this + 6))(v22) & ((1 << *((_DWORD *)this + 3)) - 1); /*0x624715*/
            v24 = *(int **)(*(_DWORD *)this->__pad_0 + 4 * v23); /*0x624719*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v23) = v22; /*0x62471f*/
            v25 = (int **)v22[129]; /*0x624721*/
            v22[129] = v24; /*0x624727*/
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
int __thiscall HashTable::Get(HashTable *this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = this->HashTable_field_0x04; /*0x624764*/
  if ( result ) /*0x624769*/
  {
    result = *(_DWORD *)(*(_DWORD *)this->__pad_0 /*0x62478a*/
                       + 4
                       * (((int (__thiscall *)(_DWORD *))this->HashTable_field_0x18)(a2)
                        & ((1 << this->HashTable_field_0x0C) - 1)));
    if ( result ) /*0x62478f*/
    {
      while ( *(_DWORD *)result != *a2 ) /*0x62479c*/
      {
        result = *(_DWORD *)(result + 516); /*0x62479e*/
        if ( !result ) /*0x6247a6*/
        {
          LOBYTE(result) = 0; /*0x6247a9*/
          return result; /*0x6247ac*/
        }
      }
      result += 4; /*0x6247be*/
      *a3 = result; /*0x6247c3*/
      LOBYTE(result) = 1; /*0x6247c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x624792*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x62476c*/
  }
  return result; /*0x62476b*/
}



// ==== 0x006247D0  Struct::WideStringCopy  this=Struct  sig=csp ====
wchar_t **__thiscall Struct::WideStringCopy(Struct *this, int a2)
{
  this->Struct_field_00 = *(int *)a2; /*0x6247e1*/
  WideString::AssignFromPtr((wchar_t **)this + 1, (const wchar_t **)(a2 + 4)); /*0x6247e3*/
  WideString::AssignFromPtr((wchar_t **)this + 2, (const wchar_t **)(a2 + 8)); /*0x6247ef*/
  *(this + 3) = *(Struct *)(a2 + 12); /*0x6247f7*/
  *(this + 4) = *(Struct *)(a2 + 16); /*0x6247fd*/
  *(this + 5) = *(Struct *)(a2 + 20); /*0x624803*/
  return (wchar_t **)this; /*0x624808*/
}



// ==== 0x00624810  DynamicVector::GrowCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::GrowCapacity(DynamicVector *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *DynamicVector_field_0x8; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x624814*/
  if ( *(_DWORD *)this->__pad_0 < *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)__2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  DynamicVector_field_0x8 = (const void *)this->DynamicVector_field_0x8; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    qmemcpy(v5, DynamicVector_field_0x8, 24 * *(_DWORD *)this->__pad_0); /*0x624870*/
  __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x62487d*/
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x624889*/
  this->DynamicVector_field_0x8 = v7; /*0x62488c*/
  return 1; /*0x62481f*/
}



// ==== 0x006248A0  Options::EnsureCapacity  this=Options  sig=csp ====
char __thiscall Options::EnsureCapacity(Options *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6248a5*/
  v3 = (int)this->field_4; /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  v6 = (void *)__2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  v7 = this->field_8; /*0x6248e2*/
  v8 = v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *(_DWORD *)this->__pad_0); /*0x624901*/
  __3_YAXPAX_Z(this->field_8); /*0x62490f*/
  this->field_8 = v8; /*0x62491b*/
  this->field_4 = (void *)v5; /*0x62491e*/
  return 1; /*0x6248b2*/
}



// ==== 0x00624930  Dialog::UpdateControlState  this=Dialog  sig=csp ====
char __thiscall Dialog::UpdateControlState(Dialog *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax

  if ( !*(_DWORD *)&this->__pad_0[4] ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(_DWORD **)(*(_DWORD *)this->__pad_0 /*0x62495a*/
                  + 4
                  * ((*(int (__thiscall **)(_DWORD *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1)));
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
char __thiscall DynamicArray::Resize(DynamicArray *this, int *a2, _DWORD *a3)
{
  int DynamicArray_field_0x04; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ebp
  bool v10; // c0
  bool v11; // c3
  unsigned int DynamicArray_field_0x08; // ebp
  int DynamicArray_field_0x0C; // edi
  int *v14; // ebx
  void *v15; // edi
  unsigned int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // ebp
  int v23; // edi
  int *v24; // ebx
  void *v25; // edi
  unsigned int v26; // edx
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // [esp-4h] [ebp-1Ch]
  float v32; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int *v34; // [esp+20h] [ebp+8h]
  int *v35; // [esp+20h] [ebp+8h]

  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x6249ab*/
  if ( !DynamicArray_field_0x04 ) /*0x6249b0*/
    return 0; /*0x6249b5*/
  v32 = (double)(unsigned int)(DynamicArray_field_0x04 - 1) / (double)this->DynamicArray_field_0x08; /*0x6249e0*/
  v6 = (*((int (__thiscall **)(int *))this + 6))(a2) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x6249f4*/
  v7 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x6249f6*/
  if ( !v7 ) /*0x6249fb*/
    return 0; /*0x624a00*/
  v8 = *a2; /*0x624a09*/
  if ( *v7 == *a2 ) /*0x624a10*/
  {
    *a3 = v7[1]; /*0x624a1d*/
    v31 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624a24*/
    v9 = v31[2]; /*0x624a25*/
    __3_YAXPAX_Z(v31); /*0x624a28*/
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6) = v9; /*0x624a36*/
    v10 = v32 < *((double *)this + 4); /*0x624a3c*/
    v11 = v32 == *((double *)this + 4); /*0x624a3c*/
    --this->DynamicArray_field_0x04; /*0x624a40*/
    if ( v10 || v11 ) /*0x624a45*/
    {
      DynamicArray_field_0x08 = this->DynamicArray_field_0x08; /*0x624a4e*/
      if ( DynamicArray_field_0x08 > this->q00C && *((_BYTE *)this + 20) != 1 ) /*0x624a60*/
      {
        DynamicArray_field_0x0C = this->DynamicArray_field_0x0C; /*0x624a62*/
        v14 = *(int **)this->__pad_0; /*0x624a65*/
        v34 = *(int **)this->__pad_0; /*0x624a69*/
        this->DynamicArray_field_0x08 = DynamicArray_field_0x08 >> 1; /*0x624a6f*/
        this->DynamicArray_field_0x0C = DynamicArray_field_0x0C - 1; /*0x624a77*/
        v15 = (void *)__2_YAPAXI_Z(4 * (DynamicArray_field_0x08 >> 1)); /*0x624a82*/
        v16 = 4 * this->DynamicArray_field_0x08; /*0x624a87*/
        *(_DWORD *)this->__pad_0 = v15; /*0x624a8e*/
        memset(v15, 0, v16); /*0x624a93*/
        if ( (int)DynamicArray_field_0x08 > 0 ) /*0x624a9e*/
        {
          do /*0x624ad2*/
          {
            v17 = *v14; /*0x624aa0*/
            if ( *v14 ) /*0x624aa0*/
            {
              do /*0x624acc*/
              {
                v18 = (*((int (__thiscall **)(int))this + 6))(v17) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ab6*/
                v19 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v18); /*0x624aba*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v18) = v17; /*0x624ac0*/
                v20 = *(_DWORD *)(v17 + 8); /*0x624ac2*/
                *(_DWORD *)(v17 + 8) = v19; /*0x624ac5*/
                v17 = v20; /*0x624ac8*/
              }
              while ( v20 ); /*0x624acc*/
            }
            ++v14; /*0x624ace*/
            --DynamicArray_field_0x08; /*0x624ad1*/
          }
          while ( DynamicArray_field_0x08 ); /*0x624ad2*/
          v14 = v34; /*0x624ad4*/
        }
        __3_YAXPAX_Z(v14); /*0x624ad9*/
      }
    }
    return 1; /*0x624ae4*/
  }
  else
  {
    v21 = (_DWORD *)v7[2]; /*0x624aed*/
    v33 = 0; /*0x624af0*/
    if ( v21 ) /*0x624af7*/
    {
      while ( *v21 != v8 ) /*0x624afb*/
      {
        v7 = v21; /*0x624afd*/
        v21 = (_DWORD *)v21[2]; /*0x624aff*/
        if ( !v21 ) /*0x624b04*/
          goto LABEL_21; /*0x624b04*/
      }
      *a3 = v21[1]; /*0x624b10*/
      v7[2] = v21[2]; /*0x624b15*/
      --this->DynamicArray_field_0x04; /*0x624b1c*/
      __3_YAXPAX_Z(v21); /*0x624b1f*/
      v33 = 1; /*0x624b27*/
    }
LABEL_21:
    if ( v32 <= *((double *)this + 4) ) /*0x624b38*/
    {
      v22 = this->DynamicArray_field_0x08; /*0x624b3e*/
      if ( v22 > this->q00C && *((_BYTE *)this + 20) != 1 ) /*0x624b50*/
      {
        v23 = this->DynamicArray_field_0x0C; /*0x624b52*/
        v24 = *(int **)this->__pad_0; /*0x624b55*/
        v35 = *(int **)this->__pad_0; /*0x624b59*/
        this->DynamicArray_field_0x08 = v22 >> 1; /*0x624b5f*/
        this->DynamicArray_field_0x0C = v23 - 1; /*0x624b67*/
        v25 = (void *)__2_YAPAXI_Z(4 * (v22 >> 1)); /*0x624b72*/
        v26 = 4 * this->DynamicArray_field_0x08; /*0x624b77*/
        *(_DWORD *)this->__pad_0 = v25; /*0x624b7e*/
        memset(v25, 0, v26); /*0x624b83*/
        if ( (int)v22 > 0 ) /*0x624b8e*/
        {
          do /*0x624bc2*/
          {
            v27 = *v24; /*0x624b90*/
            if ( *v24 ) /*0x624b90*/
            {
              do /*0x624bbc*/
              {
                v28 = (*((int (__thiscall **)(int))this + 6))(v27) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ba6*/
                v29 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v28); /*0x624baa*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v28) = v27; /*0x624bb0*/
                v30 = *(_DWORD *)(v27 + 8); /*0x624bb2*/
                *(_DWORD *)(v27 + 8) = v29; /*0x624bb5*/
                v27 = v30; /*0x624bb8*/
              }
              while ( v30 ); /*0x624bbc*/
            }
            ++v24; /*0x624bbe*/
            --v22; /*0x624bc1*/
          }
          while ( v22 ); /*0x624bc2*/
          v24 = v35; /*0x624bc4*/
        }
        __3_YAXPAX_Z(v24); /*0x624bc9*/
      }
    }
    return v33; /*0x624bd1*/
  }
}



// ==== 0x00624BE0  Dialog::GrowBuffer  this=Dialog  sig=csp ====
void __thiscall Dialog::GrowBuffer(Dialog *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  AnimClass *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->__pad_10[4] != 1 ) /*0x624be8*/
  {
    v2 = this->Dialog_field_0x8[0]; /*0x624bf0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x624bf3*/
    v4 = (AnimClass *)((char *)&this->Dialog_field_0xC->AnimClass_field_0x0 + 1); /*0x624bfc*/
    this->Dialog_field_0x8[0] = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    this->Dialog_field_0xC = v4; /*0x624c08*/
    v5 = (void *)__2_YAPAXI_Z(8 * v2); /*0x624c13*/
    v6 = 4 * this->Dialog_field_0x8[0]; /*0x624c18*/
    *(_DWORD *)this->__pad_0 = v5; /*0x624c1f*/
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
            v10 = (*(int (__thiscall **)(int))&this->__pad_10[8])(v9) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624c4b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x624c4f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x624c55*/
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
int __thiscall HashMap::ComputeIndex(int *this, int a2)
{
  return ((int (__thiscall *)(int))*(this + 6))(a2) & ((1 << this->q00C) - 1); /*0x624c94*/
}



// ==== 0x00624CA0  Dialog::BindGadgetData  this=Dialog  sig=csp ====
char __thiscall Dialog::BindGadgetData(Dialog *this, int *a2, char *Block)
{
  int v4; // eax
  int v6; // edx
  int *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  const wchar_t *v12; // esi
  int v13; // eax
  wchar_t *v14; // eax
  int v15; // edi
  int v16; // ebx
  _DWORD *i; // eax
  DeleteAndZero *v18; // esi
  bool v19; // c0
  bool v20; // c3
  unsigned int v21; // esi
  char *v22; // ebx
  AnimClass *v23; // ecx
  void *v24; // edi
  unsigned int v25; // edx
  char *v26; // edi
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int *v32; // esi
  char v33; // bl
  int v35; // edx
  int *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+18h] [ebp-Ch]
  int v40; // [esp+1Ch] [ebp-8h]
  int v41; // [esp+1Ch] [ebp-8h]
  int *v42; // [esp+28h] [ebp+4h]
  int *v43; // [esp+28h] [ebp+4h]
  char *Blocka; // [esp+2Ch] [ebp+8h]
  char *Blockb; // [esp+2Ch] [ebp+8h]
  char *Blockc; // [esp+2Ch] [ebp+8h]

  v4 = *(_DWORD *)&this->__pad_0[4]; /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  v39 = (double)(unsigned int)(v4 - 1) / (double)this->Dialog_field_0x8[0]; /*0x624ce0*/
  v6 = (*(int (__thiscall **)(int *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(int **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = *a2; /*0x624d12*/
  if ( *v7 == *a2 ) /*0x624d18*/
  {
    v10 = (int ***)(v7 + 1); /*0x624d22*/
    v11 = Block == (char *)(v7 + 1); /*0x624d25*/
    v42 = v7 + 1; /*0x624d27*/
    v40 = *((_DWORD *)Block + 13); /*0x624d2e*/
    Blocka = (char *)*((_DWORD *)Block + 10); /*0x624d35*/
    v37 = *((_DWORD *)Block + 15); /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(Block, v10, 0x200u); /*0x624d4f*/
      *((_DWORD *)Block + 15) = v37; /*0x624d55*/
      *((_DWORD *)Block + 10) = Blocka; /*0x624d5c*/
      *((_DWORD *)Block + 13) = v40; /*0x624d5f*/
      v12 = (const wchar_t *)v7[11]; /*0x624d62*/
      if ( Blocka ) /*0x624d67*/
      {
        __3_YAXPAX_Z(Blocka); /*0x624d6a*/
        v10 = (int ***)v42; /*0x624d6f*/
        *((_DWORD *)Block + 10) = 0; /*0x624d76*/
      }
      if ( v12 && *v12 ) /*0x624d81*/
      {
        v13 = wcslen(v12); /*0x624d88*/
        v14 = (wchar_t *)__2_YAPAXI_Z(2 * v13 + 2); /*0x624d92*/
        *((_DWORD *)Block + 10) = v14; /*0x624d99*/
        wcscpy(v14, v12); /*0x624d9c*/
        v10 = (int ***)v42; /*0x624da1*/
      }
      SymbolTable::Rebuild((SymbolTable *)Block, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624dba*/
    v16 = *(_DWORD *)(v15 + 516); /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((GadgetClass *)(v15 + 4), 0); /*0x624dce*/
      for ( i = *(_DWORD **)(v15 + 56); i; i = *(_DWORD **)(v15 + 56) ) /*0x624dd8*/
        LinkedList::Remove((LinkedList *)(v15 + 4), i); /*0x624ddd*/
      v18 = *(DeleteAndZero **)(v15 + 64); /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      __3_YAXPAX_Z((void *)v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6) = v16; /*0x624e0d*/
    v19 = v39 < *(double *)&this->__pad_10[16]; /*0x624e13*/
    v20 = v39 == *(double *)&this->__pad_10[16]; /*0x624e13*/
    --*(_DWORD *)&this->__pad_0[4]; /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = this->Dialog_field_0x8[0]; /*0x624e25*/
      if ( v21 > *(_DWORD *)&this->__pad_2C[4] && this->__pad_10[4] != 1 ) /*0x624e37*/
      {
        v22 = *(char **)this->__pad_0; /*0x624e40*/
        Blockb = *(char **)this->__pad_0; /*0x624e45*/
        v23 = (AnimClass *)((char *)this->Dialog_field_0xC - 1); /*0x624e4b*/
        this->Dialog_field_0x8[0] = v21 >> 1; /*0x624e4c*/
        this->Dialog_field_0xC = v23; /*0x624e56*/
        v24 = (void *)__2_YAPAXI_Z(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * this->Dialog_field_0x8[0]; /*0x624e67*/
        *(_DWORD *)this->__pad_0 = v24; /*0x624e6e*/
        memset(v24, 0, v25); /*0x624e74*/
        if ( (int)v21 > 0 ) /*0x624e7f*/
        {
          v26 = v22; /*0x624e81*/
          v27 = v21; /*0x624e83*/
          do /*0x624ebe*/
          {
            v28 = *(_DWORD *)v26; /*0x624e85*/
            if ( *(_DWORD *)v26 ) /*0x624e85*/
            {
              do /*0x624eb8*/
              {
                v29 = (*(int (__thiscall **)(int))&this->__pad_10[8])(v28) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624e9b*/
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x624ea0*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(_DWORD *)(v28 + 516); /*0x624ea8*/
                *(_DWORD *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            v26 += 4; /*0x624eba*/
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
    v32 = (int *)v7[129]; /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    v43 = v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( *v32 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        v43 = (int *)v32[129]; /*0x624f07*/
        if ( !v43 ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = (int *)v32[129]; /*0x624ef3*/
      }
      v11 = Block == (char *)(v32 + 1); /*0x624f19*/
      v35 = *((_DWORD *)Block + 13); /*0x624f1e*/
      Blockc = (char *)*((_DWORD *)Block + 10); /*0x624f21*/
      v41 = *((_DWORD *)Block + 15); /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(Block, v32 + 1, 0x200u); /*0x624f37*/
        *((_DWORD *)Block + 13) = v35; /*0x624f3d*/
        *((_DWORD *)Block + 10) = Blockc; /*0x624f40*/
        *((_DWORD *)Block + 15) = v41; /*0x624f47*/
        GadgetClass::SetTooltip((GadgetClass *)Block, (wchar_t *)v32[11]); /*0x624f50*/
        SymbolTable::Rebuild((SymbolTable *)Block, (int **)v43[14]); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = v43; /*0x624f6b*/
      }
      v7[129] = v32[129]; /*0x624f75*/
      --*(_DWORD *)&this->__pad_0[4]; /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((Dialog *)(v32 + 1)); /*0x624f89*/
        __3_YAXPAX_Z(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( v39 <= *(double *)&this->__pad_10[16] ) /*0x624fa5*/
      HashTable::Rebuild2((HashTable *)this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }
}



// ==== 0x00624FC0  HashTable::Grow2  this=HashTable  sig=csp ====
void __thiscall HashTable::Grow2(HashTable *this)
{
  int HashTable_field_0x08; // esi
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

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x624fc8*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x624fd0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x624fd3*/
    v4 = this->HashTable_field_0x0C + 1; /*0x624fdc*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x624fdd*/
    v13 = v3; /*0x624fe0*/
    this->HashTable_field_0x0C = v4; /*0x624fe8*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x624ff3*/
    v6 = 4 * this->HashTable_field_0x08; /*0x624ff8*/
    *(_DWORD *)this->__pad_0 = v5; /*0x624fff*/
    memset(v5, 0, v6); /*0x625004*/
    if ( HashTable_field_0x08 > 0 ) /*0x62500f*/
    {
      v7 = v3; /*0x625011*/
      v8 = HashTable_field_0x08; /*0x625013*/
      do /*0x62504d*/
      {
        v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
          do /*0x625047*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x62502b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62502f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625035*/
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
int __thiscall HashTable::ComputeHash(int *this, int a2)
{
  return ((int (__thiscall *)(int))this->q018)(a2) & ((1 << this->q00C) - 1); /*0x625084*/
}



// ==== 0x00625090  HashTable::RemoveAndResize  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveAndResize(HashTable *this, _DWORD *a2, _BYTE *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // edi
  _BYTE *v8; // ecx
  int v9; // edx
  int v10; // ebp
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int *v14; // ebx
  int v15; // ecx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // eax
  unsigned int v23; // ebp
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x62509b*/
  if ( !HashTable_field_0x04 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  v33 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6250d0*/
  v7 = ((int (__thiscall *)(_DWORD *))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6250e4*/
  v8 = *(_BYTE **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  v9 = a2[1]; /*0x6250f9*/
  if ( v9 == *((_DWORD *)v8 + 1) && *a2 == *(_DWORD *)v8 ) /*0x62510e*/
  {
    *a3 = v8[8]; /*0x62511b*/
    v32 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x625122*/
    v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x625134*/
    v11 = v33 < *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    v12 = v33 == *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    --this->HashTable_field_0x04; /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x62514c*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x62515e*/
      {
        v14 = *(int **)this->__pad_0; /*0x625167*/
        v35 = *(int **)this->__pad_0; /*0x62516b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x625171*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x625172*/
        this->HashTable_field_0x0C = v15; /*0x62517c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x625188*/
        v17 = 4 * this->HashTable_field_0x08; /*0x62518d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
              do /*0x6251d2*/
              {
                v19 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v18) /*0x6251bc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19); /*0x6251c0*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19) = v18; /*0x6251c6*/
                v21 = *(_DWORD *)(v18 + 12); /*0x6251c8*/
                *(_DWORD *)(v18 + 12) = v20; /*0x6251cb*/
                v18 = v21; /*0x6251ce*/
              }
              while ( v21 ); /*0x6251d2*/
            }
            ++v14; /*0x6251d4*/
            --HashTable_field_0x08; /*0x6251d7*/
          }
          while ( HashTable_field_0x08 ); /*0x6251d8*/
          v14 = v35; /*0x6251da*/
        }
        __3_YAXPAX_Z(v14); /*0x6251df*/
      }
    }
    return 1; /*0x6251ea*/
  }
  else
  {
    v22 = (_BYTE *)*((_DWORD *)v8 + 3); /*0x6251f3*/
    v34 = 0; /*0x6251f6*/
    if ( v22 ) /*0x6251fd*/
    {
      while ( v9 != *((_DWORD *)v22 + 1) || *a2 != *(_DWORD *)v22 ) /*0x62520b*/
      {
        v8 = v22; /*0x62520d*/
        v22 = (_BYTE *)*((_DWORD *)v22 + 3); /*0x62520f*/
        if ( !v22 ) /*0x625214*/
          goto LABEL_23; /*0x625214*/
      }
      *a3 = v22[8]; /*0x625220*/
      *((_DWORD *)v8 + 3) = *((_DWORD *)v22 + 3); /*0x625225*/
      --this->HashTable_field_0x04; /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= *(double *)&this->HashTable_field_0x20 ) /*0x625248*/
    {
      v23 = this->HashTable_field_0x08; /*0x62524e*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625260*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x625262*/
        v25 = *(int **)this->__pad_0; /*0x625265*/
        v36 = *(int **)this->__pad_0; /*0x625269*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x62526f*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x625277*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * this->HashTable_field_0x08; /*0x625287*/
        *(_DWORD *)this->__pad_0 = v26; /*0x62528e*/
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
                v29 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v28) /*0x6252b6*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x6252ba*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x6252c0*/
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
void __thiscall ComboBoxOwnerDraw::SortItems(ComboBoxOwnerDraw *this)
{
  int ComboBoxOwnerDraw_field_0x08; // esi
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

  if ( LOBYTE(this->ComboBoxOwnerDraw_field_0x14) != 1 ) /*0x6252f8*/
  {
    ComboBoxOwnerDraw_field_0x08 = this->ComboBoxOwnerDraw_field_0x08; /*0x625300*/
    v3 = *(_DWORD **)this->__pad_0; /*0x625303*/
    v4 = this->ComboBoxOwnerDraw_field_0x0C + 1; /*0x62530c*/
    this->ComboBoxOwnerDraw_field_0x08 = 2 * ComboBoxOwnerDraw_field_0x08; /*0x62530d*/
    v13 = v3; /*0x625310*/
    this->ComboBoxOwnerDraw_field_0x0C = v4; /*0x625318*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComboBoxOwnerDraw_field_0x08); /*0x625323*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625328*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62532f*/
    memset(v5, 0, v6); /*0x625334*/
    if ( ComboBoxOwnerDraw_field_0x08 > 0 ) /*0x62533f*/
    {
      v7 = v3; /*0x625341*/
      v8 = ComboBoxOwnerDraw_field_0x08; /*0x625343*/
      do /*0x625377*/
      {
        v9 = *v7; /*0x625345*/
        if ( *v7 ) /*0x625345*/
        {
          do /*0x625371*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) /*0x62535b*/
                & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62535f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625365*/
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



// ==== 0x006253B0  Options::GrowBuffer  this=Dialog  sig=csp ====
char __thiscall Options::GrowBuffer(Options *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6253b4*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->field_4 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  v4 = 2 * v2; /*0x6253c4*/
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->field_8 ) /*0x625403*/
  {
    qmemcpy(v5, this->field_8, 4 * *(_DWORD *)this->__pad_0); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z(this->field_8); /*0x625429*/
  this->field_4 = (void *)v4; /*0x625431*/
  this->field_8 = v5; /*0x625434*/
  return 1; /*0x6253bf*/
}



// ==== 0x00625440  DynamicArray::ShrinkCapacity  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::ShrinkCapacity(DynamicArray *this)
{
  int v2; // eax
  int DynamicArray_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *DynamicArray_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625445*/
  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x625448*/
  if ( 3 * v2 > DynamicArray_field_0x04 ) /*0x625450*/
    return 0; /*0x625453*/
  v5 = DynamicArray_field_0x04 / 2; /*0x62545f*/
  if ( DynamicArray_field_0x04 / 2 < 10 ) /*0x625464*/
    v5 = 10; /*0x625466*/
  if ( v5 >= DynamicArray_field_0x04 ) /*0x62546d*/
    return 0; /*0x625470*/
  v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x62547e*/
  DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x625483*/
  v8 = (int)v6; /*0x62548b*/
  if ( DynamicArray_field_0x08 ) /*0x62548f*/
    qmemcpy(v6, DynamicArray_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x62549f*/
  __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x6254ad*/
  this->DynamicArray_field_0x08 = v8; /*0x6254b9*/
  this->DynamicArray_field_0x04 = v5; /*0x6254bc*/
  return 1; /*0x625452*/
}



// ==== 0x006254D0  Options::ReadOptionValue  this=Options  sig=csp ====
char __thiscall Options::ReadOptionValue(Options *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6254d5*/
  v3 = (int)this->field_4; /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  v6 = (void *)__2_YAPAXI_Z(20 * v5); /*0x62550d*/
  v7 = this->field_8; /*0x625512*/
  v8 = v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *(_DWORD *)this->__pad_0); /*0x625531*/
  __3_YAXPAX_Z(this->field_8); /*0x62553f*/
  this->field_8 = v8; /*0x62554b*/
  this->field_4 = (void *)v5; /*0x62554e*/
  return 1; /*0x6254e2*/
}



// ==== 0x00625560  Options::DestroyComposite  this=Options  sig=csp ====
void *__thiscall Options::DestroyComposite(Options *this, char a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  void *v6; // esi

  if ( *(_DWORD *)&this->__pad_14[24] ) /*0x625563*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_14[24]); /*0x62556b*/
    *(_DWORD *)&this->__pad_14[24] = 0; /*0x625573*/
  }
  for ( i = *(_DWORD **)&this->__pad_34[4]; i; i = *(_DWORD **)&this->__pad_34[4] ) /*0x62557f*/
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
      *(_DWORD *)&this->__pad_34[4] = *v4; /*0x6255a7*/
    __3_YAXPAX_Z(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = *(void **)&this->__pad_34[12]; /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*(DeleteAndZero **)&this->__pad_34[12]); /*0x6255c4*/
    __3_YAXPAX_Z(v6); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    __3_YAXPAX_Z(this); /*0x6255dc*/
  return this; /*0x6255e6*/
}



// ==== 0x006255F0  Options::RebuildDropdownList  this=Options  sig=csp ====
int *__thiscall Options::RebuildDropdownList(Options *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  int *v3; // edi
  int v4; // ebx
  void **v5; // esi
  int v6; // eax
  int v7; // ebp
  char *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // edi
  Struct *v14; // ecx
  int v16; // [esp+10h] [ebp-20h]
  int v18; // [esp+18h] [ebp-18h] BYREF
  DeleteAndZero v19; // [esp+1Ch] [ebp-14h] BYREF
  int v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]

  v2 = a2; /*0x6255f5*/
  v3 = (int *)this; /*0x6255fb*/
  v4 = 0; /*0x625600*/
  *(_DWORD *)this->__pad_0 = *a2; /*0x625602*/
  v5 = &this->field_8; /*0x625607*/
  this->field_4 = (void *)a2[1]; /*0x62560a*/
  this->field_8 = 0; /*0x625615*/
  this->field_C = 0; /*0x625617*/
  this->field_10 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v19.DeleteAndZero_field_0x04); /*0x625626*/
  v18 = 0; /*0x62562e*/
  v19.DeleteAndZero_field_0x08 = -1; /*0x625632*/
  v21 = -1; /*0x625636*/
  v6 = (int)*v5; /*0x62563a*/
  v20 = 0; /*0x62563c*/
  if ( v6 > 0 ) /*0x625642*/
  {
    v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      v8 = (char *)v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < (int)*v5 ); /*0x625665*/
    v2 = a2; /*0x625667*/
    v3 = (int *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  v9 = v2[2]; /*0x625675*/
  v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    v11 = 0; /*0x625682*/
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        v12 = v11 + v2[4]; /*0x625699*/
        v18 = *(_DWORD *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt((void **)&v19.DeleteAndZero_field_0x04, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v19.DeleteAndZero_field_0x08 = *(_DWORD *)(v12 + 12); /*0x6256be*/
        v20 = *(_DWORD *)(v12 + 16); /*0x6256c5*/
        v21 = *(_DWORD *)(v12 + 20); /*0x6256cc*/
      }
      v13 = (int)*v5; /*0x6256d0*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256d7*/
        DynamicVector::GrowCapacity((DynamicVector *)v5); /*0x6256db*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256e7*/
        DynamicVector::GrowCapacity((DynamicVector *)v5); /*0x6256eb*/
      if ( v13 < (int)*v5 ) /*0x6256f4*/
        memcpy((char *)v5[2] + 24 * v13 + 24, (char *)v5[2] + 24 * v13, 24 * (_DWORD)*v5 - 24 * v13); /*0x625713*/
      v14 = (Struct *)((char *)v5[2] + 24 * v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        Struct::WideStringCopy(v14, (int)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      *v5 = (char *)*v5 + 1; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = a2[2]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = a2; /*0x62568a*/
    }
    v3 = (int *)this; /*0x625752*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x04); /*0x62575a*/
  DeleteAndZero::Alt(&v19); /*0x625763*/
  return v3; /*0x62576a*/
}



// ==== 0x00625780  HashTable::Shrink2  this=HashTable  sig=csp ====
void __thiscall HashTable::Shrink2(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625785*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625797*/
  {
    v3 = *(int **)this->__pad_0; /*0x6257a0*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6257a3*/
    v13 = *(int **)this->__pad_0; /*0x6257a6*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6257ac*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6257b4*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6257bf*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6257c4*/
    *(_DWORD *)this->__pad_0 = v5; /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6257db*/
    {
      v7 = v3; /*0x6257dd*/
      v8 = HashTable_field_0x08; /*0x6257df*/
      do /*0x625813*/
      {
        v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
          do /*0x62580d*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6257f7*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6257fb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625801*/
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
void __thiscall HashTable::Rebuild2(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625835*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625847*/
  {
    v3 = *(int **)this->__pad_0; /*0x625850*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x625853*/
    v13 = *(int **)this->__pad_0; /*0x625856*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x62585c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x625864*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x62586f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x625874*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x62588b*/
    {
      v7 = v3; /*0x62588d*/
      v8 = HashTable_field_0x08; /*0x62588f*/
      do /*0x6258c9*/
      {
        v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
          do /*0x6258c3*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6258a7*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6258ab*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x6258b1*/
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
void __thiscall ComboBoxOwnerDraw::SetCapacity(ComboBoxOwnerDraw *this)
{
  unsigned int ComboBoxOwnerDraw_field_0x08; // esi
  int *v3; // ebp
  int ComboBoxOwnerDraw_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComboBoxOwnerDraw_field_0x08 = this->ComboBoxOwnerDraw_field_0x08; /*0x6258e5*/
  if ( ComboBoxOwnerDraw_field_0x08 > this->q00C && LOBYTE(this->ComboBoxOwnerDraw_field_0x14) != 1 ) /*0x6258f7*/
  {
    v3 = *(int **)this->__pad_0; /*0x625900*/
    ComboBoxOwnerDraw_field_0x0C = this->ComboBoxOwnerDraw_field_0x0C; /*0x625903*/
    v13 = *(int **)this->__pad_0; /*0x625906*/
    this->ComboBoxOwnerDraw_field_0x08 = ComboBoxOwnerDraw_field_0x08 >> 1; /*0x62590c*/
    this->ComboBoxOwnerDraw_field_0x0C = ComboBoxOwnerDraw_field_0x0C - 1; /*0x625914*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ComboBoxOwnerDraw_field_0x08 >> 1)); /*0x62591f*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625924*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62592b*/
    memset(v5, 0, v6); /*0x625930*/
    if ( (int)ComboBoxOwnerDraw_field_0x08 > 0 ) /*0x62593b*/
    {
      v7 = v3; /*0x62593d*/
      v8 = ComboBoxOwnerDraw_field_0x08; /*0x62593f*/
      do /*0x625973*/
      {
        v9 = *v7; /*0x625941*/
        if ( *v7 ) /*0x625941*/
        {
          do /*0x62596d*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) /*0x625957*/
                & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62595b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625961*/
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
char __thiscall ComboBoxOwnerDraw::GrowBuffer(ComboBoxOwnerDraw *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625994*/
  if ( *(_DWORD *)this->__pad_0 < this->ComboBoxOwnerDraw_field_0x04 ) /*0x62599b*/
    return 0; /*0x62599d*/
  v4 = 2 * v2; /*0x6259a4*/
  v6 = 2 * v2; /*0x6259ab*/
  if ( 2 * v2 < 10 ) /*0x6259af*/
  {
    v6 = 10; /*0x6259b1*/
    v4 = 10; /*0x6259b9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6259cc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6259da*/
  if ( this->ComboBoxOwnerDraw_field_0x08 ) /*0x6259e3*/
  {
    qmemcpy(v5, (const void *)this->ComboBoxOwnerDraw_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x6259f8*/
    v4 = v6; /*0x625a01*/
  }
  __3_YAXPAX_Z((void *)this->ComboBoxOwnerDraw_field_0x08); /*0x625a09*/
  this->ComboBoxOwnerDraw_field_0x04 = v4; /*0x625a11*/
  this->ComboBoxOwnerDraw_field_0x08 = (int)v5; /*0x625a14*/
  return 1; /*0x62599f*/
}



// ==== 0x00625A20  Options::SaveOptionValue  this=Options  sig=csp ====
char __thiscall Options::SaveOptionValue(Options *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  void *v6; // esi
  void *v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625a24*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->field_4 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = (void *)__2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = v5; /*0x625a64*/
  v6 = this->field_8; /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *(_DWORD *)this->__pad_0); /*0x625a80*/
  __3_YAXPAX_Z(this->field_8); /*0x625a8d*/
  this->field_4 = (void *)v4; /*0x625a99*/
  this->field_8 = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/
}



// ==== 0x00625AB0  ResultNode::CleanupList  this=ResultNode  sig=csp ====
void __thiscall ResultNode::CleanupList(ResultNode *this)
{
  ResultNode *ResultNode_field_0x04; // esi
  ResultNode *v2; // edi

  ResultNode_field_0x04 = (ResultNode *)this->ResultNode_field_0x04; /*0x625ab1*/
  if ( ResultNode_field_0x04 ) /*0x625ab6*/
  {
    do /*0x625ad4*/
    {
      v2 = (ResultNode *)ResultNode_field_0x04[1].ResultNode_field_0x04; /*0x625ab9*/
      if ( ResultNode_field_0x04 ) /*0x625abe*/
      {
        ResultNode::Init(ResultNode_field_0x04); /*0x625ac2*/
        __3_YAXPAX_Z(ResultNode_field_0x04); /*0x625ac8*/
      }
      ResultNode_field_0x04 = v2; /*0x625ad2*/
    }
    while ( v2 ); /*0x625ad4*/
  }
}



// ==== 0x00625AE0  LinkedList::PushFront  this=LinkedList  sig=csp ====
int __thiscall LinkedList::PushFront(LinkedList *this, int a2)
{
  *(_DWORD *)(a2 + 12) = this->Tail[0]; /*0x625ae7*/
  this->Tail[0] = a2; /*0x625aea*/
  return a2; /*0x625aed*/
}



// ==== 0x00625AF0  File::LoadPaletteData  this=File  sig=csp ====
u_short *__thiscall File::LoadPaletteData(File *this, u_short *a2)
{
  u_short v3; // cx
  u_short v4; // ax
  u_short *v5; // esi
  unsigned __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // esi
  size_t v11; // ebp
  void *v12; // eax
  int v13; // eax
  u_short *result; // eax
  int v15; // [esp+8h] [ebp-8h]
  u_short *v17; // [esp+14h] [ebp+4h]

  v3 = *a2; /*0x625b02*/
  *(_WORD *)this->__pad_0 = *a2; /*0x625b05*/
  *(_WORD *)this->__pad_0 = ntohs(v3); /*0x625b11*/
  v4 = a2[1]; /*0x625b17*/
  *(_WORD *)this->File_field_0x2 = v4; /*0x625b1a*/
  v5 = a2 + 2; /*0x625b1f*/
  *(_WORD *)this->File_field_0x2 = ntohs(v4); /*0x625b27*/
  v6 = *(_WORD *)this->__pad_0; /*0x625b2d*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x625b30*/
  v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return (u_short *)this; /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    v7 = __2_YAPAXI_Z(0x10u); /*0x625b50*/
    v8 = *(_DWORD *)v5; /*0x625b55*/
    v9 = v7; /*0x625b57*/
    v10 = v5 + 4; /*0x625b5c*/
    *(_DWORD *)v7 = v8; /*0x625b5f*/
    *(_DWORD *)(v7 + 4) = *(v10 - 1); /*0x625b64*/
    v11 = (unsigned __int16)ntohs(*(_WORD *)(v7 + 6)); /*0x625b78*/
    v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *(_DWORD *)(v9 + 8) = v12; /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    v13 = -(ntohs(*(_WORD *)(v9 + 6)) & 3) & 3; /*0x625baf*/
    v17 = (u_short *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    File::Dispatch((File *)v9); /*0x625bd0*/
    result = (u_short *)this; /*0x625bd5*/
    *(_DWORD *)(v9 + 12) = *(_DWORD *)&this->File_field_0x2[2]; /*0x625bde*/
    *(_DWORD *)&this->File_field_0x2[2] = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = v17; /*0x625b4a*/
  }
  return result; /*0x625bec*/
}



// ==== 0x00625C00  ObjectClass::Event_Process_625C00  this=ObjectClass  sig=csp ====
u_short *__thiscall sub_625C00(int this, size_t *a2)
{
  int i; // eax
  int v5; // ecx
  u_short *v6; // edi
  int v7; // ebx
  char *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edx
  char *v11; // edi
  u_short *v13; // [esp+14h] [ebp+4h]

  *a2 = 4; /*0x625c0a*/
  for ( i = *(_DWORD *)(this + 4); i; i = *(_DWORD *)(i + 12) ) /*0x625c15*/
  {
    v5 = *a2 + 8; /*0x625c1b*/
    *a2 = v5; /*0x625c1e*/
    *a2 = *(unsigned __int16 *)(i + 6) + v5 + (-(((unsigned __int8)*(_WORD *)(i + 6) + (_BYTE)v5) & 3) & 3); /*0x625c32*/
  }
  v6 = (u_short *)__2_YAPAXI_Z(*a2); /*0x625c49*/
  v13 = v6; /*0x625c4c*/
  *v6 = htons(*(_WORD *)a2); /*0x625c55*/
  v6[1] = htons(*(_WORD *)(this + 2)); /*0x625c65*/
  v7 = *(_DWORD *)(this + 4); /*0x625c69*/
  v8 = (char *)(v6 + 2); /*0x625c6c*/
  if ( !v7 ) /*0x625c71*/
    return v6; /*0x625d0d*/
  do /*0x625cfc*/
  {
    sub_4CB8B0(v7); /*0x625c79*/
    *(_DWORD *)v8 = *(_DWORD *)v7; /*0x625c80*/
    *((_DWORD *)v8 + 1) = *(_DWORD *)(v7 + 4); /*0x625c86*/
    v9 = v8 + 8; /*0x625c8e*/
    qmemcpy(v9, *(const void **)(v7 + 8), ntohs(*(_WORD *)(v7 + 6))); /*0x625ca9*/
    v8 = &v9[ntohs(*(_WORD *)(v7 + 6))]; /*0x625cc6*/
    v10 = -(ntohs(*(_WORD *)(v7 + 6)) & 3) & 3; /*0x625cd5*/
    if ( v10 ) /*0x625cd8*/
    {
      memset(v8, 0, 4 * (v10 >> 2)); /*0x625ce5*/
      v11 = &v8[4 * (v10 >> 2)]; /*0x625ce5*/
      v8 += v10; /*0x625cec*/
      memset(v11, 0, v10 & 3); /*0x625cee*/
    }
    File::Dispatch(v7); /*0x625cf2*/
    v7 = *(_DWORD *)(v7 + 12); /*0x625cf7*/
  }
  while ( v7 ); /*0x625cfc*/
  return v13; /*0x625d06*/
}



// ==== 0x00625DB0  File::FindByPrefix  this=File  sig=csp ====
bool __thiscall File::FindByPrefix(File *this, char *Str1, _BYTE *a3)
{
  int v3; // esi
  BOOL v4; // eax

  v3 = *(_DWORD *)&this->File_field_0x2[2]; /*0x625db1*/
  if ( v3 ) /*0x625db7*/
  {
    while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625dcb*/
    {
      v3 = *(_DWORD *)(v3 + 12); /*0x625dcd*/
      if ( !v3 ) /*0x625dd2*/
        return 0; /*0x625dd2*/
    }
    *a3 = **(_BYTE **)(v3 + 8); /*0x625def*/
    LOBYTE(v4) = v3 != 0; /*0x625df5*/
  }
  else
  {
    return 0; /*0x625dd4*/
  }
  return v4; /*0x625dd6*/
}



// ==== 0x00625F60  HashTable::FindString  this=HashTable  sig=csp ====
int __thiscall HashTable::FindString(HashTable *this, char *Str1, _DWORD *a3)
{
  int HashTable_field_0x04; // esi
  int result; // eax

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625f61*/
  if ( !HashTable_field_0x04 ) /*0x625f67*/
    return 0; /*0x625f84*/
  while ( strncmp(Str1, (const char *)HashTable_field_0x04, 4u) ) /*0x625f7b*/
  {
    HashTable_field_0x04 = *(_DWORD *)(HashTable_field_0x04 + 12); /*0x625f7d*/
    if ( !HashTable_field_0x04 ) /*0x625f82*/
      return 0; /*0x625f82*/
  }
  result = HashTable_field_0x04; /*0x625f92*/
  *a3 = **(_DWORD **)(HashTable_field_0x04 + 8); /*0x625f9f*/
  LOBYTE(result) = HashTable_field_0x04 != 0; /*0x625fa5*/
  return result; /*0x625f86*/
}



// ==== 0x00625FB0  HashTable::FindChunk  this=HashTable  sig=csp ====
int __thiscall HashTable::FindChunk(HashTable *this, char *Str1, void *a3, unsigned int *a4)
{
  int HashTable_field_0x04; // ebx
  int result; // eax
  int v6; // ecx

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625fb1*/
  if ( HashTable_field_0x04 ) /*0x625fb7*/
  {
    while ( 1 ) /*0x625fc1*/
    {
      result = strncmp(Str1, (const char *)HashTable_field_0x04, 4u); /*0x625fc1*/
      if ( !result ) /*0x625fcb*/
        break; /*0x625fcb*/
      HashTable_field_0x04 = *(_DWORD *)(HashTable_field_0x04 + 12); /*0x625fcd*/
      if ( !HashTable_field_0x04 ) /*0x625fd2*/
        goto LABEL_4; /*0x625fd2*/
    }
    v6 = *a4; /*0x625fee*/
    if ( *(unsigned __int16 *)(HashTable_field_0x04 + 6) < (int)*a4 ) /*0x625ff2*/
      v6 = *(unsigned __int16 *)(HashTable_field_0x04 + 6); /*0x625ff4*/
    result = v6; /*0x625ff9*/
    qmemcpy(a3, *(const void **)(HashTable_field_0x04 + 8), v6); /*0x626003*/
    *a4 = *(unsigned __int16 *)(HashTable_field_0x04 + 6); /*0x626013*/
    LOBYTE(result) = HashTable_field_0x04 != 0; /*0x626019*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x625fd4*/
  }
  return result; /*0x625fd6*/
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
void *__thiscall sub_626070(ObjectClass *this, const void *a2)
{
  void *result; // eax
  _BYTE *v3; // ecx
  int v4; // edx

  result = this; /*0x626070*/
  v3 = (char *)&this->AbstractClass + 2; /*0x626075*/
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
bool __thiscall sub_6260A0(ObjectClass *this, const void *a2)
{
  return this == a2 || memcmp(this, a2, 0x300u) == 0; /*0x6260ac*/
}



// ==== 0x006260D0  Block::Copy  this=Block  sig=csp ====
void *__thiscall Block::Copy(Block *this, const void *a2)
{
  void *result; // eax

  result = this; /*0x6260d5*/
  if ( this != a2 ) /*0x6260d9*/
    qmemcpy(this, a2, 0x300u); /*0x6260e3*/
  return result; /*0x6260e6*/
}



// ==== 0x006260F0  ObjectClass::method_6260F0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6260F0(ObjectClass *this, unsigned __int8 a2)
{
  int v3; // edi
  unsigned int result; // eax

  v3 = 256; /*0x6260f9*/
  do /*0x62610f*/
  {
    result = Color::Lerp((Color *)this, a2, &byte_A83CD9); /*0x626106*/
    this = (ObjectClass *)((char *)this + 3); /*0x62610b*/
    --v3; /*0x62610e*/
  }
  while ( v3 ); /*0x62610f*/
  return result; /*0x626111*/
}



// ==== 0x00626120  ObjectClass::Render_Helper  this=ObjectClass  sig=csp ====
unsigned int __thiscall Render_Helper(ObjectClass *this, unsigned __int8 a2, int a3)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62612c*/
  {
    result = Color::Lerp((Color *)this, a2, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x626149*/
    this = (ObjectClass *)((char *)this + 3); /*0x62614f*/
  }
  return result; /*0x62615a*/
}



// ==== 0x00626170  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_626170(ObjectClass *this, unsigned __int8 a2, int a3)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62617c*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x626180*/
      result = Color::Lerp((Color *)this, a2, &byte_A83CD9); /*0x62618e*/
    this = (ObjectClass *)((char *)this + 3); /*0x626194*/
  }
  return result; /*0x62619f*/
}



// ==== 0x006261B0  ObjectClass::method_6261B0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6261B0(ObjectClass *this, unsigned __int8 a2, int a3, int a4)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x6261bc*/
  {
    result = a4; /*0x6261c0*/
    if ( *(_BYTE *)(i + a4) ) /*0x6261c4*/
      result = Color::Lerp((Color *)this, a2, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x6261e3*/
    this = (ObjectClass *)((char *)this + 3); /*0x6261e9*/
  }
  return result; /*0x6261f4*/
}



// ==== 0x00626200  Palette::FindClosestColor  this=Palette  sig=csp ====
int __thiscall Palette::FindClosestColor(char *this, Palette *a2)
{
  int v2; // ebx
  int v3; // esi
  int v5; // eax
  unsigned __int8 *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x626208*/
  v8 = 0; /*0x62620b*/
  v3 = -1; /*0x62620f*/
  do /*0x626237*/
  {
    v7 = (unsigned __int8 *)this; /*0x626218*/
    this += 3; /*0x626219*/
    v5 = Palette::CalcColorDistance(a2, v7); /*0x62621c*/
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
int __thiscall sub_626250(ObjectClass *this, const char *a2, int a3)
{
  strcpy((char *)this, a2); /*0x62626c*/
  this->q040 = a3; /*0x62627c*/
  return (int)this; /*0x62627b*/
}



// ==== 0x00626290  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_626290(ObjectClass *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->q040; /*0x626293*/
  if ( v2 ) /*0x62629b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62629e*/
    for ( i = 0; i < v3; ++i ) /*0x6262a6*/
    {
      v5 = *(_DWORD *)(this->q040 + 4); /*0x6262af*/
      v6 = *(void **)(v5 + 4 * i); /*0x6262b2*/
      if ( v6 ) /*0x6262b7*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v5 + 4 * i)); /*0x6262bb*/
        __3_YAXPAX_Z(v6); /*0x6262c1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->q040; /*0x6262cf*/
    if ( v7 ) /*0x6262d9*/
      (**v7)(v7, 1); /*0x6262df*/
    this->q040 = 0; /*0x6262e1*/
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

  result = this->q040; /*0x6262f3*/
  if ( result ) /*0x6262fb*/
  {
    v4 = *(_DWORD *)(result + 16); /*0x6262fe*/
    for ( i = 0; i < v4; ++i ) /*0x626306*/
    {
      v6 = *(_DWORD *)(this->q040 + 4); /*0x62630f*/
      v7 = *(void **)(v6 + 4 * i); /*0x626312*/
      if ( v7 ) /*0x626317*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v6 + 4 * i)); /*0x62631b*/
        __3_YAXPAX_Z(v7); /*0x626321*/
      }
    }
    v8 = (void (__thiscall ***)(_DWORD, int))this->q040; /*0x62632f*/
    if ( v8 ) /*0x626339*/
      (**v8)(v8, 1); /*0x62633f*/
    this->q040 = 0; /*0x626345*/
    this->q040 = a2; /*0x62634f*/
    return a2; /*0x626341*/
  }
  else
  {
    this->q040 = a2; /*0x62635d*/
  }
  return result; /*0x626355*/
}



// ==== 0x00626370  FileSystem::mountDrive  this=FileSystem  sig=csp ====
void __thiscall FileSystem::mountDrive(FileSystem *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->q100; /*0x626373*/
  if ( v2 ) /*0x62637b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62637e*/
    for ( i = 0; i < v3; ++i ) /*0x626386*/
    {
      v5 = *(_DWORD *)(this->q100 + 4); /*0x62638f*/
      v6 = *(void **)(v5 + 4 * i); /*0x626392*/
      if ( v6 ) /*0x626397*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v5 + 4 * i)); /*0x62639b*/
        __3_YAXPAX_Z(v6); /*0x6263a1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->q100; /*0x6263af*/
    if ( v7 ) /*0x6263b9*/
      (**v7)(v7, 1); /*0x6263bf*/
    this->q100 = 0; /*0x6263c1*/
  }
}



// ==== 0x006263D0  FileExtension::MapHandler  this=IUnknown  sig=csp ====
int __thiscall FileExtension_MapHandler(const char *this)
{
  _DWORD *v1; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int result; // eax
  _DWORD *v13; // ebp
  _DWORD *v14; // ebx
  char *v15; // edx
  int v16; // esi
  int v17; // ebp
  int v18; // esi
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // esi
  int v23; // ebp
  int v24; // esi
  int i; // ebx
  int v26; // edi
  char *v28; // [esp+14h] [ebp-208h] BYREF
  char String[256]; // [esp+18h] [ebp-204h] BYREF

  v1 = g_FileExtensionState; /*0x6263da*/
  if ( !g_FileExtensionState ) /*0x6263e8*/
  {
    v3 = __2_YAPAXI_Z(0x10u); /*0x6263f0*/
    v1 = v3; /*0x6263f5*/
    if ( v3 ) /*0x6263fc*/
    {
      *v3 = -1; /*0x626404*/
      v4 = __2_YAPAXI_Z(0x18u); /*0x62640a*/
      v5 = v4; /*0x62640f*/
      if ( v4 ) /*0x626416*/
      {
        StringVector::Construct(v4, 0, 0); /*0x62641e*/
        *v5 = &DynamicVectorClass<char *>::`vftable'; /*0x626423*/
        v5[5] = 10; /*0x626429*/
        v5[4] = 0; /*0x626430*/
      }
      else
      {
        v5 = 0; /*0x626439*/
      }
      v1[1] = v5; /*0x62643d*/
      if ( __2_YAPAXI_Z(0x18u) ) /*0x626440*/
        v6 = FileExtension::Constructor(0, 0); /*0x626452*/
      else
        v6 = 0; /*0x626459*/
      v1[2] = v6; /*0x62645d*/
      if ( __2_YAPAXI_Z(0x10u) ) /*0x626460*/
        v1[3] = DynamicVectorArray::Constructor(10, 31, HashStringMod31); /*0x62647c*/
      else
        v1[3] = 0; /*0x626483*/
    }
    else
    {
      v1 = 0; /*0x626488*/
    }
    g_FileExtensionState = v1; /*0x62648a*/
  }
  String::CopyUpper(String, this); /*0x626495*/
  v7 = v1[3]; /*0x62649a*/
  v8 = *(_DWORD *)v7 + 24 * ((*(int (__thiscall **)(char *))(v7 + 4))(String) % *(_DWORD *)(v7 + 8)); /*0x6264b1*/
  v9 = *(_DWORD *)(v8 + 16) - 1; /*0x6264b4*/
  if ( v9 < 0 ) /*0x6264b5*/
    goto LABEL_21; /*0x6264b5*/
  v10 = 260 * v9; /*0x6264be*/
  while ( 1 ) /*0x6264c6*/
  {
    v11 = *(_DWORD *)(v8 + 4) + v10; /*0x6264c6*/
    if ( String::Equals((const char *)v11, String) ) /*0x6264cf*/
      break; /*0x6264cf*/
    --v9; /*0x6264d8*/
    v10 -= 260; /*0x6264d9*/
    if ( v9 < 0 ) /*0x6264e1*/
      goto LABEL_21; /*0x6264e1*/
  }
  if ( v11 == -256 || (result = *(_DWORD *)(*(_DWORD *)(v11 + 256) + 256)) == 0 ) /*0x6264f9*/
  {
LABEL_21:
    v13 = g_FileExtensionState; /*0x6264ff*/
    v14 = MIXFile::Load(g_FileExtensionState, this); /*0x626511*/
    v15 = (char *)__2_YAPAXI_Z(0x104u); /*0x62651d*/
    if ( v15 ) /*0x626524*/
    {
      strcpy(v15, this); /*0x62653e*/
      *((_DWORD *)v15 + 64) = v14; /*0x626547*/
      v28 = v15; /*0x62654d*/
    }
    else
    {
      v28 = 0; /*0x626553*/
    }
    String::CopyUpper(String, this); /*0x626564*/
    v16 = v13[3]; /*0x626569*/
    v17 = *(_DWORD *)v16 + 24 * ((*(int (__thiscall **)(char *))(v16 + 4))(String) % *(_DWORD *)(v16 + 8)); /*0x626580*/
    v18 = *(_DWORD *)(v17 + 16) - 1; /*0x626583*/
    if ( v18 < 0 ) /*0x626584*/
    {
LABEL_28:
      v20 = FileExtension::Check(String, &v28); /*0x6265ae*/
      FileExtension::CheckExtensionMatch(v20); /*0x6265c7*/
    }
    else
    {
      v19 = 260 * v18; /*0x62658d*/
      while ( !String::Equals((const char *)(v19 + *(_DWORD *)(v17 + 4)), String) ) /*0x6265a1*/
      {
        --v18; /*0x6265a3*/
        v19 -= 260; /*0x6265a4*/
        if ( v18 < 0 ) /*0x6265ac*/
          goto LABEL_28; /*0x6265ac*/
      }
    }
    v21 = g_FileExtensionState; /*0x6265cc*/
    String::CopyUpper(String, this); /*0x6265d7*/
    v22 = v21[3]; /*0x6265dc*/
    v23 = *(_DWORD *)v22 + 24 * ((*(int (__thiscall **)(char *))(v22 + 4))(String) % *(_DWORD *)(v22 + 8)); /*0x6265f3*/
    v24 = *(_DWORD *)(v23 + 16) - 1; /*0x6265f6*/
    if ( v24 < 0 ) /*0x6265f7*/
      return 0; /*0x6265f7*/
    for ( i = 260 * v24; ; i -= 260 ) /*0x626600*/
    {
      v26 = i + *(_DWORD *)(v23 + 4); /*0x62660a*/
      if ( String::Equals((const char *)v26, String) ) /*0x62660f*/
        break; /*0x62660f*/
      if ( --v24 < 0 ) /*0x626621*/
        return 0; /*0x62662f*/
    }
    if ( v26 == -256 ) /*0x626638*/
      return 0; /*0x62663d*/
    else
      return *(_DWORD *)(*(_DWORD *)(v26 + 256) + 256); /*0x626649*/
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
int __thiscall FlagSystem::GetNextActive(FlagSystem *this)
{
  _DWORD *v1; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // edx
  Flag *v6; // ebp
  FlagSystem v7; // edx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int i; // ebx
  int v15; // esi
  int v16; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD **)&g_FileExtensionState[12]; /*0x626699*/
  if ( *((_BYTE *)this + 8) ) /*0x62669f*/
    return 0; /*0x62669f*/
  if ( *(_DWORD *)this >= v1[2] ) /*0x6266ad*/
  {
LABEL_7:
    *((_BYTE *)this + 8) = 1; /*0x6266ff*/
    return 0; /*0x62670a*/
  }
  while ( 1 ) /*0x6266ba*/
  {
    v3 = *v1 + 24 * *(_DWORD *)this; /*0x6266ba*/
    v4 = *((_DWORD *)this + 1); /*0x6266bd*/
    if ( v4 < *(_DWORD *)(v3 + 16) ) /*0x6266c2*/
      break; /*0x6266c2*/
LABEL_6:
    v7 = *this; /*0x6266ea*/
    *((_DWORD *)this + 1) = 0; /*0x6266ec*/
    *this = (FlagSystem)++*(_DWORD *)&v7; /*0x6266f4*/
    if ( *(_DWORD *)&v7 >= v1[2] ) /*0x6266fd*/
      goto LABEL_7; /*0x6266fd*/
  }
  while ( 1 ) /*0x6266c4*/
  {
    v5 = *(_DWORD *)(v3 + 4); /*0x6266c4*/
    *((_DWORD *)this + 1) = v4 + 1; /*0x6266cf*/
    v6 = (Flag *)(v5 + 260 * v4); /*0x6266d2*/
    if ( !(unsigned __int8)Flag::IsZero(v6) ) /*0x6266d7*/
      break; /*0x6266d7*/
    v4 = *((_DWORD *)this + 1); /*0x6266e0*/
    if ( v4 >= *(_DWORD *)(v3 + 16) ) /*0x6266e8*/
      goto LABEL_6; /*0x6266e8*/
  }
  if ( !v6 ) /*0x62670d*/
    return 0; /*0x626712*/
  v9 = *(_DWORD *)&g_FileExtensionState[12]; /*0x62671e*/
  v10 = (*(int (__thiscall **)(Flag *))(v9 + 4))(v6); /*0x626721*/
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)) + 16); /*0x62672d*/
  v12 = *(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)); /*0x626731*/
  v13 = v11 - 1; /*0x626734*/
  v16 = v12; /*0x626735*/
  if ( v13 < 0 ) /*0x626739*/
    return 0; /*0x626739*/
  for ( i = 260 * v13; ; i -= 260 ) /*0x626742*/
  {
    v15 = *(_DWORD *)(v12 + 4) + i; /*0x626750*/
    if ( (unsigned __int8)String::Equals((const char *)v15, v6->__pad_0) ) /*0x626755*/
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
void __thiscall FileSystem::InitExtensionState(FileSystem *this)
{
  FileSystem *v1; // edi
  FileSystem *v2; // esi
  FileSystem *v3; // eax
  StringVector *v4; // eax
  StringVector *v5; // esi
  _DWORD *v6; // ebx
  VectorClass *v7; // eax
  VectorClass *v8; // esi
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
  Flag *v20; // esi
  int v21; // ebp
  _DWORD *v22; // esi
  int v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch]
  char v25; // [esp+18h] [ebp-108h]
  FileSystem *v26; // [esp+1Ch] [ebp-104h]
  char String[256]; // [esp+20h] [ebp-100h] BYREF

  v1 = g_FileExtensionState; /*0x6267aa*/
  v2 = this; /*0x6267b0*/
  v26 = this; /*0x6267b4*/
  if ( !g_FileExtensionState ) /*0x6267b8*/
  {
    v3 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6267c0*/
    v1 = v3; /*0x6267c5*/
    if ( !v3 ) /*0x6267cc*/
    {
      v1 = 0; /*0x6268bf*/
      g_FileExtensionState = 0; /*0x6268c1*/
      goto LABEL_19; /*0x6268c1*/
    }
    *(_DWORD *)v3 = -1; /*0x6267d4*/
    v4 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x6267da*/
    v5 = v4; /*0x6267df*/
    v6 = 0; /*0x6267e1*/
    if ( v4 ) /*0x6267ed*/
    {
      StringVector::Construct(v4, 0, 0); /*0x6267f3*/
      *(_DWORD *)v5->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x6267f8*/
      v5->StringVector_field_0x14 = 10; /*0x6267fe*/
      v5->StringVector_field_0x10 = 0; /*0x626801*/
    }
    else
    {
      v5 = 0; /*0x626806*/
    }
    *(_DWORD *)&v1[4] = v5; /*0x62680a*/
    v7 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x62680d*/
    v8 = v7; /*0x626812*/
    if ( v7 ) /*0x626819*/
    {
      VectorClass::ConstructHSV(v7, 0, 0); /*0x62681f*/
      v8->ptr_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626824*/
      v8[1].Items = (void *)10; /*0x62682a*/
      v8[1].ptr_0 = 0; /*0x62682d*/
    }
    else
    {
      v8 = 0; /*0x626832*/
    }
    *(_DWORD *)&v1[8] = v8; /*0x626836*/
    v9 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x626839*/
    v10 = v9; /*0x62683e*/
    if ( v9 ) /*0x626845*/
    {
      v9[1] = HashStringMod31; /*0x62684c*/
      v9[2] = 31; /*0x626853*/
      v9[3] = 10; /*0x62685a*/
      v11 = (_DWORD *)__2_YAPAXI_Z(0x2ECu); /*0x62685d*/
      if ( v11 ) /*0x626867*/
      {
        v6 = v11 + 1; /*0x62686e*/
        *v11 = 31; /*0x626876*/
        Array::ForEach(v11 + 1, 24, 31, (int (__thiscall *)(int))FileSystem::readFile); /*0x62687c*/
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
        *(_DWORD *)&v1[12] = v10; /*0x62689f*/
        v2 = v26; /*0x6268a2*/
        g_FileExtensionState = v1; /*0x6268a6*/
        goto LABEL_19; /*0x6268ac*/
      }
    }
    else
    {
      v10 = 0; /*0x6268ae*/
    }
    *(_DWORD *)&v1[12] = v10; /*0x6268b0*/
    v2 = v26; /*0x6268b3*/
    g_FileExtensionState = v1; /*0x6268b7*/
  }
LABEL_19:
  if ( *(FileSystem **)v1 != v2 ) /*0x6268c9*/
  {
    v15 = *(_DWORD **)&v1[12]; /*0x6268cf*/
    v16 = 0; /*0x6268d2*/
    v17 = 0; /*0x6268d4*/
    *(_DWORD *)v1 = v2; /*0x6268d6*/
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
        v20 = (Flag *)(v19 + 260 * v17); /*0x62690e*/
        if ( !(unsigned __int8)Flag::IsZero(v20) ) /*0x626913*/
          break; /*0x626913*/
        v17 = v24; /*0x62691c*/
        if ( v24 >= *(_DWORD *)(v18 + 16) ) /*0x626925*/
        {
          v16 = v23; /*0x626927*/
          goto LABEL_25; /*0x626927*/
        }
      }
      for ( ; v20; v20 = (Flag *)FileSystem::closeFile(*(FileSystem **)&v1[12], &v23) ) /*0x626948*/
      {
        String::CopyUpper(String, v20->__pad_0); /*0x62694f*/
        v21 = *(_DWORD *)FileSystem::openFile(*(FileSystem **)&v1[12], String); /*0x626961*/
        v22 = MIXFile::Load((MIXFile *)v1, v20->__pad_0); /*0x62696d*/
        FileSystem::mountDrive((FileSystem *)v21); /*0x62696f*/
        *(_DWORD *)(v21 + 256) = v22; /*0x626978*/
      }
    }
  }
}



// ==== 0x006269A0  ObjectClass::System_Reset  this=ObjectClass  sig=csp ====
int System_Reset(ObjectClass *this)
{
  FileSystem *v1; // eax
  FileSystem *v2; // eax
  FileSystem *v3; // edi
  StringVector *v4; // eax
  StringVector *v5; // esi
  VectorClass *v6; // eax
  VectorClass *v7; // esi
  DynamicVectorArray *v8; // eax
  int v9; // esi
  int v10; // edi

  v1 = g_FileExtensionState; /*0x6269a0*/
  if ( !g_FileExtensionState ) /*0x6269a9*/
  {
    v2 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6269b1*/
    v3 = v2; /*0x6269b6*/
    if ( v2 ) /*0x6269bd*/
    {
      *(_DWORD *)v2 = -1; /*0x6269c5*/
      v4 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x6269cb*/
      v5 = v4; /*0x6269d0*/
      if ( v4 ) /*0x6269d7*/
      {
        StringVector::Construct(v4, 0, 0); /*0x6269df*/
        *(_DWORD *)v5->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x6269e4*/
        v5->StringVector_field_0x14 = 10; /*0x6269ea*/
        v5->StringVector_field_0x10 = 0; /*0x6269f1*/
      }
      else
      {
        v5 = 0; /*0x6269fa*/
      }
      *(_DWORD *)&v3[4] = v5; /*0x6269fe*/
      v6 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x626a01*/
      v7 = v6; /*0x626a06*/
      if ( v6 ) /*0x626a0d*/
      {
        VectorClass::ConstructHSV(v6, 0, 0); /*0x626a15*/
        v7->ptr_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626a1a*/
        v7[1].Items = (void *)10; /*0x626a20*/
        v7[1].ptr_0 = 0; /*0x626a27*/
      }
      else
      {
        v7 = 0; /*0x626a30*/
      }
      *(_DWORD *)&v3[8] = v7; /*0x626a34*/
      v8 = (DynamicVectorArray *)__2_YAPAXI_Z(0x10u); /*0x626a37*/
      if ( v8 ) /*0x626a41*/
        *(_DWORD *)&v3[12] = DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x626a53*/
      else
        *(_DWORD *)&v3[12] = 0; /*0x626a5c*/
      v1 = v3; /*0x626a56*/
    }
    else
    {
      v1 = 0; /*0x626a63*/
    }
    g_FileExtensionState = v1; /*0x626a65*/
  }
  v9 = 0; /*0x626a6d*/
  v10 = *(_DWORD *)(*(_DWORD *)&v1[4] + 16); /*0x626a6f*/
  if ( v10 > 0 ) /*0x626a74*/
  {
    do /*0x626a90*/
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(*(_DWORD *)&v1[4] + 4) + 4 * v9)); /*0x626a80*/
      v1 = g_FileExtensionState; /*0x626a85*/
      ++v9; /*0x626a8d*/
    }
    while ( v9 < v10 ); /*0x626a90*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v1[4] + 12))(*(_DWORD *)&v1[4]); /*0x626a99*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&g_FileExtensionState[8] + 12))(*(_DWORD *)&g_FileExtensionState[8]); /*0x626aa9*/
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

  if ( !g_FileExtensionState ) /*0x626ac5*/
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
        *v5 = &DynamicVectorClass<char *>::`vftable'; /*0x626b06*/
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
        *v7 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626b38*/
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
      g_FileExtensionState = v3; /*0x626b6f*/
    }
    else
    {
      g_FileExtensionState = 0; /*0x626b84*/
    }
  }
  v9 = (char *)__2_YAPAXI_Z(0x100u); /*0x626b9c*/
  strcpy(v9, a1); /*0x626bb5*/
  v10 = *((_DWORD *)g_FileExtensionState + 1); /*0x626bc4*/
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
  v15 = *((_DWORD *)g_FileExtensionState + 2); /*0x626c07*/
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

  if ( g_FileExtensionState ) /*0x626c68*/
    return *(_DWORD *)(*((_DWORD *)g_FileExtensionState + 1) + 16); /*0x626d93*/
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
      *v3 = &DynamicVectorClass<char *>::`vftable'; /*0x626caa*/
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
      *v5 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626ce1*/
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
    g_FileExtensionState = v1; /*0x626d71*/
    return *(_DWORD *)(v1[1] + 16); /*0x626d7c*/
  }
  else
  {
    g_FileExtensionState = 0; /*0x626d83*/
    return *(_DWORD *)(MEMORY[4] + 16); /*0x626d8b*/
  }
}



// ==== 0x00626DA0  FileSystem::ProcessNextFileExtension  this=FileSystem  sig=csp ====
int FileSystem::ProcessNextFileExtension(FileSystem *this)
{
  FileSystem *v1; // edi
  FileSystem *v2; // eax
  StringVector *v3; // eax
  StringVector *v4; // esi
  FileExtension *v5; // eax
  _DWORD *v6; // eax
  DynamicVectorArray *v7; // eax
  _DWORD *v8; // ebp
  int v9; // esi
  int v10; // edi
  int v11; // eax
  Flag *v12; // ebx
  int v15; // edi
  int v16; // eax
  int v17; // ebp
  int v18; // edi
  const char *v19; // edi
  const char *v20; // edi
  _DWORD *v21; // eax
  int k; // ebp
  int v23; // edi
  int v24; // ecx
  Flag *v25; // ebx
  const char *v26; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v29; // [esp+14h] [ebp-14h]
  int v30; // [esp+18h] [ebp-10h]
  _DWORD *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch]

  v1 = g_FileExtensionState; /*0x626da7*/
  if ( !g_FileExtensionState ) /*0x626db1*/
  {
    v2 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x626db9*/
    v1 = v2; /*0x626dbe*/
    if ( v2 ) /*0x626dc5*/
    {
      *(_DWORD *)v2 = -1; /*0x626dc9*/
      v3 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x626dcf*/
      v4 = v3; /*0x626dd4*/
      if ( v3 ) /*0x626ddb*/
      {
        StringVector::Construct(v3, 0, 0); /*0x626de1*/
        *(_DWORD *)v4->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x626de6*/
        v4->StringVector_field_0x14 = 10; /*0x626dec*/
        v4->StringVector_field_0x10 = 0; /*0x626df3*/
      }
      else
      {
        v4 = 0; /*0x626df8*/
      }
      *(_DWORD *)&v1[4] = v4; /*0x626dfc*/
      v5 = (FileExtension *)__2_YAPAXI_Z(0x18u); /*0x626dff*/
      if ( v5 ) /*0x626e09*/
        v6 = FileExtension::Constructor(v5, 0, 0); /*0x626e0f*/
      else
        v6 = 0; /*0x626e16*/
      *(_DWORD *)&v1[8] = v6; /*0x626e1a*/
      v7 = (DynamicVectorArray *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v7 ) /*0x626e27*/
        *(_DWORD *)&v1[12] = DynamicVectorArray::Constructor(v7, 10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        *(_DWORD *)&v1[12] = 0; /*0x626e40*/
    }
    else
    {
      v1 = 0; /*0x626e45*/
    }
    g_FileExtensionState = v1; /*0x626e47*/
  }
  v8 = *(_DWORD **)&v1[12]; /*0x626e4d*/
  v9 = 0; /*0x626e50*/
  v32 = 0; /*0x626e52*/
  v29 = 0; /*0x626e56*/
  if ( (int)v8[2] > 0 ) /*0x626e5d*/
  {
    for ( i = 0; ; i += 24 ) /*0x626e63*/
    {
      v10 = i + *v8; /*0x626e6e*/
      if ( *(int *)(v10 + 16) > 0 ) /*0x626e73*/
        break; /*0x626e73*/
LABEL_19:
      v9 = 0; /*0x626e95*/
      if ( ++v32 >= v8[2] ) /*0x626ea6*/
        return 0; /*0x626ebd*/
    }
    while ( 1 ) /*0x626e7d*/
    {
      v11 = 65 * v9++; /*0x626e7d*/
      v12 = (Flag *)(*(_DWORD *)(v10 + 4) + 4 * v11); /*0x626e80*/
      if ( !(unsigned __int8)Flag::IsZero(v12) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v9 >= *(_DWORD *)(v10 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v12 ) /*0x626ec0*/
    {
      v15 = *(_DWORD *)&g_FileExtensionState[12]; /*0x626ece*/
      v16 = *(_DWORD *)v15 + 24 * ((*(int (__thiscall **)(Flag *))(v15 + 4))(v12) % *(_DWORD *)(v15 + 8)); /*0x626ee1*/
      v17 = *(_DWORD *)(v16 + 16) - 1; /*0x626ee4*/
      v30 = v16; /*0x626ee5*/
      if ( v17 >= 0 ) /*0x626ee9*/
      {
        v18 = 260 * v17; /*0x626ef6*/
        for ( j = 260 * v17; ; v18 = j ) /*0x626ef9*/
        {
          v19 = (const char *)(*(_DWORD *)(v16 + 4) + v18); /*0x626f0b*/
          if ( (unsigned __int8)String::Equals(v19, v12->__pad_0) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v17; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v17 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v16 = v30; /*0x626eff*/
        }
        v20 = v19 + 256; /*0x626f37*/
        if ( v20 && *(_DWORD *)(*(_DWORD *)v20 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v21 = *(_DWORD **)&g_FileExtensionState[12]; /*0x626f63*/
            ++v29; /*0x626f66*/
            v31 = v21; /*0x626f6a*/
            if ( v32 >= v21[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v32; ; k += 24 ) /*0x626f77*/
            {
              v23 = *v21 + k; /*0x626f7e*/
              if ( v9 < *(_DWORD *)(v23 + 16) ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v9 = 0; /*0x626fb2*/
              if ( ++v32 >= v21[2] ) /*0x626fba*/
                return v29; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v24 = 65 * v9++; /*0x626f8d*/
              v25 = (Flag *)(*(_DWORD *)(v23 + 4) + 4 * v24); /*0x626f90*/
              if ( !(unsigned __int8)Flag::IsZero(v25) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v9 >= *(_DWORD *)(v23 + 16) ) /*0x626fa1*/
              {
                v21 = v31; /*0x626fa3*/
                goto LABEL_36; /*0x626fa3*/
              }
            }
            if ( !v25 ) /*0x626fc0*/
              break; /*0x626fc0*/
            v26 = FileSystem::openFile(*(FileSystem **)&g_FileExtensionState[12], v25->__pad_0); /*0x626fcb*/
            if ( !v26 ) /*0x626fd2*/
              break; /*0x626fd2*/
          }
          while ( *(_DWORD *)(*(_DWORD *)v26 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v29; /*0x626eb6*/
}



// ==== 0x00626FF0  WinMainSetup_Setup_626FF0  this=-  sig=ida-proto ====
void sub_626FF0()
{
  void *v0; // esi

  v0 = g_FileExtensionState; /*0x626ff1*/
  if ( g_FileExtensionState ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(g_FileExtensionState); /*0x626ffd*/
    __3_YAXPAX_Z(v0); /*0x627003*/
    g_FileExtensionState = 0; /*0x62700b*/
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

  result = g_FileExtensionState; /*0x627020*/
  if ( !g_FileExtensionState ) /*0x62702e*/
  {
    result = __2_YAPAXI_Z(0x10u); /*0x627036*/
    v1 = result; /*0x62703b*/
    v12 = result; /*0x627042*/
    if ( !result ) /*0x627046*/
    {
      g_FileExtensionState = 0; /*0x62715e*/
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
      *v2 = &DynamicVectorClass<char *>::`vftable'; /*0x62706d*/
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
      *v3 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x62709f*/
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
        g_FileExtensionState = v1; /*0x62713f*/
        return result; /*0x62714b*/
      }
    }
    else
    {
      v4 = 0; /*0x62714c*/
    }
    v1[3] = v4; /*0x62714e*/
    g_FileExtensionState = v1; /*0x627151*/
  }
  return result; /*0x627146*/
}



// ==== 0x00627170  FileSystem::findFile  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FileSystem::findFile(FileSystem *this)
{
  FileSystem *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ebp
  _DWORD *v7; // eax
  FileSystem *v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v14; // [esp+Ch] [ebp-8h]

  v1 = this; /*0x627175*/
  *(_DWORD *)this = -1; /*0x62717e*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x627184*/
  if ( v2 ) /*0x627190*/
  {
    *(_DWORD *)(v2 + 4) = 0; /*0x627192*/
    *(_DWORD *)(v2 + 8) = 0; /*0x627195*/
    *(_BYTE *)(v2 + 12) = 1; /*0x627198*/
    *(_BYTE *)(v2 + 13) = 0; /*0x62719c*/
    *(_DWORD *)v2 = &DynamicVectorClass<char *>::`vftable'; /*0x62719f*/
    *(_DWORD *)(v2 + 20) = 10; /*0x6271a5*/
    *(_DWORD *)(v2 + 16) = 0; /*0x6271ac*/
  }
  else
  {
    v2 = 0; /*0x6271b1*/
  }
  *(_DWORD *)&v1[4] = v2; /*0x6271b5*/
  v3 = __2_YAPAXI_Z(0x18u); /*0x6271b8*/
  if ( v3 ) /*0x6271c2*/
  {
    *(_DWORD *)(v3 + 4) = 0; /*0x6271c4*/
    *(_DWORD *)(v3 + 8) = 0; /*0x6271c7*/
    *(_BYTE *)(v3 + 12) = 1; /*0x6271ca*/
    *(_BYTE *)(v3 + 13) = 0; /*0x6271ce*/
    *(_DWORD *)v3 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x6271d1*/
    *(_DWORD *)(v3 + 20) = 10; /*0x6271d7*/
    *(_DWORD *)(v3 + 16) = 0; /*0x6271de*/
  }
  else
  {
    v3 = 0; /*0x6271e3*/
  }
  *(_DWORD *)&v1[8] = v3; /*0x6271e7*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x6271ea*/
  v5 = v4; /*0x6271ef*/
  if ( v4 ) /*0x6271f6*/
  {
    v6 = 31; /*0x6271fd*/
    v4[1] = HashStringMod31; /*0x627207*/
    v4[2] = 31; /*0x62720e*/
    v4[3] = 10; /*0x627211*/
    v7 = (_DWORD *)__2_YAPAXI_Z(0x2ECu); /*0x627218*/
    if ( v7 ) /*0x627222*/
    {
      *v7 = 31; /*0x627224*/
      v14 = v7 + 1; /*0x627229*/
      v8 = (FileSystem *)(v7 + 1); /*0x62722d*/
      do /*0x62724c*/
      {
        FileSystem::writeFile(v8, 0, 0); /*0x627233*/
        *(_DWORD *)v8 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x627238*/
        *(_DWORD *)&v8[20] = 10; /*0x62723e*/
        *(_DWORD *)&v8[16] = 0; /*0x627245*/
        v8 += 24; /*0x627248*/
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
    *(_DWORD *)&v1[12] = v5; /*0x62727d*/
    return v1; /*0x627280*/
  }
  else
  {
    *(_DWORD *)&v1[12] = 0; /*0x627289*/
    return v1; /*0x62728c*/
  }
}



// ==== 0x006272A0  FileSystem::FlushTempFiles  this=FileSystem  sig=csp ====
void __thiscall FileSystem::FlushTempFiles(FileSystem *this)
{
  FileSystem *v1; // ebp
  FileSystem *File; // eax
  FileSystem *v3; // eax
  int v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // esi
  char *v11; // edi
  char *v12; // edi
  int v13; // eax
  Flag *v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  const char *v19; // ebx
  FileSystem **v20; // eax
  FileSystem *v21; // edi
  _DWORD *v22; // eax
  int v23; // ebp
  int v24; // edi
  int v25; // ecx
  Flag *v26; // ebx
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // ebx
  _DWORD *v30; // esi
  char *v32; // [esp+Ch] [ebp-14h]
  char *v33; // [esp+Ch] [ebp-14h]
  _DWORD *v34; // [esp+10h] [ebp-10h]
  int v35; // [esp+10h] [ebp-10h]
  _DWORD *v36; // [esp+10h] [ebp-10h]
  int v37; // [esp+14h] [ebp-Ch]

  v1 = this; /*0x6272a4*/
  if ( this->q00C ) /*0x6272ab*/
  {
    File = g_FileExtensionState; /*0x6272b6*/
    if ( !g_FileExtensionState ) /*0x6272bd*/
    {
      v3 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6272c1*/
      if ( v3 ) /*0x6272cb*/
        File = (FileSystem *)FileSystem::findFile(v3); /*0x6272cf*/
      else
        File = 0; /*0x6272d6*/
      g_FileExtensionState = File; /*0x6272d8*/
    }
    v4 = 0; /*0x6272e2*/
    v5 = *(_DWORD *)(*(_DWORD *)&File[4] + 16); /*0x6272e4*/
    if ( v5 > 0 ) /*0x6272e9*/
    {
      do /*0x627305*/
      {
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)(*(_DWORD *)&File[4] + 4) + 4 * v4)); /*0x6272f5*/
        File = g_FileExtensionState; /*0x6272fa*/
        ++v4; /*0x627302*/
      }
      while ( v4 < v5 ); /*0x627305*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&File[4] + 12))(*(_DWORD *)&File[4]); /*0x62730e*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&g_FileExtensionState[8] + 12))(*(_DWORD *)&g_FileExtensionState[8]); /*0x62731b*/
    v6 = *(void (__thiscall ****)(_DWORD, int))&v1[4]; /*0x62731e*/
    if ( v6 ) /*0x627323*/
      (**v6)(v6, 1); /*0x627329*/
    v7 = *(void (__thiscall ****)(_DWORD, int))&v1[8]; /*0x62732b*/
    if ( v7 ) /*0x627330*/
      (**v7)(v7, 1); /*0x627336*/
    v8 = *(_DWORD **)&v1[12]; /*0x627338*/
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
        v12 = &v11[*v8]; /*0x627358*/
        if ( *((int *)v12 + 4) > 0 ) /*0x62735f*/
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
        v14 = (Flag *)(*((_DWORD *)v12 + 1) + 4 * v13); /*0x62736c*/
        if ( !(unsigned __int8)Flag::IsZero(v14) ) /*0x627371*/
          break; /*0x627371*/
        if ( v10 >= *((_DWORD *)v12 + 4) ) /*0x62737d*/
        {
          v8 = v34; /*0x62737f*/
          v1 = this; /*0x627383*/
          goto LABEL_19; /*0x627383*/
        }
      }
      v33 = (char *)v14; /*0x6273a7*/
      if ( v14 ) /*0x6273ab*/
      {
        while ( 2 ) /*0x6273b7*/
        {
          v15 = this->q00C; /*0x6273b7*/
          v16 = *(_DWORD *)v15 + 24 * ((*(int (__thiscall **)(char *))(v15 + 4))(v33) % *(_DWORD *)(v15 + 8)); /*0x6273d2*/
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
              if ( (unsigned __int8)String::Equals(v19, v33) ) /*0x6273fa*/
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
            v20 = (FileSystem **)(v19 + 256); /*0x627482*/
            v9 = v37; /*0x627488*/
          }
          v21 = *v20; /*0x627414*/
          if ( *v20 ) /*0x627414*/
          {
            FileSystem::mountDrive(*v20); /*0x62741c*/
            __3_YAXPAX_Z(v21); /*0x627422*/
          }
          v22 = (_DWORD *)this->q00C; /*0x62742e*/
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
              v26 = (Flag *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627454*/
              if ( !(unsigned __int8)Flag::IsZero(v26) ) /*0x627459*/
                break; /*0x627459*/
              if ( v10 >= *(_DWORD *)(v24 + 16) ) /*0x627465*/
              {
                v9 = v37; /*0x627467*/
                v22 = v36; /*0x62746b*/
                goto LABEL_39; /*0x62746b*/
              }
            }
            v33 = (char *)v26; /*0x627490*/
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
    v27 = *(_DWORD **)&v1[12]; /*0x62749e*/
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
    v30 = *(_DWORD **)&v1[12]; /*0x6274c2*/
    if ( v30 ) /*0x6274c9*/
    {
      if ( *v30 ) /*0x6274cb*/
        (**(void (__thiscall ***)(_DWORD, int))*v30)(*v30, 3); /*0x6274d5*/
      __3_YAXPAX_Z(v30); /*0x6274d8*/
    }
  }
}



// ==== 0x006274F0  ObjectClass::method_6274F0  this=ObjectClass  sig=csp ====
int __thiscall sub_6274F0(ObjectClass *this, const char *a2)
{
  int (__thiscall **ptr_C)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int i; // ebx
  int v7; // edi
  char String[256]; // [esp+10h] [ebp-100h] BYREF

  String::CopyUpper(String, a2); /*0x627505*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x62750a*/
  v4 = (int)*ptr_C + 24 * (ptr_C[1](String) % (int)ptr_C[2]); /*0x627521*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x627524*/
  if ( v5 < 0 ) /*0x627525*/
    return 0; /*0x627525*/
  for ( i = 260 * v5; ; i -= 260 ) /*0x62752e*/
  {
    v7 = *(_DWORD *)(v4 + 4) + i; /*0x627536*/
    if ( (unsigned __int8)String::Equals((const char *)v7, String) ) /*0x62753f*/
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
_DWORD *__thiscall MIXFile::Load(MIXFile *this, const char *a2)
{
  MIXFile *v2; // ebp
  int v3; // edx
  Struct *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v8; // ebx
  int i; // esi
  char *v10; // eax
  char v11; // cl
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  char *v15; // ebp
  __int16 *v16; // edx
  char *v17; // eax
  char *inited; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  char *v24; // eax
  char *v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  bool v30; // cc
  __int16 v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  __int16 v33; // [esp+14h] [ebp-410h] BYREF
  char v34; // [esp+16h] [ebp-40Eh]
  int v35; // [esp+18h] [ebp-40Ch]
  MIXFile *v36; // [esp+1Ch] [ebp-408h]
  int v37; // [esp+20h] [ebp-404h]
  char String[256]; // [esp+24h] [ebp-400h] BYREF
  Struct v39[192]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  v36 = this; /*0x62759c*/
  v3 = *(_DWORD *)this->__pad_0; /*0x6275a0*/
  if ( *(_DWORD *)this->__pad_0 == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy(String, a2); /*0x6275d6*/
  strcat(String, (const char *)&off_7E1BC6 + 112 * v3); /*0x627611*/
  strcat(String, asc_826598); /*0x62763d*/
  strcat(String, (const char *)off_836464); /*0x62766a*/
  _strupr(String); /*0x627678*/
  v5 = v39; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
    v5 = (Struct *)((char *)v5 + 3); /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  v7 = SearchMIXFile(String, 0); /*0x62769f*/
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(v39, v7, sizeof(v39)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    v10 = (char *)v39 + 2 * (i % 256) + i % 256; /*0x6276e2*/
    v31 = *(_WORD *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(_WORD *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)v2[1].__pad_0 + 16); /*0x627719*/
  v37 = v12; /*0x62771c*/
  v13 = __2_YAPAXI_Z(0x18u); /*0x627720*/
  v14 = (_DWORD *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(_DWORD *)(v13 + 4) = 0; /*0x627730*/
    *(_DWORD *)(v13 + 8) = 20; /*0x627733*/
    *(_BYTE *)(v13 + 12) = 1; /*0x62773a*/
    *(_BYTE *)(v13 + 13) = 0; /*0x62773e*/
    *(_DWORD *)v13 = &VectorClass<ColorScheme *>::`vftable'; /*0x627742*/
    *(_DWORD *)(v13 + 4) = __2_YAPAXI_Z(0x50u); /*0x627750*/
    *((_BYTE *)v14 + 13) = 1; /*0x627753*/
    *v14 = &DynamicVectorClass<ColorScheme *>::`vftable'; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  v35 = 0; /*0x62776d*/
  if ( v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*((_DWORD *)v2->field_4 + 1) + 4 * v8); /*0x62779b*/
      v16 = (__int16 *)(v32 + *(_DWORD *)(*(_DWORD *)v36[1].__pad_0 + 4)); /*0x6277a1*/
      v33 = *v16; /*0x6277a6*/
      v34 = *((_BYTE *)v16 + 2); /*0x6277ae*/
      v17 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( v17 ) /*0x6277bc*/
        inited = FontClass::InitMetrics(v17, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 1, 0); /*0x6277dc*/
      else
        inited = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(_DWORD *)inited = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((_BYTE *)v14 + 13) || !v20)
        && (v21 = v14[5], v21 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v20 + v21, 0) )
      {
        v22 = v14[4]; /*0x627810*/
        v23 = v14[1]; /*0x627813*/
        v14[4] = v22 + 1; /*0x627819*/
        *(_DWORD *)(v23 + 4 * v22) = inited; /*0x62781c*/
      }
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v25 = FontClass::InitMetrics(v24, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 53, 0); /*0x62784e*/
      else
        v25 = 0; /*0x627852*/
      *(_DWORD *)v25 = v19 + 1; /*0x627855*/
      v26 = v14[2]; /*0x627857*/
      if ( v14[4] < v26 /*0x62787a*/
        || (*((_BYTE *)v14 + 13) || !v26)
        && (v27 = v14[5], v27 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v26 + v27, 0) )
      {
        v28 = v14[4]; /*0x627881*/
        v29 = v14[1]; /*0x627884*/
        v14[4] = v28 + 1; /*0x62788a*/
        *(_DWORD *)(v29 + 4 * v28) = v25; /*0x62788d*/
      }
      v30 = ++v35 < v37; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = v35; /*0x62777d*/
      v2 = v36; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/
}



// ==== 0x006278C0  ObjectClass::method_6278C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6278C0(ObjectClass *this, const char *a2)
{
  int v3; // edx
  _DWORD *v4; // ecx
  int (__thiscall **ptr_C)(char *); // esi
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
  int v18; // [esp+10h] [ebp-208h]
  char String[256]; // [esp+14h] [ebp-204h] BYREF
  char v20[256]; // [esp+114h] [ebp-104h] BYREF
  int v21; // [esp+214h] [ebp-4h]

  v17 = MIXFile::Load((MIXFile *)this, a2); /*0x6278de*/
  v3 = __2_YAPAXI_Z(0x104u); /*0x6278e7*/
  if ( v3 ) /*0x6278ee*/
  {
    strcpy((char *)v3, a2); /*0x627906*/
    v4 = v17; /*0x62790f*/
    v18 = v3; /*0x627913*/
    *(_DWORD *)(v3 + 256) = v4; /*0x627917*/
  }
  else
  {
    v18 = 0; /*0x62791f*/
  }
  String::CopyUpper(String, a2); /*0x62792c*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x627931*/
  v6 = ptr_C[1](String); /*0x627938*/
  v7 = *((_DWORD *)*ptr_C + 6 * (v6 % (int)ptr_C[2]) + 4); /*0x627944*/
  v8 = (int)*ptr_C + 24 * (v6 % (int)ptr_C[2]); /*0x627948*/
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
_DWORD *__thiscall sub_627A10(ObjectClass *this, const char *a2)
{
  int (__thiscall **ptr_C)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebx
  const char *v7; // edi
  int *v8; // edi
  int v9; // esi
  MIXFile *v10; // ecx
  _DWORD *result; // eax
  int v12; // ebp
  int i; // ebx
  int v14; // eax
  void *v15; // edi
  void (__thiscall ***v16)(_DWORD, int); // ecx
  MIXFile *v18; // [esp+10h] [ebp-104h]
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  String::CopyUpper(String, a2); /*0x627a2c*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x627a31*/
  v4 = (int)*ptr_C + 24 * (ptr_C[1](String) % (int)ptr_C[2]); /*0x627a48*/
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
      if ( (unsigned __int8)String::Equals(v7, String) ) /*0x627a66*/
        break; /*0x627a66*/
      --v5; /*0x627a73*/
      v6 -= 260; /*0x627a74*/
      if ( v5 < 0 ) /*0x627a7c*/
        goto LABEL_5; /*0x627a7c*/
    }
    v8 = (int *)(v7 + 256); /*0x627b02*/
  }
  v9 = *v8; /*0x627a87*/
  v10 = (MIXFile *)MIXFile::Load((MIXFile *)this, a2); /*0x627a93*/
  result = *(_DWORD **)(v9 + 256); /*0x627a95*/
  v18 = v10; /*0x627a9d*/
  if ( result ) /*0x627aa1*/
  {
    v12 = result[4]; /*0x627aa3*/
    for ( i = 0; i < v12; ++i ) /*0x627aaa*/
    {
      v14 = *(_DWORD *)(*(_DWORD *)(v9 + 256) + 4); /*0x627ab2*/
      v15 = *(void **)(v14 + 4 * i); /*0x627ab5*/
      if ( v15 ) /*0x627aba*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v14 + 4 * i)); /*0x627abe*/
        __3_YAXPAX_Z(v15); /*0x627ac4*/
      }
    }
    v16 = *(void (__thiscall ****)(_DWORD, int))(v9 + 256); /*0x627ad1*/
    if ( v16 ) /*0x627ad9*/
      (**v16)(v16, 1); /*0x627adf*/
    *(_DWORD *)(v9 + 256) = 0; /*0x627ae5*/
    *(_DWORD *)(v9 + 256) = v18; /*0x627aef*/
    return v18->__pad_0; /*0x627ae1*/
  }
  else
  {
    *(_DWORD *)(v9 + 256) = v10; /*0x627b0d*/
  }
  return result; /*0x627af5*/
}



// ==== 0x00627B20  ColorSchemeClass::LoadAllSchemes  this=ColorSchemeClass  sig=csp ====
int __thiscall ColorSchemeClass::LoadAllSchemes(ColorSchemeClass *this, int a2)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // esi
  char *v5; // edi
  int v6; // ecx
  Flag *v7; // ebx
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
  Flag *v26; // ebx
  char *i; // [esp+10h] [ebp-118h]
  char *v28; // [esp+10h] [ebp-118h]
  char *v29; // [esp+10h] [ebp-118h]
  int v30; // [esp+10h] [ebp-118h]
  int v31; // [esp+14h] [ebp-114h]
  int j; // [esp+14h] [ebp-114h]
  int v34; // [esp+1Ch] [ebp-10Ch]
  char String[256]; // [esp+28h] [ebp-100h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 3); /*0x627b2f*/
  *this = (ColorSchemeClass)a2; /*0x627b32*/
  result = v2[2]; /*0x627b35*/
  v4 = 0; /*0x627b38*/
  v34 = 0; /*0x627b41*/
  if ( result > 0 ) /*0x627b49*/
  {
    for ( i = 0; ; i += 24 ) /*0x627b4f*/
    {
      v5 = &i[*v2]; /*0x627b5a*/
      if ( *((int *)v5 + 4) > 0 ) /*0x627b61*/
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
      v7 = (Flag *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x627b6e*/
      result = Flag::IsZero(v7); /*0x627b73*/
      if ( !(_BYTE)result ) /*0x627b7a*/
        break; /*0x627b7a*/
      if ( v4 >= *((_DWORD *)v5 + 4) ) /*0x627b7f*/
        goto LABEL_6; /*0x627b7f*/
    }
    v28 = (char *)v7; /*0x627bad*/
    if ( v7 ) /*0x627bb1*/
    {
      do /*0x627d0c*/
      {
        String::CopyUpper(String, v28); /*0x627bc0*/
        v9 = *((_DWORD *)this + 3); /*0x627bc9*/
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
            if ( (unsigned __int8)String::Equals(v15, String) ) /*0x627c08*/
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
        v29 = (char *)MIXFile::Load((MIXFile *)this, v28); /*0x627c32*/
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
              ColorScheme::Destructor(*(ColorScheme **)(v19 + 4 * v18)); /*0x627c5f*/
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
        v23 = (_DWORD *)*((_DWORD *)this + 3); /*0x627ca2*/
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
          v26 = (Flag *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627cc9*/
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
        v28 = (char *)v26; /*0x627d08*/
      }
      while ( v26 ); /*0x627d0c*/
    }
  }
  return result; /*0x627b9e*/
}



// ==== 0x00627D20  _DynamicVectorClass_PAVColorScheme::Clear_627D20  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D20(
        _DynamicVectorClass_PAVColorScheme *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d26*/
  this->m_10 = 0; /*0x627d29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x627d30*/
  {
    __3_YAXPAX_Z(v2); /*0x627d36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627d3e*/
  }
  BYTE1(this->m_C) = 0; /*0x627d41*/
  this->m_8 = 0; /*0x627d44*/
}



// ==== 0x00627D50  _DynamicVectorClass_PAVColorScheme::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetCount(
        _DynamicVectorClass_PAVColorScheme *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627d50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x627d65*/
  else
    return 0; /*0x627d57*/
}



// ==== 0x00627D70  _VectorClass_PAVColorScheme::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::Get(_VectorClass_PAVColorScheme *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x627d7a*/
}



// ==== 0x00627D80  _DynamicVectorClass_VHSVClass::Clear_627D80  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80(
        _DynamicVectorClass_VHSVClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d86*/
  this->m_10 = 0; /*0x627d89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x627d90*/
  {
    __3_YAXPAX_Z(v2); /*0x627d96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627d9e*/
  }
  BYTE1(this->m_C) = 0; /*0x627da1*/
  this->m_8 = 0; /*0x627da4*/
}



// ==== 0x00627DB0  _DynamicVectorClass_VHSVClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(
        _DynamicVectorClass_VHSVClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627db0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x627dce*/
  else
    return 0; /*0x627db7*/
}



// ==== 0x00627DE0  _VectorClass_VHSVClass::GetItem  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(
        _VectorClass_VHSVClass *this,
        int a2,
        int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 3 * a3; /*0x627ded*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x627df8*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x627dff*/
  return a2; /*0x627dfb*/
}



// ==== 0x00627E10  _VectorClass_PAVColorScheme::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::Add(_VectorClass_PAVColorScheme *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x627e12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x627e1d*/
  {
    v3 = 0; /*0x627e1f*/
    if ( m_8 <= 0 ) /*0x627e23*/
      return 1; /*0x627e43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x627e25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x627e2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x627e34*/
    {
      ++v3; /*0x627e36*/
      ++v4; /*0x627e37*/
      if ( v3 >= m_8 ) /*0x627e3c*/
        return 1; /*0x627e3c*/
    }
  }
  return 0; /*0x627e3e*/
}



// ==== 0x00627E50  _VectorClass_PAVColorScheme::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::Release(_VectorClass_PAVColorScheme *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x627e5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x627e66*/
    if ( a3 ) /*0x627e6c*/
      v4 = a3; /*0x627e82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x627e7e*/
    LOBYTE(this->m_C) = 1; /*0x627e86*/
    if ( v4 ) /*0x627e8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x627e95*/
      {
        m_8 = this->m_8; /*0x627e9c*/
        if ( a2 < m_8 ) /*0x627ea1*/
          m_8 = a2; /*0x627ea3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x627ea9*/
          ++i; /*0x627eae*/
        if ( BYTE1(this->m_C) ) /*0x627ebb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627ec6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x627ece*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x627ed7*/
      this->m_8 = a2; /*0x627edf*/
      BYTE1(this->m_C) = a3 == 0; /*0x627ee2*/
      return 1; /*0x627ee8*/
    }
    else
    {
      return 0; /*0x627e8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVColorScheme *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x627ef2*/
    return 1; /*0x627ef8*/
  }
}



// ==== 0x00627F00  _VectorClass_PAVColorScheme::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Remove(_VectorClass_PAVColorScheme *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x627f0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627f13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627f1b*/
  }
  BYTE1(this->m_C) = 0; /*0x627f1e*/
  this->m_8 = 0; /*0x627f21*/
}



// ==== 0x00627F30  _VectorClass_PAVColorScheme::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::GetSize(_VectorClass_PAVColorScheme *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x627f30*/
    return 0; /*0x627f38*/
  m_8 = this->m_8; /*0x627f3e*/
  result = 0; /*0x627f41*/
  if ( m_8 <= 0 ) /*0x627f45*/
    return -1; /*0x627f5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x627f4b*/
  {
    if ( ++result >= m_8 ) /*0x627f5a*/
      return -1; /*0x627f5a*/
  }
  return result; /*0x627f3a*/
}



// ==== 0x00627F70  _VectorClass_PAVColorScheme::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetCapacity(_VectorClass_PAVColorScheme *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627f70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x627f85*/
  else
    return 0; /*0x627f77*/
}



// ==== 0x00627F90  _DynamicVectorClass_PAVColorScheme::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity(
        _DynamicVectorClass_PAVColorScheme *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x627f9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x627fa2*/
    if ( a3 ) /*0x627fa8*/
      v4 = a3; /*0x627fbe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x627fba*/
    LOBYTE(this->m_C) = 1; /*0x627fc2*/
    if ( !v4 ) /*0x627fc6*/
      return 0; /*0x62803a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x627fc8*/
    {
      m_8 = this->m_8; /*0x627fcf*/
      if ( a2 < m_8 ) /*0x627fd4*/
        m_8 = a2; /*0x627fd6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x627fdc*/
        ++i; /*0x627fe1*/
      if ( BYTE1(this->m_C) ) /*0x627fee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627ff9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628001*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x62800a*/
    this->m_8 = a2; /*0x628012*/
    BYTE1(this->m_C) = a3 == 0; /*0x628015*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVColorScheme *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62801e*/
  }
  v7 = this->m_8; /*0x628021*/
  if ( v7 < this->m_10 ) /*0x628029*/
    this->m_10 = v7; /*0x62802b*/
  return 1; /*0x62802e*/
}



// ==== 0x00628040  _DynamicVectorClass_PAVColorScheme::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::FindItemIndex(
        _DynamicVectorClass_PAVColorScheme *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x628040*/
  result = 0; /*0x628043*/
  if ( m_10 <= 0 ) /*0x628048*/
    return -1; /*0x62805f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62804e*/
  {
    if ( ++result >= m_10 ) /*0x62805d*/
      return -1; /*0x62805d*/
  }
  return result; /*0x628062*/
}



// ==== 0x00628070  DynamicVectorArray::Constructor  this=DynamicVectorArray  sig=csp ====
int *__thiscall DynamicVectorArray::Constructor(DynamicVectorArray *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  DynamicVectorArray v11; // eax
  int v12; // edx
  int v13; // eax

  v4 = a2; /*0x62807b*/
  *((_DWORD *)this + 1) = a4; /*0x628084*/
  *((_DWORD *)this + 2) = a3; /*0x628087*/
  *((_DWORD *)this + 3) = a2; /*0x628091*/
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
        *v9 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6280c6*/
        *v9 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6280cc*/
        v9[5] = 10; /*0x6280d2*/
        v9[4] = 0; /*0x6280d5*/
        v9 += 6; /*0x6280d8*/
        --v10; /*0x6280db*/
      }
      while ( v10 ); /*0x6280dc*/
      v4 = a2; /*0x6280de*/
    }
    v11 = (DynamicVectorArray)v8; /*0x6280e2*/
  }
  else
  {
    v11 = 0; /*0x6280e7*/
  }
  v12 = *((_DWORD *)this + 2); /*0x6280e9*/
  *this = v11; /*0x6280ec*/
  v13 = 0; /*0x6280ee*/
  if ( v12 > 0 ) /*0x6280f2*/
  {
    do /*0x628103*/
    {
      ++v13; /*0x6280f6*/
      *(_DWORD *)(v7 + *(_DWORD *)this + 20) = v4; /*0x6280f7*/
      v7 += 24; /*0x6280fe*/
    }
    while ( v13 < *((_DWORD *)this + 2) ); /*0x628103*/
  }
  return (int *)this; /*0x628107*/
}



// ==== 0x00628110  FileSystem::openFile  this=FileSystem  sig=csp ====
const char *__thiscall FileSystem::openFile(FileSystem *this, const char *a2)
{
  int v2; // ebp
  int v3; // edi
  int i; // ebx
  const char *v5; // esi

  v2 = *(_DWORD *)this + 24 * ((*((int (__thiscall **)(const char *))this + 1))(a2) % this->q008); /*0x62812a*/
  v3 = *(_DWORD *)(v2 + 16) - 1; /*0x62812d*/
  if ( v3 < 0 ) /*0x62812e*/
    return 0; /*0x62815a*/
  for ( i = 260 * v3; ; i -= 260 ) /*0x628137*/
  {
    v5 = (const char *)(i + *(_DWORD *)(v2 + 4)); /*0x628141*/
    if ( (unsigned __int8)String::Equals(v5, a2) ) /*0x628146*/
      break; /*0x628146*/
    if ( --v3 < 0 ) /*0x628158*/
      return 0; /*0x628158*/
  }
  return v5 + 256; /*0x62815a*/
}



// ==== 0x00628170  FileSystem::closeFile  this=FileSystem  sig=csp ====
_BYTE *__thiscall FileSystem::closeFile(FileSystem *this, int *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  Flag *v6; // ebp
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
    v4 = *(_DWORD *)this + 24 * *a2; /*0x628194*/
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
    v6 = (Flag *)(v5 + 260 * v3); /*0x6281ad*/
    if ( !(unsigned __int8)Flag::IsZero(v6) ) /*0x6281b2*/
      return v6->__pad_0; /*0x6281de*/
    v3 = a2[1]; /*0x6281bb*/
    if ( v3 >= *(_DWORD *)(v4 + 16) ) /*0x6281c3*/
      goto LABEL_6; /*0x6281c3*/
  }
}



// ==== 0x006281F0  _VectorClass_VHSVClass::IsEqualTo  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::IsEqualTo(
        _VectorClass_VHSVClass *this,
        int a2)
{
  int m_8; // eax
  int v4; // ebx
  int i; // esi

  m_8 = this->m_8; /*0x6281fd*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x628202*/
  {
    v4 = 0; /*0x628204*/
    if ( m_8 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    for ( i = 0; /*0x62820a*/
          !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
             (DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *)(i + *(_DWORD *)&this->m_1[3]),
             (_BYTE *)(i + *(_DWORD *)(a2 + 4)));
          i += 3 )
    {
      if ( ++v4 >= this->m_8 ) /*0x628229*/
        return 1; /*0x628229*/
    }
  }
  return 0; /*0x62822b*/
}



// ==== 0x00628240  FileExtension::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall FileExtension::Constructor(FileExtension *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->FileExtension_field_0x04 = 0; /*0x62824d*/
  this->FileExtension_field_0x08 = a2; /*0x628250*/
  LOBYTE(this->FileExtension_field_0x0C) = 1; /*0x628253*/
  BYTE1(this->FileExtension_field_0x0C) = 0; /*0x628257*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x62825a*/
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
      this->FileExtension_field_0x04 = a3; /*0x628283*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x62828c*/
      if ( v6 ) /*0x628296*/
      {
        if ( a2 - 1 >= 0 ) /*0x62829d*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x62829f*/
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
      this->FileExtension_field_0x04 = v6; /*0x6282b5*/
      BYTE1(this->FileExtension_field_0x0C) = 1; /*0x6282b8*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x6282bc*/
  *((_DWORD *)this + 5) = 10; /*0x6282c2*/
  this->Items = 0; /*0x6282c9*/
  return this->__pad_0; /*0x6282ce*/
}



// ==== 0x006282E0  _VectorClass_VHSVClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::SetCapacity(_VectorClass_VHSVClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x6282e2*/
  if ( a2 ) /*0x6282ee*/
  {
    v5 = a3; /*0x6282f4*/
    LOBYTE(this->m_C) = 0; /*0x6282f8*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x628304*/
      if ( v6 ) /*0x62830e*/
      {
        if ( a2 - 1 >= 0 ) /*0x628315*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x628317*/
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
        v5 = (char *)v6; /*0x628329*/
      }
      else
      {
        v5 = 0; /*0x62832d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x62834c*/
    if ( v5 ) /*0x628350*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62835b*/
      {
        m_8 = this->m_8; /*0x628360*/
        if ( a2 < m_8 ) /*0x628365*/
          m_8 = a2; /*0x628367*/
        if ( m_8 > 0 ) /*0x62836b*/
        {
          v13 = 0; /*0x62836d*/
          do /*0x628389*/
          {
            v14 = *(_DWORD *)&this->m_1[3] + v13; /*0x628374*/
            v15 = &v5[v13]; /*0x628376*/
            v13 += 3; /*0x628379*/
            --m_8; /*0x62837c*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x628380*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x628386*/
          }
          while ( m_8 ); /*0x628389*/
          v3 = a2; /*0x62838b*/
        }
        if ( BYTE1(this->m_C) ) /*0x628391*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62839a*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6283a2*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x6283ad*/
      this->m_8 = v3; /*0x6283b3*/
      BYTE1(this->m_C) = a3 == 0; /*0x6283b6*/
      return 1; /*0x6283bc*/
    }
    else
    {
      return 0; /*0x628355*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VHSVClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6283c6*/
    return 1; /*0x6283cc*/
  }
}



// ==== 0x006283E0  _VectorClass_VHSVClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Destroy(_VectorClass_VHSVClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6283ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6283f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6283fb*/
  }
  BYTE1(this->m_C) = 0; /*0x6283fe*/
  this->m_8 = 0; /*0x628401*/
}



// ==== 0x00628410  _VectorClass_VHSVClass::ScalarDeletingDestructor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::ScalarDeletingDestructor(_VectorClass_VHSVClass *this, int a2)
{
  if ( !LOBYTE(this->m_C) ) /*0x628416*/
    return 0; /*0x628420*/
  if ( this->m_8 > 0 ) /*0x62842d*/
    VtableStub::5175D0(); /*0x62843c*/
  return -1; /*0x62841d*/
}



// ==== 0x00628470  _VectorClass_VHSVClass::GetItemIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetItemIndex(_VectorClass_VHSVClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628470*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x62848e*/
  else
    return 0; /*0x628477*/
}



// ==== 0x006284A0  _DynamicVectorClass_VHSVClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity_0(
        _DynamicVectorClass_VHSVClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    v5 = a3; /*0x6284b4*/
    LOBYTE(this->m_C) = 0; /*0x6284b8*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x6284c4*/
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x6284d7*/
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
        v5 = (char *)v6; /*0x6284e9*/
      }
      else
      {
        v5 = 0; /*0x6284ed*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x628512*/
    {
      m_8 = this->m_8; /*0x628517*/
      if ( a2 < m_8 ) /*0x62851c*/
        m_8 = a2; /*0x62851e*/
      if ( m_8 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          v13 = *(_DWORD *)&this->m_1[3] + v12; /*0x62852b*/
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --m_8; /*0x628533*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x628537*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x62853d*/
        }
        while ( m_8 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( BYTE1(this->m_C) ) /*0x628548*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628551*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628559*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x628564*/
    this->m_8 = v3; /*0x62856a*/
    BYTE1(this->m_C) = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VHSVClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628576*/
  }
  v15 = this->m_8; /*0x628579*/
  if ( v15 < this->m_10 ) /*0x628581*/
    this->m_10 = v15; /*0x628583*/
  return 1; /*0x628586*/
}



// ==== 0x006285A0  _DynamicVectorClass_VHSVClass::ProcessAll  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ProcessAll(
        _DynamicVectorClass_VHSVClass *this,
        int a2)
{
  if ( this->m_10 > 0 ) /*0x6285ad*/
    VtableStub::5175D0(); /*0x6285bc*/
  return -1; /*0x6285d0*/
}



// ==== 0x006285F0  _VectorClass_PAVColorScheme::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::QueryInterface(_VectorClass_PAVColorScheme *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6285f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ColorScheme *>::`vftable'; /*0x6285f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628600*/
  {
    __3_YAXPAX_Z(v3); /*0x628608*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628610*/
  }
  BYTE1(this->m_C) = 0; /*0x62861b*/
  this->m_8 = 0; /*0x628621*/
  if ( (a2 & 1) != 0 ) /*0x628628*/
    __3_YAXPAX_Z(this); /*0x62862b*/
  return this->__pad_0; /*0x628635*/
}



// ==== 0x00628640  _DynamicVectorClass_PAVColorScheme::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(
        _DynamicVectorClass_PAVColorScheme *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628643*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ColorScheme *>::`vftable'; /*0x628646*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628650*/
  {
    __3_YAXPAX_Z(v3); /*0x628658*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628660*/
  }
  BYTE1(this->m_C) = 0; /*0x62866b*/
  this->m_8 = 0; /*0x628671*/
  if ( (a2 & 1) != 0 ) /*0x628678*/
    __3_YAXPAX_Z(this); /*0x62867b*/
  return this->__pad_0; /*0x628685*/
}



// ==== 0x00628690  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Add  this=DynamicVector  sig=csp ====
char *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x62869a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x62869c*/
    v4 = (char *)this - 4; /*0x6286a0*/
    v5 = 3 * v3; /*0x6286a3*/
    v6 = v3 - 1; /*0x6286a6*/
    v7 = &this->__pad_0[8 * v5]; /*0x6286a7*/
    if ( v6 >= 0 ) /*0x6286aa*/
    {
      v8 = v6 + 1; /*0x6286ad*/
      do /*0x6286da*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x6286b2*/
        v7 -= 24; /*0x6286b5*/
        *(_DWORD *)v7 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6286ba*/
        if ( v9 && v7[13] ) /*0x6286c2*/
        {
          __3_YAXPAX_Z(v9); /*0x6286c8*/
          *((_DWORD *)v7 + 1) = 0; /*0x6286d0*/
        }
        --v8; /*0x6286d3*/
        v7[13] = 0; /*0x6286d4*/
        *((_DWORD *)v7 + 2) = 0; /*0x6286d7*/
      }
      while ( v8 ); /*0x6286da*/
    }
    if ( (a2 & 1) != 0 ) /*0x6286e2*/
      __3_YAXPAX_Z(v4); /*0x6286e5*/
    return v4; /*0x6286ed*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x6286f5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6286fc*/
    if ( v11 && BYTE1(this->m_C) ) /*0x628704*/
    {
      __3_YAXPAX_Z(v11); /*0x62870a*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x628712*/
    }
    BYTE1(this->m_C) = 0; /*0x628719*/
    this->m_8 = 0; /*0x62871e*/
    if ( (a2 & 1) != 0 ) /*0x628721*/
      __3_YAXPAX_Z(this); /*0x628724*/
    return this->__pad_0; /*0x62872c*/
  }
}



// ==== 0x00628740  FileSystem::readFile  this=DynamicVector  sig=csp ====
int __thiscall FileSystem::readFile(FileSystem *this)
{
  this->IsInitialized = 1; /*0x628742*/
  this->Items = 0; /*0x628746*/
  this->q008 = 0; /*0x628749*/
  this->IsAllocated = 0; /*0x62874c*/
  *(_DWORD *)this = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x62874f*/
  this->CapacityIncrement = 10; /*0x628755*/
  this->Items = 0; /*0x62875c*/
  return 0; /*0x62875f*/
}



// ==== 0x00628760  _VectorClass_VHSVClass::Constructor_VectorClass_HSVClass_  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(
        _VectorClass_VHSVClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x628766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628770*/
  {
    __3_YAXPAX_Z(v3); /*0x628778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628780*/
  }
  BYTE1(this->m_C) = 0; /*0x62878b*/
  this->m_8 = 0; /*0x628791*/
  if ( (a2 & 1) != 0 ) /*0x628798*/
    __3_YAXPAX_Z(this); /*0x62879b*/
  return this->__pad_0; /*0x6287a5*/
}



// ==== 0x006287B0  _DynamicVectorClass_VHSVClass::Destructor_2  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(
        _DynamicVectorClass_VHSVClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6287b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x6287b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6287c0*/
  {
    __3_YAXPAX_Z(v3); /*0x6287c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6287d0*/
  }
  BYTE1(this->m_C) = 0; /*0x6287db*/
  this->m_8 = 0; /*0x6287e1*/
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    __3_YAXPAX_Z(this); /*0x6287eb*/
  return this->__pad_0; /*0x6287f5*/
}



// ==== 0x00628800  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::ddtor  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x628806*/
  this->m_10 = 0; /*0x628809*/
  if ( v2 && BYTE1(this->m_C) ) /*0x628810*/
  {
    __3_YAXPAX_Z(v2); /*0x628816*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62881e*/
  }
  BYTE1(this->m_C) = 0; /*0x628821*/
  this->m_8 = 0; /*0x628824*/
}



// ==== 0x00628830  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Get  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628830*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x104u; /*0x62884e*/
  else
    return 0; /*0x628837*/
}



// ==== 0x00628860  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)&this->m_1[3] + 260 * a3; /*0x628876*/
  String::Copy((char *)a2, (const char *)v3); /*0x62887a*/
  *(_DWORD *)(a2 + 256) = *(_DWORD *)(v3 + 256); /*0x628887*/
  return a2; /*0x62888d*/
}



// ==== 0x006288A0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::AddRef(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  int m_8; // eax

  m_8 = this->m_8; /*0x6288ad*/
  if ( m_8 != *(_DWORD *)(a2 + 8) ) /*0x6288b2*/
    return 0; /*0x6288e9*/
  if ( m_8 > 0 ) /*0x6288b8*/
    j_Stub_InfiniteLoop(*(_DWORD *)&this->m_1[3], *(_DWORD *)(a2 + 4)); /*0x6288c6*/
  return 1; /*0x6288dd*/
}



// ==== 0x006288F0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_0  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::SetCapacity_0(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        _BYTE *a3)
{
  int v3; // edi
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v11; // ebx
  char *v12; // edi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  char *v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x6288f7*/
  if ( a2 ) /*0x6288ff*/
  {
    v5 = (Byte *)a3; /*0x628905*/
    LOBYTE(this->m_C) = 0; /*0x628909*/
    if ( a3 ) /*0x62890f*/
    {
      if ( a2 - 1 >= 0 ) /*0x628965*/
      {
        v8 = a2; /*0x628967*/
        do /*0x628978*/
        {
          Byte::Zero(v5); /*0x62896c*/
          v5 += 65; /*0x628971*/
          --v8; /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = a3; /*0x62897e*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(260 * a2); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        v7 = (Byte *)v6; /*0x62892d*/
        if ( a2 - 1 >= 0 ) /*0x628931*/
        {
          v14 = a2; /*0x628934*/
          do /*0x62894e*/
          {
            Byte::Zero(v7); /*0x62893a*/
            v7 += 65; /*0x628943*/
            --v14; /*0x62894a*/
          }
          while ( v14 ); /*0x62894e*/
        }
        v15 = (char *)v6; /*0x628950*/
      }
      else
      {
        v15 = 0; /*0x628956*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62899a*/
      {
        m_8 = this->m_8; /*0x6289a1*/
        if ( a2 < m_8 ) /*0x6289a6*/
          m_8 = a2; /*0x6289a8*/
        if ( m_8 > 0 ) /*0x6289ac*/
        {
          v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = m_8; /*0x6289b2*/
          do /*0x6289e4*/
          {
            v13 = v11 + *(_DWORD *)&this->m_1[3]; /*0x6289bb*/
            String::CopyChecked(v12, (const char *)v13); /*0x6289be*/
            *((_DWORD *)v12 + 64) = *(_DWORD *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 += 260; /*0x6289d9*/
            --v16; /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = a2; /*0x6289e6*/
        }
        if ( BYTE1(this->m_C) ) /*0x6289ea*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6289f5*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6289fd*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v15; /*0x628a0a*/
      this->m_8 = v3; /*0x628a13*/
      BYTE1(this->m_C) = a3 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }
}



// ==== 0x00628A40  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Destroy_0(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x628a4d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628a53*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628a5b*/
  }
  BYTE1(this->m_C) = 0; /*0x628a5e*/
  this->m_8 = 0; /*0x628a61*/
}



// ==== 0x00628A70  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_1  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::SetCapacity_1(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( !LOBYTE(this->m_C) ) /*0x628a76*/
    return 0; /*0x628a80*/
  if ( this->m_8 > 0 ) /*0x628a8d*/
    Stub::InfiniteLoop(*(_DWORD *)&this->m_1[3], a2); /*0x628a9c*/
  return -1; /*0x628a7d*/
}



// ==== 0x00628AD0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetItemIndex_0(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628ad0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x104u; /*0x628aee*/
  else
    return 0; /*0x628ad7*/
}



// ==== 0x00628B00  VectorClass::sub_628B00  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628B00(VectorClass *this, int a2, _BYTE *a3)
{
  int v3; // esi
  Byte *v5; // ebp
  Byte *v6; // ebx
  Byte *v7; // ebp

  v3 = a2; /*0x628b03*/
  this->Items = 0; /*0x628b0c*/
  this->Capacity = a2; /*0x628b13*/
  this->IsInitialized = 1; /*0x628b16*/
  this->IsAllocated = 0; /*0x628b1a*/
  this->ptr_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628b1e*/
  if ( a2 ) /*0x628b24*/
  {
    if ( a3 ) /*0x628b2c*/
    {
      v5 = (Byte *)a3; /*0x628b31*/
      if ( a2 - 1 >= 0 ) /*0x628b35*/
      {
        do /*0x628b48*/
        {
          Byte::Zero(v5); /*0x628b3c*/
          v5 += 65; /*0x628b41*/
          --v3; /*0x628b47*/
        }
        while ( v3 ); /*0x628b48*/
      }
      this->Items = a3; /*0x628b4a*/
    }
    else
    {
      v6 = (Byte *)__2_YAPAXI_Z(260 * a2); /*0x628b5f*/
      if ( v6 ) /*0x628b66*/
      {
        v7 = v6; /*0x628b6b*/
        if ( a2 - 1 >= 0 ) /*0x628b6f*/
        {
          do /*0x628b82*/
          {
            Byte::Zero(v7); /*0x628b76*/
            v7 += 65; /*0x628b7b*/
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
      this->IsAllocated = 1; /*0x628b8b*/
    }
  }
  this->ptr_0 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628b8f*/
  *((_DWORD *)this + 5) = 10; /*0x628b95*/
  this->Items = 0; /*0x628b9c*/
  return &this->ptr_0; /*0x628ba5*/
}



// ==== 0x00628BB0  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Remove  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        _BYTE *a3)
{
  int v3; // edi
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v10; // ebx
  char *v11; // edi
  int v12; // esi
  int v13; // eax
  int v15; // [esp+10h] [ebp-8h]
  char *v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x628bb7*/
  if ( a2 ) /*0x628bbf*/
  {
    v5 = (Byte *)a3; /*0x628bc5*/
    LOBYTE(this->m_C) = 0; /*0x628bc9*/
    if ( a3 ) /*0x628bcf*/
    {
      if ( a2 - 1 >= 0 ) /*0x628c25*/
      {
        v8 = a2; /*0x628c27*/
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 65; /*0x628c31*/
          --v8; /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = a3; /*0x628c3e*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(260 * a2); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = (Byte *)v6; /*0x628bed*/
        if ( a2 - 1 >= 0 ) /*0x628bf1*/
        {
          v15 = a2; /*0x628bf4*/
          do /*0x628c0e*/
          {
            Byte::Zero(v7); /*0x628bfa*/
            v7 += 65; /*0x628c03*/
            --v15; /*0x628c0a*/
          }
          while ( v15 ); /*0x628c0e*/
        }
        v16 = (char *)v6; /*0x628c10*/
      }
      else
      {
        v16 = 0; /*0x628c16*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x628c52*/
    {
      m_8 = this->m_8; /*0x628c59*/
      if ( a2 < m_8 ) /*0x628c5e*/
        m_8 = a2; /*0x628c60*/
      if ( m_8 > 0 ) /*0x628c64*/
      {
        v10 = 0; /*0x628c66*/
        v11 = v16; /*0x628c68*/
        v17 = m_8; /*0x628c6a*/
        do /*0x628c9c*/
        {
          v12 = v10 + *(_DWORD *)&this->m_1[3]; /*0x628c73*/
          String::CopyChecked(v11, (const char *)v12); /*0x628c76*/
          *((_DWORD *)v11 + 64) = *(_DWORD *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 += 260; /*0x628c91*/
          --v17; /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = a2; /*0x628c9e*/
      }
      if ( BYTE1(this->m_C) ) /*0x628ca2*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628cad*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628cb5*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v16; /*0x628cc2*/
    this->m_8 = v3; /*0x628cce*/
    BYTE1(this->m_C) = a3 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628cdb*/
  }
  v13 = this->m_8; /*0x628cde*/
  if ( v13 < this->m_10 ) /*0x628ce6*/
    this->m_10 = v13; /*0x628ce8*/
  return 1; /*0x628ceb*/
}



// ==== 0x00628D10  FileExtension::CheckExtensionMatch  this=FileExtension  sig=csp ====
char __thiscall FileExtension::CheckExtensionMatch(FileExtension *this, int a2)
{
  int FileExtension_field_0x08; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int FileExtension_field_0x04; // eax
  int v10; // esi

  FileExtension_field_0x08 = this->FileExtension_field_0x08; /*0x628d13*/
  if ( this->q004 >= FileExtension_field_0x08 ) /*0x628d1b*/
  {
    if ( !BYTE1(this->FileExtension_field_0x0C) && FileExtension_field_0x08 ) /*0x628d26*/
      return 0; /*0x628d26*/
    v4 = *((_DWORD *)this + 5); /*0x628d28*/
    if ( v4 <= 0 /*0x628d38*/
      || !(*(unsigned __int8 (__thiscall **)(FileExtension *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            FileExtension_field_0x08 + v4,
            0) )
    {
      return 0; /*0x628d3f*/
    }
  }
  v6 = this->q004; /*0x628d45*/
  v7 = v6 + 1; /*0x628d52*/
  v8 = 65 * v6; /*0x628d55*/
  FileExtension_field_0x04 = this->FileExtension_field_0x04; /*0x628d57*/
  this->q004 = v7; /*0x628d5a*/
  v10 = FileExtension_field_0x04 + 4 * v8; /*0x628d5e*/
  String::CopyChecked((char *)v10, (const char *)a2); /*0x628d63*/
  *(_DWORD *)(v10 + 256) = *(_DWORD *)(a2 + 256); /*0x628d6f*/
  return 1; /*0x628d41*/
}



// ==== 0x00628D80  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetSize(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( this->m_10 > 0 ) /*0x628d8d*/
    Stub::InfiniteLoop(*(_DWORD *)&this->m_1[3], a2); /*0x628d9c*/
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
_DWORD *__thiscall VectorClass::ConstructHSV(VectorClass *this, int a2, int a3)
{
  void *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x628df9*/
  this->Items = 0; /*0x628dfd*/
  this->Capacity = a2; /*0x628e00*/
  this->IsInitialized = 1; /*0x628e03*/
  this->IsAllocated = 0; /*0x628e07*/
  this->ptr_0 = &VectorClass<HSVClass>::`vftable'; /*0x628e0a*/
  if ( !a2 ) /*0x628e10*/
    return &this->ptr_0; /*0x628e70*/
  if ( !a3 ) /*0x628e18*/
  {
    v8 = __2_YAPAXI_Z(3 * a2); /*0x628e42*/
    if ( v8 ) /*0x628e4c*/
    {
      if ( a2 - 1 >= 0 ) /*0x628e53*/
      {
        v9 = (_BYTE *)(v8 + 2); /*0x628e55*/
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
      v4 = (void *)v8; /*0x628e67*/
    }
    this->Items = v4; /*0x628e69*/
    this->IsAllocated = 1; /*0x628e6c*/
    return &this->ptr_0; /*0x628e6c*/
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
  this->Items = (void *)a3; /*0x628e33*/
  return &this->ptr_0; /*0x628e38*/
}



// ==== 0x00628E80  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::Constructor(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628e83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628e86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628e90*/
  {
    __3_YAXPAX_Z(v3); /*0x628e98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628ea0*/
  }
  BYTE1(this->m_C) = 0; /*0x628eab*/
  this->m_8 = 0; /*0x628eb1*/
  if ( (a2 & 1) != 0 ) /*0x628eb8*/
    __3_YAXPAX_Z(this); /*0x628ebb*/
  return this->__pad_0; /*0x628ec5*/
}



// ==== 0x00628ED0  FileSystem::writeFile  this=VectorClass  sig=csp ====
_DWORD *__thiscall FileSystem::writeFile(FileSystem *this, int a2, _BYTE *a3)
{
  int v3; // esi
  Byte *v5; // ebp
  int v7; // ebx
  Byte *v8; // ebp

  v3 = a2; /*0x628ed3*/
  this->Items = 0; /*0x628edc*/
  this->Capacity = a2; /*0x628ee3*/
  this->IsInitialized = 1; /*0x628ee6*/
  this->IsAllocated = 0; /*0x628eea*/
  *(_DWORD *)this = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628eee*/
  if ( !a2 ) /*0x628ef4*/
    return this; /*0x628ef4*/
  if ( !a3 ) /*0x628efc*/
  {
    v7 = __2_YAPAXI_Z(260 * a2); /*0x628f36*/
    if ( v7 ) /*0x628f3d*/
    {
      v8 = (Byte *)v7; /*0x628f42*/
      if ( a2 - 1 >= 0 ) /*0x628f46*/
      {
        do /*0x628f59*/
        {
          Byte::Zero(v8); /*0x628f4d*/
          v8 += 65; /*0x628f52*/
          --v3; /*0x628f58*/
        }
        while ( v3 ); /*0x628f59*/
        this->Items = v7; /*0x628f5b*/
        this->IsAllocated = 1; /*0x628f5e*/
        return this; /*0x628f68*/
      }
    }
    else
    {
      v7 = 0; /*0x628f6b*/
    }
    this->Items = v7; /*0x628f6d*/
    this->IsAllocated = 1; /*0x628f70*/
    return this; /*0x628f74*/
  }
  v5 = (Byte *)a3; /*0x628f01*/
  if ( a2 - 1 >= 0 ) /*0x628f05*/
  {
    do /*0x628f18*/
    {
      Byte::Zero(v5); /*0x628f0c*/
      v5 += 65; /*0x628f11*/
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
  dbl_AC4930 = Math::Sqrt(v0 + v0); /*0x628f9e*/
}



// ==== 0x00628FB0  sub_628FB0  this=-  sig=ida-proto ====
void sub_628FB0()
{
  dbl_AC4980 = dbl_AC4930 / 60.0; /*0x628fbc*/
}



// ==== 0x00628FD0  sub_628FD0  this=-  sig=ida-proto ====
void sub_628FD0()
{
  dbl_AC4968 = 1.0 / dbl_AC4980; /*0x628fdc*/
}



// ==== 0x00628FF0  sub_628FF0  this=-  sig=ida-proto ====
void sub_628FF0()
{
  dbl_AC4960 = 0.0174532925199433 * 45.0; /*0x628ffc*/
}



// ==== 0x00629010  sub_629010  this=-  sig=ida-proto ====
void sub_629010()
{
  dbl_AC4938 = 0.0174532925199433 * 60.0; /*0x62901c*/
}



// ==== 0x00629030  sub_629030  this=-  sig=ida-proto ====
void sub_629030()
{
  dbl_AC48F8 = 0.0174532925199433 * 90.0; /*0x62903c*/
}



// ==== 0x00629050  sub_629050  this=-  sig=ida-proto ====
__int64 sub_629050()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC48F8 - dbl_AC4938); /*0x629062*/
  result = Math::RoundToInt(v0 * dbl_AC4930 * 0.5); /*0x629076*/
  dword_AC4988 = result; /*0x62907b*/
  return result; /*0x629080*/
}



// ==== 0x00629090  sub_629090  this=-  sig=ida-proto ====
void sub_629090()
{
  dbl_AC4940 = Math::ArcTan((double)dword_AC4988 * 0.00390625); /*0x6290a7*/
}



// ==== 0x006290C0  sub_6290C0  this=-  sig=ida-proto ====
void sub_6290C0()
{
  dbl_AC4958 = Math::ArcTan((double)(2 * dword_AC4988) / dbl_AC4930); /*0x6290e2*/
}



// ==== 0x006290F0  sub_6290F0  this=-  sig=ida-proto ====
__int64 sub_6290F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4988) + 0.5); /*0x62910b*/
  dword_AC497C = result; /*0x629110*/
  return result; /*0x629116*/
}



// ==== 0x00629120  sub_629120  this=-  sig=ida-proto ====
int sub_629120()
{
  dword_AC4928 = 0; /*0x629122*/
  return 0; /*0x62912e*/
}



// ==== 0x00629130  sub_629130  this=-  sig=ida-proto ====
int sub_629130()
{
  dword_AC4948 = 0; /*0x629132*/
  dword_AC494C = 0; /*0x629137*/
  dword_AC4950 = 0; /*0x62913c*/
  return 0; /*0x629141*/
}



// ==== 0x00629150  sub_629150  this=-  sig=ida-proto ====
int sub_629150()
{
  dword_AC4978 = 0; /*0x629155*/
  dword_AC4970 = 128; /*0x62915f*/
  dword_AC4974 = 128; /*0x629164*/
  return 128; /*0x629169*/
}



// ==== 0x00629170  sub_629170  this=-  sig=ida-proto ====
int sub_629170()
{
  dword_AC4900 = 0; /*0x629172*/
  dword_AC4904 = 0; /*0x629177*/
  dword_AC4908 = 0; /*0x62917c*/
  dword_AC490C = 0; /*0x629181*/
  return 0; /*0x629186*/
}



// ==== 0x00629190  sub_629190  this=-  sig=ida-proto ====
int sub_629190()
{
  dword_AC4914 = 0; /*0x629197*/
  dword_AC4918 = 0; /*0x62919c*/
  byte_AC491C = 1; /*0x6291a1*/
  byte_AC491D = 0; /*0x6291a8*/
  dword_AC4910 = (int)&DynamicVectorClass<ParasiteClass *>::`vftable'; /*0x6291ad*/
  dword_AC4924 = 10; /*0x6291b7*/
  dword_AC4920 = 0; /*0x6291c1*/
  return atexit(sub_6291D0); /*0x6291cc*/
}



// ==== 0x006291D0  sub_6291D0  this=-  sig=ida-proto ====
void __cdecl sub_6291D0()
{
  dword_AC4910 = (int)&VectorClass<ParasiteClass *>::`vftable'; /*0x6291d8*/
  if ( dword_AC4914 && byte_AC491D ) /*0x6291ec*/
  {
    __3_YAXPAX_Z(dword_AC4914); /*0x6291ef*/
    dword_AC4914 = 0; /*0x6291f7*/
  }
  byte_AC491D = 0; /*0x6291fd*/
  dword_AC4918 = 0; /*0x629203*/
}



// ==== 0x00629210  ParasiteClass::Constructor  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::Constructor(ParasiteClass *this)
{
  int v2; // ecx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x629213*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->ParasiteClass_field_38 = v2; /*0x62922e*/
  this->AbstractClass = &ParasiteClass::`vftable'; /*0x629231*/
  this->? = &ParasiteClass::`vftable'; /*0x629237*/
  this->? = &ParasiteClass::`vftable'; /*0x62923e*/
  this->? = &ParasiteClass::`vftable'; /*0x629245*/
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v3 = dword_AC4920++; /*0x62928b*/
    *((_DWORD *)dword_AC4914 + v3) = this; /*0x62929a*/
  }
  return (int)this; /*0x62929f*/
}



// ==== 0x006292B0  ParasiteClass::ParasiteClass  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::ParasiteClass(int this, int a2)
{
  wchar_t *v3; // ecx
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6292b6*/
  *(_DWORD *)(this + 44) = dword_A8ED84; /*0x6292c4*/
  *(_DWORD *)(this + 52) = 0; /*0x6292c9*/
  *(_DWORD *)(this + 56) = dword_A8ED84; /*0x6292d2*/
  *(_DWORD *)(this + 64) = 0; /*0x6292d5*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x6292d8*/
  *(_DWORD *)(this + 4) = &ParasiteClass::`vftable'; /*0x6292de*/
  *(_DWORD *)(this + 8) = &ParasiteClass::`vftable'; /*0x6292e5*/
  *(_DWORD *)(this + 12) = &ParasiteClass::`vftable'; /*0x6292ec*/
  *(_DWORD *)(this + 36) = a2; /*0x6292f3*/
  *(_DWORD *)(this + 40) = 0; /*0x6292f6*/
  *(_DWORD *)(this + 56) = dword_A8ED84; /*0x629303*/
  *(_DWORD *)(this + 60) = v6; /*0x62930a*/
  *(_DWORD *)(this + 64) = 0; /*0x62930d*/
  v3 = dword_A8ED84; /*0x629310*/
  *(_BYTE *)(this + 84) = 0; /*0x629316*/
  *(_DWORD *)(this + 44) = v3; /*0x629319*/
  *(_DWORD *)(this + 48) = v6; /*0x62931c*/
  *(_DWORD *)(this + 52) = 0; /*0x62931f*/
  *(_DWORD *)(this + 76) = 0; /*0x629322*/
  *(_DWORD *)(this + 80) = 0; /*0x629325*/
  *(_DWORD *)(this + 68) = 0; /*0x629328*/
  *(_DWORD *)(this + 72) = 0; /*0x62932b*/
  if ( dword_AC4920 < dword_AC4918 /*0x629360*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v4 = dword_AC4920++; /*0x62936d*/
    *((_DWORD *)dword_AC4914 + v4) = this; /*0x62937c*/
  }
  return this; /*0x629381*/
}



// ==== 0x006293E0  AbstractClass::ProcessData  this=ParasiteClass  sig=csp ====
void __thiscall AbstractClass::ProcessData(AbstractClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  AbstractClass *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = this->q011; /*0x6293e7*/
  this->ptr_0 = &ParasiteClass::`vftable'; /*0x6293ea*/
  this->ptr_4 = &ParasiteClass::`vftable'; /*0x6293f2*/
  this->ptr_8 = &ParasiteClass::`vftable'; /*0x6293f9*/
  this->ptr_C = &ParasiteClass::`vftable'; /*0x629400*/
  this->IsAllocated = 0; /*0x629407*/
  this->abstractFlags = 0; /*0x62940a*/
  *((_DWORD *)this + 18) = 0; /*0x62940d*/
  if ( v2 ) /*0x629410*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629414*/
    this->q011 = 0; /*0x62941a*/
  }
  if ( *((_BYTE *)this + 84) ) /*0x62941d*/
  {
    v5 = this; /*0x629432*/
    v3 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629436*/
           g_BuildingLoadQueue_Array.?,
           &v5);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[1] ) /*0x629446*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x62944b*/
      for ( ; /*0x629451*/
            v3 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x629459*/
      }
    }
    *((_BYTE *)this + 84) = 0; /*0x62946b*/
  }
  v5 = this; /*0x62947e*/
  v4 = (*(int (__thiscall **)(int *, AbstractClass **))(dword_AC4910 + 16))(&dword_AC4910, &v5); /*0x629482*/
  if ( v4 != -1 && v4 < dword_AC4920 && v4 < --dword_AC4920 ) /*0x62949d*/
  {
    do /*0x6294b5*/
    {
      ++v4; /*0x6294a5*/
      *((_DWORD *)dword_AC4914 + v4 - 1) = *((_DWORD *)dword_AC4914 + v4); /*0x6294a9*/
    }
    while ( v4 < dword_AC4920 ); /*0x6294b5*/
  }
  AbstractClass::DTOR(this); /*0x6294b9*/
}



// ==== 0x006294D0  ParasiteClass::Attach  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::Attach(ParasiteClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6294d9*/
  v3 = this->q011; /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(*((_DWORD *)this + 18)); /*0x6294fd*/
  Power::TimerProcess(this->IsAllocated); /*0x629508*/
  Power::TimerProcess(this->abstractFlags); /*0x629513*/
  LOBYTE(v5) = *((_BYTE *)this + 84); /*0x629518*/
  return Power::FlagProcess((Power *)a2, v5); /*0x629523*/
}



// ==== 0x00629530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_629530(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  ObjectClass *v4; // [esp+8h] [ebp-4h] BYREF

  v2 = this->ambientSoundController[2]; /*0x629537*/
  this->ambientSoundController[4] = 0; /*0x62953a*/
  this->customSound_controller[0] = 0; /*0x62953f*/
  this->ambientSoundController[3] = 0; /*0x629542*/
  if ( v2 ) /*0x629545*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629549*/
    this->ambientSoundController[2] = 0; /*0x62954f*/
  }
  if ( LOBYTE(this->customSound_controller[1]) ) /*0x629552*/
  {
    v4 = this; /*0x629567*/
    v3 = (*(int (__thiscall **)(int *, ObjectClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62956b*/
           g_BuildingLoadQueue_Array.?,
           &v4);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[1] ) /*0x62957b*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x629580*/
      for ( ; /*0x629586*/
            v3 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x62958e*/
      }
    }
    LOBYTE(this->customSound_controller[1]) = 0; /*0x6295a0*/
  }
}



// ==== 0x006295B0  ParasiteClass::LoadParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::LoadParasite(ParasiteClass *this, int a2)
{
  int result; // eax
  int v3; // ebp
  int v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( this ) /*0x6295cd*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6295d6*/
      v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6295db*/
      this->ParasiteClass_field_34 = 0; /*0x6295e1*/
      *(_DWORD *)&this->__pad_28[4] = v4; /*0x6295e8*/
      this->ParasiteClass_field_38 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6295f0*/
      this->ParasiteClass_field_40 = 0; /*0x6295f3*/
      this->AbstractClass = &ParasiteClass::`vftable'; /*0x6295fa*/
      this->? = &ParasiteClass::`vftable'; /*0x629600*/
      this->? = &ParasiteClass::`vftable'; /*0x629607*/
      this->? = &ParasiteClass::`vftable'; /*0x62960e*/
    }
    if ( this->q011 /*0x629657*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x629664*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->creationFrame); /*0x62967f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_28); /*0x62968d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 17); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}



// ==== 0x006296B0  ParasiteClass::SaveParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::SaveParasite(ParasiteClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6296c4*/
}



// ==== 0x006296D0  ParasiteClass::ddtor  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::ddtor(ParasiteClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/
}



// ==== 0x00629710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_629710(ObjectClass *this)
{
  this->customSound_controller[0] = 0; /*0x629712*/
  this->ambientSoundController[4] = 0; /*0x629715*/
  return 0; /*0x629718*/
}



// ==== 0x00629720  BuildingClass::AnimController  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::AnimController(BuildingClass *this)
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

  Value = ProgressTimer::GetValue((ProgressTimer *)(this->? + 904), v12); /*0x629736*/
  v3 = this->?[3]; /*0x62973b*/
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
  v7 = this->?[0] + 1; /*0x629768*/
  this->?[0] = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->?[4]; /*0x629775*/
    this->?[0] = 0; /*0x629778*/
    this->?[4] = v8 + 1; /*0x629782*/
    if ( v8 + 1 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (_DWORD *)this->?[2]; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(_DWORD *)(this->?[2] + 172) = v5 + this->?[4] + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
    }
  }
  return 0; /*0x62978a*/
}



// ==== 0x006297F0  ParasiteClass::DeploySquad  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass::DeploySquad(ParasiteClass *this)
{
  double v1; // st7
  _DWORD *v3; // eax
  int *v4; // ecx
  int v5; // edi
  Cell *v6; // eax
  int creationFrame; // esi
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // edx
  int Index; // eax
  void *v13; // edi
  AnimClass *v14; // eax
  void **v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  int v23; // eax
  AnimClass *v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  _BYTE *v30; // edi
  int v31; // eax
  void *ptr_0; // ecx
  int v33; // eax
  _DWORD *v34; // edx
  int v35; // ecx
  int v36; // eax
  BuildingClass *v37; // edi
  int v38; // ecx
  int v39; // ebp
  void *v40; // ecx
  int v41; // eax
  int v42; // [esp-4h] [ebp-6Ch]
  BuildingClass *v43; // [esp+0h] [ebp-68h]
  __int64 v44; // [esp+10h] [ebp-58h]
  int v45; // [esp+10h] [ebp-58h]
  double v46; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  _DWORD v48[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v49; // [esp+28h] [ebp-40h] BYREF
  int v50; // [esp+2Ch] [ebp-3Ch] BYREF
  __int64 v51; // [esp+30h] [ebp-38h]
  int v55; // [esp+50h] [ebp-18h] BYREF
  int v56; // [esp+54h] [ebp-14h]
  int v57; // [esp+58h] [ebp-10h]
  int v58; // [esp+5Ch] [ebp-Ch] BYREF
  int v59; // [esp+60h] [ebp-8h]
  int v60; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  _ESI = this; /*0x6297fc*/
  v3 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 1016))(this->creationFrame, 0); /*0x629807*/
  v4 = *(int **)_ESI->__pad_28; /*0x62980d*/
  v48[1] = *v3; /*0x629812*/
  v5 = *(_DWORD *)(v48[1] + 172); /*0x629816*/
  v48[0] = v5; /*0x629822*/
  v55 = v4[39]; /*0x629828*/
  v56 = v4[40]; /*0x62982f*/
  v57 = v4[41]; /*0x629836*/
  v6 = (Cell *)(*(int (__thiscall **)(int *))(*v4 + 444))(v4); /*0x62983c*/
  v44 = 0x3FF0000000000000LL; /*0x629844*/
  if ( !v6 || (unsigned __int8)Cell::IsValidHeight(v6) ) /*0x629854*/
  {
    v10 = *(_DWORD *)(v5 + 368); /*0x629898*/
    v11 = (_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 1696); /*0x62989e*/
    *v11 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6298a4*/
    v11[1] = v59; /*0x6298aa*/
    v11[2] = v10; /*0x6298ad*/
    switch ( (unsigned int)_ESI[1].? ) /*0x6298bc*/
    {
      case 0u: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(&stru_83665C); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v13 = *(void **)(FootClass_Array.?[3] + 4 * Index); /*0x6298e5*/
          if ( v13 ) /*0x6298ea*/
          {
            v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6298f5*/
            if ( v14 ) /*0x6298ff*/
            {
              v15 = AnimClass::ctor(v14, v13, &v55, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v15 ) /*0x62991a*/
              {
                _ESI[1].AbstractClass = v15; /*0x62991c*/
                if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x629953*/
                  || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
                  && g_BuildingLoadQueue_Array.?[2] > 0
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
                       g_BuildingLoadQueue_Array.?,
                       g_BuildingLoadQueue_Array.?[2] + g_BuildingLoadQueue_Array.?,
                       0) )
                {
                  v16 = g_BuildingLoadQueue_Array.?[1]++; /*0x629960*/
                  *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v16) = _ESI; /*0x62996f*/
                }
              }
            }
          }
        }
        _ESI[1].? = (void *)1; /*0x629974*/
        _ESI[1].? = 0; /*0x62997b*/
        _ESI[1].? = 0; /*0x62997e*/
        BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1u: /*0x6298bc*/
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x62998d*/
        {
          v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6299a9*/
          _ESI[1].? = 0; /*0x6299b7*/
          _ESI[1].? = (void *)(3 - (v17 != 0)); /*0x6299ba*/
          _ESI[1].? = 0; /*0x6299bd*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x6299c0*/
          FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2u: /*0x6298bc*/
        v44 = 0xBFF0000000000000uLL; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3u: /*0x6298bc*/
LABEL_20:
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x6299fd*/
        {
          _ESI[1].? = (void *)4; /*0x629a08*/
          _ESI[1].? = 0; /*0x629a0f*/
          _ESI[1].? = 0; /*0x629a12*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629a15*/
        }
        __asm /*0x629a1a*/
        {
          fild dword ptr [esi+4Ch]
          fmul qword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E8AF0
          fstp qword ptr [esp+68h+var_4C+4]
        }
        Math::SinCos(*(double *)&v48[1]); /*0x629a35*/
        __asm { fmul ds:flt_7EF8F8 } /*0x629a3a*/
        v18 = *(_DWORD *)_ESI->__pad_28; /*0x629a40*/
        __asm { fstp dword ptr [ecx+328h] } /*0x629a46*/
        *(float *)(v18 + 808) = _ET1; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4u: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 808) = 0; /*0x629a59*/
        v20 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3024); /*0x629a67*/
        v45 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)_ESI->__pad_28 + 904), &v50) - 0x3FFF; /*0x629a81*/
        __asm /*0x629a85*/
        {
          fild dword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E2810
          fchs
          fstp qword ptr [esp+68h+var_5C+4]
        }
        Math::ArcTan2(v46); /*0x629a9f*/
        __asm { fstp [esp+70h+var_24+4] } /*0x629aa4*/
        Math::SinCos(v46); /*0x629aaa*/
        __asm { fstp [esp+78h+var_2C+4] } /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          __asm { fild dword ptr [esp+68h+var_5C+4] } /*0x629abc*/
          v51 = 0x4050000000000000LL; /*0x629ac8*/
          __asm { fmul ds:dbl_7E2808 } /*0x629ad0*/
          __asm
          {
            fsub ds:dbl_7E2808
            fstp [esp+70h+var_34+4]
          }
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x629aee*/
            __asm { fld ds:dbl_7EF8F0 } /*0x629af7*/
          else
            __asm { fld qword ptr [esp+68h+var_3C+4] } /*0x629aff*/
          __asm /*0x629b03*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_24+4]
            fld st(1)
            fmul [esp+68h+var_2C+4]
            fsubp st(1), st
          }
          LOWORD(v21) = Math::RoundToInt(v1); /*0x629b13*/
          __asm /*0x629b18*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_2C+4]
            fxch st(1)
            fmul [esp+68h+var_24+4]
          }
          v22 = v21; /*0x629b26*/
          __asm { faddp st(1), st } /*0x629b28*/
          LOWORD(v23) = Math::RoundToInt(v1); /*0x629b2a*/
          v58 = v22 + v55; /*0x629b44*/
          v59 = v56 + v23; /*0x629b48*/
          v60 = v57; /*0x629b4c*/
          v24 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x629b55*/
          if ( v24 ) /*0x629b5c*/
          {
            v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v24,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3012) + 4 * v25),
              &v58,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(_BYTE *)(v48[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28)
           || BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28) == 1
           && (unsigned __int8)Audio::IsLoud((int *)(_ESI->creationFrame + 336))) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 132))(_ESI->creationFrame) + 3214) ) /*0x629bfe*/
          {
            v26 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)_ESI->__pad_28 + 132))(*(_DWORD *)_ESI->__pad_28); /*0x629c16*/
            v27 = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 132))(_ESI->creationFrame); /*0x629c23*/
            v42 = *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 540); /*0x629c2f*/
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 132))(v26); /*0x629c30*/
            v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v27 + 132))( /*0x629c46*/
                    v27,
                    *(_DWORD *)(_ESI->creationFrame + 540),
                    v28);
            HouseClass::AccumulateScore((int *)(_ESI->creationFrame + 336), v29, v42); /*0x629c56*/
          }
          v30 = *(_BYTE **)_ESI->__pad_28; /*0x629c5d*/
          BuildingClass::Deploy(v43, 0, (int)v30); /*0x629c62*/
          v31 = *(_DWORD *)v30; /*0x629c67*/
          v30[973] = 1; /*0x629c69*/
          (*(void (__thiscall **)(_BYTE *, int))(v31 + 952))(v30, _ESI->creationFrame); /*0x629c76*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 928))(v30); /*0x629c80*/
          ptr_0 = _ESI[1].AbstractClass; /*0x629c86*/
          _ESI[1].? = 0; /*0x629c89*/
          _ESI[1].? = 0; /*0x629c8e*/
          _ESI[1].? = 0; /*0x629c91*/
          if ( ptr_0 ) /*0x629c94*/
          {
            (*(void (__thiscall **)(void *))(*(_DWORD *)ptr_0 + 248))(ptr_0); /*0x629c98*/
            _ESI[1].AbstractClass = 0; /*0x629c9e*/
          }
          if ( LOBYTE(_ESI[1].?) ) /*0x629ca1*/
          {
            v48[0] = _ESI; /*0x629cb8*/
            v33 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629cbc*/
                    g_BuildingLoadQueue_Array.?,
                    v48);
            if ( v33 != -1 && v33 < g_BuildingLoadQueue_Array.?[1] ) /*0x629ccc*/
            {
              --g_BuildingLoadQueue_Array.?[1]; /*0x629cd1*/
              for ( ; /*0x629cd7*/
                    v33 < g_BuildingLoadQueue_Array.?[1];
                    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v33 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                          + 4 * v33) )
              {
                ++v33; /*0x629cdf*/
              }
            }
            LOBYTE(_ESI[1].?) = 0; /*0x629cf1*/
          }
          v34 = (_DWORD *)(_ESI->creationFrame + 1696); /*0x629cff*/
          *v34 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629d05*/
          v34[1] = v59; /*0x629d0b*/
          v34[2] = 0; /*0x629d0e*/
        }
        else
        {
          v35 = *(_DWORD *)_ESI->__pad_28; /*0x629d27*/
          v49 = *(_DWORD *)(v48[1] + 164); /*0x629d2a*/
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)v35 + 364))( /*0x629d3b*/
            v35,
            &v49,
            0,
            v48[0],
            _ESI->creationFrame,
            0,
            1,
            0);
          if ( *(_DWORD *)_ESI->__pad_28 ) /*0x629d41*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x629d58*/
            _ESI[1].? = 0; /*0x629d66*/
            _ESI[1].? = (void *)(3 - (v36 != 0)); /*0x629d69*/
            _ESI[1].? = 0; /*0x629d6c*/
            BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629d6f*/
            FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x629d90*/
          }
          else
          {
            v40 = _ESI[1].AbstractClass; /*0x629df3*/
            _ESI[1].? = 0; /*0x629df6*/
            _ESI[1].? = 0; /*0x629dfb*/
            _ESI[1].? = 0; /*0x629dfe*/
            if ( v40 ) /*0x629e01*/
            {
              (*(void (__thiscall **)(void *))(*(_DWORD *)v40 + 248))(v40); /*0x629e05*/
              _ESI[1].AbstractClass = 0; /*0x629e0b*/
            }
            if ( LOBYTE(_ESI[1].?) ) /*0x629e0e*/
            {
              v48[1] = _ESI; /*0x629e25*/
              v41 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629e29*/
                      g_BuildingLoadQueue_Array.?,
                      &v48[1]);
              if ( v41 != -1 && v41 < g_BuildingLoadQueue_Array.?[1] ) /*0x629e39*/
              {
                --g_BuildingLoadQueue_Array.?[1]; /*0x629e3e*/
                for ( ; /*0x629e44*/
                      v41 < g_BuildingLoadQueue_Array.?[1];
                      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v41 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                            + 4 * v41) )
                {
                  ++v41; /*0x629e4c*/
                }
              }
              LOBYTE(_ESI[1].?) = 0; /*0x629e5e*/
            }
          }
LABEL_47:
          v37 = (BuildingClass *)_ESI[1].AbstractClass; /*0x629d97*/
          if ( v37 ) /*0x629d9c*/
          {
            if ( _ESI->creationFrame ) /*0x629d9e*/
            {
              v38 = *(_DWORD *)_ESI->__pad_28; /*0x629da3*/
              if ( v38 ) /*0x629da8*/
              {
                v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 444))(v38); /*0x629db8*/
                if ( *(_DWORD *)_ESI->__pad_28 != v37->?[1] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v37, *(_BYTE **)_ESI->__pad_28); /*0x629dc4*/
                  v37->?[0] = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 484))(_ESI->creationFrame); /*0x629dd6*/
                  if ( v39 ) /*0x629ddc*/
                    v37->?[1] = *(__int16 *)(v39 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy(v43, (int)&savedregs, v5); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy(v43, (int)&savedregs, v5); /*0x62985f*/
    creationFrame = _ESI->creationFrame; /*0x629864*/
    if ( creationFrame ) /*0x629869*/
    {
      v8 = v59; /*0x629874*/
      v9 = (_DWORD *)(creationFrame + 1696); /*0x62987a*/
      *v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629880*/
      v9[1] = v8; /*0x629882*/
      v9[2] = 0; /*0x629885*/
    }
  }
}



// ==== 0x00629E90  FootClass::CreateWakes  this=FootClass  sig=csp ====
int __thiscall FootClass::CreateWakes(FootClass *this, int a2, int a3, int a4)
{
  double v4; // st7
  double v5; // rdi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  AnimClass *v9; // eax
  int result; // eax
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+Ch] [ebp-34h]
  double v13; // [esp+10h] [ebp-30h] BYREF
  int v17[3]; // [esp+34h] [ebp-Ch] BYREF

  v11 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v13) - 0x3FFF; /*0x629eb5*/
  __asm /*0x629eb9*/
  {
    fild [esp+40h+var_34]
    fmul ds:dbl_7E2810
    fchs
    fstp qword ptr [esp+40h+var_30]
  }
  v5 = v13; /*0x629ecd*/
  Math::ArcTan2(v13); /*0x629ed3*/
  __asm { fstp [esp+48h+var_18] } /*0x629ed8*/
  Math::SinCos(v5); /*0x629ede*/
  __asm { fstp [esp+50h+var_20] } /*0x629ee3*/
  v12 = 3; /*0x629ef0*/
  do /*0x629fba*/
  {
    LODWORD(v13) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -180, 180); /*0x629f13*/
    __asm { fild [esp+40h+var_30] } /*0x629f1c*/
    __asm { fstp [esp+48h+var_28] }
    LODWORD(v13) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -64, 64); /*0x629f33*/
    __asm /*0x629f37*/
    {
      fild [esp+40h+var_30]
      fld [esp+40h+var_28]
      fmul [esp+40h+var_18]
      fld st(1)
      fmul [esp+40h+var_20]
      fsubp st(1), st
    }
    LOWORD(v6) = Math::RoundToInt(v4); /*0x629f4b*/
    __asm /*0x629f50*/
    {
      fld [esp+40h+var_28]
      fmul [esp+40h+var_20]
      fxch st(1)
      fmul [esp+40h+var_18]
    }
    v7 = v6; /*0x629f5e*/
    __asm { faddp st(1), st } /*0x629f60*/
    LOWORD(v8) = Math::RoundToInt(v4); /*0x629f62*/
    v17[0] = v7 + a2; /*0x629f73*/
    v17[1] = a3 + v8; /*0x629f77*/
    v17[2] = a4; /*0x629f7b*/
    v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x629f7f*/
    if ( v9 ) /*0x629f89*/
      AnimClass::ctor( /*0x629fac*/
        v9,
        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
        v17,
        0,
        1,
        (void *)0x600,
        0,
        0);
    result = --v12; /*0x629fb5*/
  }
  while ( v12 ); /*0x629fba*/
  return result; /*0x629fc0*/
}



// ==== 0x00629FD0  ParasiteClass::TickDamage  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass::TickDamage(ParasiteClass *this)
{
  double v1; // st6
  double v2; // st7
  int v4; // eax
  int *v5; // ecx
  _DWORD *v6; // edi
  int v7; // ebp
  int ParasiteClass_field_40; // eax
  int ParasiteClass_field_38; // edx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  int *v14; // eax
  unsigned int v15; // ebx
  void *v16; // ebp
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // ebx
  double v20; // st6
  int v21; // eax
  double v22; // st7
  int v23; // eax
  int v24; // ecx
  int creationFrame; // eax
  _DWORD v26[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v27; // [esp+1Ch] [ebp-30h] BYREF
  int v28; // [esp+20h] [ebp-2Ch]
  double v29; // [esp+24h] [ebp-28h]
  double v30; // [esp+2Ch] [ebp-20h]
  int v31; // [esp+34h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-14h]
  int v33; // [esp+3Ch] [ebp-10h]
  int v34; // [esp+40h] [ebp-Ch] BYREF
  int v35; // [esp+44h] [ebp-8h]
  int v36; // [esp+48h] [ebp-4h]

  if ( !*(_DWORD *)this->__pad_28 ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3278) /*0x62a004*/
    && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(this); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 1016))(this->creationFrame, 0); /*0x62a024*/
  v5 = *(int **)this->__pad_28; /*0x62a02a*/
  v6 = *(_DWORD **)v4; /*0x62a02d*/
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 172); /*0x62a02f*/
  v28 = v7; /*0x62a03b*/
  v31 = v5[39]; /*0x62a041*/
  v32 = v5[40]; /*0x62a048*/
  ParasiteClass_field_40 = this->ParasiteClass_field_40; /*0x62a04c*/
  v33 = v5[41]; /*0x62a052*/
  ParasiteClass_field_38 = this->ParasiteClass_field_38; /*0x62a056*/
  if ( ParasiteClass_field_38 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - ParasiteClass_field_38 < ParasiteClass_field_40 ) /*0x62a068*/
  {
    ParasiteClass_field_40 -= *(_DWORD *)&stru_A8EB00.?[416] - ParasiteClass_field_38; /*0x62a06a*/
LABEL_8:
    if ( ParasiteClass_field_40 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v10 = v6[44]; /*0x62a074*/
  this->ParasiteClass_field_38 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a080*/
  this->ParasiteClass_field_3C = v35; /*0x62a087*/
  this->ParasiteClass_field_40 = v10; /*0x62a08a*/
  v11 = *(_DWORD *)(v7 + 368); /*0x62a092*/
  v12 = v5 + 424; /*0x62a098*/
  *v12 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a09e*/
  v12[1] = v35; /*0x62a0a4*/
  v12[2] = v11; /*0x62a0a7*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 44))(*(_DWORD *)this->__pad_28) == 15 ) /*0x62a0b5*/
  {
    v13 = *(_DWORD **)this->__pad_28; /*0x62a0b7*/
    v26[0] = v13[27]; /*0x62a0c3*/
    (*(void (__userpurge **)(_DWORD *, _DWORD, int, int, int, int, _DWORD, double@<st0>, double@<st1>))(*v13 + 364))( /*0x62a0ce*/
      v26,
      0,
      v7,
      this->creationFrame,
      1,
      1,
      0,
      v2,
      v1);
  }
  else
  {
    v14 = (int *)__2_YAPAXI_Z(0x100u); /*0x62a0d8*/
    if ( v14 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor( /*0x62a103*/
        v14,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
        &v31,
        0,
        0,
        &dword_AC4948,
        0);
    v15 = *ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)this->__pad_28 + 904), &v27); /*0x62a11b*/
    if ( v6[65] ) /*0x62a11d*/
    {
      v16 = *(void **)(v6[62] + 4 * ((((v15 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v16 ) /*0x62a13d*/
      {
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x62a144*/
        if ( v17 ) /*0x62a14e*/
          AnimClass::ctor(v17, v16, &v31, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v18 = -(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) != 0); /*0x62a189*/
    v26[1] = (__int16)(v15 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    LOBYTE(v18) = v18 & 0xFC; /*0x62a195*/
    v19 = v33; /*0x62a19e*/
    v27 = v18 + 2; /*0x62a1a2*/
    *(double *)&v26[1] = (double)v26[1] * -0.00009587672516830327; /*0x62a1ac*/
    v30 = (double)v32; /*0x62a1be*/
    v29 = (double)(v18 + 2); /*0x62a1c6*/
    Math::SinCos(*(double *)&v26[1]); /*0x62a1ca*/
    v20 = v30 - v1 * v29; /*0x62a1d3*/
    LOWORD(v21) = Math::RoundToInt(v2); /*0x62a1d7*/
    v27 = v21; /*0x62a1dc*/
    Math::ArcTan2(*(double *)&v26[1]); /*0x62a1e6*/
    v22 = v2 * v29 + (double)v31; /*0x62a1f2*/
    LOWORD(v23) = Math::RoundToInt(v22); /*0x62a1f6*/
    v34 = v23; /*0x62a1ff*/
    v35 = v27; /*0x62a203*/
    v24 = *(_DWORD *)this->__pad_28; /*0x62a207*/
    v36 = v19; /*0x62a20a*/
    (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v24 + 984))(v24, &v34, 1069547520, 0); /*0x62a21c*/
    creationFrame = this->creationFrame; /*0x62a228*/
    v26[0] = v6[41]; /*0x62a22f*/
    (*(void (__userpurge **)(_DWORD *, _DWORD, int, int, _DWORD, int, _DWORD, double@<st0>, double@<st1>))(**(_DWORD **)this->__pad_28 + 364))( /*0x62a247*/
      v26,
      0,
      v28,
      creationFrame,
      0,
      1,
      0,
      v22,
      v20);
  }
}



// ==== 0x0062A260  ParasiteClass::DeployUnit  this=ParasiteClass  sig=csp ====
char __thiscall TeamClass::DeployUnit(ParasiteClass *this, int a2, int a3)
{
  char result; // al
  int creationFrame; // ecx
  int v6; // edi
  int ParasiteClass_field_34; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *Value; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // ecx
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+24h] [ebp-18h] BYREF
  int v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
  creationFrame = this->creationFrame; /*0x62a26c*/
  if ( a2 == creationFrame ) /*0x62a271*/
  {
    this->creationFrame = 0; /*0x62a273*/
    return result; /*0x62a280*/
  }
  if ( a2 == *(_DWORD *)this->__pad_28 ) /*0x62a286*/
  {
    result = stru_A8EB00.?[376]; /*0x62a28c*/
    if ( !stru_A8EB00.?[376] ) /*0x62a295*/
    {
      *(_DWORD *)this->__pad_28 = 0; /*0x62a297*/
      return result; /*0x62a2a0*/
    }
    v6 = *(_DWORD *)&this->__pad_28[4]; /*0x62a2a3*/
    ParasiteClass_field_34 = this->ParasiteClass_field_34; /*0x62a2a6*/
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= ParasiteClass_field_34 ) /*0x62a2b8*/
      {
LABEL_12:
        v9 = Object::CalculateObjectPlacementPosition((Object *)this, v18); /*0x62a2ec*/
        v17[0] = *v9; /*0x62a303*/
        v10 = v9[1]; /*0x62a307*/
        v17[1] = v10; /*0x62a30a*/
        v11 = v9[2]; /*0x62a30e*/
        ++dword_A8E7AC; /*0x62a311*/
        v17[2] = v11; /*0x62a31d*/
        if ( v17[0] == dword_AC4948 && v10 == dword_AC494C && v11 == dword_AC4950 /*0x62a364*/
          || (Value = ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)this->__pad_28 + 904), &a2),
              !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this->creationFrame + 216))(
                 this->creationFrame,
                 v17,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --dword_A8E7AC; /*0x62a462*/
          *(_DWORD *)(this->creationFrame + 108) = 0; /*0x62a46a*/
          result = (*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 248))(this->creationFrame); /*0x62a472*/
          *(_DWORD *)this->__pad_28 = 0; /*0x62a478*/
        }
        else
        {
          --dword_A8E7AC; /*0x62a379*/
          v13 = this->creationFrame; /*0x62a37f*/
          if ( *(_BYTE *)(v13 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(House **)(v13 + 540)) ) /*0x62a390*/
          {
            *(_BYTE *)(this->creationFrame + 1074) = 0; /*0x62a39c*/
            (*(void (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 332))(this->creationFrame); /*0x62a3a7*/
          }
          v14 = this->creationFrame; /*0x62a3ad*/
          v15 = *(int **)(v14 + 1076); /*0x62a3b0*/
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 1196))(this->creationFrame) ) /*0x62a3c6*/
          {
            TechnoClass::SetFocus((TechnoClass *)this->creationFrame, 0); /*0x62a3d4*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 968))(this->creationFrame, 0); /*0x62a3df*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->creationFrame + 1152))( /*0x62a3ed*/
              this->creationFrame,
              0,
              1);
          }
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->creationFrame + 1156))(this->creationFrame, 0, 1); /*0x62a3fb*/
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->creationFrame + 1160))( /*0x62a40b*/
            this->creationFrame,
            0,
            0,
            0,
            0,
            0);
          v16 = (_DWORD *)this->creationFrame; /*0x62a411*/
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
          *(_DWORD *)this->__pad_28 = 0; /*0x62a450*/
        }
        return result; /*0x62a459*/
      }
      ParasiteClass_field_34 -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x62a2ba*/
    }
    if ( ParasiteClass_field_34 > 0 /*0x62a2c2*/
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)creationFrame + 352))(creationFrame) )
    {
      *(_DWORD *)(*(_DWORD *)this->__pad_28 + 1684) = 0; /*0x62a2cf*/
      v8 = this->creationFrame; /*0x62a2d5*/
      *(_DWORD *)this->__pad_28 = 0; /*0x62a2d8*/
      return (*(char (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8); /*0x62a2e9*/
    }
    goto LABEL_12; /*0x62a2ca*/
  }
  if ( a2 == this->q011 ) /*0x62a487*/
  {
    this->q011 = 0; /*0x62a489*/
    *((_BYTE *)this + 84) = 1; /*0x62a490*/
  }
  return result; /*0x62a27a*/
}



// ==== 0x0062A4A0  BuildingClass::Deploy  this=BuildingClass  sig=csp ====
int __usercall BuildingClass::Deploy@<eax>(BuildingClass *this, int a2@<ebp>, int a3@<edi>)
{
  unsigned int v3; // ecx
  unsigned int v4; // esi
  char v5; // bl
  _WORD *v6; // eax
  unsigned int v7; // ecx
  __int16 v8; // dx
  int v9; // edx
  int v10; // eax
  bool *v11; // ebp
  int *v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  void *v19; // eax
  int *v20; // edx
  int v21; // eax
  int v22; // eax
  int *v23; // ecx
  int v24; // eax
  _DWORD *v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // edx
  int result; // eax
  _DWORD *v31; // edx
  int TileIndex; // [esp+14h] [ebp-4Ch]
  int v33; // [esp+18h] [ebp-48h]
  __int16 v36[2]; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v37; // [esp+38h] [ebp-28h]
  unsigned int v38; // [esp+3Ch] [ebp-24h] BYREF
  int v39; // [esp+40h] [ebp-20h] BYREF
  int *v40; // [esp+44h] [ebp-1Ch] BYREF
  int v41; // [esp+48h] [ebp-18h] BYREF
  int v42; // [esp+4Ch] [ebp-14h]
  int v43; // [esp+50h] [ebp-10h]
  _BYTE v44[4]; // [esp+54h] [ebp-Ch] BYREF
  int v45; // [esp+58h] [ebp-8h]

  v4 = v3; /*0x62a4a5*/
  v5 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 36) + 132))(*(_DWORD *)(v3 + 36)) + 3278); /*0x62a4b2*/
  if ( (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v38) >> 12) + 1) >> 1) /*0x62a4db*/
      & 7) > 2 )
    LOWORD(v38) = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v39) - 0x3FFF; /*0x62a51c*/
  else
    LOWORD(v38) = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v39) + 0x3FFF; /*0x62a4f7*/
  v37 = v38; /*0x62a527*/
  if ( !v5 ) /*0x62a52b*/
  {
    v9 = *(_DWORD *)(v4 + 44); /*0x62a57a*/
    v10 = *(_DWORD *)(v4 + 52); /*0x62a57d*/
    if ( v9 != -1 ) /*0x62a583*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x62a58f*/
      {
LABEL_10:
        *(_DWORD *)v36 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(v4 + 40) + 440))( /*0x62a5a1*/
                                      *(_DWORD *)(v4 + 40),
                                      &v40);
        goto LABEL_11; /*0x62a5b3*/
      }
      v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x62a591*/
    }
    if ( v10 ) /*0x62a597*/
    {
      *(_DWORD *)(*(_DWORD *)(v4 + 36) + 108) = 0; /*0x62a8a0*/
      v31 = (_DWORD *)(*(_DWORD *)(v4 + 40) + 1696); /*0x62a8ab*/
      *v31 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a8b1*/
      v31[1] = v45; /*0x62a8b7*/
      v31[2] = 0; /*0x62a8ba*/
      *(_DWORD *)(*(_DWORD *)(v4 + 40) + 1684) = 0; /*0x62a8c0*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 248))(*(_DWORD *)(v4 + 36)); /*0x62a8cb*/
      *(_DWORD *)(v4 + 40) = 0; /*0x62a8d1*/
      return result; /*0x62a8d1*/
    }
    goto LABEL_10; /*0x62a597*/
  }
  v6 = (_WORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(v4 + 40) + 440))(*(_DWORD *)(v4 + 40), &v40); /*0x62a537*/
  v7 = (((v37 >> 12) + 1) >> 1) & 7; /*0x62a54a*/
  v8 = LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]) + *v6; /*0x62a54d*/
  LOWORD(v7) = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x62a55c*/
  LOWORD(v38) = v8; /*0x62a560*/
  HIWORD(v38) = v6[1] + v7; /*0x62a56b*/
  *(_DWORD *)v36 = v38; /*0x62a574*/
LABEL_11:
  v11 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x62a5b7*/
  v12 = *(int **)(v4 + 36); /*0x62a5cd*/
  v13 = *v12; /*0x62a5d5*/
  v40 = v12; /*0x62a5d7*/
  v33 = *(_DWORD *)((*(int (__thiscall **)(int *))(v13 + 132))(v12) + 1460); /*0x62a5e9*/
  v14 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x62a5ed*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v36, *(_DWORD *)(v14 + 1460), 0); /*0x62a60b*/
  v15 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x62a610*/
  if ( !(unsigned __int8)Cell::IsBuildable(v11, *(_DWORD *)(v15 + 1660), 0, 0, TileIndex, v33, -1, 1) ) /*0x62a61f*/
    *(_DWORD *)v36 = *MapClass::FindPlacementCellsAlt(*(char **)(v4 + 40), &v40, 0); /*0x62a638*/
  v16 = dword_AC4948; /*0x62a641*/
  v17 = dword_AC494C; /*0x62a646*/
  v18 = dword_AC4950; /*0x62a64c*/
  v41 = dword_AC4948; /*0x62a659*/
  v42 = dword_AC494C; /*0x62a65d*/
  v43 = dword_AC4950; /*0x62a661*/
  if ( *(_DWORD *)v36 != dword_AC4928 ) /*0x62a665*/
  {
    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x62a67f*/
    v20 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v19 + 72))(v19, v44); /*0x62a690*/
    v16 = *v20; /*0x62a692*/
    v41 = *v20; /*0x62a694*/
    v17 = v20[1]; /*0x62a698*/
    v42 = v17; /*0x62a69b*/
    v18 = v20[2]; /*0x62a69f*/
    v43 = v18; /*0x62a6a2*/
  }
  if ( *(_DWORD *)v36 == dword_AC4928 /*0x62a70b*/
    || v16 == dword_AC4948 && v17 == dword_AC494C && v18 == dword_AC4950
    || !ParasiteClass::CanExistOnVictimCell((ParasiteClass *)v4)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v4 + 36) + 216))(
          *(_DWORD *)(v4 + 36),
          &v41,
          (unsigned __int8)(((v37 >> 7) + 1) >> 1)) )
  {
    *(_DWORD *)(*(_DWORD *)(v4 + 36) + 108) = 0; /*0x62a854*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 248))(*(_DWORD *)(v4 + 36)); /*0x62a85c*/
  }
  else
  {
    v21 = *(_DWORD *)(v4 + 36); /*0x62a719*/
    if ( *(_BYTE *)(v21 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(House **)(v21 + 540)) ) /*0x62a72c*/
    {
      *(_BYTE *)(*(_DWORD *)(v4 + 36) + 1074) = 0; /*0x62a738*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 332))(*(_DWORD *)(v4 + 36)); /*0x62a744*/
    }
    v22 = *(_DWORD *)(v4 + 36); /*0x62a74a*/
    v23 = *(int **)(v22 + 1076); /*0x62a74d*/
    if ( v23 ) /*0x62a755*/
      TeamClass::AddMember(v23, v22, 0); /*0x62a759*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 36) + 1196))( /*0x62a763*/
            *(_DWORD *)(v4 + 36),
            a3,
            a2) )
    {
      TechnoClass::SetFocus(*(TechnoClass **)(v4 + 36), 0); /*0x62a771*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 968))(*(_DWORD *)(v4 + 36), 0); /*0x62a77c*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v4 + 36) + 1152))(*(_DWORD *)(v4 + 36), 0, 1); /*0x62a78a*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v4 + 36) + 1156))(*(_DWORD *)(v4 + 36), 0, 1); /*0x62a798*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 1160))( /*0x62a7a8*/
      *(_DWORD *)(v4 + 36),
      0,
      0,
      0,
      0,
      0);
    v24 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 1016))(*(_DWORD *)(v4 + 36), 0); /*0x62a7b4*/
    v25 = (_DWORD *)(*(_DWORD *)(v4 + 36) + 1696); /*0x62a7c5*/
    v26 = *(_DWORD *)(*(_DWORD *)v24 + 176); /*0x62a7cb*/
    *v25 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a7d1*/
    v25[1] = v45; /*0x62a7da*/
    v25[2] = 3 * v26; /*0x62a7dd*/
    v27 = *(_DWORD *)(v4 + 68); /*0x62a7e0*/
    *(_DWORD *)(v4 + 76) = 0; /*0x62a7e5*/
    *(_DWORD *)(v4 + 80) = 0; /*0x62a7e8*/
    *(_DWORD *)(v4 + 72) = 0; /*0x62a7eb*/
    if ( v27 ) /*0x62a7ee*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 248))(v27); /*0x62a7f2*/
      *(_DWORD *)(v4 + 68) = 0; /*0x62a7f8*/
    }
    if ( *(_BYTE *)(v4 + 84) ) /*0x62a7fb*/
    {
      v38 = v4; /*0x62a812*/
      v28 = (*(int (__thiscall **)(int *, unsigned int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62a816*/
              g_BuildingLoadQueue_Array.?,
              &v38);
      if ( v28 != -1 && v28 < g_BuildingLoadQueue_Array.?[1] ) /*0x62a826*/
      {
        --g_BuildingLoadQueue_Array.?[1]; /*0x62a82b*/
        for ( ; /*0x62a831*/
              v28 < g_BuildingLoadQueue_Array.?[1];
              *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v28 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                    + 4 * v28) )
        {
          ++v28; /*0x62a839*/
        }
      }
      *(_BYTE *)(v4 + 84) = 0; /*0x62a84b*/
    }
  }
  *(_DWORD *)(*(_DWORD *)(v4 + 40) + 808) = 0; /*0x62a869*/
  v29 = (_DWORD *)(*(_DWORD *)(v4 + 40) + 1696); /*0x62a877*/
  *v29 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a87d*/
  result = v45; /*0x62a87f*/
  v29[1] = v45; /*0x62a883*/
  v29[2] = 0; /*0x62a886*/
  *(_DWORD *)(*(_DWORD *)(v4 + 40) + 1684) = 0; /*0x62a88c*/
  *(_DWORD *)(v4 + 40) = 0; /*0x62a892*/
  return result; /*0x62a895*/
}



// ==== 0x0062A8E0  ParasiteClass::CanInfect  this=ParasiteClass  sig=csp ====
bool __thiscall ParasiteClass::CanInfect(ParasiteClass *this, _DWORD *a2)
{
  int creationFrame; // ecx
  Cell *v4; // eax
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
                creationFrame = this->creationFrame; /*0x62a933*/
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (Cell *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (unsigned __int8)Cell::IsValidHeight(v4) ) /*0x62a966*/
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
  int *v11; // eax
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
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x62a9cf*/
    *(_BYTE *)(this + 84) = 0; /*0x62a9d4*/
  }
  *(_DWORD *)(this + 56) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a9e6*/
  *(_DWORD *)(this + 60) = v16; /*0x62a9ed*/
  *(_DWORD *)(this + 64) = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((ParasiteClass *)this, a2) ) /*0x62a9f5*/
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
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(*(_DWORD *)(this + 36) + 1372)); /*0x62aa11*/
    v6 = **(_DWORD **)(this + 36); /*0x62aa1f*/
    v7 = (*(int (__thiscall **)(void *, int *, _DWORD))(*(_DWORD *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    v8 = (*(int (__thiscall **)(_DWORD, int))(v6 + 216))(*(_DWORD *)(this + 36), v7); /*0x62aa2c*/
    v9 = *(_DWORD *)(this + 36); /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(int **)(this + 36); /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
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
bool __thiscall ParasiteClass::CanExistOnVictimCell(ParasiteClass *this)
{
  int v2; // ecx
  int creationFrame; // ecx
  CellClass *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  Cell *v9; // eax

  v2 = *(_DWORD *)this->__pad_28; /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  creationFrame = this->creationFrame; /*0x62ab77*/
  if ( creationFrame ) /*0x62ab7c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)creationFrame + 44))(creationFrame) == 1 ) /*0x62ab86*/
    {
      v5 = (CellClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) /*0x62abdc*/
                    + 320)
        & 0x100) == 0;
    v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
LABEL_20:
  v9 = (Cell *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/
}



// ==== 0x0062AC30  Object::CalculateObjectPlacementPosition  this=Object  sig=csp ====
int *__thiscall Object::CalculateObjectPlacementPosition(Object *this, int *a2)
{
  int *result; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  Cell *v13; // ebp
  ObjectPlacement *NeighbourContent; // esi
  int ObjectPlacement_field_0x04; // eax
  bool v16; // bl
  int v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  CellClass *v21; // eax
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

  if ( !*(_DWORD *)&this->__pad_C[28] ) /*0x62ac39*/
  {
    result = a2; /*0x62ac40*/
    v4 = dword_AC4948; /*0x62ac44*/
    v5 = a2; /*0x62ac4a*/
LABEL_39:
    *v5 = v4; /*0x62af27*/
    v5[1] = dword_AC494C; /*0x62af31*/
    v5[2] = dword_AC4950; /*0x62af3c*/
    return result; /*0x62af3c*/
  }
  if ( !ParasiteClass::CanExistOnVictimCell((ParasiteClass *)this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)&this->__pad_C[28] + 904), &v26) >> 12) /*0x62ad3a*/
                        + 1) >> 1)
        & 7;
    v13 = (Cell *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]); /*0x62ad43*/
    NeighbourContent = (ObjectPlacement *)Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[24] + 132))(*(_DWORD *)&this->__pad_C[24]) /*0x62ad5a*/
                   + 3278) )
    {
      ObjectPlacement_field_0x04 = NeighbourContent[29].ObjectPlacement_field_0x04; /*0x62ad64*/
      if ( ObjectPlacement_field_0x04 == 2 || ObjectPlacement_field_0x04 == 6 || ObjectPlacement_field_0x04 == 3 ) /*0x62ad77*/
      {
        v16 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad90*/
                         + 320)
             & 0x100) == 0;
        v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad9d*/
                        + 68);
        if ( v17 >= 74 && v17 <= 99 ) /*0x62ada8*/
          v16 = 0; /*0x62adaa*/
        if ( (v17 < 205 || v17 > 230) && v16 ) /*0x62adbc*/
        {
          result = a2; /*0x62adbe*/
          v4 = dword_AC4948; /*0x62adc2*/
          v5 = a2; /*0x62adc8*/
          goto LABEL_39; /*0x62adca*/
        }
      }
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)NeighbourContent->__pad_0 + 72))( /*0x62adde*/
                      NeighbourContent,
                      v30);
    v19 = ObjectPlacement::CalcPosition(NeighbourContent, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = *(_DWORD *)&this->__pad_C[24]; /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(CellClass *, int *))(v21->mapCoords[0] + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62ae45*/
    {
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += dword_AC497C; /*0x62ae75*/
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(Cell *, int *))(v13->Cell_field_0x0 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(_DWORD *)(v23 + 8) ) /*0x62aec1*/
      {
LABEL_29:
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += dword_AC497C; /*0x62aec9*/
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62aedc*/
    }
LABEL_34:
    v4 = dword_AC4948; /*0x62aee3*/
    v24 = v28; /*0x62aeed*/
    v25 = v29; /*0x62aef1*/
    if ( v27 != dword_AC4948 || v28 != dword_AC494C || v29 != dword_AC4950 ) /*0x62af07*/
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
  v6 = (int *)(*(_DWORD *)&this->__pad_C[28] + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = *(_DWORD *)&this->__pad_C[24]; /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(v8->mapCoords[0] + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = *(_DWORD *)&this->__pad_C[28]; /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( *(_BYTE *)(v10 + 140) ) /*0x62acbf*/
        v29 = dword_AC497C + v11; /*0x62accf*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62acd6*/
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ace3*/
  else
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}



// ==== 0x0062AF50  ParasiteClass::StubReturn88  this=ParasiteClass  sig=csp ====
int ParasiteClass::StubReturn88(ParasiteClass *this)
{
  return 88; /*0x62af55*/
}



// ==== 0x0062AF60  ParasiteClass::StubReturn67  this=ParasiteClass  sig=csp ====
int ParasiteClass::StubReturn67(ParasiteClass *this)
{
  return 67; /*0x62af65*/
}



// ==== 0x0062AF70  ParasiteClass::UpdateParasite  this=ParasiteClass  sig=csp ====
_DWORD *__thiscall ParasiteClass::UpdateParasite(ParasiteClass *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  ParasiteClass *v7; // [esp+8h] [ebp-4h] BYREF

  v3 = this->q011; /*0x62af77*/
  this->AbstractClass = &ParasiteClass::`vftable'; /*0x62af7a*/
  this->? = &ParasiteClass::`vftable'; /*0x62af82*/
  this->? = &ParasiteClass::`vftable'; /*0x62af89*/
  this->? = &ParasiteClass::`vftable'; /*0x62af90*/
  this->IsAllocated = 0; /*0x62af97*/
  this->abstractFlags = 0; /*0x62af9a*/
  *((_DWORD *)this + 18) = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62afa4*/
    this->q011 = 0; /*0x62afaa*/
  }
  if ( *((_BYTE *)this + 84) ) /*0x62afad*/
  {
    v7 = this; /*0x62afc2*/
    v4 = (*(int (__thiscall **)(int *, ParasiteClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62afc6*/
           g_BuildingLoadQueue_Array.?,
           &v7);
    if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.?[1] ) /*0x62afd6*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x62afdb*/
      for ( ; /*0x62afe1*/
            v4 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v4) )
      {
        ++v4; /*0x62afe9*/
      }
    }
    *((_BYTE *)this + 84) = 0; /*0x62affb*/
  }
  v7 = this; /*0x62b00e*/
  v5 = (*(int (__thiscall **)(int *, ParasiteClass **))(dword_AC4910 + 16))(&dword_AC4910, &v7); /*0x62b012*/
  if ( v5 != -1 && v5 < dword_AC4920 && v5 < --dword_AC4920 ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((_DWORD *)dword_AC4914 + v5 - 1) = *((_DWORD *)dword_AC4914 + v5); /*0x62b039*/
    }
    while ( v5 < dword_AC4920 ); /*0x62b045*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    __3_YAXPAX_Z(this); /*0x62b056*/
  return &this->AbstractClass; /*0x62b060*/
}



// ==== 0x0062B070  _DynamicVectorClass_PAVParasiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::Destroy(_DynamicVectorClass_PAVParasiteClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x62b076*/
  this->m_10 = 0; /*0x62b079*/
  if ( v2 && BYTE1(this->m_C) ) /*0x62b080*/
  {
    __3_YAXPAX_Z(v2); /*0x62b086*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b08e*/
  }
  BYTE1(this->m_C) = 0; /*0x62b091*/
  this->m_8 = 0; /*0x62b094*/
}



// ==== 0x0062B0A0  _DynamicVectorClass_PAVParasiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::GetItemIndex(_DynamicVectorClass_PAVParasiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x62b0a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x62b0b5*/
  else
    return 0; /*0x62b0a7*/
}



// ==== 0x0062B0C0  _VectorClass_PAVParasiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::Get(_VectorClass_PAVParasiteClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x62b0ca*/
}



// ==== 0x0062B0D0  _VectorClass_PAVParasiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::Add(_VectorClass_PAVParasiteClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x62b0d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x62b0dd*/
  {
    v3 = 0; /*0x62b0df*/
    if ( m_8 <= 0 ) /*0x62b0e3*/
      return 1; /*0x62b103*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x62b0e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x62b0eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x62b0f4*/
    {
      ++v3; /*0x62b0f6*/
      ++v4; /*0x62b0f7*/
      if ( v3 >= m_8 ) /*0x62b0fc*/
        return 1; /*0x62b0fc*/
    }
  }
  return 0; /*0x62b0fe*/
}



// ==== 0x0062B110  _VectorClass_PAVParasiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::Release(_VectorClass_PAVParasiteClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x62b11c*/
  {
    LOBYTE(this->m_C) = 0; /*0x62b126*/
    if ( a3 ) /*0x62b12c*/
      v4 = a3; /*0x62b142*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x62b13e*/
    LOBYTE(this->m_C) = 1; /*0x62b146*/
    if ( v4 ) /*0x62b14a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62b155*/
      {
        m_8 = this->m_8; /*0x62b15c*/
        if ( a2 < m_8 ) /*0x62b161*/
          m_8 = a2; /*0x62b163*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x62b169*/
          ++i; /*0x62b16e*/
        if ( BYTE1(this->m_C) ) /*0x62b17b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b186*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x62b18e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x62b197*/
      this->m_8 = a2; /*0x62b19f*/
      BYTE1(this->m_C) = a3 == 0; /*0x62b1a2*/
      return 1; /*0x62b1a8*/
    }
    else
    {
      return 0; /*0x62b14f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVParasiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62b1b2*/
    return 1; /*0x62b1b8*/
  }
}



// ==== 0x0062B1C0  _VectorClass_PAVParasiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::Remove(_VectorClass_PAVParasiteClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x62b1cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b1d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b1db*/
  }
  BYTE1(this->m_C) = 0; /*0x62b1de*/
  this->m_8 = 0; /*0x62b1e1*/
}



// ==== 0x0062B1F0  _VectorClass_PAVParasiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::GetSize(_VectorClass_PAVParasiteClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x62b1f0*/
    return 0; /*0x62b1f8*/
  m_8 = this->m_8; /*0x62b1fe*/
  result = 0; /*0x62b201*/
  if ( m_8 <= 0 ) /*0x62b205*/
    return -1; /*0x62b21c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62b20b*/
  {
    if ( ++result >= m_8 ) /*0x62b21a*/
      return -1; /*0x62b21a*/
  }
  return result; /*0x62b1fa*/
}



// ==== 0x0062B230  _VectorClass_PAVParasiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::GetCapacity(_VectorClass_PAVParasiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x62b230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x62b245*/
  else
    return 0; /*0x62b237*/
}



// ==== 0x0062B250  _DynamicVectorClass_PAVParasiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::SetCapacity(
        _DynamicVectorClass_PAVParasiteClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x62b25c*/
  {
    LOBYTE(this->m_C) = 0; /*0x62b262*/
    if ( a3 ) /*0x62b268*/
      v4 = a3; /*0x62b27e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x62b27a*/
    LOBYTE(this->m_C) = 1; /*0x62b282*/
    if ( !v4 ) /*0x62b286*/
      return 0; /*0x62b2fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x62b288*/
    {
      m_8 = this->m_8; /*0x62b28f*/
      if ( a2 < m_8 ) /*0x62b294*/
        m_8 = a2; /*0x62b296*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x62b29c*/
        ++i; /*0x62b2a1*/
      if ( BYTE1(this->m_C) ) /*0x62b2ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b2b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x62b2c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x62b2ca*/
    this->m_8 = a2; /*0x62b2d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x62b2d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVParasiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62b2de*/
  }
  v7 = this->m_8; /*0x62b2e1*/
  if ( v7 < this->m_10 ) /*0x62b2e9*/
    this->m_10 = v7; /*0x62b2eb*/
  return 1; /*0x62b2ee*/
}



// ==== 0x0062B300  _DynamicVectorClass_PAVParasiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::FindItemIndex(_DynamicVectorClass_PAVParasiteClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x62b300*/
  result = 0; /*0x62b303*/
  if ( m_10 <= 0 ) /*0x62b308*/
    return -1; /*0x62b31f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62b30e*/
  {
    if ( ++result >= m_10 ) /*0x62b31d*/
      return -1; /*0x62b31d*/
  }
  return result; /*0x62b322*/
}



// ==== 0x0062B330  _VectorClass_PAVParasiteClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ParasiteClass::QueryInterface(_VectorClass_PAVParasiteClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x62b333*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParasiteClass *>::`vftable'; /*0x62b336*/
  if ( v3 && BYTE1(this->m_C) ) /*0x62b340*/
  {
    __3_YAXPAX_Z(v3); /*0x62b348*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b350*/
  }
  BYTE1(this->m_C) = 0; /*0x62b35b*/
  this->m_8 = 0; /*0x62b361*/
  if ( (a2 & 1) != 0 ) /*0x62b368*/
    __3_YAXPAX_Z(this); /*0x62b36b*/
  return this->__pad_0; /*0x62b375*/
}



// ==== 0x0062B380  _DynamicVectorClass_PAVParasiteClass::Constructor_VectorClass_ParasiteClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(
        _DynamicVectorClass_PAVParasiteClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x62b383*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParasiteClass *>::`vftable'; /*0x62b386*/
  if ( v3 && BYTE1(this->m_C) ) /*0x62b390*/
  {
    __3_YAXPAX_Z(v3); /*0x62b398*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b3a0*/
  }
  BYTE1(this->m_C) = 0; /*0x62b3ab*/
  this->m_8 = 0; /*0x62b3b1*/
  if ( (a2 & 1) != 0 ) /*0x62b3b8*/
    __3_YAXPAX_Z(this); /*0x62b3bb*/
  return this->__pad_0; /*0x62b3c5*/
}



// ==== 0x0062B3D0  sub_62B3D0  this=-  sig=ida-proto ====
void sub_62B3D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62b3dc*/
  dbl_AC49B8 = Math::Sqrt(v0 + v0); /*0x62b3ee*/
}



// ==== 0x0062B400  sub_62B400  this=-  sig=ida-proto ====
void sub_62B400()
{
  dbl_AC4A10 = dbl_AC49B8 / 60.0; /*0x62b40c*/
}



// ==== 0x0062B420  sub_62B420  this=-  sig=ida-proto ====
void sub_62B420()
{
  dbl_AC49F8 = 1.0 / dbl_AC4A10; /*0x62b42c*/
}



// ==== 0x0062B440  sub_62B440  this=-  sig=ida-proto ====
void sub_62B440()
{
  dbl_AC49F0 = 0.0174532925199433 * 45.0; /*0x62b44c*/
}



// ==== 0x0062B460  sub_62B460  this=-  sig=ida-proto ====
void sub_62B460()
{
  dbl_AC49C0 = 0.0174532925199433 * 60.0; /*0x62b46c*/
}



// ==== 0x0062B480  sub_62B480  this=-  sig=ida-proto ====
void sub_62B480()
{
  dbl_AC4990 = 0.0174532925199433 * 90.0; /*0x62b48c*/
}



// ==== 0x0062B4A0  sub_62B4A0  this=-  sig=ida-proto ====
__int64 sub_62B4A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4990 - dbl_AC49C0); /*0x62b4b2*/
  result = Math::RoundToInt(v0 * dbl_AC49B8 * 0.5); /*0x62b4c6*/
  dword_AC4A18 = result; /*0x62b4cb*/
  return result; /*0x62b4d0*/
}



// ==== 0x0062B4E0  sub_62B4E0  this=-  sig=ida-proto ====
void sub_62B4E0()
{
  dbl_AC49C8 = Math::ArcTan((double)dword_AC4A18 * 0.00390625); /*0x62b4f7*/
}



// ==== 0x0062B510  sub_62B510  this=-  sig=ida-proto ====
void sub_62B510()
{
  dbl_AC49E8 = Math::ArcTan((double)(2 * dword_AC4A18) / dbl_AC49B8); /*0x62b532*/
}



// ==== 0x0062B540  sub_62B540  this=-  sig=ida-proto ====
__int64 sub_62B540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A18) + 0.5); /*0x62b55b*/
  dword_AC4A0C = result; /*0x62b560*/
  return result; /*0x62b566*/
}



// ==== 0x0062B570  sub_62B570  this=-  sig=ida-proto ====
int sub_62B570()
{
  word_AC49B0 = 0; /*0x62b572*/
  word_AC49B2 = 0; /*0x62b578*/
  return 0; /*0x62b57e*/
}



// ==== 0x0062B580  sub_62B580  this=-  sig=ida-proto ====
int sub_62B580()
{
  dword_AC49D8 = 0; /*0x62b582*/
  dword_AC49DC = 0; /*0x62b587*/
  dword_AC49E0 = 0; /*0x62b58c*/
  return 0; /*0x62b591*/
}



// ==== 0x0062B5A0  sub_62B5A0  this=-  sig=ida-proto ====
int sub_62B5A0()
{
  dword_AC4A08 = 0; /*0x62b5a5*/
  dword_AC4A00 = 128; /*0x62b5af*/
  dword_AC4A04 = 128; /*0x62b5b4*/
  return 128; /*0x62b5b9*/
}



// ==== 0x0062B5C0  sub_62B5C0  this=-  sig=ida-proto ====
int sub_62B5C0()
{
  dword_AC49A0 = 0; /*0x62b5c2*/
  dword_AC49A4 = 0; /*0x62b5c7*/
  dword_AC49A8 = 0; /*0x62b5cc*/
  dword_AC49AC = 0; /*0x62b5d1*/
  return 0; /*0x62b5d6*/
}



// ==== 0x0062B5E0  ParticleClass::Construct  this=ParticleClass  sig=csp ====
int __userpurge ParticleClass::Construct@<eax>(
        ObjectClass *this@<ecx>,
        double a2@<st0>,
        int a3,
        _DWORD *a4,
        float a5,
        int a6)
{
  float v7; // eax
  int v10; // ecx
  _BYTE *v17; // eax
  char v18; // dl
  int v19; // eax
  int v21; // eax
  __int16 v22; // ax
  float v24; // eax
  float v25; // ecx
  float v26; // edx
  int v27; // edi
  int v28; // eax
  int v32; // eax
  int v33; // edx
  _BYTE *v34; // eax
  double v36; // [esp+8h] [ebp-30h]
  float v37; // [esp+Ch] [ebp-2Ch]
  int v38; // [esp+28h] [ebp-10h]
  float v39; // [esp+2Ch] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-Ch]
  float v41; // [esp+30h] [ebp-8h]
  float v42; // [esp+34h] [ebp-4h]
  int v43; // [esp+3Ch] [ebp+4h]
  int v44; // [esp+3Ch] [ebp+4h]
  int v45; // [esp+3Ch] [ebp+4h]
  int v46; // [esp+3Ch] [ebp+4h]
  unsigned int v47; // [esp+3Ch] [ebp+4h]
  int v49; // [esp+3Ch] [ebp+4h]
  unsigned int v50; // [esp+40h] [ebp+8h]

  _ESI = (int)this; /*0x62b5e7*/
  ObjectClass::ctor(this); /*0x62b5e9*/
  *(_DWORD *)(_ESI + 172) = a3; /*0x62b5f4*/
  *(_BYTE *)(_ESI + 176) = 0; /*0x62b5fa*/
  *(_BYTE *)(_ESI + 177) = 0; /*0x62b600*/
  *(_BYTE *)(_ESI + 178) = 0; /*0x62b606*/
  *(_DWORD *)(_ESI + 184) = 0; /*0x62b60c*/
  *(_DWORD *)(_ESI + 180) = 0; /*0x62b612*/
  *(_DWORD *)(_ESI + 188) = 0; /*0x62b618*/
  v7 = a5; /*0x62b61e*/
  *(_DWORD *)(_ESI + 192) = 0; /*0x62b622*/
  *(_DWORD *)(_ESI + 196) = 0; /*0x62b628*/
  *(_DWORD *)(_ESI + 200) = 0; /*0x62b62e*/
  *(_DWORD *)(_ESI + 204) = 0; /*0x62b634*/
  *(_DWORD *)(_ESI + 208) = 0; /*0x62b63a*/
  *(_DWORD *)(_ESI + 212) = -1082130432; /*0x62b640*/
  *(_DWORD *)(_ESI + 216) = 0; /*0x62b64a*/
  *(_DWORD *)(_ESI + 220) = 0; /*0x62b650*/
  *(_DWORD *)(_ESI + 224) = 0; /*0x62b656*/
  *(_DWORD *)(_ESI + 228) = *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 764); /*0x62b66e*/
  *(_DWORD *)(_ESI + 232) = *(_DWORD *)LODWORD(v7); /*0x62b678*/
  *(_DWORD *)(_ESI + 236) = *(_DWORD *)(LODWORD(v7) + 4); /*0x62b67d*/
  _EDI = a4; /*0x62b680*/
  *(_DWORD *)(_ESI + 240) = *(_DWORD *)(LODWORD(v7) + 8); /*0x62b687*/
  *(_DWORD *)(_ESI + 244) = *a4; /*0x62b694*/
  *(_DWORD *)(_ESI + 248) = a4[1]; /*0x62b699*/
  *(_DWORD *)(_ESI + 252) = a4[2]; /*0x62b69f*/
  *(_DWORD *)(_ESI + 256) = dword_AC49D8; /*0x62b6ae*/
  *(_DWORD *)(_ESI + 260) = dword_AC49DC; /*0x62b6ba*/
  *(_DWORD *)(_ESI + 264) = dword_AC49E0; /*0x62b6c3*/
  v43 = *(_DWORD *)(LODWORD(v7) + 8) - a4[2]; /*0x62b6d6*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6da*/
  v44 = *(_DWORD *)(LODWORD(v7) + 4) - a4[1]; /*0x62b6e2*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6e8*/
  v45 = *(_DWORD *)LODWORD(v7) - *a4; /*0x62b6ec*/
  _EBP = (float *)(_ESI + 268); /*0x62b6f0*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6f6*/
  v10 = a6; /*0x62b6fa*/
  __asm { fstp dword ptr [ebp+0] } /*0x62b6fe*/
  *_EBP = _ET1; /*0x62b6fe*/
  __asm { fstp dword ptr [ebp+4] } /*0x62b701*/
  _EBP[1] = _ET1; /*0x62b701*/
  __asm { fstp dword ptr [ebp+8] } /*0x62b704*/
  _EBP[2] = _ET1; /*0x62b704*/
  __asm /*0x62b707*/
  {
    fild dword ptr [edi+8]
    fild dword ptr [edi+4]
    fild dword ptr [edi]
    fstp dword ptr [esi+118h]
  }
  *(float *)(_ESI + 280) = _ET1; /*0x62b70f*/
  __asm { fstp dword ptr [esi+11Ch] } /*0x62b715*/
  *(float *)(_ESI + 284) = _ET1; /*0x62b715*/
  __asm { fstp dword ptr [esi+120h] } /*0x62b71b*/
  *(float *)(_ESI + 288) = _ET1; /*0x62b71b*/
  *(_DWORD *)(_ESI + 292) = v10; /*0x62b721*/
  v17 = *(_BYTE **)(_ESI + 172); /*0x62b727*/
  v18 = v17[779]; /*0x62b72d*/
  *(_BYTE *)(_ESI + 301) = 0; /*0x62b733*/
  *(_BYTE *)(_ESI + 300) = v18; /*0x62b739*/
  *(_BYTE *)(_ESI + 302) = v17[778]; /*0x62b745*/
  *(_BYTE *)(_ESI + 303) = v17[756]; /*0x62b754*/
  *(_BYTE *)(_ESI + 304) = 0; /*0x62b75b*/
  *(_BYTE *)(_ESI + 305) = 0; /*0x62b761*/
  *(_DWORD *)_ESI = &ParticleClass::`vftable'; /*0x62b767*/
  *(_DWORD *)(_ESI + 4) = &ParticleClass::`vftable'; /*0x62b76d*/
  *(_DWORD *)(_ESI + 8) = &ParticleClass::`vftable'; /*0x62b773*/
  *(_DWORD *)(_ESI + 12) = &ParticleClass::`vftable'; /*0x62b77a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(_ESI + 4)); /*0x62b781*/
  if ( *(int *)&stru_A83D50.__pad_80[8] < *(int *)stru_A83D50.__pad_80 /*0x62b7b9*/
    || (stru_A83D50.__pad_80[5] || !*(_DWORD *)stru_A83D50.__pad_80)
    && *(int *)&stru_A83D50.__pad_80[12] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A83D50.SuperClass_field_0x78 + 8))(
         &stru_A83D50.SuperClass_field_0x78,
         *(_DWORD *)&stru_A83D50.__pad_80[12] + *(_DWORD *)stru_A83D50.__pad_80,
         0) )
  {
    v19 = (*(_DWORD *)&stru_A83D50.__pad_80[8])++; /*0x62b7c6*/
    *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v19) = _ESI; /*0x62b7d5*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 788) == 1 ) /*0x62b7e5*/
  {
    v46 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 2; /*0x62b803*/
    __asm /*0x62b807*/
    {
      fild [esp+28h+arg_0]
      fadd dword ptr [esi+0E4h]
      fstp dword ptr [esi+0E4h]
    }
    *(float *)(_ESI + 228) = _ET1; /*0x62b811*/
  }
  v21 = *(_DWORD *)(_ESI + 172); /*0x62b817*/
  *(_WORD *)(_ESI + 298) = *(_WORD *)(v21 + 732); /*0x62b824*/
  if ( *(_DWORD *)(v21 + 788) == 4 ) /*0x62b834*/
    v22 = *(_WORD *)(*(_DWORD *)(_ESI + 172) + 736) /*0x62b85c*/
        + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 10);
  else
    v22 = *(_WORD *)(*(_DWORD *)(_ESI + 172) + 736) /*0x62b889*/
        + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 736));
  *(_WORD *)(_ESI + 296) = v22; /*0x62b890*/
  v38 = a4[2]; /*0x62b8ad*/
  if ( v38 <= (int)Cell::GetGroundHeight(a4) ) /*0x62b8ba*/
    Cell::GetGroundHeight(a4); /*0x62b8c2*/
  ObjectClass::SetPosition((IUnknown *)_ESI); /*0x62b8d2*/
  __asm /*0x62b8d7*/
  {
    fld dword ptr [ebp+8]
    fld dword ptr [ebp+4]
    fld dword ptr [ebp+0]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
  }
  __asm
  {
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp qword ptr [esp+30h+var_30]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v36); /*0x62b8fc*/
  __asm { fcom ds:dbl_7E2800 } /*0x62b901*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x62b90f*/
  {
    __asm { fstp st } /*0x62b93a*/
    v24 = *_EBP; /*0x62b93c*/
    v25 = *(float *)(_ESI + 272); /*0x62b93e*/
    v26 = *(float *)(_ESI + 276); /*0x62b941*/
  }
  else
  {
    __asm /*0x62b911*/
    {
      fld dword ptr [ebp+0]
      fdiv st, st(1)
      fstp [esp+28h+var_C]
      fld dword ptr [ebp+4]
      fdiv st, st(1)
    }
    v24 = v39; /*0x62b91f*/
    __asm { fstp [esp+28h+var_8] } /*0x62b923*/
    v25 = v41; /*0x62b927*/
    __asm /*0x62b92b*/
    {
      fdivr dword ptr [ebp+8]
      fstp [esp+28h+var_4]
    }
    v26 = v42; /*0x62b932*/
  }
  *_EBP = v24; /*0x62b94a*/
  *(float *)(_ESI + 272) = v25; /*0x62b950*/
  *(float *)(_ESI + 276) = v26; /*0x62b953*/
  if ( *(_BYTE *)(*(_DWORD *)(_ESI + 172) + 783) ) /*0x62b95c*/
  {
    __asm { fld dword ptr [ebp+0] } /*0x62b96e*/
    __asm { fmul dword ptr [esi+0E4h] }
    v40 = *a4 - *(_DWORD *)LODWORD(a5); /*0x62b97e*/
    v27 = a4[1] - *(_DWORD *)(LODWORD(a5) + 4); /*0x62b985*/
    LOWORD(v28) = Math::RoundToInt(a2); /*0x62b987*/
    a5 = COERCE_FLOAT(abs32(v28)); /*0x62b991*/
    __asm /*0x62b995*/
    {
      fild [esp+28h+arg_8.Color_field_00]
      fstp [esp+28h+arg_8.Color_field_00]
      fld dword ptr [esi+110h]
      fmul dword ptr [esi+0E4h]
    }
    LOWORD(_EAX) = Math::RoundToInt(a2); /*0x62b9a9*/
    v47 = abs32(_EAX); /*0x62b9b3*/
    __asm /*0x62b9b7*/
    {
      fild [esp+28h+arg_0]
      fstp [esp+28h+arg_0]
      fld ds:flt_7EF920
      fld [esp+28h+arg_8.Color_field_00]
      fcomp ds:dbl_7EF918
      fnstsw ax
    }
    if ( (_EAX & 0x4100) == 0 ) /*0x62b9d4*/
    {
      __asm { fstp st } /*0x62b9db*/
      v50 = abs32(v40); /*0x62b9e1*/
      __asm /*0x62b9e5*/
      {
        fild [esp+28h+arg_4]
        fdiv [esp+28h+arg_8.Color_field_00]
      }
    }
    __asm /*0x62b9ed*/
    {
      fld [esp+28h+arg_0]
      fcomp ds:dbl_7EF918
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x62b9fc*/
    {
      a5 = COERCE_FLOAT(abs32(v27)); /*0x62ba05*/
      __asm /*0x62ba09*/
      {
        fild [esp+28h+arg_8.Color_field_00]
        fdiv [esp+28h+arg_0]
        fstp [esp+28h+arg_8.Color_field_00]
        fcom [esp+28h+arg_8.Color_field_00]
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x62ba1e*/
      {
        __asm /*0x62ba20*/
        {
          fstp st
          fld [esp+28h+arg_8.Color_field_00]
        }
      }
    }
    LODWORD(a5) = *(char *)(*(_DWORD *)(_ESI + 172) + 780) + 1; /*0x62ba34*/
    __asm /*0x62ba38*/
    {
      fild [esp+28h+arg_8.Color_field_00]
      fdivr st, st(1)
      fadd ds:dbl_7E1718
    }
    __asm { fstp st }
    *(_BYTE *)(_ESI + 300) = Math::RoundToInt(a2); /*0x62ba4b*/
  }
  v32 = *(_DWORD *)(_ESI + 172); /*0x62ba51*/
  if ( *(int *)(v32 + 712) > 0 ) /*0x62ba5d*/
  {
    if ( *(_BYTE *)(v32 + 724) /*0x62ba8b*/
      || *(_BYTE *)(v32 + 725)
      || *(_BYTE *)(v32 + 726)
      || *(_BYTE *)(v32 + 727)
      || *(_BYTE *)(v32 + 728)
      || *(_BYTE *)(v32 + 729) )
    {
      v49 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62bac5*/
      __asm { fild [esp+28h+arg_0] } /*0x62bacf*/
      __asm
      {
        fmul ds:dbl_7E3570
        fstp [esp+2Ch+var_30+4]; float
      }
      v34 = Color::Lerp2((Color *)&a5, *(_DWORD *)(_ESI + 172) + 724, *(_DWORD *)(_ESI + 172) + 727, v37); /*0x62baee*/
      *(_WORD *)(_ESI + 176) = *(_WORD *)v34; /*0x62baf6*/
      *(_BYTE *)(_ESI + 178) = v34[2]; /*0x62bb00*/
    }
    else
    {
      v33 = *(_DWORD *)(v32 + 700); /*0x62ba93*/
      *(_WORD *)(_ESI + 176) = *(_WORD *)v33; /*0x62ba9c*/
      *(_BYTE *)(_ESI + 178) = *(_BYTE *)(v33 + 2); /*0x62baa6*/
    }
  }
  ObjectClass::Deploy((ObjectClass *)_ESI); /*0x62bb0e*/
  return _ESI; /*0x62bb15*/
}



// ==== 0x0062BB20  ObjectClass::ProcessUpdate  this=ParticleClass  sig=csp ====
int __thiscall ObjectClass::ProcessUpdate(ObjectClass *this)
{
  int v2; // eax

  ObjectClass::ctor(this); /*0x62bb23*/
  this->q02B = 0; /*0x62bb30*/
  this->q0B0 = 0; /*0x62bb36*/
  this->q0B1 = 0; /*0x62bb3c*/
  this->q0B2 = 0; /*0x62bb42*/
  this->q0B8 = 0; /*0x62bb48*/
  this->q0B4 = 0; /*0x62bb4e*/
  this->q0BC = 0; /*0x62bb54*/
  this->nextObject = 0; /*0x62bb5a*/
  this->q031 = 0; /*0x62bb60*/
  this->q0C8 = 0; /*0x62bb66*/
  this->alignmentPadding = 0; /*0x62bb6c*/
  this->attachedTag = 0; /*0x62bb72*/
  this->q0D4 = -1082130432; /*0x62bb78*/
  this->q0D8 = 0; /*0x62bb82*/
  this->q0DC = 0; /*0x62bb88*/
  this->q038 = 0; /*0x62bb8e*/
  this->q0E4 = 0; /*0x62bb94*/
  this->q03A = dword_AC49D8; /*0x62bba0*/
  this->q03B = dword_AC49DC; /*0x62bba8*/
  this->q03C = dword_AC49E0; /*0x62bbb1*/
  this->q03D = dword_AC49D8; /*0x62bbc0*/
  this->q0F8 = dword_AC49DC; /*0x62bbcc*/
  this->q0FC = dword_AC49E0; /*0x62bbd5*/
  this->q040 = dword_AC49D8; /*0x62bbe4*/
  this->q104 = dword_AC49DC; /*0x62bbf0*/
  this->q042 = dword_AC49E0; /*0x62bbf9*/
  this->q10C = 0; /*0x62bbfc*/
  this->u32_44 = 0; /*0x62bc02*/
  this->RemainingEC = 0; /*0x62bc08*/
  this->StateAIAdvance = 0; /*0x62bc0e*/
  this->q11C = 0; /*0x62bc14*/
  this->q048 = 0; /*0x62bc1a*/
  this->q124 = 0; /*0x62bc20*/
  this->q12C = 0; /*0x62bc26*/
  this->q12D = 0; /*0x62bc2c*/
  this->StartStateAI = 0; /*0x62bc32*/
  this->Translucency = 0; /*0x62bc38*/
  this->q130 = 0; /*0x62bc3e*/
  this->q4C4 = 0; /*0x62bc44*/
  this->AbstractClass = &ParticleClass::`vftable'; /*0x62bc4a*/
  this->? = &ParticleClass::`vftable'; /*0x62bc50*/
  this->? = &ParticleClass::`vftable'; /*0x62bc57*/
  this->? = &ParticleClass::`vftable'; /*0x62bc5e*/
  if ( *(int *)&stru_A83D50.__pad_80[8] < *(int *)stru_A83D50.__pad_80 /*0x62bc99*/
    || (stru_A83D50.__pad_80[5] || !*(_DWORD *)stru_A83D50.__pad_80)
    && *(int *)&stru_A83D50.__pad_80[12] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A83D50.SuperClass_field_0x78 + 8))(
         &stru_A83D50.SuperClass_field_0x78,
         *(_DWORD *)stru_A83D50.__pad_80 + *(_DWORD *)&stru_A83D50.__pad_80[12],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A83D50.__pad_80[8])++; /*0x62bca6*/
    *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v2) = this; /*0x62bcb5*/
  }
  return (int)this; /*0x62bcba*/
}



// ==== 0x0062BD50  ParasiteClass::Update  this=ParticleClass  sig=csp ====
char __thiscall ParasiteClass::Update(char *this)
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
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CellClass *v17; // esi
  double v18; // st7
  _DWORD *v19; // edi
  int Byte284; // eax
  float *v21; // eax
  double v22; // st7
  int v23; // edx
  int v24; // eax
  int v25; // eax
  float v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  ObjectClass *firstObject; // esi
  int v31; // edx
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  ObjectClass *nextObject; // edi
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  void *ptr_0; // ebx
  __int64 v41; // rax
  int v42; // edi
  int v43; // ebx
  char result; // al
  int v45; // [esp-Ch] [ebp-100h]
  int v46; // [esp+0h] [ebp-F4h]
  int v47; // [esp+0h] [ebp-F4h]
  int v48; // [esp+0h] [ebp-F4h]
  int v49; // [esp+4h] [ebp-F0h]
  int v50; // [esp+4h] [ebp-F0h]
  int v51; // [esp+4h] [ebp-F0h]
  float *v52; // [esp+8h] [ebp-ECh]
  float *v53; // [esp+8h] [ebp-ECh]
  float v54; // [esp+8h] [ebp-ECh]
  float *v55; // [esp+8h] [ebp-ECh]
  bool v56; // [esp+19h] [ebp-DBh]
  char v57; // [esp+1Ah] [ebp-DAh]
  char v58; // [esp+1Bh] [ebp-D9h]
  int v59; // [esp+1Ch] [ebp-D8h] BYREF
  float v60; // [esp+20h] [ebp-D4h]
  float v61; // [esp+24h] [ebp-D0h]
  float v62; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v64; // [esp+30h] [ebp-C4h]
  float v65; // [esp+34h] [ebp-C0h]
  float v66; // [esp+38h] [ebp-BCh]
  int v67; // [esp+3Ch] [ebp-B8h]
  _DWORD v68[2]; // [esp+40h] [ebp-B4h] BYREF
  int v69; // [esp+48h] [ebp-ACh]
  int v70[3]; // [esp+4Ch] [ebp-A8h] BYREF
  int v71[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v72; // [esp+60h] [ebp-94h]
  float v73[12]; // [esp+64h] [ebp-90h] BYREF
  float v74[12]; // [esp+94h] [ebp-60h] BYREF
  float v75[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((unsigned __int8)dword_A8ED84 & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v59 = this->u32_9C; /*0x62bd75*/
  v60 = *((float *)this + 40); /*0x62bd88*/
  v61 = *((float *)this + 41); /*0x62bd8f*/
  if ( (abs32(Random::State((_DWORD *)dword_A8B230 + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((_DWORD *)dword_A8B230 + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + this->nextObject; /*0x62be11*/
    v5 = v3 + this->q031; /*0x62be1b*/
    this->nextObject = v4; /*0x62be1f*/
    this->q031 = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        this->nextObject = 2; /*0x62be3e*/
    }
    else
    {
      this->nextObject = -2; /*0x62be32*/
    }
    v6 = this->q031; /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        this->q031 = 2; /*0x62be5a*/
    }
    else
    {
      this->q031 = -2; /*0x62be4e*/
    }
  }
  v7 = (double)v59; /*0x62be60*/
  v8 = (int *)(this + 204); /*0x62be64*/
  v59 = 0; /*0x62be6a*/
  v64 = v7; /*0x62be78*/
  v9 = (double)SLODWORD(v60); /*0x62be7c*/
  v60 = 0.0; /*0x62be80*/
  this->alignmentPadding = 0; /*0x62be8c*/
  v65 = v9; /*0x62be8e*/
  v10 = (double)SLODWORD(v61); /*0x62be92*/
  v61 = -2.0; /*0x62be96*/
  this->attachedTag = 0; /*0x62bea2*/
  v66 = v10; /*0x62bea5*/
  this->q0D4 = -1073741824; /*0x62bea9*/
  *((float *)this + 53) = *((float *)this + 53) - (double)dword_8871E0->RepairRate[0]; /*0x62bebd*/
  LOWORD(v11) = Math::RoundToInt(v66); /*0x62bec4*/
  v49 = v11; /*0x62becd*/
  LOWORD(v12) = Math::RoundToInt(v65); /*0x62bece*/
  v46 = v12; /*0x62bed7*/
  LOWORD(v13) = Math::RoundToInt(v64); /*0x62bed8*/
  Coord3D::Set(v68, v13, v46, v49); /*0x62bee2*/
  Vector3::AddAssign((int *)this + 51, v52); /*0x62beec*/
  LOWORD(v14) = Math::RoundToInt(v66); /*0x62bef5*/
  v50 = v14; /*0x62befe*/
  LOWORD(v15) = Math::RoundToInt(v65); /*0x62beff*/
  v47 = v15; /*0x62bf08*/
  LOWORD(v16) = Math::RoundToInt(v64); /*0x62bf09*/
  Coord3D::Set(v70, v16, v47, v50); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v70); /*0x62bf2d*/
  v67 = dword_AC4A0C + GroundHeight; /*0x62bf3d*/
  v17 = Coord::To_Cell(&dword_87F7E8, v70); /*0x62bf46*/
  v58 = 0; /*0x62bf4d*/
  v57 = 0; /*0x62bf52*/
  if ( (v17->flags[0] & 0x100) != 0 || (Coord::To_Cell(&dword_87F7E8, v68)->flags[0] & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v70[2] < v67 ) /*0x62bf84*/
    {
      if ( v69 >= v67 ) /*0x62bf93*/
        v58 = 1; /*0x62bf95*/
    }
    else if ( v69 < v67 ) /*0x62bf88*/
    {
      v57 = 1; /*0x62bf8a*/
    }
  }
  v56 = 0; /*0x62bf9e*/
  if ( !v58 && !v57 ) /*0x62bfb1*/
  {
    v18 = (double)GroundHeight; /*0x62bfb7*/
    if ( v66 >= v18 && v66 - 150.0 < v18 ) /*0x62bfdb*/
    {
      v19 = Cell::IsBridge(v17); /*0x62bfe4*/
      if ( v19 || (unsigned __int8)BuildingPlacement::ValidateType(v17, -1, -1) ) /*0x62bff0*/
      {
        v56 = 1; /*0x62c001*/
        if ( v19 ) /*0x62c006*/
        {
          if ( *(_BYTE *)(v19[328] + 5823) ) /*0x62c00e*/
            v56 = v19[390] < 8; /*0x62c021*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v19 + 128))(v19) ) /*0x62c02a*/
            v56 = 0; /*0x62c034*/
        }
      }
      else
      {
        v56 = 0; /*0x62bff9*/
      }
    }
  }
  v62 = (float)GroundHeight; /*0x62c041*/
  if ( v66 < (double)v62 ) /*0x62c056*/
  {
    if ( !v58 ) /*0x62c1b7*/
    {
      if ( !v57 ) /*0x62c1cc*/
      {
LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v66 ) /*0x62c094*/
          v66 = v62; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v58 ) /*0x62c05e*/
  {
    if ( !v57 ) /*0x62c06a*/
    {
      if ( !v56 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
LABEL_47:
    LODWORD(v62) = v67 - 20; /*0x62c1d2*/
    v66 = (float)(v67 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v66 = (float)v67; /*0x62c1bd*/
LABEL_39:
  Byte284 = CellClass::GetByte284(v70); /*0x62c09e*/
  qmemcpy(v73, CopyAudioData((char *)v75, Byte284), sizeof(v73)); /*0x62c0cb*/
  v21 = InvertMatrix3x3Signs(v75, v73); /*0x62c0d4*/
  v22 = *((float *)this + 52); /*0x62c0d9*/
  v23 = *v8; /*0x62c0ea*/
  qmemcpy(v74, v21, sizeof(v74)); /*0x62c0ec*/
  *(float *)&v48 = -v22; /*0x62c0f9*/
  Triple::Set(&v59, v23, v48, this->q0D4); /*0x62c0fd*/
  v24 = Matrix3x3::TransformPoint(v71, (float *)&v59, v53); /*0x62c113*/
  v59 = *(_DWORD *)v24; /*0x62c11f*/
  v60 = *(float *)(v24 + 4); /*0x62c126*/
  v61 = *(float *)(v24 + 8); /*0x62c131*/
  Coord::Scale((int *)0x3F800000, v54); /*0x62c135*/
  v61 = -v61; /*0x62c14a*/
  v25 = Matrix3x3::TransformPoint(v71, (float *)&v59, v55); /*0x62c152*/
  v59 = *(_DWORD *)v25; /*0x62c159*/
  v60 = *(float *)(v25 + 4); /*0x62c160*/
  v26 = *(float *)(v25 + 8); /*0x62c164*/
  v27 = v59; /*0x62c167*/
  *((float *)this + 52) = -v60; /*0x62c171*/
  v61 = v26; /*0x62c176*/
  *v8 = v27; /*0x62c17a*/
  *((float *)this + 53) = v26; /*0x62c17c*/
LABEL_40:
  if ( (*(int (__thiscall **)(char *))(this->q720)(this) <= 5 || (int)dword_A8ED84 % 2 )
  {
    v28 = this->q0C8 <= 0 ? 0 : this->q0C8;
  }
  else
  {
    v28 = this->q0C8 - 1; /*0x62c1a8*/
    if ( v28 < -5 ) /*0x62c1ac*/
      v28 = -5; /*0x62c1ae*/
  }
  this->q0C8 = v28; /*0x62c1fa*/
LABEL_50:
  if ( !--this->q095 ) /*0x62c207*/
  {
    v29 = this->q02B; /*0x62c215*/
    if ( *(_DWORD *)(v29 + 744) ) /*0x62c21b*/
    {
      this->q095 = *(_WORD *)(v29 + 732); /*0x62c236*/
      v68[0] = this->u32_9C; /*0x62c23f*/
      v68[1] = this->q028; /*0x62c250*/
      v69 = this->q029; /*0x62c257*/
      firstObject = Coord::To_Cell(&dword_87F7E8, v68)->firstObject; /*0x62c260*/
      if ( firstObject ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v31 = firstObject->location[0]; /*0x62c276*/
          v32 = firstObject->location[1]; /*0x62c278*/
          v72 = firstObject->location[2]; /*0x62c286*/
          v33 = this->u32_9C - v31; /*0x62c28c*/
          v34 = this->q028 - v32; /*0x62c291*/
          nextObject = firstObject->nextObject; /*0x62c293*/
          v72 = this->q029; /*0x62c299*/
          v36 = abs32(v33) + abs32(v34); /*0x62c2af*/
          if ( firstObject->isAliveFlag && firstObject->health > 0 ) /*0x62c2c0*/
          {
            v37 = this->q124; /*0x62c2c2*/
            if ( v37 ) /*0x62c2ca*/
              v38 = *(_DWORD *)(v37 + 252); /*0x62c2cc*/
            else
              v38 = 0; /*0x62c2d4*/
            v39 = this->q02B; /*0x62c2d6*/
            v51 = v38; /*0x62c2dc*/
            v62 = *(float *)(v39 + 744); /*0x62c2e9*/
            ptr_0 = firstObject->AbstractClass; /*0x62c2f3*/
            v45 = *(_DWORD *)(v39 + 740); /*0x62c2f5*/
            v41 = ZCoordToScreenY(v36); /*0x62c2f6*/
            (*((void (__fastcall **)(ObjectClass *, _DWORD, float *, _DWORD, int, _DWORD, _DWORD, _DWORD, int))ptr_0 /*0x62c303*/
             + 91))(
              firstObject,
              HIDWORD(v41),
              &v62,
              v41,
              v45,
              0,
              0,
              0,
              v51);
          }
          firstObject = nextObject; /*0x62c30b*/
        }
        while ( nextObject ); /*0x62c30d*/
      }
    }
  }
  v42 = this->q02B; /*0x62c316*/
  v43 = *(_DWORD *)(v42 + 736) /*0x62c33f*/
      - *((unsigned __int16 *)this + 148)
      + (*(int (__stdcall **)(char *))(this->ptr_8 + 16))(this + 4);
  if ( !(v43 % (*(char *)(v42 + 779) + ((*(int (__stdcall **)(char *))(this->ptr_8 + 16))(this + 4) & 1))) ) /*0x62c355*/
    ++this->StartStateAI; /*0x62c35b*/
  result = this->StartStateAI; /*0x62c361*/
  if ( result == *(_BYTE *)(v42 + 777) ) /*0x62c36f*/
  {
    result = *(_BYTE *)(v42 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      this->q4C4 = 1; /*0x62c37c*/
    else
      this->StartStateAI = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/
}



// ==== 0x0062C3A0  ParticleClass::UpdateParticlePhysics  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::UpdateParticlePhysics(ParticleClass *this)
{
  double v2; // st7
  float v3; // eax
  int v4; // eax
  double v5; // st7
  float v6; // eax
  double v7; // st7
  float v8; // eax
  int v9; // edx
  double *ParticleClass_field_0xAC; // ecx
  double v11; // st7
  IUnknown *ParticleClass_field_0xB4; // eax
  int v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch] BYREF
  float v18; // [esp+18h] [ebp-8h]
  float v19; // [esp+1Ch] [ebp-4h]

  v2 = *(float *)&this->__pad_E4[40]; /*0x62c3b1*/
  v3 = *(float *)this->__pad_E4; /*0x62c3bd*/
  v18 = *(float *)&this->__pad_E4[44]; /*0x62c3c5*/
  v19 = *(float *)&this->__pad_E4[48]; /*0x62c3cf*/
  v14 = v2 * v3; /*0x62c3e1*/
  v15 = v18 * v3; /*0x62c3ed*/
  v16 = v19 * v3; /*0x62c3f9*/
  *(float *)this->__pad_E4 = ((double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x62c422*/
                            * 4.656612877414201e-10
                            - 0.5)
                           * 0.1
                           + *(float *)this->__pad_E4;
  *(float *)&this->__pad_E4[52] = v14 + *(float *)&this->__pad_E4[52]; /*0x62c432*/
  *(float *)&this->__pad_E4[56] = v15 + *(float *)&this->__pad_E4[56]; /*0x62c442*/
  *(float *)&this->__pad_E4[60] = v16 + *(float *)&this->__pad_E4[60]; /*0x62c452*/
  LOWORD(v4) = Math::RoundToInt(*(float *)&this->__pad_E4[52]); /*0x62c45e*/
  v5 = *(float *)&this->__pad_E4[56]; /*0x62c463*/
  v17 = v4; /*0x62c469*/
  LOWORD(v6) = Math::RoundToInt(v5); /*0x62c46d*/
  v7 = *(float *)&this->__pad_E4[60]; /*0x62c472*/
  v18 = v6; /*0x62c478*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x62c47c*/
  v9 = *(_DWORD *)this->__pad_0; /*0x62c481*/
  v19 = v8; /*0x62c483*/
  (*(void (__thiscall **)(ParticleClass *, int *))(v9 + 436))(this, &v17); /*0x62c48e*/
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62c4ac*/
  ParticleClass_field_0xAC = (double *)this->ParticleClass_field_0xAC; /*0x62c4b0*/
  v11 = (double)v13 * 4.656612877414201e-10 * 0.05 /*0x62c4cc*/
      + ParticleClass_field_0xAC[86]
      + *(double *)&this->ParticleClass_field_0xB8;
  *(double *)&this->ParticleClass_field_0xB8 = v11; /*0x62c4d2*/
  if ( v11 > 1.0 ) /*0x62c4e3*/
  {
    ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62c4eb*/
    if ( (int)ParticleClass_field_0xB4 >= *((_DWORD *)ParticleClass_field_0xAC + 178) - 2 ) /*0x62c4f6*/
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c518*/
      this->ParticleClass_field_0xBC = (IUnknown *)1072693248; /*0x62c522*/
    }
    else
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c4f9*/
      this->ParticleClass_field_0xB4 = (IUnknown *)((char *)&ParticleClass_field_0xB4->field_0 + 1); /*0x62c503*/
      this->ParticleClass_field_0xBC = 0; /*0x62c509*/
    }
  }
}



// ==== 0x0062C540  ParticleClass::UpdateAnimationDrift  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::UpdateAnimationDrift(ParticleClass *this)
{
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  Random *p_NeedsSaveOrLink; // ecx
  IUnknown *v6; // eax
  IUnknown *v7; // ebp
  IUnknown *ParticleClass_field_0xC4; // eax
  float *ParticleClass_field_0xAC; // ebp
  int v10; // [esp+Ch] [ebp-4h]

  if ( (stru_A8EB00.?[416] & 1) != 0 ) /*0x62c54d*/
  {
    if ( (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 3) == 0 ) /*0x62c56a*/
    {
      v2 = 0; /*0x62c576*/
      v3 = 0; /*0x62c57e*/
      v4 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62c580*/
      p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62c592*/
      if ( (abs32(v4) & 1) != 0 ) /*0x62c598*/
        v3 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5c5*/
      else
        v2 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5ae*/
      v6 = (IUnknown *)((char *)this->ParticleClass_field_0xC0 + v2); /*0x62c5d1*/
      v7 = (IUnknown *)((char *)this->ParticleClass_field_0xC4 + v3); /*0x62c5d9*/
      this->ParticleClass_field_0xC0 = v6; /*0x62c5dd*/
      this->ParticleClass_field_0xC4 = v7; /*0x62c5e3*/
      if ( (int)v6 >= -5 ) /*0x62c5ee*/
      {
        if ( (int)v6 > 5 ) /*0x62c5fa*/
          this->ParticleClass_field_0xC0 = (IUnknown *)5; /*0x62c5fc*/
      }
      else
      {
        this->ParticleClass_field_0xC0 = (IUnknown *)-5; /*0x62c5f0*/
      }
      ParticleClass_field_0xC4 = this->ParticleClass_field_0xC4; /*0x62c602*/
      if ( (int)ParticleClass_field_0xC4 >= -5 ) /*0x62c60a*/
      {
        if ( (int)ParticleClass_field_0xC4 > 5 ) /*0x62c616*/
          this->ParticleClass_field_0xC4 = (IUnknown *)5; /*0x62c618*/
      }
      else
      {
        this->ParticleClass_field_0xC4 = (IUnknown *)-5; /*0x62c60c*/
      }
    }
    this->ParticleClass_field_0xC8 = 0; /*0x62c61e*/
  }
  ParticleClass_field_0xAC = (float *)this->ParticleClass_field_0xAC; /*0x62c628*/
  if ( this->__pad_128[6] < *((_BYTE *)ParticleClass_field_0xAC + 777) ) /*0x62c63a*/
  {
    v10 = *((_DWORD *)this->ParticleClass_field_0xAC + 184) /*0x62c664*/
        - *(unsigned __int16 *)this->__pad_128
        + (*(int (__stdcall **)(char *))(*(_DWORD *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2]);
    if ( !(v10 /*0x62c67e*/
         % (*((char *)ParticleClass_field_0xAC + 779)
          + ((*(int (__stdcall **)(char *))(*(_DWORD *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2])
           & 1))) )
      ++this->__pad_128[6]; /*0x62c684*/
    if ( this->__pad_128[6] == *((_BYTE *)ParticleClass_field_0xAC + 777) && *((_BYTE *)ParticleClass_field_0xAC + 776) ) /*0x62c69a*/
      this->__pad_128[9] = 1; /*0x62c6a4*/
  }
  if ( *(float *)this->__pad_E4 > 3.0 ) /*0x62c6bc*/
    *(float *)this->__pad_E4 = *(float *)this->__pad_E4 - ParticleClass_field_0xAC[192]; /*0x62c6ca*/
}



// ==== 0x0062C6E0  ObjectClass::UpdateParticleSystem  this=ObjectClass  sig=csp ====
void __thiscall UpdateParticleSystem(TechnoClass *this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  Cell *v11; // esi
  bool v12; // bl
  double v13; // st7
  _DWORD *v14; // edi
  int Byte284; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int currentMission; // ecx
  double v23; // st7
  int queuedMission; // eax
  int v25; // [esp+0h] [ebp-13Ch]
  int v26; // [esp+0h] [ebp-13Ch]
  int v27; // [esp+0h] [ebp-13Ch]
  int v28; // [esp+0h] [ebp-13Ch]
  int v29; // [esp+4h] [ebp-138h]
  int v30; // [esp+4h] [ebp-138h]
  int v31; // [esp+4h] [ebp-138h]
  float *v32; // [esp+8h] [ebp-134h]
  float *v33; // [esp+8h] [ebp-134h]
  float v34; // [esp+8h] [ebp-134h]
  float *v35; // [esp+8h] [ebp-134h]
  char v36; // [esp+1Ah] [ebp-122h]
  char v37; // [esp+1Bh] [ebp-121h]
  Triple v38; // [esp+1Ch] [ebp-120h] BYREF
  int v39; // [esp+20h] [ebp-11Ch]
  float v40; // [esp+24h] [ebp-118h]
  float v41; // [esp+28h] [ebp-114h]
  float v42; // [esp+2Ch] [ebp-110h]
  float v43; // [esp+30h] [ebp-10Ch]
  float v44; // [esp+34h] [ebp-108h]
  int v45; // [esp+38h] [ebp-104h]
  int v46; // [esp+3Ch] [ebp-100h] BYREF
  int v47; // [esp+40h] [ebp-FCh]
  int v48; // [esp+44h] [ebp-F8h]
  int GroundHeight; // [esp+48h] [ebp-F4h]
  Coord3D v50; // [esp+4Ch] [ebp-F0h] BYREF
  Coord3D v51; // [esp+58h] [ebp-E4h] BYREF
  int v52[3]; // [esp+64h] [ebp-D8h] BYREF
  int v53[3]; // [esp+70h] [ebp-CCh] BYREF
  float v54[12]; // [esp+7Ch] [ebp-C0h] BYREF
  float v55[12]; // [esp+ACh] [ebp-90h] BYREF
  char v56[48]; // [esp+DCh] [ebp-60h] BYREF
  float v57[12]; // [esp+10Ch] [ebp-30h] BYREF

  v38 = (Triple)this->location[0]; /*0x62c6f8*/
  v2 = (double)dword_8871E0->RepairRate[0]; /*0x62c705*/
  v3 = this->location[2]; /*0x62c70b*/
  v39 = this->location[1]; /*0x62c70e*/
  v40 = *(float *)&v3; /*0x62c712*/
  *(float *)this->passengers = *(float *)this->passengers - v2; /*0x62c71c*/
  v46 = this->animation[5]; /*0x62c728*/
  v47 = this->animation[6]; /*0x62c732*/
  v48 = this->passengers[0]; /*0x62c73c*/
  v42 = (float)(int)v38; /*0x62c74a*/
  v43 = (float)v39; /*0x62c752*/
  v44 = (float)SLODWORD(v40); /*0x62c75a*/
  *(float *)&v48 = *(float *)&v48 - (double)dword_8871E0->RepairRate[0]; /*0x62c76a*/
  LOWORD(v4) = Math::RoundToInt(v44); /*0x62c772*/
  v29 = v4; /*0x62c77b*/
  LOWORD(v5) = Math::RoundToInt(v43); /*0x62c77c*/
  v25 = v5; /*0x62c785*/
  LOWORD(v6) = Math::RoundToInt(v42); /*0x62c786*/
  Coord3D::Set(&v50, v6, v25, v29); /*0x62c790*/
  Vector3::AddAssign(&v46, v32); /*0x62c79e*/
  LOWORD(v7) = Math::RoundToInt(v44); /*0x62c7a7*/
  v30 = v7; /*0x62c7b0*/
  LOWORD(v8) = Math::RoundToInt(v43); /*0x62c7b1*/
  v26 = v8; /*0x62c7ba*/
  LOWORD(v9) = Math::RoundToInt(v42); /*0x62c7bb*/
  Coord3D::Set(&v51, v9, v26, v30); /*0x62c7c5*/
  GroundHeight = Cell::GetGroundHeight(&v51); /*0x62c7df*/
  v10 = GroundHeight + dword_AC4A0C; /*0x62c7e8*/
  v45 = GroundHeight + dword_AC4A0C; /*0x62c7f0*/
  v11 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &v51); /*0x62c7f9*/
  v36 = 0; /*0x62c800*/
  v37 = 0; /*0x62c805*/
  if ( (v11->Cell_field_0x140 & 0x100) != 0 || (Coord::To_Cell((Coord *)&dword_87F7E8, &v50)->flags & 0x100) != 0 ) /*0x62c827*/
  {
    if ( v51.Coord3D_field_0x08 < v10 ) /*0x62c833*/
    {
      if ( v50.Coord3D_field_0x08 >= v10 ) /*0x62c842*/
        v36 = 1; /*0x62c844*/
    }
    else if ( v50.Coord3D_field_0x08 < v10 ) /*0x62c837*/
    {
      v37 = 1; /*0x62c839*/
    }
  }
  v12 = 0; /*0x62c84d*/
  if ( !v36 && !v37 ) /*0x62c859*/
  {
    v13 = (double)GroundHeight; /*0x62c85b*/
    if ( v44 >= v13 && v44 - 150.0 < v13 ) /*0x62c87f*/
    {
      v14 = Cell::IsBridge(v11); /*0x62c888*/
      if ( v14 || (unsigned __int8)BuildingPlacement::ValidateType((BuildingPlacement *)v11, -1, -1) ) /*0x62c894*/
      {
        v12 = 1; /*0x62c89f*/
        if ( v14 ) /*0x62c8a1*/
        {
          if ( *(_BYTE *)(v14[328] + 5823) ) /*0x62c8a9*/
            v12 = v14[390] < 8; /*0x62c8bc*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v14 + 128))(v14) ) /*0x62c8c2*/
            v12 = 0; /*0x62c8cc*/
        }
      }
    }
  }
  v41 = (float)GroundHeight; /*0x62c8d6*/
  if ( v44 < (double)v41 ) /*0x62c8eb*/
  {
    if ( !v36 ) /*0x62c904*/
    {
      if ( !v37 ) /*0x62c916*/
      {
LABEL_28:
        v45 = GroundHeight - 100; /*0x62c92d*/
        if ( (double)(GroundHeight - 100) < v44 ) /*0x62c945*/
          v44 = v41; /*0x62c94b*/
        goto LABEL_30; /*0x62c94b*/
      }
      goto LABEL_27; /*0x62c916*/
    }
LABEL_25:
    v44 = (float)v45; /*0x62c906*/
LABEL_30:
    Byte284 = CellClass::GetByte284(&v51); /*0x62c94f*/
    qmemcpy(v54, CopyAudioData(v56, Byte284), sizeof(v54)); /*0x62c97c*/
    qmemcpy(v55, InvertMatrix3x3Signs(v57, v54), sizeof(v55)); /*0x62c99c*/
    *(float *)&v27 = -*(float *)&v47; /*0x62c9ae*/
    Triple::Set(&v38, v46, v27, v48); /*0x62c9b2*/
    v16 = Matrix3x3::TransformPoint(v53, (float *)&v38, v33); /*0x62c9c8*/
    v38 = *(Triple *)v16; /*0x62c9d4*/
    v39 = *(int *)(v16 + 4); /*0x62c9df*/
    v40 = *(float *)(v16 + 8); /*0x62c9e6*/
    Coord::Scale((int *)0x3F800000, v34); /*0x62c9ea*/
    v40 = -v40; /*0x62c9fd*/
    v17 = Matrix3x3::TransformPoint(v52, (float *)&v38, v35); /*0x62ca07*/
    v38 = *(Triple *)v17; /*0x62ca0e*/
    v39 = *(int *)(v17 + 4); /*0x62ca15*/
    v18 = *(_DWORD *)(v17 + 8); /*0x62ca19*/
    v46 = (int)v38; /*0x62ca1c*/
    *(float *)&v47 = -*(float *)&v39; /*0x62ca26*/
    v40 = *(float *)&v18; /*0x62ca2c*/
    v48 = v18; /*0x62ca30*/
    BYTE1(this->deployAnim) = 1; /*0x62ca34*/
    goto LABEL_31; /*0x62ca34*/
  }
  if ( v36 ) /*0x62c8ef*/
    goto LABEL_25; /*0x62c8ef*/
  if ( v37 ) /*0x62c8f7*/
  {
LABEL_27:
    LODWORD(v41) = v45 - 20; /*0x62c918*/
    v44 = (float)(v45 - 20); /*0x62c927*/
    goto LABEL_30; /*0x62c92b*/
  }
  if ( v12 ) /*0x62c8fb*/
    goto LABEL_28; /*0x62c8fb*/
LABEL_31:
  LOWORD(v19) = Math::RoundToInt(v44); /*0x62ca3b*/
  v31 = v19; /*0x62ca48*/
  LOWORD(v20) = Math::RoundToInt(v43); /*0x62ca49*/
  v28 = v20; /*0x62ca52*/
  LOWORD(v21) = Math::RoundToInt(v42); /*0x62ca53*/
  Coord::Subtract((Coord *)&v50, v21, v28, v31); /*0x62ca5d*/
  (*(void (__thiscall **)(TechnoClass *, Coord3D *))(this->ptr_0 + 436))(this, &v50); /*0x62ca6c*/
  v41 = COERCE_FLOAT(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646)); /*0x62ca8b*/
  currentMission = this->currentMission; /*0x62ca8f*/
  v23 = (double)SLODWORD(v41) * 4.656612877414201e-10 * 0.05 /*0x62caab*/
      + *(double *)(currentMission + 688)
      + *(double *)this->missionQueued;
  *(double *)this->missionQueued = v23; /*0x62cab1*/
  if ( v23 > 1.0 ) /*0x62cac2*/
  {
    queuedMission = this->queuedMission; /*0x62caca*/
    if ( queuedMission >= *(_DWORD *)(currentMission + 712) - 2 ) /*0x62cad5*/
    {
      *(_DWORD *)this->missionQueued = 0; /*0x62caf5*/
      this->missionStatus = 1072693248; /*0x62cafb*/
    }
    else
    {
      *(_DWORD *)this->missionQueued = 0; /*0x62cad8*/
      this->missionStatus = 0; /*0x62cade*/
      this->queuedMission = queuedMission + 1; /*0x62cae5*/
    }
  }
}



// ==== 0x0062CB10  ObjectClass::UpdateAreaDamageEffect  this=ObjectClass  sig=csp ====
void __thiscall UpdateAreaDamageEffect(ObjectClass *this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  char v9; // cl
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  char v13; // bl
  double v14; // st7
  bool v15; // zf
  CellClass *v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // ecx
  ObjectClass *altObject; // edi
  int v21; // ebx
  int v22; // ebp
  int (__thiscall **ptr_0)(ObjectClass *, char *); // edx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // [esp+24h] [ebp-28h] BYREF
  float v32; // [esp+28h] [ebp-24h] BYREF
  int v33; // [esp+2Ch] [ebp-20h]
  int v34; // [esp+30h] [ebp-1Ch]
  int v35; // [esp+34h] [ebp-18h]
  int v36; // [esp+38h] [ebp-14h]
  int v37; // [esp+3Ch] [ebp-10h]
  char v38[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( *((float *)this + 57) <= 0.0 ) /*0x62cb30*/
  {
    this->u32_39 = 0; /*0x62ce1c*/
LABEL_25:
    *((_BYTE *)this + 305) = 1; /*0x62ce26*/
    return; /*0x62ce26*/
  }
  v31 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 10 - 5; /*0x62cb51*/
  v2 = (double)v31 * 0.02 + 1.0; /*0x62cb5f*/
  v32 = v2 * *((float *)this + 67); /*0x62cb6d*/
  *(float *)&v33 = v2 * *((float *)this + 68); /*0x62cb79*/
  v3 = v2 * *((float *)this + 69); /*0x62cb7d*/
  LOWORD(v4) = Math::RoundToInt(v3); /*0x62cb8d*/
  v5 = v4; /*0x62cb9c*/
  LOWORD(v6) = Math::RoundToInt(v3); /*0x62cb9e*/
  v7 = v6; /*0x62cba9*/
  LOWORD(v8) = Math::RoundToInt(v3 * *((float *)this + 57)); /*0x62cbab*/
  v9 = *((_BYTE *)this + 302); /*0x62cbb6*/
  this->q040 = v5; /*0x62cbbc*/
  this->u32_41 = v7; /*0x62cbbe*/
  *((_DWORD *)this + 66) = v8; /*0x62cbc1*/
  v10 = this->q02B; /*0x62cbc4*/
  if ( v9 < *(char *)(v10 + 777) ) /*0x62cbd0*/
  {
    v11 = *(_DWORD *)(this->q02B + 736) /*0x62cbfc*/
        - *((unsigned __int16 *)this + 148)
        + (*((int (__stdcall **)(void **))this->? + 4))(&this->?);
    if ( !(v11 % (*((char *)this + 300) + ((*((int (__stdcall **)(void **))this->? + 4))(&this->?) & 1))) ) /*0x62cc12*/
    {
      v12 = this->q02B; /*0x62cc1e*/
      v13 = *((_BYTE *)this + 302) + 1; /*0x62cc24*/
      *((_BYTE *)this + 302) = v13; /*0x62cc28*/
      if ( v13 == *(unsigned __int8 *)(v12 + 781) ) /*0x62cc39*/
        *((_BYTE *)this + 303) = 25; /*0x62cc3b*/
      if ( v13 == *(unsigned __int8 *)(v12 + 782) ) /*0x62cc4c*/
        *((_BYTE *)this + 303) = 50; /*0x62cc4e*/
    }
    v10 = this->q02B; /*0x62cc55*/
    v9 = *((_BYTE *)this + 302); /*0x62cc5b*/
    if ( v9 == *(_BYTE *)(v10 + 777) ) /*0x62cc67*/
    {
      if ( *(_BYTE *)(v10 + 776) ) /*0x62cc69*/
        goto LABEL_25; /*0x62cc71*/
    }
  }
  v14 = *((float *)this + 57) - *(float *)(v10 + 768); /*0x62cc7d*/
  v15 = --*((_WORD *)this + 149) == 0; /*0x62cc8a*/
  *((float *)this + 57) = v14; /*0x62cc92*/
  if ( v15 && *(_DWORD *)(v10 + 744) && v9 <= *(char *)(v10 + 780) ) /*0x62ccb2*/
  {
    *((_WORD *)this + 149) = *(_WORD *)(v10 + 732); /*0x62ccc7*/
    v32 = *(float *)this->location; /*0x62ccd0*/
    v33 = this->location[1]; /*0x62ccdc*/
    v34 = this->location[2]; /*0x62cce3*/
    v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32); /*0x62ccec*/
    if ( (v16->flags[0] & 0x100) == 0 ) /*0x62ccfa*/
      goto LABEL_16; /*0x62ccfa*/
    v17 = this->location[1]; /*0x62ccfe*/
    v35 = this->location[0]; /*0x62cd01*/
    v18 = this->location[2]; /*0x62cd05*/
    v19 = v16->level + 4; /*0x62cd0f*/
    v36 = v17; /*0x62cd12*/
    if ( v18 >= dword_AC4A18 * v19 ) /*0x62cd1f*/
      altObject = v16->altObject; /*0x62cd21*/
    else
LABEL_16:
      altObject = v16->firstObject; /*0x62cd29*/
    for ( ; altObject; altObject = altObject->nextObject ) /*0x62cd31*/
    {
      v21 = altObject->location[0]; /*0x62cd3f*/
      v22 = altObject->location[1]; /*0x62cd41*/
      ptr_0 = (int (__thiscall **)(ObjectClass *, char *))this->AbstractClass; /*0x62cd47*/
      v37 = altObject->location[2]; /*0x62cd49*/
      v24 = (int *)ptr_0[18](this, v38); /*0x62cd52*/
      v25 = *v24; /*0x62cd55*/
      v26 = v24[1]; /*0x62cd57*/
      v27 = v24[2]; /*0x62cd5a*/
      LODWORD(v32) = v25 - v21; /*0x62cd5f*/
      v33 = v26 - v22; /*0x62cd6b*/
      v34 = v27 - v37; /*0x62cd6f*/
      Math::Sqrt( /*0x62cd9b*/
        (double)(v25 - v21) * (double)(v25 - v21)
      + (double)(v27 - v37) * (double)(v27 - v37)
      + (double)(v26 - v22) * (double)(v26 - v22));
      LOWORD(v28) = Math::RoundToInt(v14); /*0x62cda3*/
      v29 = v28; /*0x62cda8*/
      v30 = this->q02B; /*0x62cdaa*/
      v31 = *(_DWORD *)(v30 + 744); /*0x62cdb6*/
      if ( altObject->health > 0 /*0x62cdd7*/
        && altObject->isAliveFlag
        && altObject != *(ObjectClass **)(this->u32_49 + 224) )
      {
        (*((void (__thiscall **)(ObjectClass *, int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))altObject->AbstractClass /*0x62ce03*/
         + 91))(
          altObject,
          &v31,
          v29 / 10,
          *(_DWORD *)(v30 + 740),
          0,
          0,
          0,
          0);
      }
    }
  }
}



// ==== 0x0062CE40  ParticleClass::Dispatch  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::Dispatch(ParticleClass *this)
{
  int result; // eax

  result = *(_DWORD *)(this->ParticleClass_field_0xAC + 788); /*0x62ce49*/
  switch ( result ) /*0x62ce54*/
  {
    case 0: /*0x62ce54*/
      LOBYTE(result) = ParasiteClass::Update(this->__pad_0); /*0x62ce5d*/
      break; /*0x62ce62*/
    case 1: /*0x62ce54*/
      ParticleClass::UpdateAnimationDrift(this); /*0x62ce66*/
      break; /*0x62ce6b*/
    case 2: /*0x62ce54*/
      UpdateAreaDamageEffect((ObjectClass *)this); /*0x62ce6f*/
      break; /*0x62ce74*/
    case 3: /*0x62ce54*/
      UpdateParticleSystem((TechnoClass *)this); /*0x62ce78*/
      break; /*0x62ce7d*/
    case 4: /*0x62ce54*/
      ParticleClass::UpdateParticlePhysics(this); /*0x62ce81*/
      break; /*0x62ce81*/
    default:
      break;
  }
  if ( !--*(_WORD *)this->__pad_128 ) /*0x62ce8d*/
    this->__pad_128[9] = 1; /*0x62ce97*/
  return result; /*0x62ce9e*/
}



// ==== 0x0062CEC0  ParticleClass::DrawParticle  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::DrawParticle(ParticleClass *this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  unsigned int v10; // eax
  char v11; // cl
  char *v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  IUnknown *ParticleClass_field_0xB4; // ecx
  char *pad_B0; // eax
  __int16 v20; // dx
  char v21; // al
  double v22; // st7
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebp
  int v27; // eax
  int v28[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[282] >= (unsigned int)PingPongBuffer::GetWriteOffset() /*0x62cedc*/
    || *((_DWORD *)this->ParticleClass_field_0xAC + 186) )
  {
    if ( stru_A8EB00.ObjectTypeClass[30] || (v4 = *((_DWORD *)this->ParticleClass_field_0xAC + 197), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( stru_A8EB00.?[391] /*0x62cf58*/
        || !g_hWnd
        || ((int)dword_A8B230->ptr_0 & 0x1000) == 0
        || (v29 = *(_DWORD *)&this->__pad_28[116],
            v30 = *(_DWORD *)&this->__pad_28[120],
            v31 = *(_DWORD *)&this->__pad_28[124],
            !(unsigned __int8)Game::Stub3((int)&v29)) )
      {
        v5 = *((_DWORD *)this->ParticleClass_field_0xAC + 197); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          v28[0] = *(_DWORD *)&this->__pad_28[116]; /*0x62d036*/
          v28[1] = *(_DWORD *)&this->__pad_28[120]; /*0x62d048*/
          v28[2] = *(_DWORD *)&this->__pad_28[124]; /*0x62d054*/
          Coord::To_Screen((Coord *)g_TacticalClass_Instance, v28, &v29); /*0x62d058*/
          v12 = (char *)DSurface_ViewBounds.field_4 + v30; /*0x62d06b*/
          v30 += (int)DSurface_ViewBounds.field_4; /*0x62d071*/
          if ( v29 >= *a3 && v29 < *a3 + a3[2] ) /*0x62d086*/
          {
            v13 = a3[1]; /*0x62d08c*/
            if ( (int)v12 >= v13 && (int)v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           *(int **)&stru_87E790.__pad_D8[60],
                                           v29,
                                           (int)&v12[-*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4)]);
              if ( (_WORD)v14 ) /*0x62d0bb*/
              {
                v15 = v30 - g_ZBufferDescriptor->Stream_field_04; /*0x62d0d4*/
                v28[0] = v29; /*0x62d0d9*/
                v16 = ZCoordToScreenY(*(_DWORD *)&this->__pad_28[124]); /*0x62d0e8*/
                v17 = (unsigned __int16)(LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x62d10f*/
                                       + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                                       - v30)
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v28[0], v15) ) /*0x62d11e*/
                {
                  ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62d124*/
                  if ( ParticleClass_field_0xB4 ) /*0x62d12c*/
                    pad_B0 = (char *)(*((_DWORD *)this->ParticleClass_field_0xAC + 175) /*0x62d13f*/
                                    + 3 * (_DWORD)ParticleClass_field_0xB4);
                  else
                    pad_B0 = this->__pad_B0; /*0x62d12e*/
                  v20 = *(_WORD *)pad_B0; /*0x62d145*/
                  v21 = pad_B0[2]; /*0x62d148*/
                  LOWORD(v28[0]) = v20; /*0x62d14b*/
                  BYTE2(v28[0]) = v21; /*0x62d15a*/
                  v22 = 1.0 - *(double *)&this->ParticleClass_field_0xB8; /*0x62d16d*/
                  LOWORD(v23) = Math::RoundToInt(v22); /*0x62d1ac*/
                  v24 = v23; /*0x62d1c9*/
                  LOWORD(v25) = Math::RoundToInt(v22); /*0x62d1e1*/
                  v26 = v25; /*0x62d1ea*/
                  LOWORD(v27) = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v24 = (v14 * v24) >> 7; /*0x62d22a*/
                    v26 = (v14 * v26) >> 7; /*0x62d22d*/
                    v27 = (v14 * v27) >> 7; /*0x62d230*/
                  }
                  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 36))( /*0x62d288*/
                    g_DSurface_Hidden_2,
                    &v29,
                    (unsigned __int16)(v24 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (unsigned __int16)(v26 >> g_BitMask_Blue << g_BitMask_Green)
                  | (unsigned __int16)(v27 >> g_BitMask_Red << g_BitShift_Blue));
                }
              }
            }
          }
        }
        else
        {
          v6 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 464))(this); /*0x62cf87*/
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          v8 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 108))(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            v9 = 10240; /*0x62cfb0*/
            v10 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 488))(this); /*0x62cfb5*/
            if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x62cfc2*/
            {
              v11 = this->__pad_128[7]; /*0x62cfc4*/
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
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[120],
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



// ==== 0x0062D2A0  BuildingClass::UpdateFloatPosition  this=TOP  sig=csp ====
int __thiscall BuildingClass::UpdateFloatPosition(BuildingClass *this)
{
  int *location; // eax
  int currentMission; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int GroundHeight; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v17; // [esp+8h] [ebp-Ch] BYREF
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  location = this->?; /*0x62d2ad*/
  v17 = this->?[0]; /*0x62d2b9*/
  currentMission = this->?; /*0x62d2bd*/
  v18 = location[1]; /*0x62d2c6*/
  v19 = location[2]; /*0x62d2cd*/
  v4 = *(_DWORD *)(currentMission + 760); /*0x62d2d1*/
  if ( v4 > 0 && !(*(_DWORD *)&stru_A8EB00.?[416] % (10 / v4)) ) /*0x62d2e8*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1964); /*0x62d2fe*/
    v6 = *(int *)((char *)&stru_83665C.? + v5 * 4); /*0x62d301*/
    v7 = stru_83665C.?[v5]; /*0x62d307*/
    v17 += v6; /*0x62d315*/
    v18 += v7; /*0x62d319*/
  }
  if ( (stru_A8EB00.?[416] & 1) != 0 ) /*0x62d320*/
  {
    LOWORD(v8) = Math::RoundToInt((double)v17 + *(float *)&this->?[1]); /*0x62d330*/
    v17 = v8; /*0x62d339*/
    LOWORD(v9) = Math::RoundToInt((double)v18 + *(float *)&this->?[2]); /*0x62d343*/
    v18 = v9; /*0x62d348*/
    GroundHeight = Cell::GetGroundHeight(&v17); /*0x62d356*/
    v11 = v19; /*0x62d35b*/
    if ( v19 > GroundHeight + 5 ) /*0x62d364*/
    {
      v12 = v19 - GroundHeight - 5; /*0x62d36a*/
      if ( v12 >= 2 ) /*0x62d370*/
        v12 = 2; /*0x62d372*/
      v11 = v19 - v12; /*0x62d377*/
    }
    v13 = this->?[0]; /*0x62d389*/
    v17 += this->?; /*0x62d38f*/
    v14 = this->? + v18; /*0x62d39f*/
    v19 = v13 + v11; /*0x62d3a1*/
    v18 = v14; /*0x62d3ab*/
    v15 = Cell::GetGroundHeight(&v17); /*0x62d3af*/
    if ( v19 < v15 + 5 ) /*0x62d3bd*/
      v19 = Cell::GetGroundHeight(&v17) + 5; /*0x62d3d1*/
  }
  return (*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 109))(this, &v17); /*0x62d3e4*/
}



// ==== 0x0062D3F0  ParticleClass::CheckWaterImpact  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::CheckWaterImpact(ParticleClass *this)
{
  char *v2; // ecx
  int v3; // edx
  char *v4; // ebx
  int v5; // ebp
  _DWORD *ParticleClass_field_0xAC; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  char *v10; // ebx
  int v11; // eax
  char *v12; // edi
  char *v13; // ebp
  int v14; // [esp+10h] [ebp-1Ch]
  char *v15; // [esp+14h] [ebp-18h] BYREF
  char *v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  _DWORD v18[2]; // [esp+20h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp-4h]

  v2 = &this->__pad_28[116]; /*0x62d3ff*/
  v18[0] = *(_DWORD *)v2; /*0x62d405*/
  v3 = *((_DWORD *)v2 + 2); /*0x62d409*/
  v15 = (char *)v18[0]; /*0x62d40c*/
  v4 = (char *)*((_DWORD *)v2 + 1); /*0x62d410*/
  v19 = v3; /*0x62d413*/
  v16 = v4; /*0x62d417*/
  v5 = *((_DWORD *)v2 + 2); /*0x62d41b*/
  ParticleClass_field_0xAC = this->ParticleClass_field_0xAC; /*0x62d421*/
  v18[1] = *((_DWORD *)v2 + 1); /*0x62d427*/
  v17 = v5; /*0x62d431*/
  v7 = ParticleClass_field_0xAC[190]; /*0x62d435*/
  v8 = 4 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1964); /*0x62d441*/
  v9 = v7 * *(_DWORD *)&stru_83665C.?[v8 + 11] + v18[0]; /*0x62d45c*/
  v10 = &v4[v7 * *(_DWORD *)&stru_83665C.?[v8 + 4]]; /*0x62d45e*/
  LOWORD(v11) = Math::RoundToInt(*(float *)this->__pad_E4); /*0x62d460*/
  v12 = (char *)this->ParticleClass_field_0xC0 + v9; /*0x62d479*/
  v16 = (char *)this->ParticleClass_field_0xC4 + (unsigned int)v10; /*0x62d47b*/
  v13 = (char *)this->ParticleClass_field_0xC8 + v11 + v5; /*0x62d485*/
  v15 = v12; /*0x62d48d*/
  v17 = (int)v13; /*0x62d491*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v18)->flags[0] & 0x100) != 0 /*0x62d4e5*/
    && (v14 = dword_AC4A0C + Cell::GetGroundHeight(v18), v19 < v14)
    && (double)v14 - (double)dword_AC4A18 * 2.5 <= (double)v17 )
  {
    this->__pad_128[9] = 1; /*0x62d4e7*/
  }
  else
  {
    (*(void (__thiscall **)(ParticleClass *, char **))(*(_DWORD *)this->__pad_0 + 436))(this, &v15); /*0x62d4ff*/
  }
}



// ==== 0x0062D510  ObjectClass::method_62D510  this=ObjectClass  sig=csp ====
int __thiscall sub_62D510(ObjectClass *this)
{
  double v2; // st7
  int *location; // edi
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

  v2 = *((float *)this + 57); /*0x62d524*/
  location = this->location; /*0x62d530*/
  v15[0] = this->location[0]; /*0x62d532*/
  v4 = this->location[1]; /*0x62d536*/
  v5 = this->location[2]; /*0x62d539*/
  v6 = this->location[0]; /*0x62d53c*/
  v15[2] = v5; /*0x62d53e*/
  v7 = location[1]; /*0x62d544*/
  v12 = v6; /*0x62d547*/
  v8 = location[2]; /*0x62d54e*/
  v13 = v7; /*0x62d551*/
  v14 = v8; /*0x62d555*/
  v15[1] = v4; /*0x62d559*/
  if ( v2 > 0.0 ) /*0x62d55d*/
  {
    v9 = *((_DWORD *)this + 66); /*0x62d565*/
    v12 = this->q040 + v6; /*0x62d56d*/
    v13 = this->u32_41 + v7; /*0x62d57b*/
    v14 = v9 + v8; /*0x62d57f*/
  }
  if ( *((float *)this + 57) > 0.0 ) /*0x62d594*/
  {
    GroundHeight = Cell::GetGroundHeight(v15); /*0x62d5af*/
    if ( (int)Cell::GetGroundHeight(&v12) > GroundHeight ) /*0x62d5b8*/
    {
      *((_BYTE *)this + 301) = 1; /*0x62d5bc*/
      *((_BYTE *)this + 305) = 1; /*0x62d5c2*/
    }
  }
  return (*((int (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 109))(this, &v12); /*0x62d5d7*/
}



// ==== 0x0062D5E0  BuildingClass::AdjustHeight  this=ParticleClass  sig=csp ====
int __thiscall BuildingClass::AdjustHeight(int *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int GroundHeight; // edi
  int v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  _DWORD v13[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this->q02B + 788); /*0x62d5ec*/
  if ( !v2 ) /*0x62d5f5*/
    return BuildingClass::UpdateFloatPosition((BuildingClass *)this); /*0x62d6db*/
  v3 = v2 - 1; /*0x62d5fb*/
  if ( v3 ) /*0x62d5fc*/
  {
    result = v3 - 1; /*0x62d602*/
    if ( !result ) /*0x62d603*/
    {
      v5 = *((float *)this + 57); /*0x62d609*/
      v13[0] = this->u32_9C; /*0x62d623*/
      v6 = this->q028; /*0x62d627*/
      v13[2] = this->q029; /*0x62d630*/
      v7 = this->q029; /*0x62d636*/
      v10 = v13[0]; /*0x62d639*/
      v11 = v6; /*0x62d640*/
      v12 = v7; /*0x62d644*/
      v13[1] = v6; /*0x62d648*/
      if ( v5 > 0.0 ) /*0x62d64c*/
      {
        v8 = this->q042; /*0x62d654*/
        v10 = this->q040 + v13[0]; /*0x62d65c*/
        v11 = this->q104 + v6; /*0x62d66a*/
        v12 = v8 + v7; /*0x62d66e*/
      }
      if ( *((float *)this + 57) > 0.0 ) /*0x62d683*/
      {
        GroundHeight = Cell::GetGroundHeight(v13); /*0x62d69e*/
        if ( (int)Cell::GetGroundHeight(&v10) > GroundHeight ) /*0x62d6a7*/
        {
          this->q12D = 1; /*0x62d6ab*/
          this->q4C4 = 1; /*0x62d6b1*/
        }
      }
      return (*(int (__thiscall **)(int *, int *))(*this + 436))(this, &v10); /*0x62d6c0*/
    }
  }
  else
  {
    ParticleClass::CheckWaterImpact((ParticleClass *)this); /*0x62d6cf*/
  }
  return result; /*0x62d6c8*/
}



// ==== 0x0062D6F0  ParticleClass::CheckMirrorState  this=ParticleClass  sig=csp ====
bool __thiscall ParticleClass::CheckMirrorState(ParticleClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x62d6ff*/
}



// ==== 0x0062D710  ParticleClass::CheckDrawFlags  this=ParticleClass  sig=csp ====
int *__stdcall ParticleClass::CheckDrawFlags(ParticleClass *this)
{
  if ( (byte_AC4998 & 1) == 0 ) /*0x62d71b*/
  {
    byte_AC4998 |= 1u; /*0x62d739*/
    dword_AC49D0 = 2147450879; /*0x62d73f*/
    atexit(nullsub_214); /*0x62d744*/
  }
  return &dword_AC49D0; /*0x62d752*/
}



// ==== 0x0062D760  nullsub_214  this=-  sig=ida-proto ====
void __cdecl nullsub_214()
{
  ; /*0x62d760*/
}



// ==== 0x0062D770  ParticleClass::CheckStateFlag  this=ParticleClass  sig=csp ====
int ParticleClass::CheckStateFlag(ParticleClass *this)
{
  return 3; /*0x62d775*/
}



// ==== 0x0062D7A0  ParticleClass::LoadParticleData  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::LoadParticleData(ParticleClass *this, _DWORD *a2, int a3)
{
  int result; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( a2 ) /*0x62d7b6*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x62d7bf*/
      *a2 = &ParticleClass::`vftable'; /*0x62d7c4*/
      a2[1] = &ParticleClass::`vftable'; /*0x62d7ca*/
      a2[2] = &ParticleClass::`vftable'; /*0x62d7d1*/
      a2[3] = &ParticleClass::`vftable'; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x62d7eb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 73); /*0x62d7fc*/
    return 0; /*0x62d801*/
  }
  return result; /*0x62d803*/
}



// ==== 0x0062D810  ParticleClass::CheckCollisionFlags  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::CheckCollisionFlags(ParticleClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x62d820*/
  this->__pad_128[8] = 1; /*0x62d825*/
  return result; /*0x62d82c*/
}



// ==== 0x0062D830  ParticleClass::g_var_22c88d  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::g_var_22c88d(ParticleClass *this)
{
  int v2; // eax
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-10h] BYREF
  int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *((_DWORD *)this->ParticleClass_field_0xAC + 197); /*0x62d83c*/
  if ( v2 >= 0 ) /*0x62d844*/
  {
    if ( v2 <= 1 ) /*0x62d84d*/
      return this->__pad_128[6]; /*0x62d84d*/
    if ( v2 == 2 ) /*0x62d856*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[16], v6); /*0x62d86e*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[4], v5); /*0x62d885*/
      v3 = CalcMathFacing8(v6, v5); /*0x62d892*/
      if ( v3 == 2 || v3 == 6 ) /*0x62d89f*/
        return this->__pad_128[6] + 2 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d91e*/
      if ( v3 != 4 && v3 ) /*0x62d8a8*/
      {
        if ( v3 == 1 || v3 == 5 ) /*0x62d8b2*/
          return this->__pad_128[6] + *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8f6*/
        if ( v3 == 3 || v3 == 7 ) /*0x62d8bc*/
          return this->__pad_128[6] + 3 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8db*/
        return 0; /*0x62d8bc*/
      }
      return this->__pad_128[6]; /*0x62d902*/
    }
  }
  return 0; /*0x62d8d2*/
}



// ==== 0x0062D930  ParticleClass::GetClassIdentifier  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::GetClassIdentifier(ParticleClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x62d936*/
    return -2147467261; /*0x62d938*/
  *a2 = 237448652; /*0x62d946*/
  a2[1] = 298949647; /*0x62d94e*/
  a2[2] = -1610610249; /*0x62d957*/
  a2[3] = unk_7E970C; /*0x62d960*/
  return 0; /*0x62d93d*/
}



// ==== 0x0062D970  ParticleClass::GetObjectSize  this=ParticleClass  sig=csp ====
int ParticleClass::GetObjectSize(ParticleClass *this)
{
  return 312; /*0x62d975*/
}



// ==== 0x0062D980  ParticleClass::GetTypeIdentifier  this=ParticleClass  sig=csp ====
int ParticleClass::GetTypeIdentifier(ParticleClass *this)
{
  return 22; /*0x62d985*/
}



// ==== 0x0062D990  ParticleClass::Stub  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::Stub(ParticleClass *this)
{
  return (int)this->ParticleClass_field_0xAC; /*0x62d996*/
}



// ==== 0x0062D9A0  ParticleClass::UpdateParticle  this=ParticleClass  sig=csp ====
void **__thiscall ParticleClass::UpdateParticle(ParticleClass *this, char a2)
{
  int v3; // edx
  int v4; // eax
  ParticleClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &ParticleClass::`vftable'; /*0x62d9a4*/
  *(_DWORD *)&this->ParticleClass_field_0x2[2] = &ParticleClass::`vftable'; /*0x62d9aa*/
  this->ParticleClass_field_0x8[0] = (int)&ParticleClass::`vftable'; /*0x62d9b1*/
  this->ParticleClass_field_0xC = &ParticleClass::`vftable'; /*0x62d9b8*/
  ObjectClass::Undeploy((ObjectClass *)this); /*0x62d9bf*/
  LOBYTE(v3) = 1; /*0x62d9c4*/
  AbstractClass::AnnounceExpiredPointer((void **)this, v3); /*0x62d9c8*/
  this->ParticleClass_field_0xAC = 0; /*0x62d9cd*/
  v6 = this; /*0x62d9e7*/
  v4 = (*(int (__thiscall **)(int *, ParticleClass **))(stru_A83D50.SuperClass_field_0x78 + 16))( /*0x62d9eb*/
         &stru_A83D50.SuperClass_field_0x78,
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_80[8] ) /*0x62d9fb*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_80[8]; /*0x62da00*/
    for ( ; /*0x62da06*/
          v4 < *(int *)&stru_A83D50.__pad_80[8];
          *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v4 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v4) )
    {
      ++v4; /*0x62da0e*/
    }
  }
  ObjectClass::Dtor((ObjectClass *)this); /*0x62da22*/
  if ( (a2 & 1) != 0 ) /*0x62da2c*/
    __3_YAXPAX_Z(this); /*0x62da2f*/
  return (void **)this; /*0x62da39*/
}



// ==== 0x0062DA40  sub_62DA40  this=-  sig=ida-proto ====
void sub_62DA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62da4c*/
  dbl_AC4A40 = Math::Sqrt(v0 + v0); /*0x62da5e*/
}



// ==== 0x0062DA70  sub_62DA70  this=-  sig=ida-proto ====
void sub_62DA70()
{
  dbl_AC4A90 = dbl_AC4A40 / 60.0; /*0x62da7c*/
}



// ==== 0x0062DA90  sub_62DA90  this=-  sig=ida-proto ====
void sub_62DA90()
{
  dbl_AC4A78 = 1.0 / dbl_AC4A90; /*0x62da9c*/
}



// ==== 0x0062DAB0  sub_62DAB0  this=-  sig=ida-proto ====
void sub_62DAB0()
{
  dbl_AC4A70 = 0.0174532925199433 * 45.0; /*0x62dabc*/
}



// ==== 0x0062DAD0  sub_62DAD0  this=-  sig=ida-proto ====
void sub_62DAD0()
{
  dbl_AC4A48 = 0.0174532925199433 * 60.0; /*0x62dadc*/
}



// ==== 0x0062DAF0  sub_62DAF0  this=-  sig=ida-proto ====
void sub_62DAF0()
{
  dbl_AC4A20 = 0.0174532925199433 * 90.0; /*0x62dafc*/
}



// ==== 0x0062DB10  sub_62DB10  this=-  sig=ida-proto ====
__int64 sub_62DB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4A20 - dbl_AC4A48); /*0x62db22*/
  result = Math::RoundToInt(v0 * dbl_AC4A40 * 0.5); /*0x62db36*/
  dword_AC4A98 = result; /*0x62db3b*/
  return result; /*0x62db40*/
}



// ==== 0x0062DB50  sub_62DB50  this=-  sig=ida-proto ====
void sub_62DB50()
{
  dbl_AC4A50 = Math::ArcTan((double)dword_AC4A98 * 0.00390625); /*0x62db67*/
}



// ==== 0x0062DB80  sub_62DB80  this=-  sig=ida-proto ====
void sub_62DB80()
{
  dbl_AC4A68 = Math::ArcTan((double)(2 * dword_AC4A98) / dbl_AC4A40); /*0x62dba2*/
}



// ==== 0x0062DBB0  sub_62DBB0  this=-  sig=ida-proto ====
__int64 sub_62DBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A98) + 0.5); /*0x62dbcb*/
  dword_AC4A8C = result; /*0x62dbd0*/
  return result; /*0x62dbd6*/
}



// ==== 0x0062DBE0  sub_62DBE0  this=-  sig=ida-proto ====
int sub_62DBE0()
{
  word_AC4A38 = 0; /*0x62dbe2*/
  word_AC4A3A = 0; /*0x62dbe8*/
  return 0; /*0x62dbee*/
}



// ==== 0x0062DBF0  sub_62DBF0  this=-  sig=ida-proto ====
int sub_62DBF0()
{
  dword_AC4A58 = 0; /*0x62dbf2*/
  dword_AC4A5C = 0; /*0x62dbf7*/
  dword_AC4A60 = 0; /*0x62dbfc*/
  return 0; /*0x62dc01*/
}



// ==== 0x0062DC10  sub_62DC10  this=-  sig=ida-proto ====
int sub_62DC10()
{
  dword_AC4A88 = 0; /*0x62dc15*/
  dword_AC4A80 = 128; /*0x62dc1f*/
  dword_AC4A84 = 128; /*0x62dc24*/
  return 128; /*0x62dc29*/
}



// ==== 0x0062DC30  sub_62DC30  this=-  sig=ida-proto ====
int sub_62DC30()
{
  dword_AC4A28 = 0; /*0x62dc32*/
  dword_AC4A2C = 0; /*0x62dc37*/
  dword_AC4A30 = 0; /*0x62dc3c*/
  dword_AC4A34 = 0; /*0x62dc41*/
  return 0; /*0x62dc46*/
}



// ==== 0x0062DC50  ParticleSystemClass::Constructor  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Constructor(int *this, int a2, int *a3, int a4, void *a5, _DWORD *a6, int a7)
{
  int *v8; // ebp
  int v9; // edx
  int *v10; // eax
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  _BYTE v24[12]; // [esp+1Ch] [ebp-Ch] BYREF

  ObjectClass::ctor((ObjectClass *)this); /*0x62dc59*/
  this->q02B = a2; /*0x62dc6a*/
  v8 = this + 53; /*0x62dc70*/
  this->fallRate = 0; /*0x62dc76*/
  this->q0B4 = 0; /*0x62dc7c*/
  this->q0B8 = 0; /*0x62dc82*/
  this->nextObject = 0; /*0x62dc88*/
  this->q031 = 0; /*0x62dc8b*/
  this->q0C8 = 1; /*0x62dc8e*/
  this->q0C9 = 0; /*0x62dc92*/
  this->Particles = (int)&DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62dc95*/
  this->attachedTag = 10; /*0x62dc9b*/
  this->alignmentPadding = 0; /*0x62dca2*/
  this->SpawnFrames = dword_AC4A58; /*0x62dcad*/
  this->occupant = dword_AC4A5C; /*0x62dcb4*/
  v9 = dword_AC4A60; /*0x62dcb7*/
  v10 = (int *)this->q02B; /*0x62dcbd*/
  this->attachedBomb = 0; /*0x62dcc3*/
  this->SparkSpawnFrames = v9; /*0x62dcc9*/
  this->TimeToDie = 0; /*0x62dccc*/
  *((float *)this + 58) = (float)v10[167]; /*0x62dcd8*/
  this->q03B = v10[174]; /*0x62dce4*/
  this->ambientSoundController = v10[192]; /*0x62dcf3*/
  this->q03D = 29; /*0x62dcfa*/
  this->q0F8 = 0; /*0x62dd04*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dd0a*/
  this->OwnerHouse = 0; /*0x62dd10*/
  *this = (int)&ParticleSystemClass::`vftable'; /*0x62dd16*/
  this->ptr_8 = (int)&ParticleSystemClass::`vftable'; /*0x62dd1c*/
  this->ptr_C = (int)&ParticleSystemClass::`vftable'; /*0x62dd22*/
  this->ptr_10 = (int)&off_7EFB70; /*0x62dd29*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x62dd30*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dd6a*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A80208 + 8))(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v11 = g_GameCleanupState++; /*0x62dd77*/
    *((_DWORD *)dword_A8020C + v11) = this; /*0x62dd86*/
  }
  (*(void (__thiscall **)(int *))(this->Particles + 12))(this + 47); /*0x62dd8d*/
  this->OwnerHouse = a7; /*0x62dd9a*/
  if ( a4 ) /*0x62dda0*/
  {
    v12 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v24); /*0x62ddab*/
    *v8 = *v12; /*0x62ddb0*/
    this->occupant = v12[1]; /*0x62ddb8*/
    this->SparkSpawnFrames = v12[2]; /*0x62ddbe*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v24); /*0x62ddc8*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13)->flags[0] & 0x100) != 0 /*0x62ddeb*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 44))(a4) == 11 )
    {
      this->SparkSpawnFrames += dword_AC4A8C; /*0x62ddfa*/
    }
  }
  else
  {
    *v8 = *a6; /*0x62de08*/
    this->occupant = a6[1]; /*0x62de0e*/
    this->SparkSpawnFrames = a6[2]; /*0x62de14*/
  }
  if ( a5 ) /*0x62de35*/
  {
    this->attachedBomb = (int)a5; /*0x62de37*/
    v14 = AbstractClass::IsTechnoType((AbstractClass *)a5); /*0x62de3d*/
    if ( v14 ) /*0x62de44*/
      this->TimeToDie = v14[173]; /*0x62de4c*/
  }
  else
  {
    this->attachedBomb = 0; /*0x62de54*/
    this->TimeToDie = a4; /*0x62de5a*/
  }
  ObjectClass::Deploy((ObjectClass *)this); /*0x62de68*/
  v15 = this->attachedBomb; /*0x62de6d*/
  if ( v15 ) /*0x62de75*/
  {
    v16 = this->q027; /*0x62de7f*/
    v17 = this->owningHouseIndex; /*0x62de81*/
    v18 = this->q0A4; /*0x62de84*/
    v19 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v24); /*0x62de8c*/
    v20 = v19[2]; /*0x62de96*/
    v21 = v17 - v19[1]; /*0x62de99*/
    this->fallRate = v16 - *v19; /*0x62de9d*/
    this->q0B4 = v21; /*0x62dea3*/
    this->q0B8 = v18 - v20; /*0x62dea9*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62dee6*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.Height + g_BuildingLoadQueue_Array.ExtraPowerBonus,
         0) )
  {
    v22 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62def3*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v22) = this; /*0x62df02*/
  }
  return (int)this; /*0x62df07*/
}



// ==== 0x0062DF20  ParticleSystemClass::ProcessCreation  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleClass::ProcessCreation(ParticleSystemClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x62df24*/
  this->Type = 0; /*0x62df31*/
  this->TargetCoords[0] = 0; /*0x62df3d*/
  this->TargetCoords[1] = 0; /*0x62df40*/
  LOBYTE(this->TargetCoords[2]) = 1; /*0x62df43*/
  BYTE1(this->TargetCoords[2]) = 0; /*0x62df47*/
  this->Particles[0] = (int)&DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62df4a*/
  this->Target = (void *)10; /*0x62df50*/
  this->Owner = 0; /*0x62df57*/
  this->SpawnFrames = dword_AC4A58; /*0x62df60*/
  this->Lifetime = dword_AC4A5C; /*0x62df68*/
  v2 = dword_AC4A60; /*0x62df6b*/
  this->SpotlightRadius = 0; /*0x62df71*/
  *(_DWORD *)&this->TimeToDie = 0; /*0x62df77*/
  this->SparkSpawnFrames = v2; /*0x62df7d*/
  v3 = this->Particles[0]; /*0x62df80*/
  *(_DWORD *)&this->__pad_E5[3] = 0; /*0x62df82*/
  *(_DWORD *)&this->__pad_E5[7] = 0; /*0x62df88*/
  *(_DWORD *)&this->__pad_E5[11] = 0; /*0x62df8e*/
  *(_DWORD *)&this->__pad_E5[15] = 0; /*0x62df94*/
  this->__pad_E5[19] = 0; /*0x62df9a*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dfa0*/
  this->ObjectClass = &ParticleSystemClass::`vftable'; /*0x62dfa6*/
  this->? = &ParticleSystemClass::`vftable'; /*0x62dfac*/
  this->? = &ParticleSystemClass::`vftable'; /*0x62dfb3*/
  this->? = &off_7EFB70; /*0x62dfba*/
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
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62e04b*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62e058*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x62e067*/
  }
  return (int)this; /*0x62e06c*/
}



// ==== 0x0062E070  ParticleSystemClass::DestructParticleSystemClass  this=ParticleSystemClass  sig=csp ====
int __usercall DestructParticleSystemClass@<eax>(ParticleSystemClass *this, int a2@<esi>)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  int v15; // [esp+14h] [ebp-4h] BYREF

  v3 = v2; /*0x62e073*/
  *(_DWORD *)v2 = &ParticleSystemClass::`vftable'; /*0x62e077*/
  *(_DWORD *)(v2 + 4) = &ParticleSystemClass::`vftable'; /*0x62e07d*/
  *(_DWORD *)(v2 + 8) = &ParticleSystemClass::`vftable'; /*0x62e084*/
  *(_DWORD *)(v2 + 12) = &off_7EFB70; /*0x62e08b*/
  AbstractClass::AnnounceExpiredPointer((void **)v2, 1); /*0x62e092*/
  ObjectClass::Undeploy((ObjectClass *)v3); /*0x62e099*/
  while ( *(_DWORD *)(v3 + 204) ) /*0x62e09e*/
  {
    v4 = **(_DWORD **)(v3 + 192); /*0x62e0b5*/
    if ( v4 ) /*0x62e0b9*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x62e0bf*/
    v15 = **(_DWORD **)(v3 + 192); /*0x62e0d4*/
    v5 = (*(int (__thiscall **)(int *, int *, int))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x62e0dd*/
           &g_BuildingLoadQueue_Array.ToTile,
           &v15,
           a2);
    if ( v5 != -1 && v5 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x62e0ed*/
    {
      --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x62e0f2*/
      for ( ; /*0x62e0f8*/
            v5 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12];
            *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C
                                                                                                 + 4 * v5) )
      {
        ++v5; /*0x62e100*/
      }
    }
    a2 = *(_DWORD *)(v3 + 192); /*0x62e124*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 188) + 16))(v3 + 188); /*0x62e127*/
    if ( v6 != -1 ) /*0x62e12d*/
    {
      v7 = *(_DWORD *)(v3 + 204); /*0x62e12f*/
      if ( v6 < v7 ) /*0x62e134*/
      {
        v8 = v7 - 1; /*0x62e136*/
        for ( *(_DWORD *)(v3 + 204) = v8; /*0x62e13c*/
              v6 < *(_DWORD *)(v3 + 204);
              *(_DWORD *)(*(_DWORD *)(v3 + 192) + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)(v3 + 192) + 4 * v6) )
        {
          ++v6; /*0x62e141*/
        }
      }
    }
  }
  *(_DWORD *)(v3 + 172) = 0; /*0x62e15d*/
  v15 = v3; /*0x62e173*/
  v9 = (*(int (__thiscall **)(int *, int *))(dword_A80208 + 16))(&dword_A80208, &v15); /*0x62e177*/
  if ( v9 != -1 && v9 < g_GameCleanupState && v9 < --g_GameCleanupState ) /*0x62e192*/
  {
    do /*0x62e1aa*/
    {
      ++v9; /*0x62e19a*/
      *((_DWORD *)dword_A8020C + v9 - 1) = *((_DWORD *)dword_A8020C + v9); /*0x62e19e*/
    }
    while ( v9 < g_GameCleanupState ); /*0x62e1aa*/
  }
  v15 = v3; /*0x62e1bc*/
  v10 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x62e1c0*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x62e1d0*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x62e1d5*/
    for ( ; /*0x62e1db*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x62e1e3*/
    }
  }
  v15 = v3; /*0x62e205*/
  v11 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x62e209*/
          &g_BuildingLoadQueue_Array.PowerBonus,
          &v15);
  if ( v11 != -1 && v11 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x62e219*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x62e21e*/
    for ( ; /*0x62e224*/
          v11 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v11 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                      + 4 * v11) )
    {
      ++v11; /*0x62e22c*/
    }
  }
  v12 = *(void **)(v3 + 192); /*0x62e23e*/
  *(_DWORD *)(v3 + 188) = &VectorClass<ParticleClass *>::`vftable'; /*0x62e244*/
  if ( v12 && *(_BYTE *)(v3 + 201) ) /*0x62e252*/
  {
    __3_YAXPAX_Z(v12); /*0x62e25b*/
    *(_DWORD *)(v3 + 192) = 0; /*0x62e263*/
  }
  *(_BYTE *)(v3 + 201) = 0; /*0x62e26b*/
  *(_DWORD *)(v3 + 196) = 0; /*0x62e271*/
  return ObjectClass::Dtor((ObjectClass *)v3); /*0x62e27c*/
}



// ==== 0x0062E280  ParticleSystemClass::CreateBuildingLight  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::CreateBuildingLight(ParticleSystemClass *this, int a2, int a3)
{
  __m64 v3; // mm0
  ParticleSystemTypeClass *Type; // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  BuildingLightQueue *v11; // esi
  BuildingLight *v12; // [esp+0h] [ebp-10h]

  Type = this->Type; /*0x62e287*/
  if ( LOBYTE(Type[1].ParticleSystemTypeClass_field_0x0) && *(int *)Type->__pad_304 > 0 && (int)this->Owner > 0 ) /*0x62e2b9*/
  {
    v6 = (double)(int)this->Owner / (double)SLODWORD(Type->ParticleSystemTypeClass_field_0x2A4); /*0x62e2c3*/
    if ( v6 <= 1.0 ) /*0x62e2d6*/
      v7 = v6; /*0x62e2e0*/
    else
      v7 = 1.0; /*0x62e2d8*/
    if ( v7 >= 0.4 ) /*0x62e2ed*/
    {
      if ( v6 > 1.0 ) /*0x62e306*/
        v6 = 1.0; /*0x62e30a*/
    }
    else
    {
      v6 = 0.4; /*0x62e2f1*/
    }
    LOWORD(v8) = Math::RoundToInt(v6 * (double)*(int *)Type->__pad_304); /*0x62e314*/
    v9 = v8; /*0x62e31b*/
    v10 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x62e31d*/
    if ( v10 ) /*0x62e327*/
      v11 = (BuildingLightQueue *)ObjectClass::RegisterInArray(v10, this->?[0], this->?[1], this->?[2], v9); /*0x62e34c*/
    else
      v11 = 0; /*0x62e350*/
    v11[3] = *(BuildingLightQueue *)&this->__pad_E5[15]; /*0x62e35a*/
    BuildingLight::CalculateShading(v12, v3); /*0x62e35d*/
    if ( v11 ) /*0x62e364*/
    {
      BuildingLightQueue::RemoveEntry(v11); /*0x62e368*/
      __3_YAXPAX_Z(v11); /*0x62e36e*/
    }
  }
}



// ==== 0x0062E380  ParticleSystemClass::CreateParticle  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::CreateParticle(ParticleSystemClass *this, _DWORD *a2, _DWORD *a3)
{
  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  void *Owner; // eax
  int *Particles; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  if ( this->Type->ParticleSystemTypeClass_field_0x294 == (IUnknown *)-1 ) /*0x62e391*/
    return 0; /*0x62e391*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e39c*/
  if ( !v5 ) /*0x62e3a6*/
    return 0; /*0x62e3a6*/
  v6 = ParticleClass::Construct( /*0x62e3d0*/
         v5,
         v3,
         *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * (int)this->Type->ParticleSystemTypeClass_field_0x294),
         a2,
         *(float *)&a3,
         (int)this);
  if ( !v6 ) /*0x62e3d4*/
    return 0; /*0x62e425*/
  v7 = this->TargetCoords[1]; /*0x62e3d6*/
  Owner = this->Owner; /*0x62e3dc*/
  Particles = this->Particles; /*0x62e3e2*/
  if ( (int)Owner < v7 /*0x62e407*/
    || (*((_BYTE *)Particles + 13) || !v7)
    && (v10 = Particles[5], v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*Particles + 8))(Particles, v7 + v10, 0) )
  {
    v11 = Particles[4]; /*0x62e40e*/
    v12 = Particles[1]; /*0x62e411*/
    Particles[4] = v11 + 1; /*0x62e417*/
    *(_DWORD *)(v12 + 4 * v11) = v6; /*0x62e41a*/
  }
  return v6; /*0x62e41f*/
}



// ==== 0x0062E430  ObjectClass::CreateFireAtSW  this=ObjectClass  sig=csp ====
int __thiscall CreateFireAtSW(ObjectClass *this, int a2, int a3)
{
  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e439*/
  if ( !v5 ) /*0x62e443*/
    return 0; /*0x62e443*/
  v6 = ParticleClass::Construct(v5, v3, a2, (_DWORD *)a3, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e45c*/
  if ( !v6 ) /*0x62e460*/
    return 0; /*0x62e4b1*/
  v7 = this->q031; /*0x62e462*/
  v8 = this->pad21; /*0x62e468*/
  v9 = (char *)this + 188; /*0x62e46e*/
  if ( v8 < v7 /*0x62e493*/
    || (v9[13] || !v7)
    && (v10 = *((_DWORD *)v9 + 5), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v9 + 8))(v9, v7 + v10, 0) )
  {
    v11 = *((_DWORD *)v9 + 4); /*0x62e49a*/
    v12 = *((_DWORD *)v9 + 1); /*0x62e49d*/
    *((_DWORD *)v9 + 4) = v11 + 1; /*0x62e4a3*/
    *(_DWORD *)(v12 + 4 * v11) = v6; /*0x62e4a6*/
  }
  return v6; /*0x62e4ab*/
}



// ==== 0x0062E4C0  ParticleClass::CreateInstance  this=ParticleSystemClass  sig=csp ====
int __thiscall sub_62E4C0(int this, _DWORD *a2, float a3, int a4)
{
  void *v5; // eax
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // ecx
  int v18; // eax

  if ( *(_DWORD *)(*(_DWORD *)(this + 172) + 660) == -1 ) /*0x62e4d2*/
    return 0; /*0x62e4d2*/
  v5 = __2_YAPAXI_Z(0x138u); /*0x62e4dd*/
  if ( !v5 ) /*0x62e4e7*/
    return 0; /*0x62e4e7*/
  v6 = ParticleClass::Construct( /*0x62e515*/
         (int)v5,
         *((_DWORD *)dword_A83D9C + *(_DWORD *)(*(_DWORD *)(this + 172) + 660)),
         a2,
         a3,
         this);
  if ( !v6 ) /*0x62e519*/
    return 0; /*0x62e519*/
  v7 = a4; /*0x62e51f*/
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
  v12 = *(_DWORD *)(this + 204); /*0x62e573*/
  v13 = *(_DWORD *)(this + 192); /*0x62e579*/
  if ( v12 < a4 ) /*0x62e581*/
    v7 = v12; /*0x62e583*/
  v14 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % v7; /*0x62e59b*/
  v15 = v12 - 2; /*0x62e59d*/
  v16 = v12 - v14; /*0x62e5a0*/
  if ( v15 > v16 - 2 ) /*0x62e5a7*/
  {
    v17 = (_DWORD *)(v13 + 4 * v15); /*0x62e5a9*/
    v18 = v15 - (v16 - 2); /*0x62e5ac*/
    do /*0x62e5b7*/
    {
      v17[1] = *v17; /*0x62e5b0*/
      --v17; /*0x62e5b3*/
      --v18; /*0x62e5b6*/
    }
    while ( v18 ); /*0x62e5b7*/
  }
  *(_DWORD *)(v13 + 4 * v16 - 4) = v6; /*0x62e5b9*/
  return v6; /*0x62e5c0*/
}



// ==== 0x0062E650  ScenarioClass::DestroyAndClearVector  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass::DestroyAndClearVector(ScenarioClass *this)
{
  int i; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  for ( i = this->nextScenario[51] - 1; i >= 0; --i ) /*0x62e65b*/
  {
    if ( i < this->nextScenario[51] ) /*0x62e664*/
    {
      v3 = *(_DWORD *)(this->nextScenario[48] + 4 * i); /*0x62e673*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62e678*/
      v4 = (*(int (__thiscall **)(int *, int))(this->nextScenario[47] + 16))( /*0x62e695*/
             &this->nextScenario[47],
             4 * i + this->nextScenario[48]);
      if ( v4 != -1 ) /*0x62e69b*/
      {
        v5 = this->nextScenario[51]; /*0x62e69d*/
        if ( v4 < v5 ) /*0x62e6a2*/
        {
          v6 = v5 - 1; /*0x62e6a4*/
          for ( this->nextScenario[51] = v6; /*0x62e6aa*/
                v4 < this->nextScenario[51];
                *(_DWORD *)(this->nextScenario[48] + 4 * v4 - 4) = *(_DWORD *)(this->nextScenario[48] + 4 * v4) )
          {
            ++v4; /*0x62e6af*/
          }
        }
      }
    }
  }
}



// ==== 0x0062E6D0  ParticleSystemClass::UpdateAllParticles  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::UpdateAllParticles(ParticleSystemClass *this)
{
  double v1; // st7
  ParticleSystemClass *v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // edi
  ObjectClass *v15; // eax
  int v16; // ebp
  int v17; // ecx
  void *Target; // eax
  void *Owner; // eax
  int v20; // edx
  _DWORD *v21; // ebp
  int j; // [esp+Ch] [ebp-10h]
  _DWORD v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this; /*0x62e6d5*/
  for ( i = (int)this->Owner - 1; i >= 0; --i ) /*0x62e6e2*/
    ParticleClass::Dispatch(*(ParticleClass **)(v2->TargetCoords[0] + 4 * i)); /*0x62e6ed*/
  v4 = (int)v2->Owner - 1; /*0x62e6fb*/
  for ( j = v4; v4 >= 0; j = v4 ) /*0x62e700*/
  {
    v5 = v2->TargetCoords[0]; /*0x62e708*/
    v6 = *(_DWORD *)(v5 + 4 * v4); /*0x62e70e*/
    if ( *(_BYTE *)(v6 + 305) ) /*0x62e711*/
    {
      v7 = *(_DWORD **)(v6 + 172); /*0x62e71f*/
      v8 = v7[196]; /*0x62e725*/
      if ( v8 != -1 ) /*0x62e72e*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v8); /*0x62e747*/
        v10 = *(_DWORD *)(v6 + 156) + v7[165]; /*0x62e753*/
        v11 = v7[166]; /*0x62e755*/
        v12 = *(_DWORD *)(v6 + 160); /*0x62e75b*/
        v13 = v7[167]; /*0x62e75e*/
        v24[0] = v10; /*0x62e766*/
        v14 = *(_DWORD *)(v6 + 164); /*0x62e76a*/
        v24[1] = v12 + v11; /*0x62e76d*/
        v24[2] = v14 + v13; /*0x62e773*/
        v15 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e777*/
        v2 = this; /*0x62e77c*/
        if ( v15 ) /*0x62e785*/
        {
          v16 = ParticleClass::Construct(v15, v1, v9, v24, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e79e*/
          if ( v16 ) /*0x62e7a2*/
          {
            v17 = this->TargetCoords[1]; /*0x62e7a4*/
            if ( (int)this->Owner < v17 /*0x62e7d5*/
              || (BYTE1(this->TargetCoords[2]) || !v17)
              && (Target = this->Target, (int)Target > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->Particles[0] + 8))(
                   this->Particles,
                   (int)Target + v17,
                   0) )
            {
              Owner = this->Owner; /*0x62e7dc*/
              v20 = this->TargetCoords[0]; /*0x62e7df*/
              this->Owner = (char *)Owner + 1; /*0x62e7e5*/
              *(_DWORD *)(v20 + 4 * (_DWORD)Owner) = v16; /*0x62e7e8*/
            }
            *(_DWORD *)(v16 + 228) = *(_DWORD *)(v6 + 228); /*0x62e7f7*/
            v21 = (_DWORD *)(v16 + 192); /*0x62e7fd*/
            *v21 = *(_DWORD *)(v6 + 192); /*0x62e805*/
            v21[1] = *(_DWORD *)(v6 + 196); /*0x62e80b*/
            v21[2] = *(_DWORD *)(v6 + 200); /*0x62e811*/
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x62e818*/
      v4 = j; /*0x62e81e*/
    }
    else
    {
      BuildingClass::AdjustHeight(*(int **)(v5 + 4 * v4)); /*0x62e826*/
    }
    --v4; /*0x62e82b*/
  }
}



// ==== 0x0062E840  ObjectClass::UpdateProductionParticleSystem  this=ObjectClass  sig=csp ====
char __thiscall UpdateProductionParticleSystem(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int v6; // eax
  int currentMission; // edi
  int v8; // esi
  Random *p_NeedsSaveOrLink; // ebp
  _DWORD *v10; // edi
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ebp
  ObjectClass *v16; // eax
  _DWORD *v17; // edi
  char v22; // al
  float v23; // eax
  float v24; // edx
  float v26; // edx
  float v27; // ecx
  float v29; // eax
  float v30; // ecx
  float v31; // edx
  float v32; // ecx
  int v33; // eax
  int v34; // eax
  ObjectClass *v35; // eax
  int v36; // eax
  int v38; // eax
  int v40; // eax
  int i; // esi
  int j; // esi
  _BYTE *v43; // ecx
  double v45; // [esp+0h] [ebp-80h]
  double v46; // [esp+0h] [ebp-80h]
  int v47; // [esp+1Ch] [ebp-64h] BYREF
  int v48; // [esp+20h] [ebp-60h]
  int v49; // [esp+24h] [ebp-5Ch]
  float v50; // [esp+28h] [ebp-58h]
  float v51; // [esp+2Ch] [ebp-54h]
  float v52; // [esp+30h] [ebp-50h]
  float v53; // [esp+34h] [ebp-4Ch]
  float v54; // [esp+38h] [ebp-48h]
  float v55; // [esp+3Ch] [ebp-44h]
  float v56; // [esp+40h] [ebp-40h]
  float v57; // [esp+44h] [ebp-3Ch]
  float v58; // [esp+48h] [ebp-38h]
  float v59; // [esp+4Ch] [ebp-34h]
  float v60; // [esp+50h] [ebp-30h]
  float v61; // [esp+54h] [ebp-2Ch]
  float v62; // [esp+58h] [ebp-28h]
  _DWORD v63[3]; // [esp+5Ch] [ebp-24h] BYREF
  int v64[3]; // [esp+68h] [ebp-18h] BYREF

  v3 = this->flashing[0]; /*0x62e84e*/
  if ( v3 > 0 ) /*0x62e857*/
  {
    if ( v3 == 1 ) /*0x62e860*/
      goto LABEL_4; /*0x62e860*/
    v49 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62e879*/
    _ECX = this->currentMission; /*0x62e87d*/
    __asm /*0x62e883*/
    {
      fild [esp+78h+var_5C]
      fmul ds:dbl_7E3570
      fcomp qword ptr [ecx+2F8h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x62e898*/
    {
LABEL_4:
      v6 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62e8aa*/
      currentMission = this->currentMission; /*0x62e8af*/
      v8 = *(_DWORD *)(currentMission + 676) / 2 + (int)abs32(v6) % (*(_DWORD *)(currentMission + 676) / 2); /*0x62e8dc*/
      p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62e8e4*/
      v10 = (_DWORD *)*((_DWORD *)dword_A83D9C + *(_DWORD *)(currentMission + 660)); /*0x62e8ea*/
      v47 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62e8f4*/
      *(float *)&v48 = COERCE_FLOAT(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)); /*0x62e90a*/
      v49 = Random::State(p_NeedsSaveOrLink) % v10[171]; /*0x62e91e*/
      __asm { fild [esp+78h+var_5C] } /*0x62e923*/
      v11 = v48 % v10[168]; /*0x62e927*/
      __asm { fstp [esp+78h+var_58] } /*0x62e92d*/
      v49 = v11; /*0x62e935*/
      __asm { fild [esp+78h+var_5C] } /*0x62e93a*/
      v12 = v47 % v10[169]; /*0x62e93e*/
      __asm { fstp [esp+78h+var_C] } /*0x62e944*/
      v49 = v12; /*0x62e94a*/
      __asm /*0x62e94e*/
      {
        fild [esp+78h+var_5C]
        fstp [esp+78h+var_8]
      }
      if ( v8 > 0 ) /*0x62e956*/
      {
        v49 = v8; /*0x62e95c*/
        do /*0x62ebec*/
        {
          v63[0] = this->location[0]; /*0x62e96a*/
          v63[1] = this->location[1]; /*0x62e971*/
          v13 = this->location[2]; /*0x62e977*/
          v64[0] = this->location[0]; /*0x62e97a*/
          v63[2] = v13; /*0x62e97e*/
          v64[1] = this->location[1]; /*0x62e985*/
          v14 = this->currentMission; /*0x62e98c*/
          v64[2] = this->location[2]; /*0x62e992*/
          if ( *(_DWORD *)(v14 + 660) == -1 ) /*0x62e99d*/
          {
            v15 = 0; /*0x62e99f*/
          }
          else
          {
            v16 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e9a8*/
            v15 = 0; /*0x62e9ad*/
            if ( v16 ) /*0x62e9b4*/
            {
              v47 = ParticleClass::Construct( /*0x62e9e4*/
                      v16,
                      v1,
                      *((_DWORD *)dword_A83D9C + *(_DWORD *)(this->currentMission + 660)),
                      v64,
                      COERCE_FLOAT(v63),
                      (int)this);
              if ( v47 ) /*0x62e9e8*/
              {
                VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v47); /*0x62e9f5*/
                v15 = v47; /*0x62e9fa*/
              }
            }
            else
            {
              v47 = 0; /*0x62eaf4*/
            }
          }
          v17 = *(_DWORD **)(v15 + 172); /*0x62ea04*/
          _ESI = (float *)(v15 + 268); /*0x62ea10*/
          v48 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v17[168]; /*0x62ea22*/
          __asm /*0x62ea26*/
          {
            fild [esp+78h+var_60]
            fstp dword ptr [esi]
          }
          *_ESI = _ET1; /*0x62ea2a*/
          v48 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v17[169]; /*0x62ea44*/
          __asm /*0x62ea48*/
          {
            fild [esp+78h+var_60]
            fstp dword ptr [ebp+110h]
          }
          *(float *)(v15 + 272) = _ET1; /*0x62ea4c*/
          v48 = v17[170] + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % v17[171]; /*0x62ea77*/
          __asm /*0x62ea7b*/
          {
            fild [esp+80h+var_60]
            fstp dword ptr [ebp+114h]
          }
          *(float *)(v15 + 276) = _ET1; /*0x62ea7f*/
          __asm /*0x62ea85*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [esi+4]
            fld dword ptr [esi]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp qword ptr [esp+80h+var_80]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v45); /*0x62eaa6*/
          v22 = BYTE1(this->animation[0]); /*0x62eaab*/
          __asm { fstp [esp+78h+var_60] } /*0x62eab4*/
          if ( v22 ) /*0x62eaba*/
          {
            __asm /*0x62eabc*/
            {
              fld [esp+78h+var_C]
              fadd dword ptr [esi]
            }
            __asm
            {
              fstp [esp+78h+var_54]
              fld [esp+78h+var_8]
              fadd dword ptr [esi+4]
            }
            __asm
            {
              fstp [esp+78h+var_50]
              fld [esp+78h+var_58]
              fadd dword ptr [esi+8]
            }
            v23 = v52; /*0x62eade*/
            *_ESI = v51; /*0x62eae2*/
            __asm { fstp [esp+78h+var_4C] } /*0x62eae4*/
            v24 = v53; /*0x62eae8*/
            *(float *)(v15 + 272) = v23; /*0x62eaec*/
            *(float *)(v15 + 276) = v24; /*0x62eaef*/
          }
          else
          {
            _EAX = this->currentMission + 700; /*0x62eb03*/
            __asm /*0x62eb08*/
            {
              fld dword ptr [eax]
              fadd dword ptr [esi]
              fstp [esp+78h+var_48]
              fld dword ptr [eax+4]
              fadd dword ptr [esi+4]
            }
            __asm
            {
              fstp [esp+78h+var_44]
              fld dword ptr [eax+8]
              fadd dword ptr [esi+8]
            }
            v26 = v55; /*0x62eb24*/
            *_ESI = v54; /*0x62eb2a*/
            __asm { fstp [esp+78h+var_40] } /*0x62eb2c*/
            v27 = v56; /*0x62eb30*/
            *(float *)(v15 + 272) = v26; /*0x62eb34*/
            *(float *)(v15 + 276) = v27; /*0x62eb37*/
          }
          __asm /*0x62eb3a*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [esi+4]
            fld dword ptr [esi]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
          }
          __asm
          {
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp qword ptr [esp+80h+var_80]; int
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v46); /*0x62eb5e*/
          __asm { fcom ds:dbl_7E2800 } /*0x62eb63*/
          __asm { fnstsw ax }
          if ( (_AX & 0x4000) != 0 ) /*0x62eb71*/
          {
            __asm { fstp st } /*0x62eb9b*/
            v29 = *_ESI; /*0x62eb9d*/
            v30 = *(float *)(v15 + 272); /*0x62eb9f*/
            v31 = *(float *)(v15 + 276); /*0x62eba2*/
          }
          else
          {
            __asm /*0x62eb73*/
            {
              fld dword ptr [esi]
              fdiv st, st(1)
              fstp [esp+78h+var_3C]
              fld dword ptr [esi+4]
              fdiv st, st(1)
            }
            v29 = v57; /*0x62eb80*/
            __asm { fstp [esp+78h+var_38] } /*0x62eb84*/
            v30 = v58; /*0x62eb88*/
            __asm /*0x62eb8c*/
            {
              fdivr dword ptr [esi+8]
              fstp [esp+78h+var_34]
            }
            v31 = v59; /*0x62eb93*/
          }
          __asm { fld [esp+78h+var_60] } /*0x62eba7*/
          *_ESI = v29; /*0x62ebab*/
          *(float *)(v15 + 272) = v30; /*0x62ebad*/
          *(float *)(v15 + 276) = v31; /*0x62ebb0*/
          __asm /*0x62ebb3*/
          {
            fmul dword ptr [esi]
            fstp [esp+78h+var_30]
            fld [esp+78h+var_60]
            fmul dword ptr [esi+4]
          }
          __asm
          {
            fstp [esp+78h+var_2C]
            fld [esp+78h+var_60]
            fmul dword ptr [esi+8]
          }
          v32 = v61; /*0x62ebcf*/
          *_ESI = v60; /*0x62ebd3*/
          v33 = v49; /*0x62ebd5*/
          *(float *)(v15 + 272) = v32; /*0x62ebd9*/
          __asm { fstp [esp+78h+var_28] } /*0x62ebdc*/
          *(float *)(v15 + 276) = v62; /*0x62ebe5*/
          v49 = v33 - 1; /*0x62ebe8*/
        }
        while ( v33 != 1 ); /*0x62ebec*/
      }
      if ( dword_A8EB78 == 2 ) /*0x62ebf9*/
      {
        v34 = this->currentMission; /*0x62ebfb*/
        if ( this->flashing[0] == *(_DWORD *)(v34 + 768) && *(int *)(v34 + 772) > 0 && !*(_BYTE *)(v34 + 780) ) /*0x62ec19*/
        {
          v35 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x62ec25*/
          if ( v35 ) /*0x62ec2f*/
            ObjectClass::RegisterInArray( /*0x62ec5b*/
              v35,
              this->location[0],
              this->location[1],
              this->location[2],
              *(_DWORD *)(this->currentMission + 772));
        }
      }
    }
    v36 = this->flashing[0] - 1; /*0x62ec67*/
    this->flashing[0] = v36; /*0x62ec69*/
    if ( v36 <= 0 ) /*0x62ec71*/
      LOBYTE(this->animation[0]) = 1; /*0x62ec73*/
    v50 = COERCE_FLOAT(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646)); /*0x62ec91*/
    __asm /*0x62ec95*/
    {
      fild [esp+78h+var_58]
      fmul ds:dbl_7E3570
      fcom ds:dbl_7E5138
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x62ecaa*/
    {
      v38 = this->flashing[1] - 3; /*0x62ecb2*/
      __asm { fstp st } /*0x62ecb8*/
      if ( v38 <= 17 ) /*0x62ecba*/
        v38 = 17; /*0x62ecbc*/
    }
    else
    {
      __asm /*0x62ecc3*/
      {
        fcomp ds:dbl_7E3558
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x62ecce*/
        goto LABEL_34; /*0x62ecce*/
      v38 = this->flashing[1] + 3; /*0x62ecd6*/
      if ( v38 >= 41 ) /*0x62ecdc*/
        v38 = 41; /*0x62ecde*/
    }
    this->flashing[1] = v38; /*0x62ece3*/
  }
LABEL_34:
  v40 = this->missionTimer[1]; /*0x62ece9*/
  for ( i = 0; i < v40; ++i ) /*0x62ecf3*/
  {
    ParticleClass::Dispatch(*(ParticleClass **)(this->missionStartTime + 4 * i)); /*0x62ecfe*/
    v40 = this->missionTimer[1]; /*0x62ed03*/
  }
  for ( j = this->missionTimer[1] - 1; j >= 0; --j ) /*0x62ed15*/
  {
    v43 = *(_BYTE **)(this->missionStartTime + 4 * j); /*0x62ed1d*/
    LOBYTE(v40) = v43[305]; /*0x62ed20*/
    if ( (_BYTE)v40 ) /*0x62ed28*/
      LOBYTE(v40) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v43 + 248))(v43); /*0x62ed2c*/
  }
  return v40; /*0x62ed35*/
}



// ==== 0x0062ED40  ObjectClass::UpdateBuildingParticleSystem  this=ObjectClass  sig=csp ====
void __thiscall UpdateBuildingParticleSystem(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int ptr_0; // eax
  int v10; // ecx
  int queuedMission; // edx
  int i; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // ebp
  int v16; // ebx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  ObjectClass *v22; // eax
  int v23; // eax
  ObjectClass *v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ebx
  double v28; // st7
  int v29; // eax
  int v30; // eax
  Random *p_NeedsSaveOrLink; // edi
  int v32; // eax
  int currentMission; // ebx
  int v34; // ebp
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ebp
  ObjectClass *v39; // eax
  int v40; // ebx
  int missionData; // ecx
  int v42; // eax
  int v43; // eax
  int missionStartTime; // edx
  double v45; // st7
  int v46; // eax
  double v47; // st7
  int v48; // [esp+14h] [ebp-40h]
  int v49; // [esp+14h] [ebp-40h]
  int v50; // [esp+14h] [ebp-40h]
  int v51; // [esp+18h] [ebp-3Ch] BYREF
  int v52; // [esp+1Ch] [ebp-38h]
  int v53; // [esp+20h] [ebp-34h] BYREF
  int v54; // [esp+24h] [ebp-30h]
  int v55; // [esp+28h] [ebp-2Ch]
  int v56; // [esp+2Ch] [ebp-28h]
  int v57; // [esp+30h] [ebp-24h] BYREF
  int v58; // [esp+34h] [ebp-20h]
  int v59; // [esp+38h] [ebp-1Ch]
  int v60; // [esp+3Ch] [ebp-18h] BYREF
  int v61; // [esp+40h] [ebp-14h]
  int v62; // [esp+44h] [ebp-10h]
  char v63[8]; // [esp+48h] [ebp-Ch] BYREF
  int v64; // [esp+50h] [ebp-4h]

  v3 = this->radioLinks[0]; /*0x62ed49*/
  if ( v3 && (*(_BYTE *)(v3 + 20) & 2) != 0 && (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 12))(v3 + 4) != 6 ) /*0x62ed6e*/
  {
    v4 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)this->radioLinks[0] + 72))(this->radioLinks[0], v63); /*0x62ed7d*/
    v5 = *v4; /*0x62ed86*/
    v6 = v4[1]; /*0x62ed88*/
    v7 = v4[2]; /*0x62ed8b*/
    v8 = *(_DWORD *)this->missionQueued; /*0x62ed8e*/
    ptr_0 = this->ptr_0; /*0x62ed94*/
    v10 = v5 + this->suspendedMission; /*0x62ed96*/
    queuedMission = this->queuedMission; /*0x62ed98*/
    v57 = v10; /*0x62ed9e*/
    v58 = v6 + queuedMission; /*0x62edad*/
    v59 = v7 + v8; /*0x62edb1*/
    (*(void (__thiscall **)(TechnoClass *, int *))(ptr_0 + 436))(this, &v57); /*0x62edb5*/
  }
  for ( i = 0; i < this->missionTimer[1]; ++i ) /*0x62edc5*/
    ParticleClass::Dispatch(*(ParticleClass **)(this->missionStartTime + 4 * i)); /*0x62edd0*/
  v13 = this->missionTimer[1] - 1; /*0x62ede6*/
  v55 = v13; /*0x62ede7*/
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(this->missionStartTime + 4 * v13); /*0x62edf7*/
      if ( !*(_BYTE *)(v14 + 305) ) /*0x62ee02*/
      {
        BuildingClass::AdjustHeight((int *)v14); /*0x62f037*/
        goto LABEL_29; /*0x62f037*/
      }
      if ( *(_DWORD *)(*(_DWORD *)(v14 + 172) + 784) == -1 ) /*0x62ee15*/
        goto LABEL_27; /*0x62ee15*/
      v15 = *(_DWORD *)(v14 + 156); /*0x62ee2d*/
      v16 = *(_DWORD *)(v14 + 160); /*0x62ee2f*/
      v17 = *(_DWORD *)(v14 + 172); /*0x62ee35*/
      v64 = *(_DWORD *)(v14 + 164); /*0x62ee3b*/
      v48 = *(int *)(v17 + 772) >> 3; /*0x62ee48*/
      v18 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v48; /*0x62ee56*/
      v19 = v18 > 0 ? v48 + v18 : v18 - v48;
      v52 = v19; /*0x62ee67*/
      v54 = *(_DWORD *)(v14 + 172); /*0x62ee77*/
      v49 = *(int *)(v54 + 772) >> 3; /*0x62ee84*/
      v20 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v49; /*0x62ee92*/
      v21 = v20 > 0 ? v49 + v20 : v20 - v49;
      v50 = v21; /*0x62eea2*/
      v54 = *((_DWORD *)dword_A83D9C + *(_DWORD *)(v54 + 784)); /*0x62eebe*/
      v57 = v52 + v15; /*0x62eecc*/
      v58 = v16 + v21; /*0x62eed0*/
      v59 = v64; /*0x62eed4*/
      v22 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62eed8*/
      if ( v22 )
      {
        v51 = ParticleClass::Construct(v22, v1, v54, &v57, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62ef01*/
        if ( v51 )
        {
          VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v51); /*0x62ef12*/
          v56 = v51; /*0x62ef1d*/
          if ( v51 )
          {
            *(_DWORD *)(v51 + 228) = *(_DWORD *)(v14 + 228); /*0x62ef29*/
            v23 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62ef3b*/
            *(_BYTE *)(v56 + 303) = *(_BYTE *)(v14 + 303) + (v23 % 6 != 0 ? 0x19 : 0);
          }
        }
      }
      else
      {
        v51 = 0; /*0x62efab*/
      }
      v60 = v15 - v52; /*0x62ef76*/
      v61 = v16 - v50; /*0x62ef7a*/
      v62 = v64; /*0x62ef7e*/
      v24 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62ef82*/
      if ( v24 ) /*0x62ef8c*/
        break; /*0x62ef8c*/
      v26 = *(_DWORD *)v14; /*0x62efb5*/
      v53 = 0; /*0x62efb9*/
      (*(void (__thiscall **)(int))(v26 + 248))(v14); /*0x62efc1*/
      v13 = v55; /*0x62efc7*/
LABEL_29:
      v55 = --v13; /*0x62f03d*/
      if ( v13 < 0 ) /*0x62f041*/
        goto LABEL_30; /*0x62f041*/
    }
    v25 = ParticleClass::Construct(v24, v1, v54, &v60, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62efa0*/
    v53 = v25; /*0x62efa5*/
    if ( v25 )
    {
      VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v53); /*0x62efdc*/
      v27 = v53; /*0x62efe7*/
      if ( v53 )
      {
        *(_DWORD *)(v53 + 228) = *(_DWORD *)(v14 + 228); /*0x62eff1*/
        *(_BYTE *)(v27 + 303) = *(_BYTE *)(v14 + 303)
                              + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 6 != 0 ? 0x19 : 0);
      }
    }
LABEL_27:
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 248))(v14); /*0x62f025*/
    v13 = v55; /*0x62f02f*/
    goto LABEL_29; /*0x62f033*/
  }
LABEL_30:
  if ( !LOBYTE(this->animation[0]) ) /*0x62f047*/
  {
    if ( this->isAliveFlag[0] ) /*0x62f055*/
    {
      v28 = *(float *)&this->radioLinks[2]; /*0x62f063*/
      LOWORD(v29) = Math::RoundToInt(v28); /*0x62f069*/
      if ( !((int)dword_A8ED84 % v29) ) /*0x62f076*/
      {
        v30 = this->radioLinks[0]; /*0x62f080*/
        if ( !v30 || (*(_BYTE *)(v30 + 20) & 4) == 0 || *(char *)(v30 + 1668) < 0 ) /*0x62f098*/
        {
          p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62f0a4*/
          v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62f0ac*/
          currentMission = this->currentMission; /*0x62f0b1*/
          v56 = v32; /*0x62f0b7*/
          v34 = *(_DWORD *)(currentMission + 680) + 1; /*0x62f0c3*/
          v35 = Random::State(p_NeedsSaveOrLink) % v34; /*0x62f0d2*/
          v36 = v56 % v34; /*0x62f0d5*/
          v37 = this->location[0]; /*0x62f0df*/
          v38 = this->location[2]; /*0x62f0e7*/
          v61 = this->location[1] + v35; /*0x62f0ea*/
          v60 = v36 + v37; /*0x62f0f3*/
          v62 = v38 + 10; /*0x62f0f7*/
          if ( *(_DWORD *)(currentMission + 660) != -1 ) /*0x62f102*/
          {
            v39 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62f10d*/
            if ( v39 ) /*0x62f117*/
            {
              v40 = ParticleClass::Construct( /*0x62f147*/
                      v39,
                      v28,
                      *((_DWORD *)dword_A83D9C + *(_DWORD *)(this->currentMission + 660)),
                      &v60,
                      COERCE_FLOAT((TechnoClass *)this->lastCommands),
                      (int)this);
              if ( v40 ) /*0x62f14b*/
              {
                missionData = this->missionData; /*0x62f151*/
                if ( this->missionTimer[1] < missionData /*0x62f182*/
                  || (BYTE1(this->missionTimer[0]) || !missionData)
                  && (v42 = this->missionTimer[2], v42 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->missionStatus + 8))(
                       &this->missionStatus,
                       missionData + v42,
                       0) )
                {
                  v43 = this->missionTimer[1]; /*0x62f189*/
                  missionStartTime = this->missionStartTime; /*0x62f18c*/
                  this->missionTimer[1] = v43 + 1; /*0x62f192*/
                  *(_DWORD *)(missionStartTime + 4 * v43) = v40; /*0x62f195*/
                }
                if ( *(float *)&this->radioLinks[2] > (double)*(float *)(this->currentMission + 688) ) /*0x62f1af*/
                  *(_BYTE *)(v40 + 303) += 25; /*0x62f1b1*/
                v45 = *(float *)(v40 + 228) /*0x62f1d0*/
                    - (*(float *)&this->radioLinks[2] - (double)*(int *)(this->currentMission + 668)) * 0.34999999;
                *(float *)(v40 + 228) = v45; /*0x62f1d6*/
                if ( v45 < 2.0 ) /*0x62f1e7*/
                  *(_DWORD *)(v40 + 228) = 0x40000000; /*0x62f1e9*/
              }
            }
          }
        }
      }
    }
  }
  v46 = this->currentMission; /*0x62f1f3*/
  v47 = *(float *)(v46 + 672) + *(float *)&this->radioLinks[2]; /*0x62f1ff*/
  *(float *)&this->radioLinks[2] = v47; /*0x62f205*/
  if ( v47 > *(float *)(v46 + 684) ) /*0x62f216*/
    LOBYTE(this->animation[0]) = 1; /*0x62f218*/
}



// ==== 0x0062F230  ParticleSystemClass::SpawnParticle  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::SpawnParticle(ParticleSystemClass *this)
{
  double v1; // st7
  int SparkSpawnFrames; // esi
  int Lifetime; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // ebp
  int v9; // edx
  int v10; // esi
  float v11; // eax
  float v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // esi
  unsigned int v18; // esi
  unsigned int v19; // ebp
  float *v20; // eax
  float v21; // edx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  int *v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  ParticleSystemTypeClass *Type; // edx
  float v37; // ebx
  ObjectClass *v38; // eax
  float v45; // eax
  float v46; // ecx
  float v47; // edx
  bool v53; // cc
  char *v55; // eax
  char v56; // ecx^3
  char v57; // esp^3
  char v58; // ecx^3
  void *Owner; // eax
  int i; // esi
  int j; // esi
  _BYTE *v62; // ecx
  int v64; // [esp-18h] [ebp-110h]
  int *v65; // [esp-14h] [ebp-10Ch]
  int v66[4]; // [esp-10h] [ebp-108h] BYREF
  double v67; // [esp+0h] [ebp-F8h]
  float v68; // [esp+1Ch] [ebp-DCh]
  float v69; // [esp+20h] [ebp-D8h] BYREF
  int v70; // [esp+24h] [ebp-D4h]
  double v71; // [esp+28h] [ebp-D0h]
  float v72; // [esp+34h] [ebp-C4h]
  int v73; // [esp+38h] [ebp-C0h] BYREF
  float v74; // [esp+3Ch] [ebp-BCh]
  float v75; // [esp+40h] [ebp-B8h]
  int v76; // [esp+44h] [ebp-B4h]
  int v77; // [esp+48h] [ebp-B0h]
  int v78; // [esp+4Ch] [ebp-ACh]
  double v79; // [esp+50h] [ebp-A8h]
  int v80; // [esp+58h] [ebp-A0h]
  int v82; // [esp+60h] [ebp-98h]
  int v83; // [esp+64h] [ebp-94h]
  int v84; // [esp+68h] [ebp-90h]
  int v85; // [esp+6Ch] [ebp-8Ch]
  float v86; // [esp+70h] [ebp-88h]
  float v87; // [esp+74h] [ebp-84h]
  float v88; // [esp+78h] [ebp-80h]
  _DWORD v90[7]; // [esp+80h] [ebp-78h] BYREF
  float v95[3]; // [esp+B0h] [ebp-48h] BYREF
  Color v96[3]; // [esp+BCh] [ebp-3Ch] BYREF
  Matrix3x4 v97; // [esp+C8h] [ebp-30h] BYREF

  if ( !this->__pad_E5[19] && !this->Owner ) /*0x62f250*/
  {
    SparkSpawnFrames = this->SparkSpawnFrames; /*0x62f264*/
    Lifetime = this->Lifetime; /*0x62f26c*/
    v5 = this->?[0]; /*0x62f27b*/
    v6 = this->SpawnFrames - v5; /*0x62f27d*/
    v7 = this->?[1]; /*0x62f27f*/
    v76 = this->SpawnFrames - v5; /*0x62f282*/
    v8 = Lifetime - v7; /*0x62f286*/
    v9 = this->?[2]; /*0x62f288*/
    v77 = v8; /*0x62f28b*/
    v10 = SparkSpawnFrames - v9; /*0x62f28f*/
    v78 = v10; /*0x62f291*/
    __asm /*0x62f295*/
    {
      fild [esp+0F8h+var_AC]
      fild [esp+0F8h+var_B0]
      fstp [esp+0F8h+var_D0]
      fild [esp+0F8h+var_B4]
      fst [esp+0F8h+var_A8]
      fmul [esp+0F8h+var_A8]
      fld [esp+0F8h+var_D0]
      fmul [esp+0F8h+var_D0]
      faddp st(1), st
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fstp [esp+0F8h+var_F8]; double
      fstp st
    }
    Math::Sqrt(v67); /*0x62f2c2*/
    LOWORD(v11) = Math::RoundToInt(v1); /*0x62f2c7*/
    __asm /*0x62f2cc*/
    {
      fld [esp+0F8h+var_D0]
      fld [esp+0F8h+var_A8]
      fld st(1)
      fmul st, st(2)
      fld st(1)
      fmul st, st(2)
    }
    v68 = v11; /*0x62f2dc*/
    __asm /*0x62f2e0*/
    {
      faddp st(1), st
      fstp [esp+0F8h+var_F8]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v67); /*0x62f2e9*/
    LOWORD(v12) = Math::RoundToInt(v1); /*0x62f2f1*/
    v72 = v12; /*0x62f2fa*/
    v70 = v10; /*0x62f300*/
    v69 = *(float *)&v6; /*0x62f304*/
    if ( v10 >= SLODWORD(v68) ) /*0x62f308*/
    {
      *(float *)&v10 = v68; /*0x62f30a*/
      v70 = LODWORD(v68); /*0x62f30c*/
    }
    if ( v10 <= -LODWORD(v68) ) /*0x62f314*/
      v70 = -LODWORD(v68); /*0x62f316*/
    if ( v6 >= SLODWORD(v12) ) /*0x62f31c*/
    {
      *(float *)&v6 = v12; /*0x62f31e*/
      v69 = v12; /*0x62f320*/
    }
    v13 = -LODWORD(v12); /*0x62f324*/
    if ( v6 <= v13 ) /*0x62f328*/
      v69 = *(float *)&v13; /*0x62f32a*/
    __asm { fild [esp+0F0h+var_DC] } /*0x62f32e*/
    _EAX = this->Type; /*0x62f332*/
    __asm { fmul qword ptr [eax+2C8h] } /*0x62f338*/
    LOWORD(v15) = Math::RoundToInt(v1); /*0x62f33e*/
    __asm { fild [esp+0F0h+var_DC] } /*0x62f343*/
    v16 = v15; /*0x62f34a*/
    v82 = v15; /*0x62f34c*/
    __asm /*0x62f350*/
    {
      fstp [esp+0F8h+var_9C]
      fild [esp+0F8h+var_D4]
      fdiv [esp+0F8h+var_9C]
      fstp [esp+0F8h+var_F8]; double
    }
    BuildingLight::CalcIntensity(v67); /*0x62f35f*/
    __asm /*0x62f364*/
    {
      fstp [esp+0F8h+var_DC]
      fild [esp+0F8h+var_D8]
      fidiv [esp+0F8h+var_C4]
      fstp [esp+0F8h+var_F8]; double
    }
    Math::ArcTan2_Table(v67); /*0x62f373*/
    __asm { fstp [esp+0F8h+var_D8] } /*0x62f378*/
    if ( v8 < 0 ) /*0x62f381*/
    {
      __asm /*0x62f383*/
      {
        fld [esp+0F0h+var_D8]
        fchs
        fstp [esp+0F0h+var_D8]
      }
    }
    Matrix3x4::Identity(&v97); /*0x62f394*/
    Matrix2D::Rotate(v97.m_Data, v69); /*0x62f3a5*/
    Matrix3x3::RotateX(v97.m_Data, v68); /*0x62f3b6*/
    v68 = 0.0; /*0x62f3bd*/
    v70 = 0; /*0x62f3c5*/
    if ( v16 > 0 ) /*0x62f3cd*/
    {
      __asm /*0x62f3d3*/
      {
        fild [esp+0F0h+var_98]
        fstp [esp+0F0h+var_7C]
      }
      do /*0x62f876*/
      {
        __asm { fild [esp+0F0h+var_D4] } /*0x62f3db*/
        _EAX = this->Type; /*0x62f3df*/
        __asm /*0x62f3e5*/
        {
          fdiv [esp+0F0h+var_7C]
          fstp [esp+0F0h+var_C4]
          fld [esp+0F0h+var_9C]
          fmul [esp+0F0h+var_C4]
          fmul qword ptr [eax+2D0h]
          fstp [esp+0F0h+var_D0]
        }
        v18 = HIDWORD(v71); /*0x62f3ff*/
        v19 = LODWORD(v71); /*0x62f407*/
        Math::SinCos(v71); /*0x62f409*/
        __asm { fstp [esp+0F8h+var_D0] } /*0x62f40e*/
        Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v18, v19))); /*0x62f414*/
        __asm /*0x62f419*/
        {
          fstp [esp+100h+var_BC]
          fld [esp+100h+var_D0]
        }
        __asm { fstp [esp+0F0h+var_B8] }
        v73 = 0; /*0x62f43b*/
        v20 = TransformMatrix3x4Point(v95, (float *)v97.m_Data, (float *)&v73); /*0x62f443*/
        v73 = *(_DWORD *)v20; /*0x62f44f*/
        v67 = NAN; /*0x62f453*/
        v74 = v20[1]; /*0x62f458*/
        v21 = v20[2]; /*0x62f45c*/
        _EAX = this->Type; /*0x62f45f*/
        v75 = v21; /*0x62f465*/
        __asm /*0x62f469*/
        {
          fld qword ptr [eax+2D8h]
          fld [esp+0F8h+var_C0]
          fmul st, st(1)
          fstp [esp+0F8h+var_B4]
          fld [esp+0F8h+var_BC]
          fmul st, st(1)
        }
        v83 = v76; /*0x62f483*/
        __asm /*0x62f48d*/
        {
          fstp [esp+0F8h+var_B0]
          fld [esp+0F8h+var_B8]
        }
        __asm { fmul st, st(1) }
        v84 = v77; /*0x62f4a1*/
        __asm { fstp [esp+0F8h+var_AC] } /*0x62f4a5*/
        __asm { fstp st }
        v85 = v78; /*0x62f4af*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4c5*/
        LODWORD(v79) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4d4*/
        v80 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4ef*/
        _EAX = this->Type; /*0x62f4f3*/
        __asm /*0x62f4f9*/
        {
          fild [esp+0F0h+var_A0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
          fild dword ptr [esp+0F0h+var_A8]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
          fstp [esp+0F0h+var_5C]
          fild dword ptr [esp+0F0h+var_D0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
        }
        __asm { fstp [esp+0F0h+var_58] }
        __asm
        {
          fadd [esp+0F0h+var_B4]
          fld [esp+0F0h+var_5C]
          fadd [esp+0F0h+var_90]
        }
        v24 = this->?[1]; /*0x62f560*/
        v90[3] = this->?[0]; /*0x62f563*/
        v90[4] = v24; /*0x62f56a*/
        v25 = this->?[2]; /*0x62f571*/
        __asm /*0x62f574*/
        {
          fstp [esp+0F0h+var_90]
          fld [esp+0F0h+var_58]
          fadd [esp+0F0h+var_8C]
        }
        v90[5] = v25; /*0x62f583*/
        __asm { fstp [esp+0F0h+var_8C] } /*0x62f58a*/
        LOWORD(v26) = Math::RoundToInt(v1); /*0x62f58e*/
        __asm { fld [esp+0F0h+var_90] } /*0x62f593*/
        v27 = v26; /*0x62f597*/
        LOWORD(v28) = Math::RoundToInt(v1); /*0x62f599*/
        __asm { fld [esp+0F0h+var_8C] } /*0x62f59e*/
        v29 = v28; /*0x62f5a2*/
        LOWORD(v30) = Math::RoundToInt(v1); /*0x62f5a4*/
        v31 = v30; /*0x62f5ad*/
        v32 = Color::RGBFromFloat(v96, (int)&this->SpawnFrames, v72); /*0x62f5c5*/
        v33 = v32[1]; /*0x62f5ca*/
        v34 = *v32; /*0x62f5cd*/
        v35 = v32[2]; /*0x62f5cf*/
        v90[1] = v29 + v33; /*0x62f5d4*/
        Type = this->Type; /*0x62f5d8*/
        v90[0] = v27 + v34; /*0x62f5e2*/
        v90[2] = v31 + v35; /*0x62f5e6*/
        if ( Type->ParticleSystemTypeClass_field_0x294 == (IUnknown *)-1 ) /*0x62f5f4*/
        {
          v37 = 0.0; /*0x62f5f6*/
        }
        else
        {
          v38 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62f5ff*/
          v37 = 0.0; /*0x62f604*/
          if ( v38 ) /*0x62f60b*/
          {
            v69 = COERCE_FLOAT( /*0x62f63e*/
                    ParticleClass::Construct(
                      v38,
                      v1,
                      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16]
                                + 4 * (int)this->Type->ParticleSystemTypeClass_field_0x294),
                      v90,
                      COERCE_FLOAT(v90),
                      (int)this));
            if ( v69 != 0.0 ) /*0x62f642*/
            {
              VectorClass::PushBackCopy((VectorClass *)this->Particles, &v69); /*0x62f64f*/
              v37 = v69; /*0x62f654*/
            }
          }
          else
          {
            v69 = 0.0; /*0x62f79a*/
          }
        }
        _ESI = (float *)(LODWORD(v37) + 268); /*0x62f65c*/
        v67 = NAN; /*0x62f669*/
        *(_DWORD *)(LODWORD(v37) + 268) = v73; /*0x62f66b*/
        *(float *)(LODWORD(v37) + 272) = v74; /*0x62f671*/
        *(float *)(LODWORD(v37) + 276) = v75; /*0x62f678*/
        v80 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, SLODWORD(v67), SHIDWORD(v67)); /*0x62f69e*/
        LODWORD(v79) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f6b4*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f6c3*/
        _EAX = this->Type; /*0x62f6c7*/
        __asm { fild dword ptr [esp+0F0h+var_D0] } /*0x62f6cd*/
        __asm
        {
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fild dword ptr [esp+0F8h+var_A8]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fstp [esp+0F8h+var_50]
          fild [esp+0F8h+var_A0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fstp [esp+0F8h+var_4C]
          fadd dword ptr [esi]
          fstp dword ptr [esi]
        }
        *_ESI = _ET1; /*0x62f722*/
        __asm /*0x62f724*/
        {
          fld [esp+0F8h+var_50]
          fadd dword ptr [esi+4]
          fstp dword ptr [esi+4]
        }
        *(float *)(LODWORD(v37) + 272) = _ET1; /*0x62f72e*/
        __asm /*0x62f731*/
        {
          fld [esp+0F8h+var_4C]
          fadd dword ptr [esi+8]
          fstp dword ptr [esi+8]
        }
        *(float *)(LODWORD(v37) + 276) = _ET1; /*0x62f73b*/
        __asm /*0x62f73e*/
        {
          fld dword ptr [esi+8]
          fld dword ptr [esi+4]
          fld dword ptr [esi]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+0F8h+var_F8]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v67); /*0x62f75f*/
        __asm { fcom ds:dbl_7E2800 } /*0x62f764*/
        __asm { fnstsw ax }
        if ( (_AX & 0x4000) != 0 ) /*0x62f772*/
        {
          __asm { fstp st } /*0x62f7a5*/
          v45 = *_ESI; /*0x62f7a7*/
          v46 = *(float *)(LODWORD(v37) + 272); /*0x62f7a9*/
          v47 = *(float *)(LODWORD(v37) + 276); /*0x62f7ac*/
        }
        else
        {
          __asm /*0x62f774*/
          {
            fld dword ptr [esi]
            fdiv st, st(1)
            fstp [esp+0F0h+var_88]
            fld dword ptr [esi+4]
            fdiv st, st(1)
          }
          v45 = v86; /*0x62f781*/
          __asm { fstp [esp+0F0h+var_84] } /*0x62f785*/
          v46 = v87; /*0x62f789*/
          __asm /*0x62f78d*/
          {
            fdivr dword ptr [esi+8]
            fstp [esp+0F0h+var_80]
          }
          v47 = v88; /*0x62f794*/
        }
        *_ESI = v45; /*0x62f7af*/
        *(float *)(LODWORD(v37) + 272) = v46; /*0x62f7b1*/
        *(float *)(LODWORD(v37) + 276) = v47; /*0x62f7b4*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f7ce*/
        _ECX = this->Type; /*0x62f7d2*/
        __asm /*0x62f7d8*/
        {
          fild dword ptr [esp+0F0h+var_D0]
          fmul ds:dbl_7E3570
          fadd [esp+0F0h+var_DC]
          fsub ds:dbl_7E1738
          fld qword ptr [ecx+2F0h]
          fmul ds:dbl_7E1738
          fmulp st(1), st
          fld st
          fld qword ptr [ecx+2F0h]
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x62f809*/
          __asm { fld qword ptr [ecx+2F0h] } /*0x62f80f*/
        else
          __asm { fld st } /*0x62f80b*/
        __asm /*0x62f815*/
        {
          fld qword ptr [ecx+2E8h]
          fchs
          fstp [esp+0F0h+var_D0]
          fcomp [esp+0F0h+var_D0]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x62f82a*/
        {
          __asm /*0x62f847*/
          {
            fstp st
            fld [esp+0F0h+var_D0]
          }
        }
        else
        {
          __asm /*0x62f82c*/
          {
            fld st
            fld qword ptr [ecx+2F0h]
            fcompp
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x62f83b*/
          {
            __asm /*0x62f83d*/
            {
              fstp st
              fld qword ptr [ecx+2F0h]
            }
          }
        }
        __asm { fstp [esp+0F0h+var_DC] } /*0x62f84d*/
        _ECX = *(_DWORD *)(LODWORD(v37) + 172); /*0x62f851*/
        __asm /*0x62f85b*/
        {
          fld [esp+0F0h+var_DC]
          fadd dword ptr [ecx+2FCh]
        }
        v53 = ++v70 < v82; /*0x62f86a*/
        __asm { fstp dword ptr [ebx+0E4h] } /*0x62f870*/
        *(float *)(LODWORD(v37) + 228) = _ET1; /*0x62f870*/
      }
      while ( v53 ); /*0x62f876*/
    }
    if ( HIBYTE(this->Type->ParticleSystemTypeClass_field_0x308) ) /*0x62f882*/
    {
      v55 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x62f892*/
      if ( v55 ) /*0x62f89c*/
      {
        *(_QWORD *)&v67 = 1056964608; /*0x62f8a4*/
        v66[3] = 1; /*0x62f8a9*/
        v66[2] = 0; /*0x62f8ab*/
        v66[1] = 10; /*0x62f8ad*/
        HIBYTE(v66[0]) = v56; /*0x62f8af*/
        LOWORD(v70) = 0; /*0x62f8b0*/
        v58 = v57; /*0x62f8bf*/
        LOWORD(v66[0]) = 0; /*0x62f8c5*/
        LOWORD(v68) = 0; /*0x62f8c8*/
        v65 = v66; /*0x62f8cc*/
        BYTE2(v66[0]) = 0; /*0x62f8d1*/
        HIBYTE(v64) = v58; /*0x62f8db*/
        LOWORD(v65) = 0; /*0x62f8dc*/
        BYTE2(v65) = 0; /*0x62f8e5*/
        LOWORD(v64) = this->Type->ParticleSystemTypeClass_field_0x308; /*0x62f8fa*/
        BYTE2(v64) = BYTE2(this->Type->ParticleSystemTypeClass_field_0x308); /*0x62f900*/
        TimerClass::Construct( /*0x62f940*/
          v55,
          this->?[0],
          this->?[1],
          this->?[2],
          this->SpawnFrames,
          this->Lifetime,
          this->SparkSpawnFrames,
          0,
          1,
          v64,
          (int)v65,
          v66[0],
          10,
          0,
          1,
          1056964608,
          0);
      }
    }
    this->__pad_E5[19] = 1; /*0x62f945*/
  }
  Owner = this->Owner; /*0x62f94c*/
  for ( i = 0; i < (int)Owner; ++i ) /*0x62f956*/
  {
    ParticleClass::Dispatch(*(ParticleClass **)(this->TargetCoords[0] + 4 * i)); /*0x62f961*/
    Owner = this->Owner; /*0x62f966*/
  }
  for ( j = (int)this->Owner - 1; j >= 0; --j ) /*0x62f978*/
  {
    v62 = *(_BYTE **)(this->TargetCoords[0] + 4 * j); /*0x62f980*/
    LOBYTE(Owner) = v62[305]; /*0x62f983*/
    if ( (_BYTE)Owner ) /*0x62f98b*/
      LOBYTE(Owner) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v62 + 248))(v62); /*0x62f98f*/
  }
  return (char)Owner; /*0x62f998*/
}



// ==== 0x0062F9A0  ObjectClass::UpdateBuildingDamageParticles  this=ParticleSystemClass  sig=csp ====
char __thiscall UpdateBuildingDamageParticles(char *this)
{
  int i; // ebx
  float *v3; // edi
  int j; // edi
  _BYTE *v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // ebx
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // eax
  int v14; // edi
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int *v23; // edi
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
  int v39; // [esp+1Eh] [ebp-48h]
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
  int v50; // [esp+5Ah] [ebp-Ch] BYREF
  int v51; // [esp+5Eh] [ebp-8h]
  int v52; // [esp+62h] [ebp-4h]

  for ( i = this->alignmentPadding - 1; i >= 0; --i ) /*0x62f9b5*/
  {
    v3 = *(float **)(this->nextObject + 4 * i); /*0x62f9bd*/
    ParticleClass::Dispatch((int)v3); /*0x62f9c2*/
    BuildingClass::AdjustHeight(v3); /*0x62f9c9*/
  }
  for ( j = this->alignmentPadding - 1; j >= 0; --j ) /*0x62f9d8*/
  {
    v5 = *(_BYTE **)(this->nextObject + 4 * j); /*0x62f9e0*/
    if ( v5[305] ) /*0x62f9e3*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 248))(v5); /*0x62f9ef*/
  }
  v37 = 0; /*0x62f9fe*/
  v6 = AbstractClass::IsTechnoType(*((void **)this + 56)); /*0x62fa03*/
  v7 = v6; /*0x62fa08*/
  if ( v6 ) /*0x62fa0c*/
  {
    if ( !v6[144] ) /*0x62fa12*/
      goto LABEL_13; /*0x62fa12*/
    if ( *((_DWORD *)v6 + 173) && TimerClass::Active((int)(v6 + 904)) ) /*0x62fa34*/
    {
      v8 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)v7 + 173) + 72))(*((_DWORD *)v7 + 173), &v50); /*0x62fa51*/
      v9 = *v8; /*0x62fa5c*/
      v43 = v8[1]; /*0x62fa61*/
      v44 = v8[2]; /*0x62fa6a*/
      v50 = *((_DWORD *)v7 + 39); /*0x62fa70*/
      v10 = *((_DWORD *)v7 + 40); /*0x62fa78*/
      LODWORD(v45) = v9 - v50; /*0x62fa7b*/
      v11 = *((_DWORD *)v7 + 41); /*0x62fa83*/
      HIDWORD(v45) = v43 - v10; /*0x62fa88*/
      v46 = v44 - v11; /*0x62fa92*/
      v12 = Math::Sqrt( /*0x62fabb*/
              (double)(v9 - v50) * (double)(v9 - v50)
            + (double)(v43 - v10) * (double)(v43 - v10)
            + (double)(v44 - v11) * (double)(v44 - v11));
      v40 = Math::RoundToInt(v12); /*0x62face*/
      v13 = *((_DWORD *)v7 + 40); /*0x62fad2*/
      v14 = *((_DWORD *)v7 + 41); /*0x62fad5*/
      v47 = *((_DWORD *)v7 + 39); /*0x62fadf*/
      v48 = v13; /*0x62fae3*/
      v38 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)v7 + 452, &v42) - 0x3FFF) * -0.00009587672516830327; /*0x62fb03*/
      v45 = (double)v40; /*0x62fb15*/
      v41 = (double)v48; /*0x62fb1d*/
      v15 = Math::SinCos(v38); /*0x62fb21*/
      LODWORD(v41) = Math::RoundToInt(v41 - v15 * v45); /*0x62fb37*/
      v16 = Math::ArcTan2(v38); /*0x62fb41*/
      v17 = Math::RoundToInt(v16 * v45 + (double)v47); /*0x62fb51*/
      Coord::Subtract(&v50, v17, SLODWORD(v41), v14); /*0x62fb61*/
      v18 = v51; /*0x62fb6a*/
      v19 = *(_DWORD *)this; /*0x62fb77*/
      this->SpawnFrames = v50; /*0x62fb79*/
      v20 = v52; /*0x62fb7b*/
      this->occupant = v18; /*0x62fb7f*/
      this->SparkSpawnFrames = v20; /*0x62fb84*/
      v21 = (*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 176))( /*0x62fb9b*/
              v7,
              &v50,
              0,
              0,
              0,
              0);
      (*(void (__thiscall **)(char *, int))(v19 + 436))(this, v21); /*0x62fba4*/
      v37 = 1; /*0x62fbaa*/
    }
    if ( !v7[144] ) /*0x62fbaf*/
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
    if ( !((int)dword_A8ED84 % *(_DWORD *)(this->q02B + 668)) /*0x62fc0e*/
      || (v22 = (int)dword_A8ED84 / 3, !((int)dword_A8ED84 % 3)) && (LOBYTE(v22) = v37) != 0 )
    {
      v23 = (int *)(this + 156); /*0x62fc1e*/
      v24 = (int)dword_A8ED84 % 500; /*0x62fc27*/
      v25 = this->q027 - this->SpawnFrames; /*0x62fc2d*/
      v26 = this->q0A4; /*0x62fc3c*/
      v51 = this->owningHouseIndex - this->occupant; /*0x62fc3f*/
      v39 = 3; /*0x62fc79*/
      if ( Math::Sqrt((double)(v25 * v25 + v51 * v51 + (v26 - this->SparkSpawnFrames) * (v26 - this->SparkSpawnFrames))) >= 200.0 ) /*0x62fc86*/
        v39 = 1; /*0x62fc88*/
      v27 = Math::RoundToInt((double)(12 * word_B46254[v24]) / ((double)v39 * 3.0)); /*0x62fcb2*/
      v28 = this->SpawnFrames; /*0x62fcbd*/
      HIDWORD(v45) = this->occupant; /*0x62fcc3*/
      v29 = v27; /*0x62fcc9*/
      LODWORD(v45) = v28; /*0x62fccb*/
      v42 = *v23; /*0x62fcd1*/
      v43 = this->owningHouseIndex; /*0x62fcd8*/
      v52 = this->q0A4; /*0x62fce3*/
      v30 = CalcMathFacing8(&v42, &v45); /*0x62fceb*/
      v31 = v29 * dword_836704[v30] + this->SpawnFrames; /*0x62fd0c*/
      v32 = v29 * dword_836724[v30] + this->occupant; /*0x62fd14*/
      v52 = this->SparkSpawnFrames; /*0x62fd1c*/
      v33 = *v23; /*0x62fd20*/
      v51 = v32; /*0x62fd22*/
      v34 = this->owningHouseIndex; /*0x62fd26*/
      v35 = this->q0A4; /*0x62fd29*/
      v47 = v33; /*0x62fd2c*/
      v48 = v34; /*0x62fd30*/
      v50 = v31; /*0x62fd3c*/
      v49 = v35 + 1; /*0x62fd47*/
      LOBYTE(v22) = ParticleClass::CreateInstance(&v47, &v50, 4); /*0x62fd4b*/
    }
  }
  return v22; /*0x62fd50*/
}



// ==== 0x0062FD60  ParticleSystemClass::Update  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::Update(ParticleSystemClass *this)
{
  int v2; // eax
  int Owner; // eax

  switch ( *(_DWORD *)(this->Type + 692) ) /*0x62fd74*/
  {
    case 0: /*0x62fd74*/
      UpdateBuildingParticleSystem((TechnoClass *)this); /*0x62fd7d*/
      break; /*0x62fd82*/
    case 1: /*0x62fd74*/
      ParticleSystemClass::UpdateAllParticles(this); /*0x62fd86*/
      break; /*0x62fd8b*/
    case 2: /*0x62fd74*/
      UpdateBuildingDamageParticles((char *)this); /*0x62fd8f*/
      break; /*0x62fd94*/
    case 3: /*0x62fd74*/
      UpdateProductionParticleSystem((TechnoClass *)this); /*0x62fd98*/
      break; /*0x62fd9d*/
    case 4: /*0x62fd74*/
      ParticleSystemClass::SpawnParticle(this); /*0x62fda1*/
      break; /*0x62fda1*/
    default:
      break;
  }
  v2 = *(_DWORD *)&this->__pad_E5[7] - 1; /*0x62fda6*/
  *(_DWORD *)&this->__pad_E5[7] = v2; /*0x62fdad*/
  if ( !v2 ) /*0x62fdb3*/
    (*(void (__thiscall **)(ParticleSystemClass *))(this->ptr_0 + 248))(this); /*0x62fdb9*/
  LOBYTE(Owner) = this->isAliveFlag[0]; /*0x62fdbf*/
  if ( (_BYTE)Owner ) /*0x62fdc7*/
  {
    LOBYTE(Owner) = this->__pad_E5[19]; /*0x62fdc9*/
    if ( (_BYTE)Owner ) /*0x62fdd1*/
    {
      Owner = this->Owner; /*0x62fdd3*/
      if ( !Owner ) /*0x62fddb*/
      {
        (*(void (__thiscall **)(ParticleSystemClass *))(this->ptr_0 + 212))(this); /*0x62fde1*/
        this->isAliveFlag[0] = 0; /*0x62fde7*/
        LOBYTE(Owner) = stru_B0F698.Capacity; /*0x62fdee*/
        if ( stru_B0F698.Count < stru_B0F698.Capacity /*0x62fe28*/
          || (stru_B0F698.IsAllocated[0] || !stru_B0F698.Capacity)
          && stru_B0F698.CapacityIncrement > 0
          && (LOBYTE(Owner) = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(stru_B0F698.ptr_0 + 8))(
                                &stru_B0F698,
                                stru_B0F698.Capacity + stru_B0F698.CapacityIncrement,
                                0),
              (_BYTE)Owner) )
        {
          Owner = stru_B0F698.Count++; /*0x62fe30*/
          *(_DWORD *)(stru_B0F698.Items + 4 * Owner) = this; /*0x62fe3f*/
        }
      }
    }
  }
  return Owner; /*0x62fe42*/
}



// ==== 0x0062FE60  ParticleSystemClass::Draw  this=ParticleSystemClass  sig=csp ====
BOOL __thiscall ParticleSystemClass::Draw(ParticleSystemClass *this)
{
  return this->__pad_E5[19] && !this->Owner; /*0x62fe79*/
}



// ==== 0x0062FE80  ParticleSystemClass::StubReturn2  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::StubReturn2(ParticleSystemClass *this)
{
  return 2; /*0x62fe85*/
}



// ==== 0x0062FE90  ParticleSystemClass::UpdateSystem  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::UpdateSystem(ParticleSystemClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  char *Owner; // ecx
  char *v7; // ecx
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x62fe9f*/
  v4 = this->Particles[0]; /*0x62fea4*/
  a3 = a2; /*0x62feb7*/
  v5 = (*(int (__thiscall **)(int *, int *))(v4 + 16))(this->Particles, &a3); /*0x62febb*/
  if ( v5 != -1 ) /*0x62fec1*/
  {
    Owner = (char *)this->Owner; /*0x62fec3*/
    if ( v5 < (int)Owner ) /*0x62fec8*/
    {
      v7 = Owner - 1; /*0x62feca*/
      for ( this->Owner = v7; /*0x62fed0*/
            v5 < (int)this->Owner;
            *(_DWORD *)(this->TargetCoords[0] + 4 * v5 - 4) = *(_DWORD *)(this->TargetCoords[0] + 4 * v5) )
      {
        ++v5; /*0x62fed5*/
      }
    }
  }
  result = 0; /*0x62feea*/
  if ( (ParticleSystemTypeClass *)a2 == this->Type ) /*0x62feee*/
    this->Type = 0; /*0x62fef0*/
  if ( a2 == *(_DWORD *)&this->TimeToDie ) /*0x62fefc*/
    *(_DWORD *)&this->TimeToDie = 0; /*0x62fefe*/
  if ( a2 == this->SpotlightRadius ) /*0x62ff0a*/
  {
    this->__pad_E5[19] = 1; /*0x62ff0c*/
    this->SpotlightRadius = 0; /*0x62ff13*/
  }
  return result; /*0x62ff19*/
}



// ==== 0x0062FF20  ParticleSystemClass::Write  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Write(ParticleSystemClass *this, int a2, int *a3)
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
  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x62ff2f*/
  if ( result >= 0 ) /*0x62ff38*/
  {
    if ( v4 ) /*0x62ff40*/
    {
      ObjectClass::Init((ObjectClass *)v4, (int)&a3); /*0x62ff49*/
      ParticleSystemClass::resetSystemState((ParticleSystemClass *)(v4 + 188), 0, 0); /*0x62ff58*/
      *(_DWORD *)(v4 + 188) = &DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62ff5d*/
      *(_DWORD *)(v4 + 208) = 10; /*0x62ff63*/
      *(_DWORD *)(v4 + 204) = 0; /*0x62ff6a*/
      *(_DWORD *)v4 = &ParticleSystemClass::`vftable'; /*0x62ff6d*/
      *(_DWORD *)(v4 + 4) = &ParticleSystemClass::`vftable'; /*0x62ff73*/
      *(_DWORD *)(v4 + 8) = &ParticleSystemClass::`vftable'; /*0x62ff7a*/
      *(_DWORD *)(v4 + 12) = &off_7EFB70; /*0x62ff81*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x62ff94*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 228)); /*0x62ffa5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 224)); /*0x62ffb6*/
    v6 = *v3; /*0x62ffbb*/
    a2 = 0; /*0x62ffc7*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v3, &a2, 4, 0); /*0x62ffcb*/
    if ( result >= 0 ) /*0x62ffd0*/
    {
      if ( a2-- == 0 ) /*0x62ffdd*/
      {
LABEL_14:
        for ( i = 0; i < *(_DWORD *)(v4 + 204); ++i ) /*0x630065*/
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v4 + 192) + 4 * i)); /*0x630076*/
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



// ==== 0x00620050  DrawSurfaceLineAlpha  this=-  sig=csp ====
int __fastcall DrawSurfaceLineAlpha(int a1, int *a2, int *a3, __int16 a4, unsigned __int8 a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  int result; // eax
  __int16 *v10; // edi
  unsigned int v11; // edx
  int v12; // eax
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
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 92))(a1, v5, v60); /*0x620095*/
  v10 = (__int16 *)result; /*0x620098*/
  if ( result ) /*0x62009c*/
  {
    if ( v60 == v6 ) /*0x6200a8*/
    {
      if ( v45 == 1 ) /*0x6200b3*/
      {
        LOBYTE(v6) = a4; /*0x6200bb*/
        BYTE1(v6) = a4; /*0x6200bf*/
        v11 = v7 - v5 + 1; /*0x6200c4*/
        v12 = v6 << 16; /*0x6200c6*/
        LOWORD(v12) = v6; /*0x6200c9*/
        memset32(v10, v12, v11 >> 2); /*0x6200cf*/
        memset(&v10[2 * (v11 >> 2)], a4, v11 & 3); /*0x6200d6*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6200de*/
        LOBYTE(result) = 1; /*0x6200e1*/
        return result; /*0x6200ea*/
      }
      v13 = v7 - v5; /*0x6200ed*/
      if ( v13 >= 0 ) /*0x6200ef*/
      {
        v14 = a5; /*0x6200fd*/
        v15 = 255 - a5; /*0x620108*/
        v16 = a4; /*0x62010a*/
        v55 = a5; /*0x620111*/
        v57 = v15; /*0x620115*/
        v65 = v10; /*0x62011d*/
        v66 = v13 + 1; /*0x620121*/
        while ( 1 ) /*0x620142*/
        {
          v17 = *v10; /*0x620142*/
          g_GameScreenConfig = v15; /*0x62014a*/
          v18 = (v15 * (unsigned __int16)(v17 & HIWORD(g_ScreenSaverState)) /*0x62018a*/
               + v14 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & a4)) >> 8;
          LOWORD(v18) = HIWORD(g_ScreenSaverState) & v18; /*0x62018d*/
          v19 = v18 /*0x6201a3*/
              | g_ScreenSaverState
              & ((v15 * (unsigned __int16)(v17 & g_ScreenSaverState)
                + v14 * (unsigned int)(unsigned __int16)(v16 & g_ScreenSaverState)) >> 8);
          v16 = a4; /*0x6201a5*/
          g_GameScreenFlags = v14; /*0x6201bd*/
          *v65 = ((v15 * (unsigned __int16)(v17 & g_CreditsScreenState) /*0x6201c3*/
                 + v14 * (unsigned int)(unsigned __int16)(a4 & g_CreditsScreenState)) >> 8)
               | v19;
          v10 = ++v65; /*0x6201c6*/
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
            *(_BYTE *)v10 = v22; /*0x620236*/
          }
          else
          {
            v23 = *v10; /*0x620241*/
            g_GameScreenFlags = a5; /*0x62024f*/
            v62 = v22; /*0x620291*/
            g_GameScreenConfig = 255 - a5; /*0x6202a4*/
            v24 = HIWORD(g_ScreenSaverState) /*0x6202dd*/
                & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v22)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v23)) >> 8)
                | g_ScreenSaverState
                & ((a5 * (unsigned __int16)(v22 & g_ScreenSaverState)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v23)) >> 8);
            v22 = a4; /*0x6202e5*/
            v20 = v47; /*0x6202ec*/
            *v10 = ((a5 * (unsigned __int16)(v62 & g_CreditsScreenState) /*0x6202f7*/
                   + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v23)) >> 8)
                 | v24;
          }
          v10 = (__int16 *)((char *)v10 + v20); /*0x6202fe*/
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
              *((_BYTE *)v10 + v39) = v41; /*0x6204ab*/
            }
            else
            {
              v42 = v10[v39]; /*0x6204b3*/
              g_GameScreenFlags = a5; /*0x6204c6*/
              v64 = v41; /*0x620508*/
              g_GameScreenConfig = 255 - a5; /*0x62051b*/
              v43 = HIWORD(g_ScreenSaverState) /*0x620554*/
                  & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v41)
                    + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v42)) >> 8)
                  | g_ScreenSaverState
                  & ((a5 * (unsigned __int16)(v41 & g_ScreenSaverState)
                    + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v42)) >> 8);
              v41 = a4; /*0x62055c*/
              v39 = v53; /*0x620563*/
              v40 = v51; /*0x620569*/
              v10[v53] = ((a5 * (unsigned __int16)(v64 & g_CreditsScreenState) /*0x620572*/
                         + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v42)) >> 8)
                       | v43;
              v28 = 2 * v25; /*0x620576*/
            }
            if ( v40 > 0 ) /*0x62057c*/
            {
              v53 = ++v39; /*0x620583*/
              v40 -= v56; /*0x620587*/
            }
            v40 += v28; /*0x620591*/
            v10 = (__int16 *)((char *)v10 + v48); /*0x620593*/
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
              *((_BYTE *)v10 + v31) = v32; /*0x62037b*/
            }
            else
            {
              v33 = v10[v31]; /*0x620387*/
              g_GameScreenFlags = a5; /*0x620396*/
              v34 = 255 - a5; /*0x62039c*/
              v63 = v32; /*0x6203d8*/
              v35 = g_ScreenSaverState /*0x6203e5*/
                  & ((a5 * (unsigned __int16)(v32 & g_ScreenSaverState)
                    + v34 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v33)) >> 8);
              g_GameScreenConfig = v34; /*0x6203eb*/
              v36 = (a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v32) /*0x620411*/
                   + v34 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v33)) >> 8;
              LOWORD(v36) = HIWORD(g_ScreenSaverState) & v36; /*0x620414*/
              v37 = v36 | v35; /*0x620424*/
              v32 = a4; /*0x62042c*/
              v25 = v58; /*0x620435*/
              v30 = v50; /*0x620439*/
              v38 = ((a5 * (unsigned __int16)(v63 & g_CreditsScreenState) /*0x620440*/
                    + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v33)) >> 8)
                  | v37;
              v31 = v52; /*0x620442*/
              v10[v52] = v38; /*0x620446*/
              v28 = v54; /*0x62044a*/
            }
            if ( v30 > 0 ) /*0x620450*/
            {
              v10 = (__int16 *)((char *)v10 + v48); /*0x620456*/
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
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x620311*/
    LOBYTE(result) = 1; /*0x620314*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6205bc*/
  }
  return result; /*0x6200e3*/
}



// ==== 0x006205D0  Scrollbar_Draw  this=ObjectClass  sig=csp ====
int __fastcall Scrollbar_Draw(
        int a1,
        int *a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  int result; // eax
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
      v13 = a2[1]; /*0x620615*/
      v14 = v9 + *a2; /*0x620618*/
      v25[0] = a2[2] - v9 + *a2 - 2; /*0x62061a*/
      v26[0] = v14; /*0x620624*/
      v25[1] = v9 + v13; /*0x62062c*/
      v26[1] = v9 + v13; /*0x620630*/
      DrawSurfaceLineAlpha(a1, v26, v25, v23, a6); /*0x620641*/
      v15 = *a2; /*0x620649*/
      v16 = a2[1]; /*0x620651*/
      v27 = a2[2] - v9 + *a2 - 1; /*0x620654*/
      v17 = a2[3]; /*0x620658*/
      v29[0] = v9 + v15; /*0x62065f*/
      v28 = v16 - v9 + v17 - 1; /*0x620670*/
      v29[1] = v28; /*0x620674*/
      DrawSurfaceLineAlpha(a1, v29, &v27, v10, a8); /*0x620680*/
      v18 = a2[3]; /*0x620687*/
      v19 = a2[1]; /*0x62068d*/
      v30[0] = *a2 + v9; /*0x620692*/
      v31[0] = v30[0]; /*0x620698*/
      v31[1] = v19 + v9 + 1; /*0x6206a8*/
      v30[1] = v19 - v9 + v18 - 1; /*0x6206ac*/
      DrawSurfaceLineAlpha(a1, v31, v30, v23, a5); /*0x6206c1*/
      v20 = a2[3]; /*0x6206cd*/
      v21 = a2[1]; /*0x6206d4*/
      v32[0] = *a2 - v9 + a2[2] - 1; /*0x6206d9*/
      v33[0] = v32[0]; /*0x6206df*/
      v22 = v21 - v9 + v20 - 2; /*0x6206e9*/
      v10 = v24; /*0x6206ed*/
      v33[1] = v9 + v21; /*0x6206f1*/
      v32[1] = v22; /*0x6206f6*/
      result = DrawSurfaceLineAlpha(a1, v33, v32, v24, a7); /*0x620706*/
      ++v9; /*0x62070b*/
    }
    while ( v9 < a4 ); /*0x620710*/
  }
  return result; /*0x620716*/
}



// ==== 0x00620720  DrawScrollArrowUI  this=ObjectClass  sig=csp ====
void __fastcall UI_DrawScrollArrow(int *a1, _DWORD *a2, int a3, int a4, char a5)
{
  char v7; // al
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD v14[2]; // [esp+Ch] [ebp-40h] BYREF
  int v15; // [esp+14h] [ebp-38h]
  int v16; // [esp+18h] [ebp-34h]
  _DWORD v17[4]; // [esp+1Ch] [ebp-30h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  if ( a1 ) /*0x62072c*/
  {
    v7 = 114; /*0x620736*/
    if ( a4 ) /*0x62073a*/
      v7 = 112; /*0x62073c*/
    if ( a3 ) /*0x620744*/
      sprintf(Buffer, "guparrow%c.pcx", v7); /*0x620754*/
    else
      sprintf(Buffer, "gdnarrow%c.pcx", v7); /*0x620764*/
    v8 = HashTable::Find(g_DialogHashTable, &Buffer[a5 == 0], 0); /*0x620788*/
    if ( v8 ) /*0x62078c*/
    {
      v9 = a2[1]; /*0x620790*/
      v10 = a2[2]; /*0x620793*/
      v14[0] = *a2; /*0x620796*/
      v11 = a2[3]; /*0x62079a*/
      v14[1] = v9; /*0x62079d*/
      v15 = v10; /*0x6207a1*/
      v16 = v11; /*0x6207a5*/
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8); /*0x6207b0*/
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6207be*/
      v17[1] = 0; /*0x6207c2*/
      v17[0] = 0; /*0x6207ca*/
      v17[2] = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8); /*0x6207d9*/
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 128))(v8); /*0x6207e1*/
      v13 = *a1; /*0x6207e7*/
      v17[3] = v12; /*0x6207ea*/
      (*(void (__thiscall **)(int *, _DWORD *, int, _DWORD *, _DWORD, int))(v13 + 8))(a1, v14, v8, v17, 0, 1); /*0x6207ff*/
    }
  }
}



// ==== 0x00620870  sub_620870  this=-  sig=ida-proto ====
int __fastcall sub_620870(unsigned __int16 a1)
{
  int v1; // eax

  v1 = (unsigned __int8)((unsigned __int8)(a1 >> g_BitShift_Blue) << g_BitMask_Red); /*0x6208c7*/
  BYTE1(v1) = 2; /*0x6208d2*/
  return (unsigned __int8)((unsigned __int8)(a1 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x6208e5*/
       | (((unsigned __int8)((unsigned __int8)(a1 >> g_BitMask_Green) << g_BitMask_Blue) | (v1 << 8)) << 8);
}



// ==== 0x006208F0  DrawDialogGradient  this=ObjectClass  sig=csp ====
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
  if ( a4 == -1 && dword_AC4624 != -1 ) /*0x620911*/
    v4 = ((int)(unsigned __int8)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x62095c*/
       | (BYTE1(dword_AC4624) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(dword_AC4624) >> g_BitMask_Red << g_BitShift_Blue);
  v7 = dword_AC1B94; /*0x620963*/
  v29 = dword_AC1B98; /*0x62096c*/
  v30 = dword_AC1B94; /*0x620970*/
  if ( dword_AC1B98 == -1 ) /*0x620974*/
  {
    v33 = -1; /*0x620976*/
  }
  else
  {
    v33 = ((int)(unsigned __int8)dword_AC1B98 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6209bf*/
        | (BYTE1(dword_AC1B98) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(dword_AC1B98) >> g_BitMask_Red << g_BitShift_Blue);
    v7 = dword_AC1B94; /*0x6209c3*/
  }
  if ( v7 == -1 ) /*0x6209ca*/
    v34 = -1; /*0x6209cc*/
  else
    v34 = ((int)(unsigned __int8)v7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620a16*/
        | (BYTE1(v7) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(dword_AC1B94) >> g_BitMask_Red << g_BitShift_Blue);
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
          v4 = ((int)(unsigned __int8)v23 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620c3e*/
             | (BYTE1(v23) >> g_BitMask_Blue << g_BitMask_Green)
             | (BYTE2(v42) >> g_BitMask_Red << g_BitShift_Blue);
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
  v9 = (39 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d3e*/
     | (248 >> g_BitMask_Blue << g_BitMask_Green)
     | (116 >> g_BitMask_Red << g_BitShift_Blue);
  v10 = (19 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d7d*/
      | (123 >> g_BitMask_Blue << g_BitMask_Green)
      | (57 >> g_BitMask_Red << g_BitShift_Blue);
  v24 = (30 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620dbf*/
      | (186 >> g_BitMask_Blue << g_BitMask_Green)
      | (87 >> g_BitMask_Red << g_BitShift_Blue);
  v22 = 0; /*0x620dfb*/
  v25 = (24 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620e0d*/
      | (153 >> g_BitMask_Blue << g_BitMask_Green)
      | (71 >> g_BitMask_Red << g_BitShift_Blue);
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



// ==== 0x00620F60  Surface_Render  this=ObjectClass  sig=csp ====
int __fastcall sub_620F60(int a1, _WORD *a2, int *yTop, _BYTE *a4, int a5, int a6)
{
  _BYTE *v6; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ebx
  int v12; // [esp+10h] [ebp-Ch]
  int yTopa; // [esp+20h] [ebp+4h]
  int v16; // [esp+28h] [ebp+Ch]

  v6 = a4; /*0x620fab*/
  v8 = yTop[2]; /*0x620fc5*/
  v9 = yTop[3] - yTop[1]; /*0x620fd0*/
  yTopa = yTop[1]; /*0x620fd2*/
  v10 = v8 - *yTop; /*0x620fda*/
  v16 = ((unsigned __int8)a5 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620fdc*/
      | (BYTE2(a5) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(a5) >> g_BitMask_Blue << g_BitMask_Green);
  v12 = *yTop; /*0x620fe2*/
  if ( !a4 ) /*0x620fe6*/
    v6 = (_BYTE *)g_FogOfWarState; /*0x620fe8*/
  Char::Swap(v6, 1); /*0x620ff2*/
  TextGroup::SetRect(v6, yTop); /*0x620ffa*/
  Property::Set(v6, v16); /*0x621006*/
  Font::Print((int)v6, a1, a2, v12, yTopa, v10, v9, 0, 0, 0); /*0x62102e*/
  return 0; /*0x621035*/
}



// ==== 0x00621040  PrintFontLayout  this=-  sig=csp ====
int __fastcall PrintFontLayout(
        int a1,
        unsigned __int16 *a2,
        int *a3,
        Text *a4,
        int yTop,
        char a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  Char *v15; // ebx
  __int16 v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]

  v10 = a3; /*0x62109d*/
  v11 = a3[3]; /*0x6210a1*/
  v12 = a3[2] - *a3; /*0x6210ab*/
  v18 = *a3; /*0x6210ad*/
  v13 = ((unsigned __int8)yTop >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6210b1*/
      | (BYTE2(yTop) >> g_BitMask_Red << g_BitShift_Blue)
      | (BYTE1(yTop) >> g_BitMask_Blue << g_BitMask_Green);
  yTop = a3[1]; /*0x6210b6*/
  v14 = v11 - yTop; /*0x6210ba*/
  v17 = v13; /*0x6210c0*/
  v15 = (Char *)a4; /*0x6210c4*/
  if ( (a6 & 4) != 0 ) /*0x6210ca*/
  {
    Text::Layout(a4, a2, (int *)&a4, &a3, v12); /*0x6210da*/
    yTop += (v14 - (int)a3) / 2; /*0x6210f2*/
  }
  Char::Swap(v15, 1); /*0x6210fa*/
  TextGroup::SetRect((TextGroup *)v15, v10); /*0x621102*/
  Property::Set((Property *)v15, v17); /*0x62110e*/
  Font::Print((int)v15, a1, a2, v18, yTop, v12, v14, a6, a9, a10); /*0x62113f*/
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
        int a1,
        Text *a2,
        int *yTop,
        unsigned __int16 *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int a9)
{
  Text *v9; // edi
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // [esp+4h] [ebp-20h] BYREF
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20; // [esp+Ch] [ebp-18h]
  int v21; // [esp+10h] [ebp-14h]
  _DWORD v22[4]; // [esp+14h] [ebp-10h] BYREF
  int yTopa; // [esp+28h] [ebp+4h]

  v9 = a2; /*0x6211dc*/
  if ( !stru_A8EB00.?[412] ) /*0x6211e0*/
    return 0; /*0x6211e8*/
  if ( !a8 ) /*0x6211f1*/
    a8 = (int *)DSurface_Alternate; /*0x6211f9*/
  v12 = *yTop; /*0x621234*/
  v21 = yTop[3]; /*0x621255*/
  v13 = ((unsigned __int8)a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x621259*/
      | (BYTE1(a1) >> g_BitMask_Blue << g_BitMask_Green)
      | (BYTE2(a1) >> g_BitMask_Red << g_BitShift_Blue);
  yTopa = yTop[1]; /*0x62125e*/
  v14 = yTop[2]; /*0x621262*/
  v20 = v14; /*0x621267*/
  if ( !a2 ) /*0x62126b*/
    v9 = g_FogOfWarState; /*0x62126d*/
  Text::Layout(v9, a4, &v18, &v19, v14); /*0x621285*/
  switch ( a6 ) /*0x621291*/
  {
    case 1: /*0x621291*/
      v12 += (v20 - v18 + 1) / 2; /*0x6212a3*/
      break;
    case 2: /*0x621291*/
      v12 += (v18 + 1) / -2; /*0x6212ba*/
      break;
    case 3: /*0x621291*/
      v12 += -1 - v18; /*0x6212cc*/
      break;
    case 4: /*0x621291*/
      v12 = v20 - v18 + v12 - 1; /*0x6212df*/
      break;
  }
  switch ( a7 ) /*0x6212ea*/
  {
    case 1: /*0x6212ea*/
      v15 = (v21 - v19 + 1) / 2; /*0x6212fa*/
LABEL_21:
      yTopa += v15; /*0x621321*/
      break; /*0x621321*/
    case 2: /*0x6212ea*/
      v15 = (v19 + 1) / -2; /*0x62130f*/
      goto LABEL_21; /*0x621311*/
    case 3: /*0x6212ea*/
      v15 = -1 - v19; /*0x62131f*/
      goto LABEL_21; /*0x62131f*/
  }
  v16 = *yTop; /*0x621325*/
  v17 = yTop[1]; /*0x621327*/
  v22[0] = v16; /*0x621332*/
  v22[1] = v17; /*0x621336*/
  v22[2] = v20 + v16; /*0x621342*/
  v22[3] = v21 + v17; /*0x621346*/
  Char::Swap((Char *)v9, 1); /*0x62134a*/
  TextGroup::SetRect((TextGroup *)v9, v22); /*0x621356*/
  Property::Set((Property *)v9, v13); /*0x62135e*/
  return FontRenderer::DrawText(v9, a8, a4, v12, yTopa, a5, a9) - v12; /*0x6211e4*/
}



// ==== 0x006213A0  Dialog::Resize  this=AbstractClass  sig=csp ====
LONG __thiscall Dialog_Resize(char *this)
{
  LONG result; // eax
  int SystemMetrics; // esi
  HWND v4; // esi
  HWND v5; // [esp+8h] [ebp-24h] BYREF
  struct tagRECT v6; // [esp+Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-10h] BYREF

  result = g_DSurface_Primary; /*0x6213a0*/
  if ( g_DSurface_Primary ) /*0x6213ae*/
  {
    result = DSurface_Alternate; /*0x6213b4*/
    if ( DSurface_Alternate ) /*0x6213bb*/
    {
      ScreenDialogToClient(*((HWND *)this + 5), &v6); /*0x6213c8*/
      GetClientRect(*((HWND *)this + 5), &Rect); /*0x6213d6*/
      result = GetWindowLongA(*((HWND *)this + 5), -16); /*0x6213e2*/
      if ( ((unsigned int)&ToggleClass::`RTTI Class Hierarchy Descriptor' & result) != 0 ) /*0x6213ed*/
      {
        SystemMetrics = GetSystemMetrics(5); /*0x6213fa*/
        result = GetSystemMetrics(6); /*0x6213fe*/
        v6.left += SystemMetrics; /*0x62140e*/
        v6.right -= SystemMetrics; /*0x62141c*/
        v6.top += result; /*0x621420*/
        v6.bottom -= result; /*0x621424*/
      }
      if ( *(_DWORD *)this == 4 ) /*0x62142c*/
      {
        result = dword_AC1B04; /*0x62142e*/
        v4 = (HWND)this->abstractFlags; /*0x621433*/
        v5 = v4; /*0x621438*/
        if ( dword_AC1B04 ) /*0x62143c*/
        {
          result = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v5) & ((1 << dword_AC1B0C) - 1))); /*0x62145d*/
          if ( result ) /*0x621462*/
          {
            while ( *(HWND *)result != v5 ) /*0x62146a*/
            {
              result = *(_DWORD *)(result + 516); /*0x62146c*/
              if ( !result ) /*0x621474*/
                return result; /*0x621474*/
            }
            result += 4; /*0x621480*/
            if ( result ) /*0x621485*/
            {
              *(_DWORD *)(result + 232) = this->ptr_8; /*0x621491*/
              InvalidateRect(v4, (const RECT *)(this + 28), 0); /*0x621497*/
              return UpdateWindow(v4); /*0x62149e*/
            }
          }
        }
      }
    }
  }
  return result; /*0x621476*/
}



// ==== 0x006214B0  SetupDialogRenderBuffer  this=ObjectClass  sig=csp ====
int __fastcall Dialog_SetupRenderBuffer(int *a1, HWND a2, unsigned __int8 a3)
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
  if ( dword_AC1B04 ) /*0x6214cc*/
  {
    v6 = *((_DWORD *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x6214ed*/
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
    ++g_GameScreenState; /*0x6215a1*/
    v29[2] = Rect.right + 1; /*0x6215a7*/
    v29[3] = Rect.bottom + 1; /*0x6215ab*/
    Parent = GetParent(hWnd); /*0x6215af*/
    v24 = Parent; /*0x6215bd*/
    if ( dword_AC1B04 ) /*0x6215c1*/
    {
      v11 = (_DWORD *)*((_DWORD *)dword_AC1B00 + (dword_AC1B18(&v24) & ((1 << dword_AC1B0C) - 1))); /*0x6215e2*/
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
      if ( g_DSurface_Primary ) /*0x62168c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))( /*0x6216a1*/
          v7,
          v29,
          g_DSurface_Primary,
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
          *v13++ = ((v17 * (unsigned int)(unsigned __int16)(v18 & g_CreditsScreenState)) >> 8) /*0x621763*/
                 | g_ScreenSaverState & ((v17 * (unsigned int)(unsigned __int16)(v18 & g_ScreenSaverState)) >> 8)
                 | HIWORD(g_ScreenSaverState)
                 & ((v17 * (unsigned int)(unsigned __int16)(v18 & HIWORD(g_ScreenSaverState))) >> 8);
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
  return (*(int (__thiscall **)(int, int *, _DWORD *, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x6217cc*/
           DSurface_Alternate,
           v3,
           v7,
           v35,
           0,
           1);
}



// ==== 0x006217E0  UI_Helper_6217E0  this=Color  sig=csp ====
void __fastcall sub_6217E0(_DWORD *a1, int a2, __int16 a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ebp
  int v6; // ebx
  __int16 v7; // di
  int v8; // ecx
  int v9; // eax
  _WORD *v10; // ecx
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
  _WORD *v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  __int16 v25; // [esp+24h] [ebp-Ch]
  int v28; // [esp+38h] [ebp+8h]

  v4 = a1; /*0x6217ea*/
  v5 = a2; /*0x6217ec*/
  v6 = (a1[2] * a4) >> 16; /*0x6217fa*/
  v19 = 1; /*0x6217fd*/
  v20 = v6; /*0x621805*/
  if ( v6 >= 0 ) /*0x621809*/
  {
    if ( !v6 ) /*0x621811*/
    {
      v6 = 1; /*0x621813*/
      v20 = 1; /*0x621818*/
    }
    v24 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x62182c*/
    if ( v24 ) /*0x621830*/
    {
      v28 = 0; /*0x621839*/
      if ( (int)v4[3] > 0 ) /*0x621843*/
      {
        v7 = a3; /*0x62184a*/
        do /*0x6219b1*/
        {
          v8 = *v4 + (v28 + v4[1]) * ((*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5) / 2); /*0x62186b*/
          v9 = v4[3] / 4; /*0x621876*/
          if ( v28 == 3 * v9 ) /*0x621880*/
            v19 = 1; /*0x621882*/
          if ( v28 == v9 ) /*0x62188e*/
            v19 = 0; /*0x621890*/
          if ( v6 > 0 ) /*0x62189a*/
          {
            v23 = v6; /*0x6218a4*/
            v10 = (_WORD *)(v24 + 2 * v8); /*0x6218a8*/
            v11 = 255; /*0x6218ab*/
            v21 = v10; /*0x6218b0*/
            v22 = 255; /*0x6218b4*/
            do /*0x62199d*/
            {
              if ( v19 ) /*0x6218be*/
              {
                v12 = v11 / v4[2]; /*0x6218c5*/
                v13 = *v10; /*0x6218d8*/
                v25 = v7; /*0x6218e7*/
                g_GameScreenFlags = v12; /*0x6218fc*/
                g_GameScreenConfig = 255 - v12; /*0x621908*/
                v14 = g_ScreenSaverState /*0x62192d*/
                    & ((g_GameScreenConfig * (unsigned __int16)(v13 & g_ScreenSaverState)
                      + v12 * (unsigned int)(unsigned __int16)(v7 & g_ScreenSaverState)) >> 8);
                v15 = HIWORD(g_ScreenSaverState) /*0x621946*/
                    & ((g_GameScreenConfig * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v13)
                      + v12 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v7)) >> 8);
                v16 = g_GameScreenConfig * (unsigned __int16)(v13 & g_CreditsScreenState); /*0x621958*/
                v4 = a1; /*0x62195b*/
                v6 = v20; /*0x62195f*/
                v17 = v16 + v12 * (unsigned __int16)(v25 & g_CreditsScreenState); /*0x621963*/
                v10 = v21; /*0x621965*/
                LOWORD(v14) = v15 | v14; /*0x621969*/
                v7 = a3; /*0x62196b*/
                *v21 = (v17 >> 8) | v14; /*0x621974*/
                v5 = a2; /*0x621977*/
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
        while ( v28 < v4[3] ); /*0x6219b1*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x6219bd*/
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
            LOWORD(v11) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621a5b*/
            LOWORD(v14) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621a65*/
            v14 &= g_ScreenSaverState; /*0x621a68*/
            LOWORD(v15) = (unsigned __int16)v15 >> 1; /*0x621a6e*/
            v17 = v14 | v11; /*0x621a71*/
            LOWORD(v14) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621a7a*/
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
            LOWORD(v20) = HIWORD(g_ScreenSaverState) & (HIWORD(g_ScreenSaverState) >> 1); /*0x621b03*/
            LOWORD(v19) = (unsigned __int16)g_ScreenSaverState >> 1; /*0x621b0d*/
            v19 &= g_ScreenSaverState; /*0x621b10*/
            LOWORD(v22) = (unsigned __int16)v22 >> 1; /*0x621b16*/
            v24 = v19 | v20; /*0x621b19*/
            LOWORD(v19) = (unsigned __int16)g_CreditsScreenState >> 1; /*0x621b22*/
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
int __fastcall DSurface::FillRectWithColor(int *a1, int a2, __int16 a3, unsigned __int8 a4)
{
  int *v4; // esi
  int v5; // ebp
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

  v4 = a1; /*0x621b85*/
  v5 = a2; /*0x621b87*/
  result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x621b9c*/
  v25 = result; /*0x621ba1*/
  if ( result ) /*0x621ba5*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5); /*0x621bb2*/
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
          v5 = a2; /*0x621cf4*/
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
            v17 = g_ScreenSaverState /*0x621c6d*/
                & ((v14 * (unsigned __int16)(v16 & g_ScreenSaverState)
                  + v12 * (unsigned int)(unsigned __int16)(v15 & g_ScreenSaverState)) >> 8);
            v18 = v14 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v16) /*0x621c8a*/
                + v12 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & a3);
            v15 = a3; /*0x621c8c*/
            g_GameScreenFlags = v12; /*0x621ca0*/
            v19 = g_GameScreenConfig * (unsigned __int16)(v16 & g_CreditsScreenState); /*0x621cb1*/
            v4 = a1; /*0x621cb8*/
            v13 = v20 + 1; /*0x621cbe*/
            *v20++ = ((v19 + v12 * (unsigned int)(unsigned __int16)(a3 & g_CreditsScreenState)) >> 8) /*0x621cca*/
                   | HIWORD(g_ScreenSaverState) & (v18 >> 8)
                   | v17;
            if ( ++v21 >= a1[2] + *a1 ) /*0x621ce0*/
              break; /*0x621ce0*/
            v12 = a4; /*0x621c27*/
            v14 = 255 - a4; /*0x621c2b*/
          }
          v5 = a2; /*0x621ce6*/
          v8 = v23; /*0x621cea*/
          v10 = v24; /*0x621cee*/
        }
        v10 += v27; /*0x621cff*/
        v23 = ++v8; /*0x621d09*/
        v24 = v10; /*0x621d0d*/
      }
      while ( v8 < v4[3] + v4[1] ); /*0x621d11*/
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x621d1c*/
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
  ObjectClass v18[4]; // [esp+28h] [ebp-300h] BYREF

  v16 = HashTable::Find(&g_DialogHashTable, aBitsIPcx, v18); /*0x621d5e*/
  v4 = 0; /*0x621d6b*/
  v17 = HashTable::Find(&g_DialogHashTable, aBitsAPcx, 0); /*0x621d6d*/
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



// ==== 0x00621E90  Dialog::DrawBackground  this=Dialog  sig=csp ====
void __thiscall Dialog::DrawBackground(Dialog *this)
{
  int v1; // ebp
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  LONG right; // eax
  LONG bottom; // ecx
  int v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int v10; // edx
  Dialog **v11; // eax
  _DWORD *v12; // eax
  Dialog **v13; // eax
  int v14; // edi
  Dialog **v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  void *NeedsSaveOrLink; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // ecx
  int v28; // [esp+10h] [ebp-58h] BYREF
  Dialog *v29; // [esp+14h] [ebp-54h] BYREF
  int v30; // [esp+18h] [ebp-50h] BYREF
  LONG v31; // [esp+1Ch] [ebp-4Ch]
  LONG v32; // [esp+20h] [ebp-48h]
  LONG v33; // [esp+24h] [ebp-44h]
  LONG left; // [esp+28h] [ebp-40h] BYREF
  LONG top; // [esp+2Ch] [ebp-3Ch]
  LONG v36; // [esp+30h] [ebp-38h]
  LONG v37; // [esp+34h] [ebp-34h]
  struct tagRECT v38; // [esp+38h] [ebp-30h] BYREF
  int v39; // [esp+48h] [ebp-20h] BYREF
  LONG v40; // [esp+4Ch] [ebp-1Ch]
  LONG v41; // [esp+50h] [ebp-18h]
  LONG v42; // [esp+54h] [ebp-14h]
  struct tagRECT Rect; // [esp+58h] [ebp-10h] BYREF

  v1 = 0; /*0x621e9c*/
  v3 = 0; /*0x621ea0*/
  v30 = (int)this; /*0x621ea4*/
  v28 = (int)this; /*0x621ea8*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x621eac*/
  {
    v4 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x621ec3*/
                    + 4 * HashTable::ComputeHash((int *)&g_DialogPool.__pad_208[56], (int)&v28));
    if ( v4 ) /*0x621ec8*/
    {
      while ( *v4 != v28 ) /*0x621ed0*/
      {
        v4 = (_DWORD *)v4[129]; /*0x621ed2*/
        if ( !v4 ) /*0x621eda*/
          goto LABEL_7; /*0x621eda*/
      }
      v3 = v4 + 1; /*0x621ee2*/
    }
  }
LABEL_7:
  if ( v3 ) /*0x621ee7*/
  {
    GetClientRect((HWND)this, &Rect); /*0x621ef3*/
    ScreenDialogToClient((HWND)this, &v38); /*0x621eff*/
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
      v7 = v3[4]; /*0x621f4d*/
      if ( !v7 ) /*0x621f52*/
      {
        v7 = __2_YAPAXI_Z(0x20u); /*0x621f5b*/
        if ( v7 ) /*0x621f62*/
        {
          v8 = Rect.right; /*0x621f64*/
          v9 = Rect.bottom; /*0x621f68*/
          *(_DWORD *)(v7 + 4) = Rect.right; /*0x621f6c*/
          *(_DWORD *)(v7 + 8) = v9; /*0x621f74*/
          *(_DWORD *)(v7 + 12) = 0; /*0x621f7c*/
          *(_DWORD *)v7 = &XSurface_Vtable; /*0x621f7f*/
          *(_DWORD *)(v7 + 16) = 2; /*0x621f85*/
          Buffer::Init((Buffer *)(v7 + 20), 0, 2 * v9 * v8); /*0x621f8c*/
          *(_DWORD *)v7 = &BSurface_Vtable; /*0x621f91*/
        }
        else
        {
          v7 = 0; /*0x621f99*/
        }
        v3[4] = v7; /*0x621f9b*/
        bottom = v37; /*0x621fa3*/
        ++g_GameScreenState; /*0x621fa8*/
        right = v36; /*0x621fad*/
      }
      v10 = v3[44]; /*0x621fb1*/
      if ( v10 == 1 ) /*0x621fba*/
      {
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x621fc5*/
        {
          RenderCreditsScreen(v7, &left, 0); /*0x621fd5*/
        }
        else if ( UI_Draw_72E260() ) /*0x621fdf*/
        {
          RenderScoreScreen((int *)v7, &left, *((_BYTE *)v3 + 212) == 0); /*0x621ffe*/
          v29 = this; /*0x62200a*/
          if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x62200e*/
          {
            v11 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62202f*/
                              + 4
                              * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                               & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v11 ) /*0x622034*/
            {
              while ( *v11 != v29 ) /*0x62203c*/
              {
                v11 = (Dialog **)v11[129]; /*0x62203e*/
                if ( !v11 ) /*0x622046*/
                  goto LABEL_29; /*0x622046*/
              }
              v12 = v11 + 1; /*0x62204e*/
              if ( v12 ) /*0x622053*/
                v1 = v12[29]; /*0x622055*/
            }
          }
LABEL_29:
          v29 = this; /*0x622058*/
          if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622063*/
            goto LABEL_33; /*0x622063*/
          v13 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x622084*/
                            + 4
                            * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v13 ) /*0x622089*/
            goto LABEL_33; /*0x622089*/
          while ( *v13 != v29 ) /*0x622091*/
          {
            v13 = (Dialog **)v13[129]; /*0x622093*/
            if ( !v13 ) /*0x62209b*/
              goto LABEL_33; /*0x62209b*/
          }
          v16 = v13 + 1; /*0x6220ee*/
          if ( v16 ) /*0x6220f3*/
            v14 = v16[56]; /*0x6220f5*/
          else
LABEL_33:
            v14 = 0; /*0x62209d*/
          v29 = (Dialog *)v30; /*0x6220aa*/
          if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6220ae*/
            goto LABEL_43; /*0x6220ae*/
          v15 = *(Dialog ***)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6220cf*/
                            + 4
                            * ((*(int (__thiscall **)(Dialog **))&g_DialogPool.__pad_208[80])(&v29)
                             & ((1 << g_DialogPool.__pad_208[68]) - 1)));
          if ( !v15 ) /*0x6220d4*/
            goto LABEL_43; /*0x6220d4*/
          while ( *v15 != v29 ) /*0x6220dc*/
          {
            v15 = (Dialog **)v15[129]; /*0x6220de*/
            if ( !v15 ) /*0x6220e6*/
              goto LABEL_43; /*0x6220e6*/
          }
          v17 = v15 + 1; /*0x622101*/
          if ( v17 ) /*0x622106*/
            v18 = v17[57]; /*0x622108*/
          else
LABEL_43:
            v18 = 0; /*0x622110*/
          UI_Draw_72E730(v7, &left, v1, v14, v18); /*0x62211b*/
          if ( *((_BYTE *)v3 + 213) ) /*0x622120*/
            UI_Draw_72E8C0(v7, &left); /*0x622130*/
          if ( *((_BYTE *)v3 + 214) ) /*0x622135*/
            UI_Draw_72E860(v7, &left); /*0x622145*/
          if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622159*/
          {
            v19 = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62217e*/
                             + 4
                             * ((*(int (__thiscall **)(int *))&g_DialogPool.__pad_208[80])(&v30)
                              & ((1 << g_DialogPool.__pad_208[68]) - 1)));
            if ( v19 ) /*0x622183*/
            {
              while ( *v19 != v30 ) /*0x62218f*/
              {
                v19 = (_DWORD *)v19[129]; /*0x622191*/
                if ( !v19 ) /*0x622199*/
                  goto LABEL_72; /*0x622199*/
              }
              v20 = v19 + 1; /*0x6221a8*/
              if ( v20 && *((_BYTE *)v20 + 215) ) /*0x6221b3*/
                UI_Draw_72E920(v7, &left); /*0x6221c7*/
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
        v21 = *(_DWORD *)v7; /*0x622204*/
        v39 = 0; /*0x62220a*/
        v40 = 0; /*0x62220e*/
        (*(void (__thiscall **)(int, int *, DSurface *, LONG *, _DWORD, int))(v21 + 8))( /*0x622212*/
          v7,
          &v39,
          DSurface_Alternate,
          &left,
          0,
          1);
        if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x62221a*/
        {
          NeedsSaveOrLink = dword_A8B230[374].NeedsSaveOrLink; /*0x622229*/
          if ( NeedsSaveOrLink ) /*0x622231*/
          {
            if ( NeedsSaveOrLink == (void *)1 ) /*0x622243*/
            {
              v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1240]; /*0x622245*/
              v24 = UI_Draw_72AFF0(); /*0x62224b*/
            }
            else
            {
              v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1244]; /*0x622252*/
              v24 = UI_Draw_72B010(); /*0x622258*/
            }
          }
          else
          {
            v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1236]; /*0x622233*/
            v24 = UI_Draw_72AFF0(); /*0x622239*/
          }
        }
        else
        {
          v23 = *(_DWORD *)&g_BuildingLoadQueue_Array.__pad_F70[1232]; /*0x62225f*/
          v24 = UI_Draw_72B030(); /*0x622265*/
        }
        v30 = 0; /*0x62226c*/
        v31 = 0; /*0x622270*/
        if ( v24 && v23 ) /*0x62227c*/
          DrawToSurfaceSHP(v7, v24, v23, 0, &v30, &v39, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6222a8*/
      }
      else
      {
        v25 = HashTable::Find(&g_DialogHashTable, off_833654, 0); /*0x6222d3*/
        v42 = v37; /*0x6222d9*/
        v33 = v37; /*0x6222dd*/
        v30 = left; /*0x6222e9*/
        v31 = top; /*0x6222ed*/
        v41 = v36; /*0x6222f5*/
        v32 = v36; /*0x6222f9*/
        v39 = left - v38.left; /*0x6222fd*/
        v40 = top - v38.top; /*0x622301*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 124))(v25); /*0x62230c*/
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 128))(v25); /*0x622318*/
        if ( (int)g_DisplayWidth > v26 ) /*0x622321*/
          v30 += (int)&g_DisplayWidth->__pad_0[-v26] / -2; /*0x622332*/
        if ( (int)*(&g_DisplayWidth + 1) > v27 ) /*0x62233d*/
          v31 += (int)&(*(&g_DisplayWidth + 1))->__pad_0[-v27] / -2; /*0x62234e*/
        (*(void (__thiscall **)(int, int *, int, int *, _DWORD, int))(*(_DWORD *)v7 + 8))(v7, &v39, v25, &v30, 0, 1); /*0x622365*/
      }
LABEL_72:
      if ( v7 ) /*0x62236a*/
      {
        v41 = v36; /*0x622380*/
        v42 = v37; /*0x62238a*/
        v40 = top - v38.top; /*0x622392*/
        v39 = left - v38.left; /*0x6223a7*/
        (*((void (__thiscall **)(DSurface *, LONG *, int, int *, _DWORD, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x6223b3*/
          DSurface_Alternate,
          &left,
          v7,
          &v39,
          0,
          1);
      }
    }
  }
}



// ==== 0x006223C0  ObjectClass::DestroyDialog  this=ObjectClass  sig=csp ====
_DWORD *__thiscall DestroyDialog(ObjectClass *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(_DWORD **)&g_DialogPool.__pad_208[60]; /*0x6223c1*/
  v4 = this; /*0x6223c9*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x6223cd*/
  {
    result = *(_DWORD **)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x6223ee*/
                        + 4
                        * ((*(int (__thiscall **)(ObjectClass **))&g_DialogPool.__pad_208[80])(&v4)
                         & ((1 << g_DialogPool.__pad_208[68]) - 1)));
    if ( result ) /*0x6223f3*/
    {
      while ( (ObjectClass *)*result != v4 ) /*0x6223fb*/
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
          return (_DWORD *)--g_GameScreenState; /*0x62242e*/
        }
      }
    }
  }
  return result; /*0x622407*/
}



// ==== 0x00622470  AddDynamicVector  this=-  sig=csp ====
BOOL __stdcall DynamicVectorClass_Add(HWND a1, int *a2)
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
int UI_Process(ObjectClass *this)
{
  int result; // eax
  bool v2; // zf

  result = dword_AC48EC; /*0x622610*/
  v2 = dword_AC48EC == 0; /*0x622615*/
  if ( dword_AC48EC > 0 ) /*0x622617*/
  {
    result = dword_AC48EC - 1; /*0x622619*/
    dword_AC48EC = result; /*0x62261a*/
    v2 = result == 0; /*0x62261f*/
  }
  if ( v2 && stru_887598.lineTrailer ) /*0x62262b*/
  {
    if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 28))(stru_887598.lineTrailer) ) /*0x62262f*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 24))(stru_887598.lineTrailer); /*0x62263e*/
    return dword_AC48EC; /*0x622641*/
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
      hWnd = v10; /*0x6226f9*/
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



// ==== 0x00622720  Dialog::Destroy  this=Dialog  sig=csp ====
int __thiscall Dialog::Destroy(Dialog *this)
{
  int result; // eax
  Dialog **i; // ecx
  int v4; // eax
  int v5; // eax
  HWND v6; // ecx
  int v7; // eax
  Dialog *v8; // [esp+0h] [ebp-8h]

  Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x62272a*/
  Dialog::IdleProcess(v8, (ObjectClass *)this); /*0x622731*/
  DestroyWindow((HWND)this); /*0x622737*/
  result = 0; /*0x622745*/
  if ( g_DialogTrackingList > 0 ) /*0x622749*/
  {
    for ( i = (Dialog **)&stru_B72D28; *i != this; i += 2 ) /*0x62274f*/
    {
      if ( ++result >= g_DialogTrackingList ) /*0x62275e*/
        return result; /*0x62275e*/
    }
    memcpy( /*0x622783*/
      (void *)(8 * result + 12004648),
      (const void *)(8 * result + 12004656),
      8 * (g_DialogTrackingList + 0x1FFFFFFF * (result + 1)));
    v4 = g_DialogTrackingList; /*0x622788*/
    *(&g_ClipboardBuffer + 2 * g_DialogTrackingList) = 0; /*0x622790*/
    dword_B72D24[2 * v4] = 0; /*0x622797*/
    v5 = v4 - 1; /*0x62279e*/
    g_DialogTrackingList = v5; /*0x6227a1*/
    if ( v5 <= 0 ) /*0x6227a6*/
    {
      hWnd = 0; /*0x6227de*/
      dword_B72F48 = 0; /*0x6227e5*/
      SetForegroundWindow(g_hWnd); /*0x6227eb*/
      return (int)SetFocus(g_hWnd); /*0x6227f7*/
    }
    else
    {
      v6 = *(&g_ClipboardBuffer + 2 * v5); /*0x6227a8*/
      v7 = dword_B72D24[2 * v5]; /*0x6227af*/
      hWnd = v6; /*0x6227b7*/
      dword_B72F48 = v7; /*0x6227bd*/
      SetForegroundWindow(v6); /*0x6227c2*/
      return (int)SetFocus(hWnd); /*0x6227cf*/
    }
  }
  return result; /*0x622760*/
}



// ==== 0x00622800  Dialog::Show  this=Dialog  sig=csp ====
int __thiscall Dialog::Show(Dialog *this)
{
  ShowWindow((HWND)this, 1); /*0x622806*/
  SetForegroundWindow((HWND)this); /*0x62280d*/
  return Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x62281e*/
}



// ==== 0x00622820  SetupDialog  this=AbstractClass  sig=csp ====
int __fastcall SetupDialog(Dialog *hWnd, int a2)
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
  dword_AC48A8 = (int)hWnd; /*0x622836*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 1); /*0x622844*/
  Dialog::InitWindow((HWND)hWnd, 1); /*0x622849*/
  EnumChildWindows((HWND)hWnd, Dialog::SubclassEditControl, 1); /*0x622856*/
  EnumChildWindows((HWND)hWnd, Dialog::InitializeControls, 0); /*0x622861*/
  Dialog::InitializeControls((HWND)hWnd, 0); /*0x622865*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 0); /*0x622871*/
  Dialog::InitWindow((HWND)hWnd, 0); /*0x622875*/
  Dialog::GetField(hWnd); /*0x62287c*/
  lParam[0] = (LPARAM)hWnd; /*0x622890*/
  v14 = 0; /*0x622894*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622898*/
  if ( v14 ) /*0x6228a3*/
    *(_DWORD *)(v14 + 108) = a2; /*0x6228a5*/
  if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x6228ad*/
    Control::CreateControlDialog((Control *)hWnd); /*0x6228b8*/
  lParam[0] = (LPARAM)hWnd; /*0x6228cc*/
  v14 = 0; /*0x6228d0*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6228d4*/
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
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622947*/
  if ( v14 ) /*0x622952*/
  {
    v6 = *(_DWORD *)(v14 + 108); /*0x622954*/
    v7 = v6 == 188 || v6 == 189 || v6 == 258 || v6 == 194 || v6 == 201 || v6 == 3014; /*0x622985*/
    *(_BYTE *)(v14 + 214) = v7; /*0x62298a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62299f*/
  v14 = 0; /*0x6229a3*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6229a7*/
  if ( v14 ) /*0x6229b2*/
  {
    v8 = *(_DWORD *)(v14 + 108); /*0x6229b4*/
    v9 = v8 == 259 || v8 == 3015; /*0x6229c9*/
    *(_BYTE *)(v14 + 215) = v9; /*0x6229ce*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x6229e3*/
  v14 = 0; /*0x6229e7*/
  HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x6229eb*/
  if ( v14 ) /*0x6229f6*/
  {
    v10 = *(_DWORD *)(v14 + 108); /*0x6229f8*/
    v11 = v10 == 264 || v10 == 3014; /*0x622a0d*/
    *(_BYTE *)(v14 + 216) = v11; /*0x622a12*/
  }
  EnumChildWindows((HWND)hWnd, GadgetClass::FindByWindow, 0); /*0x622a1f*/
  if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x622a23*/
  {
    lParam[0] = 640; /*0x622a3d*/
    lParam[1] = 480; /*0x622a4d*/
    MoveWindow((HWND)hWnd, 0, 0, (int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1), 0); /*0x622a51*/
    dword_AC48A8 = (int)hWnd; /*0x622a5b*/
    EnumChildWindows((HWND)hWnd, (WNDENUMPROC)RepositionDialogControls, (LPARAM)lParam); /*0x622a68*/
  }
  else
  {
    lParam[0] = (LPARAM)hWnd; /*0x622a7e*/
    v14 = 0; /*0x622a82*/
    HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], lParam, &v14); /*0x622a86*/
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
  return Dialog::RestoreParent(hWnd); /*0x622b42*/
}



// ==== 0x00622B50  BaseDialogProc  this=-  sig=csp ====
int __userpurge BaseDialogProc@<eax>(HWND hWnd@<ecx>, unsigned int a2@<edx>, int a3, DeleteAndZero a4)
{
  int result; // eax
  int v6; // eax
  int v7; // edi
  HWND DlgItem; // eax
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // ebx
  HWND v12; // eax
  HWND v13; // ebx
  LPARAM v14; // ebp
  void (__stdcall *v15)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  char *v19; // eax
  wchar_t *v20; // eax
  unsigned __int16 v21; // bx
  void (__stdcall *v22)(HWND, WNDENUMPROC, LPARAM); // edi
  wchar_t *StringCSF; // [esp-4h] [ebp-44h]
  DeleteAndZero v24; // [esp+10h] [ebp-30h] BYREF
  DeleteAndZero v25; // [esp+1Ch] [ebp-24h] BYREF
  HWND v26[2]; // [esp+28h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  if ( a2 > 0x84 ) /*0x622b5f*/
  {
    if ( a2 > 0x497 ) /*0x622ea0*/
    {
      if ( a2 == 1260 ) /*0x6230be*/
        EnumChildWindows(hWnd, sub_60AA60, 0); /*0x6230c8*/
      return 0; /*0x6230c8*/
    }
    if ( a2 == 1175 ) /*0x622ea6*/
    {
      SendMessageA(hWnd, 0x4A9u, (WPARAM)hWnd, 1); /*0x6230a6*/
      return 0; /*0x6230b5*/
    }
    if ( a2 != 272 ) /*0x622eb2*/
    {
      if ( a2 > 0x131 && a2 <= 0x138 ) /*0x622ec6*/
        return (int)GetStockObject(4); /*0x622edb*/
      return 0; /*0x622ec6*/
    }
    ++*(_DWORD *)&stru_A8EB00.?[424]; /*0x622eed*/
    if ( *(_DWORD *)a4.__pad_0 ) /*0x622ef3*/
    {
      v21 = **(_WORD **)a4.__pad_0; /*0x622efb*/
      DialogClass::RegisterWinClasses(); /*0x622efe*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x622f03*/
      dword_AC48A8 = (int)hWnd; /*0x622f09*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 1); /*0x622f17*/
      Dialog::InitWindow(hWnd, 1); /*0x622f1c*/
      EnumChildWindows(hWnd, Dialog::SubclassEditControl, 1); /*0x622f29*/
      EnumChildWindows(hWnd, Dialog::InitializeControls, 0); /*0x622f32*/
      Dialog::InitializeControls(hWnd, 0); /*0x622f36*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 0); /*0x622f42*/
      Dialog::InitWindow(hWnd, 0); /*0x622f46*/
      Dialog::GetField((Dialog *)hWnd); /*0x622f4d*/
      UI_Helper_60D2C0((int)hWnd, v21); /*0x622f56*/
      if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x622f60*/
        Control::CreateControlDialog((Control *)hWnd); /*0x622f6b*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x622f72*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x622f79*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x622f80*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x622f87*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x622f93*/
      if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x622f97*/
      {
LABEL_41:
        v26[0] = (HWND)640; /*0x622fa4*/
        v26[1] = (HWND)480; /*0x622fb4*/
        ResizeDialogAndEnum(hWnd, (LPARAM)v26); /*0x622fbe*/
LABEL_48:
        v22(hWnd, Dialog::HandleTabKey, 0); /*0x623071*/
        v22(hWnd, Dialog::DispatchEvent, 0); /*0x623081*/
        Dialog::RestoreParent((Dialog *)hWnd); /*0x623085*/
        SetFocus(hWnd); /*0x62308b*/
        return 0; /*0x62309a*/
      }
    }
    else
    {
      InitializeDialogControls(hWnd, 0); /*0x622fcc*/
      Dialog::GetField((Dialog *)hWnd); /*0x622fd3*/
      v26[0] = hWnd; /*0x622fe7*/
      *(_DWORD *)a4.__pad_0 = 0; /*0x622feb*/
      HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], v26, &a4); /*0x622fef*/
      if ( *(_DWORD *)a4.__pad_0 ) /*0x622ffa*/
        *(_DWORD *)(*(_DWORD *)a4.__pad_0 + 108) = 0; /*0x622ffc*/
      if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x623004*/
        Control::CreateControlDialog((Control *)hWnd); /*0x62300f*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x623016*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x62301d*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x623024*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x62302b*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x623030*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x62303d*/
      if ( (unsigned __int8)Control::CheckControlTypeDialog((Control *)hWnd) ) /*0x623041*/
        goto LABEL_41; /*0x623048*/
    }
    UI_Helper_60C7D0((ObjectClass *)hWnd); /*0x62306c*/
    goto LABEL_48; /*0x62306c*/
  }
  if ( a2 != 132 ) /*0x622b65*/
  {
    switch ( a2 ) /*0x622b7f*/
    {
      case 2u: /*0x622b7f*/
        DialogQueue::RemoveEntry((DialogQueue *)hWnd); /*0x622b88*/
        --*(_DWORD *)&stru_A8EB00.?[424]; /*0x622b9b*/
        SetFocus(g_hWnd); /*0x622ba1*/
        return 0; /*0x622bb0*/
      case 0xFu: /*0x622b7f*/
        *(_DWORD *)a4.__pad_0 = hWnd; /*0x622bd0*/
        if ( !*(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x622bd6*/
          return 0; /*0x622bd6*/
        result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x622bf1*/
                           + 4 * HashTable::ComputeHash((int *)&g_DialogPool.__pad_208[56], (int)&a4));
        if ( !result ) /*0x622bf6*/
          return 0; /*0x622bf6*/
        break; /*0x622bf6*/
      case 0x14u: /*0x622b7f*/
        return 1;
      case 0x2Bu: /*0x622b7f*/
        Dialog::Resize(*(char **)a4.__pad_0); /*0x622bb7*/
        return 1; /*0x622bc8*/
      default:
        return 0;
    }
    while ( *(_DWORD *)result != *(_DWORD *)a4.__pad_0 ) /*0x622c02*/
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
        ValidateRect(hWnd, 0); /*0x622c38*/
        return 1; /*0x622c3e*/
      }
      else
      {
        Dialog::DrawBackground((Dialog *)hWnd); /*0x622c4f*/
        v24.DeleteAndZero_field_0x04 = (int)hWnd; /*0x622c63*/
        *(_DWORD *)a4.__pad_0 = 0; /*0x622c67*/
        HashTable::Get((HashTable *)&g_DialogPool.__pad_208[56], &v24.DeleteAndZero_field_0x04, &a4); /*0x622c6f*/
        v7 = *(_DWORD *)a4.__pad_0; /*0x622c74*/
        if ( *(_DWORD *)a4.__pad_0 && *(_BYTE *)(*(_DWORD *)a4.__pad_0 + 190) ) /*0x622c7c*/
        {
          DlgItem = GetDlgItem(hWnd, 1818); /*0x622c8c*/
          if ( DlgItem ) /*0x622c94*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x622ca0*/
          RenderGadgetClassAnimation(hWnd, 0); /*0x622caa*/
          *(_BYTE *)(v7 + 190) = 0; /*0x622caf*/
        }
        ValidateRect(hWnd, 0); /*0x622cb9*/
        return 0; /*0x622cbf*/
      }
    }
    return 0; /*0x6230d1*/
  }
  v26[0] = GetDlgItem(hWnd, 1685); /*0x622cd9*/
  if ( !v26[0] ) /*0x622cdd*/
    return 0; /*0x622cdd*/
  v9 = *(unsigned __int16 *)a4.__pad_0; /*0x622cef*/
  v10 = *(unsigned __int16 *)&a4.__pad_0[2]; /*0x622cf5*/
  GetWindowRect(hWnd, &Rect); /*0x622cf8*/
  v11 = v9 - Rect.left; /*0x622d0c*/
  v24.DeleteAndZero_field_0x08 = v10 - Rect.top; /*0x622d12*/
  unknown_libname_74(&a4); /*0x622d16*/
  v12 = ChildWindowFromPointEx(hWnd, (POINT)__PAIR64__(v24.DeleteAndZero_field_0x08, v11), 1u); /*0x622d24*/
  v13 = v12; /*0x622d2a*/
  if ( v12 ) /*0x622d2e*/
  {
    v14 = (unsigned __int16)v9 | ((unsigned __int16)v10 << 16); /*0x622d43*/
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622d45*/
    v16 = SendMessageA(v12, 0x4E8u, 0, v14); /*0x622d54*/
    UI_Assign((wchar_t **)&v24.DeleteAndZero_field_0x04, hWnd, (LPARAM)v13, v16); /*0x622d5e*/
    WideString::AssignFromPtr( /*0x622d6c*/
      (wchar_t **)&v25.DeleteAndZero_field_0x04,
      (const wchar_t **)&v24.DeleteAndZero_field_0x04);
    DeleteAndZero::Alt((DeleteAndZero *)&v24.DeleteAndZero_field_0x04); /*0x622d75*/
    WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.DeleteAndZero_field_0x04); /*0x622d83*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x04); /*0x622d8c*/
    v17 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x622d9a*/
    if ( !wcscmp(v17, &g_TypeClass_DefaultString) ) /*0x622da0*/
    {
      unknown_libname_74(&v25); /*0x622db4*/
      v24.DeleteAndZero_field_0x04 = (int)v13; /*0x622dbd*/
      v24.DeleteAndZero_field_0x08 = -1; /*0x622dca*/
      SendMessageA(hWnd, 0x4E9u, 0, (LPARAM)&v24.DeleteAndZero_field_0x04); /*0x622dd2*/
      WideString::AssignFromPtr((wchar_t **)&v25.DeleteAndZero_field_0x08, (const wchar_t **)&v25); /*0x622ddd*/
      DeleteAndZero::Alt(&v25); /*0x622de6*/
      WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.DeleteAndZero_field_0x08); /*0x622df4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v25.DeleteAndZero_field_0x08); /*0x622dfd*/
      v18 = WideString::GetOrEmpty((wchar_t **)&a4); /*0x622e0b*/
      if ( !wcscmp(v18, &g_TypeClass_DefaultString) ) /*0x622e11*/
      {
        v19 = DlgSkirmishMenuProc(hWnd, v13); /*0x622e21*/
        if ( v19 ) /*0x622e28*/
        {
          StringCSF = GetStringCSF((wchar_t *)v19, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x622e3d*/
          WideString::Assign((wchar_t **)&v24, StringCSF); /*0x622e3e*/
        }
        else
        {
          WideString::Assign((wchar_t **)&v24, &g_TypeClass_DefaultString); /*0x622e49*/
        }
        WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v24); /*0x622e57*/
        DeleteAndZero::Alt(&v24); /*0x622e60*/
      }
    }
  }
  else
  {
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622e67*/
  }
  v20 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x622e71*/
  v15(v26[0], 0x4B2u, 0, (LPARAM)v20); /*0x622e83*/
  DeleteAndZero::Alt(&a4); /*0x622e89*/
  return 0; /*0x622ba9*/
}



// ==== 0x00623120  Dialog::PumpMessages  this=Dialog  sig=csp ====
int Dialog::PumpMessages()
{
  int result; // eax

  MessageLoop(); /*0x623120*/
  if ( !dword_A8B238[0] || dword_A8B238[0] == 5 || byte_A8D60E || dword_A8DAB4 ) /*0x623143*/
  {
    result = Event::Dispatch(); /*0x62315a*/
  }
  else if ( !VtableStub::55CBF0() ) /*0x623145*/
  {
    result = GameFrameLoop(); /*0x62314e*/
    if ( (_BYTE)result ) /*0x623155*/
    {
      LOBYTE(result) = 1; /*0x623157*/
      return result; /*0x623159*/
    }
  }
  LOBYTE(result) = 0; /*0x62315f*/
  return result; /*0x623159*/
}



// ==== 0x00623170  UI_Connect  this=Dialog  sig=csp ====
BOOL __fastcall sub_623170(HWND hWnd, LONG a2, LONG a3)
{
  LONG v5; // ecx
  LONG v6; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-20h] BYREF
  struct tagPOINT Point; // [esp+1Ch] [ebp-10h] BYREF
  struct tagPOINT v10; // [esp+24h] [ebp-8h] BYREF

  v10 = *(struct tagPOINT *)&g_DisplayWidth; /*0x623185*/
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



// ==== 0x00623230  CreateMessageBox  this=Dialog  sig=ida-proto ====
HWND __fastcall MessageBox_Create(LPARAM lParam, LPARAM a2, LONG dwNewLong)
{
  HWND v5; // esi
  HWND DlgItem; // eax
  HWND v7; // edi

  v5 = (HWND)CreateDialog(0xF0u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_6232B0, 0); /*0x623249*/
  if ( v5 ) /*0x62324d*/
  {
    SetWindowLongA(v5, 8, dwNewLong); /*0x623257*/
    DlgItem = GetDlgItem(v5, 1456); /*0x623269*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62327a*/
    if ( a2 ) /*0x62327e*/
    {
      v7 = GetDlgItem(v5, 1472); /*0x623288*/
      SendMessageA(v7, 0x4B2u, 0, a2); /*0x623293*/
      EnableWindow(v7, 1); /*0x623298*/
      ShowWindow(v7, 5); /*0x6232a1*/
    }
  }
  return v5; /*0x6232a9*/
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
        EventBuffer::Enqueue(dword_87F770, 27); /*0x6232f9*/
        *WindowLongA = 1; /*0x6232fe*/
      }
    }
    return 0; /*0x623301*/
  }
  return result; /*0x623303*/
}



// ==== 0x00623310  Network_Start  this=Dialog  sig=csp ====
BOOL __fastcall sub_623310(HWND hWnd, LPARAM lParam)
{
  HWND DlgItem; // eax

  DlgItem = GetDlgItem(hWnd, 1456); /*0x62331c*/
  SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62332b*/
  return UpdateWindow(hWnd); /*0x623338*/
}



// ==== 0x00623340  DialogControl::Constructor  this=DialogControl  sig=csp ====
_DWORD *__thiscall DialogControl::Constructor(DialogControl *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  memset(this, 0, 0x200u); /*0x62334d*/
  *((_DWORD *)this + 26) = 11; /*0x62334f*/
  *((_DWORD *)this + 25) = g_FogOfWarState; /*0x62335d*/
  v2 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x623360*/
  if ( v2 ) /*0x62336c*/
    v3 = unknown_libname_74(v2); /*0x623370*/
  else
    v3 = 0; /*0x623377*/
  this->q00F = v3; /*0x623379*/
  this->q004 = 0; /*0x62337c*/
  *((_DWORD *)this + 23) = 0; /*0x62337f*/
  *((_DWORD *)this + 36) = -1; /*0x623382*/
  return this->__pad_0; /*0x62338e*/
}



// ==== 0x006233A0  Dialog::CleanupTree  this=Dialog  sig=csp ====
void __thiscall Dialog::CleanupTree(Dialog *this)
{
  int i; // ecx
  int *v3; // eax
  int *v4; // edx
  DeleteAndZero *Dialog_field_0x3C; // esi

  if ( this->Dialog_field_0x28 ) /*0x6233a3*/
  {
    __3_YAXPAX_Z(this->Dialog_field_0x28); /*0x6233ab*/
    this->Dialog_field_0x28 = 0; /*0x6233b3*/
  }
  for ( i = this->Dialog_field_0x34; i; i = this->Dialog_field_0x34 ) /*0x6233bf*/
  {
    v3 = (int *)i; /*0x6233c1*/
    v4 = 0; /*0x6233c3*/
    while ( (int *)i != v3 ) /*0x6233cb*/
    {
      v4 = v3; /*0x6233cd*/
      v3 = (int *)*v3; /*0x6233cf*/
      if ( !v3 ) /*0x6233d3*/
        goto LABEL_12; /*0x6233d3*/
    }
    if ( v4 ) /*0x6233dd*/
      *v4 = *v3; /*0x6233e1*/
    else
      this->Dialog_field_0x34 = *v3; /*0x6233e7*/
    __3_YAXPAX_Z(v3); /*0x6233eb*/
LABEL_12:
    ; /*0x6233f3*/
  }
  Dialog_field_0x3C = (DeleteAndZero *)this->Dialog_field_0x3C; /*0x6233fa*/
  if ( Dialog_field_0x3C ) /*0x6233ff*/
  {
    DeleteAndZero::Alt(Dialog_field_0x3C); /*0x623403*/
    __3_YAXPAX_Z(Dialog_field_0x3C); /*0x623409*/
  }
}



// ==== 0x00623460  LinkedList::Remove  this=LinkedList  sig=csp ====
int __thiscall LinkedList::Remove(LinkedList *this, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // edx

  result = *((_DWORD *)this + 13); /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( result ) /*0x623468*/
  {
    while ( a2 != (_DWORD *)result ) /*0x623470*/
    {
      v3 = (_DWORD *)result; /*0x623472*/
      result = *(_DWORD *)result; /*0x623474*/
      if ( !result ) /*0x623478*/
        return result; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *(_DWORD *)result; /*0x623489*/
    else
      *((_DWORD *)this + 13) = *(_DWORD *)result; /*0x62349a*/
    __3_YAXPAX_Z((void *)result); /*0x62348b*/
  }
  return result; /*0x62347a*/
}



// ==== 0x006234B0  SymbolTable::Rebuild  this=SymbolTable  sig=csp ====
void __thiscall SymbolTable::Rebuild(SymbolTable *this, int **a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  int **j; // esi
  int v7; // eax
  int v8; // eax

  for ( i = (_DWORD *)*((_DWORD *)this + 13); i; i = (_DWORD *)*((_DWORD *)this + 13) ) /*0x6234b9*/
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
      *((_DWORD *)this + 13) = *v4; /*0x6234e1*/
    __3_YAXPAX_Z(v4); /*0x6234e5*/
LABEL_10:
    ; /*0x6234ed*/
  }
  for ( j = a2; j; j = (int **)*j ) /*0x6234fa*/
  {
    v7 = wcslen((const wchar_t *)j[2]); /*0x623500*/
    v8 = __2_YAPAXI_Z(2 * v7 + 18); /*0x62350a*/
    if ( v8 ) /*0x623514*/
    {
      *(_DWORD *)(v8 + 8) = v8 + 16; /*0x623519*/
      *(_DWORD *)v8 = *((_DWORD *)this + 13); /*0x62351f*/
      *(_DWORD *)(v8 + 4) = 0; /*0x623521*/
      *((_DWORD *)this + 13) = v8; /*0x623528*/
    }
    *(_DWORD *)(v8 + 12) = j[3]; /*0x62352e*/
    *(_DWORD *)(v8 + 4) = j[1]; /*0x623534*/
    wcscpy(*(wchar_t **)(v8 + 8), (const wchar_t *)j[2]); /*0x62353f*/
  }
}



// ==== 0x00623560  GadgetClass::SetTooltip  this=GadgetClass  sig=csp ====
void __thiscall GadgetClass::SetTooltip(GadgetClass *this, wchar_t *String)
{
  int v3; // eax
  wchar_t *v4; // eax

  if ( *((_DWORD *)this + 10) ) /*0x623564*/
  {
    __3_YAXPAX_Z(*((void **)this + 10)); /*0x62356c*/
    *((_DWORD *)this + 10) = 0; /*0x623574*/
  }
  if ( String ) /*0x623581*/
  {
    if ( *String ) /*0x623583*/
    {
      v3 = wcslen(String); /*0x62358a*/
      v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2); /*0x623594*/
      *((_DWORD *)this + 10) = v4; /*0x62359b*/
      wcscpy(v4, String); /*0x62359e*/
    }
  }
}



// ==== 0x006235B0  ObjectClass::method_6235B0  this=ObjectClass  sig=csp ====
void __thiscall sub_6235B0(ObjectClass *this, wchar_t *Format)
{
  wchar_t *v3; // eax

  if ( this->owningHouseIndex ) /*0x6235b4*/
  {
    __3_YAXPAX_Z((void *)this->owningHouseIndex); /*0x6235bc*/
    this->owningHouseIndex = 0; /*0x6235c4*/
  }
  if ( Format ) /*0x6235d1*/
  {
    if ( *(_BYTE *)Format ) /*0x6235d3*/
    {
      v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2); /*0x6235ea*/
      this->owningHouseIndex = (int)v3; /*0x6235f6*/
      swprintf(v3, (const size_t)g_Str_Trace__hs, Format); /*0x6235f9*/
    }
  }
}



// ==== 0x00623610  DialogClass::CopyTemplateStruct  this=AbstractClass  sig=csp ====
_DWORD *__thiscall DialogClass::CopyTemplateStruct(DialogClass *this, _DWORD *a2)
{
  void *v3; // edx
  void *v4; // eax
  const wchar_t *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  void **v9; // ecx
  int **i; // esi
  void **v11; // eax
  void **v12; // edx
  int v13; // eax
  void **v14; // eax
  int v15; // [esp+8h] [ebp-4h]

  v3 = this->field_34; /*0x62361c*/
  v4 = *(void **)&this->__pad_0[40]; /*0x62361f*/
  v15 = *((_DWORD *)this + 15); /*0x623624*/
  if ( this == (DialogClass *)a2 ) /*0x623628*/
    return this->__pad_0; /*0x62362a*/
  qmemcpy(this, a2, 0x200u); /*0x62363d*/
  *(_DWORD *)&this->__pad_0[40] = v4; /*0x623645*/
  *((_DWORD *)this + 15) = v15; /*0x623648*/
  this->field_34 = v3; /*0x62364b*/
  v6 = (const wchar_t *)a2[10]; /*0x62364e*/
  if ( v4 ) /*0x623653*/
  {
    __3_YAXPAX_Z(v4); /*0x623656*/
    *(_DWORD *)&this->__pad_0[40] = 0; /*0x62365e*/
  }
  if ( v6 && *v6 ) /*0x623665*/
  {
    v7 = wcslen(v6); /*0x62366b*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623675*/
    *(_DWORD *)&this->__pad_0[40] = v8; /*0x62367c*/
    wcscpy(v8, v6); /*0x62367f*/
  }
  v9 = (void **)this->field_34; /*0x623687*/
  for ( i = (int **)a2[13]; v9; v9 = (void **)this->field_34 ) /*0x62368f*/
  {
    v11 = v9; /*0x623691*/
    v12 = 0; /*0x623693*/
    while ( v9 != v11 ) /*0x62369b*/
    {
      v12 = v11; /*0x62369d*/
      v11 = (void **)*v11; /*0x62369f*/
      if ( !v11 ) /*0x6236a3*/
        goto LABEL_17; /*0x6236a3*/
    }
    if ( v12 ) /*0x6236ad*/
      *v12 = *v11; /*0x6236b1*/
    else
      this->field_34 = *v11; /*0x6236b7*/
    __3_YAXPAX_Z(v11); /*0x6236bb*/
LABEL_17:
    ; /*0x6236c3*/
  }
  for ( ; i; i = (int **)*i ) /*0x6236cc*/
  {
    v13 = wcslen((const wchar_t *)i[2]); /*0x6236d2*/
    v14 = (void **)__2_YAPAXI_Z(2 * v13 + 18); /*0x6236dc*/
    if ( v14 ) /*0x6236e6*/
    {
      v14[2] = v14 + 4; /*0x6236eb*/
      *v14 = this->field_34; /*0x6236f1*/
      v14[1] = 0; /*0x6236f3*/
      this->field_34 = v14; /*0x6236f6*/
    }
    v14[3] = i[3]; /*0x6236fc*/
    v14[1] = i[1]; /*0x623702*/
    wcscpy((wchar_t *)v14[2], (const wchar_t *)i[2]); /*0x62370d*/
  }
  return this->__pad_0; /*0x62362c*/
}



// ==== 0x00623730  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_623730(ObjectClass *this, _DWORD *a2)
{
  TagClass *attachedTag; // edx
  void *owningHouseIndex; // eax
  int v5; // ebp
  const wchar_t *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  TagClass *v9; // ecx
  int **i; // esi
  TagClass **v11; // eax
  TagClass **v12; // edx
  int v13; // eax
  int v14; // eax

  attachedTag = this->attachedTag; /*0x623741*/
  owningHouseIndex = (void *)this->owningHouseIndex; /*0x623744*/
  v5 = this->ambientSoundController[0]; /*0x623747*/
  qmemcpy(this, a2, 0x200u); /*0x62374a*/
  this->ambientSoundController[0] = v5; /*0x623750*/
  this->owningHouseIndex = (int)owningHouseIndex; /*0x623755*/
  this->attachedTag = attachedTag; /*0x623758*/
  v6 = (const wchar_t *)a2[10]; /*0x62375b*/
  if ( owningHouseIndex ) /*0x623760*/
  {
    __3_YAXPAX_Z(owningHouseIndex); /*0x623763*/
    this->owningHouseIndex = 0; /*0x62376b*/
  }
  if ( v6 && *v6 ) /*0x623772*/
  {
    v7 = wcslen(v6); /*0x623778*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623782*/
    this->owningHouseIndex = (int)v8; /*0x623789*/
    wcscpy(v8, v6); /*0x62378c*/
  }
  v9 = this->attachedTag; /*0x623794*/
  for ( i = (int **)a2[13]; v9; v9 = this->attachedTag ) /*0x62379c*/
  {
    v11 = (TagClass **)v9; /*0x62379e*/
    v12 = 0; /*0x6237a0*/
    while ( v9 != (TagClass *)v11 ) /*0x6237a8*/
    {
      v12 = v11; /*0x6237aa*/
      v11 = (TagClass **)*v11; /*0x6237ac*/
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
    v14 = __2_YAPAXI_Z(2 * v13 + 18); /*0x6237e9*/
    if ( v14 ) /*0x6237f3*/
    {
      *(_DWORD *)(v14 + 8) = v14 + 16; /*0x6237f8*/
      *(_DWORD *)v14 = this->attachedTag; /*0x6237fe*/
      *(_DWORD *)(v14 + 4) = 0; /*0x623800*/
      this->attachedTag = (TagClass *)v14; /*0x623803*/
    }
    *(_DWORD *)(v14 + 12) = i[3]; /*0x623809*/
    *(_DWORD *)(v14 + 4) = i[1]; /*0x62380f*/
    wcscpy(*(wchar_t **)(v14 + 8), (const wchar_t *)i[2]); /*0x62381a*/
  }
  return &this->AbstractClass; /*0x623828*/
}



// ==== 0x00623840  ListBox::Clear  this=ListBox  sig=csp ====
int __thiscall ListBox::Clear(ListBox *this)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)this, 0x146u, 0, 0); /*0x623855*/
  v3 = v2 - 1; /*0x623859*/
  if ( v2 ) /*0x62385c*/
  {
    do /*0x62386e*/
      SendMessageA((HWND)this, 0x144u, v3, 0); /*0x623867*/
    while ( v3-- ); /*0x62386e*/
  }
  return 0; /*0x623870*/
}



// ==== 0x00623880  DrawTextRendererMultiline  this=ObjectClass  sig=csp ====
char __fastcall TextRenderer_DrawMultiline(
        _DWORD *a1,
        int *a2,
        wchar_t *String,
        int a4,
        _DWORD *a5,
        int a6,
        signed int *a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  const wchar_t *v11; // edi
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
  unsigned __int16 *v27; // edi
  int v28; // ebp
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  _DWORD *v33; // ebp
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
  signed int v50; // [esp+14h] [ebp-102Ch]
  int v51; // [esp+14h] [ebp-102Ch]
  int v52; // [esp+18h] [ebp-1028h] BYREF
  int v53; // [esp+1Ch] [ebp-1024h]
  int v54; // [esp+20h] [ebp-1020h] BYREF
  int v55; // [esp+24h] [ebp-101Ch]
  int v56; // [esp+28h] [ebp-1018h]
  _DWORD *v57; // [esp+2Ch] [ebp-1014h]
  _DWORD v58[4]; // [esp+30h] [ebp-1010h] BYREF
  wchar_t Destination[2048]; // [esp+40h] [ebp-1000h] BYREF

  v57 = a1; /*0x62388a*/
  v54 = -1; /*0x62388e*/
  v11 = String; /*0x62389a*/
  v12 = 0; /*0x6238a1*/
  v49 = 0; /*0x6238a7*/
  v52 = 0; /*0x6238ab*/
  if ( !String ) /*0x6238af*/
    v11 = &g_TypeClass_DefaultString; /*0x6238b1*/
  v14 = wcslen(v11); /*0x6238b7*/
  v15 = a4; /*0x6238bc*/
  if ( a4 < 0 || a4 > v14 ) /*0x6238cc*/
    v15 = 0; /*0x6238ce*/
  if ( a8 ) /*0x6238d9*/
  {
    ProcessCompositionIME(); /*0x6238db*/
    v49 = dword_B73564; /*0x6238eb*/
    v52 = dword_B7356C; /*0x6238ef*/
    v12 = dword_B73564; /*0x6238f3*/
  }
  Destination[0] = 0; /*0x623900*/
  wcsncpy(Destination, v11, 0x800u); /*0x623907*/
  if ( v12 ) /*0x623911*/
  {
    wcsncpy(&Destination[v15], WideCharStr, 2048 - v15); /*0x623925*/
    wcsncpy(&Destination[v12 + v15], &v11[v15], 2048 - v12 - v15); /*0x623940*/
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
    v56 = v15 + MaxCount; /*0x6239a4*/
    v19 = v15 + MaxCount; /*0x6239a8*/
  }
  else
  {
    v19 = v15; /*0x623994*/
    v56 = v15; /*0x623996*/
  }
  if ( v19 < *a7 + 5 ) /*0x6239b8*/
  {
    if ( v19 < 5 ) /*0x6239bd*/
      *a7 = 0; /*0x6239c6*/
    else
      *a7 = v19 - 5; /*0x6239c2*/
  }
  if ( *a7 < v16 ) /*0x6239ce*/
  {
    do /*0x623a03*/
    {
      v20 = *a7; /*0x6239d0*/
      if ( MessageListClass::CountCharsInWidth(&Destination[*a7], a2[2] - 5, 0, 0) >= v56 - v20 ) /*0x6239f8*/
        break; /*0x6239f8*/
      v21 = v20 + 1; /*0x6239fe*/
      *a7 = v21; /*0x623a01*/
    }
    while ( v21 < v50 ); /*0x623a03*/
    v16 = v50; /*0x623a05*/
  }
  v22 = v15 - *a7; /*0x623a0d*/
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
  v27 = &Destination[*a7]; /*0x623a5d*/
  if ( a10 ) /*0x623a6a*/
  {
    v28 = a2[3] + 2; /*0x623a79*/
    v29 = Text::MeasureWidth((int)v27, 0); /*0x623a7c*/
    v30 = *a2 - 1; /*0x623a89*/
    v31 = a2[1] - 1; /*0x623a8a*/
    v58[2] = v29 + 5; /*0x623a8b*/
    v58[1] = v31; /*0x623a8f*/
    v58[0] = v30; /*0x623a97*/
    v32 = *v57; /*0x623a9f*/
    v58[3] = v28; /*0x623aa4*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(v32 + 20))(v57, v58, 0); /*0x623aa8*/
    v24 = v49; /*0x623aab*/
  }
  if ( v51 ) /*0x623ab5*/
  {
    v33 = v57; /*0x623abe*/
    v34 = DrawTextRendererTextAligned(a6, a5, a2, v27, v51, 0, 0, (int)v57, a11); /*0x623ad9*/
    v35 = a2[2] - v34; /*0x623ae5*/
    *a2 += v34; /*0x623ae7*/
    a2[2] = v35; /*0x623ae9*/
    if ( v35 < 0 ) /*0x623aec*/
      a2[2] = 0; /*0x623aee*/
    v24 = v49; /*0x623af9*/
    v27 += v51; /*0x623afd*/
  }
  else
  {
    v33 = v57; /*0x623b02*/
  }
  if ( v24 ) /*0x623b08*/
  {
    v36 = v51 + *a7; /*0x623b14*/
    v37 = v56 - v36; /*0x623b1a*/
    if ( v56 - v36 < 0 || v37 > v24 ) /*0x623b20*/
    {
      v38 = -1; /*0x623b2e*/
    }
    else
    {
      v38 = v24 - v37; /*0x623b24*/
      v24 = v56 - v36; /*0x623b26*/
      v49 = v56 - v36; /*0x623b28*/
    }
    if ( v24 > 0 ) /*0x623b33*/
    {
      v39 = DrawTextRendererTextAligned(dword_AC4618, a5, a2, v27, v24, 0, 0, (int)v33, a11); /*0x623b52*/
      v40 = a2[2] - v39; /*0x623b5e*/
      *a2 += v39; /*0x623b60*/
      a2[2] = v40; /*0x623b62*/
      if ( v40 < 0 ) /*0x623b65*/
        a2[2] = 0; /*0x623b67*/
      v27 += v49; /*0x623b72*/
    }
    if ( v38 >= 0 ) /*0x623b77*/
    {
      v54 = *a2; /*0x623b7b*/
      if ( v38 ) /*0x623b7f*/
      {
        v41 = DrawTextRendererTextAligned(dword_AC4618, a5, a2, v27, v38, 0, 0, (int)v33, a11); /*0x623b9e*/
        v42 = a2[2] - v41; /*0x623baa*/
        *a2 += v41; /*0x623bac*/
        a2[2] = v42; /*0x623bae*/
        if ( v42 < 0 ) /*0x623bb1*/
          a2[2] = 0; /*0x623bb3*/
        v27 += v38; /*0x623bba*/
      }
    }
  }
  else
  {
    v54 = *a2; /*0x623bc1*/
  }
  if ( v52 ) /*0x623bcb*/
  {
    v43 = DrawTextRendererTextAligned(a6, a5, a2, v27, v52, 0, 0, (int)v33, a11); /*0x623beb*/
    v44 = a2[2] - v43; /*0x623bf7*/
    *a2 += v43; /*0x623bf9*/
    a2[2] = v44; /*0x623bfb*/
    if ( v44 < 0 ) /*0x623bfe*/
      a2[2] = 0; /*0x623c00*/
  }
  result = 0; /*0x623c0e*/
  if ( !a8 || (v46 = v54, v54 <= 0) || dword_AC48C8 ) /*0x623c2a*/
  {
    dword_AC48C8 = 0; /*0x623cb7*/
  }
  else
  {
    v47 = a2[3]; /*0x623c33*/
    v53 = a2[1]; /*0x623c36*/
    v55 = v53 + v47 - 2; /*0x623c4d*/
    v52 = v54; /*0x623c5c*/
    DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c60*/
    v48 = a2[3]; /*0x623c68*/
    v53 = a2[1]; /*0x623c6e*/
    v54 = v46 + 1; /*0x623c72*/
    v52 = v46 + 1; /*0x623c76*/
    v55 = v53 + v48 - 2; /*0x623c8d*/
    result = DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c98*/
    dword_AC48C8 = 0; /*0x623c9d*/
  }
  return result; /*0x623ca7*/
}



// ==== 0x00623CD0  CD::CreateDialog  this=CD  sig=csp ====
int __thiscall CD::CreateDialog(CD *this)
{
  HWND Dialog; // eax
  Dialog *v3; // esi
  HWND DlgItem; // eax
  ObjectClass *v6; // [esp+0h] [ebp-Ch]
  LONG dwNewLong; // [esp+8h] [ebp-4h] BYREF

  dwNewLong = -1; /*0x623ce1*/
  Dialog = (HWND)CreateDialog(0x10Du, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_623DA0, 0); /*0x623ce9*/
  v3 = (Dialog *)Dialog; /*0x623cee*/
  if ( Dialog ) /*0x623cf2*/
  {
    DlgItem = GetDlgItem(Dialog, 1456); /*0x623cfe*/
    SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)this); /*0x623d0d*/
    SetWindowLongA((HWND)v3, 8, (LONG)&dwNewLong); /*0x623d1b*/
    ShowWindow((HWND)v3, 1); /*0x623d24*/
    SetForegroundWindow((HWND)v3); /*0x623d2b*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x623d37*/
    if ( dwNewLong < 0 ) /*0x623d42*/
    {
      do /*0x623d81*/
        MessageLoop(); /*0x623d44*/
      while ( (!*(_DWORD *)&dword_A8B238 /*0x623d81*/
            || *(_DWORD *)&dword_A8B238 == 5
            || BYTE2(stru_A8D600.Network_field_0xC)
            || dword_A8DAB4
            || VtableStub::55CBF0()
            || !(unsigned __int8)GameFrameLoop(v6))
           && dwNewLong < 0 );
    }
    Dialog::Destroy(v3); /*0x623d85*/
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
int __thiscall Memory_Pop(ObjectClass *this)
{
  LRESULT v2; // eax
  WPARAM v3; // esi

  v2 = SendMessageA((HWND)this, 0x18Bu, 0, 0); /*0x623e15*/
  v3 = v2 - 1; /*0x623e19*/
  if ( v2 ) /*0x623e1c*/
  {
    do /*0x623e2e*/
      SendMessageA((HWND)this, 0x182u, v3, 0); /*0x623e27*/
    while ( v3-- ); /*0x623e2e*/
  }
  return 0; /*0x623e30*/
}



// ==== 0x00623E40  GetDialogText  this=-  sig=csp ====
LRESULT __fastcall GetDialogText(HWND hWnd, String *a2)
{
  LRESULT v4; // edi
  char *v6; // esi
  LRESULT v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623e54*/
  if ( v4 > 0 ) /*0x623e58*/
  {
    v6 = (char *)__2_YAPAXI_Z(v4 + 2); /*0x623e74*/
    v7 = SendMessageA(hWnd, 0x4B5u, v4 + 1, (LPARAM)v6); /*0x623e87*/
    String::Assign_Alt(a2, v6); /*0x623e8a*/
    __3_YAXPAX_Z(v6); /*0x623e90*/
    return v7; /*0x623e98*/
  }
  else
  {
    DeleteAndZero::Alt2((DeleteAndZero *)a2); /*0x623e5c*/
    return 0; /*0x623e61*/
  }
}



// ==== 0x00623EA0  GetEditControlText  this=-  sig=csp ====
LRESULT __fastcall GetEditControlText(HWND hWnd, WideString *a2)
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
    SafeDelete::Ptr((SafeDelete *)a2); /*0x623ebc*/
    return 0; /*0x623ec1*/
  }
}



// ==== 0x00623F00  GetListBoxItemText  this=ObjectClass  sig=csp ====
int __fastcall GetListBoxItemText(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x18Au, wParam, 0); /*0x623f19*/
  if ( v5 <= 0 ) /*0x623f1d*/
    DeleteAndZero::Alt2(a3); /*0x623f23*/
  v6 = (char *)__2_YAPAXI_Z(v5 + 2); /*0x623f34*/
  v7 = SendMessageA(hWnd, 0x4B7u, wParam, (LPARAM)v6); /*0x623f40*/
  String::Assign_Alt(a3, v6); /*0x623f47*/
  __3_YAXPAX_Z(v6); /*0x623f4d*/
  return v7; /*0x623f57*/
}



// ==== 0x00623F60  UI_Assign_623F60  this=CampaignScore  sig=csp ====
LRESULT __fastcall sub_623F60(HWND hWnd, WPARAM wParam, void **a3)
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
LRESULT __fastcall sub_623FC0(HWND hWnd, WPARAM wParam, void **a3)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(hWnd, 0x149u, wParam, 0); /*0x623fd9*/
  if ( v5 <= 0 ) /*0x623fdd*/
    DeleteAndZero::Alt2(a3); /*0x623fe3*/
  v6 = (char *)__2_YAPAXI_Z(v5 + 2); /*0x623ff4*/
  v7 = SendMessageA(hWnd, 0x4BDu, wParam, (LPARAM)v6); /*0x624000*/
  String::Assign_Alt(a3, v6); /*0x624007*/
  __3_YAXPAX_Z(v6); /*0x62400d*/
  return v7; /*0x624017*/
}



// ==== 0x00624020  MainLobbyDlgProcWOL_Assign  this=-  sig=csp ====
LRESULT __fastcall sub_624020(HWND hWnd, WPARAM wParam, void **a3)
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
_DWORD *__thiscall sub_624080(ObjectClass *this)
{
  this->AbstractClass = &OwnerDraw::DialogControl::`vftable'; /*0x624082*/
  return &this->AbstractClass; /*0x624088*/
}



// ==== 0x00624090  DialogControl@OwnerDraw::method  this=DialogControl@OwnerDraw  sig=csp ====
void __thiscall sub_624090(_DWORD *this)
{
  *this = &OwnerDraw::DialogControl::`vftable'; /*0x624090*/
}



// ==== 0x00624110  SimpleDialogControl::Constructor  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall SimpleDialogControl::Constructor(SimpleDialogControl *this)
{
  *((_DWORD *)this + 1) = 0; /*0x624114*/
  *((_BYTE *)this + 8) = 0; /*0x624117*/
  *this = (SimpleDialogControl)&OwnerDraw::SimpleDialogControl::`vftable'; /*0x62411a*/
  return this; /*0x624120*/
}



// ==== 0x00624130  OwnerDrawControl::InitVtable  this=DialogControl@OwnerDraw  sig=csp ====
int __thiscall OwnerDrawControl::InitVtable(OwnerDrawControl *this)
{
  int result; // eax

  *this = (OwnerDrawControl)&OwnerDraw::DialogControl::`vftable'; /*0x624130*/
  return result; /*0x624136*/
}



// ==== 0x00624140  FactionSelectDialogControl_WorldDominationTour::FindAndMark  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall HashTable::FindAndMark(FactionSelectDialogControl_WorldDominationTour *this, int a2, int a3)
{
  int result; // eax

  this->m_4 = a3; /*0x62414c*/
  result = *(_DWORD *)&g_DialogPool.__pad_208[60]; /*0x62414f*/
  a3 = a2; /*0x624156*/
  if ( *(_DWORD *)&g_DialogPool.__pad_208[60] ) /*0x62415a*/
  {
    result = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56] /*0x62417d*/
                       + 4
                       * ((*(int (__thiscall **)(int *))&g_DialogPool.__pad_208[80])(&a3)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)));
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
      LOBYTE(this->m_8) = 1; /*0x6241af*/
    }
    else
    {
LABEL_5:
      LOBYTE(this->m_8) = 1; /*0x624196*/
    }
  }
  else
  {
    LOBYTE(this->m_8) = 1; /*0x6241b7*/
  }
  return result; /*0x624199*/
}



// ==== 0x006241C0  SimpleDialogControl@OwnerDraw::Release  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall ObjectClass::Release(_BYTE *this)
{
  int result; // eax

  LOBYTE(result) = *(this + 8); /*0x6241c0*/
  return result; /*0x6241c3*/
}



// ==== 0x006241D0  SimpleDialogControl@OwnerDraw::GetMember01  this=SimpleDialogControl@OwnerDraw  sig=csp ====
int __thiscall ObjectClass_GetMember01(_DWORD *this)
{
  return *(this + 1); /*0x6241d3*/
}



// ==== 0x006241E0  SimpleDialogControl_OwnerDraw::StubReturnFalse  this=SimpleDialogControl@OwnerDraw  sig=csp ====
char __thiscall StreamWrapper::StubReturnFalse(SimpleDialogControl_OwnerDraw *this)
{
  return 0; /*0x6241e2*/
}



// ==== 0x006241F0  RunDialog  this=-  sig=csp ====
int __fastcall RunDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3)
{
  HWND Dialog; // eax
  Dialog *v4; // edi
  TechnoTypeClass *v6; // ecx
  ObjectClass *v7; // [esp+0h] [ebp-8h]

  Dialog = (HWND)CreateDialog(a1, a2, a3); /*0x6241f7*/
  v4 = (Dialog *)Dialog; /*0x6241fc*/
  if ( Dialog ) /*0x624200*/
  {
    ShowWindow(Dialog, 1); /*0x624215*/
    SetForegroundWindow((HWND)v4); /*0x62421c*/
    Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x624228*/
    if ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x624231*/
    {
      while ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 16))(a3) ) /*0x624241*/
      {
        MessageLoop(); /*0x624243*/
        if ( !*(_DWORD *)&dword_A8B238 /*0x624266*/
          || *(_DWORD *)&dword_A8B238 == 5
          || BYTE2(stru_A8D600.Network_field_0xC)
          || dword_A8DAB4 )
        {
          Event::Dispatch(); /*0x62427c*/
        }
        else if ( !VtableStub::55CBF0() && (unsigned __int8)GameFrameLoop(v7) ) /*0x624271*/
        {
          break; /*0x624278*/
        }
        LOBYTE(v6) = 0; /*0x624281*/
        ScreenSaver::Process(v6, v7); /*0x624283*/
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
char __thiscall sub_6242B0(ObjectClass *this)
{
  int v2; // eax
  HWND v3; // edi
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = (HWND)this; /*0x6242c4*/
  GetClassNameA((HWND)this, ClassName, 128); /*0x6242c8*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x6242df*/
    return 1; /*0x62430a*/
  if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x624325*/
    return 1; /*0x624350*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x6243c1*/
    && *(_DWORD *)&g_DialogPool.__pad_208[60]
    && (v2 = *(_DWORD *)(*(_DWORD *)&g_DialogPool.__pad_208[56]
                       + 4
                       * ((*(int (__thiscall **)(HWND *))&g_DialogPool.__pad_208[80])(&hWnd)
                        & ((1 << g_DialogPool.__pad_208[68]) - 1)))) != 0 )
  {
    v3 = hWnd; /*0x6243c3*/
    while ( *(HWND *)v2 != hWnd ) /*0x6243c9*/
    {
      v2 = *(_DWORD *)(v2 + 516); /*0x6243cb*/
      if ( !v2 ) /*0x6243d3*/
        return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x6243d3*/
    }
    return *(_DWORD *)(v2 + 108) == 1; /*0x6243e8*/
  }
  else
  {
    v3 = hWnd; /*0x6243f2*/
    return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x624445*/
  }
}



// ==== 0x00624460  Options::ClearComboBoxes  this=Options  sig=csp ====
void __thiscall Options::ClearComboBoxes(Options *this)
{
  DeleteAndZero::Alt((DeleteAndZero *)&this->field_8); /*0x624466*/
  DeleteAndZero::Alt((DeleteAndZero *)&this->field_4); /*0x62446e*/
}



// ==== 0x00624480  DeleteAndZero::OrFree  this=DeleteAndZero  sig=csp ====
void **__thiscall DeleteAndZero::OrFree(DeleteAndZero *this, char a2)
{
  DeleteAndZero::Alt(this); /*0x624483*/
  if ( (a2 & 1) != 0 ) /*0x62448d*/
    __3_YAXPAX_Z(this); /*0x624490*/
  return (void **)this; /*0x62449a*/
}



// ==== 0x006244A0  DialogControl_OwnerDraw::Destructor  this=DialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor(
        DialogControl_OwnerDraw *this,
        char a2)
{
  *(_DWORD *)this = &OwnerDraw::DialogControl::`vftable'; /*0x6244a9*/
  if ( (a2 & 1) != 0 ) /*0x6244af*/
    __3_YAXPAX_Z(this); /*0x6244b2*/
  return this; /*0x6244bc*/
}



// ==== 0x006244C0  SimpleDialogControl_OwnerDraw::Destructor_0  this=SimpleDialogControl@OwnerDraw  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_0(
        SimpleDialogControl_OwnerDraw *this,
        char a2)
{
  *(_DWORD *)this = &OwnerDraw::DialogControl::`vftable'; /*0x6244c9*/
  if ( (a2 & 1) != 0 ) /*0x6244cf*/
    __3_YAXPAX_Z(this); /*0x6244d2*/
  return this; /*0x6244dc*/
}



// ==== 0x006244E0  Options::DeleteAndZero  this=Options  sig=csp ====
int __thiscall Options::DeleteAndZero(Options *this)
{
  int v2; // ebx
  int v3; // ebp
  char *v4; // esi
  int result; // eax

  v2 = 0; /*0x6244e4*/
  if ( *(int *)this->__pad_0 <= 0 ) /*0x6244e9*/
  {
    *(_DWORD *)this->__pad_0 = 0; /*0x62451b*/
  }
  else
  {
    v3 = 0; /*0x6244ed*/
    do /*0x62450e*/
    {
      v4 = (char *)this->field_8 + v3; /*0x6244f4*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 8)); /*0x6244f9*/
      DeleteAndZero::Alt((DeleteAndZero *)(v4 + 4)); /*0x624501*/
      result = *(_DWORD *)this->__pad_0; /*0x624506*/
      ++v2; /*0x624508*/
      v3 += 24; /*0x624509*/
    }
    while ( v2 < *(_DWORD *)this->__pad_0 ); /*0x62450e*/
    *(_DWORD *)this->__pad_0 = 0; /*0x624511*/
  }
  return result; /*0x624518*/
}



// ==== 0x00624530  SymbolTable::Insert  this=SymbolTable  sig=csp ====
char __thiscall SymbolTable::Insert(SymbolTable *this, _DWORD *a2, int ***Block)
{
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  SymbolTable *v8; // ebp
  void *v9; // edx
  const wchar_t *v10; // esi
  int v11; // eax
  wchar_t *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  double v16; // st7
  int v17; // ecx
  void *v18; // edi
  unsigned int v19; // edx
  int ***v20; // edi
  int v21; // ebp
  int **v22; // esi
  int v23; // edx
  int *v24; // ecx
  int **v25; // eax
  _DWORD *v27; // [esp+10h] [ebp-10h]
  int v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+18h] [ebp-8h]
  int ***Blocka; // [esp+28h] [ebp+8h]

  v4 = (_DWORD *)__2_YAPAXI_Z(0x208u); /*0x624543*/
  if ( v4 ) /*0x62454a*/
  {
    memset(v4 + 1, 0, 0x200u); /*0x624558*/
    v4[27] = 11; /*0x62455a*/
    v4[26] = g_FogOfWarState; /*0x624568*/
    v5 = (_DWORD *)__2_YAPAXI_Z(4u); /*0x62456b*/
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
  v8 = (SymbolTable *)(v7 + 1); /*0x6245b3*/
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
      *(_DWORD *)v8[5].__pad_0 = 0; /*0x6245fd*/
    }
    if ( v10 && *v10 ) /*0x624608*/
    {
      v11 = wcslen(v10); /*0x62460f*/
      v12 = (wchar_t *)__2_YAPAXI_Z(2 * v11 + 2); /*0x624619*/
      *(_DWORD *)v8[5].__pad_0 = v12; /*0x624620*/
      wcscpy(v12, v10); /*0x624623*/
    }
    SymbolTable::Rebuild(v8, Block[13]); /*0x624635*/
    v7 = v27; /*0x62463a*/
  }
  v7[129] = 0; /*0x624642*/
  v13 = (*((int (__thiscall **)(_DWORD *))this + 6))(a2) & ((1 << *((_DWORD *)this + 3)) - 1); /*0x62465c*/
  v14 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v13); /*0x62465e*/
  *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v13) = v27; /*0x62466c*/
  if ( v14 ) /*0x624666*/
    v27[129] = v14; /*0x624676*/
  v15 = *((_DWORD *)this + 2); /*0x62467f*/
  v16 = (double)(unsigned int)++this->SymbolTable_field_0x04; /*0x62468d*/
  if ( v16 / (double)v15 >= *((double *)this + 5) && *((_BYTE *)this + 20) != 1 ) /*0x6246b2*/
  {
    Blocka = *(int ****)this->__pad_0; /*0x6246bd*/
    v17 = *((_DWORD *)this + 3) + 1; /*0x6246cb*/
    *((_DWORD *)this + 2) = 2 * v15; /*0x6246cd*/
    *((_DWORD *)this + 3) = v17; /*0x6246d0*/
    v18 = (void *)__2_YAPAXI_Z(8 * v15); /*0x6246db*/
    v19 = 4 * *((_DWORD *)this + 2); /*0x6246e0*/
    *(_DWORD *)this->__pad_0 = v18; /*0x6246e7*/
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
            v23 = (*((int (__thiscall **)(int **))this + 6))(v22) & ((1 << *((_DWORD *)this + 3)) - 1); /*0x624715*/
            v24 = *(int **)(*(_DWORD *)this->__pad_0 + 4 * v23); /*0x624719*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v23) = v22; /*0x62471f*/
            v25 = (int **)v22[129]; /*0x624721*/
            v22[129] = v24; /*0x624727*/
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
int __thiscall HashTable::Get(HashTable *this, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = this->HashTable_field_0x04; /*0x624764*/
  if ( result ) /*0x624769*/
  {
    result = *(_DWORD *)(*(_DWORD *)this->__pad_0 /*0x62478a*/
                       + 4
                       * (((int (__thiscall *)(_DWORD *))this->HashTable_field_0x18)(a2)
                        & ((1 << this->HashTable_field_0x0C) - 1)));
    if ( result ) /*0x62478f*/
    {
      while ( *(_DWORD *)result != *a2 ) /*0x62479c*/
      {
        result = *(_DWORD *)(result + 516); /*0x62479e*/
        if ( !result ) /*0x6247a6*/
        {
          LOBYTE(result) = 0; /*0x6247a9*/
          return result; /*0x6247ac*/
        }
      }
      result += 4; /*0x6247be*/
      *a3 = result; /*0x6247c3*/
      LOBYTE(result) = 1; /*0x6247c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x624792*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x62476c*/
  }
  return result; /*0x62476b*/
}



// ==== 0x006247D0  Struct::WideStringCopy  this=Struct  sig=csp ====
wchar_t **__thiscall Struct::WideStringCopy(Struct *this, int a2)
{
  this->Struct_field_00 = *(int *)a2; /*0x6247e1*/
  WideString::AssignFromPtr((wchar_t **)this + 1, (const wchar_t **)(a2 + 4)); /*0x6247e3*/
  WideString::AssignFromPtr((wchar_t **)this + 2, (const wchar_t **)(a2 + 8)); /*0x6247ef*/
  *(this + 3) = *(Struct *)(a2 + 12); /*0x6247f7*/
  *(this + 4) = *(Struct *)(a2 + 16); /*0x6247fd*/
  *(this + 5) = *(Struct *)(a2 + 20); /*0x624803*/
  return (wchar_t **)this; /*0x624808*/
}



// ==== 0x00624810  DynamicVector::GrowCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVector::GrowCapacity(DynamicVector *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  const void *DynamicVector_field_0x8; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x624814*/
  if ( *(_DWORD *)this->__pad_0 < *(_DWORD *)&this->DynamicVector_field_0x1[3] ) /*0x62481b*/
    return 0; /*0x62481d*/
  v4 = 2 * v2; /*0x624823*/
  if ( 2 * v2 < 10 ) /*0x62482b*/
    v4 = 10; /*0x62482d*/
  v5 = (void *)__2_YAPAXI_Z(24 * v4); /*0x62483f*/
  memset(v5, 0, 4 * ((unsigned int)(24 * v4) >> 2)); /*0x62484a*/
  v7 = (int)v5; /*0x624854*/
  DynamicVector_field_0x8 = (const void *)this->DynamicVector_field_0x8; /*0x62485a*/
  if ( DynamicVector_field_0x8 ) /*0x62485f*/
    qmemcpy(v5, DynamicVector_field_0x8, 24 * *(_DWORD *)this->__pad_0); /*0x624870*/
  __3_YAXPAX_Z((void *)this->DynamicVector_field_0x8); /*0x62487d*/
  *(_DWORD *)&this->DynamicVector_field_0x1[3] = v4; /*0x624889*/
  this->DynamicVector_field_0x8 = v7; /*0x62488c*/
  return 1; /*0x62481f*/
}



// ==== 0x006248A0  Options::EnsureCapacity  this=Options  sig=csp ====
char __thiscall Options::EnsureCapacity(Options *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6248a5*/
  v3 = (int)this->field_4; /*0x6248a8*/
  if ( 3 * v2 > v3 ) /*0x6248b0*/
    return 0; /*0x6248b3*/
  v5 = v3 / 2; /*0x6248bf*/
  if ( v3 / 2 < 10 ) /*0x6248c4*/
    v5 = 10; /*0x6248c6*/
  if ( v5 >= v3 ) /*0x6248cd*/
    return 0; /*0x6248d0*/
  v6 = (void *)__2_YAPAXI_Z(24 * v5); /*0x6248dd*/
  v7 = this->field_8; /*0x6248e2*/
  v8 = v6; /*0x6248ea*/
  if ( v7 ) /*0x6248ee*/
    qmemcpy(v6, v7, 24 * *(_DWORD *)this->__pad_0); /*0x624901*/
  __3_YAXPAX_Z(this->field_8); /*0x62490f*/
  this->field_8 = v8; /*0x62491b*/
  this->field_4 = (void *)v5; /*0x62491e*/
  return 1; /*0x6248b2*/
}



// ==== 0x00624930  Dialog::UpdateControlState  this=Dialog  sig=csp ====
char __thiscall Dialog::UpdateControlState(Dialog *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // eax

  if ( !*(_DWORD *)&this->__pad_0[4] ) /*0x624934*/
    return 0; /*0x62493c*/
  v4 = *(_DWORD **)(*(_DWORD *)this->__pad_0 /*0x62495a*/
                  + 4
                  * ((*(int (__thiscall **)(_DWORD *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1)));
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
char __thiscall DynamicArray::Resize(DynamicArray *this, int *a2, _DWORD *a3)
{
  int DynamicArray_field_0x04; // eax
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // ebp
  int v9; // ebp
  bool v10; // c0
  bool v11; // c3
  unsigned int DynamicArray_field_0x08; // ebp
  int DynamicArray_field_0x0C; // edi
  int *v14; // ebx
  void *v15; // edi
  unsigned int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // ebp
  int v23; // edi
  int *v24; // ebx
  void *v25; // edi
  unsigned int v26; // edx
  int v27; // edi
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  _DWORD *v31; // [esp-4h] [ebp-1Ch]
  float v32; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int *v34; // [esp+20h] [ebp+8h]
  int *v35; // [esp+20h] [ebp+8h]

  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x6249ab*/
  if ( !DynamicArray_field_0x04 ) /*0x6249b0*/
    return 0; /*0x6249b5*/
  v32 = (double)(unsigned int)(DynamicArray_field_0x04 - 1) / (double)this->DynamicArray_field_0x08; /*0x6249e0*/
  v6 = (*((int (__thiscall **)(int *))this + 6))(a2) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x6249f4*/
  v7 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x6249f6*/
  if ( !v7 ) /*0x6249fb*/
    return 0; /*0x624a00*/
  v8 = *a2; /*0x624a09*/
  if ( *v7 == *a2 ) /*0x624a10*/
  {
    *a3 = v7[1]; /*0x624a1d*/
    v31 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624a24*/
    v9 = v31[2]; /*0x624a25*/
    __3_YAXPAX_Z(v31); /*0x624a28*/
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6) = v9; /*0x624a36*/
    v10 = v32 < *((double *)this + 4); /*0x624a3c*/
    v11 = v32 == *((double *)this + 4); /*0x624a3c*/
    --this->DynamicArray_field_0x04; /*0x624a40*/
    if ( v10 || v11 ) /*0x624a45*/
    {
      DynamicArray_field_0x08 = this->DynamicArray_field_0x08; /*0x624a4e*/
      if ( DynamicArray_field_0x08 > this->q00C && *((_BYTE *)this + 20) != 1 ) /*0x624a60*/
      {
        DynamicArray_field_0x0C = this->DynamicArray_field_0x0C; /*0x624a62*/
        v14 = *(int **)this->__pad_0; /*0x624a65*/
        v34 = *(int **)this->__pad_0; /*0x624a69*/
        this->DynamicArray_field_0x08 = DynamicArray_field_0x08 >> 1; /*0x624a6f*/
        this->DynamicArray_field_0x0C = DynamicArray_field_0x0C - 1; /*0x624a77*/
        v15 = (void *)__2_YAPAXI_Z(4 * (DynamicArray_field_0x08 >> 1)); /*0x624a82*/
        v16 = 4 * this->DynamicArray_field_0x08; /*0x624a87*/
        *(_DWORD *)this->__pad_0 = v15; /*0x624a8e*/
        memset(v15, 0, v16); /*0x624a93*/
        if ( (int)DynamicArray_field_0x08 > 0 ) /*0x624a9e*/
        {
          do /*0x624ad2*/
          {
            v17 = *v14; /*0x624aa0*/
            if ( *v14 ) /*0x624aa0*/
            {
              do /*0x624acc*/
              {
                v18 = (*((int (__thiscall **)(int))this + 6))(v17) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ab6*/
                v19 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v18); /*0x624aba*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v18) = v17; /*0x624ac0*/
                v20 = *(_DWORD *)(v17 + 8); /*0x624ac2*/
                *(_DWORD *)(v17 + 8) = v19; /*0x624ac5*/
                v17 = v20; /*0x624ac8*/
              }
              while ( v20 ); /*0x624acc*/
            }
            ++v14; /*0x624ace*/
            --DynamicArray_field_0x08; /*0x624ad1*/
          }
          while ( DynamicArray_field_0x08 ); /*0x624ad2*/
          v14 = v34; /*0x624ad4*/
        }
        __3_YAXPAX_Z(v14); /*0x624ad9*/
      }
    }
    return 1; /*0x624ae4*/
  }
  else
  {
    v21 = (_DWORD *)v7[2]; /*0x624aed*/
    v33 = 0; /*0x624af0*/
    if ( v21 ) /*0x624af7*/
    {
      while ( *v21 != v8 ) /*0x624afb*/
      {
        v7 = v21; /*0x624afd*/
        v21 = (_DWORD *)v21[2]; /*0x624aff*/
        if ( !v21 ) /*0x624b04*/
          goto LABEL_21; /*0x624b04*/
      }
      *a3 = v21[1]; /*0x624b10*/
      v7[2] = v21[2]; /*0x624b15*/
      --this->DynamicArray_field_0x04; /*0x624b1c*/
      __3_YAXPAX_Z(v21); /*0x624b1f*/
      v33 = 1; /*0x624b27*/
    }
LABEL_21:
    if ( v32 <= *((double *)this + 4) ) /*0x624b38*/
    {
      v22 = this->DynamicArray_field_0x08; /*0x624b3e*/
      if ( v22 > this->q00C && *((_BYTE *)this + 20) != 1 ) /*0x624b50*/
      {
        v23 = this->DynamicArray_field_0x0C; /*0x624b52*/
        v24 = *(int **)this->__pad_0; /*0x624b55*/
        v35 = *(int **)this->__pad_0; /*0x624b59*/
        this->DynamicArray_field_0x08 = v22 >> 1; /*0x624b5f*/
        this->DynamicArray_field_0x0C = v23 - 1; /*0x624b67*/
        v25 = (void *)__2_YAPAXI_Z(4 * (v22 >> 1)); /*0x624b72*/
        v26 = 4 * this->DynamicArray_field_0x08; /*0x624b77*/
        *(_DWORD *)this->__pad_0 = v25; /*0x624b7e*/
        memset(v25, 0, v26); /*0x624b83*/
        if ( (int)v22 > 0 ) /*0x624b8e*/
        {
          do /*0x624bc2*/
          {
            v27 = *v24; /*0x624b90*/
            if ( *v24 ) /*0x624b90*/
            {
              do /*0x624bbc*/
              {
                v28 = (*((int (__thiscall **)(int))this + 6))(v27) & ((1 << this->DynamicArray_field_0x0C) - 1); /*0x624ba6*/
                v29 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v28); /*0x624baa*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v28) = v27; /*0x624bb0*/
                v30 = *(_DWORD *)(v27 + 8); /*0x624bb2*/
                *(_DWORD *)(v27 + 8) = v29; /*0x624bb5*/
                v27 = v30; /*0x624bb8*/
              }
              while ( v30 ); /*0x624bbc*/
            }
            ++v24; /*0x624bbe*/
            --v22; /*0x624bc1*/
          }
          while ( v22 ); /*0x624bc2*/
          v24 = v35; /*0x624bc4*/
        }
        __3_YAXPAX_Z(v24); /*0x624bc9*/
      }
    }
    return v33; /*0x624bd1*/
  }
}



// ==== 0x00624BE0  Dialog::GrowBuffer  this=Dialog  sig=csp ====
void __thiscall Dialog::GrowBuffer(Dialog *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  AnimClass *v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( this->__pad_10[4] != 1 ) /*0x624be8*/
  {
    v2 = this->Dialog_field_0x8[0]; /*0x624bf0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x624bf3*/
    v4 = (AnimClass *)((char *)&this->Dialog_field_0xC->AnimClass_field_0x0 + 1); /*0x624bfc*/
    this->Dialog_field_0x8[0] = 2 * v2; /*0x624bfd*/
    v13 = v3; /*0x624c00*/
    this->Dialog_field_0xC = v4; /*0x624c08*/
    v5 = (void *)__2_YAPAXI_Z(8 * v2); /*0x624c13*/
    v6 = 4 * this->Dialog_field_0x8[0]; /*0x624c18*/
    *(_DWORD *)this->__pad_0 = v5; /*0x624c1f*/
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
            v10 = (*(int (__thiscall **)(int))&this->__pad_10[8])(v9) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624c4b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x624c4f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x624c55*/
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
int __thiscall HashMap::ComputeIndex(int *this, int a2)
{
  return ((int (__thiscall *)(int))*(this + 6))(a2) & ((1 << this->q00C) - 1); /*0x624c94*/
}



// ==== 0x00624CA0  Dialog::BindGadgetData  this=Dialog  sig=csp ====
char __thiscall Dialog::BindGadgetData(Dialog *this, int *a2, char *Block)
{
  int v4; // eax
  int v6; // edx
  int *v7; // ecx
  int v8; // eax
  int ***v10; // eax
  bool v11; // zf
  const wchar_t *v12; // esi
  int v13; // eax
  wchar_t *v14; // eax
  int v15; // edi
  int v16; // ebx
  _DWORD *i; // eax
  DeleteAndZero *v18; // esi
  bool v19; // c0
  bool v20; // c3
  unsigned int v21; // esi
  char *v22; // ebx
  AnimClass *v23; // ecx
  void *v24; // edi
  unsigned int v25; // edx
  char *v26; // edi
  unsigned int v27; // ebx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int *v32; // esi
  char v33; // bl
  int v35; // edx
  int *v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+18h] [ebp-Ch]
  int v40; // [esp+1Ch] [ebp-8h]
  int v41; // [esp+1Ch] [ebp-8h]
  int *v42; // [esp+28h] [ebp+4h]
  int *v43; // [esp+28h] [ebp+4h]
  char *Blocka; // [esp+2Ch] [ebp+8h]
  char *Blockb; // [esp+2Ch] [ebp+8h]
  char *Blockc; // [esp+2Ch] [ebp+8h]

  v4 = *(_DWORD *)&this->__pad_0[4]; /*0x624cab*/
  if ( !v4 ) /*0x624cb0*/
    return 0; /*0x624cb5*/
  v39 = (double)(unsigned int)(v4 - 1) / (double)this->Dialog_field_0x8[0]; /*0x624ce0*/
  v6 = (*(int (__thiscall **)(int *))&this->__pad_10[8])(a2) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624cf5*/
  v38 = v6; /*0x624cf7*/
  v7 = *(int **)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624cfb*/
  v36 = v7; /*0x624d00*/
  if ( !v7 ) /*0x624d04*/
    return 0; /*0x624d09*/
  v8 = *a2; /*0x624d12*/
  if ( *v7 == *a2 ) /*0x624d18*/
  {
    v10 = (int ***)(v7 + 1); /*0x624d22*/
    v11 = Block == (char *)(v7 + 1); /*0x624d25*/
    v42 = v7 + 1; /*0x624d27*/
    v40 = *((_DWORD *)Block + 13); /*0x624d2e*/
    Blocka = (char *)*((_DWORD *)Block + 10); /*0x624d35*/
    v37 = *((_DWORD *)Block + 15); /*0x624d3c*/
    if ( !v11 ) /*0x624d40*/
    {
      qmemcpy(Block, v10, 0x200u); /*0x624d4f*/
      *((_DWORD *)Block + 15) = v37; /*0x624d55*/
      *((_DWORD *)Block + 10) = Blocka; /*0x624d5c*/
      *((_DWORD *)Block + 13) = v40; /*0x624d5f*/
      v12 = (const wchar_t *)v7[11]; /*0x624d62*/
      if ( Blocka ) /*0x624d67*/
      {
        __3_YAXPAX_Z(Blocka); /*0x624d6a*/
        v10 = (int ***)v42; /*0x624d6f*/
        *((_DWORD *)Block + 10) = 0; /*0x624d76*/
      }
      if ( v12 && *v12 ) /*0x624d81*/
      {
        v13 = wcslen(v12); /*0x624d88*/
        v14 = (wchar_t *)__2_YAPAXI_Z(2 * v13 + 2); /*0x624d92*/
        *((_DWORD *)Block + 10) = v14; /*0x624d99*/
        wcscpy(v14, v12); /*0x624d9c*/
        v10 = (int ***)v42; /*0x624da1*/
      }
      SymbolTable::Rebuild((SymbolTable *)Block, v10[13]); /*0x624dae*/
      v6 = v38; /*0x624db3*/
    }
    v15 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6); /*0x624dba*/
    v16 = *(_DWORD *)(v15 + 516); /*0x624dbf*/
    if ( v15 ) /*0x624dc5*/
    {
      GadgetClass::SetTooltip((GadgetClass *)(v15 + 4), 0); /*0x624dce*/
      for ( i = *(_DWORD **)(v15 + 56); i; i = *(_DWORD **)(v15 + 56) ) /*0x624dd8*/
        LinkedList::Remove((LinkedList *)(v15 + 4), i); /*0x624ddd*/
      v18 = *(DeleteAndZero **)(v15 + 64); /*0x624de9*/
      if ( v18 ) /*0x624dee*/
        DeleteAndZero::OrFree(v18, 1); /*0x624df4*/
      __3_YAXPAX_Z((void *)v15); /*0x624dfa*/
      v6 = v38; /*0x624dff*/
    }
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v6) = v16; /*0x624e0d*/
    v19 = v39 < *(double *)&this->__pad_10[16]; /*0x624e13*/
    v20 = v39 == *(double *)&this->__pad_10[16]; /*0x624e13*/
    --*(_DWORD *)&this->__pad_0[4]; /*0x624e17*/
    if ( v19 || v20 ) /*0x624e1c*/
    {
      v21 = this->Dialog_field_0x8[0]; /*0x624e25*/
      if ( v21 > *(_DWORD *)&this->__pad_2C[4] && this->__pad_10[4] != 1 ) /*0x624e37*/
      {
        v22 = *(char **)this->__pad_0; /*0x624e40*/
        Blockb = *(char **)this->__pad_0; /*0x624e45*/
        v23 = (AnimClass *)((char *)this->Dialog_field_0xC - 1); /*0x624e4b*/
        this->Dialog_field_0x8[0] = v21 >> 1; /*0x624e4c*/
        this->Dialog_field_0xC = v23; /*0x624e56*/
        v24 = (void *)__2_YAPAXI_Z(4 * (v21 >> 1)); /*0x624e62*/
        v25 = 4 * this->Dialog_field_0x8[0]; /*0x624e67*/
        *(_DWORD *)this->__pad_0 = v24; /*0x624e6e*/
        memset(v24, 0, v25); /*0x624e74*/
        if ( (int)v21 > 0 ) /*0x624e7f*/
        {
          v26 = v22; /*0x624e81*/
          v27 = v21; /*0x624e83*/
          do /*0x624ebe*/
          {
            v28 = *(_DWORD *)v26; /*0x624e85*/
            if ( *(_DWORD *)v26 ) /*0x624e85*/
            {
              do /*0x624eb8*/
              {
                v29 = (*(int (__thiscall **)(int))&this->__pad_10[8])(v28) & ((1 << (int)this->Dialog_field_0xC) - 1); /*0x624e9b*/
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x624ea0*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x624ea6*/
                v31 = *(_DWORD *)(v28 + 516); /*0x624ea8*/
                *(_DWORD *)(v28 + 516) = v30; /*0x624eae*/
                v28 = v31; /*0x624eb4*/
              }
              while ( v31 ); /*0x624eb8*/
            }
            v26 += 4; /*0x624eba*/
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
    v32 = (int *)v7[129]; /*0x624ed9*/
    v33 = 0; /*0x624edf*/
    v43 = v32; /*0x624ee3*/
    if ( v32 ) /*0x624ee7*/
    {
      while ( *v32 != v8 ) /*0x624ef9*/
      {
        v36 = v32; /*0x624efb*/
        v43 = (int *)v32[129]; /*0x624f07*/
        if ( !v43 ) /*0x624f0b*/
          goto LABEL_41; /*0x624f0b*/
        v7 = v32; /*0x624eef*/
        v32 = (int *)v32[129]; /*0x624ef3*/
      }
      v11 = Block == (char *)(v32 + 1); /*0x624f19*/
      v35 = *((_DWORD *)Block + 13); /*0x624f1e*/
      Blockc = (char *)*((_DWORD *)Block + 10); /*0x624f21*/
      v41 = *((_DWORD *)Block + 15); /*0x624f28*/
      if ( !v11 ) /*0x624f2c*/
      {
        qmemcpy(Block, v32 + 1, 0x200u); /*0x624f37*/
        *((_DWORD *)Block + 13) = v35; /*0x624f3d*/
        *((_DWORD *)Block + 10) = Blockc; /*0x624f40*/
        *((_DWORD *)Block + 15) = v41; /*0x624f47*/
        GadgetClass::SetTooltip((GadgetClass *)Block, (wchar_t *)v32[11]); /*0x624f50*/
        SymbolTable::Rebuild((SymbolTable *)Block, (int **)v43[14]); /*0x624f62*/
        v7 = v36; /*0x624f67*/
        v32 = v43; /*0x624f6b*/
      }
      v7[129] = v32[129]; /*0x624f75*/
      --*(_DWORD *)&this->__pad_0[4]; /*0x624f81*/
      if ( v32 ) /*0x624f84*/
      {
        Dialog::CleanupTree((Dialog *)(v32 + 1)); /*0x624f89*/
        __3_YAXPAX_Z(v32); /*0x624f8f*/
      }
      v33 = 1; /*0x624f97*/
    }
LABEL_41:
    if ( v39 <= *(double *)&this->__pad_10[16] ) /*0x624fa5*/
      HashTable::Rebuild2((HashTable *)this); /*0x624fa9*/
    return v33; /*0x624fb0*/
  }
}



// ==== 0x00624FC0  HashTable::Grow2  this=HashTable  sig=csp ====
void __thiscall HashTable::Grow2(HashTable *this)
{
  int HashTable_field_0x08; // esi
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

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x624fc8*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x624fd0*/
    v3 = *(_DWORD **)this->__pad_0; /*0x624fd3*/
    v4 = this->HashTable_field_0x0C + 1; /*0x624fdc*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x624fdd*/
    v13 = v3; /*0x624fe0*/
    this->HashTable_field_0x0C = v4; /*0x624fe8*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x624ff3*/
    v6 = 4 * this->HashTable_field_0x08; /*0x624ff8*/
    *(_DWORD *)this->__pad_0 = v5; /*0x624fff*/
    memset(v5, 0, v6); /*0x625004*/
    if ( HashTable_field_0x08 > 0 ) /*0x62500f*/
    {
      v7 = v3; /*0x625011*/
      v8 = HashTable_field_0x08; /*0x625013*/
      do /*0x62504d*/
      {
        v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
          do /*0x625047*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x62502b*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62502f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625035*/
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
int __thiscall HashTable::ComputeHash(int *this, int a2)
{
  return ((int (__thiscall *)(int))this->q018)(a2) & ((1 << this->q00C) - 1); /*0x625084*/
}



// ==== 0x00625090  HashTable::RemoveAndResize  this=HashTable  sig=csp ====
char __thiscall HashTable::RemoveAndResize(HashTable *this, _DWORD *a2, _BYTE *a3)
{
  int HashTable_field_0x04; // eax
  int v7; // edi
  _BYTE *v8; // ecx
  int v9; // edx
  int v10; // ebp
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int *v14; // ebx
  int v15; // ecx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _BYTE *v22; // eax
  unsigned int v23; // ebp
  int HashTable_field_0x0C; // edi
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

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x62509b*/
  if ( !HashTable_field_0x04 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  v33 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6250d0*/
  v7 = ((int (__thiscall *)(_DWORD *))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6250e4*/
  v8 = *(_BYTE **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  v9 = a2[1]; /*0x6250f9*/
  if ( v9 == *((_DWORD *)v8 + 1) && *a2 == *(_DWORD *)v8 ) /*0x62510e*/
  {
    *a3 = v8[8]; /*0x62511b*/
    v32 = *(_DWORD **)(*(_DWORD *)this->__pad_0 + 4 * v7); /*0x625122*/
    v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v7) = v10; /*0x625134*/
    v11 = v33 < *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    v12 = v33 == *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    --this->HashTable_field_0x04; /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x62514c*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x62515e*/
      {
        v14 = *(int **)this->__pad_0; /*0x625167*/
        v35 = *(int **)this->__pad_0; /*0x62516b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x625171*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x625172*/
        this->HashTable_field_0x0C = v15; /*0x62517c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x625188*/
        v17 = 4 * this->HashTable_field_0x08; /*0x62518d*/
        *(_DWORD *)this->__pad_0 = v16; /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
              do /*0x6251d2*/
              {
                v19 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v18) /*0x6251bc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19); /*0x6251c0*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v19) = v18; /*0x6251c6*/
                v21 = *(_DWORD *)(v18 + 12); /*0x6251c8*/
                *(_DWORD *)(v18 + 12) = v20; /*0x6251cb*/
                v18 = v21; /*0x6251ce*/
              }
              while ( v21 ); /*0x6251d2*/
            }
            ++v14; /*0x6251d4*/
            --HashTable_field_0x08; /*0x6251d7*/
          }
          while ( HashTable_field_0x08 ); /*0x6251d8*/
          v14 = v35; /*0x6251da*/
        }
        __3_YAXPAX_Z(v14); /*0x6251df*/
      }
    }
    return 1; /*0x6251ea*/
  }
  else
  {
    v22 = (_BYTE *)*((_DWORD *)v8 + 3); /*0x6251f3*/
    v34 = 0; /*0x6251f6*/
    if ( v22 ) /*0x6251fd*/
    {
      while ( v9 != *((_DWORD *)v22 + 1) || *a2 != *(_DWORD *)v22 ) /*0x62520b*/
      {
        v8 = v22; /*0x62520d*/
        v22 = (_BYTE *)*((_DWORD *)v22 + 3); /*0x62520f*/
        if ( !v22 ) /*0x625214*/
          goto LABEL_23; /*0x625214*/
      }
      *a3 = v22[8]; /*0x625220*/
      *((_DWORD *)v8 + 3) = *((_DWORD *)v22 + 3); /*0x625225*/
      --this->HashTable_field_0x04; /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= *(double *)&this->HashTable_field_0x20 ) /*0x625248*/
    {
      v23 = this->HashTable_field_0x08; /*0x62524e*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625260*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x625262*/
        v25 = *(int **)this->__pad_0; /*0x625265*/
        v36 = *(int **)this->__pad_0; /*0x625269*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x62526f*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x625277*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * this->HashTable_field_0x08; /*0x625287*/
        *(_DWORD *)this->__pad_0 = v26; /*0x62528e*/
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
                v29 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v28) /*0x6252b6*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29); /*0x6252ba*/
                *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v29) = v28; /*0x6252c0*/
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
void __thiscall ComboBoxOwnerDraw::SortItems(ComboBoxOwnerDraw *this)
{
  int ComboBoxOwnerDraw_field_0x08; // esi
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

  if ( LOBYTE(this->ComboBoxOwnerDraw_field_0x14) != 1 ) /*0x6252f8*/
  {
    ComboBoxOwnerDraw_field_0x08 = this->ComboBoxOwnerDraw_field_0x08; /*0x625300*/
    v3 = *(_DWORD **)this->__pad_0; /*0x625303*/
    v4 = this->ComboBoxOwnerDraw_field_0x0C + 1; /*0x62530c*/
    this->ComboBoxOwnerDraw_field_0x08 = 2 * ComboBoxOwnerDraw_field_0x08; /*0x62530d*/
    v13 = v3; /*0x625310*/
    this->ComboBoxOwnerDraw_field_0x0C = v4; /*0x625318*/
    v5 = (void *)__2_YAPAXI_Z(8 * ComboBoxOwnerDraw_field_0x08); /*0x625323*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625328*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62532f*/
    memset(v5, 0, v6); /*0x625334*/
    if ( ComboBoxOwnerDraw_field_0x08 > 0 ) /*0x62533f*/
    {
      v7 = v3; /*0x625341*/
      v8 = ComboBoxOwnerDraw_field_0x08; /*0x625343*/
      do /*0x625377*/
      {
        v9 = *v7; /*0x625345*/
        if ( *v7 ) /*0x625345*/
        {
          do /*0x625371*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) /*0x62535b*/
                & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62535f*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625365*/
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



// ==== 0x006253B0  Options::GrowBuffer  this=Dialog  sig=csp ====
char __thiscall Options::GrowBuffer(Options *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6253b4*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->field_4 ) /*0x6253bb*/
    return 0; /*0x6253bd*/
  v4 = 2 * v2; /*0x6253c4*/
  v6 = 2 * v2; /*0x6253cb*/
  if ( 2 * v2 < 10 ) /*0x6253cf*/
  {
    v6 = 10; /*0x6253d1*/
    v4 = 10; /*0x6253d9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6253ec*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6253fa*/
  if ( this->field_8 ) /*0x625403*/
  {
    qmemcpy(v5, this->field_8, 4 * *(_DWORD *)this->__pad_0); /*0x625418*/
    v4 = v6; /*0x625421*/
  }
  __3_YAXPAX_Z(this->field_8); /*0x625429*/
  this->field_4 = (void *)v4; /*0x625431*/
  this->field_8 = v5; /*0x625434*/
  return 1; /*0x6253bf*/
}



// ==== 0x00625440  DynamicArray::ShrinkCapacity  this=DynamicArray  sig=csp ====
char __thiscall DynamicArray::ShrinkCapacity(DynamicArray *this)
{
  int v2; // eax
  int DynamicArray_field_0x04; // ecx
  int v5; // ebx
  void *v6; // eax
  const void *DynamicArray_field_0x08; // esi
  int v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625445*/
  DynamicArray_field_0x04 = this->DynamicArray_field_0x04; /*0x625448*/
  if ( 3 * v2 > DynamicArray_field_0x04 ) /*0x625450*/
    return 0; /*0x625453*/
  v5 = DynamicArray_field_0x04 / 2; /*0x62545f*/
  if ( DynamicArray_field_0x04 / 2 < 10 ) /*0x625464*/
    v5 = 10; /*0x625466*/
  if ( v5 >= DynamicArray_field_0x04 ) /*0x62546d*/
    return 0; /*0x625470*/
  v6 = (void *)__2_YAPAXI_Z(4 * v5); /*0x62547e*/
  DynamicArray_field_0x08 = (const void *)this->DynamicArray_field_0x08; /*0x625483*/
  v8 = (int)v6; /*0x62548b*/
  if ( DynamicArray_field_0x08 ) /*0x62548f*/
    qmemcpy(v6, DynamicArray_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x62549f*/
  __3_YAXPAX_Z((void *)this->DynamicArray_field_0x08); /*0x6254ad*/
  this->DynamicArray_field_0x08 = v8; /*0x6254b9*/
  this->DynamicArray_field_0x04 = v5; /*0x6254bc*/
  return 1; /*0x625452*/
}



// ==== 0x006254D0  Options::ReadOptionValue  this=Options  sig=csp ====
char __thiscall Options::ReadOptionValue(Options *this)
{
  int v2; // eax
  int v3; // ecx
  int v5; // ebx
  void *v6; // eax
  void *v7; // esi
  void *v8; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x6254d5*/
  v3 = (int)this->field_4; /*0x6254d8*/
  if ( 3 * v2 > v3 ) /*0x6254e0*/
    return 0; /*0x6254e3*/
  v5 = v3 / 2; /*0x6254ef*/
  if ( v3 / 2 < 10 ) /*0x6254f4*/
    v5 = 10; /*0x6254f6*/
  if ( v5 >= v3 ) /*0x6254fd*/
    return 0; /*0x625500*/
  v6 = (void *)__2_YAPAXI_Z(20 * v5); /*0x62550d*/
  v7 = this->field_8; /*0x625512*/
  v8 = v6; /*0x62551a*/
  if ( v7 ) /*0x62551e*/
    qmemcpy(v6, v7, 20 * *(_DWORD *)this->__pad_0); /*0x625531*/
  __3_YAXPAX_Z(this->field_8); /*0x62553f*/
  this->field_8 = v8; /*0x62554b*/
  this->field_4 = (void *)v5; /*0x62554e*/
  return 1; /*0x6254e2*/
}



// ==== 0x00625560  Options::DestroyComposite  this=Options  sig=csp ====
void *__thiscall Options::DestroyComposite(Options *this, char a2)
{
  _DWORD *i; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  void *v6; // esi

  if ( *(_DWORD *)&this->__pad_14[24] ) /*0x625563*/
  {
    __3_YAXPAX_Z(*(void **)&this->__pad_14[24]); /*0x62556b*/
    *(_DWORD *)&this->__pad_14[24] = 0; /*0x625573*/
  }
  for ( i = *(_DWORD **)&this->__pad_34[4]; i; i = *(_DWORD **)&this->__pad_34[4] ) /*0x62557f*/
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
      *(_DWORD *)&this->__pad_34[4] = *v4; /*0x6255a7*/
    __3_YAXPAX_Z(v4); /*0x6255ab*/
LABEL_12:
    ; /*0x6255b3*/
  }
  v6 = *(void **)&this->__pad_34[12]; /*0x6255bb*/
  if ( v6 ) /*0x6255c0*/
  {
    DeleteAndZero::Alt(*(DeleteAndZero **)&this->__pad_34[12]); /*0x6255c4*/
    __3_YAXPAX_Z(v6); /*0x6255ca*/
  }
  if ( (a2 & 1) != 0 ) /*0x6255d9*/
    __3_YAXPAX_Z(this); /*0x6255dc*/
  return this; /*0x6255e6*/
}



// ==== 0x006255F0  Options::RebuildDropdownList  this=Options  sig=csp ====
int *__thiscall Options::RebuildDropdownList(Options *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  int *v3; // edi
  int v4; // ebx
  void **v5; // esi
  int v6; // eax
  int v7; // ebp
  char *v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // edi
  int v13; // edi
  Struct *v14; // ecx
  int v16; // [esp+10h] [ebp-20h]
  int v18; // [esp+18h] [ebp-18h] BYREF
  DeleteAndZero v19; // [esp+1Ch] [ebp-14h] BYREF
  int v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]

  v2 = a2; /*0x6255f5*/
  v3 = (int *)this; /*0x6255fb*/
  v4 = 0; /*0x625600*/
  *(_DWORD *)this->__pad_0 = *a2; /*0x625602*/
  v5 = &this->field_8; /*0x625607*/
  this->field_4 = (void *)a2[1]; /*0x62560a*/
  this->field_8 = 0; /*0x625615*/
  this->field_C = 0; /*0x625617*/
  this->field_10 = 0; /*0x62561a*/
  unknown_libname_74(&v19); /*0x62561d*/
  unknown_libname_74(&v19.DeleteAndZero_field_0x04); /*0x625626*/
  v18 = 0; /*0x62562e*/
  v19.DeleteAndZero_field_0x08 = -1; /*0x625632*/
  v21 = -1; /*0x625636*/
  v6 = (int)*v5; /*0x62563a*/
  v20 = 0; /*0x62563c*/
  if ( v6 > 0 ) /*0x625642*/
  {
    v7 = 0; /*0x625644*/
    do /*0x625665*/
    {
      v8 = (char *)v5[2] + v7; /*0x62564b*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 8)); /*0x625650*/
      DeleteAndZero::Alt((DeleteAndZero *)(v8 + 4)); /*0x625658*/
      ++v4; /*0x62565f*/
      v7 += 24; /*0x625660*/
    }
    while ( v4 < (int)*v5 ); /*0x625665*/
    v2 = a2; /*0x625667*/
    v3 = (int *)this; /*0x62566b*/
  }
  *v5 = 0; /*0x62566f*/
  v9 = v2[2]; /*0x625675*/
  v10 = 0; /*0x625678*/
  if ( v9 > 0 ) /*0x62567c*/
  {
    v11 = 0; /*0x625682*/
    v16 = 0; /*0x625684*/
    while ( 1 ) /*0x62568e*/
    {
      if ( v11 >= 0 && v10 < v9 ) /*0x625694*/
      {
        v12 = v11 + v2[4]; /*0x625699*/
        v18 = *(_DWORD *)v12; /*0x6256a5*/
        WideString::Reassign_Alt((void **)&v19, (const wchar_t **)(v12 + 4)); /*0x6256a9*/
        WideString::Reassign_Alt((void **)&v19.DeleteAndZero_field_0x04, (const wchar_t **)(v12 + 8)); /*0x6256b6*/
        v19.DeleteAndZero_field_0x08 = *(_DWORD *)(v12 + 12); /*0x6256be*/
        v20 = *(_DWORD *)(v12 + 16); /*0x6256c5*/
        v21 = *(_DWORD *)(v12 + 20); /*0x6256cc*/
      }
      v13 = (int)*v5; /*0x6256d0*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256d7*/
        DynamicVector::GrowCapacity((DynamicVector *)v5); /*0x6256db*/
      if ( (int)*v5 >= (int)v5[1] ) /*0x6256e7*/
        DynamicVector::GrowCapacity((DynamicVector *)v5); /*0x6256eb*/
      if ( v13 < (int)*v5 ) /*0x6256f4*/
        memcpy((char *)v5[2] + 24 * v13 + 24, (char *)v5[2] + 24 * v13, 24 * (_DWORD)*v5 - 24 * v13); /*0x625713*/
      v14 = (Struct *)((char *)v5[2] + 24 * v13); /*0x625721*/
      if ( v14 ) /*0x625726*/
        Struct::WideStringCopy(v14, (int)&v18); /*0x62572d*/
      ++v10; /*0x625739*/
      *v5 = (char *)*v5 + 1; /*0x62573a*/
      v11 = v16 + 24; /*0x625740*/
      v9 = a2[2]; /*0x625743*/
      v16 += 24; /*0x625746*/
      if ( v10 >= v9 ) /*0x62574c*/
        break; /*0x62574c*/
      v2 = a2; /*0x62568a*/
    }
    v3 = (int *)this; /*0x625752*/
  }
  DeleteAndZero::Alt((DeleteAndZero *)&v19.DeleteAndZero_field_0x04); /*0x62575a*/
  DeleteAndZero::Alt(&v19); /*0x625763*/
  return v3; /*0x62576a*/
}



// ==== 0x00625780  HashTable::Shrink2  this=HashTable  sig=csp ====
void __thiscall HashTable::Shrink2(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625785*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625797*/
  {
    v3 = *(int **)this->__pad_0; /*0x6257a0*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x6257a3*/
    v13 = *(int **)this->__pad_0; /*0x6257a6*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x6257ac*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x6257b4*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6257bf*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6257c4*/
    *(_DWORD *)this->__pad_0 = v5; /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6257db*/
    {
      v7 = v3; /*0x6257dd*/
      v8 = HashTable_field_0x08; /*0x6257df*/
      do /*0x625813*/
      {
        v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
          do /*0x62580d*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6257f7*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6257fb*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625801*/
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
void __thiscall HashTable::Rebuild2(HashTable *this)
{
  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625835*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625847*/
  {
    v3 = *(int **)this->__pad_0; /*0x625850*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x625853*/
    v13 = *(int **)this->__pad_0; /*0x625856*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x62585c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x625864*/
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x62586f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x625874*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x62588b*/
    {
      v7 = v3; /*0x62588d*/
      v8 = HashTable_field_0x08; /*0x62588f*/
      do /*0x6258c9*/
      {
        v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
          do /*0x6258c3*/
          {
            v10 = ((int (__thiscall *)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6258a7*/
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x6258ab*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x6258b1*/
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
void __thiscall ComboBoxOwnerDraw::SetCapacity(ComboBoxOwnerDraw *this)
{
  unsigned int ComboBoxOwnerDraw_field_0x08; // esi
  int *v3; // ebp
  int ComboBoxOwnerDraw_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  ComboBoxOwnerDraw_field_0x08 = this->ComboBoxOwnerDraw_field_0x08; /*0x6258e5*/
  if ( ComboBoxOwnerDraw_field_0x08 > this->q00C && LOBYTE(this->ComboBoxOwnerDraw_field_0x14) != 1 ) /*0x6258f7*/
  {
    v3 = *(int **)this->__pad_0; /*0x625900*/
    ComboBoxOwnerDraw_field_0x0C = this->ComboBoxOwnerDraw_field_0x0C; /*0x625903*/
    v13 = *(int **)this->__pad_0; /*0x625906*/
    this->ComboBoxOwnerDraw_field_0x08 = ComboBoxOwnerDraw_field_0x08 >> 1; /*0x62590c*/
    this->ComboBoxOwnerDraw_field_0x0C = ComboBoxOwnerDraw_field_0x0C - 1; /*0x625914*/
    v5 = (void *)__2_YAPAXI_Z(4 * (ComboBoxOwnerDraw_field_0x08 >> 1)); /*0x62591f*/
    v6 = 4 * this->ComboBoxOwnerDraw_field_0x08; /*0x625924*/
    *(_DWORD *)this->__pad_0 = v5; /*0x62592b*/
    memset(v5, 0, v6); /*0x625930*/
    if ( (int)ComboBoxOwnerDraw_field_0x08 > 0 ) /*0x62593b*/
    {
      v7 = v3; /*0x62593d*/
      v8 = ComboBoxOwnerDraw_field_0x08; /*0x62593f*/
      do /*0x625973*/
      {
        v9 = *v7; /*0x625941*/
        if ( *v7 ) /*0x625941*/
        {
          do /*0x62596d*/
          {
            v10 = ((int (__thiscall *)(int))this->ComboBoxOwnerDraw_field_0x18)(v9) /*0x625957*/
                & ((1 << this->ComboBoxOwnerDraw_field_0x0C) - 1);
            v11 = *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10); /*0x62595b*/
            *(_DWORD *)(*(_DWORD *)this->__pad_0 + 4 * v10) = v9; /*0x625961*/
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
char __thiscall ComboBoxOwnerDraw::GrowBuffer(ComboBoxOwnerDraw *this)
{
  int v2; // eax
  int v4; // esi
  void *v5; // ebp
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625994*/
  if ( *(_DWORD *)this->__pad_0 < this->ComboBoxOwnerDraw_field_0x04 ) /*0x62599b*/
    return 0; /*0x62599d*/
  v4 = 2 * v2; /*0x6259a4*/
  v6 = 2 * v2; /*0x6259ab*/
  if ( 2 * v2 < 10 ) /*0x6259af*/
  {
    v6 = 10; /*0x6259b1*/
    v4 = 10; /*0x6259b9*/
  }
  v5 = (void *)__2_YAPAXI_Z(4 * v4); /*0x6259cc*/
  memset(v5, 0, 4 * ((unsigned int)(4 * v4) >> 2)); /*0x6259da*/
  if ( this->ComboBoxOwnerDraw_field_0x08 ) /*0x6259e3*/
  {
    qmemcpy(v5, (const void *)this->ComboBoxOwnerDraw_field_0x08, 4 * *(_DWORD *)this->__pad_0); /*0x6259f8*/
    v4 = v6; /*0x625a01*/
  }
  __3_YAXPAX_Z((void *)this->ComboBoxOwnerDraw_field_0x08); /*0x625a09*/
  this->ComboBoxOwnerDraw_field_0x04 = v4; /*0x625a11*/
  this->ComboBoxOwnerDraw_field_0x08 = (int)v5; /*0x625a14*/
  return 1; /*0x62599f*/
}



// ==== 0x00625A20  Options::SaveOptionValue  this=Options  sig=csp ====
char __thiscall Options::SaveOptionValue(Options *this)
{
  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  void *v6; // esi
  void *v7; // [esp+4h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_0; /*0x625a24*/
  if ( *(_DWORD *)this->__pad_0 < (int)this->field_4 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = (void *)__2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = v5; /*0x625a64*/
  v6 = this->field_8; /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *(_DWORD *)this->__pad_0); /*0x625a80*/
  __3_YAXPAX_Z(this->field_8); /*0x625a8d*/
  this->field_4 = (void *)v4; /*0x625a99*/
  this->field_8 = v7; /*0x625a9c*/
  return 1; /*0x625a2f*/
}



// ==== 0x00625AB0  ResultNode::CleanupList  this=ResultNode  sig=csp ====
void __thiscall ResultNode::CleanupList(ResultNode *this)
{
  ResultNode *ResultNode_field_0x04; // esi
  ResultNode *v2; // edi

  ResultNode_field_0x04 = (ResultNode *)this->ResultNode_field_0x04; /*0x625ab1*/
  if ( ResultNode_field_0x04 ) /*0x625ab6*/
  {
    do /*0x625ad4*/
    {
      v2 = (ResultNode *)ResultNode_field_0x04[1].ResultNode_field_0x04; /*0x625ab9*/
      if ( ResultNode_field_0x04 ) /*0x625abe*/
      {
        ResultNode::Init(ResultNode_field_0x04); /*0x625ac2*/
        __3_YAXPAX_Z(ResultNode_field_0x04); /*0x625ac8*/
      }
      ResultNode_field_0x04 = v2; /*0x625ad2*/
    }
    while ( v2 ); /*0x625ad4*/
  }
}



// ==== 0x00625AE0  LinkedList::PushFront  this=LinkedList  sig=csp ====
int __thiscall LinkedList::PushFront(LinkedList *this, int a2)
{
  *(_DWORD *)(a2 + 12) = this->Tail[0]; /*0x625ae7*/
  this->Tail[0] = a2; /*0x625aea*/
  return a2; /*0x625aed*/
}



// ==== 0x00625AF0  File::LoadPaletteData  this=File  sig=csp ====
u_short *__thiscall File::LoadPaletteData(File *this, u_short *a2)
{
  u_short v3; // cx
  u_short v4; // ax
  u_short *v5; // esi
  unsigned __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // esi
  size_t v11; // ebp
  void *v12; // eax
  int v13; // eax
  u_short *result; // eax
  int v15; // [esp+8h] [ebp-8h]
  u_short *v17; // [esp+14h] [ebp+4h]

  v3 = *a2; /*0x625b02*/
  *(_WORD *)this->__pad_0 = *a2; /*0x625b05*/
  *(_WORD *)this->__pad_0 = ntohs(v3); /*0x625b11*/
  v4 = a2[1]; /*0x625b17*/
  *(_WORD *)this->File_field_0x2 = v4; /*0x625b1a*/
  v5 = a2 + 2; /*0x625b1f*/
  *(_WORD *)this->File_field_0x2 = ntohs(v4); /*0x625b27*/
  v6 = *(_WORD *)this->__pad_0; /*0x625b2d*/
  *(_DWORD *)&this->File_field_0x2[2] = 0; /*0x625b30*/
  v15 = v6 - 4; /*0x625b3c*/
  if ( v15 <= 0 ) /*0x625b40*/
    return (u_short *)this; /*0x625bf4*/
  while ( 1 ) /*0x625b50*/
  {
    v7 = __2_YAPAXI_Z(0x10u); /*0x625b50*/
    v8 = *(_DWORD *)v5; /*0x625b55*/
    v9 = v7; /*0x625b57*/
    v10 = v5 + 4; /*0x625b5c*/
    *(_DWORD *)v7 = v8; /*0x625b5f*/
    *(_DWORD *)(v7 + 4) = *(v10 - 1); /*0x625b64*/
    v11 = (unsigned __int16)ntohs(*(_WORD *)(v7 + 6)); /*0x625b78*/
    v12 = (void *)__2_YAPAXI_Z(v11); /*0x625b7f*/
    *(_DWORD *)(v9 + 8) = v12; /*0x625b8a*/
    qmemcpy(v12, v10, v11); /*0x625b90*/
    v13 = -(ntohs(*(_WORD *)(v9 + 6)) & 3) & 3; /*0x625baf*/
    v17 = (u_short *)((char *)v10 + v13 + v11); /*0x625bbd*/
    v15 += -8 - v13 - v11; /*0x625bcc*/
    File::Dispatch((File *)v9); /*0x625bd0*/
    result = (u_short *)this; /*0x625bd5*/
    *(_DWORD *)(v9 + 12) = *(_DWORD *)&this->File_field_0x2[2]; /*0x625bde*/
    *(_DWORD *)&this->File_field_0x2[2] = v9; /*0x625be1*/
    if ( v15 <= 0 ) /*0x625be4*/
      break; /*0x625be4*/
    v5 = v17; /*0x625b4a*/
  }
  return result; /*0x625bec*/
}



// ==== 0x00625C00  ObjectClass::Event_Process_625C00  this=ObjectClass  sig=csp ====
u_short *__thiscall sub_625C00(int this, size_t *a2)
{
  int i; // eax
  int v5; // ecx
  u_short *v6; // edi
  int v7; // ebx
  char *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edx
  char *v11; // edi
  u_short *v13; // [esp+14h] [ebp+4h]

  *a2 = 4; /*0x625c0a*/
  for ( i = *(_DWORD *)(this + 4); i; i = *(_DWORD *)(i + 12) ) /*0x625c15*/
  {
    v5 = *a2 + 8; /*0x625c1b*/
    *a2 = v5; /*0x625c1e*/
    *a2 = *(unsigned __int16 *)(i + 6) + v5 + (-(((unsigned __int8)*(_WORD *)(i + 6) + (_BYTE)v5) & 3) & 3); /*0x625c32*/
  }
  v6 = (u_short *)__2_YAPAXI_Z(*a2); /*0x625c49*/
  v13 = v6; /*0x625c4c*/
  *v6 = htons(*(_WORD *)a2); /*0x625c55*/
  v6[1] = htons(*(_WORD *)(this + 2)); /*0x625c65*/
  v7 = *(_DWORD *)(this + 4); /*0x625c69*/
  v8 = (char *)(v6 + 2); /*0x625c6c*/
  if ( !v7 ) /*0x625c71*/
    return v6; /*0x625d0d*/
  do /*0x625cfc*/
  {
    sub_4CB8B0(v7); /*0x625c79*/
    *(_DWORD *)v8 = *(_DWORD *)v7; /*0x625c80*/
    *((_DWORD *)v8 + 1) = *(_DWORD *)(v7 + 4); /*0x625c86*/
    v9 = v8 + 8; /*0x625c8e*/
    qmemcpy(v9, *(const void **)(v7 + 8), ntohs(*(_WORD *)(v7 + 6))); /*0x625ca9*/
    v8 = &v9[ntohs(*(_WORD *)(v7 + 6))]; /*0x625cc6*/
    v10 = -(ntohs(*(_WORD *)(v7 + 6)) & 3) & 3; /*0x625cd5*/
    if ( v10 ) /*0x625cd8*/
    {
      memset(v8, 0, 4 * (v10 >> 2)); /*0x625ce5*/
      v11 = &v8[4 * (v10 >> 2)]; /*0x625ce5*/
      v8 += v10; /*0x625cec*/
      memset(v11, 0, v10 & 3); /*0x625cee*/
    }
    File::Dispatch(v7); /*0x625cf2*/
    v7 = *(_DWORD *)(v7 + 12); /*0x625cf7*/
  }
  while ( v7 ); /*0x625cfc*/
  return v13; /*0x625d06*/
}



// ==== 0x00625DB0  File::FindByPrefix  this=File  sig=csp ====
bool __thiscall File::FindByPrefix(File *this, char *Str1, _BYTE *a3)
{
  int v3; // esi
  BOOL v4; // eax

  v3 = *(_DWORD *)&this->File_field_0x2[2]; /*0x625db1*/
  if ( v3 ) /*0x625db7*/
  {
    while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625dcb*/
    {
      v3 = *(_DWORD *)(v3 + 12); /*0x625dcd*/
      if ( !v3 ) /*0x625dd2*/
        return 0; /*0x625dd2*/
    }
    *a3 = **(_BYTE **)(v3 + 8); /*0x625def*/
    LOBYTE(v4) = v3 != 0; /*0x625df5*/
  }
  else
  {
    return 0; /*0x625dd4*/
  }
  return v4; /*0x625dd6*/
}



// ==== 0x00625F60  HashTable::FindString  this=HashTable  sig=csp ====
int __thiscall HashTable::FindString(HashTable *this, char *Str1, _DWORD *a3)
{
  int HashTable_field_0x04; // esi
  int result; // eax

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625f61*/
  if ( !HashTable_field_0x04 ) /*0x625f67*/
    return 0; /*0x625f84*/
  while ( strncmp(Str1, (const char *)HashTable_field_0x04, 4u) ) /*0x625f7b*/
  {
    HashTable_field_0x04 = *(_DWORD *)(HashTable_field_0x04 + 12); /*0x625f7d*/
    if ( !HashTable_field_0x04 ) /*0x625f82*/
      return 0; /*0x625f82*/
  }
  result = HashTable_field_0x04; /*0x625f92*/
  *a3 = **(_DWORD **)(HashTable_field_0x04 + 8); /*0x625f9f*/
  LOBYTE(result) = HashTable_field_0x04 != 0; /*0x625fa5*/
  return result; /*0x625f86*/
}



// ==== 0x00625FB0  HashTable::FindChunk  this=HashTable  sig=csp ====
int __thiscall HashTable::FindChunk(HashTable *this, char *Str1, void *a3, unsigned int *a4)
{
  int HashTable_field_0x04; // ebx
  int result; // eax
  int v6; // ecx

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625fb1*/
  if ( HashTable_field_0x04 ) /*0x625fb7*/
  {
    while ( 1 ) /*0x625fc1*/
    {
      result = strncmp(Str1, (const char *)HashTable_field_0x04, 4u); /*0x625fc1*/
      if ( !result ) /*0x625fcb*/
        break; /*0x625fcb*/
      HashTable_field_0x04 = *(_DWORD *)(HashTable_field_0x04 + 12); /*0x625fcd*/
      if ( !HashTable_field_0x04 ) /*0x625fd2*/
        goto LABEL_4; /*0x625fd2*/
    }
    v6 = *a4; /*0x625fee*/
    if ( *(unsigned __int16 *)(HashTable_field_0x04 + 6) < (int)*a4 ) /*0x625ff2*/
      v6 = *(unsigned __int16 *)(HashTable_field_0x04 + 6); /*0x625ff4*/
    result = v6; /*0x625ff9*/
    qmemcpy(a3, *(const void **)(HashTable_field_0x04 + 8), v6); /*0x626003*/
    *a4 = *(unsigned __int16 *)(HashTable_field_0x04 + 6); /*0x626013*/
    LOBYTE(result) = HashTable_field_0x04 != 0; /*0x626019*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x625fd4*/
  }
  return result; /*0x625fd6*/
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
void *__thiscall sub_626070(ObjectClass *this, const void *a2)
{
  void *result; // eax
  _BYTE *v3; // ecx
  int v4; // edx

  result = this; /*0x626070*/
  v3 = (char *)&this->AbstractClass + 2; /*0x626075*/
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
bool __thiscall sub_6260A0(ObjectClass *this, const void *a2)
{
  return this == a2 || memcmp(this, a2, 0x300u) == 0; /*0x6260ac*/
}



// ==== 0x006260D0  Block::Copy  this=Block  sig=csp ====
void *__thiscall Block::Copy(Block *this, const void *a2)
{
  void *result; // eax

  result = this; /*0x6260d5*/
  if ( this != a2 ) /*0x6260d9*/
    qmemcpy(this, a2, 0x300u); /*0x6260e3*/
  return result; /*0x6260e6*/
}



// ==== 0x006260F0  ObjectClass::method_6260F0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6260F0(ObjectClass *this, unsigned __int8 a2)
{
  int v3; // edi
  unsigned int result; // eax

  v3 = 256; /*0x6260f9*/
  do /*0x62610f*/
  {
    result = Color::Lerp((Color *)this, a2, &byte_A83CD9); /*0x626106*/
    this = (ObjectClass *)((char *)this + 3); /*0x62610b*/
    --v3; /*0x62610e*/
  }
  while ( v3 ); /*0x62610f*/
  return result; /*0x626111*/
}



// ==== 0x00626120  ObjectClass::Render_Helper  this=ObjectClass  sig=csp ====
unsigned int __thiscall Render_Helper(ObjectClass *this, unsigned __int8 a2, int a3)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62612c*/
  {
    result = Color::Lerp((Color *)this, a2, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x626149*/
    this = (ObjectClass *)((char *)this + 3); /*0x62614f*/
  }
  return result; /*0x62615a*/
}



// ==== 0x00626170  ObjectClass::method  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_626170(ObjectClass *this, unsigned __int8 a2, int a3)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62617c*/
  {
    if ( *(_BYTE *)(i + a3) ) /*0x626180*/
      result = Color::Lerp((Color *)this, a2, &byte_A83CD9); /*0x62618e*/
    this = (ObjectClass *)((char *)this + 3); /*0x626194*/
  }
  return result; /*0x62619f*/
}



// ==== 0x006261B0  ObjectClass::method_6261B0  this=ObjectClass  sig=csp ====
unsigned int __thiscall sub_6261B0(ObjectClass *this, unsigned __int8 a2, int a3, int a4)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x6261bc*/
  {
    result = a4; /*0x6261c0*/
    if ( *(_BYTE *)(i + a4) ) /*0x6261c4*/
      result = Color::Lerp((Color *)this, a2, (unsigned __int8 *)(a3 + 2 * (i % 256) + i % 256)); /*0x6261e3*/
    this = (ObjectClass *)((char *)this + 3); /*0x6261e9*/
  }
  return result; /*0x6261f4*/
}



// ==== 0x00626200  Palette::FindClosestColor  this=Palette  sig=csp ====
int __thiscall Palette::FindClosestColor(char *this, Palette *a2)
{
  int v2; // ebx
  int v3; // esi
  int v5; // eax
  unsigned __int8 *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x626208*/
  v8 = 0; /*0x62620b*/
  v3 = -1; /*0x62620f*/
  do /*0x626237*/
  {
    v7 = (unsigned __int8 *)this; /*0x626218*/
    this += 3; /*0x626219*/
    v5 = Palette::CalcColorDistance(a2, v7); /*0x62621c*/
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
int __thiscall sub_626250(ObjectClass *this, const char *a2, int a3)
{
  strcpy((char *)this, a2); /*0x62626c*/
  this->q040 = a3; /*0x62627c*/
  return (int)this; /*0x62627b*/
}



// ==== 0x00626290  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_626290(ObjectClass *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->q040; /*0x626293*/
  if ( v2 ) /*0x62629b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62629e*/
    for ( i = 0; i < v3; ++i ) /*0x6262a6*/
    {
      v5 = *(_DWORD *)(this->q040 + 4); /*0x6262af*/
      v6 = *(void **)(v5 + 4 * i); /*0x6262b2*/
      if ( v6 ) /*0x6262b7*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v5 + 4 * i)); /*0x6262bb*/
        __3_YAXPAX_Z(v6); /*0x6262c1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->q040; /*0x6262cf*/
    if ( v7 ) /*0x6262d9*/
      (**v7)(v7, 1); /*0x6262df*/
    this->q040 = 0; /*0x6262e1*/
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

  result = this->q040; /*0x6262f3*/
  if ( result ) /*0x6262fb*/
  {
    v4 = *(_DWORD *)(result + 16); /*0x6262fe*/
    for ( i = 0; i < v4; ++i ) /*0x626306*/
    {
      v6 = *(_DWORD *)(this->q040 + 4); /*0x62630f*/
      v7 = *(void **)(v6 + 4 * i); /*0x626312*/
      if ( v7 ) /*0x626317*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v6 + 4 * i)); /*0x62631b*/
        __3_YAXPAX_Z(v7); /*0x626321*/
      }
    }
    v8 = (void (__thiscall ***)(_DWORD, int))this->q040; /*0x62632f*/
    if ( v8 ) /*0x626339*/
      (**v8)(v8, 1); /*0x62633f*/
    this->q040 = 0; /*0x626345*/
    this->q040 = a2; /*0x62634f*/
    return a2; /*0x626341*/
  }
  else
  {
    this->q040 = a2; /*0x62635d*/
  }
  return result; /*0x626355*/
}



// ==== 0x00626370  FileSystem::mountDrive  this=FileSystem  sig=csp ====
void __thiscall FileSystem::mountDrive(FileSystem *this)
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ecx

  v2 = this->q100; /*0x626373*/
  if ( v2 ) /*0x62637b*/
  {
    v3 = *(_DWORD *)(v2 + 16); /*0x62637e*/
    for ( i = 0; i < v3; ++i ) /*0x626386*/
    {
      v5 = *(_DWORD *)(this->q100 + 4); /*0x62638f*/
      v6 = *(void **)(v5 + 4 * i); /*0x626392*/
      if ( v6 ) /*0x626397*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v5 + 4 * i)); /*0x62639b*/
        __3_YAXPAX_Z(v6); /*0x6263a1*/
      }
    }
    v7 = (void (__thiscall ***)(_DWORD, int))this->q100; /*0x6263af*/
    if ( v7 ) /*0x6263b9*/
      (**v7)(v7, 1); /*0x6263bf*/
    this->q100 = 0; /*0x6263c1*/
  }
}



// ==== 0x006263D0  FileExtension::MapHandler  this=IUnknown  sig=csp ====
int __thiscall FileExtension_MapHandler(const char *this)
{
  _DWORD *v1; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // ebp
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int result; // eax
  _DWORD *v13; // ebp
  _DWORD *v14; // ebx
  char *v15; // edx
  int v16; // esi
  int v17; // ebp
  int v18; // esi
  int v19; // edi
  int v20; // eax
  _DWORD *v21; // esi
  int v22; // esi
  int v23; // ebp
  int v24; // esi
  int i; // ebx
  int v26; // edi
  char *v28; // [esp+14h] [ebp-208h] BYREF
  char String[256]; // [esp+18h] [ebp-204h] BYREF

  v1 = g_FileExtensionState; /*0x6263da*/
  if ( !g_FileExtensionState ) /*0x6263e8*/
  {
    v3 = __2_YAPAXI_Z(0x10u); /*0x6263f0*/
    v1 = v3; /*0x6263f5*/
    if ( v3 ) /*0x6263fc*/
    {
      *v3 = -1; /*0x626404*/
      v4 = __2_YAPAXI_Z(0x18u); /*0x62640a*/
      v5 = v4; /*0x62640f*/
      if ( v4 ) /*0x626416*/
      {
        StringVector::Construct(v4, 0, 0); /*0x62641e*/
        *v5 = &DynamicVectorClass<char *>::`vftable'; /*0x626423*/
        v5[5] = 10; /*0x626429*/
        v5[4] = 0; /*0x626430*/
      }
      else
      {
        v5 = 0; /*0x626439*/
      }
      v1[1] = v5; /*0x62643d*/
      if ( __2_YAPAXI_Z(0x18u) ) /*0x626440*/
        v6 = FileExtension::Constructor(0, 0); /*0x626452*/
      else
        v6 = 0; /*0x626459*/
      v1[2] = v6; /*0x62645d*/
      if ( __2_YAPAXI_Z(0x10u) ) /*0x626460*/
        v1[3] = DynamicVectorArray::Constructor(10, 31, HashStringMod31); /*0x62647c*/
      else
        v1[3] = 0; /*0x626483*/
    }
    else
    {
      v1 = 0; /*0x626488*/
    }
    g_FileExtensionState = v1; /*0x62648a*/
  }
  String::CopyUpper(String, this); /*0x626495*/
  v7 = v1[3]; /*0x62649a*/
  v8 = *(_DWORD *)v7 + 24 * ((*(int (__thiscall **)(char *))(v7 + 4))(String) % *(_DWORD *)(v7 + 8)); /*0x6264b1*/
  v9 = *(_DWORD *)(v8 + 16) - 1; /*0x6264b4*/
  if ( v9 < 0 ) /*0x6264b5*/
    goto LABEL_21; /*0x6264b5*/
  v10 = 260 * v9; /*0x6264be*/
  while ( 1 ) /*0x6264c6*/
  {
    v11 = *(_DWORD *)(v8 + 4) + v10; /*0x6264c6*/
    if ( String::Equals((const char *)v11, String) ) /*0x6264cf*/
      break; /*0x6264cf*/
    --v9; /*0x6264d8*/
    v10 -= 260; /*0x6264d9*/
    if ( v9 < 0 ) /*0x6264e1*/
      goto LABEL_21; /*0x6264e1*/
  }
  if ( v11 == -256 || (result = *(_DWORD *)(*(_DWORD *)(v11 + 256) + 256)) == 0 ) /*0x6264f9*/
  {
LABEL_21:
    v13 = g_FileExtensionState; /*0x6264ff*/
    v14 = MIXFile::Load(g_FileExtensionState, this); /*0x626511*/
    v15 = (char *)__2_YAPAXI_Z(0x104u); /*0x62651d*/
    if ( v15 ) /*0x626524*/
    {
      strcpy(v15, this); /*0x62653e*/
      *((_DWORD *)v15 + 64) = v14; /*0x626547*/
      v28 = v15; /*0x62654d*/
    }
    else
    {
      v28 = 0; /*0x626553*/
    }
    String::CopyUpper(String, this); /*0x626564*/
    v16 = v13[3]; /*0x626569*/
    v17 = *(_DWORD *)v16 + 24 * ((*(int (__thiscall **)(char *))(v16 + 4))(String) % *(_DWORD *)(v16 + 8)); /*0x626580*/
    v18 = *(_DWORD *)(v17 + 16) - 1; /*0x626583*/
    if ( v18 < 0 ) /*0x626584*/
    {
LABEL_28:
      v20 = FileExtension::Check(String, &v28); /*0x6265ae*/
      FileExtension::CheckExtensionMatch(v20); /*0x6265c7*/
    }
    else
    {
      v19 = 260 * v18; /*0x62658d*/
      while ( !String::Equals((const char *)(v19 + *(_DWORD *)(v17 + 4)), String) ) /*0x6265a1*/
      {
        --v18; /*0x6265a3*/
        v19 -= 260; /*0x6265a4*/
        if ( v18 < 0 ) /*0x6265ac*/
          goto LABEL_28; /*0x6265ac*/
      }
    }
    v21 = g_FileExtensionState; /*0x6265cc*/
    String::CopyUpper(String, this); /*0x6265d7*/
    v22 = v21[3]; /*0x6265dc*/
    v23 = *(_DWORD *)v22 + 24 * ((*(int (__thiscall **)(char *))(v22 + 4))(String) % *(_DWORD *)(v22 + 8)); /*0x6265f3*/
    v24 = *(_DWORD *)(v23 + 16) - 1; /*0x6265f6*/
    if ( v24 < 0 ) /*0x6265f7*/
      return 0; /*0x6265f7*/
    for ( i = 260 * v24; ; i -= 260 ) /*0x626600*/
    {
      v26 = i + *(_DWORD *)(v23 + 4); /*0x62660a*/
      if ( String::Equals((const char *)v26, String) ) /*0x62660f*/
        break; /*0x62660f*/
      if ( --v24 < 0 ) /*0x626621*/
        return 0; /*0x62662f*/
    }
    if ( v26 == -256 ) /*0x626638*/
      return 0; /*0x62663d*/
    else
      return *(_DWORD *)(*(_DWORD *)(v26 + 256) + 256); /*0x626649*/
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
int __thiscall FlagSystem::GetNextActive(FlagSystem *this)
{
  _DWORD *v1; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // edx
  Flag *v6; // ebp
  FlagSystem v7; // edx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int i; // ebx
  int v15; // esi
  int v16; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD **)&g_FileExtensionState[12]; /*0x626699*/
  if ( *((_BYTE *)this + 8) ) /*0x62669f*/
    return 0; /*0x62669f*/
  if ( *(_DWORD *)this >= v1[2] ) /*0x6266ad*/
  {
LABEL_7:
    *((_BYTE *)this + 8) = 1; /*0x6266ff*/
    return 0; /*0x62670a*/
  }
  while ( 1 ) /*0x6266ba*/
  {
    v3 = *v1 + 24 * *(_DWORD *)this; /*0x6266ba*/
    v4 = *((_DWORD *)this + 1); /*0x6266bd*/
    if ( v4 < *(_DWORD *)(v3 + 16) ) /*0x6266c2*/
      break; /*0x6266c2*/
LABEL_6:
    v7 = *this; /*0x6266ea*/
    *((_DWORD *)this + 1) = 0; /*0x6266ec*/
    *this = (FlagSystem)++*(_DWORD *)&v7; /*0x6266f4*/
    if ( *(_DWORD *)&v7 >= v1[2] ) /*0x6266fd*/
      goto LABEL_7; /*0x6266fd*/
  }
  while ( 1 ) /*0x6266c4*/
  {
    v5 = *(_DWORD *)(v3 + 4); /*0x6266c4*/
    *((_DWORD *)this + 1) = v4 + 1; /*0x6266cf*/
    v6 = (Flag *)(v5 + 260 * v4); /*0x6266d2*/
    if ( !(unsigned __int8)Flag::IsZero(v6) ) /*0x6266d7*/
      break; /*0x6266d7*/
    v4 = *((_DWORD *)this + 1); /*0x6266e0*/
    if ( v4 >= *(_DWORD *)(v3 + 16) ) /*0x6266e8*/
      goto LABEL_6; /*0x6266e8*/
  }
  if ( !v6 ) /*0x62670d*/
    return 0; /*0x626712*/
  v9 = *(_DWORD *)&g_FileExtensionState[12]; /*0x62671e*/
  v10 = (*(int (__thiscall **)(Flag *))(v9 + 4))(v6); /*0x626721*/
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)) + 16); /*0x62672d*/
  v12 = *(_DWORD *)v9 + 24 * (v10 % *(_DWORD *)(v9 + 8)); /*0x626731*/
  v13 = v11 - 1; /*0x626734*/
  v16 = v12; /*0x626735*/
  if ( v13 < 0 ) /*0x626739*/
    return 0; /*0x626739*/
  for ( i = 260 * v13; ; i -= 260 ) /*0x626742*/
  {
    v15 = *(_DWORD *)(v12 + 4) + i; /*0x626750*/
    if ( (unsigned __int8)String::Equals((const char *)v15, v6->__pad_0) ) /*0x626755*/
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
void __thiscall FileSystem::InitExtensionState(FileSystem *this)
{
  FileSystem *v1; // edi
  FileSystem *v2; // esi
  FileSystem *v3; // eax
  StringVector *v4; // eax
  StringVector *v5; // esi
  _DWORD *v6; // ebx
  VectorClass *v7; // eax
  VectorClass *v8; // esi
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
  Flag *v20; // esi
  int v21; // ebp
  _DWORD *v22; // esi
  int v23; // [esp+10h] [ebp-110h] BYREF
  int v24; // [esp+14h] [ebp-10Ch]
  char v25; // [esp+18h] [ebp-108h]
  FileSystem *v26; // [esp+1Ch] [ebp-104h]
  char String[256]; // [esp+20h] [ebp-100h] BYREF

  v1 = g_FileExtensionState; /*0x6267aa*/
  v2 = this; /*0x6267b0*/
  v26 = this; /*0x6267b4*/
  if ( !g_FileExtensionState ) /*0x6267b8*/
  {
    v3 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6267c0*/
    v1 = v3; /*0x6267c5*/
    if ( !v3 ) /*0x6267cc*/
    {
      v1 = 0; /*0x6268bf*/
      g_FileExtensionState = 0; /*0x6268c1*/
      goto LABEL_19; /*0x6268c1*/
    }
    *(_DWORD *)v3 = -1; /*0x6267d4*/
    v4 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x6267da*/
    v5 = v4; /*0x6267df*/
    v6 = 0; /*0x6267e1*/
    if ( v4 ) /*0x6267ed*/
    {
      StringVector::Construct(v4, 0, 0); /*0x6267f3*/
      *(_DWORD *)v5->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x6267f8*/
      v5->StringVector_field_0x14 = 10; /*0x6267fe*/
      v5->StringVector_field_0x10 = 0; /*0x626801*/
    }
    else
    {
      v5 = 0; /*0x626806*/
    }
    *(_DWORD *)&v1[4] = v5; /*0x62680a*/
    v7 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x62680d*/
    v8 = v7; /*0x626812*/
    if ( v7 ) /*0x626819*/
    {
      VectorClass::ConstructHSV(v7, 0, 0); /*0x62681f*/
      v8->ptr_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626824*/
      v8[1].Items = (void *)10; /*0x62682a*/
      v8[1].ptr_0 = 0; /*0x62682d*/
    }
    else
    {
      v8 = 0; /*0x626832*/
    }
    *(_DWORD *)&v1[8] = v8; /*0x626836*/
    v9 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x626839*/
    v10 = v9; /*0x62683e*/
    if ( v9 ) /*0x626845*/
    {
      v9[1] = HashStringMod31; /*0x62684c*/
      v9[2] = 31; /*0x626853*/
      v9[3] = 10; /*0x62685a*/
      v11 = (_DWORD *)__2_YAPAXI_Z(0x2ECu); /*0x62685d*/
      if ( v11 ) /*0x626867*/
      {
        v6 = v11 + 1; /*0x62686e*/
        *v11 = 31; /*0x626876*/
        Array::ForEach(v11 + 1, 24, 31, (int (__thiscall *)(int))FileSystem::readFile); /*0x62687c*/
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
        *(_DWORD *)&v1[12] = v10; /*0x62689f*/
        v2 = v26; /*0x6268a2*/
        g_FileExtensionState = v1; /*0x6268a6*/
        goto LABEL_19; /*0x6268ac*/
      }
    }
    else
    {
      v10 = 0; /*0x6268ae*/
    }
    *(_DWORD *)&v1[12] = v10; /*0x6268b0*/
    v2 = v26; /*0x6268b3*/
    g_FileExtensionState = v1; /*0x6268b7*/
  }
LABEL_19:
  if ( *(FileSystem **)v1 != v2 ) /*0x6268c9*/
  {
    v15 = *(_DWORD **)&v1[12]; /*0x6268cf*/
    v16 = 0; /*0x6268d2*/
    v17 = 0; /*0x6268d4*/
    *(_DWORD *)v1 = v2; /*0x6268d6*/
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
        v20 = (Flag *)(v19 + 260 * v17); /*0x62690e*/
        if ( !(unsigned __int8)Flag::IsZero(v20) ) /*0x626913*/
          break; /*0x626913*/
        v17 = v24; /*0x62691c*/
        if ( v24 >= *(_DWORD *)(v18 + 16) ) /*0x626925*/
        {
          v16 = v23; /*0x626927*/
          goto LABEL_25; /*0x626927*/
        }
      }
      for ( ; v20; v20 = (Flag *)FileSystem::closeFile(*(FileSystem **)&v1[12], &v23) ) /*0x626948*/
      {
        String::CopyUpper(String, v20->__pad_0); /*0x62694f*/
        v21 = *(_DWORD *)FileSystem::openFile(*(FileSystem **)&v1[12], String); /*0x626961*/
        v22 = MIXFile::Load((MIXFile *)v1, v20->__pad_0); /*0x62696d*/
        FileSystem::mountDrive((FileSystem *)v21); /*0x62696f*/
        *(_DWORD *)(v21 + 256) = v22; /*0x626978*/
      }
    }
  }
}



// ==== 0x006269A0  ObjectClass::System_Reset  this=ObjectClass  sig=csp ====
int System_Reset(ObjectClass *this)
{
  FileSystem *v1; // eax
  FileSystem *v2; // eax
  FileSystem *v3; // edi
  StringVector *v4; // eax
  StringVector *v5; // esi
  VectorClass *v6; // eax
  VectorClass *v7; // esi
  DynamicVectorArray *v8; // eax
  int v9; // esi
  int v10; // edi

  v1 = g_FileExtensionState; /*0x6269a0*/
  if ( !g_FileExtensionState ) /*0x6269a9*/
  {
    v2 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6269b1*/
    v3 = v2; /*0x6269b6*/
    if ( v2 ) /*0x6269bd*/
    {
      *(_DWORD *)v2 = -1; /*0x6269c5*/
      v4 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x6269cb*/
      v5 = v4; /*0x6269d0*/
      if ( v4 ) /*0x6269d7*/
      {
        StringVector::Construct(v4, 0, 0); /*0x6269df*/
        *(_DWORD *)v5->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x6269e4*/
        v5->StringVector_field_0x14 = 10; /*0x6269ea*/
        v5->StringVector_field_0x10 = 0; /*0x6269f1*/
      }
      else
      {
        v5 = 0; /*0x6269fa*/
      }
      *(_DWORD *)&v3[4] = v5; /*0x6269fe*/
      v6 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x626a01*/
      v7 = v6; /*0x626a06*/
      if ( v6 ) /*0x626a0d*/
      {
        VectorClass::ConstructHSV(v6, 0, 0); /*0x626a15*/
        v7->ptr_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626a1a*/
        v7[1].Items = (void *)10; /*0x626a20*/
        v7[1].ptr_0 = 0; /*0x626a27*/
      }
      else
      {
        v7 = 0; /*0x626a30*/
      }
      *(_DWORD *)&v3[8] = v7; /*0x626a34*/
      v8 = (DynamicVectorArray *)__2_YAPAXI_Z(0x10u); /*0x626a37*/
      if ( v8 ) /*0x626a41*/
        *(_DWORD *)&v3[12] = DynamicVectorArray::Constructor(v8, 10, 31, (int)HashStringMod31); /*0x626a53*/
      else
        *(_DWORD *)&v3[12] = 0; /*0x626a5c*/
      v1 = v3; /*0x626a56*/
    }
    else
    {
      v1 = 0; /*0x626a63*/
    }
    g_FileExtensionState = v1; /*0x626a65*/
  }
  v9 = 0; /*0x626a6d*/
  v10 = *(_DWORD *)(*(_DWORD *)&v1[4] + 16); /*0x626a6f*/
  if ( v10 > 0 ) /*0x626a74*/
  {
    do /*0x626a90*/
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(*(_DWORD *)&v1[4] + 4) + 4 * v9)); /*0x626a80*/
      v1 = g_FileExtensionState; /*0x626a85*/
      ++v9; /*0x626a8d*/
    }
    while ( v9 < v10 ); /*0x626a90*/
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&v1[4] + 12))(*(_DWORD *)&v1[4]); /*0x626a99*/
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&g_FileExtensionState[8] + 12))(*(_DWORD *)&g_FileExtensionState[8]); /*0x626aa9*/
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

  if ( !g_FileExtensionState ) /*0x626ac5*/
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
        *v5 = &DynamicVectorClass<char *>::`vftable'; /*0x626b06*/
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
        *v7 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626b38*/
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
      g_FileExtensionState = v3; /*0x626b6f*/
    }
    else
    {
      g_FileExtensionState = 0; /*0x626b84*/
    }
  }
  v9 = (char *)__2_YAPAXI_Z(0x100u); /*0x626b9c*/
  strcpy(v9, a1); /*0x626bb5*/
  v10 = *((_DWORD *)g_FileExtensionState + 1); /*0x626bc4*/
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
  v15 = *((_DWORD *)g_FileExtensionState + 2); /*0x626c07*/
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

  if ( g_FileExtensionState ) /*0x626c68*/
    return *(_DWORD *)(*((_DWORD *)g_FileExtensionState + 1) + 16); /*0x626d93*/
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
      *v3 = &DynamicVectorClass<char *>::`vftable'; /*0x626caa*/
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
      *v5 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x626ce1*/
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
    g_FileExtensionState = v1; /*0x626d71*/
    return *(_DWORD *)(v1[1] + 16); /*0x626d7c*/
  }
  else
  {
    g_FileExtensionState = 0; /*0x626d83*/
    return *(_DWORD *)(MEMORY[4] + 16); /*0x626d8b*/
  }
}



// ==== 0x00626DA0  FileSystem::ProcessNextFileExtension  this=FileSystem  sig=csp ====
int FileSystem::ProcessNextFileExtension(FileSystem *this)
{
  FileSystem *v1; // edi
  FileSystem *v2; // eax
  StringVector *v3; // eax
  StringVector *v4; // esi
  FileExtension *v5; // eax
  _DWORD *v6; // eax
  DynamicVectorArray *v7; // eax
  _DWORD *v8; // ebp
  int v9; // esi
  int v10; // edi
  int v11; // eax
  Flag *v12; // ebx
  int v15; // edi
  int v16; // eax
  int v17; // ebp
  int v18; // edi
  const char *v19; // edi
  const char *v20; // edi
  _DWORD *v21; // eax
  int k; // ebp
  int v23; // edi
  int v24; // ecx
  Flag *v25; // ebx
  const char *v26; // eax
  int i; // [esp+10h] [ebp-18h]
  int j; // [esp+10h] [ebp-18h]
  int v29; // [esp+14h] [ebp-14h]
  int v30; // [esp+18h] [ebp-10h]
  _DWORD *v31; // [esp+18h] [ebp-10h]
  int v32; // [esp+1Ch] [ebp-Ch]

  v1 = g_FileExtensionState; /*0x626da7*/
  if ( !g_FileExtensionState ) /*0x626db1*/
  {
    v2 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x626db9*/
    v1 = v2; /*0x626dbe*/
    if ( v2 ) /*0x626dc5*/
    {
      *(_DWORD *)v2 = -1; /*0x626dc9*/
      v3 = (StringVector *)__2_YAPAXI_Z(0x18u); /*0x626dcf*/
      v4 = v3; /*0x626dd4*/
      if ( v3 ) /*0x626ddb*/
      {
        StringVector::Construct(v3, 0, 0); /*0x626de1*/
        *(_DWORD *)v4->__pad_0 = &DynamicVectorClass<char *>::`vftable'; /*0x626de6*/
        v4->StringVector_field_0x14 = 10; /*0x626dec*/
        v4->StringVector_field_0x10 = 0; /*0x626df3*/
      }
      else
      {
        v4 = 0; /*0x626df8*/
      }
      *(_DWORD *)&v1[4] = v4; /*0x626dfc*/
      v5 = (FileExtension *)__2_YAPAXI_Z(0x18u); /*0x626dff*/
      if ( v5 ) /*0x626e09*/
        v6 = FileExtension::Constructor(v5, 0, 0); /*0x626e0f*/
      else
        v6 = 0; /*0x626e16*/
      *(_DWORD *)&v1[8] = v6; /*0x626e1a*/
      v7 = (DynamicVectorArray *)__2_YAPAXI_Z(0x10u); /*0x626e1d*/
      if ( v7 ) /*0x626e27*/
        *(_DWORD *)&v1[12] = DynamicVectorArray::Constructor(v7, 10, 31, (int)HashStringMod31); /*0x626e39*/
      else
        *(_DWORD *)&v1[12] = 0; /*0x626e40*/
    }
    else
    {
      v1 = 0; /*0x626e45*/
    }
    g_FileExtensionState = v1; /*0x626e47*/
  }
  v8 = *(_DWORD **)&v1[12]; /*0x626e4d*/
  v9 = 0; /*0x626e50*/
  v32 = 0; /*0x626e52*/
  v29 = 0; /*0x626e56*/
  if ( (int)v8[2] > 0 ) /*0x626e5d*/
  {
    for ( i = 0; ; i += 24 ) /*0x626e63*/
    {
      v10 = i + *v8; /*0x626e6e*/
      if ( *(int *)(v10 + 16) > 0 ) /*0x626e73*/
        break; /*0x626e73*/
LABEL_19:
      v9 = 0; /*0x626e95*/
      if ( ++v32 >= v8[2] ) /*0x626ea6*/
        return 0; /*0x626ebd*/
    }
    while ( 1 ) /*0x626e7d*/
    {
      v11 = 65 * v9++; /*0x626e7d*/
      v12 = (Flag *)(*(_DWORD *)(v10 + 4) + 4 * v11); /*0x626e80*/
      if ( !(unsigned __int8)Flag::IsZero(v12) ) /*0x626e85*/
        break; /*0x626e85*/
      if ( v9 >= *(_DWORD *)(v10 + 16) ) /*0x626e91*/
        goto LABEL_19; /*0x626e91*/
    }
    if ( v12 ) /*0x626ec0*/
    {
      v15 = *(_DWORD *)&g_FileExtensionState[12]; /*0x626ece*/
      v16 = *(_DWORD *)v15 + 24 * ((*(int (__thiscall **)(Flag *))(v15 + 4))(v12) % *(_DWORD *)(v15 + 8)); /*0x626ee1*/
      v17 = *(_DWORD *)(v16 + 16) - 1; /*0x626ee4*/
      v30 = v16; /*0x626ee5*/
      if ( v17 >= 0 ) /*0x626ee9*/
      {
        v18 = 260 * v17; /*0x626ef6*/
        for ( j = 260 * v17; ; v18 = j ) /*0x626ef9*/
        {
          v19 = (const char *)(*(_DWORD *)(v16 + 4) + v18); /*0x626f0b*/
          if ( (unsigned __int8)String::Equals(v19, v12->__pad_0) ) /*0x626f0f*/
            break; /*0x626f0f*/
          --v17; /*0x626f1c*/
          j -= 260; /*0x626f25*/
          if ( v17 < 0 ) /*0x626f29*/
            return 0; /*0x626f36*/
          v16 = v30; /*0x626eff*/
        }
        v20 = v19 + 256; /*0x626f37*/
        if ( v20 && *(_DWORD *)(*(_DWORD *)v20 + 256) ) /*0x626f47*/
        {
          do /*0x626fd6*/
          {
            v21 = *(_DWORD **)&g_FileExtensionState[12]; /*0x626f63*/
            ++v29; /*0x626f66*/
            v31 = v21; /*0x626f6a*/
            if ( v32 >= v21[2] ) /*0x626f71*/
              break; /*0x626f71*/
            for ( k = 24 * v32; ; k += 24 ) /*0x626f77*/
            {
              v23 = *v21 + k; /*0x626f7e*/
              if ( v9 < *(_DWORD *)(v23 + 16) ) /*0x626f83*/
                break; /*0x626f83*/
LABEL_36:
              v9 = 0; /*0x626fb2*/
              if ( ++v32 >= v21[2] ) /*0x626fba*/
                return v29; /*0x626fba*/
            }
            while ( 1 ) /*0x626f8d*/
            {
              v24 = 65 * v9++; /*0x626f8d*/
              v25 = (Flag *)(*(_DWORD *)(v23 + 4) + 4 * v24); /*0x626f90*/
              if ( !(unsigned __int8)Flag::IsZero(v25) ) /*0x626f95*/
                break; /*0x626f95*/
              if ( v9 >= *(_DWORD *)(v23 + 16) ) /*0x626fa1*/
              {
                v21 = v31; /*0x626fa3*/
                goto LABEL_36; /*0x626fa3*/
              }
            }
            if ( !v25 ) /*0x626fc0*/
              break; /*0x626fc0*/
            v26 = FileSystem::openFile(*(FileSystem **)&g_FileExtensionState[12], v25->__pad_0); /*0x626fcb*/
            if ( !v26 ) /*0x626fd2*/
              break; /*0x626fd2*/
          }
          while ( *(_DWORD *)(*(_DWORD *)v26 + 256) ); /*0x626fd6*/
        }
      }
    }
  }
  return v29; /*0x626eb6*/
}



// ==== 0x00626FF0  WinMainSetup_Setup_626FF0  this=-  sig=ida-proto ====
void sub_626FF0()
{
  void *v0; // esi

  v0 = g_FileExtensionState; /*0x626ff1*/
  if ( g_FileExtensionState ) /*0x626ff9*/
  {
    FileSystem::FlushTempFiles(g_FileExtensionState); /*0x626ffd*/
    __3_YAXPAX_Z(v0); /*0x627003*/
    g_FileExtensionState = 0; /*0x62700b*/
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

  result = g_FileExtensionState; /*0x627020*/
  if ( !g_FileExtensionState ) /*0x62702e*/
  {
    result = __2_YAPAXI_Z(0x10u); /*0x627036*/
    v1 = result; /*0x62703b*/
    v12 = result; /*0x627042*/
    if ( !result ) /*0x627046*/
    {
      g_FileExtensionState = 0; /*0x62715e*/
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
      *v2 = &DynamicVectorClass<char *>::`vftable'; /*0x62706d*/
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
      *v3 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x62709f*/
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
        g_FileExtensionState = v1; /*0x62713f*/
        return result; /*0x62714b*/
      }
    }
    else
    {
      v4 = 0; /*0x62714c*/
    }
    v1[3] = v4; /*0x62714e*/
    g_FileExtensionState = v1; /*0x627151*/
  }
  return result; /*0x627146*/
}



// ==== 0x00627170  FileSystem::findFile  this=DynamicVector  sig=csp ====
_DWORD *__thiscall FileSystem::findFile(FileSystem *this)
{
  FileSystem *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ebp
  _DWORD *v7; // eax
  FileSystem *v8; // esi
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v14; // [esp+Ch] [ebp-8h]

  v1 = this; /*0x627175*/
  *(_DWORD *)this = -1; /*0x62717e*/
  v2 = __2_YAPAXI_Z(0x18u); /*0x627184*/
  if ( v2 ) /*0x627190*/
  {
    *(_DWORD *)(v2 + 4) = 0; /*0x627192*/
    *(_DWORD *)(v2 + 8) = 0; /*0x627195*/
    *(_BYTE *)(v2 + 12) = 1; /*0x627198*/
    *(_BYTE *)(v2 + 13) = 0; /*0x62719c*/
    *(_DWORD *)v2 = &DynamicVectorClass<char *>::`vftable'; /*0x62719f*/
    *(_DWORD *)(v2 + 20) = 10; /*0x6271a5*/
    *(_DWORD *)(v2 + 16) = 0; /*0x6271ac*/
  }
  else
  {
    v2 = 0; /*0x6271b1*/
  }
  *(_DWORD *)&v1[4] = v2; /*0x6271b5*/
  v3 = __2_YAPAXI_Z(0x18u); /*0x6271b8*/
  if ( v3 ) /*0x6271c2*/
  {
    *(_DWORD *)(v3 + 4) = 0; /*0x6271c4*/
    *(_DWORD *)(v3 + 8) = 0; /*0x6271c7*/
    *(_BYTE *)(v3 + 12) = 1; /*0x6271ca*/
    *(_BYTE *)(v3 + 13) = 0; /*0x6271ce*/
    *(_DWORD *)v3 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x6271d1*/
    *(_DWORD *)(v3 + 20) = 10; /*0x6271d7*/
    *(_DWORD *)(v3 + 16) = 0; /*0x6271de*/
  }
  else
  {
    v3 = 0; /*0x6271e3*/
  }
  *(_DWORD *)&v1[8] = v3; /*0x6271e7*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x10u); /*0x6271ea*/
  v5 = v4; /*0x6271ef*/
  if ( v4 ) /*0x6271f6*/
  {
    v6 = 31; /*0x6271fd*/
    v4[1] = HashStringMod31; /*0x627207*/
    v4[2] = 31; /*0x62720e*/
    v4[3] = 10; /*0x627211*/
    v7 = (_DWORD *)__2_YAPAXI_Z(0x2ECu); /*0x627218*/
    if ( v7 ) /*0x627222*/
    {
      *v7 = 31; /*0x627224*/
      v14 = v7 + 1; /*0x627229*/
      v8 = (FileSystem *)(v7 + 1); /*0x62722d*/
      do /*0x62724c*/
      {
        FileSystem::writeFile(v8, 0, 0); /*0x627233*/
        *(_DWORD *)v8 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x627238*/
        *(_DWORD *)&v8[20] = 10; /*0x62723e*/
        *(_DWORD *)&v8[16] = 0; /*0x627245*/
        v8 += 24; /*0x627248*/
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
    *(_DWORD *)&v1[12] = v5; /*0x62727d*/
    return v1; /*0x627280*/
  }
  else
  {
    *(_DWORD *)&v1[12] = 0; /*0x627289*/
    return v1; /*0x62728c*/
  }
}



// ==== 0x006272A0  FileSystem::FlushTempFiles  this=FileSystem  sig=csp ====
void __thiscall FileSystem::FlushTempFiles(FileSystem *this)
{
  FileSystem *v1; // ebp
  FileSystem *File; // eax
  FileSystem *v3; // eax
  int v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // esi
  char *v11; // edi
  char *v12; // edi
  int v13; // eax
  Flag *v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  const char *v19; // ebx
  FileSystem **v20; // eax
  FileSystem *v21; // edi
  _DWORD *v22; // eax
  int v23; // ebp
  int v24; // edi
  int v25; // ecx
  Flag *v26; // ebx
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // ebx
  _DWORD *v30; // esi
  char *v32; // [esp+Ch] [ebp-14h]
  char *v33; // [esp+Ch] [ebp-14h]
  _DWORD *v34; // [esp+10h] [ebp-10h]
  int v35; // [esp+10h] [ebp-10h]
  _DWORD *v36; // [esp+10h] [ebp-10h]
  int v37; // [esp+14h] [ebp-Ch]

  v1 = this; /*0x6272a4*/
  if ( this->q00C ) /*0x6272ab*/
  {
    File = g_FileExtensionState; /*0x6272b6*/
    if ( !g_FileExtensionState ) /*0x6272bd*/
    {
      v3 = (FileSystem *)__2_YAPAXI_Z(0x10u); /*0x6272c1*/
      if ( v3 ) /*0x6272cb*/
        File = (FileSystem *)FileSystem::findFile(v3); /*0x6272cf*/
      else
        File = 0; /*0x6272d6*/
      g_FileExtensionState = File; /*0x6272d8*/
    }
    v4 = 0; /*0x6272e2*/
    v5 = *(_DWORD *)(*(_DWORD *)&File[4] + 16); /*0x6272e4*/
    if ( v5 > 0 ) /*0x6272e9*/
    {
      do /*0x627305*/
      {
        __3_YAXPAX_Z(*(void **)(*(_DWORD *)(*(_DWORD *)&File[4] + 4) + 4 * v4)); /*0x6272f5*/
        File = g_FileExtensionState; /*0x6272fa*/
        ++v4; /*0x627302*/
      }
      while ( v4 < v5 ); /*0x627305*/
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&File[4] + 12))(*(_DWORD *)&File[4]); /*0x62730e*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&g_FileExtensionState[8] + 12))(*(_DWORD *)&g_FileExtensionState[8]); /*0x62731b*/
    v6 = *(void (__thiscall ****)(_DWORD, int))&v1[4]; /*0x62731e*/
    if ( v6 ) /*0x627323*/
      (**v6)(v6, 1); /*0x627329*/
    v7 = *(void (__thiscall ****)(_DWORD, int))&v1[8]; /*0x62732b*/
    if ( v7 ) /*0x627330*/
      (**v7)(v7, 1); /*0x627336*/
    v8 = *(_DWORD **)&v1[12]; /*0x627338*/
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
        v12 = &v11[*v8]; /*0x627358*/
        if ( *((int *)v12 + 4) > 0 ) /*0x62735f*/
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
        v14 = (Flag *)(*((_DWORD *)v12 + 1) + 4 * v13); /*0x62736c*/
        if ( !(unsigned __int8)Flag::IsZero(v14) ) /*0x627371*/
          break; /*0x627371*/
        if ( v10 >= *((_DWORD *)v12 + 4) ) /*0x62737d*/
        {
          v8 = v34; /*0x62737f*/
          v1 = this; /*0x627383*/
          goto LABEL_19; /*0x627383*/
        }
      }
      v33 = (char *)v14; /*0x6273a7*/
      if ( v14 ) /*0x6273ab*/
      {
        while ( 2 ) /*0x6273b7*/
        {
          v15 = this->q00C; /*0x6273b7*/
          v16 = *(_DWORD *)v15 + 24 * ((*(int (__thiscall **)(char *))(v15 + 4))(v33) % *(_DWORD *)(v15 + 8)); /*0x6273d2*/
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
              if ( (unsigned __int8)String::Equals(v19, v33) ) /*0x6273fa*/
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
            v20 = (FileSystem **)(v19 + 256); /*0x627482*/
            v9 = v37; /*0x627488*/
          }
          v21 = *v20; /*0x627414*/
          if ( *v20 ) /*0x627414*/
          {
            FileSystem::mountDrive(*v20); /*0x62741c*/
            __3_YAXPAX_Z(v21); /*0x627422*/
          }
          v22 = (_DWORD *)this->q00C; /*0x62742e*/
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
              v26 = (Flag *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627454*/
              if ( !(unsigned __int8)Flag::IsZero(v26) ) /*0x627459*/
                break; /*0x627459*/
              if ( v10 >= *(_DWORD *)(v24 + 16) ) /*0x627465*/
              {
                v9 = v37; /*0x627467*/
                v22 = v36; /*0x62746b*/
                goto LABEL_39; /*0x62746b*/
              }
            }
            v33 = (char *)v26; /*0x627490*/
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
    v27 = *(_DWORD **)&v1[12]; /*0x62749e*/
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
    v30 = *(_DWORD **)&v1[12]; /*0x6274c2*/
    if ( v30 ) /*0x6274c9*/
    {
      if ( *v30 ) /*0x6274cb*/
        (**(void (__thiscall ***)(_DWORD, int))*v30)(*v30, 3); /*0x6274d5*/
      __3_YAXPAX_Z(v30); /*0x6274d8*/
    }
  }
}



// ==== 0x006274F0  ObjectClass::method_6274F0  this=ObjectClass  sig=csp ====
int __thiscall sub_6274F0(ObjectClass *this, const char *a2)
{
  int (__thiscall **ptr_C)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int i; // ebx
  int v7; // edi
  char String[256]; // [esp+10h] [ebp-100h] BYREF

  String::CopyUpper(String, a2); /*0x627505*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x62750a*/
  v4 = (int)*ptr_C + 24 * (ptr_C[1](String) % (int)ptr_C[2]); /*0x627521*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x627524*/
  if ( v5 < 0 ) /*0x627525*/
    return 0; /*0x627525*/
  for ( i = 260 * v5; ; i -= 260 ) /*0x62752e*/
  {
    v7 = *(_DWORD *)(v4 + 4) + i; /*0x627536*/
    if ( (unsigned __int8)String::Equals((const char *)v7, String) ) /*0x62753f*/
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
_DWORD *__thiscall MIXFile::Load(MIXFile *this, const char *a2)
{
  MIXFile *v2; // ebp
  int v3; // edx
  Struct *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v8; // ebx
  int i; // esi
  char *v10; // eax
  char v11; // cl
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  char *v15; // ebp
  __int16 *v16; // edx
  char *v17; // eax
  char *inited; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  char *v24; // eax
  char *v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  bool v30; // cc
  __int16 v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  __int16 v33; // [esp+14h] [ebp-410h] BYREF
  char v34; // [esp+16h] [ebp-40Eh]
  int v35; // [esp+18h] [ebp-40Ch]
  MIXFile *v36; // [esp+1Ch] [ebp-408h]
  int v37; // [esp+20h] [ebp-404h]
  char String[256]; // [esp+24h] [ebp-400h] BYREF
  Struct v39[192]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  v36 = this; /*0x62759c*/
  v3 = *(_DWORD *)this->__pad_0; /*0x6275a0*/
  if ( *(_DWORD *)this->__pad_0 == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy(String, a2); /*0x6275d6*/
  strcat(String, (const char *)&off_7E1BC6 + 112 * v3); /*0x627611*/
  strcat(String, asc_826598); /*0x62763d*/
  strcat(String, (const char *)off_836464); /*0x62766a*/
  _strupr(String); /*0x627678*/
  v5 = v39; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
    v5 = (Struct *)((char *)v5 + 3); /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  v7 = SearchMIXFile(String, 0); /*0x62769f*/
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(v39, v7, sizeof(v39)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    v10 = (char *)v39 + 2 * (i % 256) + i % 256; /*0x6276e2*/
    v31 = *(_WORD *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(_WORD *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)v2[1].__pad_0 + 16); /*0x627719*/
  v37 = v12; /*0x62771c*/
  v13 = __2_YAPAXI_Z(0x18u); /*0x627720*/
  v14 = (_DWORD *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(_DWORD *)(v13 + 4) = 0; /*0x627730*/
    *(_DWORD *)(v13 + 8) = 20; /*0x627733*/
    *(_BYTE *)(v13 + 12) = 1; /*0x62773a*/
    *(_BYTE *)(v13 + 13) = 0; /*0x62773e*/
    *(_DWORD *)v13 = &VectorClass<ColorScheme *>::`vftable'; /*0x627742*/
    *(_DWORD *)(v13 + 4) = __2_YAPAXI_Z(0x50u); /*0x627750*/
    *((_BYTE *)v14 + 13) = 1; /*0x627753*/
    *v14 = &DynamicVectorClass<ColorScheme *>::`vftable'; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  v35 = 0; /*0x62776d*/
  if ( v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*((_DWORD *)v2->field_4 + 1) + 4 * v8); /*0x62779b*/
      v16 = (__int16 *)(v32 + *(_DWORD *)(*(_DWORD *)v36[1].__pad_0 + 4)); /*0x6277a1*/
      v33 = *v16; /*0x6277a6*/
      v34 = *((_BYTE *)v16 + 2); /*0x6277ae*/
      v17 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( v17 ) /*0x6277bc*/
        inited = FontClass::InitMetrics(v17, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 1, 0); /*0x6277dc*/
      else
        inited = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(_DWORD *)inited = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((_BYTE *)v14 + 13) || !v20)
        && (v21 = v14[5], v21 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v20 + v21, 0) )
      {
        v22 = v14[4]; /*0x627810*/
        v23 = v14[1]; /*0x627813*/
        v14[4] = v22 + 1; /*0x627819*/
        *(_DWORD *)(v23 + 4 * v22) = inited; /*0x62781c*/
      }
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v25 = FontClass::InitMetrics(v24, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 53, 0); /*0x62784e*/
      else
        v25 = 0; /*0x627852*/
      *(_DWORD *)v25 = v19 + 1; /*0x627855*/
      v26 = v14[2]; /*0x627857*/
      if ( v14[4] < v26 /*0x62787a*/
        || (*((_BYTE *)v14 + 13) || !v26)
        && (v27 = v14[5], v27 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v26 + v27, 0) )
      {
        v28 = v14[4]; /*0x627881*/
        v29 = v14[1]; /*0x627884*/
        v14[4] = v28 + 1; /*0x62788a*/
        *(_DWORD *)(v29 + 4 * v28) = v25; /*0x62788d*/
      }
      v30 = ++v35 < v37; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = v35; /*0x62777d*/
      v2 = v36; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/
}



// ==== 0x006278C0  ObjectClass::method_6278C0  this=ObjectClass  sig=csp ====
char __thiscall sub_6278C0(ObjectClass *this, const char *a2)
{
  int v3; // edx
  _DWORD *v4; // ecx
  int (__thiscall **ptr_C)(char *); // esi
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
  int v18; // [esp+10h] [ebp-208h]
  char String[256]; // [esp+14h] [ebp-204h] BYREF
  char v20[256]; // [esp+114h] [ebp-104h] BYREF
  int v21; // [esp+214h] [ebp-4h]

  v17 = MIXFile::Load((MIXFile *)this, a2); /*0x6278de*/
  v3 = __2_YAPAXI_Z(0x104u); /*0x6278e7*/
  if ( v3 ) /*0x6278ee*/
  {
    strcpy((char *)v3, a2); /*0x627906*/
    v4 = v17; /*0x62790f*/
    v18 = v3; /*0x627913*/
    *(_DWORD *)(v3 + 256) = v4; /*0x627917*/
  }
  else
  {
    v18 = 0; /*0x62791f*/
  }
  String::CopyUpper(String, a2); /*0x62792c*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x627931*/
  v6 = ptr_C[1](String); /*0x627938*/
  v7 = *((_DWORD *)*ptr_C + 6 * (v6 % (int)ptr_C[2]) + 4); /*0x627944*/
  v8 = (int)*ptr_C + 24 * (v6 % (int)ptr_C[2]); /*0x627948*/
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
_DWORD *__thiscall sub_627A10(ObjectClass *this, const char *a2)
{
  int (__thiscall **ptr_C)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebx
  const char *v7; // edi
  int *v8; // edi
  int v9; // esi
  MIXFile *v10; // ecx
  _DWORD *result; // eax
  int v12; // ebp
  int i; // ebx
  int v14; // eax
  void *v15; // edi
  void (__thiscall ***v16)(_DWORD, int); // ecx
  MIXFile *v18; // [esp+10h] [ebp-104h]
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  String::CopyUpper(String, a2); /*0x627a2c*/
  ptr_C = (int (__thiscall **)(char *))this->?; /*0x627a31*/
  v4 = (int)*ptr_C + 24 * (ptr_C[1](String) % (int)ptr_C[2]); /*0x627a48*/
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
      if ( (unsigned __int8)String::Equals(v7, String) ) /*0x627a66*/
        break; /*0x627a66*/
      --v5; /*0x627a73*/
      v6 -= 260; /*0x627a74*/
      if ( v5 < 0 ) /*0x627a7c*/
        goto LABEL_5; /*0x627a7c*/
    }
    v8 = (int *)(v7 + 256); /*0x627b02*/
  }
  v9 = *v8; /*0x627a87*/
  v10 = (MIXFile *)MIXFile::Load((MIXFile *)this, a2); /*0x627a93*/
  result = *(_DWORD **)(v9 + 256); /*0x627a95*/
  v18 = v10; /*0x627a9d*/
  if ( result ) /*0x627aa1*/
  {
    v12 = result[4]; /*0x627aa3*/
    for ( i = 0; i < v12; ++i ) /*0x627aaa*/
    {
      v14 = *(_DWORD *)(*(_DWORD *)(v9 + 256) + 4); /*0x627ab2*/
      v15 = *(void **)(v14 + 4 * i); /*0x627ab5*/
      if ( v15 ) /*0x627aba*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v14 + 4 * i)); /*0x627abe*/
        __3_YAXPAX_Z(v15); /*0x627ac4*/
      }
    }
    v16 = *(void (__thiscall ****)(_DWORD, int))(v9 + 256); /*0x627ad1*/
    if ( v16 ) /*0x627ad9*/
      (**v16)(v16, 1); /*0x627adf*/
    *(_DWORD *)(v9 + 256) = 0; /*0x627ae5*/
    *(_DWORD *)(v9 + 256) = v18; /*0x627aef*/
    return v18->__pad_0; /*0x627ae1*/
  }
  else
  {
    *(_DWORD *)(v9 + 256) = v10; /*0x627b0d*/
  }
  return result; /*0x627af5*/
}



// ==== 0x00627B20  ColorSchemeClass::LoadAllSchemes  this=ColorSchemeClass  sig=csp ====
int __thiscall ColorSchemeClass::LoadAllSchemes(ColorSchemeClass *this, int a2)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // esi
  char *v5; // edi
  int v6; // ecx
  Flag *v7; // ebx
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
  Flag *v26; // ebx
  char *i; // [esp+10h] [ebp-118h]
  char *v28; // [esp+10h] [ebp-118h]
  char *v29; // [esp+10h] [ebp-118h]
  int v30; // [esp+10h] [ebp-118h]
  int v31; // [esp+14h] [ebp-114h]
  int j; // [esp+14h] [ebp-114h]
  int v34; // [esp+1Ch] [ebp-10Ch]
  char String[256]; // [esp+28h] [ebp-100h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 3); /*0x627b2f*/
  *this = (ColorSchemeClass)a2; /*0x627b32*/
  result = v2[2]; /*0x627b35*/
  v4 = 0; /*0x627b38*/
  v34 = 0; /*0x627b41*/
  if ( result > 0 ) /*0x627b49*/
  {
    for ( i = 0; ; i += 24 ) /*0x627b4f*/
    {
      v5 = &i[*v2]; /*0x627b5a*/
      if ( *((int *)v5 + 4) > 0 ) /*0x627b61*/
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
      v7 = (Flag *)(*((_DWORD *)v5 + 1) + 4 * v6); /*0x627b6e*/
      result = Flag::IsZero(v7); /*0x627b73*/
      if ( !(_BYTE)result ) /*0x627b7a*/
        break; /*0x627b7a*/
      if ( v4 >= *((_DWORD *)v5 + 4) ) /*0x627b7f*/
        goto LABEL_6; /*0x627b7f*/
    }
    v28 = (char *)v7; /*0x627bad*/
    if ( v7 ) /*0x627bb1*/
    {
      do /*0x627d0c*/
      {
        String::CopyUpper(String, v28); /*0x627bc0*/
        v9 = *((_DWORD *)this + 3); /*0x627bc9*/
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
            if ( (unsigned __int8)String::Equals(v15, String) ) /*0x627c08*/
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
        v29 = (char *)MIXFile::Load((MIXFile *)this, v28); /*0x627c32*/
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
              ColorScheme::Destructor(*(ColorScheme **)(v19 + 4 * v18)); /*0x627c5f*/
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
        v23 = (_DWORD *)*((_DWORD *)this + 3); /*0x627ca2*/
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
          v26 = (Flag *)(*(_DWORD *)(v24 + 4) + 4 * v25); /*0x627cc9*/
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
        v28 = (char *)v26; /*0x627d08*/
      }
      while ( v26 ); /*0x627d0c*/
    }
  }
  return result; /*0x627b9e*/
}



// ==== 0x00627D20  _DynamicVectorClass_PAVColorScheme::Clear_627D20  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D20(
        _DynamicVectorClass_PAVColorScheme *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d26*/
  this->m_10 = 0; /*0x627d29*/
  if ( v2 && BYTE1(this->m_C) ) /*0x627d30*/
  {
    __3_YAXPAX_Z(v2); /*0x627d36*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627d3e*/
  }
  BYTE1(this->m_C) = 0; /*0x627d41*/
  this->m_8 = 0; /*0x627d44*/
}



// ==== 0x00627D50  _DynamicVectorClass_PAVColorScheme::GetCount  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetCount(
        _DynamicVectorClass_PAVColorScheme *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627d50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x627d65*/
  else
    return 0; /*0x627d57*/
}



// ==== 0x00627D70  _VectorClass_PAVColorScheme::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::Get(_VectorClass_PAVColorScheme *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x627d7a*/
}



// ==== 0x00627D80  _DynamicVectorClass_VHSVClass::Clear_627D80  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear_627D80(
        _DynamicVectorClass_VHSVClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x627d86*/
  this->m_10 = 0; /*0x627d89*/
  if ( v2 && BYTE1(this->m_C) ) /*0x627d90*/
  {
    __3_YAXPAX_Z(v2); /*0x627d96*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627d9e*/
  }
  BYTE1(this->m_C) = 0; /*0x627da1*/
  this->m_8 = 0; /*0x627da4*/
}



// ==== 0x00627DB0  _DynamicVectorClass_VHSVClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItemIndex(
        _DynamicVectorClass_VHSVClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627db0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x627dce*/
  else
    return 0; /*0x627db7*/
}



// ==== 0x00627DE0  _VectorClass_VHSVClass::GetItem  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetItem(
        _VectorClass_VHSVClass *this,
        int a2,
        int a3)
{
  int v3; // ecx

  v3 = *(_DWORD *)&this->m_1[3] + 3 * a3; /*0x627ded*/
  *(_WORD *)a2 = *(_WORD *)v3; /*0x627df8*/
  *(_BYTE *)(a2 + 2) = *(_BYTE *)(v3 + 2); /*0x627dff*/
  return a2; /*0x627dfb*/
}



// ==== 0x00627E10  _VectorClass_PAVColorScheme::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::Add(_VectorClass_PAVColorScheme *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x627e12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x627e1d*/
  {
    v3 = 0; /*0x627e1f*/
    if ( m_8 <= 0 ) /*0x627e23*/
      return 1; /*0x627e43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x627e25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x627e2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x627e34*/
    {
      ++v3; /*0x627e36*/
      ++v4; /*0x627e37*/
      if ( v3 >= m_8 ) /*0x627e3c*/
        return 1; /*0x627e3c*/
    }
  }
  return 0; /*0x627e3e*/
}



// ==== 0x00627E50  _VectorClass_PAVColorScheme::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::Release(_VectorClass_PAVColorScheme *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x627e5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x627e66*/
    if ( a3 ) /*0x627e6c*/
      v4 = a3; /*0x627e82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x627e7e*/
    LOBYTE(this->m_C) = 1; /*0x627e86*/
    if ( v4 ) /*0x627e8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x627e95*/
      {
        m_8 = this->m_8; /*0x627e9c*/
        if ( a2 < m_8 ) /*0x627ea1*/
          m_8 = a2; /*0x627ea3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x627ea9*/
          ++i; /*0x627eae*/
        if ( BYTE1(this->m_C) ) /*0x627ebb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627ec6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x627ece*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x627ed7*/
      this->m_8 = a2; /*0x627edf*/
      BYTE1(this->m_C) = a3 == 0; /*0x627ee2*/
      return 1; /*0x627ee8*/
    }
    else
    {
      return 0; /*0x627e8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVColorScheme *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x627ef2*/
    return 1; /*0x627ef8*/
  }
}



// ==== 0x00627F00  _VectorClass_PAVColorScheme::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Remove(_VectorClass_PAVColorScheme *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x627f0d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627f13*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x627f1b*/
  }
  BYTE1(this->m_C) = 0; /*0x627f1e*/
  this->m_8 = 0; /*0x627f21*/
}



// ==== 0x00627F30  _VectorClass_PAVColorScheme::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::GetSize(_VectorClass_PAVColorScheme *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x627f30*/
    return 0; /*0x627f38*/
  m_8 = this->m_8; /*0x627f3e*/
  result = 0; /*0x627f41*/
  if ( m_8 <= 0 ) /*0x627f45*/
    return -1; /*0x627f5c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x627f4b*/
  {
    if ( ++result >= m_8 ) /*0x627f5a*/
      return -1; /*0x627f5a*/
  }
  return result; /*0x627f3a*/
}



// ==== 0x00627F70  _VectorClass_PAVColorScheme::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetCapacity(_VectorClass_PAVColorScheme *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x627f70*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x627f85*/
  else
    return 0; /*0x627f77*/
}



// ==== 0x00627F90  _DynamicVectorClass_PAVColorScheme::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity(
        _DynamicVectorClass_PAVColorScheme *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x627f9c*/
  {
    LOBYTE(this->m_C) = 0; /*0x627fa2*/
    if ( a3 ) /*0x627fa8*/
      v4 = a3; /*0x627fbe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x627fba*/
    LOBYTE(this->m_C) = 1; /*0x627fc2*/
    if ( !v4 ) /*0x627fc6*/
      return 0; /*0x62803a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x627fc8*/
    {
      m_8 = this->m_8; /*0x627fcf*/
      if ( a2 < m_8 ) /*0x627fd4*/
        m_8 = a2; /*0x627fd6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x627fdc*/
        ++i; /*0x627fe1*/
      if ( BYTE1(this->m_C) ) /*0x627fee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x627ff9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628001*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x62800a*/
    this->m_8 = a2; /*0x628012*/
    BYTE1(this->m_C) = a3 == 0; /*0x628015*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVColorScheme *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62801e*/
  }
  v7 = this->m_8; /*0x628021*/
  if ( v7 < this->m_10 ) /*0x628029*/
    this->m_10 = v7; /*0x62802b*/
  return 1; /*0x62802e*/
}



// ==== 0x00628040  _DynamicVectorClass_PAVColorScheme::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::FindItemIndex(
        _DynamicVectorClass_PAVColorScheme *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x628040*/
  result = 0; /*0x628043*/
  if ( m_10 <= 0 ) /*0x628048*/
    return -1; /*0x62805f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62804e*/
  {
    if ( ++result >= m_10 ) /*0x62805d*/
      return -1; /*0x62805d*/
  }
  return result; /*0x628062*/
}



// ==== 0x00628070  DynamicVectorArray::Constructor  this=DynamicVectorArray  sig=csp ====
int *__thiscall DynamicVectorArray::Constructor(DynamicVectorArray *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int *v6; // eax
  int v7; // ecx
  _DWORD *v8; // ebp
  _DWORD *v9; // eax
  int v10; // edx
  DynamicVectorArray v11; // eax
  int v12; // edx
  int v13; // eax

  v4 = a2; /*0x62807b*/
  *((_DWORD *)this + 1) = a4; /*0x628084*/
  *((_DWORD *)this + 2) = a3; /*0x628087*/
  *((_DWORD *)this + 3) = a2; /*0x628091*/
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
        *v9 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6280c6*/
        *v9 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6280cc*/
        v9[5] = 10; /*0x6280d2*/
        v9[4] = 0; /*0x6280d5*/
        v9 += 6; /*0x6280d8*/
        --v10; /*0x6280db*/
      }
      while ( v10 ); /*0x6280dc*/
      v4 = a2; /*0x6280de*/
    }
    v11 = (DynamicVectorArray)v8; /*0x6280e2*/
  }
  else
  {
    v11 = 0; /*0x6280e7*/
  }
  v12 = *((_DWORD *)this + 2); /*0x6280e9*/
  *this = v11; /*0x6280ec*/
  v13 = 0; /*0x6280ee*/
  if ( v12 > 0 ) /*0x6280f2*/
  {
    do /*0x628103*/
    {
      ++v13; /*0x6280f6*/
      *(_DWORD *)(v7 + *(_DWORD *)this + 20) = v4; /*0x6280f7*/
      v7 += 24; /*0x6280fe*/
    }
    while ( v13 < *((_DWORD *)this + 2) ); /*0x628103*/
  }
  return (int *)this; /*0x628107*/
}



// ==== 0x00628110  FileSystem::openFile  this=FileSystem  sig=csp ====
const char *__thiscall FileSystem::openFile(FileSystem *this, const char *a2)
{
  int v2; // ebp
  int v3; // edi
  int i; // ebx
  const char *v5; // esi

  v2 = *(_DWORD *)this + 24 * ((*((int (__thiscall **)(const char *))this + 1))(a2) % this->q008); /*0x62812a*/
  v3 = *(_DWORD *)(v2 + 16) - 1; /*0x62812d*/
  if ( v3 < 0 ) /*0x62812e*/
    return 0; /*0x62815a*/
  for ( i = 260 * v3; ; i -= 260 ) /*0x628137*/
  {
    v5 = (const char *)(i + *(_DWORD *)(v2 + 4)); /*0x628141*/
    if ( (unsigned __int8)String::Equals(v5, a2) ) /*0x628146*/
      break; /*0x628146*/
    if ( --v3 < 0 ) /*0x628158*/
      return 0; /*0x628158*/
  }
  return v5 + 256; /*0x62815a*/
}



// ==== 0x00628170  FileSystem::closeFile  this=FileSystem  sig=csp ====
_BYTE *__thiscall FileSystem::closeFile(FileSystem *this, int *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // edx
  Flag *v6; // ebp
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
    v4 = *(_DWORD *)this + 24 * *a2; /*0x628194*/
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
    v6 = (Flag *)(v5 + 260 * v3); /*0x6281ad*/
    if ( !(unsigned __int8)Flag::IsZero(v6) ) /*0x6281b2*/
      return v6->__pad_0; /*0x6281de*/
    v3 = a2[1]; /*0x6281bb*/
    if ( v3 >= *(_DWORD *)(v4 + 16) ) /*0x6281c3*/
      goto LABEL_6; /*0x6281c3*/
  }
}



// ==== 0x006281F0  _VectorClass_VHSVClass::IsEqualTo  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::IsEqualTo(
        _VectorClass_VHSVClass *this,
        int a2)
{
  int m_8; // eax
  int v4; // ebx
  int i; // esi

  m_8 = this->m_8; /*0x6281fd*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x628202*/
  {
    v4 = 0; /*0x628204*/
    if ( m_8 <= 0 ) /*0x628208*/
      return 1; /*0x628231*/
    for ( i = 0; /*0x62820a*/
          !DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::HashEntryCompare(
             (DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode *)(i + *(_DWORD *)&this->m_1[3]),
             (_BYTE *)(i + *(_DWORD *)(a2 + 4)));
          i += 3 )
    {
      if ( ++v4 >= this->m_8 ) /*0x628229*/
        return 1; /*0x628229*/
    }
  }
  return 0; /*0x62822b*/
}



// ==== 0x00628240  FileExtension::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall FileExtension::Constructor(FileExtension *this, int a2, int a3)
{
  _BYTE *v4; // eax
  int v5; // ecx
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx

  this->FileExtension_field_0x04 = 0; /*0x62824d*/
  this->FileExtension_field_0x08 = a2; /*0x628250*/
  LOBYTE(this->FileExtension_field_0x0C) = 1; /*0x628253*/
  BYTE1(this->FileExtension_field_0x0C) = 0; /*0x628257*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x62825a*/
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
      this->FileExtension_field_0x04 = a3; /*0x628283*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(3 * a2); /*0x62828c*/
      if ( v6 ) /*0x628296*/
      {
        if ( a2 - 1 >= 0 ) /*0x62829d*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x62829f*/
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
      this->FileExtension_field_0x04 = v6; /*0x6282b5*/
      BYTE1(this->FileExtension_field_0x0C) = 1; /*0x6282b8*/
    }
  }
  *(_DWORD *)this->__pad_0 = &DynamicVectorClass<HSVClass>::`vftable'; /*0x6282bc*/
  *((_DWORD *)this + 5) = 10; /*0x6282c2*/
  this->Items = 0; /*0x6282c9*/
  return this->__pad_0; /*0x6282ce*/
}



// ==== 0x006282E0  _VectorClass_VHSVClass::SetCapacity  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::SetCapacity(_VectorClass_VHSVClass *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v13; // eax
  int v14; // edx
  char *v15; // ebx

  v3 = a2; /*0x6282e2*/
  if ( a2 ) /*0x6282ee*/
  {
    v5 = a3; /*0x6282f4*/
    LOBYTE(this->m_C) = 0; /*0x6282f8*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x628304*/
      if ( v6 ) /*0x62830e*/
      {
        if ( a2 - 1 >= 0 ) /*0x628315*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x628317*/
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
        v5 = (char *)v6; /*0x628329*/
      }
      else
      {
        v5 = 0; /*0x62832d*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x62834c*/
    if ( v5 ) /*0x628350*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62835b*/
      {
        m_8 = this->m_8; /*0x628360*/
        if ( a2 < m_8 ) /*0x628365*/
          m_8 = a2; /*0x628367*/
        if ( m_8 > 0 ) /*0x62836b*/
        {
          v13 = 0; /*0x62836d*/
          do /*0x628389*/
          {
            v14 = *(_DWORD *)&this->m_1[3] + v13; /*0x628374*/
            v15 = &v5[v13]; /*0x628376*/
            v13 += 3; /*0x628379*/
            --m_8; /*0x62837c*/
            *(_WORD *)v15 = *(_WORD *)v14; /*0x628380*/
            v15[2] = *(_BYTE *)(v14 + 2); /*0x628386*/
          }
          while ( m_8 ); /*0x628389*/
          v3 = a2; /*0x62838b*/
        }
        if ( BYTE1(this->m_C) ) /*0x628391*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62839a*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6283a2*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v5; /*0x6283ad*/
      this->m_8 = v3; /*0x6283b3*/
      BYTE1(this->m_C) = a3 == 0; /*0x6283b6*/
      return 1; /*0x6283bc*/
    }
    else
    {
      return 0; /*0x628355*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_VHSVClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6283c6*/
    return 1; /*0x6283cc*/
  }
}



// ==== 0x006283E0  _VectorClass_VHSVClass::Destroy  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Destroy(_VectorClass_VHSVClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x6283ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6283f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6283fb*/
  }
  BYTE1(this->m_C) = 0; /*0x6283fe*/
  this->m_8 = 0; /*0x628401*/
}



// ==== 0x00628410  _VectorClass_VHSVClass::ScalarDeletingDestructor  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::ScalarDeletingDestructor(_VectorClass_VHSVClass *this, int a2)
{
  if ( !LOBYTE(this->m_C) ) /*0x628416*/
    return 0; /*0x628420*/
  if ( this->m_8 > 0 ) /*0x62842d*/
    VtableStub::5175D0(); /*0x62843c*/
  return -1; /*0x62841d*/
}



// ==== 0x00628470  _VectorClass_VHSVClass::GetItemIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetItemIndex(_VectorClass_VHSVClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628470*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 3u; /*0x62848e*/
  else
    return 0; /*0x628477*/
}



// ==== 0x006284A0  _DynamicVectorClass_VHSVClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::SetCapacity_0(
        _DynamicVectorClass_VHSVClass *this,
        int a2,
        char *a3)
{
  int v3; // ebp
  char *v5; // edi
  int v6; // eax
  _BYTE *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int m_8; // ecx
  int v12; // eax
  int v13; // edx
  char *v14; // ebx
  int v15; // eax

  v3 = a2; /*0x6284a2*/
  if ( a2 ) /*0x6284ae*/
  {
    v5 = a3; /*0x6284b4*/
    LOBYTE(this->m_C) = 0; /*0x6284b8*/
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
      v6 = __2_YAPAXI_Z(3 * a2); /*0x6284c4*/
      if ( v6 ) /*0x6284ce*/
      {
        if ( a2 - 1 >= 0 ) /*0x6284d5*/
        {
          v7 = (_BYTE *)(v6 + 2); /*0x6284d7*/
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
        v5 = (char *)v6; /*0x6284e9*/
      }
      else
      {
        v5 = 0; /*0x6284ed*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x62850c*/
    if ( !v5 ) /*0x628510*/
      return 0; /*0x628592*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x628512*/
    {
      m_8 = this->m_8; /*0x628517*/
      if ( a2 < m_8 ) /*0x62851c*/
        m_8 = a2; /*0x62851e*/
      if ( m_8 > 0 ) /*0x628522*/
      {
        v12 = 0; /*0x628524*/
        do /*0x628540*/
        {
          v13 = *(_DWORD *)&this->m_1[3] + v12; /*0x62852b*/
          v14 = &v5[v12]; /*0x62852d*/
          v12 += 3; /*0x628530*/
          --m_8; /*0x628533*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x628537*/
          v14[2] = *(_BYTE *)(v13 + 2); /*0x62853d*/
        }
        while ( m_8 ); /*0x628540*/
        v3 = a2; /*0x628542*/
      }
      if ( BYTE1(this->m_C) ) /*0x628548*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628551*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628559*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v5; /*0x628564*/
    this->m_8 = v3; /*0x62856a*/
    BYTE1(this->m_C) = a3 == 0; /*0x62856d*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_VHSVClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628576*/
  }
  v15 = this->m_8; /*0x628579*/
  if ( v15 < this->m_10 ) /*0x628581*/
    this->m_10 = v15; /*0x628583*/
  return 1; /*0x628586*/
}



// ==== 0x006285A0  _DynamicVectorClass_VHSVClass::ProcessAll  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ProcessAll(
        _DynamicVectorClass_VHSVClass *this,
        int a2)
{
  if ( this->m_10 > 0 ) /*0x6285ad*/
    VtableStub::5175D0(); /*0x6285bc*/
  return -1; /*0x6285d0*/
}



// ==== 0x006285F0  _VectorClass_PAVColorScheme::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::QueryInterface(_VectorClass_PAVColorScheme *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6285f3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ColorScheme *>::`vftable'; /*0x6285f6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628600*/
  {
    __3_YAXPAX_Z(v3); /*0x628608*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628610*/
  }
  BYTE1(this->m_C) = 0; /*0x62861b*/
  this->m_8 = 0; /*0x628621*/
  if ( (a2 & 1) != 0 ) /*0x628628*/
    __3_YAXPAX_Z(this); /*0x62862b*/
  return this->__pad_0; /*0x628635*/
}



// ==== 0x00628640  _DynamicVectorClass_PAVColorScheme::Destructor_1  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_1(
        _DynamicVectorClass_PAVColorScheme *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628643*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ColorScheme *>::`vftable'; /*0x628646*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628650*/
  {
    __3_YAXPAX_Z(v3); /*0x628658*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628660*/
  }
  BYTE1(this->m_C) = 0; /*0x62866b*/
  this->m_8 = 0; /*0x628671*/
  if ( (a2 & 1) != 0 ) /*0x628678*/
    __3_YAXPAX_Z(this); /*0x62867b*/
  return this->__pad_0; /*0x628685*/
}



// ==== 0x00628690  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Add  this=DynamicVector  sig=csp ====
char *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Add(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        char a2)
{
  int v3; // eax
  char *v4; // ebp
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x62869a*/
  {
    v3 = *((_DWORD *)this - 1); /*0x62869c*/
    v4 = (char *)this - 4; /*0x6286a0*/
    v5 = 3 * v3; /*0x6286a3*/
    v6 = v3 - 1; /*0x6286a6*/
    v7 = &this->__pad_0[8 * v5]; /*0x6286a7*/
    if ( v6 >= 0 ) /*0x6286aa*/
    {
      v8 = v6 + 1; /*0x6286ad*/
      do /*0x6286da*/
      {
        v9 = (void *)*((_DWORD *)v7 - 5); /*0x6286b2*/
        v7 -= 24; /*0x6286b5*/
        *(_DWORD *)v7 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6286ba*/
        if ( v9 && v7[13] ) /*0x6286c2*/
        {
          __3_YAXPAX_Z(v9); /*0x6286c8*/
          *((_DWORD *)v7 + 1) = 0; /*0x6286d0*/
        }
        --v8; /*0x6286d3*/
        v7[13] = 0; /*0x6286d4*/
        *((_DWORD *)v7 + 2) = 0; /*0x6286d7*/
      }
      while ( v8 ); /*0x6286da*/
    }
    if ( (a2 & 1) != 0 ) /*0x6286e2*/
      __3_YAXPAX_Z(v4); /*0x6286e5*/
    return v4; /*0x6286ed*/
  }
  else
  {
    v11 = *(void **)&this->m_1[3]; /*0x6286f5*/
    *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x6286fc*/
    if ( v11 && BYTE1(this->m_C) ) /*0x628704*/
    {
      __3_YAXPAX_Z(v11); /*0x62870a*/
      *(_DWORD *)&this->m_1[3] = 0; /*0x628712*/
    }
    BYTE1(this->m_C) = 0; /*0x628719*/
    this->m_8 = 0; /*0x62871e*/
    if ( (a2 & 1) != 0 ) /*0x628721*/
      __3_YAXPAX_Z(this); /*0x628724*/
    return this->__pad_0; /*0x62872c*/
  }
}



// ==== 0x00628740  FileSystem::readFile  this=DynamicVector  sig=csp ====
int __thiscall FileSystem::readFile(FileSystem *this)
{
  this->IsInitialized = 1; /*0x628742*/
  this->Items = 0; /*0x628746*/
  this->q008 = 0; /*0x628749*/
  this->IsAllocated = 0; /*0x62874c*/
  *(_DWORD *)this = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x62874f*/
  this->CapacityIncrement = 10; /*0x628755*/
  this->Items = 0; /*0x62875c*/
  return 0; /*0x62875f*/
}



// ==== 0x00628760  _VectorClass_VHSVClass::Constructor_VectorClass_HSVClass_  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::Constructor_VectorClass_HSVClass_(
        _VectorClass_VHSVClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x628766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628770*/
  {
    __3_YAXPAX_Z(v3); /*0x628778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628780*/
  }
  BYTE1(this->m_C) = 0; /*0x62878b*/
  this->m_8 = 0; /*0x628791*/
  if ( (a2 & 1) != 0 ) /*0x628798*/
    __3_YAXPAX_Z(this); /*0x62879b*/
  return this->__pad_0; /*0x6287a5*/
}



// ==== 0x006287B0  _DynamicVectorClass_VHSVClass::Destructor_2  this=DynamicVector  sig=csp ====
_DWORD *__thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Destructor_2(
        _DynamicVectorClass_VHSVClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x6287b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HSVClass>::`vftable'; /*0x6287b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x6287c0*/
  {
    __3_YAXPAX_Z(v3); /*0x6287c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6287d0*/
  }
  BYTE1(this->m_C) = 0; /*0x6287db*/
  this->m_8 = 0; /*0x6287e1*/
  if ( (a2 & 1) != 0 ) /*0x6287e8*/
    __3_YAXPAX_Z(this); /*0x6287eb*/
  return this->__pad_0; /*0x6287f5*/
}



// ==== 0x00628800  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::ddtor  this=DynamicVector  sig=csp ====
void __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::ddtor(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x628806*/
  this->m_10 = 0; /*0x628809*/
  if ( v2 && BYTE1(this->m_C) ) /*0x628810*/
  {
    __3_YAXPAX_Z(v2); /*0x628816*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62881e*/
  }
  BYTE1(this->m_C) = 0; /*0x628821*/
  this->m_8 = 0; /*0x628824*/
}



// ==== 0x00628830  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Get  this=DynamicVector  sig=csp ====
unsigned int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Get(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628830*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x104u; /*0x62884e*/
  else
    return 0; /*0x628837*/
}



// ==== 0x00628860  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Clear  this=VectorClass  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Clear(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        int a3)
{
  int v3; // esi

  v3 = *(_DWORD *)&this->m_1[3] + 260 * a3; /*0x628876*/
  String::Copy((char *)a2, (const char *)v3); /*0x62887a*/
  *(_DWORD *)(a2 + 256) = *(_DWORD *)(v3 + 256); /*0x628887*/
  return a2; /*0x62888d*/
}



// ==== 0x006288A0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::AddRef  this=VectorClass  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::AddRef(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  int m_8; // eax

  m_8 = this->m_8; /*0x6288ad*/
  if ( m_8 != *(_DWORD *)(a2 + 8) ) /*0x6288b2*/
    return 0; /*0x6288e9*/
  if ( m_8 > 0 ) /*0x6288b8*/
    j_Stub_InfiniteLoop(*(_DWORD *)&this->m_1[3], *(_DWORD *)(a2 + 4)); /*0x6288c6*/
  return 1; /*0x6288dd*/
}



// ==== 0x006288F0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_0  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ColorScheme::SetCapacity_0(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        _BYTE *a3)
{
  int v3; // edi
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v11; // ebx
  char *v12; // edi
  int v13; // esi
  int v14; // [esp+10h] [ebp-8h]
  char *v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x6288f7*/
  if ( a2 ) /*0x6288ff*/
  {
    v5 = (Byte *)a3; /*0x628905*/
    LOBYTE(this->m_C) = 0; /*0x628909*/
    if ( a3 ) /*0x62890f*/
    {
      if ( a2 - 1 >= 0 ) /*0x628965*/
      {
        v8 = a2; /*0x628967*/
        do /*0x628978*/
        {
          Byte::Zero(v5); /*0x62896c*/
          v5 += 65; /*0x628971*/
          --v8; /*0x628977*/
        }
        while ( v8 ); /*0x628978*/
      }
      v15 = a3; /*0x62897e*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(260 * a2); /*0x628921*/
      if ( v6 ) /*0x628928*/
      {
        v7 = (Byte *)v6; /*0x62892d*/
        if ( a2 - 1 >= 0 ) /*0x628931*/
        {
          v14 = a2; /*0x628934*/
          do /*0x62894e*/
          {
            Byte::Zero(v7); /*0x62893a*/
            v7 += 65; /*0x628943*/
            --v14; /*0x62894a*/
          }
          while ( v14 ); /*0x62894e*/
        }
        v15 = (char *)v6; /*0x628950*/
      }
      else
      {
        v15 = 0; /*0x628956*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x628986*/
    if ( v15 ) /*0x62898c*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62899a*/
      {
        m_8 = this->m_8; /*0x6289a1*/
        if ( a2 < m_8 ) /*0x6289a6*/
          m_8 = a2; /*0x6289a8*/
        if ( m_8 > 0 ) /*0x6289ac*/
        {
          v11 = 0; /*0x6289ae*/
          v12 = v15; /*0x6289b0*/
          v16 = m_8; /*0x6289b2*/
          do /*0x6289e4*/
          {
            v13 = v11 + *(_DWORD *)&this->m_1[3]; /*0x6289bb*/
            String::CopyChecked(v12, (const char *)v13); /*0x6289be*/
            *((_DWORD *)v12 + 64) = *(_DWORD *)(v13 + 256); /*0x6289cd*/
            v11 += 260; /*0x6289d3*/
            v12 += 260; /*0x6289d9*/
            --v16; /*0x6289e0*/
          }
          while ( v16 ); /*0x6289e4*/
          v3 = a2; /*0x6289e6*/
        }
        if ( BYTE1(this->m_C) ) /*0x6289ea*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6289f5*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x6289fd*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v15; /*0x628a0a*/
      this->m_8 = v3; /*0x628a13*/
      BYTE1(this->m_C) = a3 == 0; /*0x628a1a*/
      return 1; /*0x628a1f*/
    }
    else
    {
      return 0; /*0x628991*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628a2d*/
    return 1; /*0x628a33*/
  }
}



// ==== 0x00628A40  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Destroy_0  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ColorScheme::Destroy_0(_VectorClass_U_HashObject_VHashString_PAVSchemeNode *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x628a4d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628a53*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628a5b*/
  }
  BYTE1(this->m_C) = 0; /*0x628a5e*/
  this->m_8 = 0; /*0x628a61*/
}



// ==== 0x00628A70  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::SetCapacity_1  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ColorScheme::SetCapacity_1(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( !LOBYTE(this->m_C) ) /*0x628a76*/
    return 0; /*0x628a80*/
  if ( this->m_8 > 0 ) /*0x628a8d*/
    Stub::InfiniteLoop(*(_DWORD *)&this->m_1[3], a2); /*0x628a9c*/
  return -1; /*0x628a7d*/
}



// ==== 0x00628AD0  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::GetItemIndex_0  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ColorScheme::GetItemIndex_0(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x628ad0*/
    return (a2 - *(_DWORD *)&this->m_1[3]) / 0x104u; /*0x628aee*/
  else
    return 0; /*0x628ad7*/
}



// ==== 0x00628B00  VectorClass::sub_628B00  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_628B00(VectorClass *this, int a2, _BYTE *a3)
{
  int v3; // esi
  Byte *v5; // ebp
  Byte *v6; // ebx
  Byte *v7; // ebp

  v3 = a2; /*0x628b03*/
  this->Items = 0; /*0x628b0c*/
  this->Capacity = a2; /*0x628b13*/
  this->IsInitialized = 1; /*0x628b16*/
  this->IsAllocated = 0; /*0x628b1a*/
  this->ptr_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628b1e*/
  if ( a2 ) /*0x628b24*/
  {
    if ( a3 ) /*0x628b2c*/
    {
      v5 = (Byte *)a3; /*0x628b31*/
      if ( a2 - 1 >= 0 ) /*0x628b35*/
      {
        do /*0x628b48*/
        {
          Byte::Zero(v5); /*0x628b3c*/
          v5 += 65; /*0x628b41*/
          --v3; /*0x628b47*/
        }
        while ( v3 ); /*0x628b48*/
      }
      this->Items = a3; /*0x628b4a*/
    }
    else
    {
      v6 = (Byte *)__2_YAPAXI_Z(260 * a2); /*0x628b5f*/
      if ( v6 ) /*0x628b66*/
      {
        v7 = v6; /*0x628b6b*/
        if ( a2 - 1 >= 0 ) /*0x628b6f*/
        {
          do /*0x628b82*/
          {
            Byte::Zero(v7); /*0x628b76*/
            v7 += 65; /*0x628b7b*/
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
      this->IsAllocated = 1; /*0x628b8b*/
    }
  }
  this->ptr_0 = &DynamicVectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628b8f*/
  *((_DWORD *)this + 5) = 10; /*0x628b95*/
  this->Items = 0; /*0x628b9c*/
  return &this->ptr_0; /*0x628ba5*/
}



// ==== 0x00628BB0  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::Remove  this=DynamicVector  sig=csp ====
char __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::Remove(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2,
        _BYTE *a3)
{
  int v3; // edi
  Byte *v5; // esi
  int v6; // ebx
  Byte *v7; // esi
  int v8; // ebx
  int m_8; // eax
  int v10; // ebx
  char *v11; // edi
  int v12; // esi
  int v13; // eax
  int v15; // [esp+10h] [ebp-8h]
  char *v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x628bb7*/
  if ( a2 ) /*0x628bbf*/
  {
    v5 = (Byte *)a3; /*0x628bc5*/
    LOBYTE(this->m_C) = 0; /*0x628bc9*/
    if ( a3 ) /*0x628bcf*/
    {
      if ( a2 - 1 >= 0 ) /*0x628c25*/
      {
        v8 = a2; /*0x628c27*/
        do /*0x628c38*/
        {
          Byte::Zero(v5); /*0x628c2c*/
          v5 += 65; /*0x628c31*/
          --v8; /*0x628c37*/
        }
        while ( v8 ); /*0x628c38*/
      }
      v16 = a3; /*0x628c3e*/
    }
    else
    {
      v6 = __2_YAPAXI_Z(260 * a2); /*0x628be1*/
      if ( v6 ) /*0x628be8*/
      {
        v7 = (Byte *)v6; /*0x628bed*/
        if ( a2 - 1 >= 0 ) /*0x628bf1*/
        {
          v15 = a2; /*0x628bf4*/
          do /*0x628c0e*/
          {
            Byte::Zero(v7); /*0x628bfa*/
            v7 += 65; /*0x628c03*/
            --v15; /*0x628c0a*/
          }
          while ( v15 ); /*0x628c0e*/
        }
        v16 = (char *)v6; /*0x628c10*/
      }
      else
      {
        v16 = 0; /*0x628c16*/
      }
    }
    LOBYTE(this->m_C) = 1; /*0x628c46*/
    if ( !v16 ) /*0x628c4c*/
      return 0; /*0x628cfa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x628c52*/
    {
      m_8 = this->m_8; /*0x628c59*/
      if ( a2 < m_8 ) /*0x628c5e*/
        m_8 = a2; /*0x628c60*/
      if ( m_8 > 0 ) /*0x628c64*/
      {
        v10 = 0; /*0x628c66*/
        v11 = v16; /*0x628c68*/
        v17 = m_8; /*0x628c6a*/
        do /*0x628c9c*/
        {
          v12 = v10 + *(_DWORD *)&this->m_1[3]; /*0x628c73*/
          String::CopyChecked(v11, (const char *)v12); /*0x628c76*/
          *((_DWORD *)v11 + 64) = *(_DWORD *)(v12 + 256); /*0x628c85*/
          v10 += 260; /*0x628c8b*/
          v11 += 260; /*0x628c91*/
          --v17; /*0x628c98*/
        }
        while ( v17 ); /*0x628c9c*/
        v3 = a2; /*0x628c9e*/
      }
      if ( BYTE1(this->m_C) ) /*0x628ca2*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x628cad*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x628cb5*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v16; /*0x628cc2*/
    this->m_8 = v3; /*0x628cce*/
    BYTE1(this->m_C) = a3 == 0; /*0x628cd1*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x628cdb*/
  }
  v13 = this->m_8; /*0x628cde*/
  if ( v13 < this->m_10 ) /*0x628ce6*/
    this->m_10 = v13; /*0x628ce8*/
  return 1; /*0x628ceb*/
}



// ==== 0x00628D10  FileExtension::CheckExtensionMatch  this=FileExtension  sig=csp ====
char __thiscall FileExtension::CheckExtensionMatch(FileExtension *this, int a2)
{
  int FileExtension_field_0x08; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int FileExtension_field_0x04; // eax
  int v10; // esi

  FileExtension_field_0x08 = this->FileExtension_field_0x08; /*0x628d13*/
  if ( this->q004 >= FileExtension_field_0x08 ) /*0x628d1b*/
  {
    if ( !BYTE1(this->FileExtension_field_0x0C) && FileExtension_field_0x08 ) /*0x628d26*/
      return 0; /*0x628d26*/
    v4 = *((_DWORD *)this + 5); /*0x628d28*/
    if ( v4 <= 0 /*0x628d38*/
      || !(*(unsigned __int8 (__thiscall **)(FileExtension *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 8))(
            this,
            FileExtension_field_0x08 + v4,
            0) )
    {
      return 0; /*0x628d3f*/
    }
  }
  v6 = this->q004; /*0x628d45*/
  v7 = v6 + 1; /*0x628d52*/
  v8 = 65 * v6; /*0x628d55*/
  FileExtension_field_0x04 = this->FileExtension_field_0x04; /*0x628d57*/
  this->q004 = v7; /*0x628d5a*/
  v10 = FileExtension_field_0x04 + 4 * v8; /*0x628d5e*/
  String::CopyChecked((char *)v10, (const char *)a2); /*0x628d63*/
  *(_DWORD *)(v10 + 256) = *(_DWORD *)(a2 + 256); /*0x628d6f*/
  return 1; /*0x628d41*/
}



// ==== 0x00628D80  _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode::GetSize  this=DynamicVector  sig=csp ====
int __thiscall DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode::GetSize(
        _DynamicVectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        int a2)
{
  if ( this->m_10 > 0 ) /*0x628d8d*/
    Stub::InfiniteLoop(*(_DWORD *)&this->m_1[3], a2); /*0x628d9c*/
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
_DWORD *__thiscall VectorClass::ConstructHSV(VectorClass *this, int a2, int a3)
{
  void *v4; // ebx
  _BYTE *v5; // eax
  int v6; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  int v10; // edx

  v4 = 0; /*0x628df9*/
  this->Items = 0; /*0x628dfd*/
  this->Capacity = a2; /*0x628e00*/
  this->IsInitialized = 1; /*0x628e03*/
  this->IsAllocated = 0; /*0x628e07*/
  this->ptr_0 = &VectorClass<HSVClass>::`vftable'; /*0x628e0a*/
  if ( !a2 ) /*0x628e10*/
    return &this->ptr_0; /*0x628e70*/
  if ( !a3 ) /*0x628e18*/
  {
    v8 = __2_YAPAXI_Z(3 * a2); /*0x628e42*/
    if ( v8 ) /*0x628e4c*/
    {
      if ( a2 - 1 >= 0 ) /*0x628e53*/
      {
        v9 = (_BYTE *)(v8 + 2); /*0x628e55*/
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
      v4 = (void *)v8; /*0x628e67*/
    }
    this->Items = v4; /*0x628e69*/
    this->IsAllocated = 1; /*0x628e6c*/
    return &this->ptr_0; /*0x628e6c*/
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
  this->Items = (void *)a3; /*0x628e33*/
  return &this->ptr_0; /*0x628e38*/
}



// ==== 0x00628E80  _VectorClass_U_HashObject_VHashString_PAVSchemeNode::Constructor  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ColorScheme::Constructor(
        _VectorClass_U_HashObject_VHashString_PAVSchemeNode *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x628e83*/
  *(_DWORD *)this->__pad_0 = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628e86*/
  if ( v3 && BYTE1(this->m_C) ) /*0x628e90*/
  {
    __3_YAXPAX_Z(v3); /*0x628e98*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x628ea0*/
  }
  BYTE1(this->m_C) = 0; /*0x628eab*/
  this->m_8 = 0; /*0x628eb1*/
  if ( (a2 & 1) != 0 ) /*0x628eb8*/
    __3_YAXPAX_Z(this); /*0x628ebb*/
  return this->__pad_0; /*0x628ec5*/
}



// ==== 0x00628ED0  FileSystem::writeFile  this=VectorClass  sig=csp ====
_DWORD *__thiscall FileSystem::writeFile(FileSystem *this, int a2, _BYTE *a3)
{
  int v3; // esi
  Byte *v5; // ebp
  int v7; // ebx
  Byte *v8; // ebp

  v3 = a2; /*0x628ed3*/
  this->Items = 0; /*0x628edc*/
  this->Capacity = a2; /*0x628ee3*/
  this->IsInitialized = 1; /*0x628ee6*/
  this->IsAllocated = 0; /*0x628eea*/
  *(_DWORD *)this = &VectorClass<HashObject<HashString,SchemeNode *>>::`vftable'; /*0x628eee*/
  if ( !a2 ) /*0x628ef4*/
    return this; /*0x628ef4*/
  if ( !a3 ) /*0x628efc*/
  {
    v7 = __2_YAPAXI_Z(260 * a2); /*0x628f36*/
    if ( v7 ) /*0x628f3d*/
    {
      v8 = (Byte *)v7; /*0x628f42*/
      if ( a2 - 1 >= 0 ) /*0x628f46*/
      {
        do /*0x628f59*/
        {
          Byte::Zero(v8); /*0x628f4d*/
          v8 += 65; /*0x628f52*/
          --v3; /*0x628f58*/
        }
        while ( v3 ); /*0x628f59*/
        this->Items = v7; /*0x628f5b*/
        this->IsAllocated = 1; /*0x628f5e*/
        return this; /*0x628f68*/
      }
    }
    else
    {
      v7 = 0; /*0x628f6b*/
    }
    this->Items = v7; /*0x628f6d*/
    this->IsAllocated = 1; /*0x628f70*/
    return this; /*0x628f74*/
  }
  v5 = (Byte *)a3; /*0x628f01*/
  if ( a2 - 1 >= 0 ) /*0x628f05*/
  {
    do /*0x628f18*/
    {
      Byte::Zero(v5); /*0x628f0c*/
      v5 += 65; /*0x628f11*/
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
  dbl_AC4930 = Math::Sqrt(v0 + v0); /*0x628f9e*/
}



// ==== 0x00628FB0  sub_628FB0  this=-  sig=ida-proto ====
void sub_628FB0()
{
  dbl_AC4980 = dbl_AC4930 / 60.0; /*0x628fbc*/
}



// ==== 0x00628FD0  sub_628FD0  this=-  sig=ida-proto ====
void sub_628FD0()
{
  dbl_AC4968 = 1.0 / dbl_AC4980; /*0x628fdc*/
}



// ==== 0x00628FF0  sub_628FF0  this=-  sig=ida-proto ====
void sub_628FF0()
{
  dbl_AC4960 = 0.0174532925199433 * 45.0; /*0x628ffc*/
}



// ==== 0x00629010  sub_629010  this=-  sig=ida-proto ====
void sub_629010()
{
  dbl_AC4938 = 0.0174532925199433 * 60.0; /*0x62901c*/
}



// ==== 0x00629030  sub_629030  this=-  sig=ida-proto ====
void sub_629030()
{
  dbl_AC48F8 = 0.0174532925199433 * 90.0; /*0x62903c*/
}



// ==== 0x00629050  sub_629050  this=-  sig=ida-proto ====
__int64 sub_629050()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC48F8 - dbl_AC4938); /*0x629062*/
  result = Math::RoundToInt(v0 * dbl_AC4930 * 0.5); /*0x629076*/
  dword_AC4988 = result; /*0x62907b*/
  return result; /*0x629080*/
}



// ==== 0x00629090  sub_629090  this=-  sig=ida-proto ====
void sub_629090()
{
  dbl_AC4940 = Math::ArcTan((double)dword_AC4988 * 0.00390625); /*0x6290a7*/
}



// ==== 0x006290C0  sub_6290C0  this=-  sig=ida-proto ====
void sub_6290C0()
{
  dbl_AC4958 = Math::ArcTan((double)(2 * dword_AC4988) / dbl_AC4930); /*0x6290e2*/
}



// ==== 0x006290F0  sub_6290F0  this=-  sig=ida-proto ====
__int64 sub_6290F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4988) + 0.5); /*0x62910b*/
  dword_AC497C = result; /*0x629110*/
  return result; /*0x629116*/
}



// ==== 0x00629120  sub_629120  this=-  sig=ida-proto ====
int sub_629120()
{
  dword_AC4928 = 0; /*0x629122*/
  return 0; /*0x62912e*/
}



// ==== 0x00629130  sub_629130  this=-  sig=ida-proto ====
int sub_629130()
{
  dword_AC4948 = 0; /*0x629132*/
  dword_AC494C = 0; /*0x629137*/
  dword_AC4950 = 0; /*0x62913c*/
  return 0; /*0x629141*/
}



// ==== 0x00629150  sub_629150  this=-  sig=ida-proto ====
int sub_629150()
{
  dword_AC4978 = 0; /*0x629155*/
  dword_AC4970 = 128; /*0x62915f*/
  dword_AC4974 = 128; /*0x629164*/
  return 128; /*0x629169*/
}



// ==== 0x00629170  sub_629170  this=-  sig=ida-proto ====
int sub_629170()
{
  dword_AC4900 = 0; /*0x629172*/
  dword_AC4904 = 0; /*0x629177*/
  dword_AC4908 = 0; /*0x62917c*/
  dword_AC490C = 0; /*0x629181*/
  return 0; /*0x629186*/
}



// ==== 0x00629190  sub_629190  this=-  sig=ida-proto ====
int sub_629190()
{
  dword_AC4914 = 0; /*0x629197*/
  dword_AC4918 = 0; /*0x62919c*/
  byte_AC491C = 1; /*0x6291a1*/
  byte_AC491D = 0; /*0x6291a8*/
  dword_AC4910 = (int)&DynamicVectorClass<ParasiteClass *>::`vftable'; /*0x6291ad*/
  dword_AC4924 = 10; /*0x6291b7*/
  dword_AC4920 = 0; /*0x6291c1*/
  return atexit(sub_6291D0); /*0x6291cc*/
}



// ==== 0x006291D0  sub_6291D0  this=-  sig=ida-proto ====
void __cdecl sub_6291D0()
{
  dword_AC4910 = (int)&VectorClass<ParasiteClass *>::`vftable'; /*0x6291d8*/
  if ( dword_AC4914 && byte_AC491D ) /*0x6291ec*/
  {
    __3_YAXPAX_Z(dword_AC4914); /*0x6291ef*/
    dword_AC4914 = 0; /*0x6291f7*/
  }
  byte_AC491D = 0; /*0x6291fd*/
  dword_AC4918 = 0; /*0x629203*/
}



// ==== 0x00629210  ParasiteClass::Constructor  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::Constructor(ParasiteClass *this)
{
  int v2; // ecx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x629213*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->ParasiteClass_field_38 = v2; /*0x62922e*/
  this->AbstractClass = &ParasiteClass::`vftable'; /*0x629231*/
  this->? = &ParasiteClass::`vftable'; /*0x629237*/
  this->? = &ParasiteClass::`vftable'; /*0x62923e*/
  this->? = &ParasiteClass::`vftable'; /*0x629245*/
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v3 = dword_AC4920++; /*0x62928b*/
    *((_DWORD *)dword_AC4914 + v3) = this; /*0x62929a*/
  }
  return (int)this; /*0x62929f*/
}



// ==== 0x006292B0  ParasiteClass::ParasiteClass  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::ParasiteClass(int this, int a2)
{
  wchar_t *v3; // ecx
  int v4; // eax
  int v6; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6292b6*/
  *(_DWORD *)(this + 44) = dword_A8ED84; /*0x6292c4*/
  *(_DWORD *)(this + 52) = 0; /*0x6292c9*/
  *(_DWORD *)(this + 56) = dword_A8ED84; /*0x6292d2*/
  *(_DWORD *)(this + 64) = 0; /*0x6292d5*/
  *(_DWORD *)this = &ParasiteClass::`vftable'; /*0x6292d8*/
  *(_DWORD *)(this + 4) = &ParasiteClass::`vftable'; /*0x6292de*/
  *(_DWORD *)(this + 8) = &ParasiteClass::`vftable'; /*0x6292e5*/
  *(_DWORD *)(this + 12) = &ParasiteClass::`vftable'; /*0x6292ec*/
  *(_DWORD *)(this + 36) = a2; /*0x6292f3*/
  *(_DWORD *)(this + 40) = 0; /*0x6292f6*/
  *(_DWORD *)(this + 56) = dword_A8ED84; /*0x629303*/
  *(_DWORD *)(this + 60) = v6; /*0x62930a*/
  *(_DWORD *)(this + 64) = 0; /*0x62930d*/
  v3 = dword_A8ED84; /*0x629310*/
  *(_BYTE *)(this + 84) = 0; /*0x629316*/
  *(_DWORD *)(this + 44) = v3; /*0x629319*/
  *(_DWORD *)(this + 48) = v6; /*0x62931c*/
  *(_DWORD *)(this + 52) = 0; /*0x62931f*/
  *(_DWORD *)(this + 76) = 0; /*0x629322*/
  *(_DWORD *)(this + 80) = 0; /*0x629325*/
  *(_DWORD *)(this + 68) = 0; /*0x629328*/
  *(_DWORD *)(this + 72) = 0; /*0x62932b*/
  if ( dword_AC4920 < dword_AC4918 /*0x629360*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_AC4910 + 8))(
         &dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v4 = dword_AC4920++; /*0x62936d*/
    *((_DWORD *)dword_AC4914 + v4) = this; /*0x62937c*/
  }
  return this; /*0x629381*/
}



// ==== 0x006293E0  AbstractClass::ProcessData  this=ParasiteClass  sig=csp ====
void __thiscall AbstractClass::ProcessData(AbstractClass *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  AbstractClass *v5; // [esp+8h] [ebp-4h] BYREF

  v2 = this->q011; /*0x6293e7*/
  this->ptr_0 = &ParasiteClass::`vftable'; /*0x6293ea*/
  this->ptr_4 = &ParasiteClass::`vftable'; /*0x6293f2*/
  this->ptr_8 = &ParasiteClass::`vftable'; /*0x6293f9*/
  this->ptr_C = &ParasiteClass::`vftable'; /*0x629400*/
  this->IsAllocated = 0; /*0x629407*/
  this->abstractFlags = 0; /*0x62940a*/
  *((_DWORD *)this + 18) = 0; /*0x62940d*/
  if ( v2 ) /*0x629410*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629414*/
    this->q011 = 0; /*0x62941a*/
  }
  if ( *((_BYTE *)this + 84) ) /*0x62941d*/
  {
    v5 = this; /*0x629432*/
    v3 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629436*/
           g_BuildingLoadQueue_Array.?,
           &v5);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[1] ) /*0x629446*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x62944b*/
      for ( ; /*0x629451*/
            v3 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x629459*/
      }
    }
    *((_BYTE *)this + 84) = 0; /*0x62946b*/
  }
  v5 = this; /*0x62947e*/
  v4 = (*(int (__thiscall **)(int *, AbstractClass **))(dword_AC4910 + 16))(&dword_AC4910, &v5); /*0x629482*/
  if ( v4 != -1 && v4 < dword_AC4920 && v4 < --dword_AC4920 ) /*0x62949d*/
  {
    do /*0x6294b5*/
    {
      ++v4; /*0x6294a5*/
      *((_DWORD *)dword_AC4914 + v4 - 1) = *((_DWORD *)dword_AC4914 + v4); /*0x6294a9*/
    }
    while ( v4 < dword_AC4920 ); /*0x6294b5*/
  }
  AbstractClass::DTOR(this); /*0x6294b9*/
}



// ==== 0x006294D0  ParasiteClass::Attach  this=ParasiteClass  sig=csp ====
int __thiscall ParasiteClass::Attach(ParasiteClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6294d9*/
  v3 = this->q011; /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(*((_DWORD *)this + 18)); /*0x6294fd*/
  Power::TimerProcess(this->IsAllocated); /*0x629508*/
  Power::TimerProcess(this->abstractFlags); /*0x629513*/
  LOBYTE(v5) = *((_BYTE *)this + 84); /*0x629518*/
  return Power::FlagProcess((Power *)a2, v5); /*0x629523*/
}



// ==== 0x00629530  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_629530(ObjectClass *this)
{
  int v2; // ecx
  int v3; // eax
  ObjectClass *v4; // [esp+8h] [ebp-4h] BYREF

  v2 = this->ambientSoundController[2]; /*0x629537*/
  this->ambientSoundController[4] = 0; /*0x62953a*/
  this->customSound_controller[0] = 0; /*0x62953f*/
  this->ambientSoundController[3] = 0; /*0x629542*/
  if ( v2 ) /*0x629545*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629549*/
    this->ambientSoundController[2] = 0; /*0x62954f*/
  }
  if ( LOBYTE(this->customSound_controller[1]) ) /*0x629552*/
  {
    v4 = this; /*0x629567*/
    v3 = (*(int (__thiscall **)(int *, ObjectClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62956b*/
           g_BuildingLoadQueue_Array.?,
           &v4);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[1] ) /*0x62957b*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x629580*/
      for ( ; /*0x629586*/
            v3 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x62958e*/
      }
    }
    LOBYTE(this->customSound_controller[1]) = 0; /*0x6295a0*/
  }
}



// ==== 0x006295B0  ParasiteClass::LoadParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::LoadParasite(ParasiteClass *this, int a2)
{
  int result; // eax
  int v3; // ebp
  int v4; // edx
  int v5; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x6295bc*/
  v3 = result; /*0x6295c1*/
  if ( result >= 0 ) /*0x6295c5*/
  {
    if ( this ) /*0x6295cd*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x6295d6*/
      v4 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6295db*/
      this->ParasiteClass_field_34 = 0; /*0x6295e1*/
      *(_DWORD *)&this->__pad_28[4] = v4; /*0x6295e8*/
      this->ParasiteClass_field_38 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6295f0*/
      this->ParasiteClass_field_40 = 0; /*0x6295f3*/
      this->AbstractClass = &ParasiteClass::`vftable'; /*0x6295fa*/
      this->? = &ParasiteClass::`vftable'; /*0x629600*/
      this->? = &ParasiteClass::`vftable'; /*0x629607*/
      this->? = &ParasiteClass::`vftable'; /*0x62960e*/
    }
    if ( this->q011 /*0x629657*/
      && (g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.?
       || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
       && g_BuildingLoadQueue_Array.?[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + g_BuildingLoadQueue_Array.?[2],
            0)) )
    {
      v5 = g_BuildingLoadQueue_Array.?[1]++; /*0x629664*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v5) = this; /*0x629673*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &this->creationFrame); /*0x62967f*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this->__pad_28); /*0x62968d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 17); /*0x629698*/
    return v3; /*0x62969e*/
  }
  return result; /*0x6296a0*/
}



// ==== 0x006296B0  ParasiteClass::SaveParasite  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::SaveParasite(ParasiteClass *this, int *a2, int a3)
{
  return AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x6296c4*/
}



// ==== 0x006296D0  ParasiteClass::ddtor  this=ParasiteClass  sig=csp ====
int __stdcall ParasiteClass::ddtor(ParasiteClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/
}



// ==== 0x00629710  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_629710(ObjectClass *this)
{
  this->customSound_controller[0] = 0; /*0x629712*/
  this->ambientSoundController[4] = 0; /*0x629715*/
  return 0; /*0x629718*/
}



// ==== 0x00629720  BuildingClass::AnimController  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass::AnimController(BuildingClass *this)
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

  Value = ProgressTimer::GetValue((ProgressTimer *)(this->? + 904), v12); /*0x629736*/
  v3 = this->?[3]; /*0x62973b*/
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
  v7 = this->?[0] + 1; /*0x629768*/
  this->?[0] = v7; /*0x62976e*/
  if ( v7 >= v6 ) /*0x629773*/
  {
    v8 = this->?[4]; /*0x629775*/
    this->?[0] = 0; /*0x629778*/
    this->?[4] = v8 + 1; /*0x629782*/
    if ( v8 + 1 >= 10 ) /*0x629788*/
      return 1; /*0x629792*/
    v10 = (_DWORD *)this->?[2]; /*0x629793*/
    if ( v10 ) /*0x629798*/
    {
      v10[45] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6297af*/
      v11 = v12[2]; /*0x6297b2*/
      v10[48] = 128; /*0x6297b7*/
      v10[46] = v11; /*0x6297bf*/
      v10[47] = 128; /*0x6297c5*/
      *(_DWORD *)(this->?[2] + 172) = v5 + this->?[4] + 10 * ((((v4 >> 12) + 1) >> 1) & 7); /*0x6297d7*/
    }
  }
  return 0; /*0x62978a*/
}



// ==== 0x006297F0  ParasiteClass::DeploySquad  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass::DeploySquad(ParasiteClass *this)
{
  double v1; // st7
  _DWORD *v3; // eax
  int *v4; // ecx
  int v5; // edi
  Cell *v6; // eax
  int creationFrame; // esi
  int v8; // edx
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // edx
  int Index; // eax
  void *v13; // edi
  AnimClass *v14; // eax
  void **v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  int v23; // eax
  AnimClass *v24; // edi
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  _BYTE *v30; // edi
  int v31; // eax
  void *ptr_0; // ecx
  int v33; // eax
  _DWORD *v34; // edx
  int v35; // ecx
  int v36; // eax
  BuildingClass *v37; // edi
  int v38; // ecx
  int v39; // ebp
  void *v40; // ecx
  int v41; // eax
  int v42; // [esp-4h] [ebp-6Ch]
  BuildingClass *v43; // [esp+0h] [ebp-68h]
  __int64 v44; // [esp+10h] [ebp-58h]
  int v45; // [esp+10h] [ebp-58h]
  double v46; // [esp+10h] [ebp-58h]
  int i; // [esp+10h] [ebp-58h]
  _DWORD v48[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v49; // [esp+28h] [ebp-40h] BYREF
  int v50; // [esp+2Ch] [ebp-3Ch] BYREF
  __int64 v51; // [esp+30h] [ebp-38h]
  int v55; // [esp+50h] [ebp-18h] BYREF
  int v56; // [esp+54h] [ebp-14h]
  int v57; // [esp+58h] [ebp-10h]
  int v58; // [esp+5Ch] [ebp-Ch] BYREF
  int v59; // [esp+60h] [ebp-8h]
  int v60; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  _ESI = this; /*0x6297fc*/
  v3 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 1016))(this->creationFrame, 0); /*0x629807*/
  v4 = *(int **)_ESI->__pad_28; /*0x62980d*/
  v48[1] = *v3; /*0x629812*/
  v5 = *(_DWORD *)(v48[1] + 172); /*0x629816*/
  v48[0] = v5; /*0x629822*/
  v55 = v4[39]; /*0x629828*/
  v56 = v4[40]; /*0x62982f*/
  v57 = v4[41]; /*0x629836*/
  v6 = (Cell *)(*(int (__thiscall **)(int *))(*v4 + 444))(v4); /*0x62983c*/
  v44 = 0x3FF0000000000000LL; /*0x629844*/
  if ( !v6 || (unsigned __int8)Cell::IsValidHeight(v6) ) /*0x629854*/
  {
    v10 = *(_DWORD *)(v5 + 368); /*0x629898*/
    v11 = (_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 1696); /*0x62989e*/
    *v11 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6298a4*/
    v11[1] = v59; /*0x6298aa*/
    v11[2] = v10; /*0x6298ad*/
    switch ( (unsigned int)_ESI[1].? ) /*0x6298bc*/
    {
      case 0u: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 808) = 0; /*0x6298c6*/
        Index = AnimTypeClass::FindIndex(&stru_83665C); /*0x6298d1*/
        if ( Index != -1 ) /*0x6298d9*/
        {
          v13 = *(void **)(FootClass_Array.?[3] + 4 * Index); /*0x6298e5*/
          if ( v13 ) /*0x6298ea*/
          {
            v14 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6298f5*/
            if ( v14 ) /*0x6298ff*/
            {
              v15 = AnimClass::ctor(v14, v13, &v55, 0, 1, (void *)0x600, 0, 0); /*0x629913*/
              if ( v15 ) /*0x62991a*/
              {
                _ESI[1].AbstractClass = v15; /*0x62991c*/
                if ( g_BuildingLoadQueue_Array.?[1] < g_BuildingLoadQueue_Array.? /*0x629953*/
                  || (BYTE1(g_BuildingLoadQueue_Array.?[0]) || !g_BuildingLoadQueue_Array.?)
                  && g_BuildingLoadQueue_Array.?[2] > 0
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[0] + 8))(
                       g_BuildingLoadQueue_Array.?,
                       g_BuildingLoadQueue_Array.?[2] + g_BuildingLoadQueue_Array.?,
                       0) )
                {
                  v16 = g_BuildingLoadQueue_Array.?[1]++; /*0x629960*/
                  *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v16) = _ESI; /*0x62996f*/
                }
              }
            }
          }
        }
        _ESI[1].? = (void *)1; /*0x629974*/
        _ESI[1].? = 0; /*0x62997b*/
        _ESI[1].? = 0; /*0x62997e*/
        BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629981*/
        goto LABEL_47; /*0x629986*/
      case 1u: /*0x6298bc*/
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x62998d*/
        {
          v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x6299a9*/
          _ESI[1].? = 0; /*0x6299b7*/
          _ESI[1].? = (void *)(3 - (v17 != 0)); /*0x6299ba*/
          _ESI[1].? = 0; /*0x6299bd*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x6299c0*/
          FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x6299e1*/
        }
        goto LABEL_47; /*0x6299e6*/
      case 2u: /*0x6298bc*/
        v44 = 0xBFF0000000000000uLL; /*0x6299eb*/
        goto LABEL_20; /*0x6299eb*/
      case 3u: /*0x6298bc*/
LABEL_20:
        if ( BuildingClass::AnimController((BuildingClass *)_ESI) ) /*0x6299fd*/
        {
          _ESI[1].? = (void *)4; /*0x629a08*/
          _ESI[1].? = 0; /*0x629a0f*/
          _ESI[1].? = 0; /*0x629a12*/
          BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629a15*/
        }
        __asm /*0x629a1a*/
        {
          fild dword ptr [esi+4Ch]
          fmul qword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E8AF0
          fstp qword ptr [esp+68h+var_4C+4]
        }
        Math::SinCos(*(double *)&v48[1]); /*0x629a35*/
        __asm { fmul ds:flt_7EF8F8 } /*0x629a3a*/
        v18 = *(_DWORD *)_ESI->__pad_28; /*0x629a40*/
        __asm { fstp dword ptr [ecx+328h] } /*0x629a46*/
        *(float *)(v18 + 808) = _ET1; /*0x629a46*/
        goto LABEL_47; /*0x629a4c*/
      case 4u: /*0x6298bc*/
        *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 808) = 0; /*0x629a59*/
        v20 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3024); /*0x629a67*/
        v45 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)_ESI->__pad_28 + 904), &v50) - 0x3FFF; /*0x629a81*/
        __asm /*0x629a85*/
        {
          fild dword ptr [esp+68h+var_5C+4]
          fmul ds:dbl_7E2810
          fchs
          fstp qword ptr [esp+68h+var_5C+4]
        }
        Math::ArcTan2(v46); /*0x629a9f*/
        __asm { fstp [esp+70h+var_24+4] } /*0x629aa4*/
        Math::SinCos(v46); /*0x629aaa*/
        __asm { fstp [esp+78h+var_2C+4] } /*0x629aaf*/
        for ( i = 0; i < 3; ++i ) /*0x629ab8*/
        {
          __asm { fild dword ptr [esp+68h+var_5C+4] } /*0x629abc*/
          v51 = 0x4050000000000000LL; /*0x629ac8*/
          __asm { fmul ds:dbl_7E2808 } /*0x629ad0*/
          __asm
          {
            fsub ds:dbl_7E2808
            fstp [esp+70h+var_34+4]
          }
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) ) /*0x629aee*/
            __asm { fld ds:dbl_7EF8F0 } /*0x629af7*/
          else
            __asm { fld qword ptr [esp+68h+var_3C+4] } /*0x629aff*/
          __asm /*0x629b03*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_24+4]
            fld st(1)
            fmul [esp+68h+var_2C+4]
            fsubp st(1), st
          }
          LOWORD(v21) = Math::RoundToInt(v1); /*0x629b13*/
          __asm /*0x629b18*/
          {
            fld [esp+68h+var_34+4]
            fmul [esp+68h+var_2C+4]
            fxch st(1)
            fmul [esp+68h+var_24+4]
          }
          v22 = v21; /*0x629b26*/
          __asm { faddp st(1), st } /*0x629b28*/
          LOWORD(v23) = Math::RoundToInt(v1); /*0x629b2a*/
          v58 = v22 + v55; /*0x629b44*/
          v59 = v56 + v23; /*0x629b48*/
          v60 = v57; /*0x629b4c*/
          v24 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x629b55*/
          if ( v24 ) /*0x629b5c*/
          {
            v25 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x629b6f*/
            AnimClass::ctor( /*0x629b97*/
              v24,
              *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3012) + 4 * v25),
              &v58,
              (void *)2,
              1,
              (void *)0x600,
              (void *)0xFFFFFFF6,
              0);
          }
        }
        if ( *(_BYTE *)(v48[0] + 372) /*0x629be6*/
          && (!BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28)
           || BuildingClass::GetSellPriority(*(BuildingClass **)_ESI->__pad_28) == 1
           && (unsigned __int8)Audio::IsLoud((int *)(_ESI->creationFrame + 336))) )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 132))(_ESI->creationFrame) + 3214) ) /*0x629bfe*/
          {
            v26 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)_ESI->__pad_28 + 132))(*(_DWORD *)_ESI->__pad_28); /*0x629c16*/
            v27 = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 132))(_ESI->creationFrame); /*0x629c23*/
            v42 = *(_DWORD *)(*(_DWORD *)_ESI->__pad_28 + 540); /*0x629c2f*/
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 132))(v26); /*0x629c30*/
            v29 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v27 + 132))( /*0x629c46*/
                    v27,
                    *(_DWORD *)(_ESI->creationFrame + 540),
                    v28);
            HouseClass::AccumulateScore((int *)(_ESI->creationFrame + 336), v29, v42); /*0x629c56*/
          }
          v30 = *(_BYTE **)_ESI->__pad_28; /*0x629c5d*/
          BuildingClass::Deploy(v43, 0, (int)v30); /*0x629c62*/
          v31 = *(_DWORD *)v30; /*0x629c67*/
          v30[973] = 1; /*0x629c69*/
          (*(void (__thiscall **)(_BYTE *, int))(v31 + 952))(v30, _ESI->creationFrame); /*0x629c76*/
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 928))(v30); /*0x629c80*/
          ptr_0 = _ESI[1].AbstractClass; /*0x629c86*/
          _ESI[1].? = 0; /*0x629c89*/
          _ESI[1].? = 0; /*0x629c8e*/
          _ESI[1].? = 0; /*0x629c91*/
          if ( ptr_0 ) /*0x629c94*/
          {
            (*(void (__thiscall **)(void *))(*(_DWORD *)ptr_0 + 248))(ptr_0); /*0x629c98*/
            _ESI[1].AbstractClass = 0; /*0x629c9e*/
          }
          if ( LOBYTE(_ESI[1].?) ) /*0x629ca1*/
          {
            v48[0] = _ESI; /*0x629cb8*/
            v33 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629cbc*/
                    g_BuildingLoadQueue_Array.?,
                    v48);
            if ( v33 != -1 && v33 < g_BuildingLoadQueue_Array.?[1] ) /*0x629ccc*/
            {
              --g_BuildingLoadQueue_Array.?[1]; /*0x629cd1*/
              for ( ; /*0x629cd7*/
                    v33 < g_BuildingLoadQueue_Array.?[1];
                    *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v33 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                          + 4 * v33) )
              {
                ++v33; /*0x629cdf*/
              }
            }
            LOBYTE(_ESI[1].?) = 0; /*0x629cf1*/
          }
          v34 = (_DWORD *)(_ESI->creationFrame + 1696); /*0x629cff*/
          *v34 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629d05*/
          v34[1] = v59; /*0x629d0b*/
          v34[2] = 0; /*0x629d0e*/
        }
        else
        {
          v35 = *(_DWORD *)_ESI->__pad_28; /*0x629d27*/
          v49 = *(_DWORD *)(v48[1] + 164); /*0x629d2a*/
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, int, _DWORD, int, _DWORD))(*(_DWORD *)v35 + 364))( /*0x629d3b*/
            v35,
            &v49,
            0,
            v48[0],
            _ESI->creationFrame,
            0,
            1,
            0);
          if ( *(_DWORD *)_ESI->__pad_28 ) /*0x629d41*/
          {
            v36 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1); /*0x629d58*/
            _ESI[1].? = 0; /*0x629d66*/
            _ESI[1].? = (void *)(3 - (v36 != 0)); /*0x629d69*/
            _ESI[1].? = 0; /*0x629d6c*/
            BuildingClass::AnimController((BuildingClass *)_ESI); /*0x629d6f*/
            FootClass::CreateWakes(*(FootClass **)_ESI->__pad_28, v55, v56, v57); /*0x629d90*/
          }
          else
          {
            v40 = _ESI[1].AbstractClass; /*0x629df3*/
            _ESI[1].? = 0; /*0x629df6*/
            _ESI[1].? = 0; /*0x629dfb*/
            _ESI[1].? = 0; /*0x629dfe*/
            if ( v40 ) /*0x629e01*/
            {
              (*(void (__thiscall **)(void *))(*(_DWORD *)v40 + 248))(v40); /*0x629e05*/
              _ESI[1].AbstractClass = 0; /*0x629e0b*/
            }
            if ( LOBYTE(_ESI[1].?) ) /*0x629e0e*/
            {
              v48[1] = _ESI; /*0x629e25*/
              v41 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x629e29*/
                      g_BuildingLoadQueue_Array.?,
                      &v48[1]);
              if ( v41 != -1 && v41 < g_BuildingLoadQueue_Array.?[1] ) /*0x629e39*/
              {
                --g_BuildingLoadQueue_Array.?[1]; /*0x629e3e*/
                for ( ; /*0x629e44*/
                      v41 < g_BuildingLoadQueue_Array.?[1];
                      *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v41 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                            + 4 * v41) )
                {
                  ++v41; /*0x629e4c*/
                }
              }
              LOBYTE(_ESI[1].?) = 0; /*0x629e5e*/
            }
          }
LABEL_47:
          v37 = (BuildingClass *)_ESI[1].AbstractClass; /*0x629d97*/
          if ( v37 ) /*0x629d9c*/
          {
            if ( _ESI->creationFrame ) /*0x629d9e*/
            {
              v38 = *(_DWORD *)_ESI->__pad_28; /*0x629da3*/
              if ( v38 ) /*0x629da8*/
              {
                v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 444))(v38); /*0x629db8*/
                if ( *(_DWORD *)_ESI->__pad_28 != v37->?[1] ) /*0x629dbf*/
                {
                  BuildingClass::AimTurret(v37, *(_BYTE **)_ESI->__pad_28); /*0x629dc4*/
                  v37->?[0] = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI->creationFrame + 484))(_ESI->creationFrame); /*0x629dd6*/
                  if ( v39 ) /*0x629ddc*/
                    v37->?[1] = *(__int16 *)(v39 + 266); /*0x629de5*/
                }
              }
            }
          }
        }
        break; /*0x629d18*/
      default:
        BuildingClass::Deploy(v43, (int)&savedregs, v5); /*0x629e69*/
        goto LABEL_47; /*0x629e6e*/
    }
  }
  else
  {
    BuildingClass::Deploy(v43, (int)&savedregs, v5); /*0x62985f*/
    creationFrame = _ESI->creationFrame; /*0x629864*/
    if ( creationFrame ) /*0x629869*/
    {
      v8 = v59; /*0x629874*/
      v9 = (_DWORD *)(creationFrame + 1696); /*0x62987a*/
      *v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x629880*/
      v9[1] = v8; /*0x629882*/
      v9[2] = 0; /*0x629885*/
    }
  }
}



// ==== 0x00629E90  FootClass::CreateWakes  this=FootClass  sig=csp ====
int __thiscall FootClass::CreateWakes(FootClass *this, int a2, int a3, int a4)
{
  double v4; // st7
  double v5; // rdi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  AnimClass *v9; // eax
  int result; // eax
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+Ch] [ebp-34h]
  double v13; // [esp+10h] [ebp-30h] BYREF
  int v17[3]; // [esp+34h] [ebp-Ch] BYREF

  v11 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)this->?, &v13) - 0x3FFF; /*0x629eb5*/
  __asm /*0x629eb9*/
  {
    fild [esp+40h+var_34]
    fmul ds:dbl_7E2810
    fchs
    fstp qword ptr [esp+40h+var_30]
  }
  v5 = v13; /*0x629ecd*/
  Math::ArcTan2(v13); /*0x629ed3*/
  __asm { fstp [esp+48h+var_18] } /*0x629ed8*/
  Math::SinCos(v5); /*0x629ede*/
  __asm { fstp [esp+50h+var_20] } /*0x629ee3*/
  v12 = 3; /*0x629ef0*/
  do /*0x629fba*/
  {
    LODWORD(v13) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -180, 180); /*0x629f13*/
    __asm { fild [esp+40h+var_30] } /*0x629f1c*/
    __asm { fstp [esp+48h+var_28] }
    LODWORD(v13) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, -64, 64); /*0x629f33*/
    __asm /*0x629f37*/
    {
      fild [esp+40h+var_30]
      fld [esp+40h+var_28]
      fmul [esp+40h+var_18]
      fld st(1)
      fmul [esp+40h+var_20]
      fsubp st(1), st
    }
    LOWORD(v6) = Math::RoundToInt(v4); /*0x629f4b*/
    __asm /*0x629f50*/
    {
      fld [esp+40h+var_28]
      fmul [esp+40h+var_20]
      fxch st(1)
      fmul [esp+40h+var_18]
    }
    v7 = v6; /*0x629f5e*/
    __asm { faddp st(1), st } /*0x629f60*/
    LOWORD(v8) = Math::RoundToInt(v4); /*0x629f62*/
    v17[0] = v7 + a2; /*0x629f73*/
    v17[1] = a3 + v8; /*0x629f77*/
    v17[2] = a4; /*0x629f7b*/
    v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x629f7f*/
    if ( v9 ) /*0x629f89*/
      AnimClass::ctor( /*0x629fac*/
        v9,
        *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 148),
        v17,
        0,
        1,
        (void *)0x600,
        0,
        0);
    result = --v12; /*0x629fb5*/
  }
  while ( v12 ); /*0x629fba*/
  return result; /*0x629fc0*/
}



// ==== 0x00629FD0  ParasiteClass::TickDamage  this=ParasiteClass  sig=csp ====
void __thiscall ParasiteClass::TickDamage(ParasiteClass *this)
{
  double v1; // st6
  double v2; // st7
  int v4; // eax
  int *v5; // ecx
  _DWORD *v6; // edi
  int v7; // ebp
  int ParasiteClass_field_40; // eax
  int ParasiteClass_field_38; // edx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  _DWORD *v13; // ecx
  int *v14; // eax
  unsigned int v15; // ebx
  void *v16; // ebp
  AnimClass *v17; // eax
  int v18; // eax
  int v19; // ebx
  double v20; // st6
  int v21; // eax
  double v22; // st7
  int v23; // eax
  int v24; // ecx
  int creationFrame; // eax
  _DWORD v26[3]; // [esp+10h] [ebp-3Ch] BYREF
  int v27; // [esp+1Ch] [ebp-30h] BYREF
  int v28; // [esp+20h] [ebp-2Ch]
  double v29; // [esp+24h] [ebp-28h]
  double v30; // [esp+2Ch] [ebp-20h]
  int v31; // [esp+34h] [ebp-18h] BYREF
  int v32; // [esp+38h] [ebp-14h]
  int v33; // [esp+3Ch] [ebp-10h]
  int v34; // [esp+40h] [ebp-Ch] BYREF
  int v35; // [esp+44h] [ebp-8h]
  int v36; // [esp+48h] [ebp-4h]

  if ( !*(_DWORD *)this->__pad_28 ) /*0x629fde*/
    return; /*0x629fde*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3278) /*0x62a004*/
    && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3479) )
  {
    ParasiteClass::DeploySquad(this); /*0x62a010*/
    return; /*0x62a01c*/
  }
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 1016))(this->creationFrame, 0); /*0x62a024*/
  v5 = *(int **)this->__pad_28; /*0x62a02a*/
  v6 = *(_DWORD **)v4; /*0x62a02d*/
  v7 = *(_DWORD *)(*(_DWORD *)v4 + 172); /*0x62a02f*/
  v28 = v7; /*0x62a03b*/
  v31 = v5[39]; /*0x62a041*/
  v32 = v5[40]; /*0x62a048*/
  ParasiteClass_field_40 = this->ParasiteClass_field_40; /*0x62a04c*/
  v33 = v5[41]; /*0x62a052*/
  ParasiteClass_field_38 = this->ParasiteClass_field_38; /*0x62a056*/
  if ( ParasiteClass_field_38 == -1 ) /*0x62a05c*/
    goto LABEL_8; /*0x62a05c*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - ParasiteClass_field_38 < ParasiteClass_field_40 ) /*0x62a068*/
  {
    ParasiteClass_field_40 -= *(_DWORD *)&stru_A8EB00.?[416] - ParasiteClass_field_38; /*0x62a06a*/
LABEL_8:
    if ( ParasiteClass_field_40 ) /*0x62a06e*/
      return; /*0x62a06e*/
  }
  v10 = v6[44]; /*0x62a074*/
  this->ParasiteClass_field_38 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a080*/
  this->ParasiteClass_field_3C = v35; /*0x62a087*/
  this->ParasiteClass_field_40 = v10; /*0x62a08a*/
  v11 = *(_DWORD *)(v7 + 368); /*0x62a092*/
  v12 = v5 + 424; /*0x62a098*/
  *v12 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a09e*/
  v12[1] = v35; /*0x62a0a4*/
  v12[2] = v11; /*0x62a0a7*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 44))(*(_DWORD *)this->__pad_28) == 15 ) /*0x62a0b5*/
  {
    v13 = *(_DWORD **)this->__pad_28; /*0x62a0b7*/
    v26[0] = v13[27]; /*0x62a0c3*/
    (*(void (__userpurge **)(_DWORD *, _DWORD, int, int, int, int, _DWORD, double@<st0>, double@<st1>))(*v13 + 364))( /*0x62a0ce*/
      v26,
      0,
      v7,
      this->creationFrame,
      1,
      1,
      0,
      v2,
      v1);
  }
  else
  {
    v14 = (int *)__2_YAPAXI_Z(0x100u); /*0x62a0d8*/
    if ( v14 ) /*0x62a0e2*/
      ParticleSystemClass::Constructor( /*0x62a103*/
        v14,
        *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4128),
        &v31,
        0,
        0,
        &dword_AC4948,
        0);
    v15 = *ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)this->__pad_28 + 904), &v27); /*0x62a11b*/
    if ( v6[65] ) /*0x62a11d*/
    {
      v16 = *(void **)(v6[62] + 4 * ((((v15 >> 12) + 1) >> 1) & 7)); /*0x62a138*/
      if ( v16 ) /*0x62a13d*/
      {
        v17 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x62a144*/
        if ( v17 ) /*0x62a14e*/
          AnimClass::ctor(v17, v16, &v31, 0, 1, (void *)0x600, 0, 0); /*0x62a165*/
      }
    }
    v18 = -(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 1) != 0); /*0x62a189*/
    v26[1] = (__int16)(v15 - 0x3FFF) - 0x3FFF; /*0x62a191*/
    LOBYTE(v18) = v18 & 0xFC; /*0x62a195*/
    v19 = v33; /*0x62a19e*/
    v27 = v18 + 2; /*0x62a1a2*/
    *(double *)&v26[1] = (double)v26[1] * -0.00009587672516830327; /*0x62a1ac*/
    v30 = (double)v32; /*0x62a1be*/
    v29 = (double)(v18 + 2); /*0x62a1c6*/
    Math::SinCos(*(double *)&v26[1]); /*0x62a1ca*/
    v20 = v30 - v1 * v29; /*0x62a1d3*/
    LOWORD(v21) = Math::RoundToInt(v2); /*0x62a1d7*/
    v27 = v21; /*0x62a1dc*/
    Math::ArcTan2(*(double *)&v26[1]); /*0x62a1e6*/
    v22 = v2 * v29 + (double)v31; /*0x62a1f2*/
    LOWORD(v23) = Math::RoundToInt(v22); /*0x62a1f6*/
    v34 = v23; /*0x62a1ff*/
    v35 = v27; /*0x62a203*/
    v24 = *(_DWORD *)this->__pad_28; /*0x62a207*/
    v36 = v19; /*0x62a20a*/
    (*(void (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v24 + 984))(v24, &v34, 1069547520, 0); /*0x62a21c*/
    creationFrame = this->creationFrame; /*0x62a228*/
    v26[0] = v6[41]; /*0x62a22f*/
    (*(void (__userpurge **)(_DWORD *, _DWORD, int, int, _DWORD, int, _DWORD, double@<st0>, double@<st1>))(**(_DWORD **)this->__pad_28 + 364))( /*0x62a247*/
      v26,
      0,
      v28,
      creationFrame,
      0,
      1,
      0,
      v22,
      v20);
  }
}



// ==== 0x0062A260  ParasiteClass::DeployUnit  this=ParasiteClass  sig=csp ====
char __thiscall TeamClass::DeployUnit(ParasiteClass *this, int a2, int a3)
{
  char result; // al
  int creationFrame; // ecx
  int v6; // edi
  int ParasiteClass_field_34; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *Value; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // ecx
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+24h] [ebp-18h] BYREF
  int v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
  creationFrame = this->creationFrame; /*0x62a26c*/
  if ( a2 == creationFrame ) /*0x62a271*/
  {
    this->creationFrame = 0; /*0x62a273*/
    return result; /*0x62a280*/
  }
  if ( a2 == *(_DWORD *)this->__pad_28 ) /*0x62a286*/
  {
    result = stru_A8EB00.?[376]; /*0x62a28c*/
    if ( !stru_A8EB00.?[376] ) /*0x62a295*/
    {
      *(_DWORD *)this->__pad_28 = 0; /*0x62a297*/
      return result; /*0x62a2a0*/
    }
    v6 = *(_DWORD *)&this->__pad_28[4]; /*0x62a2a3*/
    ParasiteClass_field_34 = this->ParasiteClass_field_34; /*0x62a2a6*/
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v6 >= ParasiteClass_field_34 ) /*0x62a2b8*/
      {
LABEL_12:
        v9 = Object::CalculateObjectPlacementPosition((Object *)this, v18); /*0x62a2ec*/
        v17[0] = *v9; /*0x62a303*/
        v10 = v9[1]; /*0x62a307*/
        v17[1] = v10; /*0x62a30a*/
        v11 = v9[2]; /*0x62a30e*/
        ++dword_A8E7AC; /*0x62a311*/
        v17[2] = v11; /*0x62a31d*/
        if ( v17[0] == dword_AC4948 && v10 == dword_AC494C && v11 == dword_AC4950 /*0x62a364*/
          || (Value = ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)this->__pad_28 + 904), &a2),
              !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this->creationFrame + 216))(
                 this->creationFrame,
                 v17,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --dword_A8E7AC; /*0x62a462*/
          *(_DWORD *)(this->creationFrame + 108) = 0; /*0x62a46a*/
          result = (*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 248))(this->creationFrame); /*0x62a472*/
          *(_DWORD *)this->__pad_28 = 0; /*0x62a478*/
        }
        else
        {
          --dword_A8E7AC; /*0x62a379*/
          v13 = this->creationFrame; /*0x62a37f*/
          if ( *(_BYTE *)(v13 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(House **)(v13 + 540)) ) /*0x62a390*/
          {
            *(_BYTE *)(this->creationFrame + 1074) = 0; /*0x62a39c*/
            (*(void (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 332))(this->creationFrame); /*0x62a3a7*/
          }
          v14 = this->creationFrame; /*0x62a3ad*/
          v15 = *(int **)(v14 + 1076); /*0x62a3b0*/
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
          if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 1196))(this->creationFrame) ) /*0x62a3c6*/
          {
            TechnoClass::SetFocus((TechnoClass *)this->creationFrame, 0); /*0x62a3d4*/
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->creationFrame + 968))(this->creationFrame, 0); /*0x62a3df*/
            (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->creationFrame + 1152))( /*0x62a3ed*/
              this->creationFrame,
              0,
              1);
          }
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->creationFrame + 1156))(this->creationFrame, 0, 1); /*0x62a3fb*/
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->creationFrame + 1160))( /*0x62a40b*/
            this->creationFrame,
            0,
            0,
            0,
            0,
            0);
          v16 = (_DWORD *)this->creationFrame; /*0x62a411*/
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
          *(_DWORD *)this->__pad_28 = 0; /*0x62a450*/
        }
        return result; /*0x62a459*/
      }
      ParasiteClass_field_34 -= *(_DWORD *)&stru_A8EB00.?[416] - v6; /*0x62a2ba*/
    }
    if ( ParasiteClass_field_34 > 0 /*0x62a2c2*/
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)creationFrame + 352))(creationFrame) )
    {
      *(_DWORD *)(*(_DWORD *)this->__pad_28 + 1684) = 0; /*0x62a2cf*/
      v8 = this->creationFrame; /*0x62a2d5*/
      *(_DWORD *)this->__pad_28 = 0; /*0x62a2d8*/
      return (*(char (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8); /*0x62a2e9*/
    }
    goto LABEL_12; /*0x62a2ca*/
  }
  if ( a2 == this->q011 ) /*0x62a487*/
  {
    this->q011 = 0; /*0x62a489*/
    *((_BYTE *)this + 84) = 1; /*0x62a490*/
  }
  return result; /*0x62a27a*/
}



// ==== 0x0062A4A0  BuildingClass::Deploy  this=BuildingClass  sig=csp ====
int __usercall BuildingClass::Deploy@<eax>(BuildingClass *this, int a2@<ebp>, int a3@<edi>)
{
  unsigned int v3; // ecx
  unsigned int v4; // esi
  char v5; // bl
  _WORD *v6; // eax
  unsigned int v7; // ecx
  __int16 v8; // dx
  int v9; // edx
  int v10; // eax
  bool *v11; // ebp
  int *v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  void *v19; // eax
  int *v20; // edx
  int v21; // eax
  int v22; // eax
  int *v23; // ecx
  int v24; // eax
  _DWORD *v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // edx
  int result; // eax
  _DWORD *v31; // edx
  int TileIndex; // [esp+14h] [ebp-4Ch]
  int v33; // [esp+18h] [ebp-48h]
  __int16 v36[2]; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v37; // [esp+38h] [ebp-28h]
  unsigned int v38; // [esp+3Ch] [ebp-24h] BYREF
  int v39; // [esp+40h] [ebp-20h] BYREF
  int *v40; // [esp+44h] [ebp-1Ch] BYREF
  int v41; // [esp+48h] [ebp-18h] BYREF
  int v42; // [esp+4Ch] [ebp-14h]
  int v43; // [esp+50h] [ebp-10h]
  _BYTE v44[4]; // [esp+54h] [ebp-Ch] BYREF
  int v45; // [esp+58h] [ebp-8h]

  v4 = v3; /*0x62a4a5*/
  v5 = *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 36) + 132))(*(_DWORD *)(v3 + 36)) + 3278); /*0x62a4b2*/
  if ( (((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v38) >> 12) + 1) >> 1) /*0x62a4db*/
      & 7) > 2 )
    LOWORD(v38) = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v39) - 0x3FFF; /*0x62a51c*/
  else
    LOWORD(v38) = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)(v4 + 40) + 904), &v39) + 0x3FFF; /*0x62a4f7*/
  v37 = v38; /*0x62a527*/
  if ( !v5 ) /*0x62a52b*/
  {
    v9 = *(_DWORD *)(v4 + 44); /*0x62a57a*/
    v10 = *(_DWORD *)(v4 + 52); /*0x62a57d*/
    if ( v9 != -1 ) /*0x62a583*/
    {
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x62a58f*/
      {
LABEL_10:
        *(_DWORD *)v36 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(v4 + 40) + 440))( /*0x62a5a1*/
                                      *(_DWORD *)(v4 + 40),
                                      &v40);
        goto LABEL_11; /*0x62a5b3*/
      }
      v10 -= *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x62a591*/
    }
    if ( v10 ) /*0x62a597*/
    {
      *(_DWORD *)(*(_DWORD *)(v4 + 36) + 108) = 0; /*0x62a8a0*/
      v31 = (_DWORD *)(*(_DWORD *)(v4 + 40) + 1696); /*0x62a8ab*/
      *v31 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a8b1*/
      v31[1] = v45; /*0x62a8b7*/
      v31[2] = 0; /*0x62a8ba*/
      *(_DWORD *)(*(_DWORD *)(v4 + 40) + 1684) = 0; /*0x62a8c0*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 248))(*(_DWORD *)(v4 + 36)); /*0x62a8cb*/
      *(_DWORD *)(v4 + 40) = 0; /*0x62a8d1*/
      return result; /*0x62a8d1*/
    }
    goto LABEL_10; /*0x62a597*/
  }
  v6 = (_WORD *)(*(int (__thiscall **)(_DWORD, int **))(**(_DWORD **)(v4 + 40) + 440))(*(_DWORD *)(v4 + 40), &v40); /*0x62a537*/
  v7 = (((v37 >> 12) + 1) >> 1) & 7; /*0x62a54a*/
  v8 = LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]) + *v6; /*0x62a54d*/
  LOWORD(v7) = HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x62a55c*/
  LOWORD(v38) = v8; /*0x62a560*/
  HIWORD(v38) = v6[1] + v7; /*0x62a56b*/
  *(_DWORD *)v36 = v38; /*0x62a574*/
LABEL_11:
  v11 = (bool *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x62a5b7*/
  v12 = *(int **)(v4 + 36); /*0x62a5cd*/
  v13 = *v12; /*0x62a5d5*/
  v40 = v12; /*0x62a5d7*/
  v33 = *(_DWORD *)((*(int (__thiscall **)(int *))(v13 + 132))(v12) + 1460); /*0x62a5e9*/
  v14 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x62a5ed*/
  TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v36, *(_DWORD *)(v14 + 1460), 0); /*0x62a60b*/
  v15 = (*(int (__thiscall **)(int *))(*v12 + 132))(v12); /*0x62a610*/
  if ( !(unsigned __int8)Cell::IsBuildable(v11, *(_DWORD *)(v15 + 1660), 0, 0, TileIndex, v33, -1, 1) ) /*0x62a61f*/
    *(_DWORD *)v36 = *MapClass::FindPlacementCellsAlt(*(char **)(v4 + 40), &v40, 0); /*0x62a638*/
  v16 = dword_AC4948; /*0x62a641*/
  v17 = dword_AC494C; /*0x62a646*/
  v18 = dword_AC4950; /*0x62a64c*/
  v41 = dword_AC4948; /*0x62a659*/
  v42 = dword_AC494C; /*0x62a65d*/
  v43 = dword_AC4950; /*0x62a661*/
  if ( *(_DWORD *)v36 != dword_AC4928 ) /*0x62a665*/
  {
    v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x62a67f*/
    v20 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v19 + 72))(v19, v44); /*0x62a690*/
    v16 = *v20; /*0x62a692*/
    v41 = *v20; /*0x62a694*/
    v17 = v20[1]; /*0x62a698*/
    v42 = v17; /*0x62a69b*/
    v18 = v20[2]; /*0x62a69f*/
    v43 = v18; /*0x62a6a2*/
  }
  if ( *(_DWORD *)v36 == dword_AC4928 /*0x62a70b*/
    || v16 == dword_AC4948 && v17 == dword_AC494C && v18 == dword_AC4950
    || !ParasiteClass::CanExistOnVictimCell((ParasiteClass *)v4)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, _DWORD))(**(_DWORD **)(v4 + 36) + 216))(
          *(_DWORD *)(v4 + 36),
          &v41,
          (unsigned __int8)(((v37 >> 7) + 1) >> 1)) )
  {
    *(_DWORD *)(*(_DWORD *)(v4 + 36) + 108) = 0; /*0x62a854*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 248))(*(_DWORD *)(v4 + 36)); /*0x62a85c*/
  }
  else
  {
    v21 = *(_DWORD *)(v4 + 36); /*0x62a719*/
    if ( *(_BYTE *)(v21 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(House **)(v21 + 540)) ) /*0x62a72c*/
    {
      *(_BYTE *)(*(_DWORD *)(v4 + 36) + 1074) = 0; /*0x62a738*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 36) + 332))(*(_DWORD *)(v4 + 36)); /*0x62a744*/
    }
    v22 = *(_DWORD *)(v4 + 36); /*0x62a74a*/
    v23 = *(int **)(v22 + 1076); /*0x62a74d*/
    if ( v23 ) /*0x62a755*/
      TeamClass::AddMember(v23, v22, 0); /*0x62a759*/
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 36) + 1196))( /*0x62a763*/
            *(_DWORD *)(v4 + 36),
            a3,
            a2) )
    {
      TechnoClass::SetFocus(*(TechnoClass **)(v4 + 36), 0); /*0x62a771*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 968))(*(_DWORD *)(v4 + 36), 0); /*0x62a77c*/
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v4 + 36) + 1152))(*(_DWORD *)(v4 + 36), 0, 1); /*0x62a78a*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v4 + 36) + 1156))(*(_DWORD *)(v4 + 36), 0, 1); /*0x62a798*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 1160))( /*0x62a7a8*/
      *(_DWORD *)(v4 + 36),
      0,
      0,
      0,
      0,
      0);
    v24 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 36) + 1016))(*(_DWORD *)(v4 + 36), 0); /*0x62a7b4*/
    v25 = (_DWORD *)(*(_DWORD *)(v4 + 36) + 1696); /*0x62a7c5*/
    v26 = *(_DWORD *)(*(_DWORD *)v24 + 176); /*0x62a7cb*/
    *v25 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a7d1*/
    v25[1] = v45; /*0x62a7da*/
    v25[2] = 3 * v26; /*0x62a7dd*/
    v27 = *(_DWORD *)(v4 + 68); /*0x62a7e0*/
    *(_DWORD *)(v4 + 76) = 0; /*0x62a7e5*/
    *(_DWORD *)(v4 + 80) = 0; /*0x62a7e8*/
    *(_DWORD *)(v4 + 72) = 0; /*0x62a7eb*/
    if ( v27 ) /*0x62a7ee*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 248))(v27); /*0x62a7f2*/
      *(_DWORD *)(v4 + 68) = 0; /*0x62a7f8*/
    }
    if ( *(_BYTE *)(v4 + 84) ) /*0x62a7fb*/
    {
      v38 = v4; /*0x62a812*/
      v28 = (*(int (__thiscall **)(int *, unsigned int *))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62a816*/
              g_BuildingLoadQueue_Array.?,
              &v38);
      if ( v28 != -1 && v28 < g_BuildingLoadQueue_Array.?[1] ) /*0x62a826*/
      {
        --g_BuildingLoadQueue_Array.?[1]; /*0x62a82b*/
        for ( ; /*0x62a831*/
              v28 < g_BuildingLoadQueue_Array.?[1];
              *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v28 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                    + 4 * v28) )
        {
          ++v28; /*0x62a839*/
        }
      }
      *(_BYTE *)(v4 + 84) = 0; /*0x62a84b*/
    }
  }
  *(_DWORD *)(*(_DWORD *)(v4 + 40) + 808) = 0; /*0x62a869*/
  v29 = (_DWORD *)(*(_DWORD *)(v4 + 40) + 1696); /*0x62a877*/
  *v29 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a87d*/
  result = v45; /*0x62a87f*/
  v29[1] = v45; /*0x62a883*/
  v29[2] = 0; /*0x62a886*/
  *(_DWORD *)(*(_DWORD *)(v4 + 40) + 1684) = 0; /*0x62a88c*/
  *(_DWORD *)(v4 + 40) = 0; /*0x62a892*/
  return result; /*0x62a895*/
}



// ==== 0x0062A8E0  ParasiteClass::CanInfect  this=ParasiteClass  sig=csp ====
bool __thiscall ParasiteClass::CanInfect(ParasiteClass *this, _DWORD *a2)
{
  int creationFrame; // ecx
  Cell *v4; // eax
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
                creationFrame = this->creationFrame; /*0x62a933*/
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (Cell *)(*(int (__thiscall **)(_DWORD *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (unsigned __int8)Cell::IsValidHeight(v4) ) /*0x62a966*/
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
  int *v11; // eax
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
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.?[0] + 16))(g_BuildingLoadQueue_Array.?, &v14); /*0x62a9c1*/
    if ( v4 != -1 ) /*0x62a9c7*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x62a9cf*/
    *(_BYTE *)(this + 84) = 0; /*0x62a9d4*/
  }
  *(_DWORD *)(this + 56) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x62a9e6*/
  *(_DWORD *)(this + 60) = v16; /*0x62a9ed*/
  *(_DWORD *)(this + 64) = 0; /*0x62a9f0*/
  if ( ParasiteClass::CanInfect((ParasiteClass *)this, a2) ) /*0x62a9f5*/
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
    v5 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(*(_DWORD *)(this + 36) + 1372)); /*0x62aa11*/
    v6 = **(_DWORD **)(this + 36); /*0x62aa1f*/
    v7 = (*(int (__thiscall **)(void *, int *, _DWORD))(*(_DWORD *)v5 + 72))(v5, &v15, 0); /*0x62aa25*/
    v8 = (*(int (__thiscall **)(_DWORD, int))(v6 + 216))(*(_DWORD *)(this + 36), v7); /*0x62aa2c*/
    v9 = *(_DWORD *)(this + 36); /*0x62aa32*/
    if ( v8 ) /*0x62aa37*/
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 1164))(v9, 0, 0, 0, 0); /*0x62aa51*/
      v11 = *(int **)(this + 36); /*0x62aa57*/
      v15 = v11[39]; /*0x62aa67*/
      v16 = v11[40]; /*0x62aa6e*/
      v17 = v11[41]; /*0x62aa75*/
      MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], &v15, v11[152] - 3, v11[152] + 2, 0); /*0x62aa91*/
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
bool __thiscall ParasiteClass::CanExistOnVictimCell(ParasiteClass *this)
{
  int v2; // ecx
  int creationFrame; // ecx
  CellClass *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  Cell *v9; // eax

  v2 = *(_DWORD *)this->__pad_28; /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  creationFrame = this->creationFrame; /*0x62ab77*/
  if ( creationFrame ) /*0x62ab7c*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)creationFrame + 44))(creationFrame) == 1 ) /*0x62ab86*/
    {
      v5 = (CellClass *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28); /*0x62ab8f*/
      if ( CellClass::FindInfantry(v5, 0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) /*0x62abdc*/
                    + 320)
        & 0x100) == 0;
    v8 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
LABEL_20:
  v9 = (Cell *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 444))(*(_DWORD *)this->__pad_28); /*0x62ac14*/
  return Cell::IsBridge(v9) == 0; /*0x62ab4b*/
}



// ==== 0x0062AC30  Object::CalculateObjectPlacementPosition  this=Object  sig=csp ====
int *__thiscall Object::CalculateObjectPlacementPosition(Object *this, int *a2)
{
  int *result; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int *v9; // eax
  int v10; // edx
  int v11; // eax
  unsigned int v12; // esi
  Cell *v13; // ebp
  ObjectPlacement *NeighbourContent; // esi
  int ObjectPlacement_field_0x04; // eax
  bool v16; // bl
  int v17; // eax
  _DWORD *v18; // eax
  int *v19; // eax
  int v20; // ecx
  CellClass *v21; // eax
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

  if ( !*(_DWORD *)&this->__pad_C[28] ) /*0x62ac39*/
  {
    result = a2; /*0x62ac40*/
    v4 = dword_AC4948; /*0x62ac44*/
    v5 = a2; /*0x62ac4a*/
LABEL_39:
    *v5 = v4; /*0x62af27*/
    v5[1] = dword_AC494C; /*0x62af31*/
    v5[2] = dword_AC4950; /*0x62af3c*/
    return result; /*0x62af3c*/
  }
  if ( !ParasiteClass::CanExistOnVictimCell((ParasiteClass *)this) ) /*0x62ac5a*/
  {
    v12 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(*(_DWORD *)&this->__pad_C[28] + 904), &v26) >> 12) /*0x62ad3a*/
                        + 1) >> 1)
        & 7;
    v13 = (Cell *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]); /*0x62ad43*/
    NeighbourContent = (ObjectPlacement *)Cell::GetNeighbourContent(v13, v12); /*0x62ad50*/
    if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[24] + 132))(*(_DWORD *)&this->__pad_C[24]) /*0x62ad5a*/
                   + 3278) )
    {
      ObjectPlacement_field_0x04 = NeighbourContent[29].ObjectPlacement_field_0x04; /*0x62ad64*/
      if ( ObjectPlacement_field_0x04 == 2 || ObjectPlacement_field_0x04 == 6 || ObjectPlacement_field_0x04 == 3 ) /*0x62ad77*/
      {
        v16 = (*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad90*/
                         + 320)
             & 0x100) == 0;
        v17 = *(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&this->__pad_C[28] + 444))(*(_DWORD *)&this->__pad_C[28]) /*0x62ad9d*/
                        + 68);
        if ( v17 >= 74 && v17 <= 99 ) /*0x62ada8*/
          v16 = 0; /*0x62adaa*/
        if ( (v17 < 205 || v17 > 230) && v16 ) /*0x62adbc*/
        {
          result = a2; /*0x62adbe*/
          v4 = dword_AC4948; /*0x62adc2*/
          v5 = a2; /*0x62adc8*/
          goto LABEL_39; /*0x62adca*/
        }
      }
    }
    v18 = (_DWORD *)(*(int (__thiscall **)(ObjectPlacement *, _BYTE *))(*(_DWORD *)NeighbourContent->__pad_0 + 72))( /*0x62adde*/
                      NeighbourContent,
                      v30);
    v19 = ObjectPlacement::CalcPosition(NeighbourContent, v31, v18, 0, 0, 0); /*0x62ade9*/
    v27 = *v19; /*0x62adf0*/
    v20 = *(_DWORD *)&this->__pad_C[24]; /*0x62adf4*/
    v28 = v19[1]; /*0x62adfa*/
    v29 = v19[2]; /*0x62ae03*/
    if ( v20 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 44))(v20) == 1 ) /*0x62ae11*/
    {
      v21 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ae1d*/
      v22 = (int *)(*(int (__thiscall **)(CellClass *, int *))(v21->mapCoords[0] + 72))(v21, v31); /*0x62ae2b*/
      v27 = *v22; /*0x62ae30*/
      v28 = v22[1]; /*0x62ae37*/
      v29 = v22[2]; /*0x62ae3e*/
    }
    if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62ae45*/
    {
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62ae67*/
      {
        v29 += dword_AC497C; /*0x62ae75*/
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ae7c*/
        goto LABEL_34; /*0x62ae83*/
      }
      goto LABEL_29; /*0x62ae67*/
    }
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27)->flags[0] & 0x100) != 0 ) /*0x62aea9*/
    {
      v23 = (*(int (__thiscall **)(Cell *, int *))(v13->Cell_field_0x0 + 72))(v13, v31); /*0x62aeb5*/
      if ( v29 >= *(_DWORD *)(v23 + 8) ) /*0x62aec1*/
      {
LABEL_29:
        *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62ae85*/
        goto LABEL_34; /*0x62ae8f*/
      }
      v29 += dword_AC497C; /*0x62aec9*/
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62aed0*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62aedc*/
    }
LABEL_34:
    v4 = dword_AC4948; /*0x62aee3*/
    v24 = v28; /*0x62aeed*/
    v25 = v29; /*0x62aef1*/
    if ( v27 != dword_AC4948 || v28 != dword_AC494C || v29 != dword_AC4950 ) /*0x62af07*/
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
  v6 = (int *)(*(_DWORD *)&this->__pad_C[28] + 156); /*0x62ac63*/
  v27 = *v6; /*0x62ac6a*/
  v7 = *(_DWORD *)&this->__pad_C[24]; /*0x62ac6e*/
  v28 = v6[1]; /*0x62ac74*/
  v29 = v6[2]; /*0x62ac7d*/
  if ( v7 ) /*0x62ac81*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 1 ) /*0x62ac8b*/
    {
      v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v27); /*0x62ac97*/
      v9 = (int *)(*(int (__thiscall **)(CellClass *, _BYTE *))(v8->mapCoords[0] + 72))(v8, v30); /*0x62aca5*/
      v27 = *v9; /*0x62acaa*/
      v10 = *(_DWORD *)&this->__pad_C[28]; /*0x62acae*/
      v28 = v9[1]; /*0x62acb4*/
      v11 = v9[2]; /*0x62acb8*/
      v29 = v11; /*0x62acbb*/
      if ( *(_BYTE *)(v10 + 140) ) /*0x62acbf*/
        v29 = dword_AC497C + v11; /*0x62accf*/
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)&this->__pad_C[28] + 140) ) /*0x62acd6*/
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 1; /*0x62ace3*/
  else
    *(_BYTE *)(*(_DWORD *)&this->__pad_C[24] + 140) = 0; /*0x62acef*/
  *a2 = v27; /*0x62ad03*/
  a2[1] = v28; /*0x62ad0a*/
  a2[2] = v29; /*0x62ad11*/
  return a2; /*0x62ad00*/
}



// ==== 0x0062AF50  ParasiteClass::StubReturn88  this=ParasiteClass  sig=csp ====
int ParasiteClass::StubReturn88(ParasiteClass *this)
{
  return 88; /*0x62af55*/
}



// ==== 0x0062AF60  ParasiteClass::StubReturn67  this=ParasiteClass  sig=csp ====
int ParasiteClass::StubReturn67(ParasiteClass *this)
{
  return 67; /*0x62af65*/
}



// ==== 0x0062AF70  ParasiteClass::UpdateParasite  this=ParasiteClass  sig=csp ====
_DWORD *__thiscall ParasiteClass::UpdateParasite(ParasiteClass *this, char a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  ParasiteClass *v7; // [esp+8h] [ebp-4h] BYREF

  v3 = this->q011; /*0x62af77*/
  this->AbstractClass = &ParasiteClass::`vftable'; /*0x62af7a*/
  this->? = &ParasiteClass::`vftable'; /*0x62af82*/
  this->? = &ParasiteClass::`vftable'; /*0x62af89*/
  this->? = &ParasiteClass::`vftable'; /*0x62af90*/
  this->IsAllocated = 0; /*0x62af97*/
  this->abstractFlags = 0; /*0x62af9a*/
  *((_DWORD *)this + 18) = 0; /*0x62af9d*/
  if ( v3 ) /*0x62afa0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62afa4*/
    this->q011 = 0; /*0x62afaa*/
  }
  if ( *((_BYTE *)this + 84) ) /*0x62afad*/
  {
    v7 = this; /*0x62afc2*/
    v4 = (*(int (__thiscall **)(int *, ParasiteClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62afc6*/
           g_BuildingLoadQueue_Array.?,
           &v7);
    if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.?[1] ) /*0x62afd6*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x62afdb*/
      for ( ; /*0x62afe1*/
            v4 < g_BuildingLoadQueue_Array.?[1];
            *(_DWORD *)(g_BuildingLoadQueue_Array.?[0] + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[0]
                                                                                 + 4 * v4) )
      {
        ++v4; /*0x62afe9*/
      }
    }
    *((_BYTE *)this + 84) = 0; /*0x62affb*/
  }
  v7 = this; /*0x62b00e*/
  v5 = (*(int (__thiscall **)(int *, ParasiteClass **))(dword_AC4910 + 16))(&dword_AC4910, &v7); /*0x62b012*/
  if ( v5 != -1 && v5 < dword_AC4920 && v5 < --dword_AC4920 ) /*0x62b02d*/
  {
    do /*0x62b045*/
    {
      ++v5; /*0x62b035*/
      *((_DWORD *)dword_AC4914 + v5 - 1) = *((_DWORD *)dword_AC4914 + v5); /*0x62b039*/
    }
    while ( v5 < dword_AC4920 ); /*0x62b045*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x62b049*/
  if ( (a2 & 1) != 0 ) /*0x62b053*/
    __3_YAXPAX_Z(this); /*0x62b056*/
  return &this->AbstractClass; /*0x62b060*/
}



// ==== 0x0062B070  _DynamicVectorClass_PAVParasiteClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::Destroy(_DynamicVectorClass_PAVParasiteClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x62b076*/
  this->m_10 = 0; /*0x62b079*/
  if ( v2 && BYTE1(this->m_C) ) /*0x62b080*/
  {
    __3_YAXPAX_Z(v2); /*0x62b086*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b08e*/
  }
  BYTE1(this->m_C) = 0; /*0x62b091*/
  this->m_8 = 0; /*0x62b094*/
}



// ==== 0x0062B0A0  _DynamicVectorClass_PAVParasiteClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::GetItemIndex(_DynamicVectorClass_PAVParasiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x62b0a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x62b0b5*/
  else
    return 0; /*0x62b0a7*/
}



// ==== 0x0062B0C0  _VectorClass_PAVParasiteClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::Get(_VectorClass_PAVParasiteClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x62b0ca*/
}



// ==== 0x0062B0D0  _VectorClass_PAVParasiteClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::Add(_VectorClass_PAVParasiteClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x62b0d2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x62b0dd*/
  {
    v3 = 0; /*0x62b0df*/
    if ( m_8 <= 0 ) /*0x62b0e3*/
      return 1; /*0x62b103*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x62b0e5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x62b0eb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x62b0f4*/
    {
      ++v3; /*0x62b0f6*/
      ++v4; /*0x62b0f7*/
      if ( v3 >= m_8 ) /*0x62b0fc*/
        return 1; /*0x62b0fc*/
    }
  }
  return 0; /*0x62b0fe*/
}



// ==== 0x0062B110  _VectorClass_PAVParasiteClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::Release(_VectorClass_PAVParasiteClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x62b11c*/
  {
    LOBYTE(this->m_C) = 0; /*0x62b126*/
    if ( a3 ) /*0x62b12c*/
      v4 = a3; /*0x62b142*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x62b13e*/
    LOBYTE(this->m_C) = 1; /*0x62b146*/
    if ( v4 ) /*0x62b14a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x62b155*/
      {
        m_8 = this->m_8; /*0x62b15c*/
        if ( a2 < m_8 ) /*0x62b161*/
          m_8 = a2; /*0x62b163*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x62b169*/
          ++i; /*0x62b16e*/
        if ( BYTE1(this->m_C) ) /*0x62b17b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b186*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x62b18e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x62b197*/
      this->m_8 = a2; /*0x62b19f*/
      BYTE1(this->m_C) = a3 == 0; /*0x62b1a2*/
      return 1; /*0x62b1a8*/
    }
    else
    {
      return 0; /*0x62b14f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVParasiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62b1b2*/
    return 1; /*0x62b1b8*/
  }
}



// ==== 0x0062B1C0  _VectorClass_PAVParasiteClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ParasiteClass::Remove(_VectorClass_PAVParasiteClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x62b1cd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b1d3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b1db*/
  }
  BYTE1(this->m_C) = 0; /*0x62b1de*/
  this->m_8 = 0; /*0x62b1e1*/
}



// ==== 0x0062B1F0  _VectorClass_PAVParasiteClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::GetSize(_VectorClass_PAVParasiteClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x62b1f0*/
    return 0; /*0x62b1f8*/
  m_8 = this->m_8; /*0x62b1fe*/
  result = 0; /*0x62b201*/
  if ( m_8 <= 0 ) /*0x62b205*/
    return -1; /*0x62b21c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62b20b*/
  {
    if ( ++result >= m_8 ) /*0x62b21a*/
      return -1; /*0x62b21a*/
  }
  return result; /*0x62b1fa*/
}



// ==== 0x0062B230  _VectorClass_PAVParasiteClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ParasiteClass::GetCapacity(_VectorClass_PAVParasiteClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x62b230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x62b245*/
  else
    return 0; /*0x62b237*/
}



// ==== 0x0062B250  _DynamicVectorClass_PAVParasiteClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ParasiteClass::SetCapacity(
        _DynamicVectorClass_PAVParasiteClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x62b25c*/
  {
    LOBYTE(this->m_C) = 0; /*0x62b262*/
    if ( a3 ) /*0x62b268*/
      v4 = a3; /*0x62b27e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x62b27a*/
    LOBYTE(this->m_C) = 1; /*0x62b282*/
    if ( !v4 ) /*0x62b286*/
      return 0; /*0x62b2fa*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x62b288*/
    {
      m_8 = this->m_8; /*0x62b28f*/
      if ( a2 < m_8 ) /*0x62b294*/
        m_8 = a2; /*0x62b296*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x62b29c*/
        ++i; /*0x62b2a1*/
      if ( BYTE1(this->m_C) ) /*0x62b2ae*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x62b2b9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x62b2c1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x62b2ca*/
    this->m_8 = a2; /*0x62b2d2*/
    BYTE1(this->m_C) = a3 == 0; /*0x62b2d5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVParasiteClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x62b2de*/
  }
  v7 = this->m_8; /*0x62b2e1*/
  if ( v7 < this->m_10 ) /*0x62b2e9*/
    this->m_10 = v7; /*0x62b2eb*/
  return 1; /*0x62b2ee*/
}



// ==== 0x0062B300  _DynamicVectorClass_PAVParasiteClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ParasiteClass::FindItemIndex(_DynamicVectorClass_PAVParasiteClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x62b300*/
  result = 0; /*0x62b303*/
  if ( m_10 <= 0 ) /*0x62b308*/
    return -1; /*0x62b31f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x62b30e*/
  {
    if ( ++result >= m_10 ) /*0x62b31d*/
      return -1; /*0x62b31d*/
  }
  return result; /*0x62b322*/
}



// ==== 0x0062B330  _VectorClass_PAVParasiteClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ParasiteClass::QueryInterface(_VectorClass_PAVParasiteClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x62b333*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParasiteClass *>::`vftable'; /*0x62b336*/
  if ( v3 && BYTE1(this->m_C) ) /*0x62b340*/
  {
    __3_YAXPAX_Z(v3); /*0x62b348*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b350*/
  }
  BYTE1(this->m_C) = 0; /*0x62b35b*/
  this->m_8 = 0; /*0x62b361*/
  if ( (a2 & 1) != 0 ) /*0x62b368*/
    __3_YAXPAX_Z(this); /*0x62b36b*/
  return this->__pad_0; /*0x62b375*/
}



// ==== 0x0062B380  _DynamicVectorClass_PAVParasiteClass::Constructor_VectorClass_ParasiteClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_ParasiteClass::Constructor_VectorClass_ParasiteClass___(
        _DynamicVectorClass_PAVParasiteClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x62b383*/
  *(_DWORD *)this->__pad_0 = &VectorClass<ParasiteClass *>::`vftable'; /*0x62b386*/
  if ( v3 && BYTE1(this->m_C) ) /*0x62b390*/
  {
    __3_YAXPAX_Z(v3); /*0x62b398*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x62b3a0*/
  }
  BYTE1(this->m_C) = 0; /*0x62b3ab*/
  this->m_8 = 0; /*0x62b3b1*/
  if ( (a2 & 1) != 0 ) /*0x62b3b8*/
    __3_YAXPAX_Z(this); /*0x62b3bb*/
  return this->__pad_0; /*0x62b3c5*/
}



// ==== 0x0062B3D0  sub_62B3D0  this=-  sig=ida-proto ====
void sub_62B3D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62b3dc*/
  dbl_AC49B8 = Math::Sqrt(v0 + v0); /*0x62b3ee*/
}



// ==== 0x0062B400  sub_62B400  this=-  sig=ida-proto ====
void sub_62B400()
{
  dbl_AC4A10 = dbl_AC49B8 / 60.0; /*0x62b40c*/
}



// ==== 0x0062B420  sub_62B420  this=-  sig=ida-proto ====
void sub_62B420()
{
  dbl_AC49F8 = 1.0 / dbl_AC4A10; /*0x62b42c*/
}



// ==== 0x0062B440  sub_62B440  this=-  sig=ida-proto ====
void sub_62B440()
{
  dbl_AC49F0 = 0.0174532925199433 * 45.0; /*0x62b44c*/
}



// ==== 0x0062B460  sub_62B460  this=-  sig=ida-proto ====
void sub_62B460()
{
  dbl_AC49C0 = 0.0174532925199433 * 60.0; /*0x62b46c*/
}



// ==== 0x0062B480  sub_62B480  this=-  sig=ida-proto ====
void sub_62B480()
{
  dbl_AC4990 = 0.0174532925199433 * 90.0; /*0x62b48c*/
}



// ==== 0x0062B4A0  sub_62B4A0  this=-  sig=ida-proto ====
__int64 sub_62B4A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4990 - dbl_AC49C0); /*0x62b4b2*/
  result = Math::RoundToInt(v0 * dbl_AC49B8 * 0.5); /*0x62b4c6*/
  dword_AC4A18 = result; /*0x62b4cb*/
  return result; /*0x62b4d0*/
}



// ==== 0x0062B4E0  sub_62B4E0  this=-  sig=ida-proto ====
void sub_62B4E0()
{
  dbl_AC49C8 = Math::ArcTan((double)dword_AC4A18 * 0.00390625); /*0x62b4f7*/
}



// ==== 0x0062B510  sub_62B510  this=-  sig=ida-proto ====
void sub_62B510()
{
  dbl_AC49E8 = Math::ArcTan((double)(2 * dword_AC4A18) / dbl_AC49B8); /*0x62b532*/
}



// ==== 0x0062B540  sub_62B540  this=-  sig=ida-proto ====
__int64 sub_62B540()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A18) + 0.5); /*0x62b55b*/
  dword_AC4A0C = result; /*0x62b560*/
  return result; /*0x62b566*/
}



// ==== 0x0062B570  sub_62B570  this=-  sig=ida-proto ====
int sub_62B570()
{
  word_AC49B0 = 0; /*0x62b572*/
  word_AC49B2 = 0; /*0x62b578*/
  return 0; /*0x62b57e*/
}



// ==== 0x0062B580  sub_62B580  this=-  sig=ida-proto ====
int sub_62B580()
{
  dword_AC49D8 = 0; /*0x62b582*/
  dword_AC49DC = 0; /*0x62b587*/
  dword_AC49E0 = 0; /*0x62b58c*/
  return 0; /*0x62b591*/
}



// ==== 0x0062B5A0  sub_62B5A0  this=-  sig=ida-proto ====
int sub_62B5A0()
{
  dword_AC4A08 = 0; /*0x62b5a5*/
  dword_AC4A00 = 128; /*0x62b5af*/
  dword_AC4A04 = 128; /*0x62b5b4*/
  return 128; /*0x62b5b9*/
}



// ==== 0x0062B5C0  sub_62B5C0  this=-  sig=ida-proto ====
int sub_62B5C0()
{
  dword_AC49A0 = 0; /*0x62b5c2*/
  dword_AC49A4 = 0; /*0x62b5c7*/
  dword_AC49A8 = 0; /*0x62b5cc*/
  dword_AC49AC = 0; /*0x62b5d1*/
  return 0; /*0x62b5d6*/
}



// ==== 0x0062B5E0  ParticleClass::Construct  this=ParticleClass  sig=csp ====
int __userpurge ParticleClass::Construct@<eax>(
        ObjectClass *this@<ecx>,
        double a2@<st0>,
        int a3,
        _DWORD *a4,
        float a5,
        int a6)
{
  float v7; // eax
  int v10; // ecx
  _BYTE *v17; // eax
  char v18; // dl
  int v19; // eax
  int v21; // eax
  __int16 v22; // ax
  float v24; // eax
  float v25; // ecx
  float v26; // edx
  int v27; // edi
  int v28; // eax
  int v32; // eax
  int v33; // edx
  _BYTE *v34; // eax
  double v36; // [esp+8h] [ebp-30h]
  float v37; // [esp+Ch] [ebp-2Ch]
  int v38; // [esp+28h] [ebp-10h]
  float v39; // [esp+2Ch] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-Ch]
  float v41; // [esp+30h] [ebp-8h]
  float v42; // [esp+34h] [ebp-4h]
  int v43; // [esp+3Ch] [ebp+4h]
  int v44; // [esp+3Ch] [ebp+4h]
  int v45; // [esp+3Ch] [ebp+4h]
  int v46; // [esp+3Ch] [ebp+4h]
  unsigned int v47; // [esp+3Ch] [ebp+4h]
  int v49; // [esp+3Ch] [ebp+4h]
  unsigned int v50; // [esp+40h] [ebp+8h]

  _ESI = (int)this; /*0x62b5e7*/
  ObjectClass::ctor(this); /*0x62b5e9*/
  *(_DWORD *)(_ESI + 172) = a3; /*0x62b5f4*/
  *(_BYTE *)(_ESI + 176) = 0; /*0x62b5fa*/
  *(_BYTE *)(_ESI + 177) = 0; /*0x62b600*/
  *(_BYTE *)(_ESI + 178) = 0; /*0x62b606*/
  *(_DWORD *)(_ESI + 184) = 0; /*0x62b60c*/
  *(_DWORD *)(_ESI + 180) = 0; /*0x62b612*/
  *(_DWORD *)(_ESI + 188) = 0; /*0x62b618*/
  v7 = a5; /*0x62b61e*/
  *(_DWORD *)(_ESI + 192) = 0; /*0x62b622*/
  *(_DWORD *)(_ESI + 196) = 0; /*0x62b628*/
  *(_DWORD *)(_ESI + 200) = 0; /*0x62b62e*/
  *(_DWORD *)(_ESI + 204) = 0; /*0x62b634*/
  *(_DWORD *)(_ESI + 208) = 0; /*0x62b63a*/
  *(_DWORD *)(_ESI + 212) = -1082130432; /*0x62b640*/
  *(_DWORD *)(_ESI + 216) = 0; /*0x62b64a*/
  *(_DWORD *)(_ESI + 220) = 0; /*0x62b650*/
  *(_DWORD *)(_ESI + 224) = 0; /*0x62b656*/
  *(_DWORD *)(_ESI + 228) = *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 764); /*0x62b66e*/
  *(_DWORD *)(_ESI + 232) = *(_DWORD *)LODWORD(v7); /*0x62b678*/
  *(_DWORD *)(_ESI + 236) = *(_DWORD *)(LODWORD(v7) + 4); /*0x62b67d*/
  _EDI = a4; /*0x62b680*/
  *(_DWORD *)(_ESI + 240) = *(_DWORD *)(LODWORD(v7) + 8); /*0x62b687*/
  *(_DWORD *)(_ESI + 244) = *a4; /*0x62b694*/
  *(_DWORD *)(_ESI + 248) = a4[1]; /*0x62b699*/
  *(_DWORD *)(_ESI + 252) = a4[2]; /*0x62b69f*/
  *(_DWORD *)(_ESI + 256) = dword_AC49D8; /*0x62b6ae*/
  *(_DWORD *)(_ESI + 260) = dword_AC49DC; /*0x62b6ba*/
  *(_DWORD *)(_ESI + 264) = dword_AC49E0; /*0x62b6c3*/
  v43 = *(_DWORD *)(LODWORD(v7) + 8) - a4[2]; /*0x62b6d6*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6da*/
  v44 = *(_DWORD *)(LODWORD(v7) + 4) - a4[1]; /*0x62b6e2*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6e8*/
  v45 = *(_DWORD *)LODWORD(v7) - *a4; /*0x62b6ec*/
  _EBP = (float *)(_ESI + 268); /*0x62b6f0*/
  __asm { fild [esp+28h+arg_0] } /*0x62b6f6*/
  v10 = a6; /*0x62b6fa*/
  __asm { fstp dword ptr [ebp+0] } /*0x62b6fe*/
  *_EBP = _ET1; /*0x62b6fe*/
  __asm { fstp dword ptr [ebp+4] } /*0x62b701*/
  _EBP[1] = _ET1; /*0x62b701*/
  __asm { fstp dword ptr [ebp+8] } /*0x62b704*/
  _EBP[2] = _ET1; /*0x62b704*/
  __asm /*0x62b707*/
  {
    fild dword ptr [edi+8]
    fild dword ptr [edi+4]
    fild dword ptr [edi]
    fstp dword ptr [esi+118h]
  }
  *(float *)(_ESI + 280) = _ET1; /*0x62b70f*/
  __asm { fstp dword ptr [esi+11Ch] } /*0x62b715*/
  *(float *)(_ESI + 284) = _ET1; /*0x62b715*/
  __asm { fstp dword ptr [esi+120h] } /*0x62b71b*/
  *(float *)(_ESI + 288) = _ET1; /*0x62b71b*/
  *(_DWORD *)(_ESI + 292) = v10; /*0x62b721*/
  v17 = *(_BYTE **)(_ESI + 172); /*0x62b727*/
  v18 = v17[779]; /*0x62b72d*/
  *(_BYTE *)(_ESI + 301) = 0; /*0x62b733*/
  *(_BYTE *)(_ESI + 300) = v18; /*0x62b739*/
  *(_BYTE *)(_ESI + 302) = v17[778]; /*0x62b745*/
  *(_BYTE *)(_ESI + 303) = v17[756]; /*0x62b754*/
  *(_BYTE *)(_ESI + 304) = 0; /*0x62b75b*/
  *(_BYTE *)(_ESI + 305) = 0; /*0x62b761*/
  *(_DWORD *)_ESI = &ParticleClass::`vftable'; /*0x62b767*/
  *(_DWORD *)(_ESI + 4) = &ParticleClass::`vftable'; /*0x62b76d*/
  *(_DWORD *)(_ESI + 8) = &ParticleClass::`vftable'; /*0x62b773*/
  *(_DWORD *)(_ESI + 12) = &ParticleClass::`vftable'; /*0x62b77a*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(_ESI + 4)); /*0x62b781*/
  if ( *(int *)&stru_A83D50.__pad_80[8] < *(int *)stru_A83D50.__pad_80 /*0x62b7b9*/
    || (stru_A83D50.__pad_80[5] || !*(_DWORD *)stru_A83D50.__pad_80)
    && *(int *)&stru_A83D50.__pad_80[12] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A83D50.SuperClass_field_0x78 + 8))(
         &stru_A83D50.SuperClass_field_0x78,
         *(_DWORD *)&stru_A83D50.__pad_80[12] + *(_DWORD *)stru_A83D50.__pad_80,
         0) )
  {
    v19 = (*(_DWORD *)&stru_A83D50.__pad_80[8])++; /*0x62b7c6*/
    *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v19) = _ESI; /*0x62b7d5*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 788) == 1 ) /*0x62b7e5*/
  {
    v46 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 2; /*0x62b803*/
    __asm /*0x62b807*/
    {
      fild [esp+28h+arg_0]
      fadd dword ptr [esi+0E4h]
      fstp dword ptr [esi+0E4h]
    }
    *(float *)(_ESI + 228) = _ET1; /*0x62b811*/
  }
  v21 = *(_DWORD *)(_ESI + 172); /*0x62b817*/
  *(_WORD *)(_ESI + 298) = *(_WORD *)(v21 + 732); /*0x62b824*/
  if ( *(_DWORD *)(v21 + 788) == 4 ) /*0x62b834*/
    v22 = *(_WORD *)(*(_DWORD *)(_ESI + 172) + 736) /*0x62b85c*/
        + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 10);
  else
    v22 = *(_WORD *)(*(_DWORD *)(_ESI + 172) + 736) /*0x62b889*/
        + abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % *(_DWORD *)(*(_DWORD *)(_ESI + 172) + 736));
  *(_WORD *)(_ESI + 296) = v22; /*0x62b890*/
  v38 = a4[2]; /*0x62b8ad*/
  if ( v38 <= (int)Cell::GetGroundHeight(a4) ) /*0x62b8ba*/
    Cell::GetGroundHeight(a4); /*0x62b8c2*/
  ObjectClass::SetPosition((IUnknown *)_ESI); /*0x62b8d2*/
  __asm /*0x62b8d7*/
  {
    fld dword ptr [ebp+8]
    fld dword ptr [ebp+4]
    fld dword ptr [ebp+0]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
  }
  __asm
  {
    faddp st(1), st
    fld st(3)
    fmul st, st(4)
    faddp st(1), st
    fstp qword ptr [esp+30h+var_30]; double
    fstp st
    fstp st
    fstp st
  }
  Math::Sqrt(v36); /*0x62b8fc*/
  __asm { fcom ds:dbl_7E2800 } /*0x62b901*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4000) != 0 ) /*0x62b90f*/
  {
    __asm { fstp st } /*0x62b93a*/
    v24 = *_EBP; /*0x62b93c*/
    v25 = *(float *)(_ESI + 272); /*0x62b93e*/
    v26 = *(float *)(_ESI + 276); /*0x62b941*/
  }
  else
  {
    __asm /*0x62b911*/
    {
      fld dword ptr [ebp+0]
      fdiv st, st(1)
      fstp [esp+28h+var_C]
      fld dword ptr [ebp+4]
      fdiv st, st(1)
    }
    v24 = v39; /*0x62b91f*/
    __asm { fstp [esp+28h+var_8] } /*0x62b923*/
    v25 = v41; /*0x62b927*/
    __asm /*0x62b92b*/
    {
      fdivr dword ptr [ebp+8]
      fstp [esp+28h+var_4]
    }
    v26 = v42; /*0x62b932*/
  }
  *_EBP = v24; /*0x62b94a*/
  *(float *)(_ESI + 272) = v25; /*0x62b950*/
  *(float *)(_ESI + 276) = v26; /*0x62b953*/
  if ( *(_BYTE *)(*(_DWORD *)(_ESI + 172) + 783) ) /*0x62b95c*/
  {
    __asm { fld dword ptr [ebp+0] } /*0x62b96e*/
    __asm { fmul dword ptr [esi+0E4h] }
    v40 = *a4 - *(_DWORD *)LODWORD(a5); /*0x62b97e*/
    v27 = a4[1] - *(_DWORD *)(LODWORD(a5) + 4); /*0x62b985*/
    LOWORD(v28) = Math::RoundToInt(a2); /*0x62b987*/
    a5 = COERCE_FLOAT(abs32(v28)); /*0x62b991*/
    __asm /*0x62b995*/
    {
      fild [esp+28h+arg_8.Color_field_00]
      fstp [esp+28h+arg_8.Color_field_00]
      fld dword ptr [esi+110h]
      fmul dword ptr [esi+0E4h]
    }
    LOWORD(_EAX) = Math::RoundToInt(a2); /*0x62b9a9*/
    v47 = abs32(_EAX); /*0x62b9b3*/
    __asm /*0x62b9b7*/
    {
      fild [esp+28h+arg_0]
      fstp [esp+28h+arg_0]
      fld ds:flt_7EF920
      fld [esp+28h+arg_8.Color_field_00]
      fcomp ds:dbl_7EF918
      fnstsw ax
    }
    if ( (_EAX & 0x4100) == 0 ) /*0x62b9d4*/
    {
      __asm { fstp st } /*0x62b9db*/
      v50 = abs32(v40); /*0x62b9e1*/
      __asm /*0x62b9e5*/
      {
        fild [esp+28h+arg_4]
        fdiv [esp+28h+arg_8.Color_field_00]
      }
    }
    __asm /*0x62b9ed*/
    {
      fld [esp+28h+arg_0]
      fcomp ds:dbl_7EF918
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x62b9fc*/
    {
      a5 = COERCE_FLOAT(abs32(v27)); /*0x62ba05*/
      __asm /*0x62ba09*/
      {
        fild [esp+28h+arg_8.Color_field_00]
        fdiv [esp+28h+arg_0]
        fstp [esp+28h+arg_8.Color_field_00]
        fcom [esp+28h+arg_8.Color_field_00]
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x62ba1e*/
      {
        __asm /*0x62ba20*/
        {
          fstp st
          fld [esp+28h+arg_8.Color_field_00]
        }
      }
    }
    LODWORD(a5) = *(char *)(*(_DWORD *)(_ESI + 172) + 780) + 1; /*0x62ba34*/
    __asm /*0x62ba38*/
    {
      fild [esp+28h+arg_8.Color_field_00]
      fdivr st, st(1)
      fadd ds:dbl_7E1718
    }
    __asm { fstp st }
    *(_BYTE *)(_ESI + 300) = Math::RoundToInt(a2); /*0x62ba4b*/
  }
  v32 = *(_DWORD *)(_ESI + 172); /*0x62ba51*/
  if ( *(int *)(v32 + 712) > 0 ) /*0x62ba5d*/
  {
    if ( *(_BYTE *)(v32 + 724) /*0x62ba8b*/
      || *(_BYTE *)(v32 + 725)
      || *(_BYTE *)(v32 + 726)
      || *(_BYTE *)(v32 + 727)
      || *(_BYTE *)(v32 + 728)
      || *(_BYTE *)(v32 + 729) )
    {
      v49 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62bac5*/
      __asm { fild [esp+28h+arg_0] } /*0x62bacf*/
      __asm
      {
        fmul ds:dbl_7E3570
        fstp [esp+2Ch+var_30+4]; float
      }
      v34 = Color::Lerp2((Color *)&a5, *(_DWORD *)(_ESI + 172) + 724, *(_DWORD *)(_ESI + 172) + 727, v37); /*0x62baee*/
      *(_WORD *)(_ESI + 176) = *(_WORD *)v34; /*0x62baf6*/
      *(_BYTE *)(_ESI + 178) = v34[2]; /*0x62bb00*/
    }
    else
    {
      v33 = *(_DWORD *)(v32 + 700); /*0x62ba93*/
      *(_WORD *)(_ESI + 176) = *(_WORD *)v33; /*0x62ba9c*/
      *(_BYTE *)(_ESI + 178) = *(_BYTE *)(v33 + 2); /*0x62baa6*/
    }
  }
  ObjectClass::Deploy((ObjectClass *)_ESI); /*0x62bb0e*/
  return _ESI; /*0x62bb15*/
}



// ==== 0x0062BB20  ObjectClass::ProcessUpdate  this=ParticleClass  sig=csp ====
int __thiscall ObjectClass::ProcessUpdate(ObjectClass *this)
{
  int v2; // eax

  ObjectClass::ctor(this); /*0x62bb23*/
  this->q02B = 0; /*0x62bb30*/
  this->q0B0 = 0; /*0x62bb36*/
  this->q0B1 = 0; /*0x62bb3c*/
  this->q0B2 = 0; /*0x62bb42*/
  this->q0B8 = 0; /*0x62bb48*/
  this->q0B4 = 0; /*0x62bb4e*/
  this->q0BC = 0; /*0x62bb54*/
  this->nextObject = 0; /*0x62bb5a*/
  this->q031 = 0; /*0x62bb60*/
  this->q0C8 = 0; /*0x62bb66*/
  this->alignmentPadding = 0; /*0x62bb6c*/
  this->attachedTag = 0; /*0x62bb72*/
  this->q0D4 = -1082130432; /*0x62bb78*/
  this->q0D8 = 0; /*0x62bb82*/
  this->q0DC = 0; /*0x62bb88*/
  this->q038 = 0; /*0x62bb8e*/
  this->q0E4 = 0; /*0x62bb94*/
  this->q03A = dword_AC49D8; /*0x62bba0*/
  this->q03B = dword_AC49DC; /*0x62bba8*/
  this->q03C = dword_AC49E0; /*0x62bbb1*/
  this->q03D = dword_AC49D8; /*0x62bbc0*/
  this->q0F8 = dword_AC49DC; /*0x62bbcc*/
  this->q0FC = dword_AC49E0; /*0x62bbd5*/
  this->q040 = dword_AC49D8; /*0x62bbe4*/
  this->q104 = dword_AC49DC; /*0x62bbf0*/
  this->q042 = dword_AC49E0; /*0x62bbf9*/
  this->q10C = 0; /*0x62bbfc*/
  this->u32_44 = 0; /*0x62bc02*/
  this->RemainingEC = 0; /*0x62bc08*/
  this->StateAIAdvance = 0; /*0x62bc0e*/
  this->q11C = 0; /*0x62bc14*/
  this->q048 = 0; /*0x62bc1a*/
  this->q124 = 0; /*0x62bc20*/
  this->q12C = 0; /*0x62bc26*/
  this->q12D = 0; /*0x62bc2c*/
  this->StartStateAI = 0; /*0x62bc32*/
  this->Translucency = 0; /*0x62bc38*/
  this->q130 = 0; /*0x62bc3e*/
  this->q4C4 = 0; /*0x62bc44*/
  this->AbstractClass = &ParticleClass::`vftable'; /*0x62bc4a*/
  this->? = &ParticleClass::`vftable'; /*0x62bc50*/
  this->? = &ParticleClass::`vftable'; /*0x62bc57*/
  this->? = &ParticleClass::`vftable'; /*0x62bc5e*/
  if ( *(int *)&stru_A83D50.__pad_80[8] < *(int *)stru_A83D50.__pad_80 /*0x62bc99*/
    || (stru_A83D50.__pad_80[5] || !*(_DWORD *)stru_A83D50.__pad_80)
    && *(int *)&stru_A83D50.__pad_80[12] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(stru_A83D50.SuperClass_field_0x78 + 8))(
         &stru_A83D50.SuperClass_field_0x78,
         *(_DWORD *)stru_A83D50.__pad_80 + *(_DWORD *)&stru_A83D50.__pad_80[12],
         0) )
  {
    v2 = (*(_DWORD *)&stru_A83D50.__pad_80[8])++; /*0x62bca6*/
    *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v2) = this; /*0x62bcb5*/
  }
  return (int)this; /*0x62bcba*/
}



// ==== 0x0062BD50  ParasiteClass::Update  this=ParticleClass  sig=csp ====
char __thiscall ParasiteClass::Update(char *this)
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
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CellClass *v17; // esi
  double v18; // st7
  _DWORD *v19; // edi
  int Byte284; // eax
  float *v21; // eax
  double v22; // st7
  int v23; // edx
  int v24; // eax
  int v25; // eax
  float v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  ObjectClass *firstObject; // esi
  int v31; // edx
  int v32; // edi
  int v33; // eax
  int v34; // ecx
  ObjectClass *nextObject; // edi
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  void *ptr_0; // ebx
  __int64 v41; // rax
  int v42; // edi
  int v43; // ebx
  char result; // al
  int v45; // [esp-Ch] [ebp-100h]
  int v46; // [esp+0h] [ebp-F4h]
  int v47; // [esp+0h] [ebp-F4h]
  int v48; // [esp+0h] [ebp-F4h]
  int v49; // [esp+4h] [ebp-F0h]
  int v50; // [esp+4h] [ebp-F0h]
  int v51; // [esp+4h] [ebp-F0h]
  float *v52; // [esp+8h] [ebp-ECh]
  float *v53; // [esp+8h] [ebp-ECh]
  float v54; // [esp+8h] [ebp-ECh]
  float *v55; // [esp+8h] [ebp-ECh]
  bool v56; // [esp+19h] [ebp-DBh]
  char v57; // [esp+1Ah] [ebp-DAh]
  char v58; // [esp+1Bh] [ebp-D9h]
  int v59; // [esp+1Ch] [ebp-D8h] BYREF
  float v60; // [esp+20h] [ebp-D4h]
  float v61; // [esp+24h] [ebp-D0h]
  float v62; // [esp+28h] [ebp-CCh] BYREF
  int GroundHeight; // [esp+2Ch] [ebp-C8h]
  float v64; // [esp+30h] [ebp-C4h]
  float v65; // [esp+34h] [ebp-C0h]
  float v66; // [esp+38h] [ebp-BCh]
  int v67; // [esp+3Ch] [ebp-B8h]
  _DWORD v68[2]; // [esp+40h] [ebp-B4h] BYREF
  int v69; // [esp+48h] [ebp-ACh]
  int v70[3]; // [esp+4Ch] [ebp-A8h] BYREF
  int v71[2]; // [esp+58h] [ebp-9Ch] BYREF
  int v72; // [esp+60h] [ebp-94h]
  float v73[12]; // [esp+64h] [ebp-90h] BYREF
  float v74[12]; // [esp+94h] [ebp-60h] BYREF
  float v75[12]; // [esp+C4h] [ebp-30h] BYREF

  if ( ((unsigned __int8)dword_A8ED84 & 1) != 0 ) /*0x62bd63*/
    goto LABEL_50; /*0x62bd63*/
  v59 = this->u32_9C; /*0x62bd75*/
  v60 = *((float *)this + 40); /*0x62bd88*/
  v61 = *((float *)this + 41); /*0x62bd8f*/
  if ( (abs32(Random::State((_DWORD *)dword_A8B230 + 134)) & 7) == 0 ) /*0x62bd9f*/
  {
    v2 = 0; /*0x62bdab*/
    v3 = 0; /*0x62bdad*/
    if ( (abs32(Random::State((_DWORD *)dword_A8B230 + 134)) & 1) != 0 ) /*0x62bdc1*/
      v3 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % 3 - 1; /*0x62be05*/
    else
      v2 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % 3 - 1; /*0x62bde2*/
    v4 = v2 + this->nextObject; /*0x62be11*/
    v5 = v3 + this->q031; /*0x62be1b*/
    this->nextObject = v4; /*0x62be1f*/
    this->q031 = v5; /*0x62be25*/
    if ( v4 >= -2 ) /*0x62be30*/
    {
      if ( v4 > 2 ) /*0x62be3c*/
        this->nextObject = 2; /*0x62be3e*/
    }
    else
    {
      this->nextObject = -2; /*0x62be32*/
    }
    v6 = this->q031; /*0x62be44*/
    if ( v6 >= -2 ) /*0x62be4c*/
    {
      if ( v6 > 2 ) /*0x62be58*/
        this->q031 = 2; /*0x62be5a*/
    }
    else
    {
      this->q031 = -2; /*0x62be4e*/
    }
  }
  v7 = (double)v59; /*0x62be60*/
  v8 = (int *)(this + 204); /*0x62be64*/
  v59 = 0; /*0x62be6a*/
  v64 = v7; /*0x62be78*/
  v9 = (double)SLODWORD(v60); /*0x62be7c*/
  v60 = 0.0; /*0x62be80*/
  this->alignmentPadding = 0; /*0x62be8c*/
  v65 = v9; /*0x62be8e*/
  v10 = (double)SLODWORD(v61); /*0x62be92*/
  v61 = -2.0; /*0x62be96*/
  this->attachedTag = 0; /*0x62bea2*/
  v66 = v10; /*0x62bea5*/
  this->q0D4 = -1073741824; /*0x62bea9*/
  *((float *)this + 53) = *((float *)this + 53) - (double)dword_8871E0->RepairRate[0]; /*0x62bebd*/
  LOWORD(v11) = Math::RoundToInt(v66); /*0x62bec4*/
  v49 = v11; /*0x62becd*/
  LOWORD(v12) = Math::RoundToInt(v65); /*0x62bece*/
  v46 = v12; /*0x62bed7*/
  LOWORD(v13) = Math::RoundToInt(v64); /*0x62bed8*/
  Coord3D::Set(v68, v13, v46, v49); /*0x62bee2*/
  Vector3::AddAssign((int *)this + 51, v52); /*0x62beec*/
  LOWORD(v14) = Math::RoundToInt(v66); /*0x62bef5*/
  v50 = v14; /*0x62befe*/
  LOWORD(v15) = Math::RoundToInt(v65); /*0x62beff*/
  v47 = v15; /*0x62bf08*/
  LOWORD(v16) = Math::RoundToInt(v64); /*0x62bf09*/
  Coord3D::Set(v70, v16, v47, v50); /*0x62bf13*/
  GroundHeight = Cell::GetGroundHeight(v70); /*0x62bf2d*/
  v67 = dword_AC4A0C + GroundHeight; /*0x62bf3d*/
  v17 = Coord::To_Cell(&dword_87F7E8, v70); /*0x62bf46*/
  v58 = 0; /*0x62bf4d*/
  v57 = 0; /*0x62bf52*/
  if ( (v17->flags[0] & 0x100) != 0 || (Coord::To_Cell(&dword_87F7E8, v68)->flags[0] & 0x100) != 0 ) /*0x62bf74*/
  {
    if ( v70[2] < v67 ) /*0x62bf84*/
    {
      if ( v69 >= v67 ) /*0x62bf93*/
        v58 = 1; /*0x62bf95*/
    }
    else if ( v69 < v67 ) /*0x62bf88*/
    {
      v57 = 1; /*0x62bf8a*/
    }
  }
  v56 = 0; /*0x62bf9e*/
  if ( !v58 && !v57 ) /*0x62bfb1*/
  {
    v18 = (double)GroundHeight; /*0x62bfb7*/
    if ( v66 >= v18 && v66 - 150.0 < v18 ) /*0x62bfdb*/
    {
      v19 = Cell::IsBridge(v17); /*0x62bfe4*/
      if ( v19 || (unsigned __int8)BuildingPlacement::ValidateType(v17, -1, -1) ) /*0x62bff0*/
      {
        v56 = 1; /*0x62c001*/
        if ( v19 ) /*0x62c006*/
        {
          if ( *(_BYTE *)(v19[328] + 5823) ) /*0x62c00e*/
            v56 = v19[390] < 8; /*0x62c021*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v19 + 128))(v19) ) /*0x62c02a*/
            v56 = 0; /*0x62c034*/
        }
      }
      else
      {
        v56 = 0; /*0x62bff9*/
      }
    }
  }
  v62 = (float)GroundHeight; /*0x62c041*/
  if ( v66 < (double)v62 ) /*0x62c056*/
  {
    if ( !v58 ) /*0x62c1b7*/
    {
      if ( !v57 ) /*0x62c1cc*/
      {
LABEL_37:
        GroundHeight -= 100; /*0x62c07c*/
        if ( (double)GroundHeight < v66 ) /*0x62c094*/
          v66 = v62; /*0x62c09a*/
        goto LABEL_39; /*0x62c09a*/
      }
      goto LABEL_47; /*0x62c1cc*/
    }
  }
  else if ( !v58 ) /*0x62c05e*/
  {
    if ( !v57 ) /*0x62c06a*/
    {
      if ( !v56 ) /*0x62c076*/
        goto LABEL_40; /*0x62c076*/
      goto LABEL_37; /*0x62c076*/
    }
LABEL_47:
    LODWORD(v62) = v67 - 20; /*0x62c1d2*/
    v66 = (float)(v67 - 20); /*0x62c1e1*/
    goto LABEL_39; /*0x62c1e5*/
  }
  v66 = (float)v67; /*0x62c1bd*/
LABEL_39:
  Byte284 = CellClass::GetByte284(v70); /*0x62c09e*/
  qmemcpy(v73, CopyAudioData((char *)v75, Byte284), sizeof(v73)); /*0x62c0cb*/
  v21 = InvertMatrix3x3Signs(v75, v73); /*0x62c0d4*/
  v22 = *((float *)this + 52); /*0x62c0d9*/
  v23 = *v8; /*0x62c0ea*/
  qmemcpy(v74, v21, sizeof(v74)); /*0x62c0ec*/
  *(float *)&v48 = -v22; /*0x62c0f9*/
  Triple::Set(&v59, v23, v48, this->q0D4); /*0x62c0fd*/
  v24 = Matrix3x3::TransformPoint(v71, (float *)&v59, v53); /*0x62c113*/
  v59 = *(_DWORD *)v24; /*0x62c11f*/
  v60 = *(float *)(v24 + 4); /*0x62c126*/
  v61 = *(float *)(v24 + 8); /*0x62c131*/
  Coord::Scale((int *)0x3F800000, v54); /*0x62c135*/
  v61 = -v61; /*0x62c14a*/
  v25 = Matrix3x3::TransformPoint(v71, (float *)&v59, v55); /*0x62c152*/
  v59 = *(_DWORD *)v25; /*0x62c159*/
  v60 = *(float *)(v25 + 4); /*0x62c160*/
  v26 = *(float *)(v25 + 8); /*0x62c164*/
  v27 = v59; /*0x62c167*/
  *((float *)this + 52) = -v60; /*0x62c171*/
  v61 = v26; /*0x62c176*/
  *v8 = v27; /*0x62c17a*/
  *((float *)this + 53) = v26; /*0x62c17c*/
LABEL_40:
  if ( (*(int (__thiscall **)(char *))(this->q720)(this) <= 5 || (int)dword_A8ED84 % 2 )
  {
    v28 = this->q0C8 <= 0 ? 0 : this->q0C8;
  }
  else
  {
    v28 = this->q0C8 - 1; /*0x62c1a8*/
    if ( v28 < -5 ) /*0x62c1ac*/
      v28 = -5; /*0x62c1ae*/
  }
  this->q0C8 = v28; /*0x62c1fa*/
LABEL_50:
  if ( !--this->q095 ) /*0x62c207*/
  {
    v29 = this->q02B; /*0x62c215*/
    if ( *(_DWORD *)(v29 + 744) ) /*0x62c21b*/
    {
      this->q095 = *(_WORD *)(v29 + 732); /*0x62c236*/
      v68[0] = this->u32_9C; /*0x62c23f*/
      v68[1] = this->q028; /*0x62c250*/
      v69 = this->q029; /*0x62c257*/
      firstObject = Coord::To_Cell(&dword_87F7E8, v68)->firstObject; /*0x62c260*/
      if ( firstObject ) /*0x62c268*/
      {
        do /*0x62c30d*/
        {
          v31 = firstObject->location[0]; /*0x62c276*/
          v32 = firstObject->location[1]; /*0x62c278*/
          v72 = firstObject->location[2]; /*0x62c286*/
          v33 = this->u32_9C - v31; /*0x62c28c*/
          v34 = this->q028 - v32; /*0x62c291*/
          nextObject = firstObject->nextObject; /*0x62c293*/
          v72 = this->q029; /*0x62c299*/
          v36 = abs32(v33) + abs32(v34); /*0x62c2af*/
          if ( firstObject->isAliveFlag && firstObject->health > 0 ) /*0x62c2c0*/
          {
            v37 = this->q124; /*0x62c2c2*/
            if ( v37 ) /*0x62c2ca*/
              v38 = *(_DWORD *)(v37 + 252); /*0x62c2cc*/
            else
              v38 = 0; /*0x62c2d4*/
            v39 = this->q02B; /*0x62c2d6*/
            v51 = v38; /*0x62c2dc*/
            v62 = *(float *)(v39 + 744); /*0x62c2e9*/
            ptr_0 = firstObject->AbstractClass; /*0x62c2f3*/
            v45 = *(_DWORD *)(v39 + 740); /*0x62c2f5*/
            v41 = ZCoordToScreenY(v36); /*0x62c2f6*/
            (*((void (__fastcall **)(ObjectClass *, _DWORD, float *, _DWORD, int, _DWORD, _DWORD, _DWORD, int))ptr_0 /*0x62c303*/
             + 91))(
              firstObject,
              HIDWORD(v41),
              &v62,
              v41,
              v45,
              0,
              0,
              0,
              v51);
          }
          firstObject = nextObject; /*0x62c30b*/
        }
        while ( nextObject ); /*0x62c30d*/
      }
    }
  }
  v42 = this->q02B; /*0x62c316*/
  v43 = *(_DWORD *)(v42 + 736) /*0x62c33f*/
      - *((unsigned __int16 *)this + 148)
      + (*(int (__stdcall **)(char *))(this->ptr_8 + 16))(this + 4);
  if ( !(v43 % (*(char *)(v42 + 779) + ((*(int (__stdcall **)(char *))(this->ptr_8 + 16))(this + 4) & 1))) ) /*0x62c355*/
    ++this->StartStateAI; /*0x62c35b*/
  result = this->StartStateAI; /*0x62c361*/
  if ( result == *(_BYTE *)(v42 + 777) ) /*0x62c36f*/
  {
    result = *(_BYTE *)(v42 + 776); /*0x62c371*/
    if ( result ) /*0x62c379*/
      this->q4C4 = 1; /*0x62c37c*/
    else
      this->StartStateAI = 0; /*0x62c38d*/
  }
  return result; /*0x62c37b*/
}



// ==== 0x0062C3A0  ParticleClass::UpdateParticlePhysics  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::UpdateParticlePhysics(ParticleClass *this)
{
  double v2; // st7
  float v3; // eax
  int v4; // eax
  double v5; // st7
  float v6; // eax
  double v7; // st7
  float v8; // eax
  int v9; // edx
  double *ParticleClass_field_0xAC; // ecx
  double v11; // st7
  IUnknown *ParticleClass_field_0xB4; // eax
  int v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-18h]
  float v15; // [esp+Ch] [ebp-14h]
  float v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch] BYREF
  float v18; // [esp+18h] [ebp-8h]
  float v19; // [esp+1Ch] [ebp-4h]

  v2 = *(float *)&this->__pad_E4[40]; /*0x62c3b1*/
  v3 = *(float *)this->__pad_E4; /*0x62c3bd*/
  v18 = *(float *)&this->__pad_E4[44]; /*0x62c3c5*/
  v19 = *(float *)&this->__pad_E4[48]; /*0x62c3cf*/
  v14 = v2 * v3; /*0x62c3e1*/
  v15 = v18 * v3; /*0x62c3ed*/
  v16 = v19 * v3; /*0x62c3f9*/
  *(float *)this->__pad_E4 = ((double)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646) /*0x62c422*/
                            * 4.656612877414201e-10
                            - 0.5)
                           * 0.1
                           + *(float *)this->__pad_E4;
  *(float *)&this->__pad_E4[52] = v14 + *(float *)&this->__pad_E4[52]; /*0x62c432*/
  *(float *)&this->__pad_E4[56] = v15 + *(float *)&this->__pad_E4[56]; /*0x62c442*/
  *(float *)&this->__pad_E4[60] = v16 + *(float *)&this->__pad_E4[60]; /*0x62c452*/
  LOWORD(v4) = Math::RoundToInt(*(float *)&this->__pad_E4[52]); /*0x62c45e*/
  v5 = *(float *)&this->__pad_E4[56]; /*0x62c463*/
  v17 = v4; /*0x62c469*/
  LOWORD(v6) = Math::RoundToInt(v5); /*0x62c46d*/
  v7 = *(float *)&this->__pad_E4[60]; /*0x62c472*/
  v18 = v6; /*0x62c478*/
  LOWORD(v8) = Math::RoundToInt(v7); /*0x62c47c*/
  v9 = *(_DWORD *)this->__pad_0; /*0x62c481*/
  v19 = v8; /*0x62c483*/
  (*(void (__thiscall **)(ParticleClass *, int *))(v9 + 436))(this, &v17); /*0x62c48e*/
  v13 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62c4ac*/
  ParticleClass_field_0xAC = (double *)this->ParticleClass_field_0xAC; /*0x62c4b0*/
  v11 = (double)v13 * 4.656612877414201e-10 * 0.05 /*0x62c4cc*/
      + ParticleClass_field_0xAC[86]
      + *(double *)&this->ParticleClass_field_0xB8;
  *(double *)&this->ParticleClass_field_0xB8 = v11; /*0x62c4d2*/
  if ( v11 > 1.0 ) /*0x62c4e3*/
  {
    ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62c4eb*/
    if ( (int)ParticleClass_field_0xB4 >= *((_DWORD *)ParticleClass_field_0xAC + 178) - 2 ) /*0x62c4f6*/
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c518*/
      this->ParticleClass_field_0xBC = (IUnknown *)1072693248; /*0x62c522*/
    }
    else
    {
      this->ParticleClass_field_0xB8 = 0; /*0x62c4f9*/
      this->ParticleClass_field_0xB4 = (IUnknown *)((char *)&ParticleClass_field_0xB4->field_0 + 1); /*0x62c503*/
      this->ParticleClass_field_0xBC = 0; /*0x62c509*/
    }
  }
}



// ==== 0x0062C540  ParticleClass::UpdateAnimationDrift  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::UpdateAnimationDrift(ParticleClass *this)
{
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  Random *p_NeedsSaveOrLink; // ecx
  IUnknown *v6; // eax
  IUnknown *v7; // ebp
  IUnknown *ParticleClass_field_0xC4; // eax
  float *ParticleClass_field_0xAC; // ebp
  int v10; // [esp+Ch] [ebp-4h]

  if ( (stru_A8EB00.?[416] & 1) != 0 ) /*0x62c54d*/
  {
    if ( (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 3) == 0 ) /*0x62c56a*/
    {
      v2 = 0; /*0x62c576*/
      v3 = 0; /*0x62c57e*/
      v4 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62c580*/
      p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62c592*/
      if ( (abs32(v4) & 1) != 0 ) /*0x62c598*/
        v3 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5c5*/
      else
        v2 = (int)abs32(Random::State(p_NeedsSaveOrLink)) % 3 - 1; /*0x62c5ae*/
      v6 = (IUnknown *)((char *)this->ParticleClass_field_0xC0 + v2); /*0x62c5d1*/
      v7 = (IUnknown *)((char *)this->ParticleClass_field_0xC4 + v3); /*0x62c5d9*/
      this->ParticleClass_field_0xC0 = v6; /*0x62c5dd*/
      this->ParticleClass_field_0xC4 = v7; /*0x62c5e3*/
      if ( (int)v6 >= -5 ) /*0x62c5ee*/
      {
        if ( (int)v6 > 5 ) /*0x62c5fa*/
          this->ParticleClass_field_0xC0 = (IUnknown *)5; /*0x62c5fc*/
      }
      else
      {
        this->ParticleClass_field_0xC0 = (IUnknown *)-5; /*0x62c5f0*/
      }
      ParticleClass_field_0xC4 = this->ParticleClass_field_0xC4; /*0x62c602*/
      if ( (int)ParticleClass_field_0xC4 >= -5 ) /*0x62c60a*/
      {
        if ( (int)ParticleClass_field_0xC4 > 5 ) /*0x62c616*/
          this->ParticleClass_field_0xC4 = (IUnknown *)5; /*0x62c618*/
      }
      else
      {
        this->ParticleClass_field_0xC4 = (IUnknown *)-5; /*0x62c60c*/
      }
    }
    this->ParticleClass_field_0xC8 = 0; /*0x62c61e*/
  }
  ParticleClass_field_0xAC = (float *)this->ParticleClass_field_0xAC; /*0x62c628*/
  if ( this->__pad_128[6] < *((_BYTE *)ParticleClass_field_0xAC + 777) ) /*0x62c63a*/
  {
    v10 = *((_DWORD *)this->ParticleClass_field_0xAC + 184) /*0x62c664*/
        - *(unsigned __int16 *)this->__pad_128
        + (*(int (__stdcall **)(char *))(*(_DWORD *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2]);
    if ( !(v10 /*0x62c67e*/
         % (*((char *)ParticleClass_field_0xAC + 779)
          + ((*(int (__stdcall **)(char *))(*(_DWORD *)&this->ParticleClass_field_0x2[2] + 16))(&this->ParticleClass_field_0x2[2])
           & 1))) )
      ++this->__pad_128[6]; /*0x62c684*/
    if ( this->__pad_128[6] == *((_BYTE *)ParticleClass_field_0xAC + 777) && *((_BYTE *)ParticleClass_field_0xAC + 776) ) /*0x62c69a*/
      this->__pad_128[9] = 1; /*0x62c6a4*/
  }
  if ( *(float *)this->__pad_E4 > 3.0 ) /*0x62c6bc*/
    *(float *)this->__pad_E4 = *(float *)this->__pad_E4 - ParticleClass_field_0xAC[192]; /*0x62c6ca*/
}



// ==== 0x0062C6E0  ObjectClass::UpdateParticleSystem  this=ObjectClass  sig=csp ====
void __thiscall UpdateParticleSystem(TechnoClass *this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  Cell *v11; // esi
  bool v12; // bl
  double v13; // st7
  _DWORD *v14; // edi
  int Byte284; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int currentMission; // ecx
  double v23; // st7
  int queuedMission; // eax
  int v25; // [esp+0h] [ebp-13Ch]
  int v26; // [esp+0h] [ebp-13Ch]
  int v27; // [esp+0h] [ebp-13Ch]
  int v28; // [esp+0h] [ebp-13Ch]
  int v29; // [esp+4h] [ebp-138h]
  int v30; // [esp+4h] [ebp-138h]
  int v31; // [esp+4h] [ebp-138h]
  float *v32; // [esp+8h] [ebp-134h]
  float *v33; // [esp+8h] [ebp-134h]
  float v34; // [esp+8h] [ebp-134h]
  float *v35; // [esp+8h] [ebp-134h]
  char v36; // [esp+1Ah] [ebp-122h]
  char v37; // [esp+1Bh] [ebp-121h]
  Triple v38; // [esp+1Ch] [ebp-120h] BYREF
  int v39; // [esp+20h] [ebp-11Ch]
  float v40; // [esp+24h] [ebp-118h]
  float v41; // [esp+28h] [ebp-114h]
  float v42; // [esp+2Ch] [ebp-110h]
  float v43; // [esp+30h] [ebp-10Ch]
  float v44; // [esp+34h] [ebp-108h]
  int v45; // [esp+38h] [ebp-104h]
  int v46; // [esp+3Ch] [ebp-100h] BYREF
  int v47; // [esp+40h] [ebp-FCh]
  int v48; // [esp+44h] [ebp-F8h]
  int GroundHeight; // [esp+48h] [ebp-F4h]
  Coord3D v50; // [esp+4Ch] [ebp-F0h] BYREF
  Coord3D v51; // [esp+58h] [ebp-E4h] BYREF
  int v52[3]; // [esp+64h] [ebp-D8h] BYREF
  int v53[3]; // [esp+70h] [ebp-CCh] BYREF
  float v54[12]; // [esp+7Ch] [ebp-C0h] BYREF
  float v55[12]; // [esp+ACh] [ebp-90h] BYREF
  char v56[48]; // [esp+DCh] [ebp-60h] BYREF
  float v57[12]; // [esp+10Ch] [ebp-30h] BYREF

  v38 = (Triple)this->location[0]; /*0x62c6f8*/
  v2 = (double)dword_8871E0->RepairRate[0]; /*0x62c705*/
  v3 = this->location[2]; /*0x62c70b*/
  v39 = this->location[1]; /*0x62c70e*/
  v40 = *(float *)&v3; /*0x62c712*/
  *(float *)this->passengers = *(float *)this->passengers - v2; /*0x62c71c*/
  v46 = this->animation[5]; /*0x62c728*/
  v47 = this->animation[6]; /*0x62c732*/
  v48 = this->passengers[0]; /*0x62c73c*/
  v42 = (float)(int)v38; /*0x62c74a*/
  v43 = (float)v39; /*0x62c752*/
  v44 = (float)SLODWORD(v40); /*0x62c75a*/
  *(float *)&v48 = *(float *)&v48 - (double)dword_8871E0->RepairRate[0]; /*0x62c76a*/
  LOWORD(v4) = Math::RoundToInt(v44); /*0x62c772*/
  v29 = v4; /*0x62c77b*/
  LOWORD(v5) = Math::RoundToInt(v43); /*0x62c77c*/
  v25 = v5; /*0x62c785*/
  LOWORD(v6) = Math::RoundToInt(v42); /*0x62c786*/
  Coord3D::Set(&v50, v6, v25, v29); /*0x62c790*/
  Vector3::AddAssign(&v46, v32); /*0x62c79e*/
  LOWORD(v7) = Math::RoundToInt(v44); /*0x62c7a7*/
  v30 = v7; /*0x62c7b0*/
  LOWORD(v8) = Math::RoundToInt(v43); /*0x62c7b1*/
  v26 = v8; /*0x62c7ba*/
  LOWORD(v9) = Math::RoundToInt(v42); /*0x62c7bb*/
  Coord3D::Set(&v51, v9, v26, v30); /*0x62c7c5*/
  GroundHeight = Cell::GetGroundHeight(&v51); /*0x62c7df*/
  v10 = GroundHeight + dword_AC4A0C; /*0x62c7e8*/
  v45 = GroundHeight + dword_AC4A0C; /*0x62c7f0*/
  v11 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &v51); /*0x62c7f9*/
  v36 = 0; /*0x62c800*/
  v37 = 0; /*0x62c805*/
  if ( (v11->Cell_field_0x140 & 0x100) != 0 || (Coord::To_Cell((Coord *)&dword_87F7E8, &v50)->flags & 0x100) != 0 ) /*0x62c827*/
  {
    if ( v51.Coord3D_field_0x08 < v10 ) /*0x62c833*/
    {
      if ( v50.Coord3D_field_0x08 >= v10 ) /*0x62c842*/
        v36 = 1; /*0x62c844*/
    }
    else if ( v50.Coord3D_field_0x08 < v10 ) /*0x62c837*/
    {
      v37 = 1; /*0x62c839*/
    }
  }
  v12 = 0; /*0x62c84d*/
  if ( !v36 && !v37 ) /*0x62c859*/
  {
    v13 = (double)GroundHeight; /*0x62c85b*/
    if ( v44 >= v13 && v44 - 150.0 < v13 ) /*0x62c87f*/
    {
      v14 = Cell::IsBridge(v11); /*0x62c888*/
      if ( v14 || (unsigned __int8)BuildingPlacement::ValidateType((BuildingPlacement *)v11, -1, -1) ) /*0x62c894*/
      {
        v12 = 1; /*0x62c89f*/
        if ( v14 ) /*0x62c8a1*/
        {
          if ( *(_BYTE *)(v14[328] + 5823) ) /*0x62c8a9*/
            v12 = v14[390] < 8; /*0x62c8bc*/
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v14 + 128))(v14) ) /*0x62c8c2*/
            v12 = 0; /*0x62c8cc*/
        }
      }
    }
  }
  v41 = (float)GroundHeight; /*0x62c8d6*/
  if ( v44 < (double)v41 ) /*0x62c8eb*/
  {
    if ( !v36 ) /*0x62c904*/
    {
      if ( !v37 ) /*0x62c916*/
      {
LABEL_28:
        v45 = GroundHeight - 100; /*0x62c92d*/
        if ( (double)(GroundHeight - 100) < v44 ) /*0x62c945*/
          v44 = v41; /*0x62c94b*/
        goto LABEL_30; /*0x62c94b*/
      }
      goto LABEL_27; /*0x62c916*/
    }
LABEL_25:
    v44 = (float)v45; /*0x62c906*/
LABEL_30:
    Byte284 = CellClass::GetByte284(&v51); /*0x62c94f*/
    qmemcpy(v54, CopyAudioData(v56, Byte284), sizeof(v54)); /*0x62c97c*/
    qmemcpy(v55, InvertMatrix3x3Signs(v57, v54), sizeof(v55)); /*0x62c99c*/
    *(float *)&v27 = -*(float *)&v47; /*0x62c9ae*/
    Triple::Set(&v38, v46, v27, v48); /*0x62c9b2*/
    v16 = Matrix3x3::TransformPoint(v53, (float *)&v38, v33); /*0x62c9c8*/
    v38 = *(Triple *)v16; /*0x62c9d4*/
    v39 = *(int *)(v16 + 4); /*0x62c9df*/
    v40 = *(float *)(v16 + 8); /*0x62c9e6*/
    Coord::Scale((int *)0x3F800000, v34); /*0x62c9ea*/
    v40 = -v40; /*0x62c9fd*/
    v17 = Matrix3x3::TransformPoint(v52, (float *)&v38, v35); /*0x62ca07*/
    v38 = *(Triple *)v17; /*0x62ca0e*/
    v39 = *(int *)(v17 + 4); /*0x62ca15*/
    v18 = *(_DWORD *)(v17 + 8); /*0x62ca19*/
    v46 = (int)v38; /*0x62ca1c*/
    *(float *)&v47 = -*(float *)&v39; /*0x62ca26*/
    v40 = *(float *)&v18; /*0x62ca2c*/
    v48 = v18; /*0x62ca30*/
    BYTE1(this->deployAnim) = 1; /*0x62ca34*/
    goto LABEL_31; /*0x62ca34*/
  }
  if ( v36 ) /*0x62c8ef*/
    goto LABEL_25; /*0x62c8ef*/
  if ( v37 ) /*0x62c8f7*/
  {
LABEL_27:
    LODWORD(v41) = v45 - 20; /*0x62c918*/
    v44 = (float)(v45 - 20); /*0x62c927*/
    goto LABEL_30; /*0x62c92b*/
  }
  if ( v12 ) /*0x62c8fb*/
    goto LABEL_28; /*0x62c8fb*/
LABEL_31:
  LOWORD(v19) = Math::RoundToInt(v44); /*0x62ca3b*/
  v31 = v19; /*0x62ca48*/
  LOWORD(v20) = Math::RoundToInt(v43); /*0x62ca49*/
  v28 = v20; /*0x62ca52*/
  LOWORD(v21) = Math::RoundToInt(v42); /*0x62ca53*/
  Coord::Subtract((Coord *)&v50, v21, v28, v31); /*0x62ca5d*/
  (*(void (__thiscall **)(TechnoClass *, Coord3D *))(this->ptr_0 + 436))(this, &v50); /*0x62ca6c*/
  v41 = COERCE_FLOAT(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646)); /*0x62ca8b*/
  currentMission = this->currentMission; /*0x62ca8f*/
  v23 = (double)SLODWORD(v41) * 4.656612877414201e-10 * 0.05 /*0x62caab*/
      + *(double *)(currentMission + 688)
      + *(double *)this->missionQueued;
  *(double *)this->missionQueued = v23; /*0x62cab1*/
  if ( v23 > 1.0 ) /*0x62cac2*/
  {
    queuedMission = this->queuedMission; /*0x62caca*/
    if ( queuedMission >= *(_DWORD *)(currentMission + 712) - 2 ) /*0x62cad5*/
    {
      *(_DWORD *)this->missionQueued = 0; /*0x62caf5*/
      this->missionStatus = 1072693248; /*0x62cafb*/
    }
    else
    {
      *(_DWORD *)this->missionQueued = 0; /*0x62cad8*/
      this->missionStatus = 0; /*0x62cade*/
      this->queuedMission = queuedMission + 1; /*0x62cae5*/
    }
  }
}



// ==== 0x0062CB10  ObjectClass::UpdateAreaDamageEffect  this=ObjectClass  sig=csp ====
void __thiscall UpdateAreaDamageEffect(ObjectClass *this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  char v9; // cl
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  char v13; // bl
  double v14; // st7
  bool v15; // zf
  CellClass *v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // ecx
  ObjectClass *altObject; // edi
  int v21; // ebx
  int v22; // ebp
  int (__thiscall **ptr_0)(ObjectClass *, char *); // edx
  int *v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // [esp+24h] [ebp-28h] BYREF
  float v32; // [esp+28h] [ebp-24h] BYREF
  int v33; // [esp+2Ch] [ebp-20h]
  int v34; // [esp+30h] [ebp-1Ch]
  int v35; // [esp+34h] [ebp-18h]
  int v36; // [esp+38h] [ebp-14h]
  int v37; // [esp+3Ch] [ebp-10h]
  char v38[12]; // [esp+40h] [ebp-Ch] BYREF

  if ( *((float *)this + 57) <= 0.0 ) /*0x62cb30*/
  {
    this->u32_39 = 0; /*0x62ce1c*/
LABEL_25:
    *((_BYTE *)this + 305) = 1; /*0x62ce26*/
    return; /*0x62ce26*/
  }
  v31 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 10 - 5; /*0x62cb51*/
  v2 = (double)v31 * 0.02 + 1.0; /*0x62cb5f*/
  v32 = v2 * *((float *)this + 67); /*0x62cb6d*/
  *(float *)&v33 = v2 * *((float *)this + 68); /*0x62cb79*/
  v3 = v2 * *((float *)this + 69); /*0x62cb7d*/
  LOWORD(v4) = Math::RoundToInt(v3); /*0x62cb8d*/
  v5 = v4; /*0x62cb9c*/
  LOWORD(v6) = Math::RoundToInt(v3); /*0x62cb9e*/
  v7 = v6; /*0x62cba9*/
  LOWORD(v8) = Math::RoundToInt(v3 * *((float *)this + 57)); /*0x62cbab*/
  v9 = *((_BYTE *)this + 302); /*0x62cbb6*/
  this->q040 = v5; /*0x62cbbc*/
  this->u32_41 = v7; /*0x62cbbe*/
  *((_DWORD *)this + 66) = v8; /*0x62cbc1*/
  v10 = this->q02B; /*0x62cbc4*/
  if ( v9 < *(char *)(v10 + 777) ) /*0x62cbd0*/
  {
    v11 = *(_DWORD *)(this->q02B + 736) /*0x62cbfc*/
        - *((unsigned __int16 *)this + 148)
        + (*((int (__stdcall **)(void **))this->? + 4))(&this->?);
    if ( !(v11 % (*((char *)this + 300) + ((*((int (__stdcall **)(void **))this->? + 4))(&this->?) & 1))) ) /*0x62cc12*/
    {
      v12 = this->q02B; /*0x62cc1e*/
      v13 = *((_BYTE *)this + 302) + 1; /*0x62cc24*/
      *((_BYTE *)this + 302) = v13; /*0x62cc28*/
      if ( v13 == *(unsigned __int8 *)(v12 + 781) ) /*0x62cc39*/
        *((_BYTE *)this + 303) = 25; /*0x62cc3b*/
      if ( v13 == *(unsigned __int8 *)(v12 + 782) ) /*0x62cc4c*/
        *((_BYTE *)this + 303) = 50; /*0x62cc4e*/
    }
    v10 = this->q02B; /*0x62cc55*/
    v9 = *((_BYTE *)this + 302); /*0x62cc5b*/
    if ( v9 == *(_BYTE *)(v10 + 777) ) /*0x62cc67*/
    {
      if ( *(_BYTE *)(v10 + 776) ) /*0x62cc69*/
        goto LABEL_25; /*0x62cc71*/
    }
  }
  v14 = *((float *)this + 57) - *(float *)(v10 + 768); /*0x62cc7d*/
  v15 = --*((_WORD *)this + 149) == 0; /*0x62cc8a*/
  *((float *)this + 57) = v14; /*0x62cc92*/
  if ( v15 && *(_DWORD *)(v10 + 744) && v9 <= *(char *)(v10 + 780) ) /*0x62ccb2*/
  {
    *((_WORD *)this + 149) = *(_WORD *)(v10 + 732); /*0x62ccc7*/
    v32 = *(float *)this->location; /*0x62ccd0*/
    v33 = this->location[1]; /*0x62ccdc*/
    v34 = this->location[2]; /*0x62cce3*/
    v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v32); /*0x62ccec*/
    if ( (v16->flags[0] & 0x100) == 0 ) /*0x62ccfa*/
      goto LABEL_16; /*0x62ccfa*/
    v17 = this->location[1]; /*0x62ccfe*/
    v35 = this->location[0]; /*0x62cd01*/
    v18 = this->location[2]; /*0x62cd05*/
    v19 = v16->level + 4; /*0x62cd0f*/
    v36 = v17; /*0x62cd12*/
    if ( v18 >= dword_AC4A18 * v19 ) /*0x62cd1f*/
      altObject = v16->altObject; /*0x62cd21*/
    else
LABEL_16:
      altObject = v16->firstObject; /*0x62cd29*/
    for ( ; altObject; altObject = altObject->nextObject ) /*0x62cd31*/
    {
      v21 = altObject->location[0]; /*0x62cd3f*/
      v22 = altObject->location[1]; /*0x62cd41*/
      ptr_0 = (int (__thiscall **)(ObjectClass *, char *))this->AbstractClass; /*0x62cd47*/
      v37 = altObject->location[2]; /*0x62cd49*/
      v24 = (int *)ptr_0[18](this, v38); /*0x62cd52*/
      v25 = *v24; /*0x62cd55*/
      v26 = v24[1]; /*0x62cd57*/
      v27 = v24[2]; /*0x62cd5a*/
      LODWORD(v32) = v25 - v21; /*0x62cd5f*/
      v33 = v26 - v22; /*0x62cd6b*/
      v34 = v27 - v37; /*0x62cd6f*/
      Math::Sqrt( /*0x62cd9b*/
        (double)(v25 - v21) * (double)(v25 - v21)
      + (double)(v27 - v37) * (double)(v27 - v37)
      + (double)(v26 - v22) * (double)(v26 - v22));
      LOWORD(v28) = Math::RoundToInt(v14); /*0x62cda3*/
      v29 = v28; /*0x62cda8*/
      v30 = this->q02B; /*0x62cdaa*/
      v31 = *(_DWORD *)(v30 + 744); /*0x62cdb6*/
      if ( altObject->health > 0 /*0x62cdd7*/
        && altObject->isAliveFlag
        && altObject != *(ObjectClass **)(this->u32_49 + 224) )
      {
        (*((void (__thiscall **)(ObjectClass *, int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))altObject->AbstractClass /*0x62ce03*/
         + 91))(
          altObject,
          &v31,
          v29 / 10,
          *(_DWORD *)(v30 + 740),
          0,
          0,
          0,
          0);
      }
    }
  }
}



// ==== 0x0062CE40  ParticleClass::Dispatch  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::Dispatch(ParticleClass *this)
{
  int result; // eax

  result = *(_DWORD *)(this->ParticleClass_field_0xAC + 788); /*0x62ce49*/
  switch ( result ) /*0x62ce54*/
  {
    case 0: /*0x62ce54*/
      LOBYTE(result) = ParasiteClass::Update(this->__pad_0); /*0x62ce5d*/
      break; /*0x62ce62*/
    case 1: /*0x62ce54*/
      ParticleClass::UpdateAnimationDrift(this); /*0x62ce66*/
      break; /*0x62ce6b*/
    case 2: /*0x62ce54*/
      UpdateAreaDamageEffect((ObjectClass *)this); /*0x62ce6f*/
      break; /*0x62ce74*/
    case 3: /*0x62ce54*/
      UpdateParticleSystem((TechnoClass *)this); /*0x62ce78*/
      break; /*0x62ce7d*/
    case 4: /*0x62ce54*/
      ParticleClass::UpdateParticlePhysics(this); /*0x62ce81*/
      break; /*0x62ce81*/
    default:
      break;
  }
  if ( !--*(_WORD *)this->__pad_128 ) /*0x62ce8d*/
    this->__pad_128[9] = 1; /*0x62ce97*/
  return result; /*0x62ce9e*/
}



// ==== 0x0062CEC0  ParticleClass::DrawParticle  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::DrawParticle(ParticleClass *this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  unsigned int v10; // eax
  char v11; // cl
  char *v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebp
  int v16; // eax
  int v17; // esi
  IUnknown *ParticleClass_field_0xB4; // ecx
  char *pad_B0; // eax
  __int16 v20; // dx
  char v21; // al
  double v22; // st7
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // ebp
  int v27; // eax
  int v28[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  int v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[282] >= (unsigned int)PingPongBuffer::GetWriteOffset() /*0x62cedc*/
    || *((_DWORD *)this->ParticleClass_field_0xAC + 186) )
  {
    if ( stru_A8EB00.ObjectTypeClass[30] || (v4 = *((_DWORD *)this->ParticleClass_field_0xAC + 197), v4 != 1) && v4 != 3 ) /*0x62cf0b*/
    {
      if ( stru_A8EB00.?[391] /*0x62cf58*/
        || !g_hWnd
        || ((int)dword_A8B230->ptr_0 & 0x1000) == 0
        || (v29 = *(_DWORD *)&this->__pad_28[116],
            v30 = *(_DWORD *)&this->__pad_28[120],
            v31 = *(_DWORD *)&this->__pad_28[124],
            !(unsigned __int8)Game::Stub3((int)&v29)) )
      {
        v5 = *((_DWORD *)this->ParticleClass_field_0xAC + 197); /*0x62cf6b*/
        if ( v5 == 3 || v5 == 4 ) /*0x62cf7d*/
        {
          v28[0] = *(_DWORD *)&this->__pad_28[116]; /*0x62d036*/
          v28[1] = *(_DWORD *)&this->__pad_28[120]; /*0x62d048*/
          v28[2] = *(_DWORD *)&this->__pad_28[124]; /*0x62d054*/
          Coord::To_Screen((Coord *)g_TacticalClass_Instance, v28, &v29); /*0x62d058*/
          v12 = (char *)DSurface_ViewBounds.field_4 + v30; /*0x62d06b*/
          v30 += (int)DSurface_ViewBounds.field_4; /*0x62d071*/
          if ( v29 >= *a3 && v29 < *a3 + a3[2] ) /*0x62d086*/
          {
            v13 = a3[1]; /*0x62d08c*/
            if ( (int)v12 >= v13 && (int)v12 < v13 + a3[3] ) /*0x62d09e*/
            {
              v14 = *(unsigned __int16 *)StreamClass::ReadAndSeek( /*0x62d0b6*/
                                           *(int **)&stru_87E790.__pad_D8[60],
                                           v29,
                                           (int)&v12[-*(_DWORD *)(*(_DWORD *)&stru_87E790.__pad_D8[60] + 4)]);
              if ( (_WORD)v14 ) /*0x62d0bb*/
              {
                v15 = v30 - g_ZBufferDescriptor->Stream_field_04; /*0x62d0d4*/
                v28[0] = v29; /*0x62d0d9*/
                v16 = ZCoordToScreenY(*(_DWORD *)&this->__pad_28[124]); /*0x62d0e8*/
                v17 = (unsigned __int16)(LOWORD(g_ZBufferDescriptor->Stream_field_04) /*0x62d10f*/
                                       + LOWORD(g_ZBufferDescriptor[1].Stream_field_10)
                                       - v30)
                    - v16
                    - 50;
                if ( v17 < *(unsigned __int16 *)Audio::GetSamplePosition((int *)g_ZBufferDescriptor, v28[0], v15) ) /*0x62d11e*/
                {
                  ParticleClass_field_0xB4 = this->ParticleClass_field_0xB4; /*0x62d124*/
                  if ( ParticleClass_field_0xB4 ) /*0x62d12c*/
                    pad_B0 = (char *)(*((_DWORD *)this->ParticleClass_field_0xAC + 175) /*0x62d13f*/
                                    + 3 * (_DWORD)ParticleClass_field_0xB4);
                  else
                    pad_B0 = this->__pad_B0; /*0x62d12e*/
                  v20 = *(_WORD *)pad_B0; /*0x62d145*/
                  v21 = pad_B0[2]; /*0x62d148*/
                  LOWORD(v28[0]) = v20; /*0x62d14b*/
                  BYTE2(v28[0]) = v21; /*0x62d15a*/
                  v22 = 1.0 - *(double *)&this->ParticleClass_field_0xB8; /*0x62d16d*/
                  LOWORD(v23) = Math::RoundToInt(v22); /*0x62d1ac*/
                  v24 = v23; /*0x62d1c9*/
                  LOWORD(v25) = Math::RoundToInt(v22); /*0x62d1e1*/
                  v26 = v25; /*0x62d1ea*/
                  LOWORD(v27) = Math::RoundToInt(v22); /*0x62d215*/
                  if ( v14 < 127 ) /*0x62d21f*/
                  {
                    v24 = (v14 * v24) >> 7; /*0x62d22a*/
                    v26 = (v14 * v26) >> 7; /*0x62d22d*/
                    v27 = (v14 * v27) >> 7; /*0x62d230*/
                  }
                  (*(void (__thiscall **)(AudioStream *, int *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 36))( /*0x62d288*/
                    g_DSurface_Hidden_2,
                    &v29,
                    (unsigned __int16)(v24 >> g_BitShift_Green_0 << g_BitShift_Red)
                  | (unsigned __int16)(v26 >> g_BitMask_Blue << g_BitMask_Green)
                  | (unsigned __int16)(v27 >> g_BitMask_Red << g_BitShift_Blue));
                }
              }
            }
          }
        }
        else
        {
          v6 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 464))(this); /*0x62cf87*/
          v7 = -15 - ZCoordToScreenY(v6); /*0x62cf9d*/
          v8 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 108))(this); /*0x62cfa2*/
          if ( v8 ) /*0x62cfa6*/
          {
            v9 = 10240; /*0x62cfb0*/
            v10 = (*(int (__thiscall **)(ParticleClass *))(*(_DWORD *)this->__pad_0 + 488))(this); /*0x62cfb5*/
            if ( stru_A8EB00.ObjectTypeClass[30] == 2 ) /*0x62cfc2*/
            {
              v11 = this->__pad_128[7]; /*0x62cfc4*/
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
              (int)g_DSurface_Hidden_2,
              *(int *)&stru_87F5F0.__pad_58[120],
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



// ==== 0x0062D2A0  BuildingClass::UpdateFloatPosition  this=TOP  sig=csp ====
int __thiscall BuildingClass::UpdateFloatPosition(BuildingClass *this)
{
  int *location; // eax
  int currentMission; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int GroundHeight; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v17; // [esp+8h] [ebp-Ch] BYREF
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  location = this->?; /*0x62d2ad*/
  v17 = this->?[0]; /*0x62d2b9*/
  currentMission = this->?; /*0x62d2bd*/
  v18 = location[1]; /*0x62d2c6*/
  v19 = location[2]; /*0x62d2cd*/
  v4 = *(_DWORD *)(currentMission + 760); /*0x62d2d1*/
  if ( v4 > 0 && !(*(_DWORD *)&stru_A8EB00.?[416] % (10 / v4)) ) /*0x62d2e8*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1964); /*0x62d2fe*/
    v6 = *(int *)((char *)&stru_83665C.? + v5 * 4); /*0x62d301*/
    v7 = stru_83665C.?[v5]; /*0x62d307*/
    v17 += v6; /*0x62d315*/
    v18 += v7; /*0x62d319*/
  }
  if ( (stru_A8EB00.?[416] & 1) != 0 ) /*0x62d320*/
  {
    LOWORD(v8) = Math::RoundToInt((double)v17 + *(float *)&this->?[1]); /*0x62d330*/
    v17 = v8; /*0x62d339*/
    LOWORD(v9) = Math::RoundToInt((double)v18 + *(float *)&this->?[2]); /*0x62d343*/
    v18 = v9; /*0x62d348*/
    GroundHeight = Cell::GetGroundHeight(&v17); /*0x62d356*/
    v11 = v19; /*0x62d35b*/
    if ( v19 > GroundHeight + 5 ) /*0x62d364*/
    {
      v12 = v19 - GroundHeight - 5; /*0x62d36a*/
      if ( v12 >= 2 ) /*0x62d370*/
        v12 = 2; /*0x62d372*/
      v11 = v19 - v12; /*0x62d377*/
    }
    v13 = this->?[0]; /*0x62d389*/
    v17 += this->?; /*0x62d38f*/
    v14 = this->? + v18; /*0x62d39f*/
    v19 = v13 + v11; /*0x62d3a1*/
    v18 = v14; /*0x62d3ab*/
    v15 = Cell::GetGroundHeight(&v17); /*0x62d3af*/
    if ( v19 < v15 + 5 ) /*0x62d3bd*/
      v19 = Cell::GetGroundHeight(&v17) + 5; /*0x62d3d1*/
  }
  return (*((int (__thiscall **)(BuildingClass *, int *))this->TechnoClass + 109))(this, &v17); /*0x62d3e4*/
}



// ==== 0x0062D3F0  ParticleClass::CheckWaterImpact  this=ParticleClass  sig=csp ====
void __thiscall ParticleClass::CheckWaterImpact(ParticleClass *this)
{
  char *v2; // ecx
  int v3; // edx
  char *v4; // ebx
  int v5; // ebp
  _DWORD *ParticleClass_field_0xAC; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edi
  char *v10; // ebx
  int v11; // eax
  char *v12; // edi
  char *v13; // ebp
  int v14; // [esp+10h] [ebp-1Ch]
  char *v15; // [esp+14h] [ebp-18h] BYREF
  char *v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  _DWORD v18[2]; // [esp+20h] [ebp-Ch] BYREF
  int v19; // [esp+28h] [ebp-4h]

  v2 = &this->__pad_28[116]; /*0x62d3ff*/
  v18[0] = *(_DWORD *)v2; /*0x62d405*/
  v3 = *((_DWORD *)v2 + 2); /*0x62d409*/
  v15 = (char *)v18[0]; /*0x62d40c*/
  v4 = (char *)*((_DWORD *)v2 + 1); /*0x62d410*/
  v19 = v3; /*0x62d413*/
  v16 = v4; /*0x62d417*/
  v5 = *((_DWORD *)v2 + 2); /*0x62d41b*/
  ParticleClass_field_0xAC = this->ParticleClass_field_0xAC; /*0x62d421*/
  v18[1] = *((_DWORD *)v2 + 1); /*0x62d427*/
  v17 = v5; /*0x62d431*/
  v7 = ParticleClass_field_0xAC[190]; /*0x62d435*/
  v8 = 4 * *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1964); /*0x62d441*/
  v9 = v7 * *(_DWORD *)&stru_83665C.?[v8 + 11] + v18[0]; /*0x62d45c*/
  v10 = &v4[v7 * *(_DWORD *)&stru_83665C.?[v8 + 4]]; /*0x62d45e*/
  LOWORD(v11) = Math::RoundToInt(*(float *)this->__pad_E4); /*0x62d460*/
  v12 = (char *)this->ParticleClass_field_0xC0 + v9; /*0x62d479*/
  v16 = (char *)this->ParticleClass_field_0xC4 + (unsigned int)v10; /*0x62d47b*/
  v13 = (char *)this->ParticleClass_field_0xC8 + v11 + v5; /*0x62d485*/
  v15 = v12; /*0x62d48d*/
  v17 = (int)v13; /*0x62d491*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v18)->flags[0] & 0x100) != 0 /*0x62d4e5*/
    && (v14 = dword_AC4A0C + Cell::GetGroundHeight(v18), v19 < v14)
    && (double)v14 - (double)dword_AC4A18 * 2.5 <= (double)v17 )
  {
    this->__pad_128[9] = 1; /*0x62d4e7*/
  }
  else
  {
    (*(void (__thiscall **)(ParticleClass *, char **))(*(_DWORD *)this->__pad_0 + 436))(this, &v15); /*0x62d4ff*/
  }
}



// ==== 0x0062D510  ObjectClass::method_62D510  this=ObjectClass  sig=csp ====
int __thiscall sub_62D510(ObjectClass *this)
{
  double v2; // st7
  int *location; // edi
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

  v2 = *((float *)this + 57); /*0x62d524*/
  location = this->location; /*0x62d530*/
  v15[0] = this->location[0]; /*0x62d532*/
  v4 = this->location[1]; /*0x62d536*/
  v5 = this->location[2]; /*0x62d539*/
  v6 = this->location[0]; /*0x62d53c*/
  v15[2] = v5; /*0x62d53e*/
  v7 = location[1]; /*0x62d544*/
  v12 = v6; /*0x62d547*/
  v8 = location[2]; /*0x62d54e*/
  v13 = v7; /*0x62d551*/
  v14 = v8; /*0x62d555*/
  v15[1] = v4; /*0x62d559*/
  if ( v2 > 0.0 ) /*0x62d55d*/
  {
    v9 = *((_DWORD *)this + 66); /*0x62d565*/
    v12 = this->q040 + v6; /*0x62d56d*/
    v13 = this->u32_41 + v7; /*0x62d57b*/
    v14 = v9 + v8; /*0x62d57f*/
  }
  if ( *((float *)this + 57) > 0.0 ) /*0x62d594*/
  {
    GroundHeight = Cell::GetGroundHeight(v15); /*0x62d5af*/
    if ( (int)Cell::GetGroundHeight(&v12) > GroundHeight ) /*0x62d5b8*/
    {
      *((_BYTE *)this + 301) = 1; /*0x62d5bc*/
      *((_BYTE *)this + 305) = 1; /*0x62d5c2*/
    }
  }
  return (*((int (__thiscall **)(ObjectClass *, int *))this->AbstractClass + 109))(this, &v12); /*0x62d5d7*/
}



// ==== 0x0062D5E0  BuildingClass::AdjustHeight  this=ParticleClass  sig=csp ====
int __thiscall BuildingClass::AdjustHeight(int *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int GroundHeight; // edi
  int v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  _DWORD v13[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this->q02B + 788); /*0x62d5ec*/
  if ( !v2 ) /*0x62d5f5*/
    return BuildingClass::UpdateFloatPosition((BuildingClass *)this); /*0x62d6db*/
  v3 = v2 - 1; /*0x62d5fb*/
  if ( v3 ) /*0x62d5fc*/
  {
    result = v3 - 1; /*0x62d602*/
    if ( !result ) /*0x62d603*/
    {
      v5 = *((float *)this + 57); /*0x62d609*/
      v13[0] = this->u32_9C; /*0x62d623*/
      v6 = this->q028; /*0x62d627*/
      v13[2] = this->q029; /*0x62d630*/
      v7 = this->q029; /*0x62d636*/
      v10 = v13[0]; /*0x62d639*/
      v11 = v6; /*0x62d640*/
      v12 = v7; /*0x62d644*/
      v13[1] = v6; /*0x62d648*/
      if ( v5 > 0.0 ) /*0x62d64c*/
      {
        v8 = this->q042; /*0x62d654*/
        v10 = this->q040 + v13[0]; /*0x62d65c*/
        v11 = this->q104 + v6; /*0x62d66a*/
        v12 = v8 + v7; /*0x62d66e*/
      }
      if ( *((float *)this + 57) > 0.0 ) /*0x62d683*/
      {
        GroundHeight = Cell::GetGroundHeight(v13); /*0x62d69e*/
        if ( (int)Cell::GetGroundHeight(&v10) > GroundHeight ) /*0x62d6a7*/
        {
          this->q12D = 1; /*0x62d6ab*/
          this->q4C4 = 1; /*0x62d6b1*/
        }
      }
      return (*(int (__thiscall **)(int *, int *))(*this + 436))(this, &v10); /*0x62d6c0*/
    }
  }
  else
  {
    ParticleClass::CheckWaterImpact((ParticleClass *)this); /*0x62d6cf*/
  }
  return result; /*0x62d6c8*/
}



// ==== 0x0062D6F0  ParticleClass::CheckMirrorState  this=ParticleClass  sig=csp ====
bool __thiscall ParticleClass::CheckMirrorState(ParticleClass *this, int a2)
{
  return (unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) != 0; /*0x62d6ff*/
}



// ==== 0x0062D710  ParticleClass::CheckDrawFlags  this=ParticleClass  sig=csp ====
int *__stdcall ParticleClass::CheckDrawFlags(ParticleClass *this)
{
  if ( (byte_AC4998 & 1) == 0 ) /*0x62d71b*/
  {
    byte_AC4998 |= 1u; /*0x62d739*/
    dword_AC49D0 = 2147450879; /*0x62d73f*/
    atexit(nullsub_214); /*0x62d744*/
  }
  return &dword_AC49D0; /*0x62d752*/
}



// ==== 0x0062D760  nullsub_214  this=-  sig=ida-proto ====
void __cdecl nullsub_214()
{
  ; /*0x62d760*/
}



// ==== 0x0062D770  ParticleClass::CheckStateFlag  this=ParticleClass  sig=csp ====
int ParticleClass::CheckStateFlag(ParticleClass *this)
{
  return 3; /*0x62d775*/
}



// ==== 0x0062D7A0  ParticleClass::LoadParticleData  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::LoadParticleData(ParticleClass *this, _DWORD *a2, int a3)
{
  int result; // eax

  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x62d7ab*/
  if ( result >= 0 ) /*0x62d7b2*/
  {
    if ( a2 ) /*0x62d7b6*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x62d7bf*/
      *a2 = &ParticleClass::`vftable'; /*0x62d7c4*/
      a2[1] = &ParticleClass::`vftable'; /*0x62d7ca*/
      a2[2] = &ParticleClass::`vftable'; /*0x62d7d1*/
      a2[3] = &ParticleClass::`vftable'; /*0x62d7d8*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x62d7eb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 73); /*0x62d7fc*/
    return 0; /*0x62d801*/
  }
  return result; /*0x62d803*/
}



// ==== 0x0062D810  ParticleClass::CheckCollisionFlags  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::CheckCollisionFlags(ParticleClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this->__pad_0, a2, a3); /*0x62d820*/
  this->__pad_128[8] = 1; /*0x62d825*/
  return result; /*0x62d82c*/
}



// ==== 0x0062D830  ParticleClass::g_var_22c88d  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::g_var_22c88d(ParticleClass *this)
{
  int v2; // eax
  int v3; // eax
  int v5[2]; // [esp+4h] [ebp-10h] BYREF
  int v6[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *((_DWORD *)this->ParticleClass_field_0xAC + 197); /*0x62d83c*/
  if ( v2 >= 0 ) /*0x62d844*/
  {
    if ( v2 <= 1 ) /*0x62d84d*/
      return this->__pad_128[6]; /*0x62d84d*/
    if ( v2 == 2 ) /*0x62d856*/
    {
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[16], v6); /*0x62d86e*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->__pad_E4[4], v5); /*0x62d885*/
      v3 = CalcMathFacing8(v6, v5); /*0x62d892*/
      if ( v3 == 2 || v3 == 6 ) /*0x62d89f*/
        return this->__pad_128[6] + 2 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d91e*/
      if ( v3 != 4 && v3 ) /*0x62d8a8*/
      {
        if ( v3 == 1 || v3 == 5 ) /*0x62d8b2*/
          return this->__pad_128[6] + *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8f6*/
        if ( v3 == 3 || v3 == 7 ) /*0x62d8bc*/
          return this->__pad_128[6] + 3 * *((char *)this->ParticleClass_field_0xAC + 777); /*0x62d8db*/
        return 0; /*0x62d8bc*/
      }
      return this->__pad_128[6]; /*0x62d902*/
    }
  }
  return 0; /*0x62d8d2*/
}



// ==== 0x0062D930  ParticleClass::GetClassIdentifier  this=ParticleClass  sig=csp ====
int __stdcall ParticleClass::GetClassIdentifier(ParticleClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x62d936*/
    return -2147467261; /*0x62d938*/
  *a2 = 237448652; /*0x62d946*/
  a2[1] = 298949647; /*0x62d94e*/
  a2[2] = -1610610249; /*0x62d957*/
  a2[3] = unk_7E970C; /*0x62d960*/
  return 0; /*0x62d93d*/
}



// ==== 0x0062D970  ParticleClass::GetObjectSize  this=ParticleClass  sig=csp ====
int ParticleClass::GetObjectSize(ParticleClass *this)
{
  return 312; /*0x62d975*/
}



// ==== 0x0062D980  ParticleClass::GetTypeIdentifier  this=ParticleClass  sig=csp ====
int ParticleClass::GetTypeIdentifier(ParticleClass *this)
{
  return 22; /*0x62d985*/
}



// ==== 0x0062D990  ParticleClass::Stub  this=ParticleClass  sig=csp ====
int __thiscall ParticleClass::Stub(ParticleClass *this)
{
  return (int)this->ParticleClass_field_0xAC; /*0x62d996*/
}



// ==== 0x0062D9A0  ParticleClass::UpdateParticle  this=ParticleClass  sig=csp ====
void **__thiscall ParticleClass::UpdateParticle(ParticleClass *this, char a2)
{
  int v3; // edx
  int v4; // eax
  ParticleClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this->__pad_0 = &ParticleClass::`vftable'; /*0x62d9a4*/
  *(_DWORD *)&this->ParticleClass_field_0x2[2] = &ParticleClass::`vftable'; /*0x62d9aa*/
  this->ParticleClass_field_0x8[0] = (int)&ParticleClass::`vftable'; /*0x62d9b1*/
  this->ParticleClass_field_0xC = &ParticleClass::`vftable'; /*0x62d9b8*/
  ObjectClass::Undeploy((ObjectClass *)this); /*0x62d9bf*/
  LOBYTE(v3) = 1; /*0x62d9c4*/
  AbstractClass::AnnounceExpiredPointer((void **)this, v3); /*0x62d9c8*/
  this->ParticleClass_field_0xAC = 0; /*0x62d9cd*/
  v6 = this; /*0x62d9e7*/
  v4 = (*(int (__thiscall **)(int *, ParticleClass **))(stru_A83D50.SuperClass_field_0x78 + 16))( /*0x62d9eb*/
         &stru_A83D50.SuperClass_field_0x78,
         &v6);
  if ( v4 != -1 && v4 < *(int *)&stru_A83D50.__pad_80[8] ) /*0x62d9fb*/
  {
    --*(_DWORD *)&stru_A83D50.__pad_80[8]; /*0x62da00*/
    for ( ; /*0x62da06*/
          v4 < *(int *)&stru_A83D50.__pad_80[8];
          *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v4 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x7C + v4) )
    {
      ++v4; /*0x62da0e*/
    }
  }
  ObjectClass::Dtor((ObjectClass *)this); /*0x62da22*/
  if ( (a2 & 1) != 0 ) /*0x62da2c*/
    __3_YAXPAX_Z(this); /*0x62da2f*/
  return (void **)this; /*0x62da39*/
}



// ==== 0x0062DA40  sub_62DA40  this=-  sig=ida-proto ====
void sub_62DA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62da4c*/
  dbl_AC4A40 = Math::Sqrt(v0 + v0); /*0x62da5e*/
}



// ==== 0x0062DA70  sub_62DA70  this=-  sig=ida-proto ====
void sub_62DA70()
{
  dbl_AC4A90 = dbl_AC4A40 / 60.0; /*0x62da7c*/
}



// ==== 0x0062DA90  sub_62DA90  this=-  sig=ida-proto ====
void sub_62DA90()
{
  dbl_AC4A78 = 1.0 / dbl_AC4A90; /*0x62da9c*/
}



// ==== 0x0062DAB0  sub_62DAB0  this=-  sig=ida-proto ====
void sub_62DAB0()
{
  dbl_AC4A70 = 0.0174532925199433 * 45.0; /*0x62dabc*/
}



// ==== 0x0062DAD0  sub_62DAD0  this=-  sig=ida-proto ====
void sub_62DAD0()
{
  dbl_AC4A48 = 0.0174532925199433 * 60.0; /*0x62dadc*/
}



// ==== 0x0062DAF0  sub_62DAF0  this=-  sig=ida-proto ====
void sub_62DAF0()
{
  dbl_AC4A20 = 0.0174532925199433 * 90.0; /*0x62dafc*/
}



// ==== 0x0062DB10  sub_62DB10  this=-  sig=ida-proto ====
__int64 sub_62DB10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AC4A20 - dbl_AC4A48); /*0x62db22*/
  result = Math::RoundToInt(v0 * dbl_AC4A40 * 0.5); /*0x62db36*/
  dword_AC4A98 = result; /*0x62db3b*/
  return result; /*0x62db40*/
}



// ==== 0x0062DB50  sub_62DB50  this=-  sig=ida-proto ====
void sub_62DB50()
{
  dbl_AC4A50 = Math::ArcTan((double)dword_AC4A98 * 0.00390625); /*0x62db67*/
}



// ==== 0x0062DB80  sub_62DB80  this=-  sig=ida-proto ====
void sub_62DB80()
{
  dbl_AC4A68 = Math::ArcTan((double)(2 * dword_AC4A98) / dbl_AC4A40); /*0x62dba2*/
}



// ==== 0x0062DBB0  sub_62DBB0  this=-  sig=ida-proto ====
__int64 sub_62DBB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A98) + 0.5); /*0x62dbcb*/
  dword_AC4A8C = result; /*0x62dbd0*/
  return result; /*0x62dbd6*/
}



// ==== 0x0062DBE0  sub_62DBE0  this=-  sig=ida-proto ====
int sub_62DBE0()
{
  word_AC4A38 = 0; /*0x62dbe2*/
  word_AC4A3A = 0; /*0x62dbe8*/
  return 0; /*0x62dbee*/
}



// ==== 0x0062DBF0  sub_62DBF0  this=-  sig=ida-proto ====
int sub_62DBF0()
{
  dword_AC4A58 = 0; /*0x62dbf2*/
  dword_AC4A5C = 0; /*0x62dbf7*/
  dword_AC4A60 = 0; /*0x62dbfc*/
  return 0; /*0x62dc01*/
}



// ==== 0x0062DC10  sub_62DC10  this=-  sig=ida-proto ====
int sub_62DC10()
{
  dword_AC4A88 = 0; /*0x62dc15*/
  dword_AC4A80 = 128; /*0x62dc1f*/
  dword_AC4A84 = 128; /*0x62dc24*/
  return 128; /*0x62dc29*/
}



// ==== 0x0062DC30  sub_62DC30  this=-  sig=ida-proto ====
int sub_62DC30()
{
  dword_AC4A28 = 0; /*0x62dc32*/
  dword_AC4A2C = 0; /*0x62dc37*/
  dword_AC4A30 = 0; /*0x62dc3c*/
  dword_AC4A34 = 0; /*0x62dc41*/
  return 0; /*0x62dc46*/
}



// ==== 0x0062DC50  ParticleSystemClass::Constructor  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Constructor(int *this, int a2, int *a3, int a4, void *a5, _DWORD *a6, int a7)
{
  int *v8; // ebp
  int v9; // edx
  int *v10; // eax
  int v11; // eax
  int *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebp
  int v18; // ebx
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  _BYTE v24[12]; // [esp+1Ch] [ebp-Ch] BYREF

  ObjectClass::ctor((ObjectClass *)this); /*0x62dc59*/
  this->q02B = a2; /*0x62dc6a*/
  v8 = this + 53; /*0x62dc70*/
  this->fallRate = 0; /*0x62dc76*/
  this->q0B4 = 0; /*0x62dc7c*/
  this->q0B8 = 0; /*0x62dc82*/
  this->nextObject = 0; /*0x62dc88*/
  this->q031 = 0; /*0x62dc8b*/
  this->q0C8 = 1; /*0x62dc8e*/
  this->q0C9 = 0; /*0x62dc92*/
  this->Particles = (int)&DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62dc95*/
  this->attachedTag = 10; /*0x62dc9b*/
  this->alignmentPadding = 0; /*0x62dca2*/
  this->SpawnFrames = dword_AC4A58; /*0x62dcad*/
  this->occupant = dword_AC4A5C; /*0x62dcb4*/
  v9 = dword_AC4A60; /*0x62dcb7*/
  v10 = (int *)this->q02B; /*0x62dcbd*/
  this->attachedBomb = 0; /*0x62dcc3*/
  this->SparkSpawnFrames = v9; /*0x62dcc9*/
  this->TimeToDie = 0; /*0x62dccc*/
  *((float *)this + 58) = (float)v10[167]; /*0x62dcd8*/
  this->q03B = v10[174]; /*0x62dce4*/
  this->ambientSoundController = v10[192]; /*0x62dcf3*/
  this->q03D = 29; /*0x62dcfa*/
  this->q0F8 = 0; /*0x62dd04*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dd0a*/
  this->OwnerHouse = 0; /*0x62dd10*/
  *this = (int)&ParticleSystemClass::`vftable'; /*0x62dd16*/
  this->ptr_8 = (int)&ParticleSystemClass::`vftable'; /*0x62dd1c*/
  this->ptr_C = (int)&ParticleSystemClass::`vftable'; /*0x62dd22*/
  this->ptr_10 = (int)&off_7EFB70; /*0x62dd29*/
  AbstractClass::GenerateUniqueID((AbstractClass *)(this + 1)); /*0x62dd30*/
  if ( g_GameCleanupState < dword_A80210 /*0x62dd6a*/
    || (byte_A80215 || !dword_A80210)
    && dword_A8021C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A80208 + 8))(
         &dword_A80208,
         dword_A80210 + dword_A8021C,
         0) )
  {
    v11 = g_GameCleanupState++; /*0x62dd77*/
    *((_DWORD *)dword_A8020C + v11) = this; /*0x62dd86*/
  }
  (*(void (__thiscall **)(int *))(this->Particles + 12))(this + 47); /*0x62dd8d*/
  this->OwnerHouse = a7; /*0x62dd9a*/
  if ( a4 ) /*0x62dda0*/
  {
    v12 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v24); /*0x62ddab*/
    *v8 = *v12; /*0x62ddb0*/
    this->occupant = v12[1]; /*0x62ddb8*/
    this->SparkSpawnFrames = v12[2]; /*0x62ddbe*/
    v13 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 72))(a4, v24); /*0x62ddc8*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v13)->flags[0] & 0x100) != 0 /*0x62ddeb*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 44))(a4) == 11 )
    {
      this->SparkSpawnFrames += dword_AC4A8C; /*0x62ddfa*/
    }
  }
  else
  {
    *v8 = *a6; /*0x62de08*/
    this->occupant = a6[1]; /*0x62de0e*/
    this->SparkSpawnFrames = a6[2]; /*0x62de14*/
  }
  if ( a5 ) /*0x62de35*/
  {
    this->attachedBomb = (int)a5; /*0x62de37*/
    v14 = AbstractClass::IsTechnoType((AbstractClass *)a5); /*0x62de3d*/
    if ( v14 ) /*0x62de44*/
      this->TimeToDie = v14[173]; /*0x62de4c*/
  }
  else
  {
    this->attachedBomb = 0; /*0x62de54*/
    this->TimeToDie = a4; /*0x62de5a*/
  }
  ObjectClass::Deploy((ObjectClass *)this); /*0x62de68*/
  v15 = this->attachedBomb; /*0x62de6d*/
  if ( v15 ) /*0x62de75*/
  {
    v16 = this->q027; /*0x62de7f*/
    v17 = this->owningHouseIndex; /*0x62de81*/
    v18 = this->q0A4; /*0x62de84*/
    v19 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v15 + 72))(v15, v24); /*0x62de8c*/
    v20 = v19[2]; /*0x62de96*/
    v21 = v17 - v19[1]; /*0x62de99*/
    this->fallRate = v16 - *v19; /*0x62de9d*/
    this->q0B4 = v21; /*0x62dea3*/
    this->q0B8 = v18 - v20; /*0x62dea9*/
  }
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62dee6*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.Height + g_BuildingLoadQueue_Array.ExtraPowerBonus,
         0) )
  {
    v22 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62def3*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v22) = this; /*0x62df02*/
  }
  return (int)this; /*0x62df07*/
}



// ==== 0x0062DF20  ParticleSystemClass::ProcessCreation  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleClass::ProcessCreation(ParticleSystemClass *this)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x62df24*/
  this->Type = 0; /*0x62df31*/
  this->TargetCoords[0] = 0; /*0x62df3d*/
  this->TargetCoords[1] = 0; /*0x62df40*/
  LOBYTE(this->TargetCoords[2]) = 1; /*0x62df43*/
  BYTE1(this->TargetCoords[2]) = 0; /*0x62df47*/
  this->Particles[0] = (int)&DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62df4a*/
  this->Target = (void *)10; /*0x62df50*/
  this->Owner = 0; /*0x62df57*/
  this->SpawnFrames = dword_AC4A58; /*0x62df60*/
  this->Lifetime = dword_AC4A5C; /*0x62df68*/
  v2 = dword_AC4A60; /*0x62df6b*/
  this->SpotlightRadius = 0; /*0x62df71*/
  *(_DWORD *)&this->TimeToDie = 0; /*0x62df77*/
  this->SparkSpawnFrames = v2; /*0x62df7d*/
  v3 = this->Particles[0]; /*0x62df80*/
  *(_DWORD *)&this->__pad_E5[3] = 0; /*0x62df82*/
  *(_DWORD *)&this->__pad_E5[7] = 0; /*0x62df88*/
  *(_DWORD *)&this->__pad_E5[11] = 0; /*0x62df8e*/
  *(_DWORD *)&this->__pad_E5[15] = 0; /*0x62df94*/
  this->__pad_E5[19] = 0; /*0x62df9a*/
  this->ParticleSystemClass_field_bool_F9 = 0; /*0x62dfa0*/
  this->ObjectClass = &ParticleSystemClass::`vftable'; /*0x62dfa6*/
  this->? = &ParticleSystemClass::`vftable'; /*0x62dfac*/
  this->? = &ParticleSystemClass::`vftable'; /*0x62dfb3*/
  this->? = &off_7EFB70; /*0x62dfba*/
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
  if ( g_BuildingLoadQueue_Array.Foundation[0] < g_BuildingLoadQueue_Array.ExtraPowerBonus /*0x62e04b*/
    || (BYTE1(g_BuildingLoadQueue_Array.ExtraPowerDrain) || !g_BuildingLoadQueue_Array.ExtraPowerBonus)
    && g_BuildingLoadQueue_Array.Height > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.PowerBonus + 8))(
         &g_BuildingLoadQueue_Array.PowerBonus,
         g_BuildingLoadQueue_Array.ExtraPowerBonus + g_BuildingLoadQueue_Array.Height,
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.Foundation[0]++; /*0x62e058*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v5) = this; /*0x62e067*/
  }
  return (int)this; /*0x62e06c*/
}



// ==== 0x0062E070  ParticleSystemClass::DestructParticleSystemClass  this=ParticleSystemClass  sig=csp ====
int __usercall DestructParticleSystemClass@<eax>(ParticleSystemClass *this, int a2@<esi>)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  int v15; // [esp+14h] [ebp-4h] BYREF

  v3 = v2; /*0x62e073*/
  *(_DWORD *)v2 = &ParticleSystemClass::`vftable'; /*0x62e077*/
  *(_DWORD *)(v2 + 4) = &ParticleSystemClass::`vftable'; /*0x62e07d*/
  *(_DWORD *)(v2 + 8) = &ParticleSystemClass::`vftable'; /*0x62e084*/
  *(_DWORD *)(v2 + 12) = &off_7EFB70; /*0x62e08b*/
  AbstractClass::AnnounceExpiredPointer((void **)v2, 1); /*0x62e092*/
  ObjectClass::Undeploy((ObjectClass *)v3); /*0x62e099*/
  while ( *(_DWORD *)(v3 + 204) ) /*0x62e09e*/
  {
    v4 = **(_DWORD **)(v3 + 192); /*0x62e0b5*/
    if ( v4 ) /*0x62e0b9*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, 1); /*0x62e0bf*/
    v15 = **(_DWORD **)(v3 + 192); /*0x62e0d4*/
    v5 = (*(int (__thiscall **)(int *, int *, int))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x62e0dd*/
           &g_BuildingLoadQueue_Array.ToTile,
           &v15,
           a2);
    if ( v5 != -1 && v5 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] ) /*0x62e0ed*/
    {
      --*(_DWORD *)&g_BuildingLoadQueue_Array.__pad_E5C[12]; /*0x62e0f2*/
      for ( ; /*0x62e0f8*/
            v5 < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12];
            *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)g_BuildingLoadQueue_Array.__pad_E5C
                                                                                                 + 4 * v5) )
      {
        ++v5; /*0x62e100*/
      }
    }
    a2 = *(_DWORD *)(v3 + 192); /*0x62e124*/
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 188) + 16))(v3 + 188); /*0x62e127*/
    if ( v6 != -1 ) /*0x62e12d*/
    {
      v7 = *(_DWORD *)(v3 + 204); /*0x62e12f*/
      if ( v6 < v7 ) /*0x62e134*/
      {
        v8 = v7 - 1; /*0x62e136*/
        for ( *(_DWORD *)(v3 + 204) = v8; /*0x62e13c*/
              v6 < *(_DWORD *)(v3 + 204);
              *(_DWORD *)(*(_DWORD *)(v3 + 192) + 4 * v6 - 4) = *(_DWORD *)(*(_DWORD *)(v3 + 192) + 4 * v6) )
        {
          ++v6; /*0x62e141*/
        }
      }
    }
  }
  *(_DWORD *)(v3 + 172) = 0; /*0x62e15d*/
  v15 = v3; /*0x62e173*/
  v9 = (*(int (__thiscall **)(int *, int *))(dword_A80208 + 16))(&dword_A80208, &v15); /*0x62e177*/
  if ( v9 != -1 && v9 < g_GameCleanupState && v9 < --g_GameCleanupState ) /*0x62e192*/
  {
    do /*0x62e1aa*/
    {
      ++v9; /*0x62e19a*/
      *((_DWORD *)dword_A8020C + v9 - 1) = *((_DWORD *)dword_A8020C + v9); /*0x62e19e*/
    }
    while ( v9 < g_GameCleanupState ); /*0x62e1aa*/
  }
  v15 = v3; /*0x62e1bc*/
  v10 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x62e1c0*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x62e1d0*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x62e1d5*/
    for ( ; /*0x62e1db*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x62e1e3*/
    }
  }
  v15 = v3; /*0x62e205*/
  v11 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x62e209*/
          &g_BuildingLoadQueue_Array.PowerBonus,
          &v15);
  if ( v11 != -1 && v11 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x62e219*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x62e21e*/
    for ( ; /*0x62e224*/
          v11 < g_BuildingLoadQueue_Array.Foundation[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v11 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                      + 4 * v11) )
    {
      ++v11; /*0x62e22c*/
    }
  }
  v12 = *(void **)(v3 + 192); /*0x62e23e*/
  *(_DWORD *)(v3 + 188) = &VectorClass<ParticleClass *>::`vftable'; /*0x62e244*/
  if ( v12 && *(_BYTE *)(v3 + 201) ) /*0x62e252*/
  {
    __3_YAXPAX_Z(v12); /*0x62e25b*/
    *(_DWORD *)(v3 + 192) = 0; /*0x62e263*/
  }
  *(_BYTE *)(v3 + 201) = 0; /*0x62e26b*/
  *(_DWORD *)(v3 + 196) = 0; /*0x62e271*/
  return ObjectClass::Dtor((ObjectClass *)v3); /*0x62e27c*/
}



// ==== 0x0062E280  ParticleSystemClass::CreateBuildingLight  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::CreateBuildingLight(ParticleSystemClass *this, int a2, int a3)
{
  __m64 v3; // mm0
  ParticleSystemTypeClass *Type; // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // esi
  ObjectClass *v10; // eax
  BuildingLightQueue *v11; // esi
  BuildingLight *v12; // [esp+0h] [ebp-10h]

  Type = this->Type; /*0x62e287*/
  if ( LOBYTE(Type[1].ParticleSystemTypeClass_field_0x0) && *(int *)Type->__pad_304 > 0 && (int)this->Owner > 0 ) /*0x62e2b9*/
  {
    v6 = (double)(int)this->Owner / (double)SLODWORD(Type->ParticleSystemTypeClass_field_0x2A4); /*0x62e2c3*/
    if ( v6 <= 1.0 ) /*0x62e2d6*/
      v7 = v6; /*0x62e2e0*/
    else
      v7 = 1.0; /*0x62e2d8*/
    if ( v7 >= 0.4 ) /*0x62e2ed*/
    {
      if ( v6 > 1.0 ) /*0x62e306*/
        v6 = 1.0; /*0x62e30a*/
    }
    else
    {
      v6 = 0.4; /*0x62e2f1*/
    }
    LOWORD(v8) = Math::RoundToInt(v6 * (double)*(int *)Type->__pad_304); /*0x62e314*/
    v9 = v8; /*0x62e31b*/
    v10 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x62e31d*/
    if ( v10 ) /*0x62e327*/
      v11 = (BuildingLightQueue *)ObjectClass::RegisterInArray(v10, this->?[0], this->?[1], this->?[2], v9); /*0x62e34c*/
    else
      v11 = 0; /*0x62e350*/
    v11[3] = *(BuildingLightQueue *)&this->__pad_E5[15]; /*0x62e35a*/
    BuildingLight::CalculateShading(v12, v3); /*0x62e35d*/
    if ( v11 ) /*0x62e364*/
    {
      BuildingLightQueue::RemoveEntry(v11); /*0x62e368*/
      __3_YAXPAX_Z(v11); /*0x62e36e*/
    }
  }
}



// ==== 0x0062E380  ParticleSystemClass::CreateParticle  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::CreateParticle(ParticleSystemClass *this, _DWORD *a2, _DWORD *a3)
{
  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  void *Owner; // eax
  int *Particles; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  if ( this->Type->ParticleSystemTypeClass_field_0x294 == (IUnknown *)-1 ) /*0x62e391*/
    return 0; /*0x62e391*/
  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e39c*/
  if ( !v5 ) /*0x62e3a6*/
    return 0; /*0x62e3a6*/
  v6 = ParticleClass::Construct( /*0x62e3d0*/
         v5,
         v3,
         *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * (int)this->Type->ParticleSystemTypeClass_field_0x294),
         a2,
         *(float *)&a3,
         (int)this);
  if ( !v6 ) /*0x62e3d4*/
    return 0; /*0x62e425*/
  v7 = this->TargetCoords[1]; /*0x62e3d6*/
  Owner = this->Owner; /*0x62e3dc*/
  Particles = this->Particles; /*0x62e3e2*/
  if ( (int)Owner < v7 /*0x62e407*/
    || (*((_BYTE *)Particles + 13) || !v7)
    && (v10 = Particles[5], v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*Particles + 8))(Particles, v7 + v10, 0) )
  {
    v11 = Particles[4]; /*0x62e40e*/
    v12 = Particles[1]; /*0x62e411*/
    Particles[4] = v11 + 1; /*0x62e417*/
    *(_DWORD *)(v12 + 4 * v11) = v6; /*0x62e41a*/
  }
  return v6; /*0x62e41f*/
}



// ==== 0x0062E430  ObjectClass::CreateFireAtSW  this=ObjectClass  sig=csp ====
int __thiscall CreateFireAtSW(ObjectClass *this, int a2, int a3)
{
  double v3; // st7
  ObjectClass *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  char *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // edx

  v5 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e439*/
  if ( !v5 ) /*0x62e443*/
    return 0; /*0x62e443*/
  v6 = ParticleClass::Construct(v5, v3, a2, (_DWORD *)a3, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e45c*/
  if ( !v6 ) /*0x62e460*/
    return 0; /*0x62e4b1*/
  v7 = this->q031; /*0x62e462*/
  v8 = this->pad21; /*0x62e468*/
  v9 = (char *)this + 188; /*0x62e46e*/
  if ( v8 < v7 /*0x62e493*/
    || (v9[13] || !v7)
    && (v10 = *((_DWORD *)v9 + 5), v10 > 0)
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v9 + 8))(v9, v7 + v10, 0) )
  {
    v11 = *((_DWORD *)v9 + 4); /*0x62e49a*/
    v12 = *((_DWORD *)v9 + 1); /*0x62e49d*/
    *((_DWORD *)v9 + 4) = v11 + 1; /*0x62e4a3*/
    *(_DWORD *)(v12 + 4 * v11) = v6; /*0x62e4a6*/
  }
  return v6; /*0x62e4ab*/
}



// ==== 0x0062E4C0  ParticleClass::CreateInstance  this=ParticleSystemClass  sig=csp ====
int __thiscall sub_62E4C0(int this, _DWORD *a2, float a3, int a4)
{
  void *v5; // eax
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // esi
  int v13; // ebx
  int v14; // edx
  int v15; // eax
  int v16; // esi
  _DWORD *v17; // ecx
  int v18; // eax

  if ( *(_DWORD *)(*(_DWORD *)(this + 172) + 660) == -1 ) /*0x62e4d2*/
    return 0; /*0x62e4d2*/
  v5 = __2_YAPAXI_Z(0x138u); /*0x62e4dd*/
  if ( !v5 ) /*0x62e4e7*/
    return 0; /*0x62e4e7*/
  v6 = ParticleClass::Construct( /*0x62e515*/
         (int)v5,
         *((_DWORD *)dword_A83D9C + *(_DWORD *)(*(_DWORD *)(this + 172) + 660)),
         a2,
         a3,
         this);
  if ( !v6 ) /*0x62e519*/
    return 0; /*0x62e519*/
  v7 = a4; /*0x62e51f*/
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
  v12 = *(_DWORD *)(this + 204); /*0x62e573*/
  v13 = *(_DWORD *)(this + 192); /*0x62e579*/
  if ( v12 < a4 ) /*0x62e581*/
    v7 = v12; /*0x62e583*/
  v14 = (int)abs32(Random::State((_DWORD *)dword_A8B230 + 134)) % v7; /*0x62e59b*/
  v15 = v12 - 2; /*0x62e59d*/
  v16 = v12 - v14; /*0x62e5a0*/
  if ( v15 > v16 - 2 ) /*0x62e5a7*/
  {
    v17 = (_DWORD *)(v13 + 4 * v15); /*0x62e5a9*/
    v18 = v15 - (v16 - 2); /*0x62e5ac*/
    do /*0x62e5b7*/
    {
      v17[1] = *v17; /*0x62e5b0*/
      --v17; /*0x62e5b3*/
      --v18; /*0x62e5b6*/
    }
    while ( v18 ); /*0x62e5b7*/
  }
  *(_DWORD *)(v13 + 4 * v16 - 4) = v6; /*0x62e5b9*/
  return v6; /*0x62e5c0*/
}



// ==== 0x0062E650  ScenarioClass::DestroyAndClearVector  this=ScenarioClass  sig=csp ====
void __thiscall ScenarioClass::DestroyAndClearVector(ScenarioClass *this)
{
  int i; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  for ( i = this->nextScenario[51] - 1; i >= 0; --i ) /*0x62e65b*/
  {
    if ( i < this->nextScenario[51] ) /*0x62e664*/
    {
      v3 = *(_DWORD *)(this->nextScenario[48] + 4 * i); /*0x62e673*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 248))(v3); /*0x62e678*/
      v4 = (*(int (__thiscall **)(int *, int))(this->nextScenario[47] + 16))( /*0x62e695*/
             &this->nextScenario[47],
             4 * i + this->nextScenario[48]);
      if ( v4 != -1 ) /*0x62e69b*/
      {
        v5 = this->nextScenario[51]; /*0x62e69d*/
        if ( v4 < v5 ) /*0x62e6a2*/
        {
          v6 = v5 - 1; /*0x62e6a4*/
          for ( this->nextScenario[51] = v6; /*0x62e6aa*/
                v4 < this->nextScenario[51];
                *(_DWORD *)(this->nextScenario[48] + 4 * v4 - 4) = *(_DWORD *)(this->nextScenario[48] + 4 * v4) )
          {
            ++v4; /*0x62e6af*/
          }
        }
      }
    }
  }
}



// ==== 0x0062E6D0  ParticleSystemClass::UpdateAllParticles  this=ParticleSystemClass  sig=csp ====
void __thiscall ParticleSystemClass::UpdateAllParticles(ParticleSystemClass *this)
{
  double v1; // st7
  ParticleSystemClass *v2; // edi
  int i; // esi
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // edx
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // edi
  ObjectClass *v15; // eax
  int v16; // ebp
  int v17; // ecx
  void *Target; // eax
  void *Owner; // eax
  int v20; // edx
  _DWORD *v21; // ebp
  int j; // [esp+Ch] [ebp-10h]
  _DWORD v24[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = this; /*0x62e6d5*/
  for ( i = (int)this->Owner - 1; i >= 0; --i ) /*0x62e6e2*/
    ParticleClass::Dispatch(*(ParticleClass **)(v2->TargetCoords[0] + 4 * i)); /*0x62e6ed*/
  v4 = (int)v2->Owner - 1; /*0x62e6fb*/
  for ( j = v4; v4 >= 0; j = v4 ) /*0x62e700*/
  {
    v5 = v2->TargetCoords[0]; /*0x62e708*/
    v6 = *(_DWORD *)(v5 + 4 * v4); /*0x62e70e*/
    if ( *(_BYTE *)(v6 + 305) ) /*0x62e711*/
    {
      v7 = *(_DWORD **)(v6 + 172); /*0x62e71f*/
      v8 = v7[196]; /*0x62e725*/
      if ( v8 != -1 ) /*0x62e72e*/
      {
        v9 = *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16] + 4 * v8); /*0x62e747*/
        v10 = *(_DWORD *)(v6 + 156) + v7[165]; /*0x62e753*/
        v11 = v7[166]; /*0x62e755*/
        v12 = *(_DWORD *)(v6 + 160); /*0x62e75b*/
        v13 = v7[167]; /*0x62e75e*/
        v24[0] = v10; /*0x62e766*/
        v14 = *(_DWORD *)(v6 + 164); /*0x62e76a*/
        v24[1] = v12 + v11; /*0x62e76d*/
        v24[2] = v14 + v13; /*0x62e773*/
        v15 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e777*/
        v2 = this; /*0x62e77c*/
        if ( v15 ) /*0x62e785*/
        {
          v16 = ParticleClass::Construct(v15, v1, v9, v24, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62e79e*/
          if ( v16 ) /*0x62e7a2*/
          {
            v17 = this->TargetCoords[1]; /*0x62e7a4*/
            if ( (int)this->Owner < v17 /*0x62e7d5*/
              || (BYTE1(this->TargetCoords[2]) || !v17)
              && (Target = this->Target, (int)Target > 0)
              && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->Particles[0] + 8))(
                   this->Particles,
                   (int)Target + v17,
                   0) )
            {
              Owner = this->Owner; /*0x62e7dc*/
              v20 = this->TargetCoords[0]; /*0x62e7df*/
              this->Owner = (char *)Owner + 1; /*0x62e7e5*/
              *(_DWORD *)(v20 + 4 * (_DWORD)Owner) = v16; /*0x62e7e8*/
            }
            *(_DWORD *)(v16 + 228) = *(_DWORD *)(v6 + 228); /*0x62e7f7*/
            v21 = (_DWORD *)(v16 + 192); /*0x62e7fd*/
            *v21 = *(_DWORD *)(v6 + 192); /*0x62e805*/
            v21[1] = *(_DWORD *)(v6 + 196); /*0x62e80b*/
            v21[2] = *(_DWORD *)(v6 + 200); /*0x62e811*/
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 248))(v6); /*0x62e818*/
      v4 = j; /*0x62e81e*/
    }
    else
    {
      BuildingClass::AdjustHeight(*(int **)(v5 + 4 * v4)); /*0x62e826*/
    }
    --v4; /*0x62e82b*/
  }
}



// ==== 0x0062E840  ObjectClass::UpdateProductionParticleSystem  this=ObjectClass  sig=csp ====
char __thiscall UpdateProductionParticleSystem(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int v6; // eax
  int currentMission; // edi
  int v8; // esi
  Random *p_NeedsSaveOrLink; // ebp
  _DWORD *v10; // edi
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ebp
  ObjectClass *v16; // eax
  _DWORD *v17; // edi
  char v22; // al
  float v23; // eax
  float v24; // edx
  float v26; // edx
  float v27; // ecx
  float v29; // eax
  float v30; // ecx
  float v31; // edx
  float v32; // ecx
  int v33; // eax
  int v34; // eax
  ObjectClass *v35; // eax
  int v36; // eax
  int v38; // eax
  int v40; // eax
  int i; // esi
  int j; // esi
  _BYTE *v43; // ecx
  double v45; // [esp+0h] [ebp-80h]
  double v46; // [esp+0h] [ebp-80h]
  int v47; // [esp+1Ch] [ebp-64h] BYREF
  int v48; // [esp+20h] [ebp-60h]
  int v49; // [esp+24h] [ebp-5Ch]
  float v50; // [esp+28h] [ebp-58h]
  float v51; // [esp+2Ch] [ebp-54h]
  float v52; // [esp+30h] [ebp-50h]
  float v53; // [esp+34h] [ebp-4Ch]
  float v54; // [esp+38h] [ebp-48h]
  float v55; // [esp+3Ch] [ebp-44h]
  float v56; // [esp+40h] [ebp-40h]
  float v57; // [esp+44h] [ebp-3Ch]
  float v58; // [esp+48h] [ebp-38h]
  float v59; // [esp+4Ch] [ebp-34h]
  float v60; // [esp+50h] [ebp-30h]
  float v61; // [esp+54h] [ebp-2Ch]
  float v62; // [esp+58h] [ebp-28h]
  _DWORD v63[3]; // [esp+5Ch] [ebp-24h] BYREF
  int v64[3]; // [esp+68h] [ebp-18h] BYREF

  v3 = this->flashing[0]; /*0x62e84e*/
  if ( v3 > 0 ) /*0x62e857*/
  {
    if ( v3 == 1 ) /*0x62e860*/
      goto LABEL_4; /*0x62e860*/
    v49 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62e879*/
    _ECX = this->currentMission; /*0x62e87d*/
    __asm /*0x62e883*/
    {
      fild [esp+78h+var_5C]
      fmul ds:dbl_7E3570
      fcomp qword ptr [ecx+2F8h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x62e898*/
    {
LABEL_4:
      v6 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62e8aa*/
      currentMission = this->currentMission; /*0x62e8af*/
      v8 = *(_DWORD *)(currentMission + 676) / 2 + (int)abs32(v6) % (*(_DWORD *)(currentMission + 676) / 2); /*0x62e8dc*/
      p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62e8e4*/
      v10 = (_DWORD *)*((_DWORD *)dword_A83D9C + *(_DWORD *)(currentMission + 660)); /*0x62e8ea*/
      v47 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62e8f4*/
      *(float *)&v48 = COERCE_FLOAT(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)); /*0x62e90a*/
      v49 = Random::State(p_NeedsSaveOrLink) % v10[171]; /*0x62e91e*/
      __asm { fild [esp+78h+var_5C] } /*0x62e923*/
      v11 = v48 % v10[168]; /*0x62e927*/
      __asm { fstp [esp+78h+var_58] } /*0x62e92d*/
      v49 = v11; /*0x62e935*/
      __asm { fild [esp+78h+var_5C] } /*0x62e93a*/
      v12 = v47 % v10[169]; /*0x62e93e*/
      __asm { fstp [esp+78h+var_C] } /*0x62e944*/
      v49 = v12; /*0x62e94a*/
      __asm /*0x62e94e*/
      {
        fild [esp+78h+var_5C]
        fstp [esp+78h+var_8]
      }
      if ( v8 > 0 ) /*0x62e956*/
      {
        v49 = v8; /*0x62e95c*/
        do /*0x62ebec*/
        {
          v63[0] = this->location[0]; /*0x62e96a*/
          v63[1] = this->location[1]; /*0x62e971*/
          v13 = this->location[2]; /*0x62e977*/
          v64[0] = this->location[0]; /*0x62e97a*/
          v63[2] = v13; /*0x62e97e*/
          v64[1] = this->location[1]; /*0x62e985*/
          v14 = this->currentMission; /*0x62e98c*/
          v64[2] = this->location[2]; /*0x62e992*/
          if ( *(_DWORD *)(v14 + 660) == -1 ) /*0x62e99d*/
          {
            v15 = 0; /*0x62e99f*/
          }
          else
          {
            v16 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62e9a8*/
            v15 = 0; /*0x62e9ad*/
            if ( v16 ) /*0x62e9b4*/
            {
              v47 = ParticleClass::Construct( /*0x62e9e4*/
                      v16,
                      v1,
                      *((_DWORD *)dword_A83D9C + *(_DWORD *)(this->currentMission + 660)),
                      v64,
                      COERCE_FLOAT(v63),
                      (int)this);
              if ( v47 ) /*0x62e9e8*/
              {
                VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v47); /*0x62e9f5*/
                v15 = v47; /*0x62e9fa*/
              }
            }
            else
            {
              v47 = 0; /*0x62eaf4*/
            }
          }
          v17 = *(_DWORD **)(v15 + 172); /*0x62ea04*/
          _ESI = (float *)(v15 + 268); /*0x62ea10*/
          v48 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v17[168]; /*0x62ea22*/
          __asm /*0x62ea26*/
          {
            fild [esp+78h+var_60]
            fstp dword ptr [esi]
          }
          *_ESI = _ET1; /*0x62ea2a*/
          v48 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v17[169]; /*0x62ea44*/
          __asm /*0x62ea48*/
          {
            fild [esp+78h+var_60]
            fstp dword ptr [ebp+110h]
          }
          *(float *)(v15 + 272) = _ET1; /*0x62ea4c*/
          v48 = v17[170] + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % v17[171]; /*0x62ea77*/
          __asm /*0x62ea7b*/
          {
            fild [esp+80h+var_60]
            fstp dword ptr [ebp+114h]
          }
          *(float *)(v15 + 276) = _ET1; /*0x62ea7f*/
          __asm /*0x62ea85*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [esi+4]
            fld dword ptr [esi]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp qword ptr [esp+80h+var_80]; double
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v45); /*0x62eaa6*/
          v22 = BYTE1(this->animation[0]); /*0x62eaab*/
          __asm { fstp [esp+78h+var_60] } /*0x62eab4*/
          if ( v22 ) /*0x62eaba*/
          {
            __asm /*0x62eabc*/
            {
              fld [esp+78h+var_C]
              fadd dword ptr [esi]
            }
            __asm
            {
              fstp [esp+78h+var_54]
              fld [esp+78h+var_8]
              fadd dword ptr [esi+4]
            }
            __asm
            {
              fstp [esp+78h+var_50]
              fld [esp+78h+var_58]
              fadd dword ptr [esi+8]
            }
            v23 = v52; /*0x62eade*/
            *_ESI = v51; /*0x62eae2*/
            __asm { fstp [esp+78h+var_4C] } /*0x62eae4*/
            v24 = v53; /*0x62eae8*/
            *(float *)(v15 + 272) = v23; /*0x62eaec*/
            *(float *)(v15 + 276) = v24; /*0x62eaef*/
          }
          else
          {
            _EAX = this->currentMission + 700; /*0x62eb03*/
            __asm /*0x62eb08*/
            {
              fld dword ptr [eax]
              fadd dword ptr [esi]
              fstp [esp+78h+var_48]
              fld dword ptr [eax+4]
              fadd dword ptr [esi+4]
            }
            __asm
            {
              fstp [esp+78h+var_44]
              fld dword ptr [eax+8]
              fadd dword ptr [esi+8]
            }
            v26 = v55; /*0x62eb24*/
            *_ESI = v54; /*0x62eb2a*/
            __asm { fstp [esp+78h+var_40] } /*0x62eb2c*/
            v27 = v56; /*0x62eb30*/
            *(float *)(v15 + 272) = v26; /*0x62eb34*/
            *(float *)(v15 + 276) = v27; /*0x62eb37*/
          }
          __asm /*0x62eb3a*/
          {
            fld dword ptr [esi+8]
            fld dword ptr [esi+4]
            fld dword ptr [esi]
            fld st
            fmul st, st(1)
            fld st(2)
            fmul st, st(3)
          }
          __asm
          {
            faddp st(1), st
            fld st(3)
            fmul st, st(4)
            faddp st(1), st
            fstp qword ptr [esp+80h+var_80]; int
            fstp st
            fstp st
            fstp st
          }
          Math::Sqrt(v46); /*0x62eb5e*/
          __asm { fcom ds:dbl_7E2800 } /*0x62eb63*/
          __asm { fnstsw ax }
          if ( (_AX & 0x4000) != 0 ) /*0x62eb71*/
          {
            __asm { fstp st } /*0x62eb9b*/
            v29 = *_ESI; /*0x62eb9d*/
            v30 = *(float *)(v15 + 272); /*0x62eb9f*/
            v31 = *(float *)(v15 + 276); /*0x62eba2*/
          }
          else
          {
            __asm /*0x62eb73*/
            {
              fld dword ptr [esi]
              fdiv st, st(1)
              fstp [esp+78h+var_3C]
              fld dword ptr [esi+4]
              fdiv st, st(1)
            }
            v29 = v57; /*0x62eb80*/
            __asm { fstp [esp+78h+var_38] } /*0x62eb84*/
            v30 = v58; /*0x62eb88*/
            __asm /*0x62eb8c*/
            {
              fdivr dword ptr [esi+8]
              fstp [esp+78h+var_34]
            }
            v31 = v59; /*0x62eb93*/
          }
          __asm { fld [esp+78h+var_60] } /*0x62eba7*/
          *_ESI = v29; /*0x62ebab*/
          *(float *)(v15 + 272) = v30; /*0x62ebad*/
          *(float *)(v15 + 276) = v31; /*0x62ebb0*/
          __asm /*0x62ebb3*/
          {
            fmul dword ptr [esi]
            fstp [esp+78h+var_30]
            fld [esp+78h+var_60]
            fmul dword ptr [esi+4]
          }
          __asm
          {
            fstp [esp+78h+var_2C]
            fld [esp+78h+var_60]
            fmul dword ptr [esi+8]
          }
          v32 = v61; /*0x62ebcf*/
          *_ESI = v60; /*0x62ebd3*/
          v33 = v49; /*0x62ebd5*/
          *(float *)(v15 + 272) = v32; /*0x62ebd9*/
          __asm { fstp [esp+78h+var_28] } /*0x62ebdc*/
          *(float *)(v15 + 276) = v62; /*0x62ebe5*/
          v49 = v33 - 1; /*0x62ebe8*/
        }
        while ( v33 != 1 ); /*0x62ebec*/
      }
      if ( dword_A8EB78 == 2 ) /*0x62ebf9*/
      {
        v34 = this->currentMission; /*0x62ebfb*/
        if ( this->flashing[0] == *(_DWORD *)(v34 + 768) && *(int *)(v34 + 772) > 0 && !*(_BYTE *)(v34 + 780) ) /*0x62ec19*/
        {
          v35 = (ObjectClass *)__2_YAPAXI_Z(0x18u); /*0x62ec25*/
          if ( v35 ) /*0x62ec2f*/
            ObjectClass::RegisterInArray( /*0x62ec5b*/
              v35,
              this->location[0],
              this->location[1],
              this->location[2],
              *(_DWORD *)(this->currentMission + 772));
        }
      }
    }
    v36 = this->flashing[0] - 1; /*0x62ec67*/
    this->flashing[0] = v36; /*0x62ec69*/
    if ( v36 <= 0 ) /*0x62ec71*/
      LOBYTE(this->animation[0]) = 1; /*0x62ec73*/
    v50 = COERCE_FLOAT(Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646)); /*0x62ec91*/
    __asm /*0x62ec95*/
    {
      fild [esp+78h+var_58]
      fmul ds:dbl_7E3570
      fcom ds:dbl_7E5138
      fnstsw ax
    }
    if ( (_AX & 0x100) != 0 ) /*0x62ecaa*/
    {
      v38 = this->flashing[1] - 3; /*0x62ecb2*/
      __asm { fstp st } /*0x62ecb8*/
      if ( v38 <= 17 ) /*0x62ecba*/
        v38 = 17; /*0x62ecbc*/
    }
    else
    {
      __asm /*0x62ecc3*/
      {
        fcomp ds:dbl_7E3558
        fnstsw ax
      }
      if ( (_AX & 0x100) == 0 ) /*0x62ecce*/
        goto LABEL_34; /*0x62ecce*/
      v38 = this->flashing[1] + 3; /*0x62ecd6*/
      if ( v38 >= 41 ) /*0x62ecdc*/
        v38 = 41; /*0x62ecde*/
    }
    this->flashing[1] = v38; /*0x62ece3*/
  }
LABEL_34:
  v40 = this->missionTimer[1]; /*0x62ece9*/
  for ( i = 0; i < v40; ++i ) /*0x62ecf3*/
  {
    ParticleClass::Dispatch(*(ParticleClass **)(this->missionStartTime + 4 * i)); /*0x62ecfe*/
    v40 = this->missionTimer[1]; /*0x62ed03*/
  }
  for ( j = this->missionTimer[1] - 1; j >= 0; --j ) /*0x62ed15*/
  {
    v43 = *(_BYTE **)(this->missionStartTime + 4 * j); /*0x62ed1d*/
    LOBYTE(v40) = v43[305]; /*0x62ed20*/
    if ( (_BYTE)v40 ) /*0x62ed28*/
      LOBYTE(v40) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v43 + 248))(v43); /*0x62ed2c*/
  }
  return v40; /*0x62ed35*/
}



// ==== 0x0062ED40  ObjectClass::UpdateBuildingParticleSystem  this=ObjectClass  sig=csp ====
void __thiscall UpdateBuildingParticleSystem(TechnoClass *this)
{
  double v1; // st7
  int v3; // eax
  int *v4; // eax
  int v5; // edx
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int ptr_0; // eax
  int v10; // ecx
  int queuedMission; // edx
  int i; // edi
  int v13; // ebx
  int v14; // edi
  int v15; // ebp
  int v16; // ebx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  ObjectClass *v22; // eax
  int v23; // eax
  ObjectClass *v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // ebx
  double v28; // st7
  int v29; // eax
  int v30; // eax
  Random *p_NeedsSaveOrLink; // edi
  int v32; // eax
  int currentMission; // ebx
  int v34; // ebp
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ebp
  ObjectClass *v39; // eax
  int v40; // ebx
  int missionData; // ecx
  int v42; // eax
  int v43; // eax
  int missionStartTime; // edx
  double v45; // st7
  int v46; // eax
  double v47; // st7
  int v48; // [esp+14h] [ebp-40h]
  int v49; // [esp+14h] [ebp-40h]
  int v50; // [esp+14h] [ebp-40h]
  int v51; // [esp+18h] [ebp-3Ch] BYREF
  int v52; // [esp+1Ch] [ebp-38h]
  int v53; // [esp+20h] [ebp-34h] BYREF
  int v54; // [esp+24h] [ebp-30h]
  int v55; // [esp+28h] [ebp-2Ch]
  int v56; // [esp+2Ch] [ebp-28h]
  int v57; // [esp+30h] [ebp-24h] BYREF
  int v58; // [esp+34h] [ebp-20h]
  int v59; // [esp+38h] [ebp-1Ch]
  int v60; // [esp+3Ch] [ebp-18h] BYREF
  int v61; // [esp+40h] [ebp-14h]
  int v62; // [esp+44h] [ebp-10h]
  char v63[8]; // [esp+48h] [ebp-Ch] BYREF
  int v64; // [esp+50h] [ebp-4h]

  v3 = this->radioLinks[0]; /*0x62ed49*/
  if ( v3 && (*(_BYTE *)(v3 + 20) & 2) != 0 && (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 12))(v3 + 4) != 6 ) /*0x62ed6e*/
  {
    v4 = (int *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)this->radioLinks[0] + 72))(this->radioLinks[0], v63); /*0x62ed7d*/
    v5 = *v4; /*0x62ed86*/
    v6 = v4[1]; /*0x62ed88*/
    v7 = v4[2]; /*0x62ed8b*/
    v8 = *(_DWORD *)this->missionQueued; /*0x62ed8e*/
    ptr_0 = this->ptr_0; /*0x62ed94*/
    v10 = v5 + this->suspendedMission; /*0x62ed96*/
    queuedMission = this->queuedMission; /*0x62ed98*/
    v57 = v10; /*0x62ed9e*/
    v58 = v6 + queuedMission; /*0x62edad*/
    v59 = v7 + v8; /*0x62edb1*/
    (*(void (__thiscall **)(TechnoClass *, int *))(ptr_0 + 436))(this, &v57); /*0x62edb5*/
  }
  for ( i = 0; i < this->missionTimer[1]; ++i ) /*0x62edc5*/
    ParticleClass::Dispatch(*(ParticleClass **)(this->missionStartTime + 4 * i)); /*0x62edd0*/
  v13 = this->missionTimer[1] - 1; /*0x62ede6*/
  v55 = v13; /*0x62ede7*/
  if ( v13 >= 0 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(this->missionStartTime + 4 * v13); /*0x62edf7*/
      if ( !*(_BYTE *)(v14 + 305) ) /*0x62ee02*/
      {
        BuildingClass::AdjustHeight((int *)v14); /*0x62f037*/
        goto LABEL_29; /*0x62f037*/
      }
      if ( *(_DWORD *)(*(_DWORD *)(v14 + 172) + 784) == -1 ) /*0x62ee15*/
        goto LABEL_27; /*0x62ee15*/
      v15 = *(_DWORD *)(v14 + 156); /*0x62ee2d*/
      v16 = *(_DWORD *)(v14 + 160); /*0x62ee2f*/
      v17 = *(_DWORD *)(v14 + 172); /*0x62ee35*/
      v64 = *(_DWORD *)(v14 + 164); /*0x62ee3b*/
      v48 = *(int *)(v17 + 772) >> 3; /*0x62ee48*/
      v18 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v48; /*0x62ee56*/
      v19 = v18 > 0 ? v48 + v18 : v18 - v48;
      v52 = v19; /*0x62ee67*/
      v54 = *(_DWORD *)(v14 + 172); /*0x62ee77*/
      v49 = *(int *)(v54 + 772) >> 3; /*0x62ee84*/
      v20 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % v49; /*0x62ee92*/
      v21 = v20 > 0 ? v49 + v20 : v20 - v49;
      v50 = v21; /*0x62eea2*/
      v54 = *((_DWORD *)dword_A83D9C + *(_DWORD *)(v54 + 784)); /*0x62eebe*/
      v57 = v52 + v15; /*0x62eecc*/
      v58 = v16 + v21; /*0x62eed0*/
      v59 = v64; /*0x62eed4*/
      v22 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62eed8*/
      if ( v22 )
      {
        v51 = ParticleClass::Construct(v22, v1, v54, &v57, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62ef01*/
        if ( v51 )
        {
          VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v51); /*0x62ef12*/
          v56 = v51; /*0x62ef1d*/
          if ( v51 )
          {
            *(_DWORD *)(v51 + 228) = *(_DWORD *)(v14 + 228); /*0x62ef29*/
            v23 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62ef3b*/
            *(_BYTE *)(v56 + 303) = *(_BYTE *)(v14 + 303) + (v23 % 6 != 0 ? 0x19 : 0);
          }
        }
      }
      else
      {
        v51 = 0; /*0x62efab*/
      }
      v60 = v15 - v52; /*0x62ef76*/
      v61 = v16 - v50; /*0x62ef7a*/
      v62 = v64; /*0x62ef7e*/
      v24 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62ef82*/
      if ( v24 ) /*0x62ef8c*/
        break; /*0x62ef8c*/
      v26 = *(_DWORD *)v14; /*0x62efb5*/
      v53 = 0; /*0x62efb9*/
      (*(void (__thiscall **)(int))(v26 + 248))(v14); /*0x62efc1*/
      v13 = v55; /*0x62efc7*/
LABEL_29:
      v55 = --v13; /*0x62f03d*/
      if ( v13 < 0 ) /*0x62f041*/
        goto LABEL_30; /*0x62f041*/
    }
    v25 = ParticleClass::Construct(v24, v1, v54, &v60, COERCE_FLOAT(&dword_AC4A58), (int)this); /*0x62efa0*/
    v53 = v25; /*0x62efa5*/
    if ( v25 )
    {
      VectorClass::PushBackCopy((DynamicVectorClass *)&this->missionStatus, &v53); /*0x62efdc*/
      v27 = v53; /*0x62efe7*/
      if ( v53 )
      {
        *(_DWORD *)(v53 + 228) = *(_DWORD *)(v14 + 228); /*0x62eff1*/
        *(_BYTE *)(v27 + 303) = *(_BYTE *)(v14 + 303)
                              + (Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink) % 6 != 0 ? 0x19 : 0);
      }
    }
LABEL_27:
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 248))(v14); /*0x62f025*/
    v13 = v55; /*0x62f02f*/
    goto LABEL_29; /*0x62f033*/
  }
LABEL_30:
  if ( !LOBYTE(this->animation[0]) ) /*0x62f047*/
  {
    if ( this->isAliveFlag[0] ) /*0x62f055*/
    {
      v28 = *(float *)&this->radioLinks[2]; /*0x62f063*/
      LOWORD(v29) = Math::RoundToInt(v28); /*0x62f069*/
      if ( !((int)dword_A8ED84 % v29) ) /*0x62f076*/
      {
        v30 = this->radioLinks[0]; /*0x62f080*/
        if ( !v30 || (*(_BYTE *)(v30 + 20) & 4) == 0 || *(char *)(v30 + 1668) < 0 ) /*0x62f098*/
        {
          p_NeedsSaveOrLink = (Random *)&dword_A8B230[14].NeedsSaveOrLink; /*0x62f0a4*/
          v32 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x62f0ac*/
          currentMission = this->currentMission; /*0x62f0b1*/
          v56 = v32; /*0x62f0b7*/
          v34 = *(_DWORD *)(currentMission + 680) + 1; /*0x62f0c3*/
          v35 = Random::State(p_NeedsSaveOrLink) % v34; /*0x62f0d2*/
          v36 = v56 % v34; /*0x62f0d5*/
          v37 = this->location[0]; /*0x62f0df*/
          v38 = this->location[2]; /*0x62f0e7*/
          v61 = this->location[1] + v35; /*0x62f0ea*/
          v60 = v36 + v37; /*0x62f0f3*/
          v62 = v38 + 10; /*0x62f0f7*/
          if ( *(_DWORD *)(currentMission + 660) != -1 ) /*0x62f102*/
          {
            v39 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62f10d*/
            if ( v39 ) /*0x62f117*/
            {
              v40 = ParticleClass::Construct( /*0x62f147*/
                      v39,
                      v28,
                      *((_DWORD *)dword_A83D9C + *(_DWORD *)(this->currentMission + 660)),
                      &v60,
                      COERCE_FLOAT((TechnoClass *)this->lastCommands),
                      (int)this);
              if ( v40 ) /*0x62f14b*/
              {
                missionData = this->missionData; /*0x62f151*/
                if ( this->missionTimer[1] < missionData /*0x62f182*/
                  || (BYTE1(this->missionTimer[0]) || !missionData)
                  && (v42 = this->missionTimer[2], v42 > 0)
                  && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->missionStatus + 8))(
                       &this->missionStatus,
                       missionData + v42,
                       0) )
                {
                  v43 = this->missionTimer[1]; /*0x62f189*/
                  missionStartTime = this->missionStartTime; /*0x62f18c*/
                  this->missionTimer[1] = v43 + 1; /*0x62f192*/
                  *(_DWORD *)(missionStartTime + 4 * v43) = v40; /*0x62f195*/
                }
                if ( *(float *)&this->radioLinks[2] > (double)*(float *)(this->currentMission + 688) ) /*0x62f1af*/
                  *(_BYTE *)(v40 + 303) += 25; /*0x62f1b1*/
                v45 = *(float *)(v40 + 228) /*0x62f1d0*/
                    - (*(float *)&this->radioLinks[2] - (double)*(int *)(this->currentMission + 668)) * 0.34999999;
                *(float *)(v40 + 228) = v45; /*0x62f1d6*/
                if ( v45 < 2.0 ) /*0x62f1e7*/
                  *(_DWORD *)(v40 + 228) = 0x40000000; /*0x62f1e9*/
              }
            }
          }
        }
      }
    }
  }
  v46 = this->currentMission; /*0x62f1f3*/
  v47 = *(float *)(v46 + 672) + *(float *)&this->radioLinks[2]; /*0x62f1ff*/
  *(float *)&this->radioLinks[2] = v47; /*0x62f205*/
  if ( v47 > *(float *)(v46 + 684) ) /*0x62f216*/
    LOBYTE(this->animation[0]) = 1; /*0x62f218*/
}



// ==== 0x0062F230  ParticleSystemClass::SpawnParticle  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::SpawnParticle(ParticleSystemClass *this)
{
  double v1; // st7
  int SparkSpawnFrames; // esi
  int Lifetime; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // ebp
  int v9; // edx
  int v10; // esi
  float v11; // eax
  float v12; // eax
  int v13; // eax
  int v15; // eax
  int v16; // esi
  unsigned int v18; // esi
  unsigned int v19; // ebp
  float *v20; // eax
  float v21; // edx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // ebp
  int v30; // eax
  int v31; // ebx
  int *v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  ParticleSystemTypeClass *Type; // edx
  float v37; // ebx
  ObjectClass *v38; // eax
  float v45; // eax
  float v46; // ecx
  float v47; // edx
  bool v53; // cc
  char *v55; // eax
  char v56; // ecx^3
  char v57; // esp^3
  char v58; // ecx^3
  void *Owner; // eax
  int i; // esi
  int j; // esi
  _BYTE *v62; // ecx
  int v64; // [esp-18h] [ebp-110h]
  int *v65; // [esp-14h] [ebp-10Ch]
  int v66[4]; // [esp-10h] [ebp-108h] BYREF
  double v67; // [esp+0h] [ebp-F8h]
  float v68; // [esp+1Ch] [ebp-DCh]
  float v69; // [esp+20h] [ebp-D8h] BYREF
  int v70; // [esp+24h] [ebp-D4h]
  double v71; // [esp+28h] [ebp-D0h]
  float v72; // [esp+34h] [ebp-C4h]
  int v73; // [esp+38h] [ebp-C0h] BYREF
  float v74; // [esp+3Ch] [ebp-BCh]
  float v75; // [esp+40h] [ebp-B8h]
  int v76; // [esp+44h] [ebp-B4h]
  int v77; // [esp+48h] [ebp-B0h]
  int v78; // [esp+4Ch] [ebp-ACh]
  double v79; // [esp+50h] [ebp-A8h]
  int v80; // [esp+58h] [ebp-A0h]
  int v82; // [esp+60h] [ebp-98h]
  int v83; // [esp+64h] [ebp-94h]
  int v84; // [esp+68h] [ebp-90h]
  int v85; // [esp+6Ch] [ebp-8Ch]
  float v86; // [esp+70h] [ebp-88h]
  float v87; // [esp+74h] [ebp-84h]
  float v88; // [esp+78h] [ebp-80h]
  _DWORD v90[7]; // [esp+80h] [ebp-78h] BYREF
  float v95[3]; // [esp+B0h] [ebp-48h] BYREF
  Color v96[3]; // [esp+BCh] [ebp-3Ch] BYREF
  Matrix3x4 v97; // [esp+C8h] [ebp-30h] BYREF

  if ( !this->__pad_E5[19] && !this->Owner ) /*0x62f250*/
  {
    SparkSpawnFrames = this->SparkSpawnFrames; /*0x62f264*/
    Lifetime = this->Lifetime; /*0x62f26c*/
    v5 = this->?[0]; /*0x62f27b*/
    v6 = this->SpawnFrames - v5; /*0x62f27d*/
    v7 = this->?[1]; /*0x62f27f*/
    v76 = this->SpawnFrames - v5; /*0x62f282*/
    v8 = Lifetime - v7; /*0x62f286*/
    v9 = this->?[2]; /*0x62f288*/
    v77 = v8; /*0x62f28b*/
    v10 = SparkSpawnFrames - v9; /*0x62f28f*/
    v78 = v10; /*0x62f291*/
    __asm /*0x62f295*/
    {
      fild [esp+0F8h+var_AC]
      fild [esp+0F8h+var_B0]
      fstp [esp+0F8h+var_D0]
      fild [esp+0F8h+var_B4]
      fst [esp+0F8h+var_A8]
      fmul [esp+0F8h+var_A8]
      fld [esp+0F8h+var_D0]
      fmul [esp+0F8h+var_D0]
      faddp st(1), st
      fld st(1)
      fmul st, st(2)
      faddp st(1), st
      fstp [esp+0F8h+var_F8]; double
      fstp st
    }
    Math::Sqrt(v67); /*0x62f2c2*/
    LOWORD(v11) = Math::RoundToInt(v1); /*0x62f2c7*/
    __asm /*0x62f2cc*/
    {
      fld [esp+0F8h+var_D0]
      fld [esp+0F8h+var_A8]
      fld st(1)
      fmul st, st(2)
      fld st(1)
      fmul st, st(2)
    }
    v68 = v11; /*0x62f2dc*/
    __asm /*0x62f2e0*/
    {
      faddp st(1), st
      fstp [esp+0F8h+var_F8]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v67); /*0x62f2e9*/
    LOWORD(v12) = Math::RoundToInt(v1); /*0x62f2f1*/
    v72 = v12; /*0x62f2fa*/
    v70 = v10; /*0x62f300*/
    v69 = *(float *)&v6; /*0x62f304*/
    if ( v10 >= SLODWORD(v68) ) /*0x62f308*/
    {
      *(float *)&v10 = v68; /*0x62f30a*/
      v70 = LODWORD(v68); /*0x62f30c*/
    }
    if ( v10 <= -LODWORD(v68) ) /*0x62f314*/
      v70 = -LODWORD(v68); /*0x62f316*/
    if ( v6 >= SLODWORD(v12) ) /*0x62f31c*/
    {
      *(float *)&v6 = v12; /*0x62f31e*/
      v69 = v12; /*0x62f320*/
    }
    v13 = -LODWORD(v12); /*0x62f324*/
    if ( v6 <= v13 ) /*0x62f328*/
      v69 = *(float *)&v13; /*0x62f32a*/
    __asm { fild [esp+0F0h+var_DC] } /*0x62f32e*/
    _EAX = this->Type; /*0x62f332*/
    __asm { fmul qword ptr [eax+2C8h] } /*0x62f338*/
    LOWORD(v15) = Math::RoundToInt(v1); /*0x62f33e*/
    __asm { fild [esp+0F0h+var_DC] } /*0x62f343*/
    v16 = v15; /*0x62f34a*/
    v82 = v15; /*0x62f34c*/
    __asm /*0x62f350*/
    {
      fstp [esp+0F8h+var_9C]
      fild [esp+0F8h+var_D4]
      fdiv [esp+0F8h+var_9C]
      fstp [esp+0F8h+var_F8]; double
    }
    BuildingLight::CalcIntensity(v67); /*0x62f35f*/
    __asm /*0x62f364*/
    {
      fstp [esp+0F8h+var_DC]
      fild [esp+0F8h+var_D8]
      fidiv [esp+0F8h+var_C4]
      fstp [esp+0F8h+var_F8]; double
    }
    Math::ArcTan2_Table(v67); /*0x62f373*/
    __asm { fstp [esp+0F8h+var_D8] } /*0x62f378*/
    if ( v8 < 0 ) /*0x62f381*/
    {
      __asm /*0x62f383*/
      {
        fld [esp+0F0h+var_D8]
        fchs
        fstp [esp+0F0h+var_D8]
      }
    }
    Matrix3x4::Identity(&v97); /*0x62f394*/
    Matrix2D::Rotate(v97.m_Data, v69); /*0x62f3a5*/
    Matrix3x3::RotateX(v97.m_Data, v68); /*0x62f3b6*/
    v68 = 0.0; /*0x62f3bd*/
    v70 = 0; /*0x62f3c5*/
    if ( v16 > 0 ) /*0x62f3cd*/
    {
      __asm /*0x62f3d3*/
      {
        fild [esp+0F0h+var_98]
        fstp [esp+0F0h+var_7C]
      }
      do /*0x62f876*/
      {
        __asm { fild [esp+0F0h+var_D4] } /*0x62f3db*/
        _EAX = this->Type; /*0x62f3df*/
        __asm /*0x62f3e5*/
        {
          fdiv [esp+0F0h+var_7C]
          fstp [esp+0F0h+var_C4]
          fld [esp+0F0h+var_9C]
          fmul [esp+0F0h+var_C4]
          fmul qword ptr [eax+2D0h]
          fstp [esp+0F0h+var_D0]
        }
        v18 = HIDWORD(v71); /*0x62f3ff*/
        v19 = LODWORD(v71); /*0x62f407*/
        Math::SinCos(v71); /*0x62f409*/
        __asm { fstp [esp+0F8h+var_D0] } /*0x62f40e*/
        Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v18, v19))); /*0x62f414*/
        __asm /*0x62f419*/
        {
          fstp [esp+100h+var_BC]
          fld [esp+100h+var_D0]
        }
        __asm { fstp [esp+0F0h+var_B8] }
        v73 = 0; /*0x62f43b*/
        v20 = TransformMatrix3x4Point(v95, (float *)v97.m_Data, (float *)&v73); /*0x62f443*/
        v73 = *(_DWORD *)v20; /*0x62f44f*/
        v67 = NAN; /*0x62f453*/
        v74 = v20[1]; /*0x62f458*/
        v21 = v20[2]; /*0x62f45c*/
        _EAX = this->Type; /*0x62f45f*/
        v75 = v21; /*0x62f465*/
        __asm /*0x62f469*/
        {
          fld qword ptr [eax+2D8h]
          fld [esp+0F8h+var_C0]
          fmul st, st(1)
          fstp [esp+0F8h+var_B4]
          fld [esp+0F8h+var_BC]
          fmul st, st(1)
        }
        v83 = v76; /*0x62f483*/
        __asm /*0x62f48d*/
        {
          fstp [esp+0F8h+var_B0]
          fld [esp+0F8h+var_B8]
        }
        __asm { fmul st, st(1) }
        v84 = v77; /*0x62f4a1*/
        __asm { fstp [esp+0F8h+var_AC] } /*0x62f4a5*/
        __asm { fstp st }
        v85 = v78; /*0x62f4af*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4c5*/
        LODWORD(v79) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4d4*/
        v80 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f4ef*/
        _EAX = this->Type; /*0x62f4f3*/
        __asm /*0x62f4f9*/
        {
          fild [esp+0F0h+var_A0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
          fild dword ptr [esp+0F0h+var_A8]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
          fstp [esp+0F0h+var_5C]
          fild dword ptr [esp+0F0h+var_D0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E0h]
        }
        __asm { fstp [esp+0F0h+var_58] }
        __asm
        {
          fadd [esp+0F0h+var_B4]
          fld [esp+0F0h+var_5C]
          fadd [esp+0F0h+var_90]
        }
        v24 = this->?[1]; /*0x62f560*/
        v90[3] = this->?[0]; /*0x62f563*/
        v90[4] = v24; /*0x62f56a*/
        v25 = this->?[2]; /*0x62f571*/
        __asm /*0x62f574*/
        {
          fstp [esp+0F0h+var_90]
          fld [esp+0F0h+var_58]
          fadd [esp+0F0h+var_8C]
        }
        v90[5] = v25; /*0x62f583*/
        __asm { fstp [esp+0F0h+var_8C] } /*0x62f58a*/
        LOWORD(v26) = Math::RoundToInt(v1); /*0x62f58e*/
        __asm { fld [esp+0F0h+var_90] } /*0x62f593*/
        v27 = v26; /*0x62f597*/
        LOWORD(v28) = Math::RoundToInt(v1); /*0x62f599*/
        __asm { fld [esp+0F0h+var_8C] } /*0x62f59e*/
        v29 = v28; /*0x62f5a2*/
        LOWORD(v30) = Math::RoundToInt(v1); /*0x62f5a4*/
        v31 = v30; /*0x62f5ad*/
        v32 = Color::RGBFromFloat(v96, (int)&this->SpawnFrames, v72); /*0x62f5c5*/
        v33 = v32[1]; /*0x62f5ca*/
        v34 = *v32; /*0x62f5cd*/
        v35 = v32[2]; /*0x62f5cf*/
        v90[1] = v29 + v33; /*0x62f5d4*/
        Type = this->Type; /*0x62f5d8*/
        v90[0] = v27 + v34; /*0x62f5e2*/
        v90[2] = v31 + v35; /*0x62f5e6*/
        if ( Type->ParticleSystemTypeClass_field_0x294 == (IUnknown *)-1 ) /*0x62f5f4*/
        {
          v37 = 0.0; /*0x62f5f6*/
        }
        else
        {
          v38 = (ObjectClass *)__2_YAPAXI_Z(0x138u); /*0x62f5ff*/
          v37 = 0.0; /*0x62f604*/
          if ( v38 ) /*0x62f60b*/
          {
            v69 = COERCE_FLOAT( /*0x62f63e*/
                    ParticleClass::Construct(
                      v38,
                      v1,
                      *(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_3C[16]
                                + 4 * (int)this->Type->ParticleSystemTypeClass_field_0x294),
                      v90,
                      COERCE_FLOAT(v90),
                      (int)this));
            if ( v69 != 0.0 ) /*0x62f642*/
            {
              VectorClass::PushBackCopy((VectorClass *)this->Particles, &v69); /*0x62f64f*/
              v37 = v69; /*0x62f654*/
            }
          }
          else
          {
            v69 = 0.0; /*0x62f79a*/
          }
        }
        _ESI = (float *)(LODWORD(v37) + 268); /*0x62f65c*/
        v67 = NAN; /*0x62f669*/
        *(_DWORD *)(LODWORD(v37) + 268) = v73; /*0x62f66b*/
        *(float *)(LODWORD(v37) + 272) = v74; /*0x62f671*/
        *(float *)(LODWORD(v37) + 276) = v75; /*0x62f678*/
        v80 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, SLODWORD(v67), SHIDWORD(v67)); /*0x62f69e*/
        LODWORD(v79) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f6b4*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f6c3*/
        _EAX = this->Type; /*0x62f6c7*/
        __asm { fild dword ptr [esp+0F0h+var_D0] } /*0x62f6cd*/
        __asm
        {
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fild dword ptr [esp+0F8h+var_A8]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fstp [esp+0F8h+var_50]
          fild [esp+0F8h+var_A0]
          fmul ds:dbl_7E3570
          fsub ds:dbl_7E1738
          fmul qword ptr [eax+2E8h]
          fstp [esp+0F8h+var_4C]
          fadd dword ptr [esi]
          fstp dword ptr [esi]
        }
        *_ESI = _ET1; /*0x62f722*/
        __asm /*0x62f724*/
        {
          fld [esp+0F8h+var_50]
          fadd dword ptr [esi+4]
          fstp dword ptr [esi+4]
        }
        *(float *)(LODWORD(v37) + 272) = _ET1; /*0x62f72e*/
        __asm /*0x62f731*/
        {
          fld [esp+0F8h+var_4C]
          fadd dword ptr [esi+8]
          fstp dword ptr [esi+8]
        }
        *(float *)(LODWORD(v37) + 276) = _ET1; /*0x62f73b*/
        __asm /*0x62f73e*/
        {
          fld dword ptr [esi+8]
          fld dword ptr [esi+4]
          fld dword ptr [esi]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+0F8h+var_F8]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v67); /*0x62f75f*/
        __asm { fcom ds:dbl_7E2800 } /*0x62f764*/
        __asm { fnstsw ax }
        if ( (_AX & 0x4000) != 0 ) /*0x62f772*/
        {
          __asm { fstp st } /*0x62f7a5*/
          v45 = *_ESI; /*0x62f7a7*/
          v46 = *(float *)(LODWORD(v37) + 272); /*0x62f7a9*/
          v47 = *(float *)(LODWORD(v37) + 276); /*0x62f7ac*/
        }
        else
        {
          __asm /*0x62f774*/
          {
            fld dword ptr [esi]
            fdiv st, st(1)
            fstp [esp+0F0h+var_88]
            fld dword ptr [esi+4]
            fdiv st, st(1)
          }
          v45 = v86; /*0x62f781*/
          __asm { fstp [esp+0F0h+var_84] } /*0x62f785*/
          v46 = v87; /*0x62f789*/
          __asm /*0x62f78d*/
          {
            fdivr dword ptr [esi+8]
            fstp [esp+0F0h+var_80]
          }
          v47 = v88; /*0x62f794*/
        }
        *_ESI = v45; /*0x62f7af*/
        *(float *)(LODWORD(v37) + 272) = v46; /*0x62f7b1*/
        *(float *)(LODWORD(v37) + 276) = v47; /*0x62f7b4*/
        LODWORD(v71) = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x62f7ce*/
        _ECX = this->Type; /*0x62f7d2*/
        __asm /*0x62f7d8*/
        {
          fild dword ptr [esp+0F0h+var_D0]
          fmul ds:dbl_7E3570
          fadd [esp+0F0h+var_DC]
          fsub ds:dbl_7E1738
          fld qword ptr [ecx+2F0h]
          fmul ds:dbl_7E1738
          fmulp st(1), st
          fld st
          fld qword ptr [ecx+2F0h]
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x62f809*/
          __asm { fld qword ptr [ecx+2F0h] } /*0x62f80f*/
        else
          __asm { fld st } /*0x62f80b*/
        __asm /*0x62f815*/
        {
          fld qword ptr [ecx+2E8h]
          fchs
          fstp [esp+0F0h+var_D0]
          fcomp [esp+0F0h+var_D0]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x62f82a*/
        {
          __asm /*0x62f847*/
          {
            fstp st
            fld [esp+0F0h+var_D0]
          }
        }
        else
        {
          __asm /*0x62f82c*/
          {
            fld st
            fld qword ptr [ecx+2F0h]
            fcompp
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x62f83b*/
          {
            __asm /*0x62f83d*/
            {
              fstp st
              fld qword ptr [ecx+2F0h]
            }
          }
        }
        __asm { fstp [esp+0F0h+var_DC] } /*0x62f84d*/
        _ECX = *(_DWORD *)(LODWORD(v37) + 172); /*0x62f851*/
        __asm /*0x62f85b*/
        {
          fld [esp+0F0h+var_DC]
          fadd dword ptr [ecx+2FCh]
        }
        v53 = ++v70 < v82; /*0x62f86a*/
        __asm { fstp dword ptr [ebx+0E4h] } /*0x62f870*/
        *(float *)(LODWORD(v37) + 228) = _ET1; /*0x62f870*/
      }
      while ( v53 ); /*0x62f876*/
    }
    if ( HIBYTE(this->Type->ParticleSystemTypeClass_field_0x308) ) /*0x62f882*/
    {
      v55 = (char *)__2_YAPAXI_Z(0x5Cu); /*0x62f892*/
      if ( v55 ) /*0x62f89c*/
      {
        *(_QWORD *)&v67 = 1056964608; /*0x62f8a4*/
        v66[3] = 1; /*0x62f8a9*/
        v66[2] = 0; /*0x62f8ab*/
        v66[1] = 10; /*0x62f8ad*/
        HIBYTE(v66[0]) = v56; /*0x62f8af*/
        LOWORD(v70) = 0; /*0x62f8b0*/
        v58 = v57; /*0x62f8bf*/
        LOWORD(v66[0]) = 0; /*0x62f8c5*/
        LOWORD(v68) = 0; /*0x62f8c8*/
        v65 = v66; /*0x62f8cc*/
        BYTE2(v66[0]) = 0; /*0x62f8d1*/
        HIBYTE(v64) = v58; /*0x62f8db*/
        LOWORD(v65) = 0; /*0x62f8dc*/
        BYTE2(v65) = 0; /*0x62f8e5*/
        LOWORD(v64) = this->Type->ParticleSystemTypeClass_field_0x308; /*0x62f8fa*/
        BYTE2(v64) = BYTE2(this->Type->ParticleSystemTypeClass_field_0x308); /*0x62f900*/
        TimerClass::Construct( /*0x62f940*/
          v55,
          this->?[0],
          this->?[1],
          this->?[2],
          this->SpawnFrames,
          this->Lifetime,
          this->SparkSpawnFrames,
          0,
          1,
          v64,
          (int)v65,
          v66[0],
          10,
          0,
          1,
          1056964608,
          0);
      }
    }
    this->__pad_E5[19] = 1; /*0x62f945*/
  }
  Owner = this->Owner; /*0x62f94c*/
  for ( i = 0; i < (int)Owner; ++i ) /*0x62f956*/
  {
    ParticleClass::Dispatch(*(ParticleClass **)(this->TargetCoords[0] + 4 * i)); /*0x62f961*/
    Owner = this->Owner; /*0x62f966*/
  }
  for ( j = (int)this->Owner - 1; j >= 0; --j ) /*0x62f978*/
  {
    v62 = *(_BYTE **)(this->TargetCoords[0] + 4 * j); /*0x62f980*/
    LOBYTE(Owner) = v62[305]; /*0x62f983*/
    if ( (_BYTE)Owner ) /*0x62f98b*/
      LOBYTE(Owner) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v62 + 248))(v62); /*0x62f98f*/
  }
  return (char)Owner; /*0x62f998*/
}



// ==== 0x0062F9A0  ObjectClass::UpdateBuildingDamageParticles  this=ParticleSystemClass  sig=csp ====
char __thiscall UpdateBuildingDamageParticles(char *this)
{
  int i; // ebx
  float *v3; // edi
  int j; // edi
  _BYTE *v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // ebx
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  int v13; // eax
  int v14; // edi
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int *v23; // edi
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
  int v39; // [esp+1Eh] [ebp-48h]
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
  int v50; // [esp+5Ah] [ebp-Ch] BYREF
  int v51; // [esp+5Eh] [ebp-8h]
  int v52; // [esp+62h] [ebp-4h]

  for ( i = this->alignmentPadding - 1; i >= 0; --i ) /*0x62f9b5*/
  {
    v3 = *(float **)(this->nextObject + 4 * i); /*0x62f9bd*/
    ParticleClass::Dispatch((int)v3); /*0x62f9c2*/
    BuildingClass::AdjustHeight(v3); /*0x62f9c9*/
  }
  for ( j = this->alignmentPadding - 1; j >= 0; --j ) /*0x62f9d8*/
  {
    v5 = *(_BYTE **)(this->nextObject + 4 * j); /*0x62f9e0*/
    if ( v5[305] ) /*0x62f9e3*/
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 248))(v5); /*0x62f9ef*/
  }
  v37 = 0; /*0x62f9fe*/
  v6 = AbstractClass::IsTechnoType(*((void **)this + 56)); /*0x62fa03*/
  v7 = v6; /*0x62fa08*/
  if ( v6 ) /*0x62fa0c*/
  {
    if ( !v6[144] ) /*0x62fa12*/
      goto LABEL_13; /*0x62fa12*/
    if ( *((_DWORD *)v6 + 173) && TimerClass::Active((int)(v6 + 904)) ) /*0x62fa34*/
    {
      v8 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)v7 + 173) + 72))(*((_DWORD *)v7 + 173), &v50); /*0x62fa51*/
      v9 = *v8; /*0x62fa5c*/
      v43 = v8[1]; /*0x62fa61*/
      v44 = v8[2]; /*0x62fa6a*/
      v50 = *((_DWORD *)v7 + 39); /*0x62fa70*/
      v10 = *((_DWORD *)v7 + 40); /*0x62fa78*/
      LODWORD(v45) = v9 - v50; /*0x62fa7b*/
      v11 = *((_DWORD *)v7 + 41); /*0x62fa83*/
      HIDWORD(v45) = v43 - v10; /*0x62fa88*/
      v46 = v44 - v11; /*0x62fa92*/
      v12 = Math::Sqrt( /*0x62fabb*/
              (double)(v9 - v50) * (double)(v9 - v50)
            + (double)(v43 - v10) * (double)(v43 - v10)
            + (double)(v44 - v11) * (double)(v44 - v11));
      v40 = Math::RoundToInt(v12); /*0x62face*/
      v13 = *((_DWORD *)v7 + 40); /*0x62fad2*/
      v14 = *((_DWORD *)v7 + 41); /*0x62fad5*/
      v47 = *((_DWORD *)v7 + 39); /*0x62fadf*/
      v48 = v13; /*0x62fae3*/
      v38 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)v7 + 452, &v42) - 0x3FFF) * -0.00009587672516830327; /*0x62fb03*/
      v45 = (double)v40; /*0x62fb15*/
      v41 = (double)v48; /*0x62fb1d*/
      v15 = Math::SinCos(v38); /*0x62fb21*/
      LODWORD(v41) = Math::RoundToInt(v41 - v15 * v45); /*0x62fb37*/
      v16 = Math::ArcTan2(v38); /*0x62fb41*/
      v17 = Math::RoundToInt(v16 * v45 + (double)v47); /*0x62fb51*/
      Coord::Subtract(&v50, v17, SLODWORD(v41), v14); /*0x62fb61*/
      v18 = v51; /*0x62fb6a*/
      v19 = *(_DWORD *)this; /*0x62fb77*/
      this->SpawnFrames = v50; /*0x62fb79*/
      v20 = v52; /*0x62fb7b*/
      this->occupant = v18; /*0x62fb7f*/
      this->SparkSpawnFrames = v20; /*0x62fb84*/
      v21 = (*(int (__thiscall **)(_BYTE *, int *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 176))( /*0x62fb9b*/
              v7,
              &v50,
              0,
              0,
              0,
              0);
      (*(void (__thiscall **)(char *, int))(v19 + 436))(this, v21); /*0x62fba4*/
      v37 = 1; /*0x62fbaa*/
    }
    if ( !v7[144] ) /*0x62fbaf*/
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
    if ( !((int)dword_A8ED84 % *(_DWORD *)(this->q02B + 668)) /*0x62fc0e*/
      || (v22 = (int)dword_A8ED84 / 3, !((int)dword_A8ED84 % 3)) && (LOBYTE(v22) = v37) != 0 )
    {
      v23 = (int *)(this + 156); /*0x62fc1e*/
      v24 = (int)dword_A8ED84 % 500; /*0x62fc27*/
      v25 = this->q027 - this->SpawnFrames; /*0x62fc2d*/
      v26 = this->q0A4; /*0x62fc3c*/
      v51 = this->owningHouseIndex - this->occupant; /*0x62fc3f*/
      v39 = 3; /*0x62fc79*/
      if ( Math::Sqrt((double)(v25 * v25 + v51 * v51 + (v26 - this->SparkSpawnFrames) * (v26 - this->SparkSpawnFrames))) >= 200.0 ) /*0x62fc86*/
        v39 = 1; /*0x62fc88*/
      v27 = Math::RoundToInt((double)(12 * word_B46254[v24]) / ((double)v39 * 3.0)); /*0x62fcb2*/
      v28 = this->SpawnFrames; /*0x62fcbd*/
      HIDWORD(v45) = this->occupant; /*0x62fcc3*/
      v29 = v27; /*0x62fcc9*/
      LODWORD(v45) = v28; /*0x62fccb*/
      v42 = *v23; /*0x62fcd1*/
      v43 = this->owningHouseIndex; /*0x62fcd8*/
      v52 = this->q0A4; /*0x62fce3*/
      v30 = CalcMathFacing8(&v42, &v45); /*0x62fceb*/
      v31 = v29 * dword_836704[v30] + this->SpawnFrames; /*0x62fd0c*/
      v32 = v29 * dword_836724[v30] + this->occupant; /*0x62fd14*/
      v52 = this->SparkSpawnFrames; /*0x62fd1c*/
      v33 = *v23; /*0x62fd20*/
      v51 = v32; /*0x62fd22*/
      v34 = this->owningHouseIndex; /*0x62fd26*/
      v35 = this->q0A4; /*0x62fd29*/
      v47 = v33; /*0x62fd2c*/
      v48 = v34; /*0x62fd30*/
      v50 = v31; /*0x62fd3c*/
      v49 = v35 + 1; /*0x62fd47*/
      LOBYTE(v22) = ParticleClass::CreateInstance(&v47, &v50, 4); /*0x62fd4b*/
    }
  }
  return v22; /*0x62fd50*/
}



// ==== 0x0062FD60  ParticleSystemClass::Update  this=ParticleSystemClass  sig=csp ====
char __thiscall ParticleSystemClass::Update(ParticleSystemClass *this)
{
  int v2; // eax
  int Owner; // eax

  switch ( *(_DWORD *)(this->Type + 692) ) /*0x62fd74*/
  {
    case 0: /*0x62fd74*/
      UpdateBuildingParticleSystem((TechnoClass *)this); /*0x62fd7d*/
      break; /*0x62fd82*/
    case 1: /*0x62fd74*/
      ParticleSystemClass::UpdateAllParticles(this); /*0x62fd86*/
      break; /*0x62fd8b*/
    case 2: /*0x62fd74*/
      UpdateBuildingDamageParticles((char *)this); /*0x62fd8f*/
      break; /*0x62fd94*/
    case 3: /*0x62fd74*/
      UpdateProductionParticleSystem((TechnoClass *)this); /*0x62fd98*/
      break; /*0x62fd9d*/
    case 4: /*0x62fd74*/
      ParticleSystemClass::SpawnParticle(this); /*0x62fda1*/
      break; /*0x62fda1*/
    default:
      break;
  }
  v2 = *(_DWORD *)&this->__pad_E5[7] - 1; /*0x62fda6*/
  *(_DWORD *)&this->__pad_E5[7] = v2; /*0x62fdad*/
  if ( !v2 ) /*0x62fdb3*/
    (*(void (__thiscall **)(ParticleSystemClass *))(this->ptr_0 + 248))(this); /*0x62fdb9*/
  LOBYTE(Owner) = this->isAliveFlag[0]; /*0x62fdbf*/
  if ( (_BYTE)Owner ) /*0x62fdc7*/
  {
    LOBYTE(Owner) = this->__pad_E5[19]; /*0x62fdc9*/
    if ( (_BYTE)Owner ) /*0x62fdd1*/
    {
      Owner = this->Owner; /*0x62fdd3*/
      if ( !Owner ) /*0x62fddb*/
      {
        (*(void (__thiscall **)(ParticleSystemClass *))(this->ptr_0 + 212))(this); /*0x62fde1*/
        this->isAliveFlag[0] = 0; /*0x62fde7*/
        LOBYTE(Owner) = stru_B0F698.Capacity; /*0x62fdee*/
        if ( stru_B0F698.Count < stru_B0F698.Capacity /*0x62fe28*/
          || (stru_B0F698.IsAllocated[0] || !stru_B0F698.Capacity)
          && stru_B0F698.CapacityIncrement > 0
          && (LOBYTE(Owner) = (*(int (__thiscall **)(DynamicVectorClass *, int, _DWORD))(stru_B0F698.ptr_0 + 8))(
                                &stru_B0F698,
                                stru_B0F698.Capacity + stru_B0F698.CapacityIncrement,
                                0),
              (_BYTE)Owner) )
        {
          Owner = stru_B0F698.Count++; /*0x62fe30*/
          *(_DWORD *)(stru_B0F698.Items + 4 * Owner) = this; /*0x62fe3f*/
        }
      }
    }
  }
  return Owner; /*0x62fe42*/
}



// ==== 0x0062FE60  ParticleSystemClass::Draw  this=ParticleSystemClass  sig=csp ====
BOOL __thiscall ParticleSystemClass::Draw(ParticleSystemClass *this)
{
  return this->__pad_E5[19] && !this->Owner; /*0x62fe79*/
}



// ==== 0x0062FE80  ParticleSystemClass::StubReturn2  this=ParticleSystemClass  sig=csp ====
int ParticleSystemClass::StubReturn2(ParticleSystemClass *this)
{
  return 2; /*0x62fe85*/
}



// ==== 0x0062FE90  ParticleSystemClass::UpdateSystem  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::UpdateSystem(ParticleSystemClass *this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  char *Owner; // ecx
  char *v7; // ecx
  int result; // eax

  Object::Unlink((ObjectClass *)this); /*0x62fe9f*/
  v4 = this->Particles[0]; /*0x62fea4*/
  a3 = a2; /*0x62feb7*/
  v5 = (*(int (__thiscall **)(int *, int *))(v4 + 16))(this->Particles, &a3); /*0x62febb*/
  if ( v5 != -1 ) /*0x62fec1*/
  {
    Owner = (char *)this->Owner; /*0x62fec3*/
    if ( v5 < (int)Owner ) /*0x62fec8*/
    {
      v7 = Owner - 1; /*0x62feca*/
      for ( this->Owner = v7; /*0x62fed0*/
            v5 < (int)this->Owner;
            *(_DWORD *)(this->TargetCoords[0] + 4 * v5 - 4) = *(_DWORD *)(this->TargetCoords[0] + 4 * v5) )
      {
        ++v5; /*0x62fed5*/
      }
    }
  }
  result = 0; /*0x62feea*/
  if ( (ParticleSystemTypeClass *)a2 == this->Type ) /*0x62feee*/
    this->Type = 0; /*0x62fef0*/
  if ( a2 == *(_DWORD *)&this->TimeToDie ) /*0x62fefc*/
    *(_DWORD *)&this->TimeToDie = 0; /*0x62fefe*/
  if ( a2 == this->SpotlightRadius ) /*0x62ff0a*/
  {
    this->__pad_E5[19] = 1; /*0x62ff0c*/
    this->SpotlightRadius = 0; /*0x62ff13*/
  }
  return result; /*0x62ff19*/
}



// ==== 0x0062FF20  ParticleSystemClass::Write  this=ParticleSystemClass  sig=csp ====
int __thiscall ParticleSystemClass::Write(ParticleSystemClass *this, int a2, int *a3)
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
  result = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x62ff2f*/
  if ( result >= 0 ) /*0x62ff38*/
  {
    if ( v4 ) /*0x62ff40*/
    {
      ObjectClass::Init((ObjectClass *)v4, (int)&a3); /*0x62ff49*/
      ParticleSystemClass::resetSystemState((ParticleSystemClass *)(v4 + 188), 0, 0); /*0x62ff58*/
      *(_DWORD *)(v4 + 188) = &DynamicVectorClass<ParticleClass *>::`vftable'; /*0x62ff5d*/
      *(_DWORD *)(v4 + 208) = 10; /*0x62ff63*/
      *(_DWORD *)(v4 + 204) = 0; /*0x62ff6a*/
      *(_DWORD *)v4 = &ParticleSystemClass::`vftable'; /*0x62ff6d*/
      *(_DWORD *)(v4 + 4) = &ParticleSystemClass::`vftable'; /*0x62ff73*/
      *(_DWORD *)(v4 + 8) = &ParticleSystemClass::`vftable'; /*0x62ff7a*/
      *(_DWORD *)(v4 + 12) = &off_7EFB70; /*0x62ff81*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 172)); /*0x62ff94*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 228)); /*0x62ffa5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4 + 224)); /*0x62ffb6*/
    v6 = *v3; /*0x62ffbb*/
    a2 = 0; /*0x62ffc7*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v6 + 12))(v3, &a2, 4, 0); /*0x62ffcb*/
    if ( result >= 0 ) /*0x62ffd0*/
    {
      if ( a2-- == 0 ) /*0x62ffdd*/
      {
LABEL_14:
        for ( i = 0; i < *(_DWORD *)(v4 + 204); ++i ) /*0x630065*/
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v4 + 192) + 4 * i)); /*0x630076*/
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


