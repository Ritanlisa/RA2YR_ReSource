// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00550000  Game::loadCampaignData  this=VOID_PTR  sig=csp ====
int __thiscall sub_550000(void *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  void *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_TimerPool; g_TimerPool; result = g_TimerPool ) /*0x550008*/
  {
    v2 = *(void **)dword_ABC87C; /*0x550010*/
    if ( *(_DWORD *)dword_ABC87C ) /*0x550010*/
    {
      v4 = *(void **)dword_ABC87C; /*0x550026*/
      v3 = (*(int (__thiscall **)(int *, void **))(dword_ABC878 + 16))(&dword_ABC878, &v4); /*0x55002a*/
      if ( v3 != -1 && v3 < g_TimerPool && v3 < --g_TimerPool ) /*0x550045*/
      {
        do /*0x55005d*/
        {
          ++v3; /*0x55004d*/
          *((_DWORD *)dword_ABC87C + v3 - 1) = *((_DWORD *)dword_ABC87C + v3); /*0x550051*/
        }
        while ( v3 < g_TimerPool ); /*0x55005d*/
      }
      __3_YAXPAX_Z(v2); /*0x550060*/
    }
  }
  return result; /*0x550073*/
}


// ==== 0x00550080  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_550080(ObjectClass **Block)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  ObjectClass *v5; // edx
  int v6; // edx
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = (int)*(Block + 2); /*0x550086*/
  v3 = (int)*(Block + 4); /*0x550089*/
  if ( v2 == -1 ) /*0x55008f*/
  {
LABEL_4:
    if ( v3 ) /*0x5500a1*/
      goto LABEL_7; /*0x5500a1*/
    goto LABEL_5; /*0x5500a1*/
  }
  if ( (int)MEMORY[0xA8ED84] - v2 < v3 ) /*0x55009b*/
  {
    v3 -= (int)MEMORY[0xA8ED84] - v2; /*0x55009d*/
    goto LABEL_4; /*0x55009d*/
  }
LABEL_5:
  v4 = (int)*(Block + 5); /*0x5500a3*/
  if ( v4 ) /*0x5500a8*/
  {
    v5 = (ObjectClass *)((char *)*Block + (_DWORD)*(Block + 6)); /*0x5500af*/
    *((_BYTE *)Block + 4) = 1; /*0x5500b1*/
    *Block = v5; /*0x5500b5*/
    v6 = v8[2]; /*0x5500bd*/
    *(Block + 2) = (ObjectClass *)MEMORY[0xA8ED84]; /*0x5500c1*/
    *(Block + 3) = (ObjectClass *)v6; /*0x5500c4*/
    *(Block + 4) = (ObjectClass *)v4; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
LABEL_7:
  *((_BYTE *)Block + 4) = 0; /*0x5500cc*/
LABEL_8:
  if ( *((_BYTE *)Block + 80) ) /*0x5500d0*/
    *((_BYTE *)Block + 81) = *((_BYTE *)Block + 81) == 0; /*0x5500df*/
  if ( (int)*Block >= (int)*(Block + 19) && Block ) /*0x5500ed*/
  {
    v8[0] = Block; /*0x5500fe*/
    v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x550102*/
    if ( v7 != -1 && v7 < g_TimerPool && v7 < --g_TimerPool ) /*0x55011d*/
    {
      do /*0x550135*/
      {
        ++v7; /*0x550125*/
        *((_DWORD *)dword_ABC87C + v7 - 1) = *((_DWORD *)dword_ABC87C + v7); /*0x550129*/
      }
      while ( v7 < g_TimerPool ); /*0x550135*/
    }
    __3_YAXPAX_Z(Block); /*0x550138*/
  }
}


// ==== 0x00550150  ObjectClass::UpdateCameoProduction  this=ObjectClass  sig=csp ====
void sub_550150()
{
  int v0; // edi
  int v1; // ebp
  int *v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  v0 = g_TimerPool - 1; /*0x550159*/
  if ( g_TimerPool - 1 >= 0 ) /*0x55015e*/
  {
    v1 = v8[2]; /*0x550165*/
    do /*0x550170*/
    {
      v2 = (int *)*((_DWORD *)dword_ABC87C + v0); /*0x550170*/
      v3 = v2[2]; /*0x550173*/
      v4 = v2[4]; /*0x550176*/
      if ( v3 != -1 ) /*0x55017c*/
      {
        if ( (int)MEMORY[0xA8ED84] - v3 >= v4 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v4 -= (int)MEMORY[0xA8ED84] - v3; /*0x55018a*/
      }
      if ( v4 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
LABEL_7:
      v5 = v2[5]; /*0x550190*/
      if ( !v5 ) /*0x550195*/
      {
LABEL_9:
        *((_BYTE *)v2 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      v6 = v2[6] + *v2; /*0x55019c*/
      *((_BYTE *)v2 + 4) = 1; /*0x55019e*/
      *v2 = v6; /*0x5501a2*/
      v2[2] = (int)MEMORY[0xA8ED84]; /*0x5501a9*/
      v2[3] = v1; /*0x5501ac*/
      v2[4] = v5; /*0x5501af*/
LABEL_10:
      if ( *((_BYTE *)v2 + 80) ) /*0x5501b8*/
        *((_BYTE *)v2 + 81) = *((_BYTE *)v2 + 81) == 0; /*0x5501c7*/
      if ( *v2 >= v2[19] && v2 ) /*0x5501d5*/
      {
        v8[0] = v2; /*0x5501e6*/
        v7 = (*(int (__thiscall **)(int *, _DWORD *))(dword_ABC878 + 16))(&dword_ABC878, v8); /*0x5501ea*/
        if ( v7 != -1 && v7 < g_TimerPool && v7 < --g_TimerPool ) /*0x550205*/
        {
          do /*0x55021d*/
          {
            ++v7; /*0x55020d*/
            *((_DWORD *)dword_ABC87C + v7 - 1) = *((_DWORD *)dword_ABC87C + v7); /*0x550211*/
          }
          while ( v7 < g_TimerPool ); /*0x55021d*/
        }
        __3_YAXPAX_Z(v2); /*0x550220*/
      }
      --v0; /*0x550228*/
    }
    while ( v0 >= 0 ); /*0x550170*/
  }
}


// ==== 0x00550240  ObjectClass::Helper  this=ObjectClass  sig=csp ====
char sub_550240()
{
  char result; // al
  int i; // esi

  result = g_TimerPool; /*0x550240*/
  for ( i = g_TimerPool - 1; i >= 0; --i ) /*0x55024b*/
    result = TacticalClass::RenderCells(*((_DWORD *)dword_ABC87C + i)); /*0x550256*/
  return result; /*0x55025e*/
}


// ==== 0x00550260  TacticalClass::RenderCells  this=TacticalClass  sig=csp ====
char __thiscall TacticalClass_RenderCells(int this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  unsigned int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // al
  double v13; // st7
  int v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  int v21; // esi
  int v22; // ecx
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // esi
  int v30; // esi
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // esi
  char v38; // [esp+57h] [ebp-3Dh]
  __int16 v39; // [esp+58h] [ebp-3Ch] BYREF
  char v40; // [esp+5Ah] [ebp-3Ah]
  int v41; // [esp+5Ch] [ebp-38h]
  int v42; // [esp+60h] [ebp-34h]
  int v43; // [esp+64h] [ebp-30h]
  int v44; // [esp+68h] [ebp-2Ch]
  int v45; // [esp+6Ch] [ebp-28h]
  int v46; // [esp+70h] [ebp-24h]
  int v47; // [esp+74h] [ebp-20h] BYREF
  int v48; // [esp+78h] [ebp-1Ch]
  int v49; // [esp+7Ch] [ebp-18h] BYREF
  int v50; // [esp+80h] [ebp-14h]
  int v51; // [esp+84h] [ebp-10h] BYREF
  int v52; // [esp+88h] [ebp-Ch]
  int v53; // [esp+8Ch] [ebp-8h] BYREF
  int v54; // [esp+90h] [ebp-4h]

  v2 = *(_DWORD *)(this + 76); /*0x550268*/
  if ( v2 > 0 )
  {
    if ( *(_BYTE *)(this + 32) )
    {
      LOBYTE(v2) = PrepareTacticalClassCellTransform((int *)this); /*0x55027b*/
    }
    else
    {
      if ( (dword_A8ED54[46809] & 1) == 0 ) /*0x55028f*/
      {
        dword_A8ED54[46714] = -1; /*0x55029c*/
        dword_A8ED54[46713] = 0; /*0x5502a4*/
        dword_A8ED54[46716] = 0; /*0x5502ae*/
        dword_A8ED54[46715] = 1; /*0x5502b7*/
        dword_A8ED54[46718] = -1; /*0x5502be*/
        dword_A8ED54[46717] = 0; /*0x5502c9*/
        dword_A8ED54[46719] = 0; /*0x5502ce*/
        dword_A8ED54[46721] = 1; /*0x5502d5*/
        dword_A8ED54[46723] = 0; /*0x5502dc*/
        dword_A8ED54[46720] = 1; /*0x5502e4*/
        dword_A8ED54[46725] = -1; /*0x5502ea*/
        dword_A8ED54[46722] = 0; /*0x5502f6*/
        dword_A8ED54[46727] = 1; /*0x5502fc*/
        dword_A8ED54[46724] = 1; /*0x550309*/
        dword_A8ED54[46729] = -1; /*0x55030f*/
        dword_A8ED54[46726] = 0; /*0x550318*/
        dword_A8ED54[46728] = 0; /*0x55031e*/
        dword_A8ED54[46730] = 0; /*0x550324*/
        dword_A8ED54[46731] = 0; /*0x55032a*/
        dword_A8ED54[46733] = 0; /*0x55032f*/
        dword_A8ED54[46732] = 1; /*0x55033e*/
        dword_A8ED54[46735] = 1; /*0x550344*/
        dword_A8ED54[46734] = -1; /*0x55034e*/
        dword_A8ED54[46737] = 0; /*0x550354*/
        dword_A8ED54[46736] = 0; /*0x55035e*/
        dword_A8ED54[46739] = -1; /*0x550364*/
        dword_A8ED54[46738] = -1; /*0x55036f*/
        dword_A8ED54[46741] = -1; /*0x550375*/
        LOBYTE(dword_A8ED54[46809]) |= 1u; /*0x550389*/
        dword_A8ED54[46740] = 0; /*0x55038f*/
        dword_A8ED54[46742] = 0; /*0x550395*/
        dword_A8ED54[46743] = 1; /*0x55039b*/
        dword_A8ED54[46744] = 0; /*0x5503a0*/
        atexit(nullsub_21); /*0x5503a6*/
      }
      LOBYTE(v2) = *(_BYTE *)(this + 81); /*0x5503ae*/
      if ( !(_BYTE)v2 )
      {
        v3 = *(_DWORD *)(this + 36); /*0x5503bc*/
        v44 = *(_DWORD *)(this + 48); /*0x5503c5*/
        v43 = v3; /*0x5503c9*/
        v4 = Math::CalcAngle((double)*(int *)(this + 40) - (double)*(int *)(this + 52), (double)v44 - (double)v3); /*0x5503e8*/
        LOWORD(v44) = Math::RoundToInt((v4 - 1.570796326794897) * -10430.06004058427); /*0x550401*/
        v5 = ((((unsigned int)v44 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], (_DWORD *)(this + 36), &v53); /*0x55041f*/
        Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], (_DWORD *)(this + 48), &v51); /*0x550430*/
        v6 = *(_DWORD *)(this + 60) - ZCoordToScreenY(*(_DWORD *)(this + 44)) - 2; /*0x550445*/
        v7 = ZCoordToScreenY(*(_DWORD *)(this + 56)); /*0x550448*/
        v39 = 0; /*0x550452*/
        v8 = -2 - v7; /*0x550457*/
        LOBYTE(v7) = *(_BYTE *)(this + 68); /*0x550459*/
        v40 = 0; /*0x550463*/
        v44 = 0; /*0x550468*/
        v38 = 1; /*0x550470*/
        if ( (_BYTE)v7 || *(_BYTE *)(this + 69) || *(_BYTE *)(this + 70) )
        {
          v44 = Random::Range( /*0x5504a6*/
                  &MEMORY[0x87F7E8][7400],
                  -*(unsigned __int8 *)(this + 71),
                  *(unsigned __int8 *)(this + 71));
          v41 = Random::Range( /*0x5504bf*/
                  &MEMORY[0x87F7E8][7400],
                  -*(unsigned __int8 *)(this + 72),
                  *(unsigned __int8 *)(this + 72));
          *(float *)&v42 = COERCE_FLOAT( /*0x5504d8*/
                             Random::Range(
                               &MEMORY[0x87F7E8][7400],
                               -*(unsigned __int8 *)(this + 73),
                               *(unsigned __int8 *)(this + 73)));
          v9 = *(unsigned __int8 *)(this + 68) + v44 < 0 ? 0 : *(unsigned __int8 *)(this + 68) + v44;
          if ( v9 > 255 ) /*0x5504f6*/
            v9 = 255; /*0x5504f8*/
          v41 = *(unsigned __int8 *)(this + 69) + v41 < 0 ? 0 : *(unsigned __int8 *)(this + 69) + v41;
          if ( v41 > 255 ) /*0x55051c*/
            v41 = 255; /*0x55051e*/
          v42 = *(unsigned __int8 *)(this + 70) + v42 < 0 ? 0 : *(unsigned __int8 *)(this + 70) + v42;
          v10 = v42; /*0x55053a*/
          if ( v42 > 255 ) /*0x550545*/
          {
            v10 = 255; /*0x550547*/
            v42 = 255; /*0x55054c*/
          }
          LOBYTE(v39) = v9; /*0x550556*/
          v43 = (v41 >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174])) /*0x550584*/
              | (v10 >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
          HIBYTE(v39) = v41; /*0x55059a*/
          v44 = (v9 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) | v43; /*0x5505aa*/
          v40 = v42; /*0x5505ae*/
        }
        else
        {
          v38 = 0; /*0x550485*/
        }
        v11 = *(_BYTE *)(this + 66); /*0x5505b2*/
        v43 = this + 65; /*0x5505b8*/
        *(float *)&v42 = 1.0; /*0x5505bc*/
        LOBYTE(v49) = *(_BYTE *)(this + 65); /*0x5505cd*/
        LOBYTE(v47) = (_BYTE)v49 != 0; /*0x5505d1*/
        LOBYTE(v46) = v11 != 0; /*0x5505d8*/
        v12 = *(_BYTE *)(this + 67); /*0x5505dc*/
        LOBYTE(v45) = v12 != 0; /*0x5505e4*/
        if ( *(_BYTE *)(this + 82) ) /*0x5505e8*/
        {
          v13 = *(float *)(this + 84) - *(float *)(this + 88); /*0x5505f5*/
          v41 = *(_DWORD *)(this + 76); /*0x5505f8*/
          *(float *)&v42 = v13 * (double)(v41 - *(_DWORD *)this) / (double)v41 + *(float *)(this + 88); /*0x55060d*/
        }
        if ( MEMORY[0x87F7E8][539876] ) /*0x550619*/
        {
          if ( *(_BYTE *)(this + 80) ) /*0x55061f*/
          {
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))( /*0x550655*/
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v53,
              &v51,
              v43,
              v6,
              v8,
              0,
              1,
              1,
              1,
              v42);
            LOBYTE(v2) = v38; /*0x550658*/
            if ( v38 ) /*0x55065e*/
            {
              v14 = 4 * v5; /*0x55066c*/
              v15 = dword_A8ED54[v14 + 46714]; /*0x55067c*/
              v49 = v51 + dword_A8ED54[v14 + 46713]; /*0x550688*/
              v16 = v53 + dword_A8ED54[v14 + 46713]; /*0x550698*/
              v50 = v52 + v15; /*0x55069e*/
              v17 = dword_A8ED54[v14 + 46714]; /*0x5506a2*/
              v47 = v16; /*0x5506a8*/
              v48 = v54 + v17; /*0x5506bb*/
              (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))( /*0x5506d2*/
                MEMORY[0x87F7E8][7883],
                &MEMORY[0x87F7E8][7662],
                &v47,
                &v49,
                &v39,
                v6,
                v8,
                0,
                1,
                1,
                1,
                1065353216);
              v18 = dword_A8ED54[v14 + 46716]; /*0x5506e9*/
              v49 = v51 + dword_A8ED54[v14 + 46715]; /*0x5506ef*/
              v19 = dword_A8ED54[v14 + 46715]; /*0x5506f3*/
              v20 = dword_A8ED54[v14 + 46716]; /*0x5506f9*/
              v47 = v53 + v19; /*0x55070e*/
              v50 = v52 + v18; /*0x550719*/
              v48 = v54 + v20; /*0x550734*/
              LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))( /*0x550740*/
                             MEMORY[0x87F7E8][7883],
                             &MEMORY[0x87F7E8][7662],
                             &v47,
                             &v49,
                             &v39,
                             v6,
                             v8,
                             0,
                             1,
                             1,
                             1,
                             1065353216);
            }
          }
          else if ( v38 ) /*0x550751*/
          {
            v21 = 4 * v5; /*0x55075f*/
            v22 = dword_A8ED54[v21 + 46714]; /*0x55076a*/
            v23 = dword_A8ED54[v21 + 46713]; /*0x550772*/
            v49 = v51 + v23; /*0x550778*/
            v24 = v23 + v53; /*0x550786*/
            v25 = v42; /*0x550788*/
            v50 = v52 + v22; /*0x55078c*/
            v26 = dword_A8ED54[v21 + 46714]; /*0x550790*/
            v47 = v24; /*0x550796*/
            v48 = v54 + v26; /*0x5507a6*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] /*0x5507bd*/
                                                                                             + 64))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              &v39,
              v42,
              v6,
              v8);
            v27 = dword_A8ED54[v21 + 46716]; /*0x5507d0*/
            v49 = v51 + dword_A8ED54[v21 + 46715]; /*0x5507d6*/
            v28 = dword_A8ED54[v21 + 46715]; /*0x5507da*/
            v29 = dword_A8ED54[v21 + 46716]; /*0x5507e6*/
            v47 = v53 + v28; /*0x5507ef*/
            v50 = v52 + v27; /*0x5507f8*/
            v48 = v54 + v29; /*0x550813*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] /*0x55081f*/
                                                                                             + 64))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              &v39,
              v25,
              v6,
              v8);
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 64))( /*0x550841*/
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
                           &v53,
                           &v51,
                           v43,
                           v25,
                           v6,
                           v8);
          }
          else
          {
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 60))( /*0x550880*/
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
                           &v53,
                           &v51,
                           v43,
                           v6,
                           v8,
                           0,
                           v47,
                           v46,
                           v45,
                           v42);
          }
        }
        else
        {
          (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] /*0x5508f6*/
                                                                                        + 52))(
            MEMORY[0x87F7E8][7883],
            &MEMORY[0x87F7E8][7662],
            &v53,
            &v51,
            ((unsigned __int8)v49 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
          | (v11 >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
          | (v12 >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172])),
            v6,
            v8,
            0);
          LOBYTE(v2) = v38; /*0x5508f9*/
          if ( v38 ) /*0x5508ff*/
          {
            v30 = 4 * v5; /*0x55090d*/
            v31 = v52 + dword_A8ED54[v30 + 46714]; /*0x550925*/
            v49 = v51 + dword_A8ED54[v30 + 46713]; /*0x55092b*/
            v32 = dword_A8ED54[v30 + 46713]; /*0x55092f*/
            v50 = v31; /*0x550935*/
            v33 = dword_A8ED54[v30 + 46714]; /*0x550939*/
            v47 = v53 + v32; /*0x550947*/
            v48 = v54 + v33; /*0x550950*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] /*0x550968*/
                                                                                          + 52))(
              MEMORY[0x87F7E8][7883],
              &MEMORY[0x87F7E8][7662],
              &v47,
              &v49,
              v44,
              v6,
              v8,
              0);
            v34 = dword_A8ED54[v30 + 46716]; /*0x55097b*/
            v49 = v51 + dword_A8ED54[v30 + 46715]; /*0x550981*/
            v35 = dword_A8ED54[v30 + 46715]; /*0x550985*/
            v36 = dword_A8ED54[v30 + 46716]; /*0x55098b*/
            v50 = v52 + v34; /*0x550999*/
            v47 = v53 + v35; /*0x5509a3*/
            v48 = v54 + v36; /*0x5509bb*/
            LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7883] + 52))( /*0x5509c7*/
                           MEMORY[0x87F7E8][7883],
                           &MEMORY[0x87F7E8][7662],
                           &v47,
                           &v49,
                           v44,
                           v6,
                           v8,
                           0);
          }
        }
      }
    }
  }
  return v2; /*0x550280*/
}


// ==== 0x005509E0  nullsub_21  this=-  sig=ida-proto ====
void __cdecl nullsub_21()
{
  ; /*0x5509e0*/
}


// ==== 0x005509F0  PrepareTacticalClassCellTransform  this=unknown  sig=csp ====
int __fastcall PrepareTacticalClassCellTransform(BuildingTypeClass *a1)
{
  BuildingTypeClass *v1; // ebx
  ObjectClass *v2; // eax
  double v3; // st7
  int v4; // ebp
  int v5; // esi
  char v6; // al
  int v7; // ecx
  double v8; // st7
  char v9; // al
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // dl
  int referenceCount; // eax
  Tactical *v16; // edi
  CoordStruct *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  int v21; // edi
  int v22; // eax
  int v23; // ebx
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  float v29; // esi
  int v30; // esi
  unsigned int v31; // esi
  int v32; // ecx
  __int16 v33; // ax
  __int16 v34; // ax
  int v35; // ebp
  int v36; // edi
  int v37; // esi
  CoordStruct *v38; // esi
  CoordStruct *v39; // edi
  float aP2; // [esp+38h] [ebp-158h]
  float aP2a; // [esp+38h] [ebp-158h]
  float aP2b; // [esp+38h] [ebp-158h]
  float aP2c; // [esp+38h] [ebp-158h]
  float aP2d; // [esp+38h] [ebp-158h]
  float aP2e; // [esp+38h] [ebp-158h]
  __int128 aP0; // [esp+3Ch] [ebp-154h]
  Tactical *aP0a; // [esp+3Ch] [ebp-154h]
  Tactical *v48; // [esp+3Ch] [ebp-154h]
  Tactical *v49; // [esp+3Ch] [ebp-154h]
  Tactical *v50; // [esp+3Ch] [ebp-154h]
  Tactical *v51; // [esp+3Ch] [ebp-154h]
  Tactical *v52; // [esp+3Ch] [ebp-154h]
  char v54; // [esp+5Fh] [ebp-131h]
  __int16 v55; // [esp+60h] [ebp-130h] BYREF
  unsigned __int8 v56; // [esp+62h] [ebp-12Eh]
  unsigned __int8 v57[8]; // [esp+68h] [ebp-128h] BYREF
  ObjectClass *aP1; // [esp+70h] [ebp-120h]
  Tactical *v59; // [esp+74h] [ebp-11Ch]
  __int16 v60; // [esp+78h] [ebp-118h] BYREF
  unsigned __int8 v61; // [esp+7Ah] [ebp-116h]
  __int64 v62; // [esp+80h] [ebp-110h] BYREF
  int v63; // [esp+88h] [ebp-108h] BYREF
  int v64; // [esp+8Ch] [ebp-104h]
  float v65; // [esp+90h] [ebp-100h]
  int v66; // [esp+94h] [ebp-FCh]
  __int64 v67; // [esp+98h] [ebp-F8h] BYREF
  int v68; // [esp+A0h] [ebp-F0h] BYREF
  int v69; // [esp+A4h] [ebp-ECh]
  int v70; // [esp+A8h] [ebp-E8h]
  unsigned __int8 a2[4]; // [esp+ACh] [ebp-E4h] BYREF
  CoordStruct *v72[2]; // [esp+B0h] [ebp-E0h]
  CoordStruct *aP4[2]; // [esp+B8h] [ebp-D8h]
  __int64 v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  CCINIClass v77; // [esp+D0h] [ebp-C0h] BYREF
  CCINIClass v78; // [esp+130h] [ebp-60h] BYREF

  v1 = a1; /*0x5509fd*/
  v72[0] = (CoordStruct *)a1; /*0x550a03*/
  if ( (byte_ABC7C8 & 1) == 0 ) /*0x550a07*/
  {
    dword_ABC7F8[0] = -1; /*0x550a15*/
    dword_ABC7FC[0] = -1; /*0x550a1f*/
    dword_ABC800[0] = 1; /*0x550a27*/
    dword_ABC804[0] = 1; /*0x550a2c*/
    dword_ABC808 = 0; /*0x550a37*/
    dword_ABC810 = 0; /*0x550a3c*/
    dword_ABC80C = -1; /*0x550a41*/
    dword_ABC818 = -1; /*0x550a4f*/
    dword_ABC820 = 1; /*0x550a56*/
    dword_ABC814 = 1; /*0x550a5e*/
    dword_ABC81C = 1; /*0x550a64*/
    dword_ABC828 = -1; /*0x550a6d*/
    dword_ABC824 = -1; /*0x550a77*/
    dword_ABC830 = 1; /*0x550a7f*/
    dword_ABC82C = 0; /*0x550a87*/
    dword_ABC834 = 0; /*0x550a8d*/
    dword_ABC838 = -1; /*0x550a96*/
    dword_ABC83C = -1; /*0x550aa0*/
    dword_ABC840 = 1; /*0x550aa8*/
    dword_ABC844 = 1; /*0x550aad*/
    dword_ABC848 = 0; /*0x550ab8*/
    dword_ABC850 = 0; /*0x550abd*/
    dword_ABC84C = -1; /*0x550ac2*/
    dword_ABC858 = -1; /*0x550ad0*/
    dword_ABC854 = 1; /*0x550ad7*/
    dword_ABC85C = 1; /*0x550add*/
    dword_ABC860 = 1; /*0x550ae3*/
    dword_ABC864 = -1; /*0x550aee*/
    dword_ABC868 = -1; /*0x550af4*/
    byte_ABC7C8 |= 1u; /*0x550b08*/
    dword_ABC86C = 0; /*0x550b0e*/
    dword_ABC870 = 1; /*0x550b14*/
    dword_ABC874 = 0; /*0x550b19*/
    atexit(nullsub_22); /*0x550b1f*/
  }
  v2 = *(ObjectClass **)v1->BarrelVoxel; /*0x550b2a*/
  v59 = *(Tactical **)&v1->BarrelVoxel[12]; /*0x550b33*/
  aP1 = v2; /*0x550b37*/
  *((double *)&aP0 + 1) = (double)(int)v59 - (double)(int)v2; /*0x550b49*/
  *(double *)&aP0 = (double)*(int *)&v1->BarrelVoxel[4] - (double)*(int *)&v1->BarrelVoxel[16]; /*0x550b53*/
  v3 = Math::CalcAngle((AbstractClass *)aP0, *(double *)((char *)&aP0 + 4)); /*0x550b56*/
  LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (Tactical *)(((((unsigned int)v59 >> 12) + 1) >> 1) & 7); /*0x550b8d*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], v1->BarrelVoxel, (IUnknown *)&v75); /*0x550b91*/
  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], &v1->BarrelVoxel[12], (IUnknown *)&v74); /*0x550ba2*/
  v4 = *(_DWORD *)&v1->zero_3C - ZCoordToScreenY((IUnknown *)*(_DWORD *)&v1->BarrelVoxel[8]) - 2; /*0x550bb7*/
  v5 = -2 - ZCoordToScreenY((IUnknown *)*(_DWORD *)&v1->BarrelVoxel[20]); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( dword_ABCD44 < (CampaignScore *)PingPongBuffer::GetWriteOffset() /*0x550be3*/
    || (v54 = 1, !*(_DWORD *)&HouseClass_Player.__pad_5568[22724]) )
  {
    v54 = 0; /*0x550be5*/
  }
  v6 = v1->UINameLabel[21]; /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    v7 = *(_DWORD *)v1->vtable0; /*0x550bfc*/
    v8 = *(float *)&v1->UINameLabel[23] - *(float *)&v1->UINameLabel[27]; /*0x550c01*/
    v65 = *(float *)&v1->UINameLabel[15]; /*0x550c04*/
    aP1 = (ObjectClass *)(LODWORD(v65) - v7); /*0x550c0a*/
    v65 = v8 * (double)(LODWORD(v65) - v7) / (double)SLODWORD(v65) + *(float *)&v1->UINameLabel[27]; /*0x550c19*/
  }
  aP1 = (ObjectClass *)Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  v9 = BYTE1(v1->NeedsSaveOrLink); /*0x550c30*/
  v57[0] = 0; /*0x550c35*/
  v57[1] = 0; /*0x550c3a*/
  v57[2] = 0; /*0x550c3f*/
  a2[0] = -1; /*0x550c44*/
  a2[1] = -1; /*0x550c49*/
  a2[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    v10 = 2 * (unsigned __int8)v1->UINameLabel[6]; /*0x550c64*/
    v11 = 2 * (unsigned __int8)v1->UINameLabel[4]; /*0x550c66*/
    v12 = 2 * (unsigned __int8)v1->UINameLabel[5]; /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      LOBYTE(v11) = -1; /*0x550c8b*/
    LOBYTE(v60) = v11; /*0x550c90*/
    HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v55 = v60; /*0x550ca1*/
    LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(_WORD *)&v1->UINameLabel[4]; /*0x550cb4*/
    v13 = v1->UINameLabel[5]; /*0x550cb9*/
    v61 = v1->UINameLabel[6]; /*0x550cbf*/
    v14 = v1->UINameLabel[6]; /*0x550cc3*/
    LOBYTE(v55) = (unsigned __int8)v60 >> 1; /*0x550cca*/
    HIBYTE(v55) = v13 >> 1; /*0x550cce*/
    LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = v75; /*0x550cdf*/
  v64 = v76; /*0x550ce3*/
  v68 = v75; /*0x550ce7*/
  v69 = v76; /*0x550cef*/
  v67 = v74; /*0x550cf7*/
  v62 = v74; /*0x550cff*/
  referenceCount = v1->referenceCount; /*0x550d03*/
  v56 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( referenceCount >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = (CoordStruct *)((unsigned __int8)v59 & 1); /*0x550d25*/
    for ( aP4[0] = v17; ; v17 = aP4[0] )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = 4 * (_DWORD)v16; /*0x550d3f*/
        v19 = dword_ABC7F8[4 * (_DWORD)v16]; /*0x550d42*/
        v20 = dword_ABC7FC[4 * (_DWORD)v16]; /*0x550d48*/
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = dword_ABC800[4 * (_DWORD)v16]; /*0x550d5e*/
        v22 = dword_ABC804[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        LODWORD(v62) = v19 + v62; /*0x550d84*/
        v23 = v20 + HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (BuildingTypeClass *)v72[0]; /*0x550d9e*/
        LODWORD(v67) = v24; /*0x550da2*/
        HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = dword_ABC7F8[4 * (_DWORD)v16]; /*0x550dbc*/
        v26 = dword_ABC804[4 * (_DWORD)v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        LODWORD(v62) = v25 + v62; /*0x550de4*/
        HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = dword_ABC7FC[4 * (_DWORD)v16]; /*0x550df5*/
        v28 = dword_ABC800[4 * (_DWORD)v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        HIDWORD(v62) += v27; /*0x550e1d*/
        LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !stru_89E138.__pad_14B0[6152] )
      {
        if ( v54 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x550e61*/
                                                                                               + 64))(
            *(_DWORD *)&stru_87C374.__pad_579C[22532],
            &stru_87C374.__pad_579C[21648],
            &v68,
            &v62,
            &v55,
            COERCE_FLOAT(LODWORD(v65)),
            v4,
            v66);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x550e87*/
                                                                                               + 64))(
            *(_DWORD *)&stru_87C374.__pad_579C[22532],
            &stru_87C374.__pad_579C[21648],
            &v63,
            &v67,
            &v55,
            COERCE_FLOAT(LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57[2] = v11; /*0x550e98*/
          *(_WORD *)v57 = v55; /*0x550ea0*/
          Color::Lerp(v57, aP1, a2); /*0x550eab*/
          v30 = (v57[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x550f09*/
              | (v57[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
              | (v57[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x550f21*/
                                                                                          + 52))(
            *(_DWORD *)&stru_87C374.__pad_579C[22532],
            &stru_87C374.__pad_579C[21648],
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x550f44*/
                                                                                          + 52))(
            *(_DWORD *)&stru_87C374.__pad_579C[22532],
            &stru_87C374.__pad_579C[21648],
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( BYTE1(v1->NeedsSaveOrLink) && v70 == 1 )
        {
          v55 = *(_WORD *)&v1->UINameLabel[4]; /*0x550f5c*/
          LOBYTE(v11) = v1->UINameLabel[6]; /*0x550f61*/
          v56 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v56 >> 1; /*0x550f8f*/
          v31 = v54 != 0 ? 8 : 64;
          if ( (unsigned __int8)v55 >> 1 < v31 && HIBYTE(v55) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (BuildingTypeClass *)v72[0]; /*0x550fa9*/
          v16 = v59; /*0x550fad*/
          LOBYTE(v55) = (unsigned __int8)v55 >> 1; /*0x550fb1*/
          HIBYTE(v55) >>= 1; /*0x550fb5*/
          v56 >>= 1; /*0x550fb9*/
        }
      }
      v32 = v1->referenceCount; /*0x550fc1*/
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
    }
  }
  if ( stru_89E138.__pad_14B0[6152] /*0x550ff9*/
    && *(_DWORD *)&stru_89E138.__pad_14B0[6184]
    && *(_DWORD *)&stru_87C374.__pad_579C[23348] )
  {
    v33 = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 36); /*0x550fff*/
    aP4[1] = 0; /*0x551003*/
    v34 = *(_WORD *)(*(_DWORD *)&stru_87C374.__pad_579C[23348] + 4) + v33; /*0x551007*/
    *(_QWORD *)aP4 = (unsigned __int16)(v4 + v34 - v76 - *(_WORD *)&stru_87C374.__pad_579C[21652]); /*0x551036*/
    *(_QWORD *)v72 = (unsigned __int16)(v5 + v34 - WORD2(v74) - *(_WORD *)&stru_87C374.__pad_579C[21652]); /*0x551053*/
    *(float *)aP4 = (double)*(__int64 *)aP4 * 0.000015259022; /*0x551064*/
    v35 = ((int)aP1 * v61) >> 8; /*0x551086*/
    v36 = ((int)aP1 * HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = ((int)aP1 * (unsigned __int8)v60) >> 8; /*0x55108c*/
    *(float *)v72 = (double)*(__int64 *)v72 * 0.000015259022; /*0x55108f*/
    ColorStruct::SetRGB( /*0x55109d*/
      &v77,
      (unsigned __int16)((_WORD)aP1 * (unsigned __int8)v60) >> 8,
      (unsigned __int16)((_WORD)aP1 * HIBYTE(v60)) >> 8,
      (unsigned __int16)((_WORD)aP1 * v61) >> 8);
    ColorStruct::SetRGB(&v78, v37, v36, v35); /*0x5510ac*/
    v38 = aP4[0]; /*0x5510b1*/
    *(float *)&aP0a = (float)v69; /*0x5510bf*/
    aP2 = (float)v68; /*0x5510ce*/
    Tactical::SetCellTransform(v77.__pad_0, 0, (CoordStruct *)LODWORD(aP2), (int)aP0a, aP4[0], 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    aP2a = (float)v63; /*0x5510f4*/
    Tactical::SetCellTransform(v77.__pad_0, 1, (CoordStruct *)LODWORD(aP2a), (int)v48, v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72[0]; /*0x5510fe*/
    *(float *)&v49 = (float)SHIDWORD(v62); /*0x55110f*/
    aP2b = (float)(int)v62; /*0x55111e*/
    Tactical::SetCellTransform(v77.__pad_0, 2, (CoordStruct *)LODWORD(aP2b), (int)v49, v72[0], 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    aP2c = (float)v63; /*0x551144*/
    Tactical::SetCellTransform(v78.__pad_0, 0, (CoordStruct *)LODWORD(aP2c), (int)v50, v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)SHIDWORD(v67); /*0x55115e*/
    aP2d = (float)(int)v67; /*0x55116d*/
    Tactical::SetCellTransform(v78.__pad_0, 1, (CoordStruct *)LODWORD(aP2d), (int)v51, v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)SHIDWORD(v62); /*0x551184*/
    aP2e = (float)(int)v62; /*0x551193*/
    Tactical::SetCellTransform(v78.__pad_0, 2, (CoordStruct *)LODWORD(aP2e), (int)v52, v39, 1065353216, 0); /*0x551198*/
    StructTable::Append(*(_DWORD **)&stru_89E138.__pad_14B0[6184], &v77); /*0x5511ab*/
    return StructTable::Append(*(_DWORD **)&stru_89E138.__pad_14B0[6184], &v78); /*0x5511be*/
  }
  else if ( v54 ) /*0x5511d4*/
  {
    return (*(int (__thiscall **)(_DWORD, char *, int *, __int64 *, __int16 *, float, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x5511ff*/
                                                                                               + 64))(
             *(_DWORD *)&stru_87C374.__pad_579C[22532],
             &stru_87C374.__pad_579C[21648],
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    *(_WORD *)v57 = v60; /*0x551216*/
    v57[2] = v61; /*0x551223*/
    Color::Lerp(v57, aP1, a2); /*0x55122d*/
    return (*(int (__thiscall **)(_DWORD, char *, int *, __int64 *, int, int, int, _DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[22532] /*0x5512a7*/
                                                                                          + 52))(
             *(_DWORD *)&stru_87C374.__pad_579C[22532],
             &stru_87C374.__pad_579C[21648],
             &v75,
             &v74,
             (v57[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120])
           | (v57[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136])
           | (v57[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128]),
             v4,
             v5,
             0);
  }
}


// ==== 0x005512C0  nullsub_22  this=-  sig=ida-proto ====
void __cdecl nullsub_22()
{
  ; /*0x5512c0*/
}


// ==== 0x005512D0  _DynamicVectorClass_PAVLaserDrawClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LaserDrawClass::sub_5512D0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5512d6*/
  *(_DWORD *)(this + 16) = 0; /*0x5512d9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5512e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5512e6*/
    *(_DWORD *)(this + 4) = 0; /*0x5512ee*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5512f1*/
  *(_DWORD *)(this + 8) = 0; /*0x5512f4*/
}


// ==== 0x00551300  _DynamicVectorClass_PAVLaserDrawClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::sub_551300(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x551300*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x551315*/
  else
    return 0; /*0x551307*/
}


// ==== 0x00551320  _VectorClass_PAVLaserDrawClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x55132a*/
}


// ==== 0x00551330  _VectorClass_PAVLaserDrawClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x551332*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x55133d*/
  {
    v3 = 0; /*0x55133f*/
    if ( v2 <= 0 ) /*0x551343*/
      return 1; /*0x551363*/
    v4 = (_DWORD *)*(this + 1); /*0x551345*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55134b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x551354*/
    {
      ++v3; /*0x551356*/
      ++v4; /*0x551357*/
      if ( v3 >= v2 ) /*0x55135c*/
        return 1; /*0x55135c*/
    }
  }
  return 0; /*0x55135e*/
}


// ==== 0x00551370  _VectorClass_PAVLaserDrawClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x55137c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x551386*/
    if ( a3 ) /*0x55138c*/
      v4 = a3; /*0x5513a2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x55139e*/
    *((_BYTE *)this + 12) = 1; /*0x5513a6*/
    if ( v4 ) /*0x5513aa*/
    {
      if ( this->Items ) /*0x5513b5*/
      {
        v6 = this->Capacity; /*0x5513bc*/
        if ( a2 < v6 ) /*0x5513c1*/
          v6 = a2; /*0x5513c3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5513c9*/
          ++i; /*0x5513ce*/
        if ( *((_BYTE *)this + 13) ) /*0x5513db*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5513e6*/
          this->Items = 0; /*0x5513ee*/
        }
      }
      this->Items = v4; /*0x5513f7*/
      this->Capacity = a2; /*0x5513ff*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x551402*/
      return 1; /*0x551408*/
    }
    else
    {
      return 0; /*0x5513af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x551412*/
    return 1; /*0x551418*/
  }
}


// ==== 0x00551420  _VectorClass_PAVLaserDrawClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LaserDrawClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x55142d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x551433*/
    *(_DWORD *)(this + 4) = 0; /*0x55143b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55143e*/
  *(_DWORD *)(this + 8) = 0; /*0x551441*/
}


// ==== 0x00551450  _VectorClass_PAVLaserDrawClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x551450*/
    return 0; /*0x551458*/
  v3 = *(_DWORD *)(this + 8); /*0x55145e*/
  result = 0; /*0x551461*/
  if ( v3 <= 0 ) /*0x551465*/
    return -1; /*0x55147c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x55146b*/
  {
    if ( ++result >= v3 ) /*0x55147a*/
      return -1; /*0x55147a*/
  }
  return result; /*0x55145a*/
}


// ==== 0x00551490  _VectorClass_PAVLaserDrawClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x551490*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5514a5*/
  else
    return 0; /*0x551497*/
}


// ==== 0x005514B0  _DynamicVectorClass_PAVLaserDrawClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::sub_5514B0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5514bc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5514c2*/
    if ( a3 ) /*0x5514c8*/
      v4 = a3; /*0x5514de*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5514da*/
    *((_BYTE *)this + 12) = 1; /*0x5514e2*/
    if ( !v4 ) /*0x5514e6*/
      return 0; /*0x55155a*/
    if ( this->q004 ) /*0x5514e8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5514ef*/
      if ( a2 < v5 ) /*0x5514f4*/
        v5 = a2; /*0x5514f6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x5514fc*/
        ++i; /*0x551501*/
      if ( *((_BYTE *)this + 13) ) /*0x55150e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x551519*/
        this->q004 = 0; /*0x551521*/
      }
    }
    this->q004 = v4; /*0x55152a*/
    this->DynamicVector_field_0x8 = a2; /*0x551532*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x551535*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x55153e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x551541*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x551549*/
    this->DynamicVector_field_0x10 = v7; /*0x55154b*/
  return 1; /*0x55154e*/
}


// ==== 0x00551560  _DynamicVectorClass_PAVLaserDrawClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::sub_551560(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x551560*/
  result = 0; /*0x551563*/
  if ( v2 <= 0 ) /*0x551568*/
    return -1; /*0x55157f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55156e*/
  {
    if ( ++result >= v2 ) /*0x55157d*/
      return -1; /*0x55157d*/
  }
  return result; /*0x551582*/
}


// ==== 0x00551590  _VectorClass_PAVLaserDrawClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_LaserDrawClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x551593*/
  *Block = &vt_VectorClass_LaserDrawClass; /*0x551596*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5515a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515a8*/
    *(Block + 1) = 0; /*0x5515b0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5515bb*/
  *(Block + 2) = 0; /*0x5515c1*/
  if ( (a2 & 1) != 0 ) /*0x5515c8*/
    __3_YAXPAX_Z(Block); /*0x5515cb*/
  return (VectorClass *)Block; /*0x5515d5*/
}


// ==== 0x005515E0  _DynamicVectorClass_PAVLaserDrawClass::Constructor_VectorClass_LaserDrawClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5515e3*/
  *Block = &vt_VectorClass_LaserDrawClass; /*0x5515e6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5515f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515f8*/
    *(Block + 1) = 0; /*0x551600*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55160b*/
  *(Block + 2) = 0; /*0x551611*/
  if ( (a2 & 1) != 0 ) /*0x551618*/
    __3_YAXPAX_Z(Block); /*0x55161b*/
  return (DynamicVector *)Block; /*0x551625*/
}


// ==== 0x00551630  WebBrowser::OpenURL  this=int  sig=csp ====
bool __thiscall WebBrowser::OpenURL(INIClass *this)
{
  HANDLE FileA; // esi
  HINSTANCE ExecutableA; // esi
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-468h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+10h] [ebp-464h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+20h] [ebp-454h] BYREF
  CHAR TempFileName[260]; // [esp+64h] [ebp-410h] BYREF
  CHAR CommandLine[260]; // [esp+168h] [ebp-30Ch] BYREF
  CHAR Buffer[260]; // [esp+26Ch] [ebp-208h] BYREF
  CHAR Result[260]; // [esp+370h] [ebp-104h] BYREF

  if ( !this ) /*0x55163d*/
    return 0; /*0x55163d*/
  if ( !strlen(this->__pad_0) ) /*0x55164a*/
    return 0; /*0x55164a*/
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  GetTempFileNameA(Buffer, (LPCSTR)&stru_829748.fallRate, 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), (const char *)&stru_829748.objectTypeFlags); /*0x5516b3*/
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  WriteFile(FileA, &stru_829748.__pad_0[12], strlen(&stru_829748.__pad_0[12]), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  ExecutableA = FindExecutableA(TempFileName, 0, Result); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  sprintf(CommandLine, &stru_829748, this); /*0x55173c*/
  memset(&StartupInfo, 0, sizeof(StartupInfo)); /*0x55174f*/
  StartupInfo.cb = 68; /*0x551771*/
  return CreateProcessA(Result, CommandLine, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation); /*0x551784*/
}


// ==== 0x005517A0  sub_5517A0  this=-  sig=ida-proto ====
void sub_5517A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5517ac*/
  dbl_ABC8E0 = Math::Sqrt(v0 + v0); /*0x5517be*/
}


// ==== 0x005517D0  sub_5517D0  this=-  sig=ida-proto ====
void sub_5517D0()
{
  dbl_ABC930 = dbl_ABC8E0 / 60.0; /*0x5517dc*/
}


// ==== 0x005517F0  sub_5517F0  this=-  sig=ida-proto ====
void sub_5517F0()
{
  dbl_ABC918 = 1.0 / dbl_ABC930; /*0x5517fc*/
}


// ==== 0x00551810  sub_551810  this=-  sig=ida-proto ====
void sub_551810()
{
  dbl_ABC910 = 0.0174532925199433 * 45.0; /*0x55181c*/
}


// ==== 0x00551830  sub_551830  this=-  sig=ida-proto ====
void sub_551830()
{
  dbl_ABC8E8 = 0.0174532925199433 * 60.0; /*0x55183c*/
}


// ==== 0x00551850  sub_551850  this=-  sig=ida-proto ====
void sub_551850()
{
  dbl_ABC8C0 = 0.0174532925199433 * 90.0; /*0x55185c*/
}


// ==== 0x00551870  sub_551870  this=-  sig=ida-proto ====
__int64 sub_551870()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC8C0 - dbl_ABC8E8); /*0x551882*/
  result = Math::RoundToInt(v0 * dbl_ABC8E0 * 0.5); /*0x551896*/
  dword_ABC938 = result; /*0x55189b*/
  return result; /*0x5518a0*/
}


// ==== 0x005518B0  sub_5518B0  this=-  sig=ida-proto ====
void sub_5518B0()
{
  dbl_ABC8F0 = Math::ArcTan((double)dword_ABC938 * 0.00390625); /*0x5518c7*/
}


// ==== 0x005518E0  sub_5518E0  this=-  sig=ida-proto ====
void sub_5518E0()
{
  dbl_ABC908 = Math::ArcTan((double)(2 * dword_ABC938) / dbl_ABC8E0); /*0x551902*/
}


// ==== 0x00551910  sub_551910  this=-  sig=ida-proto ====
__int64 sub_551910()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC938) + 0.5); /*0x55192b*/
  dword_ABC92C = result; /*0x551930*/
  return result; /*0x551936*/
}


// ==== 0x00551940  sub_551940  this=-  sig=ida-proto ====
int sub_551940()
{
  word_ABC8D8 = 0; /*0x551942*/
  word_ABC8DA = 0; /*0x551948*/
  return 0; /*0x55194e*/
}


// ==== 0x00551950  sub_551950  this=-  sig=ida-proto ====
int sub_551950()
{
  dword_ABC8F8 = 0; /*0x551952*/
  dword_ABC8FC = 0; /*0x551957*/
  dword_ABC900 = 0; /*0x55195c*/
  return 0; /*0x551961*/
}


// ==== 0x00551970  sub_551970  this=-  sig=ida-proto ====
int sub_551970()
{
  dword_ABC928 = 0; /*0x551975*/
  dword_ABC920 = 128; /*0x55197f*/
  dword_ABC924 = 128; /*0x551984*/
  return 128; /*0x551989*/
}


// ==== 0x00551990  sub_551990  this=-  sig=ida-proto ====
int sub_551990()
{
  dword_ABC8C8 = 0; /*0x551992*/
  dword_ABC8CC = 0; /*0x551997*/
  dword_ABC8D0 = 0; /*0x55199c*/
  dword_ABC8D4 = 0; /*0x5519a1*/
  return 0; /*0x5519a6*/
}


// ==== 0x005519B0  VectorClass_ptr_IsometricTileClass::RenderStatusText  this=VOID_PTR  sig=csp ====
bool __thiscall DisplayClass::RenderStatusText(int this, IUnknown *aP1, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( a3 ) /*0x5519b9*/
    return DisplayClass::InsertPriorityText((_DWORD *)this, (int)aP1) != 0; /*0x5519ca*/
  v5 = *(_DWORD *)(this + 8); /*0x5519cf*/
  if ( *(_DWORD *)(this + 16) >= v5 ) /*0x5519d7*/
  {
    if ( !*(_BYTE *)(this + 13) && v5 ) /*0x5519e2*/
      return 0; /*0x5519e2*/
    v6 = *(_DWORD *)(this + 20); /*0x5519e4*/
    if ( v6 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 8))(this, v5 + v6, 0) ) /*0x5519f4*/
      return 0; /*0x551a04*/
  }
  v7 = *(_DWORD *)(this + 16); /*0x551a0a*/
  v8 = *(_DWORD *)(this + 4); /*0x551a0d*/
  *(_DWORD *)(this + 16) = v7 + 1; /*0x551a13*/
  *(_DWORD *)(v8 + 4 * v7) = aP1; /*0x551a1a*/
  return 1; /*0x5519c9*/
}


// ==== 0x00551A30  ObjectClass::ProcessAutoSave  this=int  sig=csp ====
int __thiscall sub_551A30(_DWORD *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x551a35*/
  result = *(this + 4) - 1; /*0x551a3a*/
  if ( result > 0 ) /*0x551a3d*/
  {
    do /*0x551a7d*/
    {
      v4 = *(this + 1); /*0x551a41*/
      v5 = *(_DWORD *)(v4 + 4 * v2 + 4); /*0x551a44*/
      v6 = *(_DWORD *)(v4 + 4 * v2); /*0x551a48*/
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 184))(v5); /*0x551a55*/
      if ( v7 < (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 184))(v6) ) /*0x551a67*/
      {
        *(_DWORD *)(*(this + 1) + 4 * v2 + 4) = v6; /*0x551a6c*/
        *(_DWORD *)(*(this + 1) + 4 * v2) = v5; /*0x551a73*/
      }
      ++v2; /*0x551a79*/
      result = *(this + 4) - 1; /*0x551a7a*/
    }
    while ( v2 < result ); /*0x551a7d*/
  }
  return result; /*0x551a81*/
}


// ==== 0x00551A90  DisplayClass::InsertPriorityText  this=VOID_PTR  sig=csp ====
int __thiscall sub_551A90(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int i; // edi
  int j; // eax

  v3 = *(this + 2); /*0x551a93*/
  if ( *(this + 4) >= v3 ) /*0x551a9b*/
  {
    if ( !*((_BYTE *)this + 13) && v3 ) /*0x551aa6*/
      return 0; /*0x551aa6*/
    v4 = *(this + 5); /*0x551aa8*/
    if ( v4 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v3 + v4, 0) ) /*0x551ab8*/
      return 0; /*0x551abf*/
  }
  for ( i = 0; i < *(this + 4); ++i ) /*0x551ad2*/
  {
    if ( DisplayClass::checkScreenBounds(*(void **)(*(this + 1) + 4 * i), a2) ) /*0x551adb*/
      break; /*0x551ae2*/
  }
  for ( j = *(this + 4) - 1; j >= i; *(_DWORD *)(*(this + 1) + 4 * j + 8) = *(_DWORD *)(*(this + 1) + 4 * j + 4) ) /*0x551af2*/
    --j; /*0x551af7*/
  *(_DWORD *)(*(this + 1) + 4 * i) = a2; /*0x551b07*/
  ++*(this + 4); /*0x551b0f*/
  return 1; /*0x551ac1*/
}


// ==== 0x00551B20  LayerClass::Save  this=LogicClass  sig=csp ====
int __thiscall LayerClass::Save(_DWORD *this, RadarClass *aP1)
{
  RadarClass *v2; // esi
  int result; // eax
  RadarClass *v5; // eax
  int v6; // ecx
  int v7; // edi
  RadarClass *v8; // [esp+0h] [ebp-1Ch]

  v2 = aP1; /*0x551b22*/
  if ( !aP1 ) /*0x551b2b*/
    return -2147467261; /*0x551b2f*/
  v5 = (RadarClass *)*(this + 4); /*0x551b38*/
  v6 = aP1->field_0; /*0x551b3b*/
  v8 = aP1; /*0x551b46*/
  aP1 = v5; /*0x551b47*/
  result = (*(int (__stdcall **)(RadarClass *, RadarClass **, int, _DWORD))(v6 + 16))(v8, &aP1, 4, 0); /*0x551b4b*/
  if ( result >= 0 ) /*0x551b50*/
  {
    v7 = 0; /*0x551b56*/
    if ( (int)aP1 <= 0 ) /*0x551b5a*/
    {
      return 0; /*0x551b7a*/
    }
    else
    {
      while ( 1 ) /*0x551b6a*/
      {
        result = (*(int (__stdcall **)(RadarClass *, int, int, _DWORD))(v2->field_0 + 16))( /*0x551b6a*/
                   v2,
                   this->q004 + 4 * v7,
                   4,
                   0);
        if ( result < 0 ) /*0x551b6f*/
          break; /*0x551b6f*/
        if ( ++v7 >= (int)aP1 ) /*0x551b78*/
          return 0; /*0x551b78*/
      }
    }
  }
  return result; /*0x551b2d*/
}


// ==== 0x00551B90  LayerClass::Load  this=LogicClass  sig=csp ====
int __thiscall LayerClass::Load(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x551b94*/
  if ( !a2 ) /*0x551b9c*/
    return -2147467261; /*0x551ba0*/
  v5 = *a2; /*0x551baa*/
  a2 = 0; /*0x551bb6*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v5 + 12))(v2, &a2, 4, 0); /*0x551bbe*/
  if ( result >= 0 ) /*0x551bc3*/
  {
    v6 = (int)a2; /*0x551bc9*/
    v7 = 0; /*0x551bcd*/
    if ( (int)a2 <= 0 ) /*0x551bd1*/
    {
LABEL_13:
      v12 = 0; /*0x551c2e*/
      if ( v6 > 0 ) /*0x551c32*/
      {
        do /*0x551c4c*/
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(this->q004 + 4 * v12++)); /*0x551c40*/
        while ( v12 < (int)a2 ); /*0x551c4c*/
      }
      return 0; /*0x551c4e*/
    }
    else
    {
      while ( 1 ) /*0x551bdf*/
      {
        result = (*(int (__stdcall **)(_DWORD *, int *, int, _DWORD))(*v2 + 12))(v2, &v13, 4, 0); /*0x551bdf*/
        if ( result < 0 ) /*0x551be4*/
          break; /*0x551be4*/
        v8 = this->__pad_008; /*0x551be6*/
        if ( *(this + 4) < v8 /*0x551c0b*/
          || (*((_BYTE *)this + 13) || !v8)
          && (v9 = *(this + 5), v9 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, v8 + v9, 0) )
        {
          v10 = *(this + 4); /*0x551c12*/
          v11 = this->q004; /*0x551c15*/
          *(this + 4) = v10 + 1; /*0x551c1b*/
          *(_DWORD *)(v11 + 4 * v10) = v13; /*0x551c22*/
        }
        v6 = (int)a2; /*0x551c25*/
        if ( ++v7 >= (int)a2 ) /*0x551c2c*/
          goto LABEL_13; /*0x551c2c*/
      }
    }
  }
  return result; /*0x551b9e*/
}


// ==== 0x00551C60  BitStreamIOLCW  this=Straw  sig=csp ====
unsigned int __fastcall LCW_BitStreamIO(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  unsigned __int8 v6; // al
  _BYTE *v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned __int8 v11; // al
  int v12; // edi
  int v13; // ebp
  unsigned int v14; // edi
  unsigned int v15; // edx
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // edx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // edi
  int v26; // edx
  _BYTE *v27; // ecx
  int v28; // edi
  int v29; // ecx
  unsigned int v30; // edi
  _BYTE *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // edi
  unsigned __int8 v36; // [esp+10h] [ebp-18h]
  unsigned __int8 *v38; // [esp+20h] [ebp-8h]

  v3 = a2; /*0x551c65*/
  v5 = a2; /*0x551c6f*/
  while ( 1 ) /*0x551cb9*/
  {
    while ( 1 ) /*0x551c80*/
    {
      while ( 1 ) /*0x551c77*/
      {
        v6 = *a1++; /*0x551c77*/
        if ( (v6 & 0x80u) != 0 ) /*0x551c80*/
          break; /*0x551c80*/
        v7 = (_BYTE *)(v5 - ((v6 & 0xF) << 8) - *a1++); /*0x551ca1*/
        if ( v6 >> 4 != -3 ) /*0x551ca9*/
        {
          v8 = (v6 >> 4) + 3; /*0x551cab*/
          do /*0x551cb3*/
          {
            *(_BYTE *)v5++ = *v7++; /*0x551cae*/
            --v8; /*0x551cb2*/
          }
          while ( v8 ); /*0x551cb3*/
        }
      }
      if ( (v6 & 0x40) == 0 ) /*0x551cb9*/
        break; /*0x551cb9*/
      if ( v6 == 0xFE ) /*0x551cdb*/
      {
        v11 = a1[2]; /*0x551cec*/
        v36 = v11; /*0x551cf2*/
        v12 = *a1 + (a1[1] << 8); /*0x551cf6*/
        a1 += 3; /*0x551d09*/
        v38 = a1; /*0x551d11*/
        v13 = 16843009 * v11; /*0x551d1d*/
        v14 = (v5 & 3) - 4 + v12; /*0x551d2a*/
        if ( v5 < v5 - (v5 & 3) + 4 ) /*0x551d32*/
        {
          LOBYTE(a1) = v11; /*0x551d34*/
          BYTE1(a1) = v11; /*0x551d38*/
          v15 = 4 - (v5 & 3); /*0x551d40*/
          v16 = (_DWORD)a1 << 16; /*0x551d42*/
          LOWORD(v16) = (_WORD)a1; /*0x551d47*/
          memset32((void *)v5, v16, v15 >> 2); /*0x551d4d*/
          a1 = v38; /*0x551d51*/
          memset((void *)(v5 + 4 * (v15 >> 2)), v16, v15 & 3); /*0x551d58*/
          v5 += v15; /*0x551d60*/
          v11 = v36; /*0x551d62*/
        }
        v17 = (_DWORD *)v5; /*0x551d68*/
        HIWORD(v18) = HIWORD(v14); /*0x551d6a*/
        for ( v5 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v5; v17 += 2 ) /*0x551d71*/
        {
          *v17 = v13; /*0x551d73*/
          v17[1] = v13; /*0x551d75*/
        }
        v19 = v5 + (v14 & 3); /*0x551d82*/
        if ( v5 < v19 ) /*0x551d86*/
        {
          LOBYTE(v18) = v11; /*0x551d8c*/
          BYTE1(v18) = v11; /*0x551d90*/
          v20 = v18 << 16; /*0x551d98*/
          LOWORD(v20) = v18; /*0x551da1*/
          v21 = (v19 - v5) >> 2; /*0x551da4*/
          memset32((void *)v5, v20, v21); /*0x551da7*/
          memset((void *)(v5 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v5) & 3); /*0x551dae*/
          v5 = v19; /*0x551db2*/
        }
        v3 = a2; /*0x551c73*/
      }
      else if ( v6 == 0xFF ) /*0x551dbb*/
      {
        v22 = a1[1]; /*0x551dc1*/
        v23 = *a1; /*0x551dc4*/
        v24 = a1[3]; /*0x551dca*/
        a1 += 4; /*0x551dcd*/
        v25 = (v24 << 8) + v3; /*0x551ddd*/
        v26 = v23 + (v22 << 8); /*0x551ddf*/
        v27 = (_BYTE *)(v25 + *(a1 - 2)); /*0x551de1*/
        if ( v26 ) /*0x551de6*/
        {
          v28 = v26; /*0x551dec*/
          do /*0x551df6*/
          {
            *(_BYTE *)v5++ = *v27++; /*0x551df1*/
            --v28; /*0x551df5*/
          }
          while ( v28 ); /*0x551df6*/
        }
      }
      else
      {
        v29 = *a1; /*0x551e0b*/
        v30 = (a1[1] << 8) + v3; /*0x551e13*/
        a1 += 2; /*0x551e15*/
        v31 = (_BYTE *)(v30 + v29); /*0x551e18*/
        v32 = (v6 & 0x3F) + 3; /*0x551e1a*/
        v33 = (v6 & 0x3F) + 2; /*0x551e1c*/
        if ( v32 ) /*0x551e1f*/
        {
          v34 = v33 + 1; /*0x551e25*/
          do /*0x551e2f*/
          {
            *(_BYTE *)v5++ = *v31++; /*0x551e2a*/
            --v34; /*0x551e2e*/
          }
          while ( v34 ); /*0x551e2f*/
        }
      }
    }
    if ( v6 == 0x80 ) /*0x551cbb*/
      break; /*0x551cbb*/
    v9 = v6 & 0x3F; /*0x551cc6*/
    if ( v9 ) /*0x551ccb*/
    {
      v10 = v9; /*0x551ccd*/
      do /*0x551cd5*/
      {
        *(_BYTE *)v5++ = *a1++; /*0x551cd0*/
        --v10; /*0x551cd4*/
      }
      while ( v10 ); /*0x551cd5*/
    }
  }
  return v5 - v3; /*0x551e38*/
}


// ==== 0x00551E50  DecompressCoreLCW  this=BlowStraw  sig=csp ====
int __fastcall DecompressCoreLCW(Pipe *aP0, _BYTE *a1, int a3)
{
  char *v3; // esi
  _BYTE *v4; // edi
  Pipe *v5; // edi
  int v6; // eax
  Pipe *v7; // ebx
  char *v8; // edi
  int v9; // ecx
  char *v10; // edi
  __int16 v11; // cx
  bool v12; // zf
  int v13; // ecx
  char *v14; // edx
  Pipe *v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  int v18; // ecx
  _BYTE *v19; // eax
  _BYTE *v20; // edi
  __int16 v21; // ax
  char v22; // al
  char *v25; // [esp+18h] [ebp-20h]
  _BYTE *v27; // [esp+24h] [ebp-14h]
  char *v28; // [esp+28h] [ebp-10h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  _BYTE *v31; // [esp+34h] [ebp-4h]

  v25 = 0; /*0x551e89*/
  v28 = &aP0->__pad_0[a3]; /*0x551eac*/
  v30 = 1; /*0x551eaf*/
  v27 = a1; /*0x551ebc*/
  *a1 = -127; /*0x551ec3*/
  v3 = &aP0->__pad_0[1]; /*0x551ec4*/
  a1[1] = aP0->__pad_0[0]; /*0x551ec5*/
  v4 = a1 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
    v31 = v4; /*0x551ec6*/
    v5 = aP0; /*0x551ec9*/
    v29 = 1; /*0x551ecc*/
LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = (unsigned __int8)*v3; /*0x551ed5*/
      if ( (_BYTE)v6 != v3[64] ) /*0x551eda*/
        break; /*0x551eda*/
      v7 = v5; /*0x551edc*/
      v8 = v3; /*0x551ede*/
      v9 = v28 - v3; /*0x551ee3*/
      do /*0x551ee5*/
      {
        if ( !v9 ) /*0x551ee5*/
          break; /*0x551ee5*/
        v12 = *v8++ == (char)v6; /*0x551ee5*/
        --v9; /*0x551ee5*/
      }
      while ( v12 ); /*0x551ee5*/
      v10 = v8 - 1; /*0x551ee7*/
      v11 = (_WORD)v10 - (_WORD)v3; /*0x551eea*/
      if ( (unsigned int)(v10 - v3) < 0x41 ) /*0x551eef*/
      {
        v5 = v7; /*0x551f0f*/
        break; /*0x551f0f*/
      }
      v30 = 0; /*0x551ef1*/
      v3 = v10; /*0x551ef8*/
      *v31 = -2; /*0x551f01*/
      *(_WORD *)(v31 + 1) = v11; /*0x551f03*/
      v31[3] = v6; /*0x551f07*/
      v31 += 4; /*0x551f08*/
      v5 = v7; /*0x551f0b*/
    }
    while ( 1 ) /*0x551f13*/
    {
      v13 = v3 - (char *)v5; /*0x551f13*/
      v12 = v3 == (char *)v5; /*0x551f13*/
      if ( v3 == (char *)v5 ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = v5->__pad_0[0] == (unsigned __int8)v6; /*0x551f17*/
        v5 = (Pipe *)((char *)v5 + 1); /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5->__pad_0[v29 - 2] ) /*0x551f26*/
      {
        v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        v16 = (char *)&v5[-1].Pipe_field_0x0C + 3; /*0x551f2c*/
        v18 = v28 - v3; /*0x551f30*/
        v17 = v28 == v3; /*0x551f30*/
        do /*0x551f32*/
        {
          if ( !v18 ) /*0x551f32*/
            break; /*0x551f32*/
          v17 = *v3++ == *v16++; /*0x551f32*/
          --v18; /*0x551f32*/
        }
        while ( v17 ); /*0x551f32*/
        if ( v17 ) /*0x551f34*/
          ++v16; /*0x551f36*/
        v3 = v14; /*0x551f37*/
        v19 = (_BYTE *)(v16 - (_BYTE *)v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = (char *)&v15[-1].Pipe_field_0x0C + 3; /*0x551f48*/
        }
        goto LABEL_3; /*0x551f4b*/
      }
    }
    v20 = v31; /*0x551f50*/
    if ( v29 <= 2 ) /*0x551f56*/
    {
      if ( v30 ) /*0x551f8d*/
        goto LABEL_30; /*0x551f8d*/
      while ( 1 ) /*0x551f8f*/
      {
        v27 = v20; /*0x551f8f*/
        *v20++ = 0x80; /*0x551f94*/
LABEL_30:
        if ( *v27 != 0xBF ) /*0x551f9b*/
        {
          ++*v27; /*0x551f9d*/
          v22 = *v3++; /*0x551f9f*/
          *v20 = v22; /*0x551fa0*/
          v4 = v20 + 1; /*0x551fa0*/
          v30 = 1; /*0x551fa1*/
          goto LABEL_35; /*0x551fa8*/
        }
      }
    }
    if ( v29 > 0xA || (unsigned int)(v3 - v25) > 0xFFF ) /*0x551f67*/
    {
      if ( v29 > 0x40 ) /*0x551f7c*/
      {
        *v31 = -1; /*0x551fac*/
        *(_WORD *)(v31 + 1) = v29; /*0x551fb0*/
        v20 = v31 + 3; /*0x551fb0*/
      }
      else
      {
        *v31 = (v29 - 3) | 0xC0; /*0x551f86*/
        v20 = v31 + 1; /*0x551f86*/
      }
      v21 = (_WORD)v25 - (_WORD)aP0; /*0x551fb5*/
    }
    else
    {
      HIBYTE(v21) = (_BYTE)v3 - (_BYTE)v25; /*0x551f75*/
      LOBYTE(v21) = 16 * (v29 - 3) + ((unsigned __int16)((_WORD)v3 - (_WORD)v25) >> 8); /*0x551f75*/
    }
    *(_WORD *)v20 = v21; /*0x551fb8*/
    v4 = v20 + 2; /*0x551fb8*/
    v3 += v29; /*0x551fba*/
    v30 = 0; /*0x551fbd*/
LABEL_35:
    ; /*0x551fc4*/
  }
  while ( v3 < v28 ); /*0x551fc7*/
  *v4 = 0x80; /*0x551fd2*/
  return v4 + 1 - a1; /*0x551fde*/
}


// ==== 0x00551FF0  LCWPipe::Constructor  this=LCWPipe  sig=csp ====
_DWORD *__thiscall LCWPipe_Constructor(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  void *v5; // eax
  size_t v6; // edx

  *(this + 3) = a2; /*0x551ff9*/
  this->LCWPipe_field_0x04 = 0; /*0x552000*/
  *(this + 2) = 0; /*0x552003*/
  this->q010 = 0; /*0x552006*/
  this->q014 = 0; /*0x552009*/
  this->q018 = 0; /*0x55200c*/
  *(this + 7) = a3; /*0x552015*/
  *this = &vt_LCWPipe; /*0x55201a*/
  v4 = a3 / 128 + 1; /*0x552023*/
  if ( v4 < 128 ) /*0x552029*/
    v4 = 128; /*0x55202b*/
  *(this + 8) = v4; /*0x552030*/
  v5 = __2_YAPAXI_Z(a3 + v4); /*0x552036*/
  v6 = *(this + 7) + *(this + 8); /*0x552041*/
  this->q014 = v5; /*0x552043*/
  this->q018 = __2_YAPAXI_Z(v6); /*0x55204f*/
  *((_WORD *)this + 18) = -1; /*0x552052*/
  return this; /*0x55205a*/
}


// ==== 0x00552060  LCWPipe::Dtor  this=LCWPipe  sig=csp ====
int __thiscall LCWPipe_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x552063*/
  *this = (int)&vt_LCWPipe; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  v3 = (void *)*(this + 6); /*0x552072*/
  *(this + 5) = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  *(this + 6) = 0; /*0x552087*/
  return Pipe::Dtor(this); /*0x552093*/
}


// ==== 0x005520A0  LCWPipe::Compress  this=LCWPipe  sig=csp ====
char *__thiscall LCW::Compress(int this, BombClass *aP1, signed int Size)
{
  BombClass *v3; // ebx
  BombClass *v4; // edi
  BombClass *v6; // ebp
  ModemGame *v7; // eax
  BombClass *v8; // ebp
  unsigned __int16 v9; // cx
  ModemGame *v10; // eax
  Pipe *v11; // eax
  BombClass *v13; // eax
  signed int v14; // ebp
  ModemGame *v15; // eax
  int v16; // eax
  __int16 v17; // dx
  Pipe *v18; // ebp
  Pipe *v19; // eax
  int i; // eax
  Pipe *v21; // ebp
  int v22; // eax
  char *v23; // edx
  char *Src; // [esp+10h] [ebp+4h]
  Pipe *Srca; // [esp+10h] [ebp+4h]
  char *Srcb; // [esp+10h] [ebp+4h]

  v3 = aP1; /*0x5520a1*/
  v4 = (BombClass *)Size; /*0x5520a7*/
  if ( !aP1 || Size < 1 ) /*0x5520b8*/
    return (char *)Delegate::Dispatch((_DWORD *)this, (Pipe *)aP1, (Pipe *)Size); /*0x5522bc*/
  Src = 0; /*0x5520c5*/
  if ( *(_DWORD *)(this + 12) == 1 ) /*0x5520cd*/
  {
    while ( 1 ) /*0x5520db*/
    {
      if ( *(_WORD *)(this + 36) == 0xFFFF ) /*0x5520e1*/
      {
        v6 = (BombClass *)(4 - *(_DWORD *)(this + 16)); /*0x5520eb*/
        if ( v4 < v6 ) /*0x5520ef*/
          v6 = v4; /*0x5520f1*/
        memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), (AbstractClass *)v3, (size_t)v6); /*0x5520fe*/
        v3 = (BombClass *)((char *)v3 + (_DWORD)v6); /*0x55210b*/
        v7 = (ModemGame *)&v6->__pad_0[*(_DWORD *)(this + 16)]; /*0x55210d*/
        v4 = (BombClass *)((char *)v4 - (int)v6); /*0x55210f*/
        *(_DWORD *)(this + 16) = v7; /*0x552114*/
        if ( v7 == (ModemGame *)4 ) /*0x552117*/
        {
          memcpy((void *)(this + 36), *(AbstractClass **)(this + 20), 4u); /*0x552123*/
          *(_DWORD *)(this + 16) = 0; /*0x55212b*/
        }
      }
      if ( (int)v4 <= 0 ) /*0x552134*/
        break; /*0x552134*/
      v8 = (BombClass *)(*(unsigned __int16 *)(this + 36) - *(_DWORD *)(this + 16)); /*0x552143*/
      if ( (int)v4 < (int)v8 ) /*0x552147*/
        v8 = v4; /*0x552149*/
      memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), (AbstractClass *)v3, (size_t)v8); /*0x552156*/
      v9 = *(_WORD *)(this + 36); /*0x552160*/
      v10 = (ModemGame *)&v8->__pad_0[*(_DWORD *)(this + 16)]; /*0x552164*/
      v4 = (BombClass *)((char *)v4 - (int)v8); /*0x552169*/
      v3 = (BombClass *)((char *)v3 + (_DWORD)v8); /*0x55216b*/
      *(_DWORD *)(this + 16) = v10; /*0x55216f*/
      if ( v10 == (ModemGame *)v9 ) /*0x552172*/
      {
        BitStreamIOLCW(*(unsigned __int8 **)(this + 20), *(_DWORD *)(this + 24), 0); /*0x55217c*/
        v11 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), (Pipe *)*(unsigned __int16 *)(this + 38)); /*0x55218e*/
        *(_DWORD *)(this + 16) = 0; /*0x552197*/
        *(_WORD *)(this + 36) = -1; /*0x5521a0*/
        Src = &Src[(_DWORD)v11]; /*0x5521a6*/
      }
      if ( (int)v4 <= 0 ) /*0x5521ac*/
        return Src; /*0x5521ba*/
    }
  }
  else
  {
    v13 = *(BombClass **)(this + 16); /*0x5521bd*/
    if ( (int)v13 > 0 ) /*0x5521c2*/
    {
      v14 = *(_DWORD *)(this + 28) - (_DWORD)v13; /*0x5521c7*/
      if ( Size < v14 ) /*0x5521cb*/
        v14 = Size; /*0x5521cd*/
      memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), (AbstractClass *)v3, v14); /*0x5521da*/
      v15 = (ModemGame *)(v14 + *(_DWORD *)(this + 16)); /*0x5521e5*/
      v3 = (BombClass *)((char *)v3 + v14); /*0x5521e7*/
      *(_DWORD *)(this + 16) = v15; /*0x5521e9*/
      v4 = (BombClass *)(Size - v14); /*0x5521f1*/
      if ( v15 == *(ModemGame **)(this + 28) ) /*0x5521f5*/
      {
        v16 = DecompressCoreLCW(*(Pipe **)(this + 20), *(_BYTE **)(this + 24), *(_DWORD *)(this + 28)); /*0x5521fe*/
        v17 = *(_WORD *)(this + 28); /*0x552203*/
        v18 = (Pipe *)v16; /*0x552207*/
        *(_WORD *)(this + 36) = v16; /*0x552211*/
        *(_WORD *)(this + 38) = v17; /*0x552214*/
        Srca = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4); /*0x55221d*/
        v19 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), v18); /*0x552228*/
        *(_DWORD *)(this + 16) = 0; /*0x552231*/
        Src = &Srca->__pad_0[(_DWORD)v19]; /*0x55223a*/
      }
    }
    for ( i = *(_DWORD *)(this + 28); (int)v4 >= i; Src = v23 ) /*0x552243*/
    {
      v21 = (Pipe *)DecompressCoreLCW((Pipe *)v3, *(_BYTE **)(this + 24), i); /*0x552254*/
      v22 = *(_DWORD *)(this + 28); /*0x552256*/
      *(_WORD *)(this + 38) = *(_WORD *)(this + 28); /*0x552259*/
      v3 = (BombClass *)((char *)v3 + v22); /*0x55225d*/
      v4 = (BombClass *)((char *)v4 - v22); /*0x55225f*/
      *(_WORD *)(this + 36) = (_WORD)v21; /*0x552269*/
      Srcb = &Src[(_DWORD)Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4)]; /*0x55227b*/
      v23 = &Srcb[(_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), v21)]; /*0x55228b*/
      i = *(_DWORD *)(this + 28); /*0x55228d*/
    }
    if ( (int)v4 > 0 ) /*0x55229a*/
    {
      memcpy(*(void **)(this + 20), (AbstractClass *)v3, (size_t)v4); /*0x5522a2*/
      *(_DWORD *)(this + 16) = v4; /*0x5522aa*/
    }
  }
  return Src; /*0x5521b7*/
}


// ==== 0x005522D0  LCWPipe::AddRef  this=LCWPipe  sig=csp ====
Pipe *__thiscall LCWPipe_Destru::AddRef(int this)
{
  Pipe *v2; // edi
  int v3; // eax
  Pipe *v4; // ebx
  char *v5; // edi
  char *v6; // edi
  Pipe *v8; // ebx
  Pipe *v9; // edi

  v2 = 0; /*0x5522d5*/
  v3 = *(_DWORD *)(this + 16); /*0x5522d7*/
  if ( v3 > 0 ) /*0x5522dc*/
  {
    if ( *(_DWORD *)(this + 12) == 1 ) /*0x5522e6*/
    {
      v4 = (Pipe *)(this + 36); /*0x5522ee*/
      if ( *(_WORD *)(this + 36) == 0xFFFF ) /*0x5522f1*/
      {
        v2 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 20), *(Pipe **)(this + 16)); /*0x5522ff*/
        *(_DWORD *)(this + 16) = 0; /*0x552301*/
      }
      if ( *(int *)(this + 16) > 0 ) /*0x55230d*/
      {
        v5 = &v2->__pad_0[(_DWORD)Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4)]; /*0x552323*/
        v6 = &v5[(_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 20), *(Pipe **)(this + 16))]; /*0x55232c*/
        *(_DWORD *)(this + 16) = 0; /*0x55232e*/
        *(_WORD *)v4->__pad_0 = -1; /*0x552335*/
        return (Pipe *)&v6[GameClass::GetRelatedObject((_DWORD *)this)]; /*0x552344*/
      }
    }
    else
    {
      v8 = (Pipe *)DecompressCoreLCW(*(Pipe **)(this + 20), *(_BYTE **)(this + 24), v3); /*0x552355*/
      *(_WORD *)(this + 38) = *(_WORD *)(this + 16); /*0x55235a*/
      *(_WORD *)(this + 36) = (_WORD)v8; /*0x552363*/
      v9 = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4); /*0x552372*/
      v2 = (Pipe *)((char *)v9 + (_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), v8)); /*0x552379*/
      *(_DWORD *)(this + 16) = 0; /*0x55237b*/
    }
  }
  return (Pipe *)((char *)v2 + GameClass::GetRelatedObject((_DWORD *)this)); /*0x552341*/
}


// ==== 0x00552390  LCWPipe::QueryInterface  this=LCWPipe  sig=csp ====
LCWPipe *__thiscall LCWPipe_Destru::QueryInterface(int *Block, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*(Block + 5); /*0x552393*/
  *Block = (int)&vt_LCWPipe; /*0x552396*/
  __3_YAXPAX_Z(v3); /*0x55239d*/
  v4 = (void *)*(Block + 6); /*0x5523a2*/
  *(Block + 5) = 0; /*0x5523a5*/
  __3_YAXPAX_Z(v4); /*0x5523ad*/
  *(Block + 6) = 0; /*0x5523b7*/
  Pipe::Dtor(Block); /*0x5523be*/
  if ( (a2 & 1) != 0 ) /*0x5523c8*/
    __3_YAXPAX_Z(Block); /*0x5523cb*/
  return (LCWPipe *)Block; /*0x5523d5*/
}


// ==== 0x005523E0  LCWStraw::Constructor  this=LCWStraw  sig=csp ====
_DWORD *__thiscall LCWStraw_Constructor(_DWORD *this, int a2, int a3)
{
  int v4; // eax

  this->LCWStraw_field_0x04 = 0; /*0x5523f5*/
  *(this + 2) = 0; /*0x5523fa*/
  v4 = a3 / 128 + 1; /*0x552400*/
  *(this + 3) = a2; /*0x552401*/
  *(this + 8) = v4; /*0x552404*/
  *(this + 4) = 0; /*0x55240a*/
  this->q014 = 0; /*0x55240d*/
  this->q018 = 0; /*0x552410*/
  this->q01C = a3; /*0x552413*/
  *this = &vt_LCWStraw; /*0x552416*/
  this->q014 = __2_YAPAXI_Z(a3 + v4); /*0x552426*/
  if ( !a2 ) /*0x552429*/
    this->q018 = __2_YAPAXI_Z(this->q01C + *(this + 8)); /*0x55243c*/
  return this; /*0x552441*/
}


// ==== 0x00552450  LCWStraw::Dtor  this=LCWStraw  sig=csp ====
int __thiscall LCWStraw_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x552453*/
  *this = (int)&vt_LCWStraw; /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  v3 = (void *)*(this + 6); /*0x552462*/
  *(this + 5) = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  *(this + 6) = 0; /*0x552477*/
  return Straw::Dtor(this); /*0x552483*/
}


// ==== 0x00552490  LCWStraw::DecompressReader  this=LCWStraw  sig=csp ====
int __thiscall LCW::DecompressReader(int this, BombClass *aP1, signed int Size)
{
  BombClass *v3; // ebp
  int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  unsigned __int16 *v8; // ebx
  unsigned __int8 *v9; // edi
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  void *v13; // [esp-10h] [ebp-20h]
  int v14; // [esp+Ch] [ebp-4h]

  v3 = aP1; /*0x552493*/
  v14 = 0; /*0x55249c*/
  if ( !aP1 ) /*0x5524a4*/
    return 0; /*0x5524a4*/
  v5 = Size; /*0x5524aa*/
  if ( Size < 1 ) /*0x5524b1*/
    return 0; /*0x5525e3*/
  do /*0x5524c0*/
  {
    v6 = *(_DWORD *)(this + 16); /*0x5524c0*/
    if ( v6 > 0 ) /*0x5524c5*/
    {
      v7 = v5; /*0x5524c9*/
      if ( v5 >= v6 ) /*0x5524cb*/
        v7 = *(_DWORD *)(this + 16); /*0x5524cd*/
      if ( *(_DWORD *)(this + 12) == 1 ) /*0x5524d6*/
        memcpy(v3, (const void *)(*(_DWORD *)(this + 20) + *(unsigned __int16 *)(this + 38) - v6), v7); /*0x5524e6*/
      else
        memcpy(v3, (const void *)(*(_DWORD *)(this + 24) + *(unsigned __int16 *)(this + 36) - v6 + 4), v7); /*0x5524fa*/
      v3 = (BombClass *)((char *)v3 + v7); /*0x552509*/
      v5 -= v7; /*0x55250b*/
      Size = v5; /*0x552511*/
      *(_DWORD *)(this + 16) -= v7; /*0x552515*/
      v14 += v7; /*0x552518*/
    }
    if ( !v5 ) /*0x55251e*/
      break; /*0x55251e*/
    if ( *(_DWORD *)(this + 12) == 1 ) /*0x552528*/
    {
      v8 = (unsigned __int16 *)(this + 36); /*0x55252a*/
      if ( Delegate::Invoke((_DWORD *)this, this + 36, (Straw *)4) != 4 ) /*0x55253a*/
        return v14; /*0x55253a*/
      v9 = (unsigned __int8 *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 28) + *(_DWORD *)(this + 32) - *v8); /*0x552553*/
      if ( Delegate::Invoke((_DWORD *)this, (int)v9, (Straw *)*v8) != *v8 ) /*0x552564*/
        return v14; /*0x552564*/
      BitStreamIOLCW(v9, *(_DWORD *)(this + 20), 0); /*0x55256d*/
      v5 = Size; /*0x552572*/
      *(_DWORD *)(this + 16) = *(unsigned __int16 *)(this + 38); /*0x55257c*/
    }
    else
    {
      v10 = Delegate::Invoke((_DWORD *)this, *(_DWORD *)(this + 20), *(Straw **)(this + 28)); /*0x55258b*/
      *(_WORD *)(this + 38) = v10; /*0x552593*/
      if ( !v10 ) /*0x552597*/
        return v14; /*0x552597*/
      v11 = DecompressCoreLCW(*(_BYTE **)(this + 20), (_BYTE *)(*(_DWORD *)(this + 24) + 4), v10); /*0x5525ab*/
      v13 = *(void **)(this + 24); /*0x5525b6*/
      *(_WORD *)(this + 36) = v11; /*0x5525b7*/
      memcpy(v13, (const void *)(this + 36), 4u); /*0x5525ba*/
      *(_DWORD *)(this + 16) = *(unsigned __int16 *)(this + 36) + 4; /*0x5525ca*/
    }
  }
  while ( v5 > 0 ); /*0x5524c0*/
  return v14; /*0x5525da*/
}


// ==== 0x005525F0  LCWStraw::QueryInterface  this=LCWStraw  sig=csp ====
LCWStraw *__thiscall LCWStraw_Destru::QueryInterface(int *Block, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*(Block + 5); /*0x5525f3*/
  *Block = (int)&vt_LCWStraw; /*0x5525f6*/
  __3_YAXPAX_Z(v3); /*0x5525fd*/
  v4 = (void *)*(Block + 6); /*0x552602*/
  *(Block + 5) = 0; /*0x552605*/
  __3_YAXPAX_Z(v4); /*0x55260d*/
  *(Block + 6) = 0; /*0x552617*/
  Straw::Dtor(Block); /*0x55261e*/
  if ( (a2 & 1) != 0 ) /*0x552628*/
    __3_YAXPAX_Z(Block); /*0x55262b*/
  return (LCWStraw *)Block; /*0x552635*/
}


// ==== 0x00552640  sub_552640  this=-  sig=ida-proto ====
unsigned int __cdecl sub_552640(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned __int8 v5; // al
  _BYTE *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned __int8 v10; // al
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // edi
  _BYTE *v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // ecx
  unsigned int v31; // ebx
  _BYTE *v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // edi

  v3 = a2; /*0x552649*/
  v4 = a2; /*0x55264f*/
  while ( 1 ) /*0x552699*/
  {
    while ( 1 ) /*0x552660*/
    {
      while ( 1 ) /*0x552657*/
      {
        v5 = *a1++; /*0x552657*/
        if ( (v5 & 0x80u) != 0 ) /*0x552660*/
          break; /*0x552660*/
        v6 = (_BYTE *)(v4 - ((v5 & 0xF) << 8) - *a1++); /*0x552681*/
        if ( v5 >> 4 != -3 ) /*0x552689*/
        {
          v7 = (v5 >> 4) + 3; /*0x55268b*/
          do /*0x552693*/
          {
            *(_BYTE *)v4++ = *v6++; /*0x55268e*/
            --v7; /*0x552692*/
          }
          while ( v7 ); /*0x552693*/
        }
      }
      if ( (v5 & 0x40) == 0 ) /*0x552699*/
        break; /*0x552699*/
      if ( v5 == 0xFE ) /*0x5526bb*/
      {
        v10 = a1[2]; /*0x5526cc*/
        v11 = *a1 + (a1[1] << 8); /*0x5526d6*/
        a1 += 3; /*0x5526e9*/
        v12 = 16843009 * v10; /*0x5526fd*/
        v13 = (v4 & 3) - 4; /*0x552708*/
        v14 = v13 + v11; /*0x55270a*/
        if ( v4 < v4 - (v4 & 3) + 4 ) /*0x552712*/
        {
          LOBYTE(v13) = v10; /*0x552714*/
          BYTE1(v13) = v10; /*0x552718*/
          v15 = v13 << 16; /*0x552722*/
          LOWORD(v15) = v13; /*0x552727*/
          v16 = (4 - (v4 & 3)) >> 2; /*0x55272a*/
          memset32((void *)v4, v15, v16); /*0x55272d*/
          memset((void *)(v4 + 4 * v16), v13, (4 - (v4 & 3)) & 3); /*0x552734*/
          v4 += 4 - (v4 & 3); /*0x552740*/
          v10 = v13; /*0x552742*/
        }
        v17 = (_DWORD *)v4; /*0x552746*/
        HIWORD(v18) = HIWORD(v14); /*0x552748*/
        for ( v4 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v4; v17 += 2 ) /*0x55274f*/
        {
          *v17 = v12; /*0x552751*/
          v17[1] = v12; /*0x552753*/
        }
        v19 = v4 + (v14 & 3); /*0x552760*/
        if ( v4 < v19 ) /*0x552764*/
        {
          LOBYTE(v18) = v10; /*0x55276a*/
          BYTE1(v18) = v10; /*0x55276e*/
          v20 = v18 << 16; /*0x552776*/
          LOWORD(v20) = v18; /*0x55277f*/
          v21 = (v19 - v4) >> 2; /*0x552782*/
          memset32((void *)v4, v20, v21); /*0x552785*/
          memset((void *)(v4 + 4 * v21), v18, ((_BYTE)v19 - (_BYTE)v4) & 3); /*0x55278c*/
          v4 = v19; /*0x552790*/
        }
        v3 = a2; /*0x552653*/
      }
      else if ( v5 == 0xFF ) /*0x552799*/
      {
        v22 = *a1 + (a1[1] << 8); /*0x5527a7*/
        v23 = a1[3]; /*0x5527b0*/
        v24 = a1[2]; /*0x5527b4*/
        a1 += 4; /*0x5527b7*/
        v25 = (v23 << 8) + v3; /*0x5527bd*/
        v26 = v22; /*0x5527bf*/
        v27 = (_BYTE *)(v25 + v24); /*0x5527c1*/
        v28 = v22 - 1; /*0x5527c3*/
        if ( v26 ) /*0x5527c6*/
        {
          v29 = v28 + 1; /*0x5527cc*/
          do /*0x5527d6*/
          {
            *(_BYTE *)v4++ = *v27++; /*0x5527d1*/
            --v29; /*0x5527d5*/
          }
          while ( v29 ); /*0x5527d6*/
        }
      }
      else
      {
        v30 = *a1; /*0x5527eb*/
        v31 = (a1[1] << 8) + v3; /*0x5527f3*/
        a1 += 2; /*0x5527f5*/
        v32 = (_BYTE *)(v31 + v30); /*0x5527f8*/
        v33 = (v5 & 0x3F) + 3; /*0x5527fa*/
        v34 = (v5 & 0x3F) + 2; /*0x5527fc*/
        if ( v33 ) /*0x5527ff*/
        {
          v35 = v34 + 1; /*0x552805*/
          do /*0x55280f*/
          {
            *(_BYTE *)v4++ = *v32++; /*0x55280a*/
            --v35; /*0x55280e*/
          }
          while ( v35 ); /*0x55280f*/
        }
      }
    }
    if ( v5 == 0x80 ) /*0x55269b*/
      break; /*0x55269b*/
    v8 = v5 & 0x3F; /*0x5526a6*/
    if ( v8 ) /*0x5526ab*/
    {
      v9 = v8; /*0x5526ad*/
      do /*0x5526b5*/
      {
        *(_BYTE *)v4++ = *a1++; /*0x5526b0*/
        --v9; /*0x5526b4*/
      }
      while ( v9 ); /*0x5526b5*/
    }
  }
  return v4 - v3; /*0x552818*/
}


// ==== 0x00552830  sub_552830  this=-  sig=ida-proto ====
int sub_552830()
{
  dword_ABC948 = 0; /*0x552832*/
  dword_ABC94C = 0; /*0x552837*/
  dword_ABC950 = 0; /*0x55283c*/
  dword_ABC954 = 0; /*0x552841*/
  return 0; /*0x552846*/
}


// ==== 0x00552850  sub_552850  this=-  sig=ida-proto ====
void sub_552850()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55285c*/
  dbl_ABC960 = Math::Sqrt(v0 + v0); /*0x55286e*/
}


// ==== 0x00552880  sub_552880  this=-  sig=ida-proto ====
void sub_552880()
{
  dbl_ABC9B0 = dbl_ABC960 / 60.0; /*0x55288c*/
}


// ==== 0x005528A0  sub_5528A0  this=-  sig=ida-proto ====
void sub_5528A0()
{
  dbl_ABC998 = 1.0 / dbl_ABC9B0; /*0x5528ac*/
}


// ==== 0x005528C0  sub_5528C0  this=-  sig=ida-proto ====
void sub_5528C0()
{
  dbl_ABC990 = 0.0174532925199433 * 45.0; /*0x5528cc*/
}


// ==== 0x005528E0  sub_5528E0  this=-  sig=ida-proto ====
void sub_5528E0()
{
  dbl_ABC968 = 0.0174532925199433 * 60.0; /*0x5528ec*/
}


// ==== 0x00552900  sub_552900  this=-  sig=ida-proto ====
void sub_552900()
{
  dbl_ABC940 = 0.0174532925199433 * 90.0; /*0x55290c*/
}


// ==== 0x00552920  sub_552920  this=-  sig=ida-proto ====
__int64 sub_552920()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC940 - dbl_ABC968); /*0x552932*/
  result = Math::RoundToInt(v0 * dbl_ABC960 * 0.5); /*0x552946*/
  dword_ABC9B8 = result; /*0x55294b*/
  return result; /*0x552950*/
}


// ==== 0x00552960  sub_552960  this=-  sig=ida-proto ====
void sub_552960()
{
  dbl_ABC970 = Math::ArcTan((double)dword_ABC9B8 * 0.00390625); /*0x552977*/
}


// ==== 0x00552990  sub_552990  this=-  sig=ida-proto ====
void sub_552990()
{
  dbl_ABC988 = Math::ArcTan((double)(2 * dword_ABC9B8) / dbl_ABC960); /*0x5529b2*/
}


// ==== 0x005529C0  sub_5529C0  this=-  sig=ida-proto ====
__int64 sub_5529C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC9B8) + 0.5); /*0x5529db*/
  dword_ABC9AC = result; /*0x5529e0*/
  return result; /*0x5529e6*/
}


// ==== 0x005529F0  sub_5529F0  this=-  sig=ida-proto ====
int sub_5529F0()
{
  word_ABC958 = 0; /*0x5529f2*/
  word_ABC95A = 0; /*0x5529f8*/
  return 0; /*0x5529fe*/
}


// ==== 0x00552A00  sub_552A00  this=-  sig=ida-proto ====
int sub_552A00()
{
  dword_ABC978 = 0; /*0x552a02*/
  dword_ABC97C = 0; /*0x552a07*/
  dword_ABC980 = 0; /*0x552a0c*/
  return 0; /*0x552a11*/
}


// ==== 0x00552A20  sub_552A20  this=-  sig=ida-proto ====
int sub_552A20()
{
  dword_ABC9A8 = 0; /*0x552a25*/
  dword_ABC9A0 = 128; /*0x552a2f*/
  dword_ABC9A4 = 128; /*0x552a34*/
  return 128; /*0x552a39*/
}


// ==== 0x00552A40  LoadProgressMgr::GetInstance  this=LoadProgressMgr  sig=ida-proto ====
_DWORD *LoadProgressMgr::GetInstance()
{
  _DWORD *result; // eax

  result = dword_ABC9BC; /*0x552a40*/
  if ( !dword_ABC9BC ) /*0x552a4a*/
  {
    result = __2_YAPAXI_Z(0x64u); /*0x552a4e*/
    if ( result ) /*0x552a58*/
    {
      *result = &LoadProgressMgr::`vftable'; /*0x552a5a*/
      result[1] = 0; /*0x552a60*/
      result[2] = 0; /*0x552a63*/
      result[15] = 0; /*0x552a66*/
      result[16] = 0; /*0x552a69*/
      result[17] = 0; /*0x552a6c*/
      result[18] = 0; /*0x552a6f*/
      result[19] = 0; /*0x552a72*/
      *((_BYTE *)result + 80) = 0; /*0x552a75*/
      *((_BYTE *)result + 81) = 0; /*0x552a78*/
      *((_BYTE *)result + 82) = 0; /*0x552a7b*/
      result[21] = 0; /*0x552a7e*/
      result[22] = 0; /*0x552a81*/
      result[23] = 0; /*0x552a84*/
      result[24] = 0; /*0x552a87*/
      dword_ABC9BC = result; /*0x552a8a*/
    }
    else
    {
      dword_ABC9BC = 0; /*0x552a93*/
      return 0; /*0x552a91*/
    }
  }
  return result; /*0x552a8f*/
}


// ==== 0x00552AA0  LoadProgressMgr::Destroy  this=LoadProgressMgr  sig=ida-proto ====
void LoadProgressMgr::Destroy()
{
  if ( dword_ABC9BC ) /*0x552aa8*/
  {
    LoadProgressMgr::ReleaseBuffer(dword_ABC9BC); /*0x552aaa*/
    __3_YAXPAX_Z(dword_ABC9BC); /*0x552ab5*/
  }
  dword_ABC9BC = 0; /*0x552abd*/
}


// ==== 0x00552B10  Scenario::ComputeDisplayPosition  this=int  sig=csp ====
int __thiscall sub_552B10(_DWORD *this)
{
  int v1; // ebp
  int v2; // edi
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // eax

  v1 = MEMORY[0x8A00A4]; /*0x552b12*/
  v2 = 640; /*0x552b20*/
  if ( MEMORY[0x8A00A4] != 640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( MEMORY[0xA8B238][0] ) /*0x552b3b*/
  {
    v9 = 480; /*0x552b9a*/
    if ( MEMORY[0x8A00A4] != 640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    v10 = MEMORY[0x8A00A8]; /*0x552baa*/
    *(this + 9) = v2; /*0x552baf*/
    *(this + 10) = v9; /*0x552bb4*/
    *(this + 8) = (v10 - v9) / 2; /*0x552bc6*/
    result = (v1 - v2) / 2; /*0x552bc9*/
    *(this + 7) = result; /*0x552bcd*/
  }
  else
  {
    v3 = 480; /*0x552b3f*/
    if ( MEMORY[0x8A00A4] != 640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    v4 = v3 - 80; /*0x552b4b*/
    v5 = MEMORY[0x8A00A8] - (v3 - 80); /*0x552b5c*/
    *(this + 5) = v2; /*0x552b5e*/
    *(this + 9) = v2; /*0x552b64*/
    v6 = (v5 - 80) / 2; /*0x552b6f*/
    *(this + 4) = v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    v7 = (v1 - v2) / 2; /*0x552b76*/
    *(this + 13) = v2; /*0x552b78*/
    *(this + 3) = v7; /*0x552b7b*/
    *(this + 7) = v7; /*0x552b7e*/
    *(this + 8) = v6; /*0x552b81*/
    *(this + 11) = v7; /*0x552b84*/
    result = v4 + v6; /*0x552b88*/
    *(this + 10) = v4; /*0x552b8b*/
    *(this + 6) = 40; /*0x552b8f*/
    *(this + 12) = result; /*0x552b92*/
    *(this + 14) = 40; /*0x552b95*/
  }
  return result; /*0x552b87*/
}


// ==== 0x00552BE0  Scenario::ComputeDialogPos  this=int  sig=csp ====
_DWORD *__thiscall sub_552BE0(int *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h] BYREF

  if ( MEMORY[0xA8B238][0] ) /*0x552beb*/
  {
    v6 = Copy8Bytes(&v11, this + 7); /*0x552c3b*/
    v7 = *v6; /*0x552c40*/
    v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( MEMORY[0x8A00A4] == 640 ) /*0x552c52*/
    {
      v9 = v7 + 12; /*0x552c58*/
      v10 = v8 + 256; /*0x552c5b*/
    }
    else
    {
      v9 = v7 + 16; /*0x552c71*/
      v10 = v8 + 321; /*0x552c74*/
    }
    *a2 = v9; /*0x552c62*/
    a2[1] = v10; /*0x552c64*/
  }
  else
  {
    v2 = *(this + 11); /*0x552bf8*/
    v3 = *(this + 12); /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( MEMORY[0x8A00A4] == 640 ) /*0x552bfd*/
      v5 = v2 + 84; /*0x552c06*/
    else
      v5 = v2 + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = v3 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/
}


// ==== 0x00552C90  Map::Load  this=int  sig=ida-proto ====
int sub_552C90()
{
  int result; // eax

  result = -1; /*0x552c96*/
  if ( MEMORY[0xA8B238][0] )
    return MEMORY[0x8A00A4] != 640 ? 406 : 326;
  return result; /*0x552cb6*/
}


// ==== 0x00552CC0  SessionClass::Load  this=int  sig=csp ====
_DWORD *__thiscall sub_552CC0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  char *v7; // ecx

  if ( *(this + 2)
    || ((Debug::Log_0(MEMORY[0x8298D0]), (v2 = __2_YAPAXI_Z(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, MEMORY[0x8298C4], (int)MEMORY[0x886980])),
        (*(this + 2) = result) != 0) )
  {
    if ( *(this + 1)
      || ((v4 = __2_YAPAXI_Z(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, stru_8298B8, (int)MEMORY[0x886980])),
          (*(this + 1) = result) != 0) )
    {
      if ( MEMORY[0xA8B238][0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0xA8DA78]); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((_DWORD *)MEMORY[0xA8B230] + 3374); /*0x72b3e8*/
        if ( !MEMORY[0xB0FB80] ) /*0x72b3ea*/
          LoadPaletteSimple(MEMORY[0x844BAC], &MEMORY[0xB0FB7C], &MEMORY[0xB0FB80]); /*0x72b3fc*/
        if ( !MEMORY[0xB0FB88] ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = MEMORY[0x844BB4][0]; /*0x72b420*/
            if ( v6 != 1 ) /*0x72b433*/
              v7 = MEMORY[0x844BB8]; /*0x72b435*/
            LoadPaletteSimple(v7, &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(MEMORY[0x844BB0][0], &MEMORY[0xB0FB84], &MEMORY[0xB0FB88]); /*0x72b41e*/
          }
        }
        result = (_DWORD *)MEMORY[0xB0FB90]; /*0x72b440*/
        if ( !MEMORY[0xB0FB90] ) /*0x72b448*/
          return (_DWORD *)LoadPaletteSimple(MEMORY[0x844BBC], &MEMORY[0xB0FB8C], &MEMORY[0xB0FB90]); /*0x72b45a*/
      }
    }
  }
  return result; /*0x552d5d*/
}


// ==== 0x00552D60  LoadingScreen::Render  this=Tactical  sig=csp ====
const #72 *__thiscall LoadingScreen::Render(_DWORD *this)
{
  const #72 *result; // eax
  const #72 *v3; // esi
  int v4; // ebx
  int v5; // edi
  char *v6; // ebx
  int Value; // esi
  char *BackgroundImage; // edi
  char *OverlayImage; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // ebx
  _DWORD *_72B380; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int LoadScreenAnim; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // edi
  int v25; // ebx
  int v26; // ebp
  _BYTE *v27; // eax
  int PlayerSide; // ebx
  char *v29; // eax
  _DWORD *v30; // edi
  void *v31; // ecx
  int v32; // eax
  char **v33; // esi
  int *v34; // eax
  int v35; // edx
  int ColorScheme; // eax
  int v37; // eax
  unsigned __int16 *StringCSF; // edi
  int v39; // ecx
  int v40; // esi
  int *v41; // eax
  int v42; // esi
  int v43; // edx
  int v44; // ebx
  int v45; // esi
  _DWORD *v46; // ebx
  _BYTE *v47; // eax
  #72 *v48; // eax
  unsigned __int16 *i; // ecx
  unsigned __int16 v50; // ax
  int v51; // esi
  int v52; // edi
  _BYTE *v53; // eax
  unsigned __int16 *v54; // esi
  int *v55; // eax
  _DWORD *v56; // edi
  int v57; // ebx
  int v58; // ecx
  unsigned __int16 *v59; // esi
  int *v60; // eax
  int *v61; // eax
  char v62; // [esp+14h] [ebp-1268h]
  int v63; // [esp+18h] [ebp-1264h]
  int *v64; // [esp+1Ch] [ebp-1260h]
  __int16 v65; // [esp+24h] [ebp-1258h]
  int v66; // [esp+24h] [ebp-1258h]
  _DWORD *v67; // [esp+24h] [ebp-1258h]
  int v68; // [esp+24h] [ebp-1258h]
  int v69; // [esp+24h] [ebp-1258h]
  _DWORD *v70; // [esp+24h] [ebp-1258h]
  int v71; // [esp+24h] [ebp-1258h]
  unsigned __int8 v72; // [esp+26h] [ebp-1256h]
  int v73; // [esp+2Ch] [ebp-1250h] BYREF
  int v74; // [esp+30h] [ebp-124Ch] BYREF
  int v75; // [esp+34h] [ebp-1248h]
  int v76; // [esp+38h] [ebp-1244h]
  int v77; // [esp+3Ch] [ebp-1240h]
  _DWORD *v78; // [esp+40h] [ebp-123Ch] BYREF
  int v79; // [esp+44h] [ebp-1238h]
  int v80; // [esp+48h] [ebp-1234h] BYREF
  int v81; // [esp+4Ch] [ebp-1230h] BYREF
  int v82; // [esp+50h] [ebp-122Ch] BYREF
  int v83; // [esp+54h] [ebp-1228h]
  _DWORD *v84; // [esp+58h] [ebp-1224h]
  _DWORD *v85; // [esp+5Ch] [ebp-1220h]
  int v86; // [esp+60h] [ebp-121Ch] BYREF
  int v87; // [esp+64h] [ebp-1218h]
  int v88; // [esp+68h] [ebp-1214h]
  int v89; // [esp+6Ch] [ebp-1210h]
  int v90; // [esp+70h] [ebp-120Ch] BYREF
  int v91; // [esp+74h] [ebp-1208h]
  int v92[2]; // [esp+78h] [ebp-1204h] BYREF
  __int64 v93; // [esp+80h] [ebp-11FCh]
  int v94[2]; // [esp+88h] [ebp-11F4h] BYREF
  int v95; // [esp+90h] [ebp-11ECh]
  int v96; // [esp+94h] [ebp-11E8h]
  char Buffer[32]; // [esp+98h] [ebp-11E4h] BYREF
  void *v98[3]; // [esp+B8h] [ebp-11C4h] BYREF
  char v99[28]; // [esp+C4h] [ebp-11B8h] BYREF
  char v100[20]; // [esp+E0h] [ebp-119Ch] BYREF
  int v101; // [esp+F4h] [ebp-1188h]
  char v102; // [esp+F8h] [ebp-1184h]
  _DWORD v103[22]; // [esp+110h] [ebp-116Ch] BYREF
  _DWORD v104[5]; // [esp+168h] [ebp-1114h] BYREF
  unsigned __int16 v105[128]; // [esp+17Ch] [ebp-1100h] BYREF
  unsigned __int16 Destination[2048]; // [esp+27Ch] [ebp-1000h] BYREF

  HIBYTE(v79) = MEMORY[0x87F7E8][33327] == 640; /*0x552d7f*/
  result = (const #72 *)__2_YAPAXI_Z(32); /*0x552d84*/
  v3 = result; /*0x552d89*/
  if ( result ) /*0x552d92*/
  {
    v4 = MEMORY[0x87F7E8][33328]; /*0x552d94*/
    v5 = MEMORY[0x87F7E8][33327]; /*0x552d9a*/
    Surface::Construct(result, MEMORY[0x87F7E8][33327], MEMORY[0x87F7E8][33328]); /*0x552da4*/
    *((_DWORD *)v3 + 3) = 0; /*0x552db4*/
    *(_DWORD *)v3 = &XSurface_Vtable; /*0x552dbb*/
    *((_DWORD *)v3 + 4) = 2; /*0x552dc1*/
    result = (const #72 *)Buffer::Init((_DWORD *)v3 + 5, 0, 2 * v4 * v5); /*0x552dc8*/
    *(_DWORD *)v3 = &BSurface_Vtable; /*0x552dcd*/
  }
  else
  {
    v3 = 0; /*0x552dd7*/
  }
  *(this + 24) = v3; /*0x552ddb*/
  if ( v3 ) /*0x552dde*/
  {
    v92[0] = 0; /*0x552df3*/
    v92[1] = 0; /*0x552df9*/
    v93 = *(_QWORD *)&MEMORY[0x87F7E8][33327]; /*0x552e3f*/
    v80 = (BYTE1(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x552e4f*/
        | (BYTE2(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
        | (HIBYTE(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
    (*(void (__thiscall **)(const #72 *, int *, int *, int))(*(_DWORD *)v3 + 16))(v3, v92, v92, v80); /*0x552e62*/
    if ( MEMORY[0x87F7E8][536212] ) /*0x552e6b*/
    {
      PlayerSide = SessionClass::GetPlayerSide(*(_DWORD *)MEMORY[0x87F7E8][538788]); /*0x553319*/
      v81 = PlayerSide; /*0x55331d*/
      if ( MEMORY[0x87F7E8][536213] /*0x553363*/
        && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 8))(MEMORY[0x87F7E8][536213])
        && (v73 = 0,
            CampaignClass::FindMission((int)&MEMORY[0x87F7E8][32588], (char *)&MEMORY[0x87F7E8][536638], &v73),
            String::Length((const char **)(v73 + 72)))
        && String::Length((const char **)(v73 + 68)) )
      {
        v29 = String::GetOrEmpty((char **)(v73 + 72)); /*0x553373*/
        Palette::LoadFile(v29); /*0x55337a*/
        v68 = Render_Render_72B520(); /*0x553388*/
        strcpy(Buffer, String::GetOrEmpty((char **)(v73 + 68))); /*0x5533b1*/
        v30 = (_DWORD *)v68; /*0x5533ba*/
      }
      else
      {
        v31 = off_8297D4; /*0x5533d2*/
        if ( MEMORY[0x87F7E8][33327] != 640 ) /*0x5533d8*/
          v31 = off_8297D8; /*0x5533da*/
        if ( (MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4) /*0x5533fb*/
          && *(_DWORD *)(*(_DWORD *)MEMORY[0x87F7E8][538788] + 107) == -1 )
        {
          sprintf(Buffer, off_8297CC[0], v31); /*0x55340d*/
        }
        else if ( PlayerSide ) /*0x553414*/
        {
          switch ( PlayerSide ) /*0x553424*/
          {
            case 1: /*0x553424*/
              sprintf(Buffer, off_8297BC[0], v31); /*0x553436*/
              break;
            case 2: /*0x553424*/
              sprintf(Buffer, off_8297B0[0], v31); /*0x553450*/
              break;
            case 3: /*0x553424*/
              sprintf(Buffer, off_8297B4[0], v31); /*0x553460*/
              break;
            case 4: /*0x553424*/
              sprintf(Buffer, off_8297A8[0], v31); /*0x553477*/
              break;
            case 5: /*0x553424*/
              sprintf(Buffer, off_8297C0[0], v31); /*0x55348e*/
              break;
            case 6: /*0x553424*/
              sprintf(Buffer, off_8297B8[0], v31); /*0x55349b*/
              break;
            case 7: /*0x553424*/
              sprintf(Buffer, off_8297AC[0], v31); /*0x5534b2*/
              break;
            case 8: /*0x553424*/
              sprintf(Buffer, off_8297C4[0], v31); /*0x5534c9*/
              break;
            case 9: /*0x553424*/
              sprintf(Buffer, off_8297D0, v31); /*0x5534df*/
              break;
          }
        }
        else
        {
          sprintf(Buffer, off_8297C8, v31); /*0x55341c*/
        }
        v30 = (_DWORD *)Render_Render_72B500(); /*0x5534ec*/
      }
      *(this + 18) = LoadFileSHP(Buffer, (bool *)this + 81); /*0x553504*/
      v98[1] = 0; /*0x553507*/
      v98[2] = 0; /*0x55350e*/
      INISectionList::Constructor(v99); /*0x553515*/
      Node::Init(v100); /*0x553521*/
      v101 = 0; /*0x553532*/
      v102 = 0; /*0x553539*/
      v98[0] = &CCINIClass_Vtable; /*0x553541*/
      CCFileClass::Construct(v103, (char *)&MEMORY[0x87F7E8][536638]); /*0x55354c*/
      CCINIClass::Load((char *)v98, (int)v103, 1, 0); /*0x553563*/
      v32 = __2_YAPAXI_Z(4); /*0x55356a*/
      if ( v32 ) /*0x553574*/
        v33 = (char **)unknown_libname_27(v32); /*0x55357d*/
      else
        v33 = 0; /*0x553581*/
      if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13501) ) /*0x553588*/
        Surface::LoadToSurfaceSHP(v33, ExistingFileName); /*0x553599*/
      else
        PreviewClass::ReadPreview(v33, (char *)&MEMORY[0x87F7E8][536638]); /*0x5535a7*/
      v34 = Copy8Bytes(&v74, this + 7); /*0x5535b3*/
      v90 = *v34; /*0x5535ba*/
      v91 = v34[1]; /*0x5535c3*/
      if ( v30 ) /*0x5535c7*/
      {
        v35 = *(this + 18); /*0x5535c9*/
        if ( v35 ) /*0x5535ce*/
          DrawToSurfaceSHP((int *)*(this + 24), v30, v35, 0, &v90, v92, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x5535fe*/
      }
      ColorScheme = LoadingScreen::GetColorScheme(&dword_A8ED54[55425]); /*0x553608*/
      v37 = Color::ConvertToRGB((unsigned __int8 *)(ColorScheme + 776), (int)&v73); /*0x553618*/
      v80 = ((unsigned __int8)*(_WORD *)v37 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x55367f*/
          | ((unsigned __int8)HIBYTE(*(_WORD *)v37) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
          | (*(unsigned __int8 *)(v37 + 2) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
      Tactical::Radar_Render((int **)v33, PlayerSide, (int)this, (int)v30, *(this + 24), v62, v63, v64); /*0x553687*/
      if ( v33 ) /*0x55368e*/
      {
        ComPtr::Dtor(v33); /*0x553692*/
        __3_YAXPAX_Z(v33); /*0x553698*/
      }
      if ( (MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4) /*0x5536bb*/
        && *(_DWORD *)(*(_DWORD *)MEMORY[0x87F7E8][538788] + 107) == -1 )
      {
        StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameObserver, 0, g_Str_File_LdPrgMgr_cpp, 178); /*0x5536d3*/
      }
      else if ( PlayerSide ) /*0x5536dc*/
      {
        switch ( PlayerSide ) /*0x5536fe*/
        {
          case 1: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameAlliance, 0, g_Str_File_LdPrgMgr_cpp, 185); /*0x553716*/
            break;
          case 2: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameFrench, 0, g_Str_File_LdPrgMgr_cpp, 187); /*0x553738*/
            break;
          case 3: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameGermans, 0, g_Str_File_LdPrgMgr_cpp, 189); /*0x55375a*/
            break;
          case 4: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameBritish, 0, g_Str_File_LdPrgMgr_cpp, 191); /*0x55377c*/
            break;
          case 5: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameAfricans, 0, g_Str_File_LdPrgMgr_cpp, 193); /*0x55379e*/
            break;
          case 6: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameArabs, 0, g_Str_File_LdPrgMgr_cpp, 195); /*0x5537bd*/
            break;
          case 7: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameConfederat, 0, g_Str_File_LdPrgMgr_cpp, 197); /*0x5537dc*/
            break;
          case 8: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameRussians, 0, g_Str_File_LdPrgMgr_cpp, 199); /*0x5537fb*/
            break;
          case 9: /*0x5536fe*/
            StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameYuricountr, 0, g_Str_File_LdPrgMgr_cpp, 201); /*0x55381a*/
            break;
          default:
            StringCSF = 0; /*0x55381e*/
            break;
        }
      }
      else
      {
        StringCSF = (unsigned __int16 *)GetStringCSF((#72 *)aNameAmericans, 0, g_Str_File_LdPrgMgr_cpp, 183); /*0x5536f4*/
      }
      if ( MEMORY[0x87F7E8][33327] == 640 ) /*0x55382d*/
      {
        v39 = 385; /*0x55382f*/
        v40 = 436; /*0x553834*/
      }
      else
      {
        v39 = 540; /*0x55383b*/
        v40 = 310; /*0x553840*/
      }
      if ( MEMORY[0x87F7E8][33327] >= 800 ) /*0x553852*/
      {
        v39 += (MEMORY[0x87F7E8][33327] - 800) / 2; /*0x553861*/
        v40 += (MEMORY[0x87F7E8][33328] - 600) / 2; /*0x55386f*/
      }
      v86 = v39; /*0x553871*/
      v87 = v40; /*0x553882*/
      v88 = 200; /*0x553886*/
      v89 = 20; /*0x55388a*/
      v41 = Copy8Bytes(&v74, &v86); /*0x55388e*/
      v90 = *v41; /*0x553895*/
      v91 = v41[1]; /*0x5538a0*/
      v42 = *v41; /*0x5538a4*/
      v43 = *(this + 24); /*0x5538a9*/
      v75 = v41[1]; /*0x5538ac*/
      v44 = v88; /*0x5538b2*/
      v78 = 0; /*0x5538b4*/
      v73 = 0; /*0x5538b8*/
      v69 = v43; /*0x5538ce*/
      Text::Layout((_DWORD *)MEMORY[0x87F7E8][29498], StringCSF, (int *)&v78, &v73, v88); /*0x5538d2*/
      v83 = v75; /*0x5538e9*/
      v85 = (_DWORD *)v73; /*0x5538ed*/
      v84 = v78; /*0x5538fc*/
      v82 = v44 + v42 - (_DWORD)v78; /*0x553900*/
      Rect::Inflate(); /*0x553904*/
      DSurface::FillRectWithColor(&v82, v69, 0, 0x9Fu); /*0x553918*/
      v82 = v86; /*0x553929*/
      v83 = v87; /*0x55392f*/
      v84 = (_DWORD *)(v88 + v86); /*0x553933*/
      v85 = (_DWORD *)(v87 + v89); /*0x553944*/
      v45 = *(this + 24); /*0x55394e*/
      v46 = (_DWORD *)MEMORY[0x87F7E8][29498]; /*0x55395a*/
      v47 = Palette::6BitTo16Bit( /*0x55398f*/
              &v73,
              (unsigned __int8)((unsigned __int16)v80 >> SLOBYTE(MEMORY[0x87F7E8][34170])) << SLOBYTE(MEMORY[0x87F7E8][34171]),
              (unsigned __int8)((unsigned __int16)v80 >> SLOBYTE(MEMORY[0x87F7E8][34174])) << SLOBYTE(MEMORY[0x87F7E8][34175]),
              (unsigned __int8)((unsigned __int16)v80 >> SLOBYTE(MEMORY[0x87F7E8][34172])) << SLOBYTE(MEMORY[0x87F7E8][34173]));
      PrintFontLayout( /*0x5539df*/
        v45,
        StringCSF,
        &v82,
        v46,
        (unsigned __int8)*(_WORD *)v47
      | (((unsigned __int8)HIBYTE(*(_WORD *)v47) | ((unsigned __int8)v47[2] << 8)) << 8),
        2,
        12,
        0,
        0,
        0);
      if ( MEMORY[0x87F7E8][536212] != 3 && MEMORY[0x87F7E8][536212] != 4 /*0x5539ff*/
        || *(_DWORD *)(*(_DWORD *)MEMORY[0x87F7E8][538788] + 107) != -1 )
      {
        if ( v81 ) /*0x553a0b*/
        {
          switch ( v81 ) /*0x553a2b*/
          {
            case 1: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameBeagle, 0, g_Str_File_LdPrgMgr_cpp, 249); /*0x553a3e*/
              break;
            case 2: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameGtgcan, 0, g_Str_File_LdPrgMgr_cpp, 251); /*0x553a5e*/
              break;
            case 3: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameTnkd, 0, g_Str_File_LdPrgMgr_cpp, 253); /*0x553a7e*/
              break;
            case 4: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameSnipe, 0, g_Str_File_LdPrgMgr_cpp, 255); /*0x553a9e*/
              break;
            case 5: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameDtruck, 0, g_Str_File_LdPrgMgr_cpp, 257); /*0x553abe*/
              break;
            case 6: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameDeso, 0, g_Str_File_LdPrgMgr_cpp, 259); /*0x553adb*/
              break;
            case 7: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameTerror, 0, g_Str_File_LdPrgMgr_cpp, 261); /*0x553af8*/
              break;
            case 8: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameTtnk, 0, g_Str_File_LdPrgMgr_cpp, 263); /*0x553b15*/
              break;
            case 9: /*0x553a2b*/
              v48 = GetStringCSF((#72 *)aNameYuri, 0, g_Str_File_LdPrgMgr_cpp, 265); /*0x553b32*/
              break;
            default:
              v48 = 0; /*0x553b39*/
              break;
          }
        }
        else
        {
          v48 = GetStringCSF((#72 *)aNamePara, 0, g_Str_File_LdPrgMgr_cpp, 247); /*0x553a1e*/
        }
        wcscpy((#72 *)v105, v48); /*0x553b44*/
        for ( i = v105; *i; ++i ) /*0x553b5c*/
        {
          v50 = *i; /*0x553b5e*/
          if ( *i >= 0x61u && v50 <= 0x7Au || v50 >= 0xE0u && v50 <= 0xFEu ) /*0x553b77*/
            *i = v50 - 32; /*0x553b7c*/
        }
        if ( MEMORY[0x87F7E8][33327] == 640 ) /*0x553b95*/
        {
          v51 = 16; /*0x553b97*/
          v52 = 72; /*0x553b9c*/
        }
        else
        {
          v51 = 20; /*0x553ba3*/
          v52 = 90; /*0x553ba8*/
        }
        if ( MEMORY[0x87F7E8][33327] >= 800 ) /*0x553bbf*/
        {
          v51 += (MEMORY[0x87F7E8][33327] - 800) / 2; /*0x553bce*/
          v52 += (MEMORY[0x87F7E8][33328] - 600) / 2; /*0x553bdc*/
        }
        v89 = 20; /*0x553be5*/
        v88 = 200; /*0x553bf1*/
        v86 = v51; /*0x553bf9*/
        v87 = v52; /*0x553c05*/
        v82 = v51; /*0x553c09*/
        v83 = v52; /*0x553c0d*/
        v84 = (_DWORD *)(v51 + 200); /*0x553c1e*/
        v85 = (_DWORD *)(v52 + 20); /*0x553c24*/
        v78 = (_DWORD *)*(this + 24); /*0x553c59*/
        v70 = (_DWORD *)MEMORY[0x87F7E8][29498]; /*0x553c6c*/
        v53 = Palette::6BitTo16Bit( /*0x553ca6*/
                &v73,
                (unsigned __int8)((unsigned __int16)((BYTE1(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
                                                   | (BYTE2(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                                   | (HIBYTE(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]))) >> SLOBYTE(MEMORY[0x87F7E8][34170])) << SLOBYTE(MEMORY[0x87F7E8][34171]),
                (unsigned __int8)((unsigned __int16)((BYTE1(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
                                                   | (BYTE2(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                                   | (HIBYTE(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]))) >> SLOBYTE(MEMORY[0x87F7E8][34174])) << SLOBYTE(MEMORY[0x87F7E8][34175]),
                (unsigned __int8)((unsigned __int16)((BYTE1(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170]))
                                                   | (BYTE2(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
                                                   | (HIBYTE(MEMORY[0x87F7E8][528700]) >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]))) >> SLOBYTE(MEMORY[0x87F7E8][34172])) << SLOBYTE(MEMORY[0x87F7E8][34173]));
        LOWORD(v74) = *(_WORD *)v53; /*0x553cb0*/
        BYTE2(v74) = v53[2]; /*0x553cbc*/
        PrintFontLayout( /*0x553d01*/
          (int)v78,
          v105,
          &v82,
          v70,
          (unsigned __int8)v74 | ((BYTE1(v74) | (BYTE2(v74) << 8)) << 8),
          0,
          12,
          0,
          0,
          0);
        if ( v81 ) /*0x553d0c*/
        {
          switch ( v81 ) /*0x553d32*/
          {
            case 1: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefKorea, 0, g_Str_File_LdPrgMgr_cpp, 300); /*0x553d4a*/
              break;
            case 2: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefFrenc, 0, g_Str_File_LdPrgMgr_cpp, 302); /*0x553d6c*/
              break;
            case 3: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefGerma, 0, g_Str_File_LdPrgMgr_cpp, 304); /*0x553d8e*/
              break;
            case 4: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefBriti, 0, g_Str_File_LdPrgMgr_cpp, 306); /*0x553db0*/
              break;
            case 5: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefLybia, 0, g_Str_File_LdPrgMgr_cpp, 308); /*0x553dd2*/
              break;
            case 6: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefIraq, 0, g_Str_File_LdPrgMgr_cpp, 310); /*0x553df1*/
              break;
            case 7: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefCuba, 0, g_Str_File_LdPrgMgr_cpp, 312); /*0x553e10*/
              break;
            case 8: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefRussi, 0, g_Str_File_LdPrgMgr_cpp, 314); /*0x553e2f*/
              break;
            case 9: /*0x553d32*/
              v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefYuric, 0, g_Str_File_LdPrgMgr_cpp, 316); /*0x553e4e*/
              break;
            default:
              v54 = 0; /*0x553e52*/
              break;
          }
        }
        else
        {
          v54 = (unsigned __int16 *)GetStringCSF((#72 *)aLoadbriefUsa, 0, g_Str_File_LdPrgMgr_cpp, 298); /*0x553d24*/
        }
        if ( MEMORY[0x87F7E8][536213] /*0x553e64*/
          && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 8))(MEMORY[0x87F7E8][536213]) )
        {
          if ( MEMORY[0x87F7E8][33327] == 640 ) /*0x553e78*/
          {
            v74 = 16; /*0x553e7a*/
            v75 = 126; /*0x553e82*/
            v76 = 318; /*0x553e8a*/
            v77 = 104; /*0x553e92*/
          }
          else
          {
            v74 = 20; /*0x553e9c*/
            v75 = 380; /*0x553ea4*/
            v76 = 398; /*0x553eac*/
            v77 = 130; /*0x553eb4*/
          }
        }
        else if ( MEMORY[0x87F7E8][33327] == 640 ) /*0x553ef4*/
        {
          v74 = 16; /*0x553ef6*/
          v75 = 126; /*0x553efe*/
          v76 = 318; /*0x553f06*/
          v77 = 104; /*0x553f0e*/
        }
        else
        {
          v74 = 20; /*0x553f18*/
          v75 = 158; /*0x553f20*/
          v76 = 398; /*0x553f28*/
          v77 = 130; /*0x553f30*/
        }
        LoadingScreen::AdjustForResolution(&v74); /*0x553f3c*/
        v86 = v74; /*0x553f4d*/
        v87 = v75; /*0x553f55*/
        v88 = v76; /*0x553f59*/
        v89 = v77; /*0x553f5d*/
        v55 = Copy8Bytes(&v74, &v86); /*0x553f69*/
        v56 = (_DWORD *)v88; /*0x553f70*/
        v90 = *v55; /*0x553f74*/
        v91 = v55[1]; /*0x553f7b*/
        v57 = *v55; /*0x553f7f*/
        v58 = *(this + 24); /*0x553f84*/
        v75 = v55[1]; /*0x553f87*/
        v78 = 0; /*0x553f8d*/
        v81 = 0; /*0x553f91*/
        v71 = v58; /*0x553f9f*/
        Text::Layout((_DWORD *)MEMORY[0x87F7E8][29498], v54, (int *)&v78, &v81, v88); /*0x553fab*/
        v78 = v56; /*0x553fc3*/
        Rect::Set(v94, v57, v75, (int)v56, v81); /*0x553fc7*/
        v82 = v94[0]; /*0x553fd8*/
        v83 = v94[1]; /*0x553fe3*/
        v84 = (_DWORD *)v95; /*0x553fe7*/
        v85 = (_DWORD *)v96; /*0x553ff4*/
        Rect::Inflate(); /*0x553ff8*/
        DSurface::FillRectWithColor(&v82, v71, 0, 0x9Fu); /*0x55400c*/
        Render_Render_554280(v54, *(this + 24), &v86, v80, 0); /*0x554022*/
      }
      v59 = (unsigned __int16 *)GetStringCSF((#72 *)aGuiLoadingex, 0, g_Str_File_LdPrgMgr_cpp, 869); /*0x554041*/
      v60 = LoadingScreen::CalcProgressBarRect(v94); /*0x554043*/
      v86 = *v60; /*0x55404a*/
      v87 = v60[1]; /*0x554051*/
      v88 = v60[2]; /*0x554058*/
      v89 = v60[3]; /*0x554063*/
      v61 = Copy8Bytes(&v74, &v86); /*0x55406b*/
      v90 = *v61; /*0x554074*/
      v91 = v61[1]; /*0x55407f*/
      Render_Render_5541C0(v59, *(this + 24), *v61, v61[1], v88, 0, 0); /*0x554092*/
      Render_Render_554280(v59, *(this + 24), &v86, v80, 0); /*0x5540a8*/
      v103[0] = &CCFileClass::`vftable'; /*0x5540b4*/
      v104[3] = 0; /*0x5540bf*/
      Vector::Clear((int)v104); /*0x5540ca*/
      BufferIOFileClass::Destruct(v103); /*0x5540d6*/
      return (const #72 *)HashTable::DestroyHashTableINIClass(v98); /*0x5540e2*/
    }
    else
    {
      result = (const #72 *)MEMORY[0x87F7E8][536210]; /*0x552e77*/
      v6 = (char *)(MEMORY[0x87F7E8][536210] + 13948); /*0x552e7c*/
      if ( !HIBYTE(v79) ) /*0x552e82*/
        v6 = (char *)(MEMORY[0x87F7E8][536210] + 14012); /*0x552e84*/
      if ( *v6 ) /*0x552e8a*/
      {
        LoadingScreen::ReleaseAnimObjects((char *)(MEMORY[0x87F7E8][536210] + 14076)); /*0x552e99*/
        *(this + 15) = 0; /*0x552e9e*/
        if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13868) ) /*0x552ea7*/
          *(this + 15) = GetStringCSF((#72 *)(MEMORY[0x87F7E8][536210] + 13868), 0, g_Str_File_LdPrgMgr_cpp, 663); /*0x552ec8*/
        *(this + 16) = 0; /*0x552ecb*/
        if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13899) ) /*0x552ed9*/
          *(this + 16) = GetStringCSF((#72 *)(MEMORY[0x87F7E8][536210] + 13899), 0, g_Str_File_LdPrgMgr_cpp, 667); /*0x552ef4*/
        Value = LoadingScreen::GetValue(&dword_A8ED54[55425]); /*0x552f0d*/
        BackgroundImage = LoadingScreen::GetBackgroundImage((void *)MEMORY[0x87F7E8][33327], Value); /*0x552f22*/
        OverlayImage = LoadingScreen::GetOverlayImage((void *)MEMORY[0x87F7E8][33327], Value); /*0x552f2e*/
        *(this + 17) = LoadFileSHP(BackgroundImage, (bool *)this + 80); /*0x552f3a*/
        *(this + 19) = LoadFileSHP(OverlayImage, (bool *)this + 82); /*0x552f47*/
        *(this + 18) = LoadFileSHP(v6, (bool *)this + 81); /*0x552f4f*/
        v10 = (_DWORD *)Render_Render_72B340(); /*0x552f57*/
        v11 = (_DWORD *)Render_Render_72B360(); /*0x552f5e*/
        _72B380 = (_DWORD *)Map_Load_72B380(); /*0x552f60*/
        v13 = this->vtable4; /*0x552f65*/
        v14 = *(this + 4); /*0x552f68*/
        v78 = _72B380; /*0x552f6e*/
        v15 = *(this + 17); /*0x552f72*/
        v74 = v13; /*0x552f75*/
        v75 = v14; /*0x552f7b*/
        if ( v15 ) /*0x552f7f*/
          DrawToSurfaceSHP((int *)*(this + 24), v10, v15, 0, &v74, v92, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x552fac*/
        else
          (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int))(*(_DWORD *)*(this + 24) + 16))( /*0x552fc3*/
            *(this + 24),
            v92,
            this + 3,
            v80);
        v75 = *(this + 8); /*0x552fcb*/
        DrawToSurfaceSHP((int *)*(this + 24), v11, *(this + 18), 0, &v74, v92, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x552ffa*/
        v16 = *(this + 19); /*0x552fff*/
        v75 = this->Tactical_field_0x30; /*0x553007*/
        if ( v16 ) /*0x55300b*/
          DrawToSurfaceSHP((int *)*(this + 24), v78, v16, 0, &v74, v92, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x55303a*/
        else
          (*(void (__thiscall **)(_DWORD, int *, _DWORD *, int))(*(_DWORD *)*(this + 24) + 16))( /*0x553054*/
            *(this + 24),
            v92,
            this + 11,
            v80);
        v17 = *(this + 4) + 10; /*0x55305f*/
        v74 = this->vtable4 + 10; /*0x553062*/
        v75 = v17; /*0x55306b*/
        LoadScreenAnim = LoadingScreen::FindLoadScreenAnim(&dword_A8ED54[55425]); /*0x553074*/
        v19 = *(this + 15); /*0x553076*/
        if ( v19 ) /*0x55307b*/
          TextRenderer::DrawText(&v90, v19, *(this + 24), v92, (int)&v74, LoadScreenAnim, 0, 25); /*0x553096*/
        result = (const #72 *)*(this + 16); /*0x55309e*/
        if ( result ) /*0x5530a3*/
        {
          if ( HIBYTE(v79) ) /*0x5530b5*/
          {
            v74 = *(this + 7) + *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13932); /*0x5530c2*/
            v20 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13936); /*0x5530c6*/
          }
          else
          {
            v74 = *(this + 7) + *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13940); /*0x5530d9*/
            v20 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 13944); /*0x5530dd*/
          }
          v75 = *(this + 8) + v20; /*0x5530f1*/
          wcscpy((#72 *)Destination, result); /*0x5530f5*/
          v21 = Color::ConvertToRGB((unsigned __int8 *)(LoadScreenAnim + 776), (int)&v73); /*0x553108*/
          v65 = *(_WORD *)v21; /*0x553115*/
          v72 = *(_BYTE *)(v21 + 2); /*0x553123*/
          v80 = 0; /*0x553170*/
          v81 = 0; /*0x553174*/
          v22 = ((unsigned __int8)v65 >> SLOBYTE(MEMORY[0x87F7E8][34171]) << SLOBYTE(MEMORY[0x87F7E8][34170])) /*0x55318a*/
              | (HIBYTE(v65) >> SLOBYTE(MEMORY[0x87F7E8][34175]) << SLOBYTE(MEMORY[0x87F7E8][34174]))
              | (v72 >> SLOBYTE(MEMORY[0x87F7E8][34173]) << SLOBYTE(MEMORY[0x87F7E8][34172]));
          Text::Layout((_DWORD *)MEMORY[0x87F7E8][29498], Destination, &v80, &v81, 400); /*0x553194*/
          v23 = *(this + 24); /*0x5531a1*/
          v24 = v74; /*0x5531a4*/
          v25 = v75; /*0x5531a8*/
          v95 = v80; /*0x5531ac*/
          v96 = v81; /*0x5531b2*/
          v73 = 0; /*0x5531b9*/
          v78 = 0; /*0x5531bd*/
          v66 = v23; /*0x5531c5*/
          v90 = v74; /*0x5531e2*/
          v91 = v75; /*0x5531e6*/
          Text::Layout((_DWORD *)MEMORY[0x87F7E8][29498], Destination, &v73, &v78, 400); /*0x5531ea*/
          v85 = v78; /*0x5531f9*/
          v82 = v24; /*0x5531fd*/
          v83 = v25; /*0x553203*/
          v84 = (_DWORD *)v73; /*0x553210*/
          Rect::Inflate(); /*0x553214*/
          DSurface::FillRectWithColor(&v82, v66, 0, 0x9Fu); /*0x553228*/
          v67 = (_DWORD *)MEMORY[0x87F7E8][29498]; /*0x55323f*/
          v84 = (_DWORD *)(v24 + v95); /*0x553243*/
          v85 = (_DWORD *)(v25 + v96); /*0x55325b*/
          v26 = *(this + 24); /*0x553261*/
          v82 = v24; /*0x553264*/
          v83 = v25; /*0x553271*/
          v27 = Palette::6BitTo16Bit( /*0x55329b*/
                  &v73,
                  (unsigned __int8)((unsigned __int16)v22 >> SLOBYTE(MEMORY[0x87F7E8][34170])) << SLOBYTE(MEMORY[0x87F7E8][34171]),
                  (unsigned __int8)((unsigned __int16)v22 >> SLOBYTE(MEMORY[0x87F7E8][34174])) << SLOBYTE(MEMORY[0x87F7E8][34175]),
                  (unsigned __int8)((unsigned __int16)v22 >> SLOBYTE(MEMORY[0x87F7E8][34172])) << SLOBYTE(MEMORY[0x87F7E8][34173]));
          return (const #72 *)PrintFontLayout( /*0x5532f4*/
                                v26,
                                Destination,
                                &v82,
                                v67,
                                (unsigned __int8)*(_WORD *)v27
                              | (((unsigned __int8)HIBYTE(*(_WORD *)v27) | ((unsigned __int8)v27[2] << 8)) << 8),
                                0,
                                12,
                                0,
                                0,
                                0);
        }
      }
    }
  }
  return result; /*0x5532f9*/
}


// ==== 0x00554100  LoadingScreen::AdjustForResolution  this=VOID_PTR  sig=csp ====
int __thiscall sub_554100(_DWORD *this)
{
  int result; // eax

  if ( MEMORY[0x8A00A4] >= 800 ) /*0x554110*/
  {
    result = (MEMORY[0x8A00A8] - 600) / 2 + *(this + 1); /*0x554137*/
    *this += (MEMORY[0x8A00A4] - 800) / 2; /*0x554139*/
    *(this + 1) = result; /*0x55413b*/
  }
  return result; /*0x55413f*/
}


// ==== 0x00554150  LoadingScreen::CalcProgressBarRect  this=int  sig=csp ====
int *__thiscall sub_554150(int *this)
{
  int v1; // esi
  int v2; // edi

  if ( MEMORY[0x8A00A4] == 640 ) /*0x554161*/
  {
    v1 = 16; /*0x554163*/
    v2 = 235; /*0x554168*/
  }
  else
  {
    v1 = 20; /*0x55416f*/
    v2 = 300; /*0x554174*/
  }
  if ( MEMORY[0x8A00A4] >= 800 ) /*0x55418b*/
  {
    v1 += (MEMORY[0x8A00A4] - 800) / 2; /*0x55419a*/
    v2 += (MEMORY[0x8A00A8] - 600) / 2; /*0x5541a8*/
  }
  *this = v1; /*0x5541ac*/
  *(this + 1) = v2; /*0x5541ae*/
  *(this + 2) = 200; /*0x5541b3*/
  *(this + 3) = 20; /*0x5541b6*/
  return this; /*0x5541b1*/
}


// ==== 0x005541C0  Render_Render_5541C0  this=int  sig=csp ====
int __fastcall Render_Render_5541C0(
        unsigned __int16 *a0,
        int a2,
        AbstractClass *aP2,
        int a4,
        AbstractClass *aP4,
        char a6,
        char a7)
{
  AbstractClass *v8; // edx
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  AbstractClass *dy; // [esp+8h] [ebp-18h] BYREF
  AbstractClass *v13; // [esp+Ch] [ebp-14h] BYREF
  int a0a[4]; // [esp+10h] [ebp-10h] BYREF

  dy = 0; /*0x5541dd*/
  v13 = 0; /*0x5541e5*/
  Text::Layout(aP0, a0, (AbstractClass *)&dy, (AbstractClass *)&v13, aP4); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = aP4; /*0x5541fa*/
    dy = aP4; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  a0a[1] = a4; /*0x554213*/
  a0a[3] = (int)v13; /*0x55421b*/
  a0a[0] = (int)aP2; /*0x55421f*/
  a0a[2] = (int)v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    a0a[0] = (int)&aP2->__pad_0[((char *)aP4 - (char *)v8) / 2]; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    a0a[0] = (int)&aP4->__pad_0[(char *)aP2 - (char *)v8]; /*0x554245*/
  }
  Rect::Inflate(v10, v11, (int)dy); /*0x554252*/
  return DSurface::FillRectWithColor(a0a, (ObjectClass *)a2, 0, 0x9Fu); /*0x554269*/
}


// ==== 0x00554280  Render_Render  this=AbstractClass  sig=csp ====
int __fastcall Render_Render_554280(unsigned __int16 *a0, AbstractClass *aP1, int *a2, unsigned __int16 a4, char a5)
{
  int v5; // esi
  int v6; // ecx
  int v7; // edx
  AbstractClass v9; // [esp-18h] [ebp-3Ch] BYREF
  int v10[4]; // [esp+14h] [ebp-10h] BYREF

  v5 = a2[1]; /*0x55428a*/
  v6 = *a2; /*0x554294*/
  v7 = *a2 + a2[2]; /*0x55429b*/
  v10[3] = v5 + a2[3]; /*0x55429d*/
  v10[0] = v6; /*0x5542a5*/
  v10[2] = v7; /*0x5542b0*/
  memset(&v9.__pad_0[12], 0, 12); /*0x5542c3*/
  v10[1] = v5; /*0x5542c7*/
  *(_QWORD *)&v9.__pad_0[4] = (unsigned int)a5 | 0xC00000000LL; /*0x55431a*/
  *(_DWORD *)v9.__pad_0 = (unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]) /*0x55432f*/
                        | (((unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140])
                          | ((unsigned __int8)((unsigned __int8)(a4 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]) << 8)) << 8);
  return PrintFontLayout((AbstractClass *)v10, aP0, v9); /*0x554341*/
}


// ==== 0x00554370  LoadProgressMgr::ReleaseBuffer  this=LoadProgressMgr  sig=csp ====
void __thiscall sub_554370(int this)
{
  char v2; // al
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx

  if ( *(_BYTE *)(this + 80) && *(_DWORD *)(this + 68) ) /*0x55437b*/
    __3_YAXPAX_Z(*(void **)(this + 68)); /*0x554383*/
  v2 = *(_BYTE *)(this + 81); /*0x55438b*/
  *(_DWORD *)(this + 68) = 0; /*0x55438e*/
  if ( v2 && *(_DWORD *)(this + 72) ) /*0x554395*/
    __3_YAXPAX_Z(*(void **)(this + 72)); /*0x55439d*/
  v3 = *(_BYTE *)(this + 82); /*0x5543a5*/
  *(_DWORD *)(this + 72) = 0; /*0x5543a8*/
  if ( v3 && *(_DWORD *)(this + 76) ) /*0x5543af*/
    __3_YAXPAX_Z(*(void **)(this + 76)); /*0x5543b7*/
  *(_DWORD *)(this + 76) = 0; /*0x5543bf*/
  LoadProgressMgr_Release(); /*0x5543c2*/
  LoadProgressMgr_Release_72B870(); /*0x5543c7*/
  v4 = *(void (__thiscall ****)(_DWORD, int))(this + 4); /*0x5543cc*/
  if ( v4 ) /*0x5543d1*/
  {
    (**v4)(v4, 1); /*0x5543d7*/
    *(_DWORD *)(this + 4) = 0; /*0x5543d9*/
  }
  v5 = *(void (__thiscall ****)(_DWORD, int))(this + 8); /*0x5543dc*/
  if ( v5 ) /*0x5543e1*/
  {
    (**v5)(v5, 1); /*0x5543e7*/
    *(_DWORD *)(this + 8) = 0; /*0x5543e9*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))(this + 96); /*0x5543ec*/
  if ( v6 ) /*0x5543f1*/
    (**v6)(v6, 1); /*0x5543f7*/
  *(_DWORD *)(this + 96) = 0; /*0x5543f9*/
}


// ==== 0x00554400  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_554400(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  v3 = this->q060; /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)MEMORY[0x88730C] + 4))(MEMORY[0x88730C], v3, 0, 1); /*0x554420*/
  return 1; /*0x554425*/
}


// ==== 0x00554430  sub_554430  this=-  sig=ida-proto ====
void sub_554430()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55443c*/
  dbl_ABC9E8 = Math::Sqrt(v0 + v0); /*0x55444e*/
}


// ==== 0x00554460  sub_554460  this=-  sig=ida-proto ====
void sub_554460()
{
  dbl_ABCA68 = dbl_ABC9E8 / 60.0; /*0x55446c*/
}


// ==== 0x00554480  sub_554480  this=-  sig=ida-proto ====
void sub_554480()
{
  dbl_ABCA38 = 1.0 / dbl_ABCA68; /*0x55448c*/
}


// ==== 0x005544A0  sub_5544A0  this=-  sig=ida-proto ====
void sub_5544A0()
{
  dbl_ABCA30 = 0.0174532925199433 * 45.0; /*0x5544ac*/
}


// ==== 0x005544C0  sub_5544C0  this=-  sig=ida-proto ====
void sub_5544C0()
{
  dbl_ABC9F0 = 0.0174532925199433 * 60.0; /*0x5544cc*/
}


// ==== 0x005544E0  sub_5544E0  this=-  sig=ida-proto ====
void sub_5544E0()
{
  dbl_ABC9C8 = 0.0174532925199433 * 90.0; /*0x5544ec*/
}


// ==== 0x00554500  sub_554500  this=-  sig=ida-proto ====
__int64 sub_554500()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC9C8 - dbl_ABC9F0); /*0x554512*/
  result = Math::RoundToInt(v0 * dbl_ABC9E8 * 0.5); /*0x554526*/
  dword_ABCA70 = result; /*0x55452b*/
  return result; /*0x554530*/
}


// ==== 0x00554540  sub_554540  this=-  sig=ida-proto ====
void sub_554540()
{
  dbl_ABC9F8 = Math::ArcTan((double)dword_ABCA70 * 0.00390625); /*0x554557*/
}


// ==== 0x00554570  sub_554570  this=-  sig=ida-proto ====
void sub_554570()
{
  dbl_ABCA28 = Math::ArcTan((double)(2 * dword_ABCA70) / dbl_ABC9E8); /*0x554592*/
}


// ==== 0x005545A0  sub_5545A0  this=-  sig=ida-proto ====
__int64 sub_5545A0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCA70) + 0.5); /*0x5545bb*/
  dword_ABCA64 = result; /*0x5545c0*/
  return result; /*0x5545c6*/
}


// ==== 0x005545D0  sub_5545D0  this=-  sig=ida-proto ====
int sub_5545D0()
{
  word_ABC9E0 = 0; /*0x5545d2*/
  word_ABC9E2 = 0; /*0x5545d8*/
  return 0; /*0x5545de*/
}


// ==== 0x005545E0  sub_5545E0  this=-  sig=ida-proto ====
int sub_5545E0()
{
  dword_ABCA00 = 0; /*0x5545e2*/
  dword_ABCA04 = 0; /*0x5545e7*/
  dword_ABCA08 = 0; /*0x5545ec*/
  return 0; /*0x5545f1*/
}


// ==== 0x00554600  sub_554600  this=-  sig=ida-proto ====
int sub_554600()
{
  dword_ABCA60 = 0; /*0x554605*/
  dword_ABCA58 = 128; /*0x55460f*/
  dword_ABCA5C = 128; /*0x554614*/
  return 128; /*0x554619*/
}


// ==== 0x00554620  sub_554620  this=-  sig=ida-proto ====
int sub_554620()
{
  dword_ABC9D0 = 0; /*0x554622*/
  dword_ABC9D4 = 0; /*0x554627*/
  dword_ABC9D8 = 0; /*0x55462c*/
  dword_ABC9DC = 0; /*0x554631*/
  return 0; /*0x554636*/
}


// ==== 0x00554640  sub_554640  this=-  sig=ida-proto ====
int sub_554640()
{
  dword_ABCA14 = 0; /*0x554647*/
  dword_ABCA18 = 0; /*0x55464c*/
  byte_ABCA1C = 1; /*0x554651*/
  byte_ABCA1D = 0; /*0x554658*/
  dword_ABCA10 = (int)&vt_DynamicVectorClass_LightSourceClass; /*0x55465d*/
  dword_ABCA24 = 10; /*0x554667*/
  g_BridgeCellPool = 0; /*0x554671*/
  return atexit(sub_554680); /*0x55467c*/
}


// ==== 0x00554680  sub_554680  this=-  sig=ida-proto ====
void __cdecl sub_554680()
{
  dword_ABCA10 = (int)&vt_VectorClass_LightSourceClass; /*0x554688*/
  if ( dword_ABCA14 && byte_ABCA1D ) /*0x55469c*/
  {
    __3_YAXPAX_Z(dword_ABCA14); /*0x55469f*/
    dword_ABCA14 = 0; /*0x5546a7*/
  }
  byte_ABCA1D = 0; /*0x5546ad*/
  dword_ABCA18 = 0; /*0x5546b3*/
}


// ==== 0x005546C0  sub_5546C0  this=-  sig=ida-proto ====
int sub_5546C0()
{
  dword_ABCA44 = 0; /*0x5546c7*/
  dword_ABCA48 = 0; /*0x5546cc*/
  byte_ABCA4C = 1; /*0x5546d1*/
  byte_ABCA4D = 0; /*0x5546d8*/
  dword_ABCA40 = (int)&vt_DynamicVectorClass_LightSourceClass_PendingCellClass; /*0x5546dd*/
  dword_ABCA54 = 10; /*0x5546e7*/
  dword_ABCA50 = 0; /*0x5546f1*/
  return atexit(sub_554700); /*0x5546fc*/
}


// ==== 0x00554700  sub_554700  this=-  sig=ida-proto ====
void __cdecl sub_554700()
{
  if ( (byte_ABC9C0 & 1) == 0 ) /*0x55470a*/
  {
    dword_ABCA40 = (int)&vt_VectorClass_LightSourceClass_PendingCellClass; /*0x55470e*/
    byte_ABC9C0 |= 1u; /*0x554721*/
    if ( dword_ABCA44 ) /*0x554727*/
    {
      if ( byte_ABCA4D ) /*0x554731*/
      {
        __3_YAXPAX_Z(dword_ABCA44); /*0x554734*/
        dword_ABCA44 = 0; /*0x55473c*/
      }
    }
    byte_ABCA4D = 0; /*0x554746*/
    dword_ABCA48 = 0; /*0x55474d*/
  }
}


// ==== 0x00554760  LightSourceClass::Construct  this=LightSourceClass  sig=csp ====
_DWORD *__thiscall sub_554760(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax

  AbstractClass::Constructor((int)this); /*0x554763*/
  *(this + 10) = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  this->q02C = a8; /*0x55477e*/
  this->q030 = a9; /*0x554788*/
  this->DetailLevel = 2; /*0x55478f*/
  *(this + 14) = a2; /*0x554796*/
  *((_BYTE *)this + 72) = 0; /*0x55479c*/
  *this = &LightSourceClass::`vftable'; /*0x5547a0*/
  *(this + 15) = a3; /*0x5547a6*/
  this->LightVisibility = a5; /*0x5547ad*/
  this->vtable2 = &LightSourceClass::`vftable'; /*0x5547b0*/
  *(this + 16) = a4; /*0x5547b7*/
  this->vtable3 = &LightSourceClass::`vftable'; /*0x5547ba*/
  this->__pad_00C = &LightSourceClass::`vftable'; /*0x5547c1*/
  if ( MEMORY[0xABCA20] < MEMORY[0xABCA18] /*0x5547fd*/
    || (MEMORY[0xABCA1D] || !MEMORY[0xABCA18])
    && MEMORY[0xABCA24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABCA10] + 8))(
         &MEMORY[0xABCA10],
         MEMORY[0xABCA18] + MEMORY[0xABCA24],
         0) )
  {
    v10 = MEMORY[0xABCA20]++; /*0x55480a*/
    *((_DWORD *)MEMORY[0xABCA14] + v10) = this; /*0x554819*/
  }
  return this; /*0x55481e*/
}


// ==== 0x00554830  LightSourceClass::Constructor  this=LightSourceClass  sig=csp ====
int __thiscall sub_554830(int this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((#373 *)this); /*0x554833*/
  *(_DWORD *)(this + 36) = 0; /*0x55483d*/
  *(_DWORD *)(this + 40) = 0; /*0x554840*/
  *(_DWORD *)(this + 44) = 0; /*0x554843*/
  *(_DWORD *)(this + 48) = 0; /*0x554846*/
  *(_DWORD *)(this + 56) = MEMORY[0xABCA00]; /*0x55484f*/
  *(_DWORD *)(this + 60) = MEMORY[0xABCA04]; /*0x554857*/
  v2 = MEMORY[0xABCA08]; /*0x55485a*/
  *(_DWORD *)(this + 68) = 0; /*0x554860*/
  *(_BYTE *)(this + 72) = 0; /*0x554863*/
  *(_DWORD *)(this + 64) = v2; /*0x554866*/
  *(_DWORD *)this = &LightSourceClass::`vftable'; /*0x554869*/
  *(_DWORD *)(this + 4) = &LightSourceClass::`vftable'; /*0x55486f*/
  *(_DWORD *)(this + 8) = &LightSourceClass::`vftable'; /*0x554876*/
  *(_DWORD *)(this + 12) = &LightSourceClass::`vftable'; /*0x55487d*/
  if ( MEMORY[0xABCA20] < MEMORY[0xABCA18] /*0x5548b6*/
    || (MEMORY[0xABCA1D] || !MEMORY[0xABCA18])
    && MEMORY[0xABCA24] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xABCA10] + 8))(
         &MEMORY[0xABCA10],
         MEMORY[0xABCA18] + MEMORY[0xABCA24],
         0) )
  {
    v3 = MEMORY[0xABCA20]++; /*0x5548c3*/
    *((_DWORD *)MEMORY[0xABCA14] + v3) = this; /*0x5548d2*/
  }
  return this; /*0x5548d7*/
}


// ==== 0x005549A0  ObjectClass::Map_Reset_5549A0  this=ObjectClass  sig=csp ====
void sub_5549A0()
{
  int v0; // edx
  _DWORD *v1; // esi
  bool v2; // zf
  int v3; // eax
  bool v4; // zf
  int v5; // eax

  v0 = g_BridgeCellPool; /*0x5549a0*/
  byte_829AE4 = 0; /*0x5549a6*/
  if ( g_BridgeCellPool ) /*0x5549af*/
  {
    v1 = dword_ABCA14; /*0x5549b2*/
    do /*0x5549fc*/
    {
      if ( *v1 ) /*0x5549b8*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v1 + 32))(*v1, 1); /*0x5549c2*/
        v1 = dword_ABCA14; /*0x5549c5*/
        v0 = g_BridgeCellPool; /*0x5549cb*/
      }
      v2 = v0 == 0; /*0x5549d1*/
      if ( v0 > 0 ) /*0x5549d3*/
      {
        --v0; /*0x5549d5*/
        v3 = 0; /*0x5549d6*/
        v2 = v0 == 0; /*0x5549d8*/
        g_BridgeCellPool = v0; /*0x5549da*/
        if ( v0 > 0 ) /*0x5549e0*/
        {
          do /*0x5549f8*/
          {
            v1[v3] = v1[v3 + 1]; /*0x5549e6*/
            v0 = g_BridgeCellPool; /*0x5549e9*/
            v1 = dword_ABCA14; /*0x5549ef*/
            ++v3; /*0x5549f5*/
          }
          while ( v3 < g_BridgeCellPool ); /*0x5549f8*/
          v2 = g_BridgeCellPool == 0; /*0x5549fa*/
        }
      }
    }
    while ( !v2 ); /*0x5549fc*/
  }
  if ( dword_ABCA50 ) /*0x554a06*/
  {
    do /*0x554a4a*/
    {
      __3_YAXPAX_Z(*(void **)dword_ABCA44); /*0x554a11*/
      v4 = dword_ABCA50 == 0; /*0x554a1f*/
      if ( dword_ABCA50 > 0 ) /*0x554a21*/
      {
        v5 = 0; /*0x554a24*/
        v4 = dword_ABCA50-- == 1; /*0x554a26*/
        if ( dword_ABCA50 > 0 ) /*0x554a2e*/
        {
          do /*0x554a46*/
          {
            ++v5; /*0x554a36*/
            *((_DWORD *)dword_ABCA44 + v5 - 1) = *((_DWORD *)dword_ABCA44 + v5); /*0x554a3a*/
          }
          while ( v5 < dword_ABCA50 ); /*0x554a46*/
          v4 = dword_ABCA50 == 0; /*0x554a48*/
        }
      }
    }
    while ( !v4 ); /*0x554a4a*/
  }
  byte_829AE4 = 1; /*0x554a4c*/
}


// ==== 0x00554A60  Trigger::EnableOnce  this=LightSourceClass  sig=csp ====
char __thiscall Trigger::EnableOnce(_BYTE *this, AbstractClass *aP1)
{
  char result; // al

  result = *(this + 72); /*0x554a60*/
  if ( !result ) /*0x554a65*/
  {
    *(this + 72) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView(this, aP1); /*0x554a70*/
  }
  return result; /*0x554a75*/
}


// ==== 0x00554A80  MapClass::ScrollOnce  this=LightSourceClass  sig=csp ====
char __thiscall MapClass::ScrollOnce(int this, AbstractClass *aP1)
{
  char result; // al

  result = *(_BYTE *)(this + 72); /*0x554a80*/
  if ( result ) /*0x554a85*/
  {
    *(_BYTE *)(this + 72) = 0; /*0x554a8b*/
    return TacticalClass::ScrollView((_DWORD *)this, aP1); /*0x554a90*/
  }
  return result; /*0x554a95*/
}


// ==== 0x00554AA0  TacticalClass::UpdateScrollTarget  this=LightSourceClass  sig=csp ====
char __thiscall TacticalClass::UpdateScrollTarget(int this, int a2, int a3, int a4, int a5, char a6)
{
  int v6; // eax

  if ( *(_DWORD *)(this + 36) != a2 || (v6 = *(_DWORD *)(this + 40), v6 != a3) || v6 != a5 ) /*0x554abe*/
  {
    *(_DWORD *)(this + 36) = a2; /*0x554ac4*/
    *(_DWORD *)(this + 44) = a4; /*0x554ac7*/
    LOBYTE(v6) = *(_BYTE *)(this + 72); /*0x554aca*/
    *(_DWORD *)(this + 40) = a3; /*0x554acf*/
    *(_DWORD *)(this + 48) = a5; /*0x554ad2*/
    if ( (_BYTE)v6 ) /*0x554ad5*/
      LOBYTE(v6) = TacticalClass::ScrollView((_DWORD *)this, a6); /*0x554adc*/
  }
  return v6; /*0x554ae1*/
}


// ==== 0x00554AF0  TacticalClass::ScrollView  this=LightSourceClass  sig=csp ====
char __thiscall TacticalClass::ScrollView(_DWORD *this, AbstractClass *aP1)
{
  char result; // al
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned __int16 v7; // cx
  BuildingTypeClass *v8; // eax
  int v9; // edx
  double v10; // st7
  int v11; // eax
  MouseClass *v12; // ecx
  int v13; // esi
  int v14; // eax
  void *v15; // eax
  MouseClass *v16; // [esp+14h] [ebp-24h] BYREF
  MouseClass *v17; // [esp+18h] [ebp-20h]
  int v18; // [esp+1Ch] [ebp-1Ch]
  int v19; // [esp+20h] [ebp-18h]
  int v20; // [esp+24h] [ebp-14h]
  int v21; // [esp+28h] [ebp-10h]
  int v22; // [esp+2Ch] [ebp-Ch]
  __int16 v23; // [esp+30h] [ebp-8h]
  __int16 v24; // [esp+32h] [ebp-6h]

  result = byte_829AE4; /*0x554af9*/
  if ( byte_829AE4 ) /*0x554b07*/
  {
    result = MEMORY[0xA8D63C].__pad_14B0[140]; /*0x554b0d*/
    if ( *(int *)&MEMORY[0xA8D63C].__pad_14B0[140] >= this->DetailLevel ) /*0x554b17*/
    {
      if ( (_BYTE)aP1 && dword_ABCA50 ) /*0x554b28*/
        UpdateDeferredLightSurfaces(0, 1); /*0x554b2e*/
      v23 = *(this + 14) / 256; /*0x554b42*/
      v24 = *(this + 15) / 256; /*0x554b56*/
      v18 = this->LightVisibility / 256 + 1; /*0x554b6f*/
      v4 = v18; /*0x554b6c*/
      v5 = -v18; /*0x554b73*/
      v6 = -v18; /*0x554b75*/
      v22 = -v18; /*0x554b77*/
      v20 = -v18; /*0x554b7d*/
      if ( -v4 <= v4 ) /*0x554b81*/
      {
        do /*0x554d04*/
        {
          v19 = v5; /*0x554b89*/
          if ( v5 <= v4 ) /*0x554b8d*/
          {
            v7 = v24 + v6; /*0x554b97*/
            for ( HIWORD(v17) = v7; ; v7 = HIWORD(v17) ) /*0x554b99*/
            {
              LOWORD(v17) = v23 + v5; /*0x554bab*/
              v16 = v17; /*0x554bb7*/
              if ( (unsigned __int16)(v23 + v5) < 0x200u /*0x554be9*/
                && v7 < 0x200u
                && Cell::Exists(&MEMORY[0x87F7E8], (MouseClass *)&v16) )
              {
                v8 = (BuildingTypeClass *)(((__int16)v16 << 8) + 128 - *(this + 14)); /*0x554c11*/
                v9 = (SHIWORD(v16) << 8) + 128 - *(this + 15); /*0x554c1e*/
                v21 = (_DWORD)v8 * (_DWORD)v8 + v9 * v9; /*0x554c2a*/
                v10 = Math::Sqrt((double)v21); /*0x554c35*/
                if ( (int)Math::RoundToInt(v10) <= this->LightVisibility ) /*0x554c45*/
                {
                  if ( (_BYTE)aP1 ) /*0x554c4e*/
                  {
                    v11 = __2_YAPAXI_Z(0x14u); /*0x554c56*/
                    if ( v11 ) /*0x554c60*/
                    {
                      v12 = v16; /*0x554c62*/
                      *(_DWORD *)v11 = 0; /*0x554c6b*/
                      *(_DWORD *)(v11 + 4) = 0x10000; /*0x554c6d*/
                      *(_WORD *)(v11 + 8) = 0; /*0x554c74*/
                      *(_WORD *)(v11 + 10) = 1000; /*0x554c78*/
                      *(_WORD *)(v11 + 12) = 1000; /*0x554c7c*/
                      *(_WORD *)(v11 + 14) = 1000; /*0x554c80*/
                      *(_DWORD *)(v11 + 16) = v12; /*0x554c84*/
                      v13 = v11; /*0x554c87*/
                    }
                    else
                    {
                      v13 = 0; /*0x554c8b*/
                    }
                    if ( dword_ABCA50 < dword_ABCA48 /*0x554cc1*/
                      || (byte_ABCA4D || !dword_ABCA48)
                      && dword_ABCA54 > 0
                      && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_ABCA40->field_8)(
                           &dword_ABCA40,
                           dword_ABCA54 + dword_ABCA48,
                           0) )
                    {
                      v14 = dword_ABCA50++; /*0x554cce*/
                      *(_DWORD *)&dword_ABCA44->__pad_0[4 * v14] = v13; /*0x554cdd*/
                    }
                    v4 = v18; /*0x554ce0*/
                  }
                  else
                  {
                    v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x554d3f*/
                    TacticalClass::SetView((int)v15, 0, 0x10000, 0, 1000, 1000, 1000); /*0x554d46*/
                  }
                }
              }
              LOWORD(v5) = ++v19; /*0x554ce8*/
              if ( v19 > v4 ) /*0x554cef*/
                break; /*0x554cef*/
            }
            v6 = v20; /*0x554cf5*/
            v5 = v22; /*0x554cf9*/
          }
          v20 = ++v6; /*0x554d00*/
        }
        while ( v6 <= v4 ); /*0x554d04*/
      }
      return MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x554d11*/
    }
  }
  return result; /*0x554d16*/
}


// ==== 0x00554D50  UpdateDeferredLightSurfaces  this=-  sig=ida-proto ====
void __fastcall UpdateDeferredLightSurfaces(int a1, char a2)
{
  int v4; // eax
  double v5; // st7
  void *v6; // eax
  double v7; // st7
  double v8; // st7
  int i; // edi
  void *v10; // esi
  void *v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st7
  __int64 v15; // rax
  int v16; // eax
  int v17; // [esp-18h] [ebp-4Ch]
  int v18; // [esp-14h] [ebp-48h]
  __int16 v19; // [esp-10h] [ebp-44h]
  __int16 v20; // [esp-Ch] [ebp-40h]
  __int16 v21; // [esp-8h] [ebp-3Ch]
  __int16 v22; // [esp-4h] [ebp-38h]
  int v24; // [esp+10h] [ebp-24h] BYREF
  int v25; // [esp+14h] [ebp-20h] BYREF
  int v26; // [esp+18h] [ebp-1Ch] BYREF
  int v27; // [esp+1Ch] [ebp-18h] BYREF
  double v28; // [esp+20h] [ebp-14h] BYREF
  int v29; // [esp+28h] [ebp-Ch] BYREF
  double HighPrecisionTimer; // [esp+2Ch] [ebp-8h]

  HighPrecisionTimer = Timer::GetHighPrecision(&MEMORY[0x884D88]); /*0x554d6e*/
  ++dword_ABCA74; /*0x554d73*/
  if ( dword_ABCA50 && !byte_ABCA84 ) /*0x554d8e*/
  {
    v4 = dword_ABCA7C; /*0x554d94*/
    if ( dword_ABCA7C > 0 /*0x554dac*/
      || (dword_ABCA80 = dword_ABCA50, v4 = dword_ABCA50 - 1, dword_ABCA7C = dword_ABCA50 - 1, dword_ABCA50 - 1 >= 0) )
    {
      do /*0x554ed0*/
      {
        if ( !a2 && (v4 & 0xF) == 0xF ) /*0x554dbe*/
        {
          v5 = Timer::GetHighPrecision(&MEMORY[0x884D88]); /*0x554dc5*/
          if ( (double)a1 <= v5 - HighPrecisionTimer ) /*0x554dd9*/
            break; /*0x554dd9*/
          v4 = dword_ABCA7C; /*0x554ddf*/
        }
        if ( **((_DWORD **)dword_ABCA44 + v4) ) /*0x554ded*/
        {
          --dword_ABCA80; /*0x554df2*/
        }
        else
        {
          v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(*((_DWORD *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
          Tactical::CreateTacticalLightSurface((int)v6, &v24, &v25, &v26, &v27, (int)&v28, (int)&v29); /*0x554e2e*/
          **((_DWORD **)dword_ABCA44 + dword_ABCA7C) = v24; /*0x554e46*/
          *(_DWORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 4) = v25; /*0x554e5a*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 8) = v26; /*0x554e70*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 10) = v27; /*0x554e88*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 12) = LOWORD(v28); /*0x554e9f*/
          *(_WORD *)(*((_DWORD *)dword_ABCA44 + dword_ABCA7C) + 14) = v29; /*0x554eb6*/
          --dword_ABCA80; /*0x554ec0*/
          v4 = dword_ABCA7C; /*0x554ec5*/
        }
        dword_ABCA7C = --v4; /*0x554ecb*/
      }
      while ( v4 >= 0 ); /*0x554ed0*/
    }
    if ( dword_ABCA80 <= 0 ) /*0x554edd*/
      byte_ABCA84 = 1; /*0x554edf*/
  }
  v28 = (double)a1; /*0x554eef*/
  v7 = Timer::GetHighPrecision(&MEMORY[0x884D88]); /*0x554ef3*/
  v8 = v28 - (v7 - HighPrecisionTimer); /*0x554f03*/
  if ( byte_ABCA84 ) /*0x554f07*/
  {
    if ( a2 || (v29 = a1 - 1, v8 >= (double)(a1 - 1)) ) /*0x554f23*/
    {
      for ( i = 0; i < dword_ABCA50; ++i ) /*0x554f36*/
      {
        v10 = (void *)*((_DWORD *)dword_ABCA44 + i); /*0x554f42*/
        v22 = *((_WORD *)v10 + 7); /*0x554f53*/
        v21 = *((_WORD *)v10 + 6); /*0x554f56*/
        v20 = *((_WORD *)v10 + 5); /*0x554f5e*/
        v19 = *((_WORD *)v10 + 4); /*0x554f61*/
        v18 = *((_DWORD *)v10 + 1); /*0x554f62*/
        v17 = *(_DWORD *)v10; /*0x554f66*/
        v11 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v10 + 8); /*0x554f6d*/
        TacticalClass::SetView((int)v11, v17, v18, v19, v20, v21, v22); /*0x554f74*/
        __3_YAXPAX_Z(v10); /*0x554f7a*/
      }
      dword_ABCA50 = 0; /*0x554f91*/
      if ( dword_ABCA44 && byte_ABCA4D ) /*0x554fa7*/
      {
        __3_YAXPAX_Z(dword_ABCA44); /*0x554faa*/
        dword_ABCA44 = 0; /*0x554fb2*/
      }
      byte_ABCA4D = 0; /*0x554fc3*/
      dword_ABCA48 = 0; /*0x554fca*/
      byte_ABCA84 = 0; /*0x554fd4*/
      MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x554fdb*/
    }
  }
  v12 = Timer::GetHighPrecision(&MEMORY[0x884D88]); /*0x554fe9*/
  v13 = v28 - (v12 - HighPrecisionTimer); /*0x554ff5*/
  if ( v13 > 0.0 && dword_ABCA74 > (unsigned int)(dword_ABCA78 + dword_829AE8) ) /*0x55501a*/
  {
    v14 = v13 * 0.5; /*0x55501c*/
    if ( v14 >= 1.0 ) /*0x55502d*/
      v14 = 1.0; /*0x555031*/
    v15 = Math::RoundToInt(v14); /*0x555037*/
    BYTE4(v15) = 0; /*0x55503e*/
    v16 = -((unsigned __int8)ReturnFalse2(v15, HIDWORD(v15)) != 0); /*0x55504d*/
    dword_ABCA78 = dword_ABCA74; /*0x55504f*/
    LOBYTE(v16) = v16 & 0xCF; /*0x555055*/
    dword_829AE8 = v16 + 50; /*0x55505a*/
  }
}


// ==== 0x00555070  LightSourceClass::Stat  this=LightSourceClass  sig=csp ====
int __thiscall LightSourceClass::Stat(void *this, AbstractClass *aP1)
{
  return AbstractClass::ProcessPower((#378 *)this); /*0x55507a*/
}


// ==== 0x00555080  LightSourceClass::ddtor  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = -1252326136; /*0x5550b0*/
  return 0; /*0x55508d*/
}


// ==== 0x005550C0  LightSourceClass::Write  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Write(AbstractClass *aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( aP0 ) /*0x5550d6*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x5550df*/
      *(_DWORD *)aP0->__pad_0 = &LightSourceClass::`vftable'; /*0x5550e4*/
      *(_DWORD *)&aP0->__pad_0[4] = &LightSourceClass::`vftable'; /*0x5550ea*/
      *(_DWORD *)&aP0->__pad_0[8] = &LightSourceClass::`vftable'; /*0x5550f1*/
      *(_DWORD *)&aP0->__pad_0[12] = &vt_LightSourceClass; /*0x5550f8*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/
}


// ==== 0x00555110  LightSourceClass::Seek  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Seek(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/
}


// ==== 0x00555130  LightSourceClass::StubReturn76  this=LightSourceClass  sig=csp ====
int LightSourceClass::_vt12()
{
  return 76; /*0x555135*/
}


// ==== 0x00555140  LightSourceClass::StubReturn54  this=LightSourceClass  sig=csp ====
int LightSourceClass::_vt11()
{
  return 54; /*0x555145*/
}


// ==== 0x00555150  LightSourceClass::CopyTo  this=LightSourceClass  sig=csp ====
LightSourceClass *__thiscall LightSourceClass::CopyTo(void **Block, char a2)
{
  int v3; // eax
  void **v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &LightSourceClass::`vftable'; /*0x555156*/
  *(Block + 1) = &LightSourceClass::`vftable'; /*0x55515c*/
  *(Block + 2) = &LightSourceClass::`vftable'; /*0x555163*/
  *(Block + 3) = &vt_LightSourceClass; /*0x55516a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x555171*/
  v5 = Block; /*0x555186*/
  v3 = ((int (__thiscall *)(DynamicVector **, void ***))dword_ABCA10->field_10)(&dword_ABCA10, &v5); /*0x55518a*/
  if ( v3 != -1 && v3 < g_BridgeCellPool && v3 < --g_BridgeCellPool ) /*0x5551a5*/
  {
    do /*0x5551bd*/
    {
      ++v3; /*0x5551ad*/
      *(_DWORD *)&dword_ABCA14->__pad_0[4 * v3 - 4] = *(_DWORD *)&dword_ABCA14->__pad_0[4 * v3]; /*0x5551b1*/
    }
    while ( v3 < g_BridgeCellPool ); /*0x5551bd*/
  }
  if ( *((_BYTE *)Block + 72) ) /*0x5551bf*/
  {
    *((_BYTE *)Block + 72) = 0; /*0x5551ca*/
    TacticalClass::ScrollView(Block, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR(Block); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    __3_YAXPAX_Z(Block); /*0x5551e2*/
  return (LightSourceClass *)Block; /*0x5551ec*/
}


// ==== 0x00555200  _DynamicVectorClass_PAVLightSourceClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::sub_555200(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x555206*/
  *(_DWORD *)(this + 16) = 0; /*0x555209*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x555210*/
  {
    __3_YAXPAX_Z(v2); /*0x555216*/
    *(_DWORD *)(this + 4) = 0; /*0x55521e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x555221*/
  *(_DWORD *)(this + 8) = 0; /*0x555224*/
}


// ==== 0x00555230  _DynamicVectorClass_PAVLightSourceClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::sub_555230(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x555230*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x555245*/
  else
    return 0; /*0x555237*/
}


// ==== 0x00555250  _VectorClass_PAVLightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x55525a*/
}


// ==== 0x00555260  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::sub_555260(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x555266*/
  *(_DWORD *)(this + 16) = 0; /*0x555269*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x555270*/
  {
    __3_YAXPAX_Z(v2); /*0x555276*/
    *(_DWORD *)(this + 4) = 0; /*0x55527e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x555281*/
  *(_DWORD *)(this + 8) = 0; /*0x555284*/
}


// ==== 0x00555290  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::sub_555290(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x555290*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5552a5*/
  else
    return 0; /*0x555297*/
}


// ==== 0x005552B0  _VectorClass_PAVPendingCellClass_LightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x5552ba*/
}


// ==== 0x005552C0  _VectorClass_PAVLightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x5552c2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5552cd*/
  {
    v3 = 0; /*0x5552cf*/
    if ( v2 <= 0 ) /*0x5552d3*/
      return 1; /*0x5552f3*/
    v4 = (_DWORD *)*(this + 1); /*0x5552d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5552db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5552e4*/
    {
      ++v3; /*0x5552e6*/
      ++v4; /*0x5552e7*/
      if ( v3 >= v2 ) /*0x5552ec*/
        return 1; /*0x5552ec*/
    }
  }
  return 0; /*0x5552ee*/
}


// ==== 0x00555300  _VectorClass_PAVLightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x55530c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x555316*/
    if ( a3 ) /*0x55531c*/
      v4 = a3; /*0x555332*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x55532e*/
    *((_BYTE *)this + 12) = 1; /*0x555336*/
    if ( v4 ) /*0x55533a*/
    {
      if ( this->Items ) /*0x555345*/
      {
        v6 = this->Capacity; /*0x55534c*/
        if ( a2 < v6 ) /*0x555351*/
          v6 = a2; /*0x555353*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x555359*/
          ++i; /*0x55535e*/
        if ( *((_BYTE *)this + 13) ) /*0x55536b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x555376*/
          this->Items = 0; /*0x55537e*/
        }
      }
      this->Items = v4; /*0x555387*/
      this->Capacity = a2; /*0x55538f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x555392*/
      return 1; /*0x555398*/
    }
    else
    {
      return 0; /*0x55533f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x5553a2*/
    return 1; /*0x5553a8*/
  }
}


// ==== 0x005553B0  _VectorClass_PAVLightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x5553bd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x5553c3*/
    *(_DWORD *)(this + 4) = 0; /*0x5553cb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x5553ce*/
  *(_DWORD *)(this + 8) = 0; /*0x5553d1*/
}


// ==== 0x005553E0  _VectorClass_PAVLightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x5553e0*/
    return 0; /*0x5553e8*/
  v3 = *(_DWORD *)(this + 8); /*0x5553ee*/
  result = 0; /*0x5553f1*/
  if ( v3 <= 0 ) /*0x5553f5*/
    return -1; /*0x55540c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x5553fb*/
  {
    if ( ++result >= v3 ) /*0x55540a*/
      return -1; /*0x55540a*/
  }
  return result; /*0x5553ea*/
}


// ==== 0x00555420  _VectorClass_PAVLightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x555420*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x555435*/
  else
    return 0; /*0x555427*/
}


// ==== 0x00555440  _DynamicVectorClass_PAVLightSourceClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::sub_555440(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55544c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x555452*/
    if ( a3 ) /*0x555458*/
      v4 = a3; /*0x55546e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x55546a*/
    *((_BYTE *)this + 12) = 1; /*0x555472*/
    if ( !v4 ) /*0x555476*/
      return 0; /*0x5554ea*/
    if ( this->q004 ) /*0x555478*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x55547f*/
      if ( a2 < v5 ) /*0x555484*/
        v5 = a2; /*0x555486*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x55548c*/
        ++i; /*0x555491*/
      if ( *((_BYTE *)this + 13) ) /*0x55549e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5554a9*/
        this->q004 = 0; /*0x5554b1*/
      }
    }
    this->q004 = v4; /*0x5554ba*/
    this->DynamicVector_field_0x8 = a2; /*0x5554c2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x5554c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x5554ce*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x5554d1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x5554d9*/
    this->DynamicVector_field_0x10 = v7; /*0x5554db*/
  return 1; /*0x5554de*/
}


// ==== 0x005554F0  _DynamicVectorClass_PAVLightSourceClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::sub_5554F0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x5554f0*/
  result = 0; /*0x5554f3*/
  if ( v2 <= 0 ) /*0x5554f8*/
    return -1; /*0x55550f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x5554fe*/
  {
    if ( ++result >= v2 ) /*0x55550d*/
      return -1; /*0x55550d*/
  }
  return result; /*0x555512*/
}


// ==== 0x00555520  _VectorClass_PAVPendingCellClass_LightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x555522*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x55552d*/
  {
    v3 = 0; /*0x55552f*/
    if ( v2 <= 0 ) /*0x555533*/
      return 1; /*0x555553*/
    v4 = (_DWORD *)*(this + 1); /*0x555535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55553b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x555544*/
    {
      ++v3; /*0x555546*/
      ++v4; /*0x555547*/
      if ( v3 >= v2 ) /*0x55554c*/
        return 1; /*0x55554c*/
    }
  }
  return 0; /*0x55554e*/
}


// ==== 0x00555560  _VectorClass_PAVPendingCellClass_LightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x55556c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x555576*/
    if ( a3 ) /*0x55557c*/
      v4 = a3; /*0x555592*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x55558e*/
    *((_BYTE *)this + 12) = 1; /*0x555596*/
    if ( v4 ) /*0x55559a*/
    {
      if ( this->Items ) /*0x5555a5*/
      {
        v6 = this->Capacity; /*0x5555ac*/
        if ( a2 < v6 ) /*0x5555b1*/
          v6 = a2; /*0x5555b3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5555b9*/
          ++i; /*0x5555be*/
        if ( *((_BYTE *)this + 13) ) /*0x5555cb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5555d6*/
          this->Items = 0; /*0x5555de*/
        }
      }
      this->Items = v4; /*0x5555e7*/
      this->Capacity = a2; /*0x5555ef*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x5555f2*/
      return 1; /*0x5555f8*/
    }
    else
    {
      return 0; /*0x55559f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x555602*/
    return 1; /*0x555608*/
  }
}


// ==== 0x00555610  _VectorClass_PAVPendingCellClass_LightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x55561d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x555623*/
    *(_DWORD *)(this + 4) = 0; /*0x55562b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55562e*/
  *(_DWORD *)(this + 8) = 0; /*0x555631*/
}


// ==== 0x00555640  _VectorClass_PAVPendingCellClass_LightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x555640*/
    return 0; /*0x555648*/
  v3 = *(_DWORD *)(this + 8); /*0x55564e*/
  result = 0; /*0x555651*/
  if ( v3 <= 0 ) /*0x555655*/
    return -1; /*0x55566c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x55565b*/
  {
    if ( ++result >= v3 ) /*0x55566a*/
      return -1; /*0x55566a*/
  }
  return result; /*0x55564a*/
}


// ==== 0x00555680  _VectorClass_PAVPendingCellClass_LightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x555680*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x555695*/
  else
    return 0; /*0x555687*/
}


// ==== 0x005556A0  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::sub_5556A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5556ac*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5556b2*/
    if ( a3 ) /*0x5556b8*/
      v4 = a3; /*0x5556ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5556ca*/
    *((_BYTE *)this + 12) = 1; /*0x5556d2*/
    if ( !v4 ) /*0x5556d6*/
      return 0; /*0x55574a*/
    if ( this->q004 ) /*0x5556d8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5556df*/
      if ( a2 < v5 ) /*0x5556e4*/
        v5 = a2; /*0x5556e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x5556ec*/
        ++i; /*0x5556f1*/
      if ( *((_BYTE *)this + 13) ) /*0x5556fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x555709*/
        this->q004 = 0; /*0x555711*/
      }
    }
    this->q004 = v4; /*0x55571a*/
    this->DynamicVector_field_0x8 = a2; /*0x555722*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x555725*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x55572e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x555731*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x555739*/
    this->DynamicVector_field_0x10 = v7; /*0x55573b*/
  return 1; /*0x55573e*/
}


// ==== 0x00555750  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::sub_555750(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x555750*/
  result = 0; /*0x555753*/
  if ( v2 <= 0 ) /*0x555758*/
    return -1; /*0x55576f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55575e*/
  {
    if ( ++result >= v2 ) /*0x55576d*/
      return -1; /*0x55576d*/
  }
  return result; /*0x555772*/
}


// ==== 0x00555780  _VectorClass_PAVLightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_LightSourceClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x555783*/
  *Block = &vt_VectorClass_LightSourceClass; /*0x555786*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x555790*/
  {
    __3_YAXPAX_Z(v3); /*0x555798*/
    *(Block + 1) = 0; /*0x5557a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5557ab*/
  *(Block + 2) = 0; /*0x5557b1*/
  if ( (a2 & 1) != 0 ) /*0x5557b8*/
    __3_YAXPAX_Z(Block); /*0x5557bb*/
  return (VectorClass *)Block; /*0x5557c5*/
}


// ==== 0x005557D0  _DynamicVectorClass_PAVLightSourceClass::Constructor_VectorClass_LightSourceClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5557d3*/
  *Block = &vt_VectorClass_LightSourceClass; /*0x5557d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5557e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5557e8*/
    *(Block + 1) = 0; /*0x5557f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5557fb*/
  *(Block + 2) = 0; /*0x555801*/
  if ( (a2 & 1) != 0 ) /*0x555808*/
    __3_YAXPAX_Z(Block); /*0x55580b*/
  return (DynamicVector *)Block; /*0x555815*/
}


// ==== 0x00555820  _VectorClass_PAVPendingCellClass_LightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x555823*/
  *Block = &vt_VectorClass_LightSourceClass_PendingCellClass; /*0x555826*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x555830*/
  {
    __3_YAXPAX_Z(v3); /*0x555838*/
    *(Block + 1) = 0; /*0x555840*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55584b*/
  *(Block + 2) = 0; /*0x555851*/
  if ( (a2 & 1) != 0 ) /*0x555858*/
    __3_YAXPAX_Z(Block); /*0x55585b*/
  return (VectorClass *)Block; /*0x555865*/
}


// ==== 0x00555870  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_LightSourceClass::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x555873*/
  *Block = &vt_VectorClass_LightSourceClass_PendingCellClass; /*0x555876*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x555880*/
  {
    __3_YAXPAX_Z(v3); /*0x555888*/
    *(Block + 1) = 0; /*0x555890*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55589b*/
  *(Block + 2) = 0; /*0x5558a1*/
  if ( (a2 & 1) != 0 ) /*0x5558a8*/
    __3_YAXPAX_Z(Block); /*0x5558ab*/
  return (DynamicVector *)Block; /*0x5558b5*/
}


// ==== 0x005558C0  sub_5558C0  this=-  sig=ida-proto ====
int sub_5558C0()
{
  dword_ABCA88 = 0; /*0x5558c2*/
  dword_ABCA8C = 0; /*0x5558c7*/
  dword_ABCA90 = 0; /*0x5558cc*/
  dword_ABCA94 = 0; /*0x5558d1*/
  return 0; /*0x5558d6*/
}


// ==== 0x005558E0  Map_Calc  this=int  sig=csp ====
int __fastcall sub_5558E0(int *a1, int *a2, int *a3, int *a4, int *a5)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int result; // eax
  int v19; // [esp+18h] [ebp+4h]
  int v20; // [esp+1Ch] [ebp+8h]

  *a3 = *a3 <= 0 ? 0 : *a3;
  *a4 = *a4 <= 0 ? 0 : *a4;
  *a5 = *a5 <= 0 ? 0 : *a5;
  v8 = *a3; /*0x555921*/
  if ( *a3 >= 2000 ) /*0x555928*/
    v8 = 2000; /*0x55592a*/
  *a3 = v8; /*0x55592f*/
  v9 = *a4; /*0x555931*/
  if ( *a4 >= 2000 ) /*0x555938*/
    v9 = 2000; /*0x55593a*/
  *a4 = v9; /*0x55593f*/
  v10 = *a5; /*0x555941*/
  if ( *a5 >= 2000 ) /*0x555948*/
    v10 = 2000; /*0x55594a*/
  *a5 = v10; /*0x55594f*/
  *a1 = 0x10000; /*0x555951*/
  v11 = *a3; /*0x555958*/
  v19 = *a3; /*0x55595f*/
  if ( *a3 != 1000 || *a4 != v11 || *a5 != v11 ) /*0x55596b*/
  {
    v12 = *a4; /*0x555971*/
    v20 = *a4; /*0x555975*/
    if ( *a4 > v11 ) /*0x555979*/
      goto LABEL_15; /*0x555979*/
    if ( v11 >= *a5 ) /*0x55597d*/
    {
      v13 = (double)v19 * 65536.0 * 0.001; /*0x555989*/
      v14 = Math::RoundToInt(v13); /*0x555991*/
      *a1 = v14; /*0x555999*/
      if ( v14 >= 66 ) /*0x55599c*/
      {
        *a3 = 1000; /*0x5559a2*/
        *a4 = Math::RoundToInt(v13); /*0x5559b7*/
        *a5 = Math::RoundToInt(v13); /*0x5559ca*/
LABEL_21:
        *a2 = (*a2 * *a1) >> 16; /*0x555a8f*/
        goto LABEL_22; /*0x555a9c*/
      }
      goto LABEL_17; /*0x55599c*/
    }
    if ( v12 >= v11 ) /*0x5559d3*/
    {
LABEL_15:
      if ( v12 >= *a5 ) /*0x5559d7*/
      {
        v15 = Math::RoundToInt((double)v20 * 65536.0 * 0.001); /*0x5559e9*/
        *a1 = v15; /*0x5559f1*/
        if ( v15 >= 66 ) /*0x5559f4*/
        {
          *a4 = 1000; /*0x555a1e*/
          *a3 = Math::RoundToInt((double)*a3 * 65536.0 / (double)*a1); /*0x555a34*/
          *a5 = Math::RoundToInt((double)*a5 * 65536.0 / (double)*a1); /*0x555a46*/
          goto LABEL_21; /*0x555a48*/
        }
LABEL_17:
        *a1 = 0x10000; /*0x5559f6*/
        *a3 = 1000; /*0x555a01*/
        *a4 = 1000; /*0x555a07*/
        *a5 = 1000; /*0x555a0d*/
        *a2 = 0; /*0x555a13*/
        goto LABEL_22; /*0x555a19*/
      }
    }
    v16 = Math::RoundToInt((double)*a5 * 65536.0 * 0.001); /*0x555a58*/
    *a1 = v16; /*0x555a60*/
    if ( v16 >= 66 ) /*0x555a63*/
    {
      *a5 = 1000; /*0x555a65*/
      *a3 = Math::RoundToInt((double)*a3 * 65536.0 / (double)*a1); /*0x555a7b*/
      *a4 = Math::RoundToInt((double)*a4 * 65536.0 / (double)*a1); /*0x555a8d*/
      goto LABEL_21; /*0x555a8d*/
    }
    goto LABEL_17; /*0x555a63*/
  }
LABEL_22:
  result = *a2; /*0x555a9e*/
  if ( *a2 >= 2000 ) /*0x555aad*/
    result = 2000; /*0x555aaf*/
  *a2 = result; /*0x555ab4*/
  return result; /*0x555aa2*/
}


// ==== 0x00555AC0  QuantizeColorRGB  this=int  sig=csp ====
int *__fastcall Color_QuantizeRGB(int *a1, int *a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  int *result; // eax
  int v7; // ecx

  v4 = *a1; /*0x555ac4*/
  if ( *a1 >= 1000 ) /*0x555acb*/
    v4 = 1000; /*0x555acd*/
  *a1 = v4; /*0x555ad2*/
  v5 = *a2; /*0x555ad4*/
  if ( *a2 >= 1000 ) /*0x555adb*/
    v5 = 1000; /*0x555add*/
  *a2 = v5; /*0x555ae2*/
  result = a3; /*0x555ae4*/
  v7 = *a3; /*0x555ae8*/
  if ( *a3 >= 1000 ) /*0x555af0*/
    v7 = 1000; /*0x555af2*/
  *a3 = v7; /*0x555af7*/
  *a1 &= (*a1 <= 0) - 1; /*0x555b05*/
  *a2 &= (*a2 <= 0) - 1; /*0x555b13*/
  *a3 &= (*a3 <= 0) - 1; /*0x555b21*/
  if ( MEMORY[0xA8EB78] ) /*0x555b2c*/
  {
    if ( MEMORY[0xA8EB78] == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( MEMORY[0xA8EB78] == 2 ) /*0x555b32*/
    {
      *a1 &= 0xFFFFFFE0; /*0x555b39*/
      *a2 &= 0xFFFFFFE0; /*0x555b41*/
      *a3 &= 0xFFFFFFE0; /*0x555b49*/
    }
  }
  else
  {
    *a1 &= 0xFFFFFF80; /*0x555b6d*/
    *a2 &= 0xFFFFFF80; /*0x555b74*/
    *a3 &= 0xFFFFFF80; /*0x555b7b*/
  }
  return result; /*0x555b40*/
}


// ==== 0x00555B90  sub_555B90  this=-  sig=ida-proto ====
int sub_555B90()
{
  dword_ABCAA0 = 0; /*0x555b92*/
  dword_ABCAA4 = 0; /*0x555b97*/
  dword_ABCAA8 = 0; /*0x555b9c*/
  dword_ABCAAC = 0; /*0x555ba1*/
  return 0; /*0x555ba6*/
}


// ==== 0x00555BB0  sub_555BB0  this=-  sig=ida-proto ====
void sub_555BB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x555bbc*/
  dbl_ABCAB8 = Math::Sqrt(v0 + v0); /*0x555bce*/
}


// ==== 0x00555BE0  sub_555BE0  this=-  sig=ida-proto ====
void sub_555BE0()
{
  dbl_ABCB08 = dbl_ABCAB8 / 60.0; /*0x555bec*/
}


// ==== 0x00555C00  sub_555C00  this=-  sig=ida-proto ====
void sub_555C00()
{
  dbl_ABCAF0 = 1.0 / dbl_ABCB08; /*0x555c0c*/
}


// ==== 0x00555C20  sub_555C20  this=-  sig=ida-proto ====
void sub_555C20()
{
  dbl_ABCAE8 = 0.0174532925199433 * 45.0; /*0x555c2c*/
}


// ==== 0x00555C40  sub_555C40  this=-  sig=ida-proto ====
void sub_555C40()
{
  dbl_ABCAC0 = 0.0174532925199433 * 60.0; /*0x555c4c*/
}


// ==== 0x00555C60  sub_555C60  this=-  sig=ida-proto ====
void sub_555C60()
{
  dbl_ABCA98 = 0.0174532925199433 * 90.0; /*0x555c6c*/
}


// ==== 0x00555C80  sub_555C80  this=-  sig=ida-proto ====
__int64 sub_555C80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCA98 - dbl_ABCAC0); /*0x555c92*/
  result = Math::RoundToInt(v0 * dbl_ABCAB8 * 0.5); /*0x555ca6*/
  dword_ABCB10 = result; /*0x555cab*/
  return result; /*0x555cb0*/
}


// ==== 0x00555CC0  sub_555CC0  this=-  sig=ida-proto ====
void sub_555CC0()
{
  dbl_ABCAC8 = Math::ArcTan((double)dword_ABCB10 * 0.00390625); /*0x555cd7*/
}


// ==== 0x00555CF0  sub_555CF0  this=-  sig=ida-proto ====
void sub_555CF0()
{
  dbl_ABCAE0 = Math::ArcTan((double)(2 * dword_ABCB10) / dbl_ABCAB8); /*0x555d12*/
}


// ==== 0x00555D20  sub_555D20  this=-  sig=ida-proto ====
__int64 sub_555D20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCB10) + 0.5); /*0x555d3b*/
  dword_ABCB04 = result; /*0x555d40*/
  return result; /*0x555d46*/
}


// ==== 0x00555D50  sub_555D50  this=-  sig=ida-proto ====
int sub_555D50()
{
  word_ABCAB0 = 0; /*0x555d52*/
  word_ABCAB2 = 0; /*0x555d58*/
  return 0; /*0x555d5e*/
}


// ==== 0x00555D60  sub_555D60  this=-  sig=ida-proto ====
int sub_555D60()
{
  dword_ABCAD0 = 0; /*0x555d62*/
  dword_ABCAD4 = 0; /*0x555d67*/
  dword_ABCAD8 = 0; /*0x555d6c*/
  return 0; /*0x555d71*/
}


// ==== 0x00555D80  sub_555D80  this=-  sig=ida-proto ====
int sub_555D80()
{
  dword_ABCB00 = 0; /*0x555d85*/
  dword_ABCAF8 = 128; /*0x555d8f*/
  dword_ABCAFC = 128; /*0x555d94*/
  return 128; /*0x555d99*/
}


// ==== 0x00555DA0  LightConvertClass::Constructor  this=LightConvertClass  sig=csp ====
int __thiscall LightConvertClass::Constructor(
        int this,
        ConvertClass *aP1,
        ObjectClass *aP2,
        int aP3,
        ObjectClass *aP4,
        LightConvertClass *aP5,
        ObjectClass *aP6,
        char a8,
        LightConvertClass *aP8,
        ObjectClass *aP9)
{
  int v11; // ecx
  int v12; // edi
  int v13; // edx
  ObjectClass *v15; // [esp-Ch] [ebp-1Ch]
  ObjectClass *v16; // [esp-8h] [ebp-18h]

  ConvertClass::Construct((_DWORD *)this, aP1, (int)aP2, (ConvertClass *)aP3, aP9, (ConvertClass *)1); /*0x555dbe*/
  v11 = *(_DWORD *)(this + 364); /*0x555dc3*/
  *(_DWORD *)(this + 392) = aP1; /*0x555dd1*/
  *(_DWORD *)(this + 396) = aP2; /*0x555ddb*/
  *(_DWORD *)(this + 400) = aP8; /*0x555de8*/
  *(_DWORD *)(this + 404) = 0; /*0x555dee*/
  *(_DWORD *)(this + 408) = aP4; /*0x555df8*/
  *(_DWORD *)(this + 412) = aP5; /*0x555dfe*/
  *(_DWORD *)(this + 416) = aP6; /*0x555e04*/
  *(_DWORD *)(this + 420) = aP4; /*0x555e0a*/
  *(_DWORD *)(this + 424) = aP5; /*0x555e10*/
  *(_DWORD *)(this + 428) = aP6; /*0x555e16*/
  *(_BYTE *)(this + 432) = 0; /*0x555e1c*/
  *(_DWORD *)this = &vt_LightConvertClass; /*0x555e23*/
  if ( v11 < 1 ) /*0x555e29*/
    return this; /*0x555e29*/
  if ( !aP8 ) /*0x555e31*/
    *(_DWORD *)(this + 400) = &unk_829C20; /*0x555e33*/
  if ( dword_829D20 == -1 ) /*0x555e44*/
    dword_829D20 = DDraw::GetStatus(); /*0x555e4b*/
  if ( LightningStorm::IsActive() ) /*0x555e50*/
  {
    if ( aP4 == (ObjectClass *)-1 ) /*0x555e60*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555e67*/
      *(_DWORD *)(this + 412) = 1000; /*0x555e6d*/
      *(_DWORD *)(this + 416) = 1000; /*0x555e73*/
    }
    else
    {
      *(_DWORD *)(this + 408) = aP4; /*0x555e7b*/
      *(_DWORD *)(this + 412) = aP5; /*0x555e81*/
      *(_DWORD *)(this + 416) = aP6; /*0x555e87*/
    }
    v16 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13652) / 100); /*0x555ebe*/
    v12 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13644); /*0x555ebf*/
    v15 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13648) / 100); /*0x555ee2*/
LABEL_23:
    v13 = 1000 * v12 / 100; /*0x556047*/
    goto LABEL_24; /*0x556062*/
  }
  if ( NukeFlash::IsActive() || ChronoScreen::IsActive() ) /*0x555ef5*/
  {
    if ( aP4 == (ObjectClass *)-1 ) /*0x555fc4*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555fcb*/
      *(_DWORD *)(this + 412) = 1000; /*0x555fd1*/
      *(_DWORD *)(this + 416) = 1000; /*0x555fd7*/
    }
    else
    {
      *(_DWORD *)(this + 408) = aP4; /*0x555fdf*/
      *(_DWORD *)(this + 412) = aP5; /*0x555fe5*/
      *(_DWORD *)(this + 416) = aP6; /*0x555feb*/
    }
    v16 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13676) / 100); /*0x556022*/
    v12 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13668); /*0x556023*/
    v15 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13672) / 100); /*0x556046*/
    goto LABEL_23; /*0x556046*/
  }
  if ( !PsyDom::IsActive() ) /*0x555f09*/
  {
    LightConvertClass::UpdateColors(this, (int)aP4, (int)aP5, (int)aP6, 0); /*0x555fbc*/
    goto LABEL_25; /*0x555fbc*/
  }
  if ( aP4 == (ObjectClass *)-1 ) /*0x555f12*/
  {
    *(_DWORD *)(this + 408) = 1000; /*0x555f19*/
    *(_DWORD *)(this + 412) = 1000; /*0x555f1f*/
    *(_DWORD *)(this + 416) = 1000; /*0x555f25*/
  }
  else
  {
    *(_DWORD *)(this + 408) = aP4; /*0x555f2d*/
    *(_DWORD *)(this + 412) = aP5; /*0x555f33*/
    *(_DWORD *)(this + 416) = aP6; /*0x555f39*/
  }
  v16 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13704) / 100); /*0x555f7c*/
  v15 = (ObjectClass *)(1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13700) / 100); /*0x555f97*/
  v13 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13696) / 100; /*0x555fb0*/
LABEL_24:
  LightConvertClass::UpdateColors(this, v13, (int)v15, (int)v16, 1); /*0x556064*/
LABEL_25:
  if ( !a8 ) /*0x556072*/
    ConvertClass::InitTables(this); /*0x556076*/
  return this; /*0x55607d*/
}


// ==== 0x00556090  LightConvertClass::UpdateColors  this=LightConvertClass  sig=csp ====
void __thiscall Palette_GenerateRamp(int this, int a2, int a3, int a4, char a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // ebp
  _WORD *v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  unsigned __int8 *v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // edx
  int v24; // edx
  _WORD *v25; // ecx
  int v26; // [esp+10h] [ebp-28h]
  int v27; // [esp+14h] [ebp-24h]
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+24h] [ebp-14h]
  int v32; // [esp+28h] [ebp-10h]
  int v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+30h] [ebp-8h]
  int v35; // [esp+34h] [ebp-4h]
  _WORD *v36; // [esp+3Ch] [ebp+4h]
  int v37; // [esp+40h] [ebp+8h]
  int v38; // [esp+44h] [ebp+Ch]
  int v39; // [esp+48h] [ebp+10h]

  v6 = *(_DWORD *)(this + 364); /*0x556098*/
  if ( v6 >= 1 )
  {
    if ( !*(_DWORD *)(this + 400) ) /*0x5560a8*/
      *(_DWORD *)(this + 400) = &unk_829C20; /*0x5560b2*/
    v7 = a2; /*0x5560bc*/
    if ( a2 == -1 )
    {
      v12 = a4; /*0x556115*/
      v11 = a3; /*0x556119*/
    }
    else
    {
      if ( a2 >= 2000 ) /*0x5560ca*/
        v7 = 2000; /*0x5560cc*/
      v8 = a3; /*0x5560d1*/
      v7 = v7 <= 0 ? 0 : v7;
      if ( a3 >= 2000 ) /*0x5560e5*/
        v8 = 2000; /*0x5560e7*/
      v9 = v8 <= 0 ? 0 : v8;
      v10 = a4; /*0x5560f6*/
      v11 = v9; /*0x556100*/
      if ( a4 >= 2000 ) /*0x556102*/
        v10 = 2000; /*0x556104*/
      v12 = v10 <= 0 ? 0 : v10;
    }
    if ( a5 ) /*0x556123*/
    {
      if ( v7 == -1 ) /*0x556128*/
      {
        v7 = *(_DWORD *)(this + 420); /*0x55612a*/
        v12 = *(_DWORD *)(this + 428); /*0x556130*/
        v11 = *(_DWORD *)(this + 424); /*0x556136*/
      }
      else
      {
        *(_DWORD *)(this + 420) = v7; /*0x556145*/
        *(_DWORD *)(this + 424) = v11; /*0x55614b*/
        *(_DWORD *)(this + 428) = v12; /*0x556151*/
      }
      *(_BYTE *)(this + 432) = 1; /*0x55613c*/
    }
    else
    {
      if ( v7 == -1 ) /*0x556163*/
      {
        v7 = *(_DWORD *)(this + 408); /*0x556165*/
        v11 = *(_DWORD *)(this + 412); /*0x55616b*/
        v12 = *(_DWORD *)(this + 416); /*0x556171*/
      }
      else
      {
        *(_DWORD *)(this + 408) = v7; /*0x556179*/
        *(_DWORD *)(this + 412) = v11; /*0x55617f*/
        *(_DWORD *)(this + 416) = v12; /*0x556185*/
      }
      *(_BYTE *)(this + 432) = 0; /*0x55618b*/
    }
    v32 = Math::RoundToInt((double)(1000 * v7) * 0.065536); /*0x5561b1*/
    v34 = Math::RoundToInt((double)(1000 * v11) * 0.065536); /*0x5561d5*/
    v35 = Math::RoundToInt((double)(1000 * v12) * 0.065536); /*0x5561f8*/
    v13 = 0; /*0x556202*/
    v30 = v6 - 1; /*0x55620e*/
    v14 = *(_WORD **)(this + 368); /*0x55621e*/
    v31 = (30 * v6 / 200 - 1) & ((30 * v6 / 200 - 1 <= 0) - 1); /*0x55623a*/
    if ( v31 >= (v6 - 1) >> 1 ) /*0x55623e*/
      v31 = (v6 - 1) >> 1; /*0x556240*/
    v26 = 0; /*0x556246*/
    if ( v6 - 1 >= 0 ) /*0x55624a*/
    {
      v29 = 0; /*0x556250*/
      v28 = 0; /*0x556254*/
      v27 = 0; /*0x556258*/
      v33 = 0; /*0x55625c*/
      while ( v6 > 1 ) /*0x556263*/
      {
        v15 = v13 / v30; /*0x55626e*/
        v38 = v13 / v30; /*0x556277*/
        v16 = v27 / v30; /*0x55627b*/
        v37 = v27 / v30; /*0x556288*/
        v17 = v28 / v30; /*0x55628c*/
        v39 = v28 / v30; /*0x556294*/
        if ( v26 <= v31 ) /*0x556298*/
        {
          v18 = v29 / v31; /*0x5562a6*/
LABEL_31:
          v17 = v39; /*0x5562cb*/
          goto LABEL_32; /*0x5562cb*/
        }
        v18 = 0x10000; /*0x55629a*/
LABEL_32:
        switch ( dword_829D20 ) /*0x5562de*/
        {
          case 0: /*0x5562de*/
            ConvertRGB24toRGB565( /*0x5562f8*/
              *(_DWORD *)(this + 392),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              *(_DWORD *)(this + 400));
            v14 += 256; /*0x556300*/
            break; /*0x556306*/
          case 1: /*0x5562de*/
            ConvertRGB24to655( /*0x55631e*/
              *(_DWORD *)(this + 392),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              *(_DWORD *)(this + 400));
            v14 += 256; /*0x556326*/
            break; /*0x55632c*/
          case 2: /*0x5562de*/
            ConvertRGB24to556( /*0x556344*/
              *(_DWORD *)(this + 392),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              *(_DWORD *)(this + 400));
            v14 += 256; /*0x55634c*/
            break; /*0x556352*/
          case 3: /*0x5562de*/
            ConvertRGB24to565( /*0x55636a*/
              *(_DWORD *)(this + 392),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              *(_DWORD *)(this + 400));
            v14 += 256; /*0x556372*/
            break; /*0x556378*/
          default:
            *v14 = 0; /*0x55637d*/
            v36 = v14 + 1; /*0x556385*/
            v19 = 1; /*0x556389*/
            while ( 1 ) /*0x5563bb*/
            {
              v20 = (unsigned __int8 *)(*(_DWORD *)(this + 392) + 3 * (v19 % 256)); /*0x5563bb*/
              if ( *(_BYTE *)(*(_DWORD *)(this + 400) + v19) ) /*0x55639a*/
              {
                v21 = (v15 * *v20) >> 16; /*0x5563d7*/
                v22 = (v37 * v20[1]) >> 16; /*0x5563da*/
                v23 = v39 * v20[2]; /*0x5563dd*/
              }
              else
              {
                v21 = (v18 * *v20) >> 16; /*0x556417*/
                v22 = (v18 * v20[1]) >> 16; /*0x55641a*/
                v23 = v18 * v20[2]; /*0x55641d*/
              }
              v24 = v23 >> 16; /*0x556420*/
              if ( v21 >= 255 ) /*0x556429*/
                v21 = 255; /*0x55642b*/
              if ( v22 >= 255 ) /*0x556436*/
                v22 = 255; /*0x556438*/
              if ( v24 >= 255 ) /*0x556443*/
                v24 = 255; /*0x556445*/
              v25 = v36 + 1; /*0x556480*/
              v36 = v25; /*0x556483*/
              ++v19; /*0x556489*/
              *(v25 - 1) = (v21 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) /*0x55648a*/
                         | (v22 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                         | (v24 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
              if ( v19 >= 256 ) /*0x556494*/
                break; /*0x556494*/
              v15 = v38; /*0x556390*/
            }
            v14 = v25; /*0x55649a*/
            break; /*0x55649a*/
        }
        v13 = 2 * v32 + v33; /*0x5564ae*/
        v27 += 2 * v34; /*0x5564c3*/
        v28 += 2 * v35; /*0x5564d3*/
        v6 = *(_DWORD *)(this + 364); /*0x5564d7*/
        v29 += 0x10000; /*0x5564dd*/
        ++v26; /*0x5564e5*/
        v33 = v13; /*0x5564eb*/
        if ( v26 > v6 - 1 ) /*0x5564ef*/
          return; /*0x5564ef*/
      }
      v38 = v32; /*0x5562b6*/
      v39 = v35; /*0x5562ba*/
      v15 = v32; /*0x5562be*/
      v37 = v34; /*0x5562c0*/
      v18 = 0x10000; /*0x5562c4*/
      v16 = v34; /*0x5562c9*/
      goto LABEL_31; /*0x5562c9*/
    }
  }
}


// ==== 0x00556510  LightConvertClass::method  this=LightConvertClass  sig=csp ====
int __thiscall sub_556510(int this)
{
  *(_DWORD *)this = &vt_LightConvertClass; /*0x556510*/
  return sub_490400(this);
}


// ==== 0x00556520  LightConvertClass::method  this=LightConvertClass  sig=csp ====
LightConvertClass *__thiscall sub_556520(_DWORD *Block, char a2)
{
  *Block = &vt_LightConvertClass; /*0x556523*/
  sub_490400((int)Block); /*0x556529*/
  if ( (a2 & 1) != 0 ) /*0x556533*/
    __3_YAXPAX_Z(Block); /*0x556536*/
  return (LightConvertClass *)Block; /*0x556540*/
}


// ==== 0x005565A0  LinkClass::Destruct  this=LinkClass  sig=csp ====
int __thiscall LinkClass_Destructor(_DWORD *this)
{
  _DWORD *Prev; // edi
  int result; // eax
  int v4; // edx
  int v5; // edx

  *this = &vt_LinkClass; /*0x5565a5*/
  Prev = LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 28))(this); /*0x5565b7*/
  v4 = this->m_Prev; /*0x5565ba*/
  if ( v4 ) /*0x5565c1*/
    *(_DWORD *)(v4 + 4) = this->m_Next; /*0x5565c6*/
  v5 = this->m_Next; /*0x5565c9*/
  if ( v5 ) /*0x5565ce*/
    *(_DWORD *)(v5 + 8) = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (_DWORD *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}


// ==== 0x005565F0  LinkClass::Reset  this=LinkClass  sig=csp ====
int __thiscall Hash_Reset(_DWORD *this)
{
  this->m_Next = 0; /*0x5565f2*/
  this->m_Prev = 0; /*0x5565f5*/
  return 0; /*0x5565f8*/
}


// ==== 0x00556600  LinkedList::MoveNode  this=TechnoClass  sig=csp ====
void *__thiscall LinkedList_MoveNode(void *this, void *a2)
{
  if ( a2 != this ) /*0x55660a*/
  {
    (*(void (__thiscall **)(void *))(this->objectTypeFlags)(this); /*0x55660e*/
    (*(void (__thiscall **)(void *, void *))(this->vtable4)(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/
}


// ==== 0x00556620  LinkClass::GetWidth  this=LinkClass  sig=csp ====
int __thiscall ObjectClass_GetWidth(_DWORD *this)
{
  return this->m_Next; /*0x556623*/
}


// ==== 0x00556630  LinkClass::GetHeight  this=LinkClass  sig=csp ====
int __thiscall ObjectClass_GetHeight(_DWORD *this)
{
  return this->m_Prev; /*0x556633*/
}


// ==== 0x00556640  LinkClass::FindPrev  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList_FindPrev(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax

  v1 = this + 2; /*0x556643*/
  if ( !this->m_Prev ) /*0x556640*/
    return this; /*0x55665d*/
  do /*0x556651*/
  {
    result = (_DWORD *)*v1; /*0x55664b*/
    if ( (_DWORD *)*v1 == this ) /*0x55664f*/
      break; /*0x55664f*/
    v1 = result + 2; /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/
}


// ==== 0x00556670  LinkClass::FindNext  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList_FindNext(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax

  v1 = this + 1; /*0x556673*/
  if ( !this->m_Next ) /*0x556670*/
    return this; /*0x55668d*/
  do /*0x556681*/
  {
    result = (_DWORD *)*v1; /*0x55667b*/
    if ( (_DWORD *)*v1 == this ) /*0x55667f*/
      break; /*0x55667f*/
    v1 = result + 1; /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/
}


// ==== 0x005566A0  LinkClass::InsertAfter  this=LinkClass  sig=csp ====
int __thiscall LinkedList_InsertAfter(_DWORD *this, int a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x5566a5*/
  v3 = *(_DWORD *)(a2 + 4); /*0x5566ac*/
  *(_DWORD *)(a2 + 4) = this; /*0x5566af*/
  this->m_Prev = a2; /*0x5566b4*/
  this->m_Next = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    *(_DWORD *)(v3 + 8) = this; /*0x5566bc*/
  return (*(int (__thiscall **)(_DWORD *))(*this + 24))(this); /*0x5566c6*/
}


// ==== 0x005566D0  LinkClass::Attach  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList_Attach(_DWORD *this, int a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x5566d5*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2); /*0x5566de*/
  *(_DWORD *)(v3 + 8) = this; /*0x5566e1*/
  this->m_Next = v3; /*0x5566e4*/
  this->m_Prev = 0; /*0x5566e7*/
  return this; /*0x5566f0*/
}


// ==== 0x00556700  LinkClass::Append  this=LinkClass  sig=csp ====
int __thiscall LinkedList_Append(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x556705*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2); /*0x55670e*/
  *(_DWORD *)(v3 + 4) = this; /*0x556711*/
  this->m_Prev = v3; /*0x556714*/
  v4 = *this; /*0x556717*/
  this->m_Next = 0; /*0x55671b*/
  return (*(int (__thiscall **)(_DWORD *))(v4 + 24))(this); /*0x556725*/
}


// ==== 0x00556730  LinkClass::RemoveNode  this=LinkClass  sig=csp ====
int __thiscall LinkedList_RemoveNode(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this); /*0x55673e*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 28))(this); /*0x556740*/
  v4 = this->m_Prev; /*0x556743*/
  if ( v4 ) /*0x55674a*/
    *(_DWORD *)(v4 + 4) = this->m_Next; /*0x55674f*/
  v5 = this->m_Next; /*0x556752*/
  if ( v5 ) /*0x556757*/
    *(_DWORD *)(v5 + 8) = this->m_Prev; /*0x55675c*/
  this->m_Prev = 0; /*0x556761*/
  this->m_Next = 0; /*0x556764*/
  if ( (_DWORD *)v2 != this ) /*0x556767*/
    return v2; /*0x55677e*/
  if ( (_DWORD *)v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3); /*0x55676d*/
}


// ==== 0x00556790  sub_556790  this=-  sig=ida-proto ====
void sub_556790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55679c*/
  dbl_ABCB38 = Math::Sqrt(v0 + v0); /*0x5567ae*/
}


// ==== 0x005567C0  sub_5567C0  this=-  sig=ida-proto ====
void sub_5567C0()
{
  dbl_ABCBA0 = dbl_ABCB38 / 60.0; /*0x5567cc*/
}


// ==== 0x005567E0  sub_5567E0  this=-  sig=ida-proto ====
void sub_5567E0()
{
  dbl_ABCB70 = 1.0 / dbl_ABCBA0; /*0x5567ec*/
}


// ==== 0x00556800  sub_556800  this=-  sig=ida-proto ====
void sub_556800()
{
  dbl_ABCB68 = 0.0174532925199433 * 45.0; /*0x55680c*/
}


// ==== 0x00556820  sub_556820  this=-  sig=ida-proto ====
void sub_556820()
{
  dbl_ABCB40 = 0.0174532925199433 * 60.0; /*0x55682c*/
}


// ==== 0x00556840  sub_556840  this=-  sig=ida-proto ====
void sub_556840()
{
  dbl_ABCB18 = 0.0174532925199433 * 90.0; /*0x55684c*/
}


// ==== 0x00556860  sub_556860  this=-  sig=ida-proto ====
__int64 sub_556860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCB18 - dbl_ABCB40); /*0x556872*/
  result = Math::RoundToInt(v0 * dbl_ABCB38 * 0.5); /*0x556886*/
  dword_ABCBA8 = result; /*0x55688b*/
  return result; /*0x556890*/
}


// ==== 0x005568A0  sub_5568A0  this=-  sig=ida-proto ====
void sub_5568A0()
{
  dbl_ABCB48 = Math::ArcTan((double)dword_ABCBA8 * 0.00390625); /*0x5568b7*/
}


// ==== 0x005568D0  sub_5568D0  this=-  sig=ida-proto ====
void sub_5568D0()
{
  dbl_ABCB60 = Math::ArcTan((double)(2 * dword_ABCBA8) / dbl_ABCB38); /*0x5568f2*/
}


// ==== 0x00556900  sub_556900  this=-  sig=ida-proto ====
__int64 sub_556900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCBA8) + 0.5); /*0x55691b*/
  dword_ABCB9C = result; /*0x556920*/
  return result; /*0x556926*/
}


// ==== 0x00556930  sub_556930  this=-  sig=ida-proto ====
int sub_556930()
{
  word_ABCB30 = 0; /*0x556932*/
  word_ABCB32 = 0; /*0x556938*/
  return 0; /*0x55693e*/
}


// ==== 0x00556940  sub_556940  this=-  sig=ida-proto ====
int sub_556940()
{
  dword_ABCB50 = 0; /*0x556942*/
  dword_ABCB54 = 0; /*0x556947*/
  dword_ABCB58 = 0; /*0x55694c*/
  return 0; /*0x556951*/
}


// ==== 0x00556960  sub_556960  this=-  sig=ida-proto ====
int sub_556960()
{
  dword_ABCB98 = 0; /*0x556965*/
  dword_ABCB90 = 128; /*0x55696f*/
  dword_ABCB94 = 128; /*0x556974*/
  return 128; /*0x556979*/
}


// ==== 0x00556980  sub_556980  this=-  sig=ida-proto ====
int sub_556980()
{
  dword_ABCB20 = 0; /*0x556982*/
  dword_ABCB24 = 0; /*0x556987*/
  dword_ABCB28 = 0; /*0x55698c*/
  dword_ABCB2C = 0; /*0x556991*/
  return 0; /*0x556996*/
}


// ==== 0x005569A0  sub_5569A0  this=-  sig=ida-proto ====
int sub_5569A0()
{
  dword_ABCB7C = 0; /*0x5569a7*/
  dword_ABCB80 = 0; /*0x5569ac*/
  byte_ABCB84 = 1; /*0x5569b1*/
  byte_ABCB85 = 0; /*0x5569b8*/
  dword_ABCB78 = (int)&vt_DynamicVectorClass_LineTrail; /*0x5569bd*/
  dword_ABCB8C = 10; /*0x5569c7*/
  dword_ABCB88 = 0; /*0x5569d1*/
  return atexit(sub_5569E0); /*0x5569dc*/
}


// ==== 0x005569E0  sub_5569E0  this=-  sig=ida-proto ====
void __cdecl sub_5569E0()
{
  dword_ABCB78 = (int)&vt_VectorClass_LineTrail; /*0x5569e8*/
  if ( dword_ABCB7C && byte_ABCB85 ) /*0x5569fc*/
  {
    __3_YAXPAX_Z(dword_ABCB7C); /*0x5569ff*/
    dword_ABCB7C = 0; /*0x556a07*/
  }
  byte_ABCB85 = 0; /*0x556a0d*/
  dword_ABCB80 = 0; /*0x556a13*/
}


// ==== 0x00556A20  ObjectClass::checkLimbo  this=ObjectClass  sig=csp ====
char *__thiscall sub_556A20(char *this)
{
  char *v2; // eax
  int v3; // ecx
  char *v4; // edi
  int v5; // eax

  *this = 0x80; /*0x556a29*/
  *(this + 1) = 0x80; /*0x556a2b*/
  *(this + 2) = 0x80; /*0x556a2e*/
  this->vtable2 = 0; /*0x556a31*/
  this->vtable3 = 16; /*0x556a34*/
  this->vtable4 = 0; /*0x556a3b*/
  v2 = this + 28; /*0x556a3e*/
  v3 = 32; /*0x556a41*/
  do /*0x556a6a*/
  {
    v4 = v2 - 12; /*0x556a4c*/
    v2 += 16; /*0x556a4f*/
    --v3; /*0x556a52*/
    *(_DWORD *)v4 = dword_ABCB50; /*0x556a53*/
    *((_DWORD *)v4 + 1) = dword_ABCB54; /*0x556a5b*/
    *((_DWORD *)v4 + 2) = dword_ABCB58; /*0x556a64*/
    *((_DWORD *)v2 - 4) = 0; /*0x556a67*/
  }
  while ( v3 ); /*0x556a6a*/
  if ( dword_ABCB88 < dword_ABCB80 /*0x556a9f*/
    || (byte_ABCB85 || !dword_ABCB80)
    && dword_ABCB8C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABCB78 + 8))(
         &dword_ABCB78,
         dword_ABCB8C + dword_ABCB80,
         0) )
  {
    v5 = dword_ABCB88++; /*0x556aac*/
    *((_DWORD *)dword_ABCB7C + v5) = this; /*0x556abb*/
  }
  return this; /*0x556ac0*/
}


// ==== 0x00556B30  TacticalClass::GetField  this=VOID_PTR  sig=csp ====
int __thiscall TacticalClass::GetField(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x556b30*/
  if ( result ) /*0x556b37*/
  {
    *(_DWORD *)(result + 168) = 0; /*0x556b39*/
    *(this + 1) = 0; /*0x556b3f*/
  }
  return result; /*0x556b42*/
}


// ==== 0x00556B50  ObjectClass::updateMissionState  this=VOID_PTR  sig=csp ====
int __thiscall sub_556B50(_DWORD *this, int a2)
{
  int result; // eax

  result = a2; /*0x556b57*/
  if ( !MEMORY[0xA8EB78] ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  *(this + 2) = result; /*0x556b5f*/
  return result; /*0x556b62*/
}


// ==== 0x00556B70  ObjectClass::Render_Render_556B70  this=ObjectClass  sig=csp ====
int __thiscall sub_556B70(int *this)
{
  int v1; // eax
  int *v2; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int *v8; // ebp
  int result; // eax
  int v10; // edx
  int *v11; // eax
  int v12; // edi

  v1 = *(this + 1); /*0x556b70*/
  if ( v1 ) /*0x556b78*/
  {
    v2 = (int *)(v1 + 156); /*0x556b7a*/
    v3 = *v2; /*0x556b7f*/
    v4 = v2[1]; /*0x556b81*/
    v5 = v2[2]; /*0x556b84*/
    v6 = this + 4 * *(this + 3) + 4; /*0x556b8e*/
    if ( v3 != *v6 || v4 != v6[1] || v5 != v6[2] ) /*0x556b9c*/
    {
      v7 = *(this + 3) - 1; /*0x556ba1*/
      *(this + 3) = v7; /*0x556ba2*/
      if ( v7 < 0 ) /*0x556ba5*/
        *(this + 3) = 31; /*0x556ba7*/
      v8 = this + 4 * *(this + 3) + 4; /*0x556bb7*/
      v8[3] = 255; /*0x556bb9*/
      *v8 = v3; /*0x556bc0*/
      v8[1] = v4; /*0x556bc3*/
      v8[2] = v5; /*0x556bc6*/
    }
  }
  result = *(this + 3); /*0x556bc9*/
  do /*0x556bf6*/
  {
    v10 = result + 1; /*0x556bcc*/
    v11 = this + 4 * result + 4; /*0x556bd7*/
    v12 = v11[3] - *(this + 2); /*0x556bdc*/
    v11[3] = v12; /*0x556bde*/
    if ( v12 < 0 ) /*0x556be1*/
      v11[3] = 0; /*0x556be3*/
    result = v10; /*0x556bea*/
    if ( v10 >= 32 ) /*0x556bef*/
      result = 0; /*0x556bf1*/
  }
  while ( result != *(this + 3) ); /*0x556bf6*/
  return result; /*0x556bf8*/
}


// ==== 0x00556C00  ObjectClass::Render_Render_556C00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_556C00(int this)
{
  int v1; // ebp
  _DWORD *result; // eax
  int v3; // ebp
  _DWORD *v4; // edi
  _DWORD *i; // esi
  int v6; // ebx
  int v7; // eax
  char *v8; // edx
  int v10[2]; // [esp+14h] [ebp-10h] BYREF
  int v11[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = *(_DWORD *)(this + 12) + 1; /*0x556c09*/
  if ( v1 >= 32 ) /*0x556c14*/
    v1 = 0; /*0x556c16*/
  result = (_DWORD *)(this + 16 * (*(_DWORD *)(this + 12) + 1)); /*0x556c21*/
  if ( *result != dword_ABCB50 || result[1] != dword_ABCB54 || result[2] != dword_ABCB58 ) /*0x556c41*/
  {
    v3 = v1 + 1; /*0x556c47*/
    v4 = (_DWORD *)(this + 16 * (*(_DWORD *)(this + 12) + 1)); /*0x556c48*/
    result = (_DWORD *)result[3]; /*0x556c4c*/
    for ( i = (_DWORD *)(this + 16 * v3); result; i = (_DWORD *)(this + 16 * (_DWORD)v8) ) /*0x556c56*/
    {
      if ( *i == dword_ABCB50 && i[1] == dword_ABCB54 ) /*0x556c72*/
      {
        result = (_DWORD *)i[2]; /*0x556c7a*/
        if ( result == (_DWORD *)dword_ABCB58 ) /*0x556c7f*/
          break; /*0x556c7f*/
      }
      Coord::To_Screen(MEMORY[0x887324], v4, v11); /*0x556c91*/
      Coord::To_Screen(MEMORY[0x887324], i, v10); /*0x556ca2*/
      v6 = -2 - ZCoordToScreenY(v4[2]); /*0x556cb7*/
      v7 = ZCoordToScreenY(i[2]); /*0x556cb9*/
      AudioStream::DrawWaveform( /*0x556ce5*/
        (void *)MEMORY[0x88731C],
        &MEMORY[0x886FA0],
        v11,
        v10,
        (unsigned __int8 *)this,
        v4[3],
        v6,
        -2 - v7);
      result = (_DWORD *)v3; /*0x556cea*/
      if ( v3 >= 32 ) /*0x556cef*/
        result = 0; /*0x556cf1*/
      if ( result == *(_DWORD **)(this + 12) ) /*0x556cf6*/
        break; /*0x556cf6*/
      v3 = (int)result + 1; /*0x556cf8*/
      v4 = i; /*0x556cfb*/
      v8 = (char *)result + 1; /*0x556cfd*/
      result = (_DWORD *)i[3]; /*0x556cff*/
    }
  }
  return result; /*0x556d11*/
}


// ==== 0x00556D40  ObjectClass::Render_Render_556D40  this=ObjectClass  sig=csp ====
void sub_556D40()
{
  int i; // edi
  int *v1; // esi
  int v2; // eax
  int *v3; // [esp+4h] [ebp-4h] BYREF

  for ( i = dword_ABCB88 - 1; i >= 0; --i ) /*0x556d4c*/
  {
    v1 = (int *)*((_DWORD *)dword_ABCB7C + i); /*0x556d59*/
    Render_Render_556B70(v1); /*0x556d5e*/
    if ( v1[1] || v1[4 * v1[3] + 7] ) /*0x556d70*/
    {
      Render_Render_556C00((int)v1); /*0x556dd2*/
    }
    else if ( v1 ) /*0x556d7a*/
    {
      v3 = v1; /*0x556d8c*/
      v2 = (*(int (__thiscall **)(int *, int **))(dword_ABCB78 + 16))(&dword_ABCB78, &v3); /*0x556d90*/
      if ( v2 != -1 && v2 < dword_ABCB88 && v2 < --dword_ABCB88 ) /*0x556dab*/
      {
        do /*0x556dc3*/
        {
          ++v2; /*0x556db3*/
          *((_DWORD *)dword_ABCB7C + v2 - 1) = *((_DWORD *)dword_ABCB7C + v2); /*0x556db7*/
        }
        while ( v2 < dword_ABCB88 ); /*0x556dc3*/
      }
      __3_YAXPAX_Z(v1); /*0x556dc6*/
    }
  }
}


// ==== 0x00556DF0  ObjectClass::Game_Destroy  this=ObjectClass  sig=csp ====
void sub_556DF0()
{
  int i; // edi
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < dword_ABCB88; ++i ) /*0x556dfe*/
  {
    v1 = (_DWORD *)*((_DWORD *)dword_ABCB7C + i); /*0x556e06*/
    if ( v1 ) /*0x556e0b*/
    {
      v2 = v1[1]; /*0x556e0d*/
      if ( v2 ) /*0x556e12*/
      {
        *(_DWORD *)(v2 + 168) = 0; /*0x556e14*/
        v1[1] = 0; /*0x556e1a*/
      }
      v4 = v1; /*0x556e2d*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(dword_ABCB78 + 16))(&dword_ABCB78, &v4); /*0x556e31*/
      if ( v3 != -1 && v3 < dword_ABCB88 && v3 < --dword_ABCB88 ) /*0x556e4c*/
      {
        do /*0x556e64*/
        {
          ++v3; /*0x556e54*/
          *((_DWORD *)dword_ABCB7C + v3 - 1) = *((_DWORD *)dword_ABCB7C + v3); /*0x556e58*/
        }
        while ( v3 < dword_ABCB88 ); /*0x556e64*/
      }
      __3_YAXPAX_Z(v1); /*0x556e67*/
    }
  }
  dword_ABCB88 = 0; /*0x556e7f*/
  if ( dword_ABCB7C && byte_ABCB85 ) /*0x556e8f*/
  {
    __3_YAXPAX_Z(dword_ABCB7C); /*0x556e92*/
    dword_ABCB7C = 0; /*0x556e9a*/
  }
  byte_ABCB85 = 0; /*0x556ea0*/
  dword_ABCB80 = 0; /*0x556ea6*/
}


// ==== 0x00556EB0  _DynamicVectorClass_PAVLineTrail::initList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::sub_556EB0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x556eb6*/
  *(_DWORD *)(this + 16) = 0; /*0x556eb9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x556ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x556ec6*/
    *(_DWORD *)(this + 4) = 0; /*0x556ece*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x556ed1*/
  *(_DWORD *)(this + 8) = 0; /*0x556ed4*/
}


// ==== 0x00556EE0  _DynamicVectorClass_PAVLineTrail::addItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::sub_556EE0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x556ee0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x556ef5*/
  else
    return 0; /*0x556ee7*/
}


// ==== 0x00556F00  _VectorClass_PAVLineTrail::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x556f0a*/
}


// ==== 0x00556F10  _VectorClass_PAVLineTrail::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x556f12*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x556f1d*/
  {
    v3 = 0; /*0x556f1f*/
    if ( v2 <= 0 ) /*0x556f23*/
      return 1; /*0x556f43*/
    v4 = (_DWORD *)*(this + 1); /*0x556f25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x556f2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x556f34*/
    {
      ++v3; /*0x556f36*/
      ++v4; /*0x556f37*/
      if ( v3 >= v2 ) /*0x556f3c*/
        return 1; /*0x556f3c*/
    }
  }
  return 0; /*0x556f3e*/
}


// ==== 0x00556F50  _VectorClass_PAVLineTrail::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x556f5c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x556f66*/
    if ( a3 ) /*0x556f6c*/
      v4 = a3; /*0x556f82*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x556f7e*/
    *((_BYTE *)this + 12) = 1; /*0x556f86*/
    if ( v4 ) /*0x556f8a*/
    {
      if ( this->Items ) /*0x556f95*/
      {
        v6 = this->Capacity; /*0x556f9c*/
        if ( a2 < v6 ) /*0x556fa1*/
          v6 = a2; /*0x556fa3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x556fa9*/
          ++i; /*0x556fae*/
        if ( *((_BYTE *)this + 13) ) /*0x556fbb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x556fc6*/
          this->Items = 0; /*0x556fce*/
        }
      }
      this->Items = v4; /*0x556fd7*/
      this->Capacity = a2; /*0x556fdf*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x556fe2*/
      return 1; /*0x556fe8*/
    }
    else
    {
      return 0; /*0x556f8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x556ff2*/
    return 1; /*0x556ff8*/
  }
}


// ==== 0x00557000  _VectorClass_PAVLineTrail::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LineTrail::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x55700d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x557013*/
    *(_DWORD *)(this + 4) = 0; /*0x55701b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55701e*/
  *(_DWORD *)(this + 8) = 0; /*0x557021*/
}


// ==== 0x00557030  _VectorClass_PAVLineTrail::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x557030*/
    return 0; /*0x557038*/
  v3 = *(_DWORD *)(this + 8); /*0x55703e*/
  result = 0; /*0x557041*/
  if ( v3 <= 0 ) /*0x557045*/
    return -1; /*0x55705c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x55704b*/
  {
    if ( ++result >= v3 ) /*0x55705a*/
      return -1; /*0x55705a*/
  }
  return result; /*0x55703a*/
}


// ==== 0x00557070  _VectorClass_PAVLineTrail::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LineTrail::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x557070*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x557085*/
  else
    return 0; /*0x557077*/
}


// ==== 0x00557090  _DynamicVectorClass_PAVLineTrail::removeItem  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::sub_557090(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55709c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5570a2*/
    if ( a3 ) /*0x5570a8*/
      v4 = a3; /*0x5570be*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5570ba*/
    *((_BYTE *)this + 12) = 1; /*0x5570c2*/
    if ( !v4 ) /*0x5570c6*/
      return 0; /*0x55713a*/
    if ( this->q004 ) /*0x5570c8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5570cf*/
      if ( a2 < v5 ) /*0x5570d4*/
        v5 = a2; /*0x5570d6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x5570dc*/
        ++i; /*0x5570e1*/
      if ( *((_BYTE *)this + 13) ) /*0x5570ee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x5570f9*/
        this->q004 = 0; /*0x557101*/
      }
    }
    this->q004 = v4; /*0x55710a*/
    this->DynamicVector_field_0x8 = a2; /*0x557112*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x557115*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x55711e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x557121*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x557129*/
    this->DynamicVector_field_0x10 = v7; /*0x55712b*/
  return 1; /*0x55712e*/
}


// ==== 0x00557140  _DynamicVectorClass_PAVLineTrail::checkItem  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::sub_557140(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x557140*/
  result = 0; /*0x557143*/
  if ( v2 <= 0 ) /*0x557148*/
    return -1; /*0x55715f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55714e*/
  {
    if ( ++result >= v2 ) /*0x55715d*/
      return -1; /*0x55715d*/
  }
  return result; /*0x557162*/
}


// ==== 0x00557170  _VectorClass_PAVLineTrail::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_LineTrail::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x557173*/
  *Block = &vt_VectorClass_LineTrail; /*0x557176*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x557180*/
  {
    __3_YAXPAX_Z(v3); /*0x557188*/
    *(Block + 1) = 0; /*0x557190*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55719b*/
  *(Block + 2) = 0; /*0x5571a1*/
  if ( (a2 & 1) != 0 ) /*0x5571a8*/
    __3_YAXPAX_Z(Block); /*0x5571ab*/
  return (VectorClass *)Block; /*0x5571b5*/
}


// ==== 0x005571C0  _DynamicVectorClass_PAVLineTrail::toggleItem  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CheckListClass::toggleItem(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5571c3*/
  *Block = &vt_VectorClass_LineTrail; /*0x5571c6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5571d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5571d8*/
    *(Block + 1) = 0; /*0x5571e0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5571eb*/
  *(Block + 2) = 0; /*0x5571f1*/
  if ( (a2 & 1) != 0 ) /*0x5571f8*/
    __3_YAXPAX_Z(Block); /*0x5571fb*/
  return (DynamicVector *)Block; /*0x557205*/
}


// ==== 0x00557210  sub_557210  this=-  sig=ida-proto ====
int sub_557210()
{
  dword_ABCBB0 = 0; /*0x557212*/
  dword_ABCBB4 = 0; /*0x557217*/
  dword_ABCBB8 = 0; /*0x55721c*/
  dword_ABCBBC = 0; /*0x557221*/
  return 0; /*0x557226*/
}


// ==== 0x00557230  ListClass::Construct  this=ListClass  sig=csp ====
int __thiscall ListClass::Construct(
        int this,
        ListClass *aP1,
        int aP2,
        int aP3,
        ListClass *aP4,
        int aP5,
        ControlClass *aP6,
        ListClass *aP7,
        int a9)
{
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // edx
  int v15; // edi
  int v16; // ebp
  int v17; // edi
  int v18; // ecx

  ControlClass::Construct( /*0x557258*/
    (_DWORD *)this,
    (ControlClass *)aP1,
    (ControlClass *)aP2,
    (ControlClass *)aP3,
    (ControlClass *)aP4,
    (ControlClass *)aP5,
    261,
    0);
  *(_DWORD *)(this + 56) = 0; /*0x557265*/
  *(_DWORD *)(this + 60) = 0; /*0x557268*/
  *(_BYTE *)(this + 65) = 0; /*0x55726b*/
  *(_DWORD *)(this + 68) = 0; /*0x55726e*/
  *(_BYTE *)(this + 64) = 1; /*0x557280*/
  *(_DWORD *)(this + 52) = &vt_DynamicVectorClass_unsigned_short_const; /*0x557284*/
  *(_DWORD *)(this + 72) = 10; /*0x55728b*/
  ShapeButtonClass::Constructor((_BYTE *)(this + 88), 0, (int)aP7, (int)&aP4->__pad_0[aP2], aP3, 0, 0, 0); /*0x557292*/
  ShapeButtonClass::Constructor((_BYTE *)(this + 184), 0, a9, (int)&aP4->__pad_0[aP2], aP3 + aP5, 0, 0, 0); /*0x5572af*/
  SliderClass::Constructor( /*0x5572c3*/
    (int *)(this + 280),
    0,
    (int)&aP4->__pad_0[aP2],
    (ControlClass *)aP3,
    0,
    (ControlClass *)aP5,
    1);
  v10 = *(_DWORD *)(this + 204); /*0x5572c8*/
  v11 = *(_DWORD *)(this + 108); /*0x5572d4*/
  v12 = *(_DWORD *)(this + 100); /*0x5572d7*/
  v13 = *(_DWORD *)(this + 200); /*0x5572da*/
  *(_DWORD *)(this + 196) -= v10; /*0x5572e2*/
  v14 = *(_DWORD *)(this + 208); /*0x5572e8*/
  *(_DWORD *)(this + 100) = v12 - v11; /*0x5572f2*/
  *(_DWORD *)this = &vt_ListClass; /*0x5572f7*/
  *(_DWORD *)(this + 200) = v13 - v14; /*0x5572fd*/
  v15 = v11; /*0x557303*/
  if ( v11 <= v10 ) /*0x557305*/
    v15 = v10; /*0x557307*/
  v16 = *(_DWORD *)(this + 292) - v15; /*0x55730f*/
  v17 = *(_DWORD *)(this + 112); /*0x557311*/
  *(_DWORD *)(this + 292) = v16; /*0x557314*/
  *(_DWORD *)(this + 296) = v17 + *(_DWORD *)(this + 16); /*0x557321*/
  *(_DWORD *)(this + 304) -= v14 + v17; /*0x557331*/
  if ( v11 <= v10 ) /*0x557337*/
    v11 = v10; /*0x557339*/
  *(_DWORD *)(this + 300) = v11; /*0x55733f*/
  *(_DWORD *)(this + 44) = aP6; /*0x557347*/
  *(_BYTE *)(this + 84) = 0; /*0x55734a*/
  *(_DWORD *)(this + 48) = 0; /*0x55734e*/
  *(_DWORD *)(this + 364) = 0; /*0x557351*/
  *(_DWORD *)(this + 368) = 0; /*0x557357*/
  v18 = TextRenderer::GetInstance()->referenceCount - 1; /*0x557366*/
  *(_DWORD *)(this + 76) = v18; /*0x55736f*/
  *(_DWORD *)(this + 80) = (aP5 - 1) / v18; /*0x557372*/
  return this; /*0x557365*/
}


// ==== 0x00557380  ObjectClass::method  this=ListClass  sig=csp ====
int __thiscall sub_557380(int this, int a2)
{
  int v3; // eax

  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x55738b*/
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44); /*0x557396*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x55739f*/
  *(_DWORD *)(this + 56) = 0; /*0x5573a7*/
  *(_DWORD *)(this + 60) = 0; /*0x5573aa*/
  *(_BYTE *)(this + 64) = 1; /*0x5573ad*/
  *(_BYTE *)(this + 65) = 0; /*0x5573b1*/
  *(_DWORD *)(this + 52) = &vt_VectorClass_unsigned_short_const; /*0x5573b4*/
  sub_4B5830((_DWORD *)(this + 52), (_DWORD *)(a2 + 52)); /*0x5573ba*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x5573c2*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x5573c8*/
  *(_DWORD *)(this + 52) = &vt_DynamicVectorClass_unsigned_short_const; /*0x5573cb*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x5573d7*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x5573dd*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x5573e9*/
  ControlClass::CtorFromData((_DWORD *)(this + 88), a2 + 88); /*0x5573ec*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x5573fa*/
  *(_BYTE *)(this + 133) = *(_BYTE *)(a2 + 133); /*0x557400*/
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136); /*0x557406*/
  *(_DWORD *)(this + 88) = &vt_ToggleClass; /*0x557409*/
  *(_BYTE *)(this + 140) = *(_BYTE *)(a2 + 140); /*0x557413*/
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144); /*0x557419*/
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148); /*0x55741f*/
  *(_BYTE *)(this + 152) = *(_BYTE *)(a2 + 152); /*0x557425*/
  *(_DWORD *)(this + 156) = *(_DWORD *)(a2 + 156); /*0x55742b*/
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160); /*0x557431*/
  *(_BYTE *)(this + 164) = *(_BYTE *)(a2 + 164); /*0x557437*/
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168); /*0x55743d*/
  *(_BYTE *)(this + 172) = *(_BYTE *)(a2 + 172); /*0x557443*/
  *(_BYTE *)(this + 173) = *(_BYTE *)(a2 + 173); /*0x557449*/
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176); /*0x55744f*/
  *(_BYTE *)(this + 180) = *(_BYTE *)(a2 + 180); /*0x55745b*/
  *(_DWORD *)(this + 88) = &vt_ShapeButtonClass; /*0x557460*/
  ControlClass::CtorFromData((_DWORD *)(this + 184), a2 + 184); /*0x557466*/
  *(_BYTE *)(this + 228) = *(_BYTE *)(a2 + 228); /*0x55746e*/
  *(_BYTE *)(this + 229) = *(_BYTE *)(a2 + 229); /*0x557474*/
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232); /*0x55747a*/
  *(_DWORD *)(this + 184) = &vt_ToggleClass; /*0x55747d*/
  *(_BYTE *)(this + 236) = *(_BYTE *)(a2 + 236); /*0x557486*/
  *(_DWORD *)(this + 240) = *(_DWORD *)(a2 + 240); /*0x55748c*/
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244); /*0x557492*/
  *(_BYTE *)(this + 248) = *(_BYTE *)(a2 + 248); /*0x557498*/
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252); /*0x55749e*/
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256); /*0x5574a4*/
  *(_BYTE *)(this + 260) = *(_BYTE *)(a2 + 260); /*0x5574aa*/
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264); /*0x5574b0*/
  *(_BYTE *)(this + 268) = *(_BYTE *)(a2 + 268); /*0x5574b6*/
  *(_BYTE *)(this + 269) = *(_BYTE *)(a2 + 269); /*0x5574bc*/
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272); /*0x5574c6*/
  *(_BYTE *)(this + 276) = *(_BYTE *)(a2 + 276); /*0x5574d2*/
  *(_DWORD *)(this + 184) = &vt_ShapeButtonClass; /*0x5574de*/
  sub_5581A0(this + 280, a2 + 280); /*0x5574e4*/
  *(_DWORD *)(this + 340) = *(_DWORD *)(a2 + 340); /*0x5574fa*/
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344); /*0x557500*/
  *(_BYTE *)(this + 348) = *(_BYTE *)(a2 + 348); /*0x557506*/
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352); /*0x55750c*/
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356); /*0x557512*/
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360); /*0x55751c*/
  *(_DWORD *)(this + 280) = &vt_SliderClass; /*0x55751f*/
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364); /*0x55752c*/
  v3 = *(_DWORD *)(this + 88); /*0x557538*/
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368); /*0x55753c*/
  *(_DWORD *)this = &vt_ListClass; /*0x557542*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 88, this); /*0x557548*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 132))(this + 184, this); /*0x557553*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 132))(this + 280, this); /*0x55755f*/
  return this; /*0x557566*/
}


// ==== 0x00557570  ListClass::RemoveItem  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt25(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edx
  int v7; // ebp
  int result; // eax

  v3 = this->ListClass_field_0x14; /*0x557570*/
  v4 = *(this + 27); /*0x55757a*/
  v5 = *(this + 51); /*0x557580*/
  *(this + 25) = a2 + v3 - v4; /*0x55758e*/
  *(this + 26) = a3; /*0x557595*/
  *(this + 49) = a2 + v3 - v5; /*0x55759a*/
  v6 = this->ListClass_field_0x18 - *(this + 52); /*0x5575a3*/
  *(this + 50) = v6 + a3; /*0x5575ad*/
  v7 = v4; /*0x5575b3*/
  if ( v4 <= v5 ) /*0x5575b5*/
    v7 = v5; /*0x5575b7*/
  *(this + 73) = a2 + v3 - v7; /*0x5575c1*/
  result = *(this + 28); /*0x5575c7*/
  *(this + 74) = result + a3; /*0x5575d0*/
  *(this + 76) = v6 - result; /*0x5575d6*/
  if ( v4 <= v5 ) /*0x5575dc*/
    *(this + 75) = v5; /*0x5575eb*/
  else
    *(this + 75) = v4; /*0x5575de*/
  return result; /*0x5575e4*/
}


// ==== 0x00557600  ListClass::Destruct  this=ListClass  sig=csp ====
int __thiscall ListClass_Destructor(_DWORD *this)
{
  char v2; // al
  int v3; // edx
  void *v4; // eax

  v2 = *((_BYTE *)this + 84); /*0x557606*/
  *this = &vt_ListClass; /*0x557609*/
  if ( v2 ) /*0x557611*/
  {
    v3 = this->q118; /*0x55761c*/
    this->ListClass_field_0x14 += *(this + 75); /*0x557624*/
    *((_BYTE *)this + 84) = 0; /*0x55762d*/
    (*(void (__thiscall **)(_DWORD *))(v3 + 36))(this + 70); /*0x557630*/
    (*(void (__thiscall **)(_DWORD *))(this->q058 + 36))(this + 22); /*0x557639*/
    (*(void (__thiscall **)(_DWORD *))(this->q0B8 + 36))(this + 46); /*0x557648*/
    (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x55764f*/
  }
  SliderClass::Destructor(this + 70); /*0x557658*/
  ShapeButtonClass::Destructor((int)(this + 46)); /*0x557663*/
  ShapeButtonClass::Destructor((int)(this + 22)); /*0x55766b*/
  v4 = (void *)this->q038; /*0x557670*/
  *(this + 13) = &vt_VectorClass_unsigned_short_const; /*0x557673*/
  if ( v4 && *((_BYTE *)this + 65) ) /*0x55767e*/
  {
    __3_YAXPAX_Z(v4); /*0x557684*/
    this->q038 = 0; /*0x55768c*/
  }
  *((_BYTE *)this + 65) = 0; /*0x557691*/
  *(this + 15) = 0; /*0x557694*/
  return GadgetClass::Dtor(this); /*0x55769c*/
}


// ==== 0x005576A0  ListClass::AddItem  this=ListClass  sig=csp ====
int __thiscall sub_5576A0(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  if ( a2 ) /*0x5576aa*/
  {
    v3 = *(this + 15); /*0x5576ac*/
    if ( *(this + 17) < v3 /*0x5576d5*/
      || (*((_BYTE *)this + 65) || !v3)
      && (v4 = *(this + 18), v4 > 0)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*(this + 13) + 8))(this + 13, v3 + v4, 0) )
    {
      v5 = *(this + 17); /*0x5576dc*/
      v6 = this->q038; /*0x5576df*/
      *(this + 17) = v5 + 1; /*0x5576e5*/
      *(_DWORD *)(v6 + 4 * v5) = a2; /*0x5576e8*/
    }
    (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x5576ef*/
    if ( *(this + 17) > *(this + 20) ) /*0x5576fb*/
      (*(void (__thiscall **)(_DWORD *))(*this + 140))(this); /*0x557701*/
    if ( *((_BYTE *)this + 84) ) /*0x557707*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(this->q118 + 136))(this + 70, *(this + 17)); /*0x55771e*/
  }
  return *(this + 17) - 1; /*0x557727*/
}


// ==== 0x00557730  ListClass::RemoveItem  this=ListClass  sig=csp ====
char __thiscall ListClass_RemoveItem(unsigned int *this, signed int a2)
{
  int v2; // eax
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = a2; /*0x557730*/
  v4 = *(this + 17); /*0x557737*/
  if ( a2 < v4 ) /*0x55773c*/
  {
    if ( a2 < (int)v4 ) /*0x557744*/
    {
      v5 = v4 - 1; /*0x557746*/
      *(this + 17) = v5; /*0x557749*/
      if ( a2 < v5 ) /*0x55774c*/
      {
        do /*0x55775e*/
        {
          ++v2; /*0x557751*/
          *(_DWORD *)(*(this + 14) + 4 * v2 - 4) = *(_DWORD *)(*(this + 14) + 4 * v2); /*0x557755*/
        }
        while ( v2 < (int)*(this + 17) ); /*0x55775e*/
      }
    }
    if ( (int)*(this + 17) <= (int)this->ListClass_field_0x14 ) /*0x557768*/
      (*(void (__thiscall **)(unsigned int *))(*this + 176))(this); /*0x55776e*/
    if ( *((_BYTE *)this + 84) ) /*0x557774*/
      (*(void (__thiscall **)(unsigned int *, _DWORD))(*(this + 70) + 136))(this + 70, *(this + 17)); /*0x55778b*/
    v6 = *(this + 91); /*0x557791*/
    if ( v6 >= (int)*(this + 17) ) /*0x55779c*/
    {
      v7 = v6 - 1; /*0x55779e*/
      *(this + 91) = v7; /*0x5577a1*/
      if ( v7 < 0 ) /*0x5577a7*/
        *(this + 91) = 0; /*0x5577a9*/
    }
    v2 = *(this + 92); /*0x5577b3*/
    if ( v2 >= (int)*(this + 17) ) /*0x5577be*/
    {
      v8 = v2 - 1; /*0x5577c0*/
      *(this + 92) = v8; /*0x5577c3*/
      if ( v8 < 0 ) /*0x5577c9*/
        *(this + 92) = 0; /*0x5577cb*/
      LOBYTE(v2) = *((_BYTE *)this + 84); /*0x5577d5*/
      if ( (_BYTE)v2 ) /*0x5577da*/
        LOBYTE(v2) = (*(int (__thiscall **)(unsigned int *, int))(*(this + 70) + 176))(this + 70, 1); /*0x5577ea*/
    }
  }
  return v2; /*0x5577f0*/
}


// ==== 0x00557800  ListClass::Destru_vt43  this=ListClass  sig=csp ====
int __thiscall ListClass::Destru_vt43(int *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax

  result = a2; /*0x557800*/
  if ( a2 ) /*0x557809*/
  {
    v4 = *this; /*0x557816*/
    v5 = (*(int (__thiscall **)(int *, int *))(*(this + 13) + 16))(this + 13, &a2); /*0x557819*/
    return (*(int (__thiscall **)(int *, int))(v4 + 168))(this, v5); /*0x55781f*/
  }
  return result; /*0x557826*/
}


// ==== 0x00557830  ListClass::DrawWithFlags  this=ListClass  sig=csp ====
int __thiscall CellClass_DrawWithFlags(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v7; // eax

  v4 = a2; /*0x557831*/
  if ( (a2 & 4) != 0 ) /*0x55783b*/
  {
    *a3 = 0; /*0x557848*/
    CellClass::Draw((int)this, a2 & 0xFFFFFFFB, a3, 0); /*0x55784e*/
    return 1; /*0x557854*/
  }
  else if ( (a2 & 0x100) != 0 ) /*0x557865*/
  {
    if ( *a3 == 38 ) /*0x55786c*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 164))(this, -1); /*0x557874*/
      *a3 = 0; /*0x557880*/
      return CellClass::Draw((int)this, a2, a3, 0); /*0x557886*/
    }
    else if ( *a3 == 40 ) /*0x557894*/
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 164))(this, 1); /*0x55789c*/
      *a3 = 0; /*0x5578a8*/
      return CellClass::Draw((int)this, a2, a3, 0); /*0x5578ae*/
    }
    else
    {
      BYTE1(v4) = BYTE1(a2) & 0xFE; /*0x5578b9*/
      return CellClass::Draw((int)this, v4, a3, 0); /*0x5578c2*/
    }
  }
  else
  {
    v7 = *(this + 92) /*0x5578e8*/
       + ((*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]) - this->ListClass_field_0x10 - 1)
       / *(this + 19);
    *(this + 91) = v7; /*0x5578ea*/
    if ( v7 >= *(this + 17) - 1 ) /*0x5578f6*/
      v7 = *(this + 17) - 1; /*0x5578f8*/
    *(this + 91) = v7; /*0x5578fd*/
    if ( v7 == -1 ) /*0x557903*/
      *(this + 91) = 0; /*0x557905*/
    return CellClass::Draw((int)this, a2, a3, 0); /*0x557915*/
  }
}


// ==== 0x00557920  ListClass::DrawBuildingPlacement  this=ListClass  sig=csp ====
int __thiscall GadgetClass::DrawBuildingPlacement(int this, ControlClass *aP1)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int i; // edi
  int v7; // eax
  int v9[4]; // [esp+10h] [ebp-10h] BYREF

  if ( !GadgetClass::ClearState((_BYTE *)this, aP1) ) /*0x55792e*/
    return 0; /*0x557a0b*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 32))( /*0x557965*/
    *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
    *(_DWORD *)(this + 12),
    *(_DWORD *)(this + 16),
    *(_DWORD *)(this + 20),
    *(_DWORD *)(this + 24));
  v3 = *(_DWORD *)(this + 20); /*0x55796b*/
  v4 = *(_DWORD *)(this + 16); /*0x55796e*/
  v9[0] = *(_DWORD *)(this + 12); /*0x557971*/
  v5 = *(_DWORD *)(this + 24); /*0x557975*/
  v9[2] = v3; /*0x557978*/
  v9[3] = v5; /*0x55797c*/
  v9[1] = v4; /*0x55798b*/
  DrawBuildingTilesSHP(v9, 4, 1); /*0x55798f*/
  if ( *(_DWORD *)(this + 68) ) /*0x557994*/
  {
    for ( i = 0; i < *(_DWORD *)(this + 80); ++i ) /*0x5579a2*/
    {
      v7 = i + *(_DWORD *)(this + 368); /*0x5579ad*/
      if ( *(_DWORD *)(this + 68) > v7 ) /*0x5579b1*/
        (*(void (__thiscall **)(int, int, int, int, int, bool))(*(_DWORD *)this + 200))( /*0x5579e0*/
          this,
          v7,
          *(_DWORD *)(this + 12) + 1,
          i * *(_DWORD *)(this + 76) + *(_DWORD *)(this + 16) + 1,
          *(_DWORD *)(this + 20) - 2,
          v7 == *(_DWORD *)(this + 364));
    }
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 36))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]); /*0x5579f6*/
  return 1; /*0x5579fe*/
}


// ==== 0x00557A20  ListClass::SetItemState  this=ListClass  sig=csp ====
char __thiscall CheckListClass::_vt36(_BYTE *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = *(this + 84); /*0x557a24*/
  if ( (_BYTE)v3 ) /*0x557a29*/
  {
    v4 = this + 280; /*0x557a35*/
    v3 = (*(int (__thiscall **)(_BYTE *, int))(this->q118 + 176))(this + 280, a2); /*0x557a3e*/
    if ( v3 ) /*0x557a46*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 144))(this + 280); /*0x557a52*/
      LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 72))(this); /*0x557a5c*/
    }
  }
  return v3; /*0x557a5f*/
}


// ==== 0x00557A70  ListClass::OnKeyUp  this=ListClass  sig=csp ====
char __thiscall CheckListClass::_vt49(_BYTE *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = *(this + 84); /*0x557a74*/
  if ( (_BYTE)v3 ) /*0x557a79*/
  {
    v4 = this + 280; /*0x557a85*/
    v3 = (*(int (__thiscall **)(_BYTE *, int))(this->q118 + 176))(this + 280, a2); /*0x557a8e*/
    if ( v3 ) /*0x557a96*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v4 + 144))(this + 280); /*0x557aa2*/
      LOBYTE(v3) = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 72))(this); /*0x557aac*/
    }
  }
  return v3; /*0x557aaf*/
}


// ==== 0x00557AC0  ListClass::GetClamped  this=ListClass  sig=csp ====
int __thiscall Array::GetClamped(_DWORD *this, CheckListClass *aP1)
{
  int result; // eax
  CheckListClass *v3; // edx
  CheckListClass *v4; // eax

  result = *(this + 17); /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = aP1; /*0x557aca*/
    v4 = (CheckListClass *)(result - 1); /*0x557ace*/
    if ( (int)aP1 >= (int)v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(_DWORD *)(this->q038 + 4 * (_DWORD)v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/
}


// ==== 0x00557AE0  ListClass::SetColor  this=ListClass  sig=csp ====
int __thiscall ColorListClass::_vt39(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 91); /*0x557ae0*/
  if ( *(this + 17) > v1 ) /*0x557aeb*/
    return *(_DWORD *)(this->q038 + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}


// ==== 0x00557B00  ListClass::GetItemCount  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt38(_DWORD *this)
{
  return *(this + 91); /*0x557b06*/
}


// ==== 0x00557B10  ListClass::vt[19]  this=ListClass  sig=csp ====
char __thiscall CheckListClass::vt_19_(_DWORD *this, char a2, int a3, _DWORD *a4)
{
  char result; // al
  int v6; // edi
  int v7; // eax

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == this + 22 ) /*0x557b25*/
      (*(void (__thiscall **)(_DWORD *, int))(*this + 196))(this, 1); /*0x557b2b*/
    result = (_BYTE)this - 72; /*0x557b31*/
    if ( a4 == this + 46 ) /*0x557b39*/
      result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 196))(this, 0); /*0x557b41*/
  }
  if ( a4 == this + 70 ) /*0x557b4f*/
  {
    v6 = *this; /*0x557b53*/
    v7 = (*(int (__thiscall **)(_DWORD *))(this->q118 + 144))(this + 70); /*0x557b55*/
    return (*(int (__thiscall **)(_DWORD *, int))(v6 + 192))(this, v7); /*0x557b5e*/
  }
  return result; /*0x557b64*/
}


// ==== 0x00557B70  ListClass::OnKeyDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt48(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = (*(this + 17) - *(this + 20)) & ((*(this + 17) - *(this + 20) < 0) - 1); /*0x557b84*/
  v4 = a2; /*0x557b86*/
  if ( a2 >= 0 ) /*0x557b8c*/
  {
    if ( a2 > v3 ) /*0x557b94*/
      v4 = v3; /*0x557b96*/
  }
  else
  {
    v4 = 0; /*0x557b8e*/
  }
  if ( v4 == *(this + 92) ) /*0x557b9e*/
    return 0; /*0x557bd6*/
  *(this + 92) = v4; /*0x557ba0*/
  (*(void (__thiscall **)(_DWORD *))(*this + 72))(this); /*0x557baa*/
  if ( *((_BYTE *)this + 84) ) /*0x557bad*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(this->q118 + 140))(this + 70, *(this + 92)); /*0x557bc7*/
  return 1; /*0x557bd2*/
}


// ==== 0x00557BE0  ListClass::InitControls  this=ListClass  sig=csp ====
int __thiscall GadgetClass_InitControls(_BYTE *this)
{
  int v2; // eax
  int v3; // edx

  if ( *(this + 84) ) /*0x557be3*/
    return 0; /*0x557ca7*/
  v2 = *(_DWORD *)this; /*0x557bee*/
  *(this + 84) = 1; /*0x557bf3*/
  (*(void (**)(void))(v2 + 72))(); /*0x557bf7*/
  v3 = this->q058; /*0x557c03*/
  this->ListClass_field_0x14 -= *((_DWORD *)this + 75); /*0x557c08*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(v3 + 132))(this + 88, this); /*0x557c11*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q0B8 + 132))(this + 184, this); /*0x557c26*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q118 + 132))(this + 280, this); /*0x557c3b*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q058 + 12))(this + 88, this); /*0x557c46*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q0B8 + 12))(this + 184, this); /*0x557c4f*/
  (*(void (__thiscall **)(_BYTE *, _BYTE *))(this->q118 + 12))(this + 280, this); /*0x557c57*/
  (*(void (__thiscall **)(_BYTE *))(this->q058 + 72))(this + 88); /*0x557c5e*/
  (*(void (__thiscall **)(_BYTE *))(this->q0B8 + 72))(this + 184); /*0x557c66*/
  (*(void (__thiscall **)(_BYTE *))(this->q118 + 72))(this + 280); /*0x557c6d*/
  (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 136))(this + 280, *((_DWORD *)this + 17)); /*0x557c78*/
  (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 168))(this + 280, *((_DWORD *)this + 20)); /*0x557c86*/
  (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q118 + 140))(this + 280, *((_DWORD *)this + 92)); /*0x557c97*/
  return 1; /*0x557ca5*/
}


// ==== 0x00557CB0  ListClass::GetItemData  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt44(_BYTE *this)
{
  int v2; // edx

  if ( !*(this + 84) ) /*0x557cb3*/
    return 0; /*0x557d01*/
  v2 = this->q118; /*0x557cc3*/
  this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x557ccb*/
  *(this + 84) = 0; /*0x557cd4*/
  (*(void (__thiscall **)(_BYTE *))(v2 + 36))(this + 280); /*0x557cd8*/
  (*(void (__thiscall **)(_BYTE *))(this->q058 + 36))(this + 88); /*0x557ce1*/
  (*(void (__thiscall **)(_BYTE *))(this->q0B8 + 36))(this + 184); /*0x557cf0*/
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 72))(this); /*0x557cf7*/
  return 1; /*0x557cff*/
}


// ==== 0x00557D10  ListClass::KillFocus  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt47(_DWORD *this, int a2)
{
  *(this + 12) = a2; /*0x557d14*/
  return a2; /*0x557d17*/
}


// ==== 0x00557D20  ListClass::Destru_vt50  this=ListClass  sig=csp ====
_DWORD *__thiscall ListClass::Destru_vt50(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  int Type; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int *v14; // edi
  int v15; // eax
  int v17; // [esp-14h] [ebp-4Ch]
  int v18; // [esp-4h] [ebp-3Ch]
  _DWORD v19[2]; // [esp+10h] [ebp-28h] BYREF
  _DWORD v20[4]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v21[16]; // [esp+28h] [ebp-10h] BYREF

  v7 = *(this + 11); /*0x557d29*/
  Type = BuildingAnim::GetType(); /*0x557d35*/
  if ( a6 ) /*0x557d3d*/
  {
    BYTE1(v7) |= 0x20u; /*0x557d44*/
    v9 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + Type) + 796); /*0x557d52*/
    v10 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x557d5b*/
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x557d61*/
      v11 = *(unsigned __int8 *)(v10 + v9); /*0x557d65*/
    else
      v11 = *(unsigned __int16 *)(v10 + 2 * v9); /*0x557d6c*/
    v20[0] = a3; /*0x557d78*/
    v20[3] = *(this + 19); /*0x557d7f*/
    v20[1] = a4; /*0x557d8a*/
    v20[2] = a5; /*0x557d8e*/
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v20, v11); /*0x557d99*/
  }
  else if ( (v7 & 0x4000) == 0 ) /*0x557da1*/
  {
    BYTE1(v7) |= 0x10u; /*0x557da3*/
  }
  v12 = *(this + 14); /*0x557daa*/
  v19[0] = a3; /*0x557db1*/
  v13 = this->ListClass_field_0x0C; /*0x557db5*/
  v19[1] = a4; /*0x557db8*/
  v14 = (int *)(v12 + 4 * a2); /*0x557dbc*/
  v18 = v13; /*0x557dc8*/
  v17 = *((_DWORD *)MEMORY[0xB054D4] + Type); /*0x557dd0*/
  v15 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v21); /*0x557de3*/
  return FillRectangle(v20, *v14, MEMORY[0x887314], v15, (int)v19, v17, 0, v7, a5, v18); /*0x557df8*/
}


// ==== 0x00557E10  ListClass::ddtor  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt03(int this, int a2)
{
  if ( *(_BYTE *)(this + 84) ) /*0x557e18*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 12))(this + 280, a2); /*0x557e2c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 12))(this + 184, a2); /*0x557e3c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 88) + 12))(this + 88, a2); /*0x557e46*/
  }
  return LinkedList::InsertAfter((_DWORD *)this, a2); /*0x557e51*/
}


// ==== 0x00557E60  ListClass::HitTest  this=ListClass  sig=csp ====
_DWORD *__thiscall CheckListClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 84) ) /*0x557e68*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 20))(this + 280, a2); /*0x557e7c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 20))(this + 184, a2); /*0x557e8c*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 88) + 20))(this + 88, a2); /*0x557e96*/
  }
  return LinkedList::Attach((_DWORD *)this, a2); /*0x557ea1*/
}


// ==== 0x00557EB0  ListClass::Draw  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt04(int this, int a2)
{
  LinkedList::Append((_DWORD *)this, a2); /*0x557eb9*/
  if ( *(_BYTE *)(this + 84) ) /*0x557ebe*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 88) + 16))(this + 88, a2); /*0x557ecc*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 16))(this + 184, a2); /*0x557edc*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 16))(this + 280, a2); /*0x557eec*/
  }
  return (*(int (__thiscall **)(int))(this->ListClass_field_0x18)(this); /*0x557ef6*/
}


// ==== 0x00557F00  ListClass::OnDblClick  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt09(int this)
{
  if ( *(_BYTE *)(this + 84) ) /*0x557f03*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 280) + 36))(this + 280); /*0x557f16*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 184) + 36))(this + 184); /*0x557f25*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 88) + 36))(this + 88); /*0x557f2e*/
  }
  return LinkClass::Destroy((_DWORD *)this); /*0x557f38*/
}


// ==== 0x00557F40  ListClass::Clear  this=ListClass  sig=csp ====
int __thiscall ColorListClass::_vt46(int *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= *(this + 17) ) /*0x557f4a*/
  {
    *(this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *(this + 91) = a2; /*0x557f4c*/
    (*(void (__thiscall **)(int *))(*this + 72))(this); /*0x557f56*/
    if ( *(this + 91) < *(this + 92) ) /*0x557f67*/
      (*(void (__thiscall **)(int *, _DWORD))(*this + 192))(this, *(this + 91)); /*0x557f6e*/
    v4 = this->ListClass_field_0x14; /*0x557f74*/
    result = *(this + 91); /*0x557f7d*/
    if ( result >= v4 + *(this + 92) ) /*0x557f87*/
      return (*(int (__thiscall **)(int *, int))(*this + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}


// ==== 0x00557FB0  ListClass::ScrollDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt41(_DWORD *this, int a2)
{
  int v2; // esi

  v2 = *(this + 91); /*0x557fb7*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 184))(this, v2 + a2); /*0x557fc0*/
  return v2; /*0x557fc8*/
}


// ==== 0x00557FD0  ListClass::AddItem  this=ListClass  sig=csp ====
void __thiscall CheckListClass::_vt18(int this)
{
  if ( *(_BYTE *)(this + 84) ) /*0x557fd3*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 88) + 72))(this + 88); /*0x557fe0*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 184) + 72))(this + 184); /*0x557fef*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 280) + 72))(this + 280); /*0x557ffe*/
  }
  VectorClass_ptr_ConvertClass::MarkDirty((_BYTE *)this); /*0x558003*/
}


// ==== 0x00558010  ListClass::RemoveColor  this=ListClass  sig=csp ====
void __thiscall ColorListClass::_vt45(_DWORD *this, wchar_t *String2)
{
  int v3; // esi

  if ( String2 && (int)*(this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(this->q038 + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *(this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 184))(this, v3); /*0x558051*/
  }
}


// ==== 0x00558060  ListClass::Destru_vt00  this=ListClass  sig=csp ====
ListClass *__thiscall ListClass::Destru_vt00(_BYTE *Block, char a2)
{
  char v3; // al
  GaugeClass *v4; // edx
  void *v5; // eax

  v3 = *(Block + 84); /*0x558066*/
  *(_DWORD *)Block = &vt_ListClass; /*0x558069*/
  if ( v3 ) /*0x558071*/
  {
    v4 = (GaugeClass *)*((_DWORD *)Block + 70); /*0x55807c*/
    *((_DWORD *)Block + 5) += *((_DWORD *)Block + 75); /*0x558084*/
    *(Block + 84) = 0; /*0x55808d*/
    ((void (__thiscall *)(_BYTE *))v4[1].GaugeClass_field_0x04)(Block + 280); /*0x558090*/
    (*(void (__thiscall **)(_BYTE *))(*((_DWORD *)Block + 22) + 36))(Block + 88); /*0x558099*/
    (*(void (__thiscall **)(_BYTE *))(*((_DWORD *)Block + 46) + 36))(Block + 184); /*0x5580a8*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)Block + 72))(Block); /*0x5580af*/
  }
  SliderClass::Destructor((_DWORD *)Block + 70); /*0x5580b8*/
  ShapeButtonClass::Destructor((int)(Block + 184)); /*0x5580c3*/
  ShapeButtonClass::Destructor((int)(Block + 88)); /*0x5580cb*/
  v5 = (void *)*((_DWORD *)Block + 14); /*0x5580d0*/
  *((_DWORD *)Block + 13) = &vt_VectorClass_unsigned_short_const; /*0x5580d3*/
  if ( v5 && *(Block + 65) ) /*0x5580de*/
  {
    __3_YAXPAX_Z(v5); /*0x5580e4*/
    *((_DWORD *)Block + 14) = 0; /*0x5580ec*/
  }
  *(Block + 65) = 0; /*0x5580f1*/
  *((_DWORD *)Block + 15) = 0; /*0x5580f4*/
  GadgetClass::Dtor(Block); /*0x5580f7*/
  if ( (a2 & 1) != 0 ) /*0x558101*/
    __3_YAXPAX_Z(Block); /*0x558104*/
  return (ListClass *)Block; /*0x55810e*/
}


// ==== 0x00558120  SliderClass::?  this=SliderClass  sig=csp ====
int __thiscall SliderClass::_vt38(_DWORD *this)
{
  return this->q04C; /*0x558123*/
}


// ==== 0x00558130  _DynamicVectorClass_PBG::drawList  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall CheckListClass::drawList(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x558133*/
  *Block = &vt_VectorClass_unsigned_short_const; /*0x558136*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x558140*/
  {
    __3_YAXPAX_Z(v3); /*0x558148*/
    *(Block + 1) = 0; /*0x558150*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55815b*/
  *(Block + 2) = 0; /*0x558161*/
  if ( (a2 & 1) != 0 ) /*0x558168*/
    __3_YAXPAX_Z(Block); /*0x55816b*/
  return (DynamicVector *)Block; /*0x558175*/
}


// ==== 0x00558180  SliderClass::QueryInterface  this=SliderClass  sig=csp ====
SliderClass *__thiscall SliderClass::QueryInterface(_DWORD *Block, char a2)
{
  SliderClass::Destructor(Block); /*0x558183*/
  if ( (a2 & 1) != 0 ) /*0x55818d*/
    __3_YAXPAX_Z(Block); /*0x558190*/
  return (SliderClass *)Block; /*0x55819a*/
}


// ==== 0x005581A0  GaugeClass::method_5581A0  this=GaugeClass  sig=csp ====
int __thiscall sub_5581A0(int this, GaugeClass *aP1)
{
  ControlClass::CtorFromData((_DWORD *)this, (EditClass *)aP1); /*0x5581a9*/
  *(_BYTE *)(this + 44) = aP1[1].GaugeClass_field_0x0C; /*0x5581b1*/
  *(_BYTE *)(this + 45) = BYTE1(aP1[1].GaugeClass_field_0x0C); /*0x5581b7*/
  *(_BYTE *)(this + 46) = BYTE2(aP1[1].GaugeClass_field_0x0C); /*0x5581bd*/
  *(_DWORD *)(this + 48) = aP1[1].GaugeClass_field_0x10; /*0x5581c3*/
  *(_DWORD *)(this + 52) = aP1[1].GaugeClass_field_0x14; /*0x5581c9*/
  *(_DWORD *)(this + 56) = aP1[1].GaugeClass_field_0x18; /*0x5581cf*/
  *(_DWORD *)this = &vt_GaugeClass; /*0x5581d2*/
  return this; /*0x5581da*/
}


// ==== 0x005581E0  _DynamicVectorClass_PBG::scrollList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::sub_5581E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x5581e6*/
  *(_DWORD *)(this + 16) = 0; /*0x5581e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x5581f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5581f6*/
    *(_DWORD *)(this + 4) = 0; /*0x5581fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x558201*/
  *(_DWORD *)(this + 8) = 0; /*0x558204*/
}


// ==== 0x00558210  _DynamicVectorClass_PBG::selectItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::sub_558210(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x558210*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x558225*/
  else
    return 0; /*0x558217*/
}


// ==== 0x00558230  _VectorClass_PBG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::Count(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x55823a*/
}


// ==== 0x00558240  _VectorClass_PBG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::Get(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x558242*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x55824d*/
  {
    v3 = 0; /*0x55824f*/
    if ( v2 <= 0 ) /*0x558253*/
      return 1; /*0x558273*/
    v4 = (_DWORD *)*(this + 1); /*0x558255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55825b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x558264*/
    {
      ++v3; /*0x558266*/
      ++v4; /*0x558267*/
      if ( v3 >= v2 ) /*0x55826c*/
        return 1; /*0x55826c*/
    }
  }
  return 0; /*0x55826e*/
}


// ==== 0x00558280  _VectorClass_PBG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x55828c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x558296*/
    if ( a3 ) /*0x55829c*/
      v4 = a3; /*0x5582b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5582ae*/
    *((_BYTE *)this + 12) = 1; /*0x5582b6*/
    if ( v4 ) /*0x5582ba*/
    {
      if ( this->Items ) /*0x5582c5*/
      {
        v6 = this->Capacity; /*0x5582cc*/
        if ( a2 < v6 ) /*0x5582d1*/
          v6 = a2; /*0x5582d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x5582d9*/
          ++i; /*0x5582de*/
        if ( *((_BYTE *)this + 13) ) /*0x5582eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x5582f6*/
          this->Items = 0; /*0x5582fe*/
        }
      }
      this->Items = v4; /*0x558307*/
      this->Capacity = a2; /*0x55830f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x558312*/
      return 1; /*0x558318*/
    }
    else
    {
      return 0; /*0x5582bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x558322*/
    return 1; /*0x558328*/
  }
}


// ==== 0x00558330  _VectorClass_PBG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PBG::Set(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x55833d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x558343*/
    *(_DWORD *)(this + 4) = 0; /*0x55834b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55834e*/
  *(_DWORD *)(this + 8) = 0; /*0x558351*/
}


// ==== 0x00558360  _VectorClass_PBG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x558360*/
    return 0; /*0x558368*/
  v3 = *(_DWORD *)(this + 8); /*0x55836e*/
  result = 0; /*0x558371*/
  if ( v3 <= 0 ) /*0x558375*/
    return -1; /*0x55838c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x55837b*/
  {
    if ( ++result >= v3 ) /*0x55838a*/
      return -1; /*0x55838a*/
  }
  return result; /*0x55836a*/
}


// ==== 0x005583A0  _VectorClass_PBG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PBG::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5583a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5583b5*/
  else
    return 0; /*0x5583a7*/
}


// ==== 0x005583C0  _DynamicVectorClass_PBG::clearList  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::sub_5583C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5583cc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x5583d2*/
    if ( a3 ) /*0x5583d8*/
      v4 = a3; /*0x5583ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x5583ea*/
    *((_BYTE *)this + 12) = 1; /*0x5583f2*/
    if ( !v4 ) /*0x5583f6*/
      return 0; /*0x55846a*/
    if ( this->q004 ) /*0x5583f8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x5583ff*/
      if ( a2 < v5 ) /*0x558404*/
        v5 = a2; /*0x558406*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x55840c*/
        ++i; /*0x558411*/
      if ( *((_BYTE *)this + 13) ) /*0x55841e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x558429*/
        this->q004 = 0; /*0x558431*/
      }
    }
    this->q004 = v4; /*0x55843a*/
    this->DynamicVector_field_0x8 = a2; /*0x558442*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x558445*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x55844e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x558451*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x558459*/
    this->DynamicVector_field_0x10 = v7; /*0x55845b*/
  return 1; /*0x55845e*/
}


// ==== 0x00558470  _DynamicVectorClass_PBG::getItemCount  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::sub_558470(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x558470*/
  result = 0; /*0x558473*/
  if ( v2 <= 0 ) /*0x558478*/
    return -1; /*0x55848f*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55847e*/
  {
    if ( ++result >= v2 ) /*0x55848d*/
      return -1; /*0x55848d*/
  }
  return result; /*0x558492*/
}


// ==== 0x005584A0  _VectorClass_PBG::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_PBG::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x5584a3*/
  *Block = &vt_VectorClass_unsigned_short_const; /*0x5584a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x5584b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5584b8*/
    *(Block + 1) = 0; /*0x5584c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x5584cb*/
  *(Block + 2) = 0; /*0x5584d1*/
  if ( (a2 & 1) != 0 ) /*0x5584d8*/
    __3_YAXPAX_Z(Block); /*0x5584db*/
  return (VectorClass *)Block; /*0x5584e5*/
}


// ==== 0x005584F0  sub_5584F0  this=BlowStraw  sig=csp ====
size_t __fastcall sub_5584F0(char *a1, void *a2)
{
  size_t v2; // esi
  int v3; // eax
  BombClass *v4; // ecx

  if ( !a1 || !a2 ) /*0x5584f6*/
    return 0; /*0x55852a*/
  v2 = *(_DWORD *)(a1 + 2); /*0x5584fc*/
  v3 = *a1 - 3; /*0x558500*/
  v4 = (BombClass *)&a1[*((__int16 *)a1 + 3) + 8]; /*0x558507*/
  if ( v3 ) /*0x55850b*/
  {
    if ( v3 != 1 ) /*0x55850f*/
    {
      memcpy(a2, (AbstractClass *)v4, v2); /*0x558513*/
      return v2; /*0x55851f*/
    }
    BitStreamIOLCW((unsigned __int8 *)v4, (unsigned int)a2, v2); /*0x558520*/
  }
  return v2; /*0x55851f*/
}


// ==== 0x00558530  sub_558530  this=-  sig=ida-proto ====
int sub_558530()
{
  dword_ABCBC8 = 0; /*0x558532*/
  dword_ABCBCC = 0; /*0x558537*/
  dword_ABCBD0 = 0; /*0x55853c*/
  dword_ABCBD4 = 0; /*0x558541*/
  return 0; /*0x558546*/
}


// ==== 0x00558550  sub_558550  this=-  sig=ida-proto ====
void sub_558550()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55855c*/
  dbl_ABCBE0 = Math::Sqrt(v0 + v0); /*0x55856e*/
}


// ==== 0x00558580  sub_558580  this=-  sig=ida-proto ====
void sub_558580()
{
  dbl_ABCC30 = dbl_ABCBE0 / 60.0; /*0x55858c*/
}


// ==== 0x005585A0  sub_5585A0  this=-  sig=ida-proto ====
void sub_5585A0()
{
  dbl_ABCC18 = 1.0 / dbl_ABCC30; /*0x5585ac*/
}


// ==== 0x005585C0  sub_5585C0  this=-  sig=ida-proto ====
void sub_5585C0()
{
  dbl_ABCC10 = 0.0174532925199433 * 45.0; /*0x5585cc*/
}


// ==== 0x005585E0  sub_5585E0  this=-  sig=ida-proto ====
void sub_5585E0()
{
  dbl_ABCBE8 = 0.0174532925199433 * 60.0; /*0x5585ec*/
}


// ==== 0x00558600  sub_558600  this=-  sig=ida-proto ====
void sub_558600()
{
  dbl_ABCBC0 = 0.0174532925199433 * 90.0; /*0x55860c*/
}


// ==== 0x00558620  sub_558620  this=-  sig=ida-proto ====
__int64 sub_558620()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCBC0 - dbl_ABCBE8); /*0x558632*/
  result = Math::RoundToInt(v0 * dbl_ABCBE0 * 0.5); /*0x558646*/
  dword_ABCC38 = result; /*0x55864b*/
  return result; /*0x558650*/
}


// ==== 0x00558660  sub_558660  this=-  sig=ida-proto ====
void sub_558660()
{
  dbl_ABCBF0 = Math::ArcTan((double)dword_ABCC38 * 0.00390625); /*0x558677*/
}


// ==== 0x00558690  sub_558690  this=-  sig=ida-proto ====
void sub_558690()
{
  dbl_ABCC08 = Math::ArcTan((double)(2 * dword_ABCC38) / dbl_ABCBE0); /*0x5586b2*/
}


// ==== 0x005586C0  sub_5586C0  this=-  sig=ida-proto ====
__int64 sub_5586C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCC38) + 0.5); /*0x5586db*/
  dword_ABCC2C = result; /*0x5586e0*/
  return result; /*0x5586e6*/
}


// ==== 0x005586F0  sub_5586F0  this=-  sig=ida-proto ====
int sub_5586F0()
{
  word_ABCBD8 = 0; /*0x5586f2*/
  word_ABCBDA = 0; /*0x5586f8*/
  return 0; /*0x5586fe*/
}


// ==== 0x00558700  sub_558700  this=-  sig=ida-proto ====
int sub_558700()
{
  dword_ABCBF8 = 0; /*0x558702*/
  dword_ABCBFC = 0; /*0x558707*/
  dword_ABCC00 = 0; /*0x55870c*/
  return 0; /*0x558711*/
}


// ==== 0x00558720  sub_558720  this=-  sig=ida-proto ====
int sub_558720()
{
  dword_ABCC28 = 0; /*0x558725*/
  dword_ABCC20 = 128; /*0x55872f*/
  dword_ABCC24 = 128; /*0x558734*/
  return 128; /*0x558739*/
}


// ==== 0x00558740  LoadOptions::LoadOptions  this=LoadOptions  sig=csp ====
LoadOptions *__thiscall LoadOptions::LoadOptions(LoadOptions *this)
{
  char *v2; // ecx
  int v3; // eax

  v2 = (char *)this + 32; /*0x558745*/
  *((_DWORD *)v2 + 1) = 0; /*0x558748*/
  *((_DWORD *)v2 + 2) = 0; /*0x55874b*/
  v2[12] = 1; /*0x55874e*/
  v2[13] = 0; /*0x558752*/
  *(_DWORD *)v2 = &DynamicVectorClass<FileEntryClass *>::`vftable'; /*0x558755*/
  *((_DWORD *)v2 + 5) = 10; /*0x55875b*/
  *((_DWORD *)v2 + 4) = 0; /*0x558762*/
  this->q004 = 0; /*0x558765*/
  this->q00C = 0; /*0x558768*/
  this->q014 = 0; /*0x55876b*/
  v3 = *(_DWORD *)v2; /*0x55876e*/
  *(_DWORD *)this = &LoadOptionsClass::`vftable'; /*0x558770*/
  this->q008 = &off_829EA0; /*0x558776*/
  this->max_entries = 2048; /*0x55877d*/
  (*(void (__thiscall **)(char *))(v3 + 12))(v2); /*0x558784*/
  return this; /*0x558789*/
}


// ==== 0x00558790  LoadOptions::Cleanup  this=LoadOptions  sig=csp ====
void __thiscall LoadOptions_Cleanup(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax

  v2 = 0; /*0x558797*/
  for ( *this = &LoadOptionsClass::`vftable'; v2 < this->capacity; ++v2 ) /*0x5587a4*/
    __3_YAXPAX_Z(*(void **)(*(this + 9) + 4 * v2)); /*0x5587ad*/
  v3 = *(this + 8); /*0x5587bd*/
  v4 = this + 8; /*0x5587c0*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4); /*0x5587c5*/
  v5 = (void *)v4[1]; /*0x5587c8*/
  *v4 = &VectorClass<FileEntryClass *>::`vftable'; /*0x5587cb*/
  if ( v5 && *((_BYTE *)v4 + 13) ) /*0x5587d5*/
  {
    __3_YAXPAX_Z(v5); /*0x5587db*/
    v4[1] = 0; /*0x5587e3*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x5587e6*/
  v4[2] = 0; /*0x5587e9*/
}


// ==== 0x005587F0  LoadOptions::Run  this=MapResourceClass  sig=csp ====
bool __thiscall LoadOptions::Run(const char **this)
{
  *(this + 1) = (const char *)1; /*0x5587f0*/
  *(this + 3) = 0; /*0x5587f7*/
  return SaveLoadDialog::DlgProc(this);
}


// ==== 0x00558810  ObjectClass::ShowSaveLoadDialog  this=MapResourceClass  sig=csp ====
bool __thiscall ShowSaveLoadDialog(int this, CampaignScore *aP1)
{
  CampaignScore *v2; // eax

  v2 = aP1; /*0x558810*/
  *(_DWORD *)(this + 4) = 2; /*0x558814*/
  if ( !aP1 ) /*0x55881d*/
    v2 = (CampaignScore *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4960); /*0x558824*/
  *(_DWORD *)(this + 12) = v2; /*0x558829*/
  return SaveLoadDialog::DlgProc((const char **)this); /*0x558831*/
}


// ==== 0x00558840  Options::PrepareSaveLoadDlg  this=MapResourceClass  sig=csp ====
bool __thiscall sub_558840(const char **dwNewLong)
{
  *(dwNewLong + 1) = (const char *)3; /*0x558840*/
  *(dwNewLong + 3) = 0; /*0x558847*/
  return SaveLoadDialog::DlgProc(dwNewLong);
}


// ==== 0x005588E0  sub_5588E0  this=int  sig=csp ====
LRESULT __fastcall sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
  LRESULT result; // eax
  LRESULT v7; // ebp
  HWND DlgItem; // eax
  HWND v9; // eax
  HWND v10; // eax
  LRESULT v11; // [esp+Ch] [ebp-4h]

  result = GetWindowLongA(hDlg, 8); /*0x5588eb*/
  v11 = result; /*0x5588f9*/
  if ( a2 == 1319 ) /*0x5588fd*/
  {
    if ( a4 == 1 ) /*0x558949*/
    {
      result = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x558963*/
      if ( result > 0 ) /*0x558967*/
      {
        result = SendMessageA(hWnd, 0x188u, 0, 0); /*0x558973*/
        if ( result != -1 ) /*0x558978*/
        {
          v7 = SendMessageA(hWnd, 0x199u, result, 0); /*0x55898c*/
          if ( *(_BYTE *)(v7 + 436) && !*(_BYTE *)(v7 + 437) || (v7 = *(_DWORD *)(v11 + 12)) != 0 ) /*0x5589ab*/
          {
            DlgItem = GetDlgItem(hDlg, 1318); /*0x5589b3*/
            SendMessageA(DlgItem, 0x4B2u, 0, v7); /*0x5589be*/
          }
          v9 = GetDlgItem(hDlg, 1318); /*0x5589c6*/
          SetFocus(v9); /*0x5589c9*/
          v10 = GetDlgItem(hDlg, 1318); /*0x5589de*/
          return SendMessageA(v10, 0xB1u, 0, -1); /*0x5589e1*/
        }
      }
    }
  }
  else if ( a2 == 1670 ) /*0x558905*/
  {
    if ( !a4 ) /*0x558930*/
      *(_DWORD *)(result + 24) = 2; /*0x558938*/
  }
  else if ( a2 == 1735 && !a4 ) /*0x558916*/
  {
    *(_DWORD *)(result + 24) = 1; /*0x55891e*/
  }
  return result; /*0x55891c*/
}


// ==== 0x00558A30  sub_558A30  this=unknown  sig=csp ====
int __stdcall sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax
  LONG v7; // edi

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558a4a*/
  if ( !result ) /*0x558a51*/
  {
    if ( a2 > 0x216 ) /*0x558a5d*/
    {
      if ( a2 == 1175 ) /*0x558b38*/
      {
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0xF9u, 2); /*0x558b52*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0x38u, 255); /*0x558b66*/
        SendDlgItemMessageA(hWnd, 1317, 0x4A6u, 0, 315); /*0x558b7a*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558a63*/
      {
        case 0x216u: /*0x558a63*/
          return (unsigned __int8)Window::ClampToScreen((int *)a4); /*0x558b2f*/
        case 0xFu: /*0x558a63*/
          Dialog::StopBink(hWnd); /*0x558b0b*/
          return 1; /*0x558b19*/
        case 0x111u: /*0x558a63*/
          v5 = HIWORD(a3); /*0x558a89*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558a8c*/
          v7 = WindowLongA; /*0x558a98*/
          switch ( (unsigned __int16)a3 ) /*0x558a9a*/
          {
            case 0x40Fu: /*0x558a9a*/
              if ( !v5 ) /*0x558af3*/
              {
                *(_DWORD *)(WindowLongA + 24) = 1039; /*0x558af9*/
                return 0; /*0x558b06*/
              }
              break;
            case 0x525u: /*0x558a9a*/
              if ( v5 == 2 && SendMessageA(a4, 0x18Bu, 0, 0) > 0 ) /*0x558adb*/
              {
                *(_DWORD *)(v7 + 24) = 1039; /*0x558ae1*/
                return 0; /*0x558aee*/
              }
              break;
            case 0x686u: /*0x558a9a*/
              *(_DWORD *)(WindowLongA + 24) = 2; /*0x558ab0*/
              return 0; /*0x558abd*/
          }
          break;
      }
    }
    return 0; /*0x558b7c*/
  }
  return result; /*0x558ab7*/
}


// ==== 0x00558B90  sub_558B90  this=unknown  sig=csp ====
int __stdcall sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558baa*/
  if ( !result ) /*0x558bb1*/
  {
    if ( a2 > 0x216 ) /*0x558bbd*/
    {
      if ( a2 == 1175 ) /*0x558c20*/
      {
        DlgItem = GetDlgItem(hWnd, 1318); /*0x558c4f*/
        SendMessageA(DlgItem, 0xC5u, 0x4Fu, 0); /*0x558c56*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0xF9u, 2); /*0x558c74*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0x38u, 255); /*0x558c88*/
        SendDlgItemMessageA(hWnd, 1319, 0x4A6u, 0, 315); /*0x558c9c*/
      }
      else if ( a2 == 1242 ) /*0x558c25*/
      {
        *(_DWORD *)(GetWindowLongA(hWnd, 8) + 24) = 1; /*0x558c32*/
        return 0; /*0x558c3d*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558bbf*/
      {
        case 0x216u: /*0x558bbf*/
          return (unsigned __int8)Window::ClampToScreen((int *)a4); /*0x558c17*/
        case 0xFu: /*0x558bbf*/
          Dialog::StopBink(hWnd); /*0x558bf3*/
          return 1; /*0x558c01*/
        case 0x111u: /*0x558bbf*/
          sub_5588E0(hWnd, (unsigned __int16)a3, a4, HIWORD(a3)); /*0x558be3*/
          return 0; /*0x558bee*/
      }
    }
    return 0; /*0x558c9e*/
  }
  return result; /*0x558be8*/
}


// ==== 0x00558CB0  sub_558CB0  this=unknown  sig=csp ====
int __stdcall sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int *a4)
{
  int result; // eax
  unsigned int v5; // ebx
  LONG WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x558cca*/
  if ( !result ) /*0x558cd1*/
  {
    if ( a2 > 0x216 ) /*0x558cdd*/
    {
      if ( a2 == 1175 ) /*0x558d7a*/
      {
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0xF9u, 2); /*0x558d94*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0x38u, 255); /*0x558da8*/
        SendDlgItemMessageA(hWnd, 1320, 0x4A6u, 0, 315); /*0x558dbc*/
      }
    }
    else
    {
      switch ( a2 ) /*0x558ce3*/
      {
        case 0x216u: /*0x558ce3*/
          return (unsigned __int8)Window::ClampToScreen(a4); /*0x558d71*/
        case 0xFu: /*0x558ce3*/
          Dialog::StopBink(hWnd); /*0x558d4d*/
          return 1; /*0x558d5b*/
        case 0x111u: /*0x558ce3*/
          v5 = HIWORD(a3); /*0x558cfb*/
          WindowLongA = GetWindowLongA(hWnd, 8); /*0x558cfe*/
          if ( (unsigned __int16)a3 == 1670 ) /*0x558d10*/
          {
            if ( !v5 ) /*0x558d35*/
            {
              *(_DWORD *)(WindowLongA + 24) = 2; /*0x558d3d*/
              return 0; /*0x558d48*/
            }
          }
          else if ( (unsigned __int16)a3 == 1736 && !v5 ) /*0x558d1d*/
          {
            *(_DWORD *)(WindowLongA + 24) = 1; /*0x558d25*/
            return 0; /*0x558d30*/
          }
          break;
      }
    }
    return 0; /*0x558dbe*/
  }
  return result; /*0x558d23*/
}


// ==== 0x00558DD0  SaveLoadDialog::DlgProc  this=int  sig=csp ====
bool __thiscall SaveLoadDialog::DlgProc(const char **dwNewLong)
{
  HWND v2; // ebp
  SkirmishDialog *Dialog; // edi
  HWND v4; // ebx
  LPARAM v5; // eax
  wchar_t *v6; // eax
  VectorClass *DlgItem; // eax
  LPARAM v9; // ebp
  HWND v10; // eax
  CellStruct *v11; // ebx
  LPARAM v12; // eax
  CellStruct *v13; // ebx
  LPARAM v14; // eax
  HWND v15; // eax
  VectorClass *v16; // ebx
  LRESULT v17; // eax
  void (*v18)(void); // eax
  int v19; // eax
  LRESULT v20; // eax
  LRESULT v21; // ebp
  wchar_t *v22; // eax
  HWND v23; // eax
  int v24; // ebx
  LRESULT v25; // eax
  wchar_t *v26; // eax
  HWND v27; // eax
  LRESULT v28; // eax
  HWND v29; // eax
  wchar_t *v30; // eax
  HWND v31; // eax
  HWND v32; // eax
  RawFileClass *v33; // ebp
  INIClass *v34; // eax
  _DWORD *v35; // eax
  bool v36; // bl
  wchar_t *v37; // eax
  wchar_t *v38; // eax
  int v39; // ebp
  wchar_t *v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ecx
  wchar_t *v44; // eax
  int i; // ebx
  wchar_t *StringCSF; // [esp-10h] [ebp-3D8h]
  wchar_t *v47; // [esp-10h] [ebp-3D8h]
  wchar_t *v48; // [esp-10h] [ebp-3D8h]
  wchar_t *v49; // [esp-10h] [ebp-3D8h]
  wchar_t *v50; // [esp-10h] [ebp-3D8h]
  wchar_t *v51; // [esp-Ch] [ebp-3D4h]
  wchar_t *v52; // [esp-Ch] [ebp-3D4h]
  int v53; // [esp+0h] [ebp-3C8h]
  WPARAM wParam; // [esp+10h] [ebp-3B8h]
  WPARAM wParama; // [esp+10h] [ebp-3B8h]
  VectorClass *hWnd; // [esp+14h] [ebp-3B4h]
  _DWORD v57[22]; // [esp+38h] [ebp-390h] BYREF
  char v58[12]; // [esp+90h] [ebp-338h] BYREF
  int v59; // [esp+9Ch] [ebp-32Ch]
  int v60[9]; // [esp+A4h] [ebp-324h] BYREF
  LPARAM lParam[128]; // [esp+C8h] [ebp-300h] BYREF
  char Buffer[256]; // [esp+2C8h] [ebp-100h] BYREF

  v2 = 0; /*0x558ddc*/
  Dialog = 0; /*0x558de1*/
  hWnd = 0; /*0x558de4*/
  if ( *(dwNewLong + 1) != (const char *)1 ) /*0x558de8*/
  {
    if ( *(dwNewLong + 1) == (const char *)2 ) /*0x558def*/
    {
      if ( DiskSpace::CheckAvailable() < (unsigned int)*(dwNewLong + 4) ) /*0x558e65*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 432); /*0x558e88*/
        v6 = GetStringCSF((wchar_t *)&stru_829EE8.customSound, 0, &stru_829EE8.isOnMap, 432); /*0x558e9a*/
        Dialog::ShowMessageBox((int)v6, StringCSF, 0, 0, 0, v53); /*0x558ea4*/
        return 0; /*0x558eb5*/
      }
      Dialog = (SkirmishDialog *)CreateDialog(0x2B4u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558B90, 0); /*0x558ecc*/
      DlgItem = (VectorClass *)GetDlgItem((HWND)Dialog, 1319); /*0x558ed4*/
      v9 = (LPARAM)*(dwNewLong + 3); /*0x558ed6*/
      hWnd = DlgItem; /*0x558edf*/
      v10 = GetDlgItem((HWND)Dialog, 1318); /*0x558ee3*/
      SendMessageA(v10, 0x4B2u, 0, v9); /*0x558eee*/
      v2 = GetDlgItem((HWND)Dialog, 1735); /*0x558f02*/
      v11 = (CellStruct *)GetDlgItem((HWND)Dialog, 1684); /*0x558f0a*/
      v12 = (*((int (__thiscall **)(const char **))*dwNewLong + 6))(dwNewLong); /*0x558f0c*/
      SendMessageA((HWND)v11, 0x4B2u, 0, v12); /*0x558f18*/
      if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558f23*/
        goto LABEL_12; /*0x558f2a*/
    }
    else
    {
      if ( *(dwNewLong + 1) != (const char *)3 ) /*0x558df2*/
        goto LABEL_12; /*0x558df2*/
      Dialog = (SkirmishDialog *)CreateDialog(0x2B5u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558CB0, 0); /*0x558e0e*/
      hWnd = (VectorClass *)GetDlgItem((HWND)Dialog, 1320); /*0x558e1e*/
      v2 = GetDlgItem((HWND)Dialog, 1736); /*0x558e2a*/
      v4 = GetDlgItem((HWND)Dialog, 1684); /*0x558e2e*/
      v5 = (*((int (__thiscall **)(const char **))*dwNewLong + 7))(dwNewLong); /*0x558e34*/
      SendMessageA(v4, 0x4B2u, 0, v5); /*0x558e40*/
      if ( SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558e4b*/
        goto LABEL_12; /*0x558e52*/
    }
    goto LABEL_11; /*0x558e52*/
  }
  Dialog = (SkirmishDialog *)CreateDialog(0xB7u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558A30, 0); /*0x558f44*/
  hWnd = (VectorClass *)GetDlgItem((HWND)Dialog, 1317); /*0x558f54*/
  v2 = GetDlgItem((HWND)Dialog, 1039); /*0x558f60*/
  v13 = (CellStruct *)GetDlgItem((HWND)Dialog, 1684); /*0x558f64*/
  v14 = (*((int (__thiscall **)(const char **))*dwNewLong + 5))(dwNewLong); /*0x558f6a*/
  SendMessageA((HWND)v13, 0x4B2u, 0, v14); /*0x558f76*/
  if ( !SessionClass::GetGameSpeed(&HouseClass_Player.__pad_5568[8068]) ) /*0x558f81*/
  {
LABEL_11:
    v15 = GetDlgItem((HWND)Dialog, 1036); /*0x558f8a*/
    ShowWindow(v15, 0); /*0x558f99*/
  }
LABEL_12:
  *(dwNewLong + 6) = (const char *)-1; /*0x558f9f*/
  if ( !Dialog ) /*0x558fa8*/
    return *(dwNewLong + 6) == (const char *)1039; /*0x558fa8*/
  SetWindowLongA((HWND)Dialog, 8, (LONG)dwNewLong); /*0x558fb2*/
  v16 = hWnd; /*0x558fb8*/
  if ( hWnd ) /*0x558fbe*/
  {
    LoadSaveDialog::FillList((int *)dwNewLong, (HWND)hWnd); /*0x558fc3*/
    v17 = SendMessageA((HWND)hWnd, 0x18Bu, 0, 0); /*0x558fd2*/
    EnableWindow(v2, v17 > 0); /*0x558fe5*/
  }
  Dialog::Show((HWND)Dialog); /*0x558fed*/
  while ( 1 ) /*0x558ff8*/
  {
    while ( *(dwNewLong + 6) == (const char *)-1 ) /*0x559000*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x559009*/
        *(dwNewLong + 6) = (const char *)2; /*0x55900b*/
      v18 = (void (*)(void))*(dwNewLong + 5); /*0x559012*/
      if ( v18 ) /*0x559017*/
        v18(); /*0x559019*/
      if ( !HouseClass_Player.__pad_5568[22252] ) /*0x559022*/
        ScreenSaver::Process(0, (int)v16, -1); /*0x559026*/
    }
    v19 = (int)*(dwNewLong + 6); /*0x559030*/
    if ( v19 == 1 || v19 == 1039 || v19 == 1735 || v19 == 1736 ) /*0x55904b*/
    {
      v20 = SendMessageA((HWND)v16, 0x188u, 0, 0); /*0x559061*/
      wParam = v20; /*0x559066*/
      if ( v20 == -1 ) /*0x55906a*/
        goto LABEL_70; /*0x55906a*/
      v21 = SendMessageA((HWND)v16, 0x199u, v20, 0); /*0x55907b*/
      if ( *(dwNewLong + 1) == (const char *)1 ) /*0x559081*/
      {
        if ( *(_BYTE *)(v21 + 437) ) /*0x5594ae*/
          goto LABEL_71; /*0x5594b6*/
        v41 = Game::CheckForGameCD((void *)0x3C); /*0x5594c6*/
        v42 = *(_DWORD *)(v21 + 424); /*0x5594c8*/
        if ( v42 == -1 ) /*0x5594d1*/
          v43 = -1; /*0x5594d3*/
        else
          v43 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * v42] + 152); /*0x5594e0*/
        SetSoundWarning(v43); /*0x5594e6*/
        if ( (unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5594fd*/
        {
          ShowWindow((HWND)Dialog, 0); /*0x559516*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x559524*/
          if ( (*((unsigned __int8 (__thiscall **)(const char **, int))*dwNewLong + 1))(dwNewLong, v21 + 256) ) /*0x559532*/
            goto LABEL_71; /*0x559537*/
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x559541*/
          ShowWindow((HWND)Dialog, 5); /*0x55954d*/
          v50 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 550); /*0x559573*/
          v44 = GetStringCSF(aTxtErrorLoadin, 0, &stru_829EE8.isOnMap, 550); /*0x559585*/
          Dialog::ShowMessageBox((int)v44, v50, 0, 0, 0, v53); /*0x55958f*/
          ShowWindow((HWND)Dialog, 0); /*0x559597*/
        }
        else
        {
          SetSoundWarning(v41); /*0x559509*/
        }
        goto LABEL_70; /*0x55950e*/
      }
      if ( *(dwNewLong + 1) == (const char *)2 ) /*0x559088*/
      {
        v27 = GetDlgItem((HWND)Dialog, 1319); /*0x5591b2*/
        wParama = 0; /*0x5591b6*/
        if ( v27 ) /*0x5591be*/
        {
          v28 = SendMessageA(v27, 0x4EFu, 0, 0); /*0x5591ca*/
          wParama = v28; /*0x5591d2*/
          if ( v28 ) /*0x5591d6*/
            SetDialogActiveFlag(v28, 1); /*0x5591dc*/
        }
        v29 = GetDlgItem((HWND)Dialog, 1318); /*0x5591e7*/
        SendMessageA(v29, 0x4B3u, 0x50u, (LPARAM)lParam); /*0x5591f9*/
        WideString::Trim((wchar_t *)lParam); /*0x559206*/
        if ( !wcslen((const wchar_t *)lParam) ) /*0x559213*/
        {
          v47 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 574); /*0x559240*/
          v30 = GetStringCSF((wchar_t *)&stru_829EE8.uniqueId, 0, &stru_829EE8.isOnMap, 574); /*0x559252*/
          Dialog::ShowMessageBox((int)v30, v47, 0, 0, 0, v53); /*0x55925c*/
          v31 = GetDlgItem((HWND)Dialog, 1318); /*0x559267*/
          SetFocus(v31); /*0x55926a*/
          v32 = GetDlgItem((HWND)Dialog, 1318); /*0x55927f*/
          SendMessageA(v32, 0xB1u, 0xFFFFFFFF, -1); /*0x559282*/
LABEL_70:
          *(dwNewLong + 6) = (const char *)-1; /*0x559599*/
          goto LABEL_71; /*0x559599*/
        }
        if ( v21 && *(_BYTE *)(v21 + 436) ) /*0x559291*/
        {
          v33 = (RawFileClass *)(v21 + 256); /*0x55929b*/
        }
        else
        {
          CCFileClass::Construct3((int)v57); /*0x5592a7*/
          do /*0x5592e9*/
          {
            v34 = (INIClass *)rand(); /*0x5592b0*/
            sprintf(Buffer, &stru_829EE8, v34); /*0x5592c3*/
            FileClass::SetFileName(v57, (IUnknown *)Buffer); /*0x5592d7*/
          }
          while ( CCFileClass::Open(v57, 0) == 1 ); /*0x5592e9*/
          v57[0] = &vt_CCFileClass; /*0x5592f2*/
          v59 = 0; /*0x5592fa*/
          Vector::Clear((int)v58); /*0x559305*/
          v57[0] = &off_7E1668; /*0x55930e*/
          BufferIOFileClass::Dtor(v57); /*0x559316*/
          v33 = (RawFileClass *)Buffer; /*0x55931b*/
        }
        if ( v33 ) /*0x559324*/
        {
          v35 = RawFileClass::Construct(v60, v33); /*0x559332*/
          v36 = (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v35 + 20))(v35, 0) == 1; /*0x559349*/
          RawFileClass::Dtor(v60); /*0x55934c*/
          if ( v36 /*0x5593aa*/
            && (v52 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_829EE8.isOnMap, 594),
                v48 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_829EE8.isOnMap, 594),
                v37 = GetStringCSF(aTxtConfirmSave, 0, &stru_829EE8.isOnMap, 594),
                Dialog::ShowMessageBox((int)v37, v48, (Movie *)v52, 0, 0, v53)) )
          {
            *(dwNewLong + 6) = (const char *)-1; /*0x5593b3*/
          }
          else
          {
            ShowWindow((HWND)Dialog, 0); /*0x5593c8*/
            if ( (*((unsigned __int8 (__thiscall **)(const char **, RawFileClass *, LPARAM *))*dwNewLong + 2))( /*0x5593d7*/
                   dwNewLong,
                   v33,
                   lParam) )
            {
              ShowWindow((HWND)Dialog, 5); /*0x559431*/
              SaveLoadDialog::FindDialogTemplate(Dialog); /*0x559435*/
              v39 = (*((int (__thiscall **)(const char **))*dwNewLong + 8))(dwNewLong); /*0x559458*/
              v40 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 617); /*0x559462*/
              Dialog::ShowMessageBox(v39, v40, 0, 0, 0, v53); /*0x55946d*/
              SaveLoadDialog::LookupDialogHash(Dialog); /*0x559474*/
              ShowWindow((HWND)Dialog, 0); /*0x55947c*/
              if ( *(dwNewLong + 3) ) /*0x55947e*/
                wcscpy((wchar_t *)lParam, (const wchar_t *)*(dwNewLong + 3)); /*0x55948e*/
            }
            else
            {
              ShowWindow((HWND)Dialog, 5); /*0x5593e1*/
              v49 = GetStringCSF(g_Str_TXT_OK, 0, &stru_829EE8.isOnMap, 609); /*0x559407*/
              v38 = GetStringCSF(aTxtErrorSaving, 0, &stru_829EE8.isOnMap, 609); /*0x559419*/
              Dialog::ShowMessageBox((int)v38, v49, 0, 0, 0, v53); /*0x559423*/
              *(dwNewLong + 6) = (const char *)-1; /*0x559428*/
            }
          }
        }
        if ( wParama ) /*0x55949c*/
          SetDialogActiveFlag(wParama, 0); /*0x5594a4*/
      }
      else if ( *(dwNewLong + 1) == (const char *)3 ) /*0x55908f*/
      {
        v22 = GetStringCSF((wchar_t *)&stru_829EE8.ambientSoundController[4], 0, &stru_829EE8.isOnMap, 635); /*0x5590a7*/
        swprintf((wchar_t *const)lParam, (const size_t)stru_829EE8.ambientSoundController, v22, (CampaignScore *)v21); /*0x5590ba*/
        v23 = GetDlgItem((HWND)Dialog, 1320); /*0x5590c8*/
        v24 = 0; /*0x5590ce*/
        if ( v23 ) /*0x5590d2*/
        {
          v25 = SendMessageA(v23, 0x4EFu, 0, 0); /*0x5590dc*/
          v24 = v25; /*0x5590e2*/
          if ( v25 ) /*0x5590e6*/
            SetDialogActiveFlag(v25, 1); /*0x5590ec*/
        }
        v51 = GetStringCSF((wchar_t *)&stru_829EE8.attachedTag, 0, &stru_829EE8.isOnMap, 646); /*0x559113*/
        v26 = GetStringCSF((wchar_t *)&stru_829EE8.fallRate, 0, &stru_829EE8.isOnMap, 646); /*0x559125*/
        if ( Dialog::ShowMessageBox((int)lParam, v26, (Movie *)v51, 0, 0, v53) /*0x559187*/
          || ((*((void (__thiscall **)(const char **, int))*dwNewLong + 3))(dwNewLong, v21 + 256),
              SendMessageA((HWND)hWnd, 0x182u, wParam, 0),
              SendMessageA((HWND)hWnd, 0x186u, 0, 0),
              SendMessageA((HWND)hWnd, 0x18Bu, 0, 0) > 0) )
        {
          *(dwNewLong + 6) = (const char *)-1; /*0x559189*/
        }
        if ( v24 ) /*0x559192*/
          SetDialogActiveFlag(v24, 0); /*0x55919c*/
      }
    }
LABEL_71:
    if ( *(dwNewLong + 6) != (const char *)-1 ) /*0x5595a4*/
      break; /*0x5595a4*/
    v16 = hWnd; /*0x558ff4*/
  }
  for ( i = 0; i < (int)*(dwNewLong + 12); ++i ) /*0x5595b1*/
    __3_YAXPAX_Z(*(void **)&(*(dwNewLong + 9))[4 * i]); /*0x5595ba*/
  (*((void (__thiscall **)(const char **))*(dwNewLong + 8) + 3))(dwNewLong + 8); /*0x5595d0*/
  Dialog::Destroy(Dialog); /*0x5595d5*/
  return *(dwNewLong + 6) == (const char *)1039; /*0x558ea9*/
}


// ==== 0x005595F0  ObjectClass::method_5595F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5595F0(const char **this, char *Buffer)
{
  int v3; // eax
  const char *v5; // [esp-4h] [ebp-78h]
  _DWORD v6[22]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v7[12]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  CCFileClass::Construct3((int)v6); /*0x5595fb*/
  do /*0x559633*/
  {
    v5 = *(this + 2); /*0x559607*/
    v3 = rand(); /*0x559608*/
    sprintf(Buffer, stru_829EE8, v3, v5); /*0x559614*/
    FileClass::SetFileName(v6, Buffer); /*0x559621*/
  }
  while ( CCFileClass::Open(v6, 0) == 1 ); /*0x559633*/
  v6[0] = &vt_CCFileClass; /*0x559639*/
  v8 = 0; /*0x559641*/
  Vector::Clear((int)v7); /*0x559649*/
  v6[0] = &off_7E1668; /*0x559652*/
  return BufferIOFileClass::Dtor(v6); /*0x55965f*/
}


// ==== 0x005596A0  LoadSaveDialog::FillList  this=int  sig=csp ====
void __thiscall LoadSaveDialog::FillList(int *this, HWND hWnd)
{
  int *v2; // esi
  int i; // edi
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  char *v8; // eax
  CellStruct *v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  void *v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  CampaignScore *v20; // eax
  int v21; // ecx
  LPARAM v22; // eax
  LRESULT v23; // eax
  LPARAM v24; // ecx
  WPARAM v25; // esi
  WPARAM v26; // ecx
  int v27; // eax
  int v28; // esi
  WPARAM v29; // edx
  int v30; // eax
  int v31; // esi
  signed int v32; // esi
  int v33; // edx
  int v34; // ecx
  const wchar_t *v35; // [esp+8h] [ebp-310h]
  CampaignScore *v36; // [esp+8h] [ebp-310h]
  CampaignScore *v37; // [esp+Ch] [ebp-30Ch]
  HANDLE hFindFile; // [esp+18h] [ebp-300h]
  _DWORD *hFindFilea; // [esp+18h] [ebp-300h]
  int j; // [esp+20h] [ebp-2F8h]
  LRESULT v42; // [esp+24h] [ebp-2F4h]
  LPARAM lParam; // [esp+28h] [ebp-2F0h] BYREF
  void *v44; // [esp+2Ch] [ebp-2ECh] BYREF
  void *v45; // [esp+30h] [ebp-2E8h] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+40h] [ebp-2D8h] BYREF
  struct _FILETIME LocalFileTime; // [esp+50h] [ebp-2C8h] BYREF
  CHAR FileName[128]; // [esp+58h] [ebp-2C0h] BYREF
  wchar_t WideCharStr[127]; // [esp+D8h] [ebp-240h] BYREF
  __int16 v50; // [esp+1D6h] [ebp-142h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1D8h] [ebp-140h] BYREF

  v2 = this; /*0x5596a9*/
  Gadget::InitProperties(&lParam); /*0x5596b4*/
  for ( i = 0; i < v2[12]; ++i ) /*0x5596c2*/
    __3_YAXPAX_Z(*(void **)(v2[9] + 4 * i)); /*0x5596cb*/
  v4 = v2 + 8; /*0x5596de*/
  (*(void (__thiscall **)(int *))(v2[8] + 12))(v2 + 8); /*0x5596e3*/
  if ( v2[1] == 2 ) /*0x5596ea*/
  {
    v5 = __2_YAPAXI_Z(0x1BCu); /*0x5596f5*/
    if ( v5 ) /*0x5596ff*/
    {
      *(_DWORD *)(v5 + 288) = 0; /*0x559704*/
      *(_DWORD *)(v5 + 292) = -1; /*0x55970a*/
      *(_DWORD *)(v5 + 424) = -1; /*0x559710*/
      *(_BYTE *)(v5 + 436) = 1; /*0x559716*/
      *(_BYTE *)(v5 + 437) = 0; /*0x55971d*/
      *(_DWORD *)(v5 + 440) = 0; /*0x559723*/
      *(_WORD *)v5 = 0; /*0x559729*/
      *(_BYTE *)(v5 + 256) = 0; /*0x55972c*/
      *(_WORD *)(v5 + 296) = 0; /*0x559732*/
      *(_DWORD *)(v5 + 432) = 0; /*0x559739*/
      *(_DWORD *)(v5 + 428) = 0; /*0x55973f*/
      v6 = v5; /*0x559745*/
    }
    else
    {
      v6 = 0; /*0x559749*/
    }
    StringCSF = GetStringCSF((wchar_t *)stru_829EE8.location, 0, &stru_829EE8.isOnMap, 774); /*0x55975c*/
    swprintf((wchar_t *const)v6, (const size_t)StringCSF, v35, v37); /*0x559763*/
    if ( HouseClass_Player.field_0 ) /*0x559772*/
    {
      *(_DWORD *)(v6 + 288) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4692); /*0x55977f*/
      *(_DWORD *)(v6 + 292) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 7284); /*0x559791*/
      *(_DWORD *)(v6 + 424) = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13516); /*0x5597a3*/
      wcscpy((wchar_t *)(v6 + 296), *(const wchar_t **)(*(_DWORD *)(HouseClass_Player.field_0 + 52) + 96)); /*0x5597bc*/
    }
    else
    {
      *(_DWORD *)(v6 + 288) = 0; /*0x5597c6*/
      *(_DWORD *)(v6 + 292) = *(_DWORD *)&HouseClass_Player.__pad_5568[8440]; /*0x5597d2*/
      *(_DWORD *)(v6 + 424) = -1; /*0x5597dd*/
      v8 = CharToWideString(&HouseClass_Player.__pad_5568[8396]); /*0x5597e7*/
      swprintf((wchar_t *const)(v6 + 296), (const size_t)&off_8240B4, (const wchar_t *const)v8, v36); /*0x5597f9*/
    }
    GetSystemTime(&SystemTime); /*0x559806*/
    SystemTimeToFileTime(&SystemTime, (LPFILETIME)(v6 + 428)); /*0x559818*/
    v9 = *(CellStruct **)&HouseClass_Player.__pad_5568[8068]; /*0x55981e*/
    *(_BYTE *)(v6 + 436) = 0; /*0x559823*/
    *(_DWORD *)(v6 + 440) = v9; /*0x559829*/
    v10 = v2[10]; /*0x55982f*/
    if ( v2[12] < v10 /*0x55984f*/
      || (*((_BYTE *)v2 + 45) || !v10)
      && (v11 = v2[13], v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v2 + 8, v10 + v11, 0) )
    {
      v12 = v2[12]; /*0x559856*/
      v13 = v2[9]; /*0x559859*/
      v2[12] = v12 + 1; /*0x55985f*/
      *(_DWORD *)(v13 + 4 * v12) = v6; /*0x559862*/
    }
  }
  sprintf(FileName, (ObjectClass *)&stru_829EE8.lastLayer, (INIClass *)v2[2]); /*0x559873*/
  v14 = 0; /*0x55988e*/
  hFindFile = FindFirstFileA(FileName, &FindFileData); /*0x559893*/
  if ( hFindFile != (HANDLE)-1 ) /*0x559897*/
  {
    do /*0x559968*/
    {
      if ( (FindFileData.dwFileAttributes & 0x116) == 0 ) /*0x5598a8*/
      {
        if ( !v14 ) /*0x5598b0*/
        {
          v15 = __2_YAPAXI_Z(0x1BCu); /*0x5598b7*/
          if ( v15 ) /*0x5598c1*/
          {
            *(_DWORD *)(v15 + 288) = 0; /*0x5598c6*/
            *(_DWORD *)(v15 + 292) = -1; /*0x5598cc*/
            *(_DWORD *)(v15 + 424) = -1; /*0x5598d2*/
            *(_BYTE *)(v15 + 436) = 1; /*0x5598d8*/
            *(_BYTE *)(v15 + 437) = 0; /*0x5598df*/
            *(_DWORD *)(v15 + 440) = 0; /*0x5598e5*/
            *(_WORD *)v15 = 0; /*0x5598eb*/
            *(_BYTE *)(v15 + 256) = 0; /*0x5598ee*/
            *(_WORD *)(v15 + 296) = 0; /*0x5598f4*/
            *(_DWORD *)(v15 + 432) = 0; /*0x5598fb*/
            *(_DWORD *)(v15 + 428) = 0; /*0x559901*/
            v14 = (void *)v15; /*0x559907*/
          }
          else
          {
            v14 = 0; /*0x55990b*/
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(int *, void *, struct _WIN32_FIND_DATAA *))(*v2 + 16))( /*0x55991f*/
               v2,
               v14,
               &FindFileData) == 1 )
        {
          v16 = v2[10]; /*0x559921*/
          if ( v2[12] < v16 /*0x559943*/
            || (*((_BYTE *)v2 + 45) || !v16)
            && (v17 = v2[13], v17 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*v4 + 8))(v2 + 8, v16 + v17, 0) )
          {
            v18 = v2[12]; /*0x55994a*/
            v19 = v2[9]; /*0x55994d*/
            v2[12] = v18 + 1; /*0x559953*/
            *(_DWORD *)(v19 + 4 * v18) = v14; /*0x559956*/
          }
          v14 = 0; /*0x559959*/
        }
      }
    }
    while ( FindNextFileA(hFindFile, &FindFileData) ); /*0x559968*/
    if ( v14 ) /*0x559978*/
      __3_YAXPAX_Z(v14); /*0x55997b*/
    FindClose(hFindFile); /*0x559988*/
  }
  v20 = (CampaignScore *)v2[12]; /*0x55998e*/
  if ( (int)v20 > 0 ) /*0x559993*/
  {
    qsort((AbstractClass *)v2[9], (IUnknown *)v20, 4u, sub_559D30); /*0x5599a5*/
    SendMessageA(hWnd, 0x184u, 0, 0); /*0x5599c2*/
    v21 = 0; /*0x5599c7*/
    for ( j = 0; v21 < v2[12]; j = v21 ) /*0x5599cf*/
    {
      v22 = *(_DWORD *)(v2[9] + 4 * v21); /*0x5599d8*/
      hFindFilea = (_DWORD *)v22; /*0x5599db*/
      if ( !*(_BYTE *)(v22 + 437) ) /*0x5599df*/
      {
        v23 = SendMessageA(hWnd, 0x4CDu, 0, v22); /*0x5599f3*/
        v24 = (LPARAM)hFindFilea; /*0x5599f5*/
        v25 = v23; /*0x5599f9*/
        v42 = v23; /*0x5599fb*/
        if ( hFindFilea[110] ) /*0x5599ff*/
        {
          lParam = 1; /*0x559a10*/
          WideString::Reassign(&v44, (wchar_t *)&stru_829EE8.isAliveFlag); /*0x559a18*/
          v26 = (unsigned __int16)v25 << 16; /*0x559a2a*/
          LOBYTE(v26) = -56; /*0x559a2d*/
          SendMessageA(hWnd, 0x4A8u, v26, (LPARAM)&lParam); /*0x559a37*/
          v24 = (LPARAM)hFindFilea; /*0x559a39*/
        }
        if ( *(_DWORD *)(v24 + 432) != -1 && *(_DWORD *)(v24 + 428) != -1 ) /*0x559a59*/
        {
          FileTimeToLocalFileTime((const FILETIME *)(v24 + 428), &LocalFileTime); /*0x559a65*/
          FileTimeToSystemTime(&LocalFileTime, &SystemTime); /*0x559a75*/
          GetDateFormatA(0x400u, 1u, &SystemTime, 0, FileName, 128); /*0x559a92*/
          lParam = 1; /*0x559aae*/
          v27 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559ab6*/
          v50 = 0; /*0x559abc*/
          WideCharStr[v27] = 0; /*0x559ac4*/
          WideString::Reassign(&v44, WideCharStr); /*0x559ad8*/
          v28 = (unsigned __int16)v25 << 16; /*0x559ae7*/
          v29 = v28; /*0x559aea*/
          LOBYTE(v29) = -1; /*0x559aed*/
          SendMessageA(hWnd, 0x4A8u, v29, (LPARAM)&lParam); /*0x559af7*/
          GetTimeFormatA(0x400u, 0, &SystemTime, 0, FileName, 128); /*0x559b0f*/
          lParam = 1; /*0x559b2b*/
          v30 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559b33*/
          v50 = 0; /*0x559b40*/
          WideCharStr[v30] = 0; /*0x559b4d*/
          WideString::Reassign(&v44, WideCharStr); /*0x559b55*/
          SendMessageA(hWnd, 0x4A8u, v28 | 0x13B, (LPARAM)&lParam); /*0x559b6c*/
          v25 = v42; /*0x559b6e*/
          v24 = (LPARAM)hFindFilea; /*0x559b72*/
        }
        SendMessageA(hWnd, 0x19Au, v25, v24); /*0x559b7e*/
        v21 = j; /*0x559b80*/
        v2 = this; /*0x559b84*/
      }
      ++v21; /*0x559b8b*/
    }
    v31 = v2[1]; /*0x559b98*/
    if ( v31 == 1 ) /*0x559b9e*/
    {
      v32 = 0; /*0x559bb9*/
      v33 = *(this + 12); /*0x559bbb*/
      if ( v33 > 0 ) /*0x559bc0*/
      {
        v34 = *(this + 9); /*0x559bc2*/
        while ( !*(_BYTE *)(*(_DWORD *)v34 + 436) || *(_BYTE *)(*(_DWORD *)v34 + 437) ) /*0x559bd5*/
        {
          ++v32; /*0x559bd7*/
          v34 += 4; /*0x559bd8*/
          if ( v32 >= v33 ) /*0x559bdd*/
            goto LABEL_55; /*0x559bdd*/
        }
        SendMessageA(hWnd, 0x186u, v32, 0); /*0x559be9*/
        SendMessageA(hWnd, 0x197u, v32, 0); /*0x559bf3*/
      }
    }
    else if ( v31 > 1 && v31 <= 3 ) /*0x559ba5*/
    {
      SendMessageA(hWnd, 0x186u, 0, 0); /*0x559baf*/
      SendMessageA(hWnd, 0x197u, 0, 0); /*0x559bb3*/
    }
  }
LABEL_55:
  DeleteAndZero::Alt(&v45); /*0x559bf5*/
  DeleteAndZero::Alt(&v44); /*0x559c02*/
}


// ==== 0x00559C20  LoadOptions::Check  this=MapResourceClass  sig=csp ====
char __thiscall LoadOptions::Check(const char **this)
{
  char v2; // bl
  const char *v3; // eax
  int v4; // edi
  char FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
  _WORD v7[128]; // [esp+4Ch] [ebp-2FCh] BYREF
  char v8; // [esp+14Ch] [ebp-1FCh]
  int v9; // [esp+16Ch] [ebp-1DCh]
  int v10; // [esp+170h] [ebp-1D8h]
  __int16 v11; // [esp+174h] [ebp-1D4h]
  int v12; // [esp+1F4h] [ebp-154h]
  int v13; // [esp+1F8h] [ebp-150h]
  int v14; // [esp+1FCh] [ebp-14Ch]
  char v15; // [esp+200h] [ebp-148h]
  char v16; // [esp+201h] [ebp-147h]
  int v17; // [esp+204h] [ebp-144h]
  _WORD FindFileData[160]; // [esp+208h] [ebp-140h] BYREF

  v2 = 0; /*0x559c2f*/
  v3 = *(this + 2); /*0x559c31*/
  v9 = 0; /*0x559c34*/
  v10 = -1; /*0x559c42*/
  v12 = -1; /*0x559c4d*/
  v15 = 1; /*0x559c58*/
  v16 = 0; /*0x559c60*/
  v17 = 0; /*0x559c67*/
  v7[0] = 0; /*0x559c6e*/
  v8 = 0; /*0x559c73*/
  v11 = 0; /*0x559c7a*/
  v14 = 0; /*0x559c82*/
  v13 = 0; /*0x559c89*/
  sprintf(FileName, "*.%3s", v3); /*0x559c90*/
  v4 = ((int (__stdcall *)(char *, _WORD *))FindFirstFileA)(FileName, FindFileData); /*0x559cab*/
  if ( v4 != -1 ) /*0x559cb0*/
  {
    while ( (FindFileData[0] & 0x116) != 0 /*0x559cf7*/
         || !_strcmpi(&FindFileData[22], MultiByteStr)
         || (*((unsigned __int8 (__thiscall **)(const char **, _WORD *, _WORD *))*this + 4))(this, v7, FindFileData) != 1
         || v16 )
    {
      if ( !((int (__stdcall *)(int, _WORD *))FindNextFileA)(v4, FindFileData) ) /*0x559d0a*/
        goto LABEL_9; /*0x559d0a*/
    }
    v2 = 1; /*0x559d0e*/
  }
LABEL_9:
  ((void (__stdcall *)(int))FindClose)(v4); /*0x559d10*/
  return v2; /*0x559d17*/
}


// ==== 0x00559D30  sub_559D30  this=-  sig=ida-proto ====
int __cdecl sub_559D30(const void *a1, const void *a2)
{
  return -CompareFileTime((const FILETIME *)(*(_DWORD *)a1 + 428), (const FILETIME *)(*(_DWORD *)a2 + 428)); /*0x559d51*/
}


// ==== 0x00559D60  LoadOptionsClass::AddRef  this=LoadOptions  sig=csp ====
char __stdcall LoadOptions::_vt01(LPCCH lpMultiByteStr)
{
  int v1; // esi
  wchar_t *StringCSF; // eax
  HWND MessageBox; // edi
  char Saved; // bl

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]); /*0x559d81*/
  StringCSF = GetStringCSF(aTxtLoading, 0, MEMORY[0x829F5C], 1052); /*0x559d83*/
  MessageBox = CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    Dialog::Show(MessageBox); /*0x559da4*/
  MEMORY[0xA8ED5C] = 0; /*0x559dae*/
  MEMORY[0xA8E378] = 0; /*0x559db5*/
  WTFMode::Shutdown(MEMORY[0xA8B238]); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) < v1 ) /*0x559dd9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x559de3*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) > v1 ) /*0x559e02*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/
}


// ==== 0x00559E40  LoadOptionsClass::Release  this=LoadOptions  sig=csp ====
char __stdcall LoadOptions::Release(int lpMultiByteStr, #72 *Source)
{
  #72 *StringCSF; // eax
  int MessageBox; // esi
  char v4; // bl

  StringCSF = GetStringCSF((#72 *)aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107); /*0x559e55*/
  MessageBox = CreateMessageBox(StringCSF, 0, 0); /*0x559e69*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    Dialog::Show(MessageBox); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName(lpMultiByteStr, Source, 0); /*0x559e90*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    Dialog::Destroy(MessageBox); /*0x559e9d*/
  return v4; /*0x559ea4*/
}


// ==== 0x00559EB0  LoadOptionsClass::ddtor  this=LoadOptions  sig=csp ====
bool __stdcall LoadOptions::ddtor(int lpFileName)
{
  return ((int (__stdcall *)(int))DeleteFileA)(lpFileName) == 1; /*0x559ec1*/
}


// ==== 0x00559ED0  LoadOptionsClass::Read  this=LoadOptions  sig=csp ====
char __stdcall LoadOptions::_vt04(wchar_t *Destination, int a2)
{
  const CHAR *v2; // edi
  char v3; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *v6; // eax
  _DWORD v8[253]; // [esp+Ch] [ebp-3F4h] BYREF

  if ( !Destination && !a2 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = (const CHAR *)(a2 + 44); /*0x559eff*/
  if ( !_strcmpi((const void *)(a2 + 44), MultiByteStr) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset(v8); /*0x559f17*/
  v3 = LoadOptions_Load(v2, (int)v8); /*0x559f27*/
  if ( !v3 ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3(v8) == MEMORY[0x83D560] ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8); /*0x559f60*/
    wcscpy(Destination, v5); /*0x559f67*/
    *((_BYTE *)Destination + 437) = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)v8); /*0x559f48*/
    wcscpy(Destination, v4); /*0x559f4f*/
    *((_BYTE *)Destination + 437) = 1; /*0x559f57*/
  }
  *((_BYTE *)Destination + 436) = v3; /*0x559f7b*/
  *((_DWORD *)Destination + 72) = LoadOptions::GetFlag99(v8); /*0x559f8a*/
  *((_DWORD *)Destination + 106) = LoadOptions::GetFlag98(v8); /*0x559f99*/
  *((_DWORD *)Destination + 110) = LoadOptions::GetFlag252(v8); /*0x559fa4*/
  strcpy((char *)Destination + 256, v2); /*0x559fc4*/
  v6 = LoadOptions::GetData((char *)v8); /*0x559fd1*/
  wcscpy(Destination + 148, (const wchar_t *)v6); /*0x559fde*/
  if ( !strlen((const char *)Destination + 256) ) /*0x559fed*/
    strcpy((char *)Destination + 256, (const char *)(a2 + 304)); /*0x55a013*/
  *((_DWORD *)Destination + 108) = *(_DWORD *)(a2 + 24); /*0x55a020*/
  *((_DWORD *)Destination + 107) = *(_DWORD *)(a2 + 20); /*0x55a029*/
  return 1; /*0x55a02f*/
}


// ==== 0x0055A050  LoadOptionsClass::Write  this=LoadOptions  sig=csp ====
#72 *LoadOptions::_vt05()
{
  return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216); /*0x55a066*/
}


// ==== 0x0055A070  LoadOptionsClass::Seek  this=LoadOptions  sig=csp ====
#72 *LoadOptions::_vt06()
{
  return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222); /*0x55a086*/
}


// ==== 0x0055A090  LoadOptionsClass::Open  this=LoadOptions  sig=csp ====
#72 *LoadOptions::_vt07()
{
  return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228); /*0x55a0a6*/
}


// ==== 0x0055A0B0  LoadOptionsClass::Close  this=LoadOptions  sig=csp ====
#72 *LoadOptions::_vt08()
{
  return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234); /*0x55a0c6*/
}


// ==== 0x0055A0D0  LoadOptionsClass::QueryInterface  this=LoadOptions  sig=csp ====
char *__thiscall LoadOptions::_vt00(char *Block, char a2)
{
  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( *(_DWORD *)Block = &LoadOptionsClass::`vftable'; v3 < *((_DWORD *)Block + 12); ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)Block + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)Block + 8) + 12))(Block + 32); /*0x55a102*/
  v4 = (void *)*((_DWORD *)Block + 9); /*0x55a105*/
  *((_DWORD *)Block + 8) = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a108*/
  if ( v4 && *(Block + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((_DWORD *)Block + 9) = 0; /*0x55a122*/
  }
  *(Block + 45) = 0; /*0x55a12d*/
  *((_DWORD *)Block + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(Block); /*0x55a13d*/
  return Block; /*0x55a147*/
}


// ==== 0x0055A150  _DynamicVectorClass_PAVFileEntryClass::vt03  this=DynamicVector  sig=csp ====
void __thiscall LoadOptions::vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x55a156*/
  *(_DWORD *)(this + 16) = 0; /*0x55a159*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x55a160*/
  {
    __3_YAXPAX_Z(v2); /*0x55a166*/
    *(_DWORD *)(this + 4) = 0; /*0x55a16e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55a171*/
  *(_DWORD *)(this + 8) = 0; /*0x55a174*/
}


// ==== 0x0055A180  _DynamicVectorClass_PAVFileEntryClass::vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall LoadOptions::vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x55a180*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/
}


// ==== 0x0055A1A0  _VectorClass_PAVFileEntryClass::vt06  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x55a1aa*/
}


// ==== 0x0055A1B0  _VectorClass_PAVFileEntryClass::vt01  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = *(this + 2); /*0x55a1b2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( v2 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = (_DWORD *)*(this + 1); /*0x55a1c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55a1cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= v2 ) /*0x55a1dc*/
        return 1; /*0x55a1dc*/
    }
  }
  return 0; /*0x55a1de*/
}


// ==== 0x0055A1F0  _VectorClass_PAVFileEntryClass::CopyItems  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::CopyItems(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x55a1fc*/
  {
    *((_BYTE *)this + 12) = 0; /*0x55a206*/
    if ( a3 ) /*0x55a20c*/
      v4 = a3; /*0x55a222*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a21e*/
    *((_BYTE *)this + 12) = 1; /*0x55a226*/
    if ( v4 ) /*0x55a22a*/
    {
      if ( this->Items ) /*0x55a235*/
      {
        v6 = this->Capacity; /*0x55a23c*/
        if ( a2 < v6 ) /*0x55a241*/
          v6 = a2; /*0x55a243*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x55a249*/
          ++i; /*0x55a24e*/
        if ( *((_BYTE *)this + 13) ) /*0x55a25b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x55a266*/
          this->Items = 0; /*0x55a26e*/
        }
      }
      this->Items = v4; /*0x55a277*/
      this->Capacity = a2; /*0x55a27f*/
      *((_BYTE *)this + 13) = a3 == 0; /*0x55a282*/
      return 1; /*0x55a288*/
    }
    else
    {
      return 0; /*0x55a22f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this); /*0x55a292*/
    return 1; /*0x55a298*/
  }
}


// ==== 0x0055A2A0  _VectorClass_PAVFileEntryClass::ClearBuffer  this=VectorClass  sig=csp ====
void __thiscall LoadOptions::sub_55A2A0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x55a2ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x55a2b3*/
    *(_DWORD *)(this + 4) = 0; /*0x55a2bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x55a2be*/
  *(_DWORD *)(this + 8) = 0; /*0x55a2c1*/
}


// ==== 0x0055A2D0  _VectorClass_PAVFileEntryClass::FindItem  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::sub_55A2D0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x55a2d0*/
    return 0; /*0x55a2d8*/
  v3 = *(_DWORD *)(this + 8); /*0x55a2de*/
  result = 0; /*0x55a2e1*/
  if ( v3 <= 0 ) /*0x55a2e5*/
    return -1; /*0x55a2fc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x55a2eb*/
  {
    if ( ++result >= v3 ) /*0x55a2fa*/
      return -1; /*0x55a2fa*/
  }
  return result; /*0x55a2da*/
}


// ==== 0x0055A310  _VectorClass_PAVFileEntryClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall LoadOptions::sub_55A310(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x55a310*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x55a325*/
  else
    return 0; /*0x55a317*/
}


// ==== 0x0055A330  _DynamicVectorClass_PAVFileEntryClass::vt02  this=DynamicVector  sig=csp ====
char __thiscall LoadOptions::vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    *((_BYTE *)this + 12) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    *((_BYTE *)this + 12) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( this->q004 ) /*0x55a368*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x55a36f*/
      if ( a2 < v5 ) /*0x55a374*/
        v5 = a2; /*0x55a376*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->q004 + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( *((_BYTE *)this + 13) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x55a399*/
        this->q004 = 0; /*0x55a3a1*/
      }
    }
    this->q004 = v4; /*0x55a3aa*/
    this->DynamicVector_field_0x8 = a2; /*0x55a3b2*/
    *((_BYTE *)this + 13) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->__pad_00C)(this); /*0x55a3be*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x55a3c1*/
  if ( v7 < this->DynamicVector_field_0x10 ) /*0x55a3c9*/
    this->DynamicVector_field_0x10 = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/
}


// ==== 0x0055A3E0  _DynamicVectorClass_PAVFileEntryClass::vt04  this=DynamicVector  sig=csp ====
int __thiscall LoadOptions::vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q004; /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( v2 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = (_DWORD *)*(this + 1); *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= v2 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/
}


// ==== 0x0055A410  _VectorClass_PAVFileEntryClass::Constructor_VectorClass_FileEntryClass___  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadOptions::sub_55A410(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x55a413*/
  *Block = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a416*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x55a420*/
  {
    __3_YAXPAX_Z(v3); /*0x55a428*/
    *(Block + 1) = 0; /*0x55a430*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55a43b*/
  *(Block + 2) = 0; /*0x55a441*/
  if ( (a2 & 1) != 0 ) /*0x55a448*/
    __3_YAXPAX_Z(Block); /*0x55a44b*/
  return Block; /*0x55a455*/
}


// ==== 0x0055A460  _DynamicVectorClass_PAVFileEntryClass::vt00  this=DynamicVector  sig=csp ====
_DWORD *__thiscall LoadOptions::vt00(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x55a463*/
  *Block = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a466*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x55a470*/
  {
    __3_YAXPAX_Z(v3); /*0x55a478*/
    *(Block + 1) = 0; /*0x55a480*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x55a48b*/
  *(Block + 2) = 0; /*0x55a491*/
  if ( (a2 & 1) != 0 ) /*0x55a498*/
    __3_YAXPAX_Z(Block); /*0x55a49b*/
  return Block; /*0x55a4a5*/
}


// ==== 0x0055A4B0  sub_55A4B0  this=-  sig=ida-proto ====
int sub_55A4B0()
{
  dword_ABCC48 = 0; /*0x55a4b2*/
  dword_ABCC4C = 0; /*0x55a4b7*/
  dword_ABCC50 = 0; /*0x55a4bc*/
  dword_ABCC54 = 0; /*0x55a4c1*/
  return 0; /*0x55a4c6*/
}


// ==== 0x0055A4D0  sub_55A4D0  this=-  sig=ida-proto ====
void sub_55A4D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55a4dc*/
  dbl_ABCC60 = Math::Sqrt(v0 + v0); /*0x55a4ee*/
}


// ==== 0x0055A500  sub_55A500  this=-  sig=ida-proto ====
void sub_55A500()
{
  dbl_ABCCB0 = dbl_ABCC60 / 60.0; /*0x55a50c*/
}


// ==== 0x0055A520  sub_55A520  this=-  sig=ida-proto ====
void sub_55A520()
{
  dbl_ABCC98 = 1.0 / dbl_ABCCB0; /*0x55a52c*/
}


// ==== 0x0055A540  sub_55A540  this=-  sig=ida-proto ====
void sub_55A540()
{
  dbl_ABCC90 = 0.0174532925199433 * 45.0; /*0x55a54c*/
}


// ==== 0x0055A560  sub_55A560  this=-  sig=ida-proto ====
void sub_55A560()
{
  dbl_ABCC68 = 0.0174532925199433 * 60.0; /*0x55a56c*/
}


// ==== 0x0055A580  sub_55A580  this=-  sig=ida-proto ====
void sub_55A580()
{
  dbl_ABCC40 = 0.0174532925199433 * 90.0; /*0x55a58c*/
}


// ==== 0x0055A5A0  sub_55A5A0  this=-  sig=ida-proto ====
__int64 sub_55A5A0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCC40 - dbl_ABCC68); /*0x55a5b2*/
  result = Math::RoundToInt(v0 * dbl_ABCC60 * 0.5); /*0x55a5c6*/
  dword_ABCCB8 = result; /*0x55a5cb*/
  return result; /*0x55a5d0*/
}


// ==== 0x0055A5E0  sub_55A5E0  this=-  sig=ida-proto ====
void sub_55A5E0()
{
  dbl_ABCC70 = Math::ArcTan((double)dword_ABCCB8 * 0.00390625); /*0x55a5f7*/
}


// ==== 0x0055A610  sub_55A610  this=-  sig=ida-proto ====
void sub_55A610()
{
  dbl_ABCC88 = Math::ArcTan((double)(2 * dword_ABCCB8) / dbl_ABCC60); /*0x55a632*/
}


// ==== 0x0055A640  sub_55A640  this=-  sig=ida-proto ====
__int64 sub_55A640()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCCB8) + 0.5); /*0x55a65b*/
  dword_ABCCAC = result; /*0x55a660*/
  return result; /*0x55a666*/
}


// ==== 0x0055A670  sub_55A670  this=-  sig=ida-proto ====
int sub_55A670()
{
  word_ABCC58 = 0; /*0x55a672*/
  word_ABCC5A = 0; /*0x55a678*/
  return 0; /*0x55a67e*/
}


// ==== 0x0055A680  sub_55A680  this=-  sig=ida-proto ====
int sub_55A680()
{
  dword_ABCC78 = 0; /*0x55a682*/
  dword_ABCC7C = 0; /*0x55a687*/
  dword_ABCC80 = 0; /*0x55a68c*/
  return 0; /*0x55a691*/
}


// ==== 0x0055A6A0  sub_55A6A0  this=-  sig=ida-proto ====
int sub_55A6A0()
{
  dword_ABCCA8 = 0; /*0x55a6a5*/
  dword_ABCCA0 = 128; /*0x55a6af*/
  dword_ABCCA4 = 128; /*0x55a6b4*/
  return 128; /*0x55a6b9*/
}


// ==== 0x0055A6C0  LocomotionClass::Init  this=LocomotionClass  sig=csp ====
_DWORD *__thiscall LocomotionClass_Init(_DWORD *this)
{
  this->Owner = 0; /*0x55a6c6*/
  this->LinkedTo = 0; /*0x55a6c9*/
  *((_BYTE *)this + 16) = 1; /*0x55a6cc*/
  *((_BYTE *)this + 17) = 1; /*0x55a6cf*/
  this->RefCount = 0; /*0x55a6d2*/
  *this = &LocomotionClass::`vftable'; /*0x55a6d5*/
  this->vtable2 = &vt_LocomotionClass; /*0x55a6db*/
  return this; /*0x55a6e2*/
}


// ==== 0x0055A6F0  LocomotionClass::Construct  this=LocomotionClass  sig=csp ====
void __thiscall LocomotionClass_Constructor(_DWORD *this)
{
  *this = &LocomotionClass::`vftable'; /*0x55a6f0*/
  this->vtable2 = &vt_LocomotionClass; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/
}


// ==== 0x0055A710  LocomotionClass::ResetPosition  this=LocomotionClass  sig=csp ====
int __stdcall StreamClass::ResetPosition(LocomotionClass *aP0, int a2)
{
  aP0->Owner = (void *)a2; /*0x55a718*/
  *(_DWORD *)&aP0->__pad_0[4] = a2; /*0x55a71b*/
  return 0; /*0x55a720*/
}


// ==== 0x0055A730  LocomotionClass::GetTransform  this=LocomotionClass  sig=csp ====
float *__stdcall Turret_GetTransform(signed int a1, float *a2, _DWORD *a3)
{
  signed int v3; // edi
  _DWORD *v4; // esi
  float *result; // eax
  float v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h] BYREF
  float v8[12]; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(v8); /*0x55a739*/
  v3 = a1; /*0x55a73e*/
  a1 = (((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) & 0x1F) /*0x55a763*/
     - 8;
  v6 = (double)a1 * -0.1963495408493621; /*0x55a776*/
  Matrix2D::Rotate(v8, v6); /*0x55a779*/
  v4 = a3; /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(v3 + 8) + 904), &a1) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
  }
  result = a2; /*0x55a7b6*/
  qmemcpy(a2, v8, 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/
}


// ==== 0x0055A7D0  IUnknown::ComputeRotation  this=IUnknown  sig=csp ====
float *__stdcall Audio3D_ComputeRotation(int a1, float *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int v4; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  v3 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 156); /*0x55a7de*/
  v8[0] = *v3; /*0x55a7e5*/
  v8[1] = v3[1]; /*0x55a7f1*/
  v8[2] = v3[2]; /*0x55a7fd*/
  v4 = *((unsigned __int8 *)Coord::To_Cell(&MEMORY[0x87F7E8], v8) + 284); /*0x55a812*/
  qmemcpy(v9, CopyAudioData(v10, v4), sizeof(v9)); /*0x55a828*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) /*0x55a85a*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x55a85d*/
  if ( a3 && *a3 != -1 ) /*0x55a872*/
  {
    *a3 = 32 * (v4 + (*a3 << 6)); /*0x55a880*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(a1 + 8) + 904), &v7) >> 10) + 1) >> 1) & 0x1F; /*0x55a8a0*/
  }
  qmemcpy(a2, v9, 0x30u); /*0x55a8b4*/
  return a2; /*0x55a8b6*/
}


// ==== 0x0055A8C0  IUnknown::ComputeScreenYOffset  this=IUnknown  sig=csp ====
_DWORD *__stdcall ObjectClass::ComputeScreenYOffset(BuildingTypeClass *aP0, _DWORD *a1)
{
  IUnknown *v2; // eax
  BuildingTypeClass *v3; // ecx

  v2 = (IUnknown *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)&aP0->vtable0[8] + 456))(*(_DWORD *)&aP0->vtable0[8]); /*0x55a8cc*/
  v3 = (BuildingTypeClass *)ZCoordToScreenY(v2); /*0x55a8d9*/
  *a1 = 0; /*0x55a8df*/
  a1[1] = v3; /*0x55a8e1*/
  return a1; /*0x55a8e4*/
}


// ==== 0x0055A8F0  IUnknown::SetDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass_SetDirty(_BYTE *a1)
{
  a1[12] = 1; /*0x55a8f5*/
  return (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1); /*0x55a8fe*/
}


// ==== 0x0055A910  IUnknown::ClearDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass_ClearDirty(_BYTE *a1)
{
  a1[12] = 0; /*0x55a915*/
  return (*(int (__stdcall **)(_BYTE *))(*(_DWORD *)a1 + 96))(a1); /*0x55a91e*/
}


// ==== 0x0055A930  IUnknown::GetDirty  this=IUnknown  sig=csp ====
char __stdcall StreamClass_GetDirty(int a1)
{
  return *(_BYTE *)(a1 + 12); /*0x55a937*/
}


// ==== 0x0055A940  IUnknown::MissionStub  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::_vt25(int a1)
{
  return 0; /*0x55a942*/
}


// ==== 0x0055A950  LocomotionClass::AddRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM_AddRef(int a1)
{
  ++g_BulletClassPool; /*0x55a95f*/
  return InterlockedIncrement((volatile LONG *)(a1 + 20)); /*0x55a96b*/
}


// ==== 0x0055A970  LocomotionClass::ReleaseRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM_ReleaseRef(volatile LONG *a1)
{
  LONG v1; // esi

  --g_BulletClassPool; /*0x55a980*/
  v1 = InterlockedDecrement(a1 + 5); /*0x55a98d*/
  if ( !v1 && a1 ) /*0x55a995*/
    (*(void (__thiscall **)(volatile LONG *, int))(*a1 + 32))(a1, 1); /*0x55a99d*/
  return v1; /*0x55a9a2*/
}


// ==== 0x0055A9B0  LocomotionClass::QueryInterface  this=LocomotionClass  sig=csp ====
int __stdcall LocomotionClass_QueryInterface(int a1, const void *a2, _DWORD *a3)
{
  int v4; // ecx
  int v5; // ecx

  if ( !a3 ) /*0x55a9b6*/
    return -2147467261; /*0x55a9b8*/
  *a3 = 0; /*0x55a9d9*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x55a9df*/
  {
    if ( a1 ) /*0x55a9e5*/
      v4 = a1 + 4; /*0x55a9e7*/
    else
      v4 = 0; /*0x55a9ec*/
    *a3 = v4; /*0x55a9ee*/
  }
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
    *a3 = a1; /*0x55aa03*/
  if ( !memcmp(a2, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
  {
    if ( a1 ) /*0x55aa1a*/
      v5 = a1 + 4; /*0x55aa1c*/
    else
      v5 = 0; /*0x55aa21*/
    *a3 = v5; /*0x55aa23*/
  }
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x55aa33*/
    *a3 = a1; /*0x55aa3a*/
  if ( !*a3 ) /*0x55aa3c*/
    return -2147467262; /*0x55aa41*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x55aa4c*/
  return 0; /*0x55a9bd*/
}


// ==== 0x0055AA60  LocomotionClass::LoadIPersistStream  this=LocomotionClass  sig=csp ====
int __stdcall IPersistStream_Load(int *a1, int *a2, int a3)
{
  int *v3; // esi
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int *v8; // [esp-4h] [ebp-18h]

  v3 = a2; /*0x55aa61*/
  if ( !a2 ) /*0x55aa68*/
    return -2147467261; /*0x55aa6b*/
  v5 = *a2; /*0x55aa78*/
  v8 = a2; /*0x55aa83*/
  a2 = a1; /*0x55aa84*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x55aa88*/
  if ( result >= 0 ) /*0x55aa8d*/
  {
    v6 = *v3; /*0x55aa92*/
    v7 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 36))(a1, 0); /*0x55aa98*/
    result = (*(int (__stdcall **)(int *, int *, int))(v6 + 16))(v3, a1, v7); /*0x55aa9e*/
    if ( result >= 0 ) /*0x55aaa4*/
    {
      if ( a3 ) /*0x55aaac*/
        *((_BYTE *)a1 + 17) = 0; /*0x55aaae*/
    }
  }
  return result; /*0x55aa6a*/
}


// ==== 0x0055AAC0  SwizzleManager::SaveLoad  this=unknown  sig=csp ====
int __stdcall SwizzleManager_SaveLoad(int *a1, int *a2)
{
  int *v2; // edi
  int result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // edi

  v2 = a2; /*0x55aac1*/
  if ( !a2 ) /*0x55aac7*/
    return -2147467261; /*0x55aac9*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(*a2 + 12))(a2, &a2, 4, 0); /*0x55aade*/
  if ( result >= 0 ) /*0x55aae3*/
  {
    SwizzleManagerClass::Here_I_Am(&MEMORY[0xB0C110], a2, a1); /*0x55aaf7*/
    v4 = a1[5]; /*0x55aafe*/
    v5 = *v2; /*0x55ab01*/
    v6 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 36))(a1, 0); /*0x55ab07*/
    v7 = (*(int (__stdcall **)(int *, int *, int))(v5 + 12))(v2, a1, v6); /*0x55ab13*/
    a1[5] = v4; /*0x55ab1b*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 3); /*0x55ab1e*/
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 2); /*0x55ab2c*/
    return v7; /*0x55ab33*/
  }
  return result; /*0x55aace*/
}


// ==== 0x0055AB40  IUnknown::GetStringValue  this=IUnknown  sig=csp ====
int __stdcall COMObject_GetStringValue(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x55ab47*/
    return -2147467261; /*0x55ab49*/
  *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) + 4; /*0x55ab5e*/
  a2[1] = 0; /*0x55ab60*/
  return 0; /*0x55ab4e*/
}


// ==== 0x0055AB70  IUnknown::MissionStub2  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::_vt26(int a1, int a2)
{
  return 0; /*0x55ab72*/
}


// ==== 0x0055AB80  IUnknown::MissionStub3  this=IUnknown  sig=csp ====
char __stdcall NullStub_RetZero_Stdcall(int a1, int a2)
{
  return 0; /*0x55ab82*/
}


// ==== 0x0055AB90  IUnknown::Stub10  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub10(int a1)
{
  ; /*0x55ab90*/
}


// ==== 0x0055ABA0  LocomotionClass::StubReturnFalse  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt14(int a1)
{
  return 0; /*0x55aba2*/
}


// ==== 0x0055ABB0  LocomotionClass::CheckState  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState(TunnelLocomotionClass *aP0)
{
  return 2; /*0x55abb5*/
}


// ==== 0x0055ABC0  IUnknown::CheckState2  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt13(int a1, int a2)
{
  return 0; /*0x55abc2*/
}


// ==== 0x0055ABD0  IUnknown::ReturnZeroPos  this=IUnknown  sig=csp ====
_DWORD *__stdcall COMObject_ReturnZeroPos(int a1, _DWORD *a2)
{
  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/
}


// ==== 0x0055ABE0  LocomotionClass::MissionStub4  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::_vt8(int a1)
{
  return 1; /*0x55abe2*/
}


// ==== 0x0055ABF0  LocomotionClass::MissionStub5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt7(int a1, int a2)
{
  return 0; /*0x55abf2*/
}


// ==== 0x0055AC00  IUnknown::Stub11  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub11(int a1, int a2, int a3, int a4)
{
  ; /*0x55ac00*/
}


// ==== 0x0055AC10  LocomotionClass::Stub12  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub12(int a1, int a2, int a3, int a4, int a5)
{
  ; /*0x55ac10*/
}


// ==== 0x0055AC20  LocomotionClass::Stub13  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub13(int a1)
{
  ; /*0x55ac20*/
}


// ==== 0x0055AC30  LocomotionClass::Stub14  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub14(int a1, int a2)
{
  ; /*0x55ac30*/
}


// ==== 0x0055AC40  LocomotionClass::nullsub_164  this=LocomotionClass  sig=csp ====
void __stdcall nullsub_164(int a1)
{
  ; /*0x55ac40*/
}


// ==== 0x0055AC50  JumpjetLocomotionClass::Stub15  this=JumpjetLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub15(int a1, int a2, int a3, int a4)
{
  ; /*0x55ac50*/
}


// ==== 0x0055AC60  JumpjetLocomotionClass::StubReturnTrue_3  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_55AC60(int a1)
{
  return 1; /*0x55ac62*/
}


// ==== 0x0055AC70  JumpjetLocomotionClass::GetGlobalCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_55AC70(int a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi

  v3 = dword_ABCC7C; /*0x55ac7a*/
  v4 = dword_ABCC80; /*0x55ac81*/
  *a2 = dword_ABCC78; /*0x55ac8a*/
  a2[1] = v3; /*0x55ac8c*/
  a2[2] = v4; /*0x55ac8f*/
  return a2; /*0x55ac92*/
}


// ==== 0x0055ACA0  LocomotionClass::GetCoord3D  this=LocomotionClass  sig=csp ====
_DWORD *__stdcall COMObject_GetCoord3D(int a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = *(_DWORD **)(a1 + 8); /*0x55aca6*/
  v3 = v2[40]; /*0x55acb3*/
  v4 = v2[41]; /*0x55acb6*/
  *a2 = v2[39]; /*0x55acbf*/
  a2[1] = v3; /*0x55acc1*/
  a2[2] = v4; /*0x55acc4*/
  return a2; /*0x55acc7*/
}


// ==== 0x0055ACD0  JumpjetLocomotionClass::StubReturnZero_11  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_55ACD0(int a1)
{
  return 0; /*0x55acd2*/
}


// ==== 0x0055ACE0  LocomotionClass::Stub16  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub16(int a1, int a2)
{
  ; /*0x55ace0*/
}


// ==== 0x0055ACF0  LocomotionClass::MissionStub10  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt34(int a1)
{
  return 0; /*0x55acf2*/
}


// ==== 0x0055AD00  IUnknown::MissionStub11  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt35(int a1)
{
  return 0; /*0x55ad02*/
}


// ==== 0x0055AD10  IUnknown::GetSpecialValue  this=IUnknown  sig=csp ====
int __stdcall COMObject_GetSpecialValue(int a1)
{
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 1336))(*(_DWORD *)(a1 + 8)); /*0x55ad1f*/
}


// ==== 0x0055AD30  sub_55AD30  this=-  sig=ida-proto ====
int sub_55AD30()
{
  dword_ABCCC8 = 0; /*0x55ad32*/
  dword_ABCCCC = 0; /*0x55ad37*/
  dword_ABCCD0 = 0; /*0x55ad3c*/
  dword_ABCCD4 = 0; /*0x55ad41*/
  return 0; /*0x55ad46*/
}


// ==== 0x0055AD50  sub_55AD50  this=-  sig=ida-proto ====
void sub_55AD50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ad5c*/
  dbl_ABCCE0 = Math::Sqrt(v0 + v0); /*0x55ad6e*/
}


// ==== 0x0055AD80  sub_55AD80  this=-  sig=ida-proto ====
void sub_55AD80()
{
  dbl_ABCD30 = dbl_ABCCE0 / 60.0; /*0x55ad8c*/
}


// ==== 0x0055ADA0  sub_55ADA0  this=-  sig=ida-proto ====
void sub_55ADA0()
{
  dbl_ABCD18 = 1.0 / dbl_ABCD30; /*0x55adac*/
}


// ==== 0x0055ADC0  sub_55ADC0  this=-  sig=ida-proto ====
void sub_55ADC0()
{
  dbl_ABCD10 = 0.0174532925199433 * 45.0; /*0x55adcc*/
}


// ==== 0x0055ADE0  sub_55ADE0  this=-  sig=ida-proto ====
void sub_55ADE0()
{
  dbl_ABCCE8 = 0.0174532925199433 * 60.0; /*0x55adec*/
}


// ==== 0x0055AE00  sub_55AE00  this=-  sig=ida-proto ====
void sub_55AE00()
{
  dbl_ABCCC0 = 0.0174532925199433 * 90.0; /*0x55ae0c*/
}


// ==== 0x0055AE20  sub_55AE20  this=-  sig=ida-proto ====
__int64 sub_55AE20()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCCC0 - dbl_ABCCE8); /*0x55ae32*/
  result = Math::RoundToInt(v0 * dbl_ABCCE0 * 0.5); /*0x55ae46*/
  dword_ABCD38 = result; /*0x55ae4b*/
  return result; /*0x55ae50*/
}


// ==== 0x0055AE60  sub_55AE60  this=-  sig=ida-proto ====
void sub_55AE60()
{
  dbl_ABCCF0 = Math::ArcTan((double)dword_ABCD38 * 0.00390625); /*0x55ae77*/
}


// ==== 0x0055AE90  sub_55AE90  this=-  sig=ida-proto ====
void sub_55AE90()
{
  dbl_ABCD08 = Math::ArcTan((double)(2 * dword_ABCD38) / dbl_ABCCE0); /*0x55aeb2*/
}


// ==== 0x0055AEC0  sub_55AEC0  this=-  sig=ida-proto ====
__int64 sub_55AEC0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCD38) + 0.5); /*0x55aedb*/
  dword_ABCD2C = result; /*0x55aee0*/
  return result; /*0x55aee6*/
}


// ==== 0x0055AEF0  sub_55AEF0  this=-  sig=ida-proto ====
int sub_55AEF0()
{
  dword_ABCCD8 = 0; /*0x55aef2*/
  return 0; /*0x55aefe*/
}


// ==== 0x0055AF00  sub_55AF00  this=-  sig=ida-proto ====
int sub_55AF00()
{
  dword_ABCCF8 = 0; /*0x55af02*/
  dword_ABCCFC = 0; /*0x55af07*/
  dword_ABCD00 = 0; /*0x55af0c*/
  return 0; /*0x55af11*/
}


// ==== 0x0055AF20  sub_55AF20  this=-  sig=ida-proto ====
int sub_55AF20()
{
  dword_ABCD28 = 0; /*0x55af25*/
  dword_ABCD20 = 128; /*0x55af2f*/
  dword_ABCD24 = 128; /*0x55af34*/
  return 128; /*0x55af39*/
}


// ==== 0x0055AF40  RadarClass::SetGlobal  this=ObjectClass  sig=csp ====
void __thiscall RadarClass_SetGlobal(void *this)
{
  dword_829FF4 = (int)this; /*0x55af40*/
}


// ==== 0x0055AF50  ObjectClass::Map_Init  this=VOID_PTR  sig=csp ====
void __thiscall sub_55AF50(void *this)
{
  dword_829FF8 = (int)this; /*0x55af50*/
}


// ==== 0x0055AF60  PingPongBuffer::GetWriteOffset  this=unknown  sig=csp ====
ObjectClass *PingPongBuffer::GetWriteOffset()
{
  ObjectClass *result; // eax

  if ( byte_ABCD50 ) /*0x55af67*/
  {
    result = (ObjectClass *)((char *)dword_829FF4 + dword_829FF8); /*0x55af7a*/
    if ( dword_ABCD44 >= (CampaignScore *)&dword_829FF4->__pad_0[dword_829FF8] ) /*0x55af7e*/
    {
      byte_ABCD50 = 0; /*0x55af80*/
      return dword_829FF4; /*0x55af87*/
    }
  }
  else
  {
    result = dword_829FF4; /*0x55af8a*/
    if ( dword_ABCD44 < (CampaignScore *)dword_829FF4 ) /*0x55af97*/
    {
      byte_ABCD50 = 1; /*0x55af9f*/
      return (ObjectClass *)((char *)dword_829FF4 + dword_829FF8); /*0x55afa6*/
    }
  }
  return result; /*0x55af89*/
}


// ==== 0x0055AFB0  Scenario::Update  this=LogicClass  sig=csp ====
void __thiscall Scenario_Update(_DWORD *this)
{
  int v1; // eax
  char *v2; // edi
  void **v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edx
  char *v8; // ecx
  char *v9; // eax
  int v10; // eax
  char *v11; // ebp
  int v12; // eax
  double *v13; // ebx
  _DWORD *v14; // ebp
  int v15; // edi
  int v16; // edx
  int v17; // eax
  int *v18; // esi
  __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // edi
  int v28; // edx
  char *v29; // ecx
  int v30; // eax
  wchar_t *v31; // esi
  int v32; // eax
  int v33; // ecx
  char *v34; // edx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  _DWORD *v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int v47; // edx
  int k; // esi
  int m; // esi
  int v50; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v54; // ecx
  int *v55; // eax
  int v57; // [esp+14h] [ebp-24h] BYREF
  int v58; // [esp+18h] [ebp-20h]
  int v59; // [esp+1Ch] [ebp-1Ch]
  void **v60; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v62; // [esp+28h] [ebp-10h]
  char v63; // [esp+2Dh] [ebp-Bh]
  int v64; // [esp+30h] [ebp-8h]
  int v65; // [esp+34h] [ebp-4h]

  v1 = 0; /*0x55afc7*/
  v2 = (char *)MEMORY[0xA8B230]; /*0x55afcd*/
  ++dword_ABCD40; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( MEMORY[0x8B40D8] > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (void **)*((_DWORD *)MEMORY[0x8B40CC] + v1); /*0x55afec*/
      if ( v2[13502] ) /*0x55afef*/
      {
        if ( TeamClass::Update_0(v3, 50, 0, dword_ABCCD8, 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = (char *)MEMORY[0xA8B230]; /*0x55b017*/
      }
      if ( v2[13482] ) /*0x55b01d*/
      {
        if ( TeamClass::Update_0(v3, 27, 0, dword_ABCCD8, 0, 0) /*0x55b090*/
          || TeamClass::Update_0(v3, 28, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 36, 0, dword_ABCCD8, 0, 0)
          || TeamClass::Update_0(v3, 37, 0, dword_ABCCD8, 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = (char *)MEMORY[0xA8B230]; /*0x55b09d*/
      }
      if ( v2[13483] /*0x55b10f*/
        && (TeamClass::Update_0(v3, 45, 0, dword_ABCCD8, 0, 0) || TeamClass::Update_0(v3, 46, 0, dword_ABCCD8, 0, 0))
        || TeamClass::Update_0(v3, 13, 0, dword_ABCCD8, 0, 0)
        || TeamClass::Update_0(v3, 51, 0, dword_ABCCD8, 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = (char *)MEMORY[0xA8B230]; /*0x55b118*/
      if ( *((_DWORD *)MEMORY[0xA8B230] + 1146) != -1 ) /*0x55b124*/
      {
        v4 = *((_DWORD *)MEMORY[0xA8B230] + 1146); /*0x55b126*/
        v5 = *((_DWORD *)MEMORY[0xA8B230] + 1148); /*0x55b12c*/
        if ( v4 != -1 ) /*0x55b134*/
        {
          if ( (int)MEMORY[0xA8ED84] - v4 >= v5 ) /*0x55b140*/
            break; /*0x55b140*/
          v5 -= (int)MEMORY[0xA8ED84] - v4; /*0x55b142*/
        }
        if ( !v5 ) /*0x55b146*/
          break; /*0x55b146*/
      }
LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= MEMORY[0x8B40D8] ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    TeamClass::Update_0(v3, 14, 0, dword_ABCCD8, 0, 0); /*0x55b148*/
LABEL_22:
    v2 = (char *)MEMORY[0xA8B230]; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
LABEL_24:
  v6 = *((_DWORD *)v2 + 1146); /*0x55b17d*/
  v7 = v2 + 4584; /*0x55b183*/
  if ( v6 != -1 ) /*0x55b18b*/
  {
    v8 = (char *)*((_DWORD *)v2 + 1148); /*0x55b18d*/
    v9 = (char *)MEMORY[0xA8ED84] - v6; /*0x55b19e*/
    if ( (int)MEMORY[0xA8ED84] - *((_DWORD *)v2 + 1146) >= (int)v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *v7 != -1 ) /*0x55b1ae*/
      {
        v10 = *((_DWORD *)v2 + 1148); /*0x55b1b0*/
        v11 = (char *)MEMORY[0xA8ED84] - *v7; /*0x55b1b3*/
        if ( (int)v11 >= v10 ) /*0x55b1b9*/
          v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - (_DWORD)v11; /*0x55b1bb*/
        *((_DWORD *)v2 + 1148) = v12; /*0x55b1c1*/
        *v7 = -1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x55b1cd*/
      v2 = (char *)MEMORY[0xA8B230]; /*0x55b1d2*/
    }
  }
  v2[13482] = 0; /*0x55b1d8*/
  *((_BYTE *)MEMORY[0xA8B230] + 13481) = 0; /*0x55b1e4*/
  *((_BYTE *)MEMORY[0xA8B230] + 13483) = 0; /*0x55b1f1*/
  *((_BYTE *)MEMORY[0xA8B230] + 13502) = 0; /*0x55b1fe*/
  v13 = (double *)MEMORY[0x8871E0]; /*0x55b205*/
  if ( !*((_BYTE *)MEMORY[0x8871E0] + 6128) || *((double *)MEMORY[0x8871E0] + 712) == 0.0 ) /*0x55b226*/
  {
    v14 = MEMORY[0xA8B230]; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = MEMORY[0xA8B230]; /*0x55b228*/
  v15 = (int)MEMORY[0xA8ED84]; /*0x55b22e*/
  v16 = *((_DWORD *)MEMORY[0xA8B230] + 1158); /*0x55b234*/
  v17 = *((_DWORD *)MEMORY[0xA8B230] + 1160); /*0x55b23a*/
  v18 = (int *)((char *)MEMORY[0xA8B230] + 4632); /*0x55b240*/
  if ( v16 == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( (int)MEMORY[0xA8ED84] - v16 < v17 ) /*0x55b251*/
  {
    v17 -= (int)MEMORY[0xA8ED84] - v16; /*0x55b253*/
LABEL_38:
    if ( v17 ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  v19 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 712) * 900.0); /*0x55b259*/
  v20 = v58; /*0x55b26a*/
  *v18 = v15; /*0x55b26e*/
  v18[1] = v20; /*0x55b270*/
  v18[2] = v19; /*0x55b278*/
  MapClass::ProcessVisibilityFlags(&MEMORY[0x87F7E8], HIDWORD(v19)); /*0x55b27b*/
  v14 = MEMORY[0xA8B230]; /*0x55b280*/
  v13 = (double *)MEMORY[0x8871E0]; /*0x55b286*/
LABEL_41:
  v15 = (int)MEMORY[0xA8ED84]; /*0x55b294*/
LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility(&MEMORY[0x87F7E8]); /*0x55b2ad*/
    v14 = MEMORY[0xA8B230]; /*0x55b2b2*/
    v13 = (double *)MEMORY[0x8871E0]; /*0x55b2b8*/
    v15 = (int)MEMORY[0xA8ED84]; /*0x55b2be*/
  }
  if ( (*v14 & 0x1000) != 0 && v13[713] != 0.0 ) /*0x55b2dd*/
  {
    v21 = v14[1161]; /*0x55b2df*/
    v22 = v14[1163]; /*0x55b2e5*/
    if ( v21 != -1 ) /*0x55b2f4*/
    {
      if ( v15 - v21 >= v22 ) /*0x55b2fc*/
      {
LABEL_50:
        v23 = Math::RoundToInt(v13[713] * 900.0); /*0x55b304*/
        v24 = v58; /*0x55b315*/
        v14[1161] = v15; /*0x55b319*/
        v14[1162] = v24; /*0x55b31b*/
        v14[1163] = v23; /*0x55b323*/
        MapClass::ProcessFogTransition(&MEMORY[0x87F7E8]); /*0x55b326*/
        v14 = MEMORY[0xA8B230]; /*0x55b32b*/
        v13 = (double *)MEMORY[0x8871E0]; /*0x55b331*/
        v15 = (int)MEMORY[0xA8ED84]; /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      v22 -= v15 - v21; /*0x55b2fe*/
    }
    if ( !v22 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
LABEL_51:
  if ( v14[3404] != v14[3403] && v13[717] != 0.0 ) /*0x55b362*/
  {
    v25 = v14[1170]; /*0x55b368*/
    v26 = v14[1172]; /*0x55b36e*/
    if ( v25 != -1 ) /*0x55b377*/
    {
      v27 = v15 - v25; /*0x55b379*/
      if ( v27 >= v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
      goto LABEL_71; /*0x55b383*/
LABEL_57:
    if ( (unsigned __int8)NukeFlash::IsActive() /*0x55b39b*/
      || (unsigned __int8)NukeFlash::ProcessEffect()
      || (unsigned __int8)ChronoScreen::IsActive() )
    {
      v28 = *((_DWORD *)MEMORY[0xA8B230] + 3422); /*0x55b40e*/
      v29 = (char *)MEMORY[0xA8B230] + 4680; /*0x55b414*/
      *((_DWORD *)MEMORY[0xA8B230] + 1170) = MEMORY[0xA8ED84]; /*0x55b41a*/
      v30 = v58; /*0x55b41c*/
    }
    else
    {
      if ( !PsyDom::IsActive() ) /*0x55b3ab*/
      {
        v31 = MEMORY[0xA8ED84]; /*0x55b3d2*/
        v32 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 717) * 900.0); /*0x55b3e4*/
        v33 = v58; /*0x55b3ef*/
        v34 = (char *)MEMORY[0xA8B230] + 4680; /*0x55b3f3*/
        *((_DWORD *)MEMORY[0xA8B230] + 1170) = v31; /*0x55b3f9*/
        *((_DWORD *)v34 + 1) = v33; /*0x55b3fb*/
        *((_DWORD *)v34 + 2) = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = *((_DWORD *)MEMORY[0xA8B230] + 3429); /*0x55b3b8*/
      v29 = (char *)MEMORY[0xA8B230] + 4680; /*0x55b3be*/
      *((_DWORD *)MEMORY[0xA8B230] + 1170) = MEMORY[0xA8ED84]; /*0x55b3c4*/
      v30 = v58; /*0x55b3c6*/
    }
    *((_DWORD *)v29 + 1) = v30; /*0x55b420*/
    *((_DWORD *)v29 + 2) = v28; /*0x55b423*/
LABEL_65:
    *((_DWORD *)MEMORY[0xA8B230] + 3404) &= (*((_DWORD *)MEMORY[0xA8B230] + 3404) <= 0) - 1; /*0x55b426*/
    v35 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 718) * 100.0); /*0x55b453*/
    v36 = *((_DWORD *)MEMORY[0xA8B230] + 3403); /*0x55b45e*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 3404) >= v36 ) /*0x55b46c*/
    {
      *((_DWORD *)MEMORY[0xA8B230] + 3403) = v35 + v36; /*0x55b490*/
      v37 = MEMORY[0xA8B230]; /*0x55b496*/
      v38 = *((_DWORD *)MEMORY[0xA8B230] + 3403); /*0x55b49c*/
      v39 = *((_DWORD *)MEMORY[0xA8B230] + 3404); /*0x55b4a2*/
      if ( v38 >= v39 ) /*0x55b4aa*/
LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      *((_DWORD *)MEMORY[0xA8B230] + 3403) = v36 - v35; /*0x55b470*/
      v37 = MEMORY[0xA8B230]; /*0x55b476*/
      v38 = *((_DWORD *)MEMORY[0xA8B230] + 3403); /*0x55b47c*/
      v39 = *((_DWORD *)MEMORY[0xA8B230] + 3404); /*0x55b482*/
      if ( v38 <= v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[3403] = v38; /*0x55b4ae*/
    *((_BYTE *)MEMORY[0xA8B230] + 13483) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(&MEMORY[0x87F7E8]); /*0x55b4c6*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 1); /*0x55b4d2*/
  }
LABEL_71:
  UpdateAudioTriggers(); /*0x55b4d7*/
  ProcessSpeechEvents(); /*0x55b4dc*/
  DispatchBuildingAudioEvents(&MEMORY[0x87F5D8]); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects(0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v60 = &vt_DynamicVectorClass_TeamClass; /*0x55b50e*/
  v65 = 10; /*0x55b516*/
  v64 = 0; /*0x55b51a*/
  if ( MEMORY[0x8B40F8] > 0 ) /*0x55b51e*/
  {
    v42 = v62; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = (char *)MEMORY[0x8B40EC] + 4 * v40; /*0x55b530*/
      if ( v64 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v63 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
LABEL_81:
      if ( ++v40 >= MEMORY[0x8B40F8] ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v65; /*0x55b526*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v60[2])(&v60, v41 + v42, 0) ) /*0x55b558*/
    {
LABEL_79:
      v44 = v64++; /*0x55b55f*/
      *((_DWORD *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v62; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
LABEL_82:
  for ( i = 0; i < v64; ++i ) /*0x55b58a*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + i) + 92))(*((_DWORD *)Block + i)); /*0x55b595*/
  for ( j = MEMORY[0x8A0218] - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0x8A020C] + j) + 92))(*((_DWORD *)MEMORY[0x8A020C] + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(); /*0x55b5be*/
  UpdateCameoProduction(); /*0x55b5c3*/
  UpdateSuperWeapons(); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_B04BD4 + k) + 92))(*((_DWORD *)dword_B04BD4 + k)); /*0x55b5e4*/
  LOBYTE(v47) = 0; /*0x55b5ea*/
  UpdateDeferredLightSurfaces(6, v47); /*0x55b5f1*/
  LocomotionClass::UpdateAll(); /*0x55b5f6*/
  for ( m = 0; m < *(this + 4); ++m ) /*0x55b606*/
  {
    v50 = *(_DWORD *)(this->q004 + 4 * m); /*0x55b60b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v50 + 92))(v50); /*0x55b610*/
  }
  if ( MEMORY[0xA8B238] ) /*0x55b622*/
  {
    if ( MEMORY[0xA8B238] != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < MEMORY[0xA83E10]; ++n ) /*0x55b632*/
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA83E04] + n) + 92))(*((_DWORD *)MEMORY[0xA83E04] + n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(); /*0x55b64b*/
  AirstrikeClass::UpdateAll(); /*0x55b650*/
  CrateClass::Update(&MEMORY[0x87F7E8]); /*0x55b65a*/
  ((void (__thiscall *)(LPPERSISTSTREAM))MEMORY[0x887324]->__tail_0[2].GetSizeMax)(MEMORY[0x887324]); /*0x55b667*/
  for ( ii = 0; ii < MEMORY[0xA83E40]; ++ii ) /*0x55b673*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)MEMORY[0xA83E34] + ii) + 92))(*((_DWORD *)MEMORY[0xA83E34] + ii)); /*0x55b680*/
  for ( jj = 0; jj < HouseClass_Count; ++jj ) /*0x55b696*/
  {
    v54 = *((_DWORD *)HouseClass_Array + jj); /*0x55b69d*/
    if ( v54 ) /*0x55b6a2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 92))(v54); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode(&MEMORY[0x87F7E8]) ) /*0x55b6b8*/
  {
    v55 = (int *)(MapClass::GetScrollMode(&MEMORY[0x87F7E8]) + 156); /*0x55b6cf*/
    v57 = *v55; /*0x55b6d6*/
    v58 = v55[1]; /*0x55b6e8*/
    v59 = v55[2]; /*0x55b6ef*/
    Tactical::SetTacticalPosition(&v57); /*0x55b6f3*/
  }
  v60 = &vt_VectorClass_TeamClass; /*0x55b6fc*/
  if ( Block ) /*0x55b706*/
  {
    if ( v63 ) /*0x55b70e*/
      __3_YAXPAX_Z(Block); /*0x55b711*/
  }
}


// ==== 0x0055B720  ObjectClass::method_55B720  this=ObjectClass  sig=csp ====
int __thiscall sub_55B720(_DWORD *this)
{
  RulesClass *v1; // ebx
  wchar_t *v3; // edi
  int v4; // edx
  wchar_t **v5; // esi
  int v6; // eax
  wchar_t *v7; // eax
  int v8; // edx
  int v9; // eax
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int result; // eax
  int i; // edi
  int v14; // esi
  wchar_t *v15; // [esp+18h] [ebp-8h]

  v1 = MEMORY[0x8871E0]; /*0x55b724*/
  if ( !LOBYTE(MEMORY[0x8871E0][1].?) || *(double *)&MEMORY[0x8871E0][1].? == 0.0 ) /*0x55b74a*/
    goto LABEL_8; /*0x55b74a*/
  v3 = MEMORY[0xA8ED84]; /*0x55b751*/
  v4 = *((_DWORD *)MEMORY[0xA8B230] + 1158); /*0x55b757*/
  v5 = (wchar_t **)((char *)MEMORY[0xA8B230] + 4632); /*0x55b75d*/
  v6 = *((_DWORD *)MEMORY[0xA8B230] + 1160); /*0x55b766*/
  if ( v4 != -1 ) /*0x55b769*/
  {
    if ( (int)MEMORY[0xA8ED84] - v4 >= v6 ) /*0x55b771*/
    {
LABEL_7:
      v7 = (wchar_t *)Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].? * 900.0); /*0x55b779*/
      *v5 = v3; /*0x55b78e*/
      v5[1] = v15; /*0x55b790*/
      v5[2] = v7; /*0x55b798*/
      MapClass::ProcessVisibilityFlags(&MEMORY[0x87F7E8]); /*0x55b79b*/
      v1 = MEMORY[0x8871E0]; /*0x55b7a0*/
LABEL_8:
      v3 = MEMORY[0xA8ED84]; /*0x55b7a6*/
      goto LABEL_9; /*0x55b7a6*/
    }
    v6 -= (int)MEMORY[0xA8ED84] - v4; /*0x55b773*/
  }
  if ( !v6 ) /*0x55b777*/
    goto LABEL_7; /*0x55b777*/
LABEL_9:
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 && *(double *)&v1[1].TiberiumStrength != 0.0 ) /*0x55b7ca*/
  {
    v8 = *((_DWORD *)MEMORY[0xA8B230] + 1161); /*0x55b7cc*/
    v9 = *((_DWORD *)MEMORY[0xA8B230] + 1163); /*0x55b7d2*/
    v10 = (wchar_t **)((char *)MEMORY[0xA8B230] + 4644); /*0x55b7d8*/
    if ( v8 != -1 ) /*0x55b7e1*/
    {
      if ( (int)v3 - v8 >= v9 ) /*0x55b7e9*/
      {
LABEL_15:
        v11 = (wchar_t *)Math::RoundToInt(*(double *)&v1[1].TiberiumStrength * 900.0); /*0x55b7f1*/
        *v10 = v3; /*0x55b806*/
        v10[1] = v15; /*0x55b808*/
        v10[2] = v11; /*0x55b810*/
        MapClass::ProcessFogTransition(&MEMORY[0x87F7E8]); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      v9 -= (int)v3 - v8; /*0x55b7eb*/
    }
    if ( v9 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
LABEL_16:
  result = this->uniqueId; /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    v14 = *(_DWORD *)(this->vtable2 + 4 * i); /*0x55b824*/
    if ( v14 && (*(_BYTE *)(v14 + 20) & 4) != 0 && *(_DWORD *)(v14 + 1652) && !*(_BYTE *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(_DWORD *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1652) + 64))(*(_DWORD *)(v14 + 1652)); /*0x55b86b*/
    }
    result = this->uniqueId; /*0x55b86e*/
  }
  return result; /*0x55b876*/
}


// ==== 0x0055B880  LogicClass::RemoveItemByValue  this=LogicClass  sig=csp ====
void __stdcall Array::RemoveItemByValue(AbstractClass *aP0, int a2)
{
  ParticleSystemClass *v2; // ecx
  int v3; // edx
  ParticleSystemClass *v4; // esi
  int v5; // eax

  if ( aP0 ) /*0x55b887*/
  {
    if ( (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP0->__pad_0 + 44))(aP0) == 44 ) /*0x55b893*/
    {
      v2 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67588]; /*0x55b895*/
      v3 = 0; /*0x55b89b*/
      if ( *(int *)&stru_89E138.__pad_579C[67588] > 0 ) /*0x55b89f*/
      {
        v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x55b8a2*/
        do /*0x55b8da*/
        {
          if ( aP0 == *(AbstractClass **)&v4->__pad_0[4 * v3] ) /*0x55b8ab*/
          {
            if ( v3 < (int)v2 ) /*0x55b8af*/
            {
              v2 = (ParticleSystemClass *)((char *)v2 - 1); /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              *(_DWORD *)&stru_89E138.__pad_579C[67588] = v2; /*0x55b8b6*/
              if ( v3 < (int)v2 ) /*0x55b8bc*/
              {
                do /*0x55b8d4*/
                {
                  *(_DWORD *)&v4->__pad_0[4 * v5] = *(_DWORD *)&v4->__pad_0[4 * v5 + 4]; /*0x55b8c2*/
                  v2 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67588]; /*0x55b8c5*/
                  v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x55b8cb*/
                  ++v5; /*0x55b8d1*/
                }
                while ( v5 < *(int *)&stru_89E138.__pad_579C[67588] ); /*0x55b8d4*/
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < (int)v2 ); /*0x55b8da*/
      }
    }
  }
}


// ==== 0x0055BAA0  LogicClass::SetDeployState  this=LogicClass  sig=csp ====
char __stdcall ObjectClass::SetDeployState(ObjectClass *aP0, char a2)
{
  int v2; // ecx

  if ( aP0->isInLogic ) /*0x55baa5*/
    return 1; /*0x55baaf*/
  if ( !DisplayClass::RenderStatusText(v2, (IUnknown *)aP0, a2) ) /*0x55babb*/
    return 0; /*0x55bad0*/
  aP0->isInLogic = 1; /*0x55bac6*/
  return 1; /*0x55bab1*/
}


// ==== 0x0055BAE0  VectorClass::RemoveItem  this=LogicClass  sig=csp ====
int __thiscall VectorClass::RemoveItem(int *this, ObjectClass *aP1)
{
  ObjectClass *result; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // ecx

  result = aP1; /*0x55bae0*/
  if ( aP1->isInLogic ) /*0x55bae7*/
  {
    v4 = (*(int (__thiscall **)(int *, ObjectClass **))(*this + 16))(this, &aP1); /*0x55bafa*/
    if ( v4 != -1 ) /*0x55bb00*/
    {
      v5 = this->q004; /*0x55bb02*/
      if ( v4 < v5 ) /*0x55bb07*/
      {
        v6 = v5 - 1; /*0x55bb09*/
        for ( this->q004 = v6; v4 < this->q004; *(_DWORD *)(*(this + 1) + 4 * v4 - 4) = *(_DWORD *)(*(this + 1) + 4 * v4) ) /*0x55bb0f*/
          ++v4; /*0x55bb14*/
      }
    }
    result = aP1; /*0x55bb23*/
    aP1->isInLogic = 0; /*0x55bb27*/
  }
  return (int)result->__pad_0; /*0x55bb2e*/
}


// ==== 0x0055BB40  ScenarioClass::ProcessAmbientEffects  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_55BB40(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x55bb4b*/
  this->Capacity = a2; /*0x55bb4e*/
  *((_BYTE *)this + 12) = 1; /*0x55bb51*/
  *((_BYTE *)this + 13) = 0; /*0x55bb55*/
  *this = &vt_VectorClass_TeamClass; /*0x55bb58*/
  if ( a2 ) /*0x55bb5e*/
  {
    if ( a3 ) /*0x55bb66*/
    {
      this->Items = a3; /*0x55bb68*/
      return this; /*0x55bb6e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x55bb7d*/
    *((_BYTE *)this + 13) = 1; /*0x55bb80*/
  }
  return this; /*0x55bb6d*/
}


// ==== 0x0055BB90  WriteCompressionBlock  this=BlowStraw  sig=csp ====
int __fastcall WriteCompressionBlock(Pipe *aP0, BlowStraw *aP1, CCINIClass *aP2, int *a3, int a5)
{
  int result; // eax
  int *v6; // esi
  char *v7; // edi
  int v8; // ecx
  char *v9; // ecx

  result = 0; /*0x55bb90*/
  if ( aP1 ) /*0x55bb9a*/
  {
    if ( (unsigned int)aP1 > 0xD ) /*0x55bba7*/
    {
      v6 = a3; /*0x55bbcf*/
      result = CompressLCWBuffer(aP0, (int)aP1, (unsigned __int8 *)aP2, a3, a5); /*0x55bbd6*/
      if ( result ) /*0x55bbdd*/
        return result; /*0x55bbdd*/
    }
    else
    {
      aP2->__pad_0[0] = (_BYTE)aP1 + 17; /*0x55bbb0*/
      v7 = &aP2->__pad_0[1]; /*0x55bbb3*/
      do /*0x55bbbd*/
      {
        *v7++ = aP0->__pad_0[0]; /*0x55bbb8*/
        aP0 = (Pipe *)((char *)aP0 + 1); /*0x55bbbb*/
        aP1 = (BlowStraw *)((char *)aP1 - 1); /*0x55bbbc*/
      }
      while ( aP1 ); /*0x55bbbd*/
      v6 = a3; /*0x55bbbf*/
      *a3 = v7 - (char *)aP2; /*0x55bbc5*/
    }
  }
  else
  {
    v6 = a3; /*0x55bb9c*/
    *a3 = 0; /*0x55bba0*/
  }
  v8 = *v6; /*0x55bbdf*/
  aP2->__pad_0[v8] = 17; /*0x55bbe1*/
  v9 = &aP2->__pad_0[v8 + 1]; /*0x55bbe7*/
  *v9 = 0; /*0x55bbe8*/
  v9[1] = 0; /*0x55bbeb*/
  *v6 += 3; /*0x55bbef*/
  return result; /*0x55bbf2*/
}


// ==== 0x0055BC00  CompressLCWBuffer  this=unknown  sig=csp ====
int __fastcall CompressLCWBuffer(Pipe *aP0, int edx0, unsigned __int8 *a2, _DWORD *a3, int a5)
{
  Pipe *v5; // edi
  unsigned __int8 *v6; // ebp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  Pipe *i; // esi
  unsigned int v13; // eax
  Pipe *v14; // ebx
  unsigned int v15; // eax
  char *v16; // ebx
  char v17; // dl
  char *v18; // ebp
  char *v19; // edi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  unsigned __int8 *v23; // ebp
  unsigned int v24; // eax
  char v25; // dl
  unsigned __int8 v26; // al
  char v27; // dl
  char *v28; // ebx
  char v29; // al
  char v30; // dl
  char *v31; // ebx
  char v32; // al
  char v33; // dl
  char *v34; // ebx
  char v35; // al
  char v36; // dl
  char *v37; // ebx
  char v38; // al
  char v39; // dl
  char *v40; // ebx
  char v41; // al
  char v42; // dl
  _BYTE *v43; // ebx
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // ecx
  _BYTE *v47; // ebp
  unsigned int v48; // ebx
  int v49; // eax
  _BYTE *v50; // ebp
  unsigned int v51; // eax
  char v52; // al
  int v53; // ecx
  _BYTE *v54; // ebp
  int v55; // ecx
  unsigned int v56; // eax
  unsigned __int8 v57; // bl
  unsigned int v58; // edx
  unsigned int v59; // ecx
  unsigned __int8 *v60; // edi
  int v62; // [esp+10h] [ebp-1Ch]
  int v63; // [esp+10h] [ebp-1Ch]
  Pipe *v64; // [esp+14h] [ebp-18h]
  unsigned __int8 *v65; // [esp+18h] [ebp-14h]
  unsigned int v66; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  int v69; // [esp+38h] [ebp+Ch]

  v5 = aP0; /*0x55bc07*/
  v6 = a2; /*0x55bc0d*/
  v65 = (unsigned __int8 *)&aP0->__pad_0[edx0]; /*0x55bc17*/
  v7 = (unsigned __int8)aP0->__pad_0[0] /*0x55bc33*/
     ^ (32 * ((unsigned __int8)aP0->__pad_0[1] ^ (32 * (unsigned __int8)aP0->__pad_0[2])));
  v8 = a5; /*0x55bc35*/
  v64 = aP0; /*0x55bc3b*/
  *(_DWORD *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = aP0; /*0x55bc58*/
  v9 = (v7 >> 5) ^ ((unsigned __int8)v5->__pad_0[0] >> 5) ^ ((unsigned __int8)v5->__pad_0[3] << 10); /*0x55bc6d*/
  *(_DWORD *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = &v5->__pad_0[1]; /*0x55bc89*/
  v10 = (v9 >> 5) ^ ((unsigned __int8)v5->__pad_0[1] >> 5) ^ (LOBYTE(v5->Pipe_field_0x04) << 10); /*0x55bc9e*/
  *(_DWORD *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = &v5->__pad_0[2]; /*0x55bcbb*/
  v11 = (v10 >> 5) ^ ((unsigned __int8)v5->__pad_0[2] >> 5) ^ (BYTE1(v5->Pipe_field_0x04) << 10); /*0x55bcce*/
  *(_DWORD *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = &v5->__pad_0[3]; /*0x55bce7*/
  for ( i = (Pipe *)&v5->Pipe_field_0x04; /*0x55bcea*/
        ;
        v11 = (unsigned __int8)i->__pad_0[0]
            ^ (32 * ((unsigned __int8)i->__pad_0[1] ^ (32 * (unsigned __int8)i->__pad_0[2]))) )
  {
    while ( 1 ) /*0x55bcfd*/
    {
      v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(Pipe **)(v8 + 4 * v13); /*0x55bd02*/
      *(_DWORD *)(v8 + 4 * v13) = i; /*0x55bd05*/
      if ( v14 >= aP0 ) /*0x55bd0c*/
      {
        v62 = (char *)i - (char *)v14; /*0x55bd18*/
        if ( (char *)i - (char *)v14 > 0 /*0x55bd49*/
          && (char *)i - (char *)v14 <= 49151
          && v14->__pad_0[0] == i->__pad_0[0]
          && v14->__pad_0[1] == i->__pad_0[1]
          && v14->__pad_0[2] == i->__pad_0[2] )
        {
          break; /*0x55bd49*/
        }
      }
LABEL_56:
      i = (Pipe *)((char *)i + 1); /*0x55bffb*/
      if ( i >= (Pipe *)(v65 - 13) ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (HIBYTE(i[-1].Pipe_field_0x0C) >> 5) ^ ((unsigned __int8)i->__pad_0[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    v15 = (char *)i - (char *)v5; /*0x55bd55*/
    v16 = &v14->__pad_0[3]; /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = v5->__pad_0[0]; /*0x55bd71*/
        v17 = v5->__pad_0[1]; /*0x55bd74*/
        v18 = (char *)(v6 + 1); /*0x55bd77*/
        v19 = &v5->__pad_0[1]; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = (unsigned __int8 *)(v18 + 1); /*0x55bd84*/
        v5 = (Pipe *)(v19 + 2); /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i->__pad_0[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    v21 = (char *)i - (char *)v5; /*0x55bda2*/
    v68 = (char *)i - (char *)v5; /*0x55bda7*/
    if ( v15 > 3 ) /*0x55bdab*/
    {
      if ( v15 > 0x12 ) /*0x55bdbe*/
      {
        v22 = v15 - 18; /*0x55bdcc*/
        *v6 = 0; /*0x55bdcf*/
        v23 = v6 + 1; /*0x55bdd3*/
        v66 = v22; /*0x55bdd9*/
        if ( v22 <= 0xFF ) /*0x55bddd*/
        {
          v20 = v62; /*0x55bed9*/
        }
        else
        {
          memset(v23, 0, 4 * ((v22 - 1) / 0x3FC) + (((v22 - 1) / 0xFF) & 3)); /*0x55bdff*/
          v24 = (v22 - 1) / 0xFF; /*0x55be08*/
          v23 += v24; /*0x55be0a*/
          do /*0x55be1b*/
          {
            v25 = v66 + 1; /*0x55be10*/
            --v24; /*0x55be16*/
            v66 -= 255; /*0x55be17*/
          }
          while ( v24 ); /*0x55be1b*/
          v20 = v62; /*0x55be1d*/
          v5 = v64; /*0x55be21*/
          LOBYTE(v22) = v25; /*0x55be25*/
          v21 = v68; /*0x55be27*/
        }
        *v23 = v22; /*0x55be2b*/
        v6 = v23 + 1; /*0x55be2e*/
      }
      else
      {
        v20 = v62; /*0x55bdc0*/
        *v6++ = v15 - 3; /*0x55bdc6*/
      }
    }
    else
    {
      *(v6 - 2) |= v15; /*0x55bdb2*/
      v20 = v62; /*0x55bdb5*/
    }
    do /*0x55be37*/
    {
      *v6++ = v5->__pad_0[0]; /*0x55be31*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x55be35*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
LABEL_25:
    v26 = i->__pad_0[3]; /*0x55be3d*/
    v27 = *v16; /*0x55be40*/
    i = (Pipe *)((char *)i + 4); /*0x55be45*/
    v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      v29 = i->__pad_0[0]; /*0x55be4f*/
      v30 = *v28; /*0x55be51*/
      i = (Pipe *)((char *)i + 1); /*0x55be53*/
      v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        v32 = i->__pad_0[0]; /*0x55be5d*/
        v33 = *v31; /*0x55be5f*/
        i = (Pipe *)((char *)i + 1); /*0x55be61*/
        v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          v35 = i->__pad_0[0]; /*0x55be6b*/
          v36 = *v34; /*0x55be6d*/
          i = (Pipe *)((char *)i + 1); /*0x55be6f*/
          v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            v38 = i->__pad_0[0]; /*0x55be79*/
            v39 = *v37; /*0x55be7b*/
            i = (Pipe *)((char *)i + 1); /*0x55be7d*/
            v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              v41 = i->__pad_0[0]; /*0x55be87*/
              v42 = *v40; /*0x55be89*/
              i = (Pipe *)((char *)i + 1); /*0x55be8b*/
              v43 = v40 + 1; /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
                for ( ; i < (Pipe *)v65; i = (Pipe *)((char *)i + 1) ) /*0x55be9b*/
                {
                  if ( *v43 != i->__pad_0[0] ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                v44 = (char *)i - (char *)v64; /*0x55beb5*/
                if ( v62 > 0x4000 ) /*0x55bebc*/
                {
                  v49 = v62 - 0x4000; /*0x55beeb*/
                  v63 = v62 - 0x4000; /*0x55bef3*/
                  if ( v44 <= 9 ) /*0x55bef7*/
                  {
                    v46 = v63; /*0x55befc*/
                    *v6 = (v44 - 2) | (v49 >> 11) & 8 | 0x10; /*0x55bf09*/
                    v47 = v6 + 1; /*0x55bf0c*/
                    goto LABEL_52; /*0x55bf0d*/
                  }
                  v48 = v44 - 9; /*0x55bf17*/
                  *v6 = (v49 >> 11) & 8 | 0x10; /*0x55bf1c*/
                }
                else
                {
                  v45 = v62 - 1; /*0x55bebe*/
                  v63 = v62 - 1; /*0x55bec2*/
                  if ( v44 <= 0x21 ) /*0x55bec6*/
                  {
                    v46 = v45; /*0x55becb*/
                    *v6 = (v44 - 2) | 0x20; /*0x55bed0*/
                    v47 = v6 + 1; /*0x55bed3*/
                    goto LABEL_52; /*0x55bed4*/
                  }
                  v48 = v44 - 33; /*0x55bee2*/
                  *v6 = 32; /*0x55bee5*/
                }
                v50 = v6 + 1; /*0x55bf1f*/
                if ( v48 > 0xFF ) /*0x55bf26*/
                {
                  memset(v50, 0, 4 * ((v48 - 1) / 0x3FC) + (((v48 - 1) / 0xFF) & 3)); /*0x55bf44*/
                  v51 = (v48 - 1) / 0xFF; /*0x55bf4d*/
                  v50 += v51; /*0x55bf4f*/
                  do /*0x55bf58*/
                  {
                    LOBYTE(v48) = v48 + 1; /*0x55bf51*/
                    --v51; /*0x55bf57*/
                  }
                  while ( v51 ); /*0x55bf58*/
                }
                v46 = v63; /*0x55bf5a*/
                *v50 = v48; /*0x55bf5e*/
                v47 = v50 + 1; /*0x55bf61*/
                goto LABEL_52; /*0x55bf62*/
              }
            }
          }
        }
      }
    }
    i = (Pipe *)((char *)i - 1); /*0x55bf64*/
    v52 = (_BYTE)i - (_BYTE)v5; /*0x55bf67*/
    if ( v20 <= 2048 ) /*0x55bf6f*/
    {
      v53 = v20 - 1; /*0x55bf71*/
      *v6 = (32 * (v52 + 7)) | (4 * (v53 & 7)); /*0x55bf81*/
      v54 = v6 + 1; /*0x55bf84*/
      v55 = v53 >> 3; /*0x55bf85*/
      goto LABEL_53; /*0x55bf88*/
    }
    if ( v20 > 0x4000 ) /*0x55bf90*/
    {
      v46 = v20 - 0x4000; /*0x55bf9c*/
      *v6 = (v52 - 2) | (v46 >> 11) & 8 | 0x10; /*0x55bfb1*/
    }
    else
    {
      v46 = v20 - 1; /*0x55bf94*/
      *v6 = (v52 - 2) | 0x20; /*0x55bf97*/
    }
    v47 = v6 + 1; /*0x55bfb4*/
LABEL_52:
    *v47 = 4 * v46; /*0x55bfba*/
    v54 = v47 + 1; /*0x55bfbd*/
    v55 = v46 >> 6; /*0x55bfbe*/
LABEL_53:
    *v54 = v55; /*0x55bfc1*/
    v6 = v54 + 1; /*0x55bfc8*/
    v64 = i; /*0x55bfc9*/
    if ( i >= (Pipe *)(v65 - 13) ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
LABEL_59:
  v56 = v65 - (unsigned __int8 *)v5; /*0x55c027*/
  if ( v65 - (unsigned __int8 *)v5 > 0 ) /*0x55c02f*/
  {
    v69 = v65 - (unsigned __int8 *)v5; /*0x55c039*/
    if ( v6 == a2 && v56 <= 0xEE ) /*0x55c046*/
    {
      *v6 = v56 + 17; /*0x55c04d*/
      goto LABEL_72; /*0x55c050*/
    }
    if ( v56 > 3 ) /*0x55c055*/
    {
      if ( v56 > 0x12 ) /*0x55c05f*/
      {
        v57 = v56 - 18; /*0x55c06b*/
        *v6++ = 0; /*0x55c06e*/
        if ( v56 - 18 > 0xFF ) /*0x55c079*/
        {
          v58 = (v56 - 19) / 0xFF; /*0x55c085*/
          v59 = (v56 - 19) / 0x3FC; /*0x55c090*/
          memset(v6, 0, 4 * v59); /*0x55c093*/
          v60 = &v6[4 * v59]; /*0x55c093*/
          v6 += v58; /*0x55c09a*/
          memset(v60, 0, v58 & 3); /*0x55c09c*/
          do /*0x55c0a5*/
          {
            ++v57; /*0x55c09e*/
            --v58; /*0x55c0a4*/
          }
          while ( v58 ); /*0x55c0a5*/
          v5 = v64; /*0x55c0a7*/
          v56 = v69; /*0x55c0ab*/
        }
        *v6 = v57; /*0x55c0af*/
      }
      else
      {
        *v6 = v56 - 3; /*0x55c066*/
      }
LABEL_72:
      ++v6; /*0x55c0b2*/
    }
    else
    {
      *(v6 - 2) |= v56; /*0x55c057*/
    }
    do /*0x55c0bb*/
    {
      *v6++ = v5->__pad_0[0]; /*0x55c0b5*/
      v5 = (Pipe *)((char *)v5 + 1); /*0x55c0b9*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a3 = v6 - a2; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}


// ==== 0x0055C0E0  DecodeBlockLCW  this=VOID_PTR  sig=csp ====
int __fastcall DecodeBlockLCW(AbstractClass *aP0, Pipe *aP1, _BYTE *a2, _DWORD *a3, int a5)
{
  AbstractClass *v5; // eax
  _BYTE *v6; // esi
  AbstractClass *v7; // ebp
  unsigned int v8; // edx
  char *v9; // eax
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 *v14; // eax
  unsigned __int8 v15; // cl
  char *v16; // eax
  int v17; // ecx
  _BYTE *v18; // ecx
  _BYTE *v19; // esi
  int v20; // ecx
  _BYTE *v21; // edi
  int v22; // edx
  int v23; // edx
  unsigned __int8 v24; // cl
  _BYTE *v25; // edi
  int v26; // edx
  unsigned __int8 v27; // cl
  _BYTE *v28; // edi
  unsigned __int8 *v29; // eax
  _BYTE *v30; // edi
  _BYTE *v32; // esi
  _BYTE *v33; // edi

  v5 = aP0; /*0x55c0e5*/
  *a3 = 0; /*0x55c0e8*/
  v6 = a2; /*0x55c0ef*/
  v7 = (AbstractClass *)&aP1->__pad_0[(_DWORD)aP0]; /*0x55c0f3*/
  if ( aP0->__pad_0[0] > 0x11u ) /*0x55c0fc*/
  {
    v8 = (unsigned __int8)aP0->__pad_0[0] - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
LABEL_3:
  v8 = (unsigned __int8)v5->__pad_0[0]; /*0x55c109*/
  v9 = &v5->__pad_0[1]; /*0x55c10d*/
  if ( v8 < 0x10 ) /*0x55c111*/
  {
    if ( !v8 ) /*0x55c119*/
    {
      v10 = 15; /*0x55c11d*/
      if ( !*v9 ) /*0x55c11b*/
      {
        do /*0x55c132*/
        {
          v11 = v9[1]; /*0x55c126*/
          v10 += 255; /*0x55c129*/
          ++v9; /*0x55c12f*/
        }
        while ( !v11 ); /*0x55c132*/
      }
      v8 = (unsigned __int8)*v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = (unsigned __int8 *)(v9 + 1); /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = (AbstractClass *)(v14 + 1); /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
LABEL_9:
    v16 = &v5->__pad_0[1]; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = (unsigned __int8)*v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * (unsigned __int8)*v9]; /*0x55c170*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c17e*/
      *v6++ = *(_BYTE *)(v17 - 2049); /*0x55c17f*/
      v18 = (_BYTE *)(v17 - 2049 + 1); /*0x55c182*/
LABEL_13:
      *v6 = *v18; /*0x55c183*/
      v19 = v6 + 1; /*0x55c18a*/
      *v19 = v18[1]; /*0x55c18b*/
      v6 = v19 + 1; /*0x55c18d*/
      goto LABEL_14; /*0x55c18d*/
    }
  }
  while ( 1 ) /*0x55c1c1*/
  {
    if ( v8 >= 0x40 ) /*0x55c1c4*/
    {
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * (unsigned __int8)*v9]; /*0x55c1db*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c1dc*/
      v22 = (v8 >> 5) - 1; /*0x55c1e0*/
      goto LABEL_33; /*0x55c1e1*/
    }
    if ( v8 < 0x20 ) /*0x55c1e9*/
      break; /*0x55c1e9*/
    v22 = v8 & 0x1F; /*0x55c1eb*/
    if ( !v22 ) /*0x55c1ee*/
    {
      v23 = 31; /*0x55c1f2*/
      if ( !*v9 ) /*0x55c1f0*/
      {
        do /*0x55c207*/
        {
          v24 = v9[1]; /*0x55c1fb*/
          v23 += 255; /*0x55c1fe*/
          ++v9; /*0x55c204*/
        }
        while ( !v24 ); /*0x55c207*/
      }
      v22 = (unsigned __int8)*v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-((unsigned __int8)*v9 >> 2) - 1 + -64 * (unsigned __int8)v9[1]]; /*0x55c225*/
    v5 = (AbstractClass *)(v9 + 2); /*0x55c227*/
LABEL_33:
    *v6 = *v21; /*0x55c28e*/
    v32 = v6 + 1; /*0x55c295*/
    *v32 = v21[1]; /*0x55c297*/
    v6 = v32 + 1; /*0x55c299*/
    v33 = v21 + 2; /*0x55c29a*/
    do /*0x55c2a2*/
    {
      *v6++ = *v33++; /*0x55c29d*/
      --v22; /*0x55c2a1*/
    }
    while ( v22 ); /*0x55c2a2*/
LABEL_14:
    v20 = BYTE2(v5[-1].NeedsSaveOrLink) & 3; /*0x55c18e*/
    if ( (BYTE2(v5[-1].NeedsSaveOrLink) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = v5->__pad_0[0]; /*0x55c19c*/
      v5 = (AbstractClass *)((char *)v5 + 1); /*0x55c19f*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = (unsigned __int8)v5->__pad_0[0]; /*0x55c1a5*/
    v9 = &v5->__pad_0[1]; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * (unsigned __int8)*v9]; /*0x55c1bd*/
      v5 = (AbstractClass *)(v9 + 1); /*0x55c1be*/
      goto LABEL_13; /*0x55c1bf*/
    }
  }
  v25 = &v6[-2048 * (v8 & 8)]; /*0x55c234*/
  v22 = v8 & 7; /*0x55c236*/
  if ( !v22 ) /*0x55c239*/
  {
    v26 = 7; /*0x55c23d*/
    if ( !*v9 ) /*0x55c23b*/
    {
      do /*0x55c252*/
      {
        v27 = v9[1]; /*0x55c246*/
        v26 += 255; /*0x55c249*/
        ++v9; /*0x55c24f*/
      }
      while ( !v27 ); /*0x55c252*/
    }
    v22 = (unsigned __int8)*v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-((unsigned __int8)*v9 >> 2)]; /*0x55c262*/
  v29 = (unsigned __int8 *)(v9 + 1); /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = (AbstractClass *)(v29 + 1); /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a3 = v6 - a2; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}


// ==== 0x0055C2B0  LZOPipe::Constructor  this=LZOPipe  sig=csp ====
_DWORD *__thiscall LZOPipe::Constructor(_DWORD *this, int a2, TechnoTypeClass *aP2)
{
  int v4; // eax
  int v5; // ecx

  this->LZOPipe_field_0x04 = 0; /*0x55c2b9*/
  this->__pad_008 = 0; /*0x55c2bc*/
  this->q010 = 0; /*0x55c2bf*/
  this->q014 = 0; /*0x55c2c2*/
  this->q018 = 0; /*0x55c2c5*/
  this->q00C = a2; /*0x55c2cc*/
  *(this + 7) = aP2; /*0x55c2cf*/
  *this = &LZOPipe::`vftable'; /*0x55c2d5*/
  *(this + 8) = aP2; /*0x55c2dc*/
  v4 = __2_YAPAXI_Z(2 * (_DWORD)aP2); /*0x55c2df*/
  v5 = *(this + 7); /*0x55c2e4*/
  this->q014 = v4; /*0x55c2e7*/
  this->q018 = __2_YAPAXI_Z(v5 + *(this + 8)); /*0x55c2f8*/
  *((_WORD *)this + 18) = -1; /*0x55c2fb*/
  return this; /*0x55c303*/
}


// ==== 0x0055C310  LZOPipe::Destructor  this=LZOPipe  sig=csp ====
int __thiscall LZOPipe_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x55c313*/
  *this = (int)&LZOPipe::`vftable'; /*0x55c316*/
  __3_YAXPAX_Z(v2); /*0x55c31d*/
  v3 = (void *)*(this + 6); /*0x55c322*/
  *(this + 5) = 0; /*0x55c325*/
  __3_YAXPAX_Z(v3); /*0x55c32d*/
  *(this + 6) = 0; /*0x55c337*/
  return Pipe::Dtor(this); /*0x55c343*/
}


// ==== 0x0055C350  LZOPipe::Read  this=LZOPipe  sig=csp ====
int __thiscall Compression::Read(int this, AbstractClass *aP1, IUnknown *aP2)
{
  AbstractClass *v3; // ebp
  BombClass *v4; // edi
  TechnoTypeClass *v6; // eax
  size_t v7; // ebx
  ModemGame *v8; // eax
  signed int v9; // ebx
  ModemGame *v10; // edx
  ModemGame *eax12; // eax
  Pipe *v12; // edx
  AbstractClass *v13; // ecx
  Pipe *v11; // eax
  AbstractClass *v15; // ecx
  BombClass *v14; // eax
  signed int ebx17; // ebx
  int v19; // ecx
  int eax19; // eax
  CCINIClass *v18; // ebx
  __int16 v22; // cx
  Pipe *v20; // ebx
  Pipe *v21; // eax
  void *ebx22; // ebx
  int v26; // eax
  __int16 v27; // cx
  Pipe *v25; // eax
  char *v29; // ebx
  AbstractClass *v30; // ebx
  int v31; // eax
  _BYTE *v32; // [esp-10h] [ebp-1Ch]

  v3 = aP1; /*0x55c351*/
  v4 = (BombClass *)aP2; /*0x55c357*/
  if ( !aP1 || (int)aP2 < 1 ) /*0x55c368*/
    return (int)Delegate::Dispatch((_DWORD *)this, (Pipe *)aP1, (Pipe *)aP2); /*0x55c5d0*/
  v6 = *(TechnoTypeClass **)(this + 12); /*0x55c36e*/
  aP1 = 0; /*0x55c375*/
  if ( v6 == (TechnoTypeClass *)1 ) /*0x55c37d*/
  {
    while ( 1 ) /*0x55c38b*/
    {
      if ( *(_WORD *)(this + 36) == 0xFFFF ) /*0x55c391*/
      {
        v7 = 4 - *(_DWORD *)(this + 16); /*0x55c39b*/
        if ( (unsigned int)v4 < v7 ) /*0x55c39f*/
          v7 = (size_t)v4; /*0x55c3a1*/
        memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), v3, v7); /*0x55c3ae*/
        v3 = (AbstractClass *)((char *)v3 + v7); /*0x55c3bb*/
        v8 = (ModemGame *)(v7 + *(_DWORD *)(this + 16)); /*0x55c3bd*/
        v4 = (BombClass *)((char *)v4 - v7); /*0x55c3bf*/
        *(_DWORD *)(this + 16) = v8; /*0x55c3c4*/
        if ( v8 == (ModemGame *)4 ) /*0x55c3c7*/
        {
          memcpy((void *)(this + 36), *(AbstractClass **)(this + 20), 4u); /*0x55c3d3*/
          *(_DWORD *)(this + 16) = 0; /*0x55c3db*/
        }
      }
      if ( (int)v4 <= 0 ) /*0x55c3e4*/
        break; /*0x55c3e4*/
      v9 = *(unsigned __int16 *)(this + 36) - *(_DWORD *)(this + 16); /*0x55c3f3*/
      if ( (int)v4 < v9 ) /*0x55c3f7*/
        v9 = (signed int)v4; /*0x55c3f9*/
      memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), v3, v9); /*0x55c406*/
      v10 = (ModemGame *)(v9 + *(_DWORD *)(this + 16)); /*0x55c411*/
      v4 = (BombClass *)((char *)v4 - v9); /*0x55c413*/
      *(_DWORD *)(this + 16) = v10; /*0x55c415*/
      eax12 = v10; /*0x55c418*/
      v3 = (AbstractClass *)((char *)v3 + v9); /*0x55c41c*/
      v12 = (Pipe *)*(unsigned __int16 *)(this + 36); /*0x55c41e*/
      if ( eax12 == (ModemGame *)(unsigned __int16)v12 ) /*0x55c424*/
      {
        v32 = *(_BYTE **)(this + 24); /*0x55c430*/
        v13 = *(AbstractClass **)(this + 20); /*0x55c431*/
        aP2 = (IUnknown *)4; /*0x55c434*/
        DecodeBlockLCW(v13, v12, v32, &aP2, 0); /*0x55c43c*/
        v11 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), (Pipe *)*(unsigned __int16 *)(this + 38)); /*0x55c44e*/
        v15 = aP1; /*0x55c453*/
        *(_DWORD *)(this + 16) = 0; /*0x55c457*/
        *(_WORD *)(this + 36) = -1; /*0x55c460*/
        aP1 = (AbstractClass *)((char *)v15 + (_DWORD)v11); /*0x55c466*/
      }
      if ( (int)v4 <= 0 ) /*0x55c46c*/
        return (int)aP1->__pad_0; /*0x55c47a*/
    }
  }
  else
  {
    v14 = *(BombClass **)(this + 16); /*0x55c47d*/
    if ( (int)v14 > 0 ) /*0x55c482*/
    {
      ebx17 = *(_DWORD *)(this + 28) - (_DWORD)v14; /*0x55c48b*/
      if ( (int)aP2 < ebx17 ) /*0x55c48f*/
        ebx17 = (signed int)aP2; /*0x55c491*/
      memcpy((void *)(*(_DWORD *)(this + 20) + *(_DWORD *)(this + 16)), v3, ebx17); /*0x55c49e*/
      v19 = *(_DWORD *)(this + 28); /*0x55c4a6*/
      eax19 = ebx17 + *(_DWORD *)(this + 16); /*0x55c4ae*/
      v3 = (AbstractClass *)((char *)v3 + ebx17); /*0x55c4b0*/
      v4 = (BombClass *)((char *)v4 - ebx17); /*0x55c4b2*/
      *(_DWORD *)(this + 16) = eax19; /*0x55c4b6*/
      if ( eax19 == v19 ) /*0x55c4b9*/
      {
        aP1 = (AbstractClass *)4; /*0x55c4c0*/
        v18 = (CCINIClass *)__2_YAPAXI_Z(0x10000u); /*0x55c4d3*/
        WriteCompressionBlock( /*0x55c4e2*/
          *(Pipe **)(this + 20),
          *(BlowStraw **)(this + 28),
          *(CCINIClass **)(this + 24),
          (int *)&aP1,
          (int)v18);
        __3_YAXPAX_Z(v18); /*0x55c4e8*/
        v22 = (__int16)aP1; /*0x55c4ed*/
        *(_WORD *)(this + 38) = *(_WORD *)(this + 28); /*0x55c4fc*/
        *(_WORD *)(this + 36) = v22; /*0x55c500*/
        v20 = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4); /*0x55c510*/
        v21 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), (Pipe *)aP1); /*0x55c51a*/
        *(_DWORD *)(this + 16) = 0; /*0x55c521*/
        aP1 = (AbstractClass *)&v20->__pad_0[(_DWORD)v21]; /*0x55c528*/
      }
    }
    if ( (int)v4 >= *(_DWORD *)(this + 28) ) /*0x55c52f*/
    {
      do /*0x55c5aa*/
      {
        aP2 = 0; /*0x55c536*/
        ebx22 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c546*/
        WriteCompressionBlock( /*0x55c557*/
          (Pipe *)v3,
          *(BlowStraw **)(this + 28),
          *(CCINIClass **)(this + 24),
          (int *)&aP2,
          (int)ebx22);
        __3_YAXPAX_Z(ebx22); /*0x55c55d*/
        v26 = *(_DWORD *)(this + 28); /*0x55c562*/
        v27 = (__int16)aP2; /*0x55c565*/
        v3 = (AbstractClass *)((char *)v3 + v26); /*0x55c56e*/
        v4 = (BombClass *)((char *)v4 - v26); /*0x55c570*/
        *(_WORD *)(this + 38) = *(_WORD *)(this + 28); /*0x55c578*/
        *(_WORD *)(this + 36) = v27; /*0x55c57f*/
        v25 = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4); /*0x55c584*/
        v29 = &aP1->__pad_0[(_DWORD)v25]; /*0x55c590*/
        v30 = (AbstractClass *)&v29[(_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), (Pipe *)aP2)]; /*0x55c59f*/
        v31 = *(_DWORD *)(this + 28); /*0x55c5a1*/
        aP1 = v30; /*0x55c5a6*/
      }
      while ( (int)v4 >= v31 ); /*0x55c5aa*/
    }
    if ( (int)v4 > 0 ) /*0x55c5ae*/
    {
      memcpy(*(void **)(this + 20), v3, (size_t)v4); /*0x55c5b6*/
      *(_DWORD *)(this + 16) = v4; /*0x55c5be*/
    }
  }
  return (int)aP1->__pad_0; /*0x55c477*/
}


// ==== 0x0055C5E0  LZOPipe::AddRef  this=LZOPipe  sig=csp ====
char *__thiscall LZOPipe_Destru::AddRef(int this)
{
  Pipe *v2; // edi
  Pipe *v3; // ebx
  char *v4; // edi
  char *v5; // edi
  CCINIClass *v7; // edi
  __int16 v8; // dx
  Pipe *v9; // edi
  Pipe *aP2; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x55c5ec*/
  if ( *(int *)(this + 16) > 0 ) /*0x55c5f0*/
  {
    if ( *(_DWORD *)(this + 12) == 1 ) /*0x55c5fa*/
    {
      v3 = (Pipe *)(this + 36); /*0x55c602*/
      if ( *(_WORD *)(this + 36) == 0xFFFF ) /*0x55c605*/
      {
        v2 = Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 20), *(Pipe **)(this + 16)); /*0x55c613*/
        *(_DWORD *)(this + 16) = 0; /*0x55c615*/
      }
      if ( *(int *)(this + 16) > 0 ) /*0x55c61b*/
      {
        v4 = &v2->__pad_0[(_DWORD)Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4)]; /*0x55c635*/
        v5 = &v4[(_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 20), *(Pipe **)(this + 16))]; /*0x55c63e*/
        *(_DWORD *)(this + 16) = 0; /*0x55c640*/
        *(_WORD *)v3->__pad_0 = -1; /*0x55c643*/
        return &v5[GameClass::GetRelatedObject((_DWORD *)this)]; /*0x55c654*/
      }
    }
    else
    {
      aP2 = 0; /*0x55c65a*/
      v7 = (CCINIClass *)__2_YAPAXI_Z(0x10000u); /*0x55c66c*/
      WriteCompressionBlock( /*0x55c678*/
        *(Pipe **)(this + 20),
        *(BlowStraw **)(this + 16),
        *(CCINIClass **)(this + 24),
        (int *)&aP2,
        (int)v7);
      __3_YAXPAX_Z(v7); /*0x55c67e*/
      v8 = (__int16)aP2; /*0x55c687*/
      *(_WORD *)(this + 38) = *(_WORD *)(this + 16); /*0x55c692*/
      *(_WORD *)(this + 36) = v8; /*0x55c69b*/
      v9 = Delegate::Dispatch((_DWORD *)this, (Pipe *)(this + 36), (Pipe *)4); /*0x55c6a7*/
      v2 = (Pipe *)((char *)v9 + (_DWORD)Delegate::Dispatch((_DWORD *)this, *(Pipe **)(this + 24), aP2)); /*0x55c6b5*/
      *(_DWORD *)(this + 16) = 0; /*0x55c6b7*/
    }
  }
  return (char *)v2 + GameClass::GetRelatedObject((_DWORD *)this); /*0x55c64f*/
}


// ==== 0x0055C6D0  LZOPipe::QueryInterface  this=LZOPipe  sig=csp ====
LZOPipe *__thiscall LZOPipe_Destru::QueryInterface(int *Block, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*(Block + 5); /*0x55c6d3*/
  *Block = (int)&LZOPipe::`vftable'; /*0x55c6d6*/
  __3_YAXPAX_Z(v3); /*0x55c6dd*/
  v4 = (void *)*(Block + 6); /*0x55c6e2*/
  *(Block + 5) = 0; /*0x55c6e5*/
  __3_YAXPAX_Z(v4); /*0x55c6ed*/
  *(Block + 6) = 0; /*0x55c6f7*/
  Pipe::Dtor(Block); /*0x55c6fe*/
  if ( (a2 & 1) != 0 ) /*0x55c708*/
    __3_YAXPAX_Z(Block); /*0x55c70b*/
  return (LZOPipe *)Block; /*0x55c715*/
}


// ==== 0x0055C720  LZOStraw::Constructor  this=LZOStraw  sig=csp ====
_DWORD *__thiscall LZOStraw_Constructor(_DWORD *this, int a2, int a3)
{
  this->q01C = a3; /*0x55c72f*/
  *(this + 8) = a3; /*0x55c732*/
  this->LZOStraw_field_0x04 = 0; /*0x55c737*/
  *(this + 2) = 0; /*0x55c73b*/
  *(this + 3) = a2; /*0x55c73e*/
  *(this + 4) = 0; /*0x55c741*/
  this->q014 = 0; /*0x55c744*/
  this->q018 = 0; /*0x55c747*/
  *this = &LZOStraw::`vftable'; /*0x55c74a*/
  this->q014 = __2_YAPAXI_Z(2 * a3); /*0x55c75a*/
  if ( !a2 ) /*0x55c75d*/
    this->q018 = __2_YAPAXI_Z(this->q01C + *(this + 8)); /*0x55c770*/
  return this; /*0x55c775*/
}


// ==== 0x0055C780  LZOStraw::Destructor  this=LZOStraw  sig=csp ====
int __thiscall LZOStraw_Destructor(int *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*(this + 5); /*0x55c783*/
  *this = (int)&LZOStraw::`vftable'; /*0x55c786*/
  __3_YAXPAX_Z(v2); /*0x55c78d*/
  v3 = (void *)*(this + 6); /*0x55c792*/
  *(this + 5) = 0; /*0x55c795*/
  __3_YAXPAX_Z(v3); /*0x55c79d*/
  *(this + 6) = 0; /*0x55c7a7*/
  return Straw::Dtor(this); /*0x55c7b3*/
}


// ==== 0x0055C7C0  LZOStraw::Decompress  this=LZOStraw  sig=csp ====
int __thiscall LCW::Decompress(int this, CCINIClass *aP1, signed int Size)
{
  CCINIClass *v3; // ebp
  signed int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  size_t v8; // ecx
  Straw *v9; // ebx
  AbstractClass *v10; // edi
  int v11; // eax
  int v12; // edx
  __int16 v13; // ax
  int eax18; // eax
  _BYTE *ecx18; // ecx
  void *v16; // ebx
  unsigned __int16 v17; // dx
  CCINIClass *v14; // [esp-10h] [ebp-24h]
  CCINIClass *v15; // [esp-10h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h] BYREF

  v3 = aP1; /*0x55c7c5*/
  v21 = 0; /*0x55c7ce*/
  if ( !aP1 ) /*0x55c7d6*/
    return 0; /*0x55c7d6*/
  v5 = Size; /*0x55c7dc*/
  if ( Size < 1 ) /*0x55c7e3*/
    return 0; /*0x55c981*/
  while ( 1 ) /*0x55c7f8*/
  {
    v6 = *(_DWORD *)(this + 16); /*0x55c7f8*/
    if ( v6 > 0 ) /*0x55c7fd*/
    {
      v7 = v5; /*0x55c801*/
      if ( v5 >= v6 ) /*0x55c803*/
        v7 = *(_DWORD *)(this + 16); /*0x55c805*/
      if ( *(_DWORD *)(this + 12) == 1 ) /*0x55c80e*/
        memcpy(v3, (const void *)(*(_DWORD *)(this + 20) + *(unsigned __int16 *)(this + 38) - v6), v7); /*0x55c81e*/
      else
        memcpy(v3, (const void *)(*(_DWORD *)(this + 24) + *(unsigned __int16 *)(this + 36) - v6 + 4), v7); /*0x55c832*/
      v3 = (CCINIClass *)((char *)v3 + v7); /*0x55c841*/
      v5 -= v7; /*0x55c843*/
      v8 = *(_DWORD *)(this + 16) - v7; /*0x55c845*/
      Size = v5; /*0x55c849*/
      *(_DWORD *)(this + 16) = v8; /*0x55c84d*/
      v21 += v7; /*0x55c850*/
    }
    if ( !v5 ) /*0x55c856*/
      break; /*0x55c856*/
    if ( *(_DWORD *)(this + 12) == 1 ) /*0x55c860*/
    {
      v9 = (Straw *)(this + 36); /*0x55c862*/
      if ( Delegate::Invoke((_DWORD *)this, this + 36, (Straw *)4) != 4 ) /*0x55c872*/
        return v21; /*0x55c872*/
      v10 = (AbstractClass *)__2_YAPAXI_Z(*(unsigned __int16 *)v9->__pad_0); /*0x55c88b*/
      v11 = Delegate::Invoke((_DWORD *)this, (int)v10, (Straw *)*(unsigned __int16 *)v9->__pad_0); /*0x55c891*/
      v12 = *(unsigned __int16 *)v9->__pad_0; /*0x55c898*/
      if ( v11 != v12 ) /*0x55c89d*/
      {
        if ( v10 ) /*0x55c966*/
          __3_YAXPAX_Z(v10); /*0x55c969*/
        return v21; /*0x55c969*/
      }
      v14 = *(CCINIClass **)(this + 20); /*0x55c8ad*/
      v22 = 4; /*0x55c8b0*/
      DecodeBlockLCW((unsigned __int8 *)v10, v12, v14, &v22, 0); /*0x55c8b8*/
      __3_YAXPAX_Z(v10); /*0x55c8be*/
      *(_DWORD *)(this + 16) = *(unsigned __int16 *)(this + 38); /*0x55c8cc*/
    }
    else
    {
      v13 = Delegate::Invoke((_DWORD *)this, *(_DWORD *)(this + 20), *(Straw **)(this + 28)); /*0x55c8db*/
      *(_WORD *)(this + 38) = v13; /*0x55c8e3*/
      if ( !v13 ) /*0x55c8e7*/
        return v21; /*0x55c8e7*/
      eax18 = __2_YAPAXI_Z(0x10000u); /*0x55c8f2*/
      ecx18 = *(_BYTE **)(this + 20); /*0x55c8f7*/
      v16 = (void *)eax18; /*0x55c8fd*/
      v15 = (CCINIClass *)(*(_DWORD *)(this + 24) + 4); /*0x55c90d*/
      v17 = *(_WORD *)(this + 38); /*0x55c90e*/
      aP1 = 0; /*0x55c912*/
      WriteCompressionBlock(ecx18, v17, v15, (int *)&aP1, eax18); /*0x55c91a*/
      *(_WORD *)(this + 36) = (_WORD)aP1; /*0x55c928*/
      __3_YAXPAX_Z(v16); /*0x55c92b*/
      memcpy(*(void **)(this + 24), (const void *)(this + 36), 4u); /*0x55c937*/
      *(_DWORD *)(this + 16) = *(unsigned __int16 *)(this + 36) + 4; /*0x55c947*/
    }
    if ( Size <= 0 ) /*0x55c950*/
      return v21; /*0x55c961*/
    v5 = Size; /*0x55c7f4*/
  }
  return v21; /*0x55c95b*/
}


// ==== 0x0055C990  LZOStraw::QueryInterface  this=LZOStraw  sig=csp ====
LZOStraw *__thiscall LZOStraw_Destru::QueryInterface(int *Block, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*(Block + 5); /*0x55c993*/
  *Block = (int)&LZOStraw::`vftable'; /*0x55c996*/
  __3_YAXPAX_Z(v3); /*0x55c99d*/
  v4 = (void *)*(Block + 6); /*0x55c9a2*/
  *(Block + 5) = 0; /*0x55c9a5*/
  __3_YAXPAX_Z(v4); /*0x55c9ad*/
  *(Block + 6) = 0; /*0x55c9b7*/
  Straw::Dtor(Block); /*0x55c9be*/
  if ( (a2 & 1) != 0 ) /*0x55c9c8*/
    __3_YAXPAX_Z(Block); /*0x55c9cb*/
  return (LZOStraw *)Block; /*0x55c9d5*/
}


// ==== 0x0055C9E0  sub_55C9E0  this=-  sig=ida-proto ====
int sub_55C9E0()
{
  dword_ABCD68 = 0; /*0x55c9e2*/
  dword_ABCD6C = 0; /*0x55c9e7*/
  dword_ABCD70 = 0; /*0x55c9ec*/
  dword_ABCD74 = 0; /*0x55c9f1*/
  return 0; /*0x55c9f6*/
}


// ==== 0x0055CA00  sub_55CA00  this=-  sig=ida-proto ====
void sub_55CA00()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55ca0c*/
  dbl_ABCD80 = Math::Sqrt(v0 + v0); /*0x55ca1e*/
}


// ==== 0x0055CA30  sub_55CA30  this=-  sig=ida-proto ====
void sub_55CA30()
{
  dbl_ABCDF0 = dbl_ABCD80 / 60.0; /*0x55ca3c*/
}


// ==== 0x0055CA50  sub_55CA50  this=-  sig=ida-proto ====
void sub_55CA50()
{
  dbl_ABCDD0 = 1.0 / dbl_ABCDF0; /*0x55ca5c*/
}


// ==== 0x0055CA70  sub_55CA70  this=-  sig=ida-proto ====
void sub_55CA70()
{
  dbl_ABCDC8 = 0.0174532925199433 * 45.0; /*0x55ca7c*/
}


// ==== 0x0055CA90  sub_55CA90  this=-  sig=ida-proto ====
void sub_55CA90()
{
  dbl_ABCD98 = 0.0174532925199433 * 60.0; /*0x55ca9c*/
}


// ==== 0x0055CAB0  sub_55CAB0  this=-  sig=ida-proto ====
void sub_55CAB0()
{
  dbl_ABCD60 = 0.0174532925199433 * 90.0; /*0x55cabc*/
}


// ==== 0x0055CAD0  sub_55CAD0  this=-  sig=ida-proto ====
__int64 sub_55CAD0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCD60 - dbl_ABCD98); /*0x55cae2*/
  result = Math::RoundToInt(v0 * dbl_ABCD80 * 0.5); /*0x55caf6*/
  dword_ABCDF8 = result; /*0x55cafb*/
  return result; /*0x55cb00*/
}


// ==== 0x0055CB10  sub_55CB10  this=-  sig=ida-proto ====
void sub_55CB10()
{
  dbl_ABCDA0 = Math::ArcTan((double)dword_ABCDF8 * 0.00390625); /*0x55cb27*/
}


// ==== 0x0055CB40  sub_55CB40  this=-  sig=ida-proto ====
void sub_55CB40()
{
  dbl_ABCDC0 = Math::ArcTan((double)(2 * dword_ABCDF8) / dbl_ABCD80); /*0x55cb62*/
}


// ==== 0x0055CB70  sub_55CB70  this=-  sig=ida-proto ====
__int64 sub_55CB70()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCDF8) + 0.5); /*0x55cb8b*/
  dword_ABCDEC = result; /*0x55cb90*/
  return result; /*0x55cb96*/
}


// ==== 0x0055CBA0  sub_55CBA0  this=-  sig=ida-proto ====
int sub_55CBA0()
{
  word_ABCD78 = 0; /*0x55cba2*/
  word_ABCD7A = 0; /*0x55cba8*/
  return 0; /*0x55cbae*/
}


// ==== 0x0055CBB0  sub_55CBB0  this=-  sig=ida-proto ====
int sub_55CBB0()
{
  dword_ABCDB0 = 0; /*0x55cbb2*/
  dword_ABCDB4 = 0; /*0x55cbb7*/
  dword_ABCDB8 = 0; /*0x55cbbc*/
  return 0; /*0x55cbc1*/
}


// ==== 0x0055CBD0  sub_55CBD0  this=-  sig=ida-proto ====
int sub_55CBD0()
{
  dword_ABCDE8 = 0; /*0x55cbd5*/
  dword_ABCDE0 = 128; /*0x55cbdf*/
  dword_ABCDE4 = 128; /*0x55cbe4*/
  return 128; /*0x55cbe9*/
}


// ==== 0x0055CBF0  VtableStub::Method_55CBF0  this=VtableStub  sig=ida-proto ====
char VtableStub::55CBF0()
{
  return byte_ABCD58; /*0x55cbf5*/
}


// ==== 0x0055CC00  sub_55CC00  this=-  sig=ida-proto ====
void sub_55CC00()
{
  byte_ABCD58 = 1; /*0x55cc00*/
}


// ==== 0x0055CC10  sub_55CC10  this=-  sig=ida-proto ====
void sub_55CC10()
{
  byte_ABCD58 = 0; /*0x55cc10*/
}


// ==== 0x0055CC20  ScreenCapture::Frame  this=ScreenCapture  sig=csp ====
char ScreenCapture_Frame()
{
  int v0; // eax
  LONG right; // ecx
  LONG bottom; // edx
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // esi
  LONG v6; // eax
  LONG v7; // ecx
  int i; // esi
  struct tagPOINT v10; // [esp+10h] [ebp-E0h] BYREF
  LONG v11; // [esp+18h] [ebp-D8h]
  LONG v12; // [esp+1Ch] [ebp-D4h]
  struct tagPOINT Point; // [esp+20h] [ebp-D0h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-C8h] BYREF
  struct tagPOINT v15; // [esp+38h] [ebp-B8h] BYREF
  char Buffer[4]; // [esp+40h] [ebp-B0h] BYREF
  int v17; // [esp+44h] [ebp-ACh]
  LONG v18; // [esp+48h] [ebp-A8h]
  LONG v19; // [esp+4Ch] [ebp-A4h]
  int v20[9]; // [esp+60h] [ebp-90h] BYREF
  _DWORD v21[22]; // [esp+84h] [ebp-6Ch] BYREF
  _BYTE v22[12]; // [esp+DCh] [ebp-14h] BYREF
  int v23; // [esp+E8h] [ebp-8h]

  LOBYTE(v0) = MEMORY[0xA8ED61]; /*0x55cc20*/
  if ( MEMORY[0xA8ED61] ) /*0x55cc33*/
  {
    if ( (byte_ABCDA8 & 1) == 0 ) /*0x55cc40*/
    {
      byte_ABCDA8 |= 1u; /*0x55cc44*/
      dword_ABCDD8 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 750) * 900.0); /*0x55cc5f*/
    }
    if ( !MEMORY[0xABCE0C] ) /*0x55cc6a*/
    {
      MEMORY[0xABCE0C] = (int)__2_YAPAXI_Z(4 * dword_ABCDD8); /*0x55cc89*/
      memset((void *)MEMORY[0xABCE0C], 0, 4 * dword_ABCDD8); /*0x55cc8f*/
      if ( !MEMORY[0xABCE0C] ) /*0x55cc9b*/
        MEMORY[0xA8ED61] = 0; /*0x55cc9d*/
    }
    GetClientRect(g_hWnd, &Rect); /*0x55ccaf*/
    Point.x = Rect.left; /*0x55ccc7*/
    Point.y = Rect.top; /*0x55ccd3*/
    v0 = ClientToScreen(g_hWnd, &Point); /*0x55ccd7*/
    if ( v0 ) /*0x55ccdb*/
    {
      v15 = *(struct tagPOINT *)&Rect.right; /*0x55cce9*/
      v0 = ClientToScreen(g_hWnd, &v15); /*0x55ccfc*/
      if ( v0 ) /*0x55cd00*/
      {
        right = Rect.right; /*0x55cd13*/
        bottom = Rect.bottom; /*0x55cd17*/
        v10 = Point; /*0x55cd23*/
        v11 = Rect.right; /*0x55cd2b*/
        v12 = Rect.bottom; /*0x55cd2f*/
        if ( MEMORY[0x87F7EC] ) /*0x55cd33*/
        {
          if ( MEMORY[0x87F7EC] <= 0 ) /*0x55cd3d*/
          {
            if ( MEMORY[0x87F7EC] >= 0 ) /*0x55cd49*/
              goto LABEL_17; /*0x55cd49*/
            right = MEMORY[0x87F7EC] + Rect.right; /*0x55cd4b*/
          }
          else
          {
            right = Rect.right - MEMORY[0x87F7EC]; /*0x55cd41*/
            v10.x = MEMORY[0x87F7EC] + Point.x; /*0x55cd43*/
          }
          v11 = right; /*0x55cd4d*/
        }
        else if ( !MEMORY[0x87F7F0] ) /*0x55cd37*/
        {
          goto LABEL_22; /*0x55cd37*/
        }
LABEL_17:
        if ( MEMORY[0x87F7F0] <= 0 ) /*0x55cd53*/
        {
          if ( MEMORY[0x87F7F0] >= 0 ) /*0x55cd60*/
            goto LABEL_22; /*0x55cd60*/
          bottom = MEMORY[0x87F7F0] + Rect.bottom; /*0x55cd62*/
        }
        else
        {
          bottom = Rect.bottom - MEMORY[0x87F7F0]; /*0x55cd58*/
          v10.y = MEMORY[0x87F7F0] + Point.y; /*0x55cd5a*/
        }
        v12 = bottom; /*0x55cd64*/
LABEL_22:
        v3 = MEMORY[0xABCE10]; /*0x55cd68*/
        if ( MEMORY[0xABCE10] >= dword_ABCDD8 ) /*0x55cd75*/
        {
          MEMORY[0xA8ED61] = 0; /*0x55ce3e*/
          DSurface::Construct((char *)v20, right, bottom, 0, 0); /*0x55ce44*/
          for ( i = 0; i < MEMORY[0xABCE10]; ++i ) /*0x55ce52*/
          {
            sprintf(Buffer, stru_82A038, i); /*0x55ce6d*/
            CCFileClass::Construct(v21, Buffer); /*0x55ce81*/
            XSurface::BlitWhole(v20, *(int **)(MEMORY[0xABCE0C] + 4 * i), 0, 1); /*0x55ce97*/
            CompressScreenshot(&MEMORY[0x885780]); /*0x55ceac*/
            v21[0] = &vt_CCFileClass; /*0x55ceb8*/
            v23 = 0; /*0x55cebf*/
            Vector::Clear(v22); /*0x55cec6*/
            v21[0] = &off_7E1668; /*0x55ced2*/
            BufferIOFileClass::Dtor(v21); /*0x55ced9*/
          }
          MEMORY[0xABCE10] = 0; /*0x55cef0*/
          LOBYTE(v0) = DSurface::Destroy(v20); /*0x55cef6*/
        }
        else
        {
          v4 = MEMORY[0xABCE0C]; /*0x55cd7b*/
          if ( *(_DWORD *)(MEMORY[0xABCE0C] + 4 * MEMORY[0xABCE10]) ) /*0x55cd81*/
            goto LABEL_28; /*0x55cd81*/
          v5 = __2_YAPAXI_Z(0x20u); /*0x55cd8d*/
          if ( v5 ) /*0x55cd94*/
          {
            v6 = v11; /*0x55cd96*/
            v7 = v12; /*0x55cd9a*/
            v5[1] = v11; /*0x55cd9e*/
            v5[2] = v7; /*0x55cda6*/
            v5[3] = 0; /*0x55cdae*/
            *v5 = &XSurface_Vtable; /*0x55cdb1*/
            v5[4] = 2; /*0x55cdb7*/
            Buffer::Init(0, 2 * v7 * v6); /*0x55cdbe*/
            *v5 = &BSurface_Vtable; /*0x55cdc3*/
          }
          else
          {
            v5 = 0; /*0x55cdcb*/
          }
          *(_DWORD *)(MEMORY[0xABCE0C] + 4 * MEMORY[0xABCE10]) = v5; /*0x55cdd9*/
          v4 = MEMORY[0xABCE0C]; /*0x55cddc*/
          v3 = MEMORY[0xABCE10]; /*0x55cde2*/
          bottom = v12; /*0x55cde7*/
          right = v11; /*0x55cdeb*/
          if ( *(_DWORD *)(MEMORY[0xABCE0C] + 4 * MEMORY[0xABCE10]) ) /*0x55cdef*/
          {
LABEL_28:
            v19 = bottom; /*0x55cdf4*/
            *(_DWORD *)Buffer = 0; /*0x55ce06*/
            v17 = 0; /*0x55ce0a*/
            v18 = right; /*0x55ce0e*/
            (*(void (__thiscall **)(_DWORD, char *, int, struct tagPOINT *, _DWORD, int))(**(_DWORD **)(v4 + 4 * v3) + 8))( /*0x55ce1d*/
              *(_DWORD *)(v4 + 4 * v3),
              Buffer,
              MEMORY[0x887308],
              &v10,
              0,
              1);
            v3 = MEMORY[0xABCE10]; /*0x55ce20*/
          }
          v0 = v3 + 1; /*0x55ce26*/
          MEMORY[0xABCE10] = v0; /*0x55ce29*/
        }
      }
    }
  }
  return v0; /*0x55ce25*/
}


// ==== 0x0055CF10  ObjectClass::Map_Get_55CF10  this=ObjectClass  sig=csp ====
char sub_55CF10()
{
  char result; // al
  int v1; // esi
  int v2; // eax
  DWORD Ticks; // [esp+0h] [ebp-Ch]

  Debug::Log(); /*0x55cf18*/
  result = MEMORY[0xA8B238][0]; /*0x55cf1d*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x55cf28*/
  {
    result = MEMORY[0x887628]; /*0x55cf2e*/
    if ( MEMORY[0x887628] ) /*0x55cf35*/
    {
      result = MEMORY[0xA8DBA0]; /*0x55cf3b*/
      if ( MEMORY[0xA8DBA0] ) /*0x55cf42*/
      {
        if ( MEMORY[0xA8EA0C] ) /*0x55cf4c*/
        {
          NetworkEventQueueClass::WaitForResponse((int)&g_NetworkEventQueue); /*0x55cf53*/
          v1 = 480; /*0x55cf61*/
          Ticks = Timer::GetTicks(); /*0x55cf66*/
          while ( 1 ) /*0x55cf74*/
          {
            if ( Ticks != -1 ) /*0x55cf79*/
            {
              v2 = Timer::GetTicks() - Ticks; /*0x55cf84*/
              if ( v2 >= 480 ) /*0x55cf8a*/
                break; /*0x55cf8a*/
              v1 = 480 - v2; /*0x55cf8c*/
            }
            if ( !v1 ) /*0x55cf90*/
              break; /*0x55cf90*/
            Event::Dispatch(); /*0x55cf92*/
            if ( Process::WaitForExit((const HANDLE *)&g_NetworkEventQueue, 0xAu, 0) ) /*0x55cfa0*/
              break; /*0x55cfa0*/
            v1 = 480; /*0x55cf70*/
          }
        }
        if ( !MEMORY[0xA8B23C] ) /*0x55cfb2*/
          return Network::SendUnreachable(); /*0x55cfb2*/
        result = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0xA8B23C] + 8))(MEMORY[0xA8B23C]); /*0x55cfb6*/
        if ( !result ) /*0x55cfbb*/
          return Network::SendUnreachable(); /*0x55cfbd*/
      }
    }
  }
  return result; /*0x55cfc2*/
}


// ==== 0x0055CFD0  ObjectClass::GameFrameCheck  this=ObjectClass  sig=csp ====
BOOL GameFrameCheck()
{
  char *v0; // eax
  int v1; // eax
  int v2; // edx
  void *v3; // ecx
  int v4; // esi
  int v5; // eax
  int Ticks; // [esp+8h] [ebp-7Ch]
  _BYTE v8[4]; // [esp+Ch] [ebp-78h] BYREF
  int i; // [esp+10h] [ebp-74h]
  char v10[112]; // [esp+14h] [ebp-70h] BYREF

  if ( (dword_A8ED54[12] & 0x3FF) == 0 && !CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    v0 = EventClass::AddEvent(v10, *(_DWORD *)(MEMORY[0x87F7E8][528729] + 48), 8u); /*0x55cff9*/
    if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x55d008*/
    {
      qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v0, 0x6Fu); /*0x55d025*/
      MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x55d037*/
      MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x55d04e*/
      ++MEMORY[0x87F7E8][524984]; /*0x55d054*/
    }
  }
  if ( BYTE1(MEMORY[0x87F7E8][528728]) /*0x55d07a*/
    || LOBYTE(MEMORY[0x87F7E8][539962])
    || LOBYTE(MEMORY[0x87F7E8][53878])
    || LOBYTE(MEMORY[0x87F7E8][528728]) )
  {
    ++MEMORY[0x87F7E8][538803]; /*0x55d080*/
    v1 = Scenario::ClearScreen(); /*0x55d086*/
    LOBYTE(v1) = BYTE1(MEMORY[0x87F7E8][528728]); /*0x55d08b*/
    if ( BYTE1(MEMORY[0x87F7E8][528728]) || LOBYTE(MEMORY[0x87F7E8][539962]) ) /*0x55d09a*/
    {
      if ( MEMORY[0x87F7E8][7904] ) /*0x55d0a8*/
      {
        Tooltip::Enable((void *)MEMORY[0x87F7E8][7904], 0); /*0x55d0ab*/
        LOBYTE(v1) = BYTE1(MEMORY[0x87F7E8][528728]); /*0x55d0b0*/
      }
      if ( (_BYTE)v1 || LOBYTE(MEMORY[0x87F7E8][539962]) ) /*0x55d0bf*/
      {
        v2 = MEMORY[0x87F7E8][536212]; /*0x55d0cb*/
        if ( MEMORY[0x87F7E8][536213] && (MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4) ) /*0x55d0dd*/
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 160))(v1); /*0x55d0e2*/
          LOBYTE(v1) = BYTE1(MEMORY[0x87F7E8][528728]); /*0x55d0e8*/
          v2 = MEMORY[0x87F7E8][536212]; /*0x55d0ed*/
        }
        if ( (_BYTE)v1 ) /*0x55d0f5*/
        {
          if ( v2 == 4 && !LOBYTE(dword_A8ED54[747]) ) /*0x55d106*/
          {
            if ( dword_A8ED54[238364] ) /*0x55d10e*/
              BYTE1(MEMORY[0x87F7E8][536630]) = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
            ProcessGameResults(0); /*0x55d11e*/
          }
          LOBYTE(MEMORY[0x87F7E8][539962]) = 0; /*0x55d123*/
          LOBYTE(MEMORY[0x87F7E8][53878]) = 0; /*0x55d12f*/
          LOWORD(MEMORY[0x87F7E8][528728]) = 0; /*0x55d135*/
          InitLoadingScreenResources(); /*0x55d13b*/
          WTFMode::Shutdown(&MEMORY[0x87F7E8][536212]); /*0x55d145*/
          Scenario::EndGameFlow(0); /*0x55d14a*/
          WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x55d154*/
          v3 = (void *)MEMORY[0x87F7E8][7904]; /*0x55d159*/
          LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d15f*/
          if ( !MEMORY[0x87F7E8][7904] ) /*0x55d167*/
            goto LABEL_52; /*0x55d167*/
          goto LABEL_26; /*0x55d167*/
        }
        if ( LOBYTE(MEMORY[0x87F7E8][539962]) ) /*0x55d183*/
        {
          if ( v2 == 4 && !LOBYTE(dword_A8ED54[747]) ) /*0x55d194*/
          {
            if ( dword_A8ED54[238364] ) /*0x55d19c*/
              BYTE1(MEMORY[0x87F7E8][536630]) = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
            ProcessGameResults(0); /*0x55d1ac*/
          }
          LOBYTE(MEMORY[0x87F7E8][539962]) = 0; /*0x55d1b7*/
          LOBYTE(MEMORY[0x87F7E8][53878]) = 0; /*0x55d1bd*/
          LOWORD(MEMORY[0x87F7E8][528728]) = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown(&MEMORY[0x87F7E8][536212]); /*0x55d1d3*/
          Scenario::EndGame(); /*0x55d1d8*/
          WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x55d1e2*/
          v3 = (void *)MEMORY[0x87F7E8][7904]; /*0x55d1e7*/
          LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d1ed*/
          if ( !MEMORY[0x87F7E8][7904] ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
LABEL_26:
          Tooltip::Enable(v3, MEMORY[0x87F7E8][539878]); /*0x55d16d*/
LABEL_52:
          --MEMORY[0x87F7E8][538803]; /*0x55d341*/
          return LOBYTE(MEMORY[0x87F7E8][539758]) == 0; /*0x55d341*/
        }
      }
    }
    if ( LOBYTE(MEMORY[0x87F7E8][53878]) ) /*0x55d212*/
    {
      LOBYTE(MEMORY[0x87F7E8][539962]) = 0; /*0x55d21f*/
      LOBYTE(MEMORY[0x87F7E8][53878]) = 0; /*0x55d225*/
      LOWORD(MEMORY[0x87F7E8][528728]) = 0; /*0x55d22b*/
      WTFMode::Shutdown(&MEMORY[0x87F7E8][536212]); /*0x55d231*/
      GameFrameCheck_Check(); /*0x55d236*/
      WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x55d240*/
      LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d245*/
    }
    else if ( LOBYTE(MEMORY[0x87F7E8][528728]) ) /*0x55d256*/
    {
      LOBYTE(MEMORY[0x87F7E8][539962]) = 0; /*0x55d262*/
      LOBYTE(MEMORY[0x87F7E8][53878]) = 0; /*0x55d268*/
      LOWORD(MEMORY[0x87F7E8][528728]) = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown(&MEMORY[0x87F7E8][536212]); /*0x55d27e*/
      GameFrameCheck_Check_686570(); /*0x55d283*/
      WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x55d28d*/
      LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d292*/
      Debug::Log(); /*0x55d29d*/
      if ( MEMORY[0x87F7E8][536212] == 4 && MEMORY[0x87F7E8][8080] && LOBYTE(MEMORY[0x87F7E8][538862]) ) /*0x55d2c5*/
      {
        if ( MEMORY[0x87F7E8][539785] ) /*0x55d2cd*/
        {
          NetworkEventQueueClass::WaitForResponse((int)&dword_A8ED54[121183]); /*0x55d2d4*/
          v4 = 480; /*0x55d2e2*/
          Ticks = Timer::GetTicks(v8); /*0x55d2e7*/
          for ( i = 480; ; v4 = i ) /*0x55d2eb*/
          {
            if ( Ticks != -1 ) /*0x55d2fa*/
            {
              v5 = Timer::GetTicks(v8) - Ticks; /*0x55d305*/
              if ( v5 >= v4 ) /*0x55d30b*/
                break; /*0x55d30b*/
              v4 -= v5; /*0x55d30d*/
            }
            if ( !v4 ) /*0x55d311*/
              break; /*0x55d311*/
            Event::Dispatch(); /*0x55d313*/
            if ( (unsigned __int8)Process::WaitForExit(10, 0) ) /*0x55d320*/
              break; /*0x55d320*/
          }
        }
        if ( !MEMORY[0x87F7E8][536213] /*0x55d335*/
          || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 8))(MEMORY[0x87F7E8][536213]) )
        {
          Network::SendUnreachable(); /*0x55d33c*/
        }
      }
    }
    goto LABEL_52; /*0x55d24b*/
  }
  return LOBYTE(MEMORY[0x87F7E8][539758]) == 0; /*0x55d351*/
}


// ==== 0x0055D360  ObjectClass::GameFrameLoop  this=ObjectClass  sig=csp ====
bool __usercall GameFrameLoop@<al>(int a1@<ebp>)
{
  int v1; // eax
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  int *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // esi
  _DWORD *v17; // edi
  int v18; // eax
  char v20; // cl
  int *v21; // eax
  int v22; // esi
  _BYTE *WaypointCoords; // eax
  unsigned __int8 v24; // cl
  int v25; // ecx
  int j; // esi
  _BYTE *v27; // eax
  unsigned __int8 v28; // cl
  int v29; // ecx
  int v30; // esi
  _BYTE *v31; // eax
  unsigned __int8 v32; // cl
  int v33; // ecx
  int v34; // esi
  int Object; // eax
  char *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // edx
  int Time; // [esp+10h] [ebp-1B4h] BYREF
  int v43; // [esp+14h] [ebp-1B0h] BYREF
  int v44; // [esp+18h] [ebp-1ACh]
  int v45; // [esp+1Ch] [ebp-1A8h] BYREF
  int i; // [esp+20h] [ebp-1A4h] BYREF
  int v47; // [esp+24h] [ebp-1A0h] BYREF
  _BYTE v48[8]; // [esp+28h] [ebp-19Ch] BYREF
  int v49; // [esp+30h] [ebp-194h] BYREF
  int v50; // [esp+34h] [ebp-190h] BYREF
  int v51; // [esp+38h] [ebp-18Ch] BYREF
  int v52; // [esp+3Ch] [ebp-188h] BYREF
  int v53; // [esp+40h] [ebp-184h] BYREF
  _DWORD v54[2]; // [esp+44h] [ebp-180h] BYREF
  char Str[264]; // [esp+4Ch] [ebp-178h] BYREF
  _BYTE Buffer[112]; // [esp+154h] [ebp-70h] BYREF

  if ( !LOBYTE(MEMORY[0x87F7E8][539758]) ) /*0x55d371*/
    return 1; /*0x55d371*/
  LOBYTE(dword_A8ED54[47105]) = 1; /*0x55d37c*/
  if ( !LOBYTE(dword_A8ED54[11]) ) /*0x55d385*/
  {
    while ( !MEMORY[0x87F7E8][536212] || MEMORY[0x87F7E8][536212] == 5 ) /*0x55d399*/
    {
      ((void (__stdcall *)(int))Sleep)(500); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( LOBYTE(dword_A8ED54[11]) ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    ((void (__stdcall *)(int))Sleep)(10); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
LABEL_8:
  if ( dword_A8ED54[12] >= MEMORY[0x87F7E8][539327] ) /*0x55d3c8*/
    nullsub_35(); /*0x55d3cf*/
  MEMORY[0x87F7E8][536413] = ((int (*)(void))timeGetTime)(); /*0x55d3da*/
  if ( MEMORY[0x87F7E8][539336] ) /*0x55d3e6*/
    BYTE2(dword_A8ED54[7]) = 1; /*0x55d3e8*/
  if ( LOBYTE(MEMORY[0x87F7E8][539364]) == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    v1 = MEMORY[0x87F7E8][528715]; /*0x55d401*/
    if ( MEMORY[0x87F7E8][528715] == -1 ) /*0x55d409*/
      v1 = MEMORY[0x87F7E8][528716]; /*0x55d40b*/
    if ( BYTE1(MEMORY[0x87F7E8][539887]) ) /*0x55d418*/
    {
      if ( v1 == -1 ) /*0x55d41d*/
        Theme::QueueSong((int)&MEMORY[0x87F7E8][528714], -2); /*0x55d421*/
    }
    else if ( v1 != -3 ) /*0x55d426*/
    {
      Theme::Stop(&MEMORY[0x87F7E8][528714], 1); /*0x55d42f*/
      Theme::QueueSong((int)&MEMORY[0x87F7E8][528714], -3); /*0x55d43b*/
    }
  }
  if ( !MEMORY[0x87F7E8][536212] ) /*0x55d447*/
  {
    if ( !LOBYTE(dword_A8ED54[34]) ) /*0x55d76e*/
    {
      MEMORY[0x87F7E8][539870] = 2; /*0x55d774*/
      MEMORY[0x87F7E8][7896] = Timer::GetTicks(&v43); /*0x55d783*/
      MEMORY[0x87F7E8][7897] = v43; /*0x55d791*/
      MEMORY[0x87F7E8][7898] = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
LABEL_61:
    v15 = MEMORY[0x87F7E8][539870]; /*0x55d79e*/
    MEMORY[0x87F7E8][7896] = Timer::GetTicks(&v43); /*0x55d7b1*/
    MEMORY[0x87F7E8][7897] = v43; /*0x55d7b6*/
    MEMORY[0x87F7E8][7898] = v15; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( MEMORY[0x87F7E8][536212] == 5 || MEMORY[0x87F7E8][536217] != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x55d46a*/
  {
    MEMORY[0x87F7E8][7896] = Timer::GetTicks(&v43); /*0x55d47b*/
    MEMORY[0x87F7E8][7897] = v43; /*0x55d480*/
    MEMORY[0x87F7E8][7898] = 0; /*0x55d486*/
  }
  else
  {
    if ( MEMORY[0x87F7E8][536412] ) /*0x55d499*/
    {
      v2 = 60 / MEMORY[0x87F7E8][536412]; /*0x55d507*/
      MEMORY[0x87F7E8][7896] = Timer::GetTicks(&v43); /*0x55d50e*/
      MEMORY[0x87F7E8][7897] = v43; /*0x55d517*/
      MEMORY[0x87F7E8][7898] = v2; /*0x55d528*/
      v3 = 1000 / MEMORY[0x87F7E8][536412]; /*0x55d532*/
      Time = timeGetTime(&v43); /*0x55d53d*/
      Timer::EnableHighPrecision(&v43); /*0x55d541*/
      MEMORY[0x87F7E8][7888] = Time; /*0x55d54e*/
      v44 = v3; /*0x55d554*/
      MEMORY[0x87F7E8][7889] = v43; /*0x55d558*/
      MEMORY[0x87F7E8][7890] = v3; /*0x55d55e*/
    }
    else
    {
      MEMORY[0x87F7E8][7896] = Timer::GetTicks(&v43); /*0x55d4a9*/
      MEMORY[0x87F7E8][7898] = 2; /*0x55d4b2*/
      MEMORY[0x87F7E8][7897] = v43; /*0x55d4bc*/
      Time = timeGetTime(&v43); /*0x55d4ca*/
      Timer::EnableHighPrecision(&v43); /*0x55d4ce*/
      MEMORY[0x87F7E8][7888] = Time; /*0x55d4e0*/
      v44 = 33; /*0x55d4e6*/
      MEMORY[0x87F7E8][7889] = v43; /*0x55d4ea*/
      MEMORY[0x87F7E8][7890] = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(&v43); /*0x55d568*/
    v4 = MEMORY[0x87F7E8][7890]; /*0x55d572*/
    if ( MEMORY[0x87F7E8][7888] != -1 ) /*0x55d57b*/
    {
      v5 = timeGetTime(&MEMORY[0x87F7E8][7889]) - MEMORY[0x87F7E8][7888]; /*0x55d587*/
      if ( v5 >= v4 ) /*0x55d58f*/
        v4 = 0; /*0x55d595*/
      else
        v4 -= v5; /*0x55d591*/
    }
    v6 = MEMORY[0x87F7E8][536410]; /*0x55d59c*/
    a1 = 0; /*0x55d5a2*/
    dword_A8ED54[47148] = v4; /*0x55d5a7*/
    if ( MEMORY[0x87F7E8][536212] == 4 ) /*0x55d5ad*/
    {
      if ( MEMORY[0x87F7E8][536410] <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      v7 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount(&MEMORY[0x87F7E8][539766]) > 0 ) /*0x55d5ca*/
      {
        v8 = &MEMORY[0x87F7E8][538853]; /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( a1 <= *v8 ) /*0x55d5d9*/
            a1 = *v8; /*0x55d5db*/
          ++v7; /*0x55d5e2*/
          ++v8; /*0x55d5e3*/
        }
        while ( v7 < Network::GetSendCount(&MEMORY[0x87F7E8][539766]) ); /*0x55d5ed*/
        if ( a1 ) /*0x55d5f1*/
        {
          if ( a1 >= v6 / 4 ) /*0x55d604*/
          {
            v9 = MEMORY[0x87F7E8][7890]; /*0x55d60b*/
            if ( MEMORY[0x87F7E8][7888] != -1 ) /*0x55d616*/
            {
              v10 = timeGetTime(&MEMORY[0x87F7E8][7889]) - MEMORY[0x87F7E8][7888]; /*0x55d622*/
              if ( v10 >= v9 ) /*0x55d62a*/
                v9 = 0; /*0x55d630*/
              else
                v9 -= v10; /*0x55d62c*/
            }
            Time = timeGetTime(&v43); /*0x55d63f*/
            Timer::EnableHighPrecision(&v43); /*0x55d643*/
            MEMORY[0x87F7E8][7888] = Time; /*0x55d653*/
            v44 = v9 + 10; /*0x55d65d*/
            MEMORY[0x87F7E8][7889] = v43; /*0x55d661*/
            MEMORY[0x87F7E8][7890] = v9 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(&v43); /*0x55d66c*/
          }
          if ( a1 >= v6 / 2 ) /*0x55d67f*/
          {
            v11 = MEMORY[0x87F7E8][7890]; /*0x55d686*/
            if ( MEMORY[0x87F7E8][7888] != -1 ) /*0x55d68e*/
            {
              v12 = timeGetTime(&MEMORY[0x87F7E8][7889]) - MEMORY[0x87F7E8][7888]; /*0x55d69a*/
              if ( v12 >= v11 ) /*0x55d6a2*/
                v11 = 0; /*0x55d6a8*/
              else
                v11 -= v12; /*0x55d6a4*/
            }
            Time = timeGetTime(&v43); /*0x55d6b7*/
            Timer::EnableHighPrecision(&v43); /*0x55d6bb*/
            MEMORY[0x87F7E8][7888] = Time; /*0x55d6cb*/
            v44 = v11 + 10; /*0x55d6d5*/
            MEMORY[0x87F7E8][7889] = v43; /*0x55d6d9*/
            MEMORY[0x87F7E8][7890] = v11 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(&v43); /*0x55d6e4*/
          }
          if ( a1 >= 3 * v6 / 4 ) /*0x55d6f7*/
          {
            v13 = MEMORY[0x87F7E8][7890]; /*0x55d702*/
            if ( MEMORY[0x87F7E8][7888] != -1 ) /*0x55d70a*/
            {
              v14 = timeGetTime(&MEMORY[0x87F7E8][7889]) - MEMORY[0x87F7E8][7888]; /*0x55d716*/
              if ( v14 >= v13 ) /*0x55d71e*/
                v13 = 0; /*0x55d724*/
              else
                v13 -= v14; /*0x55d720*/
            }
            Time = timeGetTime(&v43); /*0x55d733*/
            Timer::EnableHighPrecision(&v43); /*0x55d737*/
            MEMORY[0x87F7E8][7888] = Time; /*0x55d747*/
            v44 = v13 + 10; /*0x55d751*/
            MEMORY[0x87F7E8][7889] = v43; /*0x55d755*/
            MEMORY[0x87F7E8][7890] = v13 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(&v43); /*0x55d760*/
          }
        }
      }
    }
  }
LABEL_62:
  if ( MEMORY[0x87F7E8][536212] && MEMORY[0x87F7E8][536212] != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 1584) ) /*0x55d7da*/
  {
    v16 = *(_DWORD *)(MEMORY[0x87F7E8][536210] + 1576); /*0x55d7ea*/
    if ( *(_DWORD *)(MEMORY[0x87F7E8][536210] + 1568) != -1 ) /*0x55d7f9*/
    {
      v17 = (_DWORD *)(MEMORY[0x87F7E8][536210] + 1568); /*0x55d7f0*/
      v18 = Timer::GetTicks(v17 + 1) - *v17; /*0x55d803*/
      if ( v18 >= v16 ) /*0x55d807*/
      {
LABEL_69:
        *(_BYTE *)(MEMORY[0x87F7E8][536210] + 1584) = 0; /*0x55d80f*/
        ScenarioClass::ProcessIntroTimer(); /*0x55d81c*/
        goto LABEL_70; /*0x55d81c*/
      }
      v16 -= v18; /*0x55d809*/
    }
    if ( v16 > 0 ) /*0x55d80d*/
      goto LABEL_70; /*0x55d80d*/
    goto LABEL_69; /*0x55d80d*/
  }
LABEL_70:
  if ( *(_DWORD *)(MEMORY[0x87F7E8][536210] + 1580) ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][7887] + 92))(MEMORY[0x87F7E8][7887]); /*0x55d847*/
    TacticalMap::Redraw(MEMORY[0x87F7E8]); /*0x55d84f*/
    SyncDelay::Start(); /*0x55d854*/
    LOBYTE(dword_A8ED54[47105]) = 0; /*0x55d866*/
    return LOBYTE(MEMORY[0x87F7E8][539758]) == 0; /*0x55d877*/
  }
LABEL_72:
  v20 = MEMORY[0x87F7E8][538500]; /*0x55d878*/
  if ( (MEMORY[0x87F7E8][538500] & 2) == 0 && !dword_A8ED54[19] && LOBYTE(dword_A8ED54[11]) ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable(MEMORY[0x87F7E8], &v51, &v53, &v52); /*0x55d8ab*/
    SyncDelayClass::ProcessNetworkSync(&v51); /*0x55d8b4*/
    if ( LOBYTE(MEMORY[0x87F7E8][536627]) ) /*0x55d8c0*/
      DrawHUD(); /*0x55d8c4*/
    if ( (dword_A8ED54[12] & 7) == 7 && MEMORY[0x87F7E8][536212] == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&MEMORY[0x87F7E8][539766]); /*0x55d8e3*/
    MarkAllFootOccupancies(); /*0x55d8e8*/
    TacticalMap::Redraw(MEMORY[0x87F7E8]); /*0x55d8f2*/
    v20 = MEMORY[0x87F7E8][538500]; /*0x55d8f7*/
  }
  BYTE1(dword_A8ED54[18]) = 0; /*0x55d903*/
  if ( (v20 & 1) != 0 || (v20 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v20 & 1) != 0 ) /*0x55d91a*/
    {
      v21 = RequestMapSnapshot((_DWORD *)MEMORY[0x87F7E8][7887], v54); /*0x55d92b*/
      Time = *v21; /*0x55d936*/
      v43 = v21[1]; /*0x55d945*/
      FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&Time, 8); /*0x55d949*/
      v45 = MEMORY[0x87F7E8][539960]; /*0x55d960*/
      FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&v45, 4); /*0x55d964*/
      v22 = 0; /*0x55d969*/
      for ( i = 0; v22 < v45; i += v25 ) /*0x55d973*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(MEMORY[0x87F7E8][539957] + 4 * v22)); /*0x55d983*/
        v24 = WaypointCoords[4]; /*0x55d988*/
        if ( v24 ) /*0x55d98d*/
          v25 = *(_DWORD *)WaypointCoords & 0xFFFFFF | (v24 << 24); /*0x55d9a4*/
        else
          v25 = -1; /*0x55d98f*/
        ++v22; /*0x55d9b0*/
      }
      FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&i, 4); /*0x55d9c5*/
      for ( j = 0; j < v45; ++j ) /*0x55d9d0*/
      {
        v27 = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(MEMORY[0x87F7E8][539957] + 4 * j)); /*0x55d9e0*/
        v28 = v27[4]; /*0x55d9e5*/
        if ( v28 ) /*0x55d9ea*/
          v29 = *(_DWORD *)v27 & 0xFFFFFF | (v28 << 24); /*0x55da02*/
        else
          v29 = -1; /*0x55d9ec*/
        v49 = v29; /*0x55da08*/
        FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&v49, 4); /*0x55da14*/
      }
      FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&dword_A8ED54[47146], 4); /*0x55da2c*/
      FileClass::Write(&MEMORY[0x87F7E8][538473], (int)&dword_A8ED54[47147], 4); /*0x55da3d*/
      v20 = MEMORY[0x87F7E8][538500]; /*0x55da42*/
      dword_A8ED54[47146] = 0; /*0x55da48*/
      dword_A8ED54[47147] = 0; /*0x55da4e*/
    }
    if ( (v20 & 2) != 0 ) /*0x55da57*/
    {
      if ( CCFileClass::Read(&MEMORY[0x87F7E8][538473], &Time, 8) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition(MEMORY[0x87F7E8][7887], &Time); /*0x55da7e*/
      if ( CCFileClass::Read(&MEMORY[0x87F7E8][538473], &v45, 4) == 4 ) /*0x55da97*/
      {
        v30 = 0; /*0x55daa2*/
        for ( i = 0; v30 < MEMORY[0x87F7E8][539960]; i += v33 ) /*0x55daaa*/
        {
          v31 = ScriptAction::GetWaypointCoords(v48, *(_DWORD **)(MEMORY[0x87F7E8][539957] + 4 * v30)); /*0x55daba*/
          v32 = v31[4]; /*0x55dabf*/
          if ( v32 ) /*0x55dac4*/
            v33 = *(_DWORD *)v31 & 0xFFFFFF | (v32 << 24); /*0x55dadb*/
          else
            v33 = -1; /*0x55dac6*/
          ++v30; /*0x55dae8*/
        }
        CCFileClass::Read(&MEMORY[0x87F7E8][538473], &v50, 4); /*0x55dafd*/
        if ( v50 != i ) /*0x55db0c*/
          MapClass::UnselectAll_ClearLimboLaunchers(); /*0x55db0e*/
        v34 = 0; /*0x55db17*/
        for ( MoveFeedback = 1; v34 < v45; ++v34 ) /*0x55db22*/
        {
          if ( CCFileClass::Read(&MEMORY[0x87F7E8][538473], &v49, 4) == 4 ) /*0x55db38*/
          {
            v48[4] = 0; /*0x55db48*/
            CheckNetworkSync(v48, (int)v54, v49); /*0x55db4d*/
            Object = BuildingLoadQueue::FindObject(v48); /*0x55db56*/
            if ( Object ) /*0x55db5d*/
            {
              if ( v50 != i ) /*0x55db69*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)Object + 332))(Object); /*0x55db6f*/
                MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        MoveFeedback = 1; /*0x55db85*/
      }
      CCFileClass::Read(&MEMORY[0x87F7E8][538473], &dword_A8ED54[47146], 4); /*0x55db98*/
      CCFileClass::Read(&MEMORY[0x87F7E8][538473], &dword_A8ED54[47147], 4); /*0x55dba9*/
      MapClass::MarkForRedraw(MEMORY[0x87F7E8], 0); /*0x55dbb4*/
      TacticalMap::Redraw(MEMORY[0x87F7E8]); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&MEMORY[0x87F7E8][33514]); /*0x55dbc8*/
  if ( !MEMORY[0x87F7E8][536212] && !LOBYTE(dword_A8ED54[47149]) ) /*0x55dbe0*/
  {
    LOBYTE(dword_A8ED54[47149]) = 1; /*0x55dbee*/
    strcpy(Str, (const char *)(MEMORY[0x87F7E8][536210] + 4700)); /*0x55dc12*/
    Str[260] = 0; /*0x55dc1f*/
    v36 = strrchr(Str, 46); /*0x55dc28*/
    if ( v36 ) /*0x55dc32*/
      *v36 = 0; /*0x55dc34*/
    strcat(Str, aSav); /*0x55dc5c*/
    swprintf((#72 *const)Buffer, aS); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName(Str, Buffer, 0); /*0x55dc92*/
  }
  Scenario::Update(&MEMORY[0x87F6C0][46]); /*0x55dc9e*/
  v47 = dword_82A030; /*0x55dcb5*/
  if ( Mouse::IsButtonDown(MEMORY[0x87F7E8][539912]) || Mouse::IsButtonDown(MEMORY[0x87F7E8][539913]) ) /*0x55dcce*/
  {
    v38 = Math::RoundToInt((double)v47 * flt_82A034); /*0x55dd21*/
LABEL_127:
    v47 = v38; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( Mouse::IsButtonDown(MEMORY[0x87F7E8][539910]) || Mouse::IsButtonDown(MEMORY[0x87F7E8][539911]) ) /*0x55dcf8*/
  {
    v37 = MEMORY[0x87F7E8][61]; /*0x55dd01*/
    if ( MEMORY[0x87F7E8][61] <= MEMORY[0x87F7E8][62] ) /*0x55dd0e*/
      v37 = MEMORY[0x87F7E8][62]; /*0x55dd10*/
    v38 = v37 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
LABEL_128:
  if ( (dword_A8ED54[47152] & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible(6, &v47, 1); /*0x55dd42*/
  if ( (dword_A8ED54[47152] & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible(2, &v47, 1); /*0x55dd5f*/
  if ( (dword_A8ED54[47152] & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible(0, &v47, 1); /*0x55dd7a*/
  if ( (dword_A8ED54[47152] & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible(4, &v47, 1); /*0x55dd96*/
  FlushPlanningQueue(a1); /*0x55dd9b*/
  SyncFrameCounter((char *)&MEMORY[0x87F7E8][536862]); /*0x55dda5*/
  if ( MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4 ) /*0x55ddb7*/
  {
    if ( MEMORY[0x87F7E8][536213] ) /*0x55ddc1*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][536213] + 4))(MEMORY[0x87F7E8][536213]) ) /*0x55ddc5*/
      {
        v39 = *(_DWORD *)((MEMORY[0x87F7E8][61] << 11) + MEMORY[0x87F7E8][79] + 10268); /*0x55dde1*/
        if ( v39 ) /*0x55dde5*/
        {
          if ( *(_DWORD *)(v39 + 304) != 1 || (*(_BYTE *)(v39 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((_DWORD *)(MEMORY[0x87F7E8][536210] + 536), 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v40 = ((int (*)(void))timeGetTime)() - MEMORY[0x87F7E8][536413]; /*0x55de13*/
  if ( v40 > 1000 ) /*0x55de1e*/
    v40 = 1000; /*0x55de20*/
  MEMORY[0x87F7E8][536414] += v40; /*0x55de34*/
  ++MEMORY[0x87F7E8][536415]; /*0x55de3a*/
  ProcessNetworkEvents(); /*0x55de40*/
  FlushPlanningQueue(a1); /*0x55de45*/
  Event::Dispatch(); /*0x55de4a*/
  if ( BYTE1(MEMORY[0x87F7E8][528728]) /*0x55de71*/
    || LOBYTE(MEMORY[0x87F7E8][539962])
    || LOBYTE(MEMORY[0x87F7E8][53878])
    || LOBYTE(MEMORY[0x87F7E8][528728]) )
  {
    LOBYTE(dword_A8ED54[47105]) = 0; /*0x55dec8*/
    return 1; /*0x55ded2*/
  }
  v41 = ++dword_A8ED54[12]; /*0x55de7e*/
  if ( dword_A8ED54[123532] ) /*0x55de87*/
  {
    if ( dword_A8ED54[123532] < v41 ) /*0x55de8d*/
    {
      UpdateMouse(); /*0x55de8f*/
      dword_A8ED54[123532] = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start(); /*0x55de9a*/
  ProcessExpiredPointers(); /*0x55de9f*/
  ExecutePlanningQueue(); /*0x55dea4*/
  LOBYTE(dword_A8ED54[47105]) = 0; /*0x55deb6*/
  return LOBYTE(MEMORY[0x87F7E8][539758]) == 0; /*0x55d861*/
}


// ==== 0x0055DEE0  SyncDelayClass::ProcessNetworkSync  this=VOID_PTR  sig=csp ====
char __thiscall SyncDelay_Process(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int *v6; // ecx
  int v7; // esi
  int v8; // eax
  const wchar_t *v9; // eax
  int v10; // esi
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  Chat::ProcessMessages(); /*0x55dee8*/
  v2 = *this; /*0x55deed*/
  if ( !*this ) /*0x55def2*/
    return v2; /*0x55def2*/
  BYTE1(v2) &= ~8u; /*0x55def8*/
  v3 = v2; /*0x55defc*/
  v4 = v2; /*0x55df03*/
  BYTE1(v4) = BYTE1(v2) & 0xE8; /*0x55df05*/
  v13 = v4; /*0x55df0a*/
  if ( MEMORY[0x87F684] ) /*0x55df0e*/
  {
    v5 = (_DWORD *)MEMORY[0x87F690]; /*0x55df10*/
    if ( MEMORY[0x87F690] && *(_DWORD *)MEMORY[0x87F690] == v4 ) /*0x55df1b*/
      goto LABEL_7; /*0x55df1b*/
    v5 = (_DWORD *)SortedVector::BinarySearch(&v13); /*0x55df27*/
    if ( v5 ) /*0x55df2e*/
    {
      MEMORY[0x87F690] = (int)v5; /*0x55df30*/
LABEL_7:
      v6 = v5 + 1; /*0x55df35*/
      goto LABEL_9; /*0x55df38*/
    }
  }
  v5 = (_DWORD *)MEMORY[0x87F690]; /*0x55df3a*/
  v6 = (int *)&unk_B7883C; /*0x55df3f*/
LABEL_9:
  v7 = *v6; /*0x55df44*/
  if ( !*v6 ) /*0x55df44*/
  {
    v12 = v3; /*0x55df50*/
    if ( MEMORY[0x87F684] ) /*0x55df56*/
    {
      if ( v5 && *v5 == v3 ) /*0x55df5e*/
        goto LABEL_15; /*0x55df5e*/
      v5 = (_DWORD *)SortedVector::BinarySearch(&v12); /*0x55df6a*/
      if ( v5 ) /*0x55df71*/
      {
        MEMORY[0x87F690] = (int)v5; /*0x55df73*/
LABEL_15:
        v2 = (int)(v5 + 1); /*0x55df78*/
LABEL_23:
        v7 = *(_DWORD *)v2; /*0x55dfd1*/
        goto LABEL_24; /*0x55dfd1*/
      }
    }
    goto LABEL_22; /*0x55df71*/
  }
  LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 20))(v7, v3); /*0x55df82*/
  if ( !(_BYTE)v2 ) /*0x55df87*/
  {
    v12 = v3; /*0x55df8e*/
    if ( MEMORY[0x87F684] ) /*0x55df94*/
    {
      if ( !(unsigned __int8)SyncDelay::Check(&v12) ) /*0x55dfa0*/
      {
        v8 = SortedVector::BinarySearch(&v12); /*0x55dfb3*/
        if ( !v8 ) /*0x55dfba*/
          goto LABEL_22; /*0x55dfba*/
        MEMORY[0x87F690] = v8; /*0x55dfbc*/
      }
      v2 = MEMORY[0x87F690] + 4; /*0x55dfc7*/
      goto LABEL_23; /*0x55dfca*/
    }
LABEL_22:
    v2 = (int)&unk_B7883C; /*0x55dfcc*/
    goto LABEL_23; /*0x55dfcc*/
  }
LABEL_24:
  if ( !v7 /*0x55dffc*/
    || MEMORY[0xA8ED9C]
    && (v9 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7),
        (v2 = _wcsicmp(v9, g_INI_Key_De)) != 0) )
  {
    switch ( v4 ) /*0x55e07c*/
    {
      case 27: /*0x55e07c*/
        LOBYTE(v2) = UI_Create(); /*0x55e07e*/
        break;
      case 9: /*0x55e07c*/
        LOBYTE(v2) = Network_Process_6ABC40(&MEMORY[0x87F7E8]); /*0x55e094*/
        break;
      case 37: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e0ab*/
        if ( (*this & 0x800) != 0 ) /*0x55e0b0*/
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) & 0xFE; /*0x55e0b2*/
        else
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) | 1; /*0x55e0c1*/
        MEMORY[0xABCE14] = v2; /*0x55e0b7*/
        break;
      case 39: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e0db*/
        if ( (*this & 0x800) != 0 ) /*0x55e0e0*/
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) & 0xEF; /*0x55e0e2*/
        else
          BYTE1(v2) = BYTE1(MEMORY[0xABCE14]) | 0x10; /*0x55e0f1*/
        MEMORY[0xABCE14] = v2; /*0x55e0e7*/
        break;
      case 38: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e10b*/
        if ( (*this & 0x800) != 0 ) /*0x55e110*/
          LOBYTE(v2) = MEMORY[0xABCE14] & 0xFE; /*0x55e112*/
        else
          LOBYTE(v2) = MEMORY[0xABCE14] | 1; /*0x55e120*/
        MEMORY[0xABCE14] = v2; /*0x55e116*/
        break;
      case 40: /*0x55e07c*/
        v2 = MEMORY[0xABCE14]; /*0x55e139*/
        if ( (*this & 0x800) != 0 ) /*0x55e13e*/
          LOBYTE(v2) = MEMORY[0xABCE14] & 0xEF; /*0x55e140*/
        else
          LOBYTE(v2) = MEMORY[0xABCE14] | 0x10; /*0x55e14e*/
        MEMORY[0xABCE14] = v2; /*0x55e144*/
        break;
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v7 + 24))(v7, *this) ) /*0x55e006*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 32))(v7, *this); /*0x55e015*/
    LOBYTE(v2) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 28))(v7, *this); /*0x55e020*/
    if ( (_BYTE)v2 ) /*0x55e025*/
    {
      v10 = 0; /*0x55e031*/
      v2 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x55e03b*/
      if ( v2 == *this ) /*0x55e042*/
      {
        do /*0x55e070*/
        {
          EventQueue::Read(MEMORY[0x87F770]); /*0x55e04e*/
          v2 = (unsigned __int16)EventQueue::Process(MEMORY[0x87F770]); /*0x55e05e*/
          ++v10; /*0x55e063*/
        }
        while ( v10 < 10 && v2 == *this ); /*0x55e070*/
      }
    }
  }
  return v2; /*0x55e072*/
}


// ==== 0x0055E160  SyncDelay::Start  this=SyncDelay  sig=csp ====
signed int SyncDelay::Start()
{
  int v0; // ecx
  signed int v1; // esi
  DWORD Ticks; // eax
  signed int v3; // eax
  int v4; // esi
  signed int v5; // eax
  int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int v10; // esi
  signed int v11; // eax
  int v12; // ecx
  signed int v13; // esi
  DWORD v14; // eax
  signed int v15; // eax
  signed int v16; // esi
  signed int v17; // eax
  signed int result; // eax
  int v19; // esi
  int v20; // ecx
  bool v21; // cc
  int v22; // [esp+Ch] [ebp-18h] BYREF
  int v23; // [esp+10h] [ebp-14h] BYREF
  _DWORD v24[4]; // [esp+14h] [ebp-10h] BYREF

  v0 = MEMORY[0x887348]; /*0x55e160*/
  v1 = MEMORY[0x887350]; /*0x55e171*/
  if ( MEMORY[0x887348] != -1 ) /*0x55e179*/
  {
    Ticks = Timer::GetTicks(); /*0x55e180*/
    v0 = MEMORY[0x887348]; /*0x55e185*/
    v3 = Ticks - MEMORY[0x887348]; /*0x55e18b*/
    if ( v3 >= v1 ) /*0x55e18f*/
      v1 = 0; /*0x55e195*/
    else
      v1 -= v3; /*0x55e191*/
  }
  MEMORY[0xA8E314] += v1; /*0x55e1a7*/
  if ( MEMORY[0xA8B238][0] && MEMORY[0xA8B238][0] != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      v4 = MEMORY[0x887330]; /*0x55e1c7*/
      if ( MEMORY[0x887328] != -1 ) /*0x55e1cf*/
      {
        v5 = timeGetTime() - MEMORY[0x887328]; /*0x55e1db*/
        if ( v5 >= v4 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v4 -= v5; /*0x55e1e9*/
      }
      if ( !v4 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      Event::Dispatch(); /*0x55e1f3*/
      if ( !MEMORY[0xA8EDA0] && MEMORY[0xA8ED80] == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    v6 = MEMORY[0x887330]; /*0x55e216*/
    v22 = 0; /*0x55e21e*/
    if ( MEMORY[0x887328] != -1 ) /*0x55e222*/
    {
      v7 = timeGetTime() - MEMORY[0x887328]; /*0x55e22e*/
      if ( v7 >= v6 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v6 -= v7; /*0x55e238*/
    }
    if ( v6 > 10 ) /*0x55e23d*/
    {
      InputManager_ProcessEvents::Vtable((int *)&MEMORY[0x87F7E8], &v22, v24, &v23); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v22); /*0x55e25c*/
      ((void (__thiscall *)(LPPERSISTSTREAM))MEMORY[0x887324]->__tail_0[2].GetSizeMax)(MEMORY[0x887324]); /*0x55e269*/
      TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
LABEL_18:
    Sleep(0); /*0x55e278*/
LABEL_19:
    v8 = MEMORY[0x887330]; /*0x55e27b*/
    if ( MEMORY[0x887328] != -1 ) /*0x55e288*/
    {
      v9 = timeGetTime() - MEMORY[0x887328]; /*0x55e294*/
      if ( v9 >= v8 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v8 -= v9; /*0x55e2a2*/
    }
    if ( !v8 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  v10 = MEMORY[0x887350]; /*0x55e2b4*/
  if ( v0 != -1 ) /*0x55e2bc*/
  {
    v11 = Timer::GetTicks() - MEMORY[0x887348]; /*0x55e2c8*/
    if ( v11 >= v10 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v10 -= v11; /*0x55e2d2*/
  }
  if ( v10 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle(); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
      while ( 1 ) /*0x55e2e3*/
      {
        v12 = MEMORY[0x887348]; /*0x55e2e3*/
        v13 = MEMORY[0x887350]; /*0x55e2e9*/
        if ( MEMORY[0x887348] != -1 ) /*0x55e2f1*/
        {
          v14 = Timer::GetTicks(); /*0x55e2f8*/
          v12 = MEMORY[0x887348]; /*0x55e2fd*/
          v15 = v14 - MEMORY[0x887348]; /*0x55e303*/
          if ( v15 >= v13 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v13 -= v15; /*0x55e309*/
        }
        if ( !v13 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v16 = MEMORY[0x887350]; /*0x55e30f*/
        if ( v12 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
LABEL_37:
        Sleep(v16); /*0x55e336*/
      }
      v17 = Timer::GetTicks() - MEMORY[0x887348]; /*0x55e323*/
      if ( v17 >= v16 ) /*0x55e32b*/
      {
        v16 = 0; /*0x55e334*/
        goto LABEL_37; /*0x55e334*/
      }
      Sleep(v16 - v17); /*0x55e330*/
    }
  }
LABEL_38:
  if ( (byte_ABCD94 & 1) == 0 ) /*0x55e343*/
  {
    byte_ABCD94 |= 1u; /*0x55e34f*/
    dword_ABCD88 = Timer::GetTicks(); /*0x55e35a*/
    dword_ABCD90 = 0; /*0x55e35f*/
    atexit(nullsub_23); /*0x55e36a*/
  }
  result = dword_ABCD88; /*0x55e372*/
  v19 = dword_ABCD90; /*0x55e377*/
  if ( dword_ABCD88 == -1 ) /*0x55e37f*/
  {
LABEL_43:
    if ( v19 ) /*0x55e399*/
      return result; /*0x55e399*/
    goto LABEL_44; /*0x55e399*/
  }
  result = Timer::GetTicks() - dword_ABCD88; /*0x55e38b*/
  if ( result < v19 ) /*0x55e393*/
  {
    v19 -= result; /*0x55e395*/
    goto LABEL_43; /*0x55e395*/
  }
LABEL_44:
  v20 = dword_ABCD40 + g_FrameCounter_Total; /*0x55e39b*/
  v21 = (unsigned int)(dword_ABCD40 + g_FrameCounter_Total) <= 0x7FFFFFFF; /*0x55e3af*/
  dword_ABCD44 = (wchar_t *)dword_ABCD40; /*0x55e3b5*/
  dword_ABCD40 = 0; /*0x55e3ba*/
  g_FrameCounter_Total = v20; /*0x55e3c0*/
  ++g_FrameCounter_Samples; /*0x55e3c6*/
  if ( !v21 ) /*0x55e3cc*/
  {
    g_FrameCounter_Total = 0; /*0x55e3ce*/
    g_FrameCounter_Samples = 0; /*0x55e3d4*/
  }
  result = Timer::GetTicks(); /*0x55e3de*/
  dword_ABCD88 = result; /*0x55e3ec*/
  dword_ABCD8C = v24[2]; /*0x55e3f1*/
  dword_ABCD90 = 60; /*0x55e3f7*/
  return result; /*0x55e3fd*/
}


// ==== 0x0055E410  nullsub_23  this=-  sig=ida-proto ====
void __cdecl nullsub_23()
{
  ; /*0x55e410*/
}


// ==== 0x0055F1E0  ObjectClass::DrawHUD  this=ObjectClass  sig=csp ====
int *DrawHUD()
{
  int *result; // eax
  int Type; // eax
  DSurface *v2; // esi
  int v3; // eax
  int BuildingAnimByName; // eax
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  unsigned int QueueSize; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  CampaignScore *v23; // [esp-20h] [ebp-270h]
  CampaignScore *v24; // [esp-18h] [ebp-268h]
  CampaignScore *v25; // [esp-14h] [ebp-264h]
  int v26; // [esp-14h] [ebp-264h]
  CampaignScore *v27; // [esp-10h] [ebp-260h]
  int v28; // [esp-10h] [ebp-260h]
  ObjectClass *v29; // [esp-10h] [ebp-260h]
  int v30; // [esp-Ch] [ebp-25Ch]
  ObjectClass *v31; // [esp-Ch] [ebp-25Ch]
  int v32; // [esp-Ch] [ebp-25Ch]
  CampaignScore *v33; // [esp-8h] [ebp-258h]
  int v34; // [esp-8h] [ebp-258h]
  ObjectClass *v35; // [esp-8h] [ebp-258h]
  int v36; // [esp-8h] [ebp-258h]
  int v37; // [esp-8h] [ebp-258h]
  CampaignScore *v38; // [esp-4h] [ebp-254h]
  int _FFFFFFFCa; // [esp-4h] [ebp-254h]
  ObjectClass *_FFFFFFFCb; // [esp-4h] [ebp-254h]
  int _FFFFFFFCc; // [esp-4h] [ebp-254h]
  int _FFFFFFFCd; // [esp-4h] [ebp-254h]
  int _FFFFFFFCe; // [esp-4h] [ebp-254h]
  int _0; // [esp+0h] [ebp-250h]
  ObjectClass *v45; // [esp+0h] [ebp-250h]
  int v46; // [esp+0h] [ebp-250h]
  int v47; // [esp+0h] [ebp-250h]
  int v48; // [esp+0h] [ebp-250h]
  wchar_t *v39; // [esp+4h] [ebp-24Ch]
  wchar_t *v40; // [esp+4h] [ebp-24Ch]
  wchar_t *v41; // [esp+4h] [ebp-24Ch]
  wchar_t *v42; // [esp+4h] [ebp-24Ch]
  wchar_t *v43; // [esp+4h] [ebp-24Ch]
  AbstractClass *v44; // [esp+8h] [ebp-248h] BYREF
  int aP5_4; // [esp+Ch] [ebp-244h] BYREF
  wchar_t *Format; // [esp+10h] [ebp-240h] BYREF
  int aP5_12; // [esp+14h] [ebp-23Ch] BYREF
  int aP5_16; // [esp+18h] [ebp-238h] BYREF
  int aP5_20; // [esp+1Ch] [ebp-234h] BYREF
  int aP5_24; // [esp+20h] [ebp-230h] BYREF
  wchar_t *v51; // [esp+24h] [ebp-22Ch] BYREF
  int aP5_32; // [esp+28h] [ebp-228h] BYREF
  int aP5_36; // [esp+2Ch] [ebp-224h] BYREF
  int aP5_40; // [esp+30h] [ebp-220h] BYREF
  wchar_t aP5_44; // [esp+34h] [ebp-21Ch] BYREF
  int aP5_48; // [esp+38h] [ebp-218h] BYREF
  int aP5_52; // [esp+3Ch] [ebp-214h] BYREF
  int aP5_56; // [esp+40h] [ebp-210h] BYREF
  int aP5_60; // [esp+44h] [ebp-20Ch] BYREF
  double aP5_64; // [esp+48h] [ebp-208h] BYREF
  wchar_t aP5_72; // [esp+50h] [ebp-200h] BYREF

  result = *(int **)&stru_830620.__pad_579C[5604]; /*0x55f1e0*/
  if ( *(_DWORD *)&stru_830620.__pad_579C[5604] != -1 ) /*0x55f1f2*/
  {
    aP5_64 = (double)*(unsigned int *)&stru_830620.__pad_579C[5604] * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    aP5_32 = 100; /*0x55f225*/
    aP5_36 = 0; /*0x55f23a*/
    aP5_48 = 0; /*0x55f23e*/
    aP5_52 = 0; /*0x55f242*/
    aP5_56 = 500; /*0x55f246*/
    aP5_60 = 15; /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &aP5_40,
               (size_t)a2f,
               *(IUnknown **)&stru_87C374.__pad_579C[22540],
               &aP5_48,
               (int)&aP5_32,
               *(ObjectClass **)(stru_B05488.field_4C + 4 * Type),
               31,
               6,
               LODWORD(aP5_64),
               HIDWORD(aP5_64),
               *(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 4700);
  }
  if ( HouseClass_Player.__pad_5568[9729] ) /*0x55f286*/
  {
    result = *(int **)&HouseClass_Player.__pad_5568[8068]; /*0x55f28c*/
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] > 2u ) /*0x55f293*/
    {
      v2 = *(DSurface **)&stru_87C374.__pad_579C[22540]; /*0x55f2b1*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 12))(*(_DWORD *)&stru_87C374.__pad_579C[23344]); /*0x55f2b9*/
      v3 = v2->field_0; /*0x55f2bc*/
      aP5_48 = 0; /*0x55f2c6*/
      aP5_52 = 300; /*0x55f2ca*/
      aP5_56 = 639; /*0x55f2d2*/
      aP5_60 = 230; /*0x55f2da*/
      (*(void (__thiscall **)(DSurface *, int *, _DWORD))(v3 + 20))(v2, &aP5_48, 0); /*0x55f2e2*/
      swprintf( /*0x55f2f6*/
        &aP5_72,
        (const size_t)&off_82A224,
        *(const wchar_t *const *)&HouseClass_Player.__pad_5568[23248],
        (CampaignScore *)aP5_24);
      aP5_32 = 0; /*0x55f308*/
      aP5_36 = 302; /*0x55f30f*/
      BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f317*/
      v5 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f32b*/
                       v2,
                       &aP5_48,
                       &aP5_32,
                       BuildingAnimByName,
                       0,
                       25);
      TextRenderer::DrawText( /*0x55f33a*/
        &aP5_36,
        (size_t)&aP5_64 + 4,
        (IUnknown *)v2,
        v5,
        aP5_4,
        (ObjectClass *)Format,
        aP5_12,
        aP5_16);
      swprintf((wchar_t *const)&aP5_64 + 2, (const size_t)&off_82A210, (const wchar_t *const)dword_ABCD44, v38); /*0x55f34f*/
      v51 = 0; /*0x55f361*/
      aP5_32 = 312; /*0x55f368*/
      v6 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f370*/
      v7 = (_DWORD *)(*(int (__thiscall **)(DSurface *, wchar_t *, wchar_t **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f384*/
                       v2,
                       &aP5_44,
                       &v51,
                       v6,
                       0,
                       25);
      TextRenderer::DrawText( /*0x55f393*/
        &aP5_32,
        (size_t)&aP5_64,
        (IUnknown *)v2,
        v7,
        (int)v44,
        (ObjectClass *)aP5_4,
        (int)Format,
        aP5_12);
      swprintf( /*0x55f3a9*/
        (wchar_t *const)&aP5_64,
        (const size_t)&off_82A1F4,
        *(const wchar_t *const *)&HouseClass_Player.__pad_5568[8860],
        v33);
      aP5_24 = 0; /*0x55f3b1*/
      v51 = (wchar_t *)322; /*0x55f3b5*/
      aP5_12 = 25; /*0x55f3bd*/
      v8 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f3ca*/
      v9 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD))(v2->field_0 + 120))( /*0x55f3de*/
                       v2,
                       &aP5_40,
                       &aP5_24,
                       v8,
                       0);
      TextRenderer::DrawText( /*0x55f3ed*/
        (int *)&v51,
        (size_t)&aP5_60,
        (IUnknown *)v2,
        v9,
        (int)v39,
        (ObjectClass *)v44,
        aP5_4,
        (int)Format);
      QueueSize = IPXManagerClass::GetQueueSize(&HouseClass_Player.__pad_5568[22284]); /*0x55f3fa*/
      swprintf( /*0x55f429*/
        (wchar_t *const)&aP5_60,
        (const size_t)&off_82A1D0,
        (const wchar_t *const)((int)(1000 * QueueSize) / 60),
        (CampaignScore *)0x19);
      aP5_20 = 0; /*0x55f43b*/
      aP5_24 = 332; /*0x55f442*/
      v11 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f44a*/
      v12 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f45e*/
                        v2,
                        &aP5_36,
                        &aP5_20,
                        v11,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_24, (size_t)&aP5_56, (IUnknown *)v2, v12, _0, (ObjectClass *)v40, (int)v44, aP5_4); /*0x55f46d*/
      swprintf( /*0x55f483*/
        (wchar_t *const)&aP5_56,
        (const size_t)&off_82A1B4,
        *(const wchar_t *const *)&HouseClass_Player.__pad_5568[8868],
        v27);
      aP5_16 = 0; /*0x55f495*/
      aP5_20 = 342; /*0x55f49c*/
      v13 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f4a4*/
      v14 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f4b8*/
                        v2,
                        &aP5_32,
                        &aP5_16,
                        v13,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_20, (size_t)&aP5_52, (IUnknown *)v2, v14, _FFFFFFFCa, v45, (int)v41, (int)v44); /*0x55f4c7*/
      swprintf( /*0x55f4e1*/
        (wchar_t *const)&aP5_52,
        (const size_t)&off_828788,
        *(const wchar_t *const *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 115),
        v25);
      aP5_12 = 0; /*0x55f4f3*/
      aP5_16 = 352; /*0x55f4fa*/
      v15 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f502*/
      v16 = (_DWORD *)(*(int (__thiscall **)(DSurface *, wchar_t **, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f516*/
                        v2,
                        &v51,
                        &aP5_12,
                        v15,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_16, (size_t)&aP5_48, (IUnknown *)v2, v16, v34, _FFFFFFFCb, v46, (int)v42); /*0x55f525*/
      swprintf( /*0x55f550*/
        (wchar_t *const)&aP5_48,
        (const size_t)&off_828708,
        (const wchar_t *const)(1000 * *(_DWORD *)&HouseClass_Player.__pad_5568[20512] / 0x3Cu),
        v24);
      Format = 0; /*0x55f562*/
      aP5_12 = 362; /*0x55f569*/
      v17 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f571*/
      v18 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, wchar_t **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f585*/
                        v2,
                        &aP5_24,
                        &Format,
                        v17,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_12, (size_t)&aP5_44, (IUnknown *)v2, v18, v30, v35, _FFFFFFFCc, v47); /*0x55f594*/
      swprintf( /*0x55f5c2*/
        &aP5_44,
        (const size_t)&off_82A1A0,
        *(const wchar_t *const *)&stru_87C374.__pad_579C[22552],
        *(CampaignScore **)&stru_87C374.__pad_579C[22556]);
      aP5_4 = 0; /*0x55f5d4*/
      Format = (wchar_t *)372; /*0x55f5db*/
      v19 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f5e3*/
      v20 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f5f7*/
                        v2,
                        &aP5_20,
                        &aP5_4,
                        v19,
                        0,
                        25);
      TextRenderer::DrawText((int *)&Format, (size_t)&aP5_40, (IUnknown *)v2, v20, v28, v31, v36, _FFFFFFFCd); /*0x55f606*/
      swprintf((wchar_t *const)&aP5_40, (const size_t)&off_82A18C, (const wchar_t *const)stru_ABCDFC.FileSize, v23); /*0x55f61b*/
      v44 = 0; /*0x55f62d*/
      aP5_4 = 382; /*0x55f634*/
      v21 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x55f63c*/
      v22 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, AbstractClass **, int, _DWORD, int))(v2->field_0 + 120))( /*0x55f650*/
                        v2,
                        &aP5_16,
                        &v44,
                        v21,
                        0,
                        25);
      TextRenderer::DrawText(&aP5_4, (size_t)&aP5_36, (IUnknown *)v2, v22, v26, v29, v32, v37); /*0x55f65f*/
      ScoreBoard::Render((CampaignScore *)&HouseClass_Player.__pad_5568[22284]); /*0x55f66c*/
      return (*(int *(__thiscall **)(_DWORD, int, int, wchar_t *, AbstractClass *, int, wchar_t *, int, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[23344] + 16))( /*0x55f679*/
               *(_DWORD *)&stru_87C374.__pad_579C[23344],
               _FFFFFFFCe,
               v48,
               v43,
               v44,
               aP5_4,
               Format,
               aP5_12,
               aP5_16,
               aP5_20);
    }
  }
  return result; /*0x55f67c*/
}


// ==== 0x0055F690  ObjectClass::CheckNetworkSync  this=VOID_PTR  sig=csp ====
int __thiscall sub_55F690(_BYTE *this, int a2, int a3)
{
  *(_DWORD *)this = a3 & 0xFFFFFF; /*0x55f69f*/
  *(this + 4) = HIBYTE(a3); /*0x55f6a5*/
  *(_DWORD *)a2 = *(_DWORD *)this; /*0x55f6ac*/
  *(_BYTE *)(a2 + 4) = *(this + 4); /*0x55f6b2*/
  return a2; /*0x55f6b1*/
}


// ==== 0x0055F6C0  SyncDelay::Check  this=int  sig=csp ====
bool __thiscall sub_55F6C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)*(this + 4); /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/
}


// ==== 0x0055F6E0  SortedVector::BinarySearch  this=int  sig=csp ====
size_t __thiscall SortedVector::BinarySearch(char **this, int *a2)
{
  size_t result; // eax
  char *v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = (size_t)*(this + 1); /*0x55f6e3*/
  if ( result ) /*0x55f6e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x55f6ee*/
    {
      qsort(*this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x55f700*/
      *(this + 4) = 0; /*0x55f708*/
      *((_BYTE *)this + 12) = 1; /*0x55f70f*/
    }
    v4 = *this; /*0x55f719*/
    v5 = *a2; /*0x55f71b*/
    v6 = (int)*(this + 1); /*0x55f71d*/
    if ( v6 <= 0 ) /*0x55f722*/
      return 0; /*0x55f74e*/
    while ( 1 ) /*0x55f72b*/
    {
      v7 = *(_DWORD *)&v4[8 * (v6 / 2)]; /*0x55f72b*/
      if ( v7 <= v5 ) /*0x55f733*/
      {
        if ( v7 == v5 ) /*0x55f739*/
          return (size_t)&v4[8 * (v6 / 2)]; /*0x55f753*/
        v4 += 8 * (v6 / 2) + 8; /*0x55f73b*/
        v6 += -1 - v6 / 2; /*0x55f743*/
      }
      else
      {
        v6 /= 2; /*0x55f735*/
      }
      if ( v6 <= 0 ) /*0x55f747*/
        return 0; /*0x55f747*/
    }
  }
  return result; /*0x55f6ea*/
}


// ==== 0x0055F760  sub_55F760  this=-  sig=ida-proto ====
int sub_55F760()
{
  MEMORY[0xABCE28] = 0; /*0x55f762*/
  MEMORY[0xABCE2C] = 0; /*0x55f767*/
  MEMORY[0xABCE30] = 0; /*0x55f76c*/
  MEMORY[0xABCE34] = 0; /*0x55f771*/
  return 0; /*0x55f776*/
}


// ==== 0x0055F780  sub_55F780  this=-  sig=ida-proto ====
void sub_55F780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55f78c*/
  MEMORY[0xABCE40] = Math::Sqrt(v0 + v0); /*0x55f79e*/
}


// ==== 0x0055F7B0  sub_55F7B0  this=-  sig=ida-proto ====
void sub_55F7B0()
{
  dbl_ABCF48 = MEMORY[0xABCE40] / 60.0; /*0x55f7bc*/
}


// ==== 0x0055F7D0  sub_55F7D0  this=-  sig=ida-proto ====
void sub_55F7D0()
{
  dbl_ABCF30 = 1.0 / dbl_ABCF48; /*0x55f7dc*/
}


// ==== 0x0055F7F0  sub_55F7F0  this=-  sig=ida-proto ====
void sub_55F7F0()
{
  dbl_ABCF28 = 0.0174532925199433 * 45.0; /*0x55f7fc*/
}


// ==== 0x0055F810  sub_55F810  this=-  sig=ida-proto ====
void sub_55F810()
{
  MEMORY[0xABCE48] = 0.0174532925199433 * 60.0; /*0x55f81c*/
}


// ==== 0x0055F830  sub_55F830  this=-  sig=ida-proto ====
void sub_55F830()
{
  MEMORY[0xABCE20] = 0.0174532925199433 * 90.0; /*0x55f83c*/
}


// ==== 0x0055F850  sub_55F850  this=-  sig=ida-proto ====
__int64 sub_55F850()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xABCE20] - MEMORY[0xABCE48]); /*0x55f862*/
  result = Math::RoundToInt(v0 * MEMORY[0xABCE40] * 0.5); /*0x55f876*/
  dword_ABCF50 = result; /*0x55f87b*/
  return result; /*0x55f880*/
}


// ==== 0x0055F890  sub_55F890  this=-  sig=ida-proto ====
void sub_55F890()
{
  dbl_ABCE50 = Math::ArcTan((double)dword_ABCF50 * 0.00390625); /*0x55f8a7*/
}


// ==== 0x0055F8C0  sub_55F8C0  this=-  sig=ida-proto ====
void sub_55F8C0()
{
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / MEMORY[0xABCE40]); /*0x55f8e2*/
}


// ==== 0x0055F8F0  sub_55F8F0  this=-  sig=ida-proto ====
__int64 sub_55F8F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCF50) + 0.5); /*0x55f90b*/
  dword_ABCF44 = result; /*0x55f910*/
  return result; /*0x55f916*/
}


// ==== 0x0055F920  sub_55F920  this=-  sig=ida-proto ====
int sub_55F920()
{
  MEMORY[0xABCE38] = 0; /*0x55f922*/
  MEMORY[0xABCE3A] = 0; /*0x55f928*/
  return 0; /*0x55f92e*/
}


// ==== 0x0055F930  sub_55F930  this=-  sig=ida-proto ====
int sub_55F930()
{
  dword_ABCE58 = 0; /*0x55f932*/
  dword_ABCE5C = 0; /*0x55f937*/
  dword_ABCE60 = 0; /*0x55f93c*/
  return 0; /*0x55f941*/
}


// ==== 0x0055F950  sub_55F950  this=-  sig=ida-proto ====
int sub_55F950()
{
  dword_ABCF40 = 0; /*0x55f955*/
  dword_ABCF38 = 128; /*0x55f95f*/
  dword_ABCF3C = 128; /*0x55f964*/
  return 128; /*0x55f969*/
}


// ==== 0x0055F970  unknown_libname_21  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_21()
{
  dword_ABCE70[0] = 3; /*0x5fa35a*/
  dword_ABCE70[1] = 1; /*0x5fa360*/
  dword_ABCE70[3] = 0; /*0x5fa363*/
  dword_ABCE70[4] = 3; /*0x5fa366*/
  LOBYTE(dword_ABCE70[5]) = 1; /*0x5fa36d*/
  dword_ABCE70[6] = 2; /*0x5fa370*/
  LOBYTE(dword_ABCE70[7]) = 1; /*0x5fa377*/
  BYTE1(dword_ABCE70[7]) = 1; /*0x5fa37a*/
  BYTE2(dword_ABCE70[7]) = 1; /*0x5fa37d*/
  LOBYTE(dword_ABCE70[8]) = 1; /*0x5fa380*/
  unk_ABCEB5 = 1; /*0x5fa383*/
  unk_ABCF08 = 18; /*0x5fa38b*/
  unk_ABCF0C = 18; /*0x5fa391*/
  unk_ABCF10 = 17; /*0x5fa39f*/
  unk_ABCF14 = 17; /*0x5fa3a5*/
  dword_ABCE94 = -1; /*0x5fa3b0*/
  unk_ABCF18 = 16; /*0x5fa3b3*/
  unk_ABCF1C = 16; /*0x5fa3b9*/
  dword_ABCE98 = -1; /*0x5fa3c4*/
  unk_ABCEBC = -1; /*0x5fa3c7*/
  unk_ABCEC0 = -1; /*0x5fa3ca*/
  HIBYTE(dword_ABCE70[7]) = 0; /*0x5fa3cd*/
  unk_ABCE9C = 800; /*0x5fa3d0*/
  unk_ABCEA0 = 600; /*0x5fa3d7*/
  unk_ABCEA4 = 0; /*0x5fa3de*/
  unk_ABCEA5 = 0; /*0x5fa3e1*/
  unk_ABCEA6 = 0; /*0x5fa3e4*/
  unk_ABCEA8 = 1060320051; /*0x5fa3e7*/
  unk_ABCEAC = 1060320051; /*0x5fa3ee*/
  unk_ABCEB0 = 1053609165; /*0x5fa3f5*/
  unk_ABCEB4 = 0; /*0x5fa3fc*/
  unk_ABCEB6 = 0; /*0x5fa3ff*/
  unk_ABCEB8 = 9; /*0x5fa402*/
  unk_ABCEBA = -1; /*0x5fa408*/
  unk_ABCEC4 = 0; /*0x5fa40e*/
  unk_ABCF20 = 81; /*0x5fa411*/
  unk_ABCF24 = 81; /*0x5fa417*/
  unk_ABCEC8 = 0; /*0x5fa41d*/
  return dword_ABCE70; /*0x5fa421*/
}


// ==== 0x0055F980  sub_55F980  this=unknown  sig=csp ====
int __stdcall sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  _DWORD *WindowLongA; // eax
  wchar_t *StringCSF; // edi
  HWND DlgItem; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x55f999*/
  if ( !result ) /*0x55f9a0*/
  {
    WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x55f9a9*/
    if ( a2 == 273 ) /*0x55f9b5*/
    {
      if ( (unsigned __int16)a3 == 1473 ) /*0x55fa08*/
      {
        *WindowLongA = 1; /*0x55fa20*/
      }
      else if ( (unsigned __int16)a3 == 1738 ) /*0x55fa10*/
      {
        *WindowLongA = 2; /*0x55fa13*/
        return 0; /*0x55fa1d*/
      }
    }
    else if ( a2 == 1175 ) /*0x55f9bd*/
    {
      StringCSF = GetStringCSF(aTxtAboutToTryM, 0, g_Str_File_MainOpt_cpp, 162); /*0x55f9db*/
      DlgItem = GetDlgItem(hWnd, 1499); /*0x55f9dd*/
      SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)StringCSF); /*0x55f9ec*/
      return 0; /*0x55f9f7*/
    }
    return 0; /*0x55fa26*/
  }
  return result; /*0x55f9f2*/
}


// ==== 0x0055FAA0  Options::Screen_Save  this=AbstractClass  sig=csp ====
void __thiscall Options::Screen_Save(void *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+0h] [ebp-18h]
  float v15; // [esp+0h] [ebp-18h]

  v2 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1323); /*0x55fab2*/
  if ( v2 )
  {
    v3 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v2, 1024, 0, 0) != 0 ? 2 : 0;
    if ( MEMORY[0x87F7E8][539876] != v3 ) /*0x55fad9*/
    {
      MEMORY[0x87F7E8][539876] = v3; /*0x55fae0*/
      TacticalClass::Initialize(MEMORY[0x87F7E8]); /*0x55fae5*/
    }
  }
  v4 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    MEMORY[0x87F7E8][539871] = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v4, 1024, 0, 0); /*0x55fb02*/
  v5 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    BYTE2(MEMORY[0x87F7E8][539877]) = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v5, 240, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(MEMORY[0x87F7E8][539877])); /*0x55fb2b*/
  }
  v6 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    HIBYTE(MEMORY[0x87F7E8][539877]) = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v6, 240, 0, 0) == 1; /*0x55fb4e*/
  v7 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    LOBYTE(MEMORY[0x87F7E8][539878]) = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v7, 240, 0, 0) == 1; /*0x55fb71*/
  v8 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    MEMORY[0x87F7E8][539874] = 6 - ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v8, 1024, 0, 0); /*0x55fb96*/
  v9 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    v13 = (double)((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v9, 1024, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume((float *)&MEMORY[0x87F7E8][539870], v13, 0); /*0x55fbcd*/
    if ( *(float *)&MEMORY[0x87F7E8][539886] == 0.0 ) /*0x55fbe3*/
    {
      v10 = MEMORY[0x87F7E8][528715]; /*0x55fbe5*/
      if ( MEMORY[0x87F7E8][528715] == -1 ) /*0x55fbed*/
        v10 = MEMORY[0x87F7E8][528716]; /*0x55fbef*/
      Theme::QueueSong((int)&MEMORY[0x87F7E8][528714], v10); /*0x55fbfa*/
      Theme::Stop(&MEMORY[0x87F7E8][528714], 0); /*0x55fc06*/
    }
  }
  v11 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    v14 = (double)((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v11, 1024, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume((float *)&MEMORY[0x87F7E8][539870], v14, 0); /*0x55fc3c*/
  }
  v12 = ((int (__stdcall *)(void *, int))GetDlgItem)(this, 1334); /*0x55fc47*/
  if ( v12 ) /*0x55fc4b*/
  {
    v15 = (double)((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v12, 1024, 0, 0) * 0.1; /*0x55fc6f*/
    Audio::SetVoiceVolume((float *)&MEMORY[0x87F7E8][539870], v15, 0); /*0x55fc72*/
  }
}


// ==== 0x0055FC80  Options::Screen_Dialog  this=Options  sig=ida-proto ====
char Options::Screen_Dialog()
{
  void *Dialog; // eax
  void *v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  char v7; // [esp+13h] [ebp-9h]
  int dwNewLong; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v7 = MEMORY[0x87F7E8][539758]; /*0x55fc92*/
  LOBYTE(MEMORY[0x87F7E8][539758]) = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&dword_A8ED54[47175], &MEMORY[0x87F7E8][539870], 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        Dialog = (void *)CreateDialog(0); /*0x55fcc1*/
        v1 = Dialog; /*0x55fcc6*/
      }
      while ( !Dialog ); /*0x55fcca*/
      ((void (__stdcall *)(void *, int, int *))SetWindowLongA)(Dialog, 8, &dwNewLong); /*0x55fcd4*/
      Dialog::Show(v1); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        LOBYTE(v2) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      Dialog::Destroy(v1); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ScenarioClass::LoadNetworkConfig((int)&MEMORY[0x87F7E8][536212]); /*0x55fd31*/
      v3 = CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        ((void (__stdcall *)(int, int, int *))SetWindowLongA)(v3, 8, &v9); /*0x55fd59*/
        Dialog::Show(v4); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          LOBYTE(v5) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        Dialog::Destroy(v4); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog(); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions((int)&MEMORY[0x87F7E8][539870]); /*0x55fd8e*/
  LOBYTE(MEMORY[0x87F7E8][539758]) = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/
}


// ==== 0x0055FDB0  ScreenDlgProcOptions  this=unknown  sig=csp ====
int __stdcall Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
  int result; // eax
  HWND v6; // eax
  HWND v7; // esi
  LRESULT v8; // eax
  LRESULT v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  wchar_t *v14; // edi
  HWND v15; // eax
  HWND v16; // esi
  wchar_t *String; // eax
  HWND DlgItem; // eax
  HWND v19; // edi
  _DWORD *v20; // eax
  LPARAM v21; // edi
  int *v22; // ebx
  int v23; // eax
  int v24; // ecx
  LRESULT v25; // eax
  HWND v26; // eax
  HWND v27; // edi
  HWND v28; // eax
  HWND v29; // eax
  HWND v30; // eax
  HWND v31; // eax
  HWND v32; // edi
  BOOL IsSoundEnabled; // ebx
  HWND v34; // eax
  HWND v35; // edi
  LPARAM v36; // eax
  HWND v37; // eax
  HWND v38; // edi
  LPARAM v39; // eax
  HWND v40; // eax
  HWND v41; // edi
  LPARAM v42; // eax
  float v43; // [esp+0h] [ebp-58h]
  float v44; // [esp+0h] [ebp-58h]
  float v45; // [esp+0h] [ebp-58h]
  char lParam[64]; // [esp+18h] [ebp-40h] BYREF
  int wParama; // [esp+60h] [ebp+8h]
  HWND v48; // [esp+64h] [ebp+Ch]
  HWND WindowLongA; // [esp+68h] [ebp+10h]
  HWND v50; // [esp+68h] [ebp+10h]

  result = BaseDialogProc(hWnd, wParam, a3, (unsigned int)a4); /*0x55fdcd*/
  if ( !result ) /*0x55fdd4*/
  {
    WindowLongA = (HWND)GetWindowLongA(hWnd, 8); /*0x55fde9*/
    if ( wParam > 0x114 ) /*0x55fded*/
    {
      if ( wParam == 1175 ) /*0x560112*/
      {
        byte_ABCF54 = 0; /*0x560124*/
        DlgItem = GetDlgItem(hWnd, 1323); /*0x56012b*/
        v19 = DlgItem; /*0x560133*/
        if ( DlgItem ) /*0x560137*/
        {
          SendMessageA(DlgItem, 0x4ACu, 0, 0); /*0x560143*/
          SendMessageA(v19, 0x406u, 1u, 0x10000); /*0x560152*/
          SendMessageA(v19, 0x405u, 1u, MEMORY[0xA8EB78] != 0); /*0x56016a*/
        }
        v48 = GetDlgItem(hWnd, 1773); /*0x560176*/
        if ( MEMORY[0xA8EB95] ) /*0x560181*/
          v20 = (_DWORD *)sub_4A4900(4096, 4096, 16); /*0x56018d*/
        else
          v20 = (_DWORD *)sub_4A4900(1024, 768, 16); /*0x5601a3*/
        v21 = 0; /*0x5601a8*/
        dword_ABCF58 = v20; /*0x5601aa*/
        v22 = v20; /*0x5601b1*/
        wParama = -1; /*0x5601b3*/
        v50 = 0; /*0x5601bb*/
        if ( v20 && *v20 ) /*0x5601c9*/
        {
          do /*0x56024d*/
          {
            v23 = *v22; /*0x5601d2*/
            v24 = v22[1]; /*0x5601d4*/
            v22 += 2; /*0x5601e0*/
            if ( MEMORY[0xA8EB95] || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, stru_82A2C4, v23, v24); /*0x560220*/
              v25 = SendMessageA(v48, 0x4BCu, 0, (LPARAM)lParam); /*0x560239*/
              SendMessageA(v48, 0x151u, v25, v21); /*0x560247*/
              v50 = (HWND)((char *)v50 + 1); /*0x560249*/
            }
            ++v21; /*0x56024f*/
          }
          while ( *v22 ); /*0x56024d*/
        }
        SendMessageA(v48, 0x14Eu, wParama, 0); /*0x560269*/
        dword_82A27C = wParama; /*0x56027b*/
        v26 = GetDlgItem(hWnd, 1295); /*0x560280*/
        v27 = v26; /*0x560282*/
        if ( v26 ) /*0x560286*/
        {
          SendMessageA(v26, 0x4ACu, 0, 0); /*0x560292*/
          SendMessageA(v27, 0x406u, 1u, 0x20000); /*0x5602a1*/
          SendMessageA(v27, 0x405u, 1u, MEMORY[0xA8EB64]); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA(v28, 0xF1u, MEMORY[0xA8EB7E] != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA(v29, 0xF1u, MEMORY[0xA8EB7F] != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA(v30, 0xF1u, MEMORY[0xA8EB80] != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA(v31, 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA(v32, 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA(v32, 0x405u, 1u, 6 - MEMORY[0xA8EB70]); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA(v34, 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA(v35, 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(MEMORY[0xA8EBA0] * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA(v35, 0x405u, 1u, v36); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA(v37, 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA(v38, 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(MEMORY[0xA8EB98] * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA(v38, 0x405u, 1u, v39); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA(v40, 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA(v41, 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&MEMORY[0xA8EB9C] * 10.0 + 0.5); /*0x560455*/
          SendMessageA(v41, 0x405u, 1u, v42); /*0x560463*/
          EnableWindow(v41, IsSoundEnabled); /*0x560467*/
        }
        byte_ABCF54 = 1; /*0x56046d*/
      }
    }
    else
    {
      switch ( wParam ) /*0x55fdf3*/
      {
        case 0x114u: /*0x55fdf3*/
          if ( (_WORD)a3 == 5 ) /*0x55ff6c*/
          {
            v12 = HIWORD(a3); /*0x55ff75*/
            if ( a4 == GetDlgItem(hWnd, 1323) ) /*0x55ff87*/
            {
              v13 = HIWORD(a3); /*0x55ff8b*/
              if ( v12 ) /*0x55ff8d*/
                v13 = 2; /*0x55ff8f*/
              v14 = (&off_82A248)[v13]; /*0x55ff94*/
              v15 = GetDlgItem(hWnd, 1651); /*0x55ffa1*/
            }
            else if ( a4 == GetDlgItem(hWnd, 1295) ) /*0x55ffe5*/
            {
              v14 = (wchar_t *)off_82A254[v12]; /*0x55ffe7*/
              v15 = GetDlgItem(hWnd, 1648); /*0x55fff3*/
            }
            else
            {
              if ( a4 != GetDlgItem(hWnd, 1322) ) /*0x55ffff*/
              {
                if ( a4 == GetDlgItem(hWnd, 1327) ) /*0x560019*/
                {
                  if ( byte_ABCF54 ) /*0x560022*/
                  {
                    v43 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x56004e*/
                    Options::SetScoreVolume((float *)MEMORY[0xA8EB60], v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    v44 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Options::SetSoundVolume((float *)MEMORY[0xA8EB60], v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  v45 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Options::SetVoiceVolume((float *)MEMORY[0xA8EB60], v45, 1); /*0x5600fb*/
                  return 0; /*0x560109*/
                }
                return 0; /*0x560022*/
              }
              v14 = (wchar_t *)off_82A260[v12]; /*0x560001*/
              v15 = GetDlgItem(hWnd, 1650); /*0x56000d*/
            }
            v16 = v15; /*0x55ffa3*/
            if ( v15 ) /*0x55ffa7*/
            {
              String = GetStringCSF(v14, 0, g_Str_File_MainOpt_cpp, 553); /*0x55ffbb*/
              SendMessageA(v16, 0x4B2u, 0, (LPARAM)String); /*0x55ffc9*/
              return 0; /*0x55ffd8*/
            }
          }
          break;
        case 2u: /*0x55fdf3*/
          if ( dword_ABCF58 ) /*0x55ff43*/
          {
            __3_YAXPAX_Z(dword_ABCF58); /*0x55ff4a*/
            dword_ABCF58 = 0; /*0x55ff52*/
            return 0; /*0x55ff65*/
          }
          break;
        case 0x111u: /*0x55fdf3*/
          if ( (unsigned __int16)a3 > 0x686u ) /*0x55fe1c*/
          {
            if ( (unsigned __int16)a3 == 1773 && HIWORD(a3) == 1 ) /*0x55feb5*/
            {
              SetDialogParent(hWnd, g_hWnd); /*0x55fec3*/
              v6 = GetDlgItem(hWnd, 1773); /*0x55feca*/
              v7 = v6; /*0x55fed0*/
              if ( v6 ) /*0x55fed4*/
              {
                v8 = SendMessageA(v6, 0x147u, 0, 0); /*0x55feea*/
                v9 = SendMessageA(v7, 0x150u, v8, 0); /*0x55fef5*/
                v10 = *((_DWORD *)dword_ABCF58 + 2 * v9); /*0x55fefd*/
                dword_ABCE94 = v10; /*0x55ff00*/
                v11 = *((_DWORD *)dword_ABCF58 + 2 * v9 + 1); /*0x55ff06*/
                dword_ABCE98 = v11; /*0x55ff10*/
                if ( v10 != MEMORY[0xA8EB84] || v11 != MEMORY[0xA8EB88] ) /*0x55ff1f*/
                {
                  MEMORY[0xA8EB88] = v11; /*0x55ff27*/
                  MEMORY[0xA8EB84] = v10; /*0x55ff2d*/
                  return 0; /*0x55ff39*/
                }
              }
            }
          }
          else if ( (unsigned __int16)a3 == 1670 ) /*0x55fe22*/
          {
            if ( !HIWORD(a3) ) /*0x55fe66*/
            {
              __3_YAXPAX_Z(dword_ABCF58); /*0x55fe76*/
              dword_ABCF58 = 0; /*0x55fe7e*/
              *(_DWORD *)GetWindowLongA(hWnd, 8) = 1483; /*0x55fe93*/
              return 0; /*0x55fea0*/
            }
          }
          else if ( (unsigned __int16)a3 >= 0x5CDu && (unsigned __int16)a3 <= 0x5CEu ) /*0x55fe36*/
          {
            __3_YAXPAX_Z(dword_ABCF58); /*0x55fe42*/
            dword_ABCF58 = 0; /*0x55fe4e*/
            *(_DWORD *)WindowLongA = (unsigned __int16)a3; /*0x55fe5a*/
            return 0; /*0x55fe63*/
          }
          break;
      }
    }
    return 0; /*0x560474*/
  }
  return result; /*0x55fe5c*/
}

