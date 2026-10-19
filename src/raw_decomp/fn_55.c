// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00550000  Game::loadCampaignData  this=Game  sig=csp ====
int __thiscall Game::loadCampaignData(Game *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  Game *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_MissionQueueFrame.random[31]; g_MissionQueueFrame.random[31]; result = g_MissionQueueFrame.random[31] ) /*0x550008*/
  {
    v2 = *(void **)g_MissionQueueFrame.random[28]; /*0x550010*/
    if ( *(_DWORD *)g_MissionQueueFrame.random[28] ) /*0x550010*/
    {
      v4 = *(Game **)g_MissionQueueFrame.random[28]; /*0x550026*/
      v3 = (*(int (__thiscall **)(int *, Game **))(g_MissionQueueFrame.random[27] + 16))( /*0x55002a*/
             &g_MissionQueueFrame.random[27],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[31] ) /*0x55003a*/
      {
        --g_MissionQueueFrame.random[31]; /*0x55003f*/
        for ( ; /*0x550045*/
              v3 < g_MissionQueueFrame.random[31];
              *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                   + 4 * v3) )
        {
          ++v3; /*0x55004d*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x550060*/
    }
  }
  return result; /*0x550073*/
}



// ==== 0x00550080  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_550080(ObjectClass *this)
{
  void *ptr_8; // edx
  int uniqueId; // eax
  int abstractFlags; // eax
  char *v5; // edx
  void *v6; // edx
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  ptr_8 = this->?; /*0x550086*/
  uniqueId = this->?; /*0x550089*/
  if ( ptr_8 == (void *)-1 ) /*0x55008f*/
  {
LABEL_4:
    if ( uniqueId ) /*0x5500a1*/
      goto LABEL_7; /*0x5500a1*/
    goto LABEL_5; /*0x5500a1*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_8 < uniqueId ) /*0x55009b*/
  {
    uniqueId -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_8; /*0x55009d*/
    goto LABEL_4; /*0x55009d*/
  }
LABEL_5:
  abstractFlags = this->?; /*0x5500a3*/
  if ( abstractFlags ) /*0x5500a8*/
  {
    v5 = (char *)this->AbstractClass + this->?; /*0x5500af*/
    LOBYTE(this->?) = 1; /*0x5500b1*/
    this->AbstractClass = v5; /*0x5500b5*/
    v6 = (void *)v8[2]; /*0x5500bd*/
    this->? = *(void **)&stru_A8EB00.?[416]; /*0x5500c1*/
    this->? = v6; /*0x5500c4*/
    this->? = abstractFlags; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
LABEL_7:
  LOBYTE(this->?) = 0; /*0x5500cc*/
LABEL_8:
  if ( LOBYTE(this->customSound_controller[0]) ) /*0x5500d0*/
    BYTE1(this->customSound_controller[0]) = BYTE1(this->customSound_controller[0]) == 0; /*0x5500df*/
  if ( (int)this->AbstractClass >= this->ambientSoundController[4] && this ) /*0x5500ed*/
  {
    v8[0] = this; /*0x5500fe*/
    v7 = (*(int (__thiscall **)(int *, _DWORD *))(g_MissionQueueFrame.random[27] + 16))( /*0x550102*/
           &g_MissionQueueFrame.random[27],
           v8);
    if ( v7 != -1 && v7 < g_MissionQueueFrame.random[31] ) /*0x550112*/
    {
      --g_MissionQueueFrame.random[31]; /*0x550117*/
      for ( ; /*0x55011d*/
            v7 < g_MissionQueueFrame.random[31];
            *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v7 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                 + 4 * v7) )
      {
        ++v7; /*0x550125*/
      }
    }
    __3_YAXPAX_Z(this); /*0x550138*/
  }
}



// ==== 0x00550150  ObjectClass::UpdateCameoProduction  this=ObjectClass  sig=csp ====
void UpdateCameoProduction(ObjectClass *this)
{
  int v1; // edi
  int v2; // ebp
  int *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD v9[4]; // [esp+4h] [ebp-10h] BYREF

  v1 = g_MissionQueueFrame.random[31] - 1; /*0x550159*/
  if ( g_MissionQueueFrame.random[31] - 1 >= 0 ) /*0x55015e*/
  {
    v2 = v9[2]; /*0x550165*/
    do /*0x550170*/
    {
      v3 = *(int **)(g_MissionQueueFrame.random[28] + 4 * v1); /*0x550170*/
      v4 = v3[2]; /*0x550173*/
      v5 = v3[4]; /*0x550176*/
      if ( v4 != -1 ) /*0x55017c*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x55018a*/
      }
      if ( v5 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
LABEL_7:
      v6 = v3[5]; /*0x550190*/
      if ( !v6 ) /*0x550195*/
      {
LABEL_9:
        *((_BYTE *)v3 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      v7 = v3[6] + *v3; /*0x55019c*/
      *((_BYTE *)v3 + 4) = 1; /*0x55019e*/
      *v3 = v7; /*0x5501a2*/
      v3[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5501a9*/
      v3[3] = v2; /*0x5501ac*/
      v3[4] = v6; /*0x5501af*/
LABEL_10:
      if ( *((_BYTE *)v3 + 80) ) /*0x5501b8*/
        *((_BYTE *)v3 + 81) = *((_BYTE *)v3 + 81) == 0; /*0x5501c7*/
      if ( *v3 >= v3[19] && v3 ) /*0x5501d5*/
      {
        v9[0] = v3; /*0x5501e6*/
        v8 = (*(int (__thiscall **)(int *, _DWORD *))(g_MissionQueueFrame.random[27] + 16))( /*0x5501ea*/
               &g_MissionQueueFrame.random[27],
               v9);
        if ( v8 != -1 && v8 < g_MissionQueueFrame.random[31] ) /*0x5501fa*/
        {
          --g_MissionQueueFrame.random[31]; /*0x5501ff*/
          for ( ; /*0x550205*/
                v8 < g_MissionQueueFrame.random[31];
                *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v8 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                     + 4 * v8) )
          {
            ++v8; /*0x55020d*/
          }
        }
        __3_YAXPAX_Z(v3); /*0x550220*/
      }
      --v1; /*0x550228*/
    }
    while ( v1 >= 0 ); /*0x550170*/
  }
}



// ==== 0x00550240  ObjectClass::Helper  this=ObjectClass  sig=csp ====
char Helper_550240(ObjectClass *this)
{
  char result; // al
  int i; // esi

  result = g_MissionQueueFrame.random[31]; /*0x550240*/
  for ( i = g_MissionQueueFrame.random[31] - 1; i >= 0; --i ) /*0x55024b*/
    result = TacticalClass::RenderCells(*(TacticalClass **)(g_MissionQueueFrame.random[28] + 4 * i)); /*0x550256*/
  return result; /*0x55025e*/
}



// ==== 0x00550260  TacticalClass::RenderCells  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::RenderCells(TacticalClass *this)
{
  double v1; // st7
  int result; // eax
  int field24; // eax
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  unsigned __int8 v13; // dl
  unsigned __int8 field40_high; // al
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // esi
  double v38; // [esp+34h] [ebp-60h]
  double v39; // [esp+3Ch] [ebp-58h]
  char v40; // [esp+57h] [ebp-3Dh]
  __int16 v41; // [esp+58h] [ebp-3Ch] BYREF
  char v42; // [esp+5Ah] [ebp-3Ah]
  int TacticalClass_field_4C; // [esp+5Ch] [ebp-38h]
  int v44; // [esp+60h] [ebp-34h]
  int v45; // [esp+64h] [ebp-30h]
  unsigned int field30; // [esp+68h] [ebp-2Ch]
  int v47; // [esp+6Ch] [ebp-28h]
  int v48; // [esp+70h] [ebp-24h]
  int v49; // [esp+74h] [ebp-20h] BYREF
  int v50; // [esp+78h] [ebp-1Ch]
  int v51; // [esp+7Ch] [ebp-18h] BYREF
  int v52; // [esp+80h] [ebp-14h]
  int v53; // [esp+84h] [ebp-10h] BYREF
  int v54; // [esp+88h] [ebp-Ch]
  int v55; // [esp+8Ch] [ebp-8h] BYREF
  int v56; // [esp+90h] [ebp-4h]

  _EBX = this; /*0x550264*/
  result = this->TacticalClass_field_4C; /*0x550268*/
  if ( result > 0 )
  {
    if ( LOBYTE(this->?) )
    {
      return PrepareTacticalClassCellTransform((int *)this); /*0x55027b*/
    }
    else
    {
      if ( (g_MissionQueueFrame.random[43] & 1) == 0 ) /*0x55028f*/
      {
        g_MissionQueueFrame.altNextScenario[16] = -1; /*0x55029c*/
        g_MissionQueueFrame.altNextScenario[15] = 0; /*0x5502a4*/
        g_MissionQueueFrame.altNextScenario[18] = 0; /*0x5502ae*/
        g_MissionQueueFrame.altNextScenario[17] = 1; /*0x5502b7*/
        g_MissionQueueFrame.altNextScenario[20] = -1; /*0x5502be*/
        g_MissionQueueFrame.altNextScenario[19] = 0; /*0x5502c9*/
        g_MissionQueueFrame.altNextScenario[21] = 0; /*0x5502ce*/
        g_MissionQueueFrame.altNextScenario[23] = 1; /*0x5502d5*/
        g_MissionQueueFrame.altNextScenario[25] = 0; /*0x5502dc*/
        g_MissionQueueFrame.altNextScenario[22] = 1; /*0x5502e4*/
        g_MissionQueueFrame.altNextScenario[27] = -1; /*0x5502ea*/
        g_MissionQueueFrame.altNextScenario[24] = 0; /*0x5502f6*/
        g_MissionQueueFrame.altNextScenario[29] = 1; /*0x5502fc*/
        g_MissionQueueFrame.altNextScenario[26] = 1; /*0x550309*/
        g_MissionQueueFrame.altNextScenario[31] = -1; /*0x55030f*/
        g_MissionQueueFrame.altNextScenario[28] = 0; /*0x550318*/
        g_MissionQueueFrame.altNextScenario[30] = 0; /*0x55031e*/
        g_MissionQueueFrame.altNextScenario[32] = 0; /*0x550324*/
        g_MissionQueueFrame.altNextScenario[33] = 0; /*0x55032a*/
        g_MissionQueueFrame.altNextScenario[35] = 0; /*0x55032f*/
        g_MissionQueueFrame.altNextScenario[34] = 1; /*0x55033e*/
        g_MissionQueueFrame.altNextScenario[37] = 1; /*0x550344*/
        g_MissionQueueFrame.altNextScenario[36] = -1; /*0x55034e*/
        g_MissionQueueFrame.altNextScenario[39] = 0; /*0x550354*/
        g_MissionQueueFrame.altNextScenario[38] = 0; /*0x55035e*/
        g_MissionQueueFrame.altNextScenario[41] = -1; /*0x550364*/
        g_MissionQueueFrame.altNextScenario[40] = -1; /*0x55036f*/
        g_MissionQueueFrame.altNextScenario[43] = -1; /*0x550375*/
        LOBYTE(g_MissionQueueFrame.random[43]) |= 1u; /*0x550389*/
        g_MissionQueueFrame.altNextScenario[42] = 0; /*0x55038f*/
        g_MissionQueueFrame.altNextScenario[44] = 0; /*0x550395*/
        g_MissionQueueFrame.altNextScenario[45] = 1; /*0x55039b*/
        g_MissionQueueFrame.altNextScenario[46] = 0; /*0x5503a0*/
        result = atexit(nullsub_21); /*0x5503a6*/
      }
      LOBYTE(result) = BYTE1(_EBX->field50); /*0x5503ae*/
      if ( !(_BYTE)result )
      {
        field24 = _EBX->field24; /*0x5503bc*/
        _EDI = &_EBX->field30; /*0x5503bf*/
        _EBP = &_EBX->field24; /*0x5503c2*/
        field30 = _EBX->field30; /*0x5503c5*/
        v45 = field24; /*0x5503c9*/
        __asm { fild [esp+50h+var_2C] } /*0x5503cd*/
        __asm
        {
          fisub [esp+60h+var_30]
          fstp [esp+60h+var_58]; double
          fild dword ptr [ebp+4]
          fisub dword ptr [edi+4]
          fstp [esp+60h+var_60]; double
        }
        Math::CalcAngle(v38, v39); /*0x5503e8*/
        __asm { fsub ds:dbl_7E2820 } /*0x5503ed*/
        __asm { fmul ds:dbl_7E2818 }
        LOWORD(field30) = Math::RoundToInt(v1); /*0x550401*/
        v7 = (((field30 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field24, &v55); /*0x55041f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field30, &v53); /*0x550430*/
        v8 = _EBX->TacticalClass_field_3C - ZCoordToScreenY(_EBX->TacticalClass_field_2C) - 2; /*0x550445*/
        v9 = ZCoordToScreenY(_EBX->field38); /*0x550448*/
        v41 = 0; /*0x550452*/
        v10 = -2 - v9; /*0x550457*/
        LOBYTE(v9) = _EBX->field44; /*0x550459*/
        v42 = 0; /*0x550463*/
        field30 = 0; /*0x550468*/
        v40 = 1; /*0x550470*/
        if ( (_BYTE)v9 || BYTE1(_EBX->field44) || BYTE2(_EBX->field44) )
        {
          field30 = Random::Range(&Randomizer_Global, -HIBYTE(_EBX->field44), HIBYTE(_EBX->field44)); /*0x5504a6*/
          TacticalClass_field_4C = Random::Range(&Randomizer_Global, -LOBYTE(_EBX->field48), LOBYTE(_EBX->field48)); /*0x5504bf*/
          *(float *)&v44 = COERCE_FLOAT(Random::Range(&Randomizer_Global, -BYTE1(_EBX->field48), BYTE1(_EBX->field48))); /*0x5504d8*/
          v11 = (int)(LOBYTE(_EBX->field44) + field30) < 0 ? 0 : LOBYTE(_EBX->field44) + field30;
          if ( v11 > 255 ) /*0x5504f6*/
            v11 = 255; /*0x5504f8*/
          TacticalClass_field_4C = BYTE1(_EBX->field44) + TacticalClass_field_4C < 0
                                 ? 0
                                 : BYTE1(_EBX->field44) + TacticalClass_field_4C;
          if ( TacticalClass_field_4C > 255 ) /*0x55051c*/
            TacticalClass_field_4C = 255; /*0x55051e*/
          v44 = BYTE2(_EBX->field44) + v44 < 0 ? 0 : BYTE2(_EBX->field44) + v44;
          v12 = v44; /*0x55053a*/
          if ( v44 > 255 ) /*0x550545*/
          {
            v12 = 255; /*0x550547*/
            v44 = 255; /*0x55054c*/
          }
          LOBYTE(v41) = v11; /*0x550556*/
          v45 = (TacticalClass_field_4C >> g_BitMask_Blue << g_BitMask_Green) /*0x550584*/
              | (v12 >> g_BitMask_Red << g_BitShift_Blue);
          HIBYTE(v41) = TacticalClass_field_4C; /*0x55059a*/
          field30 = (v11 >> g_BitShift_Green_0 << g_BitShift_Red) | v45; /*0x5505aa*/
          v42 = v44; /*0x5505ae*/
        }
        else
        {
          v40 = 0; /*0x550485*/
        }
        v13 = BYTE2(_EBX->field40); /*0x5505b2*/
        v45 = (int)&_EBX->field40 + 1; /*0x5505b8*/
        *(float *)&v44 = 1.0; /*0x5505bc*/
        LOBYTE(v51) = BYTE1(_EBX->field40); /*0x5505cd*/
        LOBYTE(v49) = (_BYTE)v51 != 0; /*0x5505d1*/
        LOBYTE(v48) = v13 != 0; /*0x5505d8*/
        field40_high = HIBYTE(_EBX->field40); /*0x5505dc*/
        LOBYTE(v47) = field40_high != 0; /*0x5505e4*/
        if ( BYTE2(_EBX->field50) ) /*0x5505e8*/
        {
          __asm /*0x5505f2*/
          {
            fld dword ptr [ebx+54h]
            fsub dword ptr [ebx+58h]
          }
          TacticalClass_field_4C = _EBX->TacticalClass_field_4C; /*0x5505f8*/
          v44 = TacticalClass_field_4C - (unsigned int)_EBX->AbstractClass; /*0x5505fe*/
          __asm /*0x550602*/
          {
            fimul [esp+50h+var_34]
            fidiv [esp+50h+var_38]
            fadd dword ptr [ebx+58h]
            fstp [esp+50h+var_34]
          }
        }
        if ( stru_A8EB00.ObjectTypeClass[30] ) /*0x550619*/
        {
          if ( LOBYTE(_EBX->field50) ) /*0x55061f*/
          {
            result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550655*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v55,
                       &v53,
                       v45,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       v44);
            LOBYTE(result) = v40; /*0x550658*/
            if ( v40 ) /*0x55065e*/
            {
              v15 = 4 * v7; /*0x55066c*/
              v16 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x55067c*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550688*/
              v17 = v55 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550698*/
              v52 = v54 + v16; /*0x55069e*/
              v18 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x5506a2*/
              v49 = v17; /*0x5506a8*/
              v50 = v56 + v18; /*0x5506bb*/
              (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x5506d2*/
                g_DSurface_Hidden_2,
                &DSurface_ViewBounds,
                &v49,
                &v51,
                &v41,
                v8,
                v10,
                0,
                1,
                1,
                1,
                1065353216);
              v19 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506e9*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506ef*/
              v20 = g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506f3*/
              v21 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506f9*/
              v49 = v55 + v20; /*0x55070e*/
              v52 = v54 + v19; /*0x550719*/
              v50 = v56 + v21; /*0x550734*/
              return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550740*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v49,
                       &v51,
                       &v41,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       1065353216);
            }
          }
          else if ( v40 ) /*0x550751*/
          {
            v22 = 4 * v7; /*0x55075f*/
            v23 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x55076a*/
            v24 = g_MissionQueueFrame.altNextScenario[v22 + 15]; /*0x550772*/
            v51 = v53 + v24; /*0x550778*/
            v25 = v24 + v55; /*0x550786*/
            v26 = v44; /*0x550788*/
            v52 = v54 + v23; /*0x55078c*/
            v27 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x550790*/
            v49 = v25; /*0x550796*/
            v50 = v56 + v27; /*0x5507a6*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x5507bd*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v44,
              v8,
              v10);
            v28 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507d0*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507d6*/
            v29 = g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507da*/
            v30 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507e6*/
            v49 = v55 + v29; /*0x5507ef*/
            v52 = v54 + v28; /*0x5507f8*/
            v50 = v56 + v30; /*0x550813*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x55081f*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v26,
              v8,
              v10);
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x550841*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v26,
                     v8,
                     v10);
          }
          else
          {
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550880*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v8,
                     v10,
                     0,
                     v49,
                     v48,
                     v47,
                     v44);
          }
        }
        else
        {
          result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5508f6*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     ((unsigned __int8)v51 >> g_BitShift_Green_0 << g_BitShift_Red)
                   | (v13 >> g_BitMask_Blue << g_BitMask_Green)
                   | (field40_high >> g_BitMask_Red << g_BitShift_Blue),
                     v8,
                     v10,
                     0);
          LOBYTE(result) = v40; /*0x5508f9*/
          if ( v40 ) /*0x5508ff*/
          {
            v31 = 4 * v7; /*0x55090d*/
            v32 = v54 + g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550925*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092b*/
            v33 = g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092f*/
            v52 = v32; /*0x550935*/
            v34 = g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550939*/
            v49 = v55 + v33; /*0x550947*/
            v50 = v56 + v34; /*0x550950*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x550968*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              field30,
              v8,
              v10,
              0);
            v35 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55097b*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550981*/
            v36 = g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550985*/
            v37 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55098b*/
            v52 = v54 + v35; /*0x550999*/
            v49 = v55 + v36; /*0x5509a3*/
            v50 = v56 + v37; /*0x5509bb*/
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5509c7*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v49,
                     &v51,
                     field30,
                     v8,
                     v10,
                     0);
          }
        }
      }
    }
  }
  return result; /*0x550280*/
}



// ==== 0x005509E0  nullsub_21  this=-  sig=ida-proto ====
void __cdecl nullsub_21()
{
  ; /*0x5509e0*/
}



// ==== 0x005509F0  PrepareTacticalClassCellTransform  this=-  sig=csp ====
int __fastcall sub_5509F0(int *a1)
{
  int *v1; // ebx
  int v2; // eax
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
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
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
  int v38; // esi
  int v39; // edi
  int v41; // [esp+38h] [ebp-158h]
  int v42; // [esp+38h] [ebp-158h]
  int v43; // [esp+38h] [ebp-158h]
  int v44; // [esp+38h] [ebp-158h]
  int v45; // [esp+38h] [ebp-158h]
  int v46; // [esp+38h] [ebp-158h]
  int v47; // [esp+3Ch] [ebp-154h]
  int v48; // [esp+3Ch] [ebp-154h]
  int v49; // [esp+3Ch] [ebp-154h]
  int v50; // [esp+3Ch] [ebp-154h]
  int v51; // [esp+3Ch] [ebp-154h]
  int v52; // [esp+3Ch] [ebp-154h]
  char v53; // [esp+5Fh] [ebp-131h]
  __int16 v54; // [esp+60h] [ebp-130h] BYREF
  unsigned __int8 v55; // [esp+62h] [ebp-12Eh]
  __int16 v56; // [esp+68h] [ebp-128h] BYREF
  unsigned __int8 v57; // [esp+6Ah] [ebp-126h]
  int v58; // [esp+70h] [ebp-120h]
  unsigned int v59; // [esp+74h] [ebp-11Ch]
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
  unsigned __int8 v71[4]; // [esp+ACh] [ebp-E4h] BYREF
  __int64 v72; // [esp+B0h] [ebp-E0h]
  __int64 v73; // [esp+B8h] [ebp-D8h]
  __int64 v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  _DWORD v77[24]; // [esp+D0h] [ebp-C0h] BYREF
  _DWORD v78[24]; // [esp+130h] [ebp-60h] BYREF

  v1 = a1; /*0x5509fd*/
  LODWORD(v72) = a1; /*0x550a03*/
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
  v2 = v1[9]; /*0x550b2a*/
  v59 = v1[12]; /*0x550b33*/
  v58 = v2; /*0x550b37*/
  v3 = Math::CalcAngle((double)v1[10] - (double)v1[13], (double)(int)v59 - (double)v2); /*0x550b56*/
  LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (((v59 >> 12) + 1) >> 1) & 7; /*0x550b8d*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 9, &v75); /*0x550b91*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 12, (int *)&v74); /*0x550ba2*/
  v4 = v1[15] - ZCoordToScreenY(v1[11]) - 2; /*0x550bb7*/
  v5 = -2 - ZCoordToScreenY(v1[14]); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( (unsigned int)dword_ABCD44 < PingPongBuffer::GetWriteOffset() || (v53 = 1, !dword_A8EB78) ) /*0x550be3*/
    v53 = 0; /*0x550be5*/
  v6 = *((_BYTE *)v1 + 82); /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    v7 = *v1; /*0x550bfc*/
    v8 = *((float *)v1 + 21) - *((float *)v1 + 22); /*0x550c01*/
    v65 = *((float *)v1 + 19); /*0x550c04*/
    v58 = LODWORD(v65) - v7; /*0x550c0a*/
    v65 = v8 * (double)(LODWORD(v65) - v7) / (double)SLODWORD(v65) + *((float *)v1 + 22); /*0x550c19*/
  }
  v58 = Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  v9 = *((_BYTE *)v1 + 33); /*0x550c30*/
  v56 = 0; /*0x550c35*/
  v57 = 0; /*0x550c3f*/
  v71[0] = -1; /*0x550c44*/
  v71[1] = -1; /*0x550c49*/
  v71[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    v10 = 2 * *((unsigned __int8 *)v1 + 67); /*0x550c64*/
    v11 = 2 * *((unsigned __int8 *)v1 + 65); /*0x550c66*/
    v12 = 2 * *((unsigned __int8 *)v1 + 66); /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      LOBYTE(v11) = -1; /*0x550c8b*/
    LOBYTE(v60) = v11; /*0x550c90*/
    HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v54 = v60; /*0x550ca1*/
    LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(_WORD *)((char *)v1 + 65); /*0x550cb4*/
    v13 = *((_BYTE *)v1 + 66); /*0x550cb9*/
    v61 = *((_BYTE *)v1 + 67); /*0x550cbf*/
    v14 = *((_BYTE *)v1 + 67); /*0x550cc3*/
    LOBYTE(v54) = (unsigned __int8)v60 >> 1; /*0x550cca*/
    HIBYTE(v54) = v13 >> 1; /*0x550cce*/
    LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = v75; /*0x550cdf*/
  v64 = v76; /*0x550ce3*/
  v68 = v75; /*0x550ce7*/
  v69 = v76; /*0x550cef*/
  v67 = v74; /*0x550cf7*/
  v62 = v74; /*0x550cff*/
  v15 = v1[7]; /*0x550d03*/
  v55 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( v15 >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = v59 & 1; /*0x550d25*/
    LODWORD(v73) = v17; /*0x550d27*/
    while ( 1 )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = 4 * v16; /*0x550d3f*/
        v19 = dword_ABC7F8[4 * v16]; /*0x550d42*/
        v20 = dword_ABC7FC[4 * v16]; /*0x550d48*/
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = dword_ABC800[4 * v16]; /*0x550d5e*/
        v22 = dword_ABC804[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        LODWORD(v62) = v19 + v62; /*0x550d84*/
        v23 = v20 + HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (int *)v72; /*0x550d9e*/
        LODWORD(v67) = v24; /*0x550da2*/
        HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = dword_ABC7F8[4 * v16]; /*0x550dbc*/
        v26 = dword_ABC804[4 * v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        LODWORD(v62) = v25 + v62; /*0x550de4*/
        HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = dword_ABC7FC[4 * v16]; /*0x550df5*/
        v28 = dword_ABC800[4 * v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        HIDWORD(v62) += v27; /*0x550e1d*/
        LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !byte_8A0DF0 )
      {
        if ( v53 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e61*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            &v54,
            COERCE_FLOAT(LODWORD(v65)),
            v4,
            v66);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e87*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            &v54,
            COERCE_FLOAT(LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57 = v11; /*0x550e98*/
          v56 = v54; /*0x550ea0*/
          Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x550eab*/
          v30 = ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x550f09*/
              | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
              | (v57 >> g_BitMask_Red << g_BitShift_Blue);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f21*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f44*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( *((_BYTE *)v1 + 33) && v70 == 1 )
        {
          v54 = *(_WORD *)((char *)v1 + 65); /*0x550f5c*/
          LOBYTE(v11) = *((_BYTE *)v1 + 67); /*0x550f61*/
          v55 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v55 >> 1; /*0x550f8f*/
          v31 = v53 != 0 ? 8 : 64;
          if ( (unsigned __int8)v54 >> 1 < v31 && HIBYTE(v54) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (int *)v72; /*0x550fa9*/
          v16 = v59; /*0x550fad*/
          LOBYTE(v54) = (unsigned __int8)v54 >> 1; /*0x550fb1*/
          HIBYTE(v54) >>= 1; /*0x550fb5*/
          v55 >>= 1; /*0x550fb9*/
        }
      }
      v32 = v1[7]; /*0x550fc1*/
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
      v17 = v73; /*0x550d2d*/
    }
  }
  if ( byte_8A0DF0 && dword_8A0E10 && g_ZBufferDescriptor ) /*0x550ff9*/
  {
    v33 = *((_WORD *)g_ZBufferDescriptor + 18); /*0x550fff*/
    HIDWORD(v73) = 0; /*0x551003*/
    v34 = *((_WORD *)g_ZBufferDescriptor + 2) + v33; /*0x551007*/
    v73 = (unsigned __int16)(v4 + v34 - v76 - dword_886FA4); /*0x551036*/
    v72 = (unsigned __int16)(v5 + v34 - WORD2(v74) - dword_886FA4); /*0x551053*/
    *(float *)&v73 = (double)v73 * 0.000015259022; /*0x551064*/
    v35 = (v58 * v61) >> 8; /*0x551086*/
    v36 = (v58 * HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = (v58 * (unsigned __int8)v60) >> 8; /*0x55108c*/
    *(float *)&v72 = (double)v72 * 0.000015259022; /*0x55108f*/
    ColorStruct::SetRGB( /*0x55109d*/
      v77,
      (unsigned __int16)(v58 * (unsigned __int8)v60) >> 8,
      (unsigned __int16)(v58 * HIBYTE(v60)) >> 8,
      (unsigned __int16)(v58 * v61) >> 8);
    ColorStruct::SetRGB(v78, v37, v36, v35); /*0x5510ac*/
    v38 = v73; /*0x5510b1*/
    *(float *)&v47 = (float)v69; /*0x5510bf*/
    *(float *)&v41 = (float)v68; /*0x5510ce*/
    Tactical::SetCellTransform((char *)v77, 0, v41, v47, v73, 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    *(float *)&v42 = (float)v63; /*0x5510f4*/
    Tactical::SetCellTransform((char *)v77, 1, v42, v48, v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72; /*0x5510fe*/
    *(float *)&v49 = (float)SHIDWORD(v62); /*0x55110f*/
    *(float *)&v43 = (float)(int)v62; /*0x55111e*/
    Tactical::SetCellTransform((char *)v77, 2, v43, v49, v72, 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    *(float *)&v44 = (float)v63; /*0x551144*/
    Tactical::SetCellTransform((char *)v78, 0, v44, v50, v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)SHIDWORD(v67); /*0x55115e*/
    *(float *)&v45 = (float)(int)v67; /*0x55116d*/
    Tactical::SetCellTransform((char *)v78, 1, v45, v51, v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)SHIDWORD(v62); /*0x551184*/
    *(float *)&v46 = (float)(int)v62; /*0x551193*/
    Tactical::SetCellTransform((char *)v78, 2, v46, v52, v39, 1065353216, 0); /*0x551198*/
    StructTable::Append(dword_8A0E10, v77); /*0x5511ab*/
    return StructTable::Append(dword_8A0E10, v78); /*0x5511be*/
  }
  else if ( v53 ) /*0x5511d4*/
  {
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5511ff*/
                                                                                           + 64))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    v56 = v60; /*0x551216*/
    v57 = v61; /*0x551223*/
    Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x55122d*/
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5512a7*/
                                                                                      + 52))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red)
           | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
           | (v57 >> g_BitMask_Red << g_BitShift_Blue),
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
void __thiscall VectorClass_ptr_LaserDrawClass::Destroy(_DynamicVectorClass_PAVLaserDrawClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5512d6*/
  this->m_10 = 0; /*0x5512d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5512e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5512e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5512ee*/
  }
  BYTE1(this->m_C) = 0; /*0x5512f1*/
  this->m_8 = 0; /*0x5512f4*/
}



// ==== 0x00551300  _DynamicVectorClass_PAVLaserDrawClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::GetItemIndex(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x551300*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x551315*/
  else
    return 0; /*0x551307*/
}



// ==== 0x00551320  _VectorClass_PAVLaserDrawClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::Get(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55132a*/
}



// ==== 0x00551330  _VectorClass_PAVLaserDrawClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::Add(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x551332*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55133d*/
  {
    v3 = 0; /*0x55133f*/
    if ( m_8 <= 0 ) /*0x551343*/
      return 1; /*0x551363*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x551345*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55134b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x551354*/
    {
      ++v3; /*0x551356*/
      ++v4; /*0x551357*/
      if ( v3 >= m_8 ) /*0x55135c*/
        return 1; /*0x55135c*/
    }
  }
  return 0; /*0x55135e*/
}



// ==== 0x00551370  _VectorClass_PAVLaserDrawClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::Release(_VectorClass_PAVLaserDrawClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55137c*/
  {
    LOBYTE(this->m_C) = 0; /*0x551386*/
    if ( a3 ) /*0x55138c*/
      v4 = a3; /*0x5513a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55139e*/
    LOBYTE(this->m_C) = 1; /*0x5513a6*/
    if ( v4 ) /*0x5513aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5513b5*/
      {
        m_8 = this->m_8; /*0x5513bc*/
        if ( a2 < m_8 ) /*0x5513c1*/
          m_8 = a2; /*0x5513c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5513c9*/
          ++i; /*0x5513ce*/
        if ( BYTE1(this->m_C) ) /*0x5513db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5513e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5513ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5513f7*/
      this->m_8 = a2; /*0x5513ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x551402*/
      return 1; /*0x551408*/
    }
    else
    {
      return 0; /*0x5513af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLaserDrawClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x551412*/
    return 1; /*0x551418*/
  }
}



// ==== 0x00551420  _VectorClass_PAVLaserDrawClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LaserDrawClass::Remove(_VectorClass_PAVLaserDrawClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55142d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x551433*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55143b*/
  }
  BYTE1(this->m_C) = 0; /*0x55143e*/
  this->m_8 = 0; /*0x551441*/
}



// ==== 0x00551450  _VectorClass_PAVLaserDrawClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::GetSize(_VectorClass_PAVLaserDrawClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x551450*/
    return 0; /*0x551458*/
  m_8 = this->m_8; /*0x55145e*/
  result = 0; /*0x551461*/
  if ( m_8 <= 0 ) /*0x551465*/
    return -1; /*0x55147c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55146b*/
  {
    if ( ++result >= m_8 ) /*0x55147a*/
      return -1; /*0x55147a*/
  }
  return result; /*0x55145a*/
}



// ==== 0x00551490  _VectorClass_PAVLaserDrawClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::GetCapacity(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x551490*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5514a5*/
  else
    return 0; /*0x551497*/
}



// ==== 0x005514B0  _DynamicVectorClass_PAVLaserDrawClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::SetCapacity(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5514bc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5514c2*/
    if ( a3 ) /*0x5514c8*/
      v4 = a3; /*0x5514de*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5514da*/
    LOBYTE(this->m_C) = 1; /*0x5514e2*/
    if ( !v4 ) /*0x5514e6*/
      return 0; /*0x55155a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5514e8*/
    {
      m_8 = this->m_8; /*0x5514ef*/
      if ( a2 < m_8 ) /*0x5514f4*/
        m_8 = a2; /*0x5514f6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5514fc*/
        ++i; /*0x551501*/
      if ( BYTE1(this->m_C) ) /*0x55150e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x551519*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x551521*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55152a*/
    this->m_8 = a2; /*0x551532*/
    BYTE1(this->m_C) = a3 == 0; /*0x551535*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLaserDrawClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55153e*/
  }
  v7 = this->m_8; /*0x551541*/
  if ( v7 < this->m_10 ) /*0x551549*/
    this->m_10 = v7; /*0x55154b*/
  return 1; /*0x55154e*/
}



// ==== 0x00551560  _DynamicVectorClass_PAVLaserDrawClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::FindItemIndex(_DynamicVectorClass_PAVLaserDrawClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x551560*/
  result = 0; /*0x551563*/
  if ( m_10 <= 0 ) /*0x551568*/
    return -1; /*0x55157f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55156e*/
  {
    if ( ++result >= m_10 ) /*0x55157d*/
      return -1; /*0x55157d*/
  }
  return result; /*0x551582*/
}



// ==== 0x00551590  _VectorClass_PAVLaserDrawClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LaserDrawClass::QueryInterface(_VectorClass_PAVLaserDrawClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x551593*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LaserDrawClass *>::`vftable'; /*0x551596*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5515a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5515b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5515bb*/
  this->m_8 = 0; /*0x5515c1*/
  if ( (a2 & 1) != 0 ) /*0x5515c8*/
    __3_YAXPAX_Z(this); /*0x5515cb*/
  return this->__pad_0; /*0x5515d5*/
}



// ==== 0x005515E0  _DynamicVectorClass_PAVLaserDrawClass::Constructor_VectorClass_LaserDrawClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5515e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LaserDrawClass *>::`vftable'; /*0x5515e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5515f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x551600*/
  }
  BYTE1(this->m_C) = 0; /*0x55160b*/
  this->m_8 = 0; /*0x551611*/
  if ( (a2 & 1) != 0 ) /*0x551618*/
    __3_YAXPAX_Z(this); /*0x55161b*/
  return this->__pad_0; /*0x551625*/
}



// ==== 0x00551630  WebBrowser::OpenURL  this=WebBrowser  sig=csp ====
bool __thiscall sub_551630(const char *this)
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
  if ( !strlen(this) ) /*0x55164a*/
    return 0; /*0x55164a*/
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  GetTempFileNameA(Buffer, PrefixString, 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), aHtml); /*0x5516b3*/
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  WriteFile(FileA, aTitleViewhtmlT, strlen(aTitleViewhtmlT), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  ExecutableA = FindExecutableA(TempFileName, 0, Result); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  sprintf(CommandLine, "[open] %s", this); /*0x55173c*/
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



// ==== 0x005519B0  VectorClass_ptr_IsometricTileClass::RenderStatusText  this=VectorClass_ptr_IsometricTileClass  sig=csp ====
bool __thiscall DisplayClass::sub_5519B0(int this, int a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( a3 ) /*0x5519b9*/
    return DisplayClass::InsertPriorityText((_DWORD *)this, a2) != 0; /*0x5519ca*/
  v5 = *(_DWORD *)(this + 8); /*0x5519cf*/
  if ( *(_DWORD *)(this + 16) >= v5 ) /*0x5519d7*/
  {
    if ( !*(_BYTE *)(this + 13) && v5 ) /*0x5519e2*/
      return 0; /*0x5519e2*/
    v6 = *(_DWORD *)(this + 20); /*0x5519e4*/
    if ( v6 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->Capacity)(this, v5 + v6, 0) ) /*0x5519f4*/
      return 0; /*0x551a04*/
  }
  v7 = *(_DWORD *)(this + 16); /*0x551a0a*/
  v8 = *(_DWORD *)(this + 4); /*0x551a0d*/
  *(_DWORD *)(this + 16) = v7 + 1; /*0x551a13*/
  *(_DWORD *)(v8 + 4 * v7) = a2; /*0x551a1a*/
  return 1; /*0x5519c9*/
}



// ==== 0x00551A30  ObjectClass::ProcessAutoSave  this=ObjectClass  sig=csp ====
int __thiscall ProcessAutoSave(ObjectClass *this)
{
  int v2; // ebx
  int result; // eax
  _DWORD *ptr_4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x551a35*/
  result = this->? - 1; /*0x551a3a*/
  if ( result > 0 ) /*0x551a3d*/
  {
    do /*0x551a7d*/
    {
      ptr_4 = this->?; /*0x551a41*/
      v5 = ptr_4[v2 + 1]; /*0x551a44*/
      v6 = ptr_4[v2]; /*0x551a48*/
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 184))(v5); /*0x551a55*/
      if ( v7 < (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 184))(v6) ) /*0x551a67*/
      {
        *((_DWORD *)this->? + v2 + 1) = v6; /*0x551a6c*/
        *((_DWORD *)this->? + v2) = v5; /*0x551a73*/
      }
      ++v2; /*0x551a79*/
      result = this->? - 1; /*0x551a7a*/
    }
    while ( v2 < result ); /*0x551a7d*/
  }
  return result; /*0x551a81*/
}



// ==== 0x00551A90  DisplayClass::InsertPriorityText  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::InsertPriorityText(DisplayClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int i; // edi
  int j; // eax

  v3 = *(_DWORD *)this->__pad_8; /*0x551a93*/
  if ( *(_DWORD *)this->__pad_10 >= v3 ) /*0x551a9b*/
  {
    if ( !BYTE1(this->DisplayClass_field_0xC[0]) && v3 ) /*0x551aa6*/
      return 0; /*0x551aa6*/
    v4 = *(_DWORD *)&this->__pad_10[4]; /*0x551aa8*/
    if ( v4 <= 0 /*0x551ab8*/
      || !(*((unsigned __int8 (__thiscall **)(DisplayClass *, int, _DWORD))this->DisplayClass_field_0x0 + 2))(
            this,
            v3 + v4,
            0) )
    {
      return 0; /*0x551abf*/
    }
  }
  for ( i = 0; i < *(_DWORD *)this->__pad_10; ++i ) /*0x551ad2*/
  {
    if ( DisplayClass::checkScreenBounds(*((DisplayClass **)&this->DisplayClass_field_0x4->ptr_0 + i), a2) ) /*0x551adb*/
      break; /*0x551ae2*/
  }
  for ( j = *(_DWORD *)this->__pad_10 - 1; /*0x551af2*/
        j >= i;
        *((_DWORD *)&this->DisplayClass_field_0x4->ptr_8 + j) = *((_DWORD *)&this->DisplayClass_field_0x4->ptr_4 + j) )
  {
    --j; /*0x551af7*/
  }
  *((_DWORD *)&this->DisplayClass_field_0x4->ptr_0 + i) = a2; /*0x551b07*/
  ++*(_DWORD *)this->__pad_10; /*0x551b0f*/
  return 1; /*0x551ac1*/
}



// ==== 0x00551B20  LayerClass::Save  this=LayerClass  sig=csp ====
int __thiscall LayerClass::Save(LayerClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // [esp+0h] [ebp-1Ch]

  v2 = a2; /*0x551b22*/
  if ( !a2 ) /*0x551b2b*/
    return -2147467261; /*0x551b2f*/
  v5 = (_DWORD *)this->count; /*0x551b38*/
  v6 = *a2; /*0x551b3b*/
  v8 = a2; /*0x551b46*/
  a2 = v5; /*0x551b47*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v6 + 16))(v8, &a2, 4, 0); /*0x551b4b*/
  if ( result >= 0 ) /*0x551b50*/
  {
    v7 = 0; /*0x551b56*/
    if ( (int)a2 <= 0 ) /*0x551b5a*/
    {
      return 0; /*0x551b7a*/
    }
    else
    {
      while ( 1 ) /*0x551b6a*/
      {
        result = (*(int (__stdcall **)(_DWORD *, int, int, _DWORD))(*v2 + 16))(v2, this->count + 4 * v7, 4, 0); /*0x551b6a*/
        if ( result < 0 ) /*0x551b6f*/
          break; /*0x551b6f*/
        if ( ++v7 >= (int)a2 ) /*0x551b78*/
          return 0; /*0x551b78*/
      }
    }
  }
  return result; /*0x551b2d*/
}



// ==== 0x00551B90  LayerClass::Load  this=LayerClass  sig=csp ====
int __thiscall LayerClass::Load(LayerClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ebx
  int capacity; // ecx
  int v9; // eax
  int v10; // eax
  int count; // edx
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
    v6 = a2; /*0x551bc9*/
    v7 = 0; /*0x551bcd*/
    if ( (int)a2 <= 0 ) /*0x551bd1*/
    {
LABEL_13:
      v12 = 0; /*0x551c2e*/
      if ( (int)v6 > 0 ) /*0x551c32*/
      {
        do /*0x551c4c*/
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->count + 4 * v12++)); /*0x551c40*/
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
        capacity = this->capacity; /*0x551be6*/
        if ( this->count < capacity /*0x551c0b*/
          || (*((_BYTE *)this + 13) || !capacity)
          && (v9 = *((_DWORD *)this + 5), v9 > 0)
          && (*(unsigned __int8 (__thiscall **)(LayerClass *, int, _DWORD))(this->items[0] + 8))(this, capacity + v9, 0) )
        {
          v10 = this->count; /*0x551c12*/
          count = this->count; /*0x551c15*/
          this->count = v10 + 1; /*0x551c1b*/
          *(_DWORD *)(count + 4 * v10) = v13; /*0x551c22*/
        }
        v6 = a2; /*0x551c25*/
        if ( ++v7 >= (int)a2 ) /*0x551c2c*/
          goto LABEL_13; /*0x551c2c*/
      }
    }
  }
  return result; /*0x551b9e*/
}



// ==== 0x00551C60  BitStreamIOLCW  this=Straw  sig=csp ====
int __fastcall BitStreamIOLCW(unsigned __int8 *a1, unsigned int a2, int a3)
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
int __fastcall LCW_DecompressCore(_BYTE *a1, _BYTE *a2, int a3)
{
  char *v3; // esi
  _BYTE *v4; // edi
  _BYTE *v5; // edi
  unsigned __int8 v6; // al
  _BYTE *v7; // ebx
  char *v8; // edi
  int v9; // ecx
  char *v10; // edi
  __int16 v11; // cx
  bool v12; // zf
  int v13; // ecx
  char *v14; // edx
  _BYTE *v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  int v18; // ecx
  _BYTE *v19; // eax
  _BYTE *v20; // edi
  __int16 v21; // ax
  char v22; // al
  _BYTE *v25; // [esp+18h] [ebp-20h]
  _BYTE *v27; // [esp+24h] [ebp-14h]
  char *v28; // [esp+28h] [ebp-10h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  _BYTE *v31; // [esp+34h] [ebp-4h]

  v25 = 0; /*0x551e89*/
  v28 = &a1[a3]; /*0x551eac*/
  v30 = 1; /*0x551eaf*/
  v27 = a2; /*0x551ebc*/
  *a2 = -127; /*0x551ec3*/
  v3 = a1 + 1; /*0x551ec4*/
  a2[1] = *a1; /*0x551ec5*/
  v4 = a2 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
    v31 = v4; /*0x551ec6*/
    v5 = a1; /*0x551ec9*/
    v29 = 1; /*0x551ecc*/
LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = *v3; /*0x551ed5*/
      if ( *v3 != v3[64] ) /*0x551eda*/
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
      v13 = v3 - v5; /*0x551f13*/
      v12 = v3 == v5; /*0x551f13*/
      if ( v3 == v5 ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = *v5++ == v6; /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5[v29 - 2] ) /*0x551f26*/
      {
        v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        v16 = v5 - 1; /*0x551f2c*/
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
        v19 = (_BYTE *)(v16 - v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = v15 - 1; /*0x551f48*/
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
      v21 = (_WORD)v25 - (_WORD)a1; /*0x551fb5*/
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
  return v4 + 1 - a2; /*0x551fde*/
}



// ==== 0x00551FF0  LCWPipe::Constructor  this=LCWPipe  sig=csp ====
_DWORD *__thiscall LCWPipe::Constructor(LCWPipe *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  size_t v6; // edx

  *((_DWORD *)this + 3) = a2; /*0x551ff9*/
  this->LCWPipe_field_0x04 = 0; /*0x552000*/
  *((_DWORD *)this + 2) = 0; /*0x552003*/
  this->q004 = 0; /*0x552006*/
  *((_DWORD *)this + 5) = 0; /*0x552009*/
  *((_DWORD *)this + 6) = 0; /*0x55200c*/
  *((_DWORD *)this + 7) = a3; /*0x552015*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x55201a*/
  v4 = a3 / 128 + 1; /*0x552023*/
  if ( v4 < 128 ) /*0x552029*/
    v4 = 128; /*0x55202b*/
  *((_DWORD *)this + 8) = v4; /*0x552030*/
  v5 = __2_YAPAXI_Z(a3 + v4); /*0x552036*/
  v6 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8); /*0x552041*/
  *((_DWORD *)this + 5) = v5; /*0x552043*/
  *((_DWORD *)this + 6) = __2_YAPAXI_Z(v6); /*0x55204f*/
  *((_WORD *)this + 18) = -1; /*0x552052*/
  return this->__pad_0; /*0x55205a*/
}



// ==== 0x00552060  LCWPipe::Dtor  this=LCWPipe  sig=csp ====
int __thiscall LCWPipe::Dtor(LCWPipe *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x552063*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x552072*/
  *((_DWORD *)this + 5) = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  *((_DWORD *)this + 6) = 0; /*0x552087*/
  return Pipe::Dtor((Pipe *)this); /*0x552093*/
}



// ==== 0x005520A0  LCWPipe::Compress  this=LCWPipe  sig=csp ====
char *__thiscall LCW::Compress(LCWPipe *this, char *Src, signed int Size)
{
  char *v3; // ebx
  signed int v4; // edi
  size_t v6; // ebp
  size_t v7; // eax
  signed int v8; // ebp
  unsigned __int16 v9; // cx
  int v10; // eax
  int v11; // eax
  int v13; // eax
  signed int v14; // ebp
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  int v18; // ebp
  int v19; // eax
  int i; // eax
  int v21; // ebp
  int v22; // eax
  char *v23; // edx
  char *Srca; // [esp+10h] [ebp+4h]
  char *Srcb; // [esp+10h] [ebp+4h]
  char *Srcc; // [esp+10h] [ebp+4h]

  v3 = Src; /*0x5520a1*/
  v4 = Size; /*0x5520a7*/
  if ( !Src || Size < 1 ) /*0x5520b8*/
    return (char *)Delegate::Dispatch((Pipe *)this, (int)Src, Size); /*0x5522bc*/
  Srca = 0; /*0x5520c5*/
  if ( *((_DWORD *)this + 3) == 1 ) /*0x5520cd*/
  {
    while ( 1 ) /*0x5520db*/
    {
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x5520e1*/
      {
        v6 = 4 - this->q004; /*0x5520eb*/
        if ( v4 < v6 ) /*0x5520ef*/
          v6 = v4; /*0x5520f1*/
        memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v6); /*0x5520fe*/
        v3 += v6; /*0x55210b*/
        v7 = v6 + this->q004; /*0x55210d*/
        v4 -= v6; /*0x55210f*/
        this->q004 = v7; /*0x552114*/
        if ( v7 == 4 ) /*0x552117*/
        {
          memcpy((char *)this + 36, *((const void **)this + 5), 4u); /*0x552123*/
          this->q004 = 0; /*0x55212b*/
        }
      }
      if ( v4 <= 0 ) /*0x552134*/
        break; /*0x552134*/
      v8 = *((unsigned __int16 *)this + 18) - this->q004; /*0x552143*/
      if ( v4 < v8 ) /*0x552147*/
        v8 = v4; /*0x552149*/
      memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v8); /*0x552156*/
      v9 = *((_WORD *)this + 18); /*0x552160*/
      v10 = v8 + this->q004; /*0x552164*/
      v4 -= v8; /*0x552169*/
      v3 += v8; /*0x55216b*/
      this->q004 = v10; /*0x55216f*/
      if ( v10 == v9 ) /*0x552172*/
      {
        BitStreamIOLCW(*((unsigned __int8 **)this + 5), *((_DWORD *)this + 6), 0); /*0x55217c*/
        v11 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), *((unsigned __int16 *)this + 19)); /*0x55218e*/
        this->q004 = 0; /*0x552197*/
        *((_WORD *)this + 18) = -1; /*0x5521a0*/
        Srca += v11; /*0x5521a6*/
      }
      if ( v4 <= 0 ) /*0x5521ac*/
        return Srca; /*0x5521ba*/
    }
  }
  else
  {
    v13 = this->q004; /*0x5521bd*/
    if ( v13 > 0 ) /*0x5521c2*/
    {
      v14 = *((_DWORD *)this + 7) - v13; /*0x5521c7*/
      if ( Size < v14 ) /*0x5521cb*/
        v14 = Size; /*0x5521cd*/
      memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v14); /*0x5521da*/
      v15 = v14 + this->q004; /*0x5521e5*/
      v3 += v14; /*0x5521e7*/
      this->q004 = v15; /*0x5521e9*/
      v4 = Size - v14; /*0x5521f1*/
      if ( v15 == *((_DWORD *)this + 7) ) /*0x5521f5*/
      {
        v16 = DecompressCoreLCW(*((_BYTE **)this + 5), *((_BYTE **)this + 6), *((_DWORD *)this + 7)); /*0x5521fe*/
        v17 = *((_WORD *)this + 14); /*0x552203*/
        v18 = v16; /*0x552207*/
        *((_WORD *)this + 18) = v16; /*0x552211*/
        *((_WORD *)this + 19) = v17; /*0x552214*/
        Srcb = (char *)Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x55221d*/
        v19 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v18); /*0x552228*/
        this->q004 = 0; /*0x552231*/
        Srca = &Srcb[v19]; /*0x55223a*/
      }
    }
    for ( i = *((_DWORD *)this + 7); v4 >= i; Srca = v23 ) /*0x552243*/
    {
      v21 = DecompressCoreLCW(v3, *((_BYTE **)this + 6), i); /*0x552254*/
      v22 = *((_DWORD *)this + 7); /*0x552256*/
      *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x552259*/
      v3 += v22; /*0x55225d*/
      v4 -= v22; /*0x55225f*/
      *((_WORD *)this + 18) = v21; /*0x552269*/
      Srcc = &Srca[Delegate::Dispatch((Pipe *)this, (int)this + 36, 4)]; /*0x55227b*/
      v23 = &Srcc[Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v21)]; /*0x55228b*/
      i = *((_DWORD *)this + 7); /*0x55228d*/
    }
    if ( v4 > 0 ) /*0x55229a*/
    {
      memcpy(*((void **)this + 5), v3, v4); /*0x5522a2*/
      this->q004 = v4; /*0x5522aa*/
    }
  }
  return Srca; /*0x5521b7*/
}



// ==== 0x005522D0  LCWPipe::AddRef  this=LCWPipe  sig=csp ====
int __thiscall LCWPipe_Destru::AddRef(LCWPipe *this)
{
  int v2; // edi
  int v3; // eax
  _WORD *v4; // ebx
  int v5; // edi
  int v6; // edi
  int v8; // ebx
  int v9; // edi

  v2 = 0; /*0x5522d5*/
  v3 = this->q004; /*0x5522d7*/
  if ( v3 > 0 ) /*0x5522dc*/
  {
    if ( *((_DWORD *)this + 3) == 1 ) /*0x5522e6*/
    {
      v4 = (_WORD *)this + 18; /*0x5522ee*/
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x5522f1*/
      {
        v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004); /*0x5522ff*/
        this->q004 = 0; /*0x552301*/
      }
      if ( *((int *)this + 4) > 0 ) /*0x55230d*/
      {
        v5 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4) + v2; /*0x552323*/
        v6 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004) + v5; /*0x55232c*/
        this->q004 = 0; /*0x55232e*/
        *v4 = -1; /*0x552335*/
        return v6 + GameClass::GetRelatedObject((Pipe *)this); /*0x552344*/
      }
    }
    else
    {
      v8 = DecompressCoreLCW(*((_BYTE **)this + 5), *((_BYTE **)this + 6), v3); /*0x552355*/
      *((_WORD *)this + 19) = *((_WORD *)this + 8); /*0x55235a*/
      *((_WORD *)this + 18) = v8; /*0x552363*/
      v9 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x552372*/
      v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v8) + v9; /*0x552379*/
      this->q004 = 0; /*0x55237b*/
    }
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x552341*/
}



// ==== 0x00552390  LCWPipe::QueryInterface  this=LCWPipe  sig=csp ====
int *__thiscall LCWPipe_Destru::QueryInterface(LCWPipe *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x552393*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x552396*/
  __3_YAXPAX_Z(v3); /*0x55239d*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x5523a2*/
  *((_DWORD *)this + 5) = 0; /*0x5523a5*/
  __3_YAXPAX_Z(v4); /*0x5523ad*/
  *((_DWORD *)this + 6) = 0; /*0x5523b7*/
  Pipe::Dtor((Pipe *)this); /*0x5523be*/
  if ( (a2 & 1) != 0 ) /*0x5523c8*/
    __3_YAXPAX_Z(this); /*0x5523cb*/
  return (int *)this->__pad_0; /*0x5523d5*/
}



// ==== 0x005523E0  LCWStraw::Constructor  this=LCWStraw  sig=csp ====
_DWORD *__thiscall LCWStraw::Constructor(LCWStraw *this, int a2, int a3)
{
  int v4; // eax

  this->LCWStraw_field_0x04 = 0; /*0x5523f5*/
  *((_DWORD *)this + 2) = 0; /*0x5523fa*/
  v4 = a3 / 128 + 1; /*0x552400*/
  *((_DWORD *)this + 3) = a2; /*0x552401*/
  *((_DWORD *)this + 8) = v4; /*0x552404*/
  this->q004 = 0; /*0x55240a*/
  *((_DWORD *)this + 5) = 0; /*0x55240d*/
  *((_DWORD *)this + 6) = 0; /*0x552410*/
  *((_DWORD *)this + 7) = a3; /*0x552413*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x552416*/
  *((_DWORD *)this + 5) = __2_YAPAXI_Z(a3 + v4); /*0x552426*/
  if ( !a2 ) /*0x552429*/
    *((_DWORD *)this + 6) = __2_YAPAXI_Z(*((_DWORD *)this + 7) + *((_DWORD *)this + 8)); /*0x55243c*/
  return this->__pad_0; /*0x552441*/
}



// ==== 0x00552450  LCWStraw::Dtor  this=LCWStraw  sig=csp ====
int __thiscall LCWStraw::Dtor(LCWStraw *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x552453*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x552462*/
  *((_DWORD *)this + 5) = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  *((_DWORD *)this + 6) = 0; /*0x552477*/
  return Straw::Dtor((Straw *)this); /*0x552483*/
}



// ==== 0x00552490  LCWStraw::DecompressReader  this=LCWStraw  sig=csp ====
int __thiscall LCW::DecompressReader(LCWStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  unsigned __int16 *v8; // ebx
  unsigned __int8 *v9; // edi
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  void *v13; // [esp-10h] [ebp-20h]
  int v14; // [esp+Ch] [ebp-4h]

  v3 = a2; /*0x552493*/
  v14 = 0; /*0x55249c*/
  if ( !a2 ) /*0x5524a4*/
    return 0; /*0x5524a4*/
  v5 = Size; /*0x5524aa*/
  if ( Size < 1 ) /*0x5524b1*/
    return 0; /*0x5525e3*/
  do /*0x5524c0*/
  {
    v6 = this->q004; /*0x5524c0*/
    if ( v6 > 0 ) /*0x5524c5*/
    {
      v7 = v5; /*0x5524c9*/
      if ( v5 >= v6 ) /*0x5524cb*/
        v7 = this->q004; /*0x5524cd*/
      if ( *((_DWORD *)this + 3) == 1 ) /*0x5524d6*/
        memcpy(v3, (const void *)(*((_DWORD *)this + 5) + *((unsigned __int16 *)this + 19) - v6), v7); /*0x5524e6*/
      else
        memcpy(v3, (const void *)(*((_DWORD *)this + 6) + *((unsigned __int16 *)this + 18) - v6 + 4), v7); /*0x5524fa*/
      v3 += v7; /*0x552509*/
      v5 -= v7; /*0x55250b*/
      Size = v5; /*0x552511*/
      this->q004 -= v7; /*0x552515*/
      v14 += v7; /*0x552518*/
    }
    if ( !v5 ) /*0x55251e*/
      break; /*0x55251e*/
    if ( *((_DWORD *)this + 3) == 1 ) /*0x552528*/
    {
      v8 = (unsigned __int16 *)this + 18; /*0x55252a*/
      if ( Delegate::Invoke((Straw *)this, (int)this + 36, 4) != 4 ) /*0x55253a*/
        return v14; /*0x55253a*/
      v9 = (unsigned __int8 *)(*((_DWORD *)this + 5) + *((_DWORD *)this + 7) + *((_DWORD *)this + 8) - *v8); /*0x552553*/
      if ( Delegate::Invoke((Straw *)this, (int)v9, *v8) != *v8 ) /*0x552564*/
        return v14; /*0x552564*/
      BitStreamIOLCW(v9, *((_DWORD *)this + 5), 0); /*0x55256d*/
      v5 = Size; /*0x552572*/
      this->q004 = *((unsigned __int16 *)this + 19); /*0x55257c*/
    }
    else
    {
      v10 = Delegate::Invoke((Straw *)this, *((_DWORD *)this + 5), *((_DWORD *)this + 7)); /*0x55258b*/
      *((_WORD *)this + 19) = v10; /*0x552593*/
      if ( !v10 ) /*0x552597*/
        return v14; /*0x552597*/
      v11 = DecompressCoreLCW(*((_BYTE **)this + 5), (_BYTE *)(*((_DWORD *)this + 6) + 4), v10); /*0x5525ab*/
      v13 = (void *)*((_DWORD *)this + 6); /*0x5525b6*/
      *((_WORD *)this + 18) = v11; /*0x5525b7*/
      memcpy(v13, (char *)this + 36, 4u); /*0x5525ba*/
      this->q004 = *((unsigned __int16 *)this + 18) + 4; /*0x5525ca*/
    }
  }
  while ( v5 > 0 ); /*0x5524c0*/
  return v14; /*0x5525da*/
}



// ==== 0x005525F0  LCWStraw::QueryInterface  this=LCWStraw  sig=csp ====
int *__thiscall LCWStraw_Destru::QueryInterface(LCWStraw *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x5525f3*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x5525f6*/
  __3_YAXPAX_Z(v3); /*0x5525fd*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x552602*/
  *((_DWORD *)this + 5) = 0; /*0x552605*/
  __3_YAXPAX_Z(v4); /*0x55260d*/
  *((_DWORD *)this + 6) = 0; /*0x552617*/
  Straw::Dtor((Straw *)this); /*0x55261e*/
  if ( (a2 & 1) != 0 ) /*0x552628*/
    __3_YAXPAX_Z(this); /*0x55262b*/
  return (int *)this->__pad_0; /*0x552635*/
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



// ==== 0x00552B10  Scenario::ComputeDisplayPosition  this=Scenario  sig=csp ====
int __thiscall Scenario::ComputeDisplayPosition(Scenario *this)
{
  LoadingScreen *v1; // ebp
  int v2; // edi
  int v3; // eax
  void *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // eax

  v1 = g_DisplayWidth; /*0x552b12*/
  v2 = 640; /*0x552b20*/
  if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x552b3b*/
  {
    v9 = 480; /*0x552b9a*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    v10 = (int)*(&g_DisplayWidth + 1); /*0x552baa*/
    this->Scenario_field_0x24 = v2; /*0x552baf*/
    this->Scenario_field_0x28 = (void *)v9; /*0x552bb4*/
    this->Scenario_field_0x20 = (void *)((v10 - v9) / 2); /*0x552bc6*/
    result = (int)&v1->__pad_0[-v2] / 2; /*0x552bc9*/
    this->Scenario_field_0x1C = (void *)result; /*0x552bcd*/
  }
  else
  {
    v3 = 480; /*0x552b3f*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    v4 = (void *)(v3 - 80); /*0x552b4b*/
    v5 = (char *)&(*(&g_DisplayWidth + 1))[1].LoadingScreen_field_0x10 - v3; /*0x552b5c*/
    this->Scenario_field_0x14 = (void *)v2; /*0x552b5e*/
    this->Scenario_field_0x24 = v2; /*0x552b64*/
    v6 = (int)(v5 - 80) / 2; /*0x552b6f*/
    this->Scenario_field_0x10 = (void *)v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    v7 = (int)&v1->__pad_0[-v2] / 2; /*0x552b76*/
    this->Scenario_field_0x34 = (void *)v2; /*0x552b78*/
    this->Scenario_field_0xC = (void *)v7; /*0x552b7b*/
    this->Scenario_field_0x1C = (void *)v7; /*0x552b7e*/
    this->Scenario_field_0x20 = (void *)v6; /*0x552b81*/
    this->Scenario_field_0x2C = (void *)v7; /*0x552b84*/
    result = (int)v4 + v6; /*0x552b88*/
    this->Scenario_field_0x28 = v4; /*0x552b8b*/
    this->Scenario_field_0x18 = (void *)40; /*0x552b8f*/
    this->Scenario_field_0x30 = (void *)result; /*0x552b92*/
    this->Scenario_field_0x38 = (void *)40; /*0x552b95*/
  }
  return result; /*0x552b87*/
}



// ==== 0x00552BE0  Scenario::ComputeDialogPos  this=Scenario  sig=csp ====
_DWORD *__thiscall Scenario::ComputeDialogPos(Scenario *this, _DWORD *a2)
{
  char *Scenario_field_0x2C; // edx
  char *Scenario_field_0x30; // ecx
  _DWORD *result; // eax
  char *v5; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h] BYREF

  if ( *(_DWORD *)&dword_A8B238 ) /*0x552beb*/
  {
    v6 = Copy8Bytes(&v11, (int *)&this->Scenario_field_0x1C); /*0x552c3b*/
    v7 = *v6; /*0x552c40*/
    v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552c52*/
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
    Scenario_field_0x2C = (char *)this->Scenario_field_0x2C; /*0x552bf8*/
    Scenario_field_0x30 = (char *)this->Scenario_field_0x30; /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552bfd*/
      v5 = Scenario_field_0x2C + 84; /*0x552c06*/
    else
      v5 = Scenario_field_0x2C + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = Scenario_field_0x30 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/
}



// ==== 0x00552C90  Map::Load  this=Scenario  sig=ida-proto ====
int sub_552C90()
{
  int result; // eax

  result = -1; /*0x552c96*/
  if ( dword_A8B238[0] )
    return g_DisplayWidth != 640 ? 406 : 326;
  return result; /*0x552cb6*/
}



// ==== 0x00552CC0  SessionClass::Load  this=SessionClass  sig=csp ====
_DWORD *__thiscall sub_552CC0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  char *v7; // ecx

  if ( this->SessionClass_field_08
    || ((Debug::Log_0(aLoadmdMix), (v2 = __2_YAPAXI_Z(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, aLoadmdMix_0, (int)dword_886980)),
        (this->SessionClass_field_08 = result) != 0) )
  {
    if ( this->MPGameMode
      || ((v4 = __2_YAPAXI_Z(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, aLoadMix, (int)dword_886980)),
          (this->MPGameMode = result) != 0) )
    {
      if ( g_GameMode_Current[0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x72b3e8*/
        if ( !dword_B0FB80 ) /*0x72b3ea*/
          LoadPaletteSimple(off_844BAC, &dword_B0FB7C, &dword_B0FB80); /*0x72b3fc*/
        if ( !dword_B0FB88 ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = off_844BB4[0]; /*0x72b420*/
            if ( v6 != 1 ) /*0x72b433*/
              v7 = off_844BB8; /*0x72b435*/
            LoadPaletteSimple(v7, &dword_B0FB84, &dword_B0FB88); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(off_844BB0[0], &dword_B0FB84, &dword_B0FB88); /*0x72b41e*/
          }
        }
        result = (_DWORD *)dword_B0FB90; /*0x72b440*/
        if ( !dword_B0FB90 ) /*0x72b448*/
          return (_DWORD *)LoadPaletteSimple(off_844BBC, &dword_B0FB8C, &dword_B0FB90); /*0x72b45a*/
      }
    }
  }
  return result; /*0x552d5d*/
}



// ==== 0x00552D60  LoadingScreen::Render  this=LoadingScreen  sig=csp ====
const wchar_t *__thiscall LoadingScreen::Render(LoadingScreen *this)
{
  const wchar_t *result; // eax
  wchar_t *v3; // esi
  int v4; // ebx
  LoadingScreen *v5; // edi
  char *p_uniqueId; // ebx
  int Value; // esi
  char *BackgroundImage; // edi
  char *OverlayImage; // esi
  int v10; // edi
  int v11; // ebx
  int _72B380; // eax
  int LoadingScreen_field_0x0C; // ecx
  int LoadingScreen_field_0x10; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  Color *LoadScreenAnim; // esi
  size_t LoadingScreen_field_0x3C; // eax
  void *ptr_4; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // edi
  int LoadingScreen_field_0x04; // ebx
  int v26; // ebp
  _BYTE *v27; // eax
  int PlayerSide; // ebx
  char *v29; // eax
  int v30; // edi
  void *v31; // ecx
  ObjectClass *v32; // eax
  Surface *v33; // esi
  int *v34; // eax
  int v35; // edx
  Color *ColorScheme; // eax
  int v37; // eax
  unsigned __int16 *StringCSF; // edi
  int v39; // ecx
  int v40; ... [33253 chars total]



// ==== 0x00554100  LoadingScreen::AdjustForResolution  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::AdjustForResolution(LoadingScreen *this)
{
  int result; // eax

  if ( (int)g_DisplayWidth >= 800 ) /*0x554110*/
  {
    result = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2 + this->LoadingScreen_field_0x04; /*0x554137*/
    *(_DWORD *)this->__pad_0 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x554139*/
    this->LoadingScreen_field_0x04 = result; /*0x55413b*/
  }
  return result; /*0x55413f*/
}



// ==== 0x00554150  LoadingScreen::CalcProgressBarRect  this=LoadingScreen  sig=csp ====
int *__thiscall LoadingScreen::CalcProgressBarRect(LoadingScreen *this)
{
  int v1; // esi
  int v2; // edi

  if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x554161*/
  {
    v1 = 16; /*0x554163*/
    v2 = 235; /*0x554168*/
  }
  else
  {
    v1 = 20; /*0x55416f*/
    v2 = 300; /*0x554174*/
  }
  if ( (int)g_DisplayWidth >= 800 ) /*0x55418b*/
  {
    v1 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x55419a*/
    v2 += (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x5541a8*/
  }
  *(_DWORD *)this->__pad_0 = v1; /*0x5541ac*/
  this->LoadingScreen_field_0x04 = v2; /*0x5541ae*/
  this->LoadingScreen_field_0x08 = 200; /*0x5541b3*/
  this->LoadingScreen_field_0x0C = 20; /*0x5541b6*/
  return (int *)this->__pad_0; /*0x5541b1*/
}



// ==== 0x005541C0  Render_Render_5541C0  this=-  sig=csp ====
int __fastcall Render_Render_5541C0(unsigned __int16 *a1, int a2, int a3, int a4, int a5, char a6, char a7)
{
  int v8; // edx
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  int dy; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14[4]; // [esp+10h] [ebp-10h] BYREF

  dy = 0; /*0x5541dd*/
  v13 = 0; /*0x5541e5*/
  Text::Layout(g_FogOfWarState, a1, &dy, &v13, a5); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = a5; /*0x5541fa*/
    dy = a5; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  v14[1] = a4; /*0x554213*/
  v14[3] = v13; /*0x55421b*/
  v14[0] = a3; /*0x55421f*/
  v14[2] = v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    v14[0] = a3 + (a5 - v8) / 2; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    v14[0] = a5 + a3 - v8; /*0x554245*/
  }
  Rect::Inflate(v10, v11, dy); /*0x554252*/
  return DSurface::FillRectWithColor(v14, a2, 0, 0x9Fu); /*0x554269*/
}



// ==== 0x00554280  Render_Render  this=Text  sig=csp ====
int __fastcall sub_554280(unsigned __int16 *a1, int a2, int *a3, unsigned __int16 a4, char a5)
{
  int v5; // esi
  int v8; // ecx
  int v9; // edx
  int v11[4]; // [esp+14h] [ebp-10h] BYREF

  v5 = a3[1]; /*0x55428a*/
  v8 = *a3; /*0x554294*/
  v9 = *a3 + a3[2]; /*0x55429b*/
  v11[3] = v5 + a3[3]; /*0x55429d*/
  v11[0] = v8; /*0x5542a5*/
  v11[2] = v9; /*0x5542b0*/
  v11[1] = v5; /*0x5542c7*/
  return PrintFontLayout( /*0x554341*/
           a2,
           a1,
           v11,
           (_DWORD *)g_FogOfWarState,
           (unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Red) << g_BitShift_Green_0)
         | (((unsigned __int8)((unsigned __int8)(a4 >> g_BitMask_Green) << g_BitMask_Blue)
           | ((unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Blue) << g_BitMask_Red) << 8)) << 8),
           a5,
           12,
           0,
           0,
           0);
}



// ==== 0x00554370  LoadProgressMgr::ReleaseBuffer  this=LoadProgressMgr  sig=csp ====
void __thiscall LoadProgressMgr::ReleaseBuffer(LoadProgressMgr *this)
{
  char v2; // al
  char v3; // al
  void (__thiscall ***LoadProgressMgr_field_0x04)(_DWORD, int); // ecx
  void (__thiscall ***LoadProgressMgr_field_0x08)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  ObjectClass *v7; // [esp+0h] [ebp-8h]
  ObjectClass *v8; // [esp+0h] [ebp-8h]

  if ( *((_BYTE *)this + 80) && *((_DWORD *)this + 17) ) /*0x55437b*/
    __3_YAXPAX_Z(*((void **)this + 17)); /*0x554383*/
  v2 = *((_BYTE *)this + 81); /*0x55438b*/
  *((_DWORD *)this + 17) = 0; /*0x55438e*/
  if ( v2 && *((_DWORD *)this + 18) ) /*0x554395*/
    __3_YAXPAX_Z(*((void **)this + 18)); /*0x55439d*/
  v3 = *((_BYTE *)this + 82); /*0x5543a5*/
  *((_DWORD *)this + 18) = 0; /*0x5543a8*/
  if ( v3 && *((_DWORD *)this + 19) ) /*0x5543af*/
    __3_YAXPAX_Z(*((void **)this + 19)); /*0x5543b7*/
  *((_DWORD *)this + 19) = 0; /*0x5543bf*/
  LoadProgressMgr_Release(v7); /*0x5543c2*/
  LoadProgressMgr_Release_72B870(v8); /*0x5543c7*/
  LoadProgressMgr_field_0x04 = (void (__thiscall ***)(_DWORD, int))this->LoadProgressMgr_field_0x04; /*0x5543cc*/
  if ( LoadProgressMgr_field_0x04 ) /*0x5543d1*/
  {
    (**LoadProgressMgr_field_0x04)(LoadProgressMgr_field_0x04, 1); /*0x5543d7*/
    this->LoadProgressMgr_field_0x04 = 0; /*0x5543d9*/
  }
  LoadProgressMgr_field_0x08 = (void (__thiscall ***)(_DWORD, int))this->LoadProgressMgr_field_0x08; /*0x5543dc*/
  if ( LoadProgressMgr_field_0x08 ) /*0x5543e1*/
  {
    (**LoadProgressMgr_field_0x08)(LoadProgressMgr_field_0x08, 1); /*0x5543e7*/
    this->LoadProgressMgr_field_0x08 = 0; /*0x5543e9*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 24); /*0x5543ec*/
  if ( v6 ) /*0x5543f1*/
    (**v6)(v6, 1); /*0x5543f7*/
  *((_DWORD *)this + 24) = 0; /*0x5543f9*/
}



// ==== 0x00554400  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_554400(ObjectClass *this, int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  v3 = this->customSound_controller[4]; /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass + 1))( /*0x554420*/
      g_DSurface_Hidden,
      v3,
      0,
      1);
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
  dword_ABCA10 = (int)&DynamicVectorClass<LightSourceClass *>::`vftable'; /*0x55465d*/
  dword_ABCA24 = 10; /*0x554667*/
  dword_ABCA20 = 0; /*0x554671*/
  return atexit(sub_554680); /*0x55467c*/
}



// ==== 0x00554680  sub_554680  this=-  sig=ida-proto ====
void __cdecl sub_554680()
{
  dword_ABCA10 = (int)&VectorClass<LightSourceClass *>::`vftable'; /*0x554688*/
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
  dword_ABCA40 = (int)&DynamicVectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x5546dd*/
  dword_ABCA54 = 10; /*0x5546e7*/
  dword_ABCA50 = 0; /*0x5546f1*/
  return atexit(sub_554700); /*0x5546fc*/
}



// ==== 0x00554700  sub_554700  this=-  sig=ida-proto ====
void __cdecl sub_554700()
{
  if ( (byte_ABC9C0 & 1) == 0 ) /*0x55470a*/
  {
    dword_ABCA40 = (int)&VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x55470e*/
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
_DWORD *__thiscall LightSourceClass::Construct(
        LightSourceClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
  this->LightTint[0] = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  this->LightTint[1] = a8; /*0x55477e*/
  this->LightTint[2] = a9; /*0x554788*/
  this->DetailLevel = 2; /*0x55478f*/
  this->Location[0] = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  this->AbstractClass = &LightSourceClass::`vftable'; /*0x5547a0*/
  this->Location[1] = a3; /*0x5547a6*/
  this->LightVisibility = a5; /*0x5547ad*/
  this->? = &LightSourceClass::`vftable'; /*0x5547b0*/
  this->Location[2] = a4; /*0x5547b7*/
  this->? = &LightSourceClass::`vftable'; /*0x5547ba*/
  this->? = &LightSourceClass::`vftable'; /*0x5547c1*/
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
    *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
  }
  return &this->AbstractClass; /*0x55481e*/
}



// ==== 0x00554830  LightSourceClass::Constructor  this=LightSourceClass  sig=csp ====
int __thiscall LightSourceClass::Constructor(LightSourceClass *this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  this->LightTint[0] = 0; /*0x554840*/
  this->LightTint[1] = 0; /*0x554843*/
  this->LightTint[2] = 0; /*0x554846*/
  this->Location[0] = g_MissionQueueFrame.random[125]; /*0x55484f*/
  this->Location[1] = g_MissionQueueFrame.random[126]; /*0x554857*/
  v2 = g_MissionQueueFrame.random[127]; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  this->Location[2] = v2; /*0x554866*/
  this->AbstractClass = &LightSourceClass::`vftable'; /*0x554869*/
  this->? = &LightSourceClass::`vftable'; /*0x55486f*/
  this->? = &LightSourceClass::`vftable'; /*0x554876*/
  this->? = &LightSourceClass::`vftable'; /*0x55487d*/
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5548b6*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v3 = g_MissionQueueFrame.random[133]++; /*0x5548c3*/
    *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v3) = this; /*0x5548d2*/
  }
  return (int)this; /*0x5548d7*/
}



// ==== 0x005549A0  ObjectClass::Map_Reset_5549A0  this=ObjectClass  sig=csp ====
void Map_Reset_5549A0(ObjectClass *this)
{
  int v1; // edx
  _DWORD *v2; // esi
  bool v3; // zf
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  v1 = g_MissionQueueFrame.random[133]; /*0x5549a0*/
  byte_829AE4 = 0; /*0x5549a6*/
  if ( g_MissionQueueFrame.random[133] ) /*0x5549af*/
  {
    v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549b2*/
    do /*0x5549fc*/
    {
      if ( *v2 ) /*0x5549b8*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v2 + 32))(*v2, 1); /*0x5549c2*/
        v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549c5*/
        v1 = g_MissionQueueFrame.random[133]; /*0x5549cb*/
      }
      v3 = v1 == 0; /*0x5549d1*/
      if ( v1 > 0 ) /*0x5549d3*/
      {
        --v1; /*0x5549d5*/
        v4 = 0; /*0x5549d6*/
        v3 = v1 == 0; /*0x5549d8*/
        g_MissionQueueFrame.random[133] = v1; /*0x5549da*/
        if ( v1 > 0 ) /*0x5549e0*/
        {
          do /*0x5549f8*/
          {
            v2[v4] = v2[v4 + 1]; /*0x5549e6*/
            v1 = g_MissionQueueFrame.random[133]; /*0x5549e9*/
            v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549ef*/
            ++v4; /*0x5549f5*/
          }
          while ( v4 < g_MissionQueueFrame.random[133] ); /*0x5549f8*/
          v3 = g_MissionQueueFrame.random[133] == 0; /*0x5549fa*/
        }
      }
    }
    while ( !v3 ); /*0x5549fc*/
  }
  if ( g_MissionQueueFrame.random[145] ) /*0x554a06*/
  {
    do /*0x554a4a*/
    {
      __3_YAXPAX_Z(*(void **)g_MissionQueueFrame.random[142]); /*0x554a11*/
      v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a1f*/
      if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a21*/
      {
        v6 = 0; /*0x554a24*/
        v5 = g_MissionQueueFrame.random[145]-- == 1; /*0x554a26*/
        if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a2e*/
        {
          do /*0x554a46*/
          {
            ++v6; /*0x554a36*/
            *(_DWORD *)(g_MissionQueueFrame.random[142] + 4 * v6 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[142] /*0x554a3a*/
                                                                                  + 4 * v6);
          }
          while ( v6 < g_MissionQueueFrame.random[145] ); /*0x554a46*/
          v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a48*/
        }
      }
    }
    while ( !v5 ); /*0x554a4a*/
  }
  byte_829AE4 = 1; /*0x554a4c*/
}



// ==== 0x00554A60  Trigger::EnableOnce  this=LightSourceClass  sig=csp ====
int __thiscall Trigger::EnableOnce(Trigger *this, char a2)
{
  int result; // eax

  LOBYTE(result) = this->Trigger_field_0x48; /*0x554a60*/
  if ( !(_BYTE)result ) /*0x554a65*/
  {
    LOBYTE(this->Trigger_field_0x48) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView((TacticalClass *)this, a2); /*0x554a70*/
  }
  return result; /*0x554a75*/
}



// ==== 0x00554A80  MapClass::ScrollOnce  this=LightSourceClass  sig=csp ====
int __thiscall MapClass::ScrollOnce(int this, char a2)
{
  int result; // eax

  LOBYTE(result) = *(_BYTE *)(this + 72); /*0x554a80*/
  if ( (_BYTE)result ) /*0x554a85*/
  {
    *(_BYTE *)(this + 72) = 0; /*0x554a8b*/
    return TacticalClass::ScrollView((_DWORD *)this, a2); /*0x554a90*/
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



// ==== 0x00554AF0  TacticalClass::ScrollView  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ScrollView(TacticalClass *this, char a2)
{
  int result; // eax
  double v3; // st7
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned __int16 v8; // cx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int *v16; // eax
  double v17; // [esp+0h] [ebp-38h]
  __int16 v18[2]; // [esp+14h] [ebp-24h] BYREF
  int v19; // [esp+18h] [ebp-20h]
  int v20; // [esp+1Ch] [ebp-1Ch]
  int v21; // [esp+20h] [ebp-18h]
  int v22; // [esp+24h] [ebp-14h]
  int v23; // [esp+28h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-Ch]
  __int16 v25; // [esp+30h] [ebp-8h]
  __int16 v26; // [esp+32h] [ebp-6h]

  LOBYTE(result) = byte_829AE4; /*0x554af9*/
  if ( byte_829AE4 ) /*0x554b07*/
  {
    result = stru_A8EB00.ObjectTypeClass[30]; /*0x554b0d*/
    if ( stru_A8EB00.ObjectTypeClass[30] >= this->field34 ) /*0x554b17*/
    {
      if ( a2 && g_MissionQueueFrame.random[145] ) /*0x554b28*/
        UpdateDeferredLightSurfaces(0, 1); /*0x554b2e*/
      v25 = this->field38 / 256; /*0x554b42*/
      v26 = this->TacticalClass_field_3C / 256; /*0x554b56*/
      v20 = this->field44 / 256 + 1; /*0x554b6f*/
      v5 = v20; /*0x554b6c*/
      v6 = -v20; /*0x554b73*/
      v7 = -v20; /*0x554b75*/
      v24 = -v20; /*0x554b77*/
      v22 = -v20; /*0x554b7d*/
      if ( -v5 <= v5 ) /*0x554b81*/
      {
        do /*0x554d04*/
        {
          v21 = v6; /*0x554b89*/
          if ( v6 <= v5 ) /*0x554b8d*/
          {
            v8 = v26 + v7; /*0x554b97*/
            for ( HIWORD(v19) = v8; ; v8 = HIWORD(v19) ) /*0x554b99*/
            {
              LOWORD(v19) = v25 + v6; /*0x554bab*/
              *(_DWORD *)v18 = v19; /*0x554bb7*/
              if ( (unsigned __int16)(v25 + v6) < 0x200u && v8 < 0x200u ) /*0x554bce*/
              {
                if ( (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v18) ) /*0x554be9*/
                {
                  v9 = (v18[0] << 8) + 128 - this->field38; /*0x554c11*/
                  v10 = (v18[1] << 8) + 128 - this->TacticalClass_field_3C; /*0x554c1e*/
                  v23 = v9 * v9 + v10 * v10; /*0x554c2a*/
                  __asm /*0x554c2e*/
                  {
                    fild [esp+38h+var_10]
                    fstp [esp+38h+var_38]; double
                  }
                  Math::Sqrt(v17); /*0x554c35*/
                  LOWORD(v11) = Math::RoundToInt(v3); /*0x554c3d*/
                  if ( v11 <= this->field44 ) /*0x554c45*/
                  {
                    if ( a2 ) /*0x554c4e*/
                    {
                      v12 = __2_YAPAXI_Z(0x14u); /*0x554c56*/
                      if ( v12 ) /*0x554c60*/
                      {
                        v13 = *(_DWORD *)v18; /*0x554c62*/
                        *(_DWORD *)v12 = 0; /*0x554c6b*/
                        *(_DWORD *)(v12 + 4) = 0x10000; /*0x554c6d*/
                        *(_WORD *)(v12 + 8) = 0; /*0x554c74*/
                        *(_WORD *)(v12 + 10) = 1000; /*0x554c78*/
                        *(_WORD *)(v12 + 12) = 1000; /*0x554c7c*/
                        *(_WORD *)(v12 + 14) = 1000; /*0x554c80*/
                        *(_DWORD *)(v12 + 16) = v13; /*0x554c84*/
                        v14 = v12; /*0x554c87*/
                      }
                      else
                      {
                        v14 = 0; /*0x554c8b*/
                      }
                      if ( g_MissionQueueFrame.random[145] < g_MissionQueueFrame.random[143] /*0x554cc1*/
                        || (BYTE1(g_MissionQueueFrame.random[144]) || !g_MissionQueueFrame.random[143])
                        && g_MissionQueueFrame.random[146] > 0
                        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[141] + 8))(
                             &g_MissionQueueFrame.random[141],
                             g_MissionQueueFrame.random[146] + g_MissionQueueFrame.random[143],
                             0) )
                      {
                        v15 = g_MissionQueueFrame.random[145]++; /*0x554cce*/
                        *(_DWORD *)(g_MissionQueueFrame.random[142] + 4 * v15) = v14; /*0x554cdd*/
                      }
                      v5 = v20; /*0x554ce0*/
                    }
                    else
                    {
                      v16 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x554d3f*/
                      TacticalClass::SetView(v16, 0, 0x10000, 0, 1000, 1000, 1000); /*0x554d46*/
                    }
                  }
                }
              }
              LOWORD(v6) = ++v21; /*0x554ce8*/
              if ( v21 > v5 ) /*0x554cef*/
                break; /*0x554cef*/
            }
            v7 = v22; /*0x554cf5*/
            v6 = v24; /*0x554cf9*/
          }
          v22 = ++v7; /*0x554d00*/
        }
        while ( v7 <= v5 ); /*0x554d04*/
      }
      return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x554d11*/
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

  HighPrecisionTimer = Timer::GetHighPrecision(&dbl_884D88); /*0x554d6e*/
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
          v5 = Timer::GetHighPrecision(&dbl_884D88); /*0x554dc5*/
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
          v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(*((_DWORD *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
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
  v7 = Timer::GetHighPrecision(&dbl_884D88); /*0x554ef3*/
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
        v11 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v10 + 8); /*0x554f6d*/
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
      MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x554fdb*/
    }
  }
  v12 = Timer::GetHighPrecision(&dbl_884D88); /*0x554fe9*/
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
int __thiscall LightSourceClass::Stat(LightSourceClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x55507a*/
}



// ==== 0x00555080  LightSourceClass::ddtor  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::ddtor(LightSourceClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = unk_7E98FC; /*0x5550b0*/
  return 0; /*0x55508d*/
}



// ==== 0x005550C0  LightSourceClass::Write  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Write(LightSourceClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( this ) /*0x5550d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x5550df*/
      this->AbstractClass = &LightSourceClass::`vftable'; /*0x5550e4*/
      this->? = &LightSourceClass::`vftable'; /*0x5550ea*/
      this->? = &LightSourceClass::`vftable'; /*0x5550f1*/
      this->? = &LightSourceClass::`vftable'; /*0x5550f8*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/
}



// ==== 0x00555110  LightSourceClass::Seek  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Seek(LightSourceClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/
}



// ==== 0x00555130  LightSourceClass::StubReturn76  this=LightSourceClass  sig=csp ====
int LightSourceClass::StubReturn76(LightSourceClass *this)
{
  return 76; /*0x555135*/
}



// ==== 0x00555140  LightSourceClass::StubReturn54  this=LightSourceClass  sig=csp ====
int LightSourceClass::StubReturn54(LightSourceClass *this)
{
  return 54; /*0x555145*/
}



// ==== 0x00555150  LightSourceClass::CopyTo  this=LightSourceClass  sig=csp ====
void **__thiscall LightSourceClass::CopyTo(LightSourceClass *this, char a2)
{
  int v3; // eax
  LightSourceClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &LightSourceClass::`vftable'; /*0x555156*/
  this->? = &LightSourceClass::`vftable'; /*0x55515c*/
  this->? = &LightSourceClass::`vftable'; /*0x555163*/
  this->? = &LightSourceClass::`vftable'; /*0x55516a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x555171*/
  v5 = this; /*0x555186*/
  v3 = (*(int (__thiscall **)(int *, LightSourceClass **))(g_MissionQueueFrame.random[129] + 16))( /*0x55518a*/
         &g_MissionQueueFrame.random[129],
         &v5);
  if ( v3 != -1 && v3 < g_MissionQueueFrame.random[133] ) /*0x55519a*/
  {
    --g_MissionQueueFrame.random[133]; /*0x55519f*/
    for ( ; /*0x5551a5*/
          v3 < g_MissionQueueFrame.random[133];
          *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[130]
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5551ad*/
    }
  }
  if ( this->Activated ) /*0x5551bf*/
  {
    this->Activated = 0; /*0x5551ca*/
    TacticalClass::ScrollView((TacticalClass *)this, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    __3_YAXPAX_Z(this); /*0x5551e2*/
  return &this->AbstractClass; /*0x5551ec*/
}



// ==== 0x00555200  _DynamicVectorClass_PAVLightSourceClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Destroy(_DynamicVectorClass_PAVLightSourceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555206*/
  this->m_10 = 0; /*0x555209*/
  if ( v2 && BYTE1(this->m_C) ) /*0x555210*/
  {
    __3_YAXPAX_Z(v2); /*0x555216*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55521e*/
  }
  BYTE1(this->m_C) = 0; /*0x555221*/
  this->m_8 = 0; /*0x555224*/
}



// ==== 0x00555230  _DynamicVectorClass_PAVLightSourceClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetItemIndex(
        _DynamicVectorClass_PAVLightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555245*/
  else
    return 0; /*0x555237*/
}



// ==== 0x00555250  _VectorClass_PAVLightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::Get(_VectorClass_PAVLightSourceClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55525a*/
}



// ==== 0x00555260  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Destroy_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555266*/
  this->m_10 = 0; /*0x555269*/
  if ( v2 && BYTE1(this->m_C) ) /*0x555270*/
  {
    __3_YAXPAX_Z(v2); /*0x555276*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55527e*/
  }
  BYTE1(this->m_C) = 0; /*0x555281*/
  this->m_8 = 0; /*0x555284*/
}



// ==== 0x00555290  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetItemIndex_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555290*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5552a5*/
  else
    return 0; /*0x555297*/
}



// ==== 0x005552B0  _VectorClass_PAVPendingCellClass_LightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Get(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5552ba*/
}



// ==== 0x005552C0  _VectorClass_PAVLightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::Add(_VectorClass_PAVLightSourceClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5552c2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5552cd*/
  {
    v3 = 0; /*0x5552cf*/
    if ( m_8 <= 0 ) /*0x5552d3*/
      return 1; /*0x5552f3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5552d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5552db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5552e4*/
    {
      ++v3; /*0x5552e6*/
      ++v4; /*0x5552e7*/
      if ( v3 >= m_8 ) /*0x5552ec*/
        return 1; /*0x5552ec*/
    }
  }
  return 0; /*0x5552ee*/
}



// ==== 0x00555300  _VectorClass_PAVLightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::Release(_VectorClass_PAVLightSourceClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55530c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555316*/
    if ( a3 ) /*0x55531c*/
      v4 = a3; /*0x555332*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55532e*/
    LOBYTE(this->m_C) = 1; /*0x555336*/
    if ( v4 ) /*0x55533a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x555345*/
      {
        m_8 = this->m_8; /*0x55534c*/
        if ( a2 < m_8 ) /*0x555351*/
          m_8 = a2; /*0x555353*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x555359*/
          ++i; /*0x55535e*/
        if ( BYTE1(this->m_C) ) /*0x55536b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555376*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x55537e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x555387*/
      this->m_8 = a2; /*0x55538f*/
      BYTE1(this->m_C) = a3 == 0; /*0x555392*/
      return 1; /*0x555398*/
    }
    else
    {
      return 0; /*0x55533f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5553a2*/
    return 1; /*0x5553a8*/
  }
}



// ==== 0x005553B0  _VectorClass_PAVLightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Remove(_VectorClass_PAVLightSourceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5553bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5553c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5553cb*/
  }
  BYTE1(this->m_C) = 0; /*0x5553ce*/
  this->m_8 = 0; /*0x5553d1*/
}



// ==== 0x005553E0  _VectorClass_PAVLightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::GetSize(_VectorClass_PAVLightSourceClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5553e0*/
    return 0; /*0x5553e8*/
  m_8 = this->m_8; /*0x5553ee*/
  result = 0; /*0x5553f1*/
  if ( m_8 <= 0 ) /*0x5553f5*/
    return -1; /*0x55540c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5553fb*/
  {
    if ( ++result >= m_8 ) /*0x55540a*/
      return -1; /*0x55540a*/
  }
  return result; /*0x5553ea*/
}



// ==== 0x00555420  _VectorClass_PAVLightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetCapacity(_VectorClass_PAVLightSourceClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555420*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555435*/
  else
    return 0; /*0x555427*/
}



// ==== 0x00555440  _DynamicVectorClass_PAVLightSourceClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::SetCapacity(
        _DynamicVectorClass_PAVLightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55544c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555452*/
    if ( a3 ) /*0x555458*/
      v4 = a3; /*0x55546e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55546a*/
    LOBYTE(this->m_C) = 1; /*0x555472*/
    if ( !v4 ) /*0x555476*/
      return 0; /*0x5554ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x555478*/
    {
      m_8 = this->m_8; /*0x55547f*/
      if ( a2 < m_8 ) /*0x555484*/
        m_8 = a2; /*0x555486*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55548c*/
        ++i; /*0x555491*/
      if ( BYTE1(this->m_C) ) /*0x55549e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5554a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5554b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5554ba*/
    this->m_8 = a2; /*0x5554c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5554c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5554ce*/
  }
  v7 = this->m_8; /*0x5554d1*/
  if ( v7 < this->m_10 ) /*0x5554d9*/
    this->m_10 = v7; /*0x5554db*/
  return 1; /*0x5554de*/
}



// ==== 0x005554F0  _DynamicVectorClass_PAVLightSourceClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::FindItemIndex(
        _DynamicVectorClass_PAVLightSourceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5554f0*/
  result = 0; /*0x5554f3*/
  if ( m_10 <= 0 ) /*0x5554f8*/
    return -1; /*0x55550f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5554fe*/
  {
    if ( ++result >= m_10 ) /*0x55550d*/
      return -1; /*0x55550d*/
  }
  return result; /*0x555512*/
}



// ==== 0x00555520  _VectorClass_PAVPendingCellClass_LightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Add(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x555522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55552d*/
  {
    v3 = 0; /*0x55552f*/
    if ( m_8 <= 0 ) /*0x555533*/
      return 1; /*0x555553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x555535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55553b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x555544*/
    {
      ++v3; /*0x555546*/
      ++v4; /*0x555547*/
      if ( v3 >= m_8 ) /*0x55554c*/
        return 1; /*0x55554c*/
    }
  }
  return 0; /*0x55554e*/
}



// ==== 0x00555560  _VectorClass_PAVPendingCellClass_LightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Release(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55556c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555576*/
    if ( a3 ) /*0x55557c*/
      v4 = a3; /*0x555592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55558e*/
    LOBYTE(this->m_C) = 1; /*0x555596*/
    if ( v4 ) /*0x55559a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5555a5*/
      {
        m_8 = this->m_8; /*0x5555ac*/
        if ( a2 < m_8 ) /*0x5555b1*/
          m_8 = a2; /*0x5555b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5555b9*/
          ++i; /*0x5555be*/
        if ( BYTE1(this->m_C) ) /*0x5555cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5555d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5555de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5555e7*/
      this->m_8 = a2; /*0x5555ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x5555f2*/
      return 1; /*0x5555f8*/
    }
    else
    {
      return 0; /*0x55559f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPendingCellClass_LightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x555602*/
    return 1; /*0x555608*/
  }
}



// ==== 0x00555610  _VectorClass_PAVPendingCellClass_LightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Remove(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55561d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55562b*/
  }
  BYTE1(this->m_C) = 0; /*0x55562e*/
  this->m_8 = 0; /*0x555631*/
}



// ==== 0x00555640  _VectorClass_PAVPendingCellClass_LightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::GetSize(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x555640*/
    return 0; /*0x555648*/
  m_8 = this->m_8; /*0x55564e*/
  result = 0; /*0x555651*/
  if ( m_8 <= 0 ) /*0x555655*/
    return -1; /*0x55566c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55565b*/
  {
    if ( ++result >= m_8 ) /*0x55566a*/
      return -1; /*0x55566a*/
  }
  return result; /*0x55564a*/
}



// ==== 0x00555680  _VectorClass_PAVPendingCellClass_LightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::GetCapacity(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555695*/
  else
    return 0; /*0x555687*/
}



// ==== 0x005556A0  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::SetCapacity_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5556ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5556b2*/
    if ( a3 ) /*0x5556b8*/
      v4 = a3; /*0x5556ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5556ca*/
    LOBYTE(this->m_C) = 1; /*0x5556d2*/
    if ( !v4 ) /*0x5556d6*/
      return 0; /*0x55574a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5556d8*/
    {
      m_8 = this->m_8; /*0x5556df*/
      if ( a2 < m_8 ) /*0x5556e4*/
        m_8 = a2; /*0x5556e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5556ec*/
        ++i; /*0x5556f1*/
      if ( BYTE1(this->m_C) ) /*0x5556fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555709*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x555711*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55571a*/
    this->m_8 = a2; /*0x555722*/
    BYTE1(this->m_C) = a3 == 0; /*0x555725*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPendingCellClass_LightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55572e*/
  }
  v7 = this->m_8; /*0x555731*/
  if ( v7 < this->m_10 ) /*0x555739*/
    this->m_10 = v7; /*0x55573b*/
  return 1; /*0x55573e*/
}



// ==== 0x00555750  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::FindItemIndex_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x555750*/
  result = 0; /*0x555753*/
  if ( m_10 <= 0 ) /*0x555758*/
    return -1; /*0x55576f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55575e*/
  {
    if ( ++result >= m_10 ) /*0x55576d*/
      return -1; /*0x55576d*/
  }
  return result; /*0x555772*/
}



// ==== 0x00555780  _VectorClass_PAVLightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::QueryInterface(_VectorClass_PAVLightSourceClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass *>::`vftable'; /*0x555786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555790*/
  {
    __3_YAXPAX_Z(v3); /*0x555798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5557a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5557ab*/
  this->m_8 = 0; /*0x5557b1*/
  if ( (a2 & 1) != 0 ) /*0x5557b8*/
    __3_YAXPAX_Z(this); /*0x5557bb*/
  return this->__pad_0; /*0x5557c5*/
}



// ==== 0x005557D0  _DynamicVectorClass_PAVLightSourceClass::Constructor_VectorClass_LightSourceClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(
        _DynamicVectorClass_PAVLightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5557d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass *>::`vftable'; /*0x5557d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5557e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5557e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5557f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5557fb*/
  this->m_8 = 0; /*0x555801*/
  if ( (a2 & 1) != 0 ) /*0x555808*/
    __3_YAXPAX_Z(this); /*0x55580b*/
  return this->__pad_0; /*0x555815*/
}



// ==== 0x00555820  _VectorClass_PAVPendingCellClass_LightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::QueryInterface(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555823*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x555826*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555830*/
  {
    __3_YAXPAX_Z(v3); /*0x555838*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x555840*/
  }
  BYTE1(this->m_C) = 0; /*0x55584b*/
  this->m_8 = 0; /*0x555851*/
  if ( (a2 & 1) != 0 ) /*0x555858*/
    __3_YAXPAX_Z(this); /*0x55585b*/
  return this->__pad_0; /*0x555865*/
}



// ==== 0x00555870  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::Constructor(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555873*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x555876*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555880*/
  {
    __3_YAXPAX_Z(v3); /*0x555888*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x555890*/
  }
  BYTE1(this->m_C) = 0; /*0x55589b*/
  this->m_8 = 0; /*0x5558a1*/
  if ( (a2 & 1) != 0 ) /*0x5558a8*/
    __3_YAXPAX_Z(this); /*0x5558ab*/
  return this->__pad_0; /*0x5558b5*/
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



// ==== 0x005558E0  Map_Calc  this=-  sig=csp ====
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



// ==== 0x00555AC0  QuantizeColorRGB  this=-  sig=csp ====
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
  if ( dword_A8EB78 ) /*0x555b2c*/
  {
    if ( dword_A8EB78 == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( dword_A8EB78 == 2 ) /*0x555b32*/
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
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10)
{
  int v11; // ecx
  void *ptr_0; // edi
  int v13; // edx
  int v15; // [esp-Ch] [ebp-1Ch]
  int v16; // [esp-8h] [ebp-18h]

  ConvertClass::Construct((ConvertClass *)this, a2, a3, a4, a10, 1); /*0x555dbe*/
  v11 = *(_DWORD *)(this + 364); /*0x555dc3*/
  *(_DWORD *)(this + 392) = a2; /*0x555dd1*/
  *(_DWORD *)(this + 396) = a3; /*0x555ddb*/
  *(_DWORD *)(this + 400) = a9; /*0x555de8*/
  *(_DWORD *)(this + 404) = 0; /*0x555dee*/
  *(_DWORD *)(this + 408) = a5; /*0x555df8*/
  *(_DWORD *)(this + 412) = a6; /*0x555dfe*/
  *(_DWORD *)(this + 416) = a7; /*0x555e04*/
  *(_DWORD *)(this + 420) = a5; /*0x555e0a*/
  *(_DWORD *)(this + 424) = a6; /*0x555e10*/
  *(_DWORD *)(this + 428) = a7; /*0x555e16*/
  *(_BYTE *)(this + 432) = 0; /*0x555e1c*/
  *(_DWORD *)this = &LightConvertClass::`vftable'; /*0x555e23*/
  if ( v11 < 1 ) /*0x555e29*/
    return this; /*0x555e29*/
  if ( !a9 ) /*0x555e31*/
    *(_DWORD *)(this + 400) = &unk_829C20; /*0x555e33*/
  if ( dword_829D20 == -1 ) /*0x555e44*/
    dword_829D20 = DDraw::GetStatus(); /*0x555e4b*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x555e50*/
  {
    if ( a5 == -1 ) /*0x555e60*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555e67*/
      *(_DWORD *)(this + 412) = 1000; /*0x555e6d*/
      *(_DWORD *)(this + 416) = 1000; /*0x555e73*/
    }
    else
    {
      *(_DWORD *)(this + 408) = a5; /*0x555e7b*/
      *(_DWORD *)(this + 412) = a6; /*0x555e81*/
      *(_DWORD *)(this + 416) = a7; /*0x555e87*/
    }
    v16 = 1000 * (int)dword_A8B230[379].ptr_8 / 100; /*0x555ebe*/
    ptr_0 = dword_A8B230[379].ptr_0; /*0x555ebf*/
    v15 = 1000 * (int)dword_A8B230[379].ptr_4 / 100; /*0x555ee2*/
LABEL_23:
    v13 = 1000 * (int)ptr_0 / 100; /*0x556047*/
    goto LABEL_24; /*0x556062*/
  }
  if ( NukeFlash::IsActive() || (unsigned __int8)ChronoScreen::IsActive() ) /*0x555ef5*/
  {
    if ( a5 == -1 ) /*0x555fc4*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555fcb*/
      *(_DWORD *)(this + 412) = 1000; /*0x555fd1*/
      *(_DWORD *)(this + 416) = 1000; /*0x555fd7*/
    }
    else
    {
      *(_DWORD *)(this + 408) = a5; /*0x555fdf*/
      *(_DWORD *)(this + 412) = a6; /*0x555fe5*/
      *(_DWORD *)(this + 416) = a7; /*0x555feb*/
    }
    v16 = 1000 * (int)dword_A8B230[379].NeedsSaveOrLink / 100; /*0x556022*/
    ptr_0 = (void *)dword_A8B230[379].nextArrayIndex; /*0x556023*/
    v15 = 1000 * dword_A8B230[379].referenceCount / 100; /*0x556046*/
    goto LABEL_23; /*0x556046*/
  }
  if ( !(unsigned __int8)PsyDom::IsActive() ) /*0x555f09*/
  {
    LightConvertClass::UpdateColors(this, a5, a6, a7, 0); /*0x555fbc*/
    goto LABEL_25; /*0x555fbc*/
  }
  if ( a5 == -1 ) /*0x555f12*/
  {
    *(_DWORD *)(this + 408) = 1000; /*0x555f19*/
    *(_DWORD *)(this + 412) = 1000; /*0x555f1f*/
    *(_DWORD *)(this + 416) = 1000; /*0x555f25*/
  }
  else
  {
    *(_DWORD *)(this + 408) = a5; /*0x555f2d*/
    *(_DWORD *)(this + 412) = a6; /*0x555f33*/
    *(_DWORD *)(this + 416) = a7; /*0x555f39*/
  }
  v16 = 1000 * dword_A8B230[380].nextArrayIndex / 100; /*0x555f7c*/
  v15 = 1000 * dword_A8B230[380].abstractFlags / 100; /*0x555f97*/
  v13 = 1000 * dword_A8B230[380].uniqueId / 100; /*0x555fb0*/
LABEL_24:
  LightConvertClass::UpdateColors(this, v13, v15, v16, 1); /*0x556064*/
LABEL_25:
  if ( !a8 ) /*0x556072*/
    ConvertClass::InitTables((ConvertClass *)this); /*0x556076*/
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
              *(v25 - 1) = (v21 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x55648a*/
                         | (v22 >> g_BitMask_Blue << g_BitMask_Green)
                         | (v24 >> g_BitMask_Red << g_BitShift_Blue);
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
int __thiscall sub_556510(LightConvertClass *this)
{
  *(_DWORD *)this->__pad_0 = &LightConvertClass::`vftable'; /*0x556510*/
  return sub_490400((int)this);
}



// ==== 0x00556520  LightConvertClass::method  this=LightConvertClass  sig=csp ====
_DWORD *__thiscall sub_556520(LightConvertClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &LightConvertClass::`vftable'; /*0x556523*/
  sub_490400((int)this); /*0x556529*/
  if ( (a2 & 1) != 0 ) /*0x556533*/
    __3_YAXPAX_Z(this); /*0x556536*/
  return this->__pad_0; /*0x556540*/
}



// ==== 0x005565A0  LinkClass::Destruct  this=LinkClass  sig=csp ====
int __thiscall LinkClass::Destruct(LinkClass *this)
{
  LinkClass *Prev; // edi
  int result; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  *(_DWORD *)this->__pad_0 = &LinkClass::`vftable'; /*0x5565a5*/
  Prev = (LinkClass *)LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x5565b7*/
  m_Prev = this->m_Prev; /*0x5565ba*/
  if ( m_Prev ) /*0x5565c1*/
    m_Prev->m_Next = this->m_Next; /*0x5565c6*/
  m_Next = this->m_Next; /*0x5565c9*/
  if ( m_Next ) /*0x5565ce*/
    m_Next->m_Prev = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (LinkClass *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}



// ==== 0x005565F0  LinkClass::Reset  this=LinkClass  sig=csp ====
int __thiscall Hash::Reset(LinkClass *this)
{
  this->m_Next = 0; /*0x5565f2*/
  this->m_Prev = 0; /*0x5565f5*/
  return 0; /*0x5565f8*/
}



// ==== 0x00556600  LinkedList::MoveNode  this=TechnoClass  sig=csp ====
void *__thiscall LinkedList::MoveNode(LinkedList *this, void *a2)
{
  if ( a2 != this ) /*0x55660a*/
  {
    (*(void (__thiscall **)(LinkedList *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x55660e*/
    (*(void (__thiscall **)(LinkedList *, void *))(*(_DWORD *)this->__pad_0 + 12))(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/
}



// ==== 0x00556620  LinkClass::GetWidth  this=LinkClass  sig=csp ====
int __thiscall ObjectClass::GetWidth(LinkClass *this)
{
  return (int)this->m_Next->__pad_0; /*0x556623*/
}



// ==== 0x00556630  LinkClass::GetHeight  this=LinkClass  sig=csp ====
int __thiscall ObjectClass::GetHeight(LinkClass *this)
{
  return (int)this->m_Prev->__pad_0; /*0x556633*/
}



// ==== 0x00556640  LinkClass::FindPrev  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::FindPrev(LinkClass *this)
{
  LinkClass **p_m_Prev; // edx
  _DWORD *result; // eax

  p_m_Prev = &this->m_Prev; /*0x556643*/
  if ( !this->m_Prev ) /*0x556640*/
    return this->__pad_0; /*0x55665d*/
  do /*0x556651*/
  {
    result = *p_m_Prev; /*0x55664b*/
    if ( *p_m_Prev == this ) /*0x55664f*/
      break; /*0x55664f*/
    p_m_Prev = (LinkClass **)(result + 2); /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/
}



// ==== 0x00556670  LinkClass::FindNext  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::FindNext(LinkClass *this)
{
  LinkClass **p_m_Next; // edx
  _DWORD *result; // eax

  p_m_Next = &this->m_Next; /*0x556673*/
  if ( !this->m_Next ) /*0x556670*/
    return this->__pad_0; /*0x55668d*/
  do /*0x556681*/
  {
    result = *p_m_Next; /*0x55667b*/
    if ( *p_m_Next == this ) /*0x55667f*/
      break; /*0x55667f*/
    p_m_Next = (LinkClass **)(result + 1); /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/
}



// ==== 0x005566A0  LinkClass::InsertAfter  this=LinkClass  sig=csp ====
int __thiscall LinkedList::InsertAfter(LinkClass *this, int a2)
{
  LinkClass *v3; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x5566a5*/
  v3 = *(LinkClass **)(a2 + 4); /*0x5566ac*/
  *(_DWORD *)(a2 + 4) = this; /*0x5566af*/
  this->m_Prev = (LinkClass *)a2; /*0x5566b4*/
  this->m_Next = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    v3->m_Prev = this; /*0x5566bc*/
  return (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x5566c6*/
}



// ==== 0x005566D0  LinkClass::Attach  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::Attach(LinkClass *this, int a2)
{
  LinkClass *v3; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x5566d5*/
  v3 = (LinkClass *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2); /*0x5566de*/
  v3->m_Prev = this; /*0x5566e1*/
  this->m_Next = v3; /*0x5566e4*/
  this->m_Prev = 0; /*0x5566e7*/
  return this->__pad_0; /*0x5566f0*/
}



// ==== 0x00556700  LinkClass::Append  this=LinkClass  sig=csp ====
int __thiscall LinkedList::Append(LinkClass *this, int a2)
{
  LinkClass *v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x556705*/
  v3 = (LinkClass *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2); /*0x55670e*/
  v3->m_Next = this; /*0x556711*/
  this->m_Prev = v3; /*0x556714*/
  v4 = *(_DWORD *)this->__pad_0; /*0x556717*/
  this->m_Next = 0; /*0x55671b*/
  return (*(int (__thiscall **)(LinkClass *))(v4 + 24))(this); /*0x556725*/
}



// ==== 0x00556730  LinkClass::RemoveNode  this=LinkClass  sig=csp ====
int __thiscall LinkedList::RemoveNode(LinkClass *this)
{
  LinkClass *v2; // edi
  LinkClass *v3; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  v2 = (LinkClass *)(*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x55673e*/
  v3 = (LinkClass *)(*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x556740*/
  m_Prev = this->m_Prev; /*0x556743*/
  if ( m_Prev ) /*0x55674a*/
    m_Prev->m_Next = this->m_Next; /*0x55674f*/
  m_Next = this->m_Next; /*0x556752*/
  if ( m_Next ) /*0x556757*/
    m_Next->m_Prev = this->m_Prev; /*0x55675c*/
  this->m_Prev = 0; /*0x556761*/
  this->m_Next = 0; /*0x556764*/
  if ( v2 != this ) /*0x556767*/
    return (int)v2->__pad_0; /*0x55677e*/
  if ( v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)v3->__pad_0 + 24))(v3); /*0x55676d*/
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
  dword_ABCB78 = (int)&DynamicVectorClass<LineTrail *>::`vftable'; /*0x5569bd*/
  dword_ABCB8C = 10; /*0x5569c7*/
  dword_ABCB88 = 0; /*0x5569d1*/
  return atexit(sub_5569E0); /*0x5569dc*/
}



// ==== 0x005569E0  sub_5569E0  this=-  sig=ida-proto ====
void __cdecl sub_5569E0()
{
  dword_ABCB78 = (int)&VectorClass<LineTrail *>::`vftable'; /*0x5569e8*/
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
  this->ptr_8 = 0x80; /*0x556a2b*/
  this->ptr_C = 0x80; /*0x556a2e*/
  this->ptr_8 = 0; /*0x556a31*/
  this->ptr_C = 16; /*0x556a34*/
  this->ptr_10 = 0; /*0x556a3b*/
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



// ==== 0x00556B30  TacticalClass::GetField  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::GetField(TacticalClass *this)
{
  int result; // eax

  result = (int)this->?; /*0x556b30*/
  if ( result ) /*0x556b37*/
  {
    *(_DWORD *)(result + 168) = 0; /*0x556b39*/
    this->? = 0; /*0x556b3f*/
  }
  return result; /*0x556b42*/
}



// ==== 0x00556B50  ObjectClass::updateMissionState  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::updateMissionState(ObjectClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x556b57*/
  if ( !stru_A8EB00.ObjectTypeClass[30] ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  this->? = (void *)result; /*0x556b5f*/
  return result; /*0x556b62*/
}



// ==== 0x00556B70  ObjectClass::Render_Render_556B70  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_556B70(ObjectClass *this)
{
  char *ptr_4; // eax
  void **v2; // eax
  void *v3; // edx
  void *v4; // esi
  void *v5; // edi
  void **v6; // eax
  char *v7; // eax
  void **v8; // ebp
  int result; // eax
  int v10; // edx
  int *v11; // eax
  signed int v12; // edi

  ptr_4 = (char *)this->?; /*0x556b70*/
  if ( ptr_4 ) /*0x556b78*/
  {
    v2 = (void **)(ptr_4 + 156); /*0x556b7a*/
    v3 = *v2; /*0x556b7f*/
    v4 = v2[1]; /*0x556b81*/
    v5 = v2[2]; /*0x556b84*/
    v6 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556b8e*/
    if ( v3 != *v6 || v4 != v6[1] || v5 != v6[2] ) /*0x556b9c*/
    {
      v7 = (char *)this->? - 1; /*0x556ba1*/
      this->? = v7; /*0x556ba2*/
      if ( (int)v7 < 0 ) /*0x556ba5*/
        this->? = (void *)31; /*0x556ba7*/
      v8 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556bb7*/
      v8[3] = (void *)255; /*0x556bb9*/
      *v8 = v3; /*0x556bc0*/
      v8[1] = v4; /*0x556bc3*/
      v8[2] = v5; /*0x556bc6*/
    }
  }
  result = (int)this->?; /*0x556bc9*/
  do /*0x556bf6*/
  {
    v10 = result + 1; /*0x556bcc*/
    v11 = &this->? + 4 * result; /*0x556bd7*/
    v12 = v11[3] - (unsigned int)this->?; /*0x556bdc*/
    v11[3] = v12; /*0x556bde*/
    if ( v12 < 0 ) /*0x556be1*/
      v11[3] = 0; /*0x556be3*/
    result = v10; /*0x556bea*/
    if ( v10 >= 32 ) /*0x556bef*/
      result = 0; /*0x556bf1*/
  }
  while ( (void *)result != this->? ); /*0x556bf6*/
  return result; /*0x556bf8*/
}



// ==== 0x00556C00  ObjectClass::Render_Render_556C00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Render_556C00(ObjectClass *this)
{
  int v1; // ebp
  _DWORD *result; // eax
  int v3; // ebp
  void **v4; // edi
  void **i; // esi
  int v6; // ebx
  int v7; // eax
  char *v8; // edx
  int v10[2]; // [esp+14h] [ebp-10h] BYREF
  int v11[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = (int)this->? + 1; /*0x556c09*/
  if ( v1 >= 32 ) /*0x556c14*/
    v1 = 0; /*0x556c16*/
  result = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556c21*/
  if ( *result != g_MissionQueueFrame.random[209] /*0x556c41*/
    || result[1] != g_MissionQueueFrame.random[210]
    || result[2] != g_MissionQueueFrame.random[211] )
  {
    v3 = v1 + 1; /*0x556c47*/
    v4 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556c48*/
    result = (_DWORD *)result[3]; /*0x556c4c*/
    for ( i = &this->AbstractClass + 4 * v3; result; i = &this->AbstractClass + 4 * (_DWORD)v8 ) /*0x556c56*/
    {
      if ( *i == (void *)g_MissionQueueFrame.random[209] && i[1] == (void *)g_MissionQueueFrame.random[210] ) /*0x556c72*/
      {
        result = i[2]; /*0x556c7a*/
        if ( result == (_DWORD *)g_MissionQueueFrame.random[211] ) /*0x556c7f*/
          break; /*0x556c7f*/
      }
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, v11); /*0x556c91*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, i, v10); /*0x556ca2*/
      v6 = -2 - ZCoordToScreenY((int)v4[2]); /*0x556cb7*/
      v7 = ZCoordToScreenY((int)i[2]); /*0x556cb9*/
      AudioStream::DrawWaveform( /*0x556ce5*/
        DSurface_Composite,
        &DSurface_ViewBounds.field_0,
        v11,
        v10,
        (unsigned __int8 *)this,
        (int)v4[3],
        v6,
        -2 - v7);
      result = (_DWORD *)v3; /*0x556cea*/
      if ( v3 >= 32 ) /*0x556cef*/
        result = 0; /*0x556cf1*/
      if ( result == this->? ) /*0x556cf6*/
        break; /*0x556cf6*/
      v3 = (int)result + 1; /*0x556cf8*/
      v4 = i; /*0x556cfb*/
      v8 = (char *)result + 1; /*0x556cfd*/
      result = i[3]; /*0x556cff*/
    }
  }
  return result; /*0x556d11*/
}



// ==== 0x00556D40  ObjectClass::Render_Render_556D40  this=ObjectClass  sig=csp ====
void Render_Render_556D40(ObjectClass *this)
{
  int i; // edi
  ObjectClass *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = g_MissionQueueFrame.random[223] - 1; i >= 0; --i ) /*0x556d4c*/
  {
    v2 = *(ObjectClass **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556d59*/
    Render_Render_556B70(v2); /*0x556d5e*/
    if ( v2->? || *(&v2->? + 4 * (int)v2->?) ) /*0x556d70*/
    {
      Render_Render_556C00(v2); /*0x556dd2*/
    }
    else if ( v2 ) /*0x556d7a*/
    {
      v4 = v2; /*0x556d8c*/
      v3 = (*(int (__thiscall **)(int *, ObjectClass **))(g_MissionQueueFrame.random[219] + 16))( /*0x556d90*/
             &g_MissionQueueFrame.random[219],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[223] ) /*0x556da0*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556da5*/
        for ( ; /*0x556dab*/
              v3 < g_MissionQueueFrame.random[223];
              *(_DWORD *)(g_MissionQueueFrame.random[220] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[220]
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x556db3*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x556dc6*/
    }
  }
}



// ==== 0x00556DF0  ObjectClass::Game_Destroy  this=ObjectClass  sig=csp ====
void Game_Destroy(ObjectClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.random[223]; ++i ) /*0x556dfe*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556e06*/
    if ( v2 ) /*0x556e0b*/
    {
      v3 = v2[1]; /*0x556e0d*/
      if ( v3 ) /*0x556e12*/
      {
        *(_DWORD *)(v3 + 168) = 0; /*0x556e14*/
        v2[1] = 0; /*0x556e1a*/
      }
      v5 = v2; /*0x556e2d*/
      v4 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.random[219] + 16))( /*0x556e31*/
             &g_MissionQueueFrame.random[219],
             &v5);
      if ( v4 != -1 && v4 < g_MissionQueueFrame.random[223] ) /*0x556e41*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556e46*/
        for ( ; /*0x556e4c*/
              v4 < g_MissionQueueFrame.random[223];
              *(_DWORD *)(g_MissionQueueFrame.random[220] + 4 * v4 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[220]
                                                                                    + 4 * v4) )
        {
          ++v4; /*0x556e54*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x556e67*/
    }
  }
  g_MissionQueueFrame.random[223] = 0; /*0x556e7f*/
  if ( g_MissionQueueFrame.random[220] && BYTE1(g_MissionQueueFrame.random[222]) ) /*0x556e8f*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.random[220]); /*0x556e92*/
    g_MissionQueueFrame.random[220] = 0; /*0x556e9a*/
  }
  BYTE1(g_MissionQueueFrame.random[222]) = 0; /*0x556ea0*/
  g_MissionQueueFrame.random[221] = 0; /*0x556ea6*/
}



// ==== 0x00556EB0  _DynamicVectorClass_PAVLineTrail::initList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::initList(_DynamicVectorClass_PAVLineTrail *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x556eb6*/
  this->m_10 = 0; /*0x556eb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x556ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x556ec6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x556ece*/
  }
  BYTE1(this->m_C) = 0; /*0x556ed1*/
  this->m_8 = 0; /*0x556ed4*/
}



// ==== 0x00556EE0  _DynamicVectorClass_PAVLineTrail::addItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::addItem(_DynamicVectorClass_PAVLineTrail *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x556ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x556ef5*/
  else
    return 0; /*0x556ee7*/
}



// ==== 0x00556F00  _VectorClass_PAVLineTrail::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::Get(_VectorClass_PAVLineTrail *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x556f0a*/
}



// ==== 0x00556F10  _VectorClass_PAVLineTrail::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::Add(_VectorClass_PAVLineTrail *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x556f12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x556f1d*/
  {
    v3 = 0; /*0x556f1f*/
    if ( m_8 <= 0 ) /*0x556f23*/
      return 1; /*0x556f43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x556f25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x556f2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x556f34*/
    {
      ++v3; /*0x556f36*/
      ++v4; /*0x556f37*/
      if ( v3 >= m_8 ) /*0x556f3c*/
        return 1; /*0x556f3c*/
    }
  }
  return 0; /*0x556f3e*/
}



// ==== 0x00556F50  _VectorClass_PAVLineTrail::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::Release(_VectorClass_PAVLineTrail *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x556f5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x556f66*/
    if ( a3 ) /*0x556f6c*/
      v4 = a3; /*0x556f82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x556f7e*/
    LOBYTE(this->m_C) = 1; /*0x556f86*/
    if ( v4 ) /*0x556f8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x556f95*/
      {
        m_8 = this->m_8; /*0x556f9c*/
        if ( a2 < m_8 ) /*0x556fa1*/
          m_8 = a2; /*0x556fa3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x556fa9*/
          ++i; /*0x556fae*/
        if ( BYTE1(this->m_C) ) /*0x556fbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x556fc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x556fce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x556fd7*/
      this->m_8 = a2; /*0x556fdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x556fe2*/
      return 1; /*0x556fe8*/
    }
    else
    {
      return 0; /*0x556f8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLineTrail *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x556ff2*/
    return 1; /*0x556ff8*/
  }
}



// ==== 0x00557000  _VectorClass_PAVLineTrail::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LineTrail::Remove(_VectorClass_PAVLineTrail *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55700d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x557013*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55701b*/
  }
  BYTE1(this->m_C) = 0; /*0x55701e*/
  this->m_8 = 0; /*0x557021*/
}



// ==== 0x00557030  _VectorClass_PAVLineTrail::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::GetSize(_VectorClass_PAVLineTrail *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x557030*/
    return 0; /*0x557038*/
  m_8 = this->m_8; /*0x55703e*/
  result = 0; /*0x557041*/
  if ( m_8 <= 0 ) /*0x557045*/
    return -1; /*0x55705c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55704b*/
  {
    if ( ++result >= m_8 ) /*0x55705a*/
      return -1; /*0x55705a*/
  }
  return result; /*0x55703a*/
}



// ==== 0x00557070  _VectorClass_PAVLineTrail::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LineTrail::GetCapacity(_VectorClass_PAVLineTrail *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x557070*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x557085*/
  else
    return 0; /*0x557077*/
}



// ==== 0x00557090  _DynamicVectorClass_PAVLineTrail::removeItem  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::removeItem(_DynamicVectorClass_PAVLineTrail *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55709c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5570a2*/
    if ( a3 ) /*0x5570a8*/
      v4 = a3; /*0x5570be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5570ba*/
    LOBYTE(this->m_C) = 1; /*0x5570c2*/
    if ( !v4 ) /*0x5570c6*/
      return 0; /*0x55713a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5570c8*/
    {
      m_8 = this->m_8; /*0x5570cf*/
      if ( a2 < m_8 ) /*0x5570d4*/
        m_8 = a2; /*0x5570d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5570dc*/
        ++i; /*0x5570e1*/
      if ( BYTE1(this->m_C) ) /*0x5570ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5570f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x557101*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55710a*/
    this->m_8 = a2; /*0x557112*/
    BYTE1(this->m_C) = a3 == 0; /*0x557115*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLineTrail *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55711e*/
  }
  v7 = this->m_8; /*0x557121*/
  if ( v7 < this->m_10 ) /*0x557129*/
    this->m_10 = v7; /*0x55712b*/
  return 1; /*0x55712e*/
}



// ==== 0x00557140  _DynamicVectorClass_PAVLineTrail::checkItem  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::checkItem(_DynamicVectorClass_PAVLineTrail *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x557140*/
  result = 0; /*0x557143*/
  if ( m_10 <= 0 ) /*0x557148*/
    return -1; /*0x55715f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55714e*/
  {
    if ( ++result >= m_10 ) /*0x55715d*/
      return -1; /*0x55715d*/
  }
  return result; /*0x557162*/
}



// ==== 0x00557170  _VectorClass_PAVLineTrail::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LineTrail::QueryInterface(_VectorClass_PAVLineTrail *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x557173*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LineTrail *>::`vftable'; /*0x557176*/
  if ( v3 && BYTE1(this->m_C) ) /*0x557180*/
  {
    __3_YAXPAX_Z(v3); /*0x557188*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x557190*/
  }
  BYTE1(this->m_C) = 0; /*0x55719b*/
  this->m_8 = 0; /*0x5571a1*/
  if ( (a2 & 1) != 0 ) /*0x5571a8*/
    __3_YAXPAX_Z(this); /*0x5571ab*/
  return this->__pad_0; /*0x5571b5*/
}



// ==== 0x005571C0  _DynamicVectorClass_PAVLineTrail::toggleItem  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CheckListClass::toggleItem(_DynamicVectorClass_PAVLineTrail *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5571c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LineTrail *>::`vftable'; /*0x5571c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5571d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5571d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5571e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5571eb*/
  this->m_8 = 0; /*0x5571f1*/
  if ( (a2 & 1) != 0 ) /*0x5571f8*/
    __3_YAXPAX_Z(this); /*0x5571fb*/
  return this->__pad_0; /*0x557205*/
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
int __thiscall ListClass::Construct(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
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

  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 261, 0); /*0x557258*/
  *(_DWORD *)(this + 56) = 0; /*0x557265*/
  *(_DWORD *)(this + 60) = 0; /*0x557268*/
  *(_BYTE *)(this + 65) = 0; /*0x55726b*/
  *(_DWORD *)(this + 68) = 0; /*0x55726e*/
  *(_BYTE *)(this + 64) = 1; /*0x557280*/
  *(_DWORD *)(this + 52) = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x557284*/
  *(_DWORD *)(this + 72) = 10; /*0x55728b*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)(this + 88), 0, a8, a3 + a5, a4, 0, 0, 0); /*0x557292*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)(this + 184), 0, a9, a3 + a5, a4 + a6, 0, 0, 0); /*0x5572af*/
  SliderClass::Constructor((SliderClass *)(this + 280), 0, a3 + a5, a4, 0, a6, 1); /*0x5572c3*/
  v10 = *(_DWORD *)(this + 204); /*0x5572c8*/
  v11 = *(_DWORD *)(this + 108); /*0x5572d4*/
  v12 = *(_DWORD *)(this + 100); /*0x5572d7*/
  v13 = *(_DWORD *)(this + 200); /*0x5572da*/
  *(_DWORD *)(this + 196) -= v10; /*0x5572e2*/
  v14 = *(_DWORD *)(this + 208); /*0x5572e8*/
  *(_DWORD *)(this + 100) = v12 - v11; /*0x5572f2*/
  *(_DWORD *)this = &ListClass::`vftable'; /*0x5572f7*/
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
  *(_DWORD *)(this + 44) = a7; /*0x557347*/
  *(_BYTE *)(this + 84) = 0; /*0x55734a*/
  *(_DWORD *)(this + 48) = 0; /*0x55734e*/
  *(_DWORD *)(this + 364) = 0; /*0x557351*/
  *(_DWORD *)(this + 368) = 0; /*0x557357*/
  v18 = *(_DWORD *)(TextRenderer::GetInstance() + 28) - 1; /*0x557366*/
  *(_DWORD *)(this + 76) = v18; /*0x55736f*/
  *(_DWORD *)(this + 80) = (a6 - 1) / v18; /*0x557372*/
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
  *(_DWORD *)(this + 52) = &VectorClass<unsigned short const *>::`vftable'; /*0x5573b4*/
  sub_4B5830((_DWORD *)(this + 52), (_DWORD *)(a2 + 52)); /*0x5573ba*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x5573c2*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x5573c8*/
  *(_DWORD *)(this + 52) = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x5573cb*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x5573d7*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x5573dd*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x5573e9*/
  ControlClass::CtorFromData((_DWORD *)(this + 88), a2 + 88); /*0x5573ec*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x5573fa*/
  *(_BYTE *)(this + 133) = *(_BYTE *)(a2 + 133); /*0x557400*/
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136); /*0x557406*/
  *(_DWORD *)(this + 88) = &ToggleClass::`vftable'; /*0x557409*/
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
  *(_DWORD *)(this + 88) = &ShapeButtonClass::`vftable'; /*0x557460*/
  ControlClass::CtorFromData((_DWORD *)(this + 184), a2 + 184); /*0x557466*/
  *(_BYTE *)(this + 228) = *(_BYTE *)(a2 + 228); /*0x55746e*/
  *(_BYTE *)(this + 229) = *(_BYTE *)(a2 + 229); /*0x557474*/
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232); /*0x55747a*/
  *(_DWORD *)(this + 184) = &ToggleClass::`vftable'; /*0x55747d*/
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
  *(_DWORD *)(this + 184) = &ShapeButtonClass::`vftable'; /*0x5574de*/
  sub_5581A0(this + 280, a2 + 280); /*0x5574e4*/
  *(_DWORD *)(this + 340) = *(_DWORD *)(a2 + 340); /*0x5574fa*/
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344); /*0x557500*/
  *(_BYTE *)(this + 348) = *(_BYTE *)(a2 + 348); /*0x557506*/
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352); /*0x55750c*/
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356); /*0x557512*/
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360); /*0x55751c*/
  *(_DWORD *)(this + 280) = &SliderClass::`vftable'; /*0x55751f*/
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364); /*0x55752c*/
  v3 = *(_DWORD *)(this + 88); /*0x557538*/
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368); /*0x55753c*/
  *(_DWORD *)this = &ListClass::`vftable'; /*0x557542*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 88, this); /*0x557548*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 132))(this + 184, this); /*0x557553*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 132))(this + 280, this); /*0x55755f*/
  return this; /*0x557566*/
}



// ==== 0x00557570  ListClass::RemoveItem  this=ListClass  sig=csp ====
int __thiscall CheckListClass::RemoveItem(ListClass *this, int a2, int a3)
{
  int ListClass_field_0x14; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edx
  int v7; // ebp
  int result; // eax

  ListClass_field_0x14 = this->ListClass_field_0x14; /*0x557570*/
  v4 = this->q01B; /*0x55757a*/
  v5 = *((_DWORD *)this + 51); /*0x557580*/
  this->q019 = a2 + ListClass_field_0x14 - v4; /*0x55758e*/
  this->q01A = a3; /*0x557595*/
  *((_DWORD *)this + 49) = a2 + ListClass_field_0x14 - v5; /*0x55759a*/
  v6 = this->ListClass_field_0x18 - this->u32_D; /*0x5575a3*/
  *((_DWORD *)this + 50) = v6 + a3; /*0x5575ad*/
  v7 = v4; /*0x5575b3*/
  if ( v4 <= v5 ) /*0x5575b5*/
    v7 = v5; /*0x5575b7*/
  *((_DWORD *)this + 73) = a2 + ListClass_field_0x14 - v7; /*0x5575c1*/
  result = this->u32_1C; /*0x5575c7*/
  *((_DWORD *)this + 74) = result + a3; /*0x5575d0*/
  *((_DWORD *)this + 76) = v6 - result; /*0x5575d6*/
  if ( v4 <= v5 ) /*0x5575dc*/
    *((_DWORD *)this + 75) = v5; /*0x5575eb*/
  else
    *((_DWORD *)this + 75) = v4; /*0x5575de*/
  return result; /*0x5575e4*/
}



// ==== 0x00557600  ListClass::Destruct  this=ListClass  sig=csp ====
int __thiscall ListClass::Destruct(ListClass *this)
{
  char v2; // al
  int v3; // edx
  void *v4; // eax

  v2 = this->Enabled; /*0x557606*/
  *(_DWORD *)this->__pad_0 = &ListClass::`vftable'; /*0x557609*/
  if ( v2 ) /*0x557611*/
  {
    v3 = *((_DWORD *)this + 70); /*0x55761c*/
    this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x557624*/
    this->Enabled = 0; /*0x55762d*/
    (*(void (__thiscall **)(char *))(v3 + 36))((char *)this + 280); /*0x557630*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557639*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557648*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x55764f*/
  }
  SliderClass::Destructor((SliderClass *)((char *)this + 280)); /*0x557658*/
  ShapeButtonClass::Destructor((int)this + 184); /*0x557663*/
  ShapeButtonClass::Destructor((int)this + 88); /*0x55766b*/
  v4 = (void *)*((_DWORD *)this + 14); /*0x557670*/
  this->u32_D = &VectorClass<unsigned short const *>::`vftable'; /*0x557673*/
  if ( v4 && *((_BYTE *)this + 65) ) /*0x55767e*/
  {
    __3_YAXPAX_Z(v4); /*0x557684*/
    *((_DWORD *)this + 14) = 0; /*0x55768c*/
  }
  *((_BYTE *)this + 65) = 0; /*0x557691*/
  *((_DWORD *)this + 15) = 0; /*0x557694*/
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x55769c*/
}



// ==== 0x005576A0  ListClass::AddItem  this=ListClass  sig=csp ====
int __thiscall ListClass::AddItem(ListClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  if ( a2 ) /*0x5576aa*/
  {
    v3 = *((_DWORD *)this + 15); /*0x5576ac*/
    if ( *((_DWORD *)this + 17) < v3 /*0x5576d5*/
      || (*((_BYTE *)this + 65) || !v3)
      && (v4 = *((_DWORD *)this + 18), v4 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_D + 8))(
           (char *)this + 52,
           v3 + v4,
           0) )
    {
      v5 = *((_DWORD *)this + 17); /*0x5576dc*/
      v6 = *((_DWORD *)this + 14); /*0x5576df*/
      *((_DWORD *)this + 17) = v5 + 1; /*0x5576e5*/
      *(_DWORD *)(v6 + 4 * v5) = a2; /*0x5576e8*/
    }
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x5576ef*/
    if ( *((_DWORD *)this + 17) > this->q014 ) /*0x5576fb*/
      (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 140))(this); /*0x557701*/
    if ( this->Enabled ) /*0x557707*/
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))( /*0x55771e*/
        (char *)this + 280,
        *((_DWORD *)this + 17));
  }
  return *((_DWORD *)this + 17) - 1; /*0x557727*/
}



// ==== 0x00557730  ListClass::RemoveItem  this=ListClass  sig=csp ====
char __thiscall ListClass::RemoveItem(ListClass *this, signed int a2)
{
  signed int v2; // eax
  signed int v4; // ecx
  signed int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = a2; /*0x557730*/
  v4 = *((_DWORD *)this + 17); /*0x557737*/
  if ( a2 < (unsigned int)v4 ) /*0x55773c*/
  {
    if ( a2 < v4 ) /*0x557744*/
    {
      v5 = v4 - 1; /*0x557746*/
      *((_DWORD *)this + 17) = v5; /*0x557749*/
      if ( a2 < v5 ) /*0x55774c*/
      {
        do /*0x55775e*/
        {
          ++v2; /*0x557751*/
          *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v2 - 4) = *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v2); /*0x557755*/
        }
        while ( v2 < *((_DWORD *)this + 17) ); /*0x55775e*/
      }
    }
    if ( *((_DWORD *)this + 17) <= this->q014 ) /*0x557768*/
      (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 176))(this); /*0x55776e*/
    if ( this->Enabled ) /*0x557774*/
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))( /*0x55778b*/
        (char *)this + 280,
        *((_DWORD *)this + 17));
    v6 = *((_DWORD *)this + 91); /*0x557791*/
    if ( v6 >= *((_DWORD *)this + 17) ) /*0x55779c*/
    {
      v7 = v6 - 1; /*0x55779e*/
      *((_DWORD *)this + 91) = v7; /*0x5577a1*/
      if ( v7 < 0 ) /*0x5577a7*/
        *((_DWORD *)this + 91) = 0; /*0x5577a9*/
    }
    v2 = *((_DWORD *)this + 92); /*0x5577b3*/
    if ( v2 >= *((_DWORD *)this + 17) ) /*0x5577be*/
    {
      v8 = v2 - 1; /*0x5577c0*/
      *((_DWORD *)this + 92) = v8; /*0x5577c3*/
      if ( v8 < 0 ) /*0x5577c9*/
        *((_DWORD *)this + 92) = 0; /*0x5577cb*/
      LOBYTE(v2) = this->Enabled; /*0x5577d5*/
      if ( (_BYTE)v2 ) /*0x5577da*/
        LOBYTE(v2) = (*(char (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, 1); /*0x5577ea*/
    }
  }
  return v2; /*0x5577f0*/
}



// ==== 0x00557800  ListClass::Destru_vt43  this=ListClass  sig=csp ====
int __thiscall ListClass::Destru_vt43(ListClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax

  result = a2; /*0x557800*/
  if ( a2 ) /*0x557809*/
  {
    v4 = *(_DWORD *)this->__pad_0; /*0x557816*/
    v5 = (*(int (__thiscall **)(char *, int *))(this->u32_D + 16))((char *)this + 52, &a2); /*0x557819*/
    return (*(int (__thiscall **)(ListClass *, int))(v4 + 168))(this, v5); /*0x55781f*/
  }
  return result; /*0x557826*/
}



// ==== 0x00557830  ListClass::DrawWithFlags  this=ListClass  sig=csp ====
int __thiscall CellClass::DrawWithFlags(ListClass *this, int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v7; // eax

  v4 = a2; /*0x557831*/
  if ( (a2 & 4) != 0 ) /*0x55783b*/
  {
    *a3 = 0; /*0x557848*/
    CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFFB, a3, 0); /*0x55784e*/
    return 1; /*0x557854*/
  }
  else if ( (a2 & 0x100) != 0 ) /*0x557865*/
  {
    if ( *a3 == 38 ) /*0x55786c*/
    {
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 164))(this, -1); /*0x557874*/
      *a3 = 0; /*0x557880*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557886*/
    }
    else if ( *a3 == 40 ) /*0x557894*/
    {
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 164))(this, 1); /*0x55789c*/
      *a3 = 0; /*0x5578a8*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x5578ae*/
    }
    else
    {
      BYTE1(v4) = BYTE1(a2) & 0xFE; /*0x5578b9*/
      return CellClass::Draw((ControlClass *)this, v4, a3, 0); /*0x5578c2*/
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 92) /*0x5578e8*/
       + ((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
        - this->ListClass_field_0x10
        - 1)
       / *((_DWORD *)this + 19);
    *((_DWORD *)this + 91) = v7; /*0x5578ea*/
    if ( v7 >= *((_DWORD *)this + 17) - 1 ) /*0x5578f6*/
      v7 = *((_DWORD *)this + 17) - 1; /*0x5578f8*/
    *((_DWORD *)this + 91) = v7; /*0x5578fd*/
    if ( v7 == -1 ) /*0x557903*/
      *((_DWORD *)this + 91) = 0; /*0x557905*/
    return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557915*/
  }
}



// ==== 0x00557920  ListClass::DrawBuildingPlacement  this=ListClass  sig=csp ====
int __thiscall GadgetClass::DrawBuildingPlacement(ListClass *this, int a2)
{
  int ListClass_field_0x14; // ecx
  int ListClass_field_0x10; // eax
  int ListClass_field_0x18; // edx
  int i; // edi
  int v7; // eax
  int v9[4]; // [esp+10h] [ebp-10h] BYREF

  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x55792e*/
    return 0; /*0x557a0b*/
  (*(void (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)stru_887598.lineTrailer + 32))( /*0x557965*/
    stru_887598.lineTrailer,
    this->ListClass_field_0x0C,
    this->ListClass_field_0x10,
    this->ListClass_field_0x14,
    this->ListClass_field_0x18);
  ListClass_field_0x14 = this->ListClass_field_0x14; /*0x55796b*/
  ListClass_field_0x10 = this->ListClass_field_0x10; /*0x55796e*/
  v9[0] = this->ListClass_field_0x0C; /*0x557971*/
  ListClass_field_0x18 = this->ListClass_field_0x18; /*0x557975*/
  v9[2] = ListClass_field_0x14; /*0x557978*/
  v9[3] = ListClass_field_0x18; /*0x55797c*/
  v9[1] = ListClass_field_0x10; /*0x55798b*/
  DrawBuildingTilesSHP(v9, 4, 1); /*0x55798f*/
  if ( *((_DWORD *)this + 17) ) /*0x557994*/
  {
    for ( i = 0; i < this->q014; ++i ) /*0x5579a2*/
    {
      v7 = i + *((_DWORD *)this + 92); /*0x5579ad*/
      if ( *((_DWORD *)this + 17) > v7 ) /*0x5579b1*/
        (*(void (__thiscall **)(ListClass *, int, int, int, int, bool))(*(_DWORD *)this->__pad_0 + 200))( /*0x5579e0*/
          this,
          v7,
          this->ListClass_field_0x0C + 1,
          i * *((_DWORD *)this + 19) + this->ListClass_field_0x10 + 1,
          this->ListClass_field_0x14 - 2,
          v7 == *((_DWORD *)this + 91));
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 36))(stru_887598.lineTrailer); /*0x5579f6*/
  return 1; /*0x5579fe*/
}



// ==== 0x00557A20  ListClass::SetItemState  this=ListClass  sig=csp ====
char __thiscall CheckListClass::SetItemState(ListClass *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = this->Enabled; /*0x557a24*/
  if ( (_BYTE)v3 ) /*0x557a29*/
  {
    v4 = (char *)this + 280; /*0x557a35*/
    v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, a2); /*0x557a3e*/
    if ( v3 ) /*0x557a46*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 144))((char *)this + 280); /*0x557a52*/
      LOBYTE(v3) = (*(char (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557a5c*/
    }
  }
  return v3; /*0x557a5f*/
}



// ==== 0x00557A70  ListClass::OnKeyUp  this=ListClass  sig=csp ====
char __thiscall CheckListClass::OnKeyUp(ListClass *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = this->Enabled; /*0x557a74*/
  if ( (_BYTE)v3 ) /*0x557a79*/
  {
    v4 = (char *)this + 280; /*0x557a85*/
    v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, a2); /*0x557a8e*/
    if ( v3 ) /*0x557a96*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 144))((char *)this + 280); /*0x557aa2*/
      LOBYTE(v3) = (*(char (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557aac*/
    }
  }
  return v3; /*0x557aaf*/
}



// ==== 0x00557AC0  ListClass::GetClamped  this=ListClass  sig=csp ====
int __thiscall Array::GetClamped(ListClass *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // eax

  result = *((_DWORD *)this + 17); /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = a2; /*0x557aca*/
    v4 = result - 1; /*0x557ace*/
    if ( a2 >= v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/
}



// ==== 0x00557AE0  ListClass::SetColor  this=ListClass  sig=csp ====
int __thiscall ColorListClass::SetColor(ListClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 91); /*0x557ae0*/
  if ( *((_DWORD *)this + 17) > v1 ) /*0x557aeb*/
    return *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}



// ==== 0x00557B00  ListClass::GetItemCount  this=ListClass  sig=csp ====
int __thiscall CheckListClass::GetItemCount(ListClass *this)
{
  return *((_DWORD *)this + 91); /*0x557b06*/
}



// ==== 0x00557B10  ListClass::vt[19]  this=ListClass  sig=csp ====
char __thiscall CheckListClass::g_var_d2d9f4(ListClass *this, char a2, int a3, _DWORD *a4)
{
  char result; // al
  int v6; // edi
  int v7; // eax

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == (_DWORD *)((char *)this + 88) ) /*0x557b25*/
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 196))(this, 1); /*0x557b2b*/
    result = (_BYTE)this - 72; /*0x557b31*/
    if ( a4 == (_DWORD *)((char *)this + 184) ) /*0x557b39*/
      result = (*(int (__thiscall **)(ListClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 196))(this, 0); /*0x557b41*/
  }
  if ( a4 == (_DWORD *)((char *)this + 280) ) /*0x557b4f*/
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x557b53*/
    v7 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 70) + 144))((char *)this + 280); /*0x557b55*/
    return (*(char (__thiscall **)(ListClass *, int))(v6 + 192))(this, v7); /*0x557b5e*/
  }
  return result; /*0x557b64*/
}



// ==== 0x00557B70  ListClass::OnKeyDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::OnKeyDown(ListClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = (*((_DWORD *)this + 17) - this->q014) & ((*((_DWORD *)this + 17) - this->q014 < 0) - 1); /*0x557b84*/
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
  if ( v4 == *((_DWORD *)this + 92) ) /*0x557b9e*/
    return 0; /*0x557bd6*/
  *((_DWORD *)this + 92) = v4; /*0x557ba0*/
  (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557baa*/
  if ( this->Enabled ) /*0x557bad*/
    (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 140))((char *)this + 280, *((_DWORD *)this + 92)); /*0x557bc7*/
  return 1; /*0x557bd2*/
}



// ==== 0x00557BE0  ListClass::InitControls  this=ListClass  sig=csp ====
int __thiscall GadgetClass::InitControls(ListClass *this)
{
  int v2; // eax
  int v3; // edx

  if ( this->Enabled ) /*0x557be3*/
    return 0; /*0x557ca7*/
  v2 = *(_DWORD *)this->__pad_0; /*0x557bee*/
  this->Enabled = 1; /*0x557bf3*/
  (*(void (**)(void))(v2 + 72))(); /*0x557bf7*/
  v3 = *((_DWORD *)this + 22); /*0x557c03*/
  this->ListClass_field_0x14 -= *((_DWORD *)this + 75); /*0x557c08*/
  (*(void (__thiscall **)(char *, ListClass *))(v3 + 132))((char *)this + 88, this); /*0x557c11*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 46) + 132))((char *)this + 184, this); /*0x557c26*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 70) + 132))((char *)this + 280, this); /*0x557c3b*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 22) + 12))((char *)this + 88, this); /*0x557c46*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 46) + 12))((char *)this + 184, this); /*0x557c4f*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 70) + 12))((char *)this + 280, this); /*0x557c57*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 72))((char *)this + 88); /*0x557c5e*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 72))((char *)this + 184); /*0x557c66*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 72))((char *)this + 280); /*0x557c6d*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))((char *)this + 280, *((_DWORD *)this + 17)); /*0x557c78*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 168))((char *)this + 280, this->q014); /*0x557c86*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 140))((char *)this + 280, *((_DWORD *)this + 92)); /*0x557c97*/
  return 1; /*0x557ca5*/
}



// ==== 0x00557CB0  ListClass::GetItemData  this=ListClass  sig=csp ====
int __thiscall CheckListClass::GetItemData(ListClass *this)
{
  int v2; // edx

  if ( !this->Enabled ) /*0x557cb3*/
    return 0; /*0x557d01*/
  v2 = *((_DWORD *)this + 70); /*0x557cc3*/
  this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x557ccb*/
  this->Enabled = 0; /*0x557cd4*/
  (*(void (__thiscall **)(char *))(v2 + 36))((char *)this + 280); /*0x557cd8*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557ce1*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557cf0*/
  (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557cf7*/
  return 1; /*0x557cff*/
}



// ==== 0x00557D10  ListClass::KillFocus  this=ListClass  sig=csp ====
int __thiscall CheckListClass::KillFocus(ListClass *this, int a2)
{
  this->q00C = a2; /*0x557d14*/
  return a2; /*0x557d17*/
}



// ==== 0x00557D20  ListClass::Destru_vt50  this=ListClass  sig=csp ====
_DWORD *__thiscall ListClass::Destru_vt50(ListClass *this, int a2, int a3, int a4, int a5, int a6)
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

  v7 = *((_DWORD *)this + 11); /*0x557d29*/
  Type = BuildingAnim::GetType(); /*0x557d35*/
  if ( a6 ) /*0x557d3d*/
  {
    BYTE1(v7) |= 0x20u; /*0x557d44*/
    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type) + 796); /*0x557d52*/
    v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x557d5b*/
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x557d61*/
      v11 = *(unsigned __int8 *)(v10 + v9); /*0x557d65*/
    else
      v11 = *(unsigned __int16 *)(v10 + 2 * v9); /*0x557d6c*/
    v20[0] = a3; /*0x557d78*/
    v20[3] = *((_DWORD *)this + 19); /*0x557d7f*/
    v20[1] = a4; /*0x557d8a*/
    v20[2] = a5; /*0x557d8e*/
    (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x557d99*/
      g_DSurface_Hidden_2,
      v20,
      v11);
  }
  else if ( (v7 & 0x4000) == 0 ) /*0x557da1*/
  {
    BYTE1(v7) |= 0x10u; /*0x557da3*/
  }
  v12 = *((_DWORD *)this + 14); /*0x557daa*/
  v19[0] = a3; /*0x557db1*/
  v13 = this->q00C; /*0x557db5*/
  v19[1] = a4; /*0x557db8*/
  v14 = (int *)(v12 + 4 * a2); /*0x557dbc*/
  v18 = v13; /*0x557dc8*/
  v17 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x557dd0*/
  v15 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x557de3*/
          g_DSurface_Hidden_2,
          v21);
  return FillRectangle(v20, *v14, (int)g_DSurface_Hidden_2, v15, (int)v19, v17, 0, v7, a5, v18); /*0x557df8*/
}



// ==== 0x00557E10  ListClass::ddtor  this=ListClass  sig=csp ====
int __thiscall CheckListClass::ddtor(ListClass *this, int a2)
{
  if ( this->Enabled ) /*0x557e18*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 12))((char *)this + 280, a2); /*0x557e2c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 12))((char *)this + 184, a2); /*0x557e3c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 12))((char *)this + 88, a2); /*0x557e46*/
  }
  return LinkedList::InsertAfter((LinkClass *)this, a2); /*0x557e51*/
}



// ==== 0x00557E60  ListClass::HitTest  this=ListClass  sig=csp ====
_DWORD *__thiscall CheckListClass::HitTest(ListClass *this, int a2)
{
  if ( this->Enabled ) /*0x557e68*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 20))((char *)this + 280, a2); /*0x557e7c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 20))((char *)this + 184, a2); /*0x557e8c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 20))((char *)this + 88, a2); /*0x557e96*/
  }
  return LinkedList::Attach((LinkClass *)this, a2); /*0x557ea1*/
}



// ==== 0x00557EB0  ListClass::Draw  this=ListClass  sig=csp ====
int __thiscall CheckListClass::Draw(ListClass *this, int a2)
{
  LinkedList::Append((LinkClass *)this, a2); /*0x557eb9*/
  if ( this->Enabled ) /*0x557ebe*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 16))((char *)this + 88, a2); /*0x557ecc*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 16))((char *)this + 184, a2); /*0x557edc*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 16))((char *)this + 280, a2); /*0x557eec*/
  }
  return (*(int (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x557ef6*/
}



// ==== 0x00557F00  ListClass::OnDblClick  this=ListClass  sig=csp ====
int __thiscall CheckListClass::OnDblClick(ListClass *this)
{
  if ( this->Enabled ) /*0x557f03*/
  {
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 36))((char *)this + 280); /*0x557f16*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557f25*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557f2e*/
  }
  return LinkClass::Destroy((GadgetClass *)this); /*0x557f38*/
}



// ==== 0x00557F40  ListClass::Clear  this=ListClass  sig=csp ====
int __thiscall ColorListClass::Clear(ListClass *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= *((_DWORD *)this + 17) ) /*0x557f4a*/
  {
    *((_DWORD *)this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *((_DWORD *)this + 91) = a2; /*0x557f4c*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557f56*/
    if ( *((_DWORD *)this + 91) < *((_DWORD *)this + 92) ) /*0x557f67*/
      (*(void (__thiscall **)(ListClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 192))(this, *((_DWORD *)this + 91)); /*0x557f6e*/
    v4 = this->q014; /*0x557f74*/
    result = *((_DWORD *)this + 91); /*0x557f7d*/
    if ( result >= v4 + *((_DWORD *)this + 92) ) /*0x557f87*/
      return (*(int (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}



// ==== 0x00557FB0  ListClass::ScrollDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::ScrollDown(ListClass *this, int a2)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 91); /*0x557fb7*/
  (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v2 + a2); /*0x557fc0*/
  return v2; /*0x557fc8*/
}



// ==== 0x00557FD0  ListClass::AddItem  this=ListClass  sig=csp ====
void __thiscall CheckListClass::AddItem(ListClass *this)
{
  if ( this->Enabled ) /*0x557fd3*/
  {
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 72))((char *)this + 88); /*0x557fe0*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 72))((char *)this + 184); /*0x557fef*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 72))((char *)this + 280); /*0x557ffe*/
  }
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)this); /*0x558003*/
}



// ==== 0x00558010  ListClass::RemoveColor  this=ListClass  sig=csp ====
void __thiscall ColorListClass::RemoveColor(ListClass *this, wchar_t *String2)
{
  int v3; // esi

  if ( String2 && *((int *)this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*((_DWORD *)this + 14) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *((_DWORD *)this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v3); /*0x558051*/
  }
}



// ==== 0x00558060  ListClass::Destru_vt00  this=ListClass  sig=csp ====
_BYTE *__thiscall ListClass::Destru_vt00(ListClass *this, char a2)
{
  char v3; // al
  int v4; // edx
  void *v5; // eax

  v3 = this->Enabled; /*0x558066*/
  *(_DWORD *)this->__pad_0 = &ListClass::`vftable'; /*0x558069*/
  if ( v3 ) /*0x558071*/
  {
    v4 = *((_DWORD *)this + 70); /*0x55807c*/
    this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x558084*/
    this->Enabled = 0; /*0x55808d*/
    (*(void (__thiscall **)(char *))(v4 + 36))((char *)this + 280); /*0x558090*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x558099*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x5580a8*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x5580af*/
  }
  SliderClass::Destructor((SliderClass *)((char *)this + 280)); /*0x5580b8*/
  ShapeButtonClass::Destructor((int)this + 184); /*0x5580c3*/
  ShapeButtonClass::Destructor((int)this + 88); /*0x5580cb*/
  v5 = (void *)*((_DWORD *)this + 14); /*0x5580d0*/
  this->u32_D = &VectorClass<unsigned short const *>::`vftable'; /*0x5580d3*/
  if ( v5 && *((_BYTE *)this + 65) ) /*0x5580de*/
  {
    __3_YAXPAX_Z(v5); /*0x5580e4*/
    *((_DWORD *)this + 14) = 0; /*0x5580ec*/
  }
  *((_BYTE *)this + 65) = 0; /*0x5580f1*/
  *((_DWORD *)this + 15) = 0; /*0x5580f4*/
  GadgetClass::Dtor((ShpButtonClass *)this); /*0x5580f7*/
  if ( (a2 & 1) != 0 ) /*0x558101*/
    __3_YAXPAX_Z(this); /*0x558104*/
  return this->__pad_0; /*0x55810e*/
}



// ==== 0x00558120  SliderClass::?  this=SliderClass  sig=csp ====
int __thiscall SliderClass::g_var_d52e84(SliderClass *this)
{
  return *((_DWORD *)this + 19); /*0x558123*/
}



// ==== 0x00558130  _DynamicVectorClass_PBG::drawList  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CheckListClass::drawList(_DynamicVectorClass_PBG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x558133*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short const *>::`vftable'; /*0x558136*/
  if ( v3 && BYTE1(this->m_C) ) /*0x558140*/
  {
    __3_YAXPAX_Z(v3); /*0x558148*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x558150*/
  }
  BYTE1(this->m_C) = 0; /*0x55815b*/
  this->m_8 = 0; /*0x558161*/
  if ( (a2 & 1) != 0 ) /*0x558168*/
    __3_YAXPAX_Z(this); /*0x55816b*/
  return this->__pad_0; /*0x558175*/
}



// ==== 0x00558180  SliderClass::QueryInterface  this=SliderClass  sig=csp ====
_DWORD *__thiscall SliderClass::QueryInterface(SliderClass *this, char a2)
{
  SliderClass::Destructor(this); /*0x558183*/
  if ( (a2 & 1) != 0 ) /*0x55818d*/
    __3_YAXPAX_Z(this); /*0x558190*/
  return this->__pad_0; /*0x55819a*/
}



// ==== 0x005581A0  GaugeClass::method_5581A0  this=GaugeClass  sig=csp ====
int __thiscall sub_5581A0(int this, int a2)
{
  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x5581a9*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x5581b1*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x5581b7*/
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46); /*0x5581bd*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x5581c3*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x5581c9*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x5581cf*/
  *(_DWORD *)this = &GaugeClass::`vftable'; /*0x5581d2*/
  return this; /*0x5581da*/
}



// ==== 0x005581E0  _DynamicVectorClass_PBG::scrollList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::scrollList(_DynamicVectorClass_PBG *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5581e6*/
  this->m_10 = 0; /*0x5581e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5581f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5581f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5581fe*/
  }
  BYTE1(this->m_C) = 0; /*0x558201*/
  this->m_8 = 0; /*0x558204*/
}



// ==== 0x00558210  _DynamicVectorClass_PBG::selectItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::selectItem(_DynamicVectorClass_PBG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x558210*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x558225*/
  else
    return 0; /*0x558217*/
}



// ==== 0x00558230  _VectorClass_PBG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::Count(_VectorClass_PBG *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55823a*/
}



// ==== 0x00558240  _VectorClass_PBG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::Get(_VectorClass_PBG *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x558242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55824d*/
  {
    v3 = 0; /*0x55824f*/
    if ( m_8 <= 0 ) /*0x558253*/
      return 1; /*0x558273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x558255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55825b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x558264*/
    {
      ++v3; /*0x558266*/
      ++v4; /*0x558267*/
      if ( v3 >= m_8 ) /*0x55826c*/
        return 1; /*0x55826c*/
    }
  }
  return 0; /*0x55826e*/
}



// ==== 0x00558280  _VectorClass_PBG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::Release(_VectorClass_PBG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55828c*/
  {
    LOBYTE(this->m_C) = 0; /*0x558296*/
    if ( a3 ) /*0x55829c*/
      v4 = a3; /*0x5582b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5582ae*/
    LOBYTE(this->m_C) = 1; /*0x5582b6*/
    if ( v4 ) /*0x5582ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5582c5*/
      {
        m_8 = this->m_8; /*0x5582cc*/
        if ( a2 < m_8 ) /*0x5582d1*/
          m_8 = a2; /*0x5582d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5582d9*/
          ++i; /*0x5582de*/
        if ( BYTE1(this->m_C) ) /*0x5582eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5582f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5582fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x558307*/
      this->m_8 = a2; /*0x55830f*/
      BYTE1(this->m_C) = a3 == 0; /*0x558312*/
      return 1; /*0x558318*/
    }
    else
    {
      return 0; /*0x5582bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x558322*/
    return 1; /*0x558328*/
  }
}



// ==== 0x00558330  _VectorClass_PBG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PBG::Set(_VectorClass_PBG *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55833d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x558343*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55834b*/
  }
  BYTE1(this->m_C) = 0; /*0x55834e*/
  this->m_8 = 0; /*0x558351*/
}



// ==== 0x00558360  _VectorClass_PBG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::GetSize(_VectorClass_PBG *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x558360*/
    return 0; /*0x558368*/
  m_8 = this->m_8; /*0x55836e*/
  result = 0; /*0x558371*/
  if ( m_8 <= 0 ) /*0x558375*/
    return -1; /*0x55838c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55837b*/
  {
    if ( ++result >= m_8 ) /*0x55838a*/
      return -1; /*0x55838a*/
  }
  return result; /*0x55836a*/
}



// ==== 0x005583A0  _VectorClass_PBG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PBG::GetCapacity(_VectorClass_PBG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5583a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5583b5*/
  else
    return 0; /*0x5583a7*/
}



// ==== 0x005583C0  _DynamicVectorClass_PBG::clearList  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::clearList(_DynamicVectorClass_PBG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5583cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5583d2*/
    if ( a3 ) /*0x5583d8*/
      v4 = a3; /*0x5583ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5583ea*/
    LOBYTE(this->m_C) = 1; /*0x5583f2*/
    if ( !v4 ) /*0x5583f6*/
      return 0; /*0x55846a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5583f8*/
    {
      m_8 = this->m_8; /*0x5583ff*/
      if ( a2 < m_8 ) /*0x558404*/
        m_8 = a2; /*0x558406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55840c*/
        ++i; /*0x558411*/
      if ( BYTE1(this->m_C) ) /*0x55841e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x558429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x558431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55843a*/
    this->m_8 = a2; /*0x558442*/
    BYTE1(this->m_C) = a3 == 0; /*0x558445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55844e*/
  }
  v7 = this->m_8; /*0x558451*/
  if ( v7 < this->m_10 ) /*0x558459*/
    this->m_10 = v7; /*0x55845b*/
  return 1; /*0x55845e*/
}



// ==== 0x00558470  _DynamicVectorClass_PBG::getItemCount  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::getItemCount(_DynamicVectorClass_PBG *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x558470*/
  result = 0; /*0x558473*/
  if ( m_10 <= 0 ) /*0x558478*/
    return -1; /*0x55848f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55847e*/
  {
    if ( ++result >= m_10 ) /*0x55848d*/
      return -1; /*0x55848d*/
  }
  return result; /*0x558492*/
}



// ==== 0x005584A0  _VectorClass_PBG::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PBG::QueryInterface(_VectorClass_PBG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5584a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short const *>::`vftable'; /*0x5584a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5584b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5584b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5584c0*/
  }
  BYTE1(this->m_C) = 0; /*0x5584cb*/
  this->m_8 = 0; /*0x5584d1*/
  if ( (a2 & 1) != 0 ) /*0x5584d8*/
    __3_YAXPAX_Z(this); /*0x5584db*/
  return this->__pad_0; /*0x5584e5*/
}



// ==== 0x005584F0  sub_5584F0  this=-  sig=csp ====
size_t __fastcall sub_5584F0(char *a1, void *a2)
{
  size_t v2; // esi
  int v3; // eax
  char *v4; // ecx

  if ( !a1 || !a2 ) /*0x5584f6*/
    return 0; /*0x55852a*/
  v2 = *(_DWORD *)(a1 + 2); /*0x5584fc*/
  v3 = *a1 - 3; /*0x558500*/
  v4 = &a1[*((__int16 *)a1 + 3) + 8]; /*0x558507*/
  if ( v3 ) /*0x55850b*/
  {
    if ( v3 != 1 ) /*0x55850f*/
    {
      memcpy(a2, v4, v2); /*0x558513*/
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
_DWORD *__thiscall LoadOptions::LoadOptions(LoadOptions *this)
{
  char *p_is_active; // ecx
  int v3; // eax

  p_is_active = &this->is_active; /*0x558745*/
  *((_DWORD *)p_is_active + 1) = 0; /*0x558748*/
  *((_DWORD *)p_is_active + 2) = 0; /*0x55874b*/
  p_is_active[12] = 1; /*0x55874e*/
  p_is_active[13] = 0; /*0x558752*/
  *(_DWORD *)p_is_active = &DynamicVectorClass<FileEntryClass *>::`vftable'; /*0x558755*/
  *((_DWORD *)p_is_active + 5) = 10; /*0x55875b*/
  *((_DWORD *)p_is_active + 4) = 0; /*0x558762*/
  *(_DWORD *)this->__pad_4 = 0; /*0x558765*/
  this->field_0C = 0; /*0x558768*/
  this->field_14 = 0; /*0x55876b*/
  v3 = *(_DWORD *)p_is_active; /*0x55876e*/
  this->extension = &LoadOptionsClass::`vftable'; /*0x558770*/
  *(_DWORD *)&this->__pad_4[4] = &off_829EA0; /*0x558776*/
  this->max_entries = 2048; /*0x55877d*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x558784*/
  return &this->extension; /*0x558789*/
}



// ==== 0x00558790  LoadOptions::Cleanup  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::Cleanup(LoadOptions *this)
{
  int v2; // edi
  int v3; // edx
  char *p_is_active; // esi
  int result; // eax

  v2 = 0; /*0x558797*/
  for ( this->extension = &LoadOptionsClass::`vftable'; v2 < this->capacity; ++v2 ) /*0x5587a4*/
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)&this->__pad_22[2] + 4 * v2)); /*0x5587ad*/
  v3 = *(_DWORD *)&this->is_active; /*0x5587bd*/
  p_is_active = &this->is_active; /*0x5587c0*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x5587c5*/
  result = *((_DWORD *)p_is_active + 1); /*0x5587c8*/
  *(_DWORD *)p_is_active = &VectorClass<FileEntryClass *>::`vftable'; /*0x5587cb*/
  if ( result && p_is_active[13] ) /*0x5587d5*/
  {
    __3_YAXPAX_Z((void *)result); /*0x5587db*/
    *((_DWORD *)p_is_active + 1) = 0; /*0x5587e3*/
  }
  p_is_active[13] = 0; /*0x5587e6*/
  *((_DWORD *)p_is_active + 2) = 0; /*0x5587e9*/
  return result; /*0x5587ec*/
}



// ==== 0x005587F0  LoadOptions::Run  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::Run(LoadOptions *this)
{
  int result; // eax

  *(_DWORD *)this->__pad_4 = 1; /*0x5587f0*/
  this->field_0C = 0; /*0x5587f7*/
  LOBYTE(result) = SaveLoadDialog::DlgProc((SaveLoadDialog *)this); /*0x5587fe*/
  return result;
}



// ==== 0x00558810  ObjectClass::ShowSaveLoadDialog  this=ObjectClass  sig=csp ====
bool __thiscall ShowSaveLoadDialog(bool *this, char *a2)
{
  char *p_referenceCount; // eax

  p_referenceCount = a2; /*0x558810*/
  this->ptr_8 = 2; /*0x558814*/
  if ( !a2 ) /*0x55881d*/
    p_referenceCount = (char *)&dword_A8B230[137].referenceCount; /*0x558824*/
  this->ptr_10 = p_referenceCount; /*0x558829*/
  return SaveLoadDialog::DlgProc((SaveLoadDialog *)this); /*0x558831*/
}



// ==== 0x00558840  Options::PrepareSaveLoadDlg  this=Options  sig=csp ====
bool __thiscall Options::PrepareSaveLoadDlg(Options *this)
{
  this->field_4 = (void *)3; /*0x558840*/
  this->field_C = 0; /*0x558847*/
  return SaveLoadDialog::DlgProc((SaveLoadDialog *)this);
}



// ==== 0x005588E0  sub_5588E0  this=-  sig=csp ====
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



// ==== 0x00558A30  sub_558A30  this=-  sig=csp ====
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



// ==== 0x00558B90  sub_558B90  this=-  sig=csp ====
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



// ==== 0x00558CB0  sub_558CB0  this=-  sig=csp ====
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



// ==== 0x00558DD0  SaveLoadDialog::DlgProc  this=SaveLoadDialog  sig=csp ====
bool __thiscall SaveLoadDialog::DlgProc(SaveLoadDialog *this)
{
  HWND v2; // ebp
  Dialog *Dialog; // edi
  HWND v4; // ebx
  LPARAM v5; // eax
  int *v6; // eax
  HWND DlgItem; // eax
  LPARAM v9; // ebp
  HWND v10; // eax
  HWND v11; // ebx
  LPARAM v12; // eax
  HWND v13; // ebx
  LPARAM v14; // eax
  HWND v15; // eax
  HWND v16; // ebx
  LRESULT v17; // eax
  TechnoTypeClass *v18; // ecx
  void (*v19)(void); // eax
  int v20; // eax
  LRESULT v21; // eax
  LRESULT v22; // ebp
  wchar_t *v23; // eax
  HWND v24; // eax
  int v25; // ebx
  LRESULT v26; // eax
  wchar_t *v27; // eax
  HWND v28; // eax
  LRESULT v29; // eax
  HWND v30; // eax
  int *v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // ebp
  int v35; // eax
  _DWORD *v36; // eax
  bool v37; // bl
  int *v38; // eax
  int *v39; // eax
  int *v40; // ebp
  wchar_t *v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ecx
  int *v45; // eax
  int i; // ebx
  wchar_t *StringCSF; // [esp-10h] [ebp-3D8h]
  wchar_t *v48; // [esp-10h] [ebp-3D8h]
  wchar_t *v49; // [esp-10h] [ebp-3D8h]
  wchar_t *v50; // [esp-10h] [ebp-3D8h]
  wchar_t *v51; // [esp-10h] [ebp-3D8h]
  wchar_t *v52; // [esp-Ch] [ebp-3D4h]
  wchar_t *v53; // [esp-Ch] [ebp-3D4h]
  const char *SaveLoadDialog_field_0x08; // [esp-4h] [ebp-3CCh]
  int v55; // [esp+0h] [ebp-3C8h]
  WPARAM wParam; // [esp+10h] [ebp-3B8h]
  WPARAM wParama; // [esp+10h] [ebp-3B8h]
  HWND hWnd; // [esp+14h] [ebp-3B4h]
  CCFileClass v59; // [esp+38h] [ebp-390h] BYREF
  char v60[12]; // [esp+90h] [ebp-338h] BYREF
  int v61; // [esp+9Ch] [ebp-32Ch]
  RawFileClass v62; // [esp+A4h] [ebp-324h] BYREF
  LPARAM lParam[128]; // [esp+C8h] [ebp-300h] BYREF
  char Buffer[256]; // [esp+2C8h] [ebp-100h] BYREF

  v2 = 0; /*0x558ddc*/
  Dialog = 0; /*0x558de1*/
  hWnd = 0; /*0x558de4*/
  if ( this->SaveLoadDialog_field_0x04 != 1 ) /*0x558de8*/
  {
    if ( this->SaveLoadDialog_field_0x04 == 2 ) /*0x558def*/
    {
      if ( DiskSpace::CheckAvailable() < this->q004 ) /*0x558e65*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e88*/
        v6 = (int *)GetStringCSF(aTxtDiskfull, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e9a*/
        Dialog::ShowMessageBox(v6, StringCSF, 0, 0, 0, v55); /*0x558ea4*/
        return 0; /*0x558eb5*/
      }
      Dialog = (Dialog *)CreateDialog(0x2B4u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558B90, 0); /*0x558ecc*/
      DlgItem = GetDlgItem((HWND)Dialog, 1319); /*0x558ed4*/
      v9 = *((_DWORD *)this + 3); /*0x558ed6*/
      hWnd = DlgItem; /*0x558edf*/
      v10 = GetDlgItem((HWND)Dialog, 1318); /*0x558ee3*/
      SendMessageA(v10, 0x4B2u, 0, v9); /*0x558eee*/
      v2 = GetDlgItem((HWND)Dialog, 1735); /*0x558f02*/
      v11 = GetDlgItem((HWND)Dialog, 1684); /*0x558f0a*/
      v12 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x558f0c*/
      SendMessageA(v11, 0x4B2u, 0, v12); /*0x558f18*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f23*/
        goto LABEL_12; /*0x558f2a*/
    }
    else
    {
      if ( this->SaveLoadDialog_field_0x04 != 3 ) /*0x558df2*/
        goto LABEL_12; /*0x558df2*/
      Dialog = (Dialog *)CreateDialog(0x2B5u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558CB0, 0); /*0x558e0e*/
      hWnd = GetDlgItem((HWND)Dialog, 1320); /*0x558e1e*/
      v2 = GetDlgItem((HWND)Dialog, 1736); /*0x558e2a*/
      v4 = GetDlgItem((HWND)Dialog, 1684); /*0x558e2e*/
      v5 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x558e34*/
      SendMessageA(v4, 0x4B2u, 0, v5); /*0x558e40*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558e4b*/
        goto LABEL_12; /*0x558e52*/
    }
    goto LABEL_11; /*0x558e52*/
  }
  Dialog = (Dialog *)CreateDialog(0xB7u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558A30, 0); /*0x558f44*/
  hWnd = GetDlgItem((HWND)Dialog, 1317); /*0x558f54*/
  v2 = GetDlgItem((HWND)Dialog, 1039); /*0x558f60*/
  v13 = GetDlgItem((HWND)Dialog, 1684); /*0x558f64*/
  v14 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 20))(this); /*0x558f6a*/
  SendMessageA(v13, 0x4B2u, 0, v14); /*0x558f76*/
  if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f81*/
  {
LABEL_11:
    v15 = GetDlgItem((HWND)Dialog, 1036); /*0x558f8a*/
    ShowWindow(v15, 0); /*0x558f99*/
  }
LABEL_12:
  *((_DWORD *)this + 6) = -1; /*0x558f9f*/
  if ( !Dialog ) /*0x558fa8*/
    return *((_DWORD *)this + 6) == 1039; /*0x558fa8*/
  SetWindowLongA((HWND)Dialog, 8, (LONG)this); /*0x558fb2*/
  v16 = hWnd; /*0x558fb8*/
  if ( hWnd ) /*0x558fbe*/
  {
    LoadSaveDialog::FillList((LoadSaveDialog *)this, hWnd); /*0x558fc3*/
    v17 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x558fd2*/
    EnableWindow(v2, v17 > 0); /*0x558fe5*/
  }
  Dialog::Show(Dialog); /*0x558fed*/
  while ( 1 ) /*0x558ff8*/
  {
    while ( *((_DWORD *)this + 6) == -1 ) /*0x559000*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x559009*/
        *((_DWORD *)this + 6) = 2; /*0x55900b*/
      v19 = (void (*)(void))*((_DWORD *)this + 5); /*0x559012*/
      if ( v19 ) /*0x559017*/
        v19(); /*0x559019*/
      if ( !byte_A8E9A0 ) /*0x559022*/
      {
        LOBYTE(v18) = 0; /*0x559024*/
        ScreenSaver::Process(v18, v55); /*0x559026*/
      }
    }
    v20 = *((_DWORD *)this + 6); /*0x559030*/
    if ( v20 == 1 || v20 == 1039 || v20 == 1735 || v20 == 1736 ) /*0x55904b*/
    {
      v21 = SendMessageA(v16, 0x188u, 0, 0); /*0x559061*/
      wParam = v21; /*0x559066*/
      if ( v21 == -1 ) /*0x55906a*/
        goto LABEL_70; /*0x55906a*/
      v22 = SendMessageA(v16, 0x199u, v21, 0); /*0x55907b*/
      switch ( this->SaveLoadDialog_field_0x04 ) /*0x559081*/
      {
        case 1: /*0x559081*/
          if ( *(_BYTE *)(v22 + 437) ) /*0x5594ae*/
            break; /*0x5594b6*/
          v42 = Game::CheckForGameCD((Game *)0x3C); /*0x5594c6*/
          v43 = *(_DWORD *)(v22 + 424); /*0x5594c8*/
          if ( v43 == -1 ) /*0x5594d1*/
            v44 = -1; /*0x5594d3*/
          else
            v44 = *(_DWORD *)(*((_DWORD *)dword_A83CFC + v43) + 152); /*0x5594e0*/
          SetSoundWarning(v44); /*0x5594e6*/
          if ( (unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5594fd*/
          {
            ShowWindow((HWND)Dialog, 0); /*0x559516*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x559524*/
            if ( (*(unsigned __int8 (__thiscall **)(SaveLoadDialog *, int))(*(_DWORD *)this->__pad_0 + 4))( /*0x559532*/
                   this,
                   v22 + 256) )
            {
              break; /*0x559537*/
            }
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x559541*/
            ShowWindow((HWND)Dialog, 5); /*0x55954d*/
            v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559573*/
            v45 = (int *)GetStringCSF(aTxtErrorLoadin, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559585*/
            Dialog::ShowMessageBox(v45, v51, 0, 0, 0, v55); /*0x55958f*/
            ShowWindow((HWND)Dialog, 0); /*0x559597*/
          }
          else
          {
            SetSoundWarning(v42); /*0x559509*/
          }
          goto LABEL_70; /*0x55950e*/
        case 2: /*0x559081*/
          v28 = GetDlgItem((HWND)Dialog, 1319); /*0x5591b2*/
          wParama = 0; /*0x5591b6*/
          if ( v28 ) /*0x5591be*/
          {
            v29 = SendMessageA(v28, 0x4EFu, 0, 0); /*0x5591ca*/
            wParama = v29; /*0x5591d2*/
            if ( v29 ) /*0x5591d6*/
              SetDialogActiveFlag(v29, 1); /*0x5591dc*/
          }
          v30 = GetDlgItem((HWND)Dialog, 1318); /*0x5591e7*/
          SendMessageA(v30, 0x4B3u, 0x50u, (LPARAM)lParam); /*0x5591f9*/
          WideString::Trim((wchar_t *)lParam); /*0x559206*/
          if ( !wcslen((const wchar_t *)lParam) ) /*0x559213*/
          {
            v48 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559240*/
            v31 = (int *)GetStringCSF(aTxtMustenterDe, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559252*/
            Dialog::ShowMessageBox(v31, v48, 0, 0, 0, v55); /*0x55925c*/
            v32 = GetDlgItem((HWND)Dialog, 1318); /*0x559267*/
            SetFocus(v32); /*0x55926a*/
            v33 = GetDlgItem((HWND)Dialog, 1318); /*0x55927f*/
            SendMessageA(v33, 0xB1u, 0xFFFFFFFF, -1); /*0x559282*/
LABEL_70:
            *((_DWORD *)this + 6) = -1; /*0x559599*/
            break; /*0x559599*/
          }
          if ( v22 && *(_BYTE *)(v22 + 436) ) /*0x559291*/
          {
            v34 = (char *)(v22 + 256); /*0x55929b*/
          }
          else
          {
            CCFileClass::Construct3((int)&v59); /*0x5592a7*/
            do /*0x5592e9*/
            {
              SaveLoadDialog_field_0x08 = (const char *)this->SaveLoadDialog_field_0x08; /*0x5592af*/
              v35 = rand(); /*0x5592b0*/
              sprintf(Buffer, "SAVE%04lX.%3s", v35, SaveLoadDialog_field_0x08); /*0x5592c3*/
              FileClass::SetFileName(&v59, Buffer); /*0x5592d7*/
            }
            while ( (unsigned __int8)CCFileClass::Open(&v59, 0) == 1 ); /*0x5592e9*/
            *(_DWORD *)v59.CDFileClass = &CCFileClass::`vftable'; /*0x5592f2*/
            v61 = 0; /*0x5592fa*/
            Vector::Clear((int)v60); /*0x559305*/
            *(_DWORD *)v59.CDFileClass = &off_7E1668; /*0x55930e*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v59); /*0x559316*/
            v34 = Buffer; /*0x55931b*/
          }
          if ( v34 ) /*0x559324*/
          {
            v36 = RawFileClass::Construct(&v62, (int)v34); /*0x559332*/
            v37 = (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v36 + 20))(v36, 0) == 1; /*0x559349*/
            RawFileClass::Dtor(&v62); /*0x55934c*/
            if ( v37 /*0x5593aa*/
              && (v53 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 594),
                  v49 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 594),
                  v38 = (int *)GetStringCSF(aTxtConfirmSave, 0, g_Str_File_LoadDlg_CPP, 594),
                  Dialog::ShowMessageBox(v38, v49, v53, 0, 0, v55)) )
            {
              *((_DWORD *)this + 6) = -1; /*0x5593b3*/
            }
            else
            {
              ShowWindow((HWND)Dialog, 0); /*0x5593c8*/
              if ( (*(unsigned __int8 (__thiscall **)(SaveLoadDialog *, char *, LPARAM *))(*(_DWORD *)this->__pad_0 + 8))( /*0x5593d7*/
                     this,
                     v34,
                     lParam) )
              {
                ShowWindow((HWND)Dialog, 5); /*0x559431*/
                SaveLoadDialog::FindDialogTemplate((SaveLoadDialog *)Dialog); /*0x559435*/
                v40 = (int *)(*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 32))(this); /*0x559458*/
                v41 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 617); /*0x559462*/
                Dialog::ShowMessageBox(v40, v41, 0, 0, 0, v55); /*0x55946d*/
                SaveLoadDialog::LookupDialogHash((SaveLoadDialog *)Dialog); /*0x559474*/
                ShowWindow((HWND)Dialog, 0); /*0x55947c*/
                if ( *((_DWORD *)this + 3) ) /*0x55947e*/
                  wcscpy((wchar_t *)lParam, *((const wchar_t **)this + 3)); /*0x55948e*/
              }
              else
              {
                ShowWindow((HWND)Dialog, 5); /*0x5593e1*/
                v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559407*/
                v39 = (int *)GetStringCSF(aTxtErrorSaving, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559419*/
                Dialog::ShowMessageBox(v39, v50, 0, 0, 0, v55); /*0x559423*/
                *((_DWORD *)this + 6) = -1; /*0x559428*/
              }
            }
          }
          if ( wParama ) /*0x55949c*/
            SetDialogActiveFlag(wParama, 0); /*0x5594a4*/
          break;
        case 3: /*0x559081*/
          v23 = GetStringCSF(aTxtDeleteFileQ, 0, g_Str_File_LoadDlg_CPP, 635); /*0x5590a7*/
          swprintf((wchar_t *const)lParam, (const size_t)&off_829F24, v23, v22); /*0x5590ba*/
          v24 = GetDlgItem((HWND)Dialog, 1320); /*0x5590c8*/
          v25 = 0; /*0x5590ce*/
          if ( v24 ) /*0x5590d2*/
          {
            v26 = SendMessageA(v24, 0x4EFu, 0, 0); /*0x5590dc*/
            v25 = v26; /*0x5590e2*/
            if ( v26 ) /*0x5590e6*/
              SetDialogActiveFlag(v26, 1); /*0x5590ec*/
          }
          v52 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559113*/
          v27 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559125*/
          if ( Dialog::ShowMessageBox(lParam, v27, v52, 0, 0, v55) /*0x559187*/
            || ((*(void (__thiscall **)(SaveLoadDialog *, int))(*(_DWORD *)this->__pad_0 + 12))(this, v22 + 256),
                SendMessageA(hWnd, 0x182u, wParam, 0),
                SendMessageA(hWnd, 0x186u, 0, 0),
                SendMessageA(hWnd, 0x18Bu, 0, 0) > 0) )
          {
            *((_DWORD *)this + 6) = -1; /*0x559189*/
          }
          if ( v25 ) /*0x559192*/
            SetDialogActiveFlag(v25, 0); /*0x55919c*/
          break;
      }
    }
    if ( *((_DWORD *)this + 6) != -1 ) /*0x5595a4*/
      break; /*0x5595a4*/
    v16 = hWnd; /*0x558ff4*/
  }
  for ( i = 0; i < *((_DWORD *)this + 12); ++i ) /*0x5595b1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)this + 9) + 4 * i)); /*0x5595ba*/
  (*(void (__thiscall **)(char *))(this->q008 + 12))((char *)this + 32); /*0x5595d0*/
  Dialog::Destroy(Dialog); /*0x5595d5*/
  return *((_DWORD *)this + 6) == 1039; /*0x558ea9*/
}



// ==== 0x005595F0  ObjectClass::method_5595F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5595F0(ObjectClass *this, char *Buffer)
{
  int v3; // eax
  const char *ptr_8; // [esp-4h] [ebp-78h]
  CCFileClass v6; // [esp+8h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  CCFileClass::Construct3((int)&v6); /*0x5595fb*/
  do /*0x559633*/
  {
    ptr_8 = (const char *)this->?; /*0x559607*/
    v3 = rand(); /*0x559608*/
    sprintf(Buffer, "SAVE%04lX.%3s", v3, ptr_8); /*0x559614*/
    FileClass::SetFileName(&v6, Buffer); /*0x559621*/
  }
  while ( (unsigned __int8)CCFileClass::Open(&v6, 0) == 1 ); /*0x559633*/
  *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x559639*/
  v8 = 0; /*0x559641*/
  Vector::Clear((int)v7); /*0x559649*/
  *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x559652*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x55965f*/
}



// ==== 0x005596A0  LoadSaveDialog::FillList  this=LoadSaveDialog  sig=csp ====
void __thiscall LoadSaveDialog::FillList(LoadSaveDialog *this, HWND hWnd)
{
  LoadSaveDialog *v2; // esi
  int i; // edi
  LoadSaveDialog *v4; // edi
  int v5; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  char *v8; // eax
  int v9; // eax
  LoadSaveDialog v10; // eax
  int v11; // ecx
  LoadSaveDialog v12; // eax
  LoadSaveDialog v13; // edx
  void *v14; // ebp
  int v15; // eax
  LoadSaveDialog v16; // ecx
  int v17; // eax
  LoadSaveDialog v18; // eax
  LoadSaveDialog v19; // edx
  signed int v20; // eax
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
  HANDLE hFindFile; // [esp+18h] [ebp-300h]
  _DWORD *hFindFilea; // [esp+18h] [ebp-300h]
  int j; // [esp+20h] [ebp-2F8h]
  LRESULT v40; // [esp+24h] [ebp-2F4h]
  LPARAM lParam; // [esp+28h] [ebp-2F0h] BYREF
  DeleteAndZero v42; // [esp+2Ch] [ebp-2ECh] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+40h] [ebp-2D8h] BYREF
  struct _FILETIME LocalFileTime; // [esp+50h] [ebp-2C8h] BYREF
  CHAR FileName[128]; // [esp+58h] [ebp-2C0h] BYREF
  wchar_t WideCharStr[127]; // [esp+D8h] [ebp-240h] BYREF
  __int16 v47; // [esp+1D6h] [ebp-142h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1D8h] [ebp-140h] BYREF

  v2 = this; /*0x5596a9*/
  Gadget::InitProperties((Gadget *)&lParam); /*0x5596b4*/
  for ( i = 0; i < *(_DWORD *)&v2[12]; ++i ) /*0x5596c2*/
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)&v2[9] + 4 * i)); /*0x5596cb*/
  v4 = v2 + 8; /*0x5596de*/
  (*(void (__thiscall **)(LoadSaveDialog *))(*(_DWORD *)&v2[8] + 12))(v2 + 8); /*0x5596e3*/
  if ( *(_DWORD *)&v2[1] == 2 ) /*0x5596ea*/
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
    StringCSF = GetStringCSF(aTxtEmptySlot, 0, g_Str_File_LoadDlg_CPP, 774); /*0x55975c*/
    swprintf((wchar_t *const)v6, (const size_t)StringCSF, v35); /*0x559763*/
    if ( dword_A83D4C ) /*0x559772*/
    {
      *(_DWORD *)(v6 + 288) = dword_A8B230[130].ptr_C; /*0x55977f*/
      *(_DWORD *)(v6 + 292) = dword_A8B230[202].ptr_C; /*0x559791*/
      *(_DWORD *)(v6 + 424) = dword_A8B230[375].uniqueId; /*0x5597a3*/
      wcscpy((wchar_t *)(v6 + 296), *((const wchar_t **)dword_A83D4C->Object_field_0x34 + 24)); /*0x5597bc*/
    }
    else
    {
      *(_DWORD *)(v6 + 288) = 0; /*0x5597c6*/
      *(_DWORD *)(v6 + 292) = dword_A8B3AC; /*0x5597d2*/
      *(_DWORD *)(v6 + 424) = -1; /*0x5597dd*/
      v8 = CharToWideString(unk_A8B380); /*0x5597e7*/
      swprintf((wchar_t *const)(v6 + 296), (const size_t)&off_8240B4, (const wchar_t *const)v8); /*0x5597f9*/
    }
    GetSystemTime(&SystemTime); /*0x559806*/
    SystemTimeToFileTime(&SystemTime, (LPFILETIME)(v6 + 428)); /*0x559818*/
    v9 = *(_DWORD *)&dword_A8B238; /*0x55981e*/
    *(_BYTE *)(v6 + 436) = 0; /*0x559823*/
    *(_DWORD *)(v6 + 440) = v9; /*0x559829*/
    v10 = v2[10]; /*0x55982f*/
    if ( *(_DWORD *)&v2[12] < *(_DWORD *)&v10 /*0x55984f*/
      || (v2[11].__tail_0[1] || !*(_DWORD *)&v10)
      && (v11 = (int)v2[13], v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, int, _DWORD))(*(_DWORD *)v4 + 8))(
           v2 + 8,
           *(_DWORD *)&v10 + v11,
           0) )
    {
      v12 = v2[12]; /*0x559856*/
      v13 = v2[9]; /*0x559859*/
      v2[12] = (LoadSaveDialog)(*(_DWORD *)&v12 + 1); /*0x55985f*/
      *(_DWORD *)(*(_DWORD *)&v13 + 4 * *(_DWORD *)&v12) = v6; /*0x559862*/
    }
  }
  sprintf(FileName, "*.%3s", *(_DWORD *)&v2[2]); /*0x559873*/
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
        if ( (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, void *, struct _WIN32_FIND_DATAA *))(*(_DWORD *)v2 + 16))( /*0x55991f*/
               v2,
               v14,
               &FindFileData) == 1 )
        {
          v16 = v2[10]; /*0x559921*/
          if ( *(_DWORD *)&v2[12] < *(_DWORD *)&v16 /*0x559943*/
            || (v2[11].__tail_0[1] || !*(_DWORD *)&v16)
            && (v17 = (int)v2[13], v17 > 0)
            && (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, int, _DWORD))(*(_DWORD *)v4 + 8))(
                 v2 + 8,
                 *(_DWORD *)&v16 + v17,
                 0) )
          {
            v18 = v2[12]; /*0x55994a*/
            v19 = v2[9]; /*0x55994d*/
            v2[12] = (LoadSaveDialog)(*(_DWORD *)&v18 + 1); /*0x559953*/
            *(_DWORD *)(*(_DWORD *)&v19 + 4 * *(_DWORD *)&v18) = v14; /*0x559956*/
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
  v20 = (signed int)v2[12]; /*0x55998e*/
  if ( v20 > 0 ) /*0x559993*/
  {
    qsort(*(void **)&v2[9], v20, 4u, sub_559D30); /*0x5599a5*/
    SendMessageA(hWnd, 0x184u, 0, 0); /*0x5599c2*/
    v21 = 0; /*0x5599c7*/
    for ( j = 0; v21 < *(_DWORD *)&v2[12]; j = v21 ) /*0x5599cf*/
    {
      v22 = *(_DWORD *)(*(_DWORD *)&v2[9] + 4 * v21); /*0x5599d8*/
      hFindFilea = (_DWORD *)v22; /*0x5599db*/
      if ( !*(_BYTE *)(v22 + 437) ) /*0x5599df*/
      {
        v23 = SendMessageA(hWnd, 0x4CDu, 0, v22); /*0x5599f3*/
        v24 = (LPARAM)hFindFilea; /*0x5599f5*/
        v25 = v23; /*0x5599f9*/
        v40 = v23; /*0x5599fb*/
        if ( hFindFilea[110] ) /*0x5599ff*/
        {
          lParam = 1; /*0x559a10*/
          WideString::Reassign((void **)&v42, asc_829F78); /*0x559a18*/
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
          v47 = 0; /*0x559abc*/
          WideCharStr[v27] = 0; /*0x559ac4*/
          WideString::Reassign((void **)&v42, WideCharStr); /*0x559ad8*/
          v28 = (unsigned __int16)v25 << 16; /*0x559ae7*/
          v29 = v28; /*0x559aea*/
          LOBYTE(v29) = -1; /*0x559aed*/
          SendMessageA(hWnd, 0x4A8u, v29, (LPARAM)&lParam); /*0x559af7*/
          GetTimeFormatA(0x400u, 0, &SystemTime, 0, FileName, 128); /*0x559b0f*/
          lParam = 1; /*0x559b2b*/
          v30 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559b33*/
          v47 = 0; /*0x559b40*/
          WideCharStr[v30] = 0; /*0x559b4d*/
          WideString::Reassign((void **)&v42, WideCharStr); /*0x559b55*/
          SendMessageA(hWnd, 0x4A8u, v28 | 0x13B, (LPARAM)&lParam); /*0x559b6c*/
          v25 = v40; /*0x559b6e*/
          v24 = (LPARAM)hFindFilea; /*0x559b72*/
        }
        SendMessageA(hWnd, 0x19Au, v25, v24); /*0x559b7e*/
        v21 = j; /*0x559b80*/
        v2 = this; /*0x559b84*/
      }
      ++v21; /*0x559b8b*/
    }
    v31 = (int)v2[1]; /*0x559b98*/
    if ( v31 == 1 ) /*0x559b9e*/
    {
      v32 = 0; /*0x559bb9*/
      v33 = *((_DWORD *)this + 12); /*0x559bbb*/
      if ( v33 > 0 ) /*0x559bc0*/
      {
        v34 = *((_DWORD *)this + 9); /*0x559bc2*/
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
  DeleteAndZero::Alt((DeleteAndZero *)&v42.DeleteAndZero_field_0x04); /*0x559bf5*/
  DeleteAndZero::Alt(&v42); /*0x559c02*/
}



// ==== 0x00559C20  LoadOptions::Check  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Check(LoadOptions *this)
{
  char v2; // bl
  const char *v3; // eax
  HANDLE FirstFileA; // edi
  CHAR FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
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
  struct _WIN32_FIND_DATAA FindFileData; // [esp+208h] [ebp-140h] BYREF

  v2 = 0; /*0x559c2f*/
  v3 = *(const char **)&this->__pad_4[4]; /*0x559c31*/
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
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x559cab*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x559cb0*/
  {
    while ( (FindFileData.dwFileAttributes & 0x116) != 0 /*0x559cf7*/
         || !_strcmpi(FindFileData.cFileName, MultiByteStr)
         || (*((unsigned __int8 (__thiscall **)(LoadOptions *, _WORD *, struct _WIN32_FIND_DATAA *))this->extension + 4))(
              this,
              v7,
              &FindFileData) != 1
         || v16 )
    {
      if ( !FindNextFileA(FirstFileA, &FindFileData) ) /*0x559d0a*/
        goto LABEL_9; /*0x559d0a*/
    }
    v2 = 1; /*0x559d0e*/
  }
LABEL_9:
  FindClose(FirstFileA); /*0x559d10*/
  return v2; /*0x559d17*/
}



// ==== 0x00559D30  sub_559D30  this=-  sig=ida-proto ====
int __cdecl sub_559D30(const void *a1, const void *a2)
{
  return -CompareFileTime((const FILETIME *)(*(_DWORD *)a1 + 428), (const FILETIME *)(*(_DWORD *)a2 + 428)); /*0x559d51*/
}



// ==== 0x00559D60  LoadOptionsClass::AddRef  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::AddRef(LoadOptionsClass *this)
{
  int v1; // esi
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // edi
  char Saved; // bl
  const CHAR *lpMultiByteStr; // [esp+10h] [ebp+4h]

  v1 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640); /*0x559d81*/
  StringCSF = GetStringCSF(aTxtLoading, 0, g_Str_File_LoadDlg_CPP, 1052); /*0x559d83*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    Dialog::Show(MessageBox); /*0x559da4*/
  byte_A8ED5C = 0; /*0x559dae*/
  byte_A8E378 = 0; /*0x559db5*/
  WTFMode::Shutdown(&dword_A8B238); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) < v1 ) /*0x559dd9*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559de3*/
  while ( (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) > v1 ) /*0x559e02*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/
}



// ==== 0x00559E40  LoadOptionsClass::Release  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Release(LoadOptionsClass *this, wchar_t *Source)
{
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // esi
  char v4; // bl
  wchar_t *Sourcea; // [esp+10h] [ebp+8h]

  StringCSF = GetStringCSF(aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107); /*0x559e55*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559e69*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    Dialog::Show(MessageBox); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName((LPCCH)Source, Sourcea, 0); /*0x559e90*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    Dialog::Destroy(MessageBox); /*0x559e9d*/
  return v4; /*0x559ea4*/
}



// ==== 0x00559EB0  LoadOptionsClass::ddtor  this=LoadOptions  sig=csp ====
bool __stdcall LoadOptions::_vt03(LPCSTR lpFileName)
{
  return DeleteFileA(lpFileName); /*0x559ec1*/
}



// ==== 0x00559ED0  LoadOptionsClass::Read  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Read(LoadOptionsClass *this, int Destination)
{
  const CHAR *v2; // edi
  char Options_Load; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *Data; // eax
  ObjectClass v8; // [esp+Ch] [ebp-3F4h] BYREF
  int v9; // [esp+408h] [ebp+8h]

  if ( !Destination && !v9 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = (const CHAR *)(v9 + 44); /*0x559eff*/
  if ( !_strcmpi((char *)(v9 + 44), MultiByteStr) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset((GameState *)&v8); /*0x559f17*/
  Options_Load = LoadOptions_Load(v2, (int)&v8); /*0x559f27*/
  if ( !Options_Load ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3(&v8) == dword_83D560 ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f60*/
    wcscpy((wchar_t *)Destination, v5); /*0x559f67*/
    *(_BYTE *)(Destination + 437) = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f48*/
    wcscpy((wchar_t *)Destination, v4); /*0x559f4f*/
    *(_BYTE *)(Destination + 437) = 1; /*0x559f57*/
  }
  *(_BYTE *)(Destination + 436) = Options_Load; /*0x559f7b*/
  *(_DWORD *)(Destination + 288) = LoadOptions::GetFlag99((LoadOptions *)&v8); /*0x559f8a*/
  *(_DWORD *)(Destination + 424) = LoadOptions::GetFlag98((LoadOptions *)&v8); /*0x559f99*/
  *(_DWORD *)(Destination + 440) = LoadOptions::GetFlag252((LoadOptions *)&v8); /*0x559fa4*/
  strcpy((char *)(Destination + 256), v2); /*0x559fc4*/
  Data = LoadOptions::GetData((char *)&v8); /*0x559fd1*/
  wcscpy((wchar_t *)(Destination + 296), (const wchar_t *)Data); /*0x559fde*/
  if ( !strlen((const char *)(Destination + 256)) ) /*0x559fe5*/
    strcpy((char *)(Destination + 256), (const char *)(v9 + 304)); /*0x55a013*/
  *(_DWORD *)(Destination + 432) = *(_DWORD *)(v9 + 24); /*0x55a020*/
  *(_DWORD *)(Destination + 428) = *(_DWORD *)(v9 + 20); /*0x55a029*/
  return 1; /*0x55a02f*/
}



// ==== 0x0055A050  LoadOptionsClass::Write  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Write(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216); /*0x55a066*/
}



// ==== 0x0055A070  LoadOptionsClass::Seek  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Seek(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222); /*0x55a086*/
}



// ==== 0x0055A090  LoadOptionsClass::Open  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Open(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228); /*0x55a0a6*/
}



// ==== 0x0055A0B0  LoadOptionsClass::Close  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Close(LoadOptionsClass *this)
{
  return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234); /*0x55a0c6*/
}



// ==== 0x0055A0D0  LoadOptionsClass::QueryInterface  this=LoadOptions  sig=csp ====
char *__thiscall LoadOptions::QueryInterface(LoadOptionsClass *this, char a2)
{
  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( this->m_0 = (int)&LoadOptionsClass::`vftable'; v3 < this->q00C; ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)this + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (__thiscall **)(LoadOptionsClass *))(this->Capacity + 12))(this + 2); /*0x55a102*/
  v4 = (void *)*((_DWORD *)this + 9); /*0x55a105*/
  this->Capacity = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a108*/
  if ( v4 && *((_BYTE *)this + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((_DWORD *)this + 9) = 0; /*0x55a122*/
  }
  *((_BYTE *)this + 45) = 0; /*0x55a12d*/
  *((_DWORD *)this + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(this); /*0x55a13d*/
  return (char *)this; /*0x55a147*/
}



// ==== 0x0055A150  _DynamicVectorClass_PAVFileEntryClass::vt03  this=DynamicVector  sig=csp ====
void __thiscall LoadOptions::vt03(_DynamicVectorClass_PAVFileEntryClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x55a156*/
  this->m_10 = 0; /*0x55a159*/
  if ( v2 && BYTE1(this->m_C) ) /*0x55a160*/
  {
    __3_YAXPAX_Z(v2); /*0x55a166*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a16e*/
  }
  BYTE1(this->m_C) = 0; /*0x55a171*/
  this->m_8 = 0; /*0x55a174*/
}



// ==== 0x0055A180  _DynamicVectorClass_PAVFileEntryClass::vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall LoadOptions::vt05(_DynamicVectorClass_PAVFileEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x55a180*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/
}



// ==== 0x0055A1A0  _VectorClass_PAVFileEntryClass::vt06  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::vt06(_VectorClass_PAVFileEntryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55a1aa*/
}



// ==== 0x0055A1B0  _VectorClass_PAVFileEntryClass::vt01  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::vt01(_VectorClass_PAVFileEntryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x55a1b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( m_8 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x55a1c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55a1cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= m_8 ) /*0x55a1dc*/
        return 1; /*0x55a1dc*/
    }
  }
  return 0; /*0x55a1de*/
}



// ==== 0x0055A1F0  _VectorClass_PAVFileEntryClass::CopyItems  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::CopyItems(_VectorClass_PAVFileEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55a1fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x55a206*/
    if ( a3 ) /*0x55a20c*/
      v4 = a3; /*0x55a222*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a21e*/
    LOBYTE(this->m_C) = 1; /*0x55a226*/
    if ( v4 ) /*0x55a22a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x55a235*/
      {
        m_8 = this->m_8; /*0x55a23c*/
        if ( a2 < m_8 ) /*0x55a241*/
          m_8 = a2; /*0x55a243*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55a249*/
          ++i; /*0x55a24e*/
        if ( BYTE1(this->m_C) ) /*0x55a25b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a266*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x55a26e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x55a277*/
      this->m_8 = a2; /*0x55a27f*/
      BYTE1(this->m_C) = a3 == 0; /*0x55a282*/
      return 1; /*0x55a288*/
    }
    else
    {
      return 0; /*0x55a22f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFileEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55a292*/
    return 1; /*0x55a298*/
  }
}



// ==== 0x0055A2A0  _VectorClass_PAVFileEntryClass::ClearBuffer  this=VectorClass  sig=csp ====
void __thiscall LoadOptions::ClearBuffer(_VectorClass_PAVFileEntryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55a2ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a2b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a2bb*/
  }
  BYTE1(this->m_C) = 0; /*0x55a2be*/
  this->m_8 = 0; /*0x55a2c1*/
}



// ==== 0x0055A2D0  _VectorClass_PAVFileEntryClass::FindItem  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::FindItem(_VectorClass_PAVFileEntryClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x55a2d0*/
    return 0; /*0x55a2d8*/
  m_8 = this->m_8; /*0x55a2de*/
  result = 0; /*0x55a2e1*/
  if ( m_8 <= 0 ) /*0x55a2e5*/
    return -1; /*0x55a2fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a2eb*/
  {
    if ( ++result >= m_8 ) /*0x55a2fa*/
      return -1; /*0x55a2fa*/
  }
  return result; /*0x55a2da*/
}



// ==== 0x0055A310  _VectorClass_PAVFileEntryClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall LoadOptions::PointerToIndex(_VectorClass_PAVFileEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x55a310*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x55a325*/
  else
    return 0; /*0x55a317*/
}



// ==== 0x0055A330  _DynamicVectorClass_PAVFileEntryClass::vt02  this=DynamicVector  sig=csp ====
char __thiscall LoadOptions::vt02(_DynamicVectorClass_PAVFileEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    LOBYTE(this->m_C) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    LOBYTE(this->m_C) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x55a368*/
    {
      m_8 = this->m_8; /*0x55a36f*/
      if ( a2 < m_8 ) /*0x55a374*/
        m_8 = a2; /*0x55a376*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( BYTE1(this->m_C) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a399*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x55a3a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55a3aa*/
    this->m_8 = a2; /*0x55a3b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVFileEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55a3be*/
  }
  v7 = this->m_8; /*0x55a3c1*/
  if ( v7 < this->m_10 ) /*0x55a3c9*/
    this->m_10 = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/
}



// ==== 0x0055A3E0  _DynamicVectorClass_PAVFileEntryClass::vt04  this=DynamicVector  sig=csp ====
int __thiscall LoadOptions::vt04(_DynamicVectorClass_PAVFileEntryClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( m_10 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= m_10 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/
}



// ==== 0x0055A410  _VectorClass_PAVFileEntryClass::Constructor_VectorClass_FileEntryClass___  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadOptions::Constructor_VectorClass_FileEntryClass___(
        _VectorClass_PAVFileEntryClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x55a413*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a416*/
  if ( v3 && BYTE1(this->m_C) ) /*0x55a420*/
  {
    __3_YAXPAX_Z(v3); /*0x55a428*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a430*/
  }
  BYTE1(this->m_C) = 0; /*0x55a43b*/
  this->m_8 = 0; /*0x55a441*/
  if ( (a2 & 1) != 0 ) /*0x55a448*/
    __3_YAXPAX_Z(this); /*0x55a44b*/
  return this->__pad_0; /*0x55a455*/
}



// ==== 0x0055A460  _DynamicVectorClass_PAVFileEntryClass::vt00  this=DynamicVector  sig=csp ====
_DWORD *__thiscall LoadOptions::vt00(_DynamicVectorClass_PAVFileEntryClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x55a463*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a466*/
  if ( v3 && BYTE1(this->m_C) ) /*0x55a470*/
  {
    __3_YAXPAX_Z(v3); /*0x55a478*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a480*/
  }
  BYTE1(this->m_C) = 0; /*0x55a48b*/
  this->m_8 = 0; /*0x55a491*/
  if ( (a2 & 1) != 0 ) /*0x55a498*/
    __3_YAXPAX_Z(this); /*0x55a49b*/
  return this->__pad_0; /*0x55a4a5*/
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
_DWORD *__thiscall LocomotionClass::Init(LocomotionClass *this)
{
  this->Owner = 0; /*0x55a6c6*/
  this->LinkedTo = 0; /*0x55a6c9*/
  this->Powered = 1; /*0x55a6cc*/
  this->Dirty = 1; /*0x55a6cf*/
  this->RefCount = 0; /*0x55a6d2*/
  *(_DWORD *)this->ILocomotion = &LocomotionClass::`vftable'; /*0x55a6d5*/
  *(_DWORD *)&this->ILocomotion[4] = &LocomotionClass::`vftable'; /*0x55a6db*/
  return this->ILocomotion; /*0x55a6e2*/
}



// ==== 0x0055A6F0  LocomotionClass::Construct  this=LocomotionClass  sig=csp ====
void __thiscall LocomotionClass::Construct(LocomotionClass *this)
{
  *(_DWORD *)this->ILocomotion = &LocomotionClass::`vftable'; /*0x55a6f0*/
  *(_DWORD *)&this->ILocomotion[4] = &LocomotionClass::`vftable'; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/
}



// ==== 0x0055A710  LocomotionClass::ResetPosition  this=LocomotionClass  sig=csp ====
int __stdcall StreamClass::ResetPosition(LocomotionClass *this, int a2)
{
  this->Owner = (FootClass *)a2; /*0x55a718*/
  *(_DWORD *)&this->ILocomotion[4] = a2; /*0x55a71b*/
  return 0; /*0x55a720*/
}



// ==== 0x0055A730  LocomotionClass::GetTransform  this=LocomotionClass  sig=csp ====
float *__stdcall Turret::GetTransform(LocomotionClass *this, float *a2, _DWORD *a3)
{
  LocomotionClass *v3; // edi
  _DWORD *v4; // esi
  float *result; // eax
  float v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v8; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(&v8); /*0x55a739*/
  v3 = this; /*0x55a73e*/
  this = (LocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->Owner->?, &v7) >> 10) + 1) >> 1) /*0x55a763*/
                            & 0x1F)
                           - 8);
  v6 = (double)(int)this * -0.1963495408493621; /*0x55a776*/
  Matrix2D::Rotate(v8.m_Data, v6); /*0x55a779*/
  v4 = a3; /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->Owner->?, &this) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
  }
  result = a2; /*0x55a7b6*/
  qmemcpy(a2, &v8, 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/
}



// ==== 0x0055A7D0  IUnknown::ComputeRotation  this=IUnknown  sig=csp ====
float *__stdcall Audio3D::ComputeRotation(IUnknown *this, float *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int slopeIndex; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  v3 = (_DWORD *)(this->field_8 + 156); /*0x55a7de*/
  v8[0] = *v3; /*0x55a7e5*/
  v8[1] = v3[1]; /*0x55a7f1*/
  v8[2] = v3[2]; /*0x55a7fd*/
  slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x55a812*/
  qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x55a828*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a85a*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x55a85d*/
  if ( a3 && *a3 != -1 ) /*0x55a872*/
  {
    *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x55a880*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a8a0*/
         & 0x1F;
  }
  qmemcpy(a2, v9, 0x30u); /*0x55a8b4*/
  return a2; /*0x55a8b6*/
}



// ==== 0x0055A8C0  IUnknown::ComputeScreenYOffset  this=IUnknown  sig=csp ====
_DWORD *__stdcall ObjectClass::ComputeScreenYOffset(IUnknown *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this->field_8 + 456))(this->field_8); /*0x55a8cc*/
  v3 = ZCoordToScreenY(v2); /*0x55a8d9*/
  *a2 = 0; /*0x55a8df*/
  a2[1] = v3; /*0x55a8e1*/
  return a2; /*0x55a8e4*/
}



// ==== 0x0055A8F0  IUnknown::SetDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::SetDirty(IUnknown *this)
{
  LOBYTE(this->field_C) = 1; /*0x55a8f5*/
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 96))(this); /*0x55a8fe*/
}



// ==== 0x0055A910  IUnknown::ClearDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::ClearDirty(IUnknown *this)
{
  LOBYTE(this->field_C) = 0; /*0x55a915*/
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 96))(this); /*0x55a91e*/
}



// ==== 0x0055A930  IUnknown::GetDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::GetDirty(IUnknown *this)
{
  int result; // eax

  result = (int)this; /*0x55a930*/
  LOBYTE(result) = this->field_C; /*0x55a934*/
  return result; /*0x55a937*/
}



// ==== 0x0055A940  IUnknown::MissionStub  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub(IUnknown *this)
{
  return 0; /*0x55a942*/
}



// ==== 0x0055A950  LocomotionClass::AddRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM::AddRef(LocomotionClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x55a95f*/
  return InterlockedIncrement(&this->RefCount); /*0x55a96b*/
}



// ==== 0x0055A970  LocomotionClass::ReleaseRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM::ReleaseRef(LocomotionClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x55a980*/
  v1 = InterlockedDecrement(&this->RefCount); /*0x55a98d*/
  if ( !v1 && this ) /*0x55a995*/
    (*(void (__thiscall **)(LocomotionClass *, int))(*(_DWORD *)this->ILocomotion + 32))(this, 1); /*0x55a99d*/
  return v1; /*0x55a9a2*/
}



// ==== 0x0055A9B0  LocomotionClass::QueryInterface  this=LocomotionClass  sig=csp ====
int __stdcall LocomotionClass::QueryInterface(LocomotionClass *this, const void *a2, _DWORD *a3)
{
  char *v4; // ecx
  char *v5; // ecx

  if ( !a3 ) /*0x55a9b6*/
    return -2147467261; /*0x55a9b8*/
  *a3 = 0; /*0x55a9d9*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x55a9df*/
  {
    if ( this ) /*0x55a9e5*/
      v4 = &this->ILocomotion[4]; /*0x55a9e7*/
    else
      v4 = 0; /*0x55a9ec*/
    *a3 = v4; /*0x55a9ee*/
  }
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
    *a3 = this; /*0x55aa03*/
  if ( !memcmp(a2, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
  {
    if ( this ) /*0x55aa1a*/
      v5 = &this->ILocomotion[4]; /*0x55aa1c*/
    else
      v5 = 0; /*0x55aa21*/
    *a3 = v5; /*0x55aa23*/
  }
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x55aa33*/
    *a3 = this; /*0x55aa3a*/
  if ( !*a3 ) /*0x55aa3c*/
    return -2147467262; /*0x55aa41*/
  (*(void (__stdcall **)(LocomotionClass *))(*(_DWORD *)this->ILocomotion + 4))(this); /*0x55aa4c*/
  return 0; /*0x55a9bd*/
}



// ==== 0x0055AA60  LocomotionClass::LoadIPersistStream  this=LocomotionClass  sig=csp ====
int __stdcall LoadIPersistStream(LocomotionClass *this, int *a2, int a3)
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
  a2 = (int *)this; /*0x55aa84*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x55aa88*/
  if ( result >= 0 ) /*0x55aa8d*/
  {
    v6 = *v3; /*0x55aa92*/
    v7 = (*(int (__thiscall **)(LocomotionClass *, _DWORD))(*(_DWORD *)this->ILocomotion + 36))(this, 0); /*0x55aa98*/
    result = (*(int (__stdcall **)(int *, LocomotionClass *, int))(v6 + 16))(v3, this, v7); /*0x55aa9e*/
    if ( result >= 0 ) /*0x55aaa4*/
    {
      if ( a3 ) /*0x55aaac*/
        this->Dirty = 0; /*0x55aaae*/
    }
  }
  return result; /*0x55aa6a*/
}



// ==== 0x0055AAC0  SwizzleManager::SaveLoad  this=SwizzleManager  sig=csp ====
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
    SwizzleManagerClass::Here_I_Am(&SwizzleManagerClass_Instance, a2, a1); /*0x55aaf7*/
    v4 = a1[5]; /*0x55aafe*/
    v5 = *v2; /*0x55ab01*/
    v6 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 36))(a1, 0); /*0x55ab07*/
    v7 = (*(int (__stdcall **)(int *, int *, int))(v5 + 12))(v2, a1, v6); /*0x55ab13*/
    a1[5] = v4; /*0x55ab1b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 3); /*0x55ab1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 2); /*0x55ab2c*/
    return v7; /*0x55ab33*/
  }
  return result; /*0x55aace*/
}



// ==== 0x0055AB40  IUnknown::GetStringValue  this=IUnknown  sig=csp ====
int __stdcall COMObject::GetStringValue(IUnknown *this, _DWORD *a2)
{
  if ( !a2 ) /*0x55ab47*/
    return -2147467261; /*0x55ab49*/
  *a2 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 36))(this) + 4; /*0x55ab5e*/
  a2[1] = 0; /*0x55ab60*/
  return 0; /*0x55ab4e*/
}



// ==== 0x0055AB70  IUnknown::MissionStub2  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub2(IUnknown *this, int a2)
{
  return 0; /*0x55ab72*/
}



// ==== 0x0055AB80  IUnknown::MissionStub3  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub3(IUnknown *this, int a2)
{
  return 0; /*0x55ab82*/
}



// ==== 0x0055AB90  IUnknown::Stub10  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub10(IUnknown *this)
{
  ; /*0x55ab90*/
}



// ==== 0x0055ABA0  LocomotionClass::StubReturnFalse  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnFalse(LocomotionClass *this)
{
  return 0; /*0x55aba2*/
}



// ==== 0x0055ABB0  LocomotionClass::CheckState  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState(LocomotionClass *this)
{
  return 2; /*0x55abb5*/
}



// ==== 0x0055ABC0  IUnknown::CheckState2  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState2(IUnknown *this, int a2)
{
  return 0; /*0x55abc2*/
}



// ==== 0x0055ABD0  IUnknown::ReturnZeroPos  this=IUnknown  sig=csp ====
_DWORD *__stdcall COMObject::ReturnZeroPos(IUnknown *this, _DWORD *a2)
{
  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/
}



// ==== 0x0055ABE0  LocomotionClass::MissionStub4  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub4(LocomotionClass *this)
{
  return 1; /*0x55abe2*/
}



// ==== 0x0055ABF0  LocomotionClass::MissionStub5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub5(LocomotionClass *this, int a2)
{
  return 0; /*0x55abf2*/
}



// ==== 0x0055AC00  IUnknown::Stub11  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub11(IUnknown *this, int a2, int a3, int a4)
{
  ; /*0x55ac00*/
}



// ==== 0x0055AC10  LocomotionClass::Stub12  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub12(LocomotionClass *this, int a2, int a3, int a4, int a5)
{
  ; /*0x55ac10*/
}



// ==== 0x0055AC20  LocomotionClass::Stub13  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub13(LocomotionClass *this)
{
  ; /*0x55ac20*/
}



// ==== 0x0055AC30  LocomotionClass::Stub14  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub14(LocomotionClass *this, int a2)
{
  ; /*0x55ac30*/
}



// ==== 0x0055AC40  LocomotionClass::nullsub_164  this=LocomotionClass  sig=csp ====
void __stdcall nullsub_164(LocomotionClass *this)
{
  ; /*0x55ac40*/
}



// ==== 0x0055AC50  JumpjetLocomotionClass::Stub15  this=JumpjetLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub15(JumpjetLocomotionClass *this, int a2, int a3, int a4)
{
  ; /*0x55ac50*/
}



// ==== 0x0055AC60  JumpjetLocomotionClass::StubReturnTrue_3  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnTrue_3(JumpjetLocomotionClass *this)
{
  return 1; /*0x55ac62*/
}



// ==== 0x0055AC70  JumpjetLocomotionClass::GetGlobalCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetGlobalCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi

  v3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[82]; /*0x55ac7a*/
  v4 = *(_DWORD *)&g_MissionQueueFrame.waypoints[86]; /*0x55ac81*/
  *a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[78]; /*0x55ac8a*/
  a2[1] = v3; /*0x55ac8c*/
  a2[2] = v4; /*0x55ac8f*/
  return a2; /*0x55ac92*/
}



// ==== 0x0055ACA0  LocomotionClass::GetCoord3D  this=LocomotionClass  sig=csp ====
_DWORD *__stdcall COMObject::GetCoord3D(LocomotionClass *this, _DWORD *a2)
{
  FootClass *Owner; // ecx
  int v3; // edx
  int v4; // esi

  Owner = this->Owner; /*0x55aca6*/
  v3 = Owner->?[1]; /*0x55acb3*/
  v4 = Owner->?[2]; /*0x55acb6*/
  *a2 = Owner->?[0]; /*0x55acbf*/
  a2[1] = v3; /*0x55acc1*/
  a2[2] = v4; /*0x55acc4*/
  return a2; /*0x55acc7*/
}



// ==== 0x0055ACD0  JumpjetLocomotionClass::StubReturnZero_11  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_11(JumpjetLocomotionClass *this)
{
  return 0; /*0x55acd2*/
}



// ==== 0x0055ACE0  LocomotionClass::Stub16  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub16(LocomotionClass *this, int a2)
{
  ; /*0x55ace0*/
}



// ==== 0x0055ACF0  LocomotionClass::MissionStub10  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub10(LocomotionClass *this)
{
  return 0; /*0x55acf2*/
}



// ==== 0x0055AD00  IUnknown::MissionStub11  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub11(IUnknown *this)
{
  return 0; /*0x55ad02*/
}



// ==== 0x0055AD10  IUnknown::GetSpecialValue  this=IUnknown  sig=csp ====
int __stdcall COMObject::GetSpecialValue(IUnknown *this)
{
  return (*(int (__thiscall **)(int))(*(_DWORD *)this->field_8 + 1336))(this->field_8); /*0x55ad1f*/
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



// ==== 0x0055AF40  RadarClass::SetGlobal  this=RadarClass  sig=csp ====
int __thiscall RadarClass::SetGlobal(RadarClass *this)
{
  int result; // eax

  dword_829FF4 = (int)this; /*0x55af40*/
  return result; /*0x55af46*/
}



// ==== 0x0055AF50  ObjectClass::Map_Init  this=ObjectClass  sig=csp ====
void __thiscall Map_Init(ObjectClass *this)
{
  dword_829FF8 = (int)this; /*0x55af50*/
}



// ==== 0x0055AF60  PingPongBuffer::GetWriteOffset  this=PingPongBuffer  sig=csp ====
int PingPongBuffer_GetWriteOffset()
{
  int result; // eax

  if ( byte_ABCD50 ) /*0x55af67*/
  {
    result = dword_829FF4 + dword_829FF8; /*0x55af7a*/
    if ( (unsigned int)dword_ABCD44 >= dword_829FF4 + dword_829FF8 ) /*0x55af7e*/
    {
      byte_ABCD50 = 0; /*0x55af80*/
      return dword_829FF4; /*0x55af87*/
    }
  }
  else
  {
    result = dword_829FF4; /*0x55af8a*/
    if ( (unsigned int)dword_ABCD44 < dword_829FF4 ) /*0x55af97*/
    {
      byte_ABCD50 = 1; /*0x55af9f*/
      return dword_829FF8 + dword_829FF4; /*0x55afa6*/
    }
  }
  return result; /*0x55af89*/
}



// ==== 0x0055AFB0  Scenario::Update  this=Scenario  sig=csp ====
void __thiscall Scenario::Update(Scenario *this)
{
  int v1; // eax
  AbstractClass *v2; // edi
  TeamClass *v3; // esi
  void *ptr_C; // edx
  int abstractFlags; // eax
  void *v6; // eax
  void **p_vtable3; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebx
  AbstractClass *v14; // ebp
  int v15; // edi
  int nextArrayIndex; // edx
  char *NeedsSaveOrLink; // eax
  int *p_nextArrayIndex; // esi
  int v19; // eax
  int v20; // ecx
  _BYTE *ptr_0; // edx
  char *ptr_8; // eax
  void *v23; // eax
  void *v24; // edx
  _BYTE *v25; // ecx
  char *v26; // eax
  int v27; // edi
  void *v28; // edx
  AbstractClass *v29; // ecx
  void *v30; // eax
  void *v31; // esi
  void *v32; // eax
  void *v33; // ecx
  AbstractClass *v34; // edx
  int v35; // eax
  char *ptr_4; // ecx
  AbstractClass *v37; // edx
  void *v38; // eax
  void *v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  void **v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int v49; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v53; // ecx
  int *v54; // eax
  ObjectClass *v55; // [esp+0h] [ebp-38h]
  ObjectClass *v56; // [esp+0h] [ebp-38h]
  ObjectClass *v57; // [esp+0h] [ebp-38h]
  ObjectClass *v58; // [esp+0h] [ebp-38h]
  ObjectClass *v59; // [esp+0h] [ebp-38h]
  LocomotionClass *v60; // [esp+0h] [ebp-38h]
  ObjectClass *v61; // [esp+0h] [ebp-38h]
  AirstrikeClass *v62; // [esp+0h] [ebp-38h]
  int v64; // [esp+14h] [ebp-24h] BYREF
  int v65; // [esp+18h] [ebp-20h]
  int v66; // [esp+1Ch] [ebp-1Ch]
  void **v67; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v69; // [esp+28h] [ebp-10h]
  char v70; // [esp+2Dh] [ebp-Bh]
  int v71; // [esp+30h] [ebp-8h]
  int v72; // [esp+34h] [ebp-4h]

  v1 = 0; /*0x55afc7*/
  v2 = dword_A8B230; /*0x55afcd*/
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[278]; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( (int)FootClass_Array.? > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (TeamClass *)*((_DWORD *)&FootClass_Array.?->ObjectClass + v1); /*0x55afec*/
      if ( BYTE2(v2[375].ptr_0) ) /*0x55afef*/
      {
        if ( (unsigned __int8)TeamClass::Update_0(v3, 50, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = dword_A8B230; /*0x55b017*/
      }
      if ( BYTE2(v2[374].uniqueId) ) /*0x55b01d*/
      {
        if ( (unsigned __int8)TeamClass::Update_0(v3, 27, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) /*0x55b090*/
          || (unsigned __int8)TeamClass::Update_0(v3, 28, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (unsigned __int8)TeamClass::Update_0(v3, 36, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (unsigned __int8)TeamClass::Update_0(v3, 37, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = dword_A8B230; /*0x55b09d*/
      }
      if ( HIBYTE(v2[374].uniqueId) /*0x55b10f*/
        && ((unsigned __int8)TeamClass::Update_0(v3, 45, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
         || (unsigned __int8)TeamClass::Update_0(v3, 46, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0))
        || (unsigned __int8)TeamClass::Update_0(v3, 13, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
        || (unsigned __int8)TeamClass::Update_0(v3, 51, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = dword_A8B230; /*0x55b118*/
      if ( dword_A8B230[127].ptr_C != (void *)-1 ) /*0x55b124*/
      {
        ptr_C = dword_A8B230[127].ptr_C; /*0x55b126*/
        abstractFlags = dword_A8B230[127].abstractFlags; /*0x55b12c*/
        if ( ptr_C != (void *)-1 ) /*0x55b134*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_C >= abstractFlags ) /*0x55b140*/
            break; /*0x55b140*/
          abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_C; /*0x55b142*/
        }
        if ( !abstractFlags ) /*0x55b146*/
          break; /*0x55b146*/
      }
LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= (int)FootClass_Array.? ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    TeamClass::Update_0(v3, 14, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0); /*0x55b148*/
LABEL_22:
    v2 = dword_A8B230; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
LABEL_24:
  v6 = v2[127].ptr_C; /*0x55b17d*/
  p_vtable3 = &v2[127].ptr_C; /*0x55b183*/
  if ( v6 != (void *)-1 ) /*0x55b18b*/
  {
    v8 = v2[127].abstractFlags; /*0x55b18d*/
    v9 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v6; /*0x55b19e*/
    if ( (signed int)(*(_DWORD *)&stru_A8EB00.?[416] - (unsigned int)v2[127].ptr_C) >= v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *p_vtable3 != (void *)-1 ) /*0x55b1ae*/
      {
        v10 = v2[127].abstractFlags; /*0x55b1b0*/
        v11 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)*p_vtable3; /*0x55b1b3*/
        if ( v11 >= v10 ) /*0x55b1b9*/
          v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - v11; /*0x55b1bb*/
        v2[127].abstractFlags = v12; /*0x55b1c1*/
        *p_vtable3 = (void *)-1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55b1cd*/
      v2 = dword_A8B230; /*0x55b1d2*/
    }
  }
  BYTE2(v2[374].uniqueId) = 0; /*0x55b1d8*/
  BYTE1(dword_A8B230[374].uniqueId) = 0; /*0x55b1e4*/
  HIBYTE(dword_A8B230[374].uniqueId) = 0; /*0x55b1f1*/
  BYTE2(dword_A8B230[375].ptr_0) = 0; /*0x55b1fe*/
  v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b205*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b226*/
    || *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    v14 = dword_A8B230; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = dword_A8B230; /*0x55b228*/
  v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b22e*/
  nextArrayIndex = dword_A8B230[128].nextArrayIndex; /*0x55b234*/
  NeedsSaveOrLink = (char *)dword_A8B230[128].NeedsSaveOrLink; /*0x55b23a*/
  p_nextArrayIndex = &dword_A8B230[128].nextArrayIndex; /*0x55b240*/
  if ( nextArrayIndex == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex < (int)NeedsSaveOrLink ) /*0x55b251*/
  {
    NeedsSaveOrLink -= *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex; /*0x55b253*/
LABEL_38:
    if ( NeedsSaveOrLink ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  LOWORD(v19) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b259*/
  v20 = v65; /*0x55b26a*/
  *p_nextArrayIndex = v15; /*0x55b26e*/
  p_nextArrayIndex[1] = v20; /*0x55b270*/
  p_nextArrayIndex[2] = v19; /*0x55b278*/
  MapClass::ProcessVisibilityFlags((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b27b*/
  v14 = dword_A8B230; /*0x55b280*/
  v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b286*/
LABEL_41:
  v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b294*/
LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x55b2ad*/
    v14 = dword_A8B230; /*0x55b2b2*/
    v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b2b8*/
    v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b2be*/
  }
  if ( ((int)v14->ptr_0 & 0x1000) != 0 && *(double *)(v13 + 5704) != 0.0 ) /*0x55b2dd*/
  {
    ptr_0 = v14[129].ptr_0; /*0x55b2df*/
    ptr_8 = (char *)v14[129].ptr_8; /*0x55b2e5*/
    if ( ptr_0 != (_BYTE *)-1 ) /*0x55b2f4*/
    {
      if ( v15 - (int)ptr_0 >= (int)ptr_8 ) /*0x55b2fc*/
      {
LABEL_50:
        LOWORD(v23) = Math::RoundToInt(*(double *)(v13 + 5704) * 900.0); /*0x55b304*/
        v24 = (void *)v65; /*0x55b315*/
        v14[129].ptr_0 = (void *)v15; /*0x55b319*/
        v14[129].ptr_4 = v24; /*0x55b31b*/
        v14[129].ptr_8 = v23; /*0x55b323*/
        MapClass::ProcessFogTransition((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b326*/
        v14 = dword_A8B230; /*0x55b32b*/
        v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b331*/
        v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      ptr_8 -= v15 - (_DWORD)ptr_0; /*0x55b2fe*/
    }
    if ( !ptr_8 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
LABEL_51:
  if ( v14[378].ptr_8 != v14[378].ptr_4 && *(double *)(v13 + 5736) != 0.0 )
  {
    v25 = v14[130].ptr_0; /*0x55b368*/
    v26 = (char *)v14[130].ptr_8; /*0x55b36e*/
    if ( v25 != (_BYTE *)-1 ) /*0x55b377*/
    {
      v27 = v15 - (_DWORD)v25; /*0x55b379*/
      if ( v27 >= (int)v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
      goto LABEL_71; /*0x55b383*/
LABEL_57:
    if ( NukeFlash::IsActive() || NukeFlash::ProcessEffect() || (unsigned __int8)ChronoScreen::IsActive() ) /*0x55b39b*/
    {
      v28 = dword_A8B230[380].ptr_8; /*0x55b40e*/
      v29 = dword_A8B230 + 130; /*0x55b414*/
      dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x55b41a*/
      v30 = (void *)v65; /*0x55b41c*/
    }
    else
    {
      if ( !(unsigned __int8)PsyDom::IsActive() ) /*0x55b3ab*/
      {
        v31 = *(void **)&stru_A8EB00.?[416]; /*0x55b3d2*/
        LOWORD(v32) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5736) * 900.0); /*0x55b3e4*/
        v33 = (void *)v65; /*0x55b3ef*/
        v34 = dword_A8B230 + 130; /*0x55b3f3*/
        dword_A8B230[130].ptr_0 = v31; /*0x55b3f9*/
        v34->ptr_4 = v33; /*0x55b3fb*/
        v34->ptr_8 = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = dword_A8B230[381].ptr_0; /*0x55b3b8*/
      v29 = dword_A8B230 + 130; /*0x55b3be*/
      dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x55b3c4*/
      v30 = (void *)v65; /*0x55b3c6*/
    }
    v29->ptr_4 = v30; /*0x55b420*/
    v29->ptr_8 = v28; /*0x55b423*/
LABEL_65:
    dword_A8B230[378].ptr_8 = (int)dword_A8B230[378].ptr_8 <= 0 ? 0 : dword_A8B230[378].ptr_8;
    LOWORD(v35) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5744) * 100.0); /*0x55b453*/
    ptr_4 = (char *)dword_A8B230[378].ptr_4; /*0x55b45e*/
    if ( (int)dword_A8B230[378].ptr_8 >= (int)ptr_4 ) /*0x55b46c*/
    {
      dword_A8B230[378].ptr_4 = &ptr_4[v35]; /*0x55b490*/
      v37 = dword_A8B230; /*0x55b496*/
      v38 = dword_A8B230[378].ptr_4; /*0x55b49c*/
      v39 = dword_A8B230[378].ptr_8; /*0x55b4a2*/
      if ( (int)v38 >= (int)v39 ) /*0x55b4aa*/
LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      dword_A8B230[378].ptr_4 = &ptr_4[-v35]; /*0x55b470*/
      v37 = dword_A8B230; /*0x55b476*/
      v38 = dword_A8B230[378].ptr_4; /*0x55b47c*/
      v39 = dword_A8B230[378].ptr_8; /*0x55b482*/
      if ( (int)v38 <= (int)v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[378].ptr_4 = v38; /*0x55b4ae*/
    HIBYTE(dword_A8B230[374].uniqueId) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(); /*0x55b4c6*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x55b4d2*/
  }
LABEL_71:
  UpdateAudioTriggers(v55); /*0x55b4d7*/
  ProcessSpeechEvents(v56); /*0x55b4dc*/
  DispatchBuildingAudioEvents((ObjectClass *)&stru_87F5D8); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects((ScenarioClass *)&v67, 0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v67 = &DynamicVectorClass<TeamClass *>::`vftable'; /*0x55b50e*/
  v72 = 10; /*0x55b516*/
  v71 = 0; /*0x55b51a*/
  if ( (int)FootClass_Array.? > 0 ) /*0x55b51e*/
  {
    v42 = v69; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = &FootClass_Array.?->ObjectClass + v40; /*0x55b530*/
      if ( v71 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v70 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
LABEL_81:
      if ( ++v40 >= (int)FootClass_Array.? ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v72; /*0x55b526*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v41 + v42, 0) ) /*0x55b558*/
    {
LABEL_79:
      v44 = v71++; /*0x55b55f*/
      *((_DWORD *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v69; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
LABEL_82:
  for ( i = 0; i < v71; ++i ) /*0x55b58a*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + i) + 92))(*((_DWORD *)Block + i)); /*0x55b595*/
  for ( j = dword_8A0218 - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_8A020C + j) + 92))(*((_DWORD *)dword_8A020C + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(v57); /*0x55b5be*/
  UpdateCameoProduction(v58); /*0x55b5c3*/
  UpdateSuperWeapons(v59); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_B04BD4 + k) + 92))(*((_DWORD *)dword_B04BD4 + k)); /*0x55b5e4*/
  UpdateDeferredLightSurfaces(6, 0); /*0x55b5f1*/
  LocomotionClass::UpdateAll(v60); /*0x55b5f6*/
  for ( m = 0; m < (int)this->Scenario_field_0x10; ++m ) /*0x55b606*/
  {
    v49 = *((_DWORD *)this->Scenario_field_0x4 + m); /*0x55b60b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 92))(v49); /*0x55b610*/
  }
  if ( *(_DWORD *)&dword_A8B238 ) /*0x55b622*/
  {
    if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < *(int *)&stru_A83D50.__pad_B4[12]; ++n ) /*0x55b632*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * n) + 92))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(v61); /*0x55b64b*/
  AirstrikeClass::UpdateAll(v62); /*0x55b650*/
  CrateClass::Update((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b65a*/
  (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55b667*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_C8[40]; ++ii ) /*0x55b673*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * ii) + 92))(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * ii)); /*0x55b680*/
  for ( jj = 0; jj < stru_A80220.?; ++jj ) /*0x55b696*/
  {
    v53 = *((_DWORD *)stru_A80220.? + jj); /*0x55b69d*/
    if ( v53 ) /*0x55b6a2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 92))(v53); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) ) /*0x55b6b8*/
  {
    v54 = (int *)(MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) + 156); /*0x55b6cf*/
    v64 = *v54; /*0x55b6d6*/
    v65 = v54[1]; /*0x55b6e8*/
    v66 = v54[2]; /*0x55b6ef*/
    Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v64); /*0x55b6f3*/
  }
  v67 = &VectorClass<TeamClass *>::`vftable'; /*0x55b6fc*/
  if ( Block ) /*0x55b706*/
  {
    if ( v70 ) /*0x55b70e*/
      __3_YAXPAX_Z(Block); /*0x55b711*/
  }
}



// ==== 0x0055B720  ObjectClass::method_55B720  this=ObjectClass  sig=csp ====
int __thiscall sub_55B720(ObjectClass *this)
{
  int v1; // ebx
  void *v3; // edi
  int nextArrayIndex; // edx
  int *p_nextArrayIndex; // esi
  char *NeedsSaveOrLink; // eax
  int v7; // eax
  _BYTE *ptr_0; // edx
  char *ptr_8; // eax
  AbstractClass *v10; // esi
  void *v11; // eax
  int result; // eax
  int i; // edi
  int v14; // esi
  void *v15; // [esp+18h] [ebp-8h]

  v1 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b724*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b74a*/
    || *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    goto LABEL_8; /*0x55b74a*/
  }
  v3 = *(void **)&stru_A8EB00.?[416]; /*0x55b751*/
  nextArrayIndex = dword_A8B230[128].nextArrayIndex; /*0x55b757*/
  p_nextArrayIndex = &dword_A8B230[128].nextArrayIndex; /*0x55b75d*/
  NeedsSaveOrLink = (char *)dword_A8B230[128].NeedsSaveOrLink; /*0x55b766*/
  if ( nextArrayIndex != -1 ) /*0x55b769*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex >= (int)NeedsSaveOrLink ) /*0x55b771*/
    {
LABEL_7:
      LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b779*/
      *p_nextArrayIndex = (int)v3; /*0x55b78e*/
      p_nextArrayIndex[1] = (int)v15; /*0x55b790*/
      p_nextArrayIndex[2] = v7; /*0x55b798*/
      MapClass::ProcessVisibilityFlags((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b79b*/
      v1 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b7a0*/
LABEL_8:
      v3 = *(void **)&stru_A8EB00.?[416]; /*0x55b7a6*/
      goto LABEL_9; /*0x55b7a6*/
    }
    NeedsSaveOrLink -= *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex; /*0x55b773*/
  }
  if ( !NeedsSaveOrLink ) /*0x55b777*/
    goto LABEL_7; /*0x55b777*/
LABEL_9:
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 && *(double *)(v1 + 5704) != 0.0 ) /*0x55b7ca*/
  {
    ptr_0 = dword_A8B230[129].ptr_0; /*0x55b7cc*/
    ptr_8 = (char *)dword_A8B230[129].ptr_8; /*0x55b7d2*/
    v10 = dword_A8B230 + 129; /*0x55b7d8*/
    if ( ptr_0 != (_BYTE *)-1 ) /*0x55b7e1*/
    {
      if ( (_BYTE *)v3 - ptr_0 >= (int)ptr_8 ) /*0x55b7e9*/
      {
LABEL_15:
        LOWORD(v11) = Math::RoundToInt(*(double *)(v1 + 5704) * 900.0); /*0x55b7f1*/
        v10->ptr_0 = v3; /*0x55b806*/
        v10->ptr_4 = v15; /*0x55b808*/
        v10->ptr_8 = v11; /*0x55b810*/
        MapClass::ProcessFogTransition((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      ptr_8 -= (_BYTE *)v3 - ptr_0; /*0x55b7eb*/
    }
    if ( ptr_8 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
LABEL_16:
  result = this->?; /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    v14 = *((_DWORD *)this->? + i); /*0x55b824*/
    if ( v14 && (*(_BYTE *)(v14 + 20) & 4) != 0 && *(_DWORD *)(v14 + 1652) && !*(_BYTE *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(_DWORD *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1652) + 64))(*(_DWORD *)(v14 + 1652)); /*0x55b86b*/
    }
    result = this->?; /*0x55b86e*/
  }
  return result; /*0x55b876*/
}



// ==== 0x0055B880  LogicClass::RemoveItemByValue  this=LogicClass  sig=csp ====
void __stdcall Array_RemoveItemByValue(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // eax

  if ( a1 ) /*0x55b887*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 44 ) /*0x55b893*/
    {
      v2 = dword_8B40D8; /*0x55b895*/
      v3 = 0; /*0x55b89b*/
      if ( dword_8B40D8 > 0 ) /*0x55b89f*/
      {
        v4 = dword_8B40CC; /*0x55b8a2*/
        do /*0x55b8da*/
        {
          if ( a1 == v4[v3] ) /*0x55b8ab*/
          {
            if ( v3 < v2 ) /*0x55b8af*/
            {
              --v2; /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              for ( dword_8B40D8 = v2; v5 < dword_8B40D8; ++v5 ) /*0x55b8bc*/
              {
                v4[v5] = v4[v5 + 1]; /*0x55b8c2*/
                v2 = dword_8B40D8; /*0x55b8c5*/
                v4 = dword_8B40CC; /*0x55b8cb*/
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < v2 ); /*0x55b8da*/
      }
    }
  }
}



// ==== 0x0055BAA0  LogicClass::SetDeployState  this=LogicClass  sig=csp ====
int __stdcall ObjectClass::SetDeployState(LogicClass *this, char a2)
{
  int v2; // ecx
  int result; // eax

  if ( *((_BYTE *)this + 152) ) /*0x55baa5*/
  {
    LOBYTE(result) = 1; /*0x55baaf*/
  }
  else if ( DisplayClass::RenderStatusText(v2, (int)this, a2) ) /*0x55babb*/
  {
    LOBYTE(result) = 1; /*0x55bac4*/
    *((_BYTE *)this + 152) = 1; /*0x55bac6*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x55bad0*/
  }
  return result; /*0x55bab1*/
}



// ==== 0x0055BAE0  VectorClass::RemoveItem  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveItem(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int Count; // ecx
  int v6; // ecx

  result = a2; /*0x55bae0*/
  if ( *(_BYTE *)(a2 + 152) ) /*0x55bae7*/
  {
    v4 = (*(int (__thiscall **)(DynamicVectorClass *, int *))(this->ptr_0 + 16))(this, &a2); /*0x55bafa*/
    if ( v4 != -1 ) /*0x55bb00*/
    {
      Count = this->Count; /*0x55bb02*/
      if ( v4 < Count ) /*0x55bb07*/
      {
        v6 = Count - 1; /*0x55bb09*/
        for ( this->Count = v6; v4 < this->Count; *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) ) /*0x55bb0f*/
          ++v4; /*0x55bb14*/
      }
    }
    result = a2; /*0x55bb23*/
    *(_BYTE *)(a2 + 152) = 0; /*0x55bb27*/
  }
  return result; /*0x55bb2e*/
}



// ==== 0x0055BB40  ScenarioClass::ProcessAmbientEffects  this=VectorClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::ProcessAmbientEffects(ScenarioClass *this, int a2, int a3)
{
  this->nextScenario[1] = 0; /*0x55bb4b*/
  this->nextScenario[2] = a2; /*0x55bb4e*/
  LOBYTE(this->nextScenario[3]) = 1; /*0x55bb51*/
  BYTE1(this->nextScenario[3]) = 0; /*0x55bb55*/
  this->nextScenario[0] = (int)&VectorClass<TeamClass *>::`vftable'; /*0x55bb58*/
  if ( a2 ) /*0x55bb5e*/
  {
    if ( a3 ) /*0x55bb66*/
    {
      this->nextScenario[1] = a3; /*0x55bb68*/
      return this->nextScenario; /*0x55bb6e*/
    }
    this->nextScenario[1] = __2_YAPAXI_Z(4 * a2); /*0x55bb7d*/
    BYTE1(this->nextScenario[3]) = 1; /*0x55bb80*/
  }
  return this->nextScenario; /*0x55bb6d*/
}



// ==== 0x0055BB90  WriteCompressionBlock  this=BlowStraw  sig=csp ====
int __fastcall Compression_WriteBlock(_BYTE *a1, unsigned int a2, _BYTE *a3, int *a4, int a5)
{
  int result; // eax
  int *v6; // esi
  _BYTE *v7; // edi
  int v8; // ecx
  _BYTE *v9; // ecx

  result = 0; /*0x55bb90*/
  if ( a2 ) /*0x55bb9a*/
  {
    if ( a2 > 0xD ) /*0x55bba7*/
    {
      v6 = a4; /*0x55bbcf*/
      result = CompressLCWBuffer(a3, a4, a5); /*0x55bbd6*/
      if ( result ) /*0x55bbdd*/
        return result; /*0x55bbdd*/
    }
    else
    {
      *a3 = a2 + 17; /*0x55bbb0*/
      v7 = a3 + 1; /*0x55bbb3*/
      do /*0x55bbbd*/
      {
        *v7++ = *a1++; /*0x55bbb8*/
        --a2; /*0x55bbbc*/
      }
      while ( a2 ); /*0x55bbbd*/
      v6 = a4; /*0x55bbbf*/
      *a4 = v7 - a3; /*0x55bbc5*/
    }
  }
  else
  {
    v6 = a4; /*0x55bb9c*/
    *a4 = 0; /*0x55bba0*/
  }
  v8 = *v6; /*0x55bbdf*/
  a3[v8] = 17; /*0x55bbe1*/
  v9 = &a3[v8 + 1]; /*0x55bbe7*/
  *v9 = 0; /*0x55bbe8*/
  v9[1] = 0; /*0x55bbeb*/
  *v6 += 3; /*0x55bbef*/
  return result; /*0x55bbf2*/
}



// ==== 0x0055BC00  CompressLCWBuffer  this=-  sig=csp ====
int __fastcall LCW_CompressBuffer(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // edi
  unsigned __int8 *v6; // ebp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int8 *i; // esi
  unsigned int v13; // eax
  unsigned __int8 *v14; // ebx
  unsigned int v15; // eax
  char *v16; // ebx
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // ebp
  unsigned __int8 *v19; // edi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  unsigned __int8 *v23; // ebp
  unsigned int v24; // eax
  char v25; // dl
  unsigned __int8 v26; // al
  char v27; // dl
  char *v28; // ebx
  unsigned __int8 v29; // al
  char v30; // dl
  char *v31; // ebx
  unsigned __int8 v32; // al
  char v33; // dl
  char *v34; // ebx
  unsigned __int8 v35; // al
  char v36; // dl
  char *v37; // ebx
  unsigned __int8 v38; // al
  char v39; // dl
  char *v40; // ebx
  unsigned __int8 v41; // al
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
  unsigned __int8 *v64; // [esp+14h] [ebp-18h]
  unsigned __int8 *v65; // [esp+18h] [ebp-14h]
  unsigned int v66; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  unsigned int v69; // [esp+38h] [ebp+Ch]

  v5 = a1; /*0x55bc07*/
  v6 = a3; /*0x55bc0d*/
  v65 = &a1[a2]; /*0x55bc17*/
  v7 = *a1 ^ (32 * (a1[1] ^ (32 * a1[2]))); /*0x55bc33*/
  v8 = a5; /*0x55bc35*/
  v64 = a1; /*0x55bc3b*/
  *(_DWORD *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = a1; /*0x55bc58*/
  v9 = (v7 >> 5) ^ (*v5 >> 5) ^ (v5[3] << 10); /*0x55bc6d*/
  *(_DWORD *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = v5 + 1; /*0x55bc89*/
  v10 = (v9 >> 5) ^ (v5[1] >> 5) ^ (v5[4] << 10); /*0x55bc9e*/
  *(_DWORD *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = v5 + 2; /*0x55bcbb*/
  v11 = (v10 >> 5) ^ (v5[2] >> 5) ^ (v5[5] << 10); /*0x55bcce*/
  *(_DWORD *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = v5 + 3; /*0x55bce7*/
  for ( i = v5 + 4; ; v11 = *i ^ (32 * (i[1] ^ (32 * i[2]))) ) /*0x55bcea*/
  {
    while ( 1 ) /*0x55bcfd*/
    {
      v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(unsigned __int8 **)(v8 + 4 * v13); /*0x55bd02*/
      *(_DWORD *)(v8 + 4 * v13) = i; /*0x55bd05*/
      if ( v14 >= a1 ) /*0x55bd0c*/
      {
        v62 = i - v14; /*0x55bd18*/
        if ( i - v14 > 0 && i - v14 <= 49151 && *v14 == *i && v14[1] == i[1] && v14[2] == i[2] ) /*0x55bd49*/
          break; /*0x55bd49*/
      }
LABEL_56:
      if ( ++i >= v65 - 13 ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (*(i - 1) >> 5) ^ (i[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    v15 = i - v5; /*0x55bd55*/
    v16 = (char *)(v14 + 3); /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = *v5; /*0x55bd71*/
        v17 = v5[1]; /*0x55bd74*/
        v18 = v6 + 1; /*0x55bd77*/
        v19 = v5 + 1; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = v18 + 1; /*0x55bd84*/
        v5 = v19 + 2; /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    v21 = i - v5; /*0x55bda2*/
    v68 = i - v5; /*0x55bda7*/
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
      *v6++ = *v5++; /*0x55be31*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
LABEL_25:
    v26 = i[3]; /*0x55be3d*/
    v27 = *v16; /*0x55be40*/
    i += 4; /*0x55be45*/
    v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      v29 = *i; /*0x55be4f*/
      v30 = *v28; /*0x55be51*/
      ++i; /*0x55be53*/
      v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        v32 = *i; /*0x55be5d*/
        v33 = *v31; /*0x55be5f*/
        ++i; /*0x55be61*/
        v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          v35 = *i; /*0x55be6b*/
          v36 = *v34; /*0x55be6d*/
          ++i; /*0x55be6f*/
          v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            v38 = *i; /*0x55be79*/
            v39 = *v37; /*0x55be7b*/
            ++i; /*0x55be7d*/
            v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              v41 = *i; /*0x55be87*/
              v42 = *v40; /*0x55be89*/
              ++i; /*0x55be8b*/
              v43 = v40 + 1; /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
                for ( ; i < v65; ++i ) /*0x55be9b*/
                {
                  if ( *v43 != *i ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                v44 = i - v64; /*0x55beb5*/
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
    v52 = (_BYTE)--i - (_BYTE)v5; /*0x55bf67*/
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
    if ( i >= v65 - 13 ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
LABEL_59:
  v56 = v65 - v5; /*0x55c027*/
  if ( v65 - v5 > 0 ) /*0x55c02f*/
  {
    v69 = v65 - v5; /*0x55c039*/
    if ( v6 == a3 && v56 <= 0xEE ) /*0x55c046*/
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
      *v6++ = *v5++; /*0x55c0b5*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a4 = v6 - a3; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}



// ==== 0x0055C0E0  DecodeBlockLCW  this=-  sig=csp ====
int __fastcall LCW_DecodeBlock(unsigned __int8 *a1, int a2, _BYTE *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 *v7; // ebp
  unsigned int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 *v14; // eax
  unsigned __int8 v15; // cl
  unsigned __int8 *v16; // eax
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

  v5 = a1; /*0x55c0e5*/
  *a4 = 0; /*0x55c0e8*/
  v6 = a3; /*0x55c0ef*/
  v7 = &a1[a2]; /*0x55c0f3*/
  if ( *a1 > 0x11u ) /*0x55c0fc*/
  {
    v8 = *a1 - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
LABEL_3:
  v8 = *v5; /*0x55c109*/
  v9 = v5 + 1; /*0x55c10d*/
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
      v8 = *v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = v9 + 1; /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = v14 + 1; /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
LABEL_9:
    v16 = v5 + 1; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = *v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * *v9]; /*0x55c170*/
      v5 = v9 + 1; /*0x55c17e*/
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
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * *v9]; /*0x55c1db*/
      v5 = v9 + 1; /*0x55c1dc*/
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
      v22 = *v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-(*v9 >> 2) - 1 + -64 * v9[1]]; /*0x55c225*/
    v5 = v9 + 2; /*0x55c227*/
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
    v20 = *(v5 - 2) & 3; /*0x55c18e*/
    if ( (*(v5 - 2) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = *v5++; /*0x55c19c*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = *v5; /*0x55c1a5*/
    v9 = v5 + 1; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * *v9]; /*0x55c1bd*/
      v5 = v9 + 1; /*0x55c1be*/
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
    v22 = *v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-(*v9 >> 2)]; /*0x55c262*/
  v29 = v9 + 1; /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = v29 + 1; /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a4 = v6 - a3; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}



// ==== 0x0055C2B0  LZOPipe::Constructor  this=LZOPipe  sig=csp ====
_DWORD *__thiscall LZOPipe::Constructor(LZOPipe *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx

  this->LZOPipe_field_0x04 = 0; /*0x55c2b9*/
  *((_DWORD *)this + 2) = 0; /*0x55c2bc*/
  this->q004 = 0; /*0x55c2bf*/
  *((_DWORD *)this + 5) = 0; /*0x55c2c2*/
  *((_DWORD *)this + 6) = 0; /*0x55c2c5*/
  *((_DWORD *)this + 3) = a2; /*0x55c2cc*/
  *((_DWORD *)this + 7) = a3; /*0x55c2cf*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c2d5*/
  *((_DWORD *)this + 8) = a3; /*0x55c2dc*/
  v4 = __2_YAPAXI_Z(2 * a3); /*0x55c2df*/
  v5 = *((_DWORD *)this + 7); /*0x55c2e4*/
  *((_DWORD *)this + 5) = v4; /*0x55c2e7*/
  *((_DWORD *)this + 6) = __2_YAPAXI_Z(v5 + *((_DWORD *)this + 8)); /*0x55c2f8*/
  *((_WORD *)this + 18) = -1; /*0x55c2fb*/
  return this->__pad_0; /*0x55c303*/
}



// ==== 0x0055C310  LZOPipe::Destructor  this=LZOPipe  sig=csp ====
int __thiscall LZOPipe::Destructor(LZOPipe *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x55c313*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c316*/
  __3_YAXPAX_Z(v2); /*0x55c31d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x55c322*/
  *((_DWORD *)this + 5) = 0; /*0x55c325*/
  __3_YAXPAX_Z(v3); /*0x55c32d*/
  *((_DWORD *)this + 6) = 0; /*0x55c337*/
  return Pipe::Dtor((Pipe *)this); /*0x55c343*/
}



// ==== 0x0055C350  LZOPipe::Read  this=LZOPipe  sig=csp ====
int __thiscall Compression::Read(int *this, int Src, signed int Size)
{
  char *v3; // ebp
  signed int v4; // edi
  int v6; // eax
  size_t v7; // ebx
  int v8; // eax
  signed int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  unsigned __int8 *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  signed int v18; // ebx
  int v19; // ecx
  int v20; // eax
  void *v21; // ebx
  __int16 v22; // cx
  int v23; // ebx
  int v24; // eax
  void *v25; // ebx
  int v26; // eax
  __int16 v27; // cx
  int v28; // eax
  int v29; // ebx
  int v30; // ebx
  signed int v31; // eax
  _BYTE *v32; // [esp-10h] [ebp-1Ch]

  v3 = (char *)Src; /*0x55c351*/
  v4 = Size; /*0x55c357*/
  if ( !Src || Size < 1 ) /*0x55c368*/
    return Delegate::Dispatch((Pipe *)this, Src, Size); /*0x55c5d0*/
  v6 = *(this + 3); /*0x55c36e*/
  Src = 0; /*0x55c375*/
  if ( v6 == 1 ) /*0x55c37d*/
  {
    while ( 1 ) /*0x55c38b*/
    {
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x55c391*/
      {
        v7 = 4 - this->q004; /*0x55c39b*/
        if ( v4 < v7 ) /*0x55c39f*/
          v7 = v4; /*0x55c3a1*/
        memcpy((void *)(*(this + 5) + this->q004), v3, v7); /*0x55c3ae*/
        v3 += v7; /*0x55c3bb*/
        v8 = v7 + this->q004; /*0x55c3bd*/
        v4 -= v7; /*0x55c3bf*/
        this->q004 = v8; /*0x55c3c4*/
        if ( v8 == 4 ) /*0x55c3c7*/
        {
          memcpy(this + 9, (const void *)*(this + 5), sizeof(int)); /*0x55c3d3*/
          this->q004 = 0; /*0x55c3db*/
        }
      }
      if ( v4 <= 0 ) /*0x55c3e4*/
        break; /*0x55c3e4*/
      v9 = *((unsigned __int16 *)this + 18) - this->q004; /*0x55c3f3*/
      if ( v4 < v9 ) /*0x55c3f7*/
        v9 = v4; /*0x55c3f9*/
      memcpy((void *)(*(this + 5) + this->q004), v3, v9); /*0x55c406*/
      v10 = v9 + this->q004; /*0x55c411*/
      v4 -= v9; /*0x55c413*/
      this->q004 = v10; /*0x55c415*/
      v11 = v10; /*0x55c418*/
      v3 += v9; /*0x55c41c*/
      v12 = *((unsigned __int16 *)this + 18); /*0x55c41e*/
      if ( v11 == (unsigned __int16)v12 ) /*0x55c424*/
      {
        v32 = (_BYTE *)*(this + 6); /*0x55c430*/
        v13 = (unsigned __int8 *)*(this + 5); /*0x55c431*/
        Size = 4; /*0x55c434*/
        DecodeBlockLCW(v13, v12, v32, &Size, 0); /*0x55c43c*/
        v14 = Delegate::Dispatch((Pipe *)this, *(this + 6), *((unsigned __int16 *)this + 19)); /*0x55c44e*/
        v15 = Src; /*0x55c453*/
        this->q004 = 0; /*0x55c457*/
        *((_WORD *)this + 18) = -1; /*0x55c460*/
        Src = v14 + v15; /*0x55c466*/
      }
      if ( v4 <= 0 ) /*0x55c46c*/
        return Src; /*0x55c47a*/
    }
  }
  else
  {
    v17 = this->q004; /*0x55c47d*/
    if ( v17 > 0 ) /*0x55c482*/
    {
      v18 = *(this + 7) - v17; /*0x55c48b*/
      if ( Size < v18 ) /*0x55c48f*/
        v18 = Size; /*0x55c491*/
      memcpy((void *)(*(this + 5) + this->q004), v3, v18); /*0x55c49e*/
      v19 = *(this + 7); /*0x55c4a6*/
      v20 = v18 + this->q004; /*0x55c4ae*/
      v3 += v18; /*0x55c4b0*/
      v4 -= v18; /*0x55c4b2*/
      this->q004 = v20; /*0x55c4b6*/
      if ( v20 == v19 ) /*0x55c4b9*/
      {
        Src = 4; /*0x55c4c0*/
        v21 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c4d3*/
        WriteCompressionBlock((_BYTE *)*(this + 5), *(this + 7), (_BYTE *)*(this + 6), &Src, (int)v21); /*0x55c4e2*/
        __3_YAXPAX_Z(v21); /*0x55c4e8*/
        v22 = Src; /*0x55c4ed*/
        *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x55c4fc*/
        *((_WORD *)this + 18) = v22; /*0x55c500*/
        v23 = Delegate::Dispatch((Pipe *)this, (int)(this + 9), 4); /*0x55c510*/
        v24 = Delegate::Dispatch((Pipe *)this, *(this + 6), Src); /*0x55c51a*/
        this->q004 = 0; /*0x55c521*/
        Src = v24 + v23; /*0x55c528*/
      }
    }
    if ( v4 >= *(this + 7) ) /*0x55c52f*/
    {
      do /*0x55c5aa*/
      {
        Size = 0; /*0x55c536*/
        v25 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c546*/
        WriteCompressionBlock(v3, *(this + 7), (_BYTE *)*(this + 6), &Size, (int)v25); /*0x55c557*/
        __3_YAXPAX_Z(v25); /*0x55c55d*/
        v26 = *(this + 7); /*0x55c562*/
        v27 = Size; /*0x55c565*/
        v3 += v26; /*0x55c56e*/
        v4 -= v26; /*0x55c570*/
        *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x55c578*/
        *((_WORD *)this + 18) = v27; /*0x55c57f*/
        v28 = Delegate::Dispatch((Pipe *)this, (int)(this + 9), 4); /*0x55c584*/
        v29 = v28 + Src; /*0x55c590*/
        v30 = Delegate::Dispatch((Pipe *)this, *(this + 6), Size) + v29; /*0x55c59f*/
        v31 = *(this + 7); /*0x55c5a1*/
        Src = v30; /*0x55c5a6*/
      }
      while ( v4 >= v31 ); /*0x55c5aa*/
    }
    if ( v4 > 0 ) /*0x55c5ae*/
    {
      memcpy((void *)*(this + 5), v3, v4); /*0x55c5b6*/
      this->q004 = v4; /*0x55c5be*/
    }
  }
  return Src; /*0x55c477*/
}



// ==== 0x0055C5E0  LZOPipe::AddRef  this=LZOPipe  sig=csp ====
int __thiscall LZOPipe_Destru::AddRef(LZOPipe *this)
{
  int v2; // edi
  _WORD *v3; // ebx
  int v4; // edi
  int v5; // edi
  void *v7; // edi
  __int16 v8; // dx
  int v9; // edi
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x55c5ec*/
  if ( *((int *)this + 4) > 0 ) /*0x55c5f0*/
  {
    if ( *((_DWORD *)this + 3) == 1 ) /*0x55c5fa*/
    {
      v3 = (_WORD *)this + 18; /*0x55c602*/
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x55c605*/
      {
        v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004); /*0x55c613*/
        this->q004 = 0; /*0x55c615*/
      }
      if ( *((int *)this + 4) > 0 ) /*0x55c61b*/
      {
        v4 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4) + v2; /*0x55c635*/
        v5 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004) + v4; /*0x55c63e*/
        this->q004 = 0; /*0x55c640*/
        *v3 = -1; /*0x55c643*/
        return v5 + GameClass::GetRelatedObject((Pipe *)this); /*0x55c654*/
      }
    }
    else
    {
      v10 = 0; /*0x55c65a*/
      v7 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c66c*/
      WriteCompressionBlock(*((_BYTE **)this + 5), this->q004, *((_BYTE **)this + 6), &v10, (int)v7); /*0x55c678*/
      __3_YAXPAX_Z(v7); /*0x55c67e*/
      v8 = v10; /*0x55c687*/
      *((_WORD *)this + 19) = *((_WORD *)this + 8); /*0x55c692*/
      *((_WORD *)this + 18) = v8; /*0x55c69b*/
      v9 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x55c6a7*/
      v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v10) + v9; /*0x55c6b5*/
      this->q004 = 0; /*0x55c6b7*/
    }
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x55c64f*/
}



// ==== 0x0055C6D0  LZOPipe::QueryInterface  this=LZOPipe  sig=csp ====
int *__thiscall LZOPipe_Destru::QueryInterface(LZOPipe *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x55c6d3*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c6d6*/
  __3_YAXPAX_Z(v3); /*0x55c6dd*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x55c6e2*/
  *((_DWORD *)this + 5) = 0; /*0x55c6e5*/
  __3_YAXPAX_Z(v4); /*0x55c6ed*/
  *((_DWORD *)this + 6) = 0; /*0x55c6f7*/
  Pipe::Dtor((Pipe *)this); /*0x55c6fe*/
  if ( (a2 & 1) != 0 ) /*0x55c708*/
    __3_YAXPAX_Z(this); /*0x55c70b*/
  return (int *)this->__pad_0; /*0x55c715*/
}



// ==== 0x0055C720  LZOStraw::Constructor  this=LZOStraw  sig=csp ====
_DWORD *__thiscall LZOStraw::Constructor(LZOStraw *this, int a2, int a3)
{
  *((_DWORD *)this + 7) = a3; /*0x55c72f*/
  *((_DWORD *)this + 8) = a3; /*0x55c732*/
  this->LZOStraw_field_0x04 = 0; /*0x55c737*/
  *((_DWORD *)this + 2) = 0; /*0x55c73b*/
  *((_DWORD *)this + 3) = a2; /*0x55c73e*/
  this->q004 = 0; /*0x55c741*/
  *((_DWORD *)this + 5) = 0; /*0x55c744*/
  *((_DWORD *)this + 6) = 0; /*0x55c747*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c74a*/
  *((_DWORD *)this + 5) = __2_YAPAXI_Z(2 * a3); /*0x55c75a*/
  if ( !a2 ) /*0x55c75d*/
    *((_DWORD *)this + 6) = __2_YAPAXI_Z(*((_DWORD *)this + 7) + *((_DWORD *)this + 8)); /*0x55c770*/
  return this->__pad_0; /*0x55c775*/
}



// ==== 0x0055C780  LZOStraw::Destructor  this=LZOStraw  sig=csp ====
int __thiscall LZOStraw::Destructor(LZOStraw *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x55c783*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c786*/
  __3_YAXPAX_Z(v2); /*0x55c78d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x55c792*/
  *((_DWORD *)this + 5) = 0; /*0x55c795*/
  __3_YAXPAX_Z(v3); /*0x55c79d*/
  *((_DWORD *)this + 6) = 0; /*0x55c7a7*/
  return Straw::Dtor((Straw *)this); /*0x55c7b3*/
}



// ==== 0x0055C7C0  LZOStraw::Decompress  this=LZOStraw  sig=csp ====
int __thiscall LCW::Decompress(LZOStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  signed int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  size_t v8; // ecx
  unsigned __int16 *v9; // ebx
  void *v10; // edi
  int v11; // eax
  int v12; // edx
  __int16 v13; // ax
  int v14; // eax
  _BYTE *v15; // ecx
  void *v16; // ebx
  unsigned __int16 v17; // dx
  _BYTE *v19; // [esp-10h] [ebp-24h]
  _BYTE *v20; // [esp-10h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h] BYREF

  v3 = a2; /*0x55c7c5*/
  v21 = 0; /*0x55c7ce*/
  if ( !a2 ) /*0x55c7d6*/
    return 0; /*0x55c7d6*/
  v5 = Size; /*0x55c7dc*/
  if ( Size < 1 ) /*0x55c7e3*/
    return 0; /*0x55c981*/
  while ( 1 ) /*0x55c7f8*/
  {
    v6 = this->q004; /*0x55c7f8*/
    if ( v6 > 0 ) /*0x55c7fd*/
    {
      v7 = v5; /*0x55c801*/
      if ( v5 >= v6 ) /*0x55c803*/
        v7 = this->q004; /*0x55c805*/
      if ( *((_DWORD *)this + 3) == 1 ) /*0x55c80e*/
        memcpy(v3, (const void *)(*((_DWORD *)this + 5) + *((unsigned __int16 *)this + 19) - v6), v7); /*0x55c81e*/
      else
        memcpy(v3, (const void *)(*((_DWORD *)this + 6) + *((unsigned __int16 *)this + 18) - v6 + 4), v7); /*0x55c832*/
      v3 += v7; /*0x55c841*/
      v5 -= v7; /*0x55c843*/
      v8 = this->q004 - v7; /*0x55c845*/
      Size = v5; /*0x55c849*/
      this->q004 = v8; /*0x55c84d*/
      v21 += v7; /*0x55c850*/
    }
    if ( !v5 ) /*0x55c856*/
      break; /*0x55c856*/
    if ( *((_DWORD *)this + 3) == 1 ) /*0x55c860*/
    {
      v9 = (unsigned __int16 *)this + 18; /*0x55c862*/
      if ( Delegate::Invoke((Straw *)this, (int)this + 36, 4) != 4 ) /*0x55c872*/
        return v21; /*0x55c872*/
      v10 = (void *)__2_YAPAXI_Z(*v9); /*0x55c88b*/
      v11 = Delegate::Invoke((Straw *)this, (int)v10, *v9); /*0x55c891*/
      v12 = *v9; /*0x55c898*/
      if ( v11 != v12 ) /*0x55c89d*/
      {
        if ( v10 ) /*0x55c966*/
          __3_YAXPAX_Z(v10); /*0x55c969*/
        return v21; /*0x55c969*/
      }
      v19 = (_BYTE *)*((_DWORD *)this + 5); /*0x55c8ad*/
      v22 = 4; /*0x55c8b0*/
      DecodeBlockLCW((unsigned __int8 *)v10, v12, v19, &v22, 0); /*0x55c8b8*/
      __3_YAXPAX_Z(v10); /*0x55c8be*/
      this->q004 = *((unsigned __int16 *)this + 19); /*0x55c8cc*/
    }
    else
    {
      v13 = Delegate::Invoke((Straw *)this, *((_DWORD *)this + 5), *((_DWORD *)this + 7)); /*0x55c8db*/
      *((_WORD *)this + 19) = v13; /*0x55c8e3*/
      if ( !v13 ) /*0x55c8e7*/
        return v21; /*0x55c8e7*/
      v14 = __2_YAPAXI_Z(0x10000u); /*0x55c8f2*/
      v15 = (_BYTE *)*((_DWORD *)this + 5); /*0x55c8f7*/
      v16 = (void *)v14; /*0x55c8fd*/
      v20 = (_BYTE *)(*((_DWORD *)this + 6) + 4); /*0x55c90d*/
      v17 = *((_WORD *)this + 19); /*0x55c90e*/
      a2 = 0; /*0x55c912*/
      WriteCompressionBlock(v15, v17, v20, (int *)&a2, v14); /*0x55c91a*/
      *((_WORD *)this + 18) = (_WORD)a2; /*0x55c928*/
      __3_YAXPAX_Z(v16); /*0x55c92b*/
      memcpy(*((void **)this + 6), (char *)this + 36, 4u); /*0x55c937*/
      this->q004 = *((unsigned __int16 *)this + 18) + 4; /*0x55c947*/
    }
    if ( Size <= 0 ) /*0x55c950*/
      return v21; /*0x55c961*/
    v5 = Size; /*0x55c7f4*/
  }
  return v21; /*0x55c95b*/
}



// ==== 0x0055C990  LZOStraw::QueryInterface  this=LZOStraw  sig=csp ====
int *__thiscall LZOStraw_Destru::QueryInterface(LZOStraw *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x55c993*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c996*/
  __3_YAXPAX_Z(v3); /*0x55c99d*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x55c9a2*/
  *((_DWORD *)this + 5) = 0; /*0x55c9a5*/
  __3_YAXPAX_Z(v4); /*0x55c9ad*/
  *((_DWORD *)this + 6) = 0; /*0x55c9b7*/
  Straw::Dtor((Straw *)this); /*0x55c9be*/
  if ( (a2 & 1) != 0 ) /*0x55c9c8*/
    __3_YAXPAX_Z(this); /*0x55c9cb*/
  return (int *)this->__pad_0; /*0x55c9d5*/
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
char ScreenCapture::Frame(ScreenCapture *this)
{
  int v1; // eax
  int v2; // eax
  LONG right; // ecx
  LONG bottom; // edx
  int v5; // eax
  int v6; // esi
  int v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int i; // esi
  struct tagPOINT v12; // [esp+10h] [ebp-E0h] BYREF
  LONG v13; // [esp+18h] [ebp-D8h]
  LONG v14; // [esp+1Ch] [ebp-D4h]
  struct tagPOINT Point; // [esp+20h] [ebp-D0h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-C8h] BYREF
  struct tagPOINT v17; // [esp+38h] [ebp-B8h] BYREF
  char Buffer[4]; // [esp+40h] [ebp-B0h] BYREF
  int v19; // [esp+44h] [ebp-ACh]
  LONG v20; // [esp+48h] [ebp-A8h]
  LONG v21; // [esp+4Ch] [ebp-A4h]
  XSurface v22[2]; // [esp+60h] [ebp-90h] BYREF
  CCFileClass v23; // [esp+84h] [ebp-6Ch] BYREF
  int v24[3]; // [esp+DCh] [ebp-14h] BYREF
  int v25; // [esp+E8h] [ebp-8h]

  LOBYTE(v1) = stru_A8EB00.?[381]; /*0x55cc20*/
  if ( stru_A8EB00.?[381] ) /*0x55cc33*/
  {
    if ( (g_MissionQueueFrame.waypoints[382] & 1) == 0 ) /*0x55cc40*/
    {
      g_MissionQueueFrame.waypoints[382] |= 1u; /*0x55cc44*/
      LOWORD(v2) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6000) * 900.0); /*0x55cc5a*/
      *(_DWORD *)&g_MissionQueueFrame.waypoints[430] = v2; /*0x55cc5f*/
    }
    if ( !*(_DWORD *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc6a*/
    {
      *(_DWORD *)&g_MissionQueueFrame.waypoints[482] = __2_YAPAXI_Z(4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc89*/
      memset(*(void **)&g_MissionQueueFrame.waypoints[482], 0, 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc8f*/
      if ( !*(_DWORD *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc9b*/
        stru_A8EB00.?[381] = 0; /*0x55cc9d*/
    }
    GetClientRect(g_hWnd, &Rect); /*0x55ccaf*/
    Point.x = Rect.left; /*0x55ccc7*/
    Point.y = Rect.top; /*0x55ccd3*/
    v1 = ClientToScreen(g_hWnd, &Point); /*0x55ccd7*/
    if ( v1 ) /*0x55ccdb*/
    {
      v17 = *(struct tagPOINT *)&Rect.right; /*0x55cce9*/
      v1 = ClientToScreen(g_hWnd, &v17); /*0x55ccfc*/
      if ( v1 ) /*0x55cd00*/
      {
        right = Rect.right; /*0x55cd13*/
        bottom = Rect.bottom; /*0x55cd17*/
        v12 = Point; /*0x55cd23*/
        v13 = Rect.right; /*0x55cd2b*/
        v14 = Rect.bottom; /*0x55cd2f*/
        if ( *(_DWORD *)&stru_87F5F0.__pad_58[420] ) /*0x55cd33*/
        {
          if ( *(int *)&stru_87F5F0.__pad_58[420] <= 0 ) /*0x55cd3d*/
          {
            if ( *(int *)&stru_87F5F0.__pad_58[420] >= 0 ) /*0x55cd49*/
              goto LABEL_17; /*0x55cd49*/
            right = *(_DWORD *)&stru_87F5F0.__pad_58[420] + Rect.right; /*0x55cd4b*/
          }
          else
          {
            right = Rect.right - *(_DWORD *)&stru_87F5F0.__pad_58[420]; /*0x55cd41*/
            v12.x = *(_DWORD *)&stru_87F5F0.__pad_58[420] + Point.x; /*0x55cd43*/
          }
          v13 = right; /*0x55cd4d*/
        }
        else if ( !*(_DWORD *)&stru_87F5F0.__pad_58[424] ) /*0x55cd37*/
        {
          goto LABEL_22; /*0x55cd37*/
        }
LABEL_17:
        if ( *(int *)&stru_87F5F0.__pad_58[424] <= 0 ) /*0x55cd53*/
        {
          if ( *(int *)&stru_87F5F0.__pad_58[424] >= 0 ) /*0x55cd60*/
            goto LABEL_22; /*0x55cd60*/
          bottom = *(_DWORD *)&stru_87F5F0.__pad_58[424] + Rect.bottom; /*0x55cd62*/
        }
        else
        {
          bottom = Rect.bottom - *(_DWORD *)&stru_87F5F0.__pad_58[424]; /*0x55cd58*/
          v12.y = *(_DWORD *)&stru_87F5F0.__pad_58[424] + Point.y; /*0x55cd5a*/
        }
        v14 = bottom; /*0x55cd64*/
LABEL_22:
        v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55cd68*/
        if ( *(int *)&g_MissionQueueFrame.waypoints[486] >= *(int *)&g_MissionQueueFrame.waypoints[430] ) /*0x55cd75*/
        {
          stru_A8EB00.?[381] = 0; /*0x55ce3e*/
          DSurface::Construct(v22[0].Surface, right, bottom, 0, 0); /*0x55ce44*/
          for ( i = 0; i < *(int *)&g_MissionQueueFrame.waypoints[486]; ++i ) /*0x55ce52*/
          {
            sprintf(Buffer, "cap%04d.pcx", i); /*0x55ce6d*/
            CCFileClass::Construct(&v23, Buffer); /*0x55ce81*/
            XSurface::BlitWhole(v22, *(int **)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] + 4 * i), 0, 1); /*0x55ce97*/
            CompressScreenshot((int *)v23.CDFileClass, (int *)v22[0].Surface, &FileSystem_TEMPERAT_PAL); /*0x55ceac*/
            *(_DWORD *)v23.CDFileClass = &CCFileClass::`vftable'; /*0x55ceb8*/
            v25 = 0; /*0x55cebf*/
            Vector::Clear((int)v24); /*0x55cec6*/
            *(_DWORD *)v23.CDFileClass = &off_7E1668; /*0x55ced2*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x55ced9*/
          }
          *(_DWORD *)&g_MissionQueueFrame.waypoints[486] = 0; /*0x55cef0*/
          LOBYTE(v1) = DSurface::Destroy((DSurface *)v22); /*0x55cef6*/
        }
        else
        {
          v6 = *(_DWORD *)&g_MissionQueueFrame.waypoints[482]; /*0x55cd7b*/
          if ( *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] /*0x55cd81*/
                         + 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) )
            goto LABEL_28; /*0x55cd81*/
          v7 = __2_YAPAXI_Z(0x20u); /*0x55cd8d*/
          if ( v7 ) /*0x55cd94*/
          {
            v8 = v13; /*0x55cd96*/
            v9 = v14; /*0x55cd9a*/
            *(_DWORD *)(v7 + 4) = v13; /*0x55cd9e*/
            *(_DWORD *)(v7 + 8) = v9; /*0x55cda6*/
            *(_DWORD *)(v7 + 12) = 0; /*0x55cdae*/
            *(_DWORD *)v7 = &XSurface_Vtable; /*0x55cdb1*/
            *(_DWORD *)(v7 + 16) = 2; /*0x55cdb7*/
            Buffer::Init((Buffer *)(v7 + 20), 0, 2 * v9 * v8); /*0x55cdbe*/
            *(_DWORD *)v7 = &BSurface_Vtable; /*0x55cdc3*/
          }
          else
          {
            v7 = 0; /*0x55cdcb*/
          }
          *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] + 4 /*0x55cdd9*/
                                                                     * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) = v7;
          v6 = *(_DWORD *)&g_MissionQueueFrame.waypoints[482]; /*0x55cddc*/
          v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55cde2*/
          bottom = v14; /*0x55cde7*/
          right = v13; /*0x55cdeb*/
          if ( *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] /*0x55cdef*/
                         + 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) )
          {
LABEL_28:
            v21 = bottom; /*0x55cdf4*/
            *(_DWORD *)Buffer = 0; /*0x55ce06*/
            v19 = 0; /*0x55ce0a*/
            v20 = right; /*0x55ce0e*/
            (*(void (__thiscall **)(_DWORD, char *, DSurface *, struct tagPOINT *, _DWORD, int))(**(_DWORD **)(v6 + 4 * v5) /*0x55ce1d*/
                                                                                               + 8))(
              *(_DWORD *)(v6 + 4 * v5),
              Buffer,
              g_DSurface_Primary,
              &v12,
              0,
              1);
            v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55ce20*/
          }
          v1 = v5 + 1; /*0x55ce26*/
          *(_DWORD *)&g_MissionQueueFrame.waypoints[486] = v1; /*0x55ce29*/
        }
      }
    }
  }
  return v1; /*0x55ce25*/
}



// ==== 0x0055CF10  ObjectClass::Map_Get_55CF10  this=ObjectClass  sig=csp ====
char Map_Get_55CF10(ObjectClass *this)
{
  char result; // al
  int v2; // esi
  int v3; // eax
  Network *Ticks; // [esp+0h] [ebp-Ch]

  Debug::Log(); /*0x55cf18*/
  result = (char)dword_A8B238; /*0x55cf1d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55cf28*/
  {
    result = stru_887598.isAliveFlag; /*0x55cf2e*/
    if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x55cf35*/
    {
      result = byte_A8DBA0; /*0x55cf3b*/
      if ( byte_A8DBA0 ) /*0x55cf42*/
      {
        if ( dword_A8EA0C ) /*0x55cf4c*/
        {
          NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&stru_B052C0.__pad_0[16]); /*0x55cf53*/
          v2 = 480; /*0x55cf61*/
          Ticks = (Network *)Timer::GetTicks(); /*0x55cf66*/
          while ( 1 ) /*0x55cf74*/
          {
            if ( Ticks != (Network *)-1 ) /*0x55cf79*/
            {
              v3 = Timer::GetTicks() - (_DWORD)Ticks; /*0x55cf84*/
              if ( v3 >= 480 ) /*0x55cf8a*/
                break; /*0x55cf8a*/
              v2 = 480 - v3; /*0x55cf8c*/
            }
            if ( !v2 ) /*0x55cf90*/
              break; /*0x55cf90*/
            Event::Dispatch(); /*0x55cf92*/
            if ( Process::WaitForExit((Process *)&stru_B052C0.__pad_0[16], 0xAu, 0) ) /*0x55cfa0*/
              break; /*0x55cfa0*/
            v2 = 480; /*0x55cf70*/
          }
        }
        if ( !dword_A8B23C ) /*0x55cfb2*/
          return Network::SendUnreachable(Ticks); /*0x55cfb2*/
        result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C); /*0x55cfb6*/
        if ( !result ) /*0x55cfbb*/
          return Network::SendUnreachable(Ticks); /*0x55cfbd*/
      }
    }
  }
  return result; /*0x55cfc2*/
}



// ==== 0x0055CFD0  ObjectClass::GameFrameCheck  this=ObjectClass  sig=csp ====
BOOL GameFrameCheck(ObjectClass *this)
{
  char *v1; // eax
  int v2; // eax
  int v3; // edx
  Tooltip *v4; // ecx
  int v5; // esi
  int v6; // eax
  Scenario *v8; // [esp+0h] [ebp-84h]
  Scenario *v9; // [esp+0h] [ebp-84h]
  Network *v10; // [esp+0h] [ebp-84h]
  int Ticks; // [esp+8h] [ebp-7Ch]
  char v12[112]; // [esp+14h] [ebp-70h] BYREF

  if ( ((unsigned __int16)dword_A8ED84 & 0x3FF) == 0 && !CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    v1 = EventClass::AddEvent(v12, dword_A83D4C->Object_field_0x30, 8u); /*0x55cff9*/
    if ( *(int *)&dword_A802C8 < 128 ) /*0x55d008*/
    {
      qmemcpy(&byte_A802D4[111 * dword_A802D0], v1, 0x6Fu); /*0x55d025*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x55d037*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x55d04e*/
      ++*(_DWORD *)&dword_A802C8; /*0x55d054*/
    }
  }
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55d07a*/
  {
    ++dword_A8DAB4; /*0x55d080*/
    v2 = Scenario::ClearScreen(v8); /*0x55d086*/
    LOBYTE(v2) = byte_A83D49; /*0x55d08b*/
    if ( byte_A83D49 || byte_A8ECD0 ) /*0x55d09a*/
    {
      if ( dword_887368 ) /*0x55d0a8*/
      {
        v2 = Tooltip::Enable(dword_887368, 0); /*0x55d0ab*/
        LOBYTE(v2) = byte_A83D49; /*0x55d0b0*/
      }
      if ( (_BYTE)v2 || byte_A8ECD0 ) /*0x55d0bf*/
      {
        v3 = *(_DWORD *)&dword_A8B238; /*0x55d0cb*/
        if ( dword_A8B23C && (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) ) /*0x55d0dd*/
        {
          (*(void (__stdcall **)(int))(dword_A8B23C->ptr_0 + 160))(v2); /*0x55d0e2*/
          LOBYTE(v2) = byte_A83D49; /*0x55d0e8*/
          v3 = *(_DWORD *)&dword_A8B238; /*0x55d0ed*/
        }
        if ( (_BYTE)v2 ) /*0x55d0f5*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d106*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d10e*/
              byte_A8B8C1 = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
            ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x55d11e*/
          }
          byte_A8ECD0 = 0; /*0x55d123*/
          byte_A83D49 = 0; /*0x55d129*/
          byte_8B41C0 = 0; /*0x55d12f*/
          byte_A83D48 = 0; /*0x55d135*/
          InitLoadingScreenResources(); /*0x55d13b*/
          WTFMode::Shutdown(&dword_A8B238); /*0x55d145*/
          Scenario::EndGameFlow(v9); /*0x55d14a*/
          WTFMode::Init(&dword_A8B238); /*0x55d154*/
          v4 = dword_887368; /*0x55d159*/
          byte_ABCD58 = 0; /*0x55d15f*/
          if ( !dword_887368 ) /*0x55d167*/
            goto LABEL_52; /*0x55d167*/
          goto LABEL_26; /*0x55d167*/
        }
        if ( byte_A8ECD0 ) /*0x55d183*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d194*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d19c*/
              byte_A8B8C1 = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
            ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x55d1ac*/
          }
          byte_A83D49 = 0; /*0x55d1b1*/
          byte_A8ECD0 = 0; /*0x55d1b7*/
          byte_8B41C0 = 0; /*0x55d1bd*/
          byte_A83D48 = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown(&dword_A8B238); /*0x55d1d3*/
          Scenario::EndGame(v9); /*0x55d1d8*/
          WTFMode::Init(&dword_A8B238); /*0x55d1e2*/
          v4 = dword_887368; /*0x55d1e7*/
          byte_ABCD58 = 0; /*0x55d1ed*/
          if ( !dword_887368 ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
LABEL_26:
          Tooltip::Enable(v4, byte_A8EB80); /*0x55d16d*/
LABEL_52:
          --dword_A8DAB4; /*0x55d341*/
          return byte_A8E9A0 == 0; /*0x55d341*/
        }
      }
    }
    if ( byte_8B41C0 ) /*0x55d212*/
    {
      byte_A83D49 = 0; /*0x55d219*/
      byte_A8ECD0 = 0; /*0x55d21f*/
      byte_8B41C0 = 0; /*0x55d225*/
      byte_A83D48 = 0; /*0x55d22b*/
      WTFMode::Shutdown(&dword_A8B238); /*0x55d231*/
      ((void (__stdcall *)())GameFrameCheck_Check)(); /*0x55d236*/
      WTFMode::Init(&dword_A8B238); /*0x55d240*/
      byte_ABCD58 = 0; /*0x55d245*/
    }
    else if ( byte_A83D48 ) /*0x55d256*/
    {
      byte_A83D49 = 0; /*0x55d25c*/
      byte_A8ECD0 = 0; /*0x55d262*/
      byte_8B41C0 = 0; /*0x55d268*/
      byte_A83D48 = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown(&dword_A8B238); /*0x55d27e*/
      GameFrameCheck_Check_686570((ObjectClass *)v9); /*0x55d283*/
      WTFMode::Init(&dword_A8B238); /*0x55d28d*/
      byte_ABCD58 = 0; /*0x55d292*/
      Debug::Log(); /*0x55d29d*/
      if ( *(_DWORD *)&dword_A8B238 == 4 && dword_887628 && byte_A8DBA0 ) /*0x55d2c5*/
      {
        if ( dword_A8EA0C ) /*0x55d2cd*/
        {
          NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&unk_B052D0); /*0x55d2d4*/
          v5 = 480; /*0x55d2e2*/
          Ticks = Timer::GetTicks(); /*0x55d2e7*/
          while ( 1 ) /*0x55d2f5*/
          {
            if ( Ticks != -1 ) /*0x55d2fa*/
            {
              v6 = Timer::GetTicks() - Ticks; /*0x55d305*/
              if ( v6 >= 480 ) /*0x55d30b*/
                break; /*0x55d30b*/
              v5 = 480 - v6; /*0x55d30d*/
            }
            if ( !v5 ) /*0x55d311*/
              break; /*0x55d311*/
            Event::Dispatch(); /*0x55d313*/
            if ( Process::WaitForExit((Process *)&unk_B052D0, 0xAu, 0) ) /*0x55d320*/
              break; /*0x55d320*/
            v5 = 480; /*0x55d2f1*/
          }
        }
        if ( !dword_A8B23C /*0x55d335*/
          || !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 8))(dword_A8B23C) )
        {
          Network::SendUnreachable(v10); /*0x55d33c*/
        }
      }
    }
    goto LABEL_52; /*0x55d24b*/
  }
  return byte_A8E9A0 == 0; /*0x55d351*/
}



// ==== 0x0055D360  ObjectClass::GameFrameLoop  this=ObjectClass  sig=csp ====
int GameFrameLoop(ObjectClass *this)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // esi
  wchar_t *v5; // esi
  signed int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int *v10; // edi
  int v11; // esi
  signed int v12; // eax
  int v13; // esi
  signed int v14; // eax
  int v15; // esi
  signed int v16; // eax
  DWORD v17; // esi
  int referenceCount; // esi
  int *p_abstractFlags; // edi
  int v20; // eax
  char v21; // cl
  int *v22; // eax
  int v23; // esi
  _BYTE *WaypointCoords; // eax
  unsigned __int8 v25; // cl
  int v26; // ecx
  int i; // esi
  _BYTE *v28; // eax
  unsigned __int8 v29; // cl
  int v30; // ecx
  int v31; // esi
  _BYTE *v32; // eax
  unsigned __int8 v33; // cl
  int v34; // ecx
  int v35; // esi
  int Object; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed int v41; // eax
  char *v42; // edx
  ObjectClass *v43; // [esp+0h] [ebp-1C4h]
  ObjectClass *v44; // [esp+0h] [ebp-1C4h]
  ObjectClass *v45; // [esp+0h] [ebp-1C4h]
  ObjectClass *v46; // [esp+0h] [ebp-1C4h]
  ObjectClass *v47; // [esp+0h] [ebp-1C4h]
  TechnoClass *v48; // [esp+0h] [ebp-1C4h]
  DWORD Time; // [esp+10h] [ebp-1B4h] BYREF
  Timer v50; // [esp+14h] [ebp-1B0h] BYREF
  char v51; // [esp+150h] [ebp-74h]
  wchar_t Buffer[56]; // [esp+154h] [ebp-70h] BYREF

  if ( !byte_A8E9A0 ) /*0x55d371*/
    goto LABEL_155; /*0x55d371*/
  byte_ABCD58 = 1; /*0x55d37c*/
  if ( !byte_A8ED80 ) /*0x55d385*/
  {
    while ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x55d399*/
    {
      Sleep(0x1F4u); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( byte_A8ED80 ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    Sleep(0xAu); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
LABEL_8:
  if ( (int)dword_A8ED84 >= dword_A8E2E4 ) /*0x55d3c8*/
    nullsub_35(v43); /*0x55d3cf*/
  dword_A8B55C = timeGetTime(); /*0x55d3da*/
  if ( dword_A8E308 ) /*0x55d3e6*/
    byte_A8ED72 = 1; /*0x55d3e8*/
  if ( byte_A8E378 == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    v2 = dword_A83D14; /*0x55d401*/
    if ( dword_A83D14 == -1 ) /*0x55d409*/
      v2 = dword_A83D18; /*0x55d40b*/
    if ( byte_A8EBA5 ) /*0x55d418*/
    {
      if ( v2 == -1 ) /*0x55d41d*/
        Theme::QueueSong((int)&unk_A83D10, -2); /*0x55d421*/
    }
    else if ( v2 != -3 ) /*0x55d426*/
    {
      Theme::Stop((Theme *)&unk_A83D10, 1); /*0x55d42f*/
      Theme::QueueSong((int)&unk_A83D10, -3); /*0x55d43b*/
    }
  }
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x55d447*/
  {
    if ( !byte_A8EDDC ) /*0x55d76e*/
    {
      dword_A8EB60 = (AudioOptionsClass)2; /*0x55d774*/
      dword_887348 = Timer::GetTicks(); /*0x55d783*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d791*/
      dword_887350 = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
LABEL_61:
    v17 = (DWORD)dword_A8EB60; /*0x55d79e*/
    dword_887348 = Timer::GetTicks(); /*0x55d7b1*/
    dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d7b6*/
    dword_887350 = v17; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 5 || dword_A8B24C != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x55d46a*/
  {
    dword_887348 = Timer::GetTicks(); /*0x55d47b*/
    dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d480*/
    dword_887350 = 0; /*0x55d486*/
  }
  else
  {
    if ( dword_A8B558 ) /*0x55d499*/
    {
      v3 = 60 / (int)dword_A8B558; /*0x55d507*/
      dword_887348 = Timer::GetTicks(); /*0x55d50e*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d517*/
      dword_887350 = v3; /*0x55d528*/
      v4 = 1000 / (int)dword_A8B558; /*0x55d532*/
      Time = timeGetTime(); /*0x55d53d*/
      Timer::EnableHighPrecision(&v50); /*0x55d541*/
      g_TacticalState = Time; /*0x55d54e*/
      *(_DWORD *)&v50.m_2[2] = v4; /*0x55d554*/
      *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d558*/
      dword_887330 = v4; /*0x55d55e*/
    }
    else
    {
      dword_887348 = Timer::GetTicks(); /*0x55d4a9*/
      dword_887350 = 2; /*0x55d4b2*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d4bc*/
      Time = timeGetTime(); /*0x55d4ca*/
      Timer::EnableHighPrecision(&v50); /*0x55d4ce*/
      g_TacticalState = Time; /*0x55d4e0*/
      *(_DWORD *)&v50.m_2[2] = 33; /*0x55d4e6*/
      *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d4ea*/
      dword_887330 = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(); /*0x55d568*/
    v5 = (wchar_t *)dword_887330; /*0x55d572*/
    if ( g_TacticalState != -1 ) /*0x55d57b*/
    {
      v6 = timeGetTime() - g_TacticalState; /*0x55d587*/
      if ( v6 >= (int)v5 ) /*0x55d58f*/
        v5 = 0; /*0x55d595*/
      else
        v5 = (wchar_t *)((char *)v5 - v6); /*0x55d591*/
    }
    v7 = (int)dword_A8B550; /*0x55d59c*/
    v8 = 0; /*0x55d5a2*/
    dword_ABCE04 = v5; /*0x55d5a7*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55d5ad*/
    {
      if ( (int)dword_A8B550 <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      v9 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount(&unk_A8E9C0) > 0 ) /*0x55d5ca*/
      {
        v10 = dword_A8DB7C; /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( v8 <= *v10 ) /*0x55d5d9*/
            v8 = *v10; /*0x55d5db*/
          ++v9; /*0x55d5e2*/
          ++v10; /*0x55d5e3*/
        }
        while ( v9 < Network::GetSendCount(&unk_A8E9C0) ); /*0x55d5ed*/
        if ( v8 ) /*0x55d5f1*/
        {
          if ( v8 >= v7 / 4 ) /*0x55d604*/
          {
            v11 = dword_887330; /*0x55d60b*/
            if ( g_TacticalState != -1 ) /*0x55d616*/
            {
              v12 = timeGetTime() - g_TacticalState; /*0x55d622*/
              if ( v12 >= v11 ) /*0x55d62a*/
                v11 = 0; /*0x55d630*/
              else
                v11 -= v12; /*0x55d62c*/
            }
            Time = timeGetTime(); /*0x55d63f*/
            Timer::EnableHighPrecision(&v50); /*0x55d643*/
            g_TacticalState = Time; /*0x55d653*/
            *(_DWORD *)&v50.m_2[2] = v11 + 10; /*0x55d65d*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d661*/
            dword_887330 = v11 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(); /*0x55d66c*/
          }
          if ( v8 >= v7 / 2 ) /*0x55d67f*/
          {
            v13 = dword_887330; /*0x55d686*/
            if ( g_TacticalState != -1 ) /*0x55d68e*/
            {
              v14 = timeGetTime() - g_TacticalState; /*0x55d69a*/
              if ( v14 >= v13 ) /*0x55d6a2*/
                v13 = 0; /*0x55d6a8*/
              else
                v13 -= v14; /*0x55d6a4*/
            }
            Time = timeGetTime(); /*0x55d6b7*/
            Timer::EnableHighPrecision(&v50); /*0x55d6bb*/
            g_TacticalState = Time; /*0x55d6cb*/
            *(_DWORD *)&v50.m_2[2] = v13 + 10; /*0x55d6d5*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d6d9*/
            dword_887330 = v13 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(); /*0x55d6e4*/
          }
          if ( v8 >= 3 * v7 / 4 ) /*0x55d6f7*/
          {
            v15 = dword_887330; /*0x55d702*/
            if ( g_TacticalState != -1 ) /*0x55d70a*/
            {
              v16 = timeGetTime() - g_TacticalState; /*0x55d716*/
              if ( v16 >= v15 ) /*0x55d71e*/
                v15 = 0; /*0x55d724*/
              else
                v15 -= v16; /*0x55d720*/
            }
            Time = timeGetTime(); /*0x55d733*/
            Timer::EnableHighPrecision(&v50); /*0x55d737*/
            g_TacticalState = Time; /*0x55d747*/
            *(_DWORD *)&v50.m_2[2] = v15 + 10; /*0x55d751*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d755*/
            dword_887330 = v15 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(); /*0x55d760*/
          }
        }
      }
    }
  }
LABEL_62:
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( LOBYTE(dword_A8B230[44].ptr_0) ) /*0x55d7da*/
  {
    referenceCount = dword_A8B230[43].referenceCount; /*0x55d7ea*/
    if ( dword_A8B230[43].abstractFlags != -1 ) /*0x55d7f9*/
    {
      p_abstractFlags = &dword_A8B230[43].abstractFlags; /*0x55d7f0*/
      v20 = Timer::GetTicks() - *p_abstractFlags; /*0x55d803*/
      if ( v20 >= referenceCount ) /*0x55d807*/
      {
LABEL_69:
        LOBYTE(dword_A8B230[44].ptr_0) = 0; /*0x55d80f*/
        ScenarioClass::ProcessIntroTimer((ScenarioClass *)v43); /*0x55d81c*/
        goto LABEL_70; /*0x55d81c*/
      }
      referenceCount -= v20; /*0x55d809*/
    }
    if ( referenceCount > 0 ) /*0x55d80d*/
      goto LABEL_70; /*0x55d80d*/
    goto LABEL_69; /*0x55d80d*/
  }
LABEL_70:
  if ( dword_A8B230[43].NeedsSaveOrLink ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55d847*/
    TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55d84f*/
    SyncDelay::Start((SyncDelay *)v43); /*0x55d854*/
    byte_ABCD58 = 0; /*0x55d866*/
    return byte_A8E9A0 == 0; /*0x55d877*/
  }
LABEL_72:
  v21 = dword_A8D5F8; /*0x55d878*/
  if ( (dword_A8D5F8 & 2) == 0 && !dword_A8EDA0 && byte_A8ED80 ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable( /*0x55d8ab*/
      (GScreenClass *)&dword_87F7E8,
      &v50.__pad_1C[8],
      &v50.__pad_1C[16],
      &v50.__pad_1C[12]);
    SyncDelayClass::ProcessNetworkSync((SyncDelayClass *)&v50.__pad_1C[8]); /*0x55d8b4*/
    if ( byte_A8B8B4 ) /*0x55d8c0*/
      DrawHUD(v43); /*0x55d8c4*/
    if ( ((unsigned __int8)dword_A8ED84 & 7) == 7 && *(_DWORD *)&dword_A8B238 == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&unk_A8E9C0); /*0x55d8e3*/
    MarkAllFootOccupancies(v43); /*0x55d8e8*/
    TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55d8f2*/
    v21 = dword_A8D5F8; /*0x55d8f7*/
  }
  byte_A8ED9D = 0; /*0x55d903*/
  if ( (v21 & 1) != 0 || (v21 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v21 & 1) != 0 ) /*0x55d91a*/
    {
      v22 = RequestMapSnapshot((ObjectClass *)g_TacticalClass_Instance, &v50.__pad_1C[20]); /*0x55d92b*/
      Time = *v22; /*0x55d936*/
      *(_DWORD *)v50.__pad_0 = v22[1]; /*0x55d945*/
      FileClass::Write(&dword_A8D58C, &Time, 8u); /*0x55d949*/
      *(_DWORD *)&v50.__pad_6[2] = dword_A8ECC8; /*0x55d960*/
      FileClass::Write(&dword_A8D58C, &v50.__pad_6[2], 4u); /*0x55d964*/
      v23 = 0; /*0x55d969*/
      for ( *(_DWORD *)&v50.__pad_6[6] = 0; v23 < *(int *)&v50.__pad_6[2]; *(_DWORD *)&v50.__pad_6[6] += v26 ) /*0x55d973*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords( /*0x55d983*/
                           (ScriptAction *)&v50.__pad_6[14],
                           *((_DWORD **)dword_A8ECBC + v23));
        v25 = WaypointCoords[4]; /*0x55d988*/
        if ( v25 ) /*0x55d98d*/
          v26 = *(_DWORD *)WaypointCoords & 0xFFFFFF | (v25 << 24); /*0x55d9a4*/
        else
          v26 = -1; /*0x55d98f*/
        ++v23; /*0x55d9b0*/
      }
      FileClass::Write(&dword_A8D58C, &v50.__pad_6[6], 4u); /*0x55d9c5*/
      for ( i = 0; i < *(int *)&v50.__pad_6[2]; ++i ) /*0x55d9d0*/
      {
        v28 = ScriptAction::GetWaypointCoords((ScriptAction *)&v50.__pad_6[14], *((_DWORD **)dword_A8ECBC + i)); /*0x55d9e0*/
        v29 = v28[4]; /*0x55d9e5*/
        if ( v29 ) /*0x55d9ea*/
          v30 = *(_DWORD *)v28 & 0xFFFFFF | (v29 << 24); /*0x55da02*/
        else
          v30 = -1; /*0x55d9ec*/
        *(_DWORD *)v50.__pad_1C = v30; /*0x55da08*/
        FileClass::Write(&dword_A8D58C, v50.__pad_1C, 4u); /*0x55da14*/
      }
      FileClass::Write(&dword_A8D58C, &dword_ABCDFC, 4u); /*0x55da2c*/
      FileClass::Write(&dword_A8D58C, &dword_ABCE00, 4u); /*0x55da3d*/
      v21 = dword_A8D5F8; /*0x55da42*/
      dword_ABCDFC = 0; /*0x55da48*/
      dword_ABCE00 = 0; /*0x55da4e*/
    }
    if ( (v21 & 2) != 0 ) /*0x55da57*/
    {
      if ( CCFileClass::Read(&dword_A8D58C, &Time, 8) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition((TacticalClass *)g_TacticalClass_Instance, (int *)&Time); /*0x55da7e*/
      if ( CCFileClass::Read(&dword_A8D58C, &v50.__pad_6[2], 4) == 4 ) /*0x55da97*/
      {
        v31 = 0; /*0x55daa2*/
        for ( *(_DWORD *)&v50.__pad_6[6] = 0; v31 < (int)dword_A8ECC8; *(_DWORD *)&v50.__pad_6[6] += v34 ) /*0x55daaa*/
        {
          v32 = ScriptAction::GetWaypointCoords((ScriptAction *)&v50.__pad_6[14], *((_DWORD **)dword_A8ECBC + v31)); /*0x55daba*/
          v33 = v32[4]; /*0x55dabf*/
          if ( v33 ) /*0x55dac4*/
            v34 = *(_DWORD *)v32 & 0xFFFFFF | (v33 << 24); /*0x55dadb*/
          else
            v34 = -1; /*0x55dac6*/
          ++v31; /*0x55dae8*/
        }
        CCFileClass::Read(&dword_A8D58C, &v50.__pad_1C[4], 4); /*0x55dafd*/
        if ( *(_DWORD *)&v50.__pad_1C[4] != *(_DWORD *)&v50.__pad_6[6] ) /*0x55db0c*/
          MapClass::UnselectAll_ClearLimboLaunchers((MapClass *)v43); /*0x55db0e*/
        v35 = 0; /*0x55db17*/
        for ( g_MoveFeedback = 1; v35 < *(int *)&v50.__pad_6[2]; ++v35 ) /*0x55db22*/
        {
          if ( CCFileClass::Read(&dword_A8D58C, v50.__pad_1C, 4) == 4 ) /*0x55db38*/
          {
            LOBYTE(v50.m_18) = 0; /*0x55db48*/
            CheckNetworkSync((ObjectClass *)&v50.__pad_6[14], (int)&v50.__pad_1C[20], *(int *)v50.__pad_1C); /*0x55db4d*/
            Object = BuildingLoadQueue::FindObject((BuildingLoadQueue *)&v50.__pad_6[14]); /*0x55db56*/
            if ( Object ) /*0x55db5d*/
            {
              if ( *(_DWORD *)&v50.__pad_1C[4] != *(_DWORD *)&v50.__pad_6[6] ) /*0x55db69*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)Object + 332))(Object); /*0x55db6f*/
                g_MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        g_MoveFeedback = 1; /*0x55db85*/
      }
      CCFileClass::Read(&dword_A8D58C, &dword_ABCDFC, 4); /*0x55db98*/
      CCFileClass::Read(&dword_A8D58C, &dword_ABCE00, 4); /*0x55dba9*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x55dbb4*/
      TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&stru_8A0390); /*0x55dbc8*/
  if ( !*(_DWORD *)&dword_A8B238 && !byte_ABCE08 ) /*0x55dbe0*/
  {
    byte_ABCE08 = 1; /*0x55dbee*/
    strcpy(&v50.__pad_1C[28], (const char *)&dword_A8B230[130].abstractFlags); /*0x55dc12*/
    v51 = 0; /*0x55dc1f*/
    v37 = strrchr(&v50.__pad_1C[28], 46); /*0x55dc28*/
    if ( v37 ) /*0x55dc32*/
      *v37 = 0; /*0x55dc34*/
    strcat(&v50.__pad_1C[28], aSav); /*0x55dc5c*/
    swprintf(Buffer, (const size_t)aS, (const wchar_t *const)&dword_A8B230[141].ptr_4 + 1); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName(&v50.__pad_1C[28], Buffer, 0); /*0x55dc92*/
  }
  Scenario::Update((Scenario *)&dword_87F778); /*0x55dc9e*/
  *(_DWORD *)&v50.__pad_6[10] = dword_82A030; /*0x55dcb5*/
  if ( (unsigned __int8)Mouse::IsButtonDown(dword_A8EC08) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC0C) ) /*0x55dcce*/
  {
    LOWORD(v39) = Math::RoundToInt((double)*(int *)&v50.__pad_6[10] * flt_82A034); /*0x55dd21*/
LABEL_127:
    *(_DWORD *)&v50.__pad_6[10] = v39; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(dword_A8EC00) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC04) ) /*0x55dcf8*/
  {
    v38 = dword_87F8DC; /*0x55dd01*/
    if ( dword_87F8DC <= dword_87F8E0 ) /*0x55dd0e*/
      v38 = dword_87F8E0; /*0x55dd10*/
    v39 = v38 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
LABEL_128:
  if ( (dword_ABCE14 & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible((DisplayClass *)6, &v50.__pad_6[10], 1); /*0x55dd42*/
  if ( (dword_ABCE14 & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible((DisplayClass *)2, &v50.__pad_6[10], 1); /*0x55dd5f*/
  if ( (dword_ABCE14 & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible(0, &v50.__pad_6[10], 1); /*0x55dd7a*/
  if ( (dword_ABCE14 & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible((DisplayClass *)4, &v50.__pad_6[10], 1); /*0x55dd96*/
  FlushPlanningQueue(v43); /*0x55dd9b*/
  SyncFrameCounter((char *)&unk_A8BC60); /*0x55dda5*/
  if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x55ddb7*/
  {
    if ( dword_A8B23C ) /*0x55ddc1*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C) ) /*0x55ddc5*/
      {
        v40 = *(_DWORD *)((dword_87F8DC << 11) + dword_87F924 + 10268); /*0x55dde1*/
        if ( v40 ) /*0x55dde5*/
        {
          if ( *(_DWORD *)(v40 + 304) != 1 || (*(_BYTE *)(v40 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v41 = timeGetTime() - dword_A8B55C; /*0x55de13*/
  if ( v41 > 1000 ) /*0x55de1e*/
    v41 = 1000; /*0x55de20*/
  *(_DWORD *)dword_A8B560 += v41; /*0x55de34*/
  ++dword_A8B564; /*0x55de3a*/
  ProcessNetworkEvents(v44); /*0x55de40*/
  FlushPlanningQueue(v45); /*0x55de45*/
  result = Event::Dispatch(); /*0x55de4a*/
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55de71*/
  {
    byte_ABCD58 = 0; /*0x55dec8*/
LABEL_155:
    LOBYTE(result) = 1; /*0x55decf*/
    return result; /*0x55ded2*/
  }
  v42 = (char *)dword_A8ED84 + 1; /*0x55de7e*/
  dword_A8ED84 = (wchar_t *)((char *)dword_A8ED84 + 1); /*0x55de81*/
  if ( dword_B07784 ) /*0x55de87*/
  {
    if ( dword_B07784 < (int)v42 ) /*0x55de8d*/
    {
      UpdateMouse(v46); /*0x55de8f*/
      dword_B07784 = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start((SyncDelay *)v46); /*0x55de9a*/
  ProcessExpiredPointers(v47); /*0x55de9f*/
  ExecutePlanningQueue(v48); /*0x55dea4*/
  byte_ABCD58 = 0; /*0x55deb6*/
  return byte_A8E9A0 == 0; /*0x55d861*/
}



// ==== 0x0055DEE0  SyncDelayClass::ProcessNetworkSync  this=SyncDelayClass  sig=csp ====
char __thiscall SyncDelayClass::ProcessNetworkSync(SyncDelayClass *this)
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
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  Chat::ProcessMessages((Chat *)this); /*0x55dee8*/
  v2 = (int)*this; /*0x55deed*/
  if ( !*(_DWORD *)this ) /*0x55def2*/
    return v2; /*0x55def2*/
  BYTE1(v2) &= ~8u; /*0x55def8*/
  v3 = v2; /*0x55defc*/
  v4 = v2; /*0x55df03*/
  BYTE1(v4) = BYTE1(v2) & 0xE8; /*0x55df05*/
  v14 = v4; /*0x55df0a*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df0e*/
  {
    v5 = *(_DWORD **)&stru_87F5F0.__pad_58[72]; /*0x55df10*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[72] && **(_DWORD **)&stru_87F5F0.__pad_58[72] == v4 ) /*0x55df1b*/
      goto LABEL_7; /*0x55df1b*/
    v5 = (_DWORD *)SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v14); /*0x55df27*/
    if ( v5 ) /*0x55df2e*/
    {
      *(_DWORD *)&stru_87F5F0.__pad_58[72] = v5; /*0x55df30*/
LABEL_7:
      v6 = v5 + 1; /*0x55df35*/
      goto LABEL_9; /*0x55df38*/
    }
  }
  v5 = *(_DWORD **)&stru_87F5F0.__pad_58[72]; /*0x55df3a*/
  v6 = (int *)&unk_B7883C; /*0x55df3f*/
LABEL_9:
  v7 = *v6; /*0x55df44*/
  if ( !*v6 ) /*0x55df44*/
  {
    v13 = v3; /*0x55df50*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df56*/
    {
      if ( v5 && *v5 == v3 ) /*0x55df5e*/
        goto LABEL_15; /*0x55df5e*/
      v5 = (_DWORD *)SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v13); /*0x55df6a*/
      if ( v5 ) /*0x55df71*/
      {
        *(_DWORD *)&stru_87F5F0.__pad_58[72] = v5; /*0x55df73*/
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
    v13 = v3; /*0x55df8e*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df94*/
    {
      if ( !SyncDelay::Check((SyncDelay *)&stru_87F5F0.__pad_58[56], &v13) ) /*0x55dfa0*/
      {
        v8 = SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v13); /*0x55dfb3*/
        if ( !v8 ) /*0x55dfba*/
          goto LABEL_22; /*0x55dfba*/
        *(_DWORD *)&stru_87F5F0.__pad_58[72] = v8; /*0x55dfbc*/
      }
      v2 = *(_DWORD *)&stru_87F5F0.__pad_58[72] + 4; /*0x55dfc7*/
      goto LABEL_23; /*0x55dfca*/
    }
LABEL_22:
    v2 = (int)&unk_B7883C; /*0x55dfcc*/
    goto LABEL_23; /*0x55dfcc*/
  }
LABEL_24:
  if ( !v7 /*0x55dffc*/
    || stru_A8EB00.?[440]
    && (v9 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7),
        (v2 = _wcsicmp(v9, g_INI_Key_De)) != 0) )
  {
    switch ( v4 ) /*0x55e07c*/
    {
      case 27: /*0x55e07c*/
        LOBYTE(v2) = UI_Create(v12); /*0x55e07e*/
        break;
      case 9: /*0x55e07c*/
        LOBYTE(v2) = Network_Process_6ABC40(); /*0x55e094*/
        break;
      case 37: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e0ab*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e0b0*/
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] & 0xFE; /*0x55e0b2*/
        else
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] | 1; /*0x55e0c1*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e0b7*/
        break;
      case 39: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e0db*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e0e0*/
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] & 0xEF; /*0x55e0e2*/
        else
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] | 0x10; /*0x55e0f1*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e0e7*/
        break;
      case 38: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e10b*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e110*/
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] & 0xFE; /*0x55e112*/
        else
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] | 1; /*0x55e120*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e116*/
        break;
      case 40: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e139*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e13e*/
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] & 0xEF; /*0x55e140*/
        else
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] | 0x10; /*0x55e14e*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e144*/
        break;
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 24))(v7, *this) ) /*0x55e006*/
      (*(void (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 32))(v7, *this); /*0x55e015*/
    LOBYTE(v2) = (*(int (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 28))(v7, *this); /*0x55e020*/
    if ( (_BYTE)v2 ) /*0x55e025*/
    {
      v10 = 0; /*0x55e031*/
      v2 = (unsigned __int16)EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e03b*/
      if ( v2 == *this ) /*0x55e042*/
      {
        do /*0x55e070*/
        {
          EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e04e*/
          v2 = (unsigned __int16)EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e05e*/
          ++v10; /*0x55e063*/
        }
        while ( v10 < 10 && v2 == *this ); /*0x55e070*/
      }
    }
  }
  return v2; /*0x55e072*/
}



// ==== 0x0055E160  SyncDelay::Start  this=SyncDelay  sig=csp ====
signed int SyncDelay::Start(SyncDelay *this)
{
  DDraw *v1; // edi
  int v2; // ecx
  int v3; // esi
  int Ticks; // eax
  int v5; // eax
  signed int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int v10; // esi
  signed int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  signed int v18; // esi
  int v19; // eax
  signed int result; // eax
  signed int v21; // esi
  int v22; // ecx
  bool v23; // cc
  SyncDelayClass v24; // [esp+Ch] [ebp-18h] BYREF
  int v25; // [esp+10h] [ebp-14h] BYREF
  _DWORD v26[4]; // [esp+14h] [ebp-10h] BYREF

  v2 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e160*/
  v3 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e171*/
  if ( *(_DWORD *)stru_88732C.__pad_1C != -1 ) /*0x55e179*/
  {
    Ticks = Timer::GetTicks(); /*0x55e180*/
    v2 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e185*/
    v5 = Ticks - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e18b*/
    if ( v5 >= v3 ) /*0x55e18f*/
      v3 = 0; /*0x55e195*/
    else
      v3 -= v5; /*0x55e191*/
  }
  dword_A8E314 += v3; /*0x55e1a7*/
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      v6 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e1c7*/
      if ( g_TacticalState != -1 ) /*0x55e1cf*/
      {
        v7 = timeGetTime() - g_TacticalState; /*0x55e1db*/
        if ( v7 >= v6 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v6 -= v7; /*0x55e1e9*/
      }
      if ( !v6 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      Event::Dispatch(); /*0x55e1f3*/
      if ( !*(_DWORD *)&stru_A8EB00.?[444] && stru_A8EB00.?[412] == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    v8 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e216*/
    v24 = 0; /*0x55e21e*/
    if ( g_TacticalState != -1 ) /*0x55e222*/
    {
      v9 = timeGetTime() - g_TacticalState; /*0x55e22e*/
      if ( v9 >= v8 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v8 -= v9; /*0x55e238*/
    }
    if ( v8 > 10 ) /*0x55e23d*/
    {
      InputManager_ProcessEvents::Vtable((GScreenClass *)&stru_87F5F0.__pad_58[416], &v24, v26, &v25); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v24); /*0x55e25c*/
      (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55e269*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
LABEL_18:
    Sleep(0); /*0x55e278*/
LABEL_19:
    v10 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e27b*/
    if ( g_TacticalState != -1 ) /*0x55e288*/
    {
      v11 = timeGetTime() - g_TacticalState; /*0x55e294*/
      if ( v11 >= v10 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v10 -= v11; /*0x55e2a2*/
    }
    if ( !v10 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  v12 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e2b4*/
  if ( v2 != -1 ) /*0x55e2bc*/
  {
    v13 = Timer::GetTicks() - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2c8*/
    if ( v13 >= v12 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v12 -= v13; /*0x55e2d2*/
  }
  if ( v12 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle(v1); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
      while ( 1 ) /*0x55e2e3*/
      {
        v14 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2e3*/
        v15 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e2e9*/
        if ( *(_DWORD *)stru_88732C.__pad_1C != -1 ) /*0x55e2f1*/
        {
          v16 = Timer::GetTicks(); /*0x55e2f8*/
          v14 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2fd*/
          v17 = v16 - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e303*/
          if ( v17 >= v15 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v15 -= v17; /*0x55e309*/
        }
        if ( !v15 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v18 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e30f*/
        if ( v14 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
LABEL_37:
        Sleep(v18); /*0x55e336*/
      }
      v19 = Timer::GetTicks() - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e323*/
      if ( v19 >= v18 ) /*0x55e32b*/
      {
        v18 = 0; /*0x55e334*/
        goto LABEL_37; /*0x55e334*/
      }
      Sleep(v18 - v19); /*0x55e330*/
    }
  }
LABEL_38:
  if ( (g_MissionQueueFrame.waypoints[362] & 1) == 0 ) /*0x55e343*/
  {
    g_MissionQueueFrame.waypoints[362] |= 1u; /*0x55e34f*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[350] = Timer::GetTicks(); /*0x55e35a*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[358] = 0; /*0x55e35f*/
    atexit(nullsub_23); /*0x55e36a*/
  }
  result = *(_DWORD *)&g_MissionQueueFrame.waypoints[350]; /*0x55e372*/
  v21 = *(_DWORD *)&g_MissionQueueFrame.waypoints[358]; /*0x55e377*/
  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[350] == -1 ) /*0x55e37f*/
  {
LABEL_43:
    if ( v21 ) /*0x55e399*/
      return result; /*0x55e399*/
    goto LABEL_44; /*0x55e399*/
  }
  result = Timer::GetTicks() - *(_DWORD *)&g_MissionQueueFrame.waypoints[350]; /*0x55e38b*/
  if ( result < v21 ) /*0x55e393*/
  {
    v21 -= result; /*0x55e395*/
    goto LABEL_43; /*0x55e395*/
  }
LABEL_44:
  v22 = *(_DWORD *)&g_MissionQueueFrame.waypoints[278] + *(_DWORD *)&g_MissionQueueFrame.waypoints[286]; /*0x55e39b*/
  v23 = (unsigned int)(*(_DWORD *)&g_MissionQueueFrame.waypoints[278] + *(_DWORD *)&g_MissionQueueFrame.waypoints[286]) <= 0x7FFFFFFF; /*0x55e3af*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[282] = *(_DWORD *)&g_MissionQueueFrame.waypoints[278]; /*0x55e3b5*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[278] = 0; /*0x55e3ba*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[286] = v22; /*0x55e3c0*/
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[290]; /*0x55e3c6*/
  if ( !v23 ) /*0x55e3cc*/
  {
    *(_DWORD *)&g_MissionQueueFrame.waypoints[286] = 0; /*0x55e3ce*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[290] = 0; /*0x55e3d4*/
  }
  result = Timer::GetTicks(); /*0x55e3de*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[350] = result; /*0x55e3ec*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[354] = v26[2]; /*0x55e3f1*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[358] = 60; /*0x55e3f7*/
  return result; /*0x55e3fd*/
}



// ==== 0x0055E410  nullsub_23  this=-  sig=ida-proto ====
void __cdecl nullsub_23()
{
  ; /*0x55e410*/
}



// ==== 0x0055E420  Chat::ProcessMessages  this=Chat  sig=csp ====
char __thiscall Chat::ProcessMessages(Chat *this)
{
  wchar_t *v2; // eax
  int v3; // edx
  unsigned __int16 *v4; // esi
  wchar_t *v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int ActiveChannel; // eax
  bool v10; // bl
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  int PlayerColorScheme; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // edi
  const wchar_t *ItemPtr; // eax
  char *v20; // eax
  wchar_t *v21; // eax
  int v22; // ebx
  wchar_t *v23; // eax
  wchar_t *v24; // esi
  wchar_t *v25; // edi
  wchar_t v26; // cx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  wchar_t *v30; // esi
  wchar_t *v31; // eax
  char v32; // bl
  wchar_t *v33; // eax
  wchar_t *v34; // eax
  size_t v35; // eax
  wchar_t *v36; // esi
  const wchar_t *const *v37; // edi
  char *v38; // eax
  char *v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  wchar_t *v43; // esi
  wchar_t *v44; // eax
  const wchar_t *v45; // eax
  int nextArrayIndex; // edi
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int Type; // esi
  int v51; // eax
  wchar_t *v52; // eax
  int v53; // esi
  int SendCount; // ebp
  int v55; // edi
  const wchar_t *v56; // ebx
  int ConnectionSpeed; // esi
  const wchar_t *Class; // eax
  int PlayerByID; // eax
  char *v60; // esi
  int v61; // eax
  int v62; // eax
  int v63; // esi
  const wchar_t *v64; // eax
  wchar_t *v66; // [esp-14h] [ebp-8B4h]
  wchar_t *v67; // [esp-14h] [ebp-8B4h]
  wchar_t *v68; // [esp-14h] [ebp-8B4h]
  wchar_t *v69; // [esp-14h] [ebp-8B4h]
  int v70; // [esp-10h] [ebp-8B0h]
  int v71; // [esp-10h] [ebp-8B0h]
  int v72; // [esp-10h] [ebp-8B0h]
  int v73; // [esp-10h] [ebp-8B0h]
  int v74; // [esp-10h] [ebp-8B0h]
  int v75; // [esp-10h] [ebp-8B0h]
  int v76; // [esp-8h] [ebp-8A8h]
  int v77; // [esp-8h] [ebp-8A8h]
  int v78; // [esp-8h] [ebp-8A8h]
  int v79; // [esp-8h] [ebp-8A8h]
  int v80; // [esp-8h] [ebp-8A8h]
  int v81; // [esp-8h] [ebp-8A8h]
  int v82; // [esp-8h] [ebp-8A8h]
  int v83; // [esp-8h] [ebp-8A8h]
  const wchar_t *v84; // [esp-4h] [ebp-8A4h]
  const wchar_t *v85; // [esp-4h] [ebp-8A4h]
  const wchar_t *v86; // [esp-4h] [ebp-8A4h]
  const wchar_t *v87; // [esp-4h] [ebp-8A4h]
  const wchar_t *v88; // [esp+0h] [ebp-8A0h]
  int v89; // [esp+10h] [ebp-890h] BYREF
  int v90; // [esp+14h] [ebp-88Ch]
  int v91; // [esp+18h] [ebp-888h]
  wchar_t v92[16]; // [esp+1Ch] [ebp-884h] BYREF
  wchar_t String[64]; // [esp+3Ch] [ebp-864h] BYREF
  wchar_t v94[64]; // [esp+BCh] [ebp-7E4h] BYREF
  wchar_t Destination[161]; // [esp+13Ch] [ebp-764h] BYREF
  __int16 v96; // [esp+27Eh] [ebp-622h]
  wchar_t String1[224]; // [esp+280h] [ebp-620h] BYREF
  wchar_t v98[112]; // [esp+440h] [ebp-460h] BYREF
  wchar_t Source[224]; // [esp+520h] [ebp-380h] BYREF
  wchar_t Buffer[224]; // [esp+6E0h] [ebp-1C0h] BYREF

  v2 = (wchar_t *)wcslen(&word_B730EC); /*0x55e431*/
  if ( v2 ) /*0x55e43d*/
  {
    v89 = 0; /*0x55e43f*/
    if ( (int)v2 > 0 ) /*0x55e443*/
    {
      v4 = &word_B730EC; /*0x55e445*/
      v5 = v2; /*0x55e44a*/
      do /*0x55e463*/
      {
        LOBYTE(v2) = ProcessEditControlKey((int)&stru_A8BB1C.__pad_87[189], v3, &v89, *v4++); /*0x55e45a*/
        v5 = (wchar_t *)((char *)v5 - 1); /*0x55e462*/
      }
      while ( v5 ); /*0x55e463*/
    }
    word_B730EC = 0; /*0x55e465*/
  }
  v6 = *(_DWORD *)this->__pad_0; /*0x55e46c*/
  if ( *(_DWORD *)this->__pad_0 )
  {
    if ( *(_DWORD *)&dword_A8B238 )
    {
      if ( *(_DWORD *)&dword_A8B238 != 5 )
      {
        LOBYTE(v2) = stru_A8BB1C.__pad_87[214]; /*0x55e48d*/
        if ( !stru_A8BB1C.__pad_87[214] )
        {
          if ( (v6 & 0x8000) != 0 ) /*0x55e49d*/
            return (char)v2; /*0x55e49d*/
          v7 = (unsigned __int8)Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], *(_DWORD *)this->__pad_0); /*0x55e4af*/
          v8 = v7; /*0x55e4b4*/
          if ( v7 == 13 || v7 == 92 || v7 == 8 )
          {
            Buffer[0] = 0; /*0x55e4d1*/
            ActiveChannel = BufferIO::FindActiveChannel( /*0x55e4e2*/
                              (BufferIO *)&g_VisibilitySystem,
                              (int)dword_A83D4C->Object_field_0x30);
            v10 = ActiveChannel != 0; /*0x55e4e9*/
            if ( ActiveChannel ) /*0x55e4ee*/
            {
              StringCSF = GetStringCSF(aTxtBeaconMessa, 0, g_Str_File_MainLoop_CPP, 1863); /*0x55e501*/
              swprintf(Buffer, (const size_t)StringCSF, v88); /*0x55e50f*/
            }
            else
            {
              v84 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55e52a*/
              v12 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 1865); /*0x55e537*/
              swprintf(Buffer, (const size_t)v12, v84); /*0x55e545*/
              switch ( v8 ) /*0x55e550*/
              {
                case 13: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 1; /*0x55e552*/
                  break;
                case 92: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 3; /*0x55e563*/
                  break;
                case 8: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 2; /*0x55e574*/
                  break;
              }
            }
            *(_DWORD *)this->__pad_0 = 0; /*0x55e57e*/
            PlayerColorScheme = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e58d*/
            v14 = NetworkLobby::MessageList_Append(
                    (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
                    PlayerColorScheme,
                    16454,
                    Buffer,
                    0,
                    v10 ? 10000 : -1);
            if ( v10 ) /*0x55e5bb*/
            {
              if ( v14 ) /*0x55e5bf*/
                *(_BYTE *)(v14 + 64) = 1; /*0x55e5c1*/
              stru_A8BB1C.__pad_87[213] = 0; /*0x55e5ca*/
              v15 = CharToWideString(asc_818D7C); /*0x55e5d1*/
              wcscpy(v92, (const wchar_t *)v15); /*0x55e5dc*/
              Network::SendBeacon((Network *)&g_VisibilitySystem, v92, -1, -1, 0); /*0x55e5f3*/
            }
            else
            {
              stru_A8BB1C.__pad_87[213] = 1; /*0x55e5fa*/
            }
            MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x55e607*/
            word_B730EC = 0; /*0x55e60c*/
          }
        }
      }
    }
    v16 = *(_DWORD *)this->__pad_0; /*0x55e615*/
    v17 = ProcessEditControlKey((int)&stru_A8BB1C.__pad_87[189], v6, (int *)this->__pad_0, 0); /*0x55e61f*/
    v18 = v17; /*0x55e624*/
    v89 = v17; /*0x55e629*/
    if ( v17 == 1 ) /*0x55e62d*/
    {
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x55e635*/
        goto LABEL_31; /*0x55e635*/
    }
    else
    {
      if ( v17 != 2 || !*(_DWORD *)&dword_A8B238 ) /*0x55e699*/
        goto LABEL_31; /*0x55e699*/
      if ( v16 == 27 ) /*0x55e69e*/
      {
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55e6a6*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55e6ab*/
LABEL_31:
        v2 = (wchar_t *)BufferIO::FindActiveChannel( /*0x55e642*/
                          (BufferIO *)&g_VisibilitySystem,
                          (int)dword_A83D4C->Object_field_0x30);
        if ( v2 && v16 && v18 == 1 || v18 == 2 || v18 == 4 || dword_B7356C ) /*0x55e677*/
        {
          if ( v16 == 27 ) /*0x55e680*/
          {
            LOBYTE(v2) = Network::SendBeacon((Network *)&g_VisibilitySystem, 0, -1, -1, 1); /*0x55e689*/
          }
          else
          {
            ItemPtr = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e6bd*/
            wcsncpy(Destination, ItemPtr, 0xA2u); /*0x55e6cb*/
            v96 = 0; /*0x55e6e2*/
            wcsncat(Destination, WideCharStr, 0xA2u); /*0x55e6ea*/
            v96 = 0; /*0x55e6f7*/
            v20 = CharToWideString(asc_818D7C); /*0x55e704*/
            wcsncat(Destination, (const wchar_t *)v20, 0xA2u); /*0x55e712*/
            v96 = 0; /*0x55e721*/
            LOBYTE(v2) = Network::SendBeacon((Network *)&g_VisibilitySystem, Destination, -1, -1, 0); /*0x55e734*/
          }
        }
        if ( v18 != 3 && v18 != 4 ) /*0x55e740*/
          goto LABEL_148; /*0x55e740*/
        LOBYTE(v2) = dword_A8B238; /*0x55e746*/
        if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x55e756*/
          goto LABEL_148; /*0x55e756*/
        if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x55e768*/
        {
          v63 = dword_A8EA74; /*0x55f115*/
          *(_DWORD *)dword_A8EA74 = 104; /*0x55f124*/
          CopyWideToChar((_BYTE *)(v63 + 4), (char *)*dword_A8DA78, -1); /*0x55f137*/
          *(_BYTE *)(v63 + 24) = dword_A8B394; /*0x55f145*/
          if ( v18 == 3 ) /*0x55f148*/
          {
            v64 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55f14f*/
            wcscpy((wchar_t *)(v63 + 25), v64); /*0x55f159*/
          }
          else
          {
            wcscpy((wchar_t *)(v63 + 25), &word_A8BDCC); /*0x55f170*/
            word_A8BDCC = 0; /*0x55f178*/
          }
          Stream::WriteBlock((int *)&unk_A8EA70, dword_A8EA74, 250, 1); /*0x55f192*/
          wcscpy(MEMORY[0xA8D112], (const wchar_t *)(v63 + 25)); /*0x55f1a9*/
          goto LABEL_147; /*0x55f1a9*/
        }
        if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x55e775*/
        {
LABEL_147:
          LOBYTE(v2) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55f1b1*/
LABEL_148:
          if ( v18 == 3 ) /*0x55f1c0*/
            *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55f1c2*/
          return (char)v2; /*0x55f1c2*/
        }
        if ( BufferIO::FindActiveChannel((BufferIO *)&g_VisibilitySystem, (int)dword_A83D4C->Object_field_0x30) ) /*0x55e78a*/
        {
          v21 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e79e*/
          Network::SendBeacon((Network *)&g_VisibilitySystem, v21, -1, -1, 1); /*0x55e7a9*/
          goto LABEL_147; /*0x55e7ae*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55e7b9*/
        {
          if ( v18 == 3 ) /*0x55e7c2*/
          {
            v85 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e7ce*/
            wcscpy(String1, v85); /*0x55e7d7*/
          }
          else
          {
            wcscpy(String1, &word_A8BDCC); /*0x55e7ea*/
          }
          v2 = HandlePageWOL((ObjectClass *)String1); /*0x55e7f9*/
          if ( v2 ) /*0x55e800*/
          {
            if ( v2 != (wchar_t *)1 ) /*0x55e809*/
              goto LABEL_103; /*0x55e809*/
            v22 = 0; /*0x55e820*/
            v23 = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, g_Str_File_MainLoop_CPP, 2051); /*0x55e822*/
            wcscpy(String, v23); /*0x55e82d*/
            v24 = &String1[wcslen(String)]; /*0x55e83c*/
            if ( *v24 ) /*0x55e846*/
            {
              do /*0x55e862*/
              {
                if ( wcsncmp(v24, asc_82083C, 1u) ) /*0x55e853*/
                  break; /*0x55e85d*/
                ++v24; /*0x55e85f*/
              }
              while ( *v24 ); /*0x55e862*/
              if ( *v24 ) /*0x55e867*/
              {
                v25 = v92; /*0x55e86d*/
                do /*0x55e897*/
                {
                  if ( !wcsncmp(v24, asc_82083C, 1u) ) /*0x55e879*/
                    break; /*0x55e883*/
                  if ( v22 > 10 ) /*0x55e888*/
                    break; /*0x55e888*/
                  v26 = *v24++; /*0x55e88a*/
                  *v25 = v26; /*0x55e890*/
                  ++v22; /*0x55e893*/
                  ++v25; /*0x55e894*/
                }
                while ( *v24 ); /*0x55e897*/
              }
            }
            for ( v92[v22] = 0; *v24; ++v24 ) /*0x55e8a4*/
            {
              if ( wcsncmp(v24, asc_82083C, 1u) ) /*0x55e8b2*/
                break; /*0x55e8bc*/
            }
            if ( wcslen(v92) ) /*0x55e8cb*/
            {
              if ( wcslen(v24) ) /*0x55e927*/
              {
                swprintf(v94, (const size_t)&off_82A0F8, (const wchar_t *const)*dword_A8DA78, v92); /*0x55e99a*/
                LOWORD(v29) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e9b6*/
                v78 = v29; /*0x55e9bb*/
                v72 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e9de*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e9e7*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               v94,
                               dword_A8B394,
                               v24,
                               v72,
                               16454,
                               v78,
                               0);
              }
              else
              {
                LOWORD(v28) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e946*/
                v77 = v28; /*0x55e94b*/
                v71 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e968*/
                v67 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_MainLoop_CPP, 2072); /*0x55e978*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e97d*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               0,
                               -1,
                               v67,
                               v71,
                               16454,
                               v77,
                               0);
              }
            }
            else
            {
              LOWORD(v27) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e8e9*/
              v76 = v27; /*0x55e8f4*/
              v70 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e90c*/
              v66 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, g_Str_File_MainLoop_CPP, 2067); /*0x55e91c*/
              LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e921*/
                             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                             0,
                             -1,
                             v66,
                             v70,
                             16454,
                             v76,
                             0);
            }
            if ( v89 != 4 ) /*0x55e9f0*/
              goto LABEL_103; /*0x55e9f0*/
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e9fb*/
            v30 = v2; /*0x55ea00*/
            if ( !v2 ) /*0x55ea04*/
              goto LABEL_103; /*0x55ea04*/
            v86 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55ea1b*/
            v31 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 2091); /*0x55ea26*/
            swprintf(v98, (const size_t)v31, v86); /*0x55ea34*/
            swprintf(Source, (const size_t)&off_82A0E8, String, v92, v30); /*0x55ea51*/
            Chat::RefreshMessagePositions((Chat *)&stru_A8BB1C.__pad_87[189]); /*0x55ea5e*/
            NetworkLobby::MessageList_Append( /*0x55ea7f*/
              (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
              dword_A8B394,
              16454,
              v98,
              0,
              -1);
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ea89*/
            if ( !v2 ) /*0x55ea90*/
              goto LABEL_103; /*0x55ea90*/
            goto LABEL_102; /*0x55ea90*/
          }
          v2 = (wchar_t *)HandleOnlineWOL((ObjectClass *)String1); /*0x55eaaa*/
          if ( v2 ) /*0x55eab1*/
          {
            word_A8BDCC = 0; /*0x55eab5*/
            return (char)v2; /*0x55eac4*/
          }
          v2 = HandleReplyWOL((ObjectClass *)String1); /*0x55eacc*/
          if ( v2 ) /*0x55ead3*/
          {
            if ( v2 != (wchar_t *)1 ) /*0x55eadc*/
              goto LABEL_103; /*0x55eadc*/
            v32 = 0; /*0x55eaf3*/
            v33 = GetStringCSF(g_Str_TXT_REPLY_COMMAND, 0, g_Str_File_MainLoop_CPP, 2121); /*0x55eaf5*/
            wcscpy(String, v33); /*0x55eb00*/
            v34 = GetStringCSF(g_Str_TXT_REPLY_COMMAND_SHORT, 0, g_Str_File_MainLoop_CPP, 2122); /*0x55eb19*/
            wcscpy(v94, v34); /*0x55eb27*/
            v35 = wcslen(String); /*0x55eb31*/
            if ( !wcsncmp(String1, String, v35) ) /*0x55eb44*/
            {
              v36 = &String1[wcslen(String)]; /*0x55eb5d*/
            }
            else
            {
              v36 = &String1[wcslen(v94)]; /*0x55eb76*/
              v32 = 1; /*0x55eb7d*/
            }
            for ( ; *v36; ++v36 ) /*0x55eb7f*/
            {
              if ( wcsncmp(v36, asc_82083C, 1u) ) /*0x55eb8d*/
                break; /*0x55eb97*/
            }
            v37 = (const wchar_t *const *)dword_A8DA78; /*0x55eba1*/
            v38 = CharToWideString(byte_B77E30); /*0x55ebac*/
            swprintf(v98, (const size_t)&off_82A0F8, *v37, v38); /*0x55ebc2*/
            v39 = CharToWideString(byte_B77E30); /*0x55ebcf*/
            if ( wcslen((const wchar_t *)v39) ) /*0x55ebd5*/
            {
              if ( wcslen(v36) ) /*0x55ec34*/
              {
                LOWORD(v41) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ec54*/
                v80 = v41; /*0x55ec59*/
                v74 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ec7c*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ec80*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               v98,
                               dword_A8B394,
                               v36,
                               v74,
                               16454,
                               v80,
                               0);
              }
              else
              {
                LOWORD(v42) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ec93*/
                v81 = v42; /*0x55ec9e*/
                v75 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ecb6*/
                v69 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_MainLoop_CPP, 2149); /*0x55eccc*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ecd5*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               0,
                               dword_A8B394,
                               v69,
                               v75,
                               16454,
                               v81,
                               0);
              }
            }
            else
            {
              LOWORD(v40) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ebf4*/
              v79 = v40; /*0x55ebf9*/
              v73 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ec16*/
              v68 = GetStringCSF(aTxtNameNotSpec, 0, g_Str_File_MainLoop_CPP, 2136); /*0x55ec2c*/
              LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ec2e*/
                             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                             0,
                             dword_A8B394,
                             v68,
                             v73,
                             16454,
                             v79,
                             0);
            }
            if ( v89 != 4 ) /*0x55ecde*/
              goto LABEL_103; /*0x55ecde*/
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ece9*/
            v43 = v2; /*0x55ecee*/
            if ( !v2 ) /*0x55ecf2*/
              goto LABEL_103; /*0x55ecf2*/
            v87 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55ed09*/
            v44 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 2161); /*0x55ed14*/
            swprintf(Destination, (const size_t)v44, v87); /*0x55ed22*/
            if ( v32 ) /*0x55ed2d*/
              swprintf(Source, (const size_t)&off_826960, v94, v43); /*0x55ed44*/
            else
              swprintf(Source, (const size_t)&off_826960, String, v43); /*0x55ed58*/
            Chat::RefreshMessagePositions((Chat *)&stru_A8BB1C.__pad_87[189]); /*0x55ed65*/
            NetworkLobby::MessageList_Append( /*0x55ed87*/
              (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
              dword_A8B394,
              16454,
              Destination,
              0,
              -1);
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ed91*/
            if ( !v2 ) /*0x55ed98*/
              goto LABEL_103; /*0x55ed98*/
LABEL_102:
            LOBYTE(v2) = (unsigned __int8)wcscat(v2, Source); /*0x55ed9a*/
LABEL_103:
            word_A8BDCC = 0; /*0x55edab*/
            return (char)v2; /*0x55edbe*/
          }
        }
        *(_DWORD *)&stru_A8D600.__pad_34[4] = 12; /*0x55edc8*/
        strcpy(&stru_A8D600.__pad_34[8], ToWideStringChar((char *)*dword_A8DA78)); /*0x55edf7*/
        *(_DWORD *)&stru_A8D600.__pad_87[193] = dword_A8B394; /*0x55ee0a*/
        *(_DWORD *)&stru_A8D600.__pad_87[197] = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x55ee14*/
        stru_A8D600.__pad_64[3] = 0; /*0x55ee20*/
        if ( v89 == 3 ) /*0x55ee27*/
        {
          v45 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ee2e*/
          wcscpy((wchar_t *)&stru_A8D600.__pad_64[4], v45); /*0x55ee39*/
        }
        else if ( v89 == 4 ) /*0x55ee45*/
        {
          wcscpy((wchar_t *)&stru_A8D600.__pad_64[4], &word_A8BDCC); /*0x55ee51*/
          word_A8BDCC = 0; /*0x55ee59*/
        }
        nextArrayIndex = stru_A80220.?; /*0x55ee65*/
        v91 = stru_A80220.?; /*0x55ee6d*/
        if ( dword_A8B538[0] ) /*0x55ee71*/
        {
          v47 = *(_DWORD *)&g_MissionQueueFrame.waypoints[494]; /*0x55ee77*/
          if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 1 /*0x55ee85*/
            || *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2 )
          {
            v48 = 0; /*0x55ee8b*/
            if ( stru_A80220.? > 0 ) /*0x55ee8f*/
            {
              while ( 1 ) /*0x55eea3*/
              {
                v49 = *((_DWORD *)stru_A80220.? + v48); /*0x55eea3*/
                if ( v49 /*0x55eee3*/
                  && *(_BYTE *)(*(_DWORD *)(v49 + 52) + 421)
                  && (!byte_A8D108[v48] && v47 == 1
                   || !(unsigned __int8)HouseClass::IsAlliedWith(
                                          *((#375 **)stru_A80220.? + *(_DWORD *)(*dword_A8DA78 + 111)),
                                          *((#375 **)stru_A80220.? + v48))
                   && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2) )
                {
                  break; /*0x55eee3*/
                }
                if ( ++v48 >= nextArrayIndex ) /*0x55eee8*/
                  goto LABEL_123; /*0x55eee8*/
                v47 = *(_DWORD *)&g_MissionQueueFrame.waypoints[494]; /*0x55ee97*/
              }
              Type = BuildingAnim::GetType(); /*0x55eef1*/
              LOWORD(v51) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ef06*/
              v82 = v51; /*0x55ef0b*/
              v52 = GetStringCSF(aTxtObserverCan, 0, g_Str_File_MainLoop_CPP, 2234); /*0x55ef20*/
              MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v52, Type, 22, v82, 1); /*0x55ef2d*/
              *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55ef32*/
            }
          }
        }
LABEL_123:
        v90 = 0; /*0x55ef38*/
        if ( nextArrayIndex > 0 ) /*0x55ef3e*/
        {
          do /*0x55f04e*/
          {
            v53 = *((_DWORD *)stru_A80220.? + v90); /*0x55ef51*/
            if ( v53 /*0x55efa9*/
              && *(_BYTE *)(*(_DWORD *)(v53 + 52) + 421)
              && (byte_A8D108[v90] && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 1
               || (unsigned __int8)HouseClass::IsAlliedWith(
                                     *((#375 **)stru_A80220.? + *(_DWORD *)(*dword_A8DA78 + 111)),
                                     *((#375 **)stru_A80220.? + v90))
               && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2
               || *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 3) )
            {
              SendCount = Network::GetSendCount(&unk_A8E9C0); /*0x55efb9*/
              v55 = 0; /*0x55efbb*/
              if ( SendCount > 0 ) /*0x55efbf*/
              {
                v56 = (const wchar_t *)(v53 + 90154); /*0x55efc1*/
                do /*0x55f03d*/
                {
                  ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v55); /*0x55efd2*/
                  Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x55efda*/
                  if ( !wcscmp(v56, Class) ) /*0x55efe1*/
                  {
                    PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x55eff3*/
                    if ( byte_A8DBA0 ) /*0x55f000*/
                    {
                      stru_A8D600.__pad_64[3] |= Factory::GetLinkedIndex( /*0x55f00d*/
                                                   (Factory *)&stru_B052C0.__pad_0[16],
                                                   ConnectionSpeed);
                    }
                    else
                    {
                      Network::SendMessage(&unk_A8E9C0.Socket, (int)&stru_A8D600.__pad_34[4], 455, 1, PlayerByID, 0, 0); /*0x55f02b*/
                      Network::ReceiveLoop(&unk_A8E9C0); /*0x55f035*/
                    }
                  }
                  ++v55; /*0x55f03a*/
                }
                while ( v55 < SendCount ); /*0x55f03d*/
              }
            }
            ++v90; /*0x55f04a*/
          }
          while ( v90 < v91 ); /*0x55f04e*/
        }
        if ( byte_A8DBA0 && stru_A8D600.__pad_64[3] ) /*0x55f066*/
        {
          Debug::Log(); /*0x55f072*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)&stru_A8D600.__pad_34[4], 455, 1, *dword_A8DA78 + 40, 0, 0); /*0x55f099*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x55f0a3*/
        }
        v60 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x55f0b8*/
        LOWORD(v61) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55f0c7*/
        v83 = v61; /*0x55f0d2*/
        v62 = SessionClass::GetPlayerColorScheme(*(unsigned int *)&stru_A8D600.__pad_87[193]); /*0x55f0de*/
        MessageListClass::AddMessage( /*0x55f0f5*/
          (MessageListClass *)&stru_A8BB1C.__pad_87[189],
          (wchar_t *)v60,
          *(int *)&stru_A8D600.__pad_87[193],
          (wchar_t *)&stru_A8D600.__pad_64[4],
          v62,
          16454,
          v83,
          0);
        wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x55f104*/
        v18 = v89; /*0x55f109*/
        goto LABEL_147; /*0x55f110*/
      }
    }
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x55e63d*/
    goto LABEL_31; /*0x55e63d*/
  }
  return (char)v2; /*0x55eab3*/
}


// ==== 0x0055F1E0  ObjectClass::DrawHUD  this=ObjectClass  sig=csp ====
int *DrawHUD(ObjectClass *this)
{
  int *result; // eax
  int Type; // eax
  AudioStream *v3; // esi
  int v4; // eax
  int BuildingAnimByName; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  unsigned int QueueSize; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // [esp-14h] [ebp-264h]
  int v25; // [esp-10h] [ebp-260h]
  int v26; // [esp-10h] [ebp-260h]
  int v27; // [esp-Ch] [ebp-25Ch]
  int v28; // [esp-Ch] [ebp-25Ch]
  int v29; // [esp-Ch] [ebp-25Ch]
  int v30; // [esp-8h] [ebp-258h]
  int v31; // [esp-8h] [ebp-258h]
  int v32; // [esp-8h] [ebp-258h]
  int v33; // [esp-4h] [ebp-254h]
  int v34; // [esp-4h] [ebp-254h]
  int v35; // [esp-4h] [ebp-254h]
  int v36; // [esp+0h] [ebp-250h]
  int v37; // [esp+0h] [ebp-250h]
  int v38; // [esp+0h] [ebp-250h]
  int v39; // [esp+0h] [ebp-250h]
  int v40; // [esp+4h] [ebp-24Ch]
  int v41; // [esp+4h] [ebp-24Ch]
  int v42; // [esp+4h] [ebp-24Ch]
  int v43; // [esp+4h] [ebp-24Ch]
  int v44; // [esp+4h] [ebp-24Ch]
  int v45; // [esp+8h] [ebp-248h] BYREF
  int v46; // [esp+Ch] [ebp-244h] BYREF
  wchar_t Format[2]; // [esp+10h] [ebp-240h] BYREF
  int v48; // [esp+14h] [ebp-23Ch] BYREF
  int v49; // [esp+18h] [ebp-238h] BYREF
  int v50; // [esp+1Ch] [ebp-234h] BYREF
  int v51; // [esp+20h] [ebp-230h] BYREF
  int v52; // [esp+24h] [ebp-22Ch] BYREF
  int v53; // [esp+28h] [ebp-228h] BYREF
  int v54; // [esp+2Ch] [ebp-224h] BYREF
  int v55; // [esp+30h] [ebp-220h] BYREF
  wchar_t v56; // [esp+34h] [ebp-21Ch] BYREF
  wchar_t v57[2]; // [esp+38h] [ebp-218h] BYREF
  wchar_t v58[2]; // [esp+3Ch] [ebp-214h] BYREF
  wchar_t v59[2]; // [esp+40h] [ebp-210h] BYREF
  wchar_t v60[2]; // [esp+44h] [ebp-20Ch] BYREF
  wchar_t v61[4]; // [esp+48h] [ebp-208h] BYREF
  wchar_t Buffer[256]; // [esp+50h] [ebp-200h] BYREF

  result = (int *)dword_8373A0; /*0x55f1e0*/
  if ( dword_8373A0 != -1 ) /*0x55f1f2*/
  {
    *(double *)v61 = (double)(unsigned int)dword_8373A0 * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    v53 = 100; /*0x55f225*/
    v54 = 0; /*0x55f23a*/
    *(_DWORD *)v57 = 0; /*0x55f23e*/
    *(_DWORD *)v58 = 0; /*0x55f242*/
    wcscpy(v59, L"Ǵ"); /*0x55f246*/
    wcscpy(v60, L"\x0F"); /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &v55,
               (size_t)a2f,
               (int)DSurface_Composite,
               v57,
               (int)&v53,
               *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type),
               31,
               (int)wcscpy(Format, L"\x06"),
               *(_DWORD *)v61,
               *(_DWORD *)&v61[2],
               &dword_A8B230[130].abstractFlags);
  }
  if ( byte_A8B8B5 ) /*0x55f286*/
  {
    result = *(int **)&dword_A8B238; /*0x55f28c*/
    if ( *(_DWORD *)&dword_A8B238 > 2u ) /*0x55f293*/
    {
      v3 = DSurface_Composite; /*0x55f2b1*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x55f2b9*/
      v4 = *(_DWORD *)v3->__pad_0; /*0x55f2bc*/
      *(_DWORD *)v57 = 0; /*0x55f2c6*/
      wcscpy(v58, L"Ĭ"); /*0x55f2ca*/
      wcscpy(v59, L"ɿ"); /*0x55f2d2*/
      wcscpy(v60, L"æ"); /*0x55f2da*/
      (*(void (__thiscall **)(AudioStream *, wchar_t *, _DWORD))(v4 + 20))(v3, v57, 0); /*0x55f2e2*/
      swprintf(Buffer, (const size_t)&off_82A224, *(const wchar_t *const *)&stru_A8EB00.?[416]); /*0x55f2f6*/
      v53 = 0; /*0x55f308*/
      v54 = 302; /*0x55f30f*/
      BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f317*/
      v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f32b*/
                                                                                              + 120))(
                       v3,
                       v57,
                       &v53,
                       BuildingAnimByName,
                       0,
                       25);
      TextRenderer::DrawText(&v54, (size_t)&v61[2], (int)v3, v6, v46, *(int *)Format, v48, v49); /*0x55f33a*/
      swprintf(&v61[2], (const size_t)&off_82A210, *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[282]); /*0x55f34f*/
      v52 = 0; /*0x55f361*/
      v53 = 312; /*0x55f368*/
      v7 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f370*/
      v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f384*/
                                                                                              + 120))(
                       v3,
                       &v56,
                       &v52,
                       v7,
                       0,
                       25);
      TextRenderer::DrawText(&v53, (size_t)v61, (int)v3, v8, v45, v46, *(int *)Format, v48); /*0x55f393*/
      swprintf(v61, (const size_t)&off_82A1F4, dword_A8B550); /*0x55f3a9*/
      v51 = 0; /*0x55f3b1*/
      v52 = 322; /*0x55f3b5*/
      v9 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f3ca*/
      v10 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f3de*/
                        v3,
                        &v55,
                        &v51,
                        v9,
                        0,
                        25);
      TextRenderer::DrawText(&v52, (size_t)v60, (int)v3, v10, v40, v45, v46, *(int *)Format); /*0x55f3ed*/
      QueueSize = IPXManagerClass::GetQueueSize(&unk_A8E9C0); /*0x55f3fa*/
      swprintf(v60, (const size_t)&off_82A1D0, (const wchar_t *const)((int)(1000 * QueueSize) / 60)); /*0x55f429*/
      v50 = 0; /*0x55f43b*/
      v51 = 332; /*0x55f442*/
      v12 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f44a*/
      v13 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, wchar_t *))(*(_DWORD *)v3->__pad_0 /*0x55f45e*/
                                                                                                 + 120))(
                        v3,
                        &v54,
                        &v50,
                        v12,
                        0,
                        wcscpy(Format, L"\x19"));
      TextRenderer::DrawText(&v51, (size_t)v59, (int)v3, v13, v36, v41, v45, v46); /*0x55f46d*/
      swprintf(v59, (const size_t)&off_82A1B4, dword_A8B558); /*0x55f483*/
      v49 = 0; /*0x55f495*/
      v50 = 342; /*0x55f49c*/
      v14 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f4a4*/
      v15 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f4b8*/
                        v3,
                        &v53,
                        &v49,
                        v14,
                        0,
                        25);
      TextRenderer::DrawText(&v50, (size_t)v58, (int)v3, v15, v33, v37, v42, v45); /*0x55f4c7*/
      swprintf(v58, (const size_t)&off_828788, *(const wchar_t *const *)(*dword_A8DA78 + 115)); /*0x55f4e1*/
      v48 = 0; /*0x55f4f3*/
      v49 = 352; /*0x55f4fa*/
      v16 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f502*/
      v17 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f516*/
                        v3,
                        &v52,
                        &v48,
                        v16,
                        0,
                        25);
      TextRenderer::DrawText(&v49, (size_t)v57, (int)v3, v17, v30, v34, v38, v43); /*0x55f525*/
      swprintf(v57, (const size_t)&off_828708, (const wchar_t *const)(1000 * dword_A8E2D4 / 0x3Cu)); /*0x55f550*/
      *(_DWORD *)Format = 0; /*0x55f562*/
      v48 = 362; /*0x55f569*/
      v18 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f571*/
      v19 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, wchar_t *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f585*/
                                                                                               + 120))(
                        v3,
                        &v51,
                        Format,
                        v18,
                        0,
                        25);
      TextRenderer::DrawText(&v48, (size_t)&v56, (int)v3, v19, v27, v31, v35, v39); /*0x55f594*/
      swprintf( /*0x55f5c2*/
        &v56,
        (const size_t)&off_82A1A0,
        (const wchar_t *const)g_TacticalState,
        *(_DWORD *)stru_88732C.__pad_0,
        *(_DWORD *)&stru_88732C.m_2[2]);
      v46 = 0; /*0x55f5d4*/
      wcscpy(Format, L"Ŵ"); /*0x55f5db*/
      v20 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f5e3*/
      v21 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f5f7*/
                        v3,
                        &v50,
                        &v46,
                        v20);
      TextRenderer::DrawText((int *)Format, (size_t)&v55, (int)v3, v21, v25, v28, v32, 0); /*0x55f606*/
      swprintf( /*0x55f61b*/
        (wchar_t *const)&v55,
        (const size_t)&off_82A18C,
        *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[474]);
      v45 = 0; /*0x55f62d*/
      v46 = 382; /*0x55f634*/
      v22 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f63c*/
      v23 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f650*/
                        v3,
                        &v49,
                        &v45,
                        v22);
      TextRenderer::DrawText(&v46, (size_t)&v54, (int)v3, v23, v24, v26, v29, 0); /*0x55f65f*/
      ScoreBoard::Render((char *)&unk_A8E9C0); /*0x55f66c*/
      return (*(int *(__thiscall **)(void *, int, int, int, int, int, _DWORD, int, int, int))(*(_DWORD *)stru_887598.lineTrailer /*0x55f679*/
                                                                                            + 16))(
               stru_887598.lineTrailer,
               25,
               25,
               v44,
               v45,
               v46,
               *(_DWORD *)Format,
               v48,
               v49,
               v50);
    }
  }
  return result; /*0x55f67c*/
}



// ==== 0x0055F690  ObjectClass::CheckNetworkSync  this=ObjectClass  sig=csp ====
int __thiscall CheckNetworkSync(ObjectClass *this, int a2, int a3)
{
  this->AbstractClass = (void *)(a3 & 0xFFFFFF); /*0x55f69f*/
  LOBYTE(this->?) = HIBYTE(a3); /*0x55f6a5*/
  *(_DWORD *)a2 = this->AbstractClass; /*0x55f6ac*/
  *(_BYTE *)(a2 + 4) = this->?; /*0x55f6b2*/
  return a2; /*0x55f6b1*/
}



// ==== 0x0055F6C0  SyncDelay::Check  this=SyncDelay  sig=csp ====
bool __thiscall SyncDelay::Check(SyncDelay *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->q010; /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/
}



// ==== 0x0055F6E0  SortedVector::BinarySearch  this=SortedVector  sig=csp ====
int __thiscall SortedVector::BinarySearch(SortedVector *this, int *a2)
{
  int result; // eax
  SortedVector v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = *((_DWORD *)this + 1); /*0x55f6e3*/
  if ( result ) /*0x55f6e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x55f6ee*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x55f700*/
      *((_DWORD *)this + 4) = 0; /*0x55f708*/
      *((_BYTE *)this + 12) = 1; /*0x55f70f*/
    }
    v4 = *this; /*0x55f719*/
    v5 = *a2; /*0x55f71b*/
    v6 = *((_DWORD *)this + 1); /*0x55f71d*/
    if ( v6 <= 0 ) /*0x55f722*/
      return 0; /*0x55f74e*/
    while ( 1 ) /*0x55f72b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x55f72b*/
      if ( v7 <= v5 ) /*0x55f733*/
      {
        if ( v7 == v5 ) /*0x55f739*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x55f753*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x55f73b*/
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
  dword_ABCE28 = 0; /*0x55f762*/
  dword_ABCE2C = 0; /*0x55f767*/
  dword_ABCE30 = 0; /*0x55f76c*/
  dword_ABCE34 = 0; /*0x55f771*/
  return 0; /*0x55f776*/
}



// ==== 0x0055F780  sub_55F780  this=-  sig=ida-proto ====
void sub_55F780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55f78c*/
  dbl_ABCE40 = Math::Sqrt(v0 + v0); /*0x55f79e*/
}



// ==== 0x0055F7B0  sub_55F7B0  this=-  sig=ida-proto ====
void sub_55F7B0()
{
  dbl_ABCF48 = dbl_ABCE40 / 60.0; /*0x55f7bc*/
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
  dbl_ABCE48 = 0.0174532925199433 * 60.0; /*0x55f81c*/
}



// ==== 0x0055F830  sub_55F830  this=-  sig=ida-proto ====
void sub_55F830()
{
  dbl_ABCE20 = 0.0174532925199433 * 90.0; /*0x55f83c*/
}



// ==== 0x0055F850  sub_55F850  this=-  sig=ida-proto ====
__int64 sub_55F850()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCE20 - dbl_ABCE48); /*0x55f862*/
  result = Math::RoundToInt(v0 * dbl_ABCE40 * 0.5); /*0x55f876*/
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
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / dbl_ABCE40); /*0x55f8e2*/
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
  word_ABCE38 = 0; /*0x55f922*/
  word_ABCE3A = 0; /*0x55f928*/
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
  unk_ABCE70[0] = 3; /*0x5fa35a*/
  unk_ABCE70[1] = 1; /*0x5fa360*/
  unk_ABCE70[3] = 0; /*0x5fa363*/
  unk_ABCE70[4] = 3; /*0x5fa366*/
  LOBYTE(unk_ABCE70[5]) = 1; /*0x5fa36d*/
  unk_ABCE70[6] = 2; /*0x5fa370*/
  LOBYTE(unk_ABCE70[7]) = 1; /*0x5fa377*/
  BYTE1(unk_ABCE70[7]) = 1; /*0x5fa37a*/
  BYTE2(unk_ABCE70[7]) = 1; /*0x5fa37d*/
  LOBYTE(unk_ABCE70[8]) = 1; /*0x5fa380*/
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
  HIBYTE(unk_ABCE70[7]) = 0; /*0x5fa3cd*/
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
  return unk_ABCE70; /*0x5fa421*/
}



// ==== 0x0055F980  sub_55F980  this=-  sig=csp ====
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



// ==== 0x0055FAA0  Options::Screen_Save  this=Dialog  sig=csp ====
int __thiscall Options::Screen_Save(Options *this)
{
  HWND DlgItem; // eax
  int v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  int v10; // eax
  HWND v11; // eax
  int result; // eax
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+0h] [ebp-18h]
  float v15; // [esp+0h] [ebp-18h]

  DlgItem = GetDlgItem((HWND)this, 1323); /*0x55fab2*/
  if ( DlgItem )
  {
    v3 = SendMessageA(DlgItem, 0x400u, 0, 0) != 0 ? 2 : 0;
    if ( stru_A8EB00.ObjectTypeClass[30] != v3 ) /*0x55fad9*/
    {
      stru_A8EB00.ObjectTypeClass[30] = v3; /*0x55fae0*/
      TacticalClass::Initialize((TacticalClass *)&stru_87F5F0.__pad_58[416]); /*0x55fae5*/
    }
  }
  v4 = GetDlgItem((HWND)this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    stru_A8EB00.ObjectTypeClass[25] = SendMessageA(v4, 0x400u, 0, 0); /*0x55fb02*/
  v5 = GetDlgItem((HWND)this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    BYTE2(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v5, 0xF0u, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(stru_A8EB00.ObjectTypeClass[31])); /*0x55fb2b*/
  }
  v6 = GetDlgItem((HWND)this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    HIBYTE(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v6, 0xF0u, 0, 0) == 1; /*0x55fb4e*/
  v7 = GetDlgItem((HWND)this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    LOBYTE(stru_A8EB00.ObjectTypeClass[32]) = SendMessageA(v7, 0xF0u, 0, 0) == 1; /*0x55fb71*/
  v8 = GetDlgItem((HWND)this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    stru_A8EB00.ObjectTypeClass[28] = 6 - SendMessageA(v8, 0x400u, 0, 0); /*0x55fb96*/
  v9 = GetDlgItem((HWND)this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    v13 = (double)SendMessageA(v9, 0x400u, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v13, 0); /*0x55fbcd*/
    if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x55fbe3*/
    {
      v10 = dword_A83D14; /*0x55fbe5*/
      if ( dword_A83D14 == -1 ) /*0x55fbed*/
        v10 = dword_A83D18; /*0x55fbef*/
      Theme::QueueSong((int)&unk_A83D10, v10); /*0x55fbfa*/
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x55fc06*/
    }
  }
  v11 = GetDlgItem((HWND)this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    v14 = (double)SendMessageA(v11, 0x400u, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume(&stru_A8EB00.ObjectTypeClass[24], v14, 0); /*0x55fc3c*/
  }
  result = (int)GetDlgItem((HWND)this, 1334); /*0x55fc47*/
  if ( result ) /*0x55fc4b*/
  {
    v15 = (double)SendMessageA((HWND)result, 0x400u, 0, 0) * 0.1; /*0x55fc6f*/
    return Audio::SetVoiceVolume(&stru_A8EB00.ObjectTypeClass[24], v15, 0); /*0x55fc72*/
  }
  return result; /*0x55fc77*/
}



// ==== 0x0055FC80  Options::Screen_Dialog  this=Options  sig=ida-proto ====
char sub_55FC80()
{
  HWND v0; // eax
  HWND v1; // esi
  int v2; // ecx
  HWND v3; // eax
  HWND v4; // esi
  int v5; // ecx
  char v7; // [esp+13h] [ebp-9h]
  LONG dwNewLong; // [esp+14h] [ebp-8h] BYREF
  LONG v9; // [esp+18h] [ebp-4h] BYREF

  v7 = byte_A8E9A0; /*0x55fc92*/
  byte_A8E9A0 = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&unk_ABCE70, dword_A8EB60, 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        v0 = (HWND)CreateDialog(0); /*0x55fcc1*/
        v1 = v0; /*0x55fcc6*/
      }
      while ( !v0 ); /*0x55fcca*/
      SetWindowLongA(v0, 8, (LONG)&dwNewLong); /*0x55fcd4*/
      Dialog::Show(v1); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        LOBYTE(v2) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      Dialog::Destroy(v1); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ScenarioClass::LoadNetworkConfig(&dword_A8B238); /*0x55fd31*/
      v3 = (HWND)CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        SetWindowLongA(v3, 8, (LONG)&v9); /*0x55fd59*/
        Dialog::Show(v4); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          LOBYTE(v5) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        Dialog::Destroy(v4); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog(dword_A8EB60); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions(dword_A8EB60); /*0x55fd8e*/
  byte_A8E9A0 = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/
}



// ==== 0x0055FDB0  ScreenDlgProcOptions  this=-  sig=csp ====
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
          SendMessageA(v19, 0x405u, 1u, dword_A8EB78 != 0); /*0x56016a*/
        }
        v48 = GetDlgItem(hWnd, 1773); /*0x560176*/
        if ( byte_A8EB95 ) /*0x560181*/
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
            if ( byte_A8EB95 || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, "%d x %d x 16", v23, v24); /*0x560220*/
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
          SendMessageA(v27, 0x405u, 1u, dword_A8EB64); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA(v28, 0xF1u, byte_A8EB7E != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA(v29, 0xF1u, byte_A8EB7F != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA(v30, 0xF1u, byte_A8EB80 != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA(v31, 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA(v32, 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA(v32, 0x405u, 1u, 6 - dword_A8EB70); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA(v34, 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA(v35, 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA(v35, 0x405u, 1u, v36); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA(v37, 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA(v38, 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA(v38, 0x405u, 1u, v39); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA(v40, 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA(v41, 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&flt_A8EB9C * 10.0 + 0.5); /*0x560455*/
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
                    Audio::SetScoreVolume((float *)dword_A8EB60, v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    v44 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Audio::SetSoundVolume((float *)dword_A8EB60, v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  v45 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Audio::SetVoiceVolume((float *)dword_A8EB60, v45, 1); /*0x5600fb*/
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
                if ( v10 != dword_A8EB84 || v11 != dword_A8EB88 ) /*0x55ff1f*/
                {
                  dword_A8EB88 = v11; /*0x55ff27*/
                  dword_A8EB84 = v10; /*0x55ff2d*/
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



// ==== 0x00550000  Game::loadCampaignData  this=Game  sig=csp ====
int __thiscall Game::loadCampaignData(Game *this)
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  Game *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x550000*/
  for ( result = g_MissionQueueFrame.random[31]; g_MissionQueueFrame.random[31]; result = g_MissionQueueFrame.random[31] ) /*0x550008*/
  {
    v2 = *(void **)g_MissionQueueFrame.random[28]; /*0x550010*/
    if ( *(_DWORD *)g_MissionQueueFrame.random[28] ) /*0x550010*/
    {
      v4 = *(Game **)g_MissionQueueFrame.random[28]; /*0x550026*/
      v3 = (*(int (__thiscall **)(int *, Game **))(g_MissionQueueFrame.random[27] + 16))( /*0x55002a*/
             &g_MissionQueueFrame.random[27],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[31] ) /*0x55003a*/
      {
        --g_MissionQueueFrame.random[31]; /*0x55003f*/
        for ( ; /*0x550045*/
              v3 < g_MissionQueueFrame.random[31];
              *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                   + 4 * v3) )
        {
          ++v3; /*0x55004d*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x550060*/
    }
  }
  return result; /*0x550073*/
}



// ==== 0x00550080  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_550080(ObjectClass *this)
{
  void *ptr_8; // edx
  int uniqueId; // eax
  int abstractFlags; // eax
  char *v5; // edx
  void *v6; // edx
  int v7; // eax
  _DWORD v8[4]; // [esp+4h] [ebp-10h] BYREF

  ptr_8 = this->?; /*0x550086*/
  uniqueId = this->?; /*0x550089*/
  if ( ptr_8 == (void *)-1 ) /*0x55008f*/
  {
LABEL_4:
    if ( uniqueId ) /*0x5500a1*/
      goto LABEL_7; /*0x5500a1*/
    goto LABEL_5; /*0x5500a1*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_8 < uniqueId ) /*0x55009b*/
  {
    uniqueId -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_8; /*0x55009d*/
    goto LABEL_4; /*0x55009d*/
  }
LABEL_5:
  abstractFlags = this->?; /*0x5500a3*/
  if ( abstractFlags ) /*0x5500a8*/
  {
    v5 = (char *)this->AbstractClass + this->?; /*0x5500af*/
    LOBYTE(this->?) = 1; /*0x5500b1*/
    this->AbstractClass = v5; /*0x5500b5*/
    v6 = (void *)v8[2]; /*0x5500bd*/
    this->? = *(void **)&stru_A8EB00.?[416]; /*0x5500c1*/
    this->? = v6; /*0x5500c4*/
    this->? = abstractFlags; /*0x5500c7*/
    goto LABEL_8; /*0x5500ca*/
  }
LABEL_7:
  LOBYTE(this->?) = 0; /*0x5500cc*/
LABEL_8:
  if ( LOBYTE(this->customSound_controller[0]) ) /*0x5500d0*/
    BYTE1(this->customSound_controller[0]) = BYTE1(this->customSound_controller[0]) == 0; /*0x5500df*/
  if ( (int)this->AbstractClass >= this->ambientSoundController[4] && this ) /*0x5500ed*/
  {
    v8[0] = this; /*0x5500fe*/
    v7 = (*(int (__thiscall **)(int *, _DWORD *))(g_MissionQueueFrame.random[27] + 16))( /*0x550102*/
           &g_MissionQueueFrame.random[27],
           v8);
    if ( v7 != -1 && v7 < g_MissionQueueFrame.random[31] ) /*0x550112*/
    {
      --g_MissionQueueFrame.random[31]; /*0x550117*/
      for ( ; /*0x55011d*/
            v7 < g_MissionQueueFrame.random[31];
            *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v7 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                 + 4 * v7) )
      {
        ++v7; /*0x550125*/
      }
    }
    __3_YAXPAX_Z(this); /*0x550138*/
  }
}



// ==== 0x00550150  ObjectClass::UpdateCameoProduction  this=ObjectClass  sig=csp ====
void UpdateCameoProduction(ObjectClass *this)
{
  int v1; // edi
  int v2; // ebp
  int *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD v9[4]; // [esp+4h] [ebp-10h] BYREF

  v1 = g_MissionQueueFrame.random[31] - 1; /*0x550159*/
  if ( g_MissionQueueFrame.random[31] - 1 >= 0 ) /*0x55015e*/
  {
    v2 = v9[2]; /*0x550165*/
    do /*0x550170*/
    {
      v3 = *(int **)(g_MissionQueueFrame.random[28] + 4 * v1); /*0x550170*/
      v4 = v3[2]; /*0x550173*/
      v5 = v3[4]; /*0x550176*/
      if ( v4 != -1 ) /*0x55017c*/
      {
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v4 >= v5 ) /*0x550188*/
          goto LABEL_7; /*0x550188*/
        v5 -= *(_DWORD *)&stru_A8EB00.?[416] - v4; /*0x55018a*/
      }
      if ( v5 ) /*0x55018e*/
        goto LABEL_9; /*0x55018e*/
LABEL_7:
      v6 = v3[5]; /*0x550190*/
      if ( !v6 ) /*0x550195*/
      {
LABEL_9:
        *((_BYTE *)v3 + 4) = 0; /*0x5501b4*/
        goto LABEL_10; /*0x5501b4*/
      }
      v7 = v3[6] + *v3; /*0x55019c*/
      *((_BYTE *)v3 + 4) = 1; /*0x55019e*/
      *v3 = v7; /*0x5501a2*/
      v3[2] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x5501a9*/
      v3[3] = v2; /*0x5501ac*/
      v3[4] = v6; /*0x5501af*/
LABEL_10:
      if ( *((_BYTE *)v3 + 80) ) /*0x5501b8*/
        *((_BYTE *)v3 + 81) = *((_BYTE *)v3 + 81) == 0; /*0x5501c7*/
      if ( *v3 >= v3[19] && v3 ) /*0x5501d5*/
      {
        v9[0] = v3; /*0x5501e6*/
        v8 = (*(int (__thiscall **)(int *, _DWORD *))(g_MissionQueueFrame.random[27] + 16))( /*0x5501ea*/
               &g_MissionQueueFrame.random[27],
               v9);
        if ( v8 != -1 && v8 < g_MissionQueueFrame.random[31] ) /*0x5501fa*/
        {
          --g_MissionQueueFrame.random[31]; /*0x5501ff*/
          for ( ; /*0x550205*/
                v8 < g_MissionQueueFrame.random[31];
                *(_DWORD *)(g_MissionQueueFrame.random[28] + 4 * v8 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[28]
                                                                                     + 4 * v8) )
          {
            ++v8; /*0x55020d*/
          }
        }
        __3_YAXPAX_Z(v3); /*0x550220*/
      }
      --v1; /*0x550228*/
    }
    while ( v1 >= 0 ); /*0x550170*/
  }
}



// ==== 0x00550240  ObjectClass::Helper  this=ObjectClass  sig=csp ====
char Helper_550240(ObjectClass *this)
{
  char result; // al
  int i; // esi

  result = g_MissionQueueFrame.random[31]; /*0x550240*/
  for ( i = g_MissionQueueFrame.random[31] - 1; i >= 0; --i ) /*0x55024b*/
    result = TacticalClass::RenderCells(*(TacticalClass **)(g_MissionQueueFrame.random[28] + 4 * i)); /*0x550256*/
  return result; /*0x55025e*/
}



// ==== 0x00550260  TacticalClass::RenderCells  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::RenderCells(TacticalClass *this)
{
  double v1; // st7
  int result; // eax
  int field24; // eax
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  unsigned __int8 v13; // dl
  unsigned __int8 field40_high; // al
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // esi
  int v23; // ecx
  int v24; // ebx
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // esi
  double v38; // [esp+34h] [ebp-60h]
  double v39; // [esp+3Ch] [ebp-58h]
  char v40; // [esp+57h] [ebp-3Dh]
  __int16 v41; // [esp+58h] [ebp-3Ch] BYREF
  char v42; // [esp+5Ah] [ebp-3Ah]
  int TacticalClass_field_4C; // [esp+5Ch] [ebp-38h]
  int v44; // [esp+60h] [ebp-34h]
  int v45; // [esp+64h] [ebp-30h]
  unsigned int field30; // [esp+68h] [ebp-2Ch]
  int v47; // [esp+6Ch] [ebp-28h]
  int v48; // [esp+70h] [ebp-24h]
  int v49; // [esp+74h] [ebp-20h] BYREF
  int v50; // [esp+78h] [ebp-1Ch]
  int v51; // [esp+7Ch] [ebp-18h] BYREF
  int v52; // [esp+80h] [ebp-14h]
  int v53; // [esp+84h] [ebp-10h] BYREF
  int v54; // [esp+88h] [ebp-Ch]
  int v55; // [esp+8Ch] [ebp-8h] BYREF
  int v56; // [esp+90h] [ebp-4h]

  _EBX = this; /*0x550264*/
  result = this->TacticalClass_field_4C; /*0x550268*/
  if ( result > 0 )
  {
    if ( LOBYTE(this->?) )
    {
      return PrepareTacticalClassCellTransform((int *)this); /*0x55027b*/
    }
    else
    {
      if ( (g_MissionQueueFrame.random[43] & 1) == 0 ) /*0x55028f*/
      {
        g_MissionQueueFrame.altNextScenario[16] = -1; /*0x55029c*/
        g_MissionQueueFrame.altNextScenario[15] = 0; /*0x5502a4*/
        g_MissionQueueFrame.altNextScenario[18] = 0; /*0x5502ae*/
        g_MissionQueueFrame.altNextScenario[17] = 1; /*0x5502b7*/
        g_MissionQueueFrame.altNextScenario[20] = -1; /*0x5502be*/
        g_MissionQueueFrame.altNextScenario[19] = 0; /*0x5502c9*/
        g_MissionQueueFrame.altNextScenario[21] = 0; /*0x5502ce*/
        g_MissionQueueFrame.altNextScenario[23] = 1; /*0x5502d5*/
        g_MissionQueueFrame.altNextScenario[25] = 0; /*0x5502dc*/
        g_MissionQueueFrame.altNextScenario[22] = 1; /*0x5502e4*/
        g_MissionQueueFrame.altNextScenario[27] = -1; /*0x5502ea*/
        g_MissionQueueFrame.altNextScenario[24] = 0; /*0x5502f6*/
        g_MissionQueueFrame.altNextScenario[29] = 1; /*0x5502fc*/
        g_MissionQueueFrame.altNextScenario[26] = 1; /*0x550309*/
        g_MissionQueueFrame.altNextScenario[31] = -1; /*0x55030f*/
        g_MissionQueueFrame.altNextScenario[28] = 0; /*0x550318*/
        g_MissionQueueFrame.altNextScenario[30] = 0; /*0x55031e*/
        g_MissionQueueFrame.altNextScenario[32] = 0; /*0x550324*/
        g_MissionQueueFrame.altNextScenario[33] = 0; /*0x55032a*/
        g_MissionQueueFrame.altNextScenario[35] = 0; /*0x55032f*/
        g_MissionQueueFrame.altNextScenario[34] = 1; /*0x55033e*/
        g_MissionQueueFrame.altNextScenario[37] = 1; /*0x550344*/
        g_MissionQueueFrame.altNextScenario[36] = -1; /*0x55034e*/
        g_MissionQueueFrame.altNextScenario[39] = 0; /*0x550354*/
        g_MissionQueueFrame.altNextScenario[38] = 0; /*0x55035e*/
        g_MissionQueueFrame.altNextScenario[41] = -1; /*0x550364*/
        g_MissionQueueFrame.altNextScenario[40] = -1; /*0x55036f*/
        g_MissionQueueFrame.altNextScenario[43] = -1; /*0x550375*/
        LOBYTE(g_MissionQueueFrame.random[43]) |= 1u; /*0x550389*/
        g_MissionQueueFrame.altNextScenario[42] = 0; /*0x55038f*/
        g_MissionQueueFrame.altNextScenario[44] = 0; /*0x550395*/
        g_MissionQueueFrame.altNextScenario[45] = 1; /*0x55039b*/
        g_MissionQueueFrame.altNextScenario[46] = 0; /*0x5503a0*/
        result = atexit(nullsub_21); /*0x5503a6*/
      }
      LOBYTE(result) = BYTE1(_EBX->field50); /*0x5503ae*/
      if ( !(_BYTE)result )
      {
        field24 = _EBX->field24; /*0x5503bc*/
        _EDI = &_EBX->field30; /*0x5503bf*/
        _EBP = &_EBX->field24; /*0x5503c2*/
        field30 = _EBX->field30; /*0x5503c5*/
        v45 = field24; /*0x5503c9*/
        __asm { fild [esp+50h+var_2C] } /*0x5503cd*/
        __asm
        {
          fisub [esp+60h+var_30]
          fstp [esp+60h+var_58]; double
          fild dword ptr [ebp+4]
          fisub dword ptr [edi+4]
          fstp [esp+60h+var_60]; double
        }
        Math::CalcAngle(v38, v39); /*0x5503e8*/
        __asm { fsub ds:dbl_7E2820 } /*0x5503ed*/
        __asm { fmul ds:dbl_7E2818 }
        LOWORD(field30) = Math::RoundToInt(v1); /*0x550401*/
        v7 = (((field30 >> 12) + 1) >> 1) & 7; /*0x55041c*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field24, &v55); /*0x55041f*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &_EBX->field30, &v53); /*0x550430*/
        v8 = _EBX->TacticalClass_field_3C - ZCoordToScreenY(_EBX->TacticalClass_field_2C) - 2; /*0x550445*/
        v9 = ZCoordToScreenY(_EBX->field38); /*0x550448*/
        v41 = 0; /*0x550452*/
        v10 = -2 - v9; /*0x550457*/
        LOBYTE(v9) = _EBX->field44; /*0x550459*/
        v42 = 0; /*0x550463*/
        field30 = 0; /*0x550468*/
        v40 = 1; /*0x550470*/
        if ( (_BYTE)v9 || BYTE1(_EBX->field44) || BYTE2(_EBX->field44) )
        {
          field30 = Random::Range(&Randomizer_Global, -HIBYTE(_EBX->field44), HIBYTE(_EBX->field44)); /*0x5504a6*/
          TacticalClass_field_4C = Random::Range(&Randomizer_Global, -LOBYTE(_EBX->field48), LOBYTE(_EBX->field48)); /*0x5504bf*/
          *(float *)&v44 = COERCE_FLOAT(Random::Range(&Randomizer_Global, -BYTE1(_EBX->field48), BYTE1(_EBX->field48))); /*0x5504d8*/
          v11 = (int)(LOBYTE(_EBX->field44) + field30) < 0 ? 0 : LOBYTE(_EBX->field44) + field30;
          if ( v11 > 255 ) /*0x5504f6*/
            v11 = 255; /*0x5504f8*/
          TacticalClass_field_4C = BYTE1(_EBX->field44) + TacticalClass_field_4C < 0
                                 ? 0
                                 : BYTE1(_EBX->field44) + TacticalClass_field_4C;
          if ( TacticalClass_field_4C > 255 ) /*0x55051c*/
            TacticalClass_field_4C = 255; /*0x55051e*/
          v44 = BYTE2(_EBX->field44) + v44 < 0 ? 0 : BYTE2(_EBX->field44) + v44;
          v12 = v44; /*0x55053a*/
          if ( v44 > 255 ) /*0x550545*/
          {
            v12 = 255; /*0x550547*/
            v44 = 255; /*0x55054c*/
          }
          LOBYTE(v41) = v11; /*0x550556*/
          v45 = (TacticalClass_field_4C >> g_BitMask_Blue << g_BitMask_Green) /*0x550584*/
              | (v12 >> g_BitMask_Red << g_BitShift_Blue);
          HIBYTE(v41) = TacticalClass_field_4C; /*0x55059a*/
          field30 = (v11 >> g_BitShift_Green_0 << g_BitShift_Red) | v45; /*0x5505aa*/
          v42 = v44; /*0x5505ae*/
        }
        else
        {
          v40 = 0; /*0x550485*/
        }
        v13 = BYTE2(_EBX->field40); /*0x5505b2*/
        v45 = (int)&_EBX->field40 + 1; /*0x5505b8*/
        *(float *)&v44 = 1.0; /*0x5505bc*/
        LOBYTE(v51) = BYTE1(_EBX->field40); /*0x5505cd*/
        LOBYTE(v49) = (_BYTE)v51 != 0; /*0x5505d1*/
        LOBYTE(v48) = v13 != 0; /*0x5505d8*/
        field40_high = HIBYTE(_EBX->field40); /*0x5505dc*/
        LOBYTE(v47) = field40_high != 0; /*0x5505e4*/
        if ( BYTE2(_EBX->field50) ) /*0x5505e8*/
        {
          __asm /*0x5505f2*/
          {
            fld dword ptr [ebx+54h]
            fsub dword ptr [ebx+58h]
          }
          TacticalClass_field_4C = _EBX->TacticalClass_field_4C; /*0x5505f8*/
          v44 = TacticalClass_field_4C - (unsigned int)_EBX->AbstractClass; /*0x5505fe*/
          __asm /*0x550602*/
          {
            fimul [esp+50h+var_34]
            fidiv [esp+50h+var_38]
            fadd dword ptr [ebx+58h]
            fstp [esp+50h+var_34]
          }
        }
        if ( stru_A8EB00.ObjectTypeClass[30] ) /*0x550619*/
        {
          if ( LOBYTE(_EBX->field50) ) /*0x55061f*/
          {
            result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550655*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v55,
                       &v53,
                       v45,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       v44);
            LOBYTE(result) = v40; /*0x550658*/
            if ( v40 ) /*0x55065e*/
            {
              v15 = 4 * v7; /*0x55066c*/
              v16 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x55067c*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550688*/
              v17 = v55 + g_MissionQueueFrame.altNextScenario[v15 + 15]; /*0x550698*/
              v52 = v54 + v16; /*0x55069e*/
              v18 = g_MissionQueueFrame.altNextScenario[v15 + 16]; /*0x5506a2*/
              v49 = v17; /*0x5506a8*/
              v50 = v56 + v18; /*0x5506bb*/
              (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x5506d2*/
                g_DSurface_Hidden_2,
                &DSurface_ViewBounds,
                &v49,
                &v51,
                &v41,
                v8,
                v10,
                0,
                1,
                1,
                1,
                1065353216);
              v19 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506e9*/
              v51 = v53 + g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506ef*/
              v20 = g_MissionQueueFrame.altNextScenario[v15 + 17]; /*0x5506f3*/
              v21 = g_MissionQueueFrame.altNextScenario[v15 + 18]; /*0x5506f9*/
              v49 = v55 + v20; /*0x55070e*/
              v52 = v54 + v19; /*0x550719*/
              v50 = v56 + v21; /*0x550734*/
              return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550740*/
                       g_DSurface_Hidden_2,
                       &DSurface_ViewBounds,
                       &v49,
                       &v51,
                       &v41,
                       v8,
                       v10,
                       0,
                       1,
                       1,
                       1,
                       1065353216);
            }
          }
          else if ( v40 ) /*0x550751*/
          {
            v22 = 4 * v7; /*0x55075f*/
            v23 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x55076a*/
            v24 = g_MissionQueueFrame.altNextScenario[v22 + 15]; /*0x550772*/
            v51 = v53 + v24; /*0x550778*/
            v25 = v24 + v55; /*0x550786*/
            v26 = v44; /*0x550788*/
            v52 = v54 + v23; /*0x55078c*/
            v27 = g_MissionQueueFrame.altNextScenario[v22 + 16]; /*0x550790*/
            v49 = v25; /*0x550796*/
            v50 = v56 + v27; /*0x5507a6*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x5507bd*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v44,
              v8,
              v10);
            v28 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507d0*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507d6*/
            v29 = g_MissionQueueFrame.altNextScenario[v22 + 17]; /*0x5507da*/
            v30 = g_MissionQueueFrame.altNextScenario[v22 + 18]; /*0x5507e6*/
            v49 = v55 + v29; /*0x5507ef*/
            v52 = v54 + v28; /*0x5507f8*/
            v50 = v56 + v30; /*0x550813*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, __int16 *, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x55081f*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              &v41,
              v26,
              v8,
              v10);
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 64))( /*0x550841*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v26,
                     v8,
                     v10);
          }
          else
          {
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD, int, int, int, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x550880*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     v45,
                     v8,
                     v10,
                     0,
                     v49,
                     v48,
                     v47,
                     v44);
          }
        }
        else
        {
          result = (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5508f6*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v55,
                     &v53,
                     ((unsigned __int8)v51 >> g_BitShift_Green_0 << g_BitShift_Red)
                   | (v13 >> g_BitMask_Blue << g_BitMask_Green)
                   | (field40_high >> g_BitMask_Red << g_BitShift_Blue),
                     v8,
                     v10,
                     0);
          LOBYTE(result) = v40; /*0x5508f9*/
          if ( v40 ) /*0x5508ff*/
          {
            v31 = 4 * v7; /*0x55090d*/
            v32 = v54 + g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550925*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092b*/
            v33 = g_MissionQueueFrame.altNextScenario[v31 + 15]; /*0x55092f*/
            v52 = v32; /*0x550935*/
            v34 = g_MissionQueueFrame.altNextScenario[v31 + 16]; /*0x550939*/
            v49 = v55 + v33; /*0x550947*/
            v50 = v56 + v34; /*0x550950*/
            (*(void (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x550968*/
              g_DSurface_Hidden_2,
              &DSurface_ViewBounds,
              &v49,
              &v51,
              field30,
              v8,
              v10,
              0);
            v35 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55097b*/
            v51 = v53 + g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550981*/
            v36 = g_MissionQueueFrame.altNextScenario[v31 + 17]; /*0x550985*/
            v37 = g_MissionQueueFrame.altNextScenario[v31 + 18]; /*0x55098b*/
            v52 = v54 + v35; /*0x550999*/
            v49 = v55 + v36; /*0x5509a3*/
            v50 = v56 + v37; /*0x5509bb*/
            return (*(int (__thiscall **)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x5509c7*/
                     g_DSurface_Hidden_2,
                     &DSurface_ViewBounds,
                     &v49,
                     &v51,
                     field30,
                     v8,
                     v10,
                     0);
          }
        }
      }
    }
  }
  return result; /*0x550280*/
}



// ==== 0x005509E0  nullsub_21  this=-  sig=ida-proto ====
void __cdecl nullsub_21()
{
  ; /*0x5509e0*/
}



// ==== 0x005509F0  PrepareTacticalClassCellTransform  this=-  sig=csp ====
int __fastcall sub_5509F0(int *a1)
{
  int *v1; // ebx
  int v2; // eax
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
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
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
  int v38; // esi
  int v39; // edi
  int v41; // [esp+38h] [ebp-158h]
  int v42; // [esp+38h] [ebp-158h]
  int v43; // [esp+38h] [ebp-158h]
  int v44; // [esp+38h] [ebp-158h]
  int v45; // [esp+38h] [ebp-158h]
  int v46; // [esp+38h] [ebp-158h]
  int v47; // [esp+3Ch] [ebp-154h]
  int v48; // [esp+3Ch] [ebp-154h]
  int v49; // [esp+3Ch] [ebp-154h]
  int v50; // [esp+3Ch] [ebp-154h]
  int v51; // [esp+3Ch] [ebp-154h]
  int v52; // [esp+3Ch] [ebp-154h]
  char v53; // [esp+5Fh] [ebp-131h]
  __int16 v54; // [esp+60h] [ebp-130h] BYREF
  unsigned __int8 v55; // [esp+62h] [ebp-12Eh]
  __int16 v56; // [esp+68h] [ebp-128h] BYREF
  unsigned __int8 v57; // [esp+6Ah] [ebp-126h]
  int v58; // [esp+70h] [ebp-120h]
  unsigned int v59; // [esp+74h] [ebp-11Ch]
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
  unsigned __int8 v71[4]; // [esp+ACh] [ebp-E4h] BYREF
  __int64 v72; // [esp+B0h] [ebp-E0h]
  __int64 v73; // [esp+B8h] [ebp-D8h]
  __int64 v74; // [esp+C0h] [ebp-D0h] BYREF
  int v75; // [esp+C8h] [ebp-C8h] BYREF
  int v76; // [esp+CCh] [ebp-C4h]
  _DWORD v77[24]; // [esp+D0h] [ebp-C0h] BYREF
  _DWORD v78[24]; // [esp+130h] [ebp-60h] BYREF

  v1 = a1; /*0x5509fd*/
  LODWORD(v72) = a1; /*0x550a03*/
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
  v2 = v1[9]; /*0x550b2a*/
  v59 = v1[12]; /*0x550b33*/
  v58 = v2; /*0x550b37*/
  v3 = Math::CalcAngle((double)v1[10] - (double)v1[13], (double)(int)v59 - (double)v2); /*0x550b56*/
  LOWORD(v59) = Math::RoundToInt((v3 - 1.570796326794897) * -10430.06004058427); /*0x550b6f*/
  v59 = (((v59 >> 12) + 1) >> 1) & 7; /*0x550b8d*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 9, &v75); /*0x550b91*/
  Coord::To_Screen(g_TacticalClass_Instance, v1 + 12, (int *)&v74); /*0x550ba2*/
  v4 = v1[15] - ZCoordToScreenY(v1[11]) - 2; /*0x550bb7*/
  v5 = -2 - ZCoordToScreenY(v1[14]); /*0x550bc4*/
  v66 = v5; /*0x550bc6*/
  if ( (unsigned int)dword_ABCD44 < PingPongBuffer::GetWriteOffset() || (v53 = 1, !dword_A8EB78) ) /*0x550be3*/
    v53 = 0; /*0x550be5*/
  v6 = *((_BYTE *)v1 + 82); /*0x550bea*/
  v65 = 1.0; /*0x550bed*/
  if ( v6 ) /*0x550bf7*/
  {
    v7 = *v1; /*0x550bfc*/
    v8 = *((float *)v1 + 21) - *((float *)v1 + 22); /*0x550c01*/
    v65 = *((float *)v1 + 19); /*0x550c04*/
    v58 = LODWORD(v65) - v7; /*0x550c0a*/
    v65 = v8 * (double)(LODWORD(v65) - v7) / (double)SLODWORD(v65) + *((float *)v1 + 22); /*0x550c19*/
  }
  v58 = Math::RoundToInt(v65 * 255.0); /*0x550c2c*/
  v9 = *((_BYTE *)v1 + 33); /*0x550c30*/
  v56 = 0; /*0x550c35*/
  v57 = 0; /*0x550c3f*/
  v71[0] = -1; /*0x550c44*/
  v71[1] = -1; /*0x550c49*/
  v71[2] = -1; /*0x550c4e*/
  if ( v9 ) /*0x550c53*/
  {
    v10 = 2 * *((unsigned __int8 *)v1 + 67); /*0x550c64*/
    v11 = 2 * *((unsigned __int8 *)v1 + 65); /*0x550c66*/
    v12 = 2 * *((unsigned __int8 *)v1 + 66); /*0x550c68*/
    if ( v10 > 0xFF ) /*0x550c6f*/
      LOBYTE(v10) = -1; /*0x550c71*/
    if ( v12 > 0xFF ) /*0x550c7c*/
      LOBYTE(v12) = -1; /*0x550c7e*/
    if ( v11 > 0xFF ) /*0x550c89*/
      LOBYTE(v11) = -1; /*0x550c8b*/
    LOBYTE(v60) = v11; /*0x550c90*/
    HIBYTE(v60) = v12; /*0x550c94*/
    v61 = v10; /*0x550c9d*/
    v54 = v60; /*0x550ca1*/
    LOBYTE(v11) = v10; /*0x550ca6*/
  }
  else
  {
    v60 = *(_WORD *)((char *)v1 + 65); /*0x550cb4*/
    v13 = *((_BYTE *)v1 + 66); /*0x550cb9*/
    v61 = *((_BYTE *)v1 + 67); /*0x550cbf*/
    v14 = *((_BYTE *)v1 + 67); /*0x550cc3*/
    LOBYTE(v54) = (unsigned __int8)v60 >> 1; /*0x550cca*/
    HIBYTE(v54) = v13 >> 1; /*0x550cce*/
    LOBYTE(v11) = v14 >> 1; /*0x550cd2*/
  }
  v63 = v75; /*0x550cdf*/
  v64 = v76; /*0x550ce3*/
  v68 = v75; /*0x550ce7*/
  v69 = v76; /*0x550cef*/
  v67 = v74; /*0x550cf7*/
  v62 = v74; /*0x550cff*/
  v15 = v1[7]; /*0x550d03*/
  v55 = v11; /*0x550d11*/
  v70 = 1; /*0x550d15*/
  if ( v15 >= 1 )
  {
    v16 = v59; /*0x550d1f*/
    v17 = v59 & 1; /*0x550d25*/
    LODWORD(v73) = v17; /*0x550d27*/
    while ( 1 )
    {
      if ( v17 ) /*0x550d33*/
      {
        v18 = 4 * v16; /*0x550d3f*/
        v19 = dword_ABC7F8[4 * v16]; /*0x550d42*/
        v20 = dword_ABC7FC[4 * v16]; /*0x550d48*/
        v68 += v19; /*0x550d52*/
        v69 += v20; /*0x550d5a*/
        v21 = dword_ABC800[4 * v16]; /*0x550d5e*/
        v22 = dword_ABC804[v18]; /*0x550d64*/
        v63 += v21; /*0x550d6c*/
        v64 += v22; /*0x550d76*/
        LODWORD(v62) = v19 + v62; /*0x550d84*/
        v23 = v20 + HIDWORD(v62); /*0x550d8c*/
        v24 = v21 + v67; /*0x550d92*/
        v16 = v59; /*0x550d94*/
        HIDWORD(v62) = v23; /*0x550d9a*/
        v1 = (int *)v72; /*0x550d9e*/
        LODWORD(v67) = v24; /*0x550da2*/
        HIDWORD(v67) += v22; /*0x550da6*/
      }
      else if ( (v70 & 1) != 0 ) /*0x550db3*/
      {
        v25 = dword_ABC7F8[4 * v16]; /*0x550dbc*/
        v26 = dword_ABC804[4 * v16]; /*0x550dc2*/
        v68 += v25; /*0x550dca*/
        v64 += v26; /*0x550dd4*/
        LODWORD(v62) = v25 + v62; /*0x550de4*/
        HIDWORD(v67) += v26; /*0x550de8*/
      }
      else
      {
        v27 = dword_ABC7FC[4 * v16]; /*0x550df5*/
        v28 = dword_ABC800[4 * v16]; /*0x550dfb*/
        v69 += v27; /*0x550e03*/
        v63 += v28; /*0x550e0d*/
        HIDWORD(v62) += v27; /*0x550e1d*/
        LODWORD(v67) = v28 + v67; /*0x550e21*/
      }
      if ( !byte_8A0DF0 )
      {
        if ( v53 ) /*0x550e38*/
        {
          v29 = v65; /*0x550e3e*/
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e61*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            &v54,
            COERCE_FLOAT(LODWORD(v65)),
            v4,
            v66);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550e87*/
                                                                                           + 64))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            &v54,
            COERCE_FLOAT(LODWORD(v29)),
            v4,
            v66);
        }
        else
        {
          v57 = v11; /*0x550e98*/
          v56 = v54; /*0x550ea0*/
          Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x550eab*/
          v30 = ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x550f09*/
              | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
              | (v57 >> g_BitMask_Red << g_BitShift_Blue);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f21*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v68,
            &v62,
            v30,
            v4,
            v66,
            0);
          (*(void (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x550f44*/
                                                                                      + 52))(
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            &v63,
            &v67,
            v30,
            v4,
            v66,
            0);
        }
        if ( *((_BYTE *)v1 + 33) && v70 == 1 )
        {
          v54 = *(_WORD *)((char *)v1 + 65); /*0x550f5c*/
          LOBYTE(v11) = *((_BYTE *)v1 + 67); /*0x550f61*/
          v55 = v11; /*0x550f64*/
        }
        else
        {
          v11 = v55 >> 1; /*0x550f8f*/
          v31 = v53 != 0 ? 8 : 64;
          if ( (unsigned __int8)v54 >> 1 < v31 && HIBYTE(v54) >> 1 < v31 && v11 < v31 ) /*0x550fa7*/
          {
LABEL_37:
            v5 = v66; /*0x550fd1*/
            break; /*0x550fd1*/
          }
          v1 = (int *)v72; /*0x550fa9*/
          v16 = v59; /*0x550fad*/
          LOBYTE(v54) = (unsigned __int8)v54 >> 1; /*0x550fb1*/
          HIBYTE(v54) >>= 1; /*0x550fb5*/
          v55 >>= 1; /*0x550fb9*/
        }
      }
      v32 = v1[7]; /*0x550fc1*/
      if ( ++v70 > v32 ) /*0x550fcb*/
        goto LABEL_37; /*0x550fcb*/
      v17 = v73; /*0x550d2d*/
    }
  }
  if ( byte_8A0DF0 && dword_8A0E10 && g_ZBufferDescriptor ) /*0x550ff9*/
  {
    v33 = *((_WORD *)g_ZBufferDescriptor + 18); /*0x550fff*/
    HIDWORD(v73) = 0; /*0x551003*/
    v34 = *((_WORD *)g_ZBufferDescriptor + 2) + v33; /*0x551007*/
    v73 = (unsigned __int16)(v4 + v34 - v76 - dword_886FA4); /*0x551036*/
    v72 = (unsigned __int16)(v5 + v34 - WORD2(v74) - dword_886FA4); /*0x551053*/
    *(float *)&v73 = (double)v73 * 0.000015259022; /*0x551064*/
    v35 = (v58 * v61) >> 8; /*0x551086*/
    v36 = (v58 * HIBYTE(v60)) >> 8; /*0x551089*/
    v37 = (v58 * (unsigned __int8)v60) >> 8; /*0x55108c*/
    *(float *)&v72 = (double)v72 * 0.000015259022; /*0x55108f*/
    ColorStruct::SetRGB( /*0x55109d*/
      v77,
      (unsigned __int16)(v58 * (unsigned __int8)v60) >> 8,
      (unsigned __int16)(v58 * HIBYTE(v60)) >> 8,
      (unsigned __int16)(v58 * v61) >> 8);
    ColorStruct::SetRGB(v78, v37, v36, v35); /*0x5510ac*/
    v38 = v73; /*0x5510b1*/
    *(float *)&v47 = (float)v69; /*0x5510bf*/
    *(float *)&v41 = (float)v68; /*0x5510ce*/
    Tactical::SetCellTransform((char *)v77, 0, v41, v47, v73, 0, 0); /*0x5510d3*/
    *(float *)&v48 = (float)v64; /*0x5510e5*/
    *(float *)&v42 = (float)v63; /*0x5510f4*/
    Tactical::SetCellTransform((char *)v77, 1, v42, v48, v38, 0, 1065353216); /*0x5510f9*/
    v39 = v72; /*0x5510fe*/
    *(float *)&v49 = (float)SHIDWORD(v62); /*0x55110f*/
    *(float *)&v43 = (float)(int)v62; /*0x55111e*/
    Tactical::SetCellTransform((char *)v77, 2, v43, v49, v72, 1065353216, 0); /*0x551123*/
    *(float *)&v50 = (float)v64; /*0x551135*/
    *(float *)&v44 = (float)v63; /*0x551144*/
    Tactical::SetCellTransform((char *)v78, 0, v44, v50, v38, 0, 1065353216); /*0x551149*/
    *(float *)&v51 = (float)SHIDWORD(v67); /*0x55115e*/
    *(float *)&v45 = (float)(int)v67; /*0x55116d*/
    Tactical::SetCellTransform((char *)v78, 1, v45, v51, v39, 1065353216, 1065353216); /*0x551172*/
    *(float *)&v52 = (float)SHIDWORD(v62); /*0x551184*/
    *(float *)&v46 = (float)(int)v62; /*0x551193*/
    Tactical::SetCellTransform((char *)v78, 2, v46, v52, v39, 1065353216, 0); /*0x551198*/
    StructTable::Append(dword_8A0E10, v77); /*0x5511ab*/
    return StructTable::Append(dword_8A0E10, v78); /*0x5511be*/
  }
  else if ( v53 ) /*0x5511d4*/
  {
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, __int16 *, float, int, int))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5511ff*/
                                                                                           + 64))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             &v60,
             COERCE_FLOAT(LODWORD(v65)),
             v4,
             v5);
  }
  else
  {
    v56 = v60; /*0x551216*/
    v57 = v61; /*0x551223*/
    Color::Lerp((unsigned __int8 *)&v56, v58, v71); /*0x55122d*/
    return (*(int (__thiscall **)(int, int *, int *, __int64 *, int, int, int, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 /*0x5512a7*/
                                                                                      + 52))(
             g_DSurface_Hidden_2,
             &DSurface_ViewBounds,
             &v75,
             &v74,
             ((unsigned __int8)v56 >> g_BitShift_Green_0 << g_BitShift_Red)
           | (HIBYTE(v56) >> g_BitMask_Blue << g_BitMask_Green)
           | (v57 >> g_BitMask_Red << g_BitShift_Blue),
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
void __thiscall VectorClass_ptr_LaserDrawClass::Destroy(_DynamicVectorClass_PAVLaserDrawClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5512d6*/
  this->m_10 = 0; /*0x5512d9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5512e0*/
  {
    __3_YAXPAX_Z(v2); /*0x5512e6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5512ee*/
  }
  BYTE1(this->m_C) = 0; /*0x5512f1*/
  this->m_8 = 0; /*0x5512f4*/
}



// ==== 0x00551300  _DynamicVectorClass_PAVLaserDrawClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::GetItemIndex(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x551300*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x551315*/
  else
    return 0; /*0x551307*/
}



// ==== 0x00551320  _VectorClass_PAVLaserDrawClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::Get(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55132a*/
}



// ==== 0x00551330  _VectorClass_PAVLaserDrawClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::Add(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x551332*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55133d*/
  {
    v3 = 0; /*0x55133f*/
    if ( m_8 <= 0 ) /*0x551343*/
      return 1; /*0x551363*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x551345*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55134b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x551354*/
    {
      ++v3; /*0x551356*/
      ++v4; /*0x551357*/
      if ( v3 >= m_8 ) /*0x55135c*/
        return 1; /*0x55135c*/
    }
  }
  return 0; /*0x55135e*/
}



// ==== 0x00551370  _VectorClass_PAVLaserDrawClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::Release(_VectorClass_PAVLaserDrawClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55137c*/
  {
    LOBYTE(this->m_C) = 0; /*0x551386*/
    if ( a3 ) /*0x55138c*/
      v4 = a3; /*0x5513a2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55139e*/
    LOBYTE(this->m_C) = 1; /*0x5513a6*/
    if ( v4 ) /*0x5513aa*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5513b5*/
      {
        m_8 = this->m_8; /*0x5513bc*/
        if ( a2 < m_8 ) /*0x5513c1*/
          m_8 = a2; /*0x5513c3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5513c9*/
          ++i; /*0x5513ce*/
        if ( BYTE1(this->m_C) ) /*0x5513db*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5513e6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5513ee*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5513f7*/
      this->m_8 = a2; /*0x5513ff*/
      BYTE1(this->m_C) = a3 == 0; /*0x551402*/
      return 1; /*0x551408*/
    }
    else
    {
      return 0; /*0x5513af*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLaserDrawClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x551412*/
    return 1; /*0x551418*/
  }
}



// ==== 0x00551420  _VectorClass_PAVLaserDrawClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LaserDrawClass::Remove(_VectorClass_PAVLaserDrawClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55142d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x551433*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55143b*/
  }
  BYTE1(this->m_C) = 0; /*0x55143e*/
  this->m_8 = 0; /*0x551441*/
}



// ==== 0x00551450  _VectorClass_PAVLaserDrawClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::GetSize(_VectorClass_PAVLaserDrawClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x551450*/
    return 0; /*0x551458*/
  m_8 = this->m_8; /*0x55145e*/
  result = 0; /*0x551461*/
  if ( m_8 <= 0 ) /*0x551465*/
    return -1; /*0x55147c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55146b*/
  {
    if ( ++result >= m_8 ) /*0x55147a*/
      return -1; /*0x55147a*/
  }
  return result; /*0x55145a*/
}



// ==== 0x00551490  _VectorClass_PAVLaserDrawClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LaserDrawClass::GetCapacity(_VectorClass_PAVLaserDrawClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x551490*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5514a5*/
  else
    return 0; /*0x551497*/
}



// ==== 0x005514B0  _DynamicVectorClass_PAVLaserDrawClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LaserDrawClass::SetCapacity(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5514bc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5514c2*/
    if ( a3 ) /*0x5514c8*/
      v4 = a3; /*0x5514de*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5514da*/
    LOBYTE(this->m_C) = 1; /*0x5514e2*/
    if ( !v4 ) /*0x5514e6*/
      return 0; /*0x55155a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5514e8*/
    {
      m_8 = this->m_8; /*0x5514ef*/
      if ( a2 < m_8 ) /*0x5514f4*/
        m_8 = a2; /*0x5514f6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5514fc*/
        ++i; /*0x551501*/
      if ( BYTE1(this->m_C) ) /*0x55150e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x551519*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x551521*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55152a*/
    this->m_8 = a2; /*0x551532*/
    BYTE1(this->m_C) = a3 == 0; /*0x551535*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLaserDrawClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55153e*/
  }
  v7 = this->m_8; /*0x551541*/
  if ( v7 < this->m_10 ) /*0x551549*/
    this->m_10 = v7; /*0x55154b*/
  return 1; /*0x55154e*/
}



// ==== 0x00551560  _DynamicVectorClass_PAVLaserDrawClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LaserDrawClass::FindItemIndex(_DynamicVectorClass_PAVLaserDrawClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x551560*/
  result = 0; /*0x551563*/
  if ( m_10 <= 0 ) /*0x551568*/
    return -1; /*0x55157f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55156e*/
  {
    if ( ++result >= m_10 ) /*0x55157d*/
      return -1; /*0x55157d*/
  }
  return result; /*0x551582*/
}



// ==== 0x00551590  _VectorClass_PAVLaserDrawClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LaserDrawClass::QueryInterface(_VectorClass_PAVLaserDrawClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x551593*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LaserDrawClass *>::`vftable'; /*0x551596*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5515a0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515a8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5515b0*/
  }
  BYTE1(this->m_C) = 0; /*0x5515bb*/
  this->m_8 = 0; /*0x5515c1*/
  if ( (a2 & 1) != 0 ) /*0x5515c8*/
    __3_YAXPAX_Z(this); /*0x5515cb*/
  return this->__pad_0; /*0x5515d5*/
}



// ==== 0x005515E0  _DynamicVectorClass_PAVLaserDrawClass::Constructor_VectorClass_LaserDrawClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LaserDrawClass::Constructor_VectorClass_LaserDrawClass___(
        _DynamicVectorClass_PAVLaserDrawClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5515e3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LaserDrawClass *>::`vftable'; /*0x5515e6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5515f0*/
  {
    __3_YAXPAX_Z(v3); /*0x5515f8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x551600*/
  }
  BYTE1(this->m_C) = 0; /*0x55160b*/
  this->m_8 = 0; /*0x551611*/
  if ( (a2 & 1) != 0 ) /*0x551618*/
    __3_YAXPAX_Z(this); /*0x55161b*/
  return this->__pad_0; /*0x551625*/
}



// ==== 0x00551630  WebBrowser::OpenURL  this=WebBrowser  sig=csp ====
bool __thiscall sub_551630(const char *this)
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
  if ( !strlen(this) ) /*0x55164a*/
    return 0; /*0x55164a*/
  GetWindowsDirectoryA(Buffer, 0x104u); /*0x551662*/
  GetTempFileNameA(Buffer, PrefixString, 0, TempFileName); /*0x55167c*/
  strcpy(strrchr(TempFileName, 46), aHtml); /*0x5516b3*/
  FileA = CreateFileA(TempFileName, 0x40000000u, 0, 0, 2u, 0x80u, 0); /*0x5516d2*/
  if ( FileA == (HANDLE)-1 ) /*0x5516d7*/
    return 0; /*0x5516d7*/
  WriteFile(FileA, aTitleViewhtmlT, strlen(aTitleViewhtmlT), &NumberOfBytesWritten, 0); /*0x5516fa*/
  CloseHandle(FileA); /*0x551701*/
  ExecutableA = FindExecutableA(TempFileName, 0, Result); /*0x551720*/
  DeleteFileA(TempFileName); /*0x551723*/
  if ( (int)ExecutableA <= 32 ) /*0x55172c*/
    return 0; /*0x551791*/
  sprintf(CommandLine, "[open] %s", this); /*0x55173c*/
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



// ==== 0x005519B0  VectorClass_ptr_IsometricTileClass::RenderStatusText  this=VectorClass_ptr_IsometricTileClass  sig=csp ====
bool __thiscall DisplayClass::sub_5519B0(int this, int a2, char a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx

  if ( a3 ) /*0x5519b9*/
    return DisplayClass::InsertPriorityText((_DWORD *)this, a2) != 0; /*0x5519ca*/
  v5 = *(_DWORD *)(this + 8); /*0x5519cf*/
  if ( *(_DWORD *)(this + 16) >= v5 ) /*0x5519d7*/
  {
    if ( !*(_BYTE *)(this + 13) && v5 ) /*0x5519e2*/
      return 0; /*0x5519e2*/
    v6 = *(_DWORD *)(this + 20); /*0x5519e4*/
    if ( v6 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->Capacity)(this, v5 + v6, 0) ) /*0x5519f4*/
      return 0; /*0x551a04*/
  }
  v7 = *(_DWORD *)(this + 16); /*0x551a0a*/
  v8 = *(_DWORD *)(this + 4); /*0x551a0d*/
  *(_DWORD *)(this + 16) = v7 + 1; /*0x551a13*/
  *(_DWORD *)(v8 + 4 * v7) = a2; /*0x551a1a*/
  return 1; /*0x5519c9*/
}



// ==== 0x00551A30  ObjectClass::ProcessAutoSave  this=ObjectClass  sig=csp ====
int __thiscall ProcessAutoSave(ObjectClass *this)
{
  int v2; // ebx
  int result; // eax
  _DWORD *ptr_4; // eax
  int v5; // esi
  int v6; // edi
  int v7; // [esp+8h] [ebp-4h]

  v2 = 0; /*0x551a35*/
  result = this->? - 1; /*0x551a3a*/
  if ( result > 0 ) /*0x551a3d*/
  {
    do /*0x551a7d*/
    {
      ptr_4 = this->?; /*0x551a41*/
      v5 = ptr_4[v2 + 1]; /*0x551a44*/
      v6 = ptr_4[v2]; /*0x551a48*/
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 184))(v5); /*0x551a55*/
      if ( v7 < (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 184))(v6) ) /*0x551a67*/
      {
        *((_DWORD *)this->? + v2 + 1) = v6; /*0x551a6c*/
        *((_DWORD *)this->? + v2) = v5; /*0x551a73*/
      }
      ++v2; /*0x551a79*/
      result = this->? - 1; /*0x551a7a*/
    }
    while ( v2 < result ); /*0x551a7d*/
  }
  return result; /*0x551a81*/
}



// ==== 0x00551A90  DisplayClass::InsertPriorityText  this=DisplayClass  sig=csp ====
int __thiscall DisplayClass::InsertPriorityText(DisplayClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int i; // edi
  int j; // eax

  v3 = *(_DWORD *)this->__pad_8; /*0x551a93*/
  if ( *(_DWORD *)this->__pad_10 >= v3 ) /*0x551a9b*/
  {
    if ( !BYTE1(this->DisplayClass_field_0xC[0]) && v3 ) /*0x551aa6*/
      return 0; /*0x551aa6*/
    v4 = *(_DWORD *)&this->__pad_10[4]; /*0x551aa8*/
    if ( v4 <= 0 /*0x551ab8*/
      || !(*((unsigned __int8 (__thiscall **)(DisplayClass *, int, _DWORD))this->DisplayClass_field_0x0 + 2))(
            this,
            v3 + v4,
            0) )
    {
      return 0; /*0x551abf*/
    }
  }
  for ( i = 0; i < *(_DWORD *)this->__pad_10; ++i ) /*0x551ad2*/
  {
    if ( DisplayClass::checkScreenBounds(*((DisplayClass **)&this->DisplayClass_field_0x4->ptr_0 + i), a2) ) /*0x551adb*/
      break; /*0x551ae2*/
  }
  for ( j = *(_DWORD *)this->__pad_10 - 1; /*0x551af2*/
        j >= i;
        *((_DWORD *)&this->DisplayClass_field_0x4->ptr_8 + j) = *((_DWORD *)&this->DisplayClass_field_0x4->ptr_4 + j) )
  {
    --j; /*0x551af7*/
  }
  *((_DWORD *)&this->DisplayClass_field_0x4->ptr_0 + i) = a2; /*0x551b07*/
  ++*(_DWORD *)this->__pad_10; /*0x551b0f*/
  return 1; /*0x551ac1*/
}



// ==== 0x00551B20  LayerClass::Save  this=LayerClass  sig=csp ====
int __thiscall LayerClass::Save(LayerClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // [esp+0h] [ebp-1Ch]

  v2 = a2; /*0x551b22*/
  if ( !a2 ) /*0x551b2b*/
    return -2147467261; /*0x551b2f*/
  v5 = (_DWORD *)this->count; /*0x551b38*/
  v6 = *a2; /*0x551b3b*/
  v8 = a2; /*0x551b46*/
  a2 = v5; /*0x551b47*/
  result = (*(int (__stdcall **)(_DWORD *, _DWORD **, int, _DWORD))(v6 + 16))(v8, &a2, 4, 0); /*0x551b4b*/
  if ( result >= 0 ) /*0x551b50*/
  {
    v7 = 0; /*0x551b56*/
    if ( (int)a2 <= 0 ) /*0x551b5a*/
    {
      return 0; /*0x551b7a*/
    }
    else
    {
      while ( 1 ) /*0x551b6a*/
      {
        result = (*(int (__stdcall **)(_DWORD *, int, int, _DWORD))(*v2 + 16))(v2, this->count + 4 * v7, 4, 0); /*0x551b6a*/
        if ( result < 0 ) /*0x551b6f*/
          break; /*0x551b6f*/
        if ( ++v7 >= (int)a2 ) /*0x551b78*/
          return 0; /*0x551b78*/
      }
    }
  }
  return result; /*0x551b2d*/
}



// ==== 0x00551B90  LayerClass::Load  this=LayerClass  sig=csp ====
int __thiscall LayerClass::Load(LayerClass *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ebx
  int capacity; // ecx
  int v9; // eax
  int v10; // eax
  int count; // edx
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
    v6 = a2; /*0x551bc9*/
    v7 = 0; /*0x551bcd*/
    if ( (int)a2 <= 0 ) /*0x551bd1*/
    {
LABEL_13:
      v12 = 0; /*0x551c2e*/
      if ( (int)v6 > 0 ) /*0x551c32*/
      {
        do /*0x551c4c*/
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(this->count + 4 * v12++)); /*0x551c40*/
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
        capacity = this->capacity; /*0x551be6*/
        if ( this->count < capacity /*0x551c0b*/
          || (*((_BYTE *)this + 13) || !capacity)
          && (v9 = *((_DWORD *)this + 5), v9 > 0)
          && (*(unsigned __int8 (__thiscall **)(LayerClass *, int, _DWORD))(this->items[0] + 8))(this, capacity + v9, 0) )
        {
          v10 = this->count; /*0x551c12*/
          count = this->count; /*0x551c15*/
          this->count = v10 + 1; /*0x551c1b*/
          *(_DWORD *)(count + 4 * v10) = v13; /*0x551c22*/
        }
        v6 = a2; /*0x551c25*/
        if ( ++v7 >= (int)a2 ) /*0x551c2c*/
          goto LABEL_13; /*0x551c2c*/
      }
    }
  }
  return result; /*0x551b9e*/
}



// ==== 0x00551C60  BitStreamIOLCW  this=Straw  sig=csp ====
int __fastcall BitStreamIOLCW(unsigned __int8 *a1, unsigned int a2, int a3)
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
int __fastcall LCW_DecompressCore(_BYTE *a1, _BYTE *a2, int a3)
{
  char *v3; // esi
  _BYTE *v4; // edi
  _BYTE *v5; // edi
  unsigned __int8 v6; // al
  _BYTE *v7; // ebx
  char *v8; // edi
  int v9; // ecx
  char *v10; // edi
  __int16 v11; // cx
  bool v12; // zf
  int v13; // ecx
  char *v14; // edx
  _BYTE *v15; // ebx
  _BYTE *v16; // edi
  bool v17; // zf
  int v18; // ecx
  _BYTE *v19; // eax
  _BYTE *v20; // edi
  __int16 v21; // ax
  char v22; // al
  _BYTE *v25; // [esp+18h] [ebp-20h]
  _BYTE *v27; // [esp+24h] [ebp-14h]
  char *v28; // [esp+28h] [ebp-10h]
  unsigned int v29; // [esp+2Ch] [ebp-Ch]
  int v30; // [esp+30h] [ebp-8h]
  _BYTE *v31; // [esp+34h] [ebp-4h]

  v25 = 0; /*0x551e89*/
  v28 = &a1[a3]; /*0x551eac*/
  v30 = 1; /*0x551eaf*/
  v27 = a2; /*0x551ebc*/
  *a2 = -127; /*0x551ec3*/
  v3 = a1 + 1; /*0x551ec4*/
  a2[1] = *a1; /*0x551ec5*/
  v4 = a2 + 2; /*0x551ec5*/
  do /*0x551fc7*/
  {
    v31 = v4; /*0x551ec6*/
    v5 = a1; /*0x551ec9*/
    v29 = 1; /*0x551ecc*/
LABEL_3:
    while ( 1 ) /*0x551ed5*/
    {
      v6 = *v3; /*0x551ed5*/
      if ( *v3 != v3[64] ) /*0x551eda*/
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
      v13 = v3 - v5; /*0x551f13*/
      v12 = v3 == v5; /*0x551f13*/
      if ( v3 == v5 ) /*0x551f15*/
        break; /*0x551f15*/
      do /*0x551f17*/
      {
        if ( !v13 ) /*0x551f17*/
          break; /*0x551f17*/
        v12 = *v5++ == v6; /*0x551f17*/
        --v13; /*0x551f17*/
      }
      while ( !v12 ); /*0x551f17*/
      if ( !v12 ) /*0x551f19*/
        break; /*0x551f19*/
      if ( v3[v29 - 1] == v5[v29 - 2] ) /*0x551f26*/
      {
        v14 = v3; /*0x551f28*/
        v15 = v5; /*0x551f2a*/
        v16 = v5 - 1; /*0x551f2c*/
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
        v19 = (_BYTE *)(v16 - v15); /*0x551f3b*/
        v5 = v15; /*0x551f3d*/
        if ( (unsigned int)v19 >= v29 ) /*0x551f42*/
        {
          v29 = (unsigned int)v19; /*0x551f44*/
          v25 = v15 - 1; /*0x551f48*/
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
      v21 = (_WORD)v25 - (_WORD)a1; /*0x551fb5*/
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
  return v4 + 1 - a2; /*0x551fde*/
}



// ==== 0x00551FF0  LCWPipe::Constructor  this=LCWPipe  sig=csp ====
_DWORD *__thiscall LCWPipe::Constructor(LCWPipe *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  size_t v6; // edx

  *((_DWORD *)this + 3) = a2; /*0x551ff9*/
  this->LCWPipe_field_0x04 = 0; /*0x552000*/
  *((_DWORD *)this + 2) = 0; /*0x552003*/
  this->q004 = 0; /*0x552006*/
  *((_DWORD *)this + 5) = 0; /*0x552009*/
  *((_DWORD *)this + 6) = 0; /*0x55200c*/
  *((_DWORD *)this + 7) = a3; /*0x552015*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x55201a*/
  v4 = a3 / 128 + 1; /*0x552023*/
  if ( v4 < 128 ) /*0x552029*/
    v4 = 128; /*0x55202b*/
  *((_DWORD *)this + 8) = v4; /*0x552030*/
  v5 = __2_YAPAXI_Z(a3 + v4); /*0x552036*/
  v6 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8); /*0x552041*/
  *((_DWORD *)this + 5) = v5; /*0x552043*/
  *((_DWORD *)this + 6) = __2_YAPAXI_Z(v6); /*0x55204f*/
  *((_WORD *)this + 18) = -1; /*0x552052*/
  return this->__pad_0; /*0x55205a*/
}



// ==== 0x00552060  LCWPipe::Dtor  this=LCWPipe  sig=csp ====
int __thiscall LCWPipe::Dtor(LCWPipe *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x552063*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x552066*/
  __3_YAXPAX_Z(v2); /*0x55206d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x552072*/
  *((_DWORD *)this + 5) = 0; /*0x552075*/
  __3_YAXPAX_Z(v3); /*0x55207d*/
  *((_DWORD *)this + 6) = 0; /*0x552087*/
  return Pipe::Dtor((Pipe *)this); /*0x552093*/
}



// ==== 0x005520A0  LCWPipe::Compress  this=LCWPipe  sig=csp ====
char *__thiscall LCW::Compress(LCWPipe *this, char *Src, signed int Size)
{
  char *v3; // ebx
  signed int v4; // edi
  size_t v6; // ebp
  size_t v7; // eax
  signed int v8; // ebp
  unsigned __int16 v9; // cx
  int v10; // eax
  int v11; // eax
  int v13; // eax
  signed int v14; // ebp
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  int v18; // ebp
  int v19; // eax
  int i; // eax
  int v21; // ebp
  int v22; // eax
  char *v23; // edx
  char *Srca; // [esp+10h] [ebp+4h]
  char *Srcb; // [esp+10h] [ebp+4h]
  char *Srcc; // [esp+10h] [ebp+4h]

  v3 = Src; /*0x5520a1*/
  v4 = Size; /*0x5520a7*/
  if ( !Src || Size < 1 ) /*0x5520b8*/
    return (char *)Delegate::Dispatch((Pipe *)this, (int)Src, Size); /*0x5522bc*/
  Srca = 0; /*0x5520c5*/
  if ( *((_DWORD *)this + 3) == 1 ) /*0x5520cd*/
  {
    while ( 1 ) /*0x5520db*/
    {
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x5520e1*/
      {
        v6 = 4 - this->q004; /*0x5520eb*/
        if ( v4 < v6 ) /*0x5520ef*/
          v6 = v4; /*0x5520f1*/
        memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v6); /*0x5520fe*/
        v3 += v6; /*0x55210b*/
        v7 = v6 + this->q004; /*0x55210d*/
        v4 -= v6; /*0x55210f*/
        this->q004 = v7; /*0x552114*/
        if ( v7 == 4 ) /*0x552117*/
        {
          memcpy((char *)this + 36, *((const void **)this + 5), 4u); /*0x552123*/
          this->q004 = 0; /*0x55212b*/
        }
      }
      if ( v4 <= 0 ) /*0x552134*/
        break; /*0x552134*/
      v8 = *((unsigned __int16 *)this + 18) - this->q004; /*0x552143*/
      if ( v4 < v8 ) /*0x552147*/
        v8 = v4; /*0x552149*/
      memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v8); /*0x552156*/
      v9 = *((_WORD *)this + 18); /*0x552160*/
      v10 = v8 + this->q004; /*0x552164*/
      v4 -= v8; /*0x552169*/
      v3 += v8; /*0x55216b*/
      this->q004 = v10; /*0x55216f*/
      if ( v10 == v9 ) /*0x552172*/
      {
        BitStreamIOLCW(*((unsigned __int8 **)this + 5), *((_DWORD *)this + 6), 0); /*0x55217c*/
        v11 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), *((unsigned __int16 *)this + 19)); /*0x55218e*/
        this->q004 = 0; /*0x552197*/
        *((_WORD *)this + 18) = -1; /*0x5521a0*/
        Srca += v11; /*0x5521a6*/
      }
      if ( v4 <= 0 ) /*0x5521ac*/
        return Srca; /*0x5521ba*/
    }
  }
  else
  {
    v13 = this->q004; /*0x5521bd*/
    if ( v13 > 0 ) /*0x5521c2*/
    {
      v14 = *((_DWORD *)this + 7) - v13; /*0x5521c7*/
      if ( Size < v14 ) /*0x5521cb*/
        v14 = Size; /*0x5521cd*/
      memcpy((void *)(*((_DWORD *)this + 5) + this->q004), v3, v14); /*0x5521da*/
      v15 = v14 + this->q004; /*0x5521e5*/
      v3 += v14; /*0x5521e7*/
      this->q004 = v15; /*0x5521e9*/
      v4 = Size - v14; /*0x5521f1*/
      if ( v15 == *((_DWORD *)this + 7) ) /*0x5521f5*/
      {
        v16 = DecompressCoreLCW(*((_BYTE **)this + 5), *((_BYTE **)this + 6), *((_DWORD *)this + 7)); /*0x5521fe*/
        v17 = *((_WORD *)this + 14); /*0x552203*/
        v18 = v16; /*0x552207*/
        *((_WORD *)this + 18) = v16; /*0x552211*/
        *((_WORD *)this + 19) = v17; /*0x552214*/
        Srcb = (char *)Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x55221d*/
        v19 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v18); /*0x552228*/
        this->q004 = 0; /*0x552231*/
        Srca = &Srcb[v19]; /*0x55223a*/
      }
    }
    for ( i = *((_DWORD *)this + 7); v4 >= i; Srca = v23 ) /*0x552243*/
    {
      v21 = DecompressCoreLCW(v3, *((_BYTE **)this + 6), i); /*0x552254*/
      v22 = *((_DWORD *)this + 7); /*0x552256*/
      *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x552259*/
      v3 += v22; /*0x55225d*/
      v4 -= v22; /*0x55225f*/
      *((_WORD *)this + 18) = v21; /*0x552269*/
      Srcc = &Srca[Delegate::Dispatch((Pipe *)this, (int)this + 36, 4)]; /*0x55227b*/
      v23 = &Srcc[Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v21)]; /*0x55228b*/
      i = *((_DWORD *)this + 7); /*0x55228d*/
    }
    if ( v4 > 0 ) /*0x55229a*/
    {
      memcpy(*((void **)this + 5), v3, v4); /*0x5522a2*/
      this->q004 = v4; /*0x5522aa*/
    }
  }
  return Srca; /*0x5521b7*/
}



// ==== 0x005522D0  LCWPipe::AddRef  this=LCWPipe  sig=csp ====
int __thiscall LCWPipe_Destru::AddRef(LCWPipe *this)
{
  int v2; // edi
  int v3; // eax
  _WORD *v4; // ebx
  int v5; // edi
  int v6; // edi
  int v8; // ebx
  int v9; // edi

  v2 = 0; /*0x5522d5*/
  v3 = this->q004; /*0x5522d7*/
  if ( v3 > 0 ) /*0x5522dc*/
  {
    if ( *((_DWORD *)this + 3) == 1 ) /*0x5522e6*/
    {
      v4 = (_WORD *)this + 18; /*0x5522ee*/
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x5522f1*/
      {
        v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004); /*0x5522ff*/
        this->q004 = 0; /*0x552301*/
      }
      if ( *((int *)this + 4) > 0 ) /*0x55230d*/
      {
        v5 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4) + v2; /*0x552323*/
        v6 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004) + v5; /*0x55232c*/
        this->q004 = 0; /*0x55232e*/
        *v4 = -1; /*0x552335*/
        return v6 + GameClass::GetRelatedObject((Pipe *)this); /*0x552344*/
      }
    }
    else
    {
      v8 = DecompressCoreLCW(*((_BYTE **)this + 5), *((_BYTE **)this + 6), v3); /*0x552355*/
      *((_WORD *)this + 19) = *((_WORD *)this + 8); /*0x55235a*/
      *((_WORD *)this + 18) = v8; /*0x552363*/
      v9 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x552372*/
      v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v8) + v9; /*0x552379*/
      this->q004 = 0; /*0x55237b*/
    }
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x552341*/
}



// ==== 0x00552390  LCWPipe::QueryInterface  this=LCWPipe  sig=csp ====
int *__thiscall LCWPipe_Destru::QueryInterface(LCWPipe *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x552393*/
  *(_DWORD *)this->__pad_0 = &LCWPipe::`vftable'; /*0x552396*/
  __3_YAXPAX_Z(v3); /*0x55239d*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x5523a2*/
  *((_DWORD *)this + 5) = 0; /*0x5523a5*/
  __3_YAXPAX_Z(v4); /*0x5523ad*/
  *((_DWORD *)this + 6) = 0; /*0x5523b7*/
  Pipe::Dtor((Pipe *)this); /*0x5523be*/
  if ( (a2 & 1) != 0 ) /*0x5523c8*/
    __3_YAXPAX_Z(this); /*0x5523cb*/
  return (int *)this->__pad_0; /*0x5523d5*/
}



// ==== 0x005523E0  LCWStraw::Constructor  this=LCWStraw  sig=csp ====
_DWORD *__thiscall LCWStraw::Constructor(LCWStraw *this, int a2, int a3)
{
  int v4; // eax

  this->LCWStraw_field_0x04 = 0; /*0x5523f5*/
  *((_DWORD *)this + 2) = 0; /*0x5523fa*/
  v4 = a3 / 128 + 1; /*0x552400*/
  *((_DWORD *)this + 3) = a2; /*0x552401*/
  *((_DWORD *)this + 8) = v4; /*0x552404*/
  this->q004 = 0; /*0x55240a*/
  *((_DWORD *)this + 5) = 0; /*0x55240d*/
  *((_DWORD *)this + 6) = 0; /*0x552410*/
  *((_DWORD *)this + 7) = a3; /*0x552413*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x552416*/
  *((_DWORD *)this + 5) = __2_YAPAXI_Z(a3 + v4); /*0x552426*/
  if ( !a2 ) /*0x552429*/
    *((_DWORD *)this + 6) = __2_YAPAXI_Z(*((_DWORD *)this + 7) + *((_DWORD *)this + 8)); /*0x55243c*/
  return this->__pad_0; /*0x552441*/
}



// ==== 0x00552450  LCWStraw::Dtor  this=LCWStraw  sig=csp ====
int __thiscall LCWStraw::Dtor(LCWStraw *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x552453*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x552456*/
  __3_YAXPAX_Z(v2); /*0x55245d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x552462*/
  *((_DWORD *)this + 5) = 0; /*0x552465*/
  __3_YAXPAX_Z(v3); /*0x55246d*/
  *((_DWORD *)this + 6) = 0; /*0x552477*/
  return Straw::Dtor((Straw *)this); /*0x552483*/
}



// ==== 0x00552490  LCWStraw::DecompressReader  this=LCWStraw  sig=csp ====
int __thiscall LCW::DecompressReader(LCWStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  unsigned __int16 *v8; // ebx
  unsigned __int8 *v9; // edi
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  void *v13; // [esp-10h] [ebp-20h]
  int v14; // [esp+Ch] [ebp-4h]

  v3 = a2; /*0x552493*/
  v14 = 0; /*0x55249c*/
  if ( !a2 ) /*0x5524a4*/
    return 0; /*0x5524a4*/
  v5 = Size; /*0x5524aa*/
  if ( Size < 1 ) /*0x5524b1*/
    return 0; /*0x5525e3*/
  do /*0x5524c0*/
  {
    v6 = this->q004; /*0x5524c0*/
    if ( v6 > 0 ) /*0x5524c5*/
    {
      v7 = v5; /*0x5524c9*/
      if ( v5 >= v6 ) /*0x5524cb*/
        v7 = this->q004; /*0x5524cd*/
      if ( *((_DWORD *)this + 3) == 1 ) /*0x5524d6*/
        memcpy(v3, (const void *)(*((_DWORD *)this + 5) + *((unsigned __int16 *)this + 19) - v6), v7); /*0x5524e6*/
      else
        memcpy(v3, (const void *)(*((_DWORD *)this + 6) + *((unsigned __int16 *)this + 18) - v6 + 4), v7); /*0x5524fa*/
      v3 += v7; /*0x552509*/
      v5 -= v7; /*0x55250b*/
      Size = v5; /*0x552511*/
      this->q004 -= v7; /*0x552515*/
      v14 += v7; /*0x552518*/
    }
    if ( !v5 ) /*0x55251e*/
      break; /*0x55251e*/
    if ( *((_DWORD *)this + 3) == 1 ) /*0x552528*/
    {
      v8 = (unsigned __int16 *)this + 18; /*0x55252a*/
      if ( Delegate::Invoke((Straw *)this, (int)this + 36, 4) != 4 ) /*0x55253a*/
        return v14; /*0x55253a*/
      v9 = (unsigned __int8 *)(*((_DWORD *)this + 5) + *((_DWORD *)this + 7) + *((_DWORD *)this + 8) - *v8); /*0x552553*/
      if ( Delegate::Invoke((Straw *)this, (int)v9, *v8) != *v8 ) /*0x552564*/
        return v14; /*0x552564*/
      BitStreamIOLCW(v9, *((_DWORD *)this + 5), 0); /*0x55256d*/
      v5 = Size; /*0x552572*/
      this->q004 = *((unsigned __int16 *)this + 19); /*0x55257c*/
    }
    else
    {
      v10 = Delegate::Invoke((Straw *)this, *((_DWORD *)this + 5), *((_DWORD *)this + 7)); /*0x55258b*/
      *((_WORD *)this + 19) = v10; /*0x552593*/
      if ( !v10 ) /*0x552597*/
        return v14; /*0x552597*/
      v11 = DecompressCoreLCW(*((_BYTE **)this + 5), (_BYTE *)(*((_DWORD *)this + 6) + 4), v10); /*0x5525ab*/
      v13 = (void *)*((_DWORD *)this + 6); /*0x5525b6*/
      *((_WORD *)this + 18) = v11; /*0x5525b7*/
      memcpy(v13, (char *)this + 36, 4u); /*0x5525ba*/
      this->q004 = *((unsigned __int16 *)this + 18) + 4; /*0x5525ca*/
    }
  }
  while ( v5 > 0 ); /*0x5524c0*/
  return v14; /*0x5525da*/
}



// ==== 0x005525F0  LCWStraw::QueryInterface  this=LCWStraw  sig=csp ====
int *__thiscall LCWStraw_Destru::QueryInterface(LCWStraw *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x5525f3*/
  *(_DWORD *)this->__pad_0 = &LCWStraw::`vftable'; /*0x5525f6*/
  __3_YAXPAX_Z(v3); /*0x5525fd*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x552602*/
  *((_DWORD *)this + 5) = 0; /*0x552605*/
  __3_YAXPAX_Z(v4); /*0x55260d*/
  *((_DWORD *)this + 6) = 0; /*0x552617*/
  Straw::Dtor((Straw *)this); /*0x55261e*/
  if ( (a2 & 1) != 0 ) /*0x552628*/
    __3_YAXPAX_Z(this); /*0x55262b*/
  return (int *)this->__pad_0; /*0x552635*/
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



// ==== 0x00552B10  Scenario::ComputeDisplayPosition  this=Scenario  sig=csp ====
int __thiscall Scenario::ComputeDisplayPosition(Scenario *this)
{
  LoadingScreen *v1; // ebp
  int v2; // edi
  int v3; // eax
  void *v4; // ebx
  char *v5; // eax
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ebx
  int v10; // eax

  v1 = g_DisplayWidth; /*0x552b12*/
  v2 = 640; /*0x552b20*/
  if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b2b*/
    v2 = 800; /*0x552b2d*/
  if ( *(_DWORD *)&dword_A8B238 ) /*0x552b3b*/
  {
    v9 = 480; /*0x552b9a*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552ba2*/
      v9 = 600; /*0x552ba4*/
    v10 = (int)*(&g_DisplayWidth + 1); /*0x552baa*/
    this->Scenario_field_0x24 = v2; /*0x552baf*/
    this->Scenario_field_0x28 = (void *)v9; /*0x552bb4*/
    this->Scenario_field_0x20 = (void *)((v10 - v9) / 2); /*0x552bc6*/
    result = (int)&v1->__pad_0[-v2] / 2; /*0x552bc9*/
    this->Scenario_field_0x1C = (void *)result; /*0x552bcd*/
  }
  else
  {
    v3 = 480; /*0x552b3f*/
    if ( g_DisplayWidth != (LoadingScreen *)640 ) /*0x552b44*/
      v3 = 600; /*0x552b46*/
    v4 = (void *)(v3 - 80); /*0x552b4b*/
    v5 = (char *)&(*(&g_DisplayWidth + 1))[1].LoadingScreen_field_0x10 - v3; /*0x552b5c*/
    this->Scenario_field_0x14 = (void *)v2; /*0x552b5e*/
    this->Scenario_field_0x24 = v2; /*0x552b64*/
    v6 = (int)(v5 - 80) / 2; /*0x552b6f*/
    this->Scenario_field_0x10 = (void *)v6; /*0x552b71*/
    v6 += 40; /*0x552b74*/
    v7 = (int)&v1->__pad_0[-v2] / 2; /*0x552b76*/
    this->Scenario_field_0x34 = (void *)v2; /*0x552b78*/
    this->Scenario_field_0xC = (void *)v7; /*0x552b7b*/
    this->Scenario_field_0x1C = (void *)v7; /*0x552b7e*/
    this->Scenario_field_0x20 = (void *)v6; /*0x552b81*/
    this->Scenario_field_0x2C = (void *)v7; /*0x552b84*/
    result = (int)v4 + v6; /*0x552b88*/
    this->Scenario_field_0x28 = v4; /*0x552b8b*/
    this->Scenario_field_0x18 = (void *)40; /*0x552b8f*/
    this->Scenario_field_0x30 = (void *)result; /*0x552b92*/
    this->Scenario_field_0x38 = (void *)40; /*0x552b95*/
  }
  return result; /*0x552b87*/
}



// ==== 0x00552BE0  Scenario::ComputeDialogPos  this=Scenario  sig=csp ====
_DWORD *__thiscall Scenario::ComputeDialogPos(Scenario *this, _DWORD *a2)
{
  char *Scenario_field_0x2C; // edx
  char *Scenario_field_0x30; // ecx
  _DWORD *result; // eax
  char *v5; // edx
  int *v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // [esp+4h] [ebp-8h] BYREF

  if ( *(_DWORD *)&dword_A8B238 ) /*0x552beb*/
  {
    v6 = Copy8Bytes(&v11, (int *)&this->Scenario_field_0x1C); /*0x552c3b*/
    v7 = *v6; /*0x552c40*/
    v8 = v6[1]; /*0x552c48*/
    result = a2; /*0x552c54*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552c52*/
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
    Scenario_field_0x2C = (char *)this->Scenario_field_0x2C; /*0x552bf8*/
    Scenario_field_0x30 = (char *)this->Scenario_field_0x30; /*0x552bff*/
    result = a2; /*0x552c02*/
    if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x552bfd*/
      v5 = Scenario_field_0x2C + 84; /*0x552c06*/
    else
      v5 = Scenario_field_0x2C + 164; /*0x552c1f*/
    *a2 = v5; /*0x552c0c*/
    a2[1] = Scenario_field_0x30 + 7; /*0x552c0e*/
  }
  return result; /*0x552c11*/
}



// ==== 0x00552C90  Map::Load  this=Scenario  sig=ida-proto ====
int sub_552C90()
{
  int result; // eax

  result = -1; /*0x552c96*/
  if ( dword_A8B238[0] )
    return g_DisplayWidth != 640 ? 406 : 326;
  return result; /*0x552cb6*/
}



// ==== 0x00552CC0  SessionClass::Load  this=SessionClass  sig=csp ====
_DWORD *__thiscall sub_552CC0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  _DWORD *v4; // eax
  void *PlayerSide; // eax
  int v6; // esi
  char *v7; // ecx

  if ( this->SessionClass_field_08
    || ((Debug::Log_0(aLoadmdMix), (v2 = __2_YAPAXI_Z(0x28u)) == 0)
      ? (result = 0)
      : (result = MixFileClass::FromFile(v2, aLoadmdMix_0, (int)dword_886980)),
        (this->SessionClass_field_08 = result) != 0) )
  {
    if ( this->MPGameMode
      || ((v4 = __2_YAPAXI_Z(0x28u)) == 0
        ? (result = 0)
        : (result = MixFileClass::FromFile(v4, aLoadMix, (int)dword_886980)),
          (this->MPGameMode = result) != 0) )
    {
      if ( g_GameMode_Current[0] ) /*0x552d36*/
      {
        PlayerSide = (void *)SessionClass::GetPlayerSide(*(_DWORD *)Game_PlayerInfoArray); /*0x552d51*/
        return PaletteManager::Load(PlayerSide); /*0x552d58*/
      }
      else
      {
        v6 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x72b3e8*/
        if ( !dword_B0FB80 ) /*0x72b3ea*/
          LoadPaletteSimple(off_844BAC, &dword_B0FB7C, &dword_B0FB80); /*0x72b3fc*/
        if ( !dword_B0FB88 ) /*0x72b408*/
        {
          if ( v6 ) /*0x72b40c*/
          {
            v7 = off_844BB4[0]; /*0x72b420*/
            if ( v6 != 1 ) /*0x72b433*/
              v7 = off_844BB8; /*0x72b435*/
            LoadPaletteSimple(v7, &dword_B0FB84, &dword_B0FB88); /*0x72b43b*/
          }
          else
          {
            LoadPaletteSimple(off_844BB0[0], &dword_B0FB84, &dword_B0FB88); /*0x72b41e*/
          }
        }
        result = (_DWORD *)dword_B0FB90; /*0x72b440*/
        if ( !dword_B0FB90 ) /*0x72b448*/
          return (_DWORD *)LoadPaletteSimple(off_844BBC, &dword_B0FB8C, &dword_B0FB90); /*0x72b45a*/
      }
    }
  }
  return result; /*0x552d5d*/
}



// ==== 0x00552D60  LoadingScreen::Render  this=LoadingScreen  sig=csp ====
const wchar_t *__thiscall LoadingScreen::Render(LoadingScreen *this)
{
  const wchar_t *result; // eax
  wchar_t *v3; // esi
  int v4; // ebx
  LoadingScreen *v5; // edi
  char *p_uniqueId; // ebx
  int Value; // esi
  char *BackgroundImage; // edi
  char *OverlayImage; // esi
  int v10; // edi
  int v11; // ebx
  int _72B380; // eax
  int LoadingScreen_field_0x0C; // ecx
  int LoadingScreen_field_0x10; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  Color *LoadScreenAnim; // esi
  size_t LoadingScreen_field_0x3C; // eax
  void *ptr_4; // ecx
  int v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // edi
  int LoadingScreen_field_0x04; // ebx
  int v26; // ebp
  _BYTE *v27; // eax
  int PlayerSide; // ebx
  char *v29; // eax
  int v30; // edi
  void *v31; // ecx
  ObjectClass *v32; // eax
  Surface *v33; // esi
  int *v34; // eax
  int v35; // edx
  Color *ColorScheme; // eax
  int v37; // eax
  unsigned __int16 *StringCSF; // edi
  int v39; // ecx
  int v40; ... [33253 chars total]



// ==== 0x00554100  LoadingScreen::AdjustForResolution  this=LoadingScreen  sig=csp ====
int __thiscall LoadingScreen::AdjustForResolution(LoadingScreen *this)
{
  int result; // eax

  if ( (int)g_DisplayWidth >= 800 ) /*0x554110*/
  {
    result = (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2 + this->LoadingScreen_field_0x04; /*0x554137*/
    *(_DWORD *)this->__pad_0 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x554139*/
    this->LoadingScreen_field_0x04 = result; /*0x55413b*/
  }
  return result; /*0x55413f*/
}



// ==== 0x00554150  LoadingScreen::CalcProgressBarRect  this=LoadingScreen  sig=csp ====
int *__thiscall LoadingScreen::CalcProgressBarRect(LoadingScreen *this)
{
  int v1; // esi
  int v2; // edi

  if ( g_DisplayWidth == (LoadingScreen *)640 ) /*0x554161*/
  {
    v1 = 16; /*0x554163*/
    v2 = 235; /*0x554168*/
  }
  else
  {
    v1 = 20; /*0x55416f*/
    v2 = 300; /*0x554174*/
  }
  if ( (int)g_DisplayWidth >= 800 ) /*0x55418b*/
  {
    v1 += (int)&g_DisplayWidth[-13].LoadingScreen_field_0x20 / 2; /*0x55419a*/
    v2 += (int)&(*(&g_DisplayWidth + 1))[-10].LoadingScreen_field_0x28 / 2; /*0x5541a8*/
  }
  *(_DWORD *)this->__pad_0 = v1; /*0x5541ac*/
  this->LoadingScreen_field_0x04 = v2; /*0x5541ae*/
  this->LoadingScreen_field_0x08 = 200; /*0x5541b3*/
  this->LoadingScreen_field_0x0C = 20; /*0x5541b6*/
  return (int *)this->__pad_0; /*0x5541b1*/
}



// ==== 0x005541C0  Render_Render_5541C0  this=-  sig=csp ====
int __fastcall Render_Render_5541C0(unsigned __int16 *a1, int a2, int a3, int a4, int a5, char a6, char a7)
{
  int v8; // edx
  struct tagRECT *v10; // [esp+0h] [ebp-20h]
  int v11; // [esp+4h] [ebp-1Ch]
  int dy; // [esp+8h] [ebp-18h] BYREF
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14[4]; // [esp+10h] [ebp-10h] BYREF

  dy = 0; /*0x5541dd*/
  v13 = 0; /*0x5541e5*/
  Text::Layout(g_FogOfWarState, a1, &dy, &v13, a5); /*0x5541ed*/
  if ( a7 ) /*0x5541f8*/
  {
    v8 = a5; /*0x5541fa*/
    dy = a5; /*0x5541fc*/
  }
  else
  {
    v8 = dy; /*0x554202*/
  }
  v14[1] = a4; /*0x554213*/
  v14[3] = v13; /*0x55421b*/
  v14[0] = a3; /*0x55421f*/
  v14[2] = v8; /*0x554225*/
  if ( (a6 & 1) != 0 ) /*0x55422a*/
  {
    v14[0] = a3 + (a5 - v8) / 2; /*0x554237*/
  }
  else if ( (a6 & 2) != 0 ) /*0x55423f*/
  {
    v14[0] = a5 + a3 - v8; /*0x554245*/
  }
  Rect::Inflate(v10, v11, dy); /*0x554252*/
  return DSurface::FillRectWithColor(v14, a2, 0, 0x9Fu); /*0x554269*/
}



// ==== 0x00554280  Render_Render  this=Text  sig=csp ====
int __fastcall sub_554280(unsigned __int16 *a1, int a2, int *a3, unsigned __int16 a4, char a5)
{
  int v5; // esi
  int v8; // ecx
  int v9; // edx
  int v11[4]; // [esp+14h] [ebp-10h] BYREF

  v5 = a3[1]; /*0x55428a*/
  v8 = *a3; /*0x554294*/
  v9 = *a3 + a3[2]; /*0x55429b*/
  v11[3] = v5 + a3[3]; /*0x55429d*/
  v11[0] = v8; /*0x5542a5*/
  v11[2] = v9; /*0x5542b0*/
  v11[1] = v5; /*0x5542c7*/
  return PrintFontLayout( /*0x554341*/
           a2,
           a1,
           v11,
           (_DWORD *)g_FogOfWarState,
           (unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Red) << g_BitShift_Green_0)
         | (((unsigned __int8)((unsigned __int8)(a4 >> g_BitMask_Green) << g_BitMask_Blue)
           | ((unsigned __int8)((unsigned __int8)(a4 >> g_BitShift_Blue) << g_BitMask_Red) << 8)) << 8),
           a5,
           12,
           0,
           0,
           0);
}



// ==== 0x00554370  LoadProgressMgr::ReleaseBuffer  this=LoadProgressMgr  sig=csp ====
void __thiscall LoadProgressMgr::ReleaseBuffer(LoadProgressMgr *this)
{
  char v2; // al
  char v3; // al
  void (__thiscall ***LoadProgressMgr_field_0x04)(_DWORD, int); // ecx
  void (__thiscall ***LoadProgressMgr_field_0x08)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  ObjectClass *v7; // [esp+0h] [ebp-8h]
  ObjectClass *v8; // [esp+0h] [ebp-8h]

  if ( *((_BYTE *)this + 80) && *((_DWORD *)this + 17) ) /*0x55437b*/
    __3_YAXPAX_Z(*((void **)this + 17)); /*0x554383*/
  v2 = *((_BYTE *)this + 81); /*0x55438b*/
  *((_DWORD *)this + 17) = 0; /*0x55438e*/
  if ( v2 && *((_DWORD *)this + 18) ) /*0x554395*/
    __3_YAXPAX_Z(*((void **)this + 18)); /*0x55439d*/
  v3 = *((_BYTE *)this + 82); /*0x5543a5*/
  *((_DWORD *)this + 18) = 0; /*0x5543a8*/
  if ( v3 && *((_DWORD *)this + 19) ) /*0x5543af*/
    __3_YAXPAX_Z(*((void **)this + 19)); /*0x5543b7*/
  *((_DWORD *)this + 19) = 0; /*0x5543bf*/
  LoadProgressMgr_Release(v7); /*0x5543c2*/
  LoadProgressMgr_Release_72B870(v8); /*0x5543c7*/
  LoadProgressMgr_field_0x04 = (void (__thiscall ***)(_DWORD, int))this->LoadProgressMgr_field_0x04; /*0x5543cc*/
  if ( LoadProgressMgr_field_0x04 ) /*0x5543d1*/
  {
    (**LoadProgressMgr_field_0x04)(LoadProgressMgr_field_0x04, 1); /*0x5543d7*/
    this->LoadProgressMgr_field_0x04 = 0; /*0x5543d9*/
  }
  LoadProgressMgr_field_0x08 = (void (__thiscall ***)(_DWORD, int))this->LoadProgressMgr_field_0x08; /*0x5543dc*/
  if ( LoadProgressMgr_field_0x08 ) /*0x5543e1*/
  {
    (**LoadProgressMgr_field_0x08)(LoadProgressMgr_field_0x08, 1); /*0x5543e7*/
    this->LoadProgressMgr_field_0x08 = 0; /*0x5543e9*/
  }
  v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 24); /*0x5543ec*/
  if ( v6 ) /*0x5543f1*/
    (**v6)(v6, 1); /*0x5543f7*/
  *((_DWORD *)this + 24) = 0; /*0x5543f9*/
}



// ==== 0x00554400  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_554400(ObjectClass *this, int a2, int a3)
{
  int v3; // eax

  if ( a2 != 4526 ) /*0x55440a*/
    return 0; /*0x554428*/
  v3 = this->customSound_controller[4]; /*0x55440c*/
  if ( v3 ) /*0x554417*/
    (*((void (__thiscall **)(ObjectClass *, int, _DWORD, int))g_DSurface_Hidden->AbstractClass + 1))( /*0x554420*/
      g_DSurface_Hidden,
      v3,
      0,
      1);
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
  dword_ABCA10 = (int)&DynamicVectorClass<LightSourceClass *>::`vftable'; /*0x55465d*/
  dword_ABCA24 = 10; /*0x554667*/
  dword_ABCA20 = 0; /*0x554671*/
  return atexit(sub_554680); /*0x55467c*/
}



// ==== 0x00554680  sub_554680  this=-  sig=ida-proto ====
void __cdecl sub_554680()
{
  dword_ABCA10 = (int)&VectorClass<LightSourceClass *>::`vftable'; /*0x554688*/
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
  dword_ABCA40 = (int)&DynamicVectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x5546dd*/
  dword_ABCA54 = 10; /*0x5546e7*/
  dword_ABCA50 = 0; /*0x5546f1*/
  return atexit(sub_554700); /*0x5546fc*/
}



// ==== 0x00554700  sub_554700  this=-  sig=ida-proto ====
void __cdecl sub_554700()
{
  if ( (byte_ABC9C0 & 1) == 0 ) /*0x55470a*/
  {
    dword_ABCA40 = (int)&VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x55470e*/
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
_DWORD *__thiscall LightSourceClass::Construct(
        LightSourceClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554763*/
  this->LightTint[0] = a7; /*0x554774*/
  this->LightIntensity = a6; /*0x554777*/
  this->LightTint[1] = a8; /*0x55477e*/
  this->LightTint[2] = a9; /*0x554788*/
  this->DetailLevel = 2; /*0x55478f*/
  this->Location[0] = a2; /*0x554796*/
  this->Activated = 0; /*0x55479c*/
  this->AbstractClass = &LightSourceClass::`vftable'; /*0x5547a0*/
  this->Location[1] = a3; /*0x5547a6*/
  this->LightVisibility = a5; /*0x5547ad*/
  this->? = &LightSourceClass::`vftable'; /*0x5547b0*/
  this->Location[2] = a4; /*0x5547b7*/
  this->? = &LightSourceClass::`vftable'; /*0x5547ba*/
  this->? = &LightSourceClass::`vftable'; /*0x5547c1*/
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5547fd*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v10 = g_MissionQueueFrame.random[133]++; /*0x55480a*/
    *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v10) = this; /*0x554819*/
  }
  return &this->AbstractClass; /*0x55481e*/
}



// ==== 0x00554830  LightSourceClass::Constructor  this=LightSourceClass  sig=csp ====
int __thiscall LightSourceClass::Constructor(LightSourceClass *this)
{
  int v2; // edx
  int v3; // eax

  AbstractClass::Constructor((AbstractClass *)this); /*0x554833*/
  this->LightIntensity = 0; /*0x55483d*/
  this->LightTint[0] = 0; /*0x554840*/
  this->LightTint[1] = 0; /*0x554843*/
  this->LightTint[2] = 0; /*0x554846*/
  this->Location[0] = g_MissionQueueFrame.random[125]; /*0x55484f*/
  this->Location[1] = g_MissionQueueFrame.random[126]; /*0x554857*/
  v2 = g_MissionQueueFrame.random[127]; /*0x55485a*/
  this->LightVisibility = 0; /*0x554860*/
  this->Activated = 0; /*0x554863*/
  this->Location[2] = v2; /*0x554866*/
  this->AbstractClass = &LightSourceClass::`vftable'; /*0x554869*/
  this->? = &LightSourceClass::`vftable'; /*0x55486f*/
  this->? = &LightSourceClass::`vftable'; /*0x554876*/
  this->? = &LightSourceClass::`vftable'; /*0x55487d*/
  if ( g_MissionQueueFrame.random[133] < g_MissionQueueFrame.random[131] /*0x5548b6*/
    || (BYTE1(g_MissionQueueFrame.random[132]) || !g_MissionQueueFrame.random[131])
    && g_MissionQueueFrame.random[134] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[129] + 8))(
         &g_MissionQueueFrame.random[129],
         g_MissionQueueFrame.random[131] + g_MissionQueueFrame.random[134],
         0) )
  {
    v3 = g_MissionQueueFrame.random[133]++; /*0x5548c3*/
    *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v3) = this; /*0x5548d2*/
  }
  return (int)this; /*0x5548d7*/
}



// ==== 0x005549A0  ObjectClass::Map_Reset_5549A0  this=ObjectClass  sig=csp ====
void Map_Reset_5549A0(ObjectClass *this)
{
  int v1; // edx
  _DWORD *v2; // esi
  bool v3; // zf
  int v4; // eax
  bool v5; // zf
  int v6; // eax

  v1 = g_MissionQueueFrame.random[133]; /*0x5549a0*/
  byte_829AE4 = 0; /*0x5549a6*/
  if ( g_MissionQueueFrame.random[133] ) /*0x5549af*/
  {
    v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549b2*/
    do /*0x5549fc*/
    {
      if ( *v2 ) /*0x5549b8*/
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v2 + 32))(*v2, 1); /*0x5549c2*/
        v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549c5*/
        v1 = g_MissionQueueFrame.random[133]; /*0x5549cb*/
      }
      v3 = v1 == 0; /*0x5549d1*/
      if ( v1 > 0 ) /*0x5549d3*/
      {
        --v1; /*0x5549d5*/
        v4 = 0; /*0x5549d6*/
        v3 = v1 == 0; /*0x5549d8*/
        g_MissionQueueFrame.random[133] = v1; /*0x5549da*/
        if ( v1 > 0 ) /*0x5549e0*/
        {
          do /*0x5549f8*/
          {
            v2[v4] = v2[v4 + 1]; /*0x5549e6*/
            v1 = g_MissionQueueFrame.random[133]; /*0x5549e9*/
            v2 = (_DWORD *)g_MissionQueueFrame.random[130]; /*0x5549ef*/
            ++v4; /*0x5549f5*/
          }
          while ( v4 < g_MissionQueueFrame.random[133] ); /*0x5549f8*/
          v3 = g_MissionQueueFrame.random[133] == 0; /*0x5549fa*/
        }
      }
    }
    while ( !v3 ); /*0x5549fc*/
  }
  if ( g_MissionQueueFrame.random[145] ) /*0x554a06*/
  {
    do /*0x554a4a*/
    {
      __3_YAXPAX_Z(*(void **)g_MissionQueueFrame.random[142]); /*0x554a11*/
      v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a1f*/
      if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a21*/
      {
        v6 = 0; /*0x554a24*/
        v5 = g_MissionQueueFrame.random[145]-- == 1; /*0x554a26*/
        if ( g_MissionQueueFrame.random[145] > 0 ) /*0x554a2e*/
        {
          do /*0x554a46*/
          {
            ++v6; /*0x554a36*/
            *(_DWORD *)(g_MissionQueueFrame.random[142] + 4 * v6 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[142] /*0x554a3a*/
                                                                                  + 4 * v6);
          }
          while ( v6 < g_MissionQueueFrame.random[145] ); /*0x554a46*/
          v5 = g_MissionQueueFrame.random[145] == 0; /*0x554a48*/
        }
      }
    }
    while ( !v5 ); /*0x554a4a*/
  }
  byte_829AE4 = 1; /*0x554a4c*/
}



// ==== 0x00554A60  Trigger::EnableOnce  this=LightSourceClass  sig=csp ====
int __thiscall Trigger::EnableOnce(Trigger *this, char a2)
{
  int result; // eax

  LOBYTE(result) = this->Trigger_field_0x48; /*0x554a60*/
  if ( !(_BYTE)result ) /*0x554a65*/
  {
    LOBYTE(this->Trigger_field_0x48) = 1; /*0x554a6b*/
    return TacticalClass::ScrollView((TacticalClass *)this, a2); /*0x554a70*/
  }
  return result; /*0x554a75*/
}



// ==== 0x00554A80  MapClass::ScrollOnce  this=LightSourceClass  sig=csp ====
int __thiscall MapClass::ScrollOnce(int this, char a2)
{
  int result; // eax

  LOBYTE(result) = *(_BYTE *)(this + 72); /*0x554a80*/
  if ( (_BYTE)result ) /*0x554a85*/
  {
    *(_BYTE *)(this + 72) = 0; /*0x554a8b*/
    return TacticalClass::ScrollView((_DWORD *)this, a2); /*0x554a90*/
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



// ==== 0x00554AF0  TacticalClass::ScrollView  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::ScrollView(TacticalClass *this, char a2)
{
  int result; // eax
  double v3; // st7
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned __int16 v8; // cx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int *v16; // eax
  double v17; // [esp+0h] [ebp-38h]
  __int16 v18[2]; // [esp+14h] [ebp-24h] BYREF
  int v19; // [esp+18h] [ebp-20h]
  int v20; // [esp+1Ch] [ebp-1Ch]
  int v21; // [esp+20h] [ebp-18h]
  int v22; // [esp+24h] [ebp-14h]
  int v23; // [esp+28h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-Ch]
  __int16 v25; // [esp+30h] [ebp-8h]
  __int16 v26; // [esp+32h] [ebp-6h]

  LOBYTE(result) = byte_829AE4; /*0x554af9*/
  if ( byte_829AE4 ) /*0x554b07*/
  {
    result = stru_A8EB00.ObjectTypeClass[30]; /*0x554b0d*/
    if ( stru_A8EB00.ObjectTypeClass[30] >= this->field34 ) /*0x554b17*/
    {
      if ( a2 && g_MissionQueueFrame.random[145] ) /*0x554b28*/
        UpdateDeferredLightSurfaces(0, 1); /*0x554b2e*/
      v25 = this->field38 / 256; /*0x554b42*/
      v26 = this->TacticalClass_field_3C / 256; /*0x554b56*/
      v20 = this->field44 / 256 + 1; /*0x554b6f*/
      v5 = v20; /*0x554b6c*/
      v6 = -v20; /*0x554b73*/
      v7 = -v20; /*0x554b75*/
      v24 = -v20; /*0x554b77*/
      v22 = -v20; /*0x554b7d*/
      if ( -v5 <= v5 ) /*0x554b81*/
      {
        do /*0x554d04*/
        {
          v21 = v6; /*0x554b89*/
          if ( v6 <= v5 ) /*0x554b8d*/
          {
            v8 = v26 + v7; /*0x554b97*/
            for ( HIWORD(v19) = v8; ; v8 = HIWORD(v19) ) /*0x554b99*/
            {
              LOWORD(v19) = v25 + v6; /*0x554bab*/
              *(_DWORD *)v18 = v19; /*0x554bb7*/
              if ( (unsigned __int16)(v25 + v6) < 0x200u && v8 < 0x200u ) /*0x554bce*/
              {
                if ( (unsigned __int8)Cell::Exists((Cell *)&stru_87F5F0.__pad_58[416], v18) ) /*0x554be9*/
                {
                  v9 = (v18[0] << 8) + 128 - this->field38; /*0x554c11*/
                  v10 = (v18[1] << 8) + 128 - this->TacticalClass_field_3C; /*0x554c1e*/
                  v23 = v9 * v9 + v10 * v10; /*0x554c2a*/
                  __asm /*0x554c2e*/
                  {
                    fild [esp+38h+var_10]
                    fstp [esp+38h+var_38]; double
                  }
                  Math::Sqrt(v17); /*0x554c35*/
                  LOWORD(v11) = Math::RoundToInt(v3); /*0x554c3d*/
                  if ( v11 <= this->field44 ) /*0x554c45*/
                  {
                    if ( a2 ) /*0x554c4e*/
                    {
                      v12 = __2_YAPAXI_Z(0x14u); /*0x554c56*/
                      if ( v12 ) /*0x554c60*/
                      {
                        v13 = *(_DWORD *)v18; /*0x554c62*/
                        *(_DWORD *)v12 = 0; /*0x554c6b*/
                        *(_DWORD *)(v12 + 4) = 0x10000; /*0x554c6d*/
                        *(_WORD *)(v12 + 8) = 0; /*0x554c74*/
                        *(_WORD *)(v12 + 10) = 1000; /*0x554c78*/
                        *(_WORD *)(v12 + 12) = 1000; /*0x554c7c*/
                        *(_WORD *)(v12 + 14) = 1000; /*0x554c80*/
                        *(_DWORD *)(v12 + 16) = v13; /*0x554c84*/
                        v14 = v12; /*0x554c87*/
                      }
                      else
                      {
                        v14 = 0; /*0x554c8b*/
                      }
                      if ( g_MissionQueueFrame.random[145] < g_MissionQueueFrame.random[143] /*0x554cc1*/
                        || (BYTE1(g_MissionQueueFrame.random[144]) || !g_MissionQueueFrame.random[143])
                        && g_MissionQueueFrame.random[146] > 0
                        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_MissionQueueFrame.random[141] + 8))(
                             &g_MissionQueueFrame.random[141],
                             g_MissionQueueFrame.random[146] + g_MissionQueueFrame.random[143],
                             0) )
                      {
                        v15 = g_MissionQueueFrame.random[145]++; /*0x554cce*/
                        *(_DWORD *)(g_MissionQueueFrame.random[142] + 4 * v15) = v14; /*0x554cdd*/
                      }
                      v5 = v20; /*0x554ce0*/
                    }
                    else
                    {
                      v16 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v18); /*0x554d3f*/
                      TacticalClass::SetView(v16, 0, 0x10000, 0, 1000, 1000, 1000); /*0x554d46*/
                    }
                  }
                }
              }
              LOWORD(v6) = ++v21; /*0x554ce8*/
              if ( v21 > v5 ) /*0x554cef*/
                break; /*0x554cef*/
            }
            v7 = v22; /*0x554cf5*/
            v6 = v24; /*0x554cf9*/
          }
          v22 = ++v7; /*0x554d00*/
        }
        while ( v7 <= v5 ); /*0x554d04*/
      }
      return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x554d11*/
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

  HighPrecisionTimer = Timer::GetHighPrecision(&dbl_884D88); /*0x554d6e*/
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
          v5 = Timer::GetHighPrecision(&dbl_884D88); /*0x554dc5*/
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
          v6 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)(*((_DWORD *)dword_ABCA44 + v4) + 16)); /*0x554e27*/
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
  v7 = Timer::GetHighPrecision(&dbl_884D88); /*0x554ef3*/
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
        v11 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)v10 + 8); /*0x554f6d*/
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
      MapClass::MarkForRedraw(&dword_87F7E8, 1); /*0x554fdb*/
    }
  }
  v12 = Timer::GetHighPrecision(&dbl_884D88); /*0x554fe9*/
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
int __thiscall LightSourceClass::Stat(LightSourceClass *this, int a2)
{
  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x55507a*/
}



// ==== 0x00555080  LightSourceClass::ddtor  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::ddtor(LightSourceClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x555086*/
    return -2147467261; /*0x555088*/
  *a2 = 1872513264; /*0x555096*/
  a2[1] = 298979847; /*0x55509e*/
  a2[2] = 1610642561; /*0x5550a7*/
  a2[3] = unk_7E98FC; /*0x5550b0*/
  return 0; /*0x55508d*/
}



// ==== 0x005550C0  LightSourceClass::Write  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Write(LightSourceClass *this, int a2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(this, a2); /*0x5550cb*/
  if ( result >= 0 ) /*0x5550d2*/
  {
    if ( this ) /*0x5550d6*/
    {
      AbstractClass::InitVtables((AbstractClass *)this, (int)&a2); /*0x5550df*/
      this->AbstractClass = &LightSourceClass::`vftable'; /*0x5550e4*/
      this->? = &LightSourceClass::`vftable'; /*0x5550ea*/
      this->? = &LightSourceClass::`vftable'; /*0x5550f1*/
      this->? = &LightSourceClass::`vftable'; /*0x5550f8*/
    }
    return 0; /*0x5550ff*/
  }
  return result; /*0x555101*/
}



// ==== 0x00555110  LightSourceClass::Seek  this=LightSourceClass  sig=csp ====
int __stdcall LightSourceClass::Seek(LightSourceClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x55511f*/
  if ( result >= 0 ) /*0x555126*/
    return 0; /*0x555128*/
  return result; /*0x55512a*/
}



// ==== 0x00555130  LightSourceClass::StubReturn76  this=LightSourceClass  sig=csp ====
int LightSourceClass::StubReturn76(LightSourceClass *this)
{
  return 76; /*0x555135*/
}



// ==== 0x00555140  LightSourceClass::StubReturn54  this=LightSourceClass  sig=csp ====
int LightSourceClass::StubReturn54(LightSourceClass *this)
{
  return 54; /*0x555145*/
}



// ==== 0x00555150  LightSourceClass::CopyTo  this=LightSourceClass  sig=csp ====
void **__thiscall LightSourceClass::CopyTo(LightSourceClass *this, char a2)
{
  int v3; // eax
  LightSourceClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &LightSourceClass::`vftable'; /*0x555156*/
  this->? = &LightSourceClass::`vftable'; /*0x55515c*/
  this->? = &LightSourceClass::`vftable'; /*0x555163*/
  this->? = &LightSourceClass::`vftable'; /*0x55516a*/
  AbstractClass::AnnounceExpiredPointer(&this->AbstractClass, 1); /*0x555171*/
  v5 = this; /*0x555186*/
  v3 = (*(int (__thiscall **)(int *, LightSourceClass **))(g_MissionQueueFrame.random[129] + 16))( /*0x55518a*/
         &g_MissionQueueFrame.random[129],
         &v5);
  if ( v3 != -1 && v3 < g_MissionQueueFrame.random[133] ) /*0x55519a*/
  {
    --g_MissionQueueFrame.random[133]; /*0x55519f*/
    for ( ; /*0x5551a5*/
          v3 < g_MissionQueueFrame.random[133];
          *(_DWORD *)(g_MissionQueueFrame.random[130] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[130]
                                                                                + 4 * v3) )
    {
      ++v3; /*0x5551ad*/
    }
  }
  if ( this->Activated ) /*0x5551bf*/
  {
    this->Activated = 0; /*0x5551ca*/
    TacticalClass::ScrollView((TacticalClass *)this, 0); /*0x5551ce*/
  }
  AbstractClass::DTOR((AbstractClass *)this); /*0x5551d5*/
  if ( (a2 & 1) != 0 ) /*0x5551df*/
    __3_YAXPAX_Z(this); /*0x5551e2*/
  return &this->AbstractClass; /*0x5551ec*/
}



// ==== 0x00555200  _DynamicVectorClass_PAVLightSourceClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Destroy(_DynamicVectorClass_PAVLightSourceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555206*/
  this->m_10 = 0; /*0x555209*/
  if ( v2 && BYTE1(this->m_C) ) /*0x555210*/
  {
    __3_YAXPAX_Z(v2); /*0x555216*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55521e*/
  }
  BYTE1(this->m_C) = 0; /*0x555221*/
  this->m_8 = 0; /*0x555224*/
}



// ==== 0x00555230  _DynamicVectorClass_PAVLightSourceClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetItemIndex(
        _DynamicVectorClass_PAVLightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555230*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555245*/
  else
    return 0; /*0x555237*/
}



// ==== 0x00555250  _VectorClass_PAVLightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::Get(_VectorClass_PAVLightSourceClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55525a*/
}



// ==== 0x00555260  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Destroy_0  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Destroy_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x555266*/
  this->m_10 = 0; /*0x555269*/
  if ( v2 && BYTE1(this->m_C) ) /*0x555270*/
  {
    __3_YAXPAX_Z(v2); /*0x555276*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55527e*/
  }
  BYTE1(this->m_C) = 0; /*0x555281*/
  this->m_8 = 0; /*0x555284*/
}



// ==== 0x00555290  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::GetItemIndex_0  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetItemIndex_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555290*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5552a5*/
  else
    return 0; /*0x555297*/
}



// ==== 0x005552B0  _VectorClass_PAVPendingCellClass_LightSourceClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Get(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x5552ba*/
}



// ==== 0x005552C0  _VectorClass_PAVLightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::Add(_VectorClass_PAVLightSourceClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x5552c2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x5552cd*/
  {
    v3 = 0; /*0x5552cf*/
    if ( m_8 <= 0 ) /*0x5552d3*/
      return 1; /*0x5552f3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x5552d5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5552db*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x5552e4*/
    {
      ++v3; /*0x5552e6*/
      ++v4; /*0x5552e7*/
      if ( v3 >= m_8 ) /*0x5552ec*/
        return 1; /*0x5552ec*/
    }
  }
  return 0; /*0x5552ee*/
}



// ==== 0x00555300  _VectorClass_PAVLightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::Release(_VectorClass_PAVLightSourceClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55530c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555316*/
    if ( a3 ) /*0x55531c*/
      v4 = a3; /*0x555332*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55532e*/
    LOBYTE(this->m_C) = 1; /*0x555336*/
    if ( v4 ) /*0x55533a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x555345*/
      {
        m_8 = this->m_8; /*0x55534c*/
        if ( a2 < m_8 ) /*0x555351*/
          m_8 = a2; /*0x555353*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x555359*/
          ++i; /*0x55535e*/
        if ( BYTE1(this->m_C) ) /*0x55536b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555376*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x55537e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x555387*/
      this->m_8 = a2; /*0x55538f*/
      BYTE1(this->m_C) = a3 == 0; /*0x555392*/
      return 1; /*0x555398*/
    }
    else
    {
      return 0; /*0x55533f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5553a2*/
    return 1; /*0x5553a8*/
  }
}



// ==== 0x005553B0  _VectorClass_PAVLightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LightSourceClass::Remove(_VectorClass_PAVLightSourceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x5553bd*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5553c3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5553cb*/
  }
  BYTE1(this->m_C) = 0; /*0x5553ce*/
  this->m_8 = 0; /*0x5553d1*/
}



// ==== 0x005553E0  _VectorClass_PAVLightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::GetSize(_VectorClass_PAVLightSourceClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x5553e0*/
    return 0; /*0x5553e8*/
  m_8 = this->m_8; /*0x5553ee*/
  result = 0; /*0x5553f1*/
  if ( m_8 <= 0 ) /*0x5553f5*/
    return -1; /*0x55540c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5553fb*/
  {
    if ( ++result >= m_8 ) /*0x55540a*/
      return -1; /*0x55540a*/
  }
  return result; /*0x5553ea*/
}



// ==== 0x00555420  _VectorClass_PAVLightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightSourceClass::GetCapacity(_VectorClass_PAVLightSourceClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555420*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555435*/
  else
    return 0; /*0x555427*/
}



// ==== 0x00555440  _DynamicVectorClass_PAVLightSourceClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::SetCapacity(
        _DynamicVectorClass_PAVLightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55544c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555452*/
    if ( a3 ) /*0x555458*/
      v4 = a3; /*0x55546e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55546a*/
    LOBYTE(this->m_C) = 1; /*0x555472*/
    if ( !v4 ) /*0x555476*/
      return 0; /*0x5554ea*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x555478*/
    {
      m_8 = this->m_8; /*0x55547f*/
      if ( a2 < m_8 ) /*0x555484*/
        m_8 = a2; /*0x555486*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55548c*/
        ++i; /*0x555491*/
      if ( BYTE1(this->m_C) ) /*0x55549e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5554a9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x5554b1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x5554ba*/
    this->m_8 = a2; /*0x5554c2*/
    BYTE1(this->m_C) = a3 == 0; /*0x5554c5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x5554ce*/
  }
  v7 = this->m_8; /*0x5554d1*/
  if ( v7 < this->m_10 ) /*0x5554d9*/
    this->m_10 = v7; /*0x5554db*/
  return 1; /*0x5554de*/
}



// ==== 0x005554F0  _DynamicVectorClass_PAVLightSourceClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::FindItemIndex(
        _DynamicVectorClass_PAVLightSourceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x5554f0*/
  result = 0; /*0x5554f3*/
  if ( m_10 <= 0 ) /*0x5554f8*/
    return -1; /*0x55550f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x5554fe*/
  {
    if ( ++result >= m_10 ) /*0x55550d*/
      return -1; /*0x55550d*/
  }
  return result; /*0x555512*/
}



// ==== 0x00555520  _VectorClass_PAVPendingCellClass_LightSourceClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Add(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x555522*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55552d*/
  {
    v3 = 0; /*0x55552f*/
    if ( m_8 <= 0 ) /*0x555533*/
      return 1; /*0x555553*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x555535*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55553b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x555544*/
    {
      ++v3; /*0x555546*/
      ++v4; /*0x555547*/
      if ( v3 >= m_8 ) /*0x55554c*/
        return 1; /*0x55554c*/
    }
  }
  return 0; /*0x55554e*/
}



// ==== 0x00555560  _VectorClass_PAVPendingCellClass_LightSourceClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Release(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55556c*/
  {
    LOBYTE(this->m_C) = 0; /*0x555576*/
    if ( a3 ) /*0x55557c*/
      v4 = a3; /*0x555592*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55558e*/
    LOBYTE(this->m_C) = 1; /*0x555596*/
    if ( v4 ) /*0x55559a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5555a5*/
      {
        m_8 = this->m_8; /*0x5555ac*/
        if ( a2 < m_8 ) /*0x5555b1*/
          m_8 = a2; /*0x5555b3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5555b9*/
          ++i; /*0x5555be*/
        if ( BYTE1(this->m_C) ) /*0x5555cb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5555d6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5555de*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x5555e7*/
      this->m_8 = a2; /*0x5555ef*/
      BYTE1(this->m_C) = a3 == 0; /*0x5555f2*/
      return 1; /*0x5555f8*/
    }
    else
    {
      return 0; /*0x55559f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVPendingCellClass_LightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x555602*/
    return 1; /*0x555608*/
  }
}



// ==== 0x00555610  _VectorClass_PAVPendingCellClass_LightSourceClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::Remove(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55561d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555623*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55562b*/
  }
  BYTE1(this->m_C) = 0; /*0x55562e*/
  this->m_8 = 0; /*0x555631*/
}



// ==== 0x00555640  _VectorClass_PAVPendingCellClass_LightSourceClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::GetSize(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x555640*/
    return 0; /*0x555648*/
  m_8 = this->m_8; /*0x55564e*/
  result = 0; /*0x555651*/
  if ( m_8 <= 0 ) /*0x555655*/
    return -1; /*0x55566c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55565b*/
  {
    if ( ++result >= m_8 ) /*0x55566a*/
      return -1; /*0x55566a*/
  }
  return result; /*0x55564a*/
}



// ==== 0x00555680  _VectorClass_PAVPendingCellClass_LightSourceClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::GetCapacity(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x555680*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x555695*/
  else
    return 0; /*0x555687*/
}



// ==== 0x005556A0  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::SetCapacity_0  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightSourceClass::SetCapacity_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5556ac*/
  {
    LOBYTE(this->m_C) = 0; /*0x5556b2*/
    if ( a3 ) /*0x5556b8*/
      v4 = a3; /*0x5556ce*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5556ca*/
    LOBYTE(this->m_C) = 1; /*0x5556d2*/
    if ( !v4 ) /*0x5556d6*/
      return 0; /*0x55574a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5556d8*/
    {
      m_8 = this->m_8; /*0x5556df*/
      if ( a2 < m_8 ) /*0x5556e4*/
        m_8 = a2; /*0x5556e6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5556ec*/
        ++i; /*0x5556f1*/
      if ( BYTE1(this->m_C) ) /*0x5556fe*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x555709*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x555711*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55571a*/
    this->m_8 = a2; /*0x555722*/
    BYTE1(this->m_C) = a3 == 0; /*0x555725*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVPendingCellClass_LightSourceClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55572e*/
  }
  v7 = this->m_8; /*0x555731*/
  if ( v7 < this->m_10 ) /*0x555739*/
    this->m_10 = v7; /*0x55573b*/
  return 1; /*0x55573e*/
}



// ==== 0x00555750  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::FindItemIndex_0  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightSourceClass::FindItemIndex_0(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x555750*/
  result = 0; /*0x555753*/
  if ( m_10 <= 0 ) /*0x555758*/
    return -1; /*0x55576f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55575e*/
  {
    if ( ++result >= m_10 ) /*0x55576d*/
      return -1; /*0x55576d*/
  }
  return result; /*0x555772*/
}



// ==== 0x00555780  _VectorClass_PAVLightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::QueryInterface(_VectorClass_PAVLightSourceClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555783*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass *>::`vftable'; /*0x555786*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555790*/
  {
    __3_YAXPAX_Z(v3); /*0x555798*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5557a0*/
  }
  BYTE1(this->m_C) = 0; /*0x5557ab*/
  this->m_8 = 0; /*0x5557b1*/
  if ( (a2 & 1) != 0 ) /*0x5557b8*/
    __3_YAXPAX_Z(this); /*0x5557bb*/
  return this->__pad_0; /*0x5557c5*/
}



// ==== 0x005557D0  _DynamicVectorClass_PAVLightSourceClass::Constructor_VectorClass_LightSourceClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::Constructor_VectorClass_LightSourceClass___(
        _DynamicVectorClass_PAVLightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5557d3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass *>::`vftable'; /*0x5557d6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5557e0*/
  {
    __3_YAXPAX_Z(v3); /*0x5557e8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5557f0*/
  }
  BYTE1(this->m_C) = 0; /*0x5557fb*/
  this->m_8 = 0; /*0x555801*/
  if ( (a2 & 1) != 0 ) /*0x555808*/
    __3_YAXPAX_Z(this); /*0x55580b*/
  return this->__pad_0; /*0x555815*/
}



// ==== 0x00555820  _VectorClass_PAVPendingCellClass_LightSourceClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_PendingCellClass_LightSourceClass::QueryInterface(
        _VectorClass_PAVPendingCellClass_LightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555823*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x555826*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555830*/
  {
    __3_YAXPAX_Z(v3); /*0x555838*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x555840*/
  }
  BYTE1(this->m_C) = 0; /*0x55584b*/
  this->m_8 = 0; /*0x555851*/
  if ( (a2 & 1) != 0 ) /*0x555858*/
    __3_YAXPAX_Z(this); /*0x55585b*/
  return this->__pad_0; /*0x555865*/
}



// ==== 0x00555870  _DynamicVectorClass_PAVPendingCellClass_LightSourceClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LightSourceClass::Constructor(
        _DynamicVectorClass_PAVPendingCellClass_LightSourceClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x555873*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LightSourceClass::PendingCellClass *>::`vftable'; /*0x555876*/
  if ( v3 && BYTE1(this->m_C) ) /*0x555880*/
  {
    __3_YAXPAX_Z(v3); /*0x555888*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x555890*/
  }
  BYTE1(this->m_C) = 0; /*0x55589b*/
  this->m_8 = 0; /*0x5558a1*/
  if ( (a2 & 1) != 0 ) /*0x5558a8*/
    __3_YAXPAX_Z(this); /*0x5558ab*/
  return this->__pad_0; /*0x5558b5*/
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



// ==== 0x005558E0  Map_Calc  this=-  sig=csp ====
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



// ==== 0x00555AC0  QuantizeColorRGB  this=-  sig=csp ====
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
  if ( dword_A8EB78 ) /*0x555b2c*/
  {
    if ( dword_A8EB78 == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( dword_A8EB78 == 2 ) /*0x555b32*/
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
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10)
{
  int v11; // ecx
  void *ptr_0; // edi
  int v13; // edx
  int v15; // [esp-Ch] [ebp-1Ch]
  int v16; // [esp-8h] [ebp-18h]

  ConvertClass::Construct((ConvertClass *)this, a2, a3, a4, a10, 1); /*0x555dbe*/
  v11 = *(_DWORD *)(this + 364); /*0x555dc3*/
  *(_DWORD *)(this + 392) = a2; /*0x555dd1*/
  *(_DWORD *)(this + 396) = a3; /*0x555ddb*/
  *(_DWORD *)(this + 400) = a9; /*0x555de8*/
  *(_DWORD *)(this + 404) = 0; /*0x555dee*/
  *(_DWORD *)(this + 408) = a5; /*0x555df8*/
  *(_DWORD *)(this + 412) = a6; /*0x555dfe*/
  *(_DWORD *)(this + 416) = a7; /*0x555e04*/
  *(_DWORD *)(this + 420) = a5; /*0x555e0a*/
  *(_DWORD *)(this + 424) = a6; /*0x555e10*/
  *(_DWORD *)(this + 428) = a7; /*0x555e16*/
  *(_BYTE *)(this + 432) = 0; /*0x555e1c*/
  *(_DWORD *)this = &LightConvertClass::`vftable'; /*0x555e23*/
  if ( v11 < 1 ) /*0x555e29*/
    return this; /*0x555e29*/
  if ( !a9 ) /*0x555e31*/
    *(_DWORD *)(this + 400) = &unk_829C20; /*0x555e33*/
  if ( dword_829D20 == -1 ) /*0x555e44*/
    dword_829D20 = DDraw::GetStatus(); /*0x555e4b*/
  if ( (unsigned __int8)LightningStorm::IsActive() ) /*0x555e50*/
  {
    if ( a5 == -1 ) /*0x555e60*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555e67*/
      *(_DWORD *)(this + 412) = 1000; /*0x555e6d*/
      *(_DWORD *)(this + 416) = 1000; /*0x555e73*/
    }
    else
    {
      *(_DWORD *)(this + 408) = a5; /*0x555e7b*/
      *(_DWORD *)(this + 412) = a6; /*0x555e81*/
      *(_DWORD *)(this + 416) = a7; /*0x555e87*/
    }
    v16 = 1000 * (int)dword_A8B230[379].ptr_8 / 100; /*0x555ebe*/
    ptr_0 = dword_A8B230[379].ptr_0; /*0x555ebf*/
    v15 = 1000 * (int)dword_A8B230[379].ptr_4 / 100; /*0x555ee2*/
LABEL_23:
    v13 = 1000 * (int)ptr_0 / 100; /*0x556047*/
    goto LABEL_24; /*0x556062*/
  }
  if ( NukeFlash::IsActive() || (unsigned __int8)ChronoScreen::IsActive() ) /*0x555ef5*/
  {
    if ( a5 == -1 ) /*0x555fc4*/
    {
      *(_DWORD *)(this + 408) = 1000; /*0x555fcb*/
      *(_DWORD *)(this + 412) = 1000; /*0x555fd1*/
      *(_DWORD *)(this + 416) = 1000; /*0x555fd7*/
    }
    else
    {
      *(_DWORD *)(this + 408) = a5; /*0x555fdf*/
      *(_DWORD *)(this + 412) = a6; /*0x555fe5*/
      *(_DWORD *)(this + 416) = a7; /*0x555feb*/
    }
    v16 = 1000 * (int)dword_A8B230[379].NeedsSaveOrLink / 100; /*0x556022*/
    ptr_0 = (void *)dword_A8B230[379].nextArrayIndex; /*0x556023*/
    v15 = 1000 * dword_A8B230[379].referenceCount / 100; /*0x556046*/
    goto LABEL_23; /*0x556046*/
  }
  if ( !(unsigned __int8)PsyDom::IsActive() ) /*0x555f09*/
  {
    LightConvertClass::UpdateColors(this, a5, a6, a7, 0); /*0x555fbc*/
    goto LABEL_25; /*0x555fbc*/
  }
  if ( a5 == -1 ) /*0x555f12*/
  {
    *(_DWORD *)(this + 408) = 1000; /*0x555f19*/
    *(_DWORD *)(this + 412) = 1000; /*0x555f1f*/
    *(_DWORD *)(this + 416) = 1000; /*0x555f25*/
  }
  else
  {
    *(_DWORD *)(this + 408) = a5; /*0x555f2d*/
    *(_DWORD *)(this + 412) = a6; /*0x555f33*/
    *(_DWORD *)(this + 416) = a7; /*0x555f39*/
  }
  v16 = 1000 * dword_A8B230[380].nextArrayIndex / 100; /*0x555f7c*/
  v15 = 1000 * dword_A8B230[380].abstractFlags / 100; /*0x555f97*/
  v13 = 1000 * dword_A8B230[380].uniqueId / 100; /*0x555fb0*/
LABEL_24:
  LightConvertClass::UpdateColors(this, v13, v15, v16, 1); /*0x556064*/
LABEL_25:
  if ( !a8 ) /*0x556072*/
    ConvertClass::InitTables((ConvertClass *)this); /*0x556076*/
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
              *(v25 - 1) = (v21 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x55648a*/
                         | (v22 >> g_BitMask_Blue << g_BitMask_Green)
                         | (v24 >> g_BitMask_Red << g_BitShift_Blue);
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
int __thiscall sub_556510(LightConvertClass *this)
{
  *(_DWORD *)this->__pad_0 = &LightConvertClass::`vftable'; /*0x556510*/
  return sub_490400((int)this);
}



// ==== 0x00556520  LightConvertClass::method  this=LightConvertClass  sig=csp ====
_DWORD *__thiscall sub_556520(LightConvertClass *this, char a2)
{
  *(_DWORD *)this->__pad_0 = &LightConvertClass::`vftable'; /*0x556523*/
  sub_490400((int)this); /*0x556529*/
  if ( (a2 & 1) != 0 ) /*0x556533*/
    __3_YAXPAX_Z(this); /*0x556536*/
  return this->__pad_0; /*0x556540*/
}



// ==== 0x005565A0  LinkClass::Destruct  this=LinkClass  sig=csp ====
int __thiscall LinkClass::Destruct(LinkClass *this)
{
  LinkClass *Prev; // edi
  int result; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  *(_DWORD *)this->__pad_0 = &LinkClass::`vftable'; /*0x5565a5*/
  Prev = (LinkClass *)LinkedList::FindPrev(this); /*0x5565b1*/
  result = (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x5565b7*/
  m_Prev = this->m_Prev; /*0x5565ba*/
  if ( m_Prev ) /*0x5565c1*/
    m_Prev->m_Next = this->m_Next; /*0x5565c6*/
  m_Next = this->m_Next; /*0x5565c9*/
  if ( m_Next ) /*0x5565ce*/
    m_Next->m_Prev = this->m_Prev; /*0x5565d3*/
  this->m_Prev = 0; /*0x5565d8*/
  this->m_Next = 0; /*0x5565db*/
  if ( Prev == this && (LinkClass *)result != this ) /*0x5565e2*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 24))(result); /*0x5565e8*/
  return result; /*0x5565eb*/
}



// ==== 0x005565F0  LinkClass::Reset  this=LinkClass  sig=csp ====
int __thiscall Hash::Reset(LinkClass *this)
{
  this->m_Next = 0; /*0x5565f2*/
  this->m_Prev = 0; /*0x5565f5*/
  return 0; /*0x5565f8*/
}



// ==== 0x00556600  LinkedList::MoveNode  this=TechnoClass  sig=csp ====
void *__thiscall LinkedList::MoveNode(LinkedList *this, void *a2)
{
  if ( a2 != this ) /*0x55660a*/
  {
    (*(void (__thiscall **)(LinkedList *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x55660e*/
    (*(void (__thiscall **)(LinkedList *, void *))(*(_DWORD *)this->__pad_0 + 12))(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/
}



// ==== 0x00556620  LinkClass::GetWidth  this=LinkClass  sig=csp ====
int __thiscall ObjectClass::GetWidth(LinkClass *this)
{
  return (int)this->m_Next->__pad_0; /*0x556623*/
}



// ==== 0x00556630  LinkClass::GetHeight  this=LinkClass  sig=csp ====
int __thiscall ObjectClass::GetHeight(LinkClass *this)
{
  return (int)this->m_Prev->__pad_0; /*0x556633*/
}



// ==== 0x00556640  LinkClass::FindPrev  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::FindPrev(LinkClass *this)
{
  LinkClass **p_m_Prev; // edx
  _DWORD *result; // eax

  p_m_Prev = &this->m_Prev; /*0x556643*/
  if ( !this->m_Prev ) /*0x556640*/
    return this->__pad_0; /*0x55665d*/
  do /*0x556651*/
  {
    result = *p_m_Prev; /*0x55664b*/
    if ( *p_m_Prev == this ) /*0x55664f*/
      break; /*0x55664f*/
    p_m_Prev = (LinkClass **)(result + 2); /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/
}



// ==== 0x00556670  LinkClass::FindNext  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::FindNext(LinkClass *this)
{
  LinkClass **p_m_Next; // edx
  _DWORD *result; // eax

  p_m_Next = &this->m_Next; /*0x556673*/
  if ( !this->m_Next ) /*0x556670*/
    return this->__pad_0; /*0x55668d*/
  do /*0x556681*/
  {
    result = *p_m_Next; /*0x55667b*/
    if ( *p_m_Next == this ) /*0x55667f*/
      break; /*0x55667f*/
    p_m_Next = (LinkClass **)(result + 1); /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/
}



// ==== 0x005566A0  LinkClass::InsertAfter  this=LinkClass  sig=csp ====
int __thiscall LinkedList::InsertAfter(LinkClass *this, int a2)
{
  LinkClass *v3; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x5566a5*/
  v3 = *(LinkClass **)(a2 + 4); /*0x5566ac*/
  *(_DWORD *)(a2 + 4) = this; /*0x5566af*/
  this->m_Prev = (LinkClass *)a2; /*0x5566b4*/
  this->m_Next = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    v3->m_Prev = this; /*0x5566bc*/
  return (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x5566c6*/
}



// ==== 0x005566D0  LinkClass::Attach  this=LinkClass  sig=csp ====
_DWORD *__thiscall LinkedList::Attach(LinkClass *this, int a2)
{
  LinkClass *v3; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x5566d5*/
  v3 = (LinkClass *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2); /*0x5566de*/
  v3->m_Prev = this; /*0x5566e1*/
  this->m_Next = v3; /*0x5566e4*/
  this->m_Prev = 0; /*0x5566e7*/
  return this->__pad_0; /*0x5566f0*/
}



// ==== 0x00556700  LinkClass::Append  this=LinkClass  sig=csp ====
int __thiscall LinkedList::Append(LinkClass *this, int a2)
{
  LinkClass *v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 36))(this); /*0x556705*/
  v3 = (LinkClass *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2); /*0x55670e*/
  v3->m_Next = this; /*0x556711*/
  this->m_Prev = v3; /*0x556714*/
  v4 = *(_DWORD *)this->__pad_0; /*0x556717*/
  this->m_Next = 0; /*0x55671b*/
  return (*(int (__thiscall **)(LinkClass *))(v4 + 24))(this); /*0x556725*/
}



// ==== 0x00556730  LinkClass::RemoveNode  this=LinkClass  sig=csp ====
int __thiscall LinkedList::RemoveNode(LinkClass *this)
{
  LinkClass *v2; // edi
  LinkClass *v3; // eax
  LinkClass *m_Prev; // edx
  LinkClass *m_Next; // edx

  v2 = (LinkClass *)(*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x55673e*/
  v3 = (LinkClass *)(*(int (__thiscall **)(LinkClass *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x556740*/
  m_Prev = this->m_Prev; /*0x556743*/
  if ( m_Prev ) /*0x55674a*/
    m_Prev->m_Next = this->m_Next; /*0x55674f*/
  m_Next = this->m_Next; /*0x556752*/
  if ( m_Next ) /*0x556757*/
    m_Next->m_Prev = this->m_Prev; /*0x55675c*/
  this->m_Prev = 0; /*0x556761*/
  this->m_Next = 0; /*0x556764*/
  if ( v2 != this ) /*0x556767*/
    return (int)v2->__pad_0; /*0x55677e*/
  if ( v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (__thiscall **)(LinkClass *))(*(_DWORD *)v3->__pad_0 + 24))(v3); /*0x55676d*/
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
  dword_ABCB78 = (int)&DynamicVectorClass<LineTrail *>::`vftable'; /*0x5569bd*/
  dword_ABCB8C = 10; /*0x5569c7*/
  dword_ABCB88 = 0; /*0x5569d1*/
  return atexit(sub_5569E0); /*0x5569dc*/
}



// ==== 0x005569E0  sub_5569E0  this=-  sig=ida-proto ====
void __cdecl sub_5569E0()
{
  dword_ABCB78 = (int)&VectorClass<LineTrail *>::`vftable'; /*0x5569e8*/
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
  this->ptr_8 = 0x80; /*0x556a2b*/
  this->ptr_C = 0x80; /*0x556a2e*/
  this->ptr_8 = 0; /*0x556a31*/
  this->ptr_C = 16; /*0x556a34*/
  this->ptr_10 = 0; /*0x556a3b*/
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



// ==== 0x00556B30  TacticalClass::GetField  this=TacticalClass  sig=csp ====
int __thiscall TacticalClass::GetField(TacticalClass *this)
{
  int result; // eax

  result = (int)this->?; /*0x556b30*/
  if ( result ) /*0x556b37*/
  {
    *(_DWORD *)(result + 168) = 0; /*0x556b39*/
    this->? = 0; /*0x556b3f*/
  }
  return result; /*0x556b42*/
}



// ==== 0x00556B50  ObjectClass::updateMissionState  this=ObjectClass  sig=csp ====
int __thiscall ObjectClass::updateMissionState(ObjectClass *this, int a2)
{
  int result; // eax

  result = a2; /*0x556b57*/
  if ( !stru_A8EB00.ObjectTypeClass[30] ) /*0x556b5b*/
    result = 2 * a2; /*0x556b5d*/
  this->? = (void *)result; /*0x556b5f*/
  return result; /*0x556b62*/
}



// ==== 0x00556B70  ObjectClass::Render_Render_556B70  this=ObjectClass  sig=csp ====
int __thiscall Render_Render_556B70(ObjectClass *this)
{
  char *ptr_4; // eax
  void **v2; // eax
  void *v3; // edx
  void *v4; // esi
  void *v5; // edi
  void **v6; // eax
  char *v7; // eax
  void **v8; // ebp
  int result; // eax
  int v10; // edx
  int *v11; // eax
  signed int v12; // edi

  ptr_4 = (char *)this->?; /*0x556b70*/
  if ( ptr_4 ) /*0x556b78*/
  {
    v2 = (void **)(ptr_4 + 156); /*0x556b7a*/
    v3 = *v2; /*0x556b7f*/
    v4 = v2[1]; /*0x556b81*/
    v5 = v2[2]; /*0x556b84*/
    v6 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556b8e*/
    if ( v3 != *v6 || v4 != v6[1] || v5 != v6[2] ) /*0x556b9c*/
    {
      v7 = (char *)this->? - 1; /*0x556ba1*/
      this->? = v7; /*0x556ba2*/
      if ( (int)v7 < 0 ) /*0x556ba5*/
        this->? = (void *)31; /*0x556ba7*/
      v8 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556bb7*/
      v8[3] = (void *)255; /*0x556bb9*/
      *v8 = v3; /*0x556bc0*/
      v8[1] = v4; /*0x556bc3*/
      v8[2] = v5; /*0x556bc6*/
    }
  }
  result = (int)this->?; /*0x556bc9*/
  do /*0x556bf6*/
  {
    v10 = result + 1; /*0x556bcc*/
    v11 = &this->? + 4 * result; /*0x556bd7*/
    v12 = v11[3] - (unsigned int)this->?; /*0x556bdc*/
    v11[3] = v12; /*0x556bde*/
    if ( v12 < 0 ) /*0x556be1*/
      v11[3] = 0; /*0x556be3*/
    result = v10; /*0x556bea*/
    if ( v10 >= 32 ) /*0x556bef*/
      result = 0; /*0x556bf1*/
  }
  while ( (void *)result != this->? ); /*0x556bf6*/
  return result; /*0x556bf8*/
}



// ==== 0x00556C00  ObjectClass::Render_Render_556C00  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Render_Render_556C00(ObjectClass *this)
{
  int v1; // ebp
  _DWORD *result; // eax
  int v3; // ebp
  void **v4; // edi
  void **i; // esi
  int v6; // ebx
  int v7; // eax
  char *v8; // edx
  int v10[2]; // [esp+14h] [ebp-10h] BYREF
  int v11[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = (int)this->? + 1; /*0x556c09*/
  if ( v1 >= 32 ) /*0x556c14*/
    v1 = 0; /*0x556c16*/
  result = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556c21*/
  if ( *result != g_MissionQueueFrame.random[209] /*0x556c41*/
    || result[1] != g_MissionQueueFrame.random[210]
    || result[2] != g_MissionQueueFrame.random[211] )
  {
    v3 = v1 + 1; /*0x556c47*/
    v4 = &this->AbstractClass + 4 * ((int)this->? + 1); /*0x556c48*/
    result = (_DWORD *)result[3]; /*0x556c4c*/
    for ( i = &this->AbstractClass + 4 * v3; result; i = &this->AbstractClass + 4 * (_DWORD)v8 ) /*0x556c56*/
    {
      if ( *i == (void *)g_MissionQueueFrame.random[209] && i[1] == (void *)g_MissionQueueFrame.random[210] ) /*0x556c72*/
      {
        result = i[2]; /*0x556c7a*/
        if ( result == (_DWORD *)g_MissionQueueFrame.random[211] ) /*0x556c7f*/
          break; /*0x556c7f*/
      }
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v4, v11); /*0x556c91*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, i, v10); /*0x556ca2*/
      v6 = -2 - ZCoordToScreenY((int)v4[2]); /*0x556cb7*/
      v7 = ZCoordToScreenY((int)i[2]); /*0x556cb9*/
      AudioStream::DrawWaveform( /*0x556ce5*/
        DSurface_Composite,
        &DSurface_ViewBounds.field_0,
        v11,
        v10,
        (unsigned __int8 *)this,
        (int)v4[3],
        v6,
        -2 - v7);
      result = (_DWORD *)v3; /*0x556cea*/
      if ( v3 >= 32 ) /*0x556cef*/
        result = 0; /*0x556cf1*/
      if ( result == this->? ) /*0x556cf6*/
        break; /*0x556cf6*/
      v3 = (int)result + 1; /*0x556cf8*/
      v4 = i; /*0x556cfb*/
      v8 = (char *)result + 1; /*0x556cfd*/
      result = i[3]; /*0x556cff*/
    }
  }
  return result; /*0x556d11*/
}



// ==== 0x00556D40  ObjectClass::Render_Render_556D40  this=ObjectClass  sig=csp ====
void Render_Render_556D40(ObjectClass *this)
{
  int i; // edi
  ObjectClass *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF

  for ( i = g_MissionQueueFrame.random[223] - 1; i >= 0; --i ) /*0x556d4c*/
  {
    v2 = *(ObjectClass **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556d59*/
    Render_Render_556B70(v2); /*0x556d5e*/
    if ( v2->? || *(&v2->? + 4 * (int)v2->?) ) /*0x556d70*/
    {
      Render_Render_556C00(v2); /*0x556dd2*/
    }
    else if ( v2 ) /*0x556d7a*/
    {
      v4 = v2; /*0x556d8c*/
      v3 = (*(int (__thiscall **)(int *, ObjectClass **))(g_MissionQueueFrame.random[219] + 16))( /*0x556d90*/
             &g_MissionQueueFrame.random[219],
             &v4);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.random[223] ) /*0x556da0*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556da5*/
        for ( ; /*0x556dab*/
              v3 < g_MissionQueueFrame.random[223];
              *(_DWORD *)(g_MissionQueueFrame.random[220] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[220]
                                                                                    + 4 * v3) )
        {
          ++v3; /*0x556db3*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x556dc6*/
    }
  }
}



// ==== 0x00556DF0  ObjectClass::Game_Destroy  this=ObjectClass  sig=csp ====
void Game_Destroy(ObjectClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; i < g_MissionQueueFrame.random[223]; ++i ) /*0x556dfe*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.random[220] + 4 * i); /*0x556e06*/
    if ( v2 ) /*0x556e0b*/
    {
      v3 = v2[1]; /*0x556e0d*/
      if ( v3 ) /*0x556e12*/
      {
        *(_DWORD *)(v3 + 168) = 0; /*0x556e14*/
        v2[1] = 0; /*0x556e1a*/
      }
      v5 = v2; /*0x556e2d*/
      v4 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.random[219] + 16))( /*0x556e31*/
             &g_MissionQueueFrame.random[219],
             &v5);
      if ( v4 != -1 && v4 < g_MissionQueueFrame.random[223] ) /*0x556e41*/
      {
        --g_MissionQueueFrame.random[223]; /*0x556e46*/
        for ( ; /*0x556e4c*/
              v4 < g_MissionQueueFrame.random[223];
              *(_DWORD *)(g_MissionQueueFrame.random[220] + 4 * v4 - 4) = *(_DWORD *)(g_MissionQueueFrame.random[220]
                                                                                    + 4 * v4) )
        {
          ++v4; /*0x556e54*/
        }
      }
      __3_YAXPAX_Z(v2); /*0x556e67*/
    }
  }
  g_MissionQueueFrame.random[223] = 0; /*0x556e7f*/
  if ( g_MissionQueueFrame.random[220] && BYTE1(g_MissionQueueFrame.random[222]) ) /*0x556e8f*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.random[220]); /*0x556e92*/
    g_MissionQueueFrame.random[220] = 0; /*0x556e9a*/
  }
  BYTE1(g_MissionQueueFrame.random[222]) = 0; /*0x556ea0*/
  g_MissionQueueFrame.random[221] = 0; /*0x556ea6*/
}



// ==== 0x00556EB0  _DynamicVectorClass_PAVLineTrail::initList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::initList(_DynamicVectorClass_PAVLineTrail *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x556eb6*/
  this->m_10 = 0; /*0x556eb9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x556ec0*/
  {
    __3_YAXPAX_Z(v2); /*0x556ec6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x556ece*/
  }
  BYTE1(this->m_C) = 0; /*0x556ed1*/
  this->m_8 = 0; /*0x556ed4*/
}



// ==== 0x00556EE0  _DynamicVectorClass_PAVLineTrail::addItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::addItem(_DynamicVectorClass_PAVLineTrail *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x556ee0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x556ef5*/
  else
    return 0; /*0x556ee7*/
}



// ==== 0x00556F00  _VectorClass_PAVLineTrail::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::Get(_VectorClass_PAVLineTrail *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x556f0a*/
}



// ==== 0x00556F10  _VectorClass_PAVLineTrail::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::Add(_VectorClass_PAVLineTrail *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x556f12*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x556f1d*/
  {
    v3 = 0; /*0x556f1f*/
    if ( m_8 <= 0 ) /*0x556f23*/
      return 1; /*0x556f43*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x556f25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x556f2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x556f34*/
    {
      ++v3; /*0x556f36*/
      ++v4; /*0x556f37*/
      if ( v3 >= m_8 ) /*0x556f3c*/
        return 1; /*0x556f3c*/
    }
  }
  return 0; /*0x556f3e*/
}



// ==== 0x00556F50  _VectorClass_PAVLineTrail::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LineTrail::Release(_VectorClass_PAVLineTrail *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x556f5c*/
  {
    LOBYTE(this->m_C) = 0; /*0x556f66*/
    if ( a3 ) /*0x556f6c*/
      v4 = a3; /*0x556f82*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x556f7e*/
    LOBYTE(this->m_C) = 1; /*0x556f86*/
    if ( v4 ) /*0x556f8a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x556f95*/
      {
        m_8 = this->m_8; /*0x556f9c*/
        if ( a2 < m_8 ) /*0x556fa1*/
          m_8 = a2; /*0x556fa3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x556fa9*/
          ++i; /*0x556fae*/
        if ( BYTE1(this->m_C) ) /*0x556fbb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x556fc6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x556fce*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x556fd7*/
      this->m_8 = a2; /*0x556fdf*/
      BYTE1(this->m_C) = a3 == 0; /*0x556fe2*/
      return 1; /*0x556fe8*/
    }
    else
    {
      return 0; /*0x556f8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVLineTrail *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x556ff2*/
    return 1; /*0x556ff8*/
  }
}



// ==== 0x00557000  _VectorClass_PAVLineTrail::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LineTrail::Remove(_VectorClass_PAVLineTrail *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55700d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x557013*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55701b*/
  }
  BYTE1(this->m_C) = 0; /*0x55701e*/
  this->m_8 = 0; /*0x557021*/
}



// ==== 0x00557030  _VectorClass_PAVLineTrail::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LineTrail::GetSize(_VectorClass_PAVLineTrail *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x557030*/
    return 0; /*0x557038*/
  m_8 = this->m_8; /*0x55703e*/
  result = 0; /*0x557041*/
  if ( m_8 <= 0 ) /*0x557045*/
    return -1; /*0x55705c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55704b*/
  {
    if ( ++result >= m_8 ) /*0x55705a*/
      return -1; /*0x55705a*/
  }
  return result; /*0x55703a*/
}



// ==== 0x00557070  _VectorClass_PAVLineTrail::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LineTrail::GetCapacity(_VectorClass_PAVLineTrail *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x557070*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x557085*/
  else
    return 0; /*0x557077*/
}



// ==== 0x00557090  _DynamicVectorClass_PAVLineTrail::removeItem  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::removeItem(_DynamicVectorClass_PAVLineTrail *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55709c*/
  {
    LOBYTE(this->m_C) = 0; /*0x5570a2*/
    if ( a3 ) /*0x5570a8*/
      v4 = a3; /*0x5570be*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5570ba*/
    LOBYTE(this->m_C) = 1; /*0x5570c2*/
    if ( !v4 ) /*0x5570c6*/
      return 0; /*0x55713a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5570c8*/
    {
      m_8 = this->m_8; /*0x5570cf*/
      if ( a2 < m_8 ) /*0x5570d4*/
        m_8 = a2; /*0x5570d6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5570dc*/
        ++i; /*0x5570e1*/
      if ( BYTE1(this->m_C) ) /*0x5570ee*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5570f9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x557101*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55710a*/
    this->m_8 = a2; /*0x557112*/
    BYTE1(this->m_C) = a3 == 0; /*0x557115*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVLineTrail *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55711e*/
  }
  v7 = this->m_8; /*0x557121*/
  if ( v7 < this->m_10 ) /*0x557129*/
    this->m_10 = v7; /*0x55712b*/
  return 1; /*0x55712e*/
}



// ==== 0x00557140  _DynamicVectorClass_PAVLineTrail::checkItem  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::checkItem(_DynamicVectorClass_PAVLineTrail *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x557140*/
  result = 0; /*0x557143*/
  if ( m_10 <= 0 ) /*0x557148*/
    return -1; /*0x55715f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55714e*/
  {
    if ( ++result >= m_10 ) /*0x55715d*/
      return -1; /*0x55715d*/
  }
  return result; /*0x557162*/
}



// ==== 0x00557170  _VectorClass_PAVLineTrail::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_LineTrail::QueryInterface(_VectorClass_PAVLineTrail *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x557173*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LineTrail *>::`vftable'; /*0x557176*/
  if ( v3 && BYTE1(this->m_C) ) /*0x557180*/
  {
    __3_YAXPAX_Z(v3); /*0x557188*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x557190*/
  }
  BYTE1(this->m_C) = 0; /*0x55719b*/
  this->m_8 = 0; /*0x5571a1*/
  if ( (a2 & 1) != 0 ) /*0x5571a8*/
    __3_YAXPAX_Z(this); /*0x5571ab*/
  return this->__pad_0; /*0x5571b5*/
}



// ==== 0x005571C0  _DynamicVectorClass_PAVLineTrail::toggleItem  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CheckListClass::toggleItem(_DynamicVectorClass_PAVLineTrail *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5571c3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<LineTrail *>::`vftable'; /*0x5571c6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5571d0*/
  {
    __3_YAXPAX_Z(v3); /*0x5571d8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5571e0*/
  }
  BYTE1(this->m_C) = 0; /*0x5571eb*/
  this->m_8 = 0; /*0x5571f1*/
  if ( (a2 & 1) != 0 ) /*0x5571f8*/
    __3_YAXPAX_Z(this); /*0x5571fb*/
  return this->__pad_0; /*0x557205*/
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
int __thiscall ListClass::Construct(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
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

  ControlClass::Construct((ControlClass *)this, a2, a3, a4, a5, a6, 261, 0); /*0x557258*/
  *(_DWORD *)(this + 56) = 0; /*0x557265*/
  *(_DWORD *)(this + 60) = 0; /*0x557268*/
  *(_BYTE *)(this + 65) = 0; /*0x55726b*/
  *(_DWORD *)(this + 68) = 0; /*0x55726e*/
  *(_BYTE *)(this + 64) = 1; /*0x557280*/
  *(_DWORD *)(this + 52) = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x557284*/
  *(_DWORD *)(this + 72) = 10; /*0x55728b*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)(this + 88), 0, a8, a3 + a5, a4, 0, 0, 0); /*0x557292*/
  ShapeButtonClass::Constructor((ShapeButtonClass *)(this + 184), 0, a9, a3 + a5, a4 + a6, 0, 0, 0); /*0x5572af*/
  SliderClass::Constructor((SliderClass *)(this + 280), 0, a3 + a5, a4, 0, a6, 1); /*0x5572c3*/
  v10 = *(_DWORD *)(this + 204); /*0x5572c8*/
  v11 = *(_DWORD *)(this + 108); /*0x5572d4*/
  v12 = *(_DWORD *)(this + 100); /*0x5572d7*/
  v13 = *(_DWORD *)(this + 200); /*0x5572da*/
  *(_DWORD *)(this + 196) -= v10; /*0x5572e2*/
  v14 = *(_DWORD *)(this + 208); /*0x5572e8*/
  *(_DWORD *)(this + 100) = v12 - v11; /*0x5572f2*/
  *(_DWORD *)this = &ListClass::`vftable'; /*0x5572f7*/
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
  *(_DWORD *)(this + 44) = a7; /*0x557347*/
  *(_BYTE *)(this + 84) = 0; /*0x55734a*/
  *(_DWORD *)(this + 48) = 0; /*0x55734e*/
  *(_DWORD *)(this + 364) = 0; /*0x557351*/
  *(_DWORD *)(this + 368) = 0; /*0x557357*/
  v18 = *(_DWORD *)(TextRenderer::GetInstance() + 28) - 1; /*0x557366*/
  *(_DWORD *)(this + 76) = v18; /*0x55736f*/
  *(_DWORD *)(this + 80) = (a6 - 1) / v18; /*0x557372*/
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
  *(_DWORD *)(this + 52) = &VectorClass<unsigned short const *>::`vftable'; /*0x5573b4*/
  sub_4B5830((_DWORD *)(this + 52), (_DWORD *)(a2 + 52)); /*0x5573ba*/
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68); /*0x5573c2*/
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72); /*0x5573c8*/
  *(_DWORD *)(this + 52) = &DynamicVectorClass<unsigned short const *>::`vftable'; /*0x5573cb*/
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76); /*0x5573d7*/
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80); /*0x5573dd*/
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84); /*0x5573e9*/
  ControlClass::CtorFromData((_DWORD *)(this + 88), a2 + 88); /*0x5573ec*/
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132); /*0x5573fa*/
  *(_BYTE *)(this + 133) = *(_BYTE *)(a2 + 133); /*0x557400*/
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136); /*0x557406*/
  *(_DWORD *)(this + 88) = &ToggleClass::`vftable'; /*0x557409*/
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
  *(_DWORD *)(this + 88) = &ShapeButtonClass::`vftable'; /*0x557460*/
  ControlClass::CtorFromData((_DWORD *)(this + 184), a2 + 184); /*0x557466*/
  *(_BYTE *)(this + 228) = *(_BYTE *)(a2 + 228); /*0x55746e*/
  *(_BYTE *)(this + 229) = *(_BYTE *)(a2 + 229); /*0x557474*/
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232); /*0x55747a*/
  *(_DWORD *)(this + 184) = &ToggleClass::`vftable'; /*0x55747d*/
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
  *(_DWORD *)(this + 184) = &ShapeButtonClass::`vftable'; /*0x5574de*/
  sub_5581A0(this + 280, a2 + 280); /*0x5574e4*/
  *(_DWORD *)(this + 340) = *(_DWORD *)(a2 + 340); /*0x5574fa*/
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344); /*0x557500*/
  *(_BYTE *)(this + 348) = *(_BYTE *)(a2 + 348); /*0x557506*/
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352); /*0x55750c*/
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356); /*0x557512*/
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360); /*0x55751c*/
  *(_DWORD *)(this + 280) = &SliderClass::`vftable'; /*0x55751f*/
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364); /*0x55752c*/
  v3 = *(_DWORD *)(this + 88); /*0x557538*/
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368); /*0x55753c*/
  *(_DWORD *)this = &ListClass::`vftable'; /*0x557542*/
  (*(void (__thiscall **)(int, int))(v3 + 132))(this + 88, this); /*0x557548*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 184) + 132))(this + 184, this); /*0x557553*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 280) + 132))(this + 280, this); /*0x55755f*/
  return this; /*0x557566*/
}



// ==== 0x00557570  ListClass::RemoveItem  this=ListClass  sig=csp ====
int __thiscall CheckListClass::RemoveItem(ListClass *this, int a2, int a3)
{
  int ListClass_field_0x14; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edx
  int v7; // ebp
  int result; // eax

  ListClass_field_0x14 = this->ListClass_field_0x14; /*0x557570*/
  v4 = this->q01B; /*0x55757a*/
  v5 = *((_DWORD *)this + 51); /*0x557580*/
  this->q019 = a2 + ListClass_field_0x14 - v4; /*0x55758e*/
  this->q01A = a3; /*0x557595*/
  *((_DWORD *)this + 49) = a2 + ListClass_field_0x14 - v5; /*0x55759a*/
  v6 = this->ListClass_field_0x18 - this->u32_D; /*0x5575a3*/
  *((_DWORD *)this + 50) = v6 + a3; /*0x5575ad*/
  v7 = v4; /*0x5575b3*/
  if ( v4 <= v5 ) /*0x5575b5*/
    v7 = v5; /*0x5575b7*/
  *((_DWORD *)this + 73) = a2 + ListClass_field_0x14 - v7; /*0x5575c1*/
  result = this->u32_1C; /*0x5575c7*/
  *((_DWORD *)this + 74) = result + a3; /*0x5575d0*/
  *((_DWORD *)this + 76) = v6 - result; /*0x5575d6*/
  if ( v4 <= v5 ) /*0x5575dc*/
    *((_DWORD *)this + 75) = v5; /*0x5575eb*/
  else
    *((_DWORD *)this + 75) = v4; /*0x5575de*/
  return result; /*0x5575e4*/
}



// ==== 0x00557600  ListClass::Destruct  this=ListClass  sig=csp ====
int __thiscall ListClass::Destruct(ListClass *this)
{
  char v2; // al
  int v3; // edx
  void *v4; // eax

  v2 = this->Enabled; /*0x557606*/
  *(_DWORD *)this->__pad_0 = &ListClass::`vftable'; /*0x557609*/
  if ( v2 ) /*0x557611*/
  {
    v3 = *((_DWORD *)this + 70); /*0x55761c*/
    this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x557624*/
    this->Enabled = 0; /*0x55762d*/
    (*(void (__thiscall **)(char *))(v3 + 36))((char *)this + 280); /*0x557630*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557639*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557648*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x55764f*/
  }
  SliderClass::Destructor((SliderClass *)((char *)this + 280)); /*0x557658*/
  ShapeButtonClass::Destructor((int)this + 184); /*0x557663*/
  ShapeButtonClass::Destructor((int)this + 88); /*0x55766b*/
  v4 = (void *)*((_DWORD *)this + 14); /*0x557670*/
  this->u32_D = &VectorClass<unsigned short const *>::`vftable'; /*0x557673*/
  if ( v4 && *((_BYTE *)this + 65) ) /*0x55767e*/
  {
    __3_YAXPAX_Z(v4); /*0x557684*/
    *((_DWORD *)this + 14) = 0; /*0x55768c*/
  }
  *((_BYTE *)this + 65) = 0; /*0x557691*/
  *((_DWORD *)this + 15) = 0; /*0x557694*/
  return GadgetClass::Dtor((ShpButtonClass *)this); /*0x55769c*/
}



// ==== 0x005576A0  ListClass::AddItem  this=ListClass  sig=csp ====
int __thiscall ListClass::AddItem(ListClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx

  if ( a2 ) /*0x5576aa*/
  {
    v3 = *((_DWORD *)this + 15); /*0x5576ac*/
    if ( *((_DWORD *)this + 17) < v3 /*0x5576d5*/
      || (*((_BYTE *)this + 65) || !v3)
      && (v4 = *((_DWORD *)this + 18), v4 > 0)
      && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(this->u32_D + 8))(
           (char *)this + 52,
           v3 + v4,
           0) )
    {
      v5 = *((_DWORD *)this + 17); /*0x5576dc*/
      v6 = *((_DWORD *)this + 14); /*0x5576df*/
      *((_DWORD *)this + 17) = v5 + 1; /*0x5576e5*/
      *(_DWORD *)(v6 + 4 * v5) = a2; /*0x5576e8*/
    }
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x5576ef*/
    if ( *((_DWORD *)this + 17) > this->q014 ) /*0x5576fb*/
      (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 140))(this); /*0x557701*/
    if ( this->Enabled ) /*0x557707*/
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))( /*0x55771e*/
        (char *)this + 280,
        *((_DWORD *)this + 17));
  }
  return *((_DWORD *)this + 17) - 1; /*0x557727*/
}



// ==== 0x00557730  ListClass::RemoveItem  this=ListClass  sig=csp ====
char __thiscall ListClass::RemoveItem(ListClass *this, signed int a2)
{
  signed int v2; // eax
  signed int v4; // ecx
  signed int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = a2; /*0x557730*/
  v4 = *((_DWORD *)this + 17); /*0x557737*/
  if ( a2 < (unsigned int)v4 ) /*0x55773c*/
  {
    if ( a2 < v4 ) /*0x557744*/
    {
      v5 = v4 - 1; /*0x557746*/
      *((_DWORD *)this + 17) = v5; /*0x557749*/
      if ( a2 < v5 ) /*0x55774c*/
      {
        do /*0x55775e*/
        {
          ++v2; /*0x557751*/
          *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v2 - 4) = *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v2); /*0x557755*/
        }
        while ( v2 < *((_DWORD *)this + 17) ); /*0x55775e*/
      }
    }
    if ( *((_DWORD *)this + 17) <= this->q014 ) /*0x557768*/
      (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 176))(this); /*0x55776e*/
    if ( this->Enabled ) /*0x557774*/
      (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))( /*0x55778b*/
        (char *)this + 280,
        *((_DWORD *)this + 17));
    v6 = *((_DWORD *)this + 91); /*0x557791*/
    if ( v6 >= *((_DWORD *)this + 17) ) /*0x55779c*/
    {
      v7 = v6 - 1; /*0x55779e*/
      *((_DWORD *)this + 91) = v7; /*0x5577a1*/
      if ( v7 < 0 ) /*0x5577a7*/
        *((_DWORD *)this + 91) = 0; /*0x5577a9*/
    }
    v2 = *((_DWORD *)this + 92); /*0x5577b3*/
    if ( v2 >= *((_DWORD *)this + 17) ) /*0x5577be*/
    {
      v8 = v2 - 1; /*0x5577c0*/
      *((_DWORD *)this + 92) = v8; /*0x5577c3*/
      if ( v8 < 0 ) /*0x5577c9*/
        *((_DWORD *)this + 92) = 0; /*0x5577cb*/
      LOBYTE(v2) = this->Enabled; /*0x5577d5*/
      if ( (_BYTE)v2 ) /*0x5577da*/
        LOBYTE(v2) = (*(char (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, 1); /*0x5577ea*/
    }
  }
  return v2; /*0x5577f0*/
}



// ==== 0x00557800  ListClass::Destru_vt43  this=ListClass  sig=csp ====
int __thiscall ListClass::Destru_vt43(ListClass *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // eax

  result = a2; /*0x557800*/
  if ( a2 ) /*0x557809*/
  {
    v4 = *(_DWORD *)this->__pad_0; /*0x557816*/
    v5 = (*(int (__thiscall **)(char *, int *))(this->u32_D + 16))((char *)this + 52, &a2); /*0x557819*/
    return (*(int (__thiscall **)(ListClass *, int))(v4 + 168))(this, v5); /*0x55781f*/
  }
  return result; /*0x557826*/
}



// ==== 0x00557830  ListClass::DrawWithFlags  this=ListClass  sig=csp ====
int __thiscall CellClass::DrawWithFlags(ListClass *this, int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int v7; // eax

  v4 = a2; /*0x557831*/
  if ( (a2 & 4) != 0 ) /*0x55783b*/
  {
    *a3 = 0; /*0x557848*/
    CellClass::Draw((ControlClass *)this, a2 & 0xFFFFFFFB, a3, 0); /*0x55784e*/
    return 1; /*0x557854*/
  }
  else if ( (a2 & 0x100) != 0 ) /*0x557865*/
  {
    if ( *a3 == 38 ) /*0x55786c*/
    {
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 164))(this, -1); /*0x557874*/
      *a3 = 0; /*0x557880*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557886*/
    }
    else if ( *a3 == 40 ) /*0x557894*/
    {
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 164))(this, 1); /*0x55789c*/
      *a3 = 0; /*0x5578a8*/
      return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x5578ae*/
    }
    else
    {
      BYTE1(v4) = BYTE1(a2) & 0xFE; /*0x5578b9*/
      return CellClass::Draw((ControlClass *)this, v4, a3, 0); /*0x5578c2*/
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 92) /*0x5578e8*/
       + ((*(int (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer)
        - this->ListClass_field_0x10
        - 1)
       / *((_DWORD *)this + 19);
    *((_DWORD *)this + 91) = v7; /*0x5578ea*/
    if ( v7 >= *((_DWORD *)this + 17) - 1 ) /*0x5578f6*/
      v7 = *((_DWORD *)this + 17) - 1; /*0x5578f8*/
    *((_DWORD *)this + 91) = v7; /*0x5578fd*/
    if ( v7 == -1 ) /*0x557903*/
      *((_DWORD *)this + 91) = 0; /*0x557905*/
    return CellClass::Draw((ControlClass *)this, a2, a3, 0); /*0x557915*/
  }
}



// ==== 0x00557920  ListClass::DrawBuildingPlacement  this=ListClass  sig=csp ====
int __thiscall GadgetClass::DrawBuildingPlacement(ListClass *this, int a2)
{
  int ListClass_field_0x14; // ecx
  int ListClass_field_0x10; // eax
  int ListClass_field_0x18; // edx
  int i; // edi
  int v7; // eax
  int v9[4]; // [esp+10h] [ebp-10h] BYREF

  if ( !GadgetClass::ClearState((GadgetClass *)this, a2) ) /*0x55792e*/
    return 0; /*0x557a0b*/
  (*(void (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)stru_887598.lineTrailer + 32))( /*0x557965*/
    stru_887598.lineTrailer,
    this->ListClass_field_0x0C,
    this->ListClass_field_0x10,
    this->ListClass_field_0x14,
    this->ListClass_field_0x18);
  ListClass_field_0x14 = this->ListClass_field_0x14; /*0x55796b*/
  ListClass_field_0x10 = this->ListClass_field_0x10; /*0x55796e*/
  v9[0] = this->ListClass_field_0x0C; /*0x557971*/
  ListClass_field_0x18 = this->ListClass_field_0x18; /*0x557975*/
  v9[2] = ListClass_field_0x14; /*0x557978*/
  v9[3] = ListClass_field_0x18; /*0x55797c*/
  v9[1] = ListClass_field_0x10; /*0x55798b*/
  DrawBuildingTilesSHP(v9, 4, 1); /*0x55798f*/
  if ( *((_DWORD *)this + 17) ) /*0x557994*/
  {
    for ( i = 0; i < this->q014; ++i ) /*0x5579a2*/
    {
      v7 = i + *((_DWORD *)this + 92); /*0x5579ad*/
      if ( *((_DWORD *)this + 17) > v7 ) /*0x5579b1*/
        (*(void (__thiscall **)(ListClass *, int, int, int, int, bool))(*(_DWORD *)this->__pad_0 + 200))( /*0x5579e0*/
          this,
          v7,
          this->ListClass_field_0x0C + 1,
          i * *((_DWORD *)this + 19) + this->ListClass_field_0x10 + 1,
          this->ListClass_field_0x14 - 2,
          v7 == *((_DWORD *)this + 91));
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 36))(stru_887598.lineTrailer); /*0x5579f6*/
  return 1; /*0x5579fe*/
}



// ==== 0x00557A20  ListClass::SetItemState  this=ListClass  sig=csp ====
char __thiscall CheckListClass::SetItemState(ListClass *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = this->Enabled; /*0x557a24*/
  if ( (_BYTE)v3 ) /*0x557a29*/
  {
    v4 = (char *)this + 280; /*0x557a35*/
    v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, a2); /*0x557a3e*/
    if ( v3 ) /*0x557a46*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 144))((char *)this + 280); /*0x557a52*/
      LOBYTE(v3) = (*(char (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557a5c*/
    }
  }
  return v3; /*0x557a5f*/
}



// ==== 0x00557A70  ListClass::OnKeyUp  this=ListClass  sig=csp ====
char __thiscall CheckListClass::OnKeyUp(ListClass *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  LOBYTE(v3) = this->Enabled; /*0x557a74*/
  if ( (_BYTE)v3 ) /*0x557a79*/
  {
    v4 = (char *)this + 280; /*0x557a85*/
    v3 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 176))((char *)this + 280, a2); /*0x557a8e*/
    if ( v3 ) /*0x557a96*/
    {
      *((_DWORD *)this + 92) = (*(int (__thiscall **)(char *))(*(_DWORD *)v4 + 144))((char *)this + 280); /*0x557aa2*/
      LOBYTE(v3) = (*(char (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557aac*/
    }
  }
  return v3; /*0x557aaf*/
}



// ==== 0x00557AC0  ListClass::GetClamped  this=ListClass  sig=csp ====
int __thiscall Array::GetClamped(ListClass *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // eax

  result = *((_DWORD *)this + 17); /*0x557ac0*/
  if ( result ) /*0x557ac5*/
  {
    v3 = a2; /*0x557aca*/
    v4 = result - 1; /*0x557ace*/
    if ( a2 >= v4 ) /*0x557ad1*/
      v3 = v4; /*0x557ad3*/
    return *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v3); /*0x557ad8*/
  }
  return result; /*0x557ac7*/
}



// ==== 0x00557AE0  ListClass::SetColor  this=ListClass  sig=csp ====
int __thiscall ColorListClass::SetColor(ListClass *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 91); /*0x557ae0*/
  if ( *((_DWORD *)this + 17) > v1 ) /*0x557aeb*/
    return *(_DWORD *)(*((_DWORD *)this + 14) + 4 * v1); /*0x557af3*/
  else
    return 0; /*0x557aed*/
}



// ==== 0x00557B00  ListClass::GetItemCount  this=ListClass  sig=csp ====
int __thiscall CheckListClass::GetItemCount(ListClass *this)
{
  return *((_DWORD *)this + 91); /*0x557b06*/
}



// ==== 0x00557B10  ListClass::vt[19]  this=ListClass  sig=csp ====
char __thiscall CheckListClass::g_var_d2d9f4(ListClass *this, char a2, int a3, _DWORD *a4)
{
  char result; // al
  int v6; // edi
  int v7; // eax

  result = a2; /*0x557b10*/
  if ( (a2 & 4) != 0 ) /*0x557b1e*/
  {
    if ( a4 == (_DWORD *)((char *)this + 88) ) /*0x557b25*/
      (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 196))(this, 1); /*0x557b2b*/
    result = (_BYTE)this - 72; /*0x557b31*/
    if ( a4 == (_DWORD *)((char *)this + 184) ) /*0x557b39*/
      result = (*(int (__thiscall **)(ListClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 196))(this, 0); /*0x557b41*/
  }
  if ( a4 == (_DWORD *)((char *)this + 280) ) /*0x557b4f*/
  {
    v6 = *(_DWORD *)this->__pad_0; /*0x557b53*/
    v7 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 70) + 144))((char *)this + 280); /*0x557b55*/
    return (*(char (__thiscall **)(ListClass *, int))(v6 + 192))(this, v7); /*0x557b5e*/
  }
  return result; /*0x557b64*/
}



// ==== 0x00557B70  ListClass::OnKeyDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::OnKeyDown(ListClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  v3 = (*((_DWORD *)this + 17) - this->q014) & ((*((_DWORD *)this + 17) - this->q014 < 0) - 1); /*0x557b84*/
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
  if ( v4 == *((_DWORD *)this + 92) ) /*0x557b9e*/
    return 0; /*0x557bd6*/
  *((_DWORD *)this + 92) = v4; /*0x557ba0*/
  (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557baa*/
  if ( this->Enabled ) /*0x557bad*/
    (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 140))((char *)this + 280, *((_DWORD *)this + 92)); /*0x557bc7*/
  return 1; /*0x557bd2*/
}



// ==== 0x00557BE0  ListClass::InitControls  this=ListClass  sig=csp ====
int __thiscall GadgetClass::InitControls(ListClass *this)
{
  int v2; // eax
  int v3; // edx

  if ( this->Enabled ) /*0x557be3*/
    return 0; /*0x557ca7*/
  v2 = *(_DWORD *)this->__pad_0; /*0x557bee*/
  this->Enabled = 1; /*0x557bf3*/
  (*(void (**)(void))(v2 + 72))(); /*0x557bf7*/
  v3 = *((_DWORD *)this + 22); /*0x557c03*/
  this->ListClass_field_0x14 -= *((_DWORD *)this + 75); /*0x557c08*/
  (*(void (__thiscall **)(char *, ListClass *))(v3 + 132))((char *)this + 88, this); /*0x557c11*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 46) + 132))((char *)this + 184, this); /*0x557c26*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 70) + 132))((char *)this + 280, this); /*0x557c3b*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 22) + 12))((char *)this + 88, this); /*0x557c46*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 46) + 12))((char *)this + 184, this); /*0x557c4f*/
  (*(void (__thiscall **)(char *, ListClass *))(*((_DWORD *)this + 70) + 12))((char *)this + 280, this); /*0x557c57*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 72))((char *)this + 88); /*0x557c5e*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 72))((char *)this + 184); /*0x557c66*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 72))((char *)this + 280); /*0x557c6d*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 136))((char *)this + 280, *((_DWORD *)this + 17)); /*0x557c78*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 168))((char *)this + 280, this->q014); /*0x557c86*/
  (*(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)this + 70) + 140))((char *)this + 280, *((_DWORD *)this + 92)); /*0x557c97*/
  return 1; /*0x557ca5*/
}



// ==== 0x00557CB0  ListClass::GetItemData  this=ListClass  sig=csp ====
int __thiscall CheckListClass::GetItemData(ListClass *this)
{
  int v2; // edx

  if ( !this->Enabled ) /*0x557cb3*/
    return 0; /*0x557d01*/
  v2 = *((_DWORD *)this + 70); /*0x557cc3*/
  this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x557ccb*/
  this->Enabled = 0; /*0x557cd4*/
  (*(void (__thiscall **)(char *))(v2 + 36))((char *)this + 280); /*0x557cd8*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557ce1*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557cf0*/
  (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557cf7*/
  return 1; /*0x557cff*/
}



// ==== 0x00557D10  ListClass::KillFocus  this=ListClass  sig=csp ====
int __thiscall CheckListClass::KillFocus(ListClass *this, int a2)
{
  this->q00C = a2; /*0x557d14*/
  return a2; /*0x557d17*/
}



// ==== 0x00557D20  ListClass::Destru_vt50  this=ListClass  sig=csp ====
_DWORD *__thiscall ListClass::Destru_vt50(ListClass *this, int a2, int a3, int a4, int a5, int a6)
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

  v7 = *((_DWORD *)this + 11); /*0x557d29*/
  Type = BuildingAnim::GetType(); /*0x557d35*/
  if ( a6 ) /*0x557d3d*/
  {
    BYTE1(v7) |= 0x20u; /*0x557d44*/
    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type) + 796); /*0x557d52*/
    v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 372); /*0x557d5b*/
    if ( *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x557d61*/
      v11 = *(unsigned __int8 *)(v10 + v9); /*0x557d65*/
    else
      v11 = *(unsigned __int16 *)(v10 + 2 * v9); /*0x557d6c*/
    v20[0] = a3; /*0x557d78*/
    v20[3] = *((_DWORD *)this + 19); /*0x557d7f*/
    v20[1] = a4; /*0x557d8a*/
    v20[2] = a5; /*0x557d8e*/
    (*(void (__thiscall **)(AudioStream *, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 20))( /*0x557d99*/
      g_DSurface_Hidden_2,
      v20,
      v11);
  }
  else if ( (v7 & 0x4000) == 0 ) /*0x557da1*/
  {
    BYTE1(v7) |= 0x10u; /*0x557da3*/
  }
  v12 = *((_DWORD *)this + 14); /*0x557daa*/
  v19[0] = a3; /*0x557db1*/
  v13 = this->q00C; /*0x557db5*/
  v19[1] = a4; /*0x557db8*/
  v14 = (int *)(v12 + 4 * a2); /*0x557dbc*/
  v18 = v13; /*0x557dc8*/
  v17 = *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type); /*0x557dd0*/
  v15 = (*(int (__thiscall **)(AudioStream *, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2->__pad_0 + 120))( /*0x557de3*/
          g_DSurface_Hidden_2,
          v21);
  return FillRectangle(v20, *v14, (int)g_DSurface_Hidden_2, v15, (int)v19, v17, 0, v7, a5, v18); /*0x557df8*/
}



// ==== 0x00557E10  ListClass::ddtor  this=ListClass  sig=csp ====
int __thiscall CheckListClass::ddtor(ListClass *this, int a2)
{
  if ( this->Enabled ) /*0x557e18*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 12))((char *)this + 280, a2); /*0x557e2c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 12))((char *)this + 184, a2); /*0x557e3c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 12))((char *)this + 88, a2); /*0x557e46*/
  }
  return LinkedList::InsertAfter((LinkClass *)this, a2); /*0x557e51*/
}



// ==== 0x00557E60  ListClass::HitTest  this=ListClass  sig=csp ====
_DWORD *__thiscall CheckListClass::HitTest(ListClass *this, int a2)
{
  if ( this->Enabled ) /*0x557e68*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 20))((char *)this + 280, a2); /*0x557e7c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 20))((char *)this + 184, a2); /*0x557e8c*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 20))((char *)this + 88, a2); /*0x557e96*/
  }
  return LinkedList::Attach((LinkClass *)this, a2); /*0x557ea1*/
}



// ==== 0x00557EB0  ListClass::Draw  this=ListClass  sig=csp ====
int __thiscall CheckListClass::Draw(ListClass *this, int a2)
{
  LinkedList::Append((LinkClass *)this, a2); /*0x557eb9*/
  if ( this->Enabled ) /*0x557ebe*/
  {
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 22) + 16))((char *)this + 88, a2); /*0x557ecc*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 46) + 16))((char *)this + 184, a2); /*0x557edc*/
    (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 70) + 16))((char *)this + 280, a2); /*0x557eec*/
  }
  return (*(int (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x557ef6*/
}



// ==== 0x00557F00  ListClass::OnDblClick  this=ListClass  sig=csp ====
int __thiscall CheckListClass::OnDblClick(ListClass *this)
{
  if ( this->Enabled ) /*0x557f03*/
  {
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 36))((char *)this + 280); /*0x557f16*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x557f25*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x557f2e*/
  }
  return LinkClass::Destroy((GadgetClass *)this); /*0x557f38*/
}



// ==== 0x00557F40  ListClass::Clear  this=ListClass  sig=csp ====
int __thiscall ColorListClass::Clear(ListClass *this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x557f40*/
  if ( a2 >= *((_DWORD *)this + 17) ) /*0x557f4a*/
  {
    *((_DWORD *)this + 91) = 0; /*0x557f9b*/
  }
  else
  {
    *((_DWORD *)this + 91) = a2; /*0x557f4c*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x557f56*/
    if ( *((_DWORD *)this + 91) < *((_DWORD *)this + 92) ) /*0x557f67*/
      (*(void (__thiscall **)(ListClass *, _DWORD))(*(_DWORD *)this->__pad_0 + 192))(this, *((_DWORD *)this + 91)); /*0x557f6e*/
    v4 = this->q014; /*0x557f74*/
    result = *((_DWORD *)this + 91); /*0x557f7d*/
    if ( result >= v4 + *((_DWORD *)this + 92) ) /*0x557f87*/
      return (*(int (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 192))(this, result - v4 + 1); /*0x557f91*/
  }
  return result; /*0x557f97*/
}



// ==== 0x00557FB0  ListClass::ScrollDown  this=ListClass  sig=csp ====
int __thiscall CheckListClass::ScrollDown(ListClass *this, int a2)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 91); /*0x557fb7*/
  (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v2 + a2); /*0x557fc0*/
  return v2; /*0x557fc8*/
}



// ==== 0x00557FD0  ListClass::AddItem  this=ListClass  sig=csp ====
void __thiscall CheckListClass::AddItem(ListClass *this)
{
  if ( this->Enabled ) /*0x557fd3*/
  {
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 72))((char *)this + 88); /*0x557fe0*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 72))((char *)this + 184); /*0x557fef*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 70) + 72))((char *)this + 280); /*0x557ffe*/
  }
  VectorClass_ptr_ConvertClass::MarkDirty((GadgetClass *)this); /*0x558003*/
}



// ==== 0x00558010  ListClass::RemoveColor  this=ListClass  sig=csp ====
void __thiscall ColorListClass::RemoveColor(ListClass *this, wchar_t *String2)
{
  int v3; // esi

  if ( String2 && *((int *)this + 17) > 0 ) /*0x558022*/
  {
    v3 = 0; /*0x558024*/
    while ( _wcsicmp(*(const wchar_t **)(*((_DWORD *)this + 14) + 4 * v3), String2) ) /*0x55803c*/
    {
      if ( ++v3 >= *((_DWORD *)this + 17) ) /*0x558044*/
        return; /*0x558044*/
    }
    (*(void (__thiscall **)(ListClass *, int))(*(_DWORD *)this->__pad_0 + 184))(this, v3); /*0x558051*/
  }
}



// ==== 0x00558060  ListClass::Destru_vt00  this=ListClass  sig=csp ====
_BYTE *__thiscall ListClass::Destru_vt00(ListClass *this, char a2)
{
  char v3; // al
  int v4; // edx
  void *v5; // eax

  v3 = this->Enabled; /*0x558066*/
  *(_DWORD *)this->__pad_0 = &ListClass::`vftable'; /*0x558069*/
  if ( v3 ) /*0x558071*/
  {
    v4 = *((_DWORD *)this + 70); /*0x55807c*/
    this->ListClass_field_0x14 += *((_DWORD *)this + 75); /*0x558084*/
    this->Enabled = 0; /*0x55808d*/
    (*(void (__thiscall **)(char *))(v4 + 36))((char *)this + 280); /*0x558090*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 22) + 36))((char *)this + 88); /*0x558099*/
    (*(void (__thiscall **)(char *))(*((_DWORD *)this + 46) + 36))((char *)this + 184); /*0x5580a8*/
    (*(void (__thiscall **)(ListClass *))(*(_DWORD *)this->__pad_0 + 72))(this); /*0x5580af*/
  }
  SliderClass::Destructor((SliderClass *)((char *)this + 280)); /*0x5580b8*/
  ShapeButtonClass::Destructor((int)this + 184); /*0x5580c3*/
  ShapeButtonClass::Destructor((int)this + 88); /*0x5580cb*/
  v5 = (void *)*((_DWORD *)this + 14); /*0x5580d0*/
  this->u32_D = &VectorClass<unsigned short const *>::`vftable'; /*0x5580d3*/
  if ( v5 && *((_BYTE *)this + 65) ) /*0x5580de*/
  {
    __3_YAXPAX_Z(v5); /*0x5580e4*/
    *((_DWORD *)this + 14) = 0; /*0x5580ec*/
  }
  *((_BYTE *)this + 65) = 0; /*0x5580f1*/
  *((_DWORD *)this + 15) = 0; /*0x5580f4*/
  GadgetClass::Dtor((ShpButtonClass *)this); /*0x5580f7*/
  if ( (a2 & 1) != 0 ) /*0x558101*/
    __3_YAXPAX_Z(this); /*0x558104*/
  return this->__pad_0; /*0x55810e*/
}



// ==== 0x00558120  SliderClass::?  this=SliderClass  sig=csp ====
int __thiscall SliderClass::g_var_d52e84(SliderClass *this)
{
  return *((_DWORD *)this + 19); /*0x558123*/
}



// ==== 0x00558130  _DynamicVectorClass_PBG::drawList  this=DynamicVector  sig=csp ====
_DWORD *__thiscall CheckListClass::drawList(_DynamicVectorClass_PBG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x558133*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short const *>::`vftable'; /*0x558136*/
  if ( v3 && BYTE1(this->m_C) ) /*0x558140*/
  {
    __3_YAXPAX_Z(v3); /*0x558148*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x558150*/
  }
  BYTE1(this->m_C) = 0; /*0x55815b*/
  this->m_8 = 0; /*0x558161*/
  if ( (a2 & 1) != 0 ) /*0x558168*/
    __3_YAXPAX_Z(this); /*0x55816b*/
  return this->__pad_0; /*0x558175*/
}



// ==== 0x00558180  SliderClass::QueryInterface  this=SliderClass  sig=csp ====
_DWORD *__thiscall SliderClass::QueryInterface(SliderClass *this, char a2)
{
  SliderClass::Destructor(this); /*0x558183*/
  if ( (a2 & 1) != 0 ) /*0x55818d*/
    __3_YAXPAX_Z(this); /*0x558190*/
  return this->__pad_0; /*0x55819a*/
}



// ==== 0x005581A0  GaugeClass::method_5581A0  this=GaugeClass  sig=csp ====
int __thiscall sub_5581A0(int this, int a2)
{
  ControlClass::CtorFromData((_DWORD *)this, a2); /*0x5581a9*/
  *(_BYTE *)(this + 44) = *(_BYTE *)(a2 + 44); /*0x5581b1*/
  *(_BYTE *)(this + 45) = *(_BYTE *)(a2 + 45); /*0x5581b7*/
  *(_BYTE *)(this + 46) = *(_BYTE *)(a2 + 46); /*0x5581bd*/
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48); /*0x5581c3*/
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52); /*0x5581c9*/
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56); /*0x5581cf*/
  *(_DWORD *)this = &GaugeClass::`vftable'; /*0x5581d2*/
  return this; /*0x5581da*/
}



// ==== 0x005581E0  _DynamicVectorClass_PBG::scrollList  this=DynamicVector  sig=csp ====
void __thiscall CheckListClass::scrollList(_DynamicVectorClass_PBG *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x5581e6*/
  this->m_10 = 0; /*0x5581e9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x5581f0*/
  {
    __3_YAXPAX_Z(v2); /*0x5581f6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5581fe*/
  }
  BYTE1(this->m_C) = 0; /*0x558201*/
  this->m_8 = 0; /*0x558204*/
}



// ==== 0x00558210  _DynamicVectorClass_PBG::selectItem  this=DynamicVector  sig=csp ====
unsigned int __thiscall CheckListClass::selectItem(_DynamicVectorClass_PBG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x558210*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x558225*/
  else
    return 0; /*0x558217*/
}



// ==== 0x00558230  _VectorClass_PBG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::Count(_VectorClass_PBG *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55823a*/
}



// ==== 0x00558240  _VectorClass_PBG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::Get(_VectorClass_PBG *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x558242*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55824d*/
  {
    v3 = 0; /*0x55824f*/
    if ( m_8 <= 0 ) /*0x558253*/
      return 1; /*0x558273*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x558255*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55825b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x558264*/
    {
      ++v3; /*0x558266*/
      ++v4; /*0x558267*/
      if ( v3 >= m_8 ) /*0x55826c*/
        return 1; /*0x55826c*/
    }
  }
  return 0; /*0x55826e*/
}



// ==== 0x00558280  _VectorClass_PBG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PBG::Release(_VectorClass_PBG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55828c*/
  {
    LOBYTE(this->m_C) = 0; /*0x558296*/
    if ( a3 ) /*0x55829c*/
      v4 = a3; /*0x5582b2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5582ae*/
    LOBYTE(this->m_C) = 1; /*0x5582b6*/
    if ( v4 ) /*0x5582ba*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x5582c5*/
      {
        m_8 = this->m_8; /*0x5582cc*/
        if ( a2 < m_8 ) /*0x5582d1*/
          m_8 = a2; /*0x5582d3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x5582d9*/
          ++i; /*0x5582de*/
        if ( BYTE1(this->m_C) ) /*0x5582eb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x5582f6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x5582fe*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x558307*/
      this->m_8 = a2; /*0x55830f*/
      BYTE1(this->m_C) = a3 == 0; /*0x558312*/
      return 1; /*0x558318*/
    }
    else
    {
      return 0; /*0x5582bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PBG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x558322*/
    return 1; /*0x558328*/
  }
}



// ==== 0x00558330  _VectorClass_PBG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PBG::Set(_VectorClass_PBG *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55833d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x558343*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55834b*/
  }
  BYTE1(this->m_C) = 0; /*0x55834e*/
  this->m_8 = 0; /*0x558351*/
}



// ==== 0x00558360  _VectorClass_PBG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PBG::GetSize(_VectorClass_PBG *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x558360*/
    return 0; /*0x558368*/
  m_8 = this->m_8; /*0x55836e*/
  result = 0; /*0x558371*/
  if ( m_8 <= 0 ) /*0x558375*/
    return -1; /*0x55838c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55837b*/
  {
    if ( ++result >= m_8 ) /*0x55838a*/
      return -1; /*0x55838a*/
  }
  return result; /*0x55836a*/
}



// ==== 0x005583A0  _VectorClass_PBG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PBG::GetCapacity(_VectorClass_PBG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x5583a0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x5583b5*/
  else
    return 0; /*0x5583a7*/
}



// ==== 0x005583C0  _DynamicVectorClass_PBG::clearList  this=DynamicVector  sig=csp ====
char __thiscall CheckListClass::clearList(_DynamicVectorClass_PBG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x5583cc*/
  {
    LOBYTE(this->m_C) = 0; /*0x5583d2*/
    if ( a3 ) /*0x5583d8*/
      v4 = a3; /*0x5583ee*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x5583ea*/
    LOBYTE(this->m_C) = 1; /*0x5583f2*/
    if ( !v4 ) /*0x5583f6*/
      return 0; /*0x55846a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x5583f8*/
    {
      m_8 = this->m_8; /*0x5583ff*/
      if ( a2 < m_8 ) /*0x558404*/
        m_8 = a2; /*0x558406*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55840c*/
        ++i; /*0x558411*/
      if ( BYTE1(this->m_C) ) /*0x55841e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x558429*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x558431*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55843a*/
    this->m_8 = a2; /*0x558442*/
    BYTE1(this->m_C) = a3 == 0; /*0x558445*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PBG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55844e*/
  }
  v7 = this->m_8; /*0x558451*/
  if ( v7 < this->m_10 ) /*0x558459*/
    this->m_10 = v7; /*0x55845b*/
  return 1; /*0x55845e*/
}



// ==== 0x00558470  _DynamicVectorClass_PBG::getItemCount  this=DynamicVector  sig=csp ====
int __thiscall CheckListClass::getItemCount(_DynamicVectorClass_PBG *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x558470*/
  result = 0; /*0x558473*/
  if ( m_10 <= 0 ) /*0x558478*/
    return -1; /*0x55848f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55847e*/
  {
    if ( ++result >= m_10 ) /*0x55848d*/
      return -1; /*0x55848d*/
  }
  return result; /*0x558492*/
}



// ==== 0x005584A0  _VectorClass_PBG::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PBG::QueryInterface(_VectorClass_PBG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x5584a3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short const *>::`vftable'; /*0x5584a6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x5584b0*/
  {
    __3_YAXPAX_Z(v3); /*0x5584b8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x5584c0*/
  }
  BYTE1(this->m_C) = 0; /*0x5584cb*/
  this->m_8 = 0; /*0x5584d1*/
  if ( (a2 & 1) != 0 ) /*0x5584d8*/
    __3_YAXPAX_Z(this); /*0x5584db*/
  return this->__pad_0; /*0x5584e5*/
}



// ==== 0x005584F0  sub_5584F0  this=-  sig=csp ====
size_t __fastcall sub_5584F0(char *a1, void *a2)
{
  size_t v2; // esi
  int v3; // eax
  char *v4; // ecx

  if ( !a1 || !a2 ) /*0x5584f6*/
    return 0; /*0x55852a*/
  v2 = *(_DWORD *)(a1 + 2); /*0x5584fc*/
  v3 = *a1 - 3; /*0x558500*/
  v4 = &a1[*((__int16 *)a1 + 3) + 8]; /*0x558507*/
  if ( v3 ) /*0x55850b*/
  {
    if ( v3 != 1 ) /*0x55850f*/
    {
      memcpy(a2, v4, v2); /*0x558513*/
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
_DWORD *__thiscall LoadOptions::LoadOptions(LoadOptions *this)
{
  char *p_is_active; // ecx
  int v3; // eax

  p_is_active = &this->is_active; /*0x558745*/
  *((_DWORD *)p_is_active + 1) = 0; /*0x558748*/
  *((_DWORD *)p_is_active + 2) = 0; /*0x55874b*/
  p_is_active[12] = 1; /*0x55874e*/
  p_is_active[13] = 0; /*0x558752*/
  *(_DWORD *)p_is_active = &DynamicVectorClass<FileEntryClass *>::`vftable'; /*0x558755*/
  *((_DWORD *)p_is_active + 5) = 10; /*0x55875b*/
  *((_DWORD *)p_is_active + 4) = 0; /*0x558762*/
  *(_DWORD *)this->__pad_4 = 0; /*0x558765*/
  this->field_0C = 0; /*0x558768*/
  this->field_14 = 0; /*0x55876b*/
  v3 = *(_DWORD *)p_is_active; /*0x55876e*/
  this->extension = &LoadOptionsClass::`vftable'; /*0x558770*/
  *(_DWORD *)&this->__pad_4[4] = &off_829EA0; /*0x558776*/
  this->max_entries = 2048; /*0x55877d*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x558784*/
  return &this->extension; /*0x558789*/
}



// ==== 0x00558790  LoadOptions::Cleanup  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::Cleanup(LoadOptions *this)
{
  int v2; // edi
  int v3; // edx
  char *p_is_active; // esi
  int result; // eax

  v2 = 0; /*0x558797*/
  for ( this->extension = &LoadOptionsClass::`vftable'; v2 < this->capacity; ++v2 ) /*0x5587a4*/
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)&this->__pad_22[2] + 4 * v2)); /*0x5587ad*/
  v3 = *(_DWORD *)&this->is_active; /*0x5587bd*/
  p_is_active = &this->is_active; /*0x5587c0*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x5587c5*/
  result = *((_DWORD *)p_is_active + 1); /*0x5587c8*/
  *(_DWORD *)p_is_active = &VectorClass<FileEntryClass *>::`vftable'; /*0x5587cb*/
  if ( result && p_is_active[13] ) /*0x5587d5*/
  {
    __3_YAXPAX_Z((void *)result); /*0x5587db*/
    *((_DWORD *)p_is_active + 1) = 0; /*0x5587e3*/
  }
  p_is_active[13] = 0; /*0x5587e6*/
  *((_DWORD *)p_is_active + 2) = 0; /*0x5587e9*/
  return result; /*0x5587ec*/
}



// ==== 0x005587F0  LoadOptions::Run  this=LoadOptions  sig=csp ====
int __thiscall LoadOptions::Run(LoadOptions *this)
{
  int result; // eax

  *(_DWORD *)this->__pad_4 = 1; /*0x5587f0*/
  this->field_0C = 0; /*0x5587f7*/
  LOBYTE(result) = SaveLoadDialog::DlgProc((SaveLoadDialog *)this); /*0x5587fe*/
  return result;
}



// ==== 0x00558810  ObjectClass::ShowSaveLoadDialog  this=ObjectClass  sig=csp ====
bool __thiscall ShowSaveLoadDialog(bool *this, char *a2)
{
  char *p_referenceCount; // eax

  p_referenceCount = a2; /*0x558810*/
  this->ptr_8 = 2; /*0x558814*/
  if ( !a2 ) /*0x55881d*/
    p_referenceCount = (char *)&dword_A8B230[137].referenceCount; /*0x558824*/
  this->ptr_10 = p_referenceCount; /*0x558829*/
  return SaveLoadDialog::DlgProc((SaveLoadDialog *)this); /*0x558831*/
}



// ==== 0x00558840  Options::PrepareSaveLoadDlg  this=Options  sig=csp ====
bool __thiscall Options::PrepareSaveLoadDlg(Options *this)
{
  this->field_4 = (void *)3; /*0x558840*/
  this->field_C = 0; /*0x558847*/
  return SaveLoadDialog::DlgProc((SaveLoadDialog *)this);
}



// ==== 0x005588E0  sub_5588E0  this=-  sig=csp ====
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



// ==== 0x00558A30  sub_558A30  this=-  sig=csp ====
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



// ==== 0x00558B90  sub_558B90  this=-  sig=csp ====
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



// ==== 0x00558CB0  sub_558CB0  this=-  sig=csp ====
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



// ==== 0x00558DD0  SaveLoadDialog::DlgProc  this=SaveLoadDialog  sig=csp ====
bool __thiscall SaveLoadDialog::DlgProc(SaveLoadDialog *this)
{
  HWND v2; // ebp
  Dialog *Dialog; // edi
  HWND v4; // ebx
  LPARAM v5; // eax
  int *v6; // eax
  HWND DlgItem; // eax
  LPARAM v9; // ebp
  HWND v10; // eax
  HWND v11; // ebx
  LPARAM v12; // eax
  HWND v13; // ebx
  LPARAM v14; // eax
  HWND v15; // eax
  HWND v16; // ebx
  LRESULT v17; // eax
  TechnoTypeClass *v18; // ecx
  void (*v19)(void); // eax
  int v20; // eax
  LRESULT v21; // eax
  LRESULT v22; // ebp
  wchar_t *v23; // eax
  HWND v24; // eax
  int v25; // ebx
  LRESULT v26; // eax
  wchar_t *v27; // eax
  HWND v28; // eax
  LRESULT v29; // eax
  HWND v30; // eax
  int *v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  char *v34; // ebp
  int v35; // eax
  _DWORD *v36; // eax
  bool v37; // bl
  int *v38; // eax
  int *v39; // eax
  int *v40; // ebp
  wchar_t *v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // ecx
  int *v45; // eax
  int i; // ebx
  wchar_t *StringCSF; // [esp-10h] [ebp-3D8h]
  wchar_t *v48; // [esp-10h] [ebp-3D8h]
  wchar_t *v49; // [esp-10h] [ebp-3D8h]
  wchar_t *v50; // [esp-10h] [ebp-3D8h]
  wchar_t *v51; // [esp-10h] [ebp-3D8h]
  wchar_t *v52; // [esp-Ch] [ebp-3D4h]
  wchar_t *v53; // [esp-Ch] [ebp-3D4h]
  const char *SaveLoadDialog_field_0x08; // [esp-4h] [ebp-3CCh]
  int v55; // [esp+0h] [ebp-3C8h]
  WPARAM wParam; // [esp+10h] [ebp-3B8h]
  WPARAM wParama; // [esp+10h] [ebp-3B8h]
  HWND hWnd; // [esp+14h] [ebp-3B4h]
  CCFileClass v59; // [esp+38h] [ebp-390h] BYREF
  char v60[12]; // [esp+90h] [ebp-338h] BYREF
  int v61; // [esp+9Ch] [ebp-32Ch]
  RawFileClass v62; // [esp+A4h] [ebp-324h] BYREF
  LPARAM lParam[128]; // [esp+C8h] [ebp-300h] BYREF
  char Buffer[256]; // [esp+2C8h] [ebp-100h] BYREF

  v2 = 0; /*0x558ddc*/
  Dialog = 0; /*0x558de1*/
  hWnd = 0; /*0x558de4*/
  if ( this->SaveLoadDialog_field_0x04 != 1 ) /*0x558de8*/
  {
    if ( this->SaveLoadDialog_field_0x04 == 2 ) /*0x558def*/
    {
      if ( DiskSpace::CheckAvailable() < this->q004 ) /*0x558e65*/
      {
        StringCSF = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e88*/
        v6 = (int *)GetStringCSF(aTxtDiskfull, 0, g_Str_File_LoadDlg_CPP, 432); /*0x558e9a*/
        Dialog::ShowMessageBox(v6, StringCSF, 0, 0, 0, v55); /*0x558ea4*/
        return 0; /*0x558eb5*/
      }
      Dialog = (Dialog *)CreateDialog(0x2B4u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558B90, 0); /*0x558ecc*/
      DlgItem = GetDlgItem((HWND)Dialog, 1319); /*0x558ed4*/
      v9 = *((_DWORD *)this + 3); /*0x558ed6*/
      hWnd = DlgItem; /*0x558edf*/
      v10 = GetDlgItem((HWND)Dialog, 1318); /*0x558ee3*/
      SendMessageA(v10, 0x4B2u, 0, v9); /*0x558eee*/
      v2 = GetDlgItem((HWND)Dialog, 1735); /*0x558f02*/
      v11 = GetDlgItem((HWND)Dialog, 1684); /*0x558f0a*/
      v12 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 24))(this); /*0x558f0c*/
      SendMessageA(v11, 0x4B2u, 0, v12); /*0x558f18*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f23*/
        goto LABEL_12; /*0x558f2a*/
    }
    else
    {
      if ( this->SaveLoadDialog_field_0x04 != 3 ) /*0x558df2*/
        goto LABEL_12; /*0x558df2*/
      Dialog = (Dialog *)CreateDialog(0x2B5u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558CB0, 0); /*0x558e0e*/
      hWnd = GetDlgItem((HWND)Dialog, 1320); /*0x558e1e*/
      v2 = GetDlgItem((HWND)Dialog, 1736); /*0x558e2a*/
      v4 = GetDlgItem((HWND)Dialog, 1684); /*0x558e2e*/
      v5 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 28))(this); /*0x558e34*/
      SendMessageA(v4, 0x4B2u, 0, v5); /*0x558e40*/
      if ( (unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558e4b*/
        goto LABEL_12; /*0x558e52*/
    }
    goto LABEL_11; /*0x558e52*/
  }
  Dialog = (Dialog *)CreateDialog(0xB7u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_558A30, 0); /*0x558f44*/
  hWnd = GetDlgItem((HWND)Dialog, 1317); /*0x558f54*/
  v2 = GetDlgItem((HWND)Dialog, 1039); /*0x558f60*/
  v13 = GetDlgItem((HWND)Dialog, 1684); /*0x558f64*/
  v14 = (*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 20))(this); /*0x558f6a*/
  SendMessageA(v13, 0x4B2u, 0, v14); /*0x558f76*/
  if ( !(unsigned __int8)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x558f81*/
  {
LABEL_11:
    v15 = GetDlgItem((HWND)Dialog, 1036); /*0x558f8a*/
    ShowWindow(v15, 0); /*0x558f99*/
  }
LABEL_12:
  *((_DWORD *)this + 6) = -1; /*0x558f9f*/
  if ( !Dialog ) /*0x558fa8*/
    return *((_DWORD *)this + 6) == 1039; /*0x558fa8*/
  SetWindowLongA((HWND)Dialog, 8, (LONG)this); /*0x558fb2*/
  v16 = hWnd; /*0x558fb8*/
  if ( hWnd ) /*0x558fbe*/
  {
    LoadSaveDialog::FillList((LoadSaveDialog *)this, hWnd); /*0x558fc3*/
    v17 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x558fd2*/
    EnableWindow(v2, v17 > 0); /*0x558fe5*/
  }
  Dialog::Show(Dialog); /*0x558fed*/
  while ( 1 ) /*0x558ff8*/
  {
    while ( *((_DWORD *)this + 6) == -1 ) /*0x559000*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x559009*/
        *((_DWORD *)this + 6) = 2; /*0x55900b*/
      v19 = (void (*)(void))*((_DWORD *)this + 5); /*0x559012*/
      if ( v19 ) /*0x559017*/
        v19(); /*0x559019*/
      if ( !byte_A8E9A0 ) /*0x559022*/
      {
        LOBYTE(v18) = 0; /*0x559024*/
        ScreenSaver::Process(v18, v55); /*0x559026*/
      }
    }
    v20 = *((_DWORD *)this + 6); /*0x559030*/
    if ( v20 == 1 || v20 == 1039 || v20 == 1735 || v20 == 1736 ) /*0x55904b*/
    {
      v21 = SendMessageA(v16, 0x188u, 0, 0); /*0x559061*/
      wParam = v21; /*0x559066*/
      if ( v21 == -1 ) /*0x55906a*/
        goto LABEL_70; /*0x55906a*/
      v22 = SendMessageA(v16, 0x199u, v21, 0); /*0x55907b*/
      switch ( this->SaveLoadDialog_field_0x04 ) /*0x559081*/
      {
        case 1: /*0x559081*/
          if ( *(_BYTE *)(v22 + 437) ) /*0x5594ae*/
            break; /*0x5594b6*/
          v42 = Game::CheckForGameCD((Game *)0x3C); /*0x5594c6*/
          v43 = *(_DWORD *)(v22 + 424); /*0x5594c8*/
          if ( v43 == -1 ) /*0x5594d1*/
            v44 = -1; /*0x5594d3*/
          else
            v44 = *(_DWORD *)(*((_DWORD *)dword_A83CFC + v43) + 152); /*0x5594e0*/
          SetSoundWarning(v44); /*0x5594e6*/
          if ( (unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x5594fd*/
          {
            ShowWindow((HWND)Dialog, 0); /*0x559516*/
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x559524*/
            if ( (*(unsigned __int8 (__thiscall **)(SaveLoadDialog *, int))(*(_DWORD *)this->__pad_0 + 4))( /*0x559532*/
                   this,
                   v22 + 256) )
            {
              break; /*0x559537*/
            }
            (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x559541*/
            ShowWindow((HWND)Dialog, 5); /*0x55954d*/
            v51 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559573*/
            v45 = (int *)GetStringCSF(aTxtErrorLoadin, 0, g_Str_File_LoadDlg_CPP, 550); /*0x559585*/
            Dialog::ShowMessageBox(v45, v51, 0, 0, 0, v55); /*0x55958f*/
            ShowWindow((HWND)Dialog, 0); /*0x559597*/
          }
          else
          {
            SetSoundWarning(v42); /*0x559509*/
          }
          goto LABEL_70; /*0x55950e*/
        case 2: /*0x559081*/
          v28 = GetDlgItem((HWND)Dialog, 1319); /*0x5591b2*/
          wParama = 0; /*0x5591b6*/
          if ( v28 ) /*0x5591be*/
          {
            v29 = SendMessageA(v28, 0x4EFu, 0, 0); /*0x5591ca*/
            wParama = v29; /*0x5591d2*/
            if ( v29 ) /*0x5591d6*/
              SetDialogActiveFlag(v29, 1); /*0x5591dc*/
          }
          v30 = GetDlgItem((HWND)Dialog, 1318); /*0x5591e7*/
          SendMessageA(v30, 0x4B3u, 0x50u, (LPARAM)lParam); /*0x5591f9*/
          WideString::Trim((wchar_t *)lParam); /*0x559206*/
          if ( !wcslen((const wchar_t *)lParam) ) /*0x559213*/
          {
            v48 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559240*/
            v31 = (int *)GetStringCSF(aTxtMustenterDe, 0, g_Str_File_LoadDlg_CPP, 574); /*0x559252*/
            Dialog::ShowMessageBox(v31, v48, 0, 0, 0, v55); /*0x55925c*/
            v32 = GetDlgItem((HWND)Dialog, 1318); /*0x559267*/
            SetFocus(v32); /*0x55926a*/
            v33 = GetDlgItem((HWND)Dialog, 1318); /*0x55927f*/
            SendMessageA(v33, 0xB1u, 0xFFFFFFFF, -1); /*0x559282*/
LABEL_70:
            *((_DWORD *)this + 6) = -1; /*0x559599*/
            break; /*0x559599*/
          }
          if ( v22 && *(_BYTE *)(v22 + 436) ) /*0x559291*/
          {
            v34 = (char *)(v22 + 256); /*0x55929b*/
          }
          else
          {
            CCFileClass::Construct3((int)&v59); /*0x5592a7*/
            do /*0x5592e9*/
            {
              SaveLoadDialog_field_0x08 = (const char *)this->SaveLoadDialog_field_0x08; /*0x5592af*/
              v35 = rand(); /*0x5592b0*/
              sprintf(Buffer, "SAVE%04lX.%3s", v35, SaveLoadDialog_field_0x08); /*0x5592c3*/
              FileClass::SetFileName(&v59, Buffer); /*0x5592d7*/
            }
            while ( (unsigned __int8)CCFileClass::Open(&v59, 0) == 1 ); /*0x5592e9*/
            *(_DWORD *)v59.CDFileClass = &CCFileClass::`vftable'; /*0x5592f2*/
            v61 = 0; /*0x5592fa*/
            Vector::Clear((int)v60); /*0x559305*/
            *(_DWORD *)v59.CDFileClass = &off_7E1668; /*0x55930e*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v59); /*0x559316*/
            v34 = Buffer; /*0x55931b*/
          }
          if ( v34 ) /*0x559324*/
          {
            v36 = RawFileClass::Construct(&v62, (int)v34); /*0x559332*/
            v37 = (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v36 + 20))(v36, 0) == 1; /*0x559349*/
            RawFileClass::Dtor(&v62); /*0x55934c*/
            if ( v37 /*0x5593aa*/
              && (v53 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 594),
                  v49 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 594),
                  v38 = (int *)GetStringCSF(aTxtConfirmSave, 0, g_Str_File_LoadDlg_CPP, 594),
                  Dialog::ShowMessageBox(v38, v49, v53, 0, 0, v55)) )
            {
              *((_DWORD *)this + 6) = -1; /*0x5593b3*/
            }
            else
            {
              ShowWindow((HWND)Dialog, 0); /*0x5593c8*/
              if ( (*(unsigned __int8 (__thiscall **)(SaveLoadDialog *, char *, LPARAM *))(*(_DWORD *)this->__pad_0 + 8))( /*0x5593d7*/
                     this,
                     v34,
                     lParam) )
              {
                ShowWindow((HWND)Dialog, 5); /*0x559431*/
                SaveLoadDialog::FindDialogTemplate((SaveLoadDialog *)Dialog); /*0x559435*/
                v40 = (int *)(*(int (__thiscall **)(SaveLoadDialog *))(*(_DWORD *)this->__pad_0 + 32))(this); /*0x559458*/
                v41 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 617); /*0x559462*/
                Dialog::ShowMessageBox(v40, v41, 0, 0, 0, v55); /*0x55946d*/
                SaveLoadDialog::LookupDialogHash((SaveLoadDialog *)Dialog); /*0x559474*/
                ShowWindow((HWND)Dialog, 0); /*0x55947c*/
                if ( *((_DWORD *)this + 3) ) /*0x55947e*/
                  wcscpy((wchar_t *)lParam, *((const wchar_t **)this + 3)); /*0x55948e*/
              }
              else
              {
                ShowWindow((HWND)Dialog, 5); /*0x5593e1*/
                v50 = GetStringCSF(g_Str_TXT_OK, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559407*/
                v39 = (int *)GetStringCSF(aTxtErrorSaving, 0, g_Str_File_LoadDlg_CPP, 609); /*0x559419*/
                Dialog::ShowMessageBox(v39, v50, 0, 0, 0, v55); /*0x559423*/
                *((_DWORD *)this + 6) = -1; /*0x559428*/
              }
            }
          }
          if ( wParama ) /*0x55949c*/
            SetDialogActiveFlag(wParama, 0); /*0x5594a4*/
          break;
        case 3: /*0x559081*/
          v23 = GetStringCSF(aTxtDeleteFileQ, 0, g_Str_File_LoadDlg_CPP, 635); /*0x5590a7*/
          swprintf((wchar_t *const)lParam, (const size_t)&off_829F24, v23, v22); /*0x5590ba*/
          v24 = GetDlgItem((HWND)Dialog, 1320); /*0x5590c8*/
          v25 = 0; /*0x5590ce*/
          if ( v24 ) /*0x5590d2*/
          {
            v26 = SendMessageA(v24, 0x4EFu, 0, 0); /*0x5590dc*/
            v25 = v26; /*0x5590e2*/
            if ( v26 ) /*0x5590e6*/
              SetDialogActiveFlag(v26, 1); /*0x5590ec*/
          }
          v52 = GetStringCSF(g_Str_TXT_NO, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559113*/
          v27 = GetStringCSF(g_Str_TXT_YES, 0, g_Str_File_LoadDlg_CPP, 646); /*0x559125*/
          if ( Dialog::ShowMessageBox(lParam, v27, v52, 0, 0, v55) /*0x559187*/
            || ((*(void (__thiscall **)(SaveLoadDialog *, int))(*(_DWORD *)this->__pad_0 + 12))(this, v22 + 256),
                SendMessageA(hWnd, 0x182u, wParam, 0),
                SendMessageA(hWnd, 0x186u, 0, 0),
                SendMessageA(hWnd, 0x18Bu, 0, 0) > 0) )
          {
            *((_DWORD *)this + 6) = -1; /*0x559189*/
          }
          if ( v25 ) /*0x559192*/
            SetDialogActiveFlag(v25, 0); /*0x55919c*/
          break;
      }
    }
    if ( *((_DWORD *)this + 6) != -1 ) /*0x5595a4*/
      break; /*0x5595a4*/
    v16 = hWnd; /*0x558ff4*/
  }
  for ( i = 0; i < *((_DWORD *)this + 12); ++i ) /*0x5595b1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)this + 9) + 4 * i)); /*0x5595ba*/
  (*(void (__thiscall **)(char *))(this->q008 + 12))((char *)this + 32); /*0x5595d0*/
  Dialog::Destroy(Dialog); /*0x5595d5*/
  return *((_DWORD *)this + 6) == 1039; /*0x558ea9*/
}



// ==== 0x005595F0  ObjectClass::method_5595F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5595F0(ObjectClass *this, char *Buffer)
{
  int v3; // eax
  const char *ptr_8; // [esp-4h] [ebp-78h]
  CCFileClass v6; // [esp+8h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+60h] [ebp-14h] BYREF
  int v8; // [esp+6Ch] [ebp-8h]

  CCFileClass::Construct3((int)&v6); /*0x5595fb*/
  do /*0x559633*/
  {
    ptr_8 = (const char *)this->?; /*0x559607*/
    v3 = rand(); /*0x559608*/
    sprintf(Buffer, "SAVE%04lX.%3s", v3, ptr_8); /*0x559614*/
    FileClass::SetFileName(&v6, Buffer); /*0x559621*/
  }
  while ( (unsigned __int8)CCFileClass::Open(&v6, 0) == 1 ); /*0x559633*/
  *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x559639*/
  v8 = 0; /*0x559641*/
  Vector::Clear((int)v7); /*0x559649*/
  *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x559652*/
  return BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x55965f*/
}



// ==== 0x005596A0  LoadSaveDialog::FillList  this=LoadSaveDialog  sig=csp ====
void __thiscall LoadSaveDialog::FillList(LoadSaveDialog *this, HWND hWnd)
{
  LoadSaveDialog *v2; // esi
  int i; // edi
  LoadSaveDialog *v4; // edi
  int v5; // eax
  int v6; // ebp
  wchar_t *StringCSF; // eax
  char *v8; // eax
  int v9; // eax
  LoadSaveDialog v10; // eax
  int v11; // ecx
  LoadSaveDialog v12; // eax
  LoadSaveDialog v13; // edx
  void *v14; // ebp
  int v15; // eax
  LoadSaveDialog v16; // ecx
  int v17; // eax
  LoadSaveDialog v18; // eax
  LoadSaveDialog v19; // edx
  signed int v20; // eax
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
  HANDLE hFindFile; // [esp+18h] [ebp-300h]
  _DWORD *hFindFilea; // [esp+18h] [ebp-300h]
  int j; // [esp+20h] [ebp-2F8h]
  LRESULT v40; // [esp+24h] [ebp-2F4h]
  LPARAM lParam; // [esp+28h] [ebp-2F0h] BYREF
  DeleteAndZero v42; // [esp+2Ch] [ebp-2ECh] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+40h] [ebp-2D8h] BYREF
  struct _FILETIME LocalFileTime; // [esp+50h] [ebp-2C8h] BYREF
  CHAR FileName[128]; // [esp+58h] [ebp-2C0h] BYREF
  wchar_t WideCharStr[127]; // [esp+D8h] [ebp-240h] BYREF
  __int16 v47; // [esp+1D6h] [ebp-142h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+1D8h] [ebp-140h] BYREF

  v2 = this; /*0x5596a9*/
  Gadget::InitProperties((Gadget *)&lParam); /*0x5596b4*/
  for ( i = 0; i < *(_DWORD *)&v2[12]; ++i ) /*0x5596c2*/
    __3_YAXPAX_Z(*(void **)(*(_DWORD *)&v2[9] + 4 * i)); /*0x5596cb*/
  v4 = v2 + 8; /*0x5596de*/
  (*(void (__thiscall **)(LoadSaveDialog *))(*(_DWORD *)&v2[8] + 12))(v2 + 8); /*0x5596e3*/
  if ( *(_DWORD *)&v2[1] == 2 ) /*0x5596ea*/
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
    StringCSF = GetStringCSF(aTxtEmptySlot, 0, g_Str_File_LoadDlg_CPP, 774); /*0x55975c*/
    swprintf((wchar_t *const)v6, (const size_t)StringCSF, v35); /*0x559763*/
    if ( dword_A83D4C ) /*0x559772*/
    {
      *(_DWORD *)(v6 + 288) = dword_A8B230[130].ptr_C; /*0x55977f*/
      *(_DWORD *)(v6 + 292) = dword_A8B230[202].ptr_C; /*0x559791*/
      *(_DWORD *)(v6 + 424) = dword_A8B230[375].uniqueId; /*0x5597a3*/
      wcscpy((wchar_t *)(v6 + 296), *((const wchar_t **)dword_A83D4C->Object_field_0x34 + 24)); /*0x5597bc*/
    }
    else
    {
      *(_DWORD *)(v6 + 288) = 0; /*0x5597c6*/
      *(_DWORD *)(v6 + 292) = dword_A8B3AC; /*0x5597d2*/
      *(_DWORD *)(v6 + 424) = -1; /*0x5597dd*/
      v8 = CharToWideString(unk_A8B380); /*0x5597e7*/
      swprintf((wchar_t *const)(v6 + 296), (const size_t)&off_8240B4, (const wchar_t *const)v8); /*0x5597f9*/
    }
    GetSystemTime(&SystemTime); /*0x559806*/
    SystemTimeToFileTime(&SystemTime, (LPFILETIME)(v6 + 428)); /*0x559818*/
    v9 = *(_DWORD *)&dword_A8B238; /*0x55981e*/
    *(_BYTE *)(v6 + 436) = 0; /*0x559823*/
    *(_DWORD *)(v6 + 440) = v9; /*0x559829*/
    v10 = v2[10]; /*0x55982f*/
    if ( *(_DWORD *)&v2[12] < *(_DWORD *)&v10 /*0x55984f*/
      || (v2[11].__tail_0[1] || !*(_DWORD *)&v10)
      && (v11 = (int)v2[13], v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, int, _DWORD))(*(_DWORD *)v4 + 8))(
           v2 + 8,
           *(_DWORD *)&v10 + v11,
           0) )
    {
      v12 = v2[12]; /*0x559856*/
      v13 = v2[9]; /*0x559859*/
      v2[12] = (LoadSaveDialog)(*(_DWORD *)&v12 + 1); /*0x55985f*/
      *(_DWORD *)(*(_DWORD *)&v13 + 4 * *(_DWORD *)&v12) = v6; /*0x559862*/
    }
  }
  sprintf(FileName, "*.%3s", *(_DWORD *)&v2[2]); /*0x559873*/
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
        if ( (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, void *, struct _WIN32_FIND_DATAA *))(*(_DWORD *)v2 + 16))( /*0x55991f*/
               v2,
               v14,
               &FindFileData) == 1 )
        {
          v16 = v2[10]; /*0x559921*/
          if ( *(_DWORD *)&v2[12] < *(_DWORD *)&v16 /*0x559943*/
            || (v2[11].__tail_0[1] || !*(_DWORD *)&v16)
            && (v17 = (int)v2[13], v17 > 0)
            && (*(unsigned __int8 (__thiscall **)(LoadSaveDialog *, int, _DWORD))(*(_DWORD *)v4 + 8))(
                 v2 + 8,
                 *(_DWORD *)&v16 + v17,
                 0) )
          {
            v18 = v2[12]; /*0x55994a*/
            v19 = v2[9]; /*0x55994d*/
            v2[12] = (LoadSaveDialog)(*(_DWORD *)&v18 + 1); /*0x559953*/
            *(_DWORD *)(*(_DWORD *)&v19 + 4 * *(_DWORD *)&v18) = v14; /*0x559956*/
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
  v20 = (signed int)v2[12]; /*0x55998e*/
  if ( v20 > 0 ) /*0x559993*/
  {
    qsort(*(void **)&v2[9], v20, 4u, sub_559D30); /*0x5599a5*/
    SendMessageA(hWnd, 0x184u, 0, 0); /*0x5599c2*/
    v21 = 0; /*0x5599c7*/
    for ( j = 0; v21 < *(_DWORD *)&v2[12]; j = v21 ) /*0x5599cf*/
    {
      v22 = *(_DWORD *)(*(_DWORD *)&v2[9] + 4 * v21); /*0x5599d8*/
      hFindFilea = (_DWORD *)v22; /*0x5599db*/
      if ( !*(_BYTE *)(v22 + 437) ) /*0x5599df*/
      {
        v23 = SendMessageA(hWnd, 0x4CDu, 0, v22); /*0x5599f3*/
        v24 = (LPARAM)hFindFilea; /*0x5599f5*/
        v25 = v23; /*0x5599f9*/
        v40 = v23; /*0x5599fb*/
        if ( hFindFilea[110] ) /*0x5599ff*/
        {
          lParam = 1; /*0x559a10*/
          WideString::Reassign((void **)&v42, asc_829F78); /*0x559a18*/
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
          v47 = 0; /*0x559abc*/
          WideCharStr[v27] = 0; /*0x559ac4*/
          WideString::Reassign((void **)&v42, WideCharStr); /*0x559ad8*/
          v28 = (unsigned __int16)v25 << 16; /*0x559ae7*/
          v29 = v28; /*0x559aea*/
          LOBYTE(v29) = -1; /*0x559aed*/
          SendMessageA(hWnd, 0x4A8u, v29, (LPARAM)&lParam); /*0x559af7*/
          GetTimeFormatA(0x400u, 0, &SystemTime, 0, FileName, 128); /*0x559b0f*/
          lParam = 1; /*0x559b2b*/
          v30 = MultiByteToWideChar(0, 0, FileName, -1, WideCharStr, 128); /*0x559b33*/
          v47 = 0; /*0x559b40*/
          WideCharStr[v30] = 0; /*0x559b4d*/
          WideString::Reassign((void **)&v42, WideCharStr); /*0x559b55*/
          SendMessageA(hWnd, 0x4A8u, v28 | 0x13B, (LPARAM)&lParam); /*0x559b6c*/
          v25 = v40; /*0x559b6e*/
          v24 = (LPARAM)hFindFilea; /*0x559b72*/
        }
        SendMessageA(hWnd, 0x19Au, v25, v24); /*0x559b7e*/
        v21 = j; /*0x559b80*/
        v2 = this; /*0x559b84*/
      }
      ++v21; /*0x559b8b*/
    }
    v31 = (int)v2[1]; /*0x559b98*/
    if ( v31 == 1 ) /*0x559b9e*/
    {
      v32 = 0; /*0x559bb9*/
      v33 = *((_DWORD *)this + 12); /*0x559bbb*/
      if ( v33 > 0 ) /*0x559bc0*/
      {
        v34 = *((_DWORD *)this + 9); /*0x559bc2*/
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
  DeleteAndZero::Alt((DeleteAndZero *)&v42.DeleteAndZero_field_0x04); /*0x559bf5*/
  DeleteAndZero::Alt(&v42); /*0x559c02*/
}



// ==== 0x00559C20  LoadOptions::Check  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Check(LoadOptions *this)
{
  char v2; // bl
  const char *v3; // eax
  HANDLE FirstFileA; // edi
  CHAR FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
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
  struct _WIN32_FIND_DATAA FindFileData; // [esp+208h] [ebp-140h] BYREF

  v2 = 0; /*0x559c2f*/
  v3 = *(const char **)&this->__pad_4[4]; /*0x559c31*/
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
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x559cab*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x559cb0*/
  {
    while ( (FindFileData.dwFileAttributes & 0x116) != 0 /*0x559cf7*/
         || !_strcmpi(FindFileData.cFileName, MultiByteStr)
         || (*((unsigned __int8 (__thiscall **)(LoadOptions *, _WORD *, struct _WIN32_FIND_DATAA *))this->extension + 4))(
              this,
              v7,
              &FindFileData) != 1
         || v16 )
    {
      if ( !FindNextFileA(FirstFileA, &FindFileData) ) /*0x559d0a*/
        goto LABEL_9; /*0x559d0a*/
    }
    v2 = 1; /*0x559d0e*/
  }
LABEL_9:
  FindClose(FirstFileA); /*0x559d10*/
  return v2; /*0x559d17*/
}



// ==== 0x00559D30  sub_559D30  this=-  sig=ida-proto ====
int __cdecl sub_559D30(const void *a1, const void *a2)
{
  return -CompareFileTime((const FILETIME *)(*(_DWORD *)a1 + 428), (const FILETIME *)(*(_DWORD *)a2 + 428)); /*0x559d51*/
}



// ==== 0x00559D60  LoadOptionsClass::AddRef  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::AddRef(LoadOptionsClass *this)
{
  int v1; // esi
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // edi
  char Saved; // bl
  const CHAR *lpMultiByteStr; // [esp+10h] [ebp+4h]

  v1 = (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640); /*0x559d81*/
  StringCSF = GetStringCSF(aTxtLoading, 0, g_Str_File_LoadDlg_CPP, 1052); /*0x559d83*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559d97*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559d9b*/
  if ( MessageBox ) /*0x559da0*/
    Dialog::Show(MessageBox); /*0x559da4*/
  byte_A8ED5C = 0; /*0x559dae*/
  byte_A8E378 = 0; /*0x559db5*/
  WTFMode::Shutdown(&dword_A8B238); /*0x559dbc*/
  Saved = Game::LoadSaved(lpMultiByteStr); /*0x559dd0*/
  while ( (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) < v1 ) /*0x559dd9*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559de3*/
  while ( (*(int (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 40))(dword_887640) > v1 ) /*0x559e02*/
    (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e0c*/
  if ( MessageBox ) /*0x559e20*/
    Dialog::Destroy(MessageBox); /*0x559e24*/
  return Saved; /*0x559e29*/
}



// ==== 0x00559E40  LoadOptionsClass::Release  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Release(LoadOptionsClass *this, wchar_t *Source)
{
  wchar_t *StringCSF; // eax
  Dialog *MessageBox; // esi
  char v4; // bl
  wchar_t *Sourcea; // [esp+10h] [ebp+8h]

  StringCSF = GetStringCSF(aTxtSavingGame, 0, g_Str_File_LoadDlg_CPP, 1107); /*0x559e55*/
  MessageBox = (Dialog *)CreateMessageBox((LPARAM)StringCSF, 0, 0); /*0x559e69*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 12))(dword_887640); /*0x559e6d*/
  if ( MessageBox ) /*0x559e72*/
    Dialog::Show(MessageBox); /*0x559e76*/
  v4 = SaveScenarioClassGame_AdjustMPSaveFileName((LPCCH)Source, Sourcea, 0); /*0x559e90*/
  (*(void (__thiscall **)(MouseClass *))(dword_887640->MouseClass_field_0x0 + 16))(dword_887640); /*0x559e94*/
  if ( MessageBox ) /*0x559e99*/
    Dialog::Destroy(MessageBox); /*0x559e9d*/
  return v4; /*0x559ea4*/
}



// ==== 0x00559EB0  LoadOptionsClass::ddtor  this=LoadOptions  sig=csp ====
bool __stdcall LoadOptions::_vt03(LPCSTR lpFileName)
{
  return DeleteFileA(lpFileName); /*0x559ec1*/
}



// ==== 0x00559ED0  LoadOptionsClass::Read  this=LoadOptions  sig=csp ====
char __thiscall LoadOptions::Read(LoadOptionsClass *this, int Destination)
{
  const CHAR *v2; // edi
  char Options_Load; // bl
  const wchar_t *v4; // eax
  const wchar_t *v5; // eax
  char *Data; // eax
  ObjectClass v8; // [esp+Ch] [ebp-3F4h] BYREF
  int v9; // [esp+408h] [ebp+8h]

  if ( !Destination && !v9 ) /*0x559eed*/
    return 0; /*0x559eed*/
  v2 = (const CHAR *)(v9 + 44); /*0x559eff*/
  if ( !_strcmpi((char *)(v9 + 44), MultiByteStr) ) /*0x559f03*/
    return 0; /*0x559f03*/
  GameState::Reset((GameState *)&v8); /*0x559f17*/
  Options_Load = LoadOptions_Load(v2, (int)&v8); /*0x559f27*/
  if ( !Options_Load ) /*0x559f2b*/
    return 0; /*0x55a03f*/
  if ( ReadPointerFromECX3(&v8) == dword_83D560 ) /*0x559f46*/
  {
    v5 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f60*/
    wcscpy((wchar_t *)Destination, v5); /*0x559f67*/
    *(_BYTE *)(Destination + 437) = 0; /*0x559f6f*/
  }
  else
  {
    v4 = (const wchar_t *)_raw_name_type_info__QBEPBDXZ((type_info *)&v8); /*0x559f48*/
    wcscpy((wchar_t *)Destination, v4); /*0x559f4f*/
    *(_BYTE *)(Destination + 437) = 1; /*0x559f57*/
  }
  *(_BYTE *)(Destination + 436) = Options_Load; /*0x559f7b*/
  *(_DWORD *)(Destination + 288) = LoadOptions::GetFlag99((LoadOptions *)&v8); /*0x559f8a*/
  *(_DWORD *)(Destination + 424) = LoadOptions::GetFlag98((LoadOptions *)&v8); /*0x559f99*/
  *(_DWORD *)(Destination + 440) = LoadOptions::GetFlag252((LoadOptions *)&v8); /*0x559fa4*/
  strcpy((char *)(Destination + 256), v2); /*0x559fc4*/
  Data = LoadOptions::GetData((char *)&v8); /*0x559fd1*/
  wcscpy((wchar_t *)(Destination + 296), (const wchar_t *)Data); /*0x559fde*/
  if ( !strlen((const char *)(Destination + 256)) ) /*0x559fe5*/
    strcpy((char *)(Destination + 256), (const char *)(v9 + 304)); /*0x55a013*/
  *(_DWORD *)(Destination + 432) = *(_DWORD *)(v9 + 24); /*0x55a020*/
  *(_DWORD *)(Destination + 428) = *(_DWORD *)(v9 + 20); /*0x55a029*/
  return 1; /*0x55a02f*/
}



// ==== 0x0055A050  LoadOptionsClass::Write  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Write(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiLoadmission, 0, g_Str_File_LoadDlg_CPP, 1216); /*0x55a066*/
}



// ==== 0x0055A070  LoadOptionsClass::Seek  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Seek(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiSavemission, 0, g_Str_File_LoadDlg_CPP, 1222); /*0x55a086*/
}



// ==== 0x0055A090  LoadOptionsClass::Open  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Open(LoadOptionsClass *this)
{
  return GetStringCSF(aGuiDeletemissi, 0, g_Str_File_LoadDlg_CPP, 1228); /*0x55a0a6*/
}



// ==== 0x0055A0B0  LoadOptionsClass::Close  this=LoadOptions  sig=csp ====
wchar_t *__thiscall LoadOptions::Close(LoadOptionsClass *this)
{
  return GetStringCSF(aTxtGameWasSave, 0, g_Str_File_LoadDlg_CPP, 1234); /*0x55a0c6*/
}



// ==== 0x0055A0D0  LoadOptionsClass::QueryInterface  this=LoadOptions  sig=csp ====
char *__thiscall LoadOptions::QueryInterface(LoadOptionsClass *this, char a2)
{
  int v3; // esi
  void *v4; // eax

  v3 = 0; /*0x55a0d4*/
  for ( this->m_0 = (int)&LoadOptionsClass::`vftable'; v3 < this->q00C; ++v3 ) /*0x55a0e1*/
    __3_YAXPAX_Z(*(void **)(*((_DWORD *)this + 9) + 4 * v3)); /*0x55a0ea*/
  (*(void (__thiscall **)(LoadOptionsClass *))(this->Capacity + 12))(this + 2); /*0x55a102*/
  v4 = (void *)*((_DWORD *)this + 9); /*0x55a105*/
  this->Capacity = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a108*/
  if ( v4 && *((_BYTE *)this + 45) ) /*0x55a112*/
  {
    __3_YAXPAX_Z(v4); /*0x55a11a*/
    *((_DWORD *)this + 9) = 0; /*0x55a122*/
  }
  *((_BYTE *)this + 45) = 0; /*0x55a12d*/
  *((_DWORD *)this + 10) = 0; /*0x55a133*/
  if ( (a2 & 1) != 0 ) /*0x55a13a*/
    __3_YAXPAX_Z(this); /*0x55a13d*/
  return (char *)this; /*0x55a147*/
}



// ==== 0x0055A150  _DynamicVectorClass_PAVFileEntryClass::vt03  this=DynamicVector  sig=csp ====
void __thiscall LoadOptions::vt03(_DynamicVectorClass_PAVFileEntryClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x55a156*/
  this->m_10 = 0; /*0x55a159*/
  if ( v2 && BYTE1(this->m_C) ) /*0x55a160*/
  {
    __3_YAXPAX_Z(v2); /*0x55a166*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a16e*/
  }
  BYTE1(this->m_C) = 0; /*0x55a171*/
  this->m_8 = 0; /*0x55a174*/
}



// ==== 0x0055A180  _DynamicVectorClass_PAVFileEntryClass::vt05  this=DynamicVector  sig=csp ====
unsigned int __thiscall LoadOptions::vt05(_DynamicVectorClass_PAVFileEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x55a180*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x55a195*/
  else
    return 0; /*0x55a187*/
}



// ==== 0x0055A1A0  _VectorClass_PAVFileEntryClass::vt06  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::vt06(_VectorClass_PAVFileEntryClass *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x55a1aa*/
}



// ==== 0x0055A1B0  _VectorClass_PAVFileEntryClass::vt01  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::vt01(_VectorClass_PAVFileEntryClass *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x55a1b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x55a1bd*/
  {
    v3 = 0; /*0x55a1bf*/
    if ( m_8 <= 0 ) /*0x55a1c3*/
      return 1; /*0x55a1e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x55a1c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x55a1cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x55a1d4*/
    {
      ++v3; /*0x55a1d6*/
      ++v4; /*0x55a1d7*/
      if ( v3 >= m_8 ) /*0x55a1dc*/
        return 1; /*0x55a1dc*/
    }
  }
  return 0; /*0x55a1de*/
}



// ==== 0x0055A1F0  _VectorClass_PAVFileEntryClass::CopyItems  this=VectorClass  sig=csp ====
char __thiscall LoadOptions::CopyItems(_VectorClass_PAVFileEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x55a1fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x55a206*/
    if ( a3 ) /*0x55a20c*/
      v4 = a3; /*0x55a222*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a21e*/
    LOBYTE(this->m_C) = 1; /*0x55a226*/
    if ( v4 ) /*0x55a22a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x55a235*/
      {
        m_8 = this->m_8; /*0x55a23c*/
        if ( a2 < m_8 ) /*0x55a241*/
          m_8 = a2; /*0x55a243*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55a249*/
          ++i; /*0x55a24e*/
        if ( BYTE1(this->m_C) ) /*0x55a25b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a266*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x55a26e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x55a277*/
      this->m_8 = a2; /*0x55a27f*/
      BYTE1(this->m_C) = a3 == 0; /*0x55a282*/
      return 1; /*0x55a288*/
    }
    else
    {
      return 0; /*0x55a22f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFileEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55a292*/
    return 1; /*0x55a298*/
  }
}



// ==== 0x0055A2A0  _VectorClass_PAVFileEntryClass::ClearBuffer  this=VectorClass  sig=csp ====
void __thiscall LoadOptions::ClearBuffer(_VectorClass_PAVFileEntryClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x55a2ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a2b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a2bb*/
  }
  BYTE1(this->m_C) = 0; /*0x55a2be*/
  this->m_8 = 0; /*0x55a2c1*/
}



// ==== 0x0055A2D0  _VectorClass_PAVFileEntryClass::FindItem  this=VectorClass  sig=csp ====
int __thiscall LoadOptions::FindItem(_VectorClass_PAVFileEntryClass *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x55a2d0*/
    return 0; /*0x55a2d8*/
  m_8 = this->m_8; /*0x55a2de*/
  result = 0; /*0x55a2e1*/
  if ( m_8 <= 0 ) /*0x55a2e5*/
    return -1; /*0x55a2fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a2eb*/
  {
    if ( ++result >= m_8 ) /*0x55a2fa*/
      return -1; /*0x55a2fa*/
  }
  return result; /*0x55a2da*/
}



// ==== 0x0055A310  _VectorClass_PAVFileEntryClass::PointerToIndex  this=VectorClass  sig=csp ====
unsigned int __thiscall LoadOptions::PointerToIndex(_VectorClass_PAVFileEntryClass *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x55a310*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x55a325*/
  else
    return 0; /*0x55a317*/
}



// ==== 0x0055A330  _DynamicVectorClass_PAVFileEntryClass::vt02  this=DynamicVector  sig=csp ====
char __thiscall LoadOptions::vt02(_DynamicVectorClass_PAVFileEntryClass *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x55a33c*/
  {
    LOBYTE(this->m_C) = 0; /*0x55a342*/
    if ( a3 ) /*0x55a348*/
      v4 = a3; /*0x55a35e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x55a35a*/
    LOBYTE(this->m_C) = 1; /*0x55a362*/
    if ( !v4 ) /*0x55a366*/
      return 0; /*0x55a3da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x55a368*/
    {
      m_8 = this->m_8; /*0x55a36f*/
      if ( a2 < m_8 ) /*0x55a374*/
        m_8 = a2; /*0x55a376*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x55a37c*/
        ++i; /*0x55a381*/
      if ( BYTE1(this->m_C) ) /*0x55a38e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x55a399*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x55a3a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x55a3aa*/
    this->m_8 = a2; /*0x55a3b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x55a3b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAVFileEntryClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x55a3be*/
  }
  v7 = this->m_8; /*0x55a3c1*/
  if ( v7 < this->m_10 ) /*0x55a3c9*/
    this->m_10 = v7; /*0x55a3cb*/
  return 1; /*0x55a3ce*/
}



// ==== 0x0055A3E0  _DynamicVectorClass_PAVFileEntryClass::vt04  this=DynamicVector  sig=csp ====
int __thiscall LoadOptions::vt04(_DynamicVectorClass_PAVFileEntryClass *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x55a3e0*/
  result = 0; /*0x55a3e3*/
  if ( m_10 <= 0 ) /*0x55a3e8*/
    return -1; /*0x55a3ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a3ee*/
  {
    if ( ++result >= m_10 ) /*0x55a3fd*/
      return -1; /*0x55a3fd*/
  }
  return result; /*0x55a402*/
}



// ==== 0x0055A410  _VectorClass_PAVFileEntryClass::Constructor_VectorClass_FileEntryClass___  this=VectorClass  sig=csp ====
_DWORD *__thiscall LoadOptions::Constructor_VectorClass_FileEntryClass___(
        _VectorClass_PAVFileEntryClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x55a413*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a416*/
  if ( v3 && BYTE1(this->m_C) ) /*0x55a420*/
  {
    __3_YAXPAX_Z(v3); /*0x55a428*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a430*/
  }
  BYTE1(this->m_C) = 0; /*0x55a43b*/
  this->m_8 = 0; /*0x55a441*/
  if ( (a2 & 1) != 0 ) /*0x55a448*/
    __3_YAXPAX_Z(this); /*0x55a44b*/
  return this->__pad_0; /*0x55a455*/
}



// ==== 0x0055A460  _DynamicVectorClass_PAVFileEntryClass::vt00  this=DynamicVector  sig=csp ====
_DWORD *__thiscall LoadOptions::vt00(_DynamicVectorClass_PAVFileEntryClass *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x55a463*/
  *(_DWORD *)this->__pad_0 = &VectorClass<FileEntryClass *>::`vftable'; /*0x55a466*/
  if ( v3 && BYTE1(this->m_C) ) /*0x55a470*/
  {
    __3_YAXPAX_Z(v3); /*0x55a478*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x55a480*/
  }
  BYTE1(this->m_C) = 0; /*0x55a48b*/
  this->m_8 = 0; /*0x55a491*/
  if ( (a2 & 1) != 0 ) /*0x55a498*/
    __3_YAXPAX_Z(this); /*0x55a49b*/
  return this->__pad_0; /*0x55a4a5*/
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
_DWORD *__thiscall LocomotionClass::Init(LocomotionClass *this)
{
  this->Owner = 0; /*0x55a6c6*/
  this->LinkedTo = 0; /*0x55a6c9*/
  this->Powered = 1; /*0x55a6cc*/
  this->Dirty = 1; /*0x55a6cf*/
  this->RefCount = 0; /*0x55a6d2*/
  *(_DWORD *)this->ILocomotion = &LocomotionClass::`vftable'; /*0x55a6d5*/
  *(_DWORD *)&this->ILocomotion[4] = &LocomotionClass::`vftable'; /*0x55a6db*/
  return this->ILocomotion; /*0x55a6e2*/
}



// ==== 0x0055A6F0  LocomotionClass::Construct  this=LocomotionClass  sig=csp ====
void __thiscall LocomotionClass::Construct(LocomotionClass *this)
{
  *(_DWORD *)this->ILocomotion = &LocomotionClass::`vftable'; /*0x55a6f0*/
  *(_DWORD *)&this->ILocomotion[4] = &LocomotionClass::`vftable'; /*0x55a6f6*/
  this->LinkedTo = 0; /*0x55a6fd*/
}



// ==== 0x0055A710  LocomotionClass::ResetPosition  this=LocomotionClass  sig=csp ====
int __stdcall StreamClass::ResetPosition(LocomotionClass *this, int a2)
{
  this->Owner = (FootClass *)a2; /*0x55a718*/
  *(_DWORD *)&this->ILocomotion[4] = a2; /*0x55a71b*/
  return 0; /*0x55a720*/
}



// ==== 0x0055A730  LocomotionClass::GetTransform  this=LocomotionClass  sig=csp ====
float *__stdcall Turret::GetTransform(LocomotionClass *this, float *a2, _DWORD *a3)
{
  LocomotionClass *v3; // edi
  _DWORD *v4; // esi
  float *result; // eax
  float v6; // [esp+0h] [ebp-40h]
  int v7; // [esp+Ch] [ebp-34h] BYREF
  Matrix3x4 v8; // [esp+10h] [ebp-30h] BYREF

  Matrix3x4::Identity(&v8); /*0x55a739*/
  v3 = this; /*0x55a73e*/
  this = (LocomotionClass *)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)this->Owner->?, &v7) >> 10) + 1) >> 1) /*0x55a763*/
                            & 0x1F)
                           - 8);
  v6 = (double)(int)this * -0.1963495408493621; /*0x55a776*/
  Matrix2D::Rotate(v8.m_Data, v6); /*0x55a779*/
  v4 = a3; /*0x55a77e*/
  if ( a3 && *a3 != -1 ) /*0x55a78b*/
  {
    *a3 *= 32; /*0x55a790*/
    *v4 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)v3->Owner->?, &this) >> 10) + 1) >> 1) & 0x1F; /*0x55a7b4*/
  }
  result = a2; /*0x55a7b6*/
  qmemcpy(a2, &v8, 0x30u); /*0x55a7c5*/
  return result; /*0x55a7c7*/
}



// ==== 0x0055A7D0  IUnknown::ComputeRotation  this=IUnknown  sig=csp ====
float *__stdcall Audio3D::ComputeRotation(IUnknown *this, float *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  int slopeIndex; // ebp
  float v6; // [esp+0h] [ebp-88h]
  int v7; // [esp+18h] [ebp-70h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  int v9[12]; // [esp+28h] [ebp-60h] BYREF
  char v10[48]; // [esp+58h] [ebp-30h] BYREF

  v3 = (_DWORD *)(this->field_8 + 156); /*0x55a7de*/
  v8[0] = *v3; /*0x55a7e5*/
  v8[1] = v3[1]; /*0x55a7f1*/
  v8[2] = v3[2]; /*0x55a7fd*/
  slopeIndex = (unsigned __int8)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v8)->slopeIndex; /*0x55a812*/
  qmemcpy(v9, CopyAudioData(v10, slopeIndex), sizeof(v9)); /*0x55a828*/
  v6 = (double)(int)((((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a85a*/
                    & 0x1F)
                   - 8)
     * -0.1963495408493621;
  Matrix2D::Rotate(v9, v6); /*0x55a85d*/
  if ( a3 && *a3 != -1 ) /*0x55a872*/
  {
    *a3 = 32 * (slopeIndex + (*a3 << 6)); /*0x55a880*/
    *a3 |= ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this->field_8 + 904), &v7) >> 10) + 1) >> 1) /*0x55a8a0*/
         & 0x1F;
  }
  qmemcpy(a2, v9, 0x30u); /*0x55a8b4*/
  return a2; /*0x55a8b6*/
}



// ==== 0x0055A8C0  IUnknown::ComputeScreenYOffset  this=IUnknown  sig=csp ====
_DWORD *__stdcall ObjectClass::ComputeScreenYOffset(IUnknown *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this->field_8 + 456))(this->field_8); /*0x55a8cc*/
  v3 = ZCoordToScreenY(v2); /*0x55a8d9*/
  *a2 = 0; /*0x55a8df*/
  a2[1] = v3; /*0x55a8e1*/
  return a2; /*0x55a8e4*/
}



// ==== 0x0055A8F0  IUnknown::SetDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::SetDirty(IUnknown *this)
{
  LOBYTE(this->field_C) = 1; /*0x55a8f5*/
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 96))(this); /*0x55a8fe*/
}



// ==== 0x0055A910  IUnknown::ClearDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::ClearDirty(IUnknown *this)
{
  LOBYTE(this->field_C) = 0; /*0x55a915*/
  return (*(int (__stdcall **)(IUnknown *))(this->field_0 + 96))(this); /*0x55a91e*/
}



// ==== 0x0055A930  IUnknown::GetDirty  this=IUnknown  sig=csp ====
int __stdcall StreamClass::GetDirty(IUnknown *this)
{
  int result; // eax

  result = (int)this; /*0x55a930*/
  LOBYTE(result) = this->field_C; /*0x55a934*/
  return result; /*0x55a937*/
}



// ==== 0x0055A940  IUnknown::MissionStub  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub(IUnknown *this)
{
  return 0; /*0x55a942*/
}



// ==== 0x0055A950  LocomotionClass::AddRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM::AddRef(LocomotionClass *this)
{
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x55a95f*/
  return InterlockedIncrement(&this->RefCount); /*0x55a96b*/
}



// ==== 0x0055A970  LocomotionClass::ReleaseRef  this=LocomotionClass  sig=csp ====
LONG __stdcall COM::ReleaseRef(LocomotionClass *this)
{
  LONG v1; // esi

  --*(_DWORD *)&g_MissionQueueFrame.waypoints[274]; /*0x55a980*/
  v1 = InterlockedDecrement(&this->RefCount); /*0x55a98d*/
  if ( !v1 && this ) /*0x55a995*/
    (*(void (__thiscall **)(LocomotionClass *, int))(*(_DWORD *)this->ILocomotion + 32))(this, 1); /*0x55a99d*/
  return v1; /*0x55a9a2*/
}



// ==== 0x0055A9B0  LocomotionClass::QueryInterface  this=LocomotionClass  sig=csp ====
int __stdcall LocomotionClass::QueryInterface(LocomotionClass *this, const void *a2, _DWORD *a3)
{
  char *v4; // ecx
  char *v5; // ecx

  if ( !a3 ) /*0x55a9b6*/
    return -2147467261; /*0x55a9b8*/
  *a3 = 0; /*0x55a9d9*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x55a9df*/
  {
    if ( this ) /*0x55a9e5*/
      v4 = &this->ILocomotion[4]; /*0x55a9e7*/
    else
      v4 = 0; /*0x55a9ec*/
    *a3 = v4; /*0x55a9ee*/
  }
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x55a9ff*/
    *a3 = this; /*0x55aa03*/
  if ( !memcmp(a2, &IID_ILocomotion, 0x10u) ) /*0x55aa13*/
  {
    if ( this ) /*0x55aa1a*/
      v5 = &this->ILocomotion[4]; /*0x55aa1c*/
    else
      v5 = 0; /*0x55aa21*/
    *a3 = v5; /*0x55aa23*/
  }
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x55aa33*/
    *a3 = this; /*0x55aa3a*/
  if ( !*a3 ) /*0x55aa3c*/
    return -2147467262; /*0x55aa41*/
  (*(void (__stdcall **)(LocomotionClass *))(*(_DWORD *)this->ILocomotion + 4))(this); /*0x55aa4c*/
  return 0; /*0x55a9bd*/
}



// ==== 0x0055AA60  LocomotionClass::LoadIPersistStream  this=LocomotionClass  sig=csp ====
int __stdcall LoadIPersistStream(LocomotionClass *this, int *a2, int a3)
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
  a2 = (int *)this; /*0x55aa84*/
  result = (*(int (__stdcall **)(int *, int **, int, _DWORD))(v5 + 16))(v8, &a2, 4, 0); /*0x55aa88*/
  if ( result >= 0 ) /*0x55aa8d*/
  {
    v6 = *v3; /*0x55aa92*/
    v7 = (*(int (__thiscall **)(LocomotionClass *, _DWORD))(*(_DWORD *)this->ILocomotion + 36))(this, 0); /*0x55aa98*/
    result = (*(int (__stdcall **)(int *, LocomotionClass *, int))(v6 + 16))(v3, this, v7); /*0x55aa9e*/
    if ( result >= 0 ) /*0x55aaa4*/
    {
      if ( a3 ) /*0x55aaac*/
        this->Dirty = 0; /*0x55aaae*/
    }
  }
  return result; /*0x55aa6a*/
}



// ==== 0x0055AAC0  SwizzleManager::SaveLoad  this=SwizzleManager  sig=csp ====
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
    SwizzleManagerClass::Here_I_Am(&SwizzleManagerClass_Instance, a2, a1); /*0x55aaf7*/
    v4 = a1[5]; /*0x55aafe*/
    v5 = *v2; /*0x55ab01*/
    v6 = (*(int (__thiscall **)(int *, _DWORD))(*a1 + 36))(a1, 0); /*0x55ab07*/
    v7 = (*(int (__stdcall **)(int *, int *, int))(v5 + 12))(v2, a1, v6); /*0x55ab13*/
    a1[5] = v4; /*0x55ab1b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 3); /*0x55ab1e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a1 + 2); /*0x55ab2c*/
    return v7; /*0x55ab33*/
  }
  return result; /*0x55aace*/
}



// ==== 0x0055AB40  IUnknown::GetStringValue  this=IUnknown  sig=csp ====
int __stdcall COMObject::GetStringValue(IUnknown *this, _DWORD *a2)
{
  if ( !a2 ) /*0x55ab47*/
    return -2147467261; /*0x55ab49*/
  *a2 = (*(int (__thiscall **)(IUnknown *))(this->field_0 + 36))(this) + 4; /*0x55ab5e*/
  a2[1] = 0; /*0x55ab60*/
  return 0; /*0x55ab4e*/
}



// ==== 0x0055AB70  IUnknown::MissionStub2  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub2(IUnknown *this, int a2)
{
  return 0; /*0x55ab72*/
}



// ==== 0x0055AB80  IUnknown::MissionStub3  this=IUnknown  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub3(IUnknown *this, int a2)
{
  return 0; /*0x55ab82*/
}



// ==== 0x0055AB90  IUnknown::Stub10  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub10(IUnknown *this)
{
  ; /*0x55ab90*/
}



// ==== 0x0055ABA0  LocomotionClass::StubReturnFalse  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnFalse(LocomotionClass *this)
{
  return 0; /*0x55aba2*/
}



// ==== 0x0055ABB0  LocomotionClass::CheckState  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState(LocomotionClass *this)
{
  return 2; /*0x55abb5*/
}



// ==== 0x0055ABC0  IUnknown::CheckState2  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::CheckState2(IUnknown *this, int a2)
{
  return 0; /*0x55abc2*/
}



// ==== 0x0055ABD0  IUnknown::ReturnZeroPos  this=IUnknown  sig=csp ====
_DWORD *__stdcall COMObject::ReturnZeroPos(IUnknown *this, _DWORD *a2)
{
  *a2 = 0; /*0x55abd8*/
  a2[1] = 0; /*0x55abda*/
  return a2; /*0x55abdd*/
}



// ==== 0x0055ABE0  LocomotionClass::MissionStub4  this=LocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::MissionStub4(LocomotionClass *this)
{
  return 1; /*0x55abe2*/
}



// ==== 0x0055ABF0  LocomotionClass::MissionStub5  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub5(LocomotionClass *this, int a2)
{
  return 0; /*0x55abf2*/
}



// ==== 0x0055AC00  IUnknown::Stub11  this=IUnknown  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub11(IUnknown *this, int a2, int a3, int a4)
{
  ; /*0x55ac00*/
}



// ==== 0x0055AC10  LocomotionClass::Stub12  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub12(LocomotionClass *this, int a2, int a3, int a4, int a5)
{
  ; /*0x55ac10*/
}



// ==== 0x0055AC20  LocomotionClass::Stub13  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub13(LocomotionClass *this)
{
  ; /*0x55ac20*/
}



// ==== 0x0055AC30  LocomotionClass::Stub14  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub14(LocomotionClass *this, int a2)
{
  ; /*0x55ac30*/
}



// ==== 0x0055AC40  LocomotionClass::nullsub_164  this=LocomotionClass  sig=csp ====
void __stdcall nullsub_164(LocomotionClass *this)
{
  ; /*0x55ac40*/
}



// ==== 0x0055AC50  JumpjetLocomotionClass::Stub15  this=JumpjetLocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub15(JumpjetLocomotionClass *this, int a2, int a3, int a4)
{
  ; /*0x55ac50*/
}



// ==== 0x0055AC60  JumpjetLocomotionClass::StubReturnTrue_3  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnTrue_3(JumpjetLocomotionClass *this)
{
  return 1; /*0x55ac62*/
}



// ==== 0x0055AC70  JumpjetLocomotionClass::GetGlobalCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetGlobalCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi

  v3 = *(_DWORD *)&g_MissionQueueFrame.waypoints[82]; /*0x55ac7a*/
  v4 = *(_DWORD *)&g_MissionQueueFrame.waypoints[86]; /*0x55ac81*/
  *a2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[78]; /*0x55ac8a*/
  a2[1] = v3; /*0x55ac8c*/
  a2[2] = v4; /*0x55ac8f*/
  return a2; /*0x55ac92*/
}



// ==== 0x0055ACA0  LocomotionClass::GetCoord3D  this=LocomotionClass  sig=csp ====
_DWORD *__stdcall COMObject::GetCoord3D(LocomotionClass *this, _DWORD *a2)
{
  FootClass *Owner; // ecx
  int v3; // edx
  int v4; // esi

  Owner = this->Owner; /*0x55aca6*/
  v3 = Owner->?[1]; /*0x55acb3*/
  v4 = Owner->?[2]; /*0x55acb6*/
  *a2 = Owner->?[0]; /*0x55acbf*/
  a2[1] = v3; /*0x55acc1*/
  a2[2] = v4; /*0x55acc4*/
  return a2; /*0x55acc7*/
}



// ==== 0x0055ACD0  JumpjetLocomotionClass::StubReturnZero_11  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::StubReturnZero_11(JumpjetLocomotionClass *this)
{
  return 0; /*0x55acd2*/
}



// ==== 0x0055ACE0  LocomotionClass::Stub16  this=LocomotionClass  sig=csp ====
void __stdcall JumpjetLocomotionClass::Stub16(LocomotionClass *this, int a2)
{
  ; /*0x55ace0*/
}



// ==== 0x0055ACF0  LocomotionClass::MissionStub10  this=LocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub10(LocomotionClass *this)
{
  return 0; /*0x55acf2*/
}



// ==== 0x0055AD00  IUnknown::MissionStub11  this=IUnknown  sig=csp ====
int __stdcall JumpjetLocomotionClass::MissionStub11(IUnknown *this)
{
  return 0; /*0x55ad02*/
}



// ==== 0x0055AD10  IUnknown::GetSpecialValue  this=IUnknown  sig=csp ====
int __stdcall COMObject::GetSpecialValue(IUnknown *this)
{
  return (*(int (__thiscall **)(int))(*(_DWORD *)this->field_8 + 1336))(this->field_8); /*0x55ad1f*/
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



// ==== 0x0055AF40  RadarClass::SetGlobal  this=RadarClass  sig=csp ====
int __thiscall RadarClass::SetGlobal(RadarClass *this)
{
  int result; // eax

  dword_829FF4 = (int)this; /*0x55af40*/
  return result; /*0x55af46*/
}



// ==== 0x0055AF50  ObjectClass::Map_Init  this=ObjectClass  sig=csp ====
void __thiscall Map_Init(ObjectClass *this)
{
  dword_829FF8 = (int)this; /*0x55af50*/
}



// ==== 0x0055AF60  PingPongBuffer::GetWriteOffset  this=PingPongBuffer  sig=csp ====
int PingPongBuffer_GetWriteOffset()
{
  int result; // eax

  if ( byte_ABCD50 ) /*0x55af67*/
  {
    result = dword_829FF4 + dword_829FF8; /*0x55af7a*/
    if ( (unsigned int)dword_ABCD44 >= dword_829FF4 + dword_829FF8 ) /*0x55af7e*/
    {
      byte_ABCD50 = 0; /*0x55af80*/
      return dword_829FF4; /*0x55af87*/
    }
  }
  else
  {
    result = dword_829FF4; /*0x55af8a*/
    if ( (unsigned int)dword_ABCD44 < dword_829FF4 ) /*0x55af97*/
    {
      byte_ABCD50 = 1; /*0x55af9f*/
      return dword_829FF8 + dword_829FF4; /*0x55afa6*/
    }
  }
  return result; /*0x55af89*/
}



// ==== 0x0055AFB0  Scenario::Update  this=Scenario  sig=csp ====
void __thiscall Scenario::Update(Scenario *this)
{
  int v1; // eax
  AbstractClass *v2; // edi
  TeamClass *v3; // esi
  void *ptr_C; // edx
  int abstractFlags; // eax
  void *v6; // eax
  void **p_vtable3; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // ebx
  AbstractClass *v14; // ebp
  int v15; // edi
  int nextArrayIndex; // edx
  char *NeedsSaveOrLink; // eax
  int *p_nextArrayIndex; // esi
  int v19; // eax
  int v20; // ecx
  _BYTE *ptr_0; // edx
  char *ptr_8; // eax
  void *v23; // eax
  void *v24; // edx
  _BYTE *v25; // ecx
  char *v26; // eax
  int v27; // edi
  void *v28; // edx
  AbstractClass *v29; // ecx
  void *v30; // eax
  void *v31; // esi
  void *v32; // eax
  void *v33; // ecx
  AbstractClass *v34; // edx
  int v35; // eax
  char *ptr_4; // ecx
  AbstractClass *v37; // edx
  void *v38; // eax
  void *v39; // ecx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  void **v43; // esi
  int v44; // eax
  int i; // esi
  int j; // esi
  int k; // esi
  int m; // esi
  int v49; // ecx
  int n; // esi
  int ii; // esi
  int jj; // esi
  int v53; // ecx
  int *v54; // eax
  ObjectClass *v55; // [esp+0h] [ebp-38h]
  ObjectClass *v56; // [esp+0h] [ebp-38h]
  ObjectClass *v57; // [esp+0h] [ebp-38h]
  ObjectClass *v58; // [esp+0h] [ebp-38h]
  ObjectClass *v59; // [esp+0h] [ebp-38h]
  LocomotionClass *v60; // [esp+0h] [ebp-38h]
  ObjectClass *v61; // [esp+0h] [ebp-38h]
  AirstrikeClass *v62; // [esp+0h] [ebp-38h]
  int v64; // [esp+14h] [ebp-24h] BYREF
  int v65; // [esp+18h] [ebp-20h]
  int v66; // [esp+1Ch] [ebp-1Ch]
  void **v67; // [esp+20h] [ebp-18h] BYREF
  void *Block; // [esp+24h] [ebp-14h]
  int v69; // [esp+28h] [ebp-10h]
  char v70; // [esp+2Dh] [ebp-Bh]
  int v71; // [esp+30h] [ebp-8h]
  int v72; // [esp+34h] [ebp-4h]

  v1 = 0; /*0x55afc7*/
  v2 = dword_A8B230; /*0x55afcd*/
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[278]; /*0x55afd3*/
  dword_A83CDC = 0; /*0x55afdb*/
  if ( (int)FootClass_Array.? > 0 ) /*0x55afe0*/
  {
    while ( 1 ) /*0x55afec*/
    {
      v3 = (TeamClass *)*((_DWORD *)&FootClass_Array.?->ObjectClass + v1); /*0x55afec*/
      if ( BYTE2(v2[375].ptr_0) ) /*0x55afef*/
      {
        if ( (unsigned __int8)TeamClass::Update_0(v3, 50, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) ) /*0x55b00a*/
          goto LABEL_22; /*0x55b011*/
        v2 = dword_A8B230; /*0x55b017*/
      }
      if ( BYTE2(v2[374].uniqueId) ) /*0x55b01d*/
      {
        if ( (unsigned __int8)TeamClass::Update_0(v3, 27, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) /*0x55b090*/
          || (unsigned __int8)TeamClass::Update_0(v3, 28, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (unsigned __int8)TeamClass::Update_0(v3, 36, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
          || (unsigned __int8)TeamClass::Update_0(v3, 37, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
        {
          goto LABEL_22; /*0x55b097*/
        }
        v2 = dword_A8B230; /*0x55b09d*/
      }
      if ( HIBYTE(v2[374].uniqueId) /*0x55b10f*/
        && ((unsigned __int8)TeamClass::Update_0(v3, 45, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
         || (unsigned __int8)TeamClass::Update_0(v3, 46, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0))
        || (unsigned __int8)TeamClass::Update_0(v3, 13, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0)
        || (unsigned __int8)TeamClass::Update_0(v3, 51, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0) )
      {
        goto LABEL_22; /*0x55b116*/
      }
      v2 = dword_A8B230; /*0x55b118*/
      if ( dword_A8B230[127].ptr_C != (void *)-1 ) /*0x55b124*/
      {
        ptr_C = dword_A8B230[127].ptr_C; /*0x55b126*/
        abstractFlags = dword_A8B230[127].abstractFlags; /*0x55b12c*/
        if ( ptr_C != (void *)-1 ) /*0x55b134*/
        {
          if ( *(_DWORD *)&stru_A8EB00.?[416] - (int)ptr_C >= abstractFlags ) /*0x55b140*/
            break; /*0x55b140*/
          abstractFlags -= *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)ptr_C; /*0x55b142*/
        }
        if ( !abstractFlags ) /*0x55b146*/
          break; /*0x55b146*/
      }
LABEL_23:
      v1 = ++dword_A83CDC; /*0x55b164*/
      if ( dword_A83CDC >= (int)FootClass_Array.? ) /*0x55b177*/
        goto LABEL_24; /*0x55b177*/
    }
    TeamClass::Update_0(v3, 14, 0, *(int *)&g_MissionQueueFrame.waypoints[174], 0, 0); /*0x55b148*/
LABEL_22:
    v2 = dword_A8B230; /*0x55b15e*/
    goto LABEL_23; /*0x55b15e*/
  }
LABEL_24:
  v6 = v2[127].ptr_C; /*0x55b17d*/
  p_vtable3 = &v2[127].ptr_C; /*0x55b183*/
  if ( v6 != (void *)-1 ) /*0x55b18b*/
  {
    v8 = v2[127].abstractFlags; /*0x55b18d*/
    v9 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)v6; /*0x55b19e*/
    if ( (signed int)(*(_DWORD *)&stru_A8EB00.?[416] - (unsigned int)v2[127].ptr_C) >= v8 || v8 == v9 ) /*0x55b1a4*/
    {
      if ( *p_vtable3 != (void *)-1 ) /*0x55b1ae*/
      {
        v10 = v2[127].abstractFlags; /*0x55b1b0*/
        v11 = *(_DWORD *)&stru_A8EB00.?[416] - (_DWORD)*p_vtable3; /*0x55b1b3*/
        if ( v11 >= v10 ) /*0x55b1b9*/
          v12 = 0; /*0x55b1bf*/
        else
          v12 = v10 - v11; /*0x55b1bb*/
        v2[127].abstractFlags = v12; /*0x55b1c1*/
        *p_vtable3 = (void *)-1; /*0x55b1c4*/
      }
      MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55b1cd*/
      v2 = dword_A8B230; /*0x55b1d2*/
    }
  }
  BYTE2(v2[374].uniqueId) = 0; /*0x55b1d8*/
  BYTE1(dword_A8B230[374].uniqueId) = 0; /*0x55b1e4*/
  HIBYTE(dword_A8B230[374].uniqueId) = 0; /*0x55b1f1*/
  BYTE2(dword_A8B230[375].ptr_0) = 0; /*0x55b1fe*/
  v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b205*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b226*/
    || *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    v14 = dword_A8B230; /*0x55b28e*/
    goto LABEL_41; /*0x55b28e*/
  }
  v14 = dword_A8B230; /*0x55b228*/
  v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b22e*/
  nextArrayIndex = dword_A8B230[128].nextArrayIndex; /*0x55b234*/
  NeedsSaveOrLink = (char *)dword_A8B230[128].NeedsSaveOrLink; /*0x55b23a*/
  p_nextArrayIndex = &dword_A8B230[128].nextArrayIndex; /*0x55b240*/
  if ( nextArrayIndex == -1 ) /*0x55b249*/
    goto LABEL_38; /*0x55b249*/
  if ( *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex < (int)NeedsSaveOrLink ) /*0x55b251*/
  {
    NeedsSaveOrLink -= *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex; /*0x55b253*/
LABEL_38:
    if ( NeedsSaveOrLink ) /*0x55b257*/
      goto LABEL_42; /*0x55b257*/
  }
  LOWORD(v19) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b259*/
  v20 = v65; /*0x55b26a*/
  *p_nextArrayIndex = v15; /*0x55b26e*/
  p_nextArrayIndex[1] = v20; /*0x55b270*/
  p_nextArrayIndex[2] = v19; /*0x55b278*/
  MapClass::ProcessVisibilityFlags((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b27b*/
  v14 = dword_A8B230; /*0x55b280*/
  v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b286*/
LABEL_41:
  v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b294*/
LABEL_42:
  if ( !(v15 % 120) ) /*0x55b2a2*/
  {
    CellSystem::UpdateVisibility((CellSystem *)&stru_87F5F0.__pad_58[416]); /*0x55b2ad*/
    v14 = dword_A8B230; /*0x55b2b2*/
    v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b2b8*/
    v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b2be*/
  }
  if ( ((int)v14->ptr_0 & 0x1000) != 0 && *(double *)(v13 + 5704) != 0.0 ) /*0x55b2dd*/
  {
    ptr_0 = v14[129].ptr_0; /*0x55b2df*/
    ptr_8 = (char *)v14[129].ptr_8; /*0x55b2e5*/
    if ( ptr_0 != (_BYTE *)-1 ) /*0x55b2f4*/
    {
      if ( v15 - (int)ptr_0 >= (int)ptr_8 ) /*0x55b2fc*/
      {
LABEL_50:
        LOWORD(v23) = Math::RoundToInt(*(double *)(v13 + 5704) * 900.0); /*0x55b304*/
        v24 = (void *)v65; /*0x55b315*/
        v14[129].ptr_0 = (void *)v15; /*0x55b319*/
        v14[129].ptr_4 = v24; /*0x55b31b*/
        v14[129].ptr_8 = v23; /*0x55b323*/
        MapClass::ProcessFogTransition((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b326*/
        v14 = dword_A8B230; /*0x55b32b*/
        v13 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b331*/
        v15 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x55b337*/
        goto LABEL_51; /*0x55b337*/
      }
      ptr_8 -= v15 - (_DWORD)ptr_0; /*0x55b2fe*/
    }
    if ( !ptr_8 ) /*0x55b302*/
      goto LABEL_50; /*0x55b302*/
  }
LABEL_51:
  if ( v14[378].ptr_8 != v14[378].ptr_4 && *(double *)(v13 + 5736) != 0.0 )
  {
    v25 = v14[130].ptr_0; /*0x55b368*/
    v26 = (char *)v14[130].ptr_8; /*0x55b36e*/
    if ( v25 != (_BYTE *)-1 ) /*0x55b377*/
    {
      v27 = v15 - (_DWORD)v25; /*0x55b379*/
      if ( v27 >= (int)v26 ) /*0x55b37d*/
        goto LABEL_57; /*0x55b37d*/
      v26 -= v27; /*0x55b37f*/
    }
    if ( v26 ) /*0x55b383*/
      goto LABEL_71; /*0x55b383*/
LABEL_57:
    if ( NukeFlash::IsActive() || NukeFlash::ProcessEffect() || (unsigned __int8)ChronoScreen::IsActive() ) /*0x55b39b*/
    {
      v28 = dword_A8B230[380].ptr_8; /*0x55b40e*/
      v29 = dword_A8B230 + 130; /*0x55b414*/
      dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x55b41a*/
      v30 = (void *)v65; /*0x55b41c*/
    }
    else
    {
      if ( !(unsigned __int8)PsyDom::IsActive() ) /*0x55b3ab*/
      {
        v31 = *(void **)&stru_A8EB00.?[416]; /*0x55b3d2*/
        LOWORD(v32) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5736) * 900.0); /*0x55b3e4*/
        v33 = (void *)v65; /*0x55b3ef*/
        v34 = dword_A8B230 + 130; /*0x55b3f3*/
        dword_A8B230[130].ptr_0 = v31; /*0x55b3f9*/
        v34->ptr_4 = v33; /*0x55b3fb*/
        v34->ptr_8 = v32; /*0x55b3fe*/
        goto LABEL_65; /*0x55b401*/
      }
      v28 = dword_A8B230[381].ptr_0; /*0x55b3b8*/
      v29 = dword_A8B230 + 130; /*0x55b3be*/
      dword_A8B230[130].ptr_0 = *(void **)&stru_A8EB00.?[416]; /*0x55b3c4*/
      v30 = (void *)v65; /*0x55b3c6*/
    }
    v29->ptr_4 = v30; /*0x55b420*/
    v29->ptr_8 = v28; /*0x55b423*/
LABEL_65:
    dword_A8B230[378].ptr_8 = (int)dword_A8B230[378].ptr_8 <= 0 ? 0 : dword_A8B230[378].ptr_8;
    LOWORD(v35) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5744) * 100.0); /*0x55b453*/
    ptr_4 = (char *)dword_A8B230[378].ptr_4; /*0x55b45e*/
    if ( (int)dword_A8B230[378].ptr_8 >= (int)ptr_4 ) /*0x55b46c*/
    {
      dword_A8B230[378].ptr_4 = &ptr_4[v35]; /*0x55b490*/
      v37 = dword_A8B230; /*0x55b496*/
      v38 = dword_A8B230[378].ptr_4; /*0x55b49c*/
      v39 = dword_A8B230[378].ptr_8; /*0x55b4a2*/
      if ( (int)v38 >= (int)v39 ) /*0x55b4aa*/
LABEL_69:
        v38 = v39; /*0x55b4ac*/
    }
    else
    {
      dword_A8B230[378].ptr_4 = &ptr_4[-v35]; /*0x55b470*/
      v37 = dword_A8B230; /*0x55b476*/
      v38 = dword_A8B230[378].ptr_4; /*0x55b47c*/
      v39 = dword_A8B230[378].ptr_8; /*0x55b482*/
      if ( (int)v38 <= (int)v39 ) /*0x55b48a*/
        goto LABEL_69; /*0x55b48a*/
    }
    v37[378].ptr_4 = v38; /*0x55b4ae*/
    HIBYTE(dword_A8B230[374].uniqueId) = 1; /*0x55b4ba*/
    MapClass::UpdateLightingPostProcess(); /*0x55b4c6*/
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 1); /*0x55b4d2*/
  }
LABEL_71:
  UpdateAudioTriggers(v55); /*0x55b4d7*/
  ProcessSpeechEvents(v56); /*0x55b4dc*/
  DispatchBuildingAudioEvents((ObjectClass *)&stru_87F5D8); /*0x55b4e6*/
  ScenarioClass::UpdateScriptActions(&g_MissionQueueFrame); /*0x55b4f0*/
  v40 = 0; /*0x55b4f5*/
  ScenarioClass::ProcessAmbientEffects((ScenarioClass *)&v67, 0, 0); /*0x55b4fd*/
  v41 = 10; /*0x55b507*/
  v67 = &DynamicVectorClass<TeamClass *>::`vftable'; /*0x55b50e*/
  v72 = 10; /*0x55b516*/
  v71 = 0; /*0x55b51a*/
  if ( (int)FootClass_Array.? > 0 ) /*0x55b51e*/
  {
    v42 = v69; /*0x55b520*/
    while ( 1 ) /*0x55b530*/
    {
      v43 = &FootClass_Array.?->ObjectClass + v40; /*0x55b530*/
      if ( v71 < v42 ) /*0x55b539*/
        goto LABEL_79; /*0x55b539*/
      if ( (v70 || !v42) && v41 > 0 ) /*0x55b549*/
        break; /*0x55b549*/
LABEL_81:
      if ( ++v40 >= (int)FootClass_Array.? ) /*0x55b580*/
        goto LABEL_82; /*0x55b580*/
      v41 = v72; /*0x55b526*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v67[2])(&v67, v41 + v42, 0) ) /*0x55b558*/
    {
LABEL_79:
      v44 = v71++; /*0x55b55f*/
      *((_DWORD *)Block + v44) = *v43; /*0x55b570*/
    }
    v42 = v69; /*0x55b573*/
    goto LABEL_81; /*0x55b573*/
  }
LABEL_82:
  for ( i = 0; i < v71; ++i ) /*0x55b58a*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)Block + i) + 92))(*((_DWORD *)Block + i)); /*0x55b595*/
  for ( j = dword_8A0218 - 1; j >= 0; --j ) /*0x55b5ab*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_8A020C + j) + 92))(*((_DWORD *)dword_8A020C + j)); /*0x55b5b8*/
  ProcessHarvesterLogic(v57); /*0x55b5be*/
  UpdateCameoProduction(v58); /*0x55b5c3*/
  UpdateSuperWeapons(v59); /*0x55b5c8*/
  for ( k = dword_B04BE0 - 1; k >= 0; --k ) /*0x55b5d7*/
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)dword_B04BD4 + k) + 92))(*((_DWORD *)dword_B04BD4 + k)); /*0x55b5e4*/
  UpdateDeferredLightSurfaces(6, 0); /*0x55b5f1*/
  LocomotionClass::UpdateAll(v60); /*0x55b5f6*/
  for ( m = 0; m < (int)this->Scenario_field_0x10; ++m ) /*0x55b606*/
  {
    v49 = *((_DWORD *)this->Scenario_field_0x4 + m); /*0x55b60b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 92))(v49); /*0x55b610*/
  }
  if ( *(_DWORD *)&dword_A8B238 ) /*0x55b622*/
  {
    if ( *(_DWORD *)&dword_A8B238 != 5 ) /*0x55b627*/
    {
      for ( n = 0; n < *(int *)&stru_A83D50.__pad_B4[12]; ++n ) /*0x55b632*/
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * n) + 92))(*(_DWORD *)(*(_DWORD *)stru_A83D50.__pad_B4 + 4 * n)); /*0x55b63e*/
    }
  }
  ProcessIonCannonEffect(v61); /*0x55b64b*/
  AirstrikeClass::UpdateAll(v62); /*0x55b650*/
  CrateClass::Update((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b65a*/
  (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55b667*/
  for ( ii = 0; ii < *(int *)&stru_A83D50.__pad_C8[40]; ++ii ) /*0x55b673*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * ii) + 92))(*(_DWORD *)(*(_DWORD *)&stru_A83D50.__pad_C8[28] + 4 * ii)); /*0x55b680*/
  for ( jj = 0; jj < stru_A80220.?; ++jj ) /*0x55b696*/
  {
    v53 = *((_DWORD *)stru_A80220.? + jj); /*0x55b69d*/
    if ( v53 ) /*0x55b6a2*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 92))(v53); /*0x55b6a6*/
  }
  if ( MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) ) /*0x55b6b8*/
  {
    v54 = (int *)(MapClass::GetScrollMode((MapClass *)&stru_87F5F0.__pad_58[416]) + 156); /*0x55b6cf*/
    v64 = *v54; /*0x55b6d6*/
    v65 = v54[1]; /*0x55b6e8*/
    v66 = v54[2]; /*0x55b6ef*/
    Tactical::SetTacticalPosition((int)g_TacticalClass_Instance, &v64); /*0x55b6f3*/
  }
  v67 = &VectorClass<TeamClass *>::`vftable'; /*0x55b6fc*/
  if ( Block ) /*0x55b706*/
  {
    if ( v70 ) /*0x55b70e*/
      __3_YAXPAX_Z(Block); /*0x55b711*/
  }
}



// ==== 0x0055B720  ObjectClass::method_55B720  this=ObjectClass  sig=csp ====
int __thiscall sub_55B720(ObjectClass *this)
{
  int v1; // ebx
  void *v3; // edi
  int nextArrayIndex; // edx
  int *p_nextArrayIndex; // esi
  char *NeedsSaveOrLink; // eax
  int v7; // eax
  _BYTE *ptr_0; // edx
  char *ptr_8; // eax
  AbstractClass *v10; // esi
  void *v11; // eax
  int result; // eax
  int i; // edi
  int v14; // esi
  void *v15; // [esp+18h] [ebp-8h]

  v1 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b724*/
  if ( !*(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6128) /*0x55b74a*/
    || *(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) == 0.0 )
  {
    goto LABEL_8; /*0x55b74a*/
  }
  v3 = *(void **)&stru_A8EB00.?[416]; /*0x55b751*/
  nextArrayIndex = dword_A8B230[128].nextArrayIndex; /*0x55b757*/
  p_nextArrayIndex = &dword_A8B230[128].nextArrayIndex; /*0x55b75d*/
  NeedsSaveOrLink = (char *)dword_A8B230[128].NeedsSaveOrLink; /*0x55b766*/
  if ( nextArrayIndex != -1 ) /*0x55b769*/
  {
    if ( *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex >= (int)NeedsSaveOrLink ) /*0x55b771*/
    {
LABEL_7:
      LOWORD(v7) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5696) * 900.0); /*0x55b779*/
      *p_nextArrayIndex = (int)v3; /*0x55b78e*/
      p_nextArrayIndex[1] = (int)v15; /*0x55b790*/
      p_nextArrayIndex[2] = v7; /*0x55b798*/
      MapClass::ProcessVisibilityFlags((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b79b*/
      v1 = *(_DWORD *)&DSurface_ViewBounds.__pad_FC[324]; /*0x55b7a0*/
LABEL_8:
      v3 = *(void **)&stru_A8EB00.?[416]; /*0x55b7a6*/
      goto LABEL_9; /*0x55b7a6*/
    }
    NeedsSaveOrLink -= *(_DWORD *)&stru_A8EB00.?[416] - nextArrayIndex; /*0x55b773*/
  }
  if ( !NeedsSaveOrLink ) /*0x55b777*/
    goto LABEL_7; /*0x55b777*/
LABEL_9:
  if ( ((int)dword_A8B230->ptr_0 & 0x1000) != 0 && *(double *)(v1 + 5704) != 0.0 ) /*0x55b7ca*/
  {
    ptr_0 = dword_A8B230[129].ptr_0; /*0x55b7cc*/
    ptr_8 = (char *)dword_A8B230[129].ptr_8; /*0x55b7d2*/
    v10 = dword_A8B230 + 129; /*0x55b7d8*/
    if ( ptr_0 != (_BYTE *)-1 ) /*0x55b7e1*/
    {
      if ( (_BYTE *)v3 - ptr_0 >= (int)ptr_8 ) /*0x55b7e9*/
      {
LABEL_15:
        LOWORD(v11) = Math::RoundToInt(*(double *)(v1 + 5704) * 900.0); /*0x55b7f1*/
        v10->ptr_0 = v3; /*0x55b806*/
        v10->ptr_4 = v15; /*0x55b808*/
        v10->ptr_8 = v11; /*0x55b810*/
        MapClass::ProcessFogTransition((MapClass *)&stru_87F5F0.__pad_58[416]); /*0x55b813*/
        goto LABEL_16; /*0x55b813*/
      }
      ptr_8 -= (_BYTE *)v3 - ptr_0; /*0x55b7eb*/
    }
    if ( ptr_8 ) /*0x55b7ef*/
      goto LABEL_16; /*0x55b7ef*/
    goto LABEL_15; /*0x55b7ef*/
  }
LABEL_16:
  result = this->?; /*0x55b818*/
  for ( i = 0; i < result; ++i ) /*0x55b81f*/
  {
    v14 = *((_DWORD *)this->? + i); /*0x55b824*/
    if ( v14 && (*(_BYTE *)(v14 + 20) & 4) != 0 && *(_DWORD *)(v14 + 1652) && !*(_BYTE *)(v14 + 973) ) /*0x55b844*/
    {
      if ( !*(_DWORD *)(v14 + 1652) ) /*0x55b84e*/
        WinAPI::Wrapper(-2147467261); /*0x55b85d*/
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v14 + 1652) + 64))(*(_DWORD *)(v14 + 1652)); /*0x55b86b*/
    }
    result = this->?; /*0x55b86e*/
  }
  return result; /*0x55b876*/
}



// ==== 0x0055B880  LogicClass::RemoveItemByValue  this=LogicClass  sig=csp ====
void __stdcall Array_RemoveItemByValue(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  _DWORD *v4; // esi
  int v5; // eax

  if ( a1 ) /*0x55b887*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 44 ) /*0x55b893*/
    {
      v2 = dword_8B40D8; /*0x55b895*/
      v3 = 0; /*0x55b89b*/
      if ( dword_8B40D8 > 0 ) /*0x55b89f*/
      {
        v4 = dword_8B40CC; /*0x55b8a2*/
        do /*0x55b8da*/
        {
          if ( a1 == v4[v3] ) /*0x55b8ab*/
          {
            if ( v3 < v2 ) /*0x55b8af*/
            {
              --v2; /*0x55b8b1*/
              v5 = v3; /*0x55b8b2*/
              for ( dword_8B40D8 = v2; v5 < dword_8B40D8; ++v5 ) /*0x55b8bc*/
              {
                v4[v5] = v4[v5 + 1]; /*0x55b8c2*/
                v2 = dword_8B40D8; /*0x55b8c5*/
                v4 = dword_8B40CC; /*0x55b8cb*/
              }
            }
            --v3; /*0x55b8d6*/
          }
          ++v3; /*0x55b8d7*/
        }
        while ( v3 < v2 ); /*0x55b8da*/
      }
    }
  }
}



// ==== 0x0055BAA0  LogicClass::SetDeployState  this=LogicClass  sig=csp ====
int __stdcall ObjectClass::SetDeployState(LogicClass *this, char a2)
{
  int v2; // ecx
  int result; // eax

  if ( *((_BYTE *)this + 152) ) /*0x55baa5*/
  {
    LOBYTE(result) = 1; /*0x55baaf*/
  }
  else if ( DisplayClass::RenderStatusText(v2, (int)this, a2) ) /*0x55babb*/
  {
    LOBYTE(result) = 1; /*0x55bac4*/
    *((_BYTE *)this + 152) = 1; /*0x55bac6*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x55bad0*/
  }
  return result; /*0x55bab1*/
}



// ==== 0x0055BAE0  VectorClass::RemoveItem  this=VectorClass  sig=csp ====
int __thiscall VectorClass::RemoveItem(DynamicVectorClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int Count; // ecx
  int v6; // ecx

  result = a2; /*0x55bae0*/
  if ( *(_BYTE *)(a2 + 152) ) /*0x55bae7*/
  {
    v4 = (*(int (__thiscall **)(DynamicVectorClass *, int *))(this->ptr_0 + 16))(this, &a2); /*0x55bafa*/
    if ( v4 != -1 ) /*0x55bb00*/
    {
      Count = this->Count; /*0x55bb02*/
      if ( v4 < Count ) /*0x55bb07*/
      {
        v6 = Count - 1; /*0x55bb09*/
        for ( this->Count = v6; v4 < this->Count; *(_DWORD *)(this->Items + 4 * v4 - 4) = *(_DWORD *)(this->Items + 4 * v4) ) /*0x55bb0f*/
          ++v4; /*0x55bb14*/
      }
    }
    result = a2; /*0x55bb23*/
    *(_BYTE *)(a2 + 152) = 0; /*0x55bb27*/
  }
  return result; /*0x55bb2e*/
}



// ==== 0x0055BB40  ScenarioClass::ProcessAmbientEffects  this=VectorClass  sig=csp ====
_DWORD *__thiscall ScenarioClass::ProcessAmbientEffects(ScenarioClass *this, int a2, int a3)
{
  this->nextScenario[1] = 0; /*0x55bb4b*/
  this->nextScenario[2] = a2; /*0x55bb4e*/
  LOBYTE(this->nextScenario[3]) = 1; /*0x55bb51*/
  BYTE1(this->nextScenario[3]) = 0; /*0x55bb55*/
  this->nextScenario[0] = (int)&VectorClass<TeamClass *>::`vftable'; /*0x55bb58*/
  if ( a2 ) /*0x55bb5e*/
  {
    if ( a3 ) /*0x55bb66*/
    {
      this->nextScenario[1] = a3; /*0x55bb68*/
      return this->nextScenario; /*0x55bb6e*/
    }
    this->nextScenario[1] = __2_YAPAXI_Z(4 * a2); /*0x55bb7d*/
    BYTE1(this->nextScenario[3]) = 1; /*0x55bb80*/
  }
  return this->nextScenario; /*0x55bb6d*/
}



// ==== 0x0055BB90  WriteCompressionBlock  this=BlowStraw  sig=csp ====
int __fastcall Compression_WriteBlock(_BYTE *a1, unsigned int a2, _BYTE *a3, int *a4, int a5)
{
  int result; // eax
  int *v6; // esi
  _BYTE *v7; // edi
  int v8; // ecx
  _BYTE *v9; // ecx

  result = 0; /*0x55bb90*/
  if ( a2 ) /*0x55bb9a*/
  {
    if ( a2 > 0xD ) /*0x55bba7*/
    {
      v6 = a4; /*0x55bbcf*/
      result = CompressLCWBuffer(a3, a4, a5); /*0x55bbd6*/
      if ( result ) /*0x55bbdd*/
        return result; /*0x55bbdd*/
    }
    else
    {
      *a3 = a2 + 17; /*0x55bbb0*/
      v7 = a3 + 1; /*0x55bbb3*/
      do /*0x55bbbd*/
      {
        *v7++ = *a1++; /*0x55bbb8*/
        --a2; /*0x55bbbc*/
      }
      while ( a2 ); /*0x55bbbd*/
      v6 = a4; /*0x55bbbf*/
      *a4 = v7 - a3; /*0x55bbc5*/
    }
  }
  else
  {
    v6 = a4; /*0x55bb9c*/
    *a4 = 0; /*0x55bba0*/
  }
  v8 = *v6; /*0x55bbdf*/
  a3[v8] = 17; /*0x55bbe1*/
  v9 = &a3[v8 + 1]; /*0x55bbe7*/
  *v9 = 0; /*0x55bbe8*/
  v9[1] = 0; /*0x55bbeb*/
  *v6 += 3; /*0x55bbef*/
  return result; /*0x55bbf2*/
}



// ==== 0x0055BC00  CompressLCWBuffer  this=-  sig=csp ====
int __fastcall LCW_CompressBuffer(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // edi
  unsigned __int8 *v6; // ebp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int8 *i; // esi
  unsigned int v13; // eax
  unsigned __int8 *v14; // ebx
  unsigned int v15; // eax
  char *v16; // ebx
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // ebp
  unsigned __int8 *v19; // edi
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // eax
  unsigned __int8 *v23; // ebp
  unsigned int v24; // eax
  char v25; // dl
  unsigned __int8 v26; // al
  char v27; // dl
  char *v28; // ebx
  unsigned __int8 v29; // al
  char v30; // dl
  char *v31; // ebx
  unsigned __int8 v32; // al
  char v33; // dl
  char *v34; // ebx
  unsigned __int8 v35; // al
  char v36; // dl
  char *v37; // ebx
  unsigned __int8 v38; // al
  char v39; // dl
  char *v40; // ebx
  unsigned __int8 v41; // al
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
  unsigned __int8 *v64; // [esp+14h] [ebp-18h]
  unsigned __int8 *v65; // [esp+18h] [ebp-14h]
  unsigned int v66; // [esp+1Ch] [ebp-10h]
  int v68; // [esp+28h] [ebp-4h]
  unsigned int v69; // [esp+38h] [ebp+Ch]

  v5 = a1; /*0x55bc07*/
  v6 = a3; /*0x55bc0d*/
  v65 = &a1[a2]; /*0x55bc17*/
  v7 = *a1 ^ (32 * (a1[1] ^ (32 * a1[2]))); /*0x55bc33*/
  v8 = a5; /*0x55bc35*/
  v64 = a1; /*0x55bc3b*/
  *(_DWORD *)(a5 + 4 * (((40799 * v7) >> 5) & 0x3FFF)) = a1; /*0x55bc58*/
  v9 = (v7 >> 5) ^ (*v5 >> 5) ^ (v5[3] << 10); /*0x55bc6d*/
  *(_DWORD *)(a5 + 4 * (((40799 * v9) >> 5) & 0x3FFF)) = v5 + 1; /*0x55bc89*/
  v10 = (v9 >> 5) ^ (v5[1] >> 5) ^ (v5[4] << 10); /*0x55bc9e*/
  *(_DWORD *)(a5 + 4 * (((40799 * v10) >> 5) & 0x3FFF)) = v5 + 2; /*0x55bcbb*/
  v11 = (v10 >> 5) ^ (v5[2] >> 5) ^ (v5[5] << 10); /*0x55bcce*/
  *(_DWORD *)(a5 + 4 * (((40799 * v11) >> 5) & 0x3FFF)) = v5 + 3; /*0x55bce7*/
  for ( i = v5 + 4; ; v11 = *i ^ (32 * (i[1] ^ (32 * i[2]))) ) /*0x55bcea*/
  {
    while ( 1 ) /*0x55bcfd*/
    {
      v13 = ((40799 * v11) >> 5) & 0x3FFF; /*0x55bcfd*/
      v14 = *(unsigned __int8 **)(v8 + 4 * v13); /*0x55bd02*/
      *(_DWORD *)(v8 + 4 * v13) = i; /*0x55bd05*/
      if ( v14 >= a1 ) /*0x55bd0c*/
      {
        v62 = i - v14; /*0x55bd18*/
        if ( i - v14 > 0 && i - v14 <= 49151 && *v14 == *i && v14[1] == i[1] && v14[2] == i[2] ) /*0x55bd49*/
          break; /*0x55bd49*/
      }
LABEL_56:
      if ( ++i >= v65 - 13 ) /*0x55c005*/
        goto LABEL_59; /*0x55c005*/
      v11 = (*(i - 1) >> 5) ^ (i[2] << 10) ^ (v11 >> 5); /*0x55c01c*/
    }
    v15 = i - v5; /*0x55bd55*/
    v16 = (char *)(v14 + 3); /*0x55bd57*/
    if ( v62 > 2048 ) /*0x55bd60*/
    {
      if ( v15 == 3 ) /*0x55bd65*/
      {
        *(v6 - 2) |= 3u; /*0x55bd6c*/
        *v6 = *v5; /*0x55bd71*/
        v17 = v5[1]; /*0x55bd74*/
        v18 = v6 + 1; /*0x55bd77*/
        v19 = v5 + 1; /*0x55bd78*/
        *v18++ = v17; /*0x55bd79*/
        *v18 = v19[1]; /*0x55bd81*/
        v6 = v18 + 1; /*0x55bd84*/
        v5 = v19 + 2; /*0x55bd85*/
        v64 = v5; /*0x55bd86*/
LABEL_11:
        v20 = v62; /*0x55bd8a*/
        goto LABEL_25; /*0x55bd8e*/
      }
      if ( *v16 != i[3] ) /*0x55bd98*/
      {
        v8 = a5; /*0x55bff7*/
        goto LABEL_56; /*0x55bff7*/
      }
    }
    if ( !v15 ) /*0x55bda0*/
      goto LABEL_11; /*0x55bda0*/
    v21 = i - v5; /*0x55bda2*/
    v68 = i - v5; /*0x55bda7*/
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
      *v6++ = *v5++; /*0x55be31*/
      --v21; /*0x55be36*/
    }
    while ( v21 ); /*0x55be37*/
    v64 = v5; /*0x55be39*/
LABEL_25:
    v26 = i[3]; /*0x55be3d*/
    v27 = *v16; /*0x55be40*/
    i += 4; /*0x55be45*/
    v28 = v16 + 1; /*0x55be46*/
    if ( v27 == v26 ) /*0x55be49*/
    {
      v29 = *i; /*0x55be4f*/
      v30 = *v28; /*0x55be51*/
      ++i; /*0x55be53*/
      v31 = v28 + 1; /*0x55be54*/
      if ( v30 == v29 ) /*0x55be57*/
      {
        v32 = *i; /*0x55be5d*/
        v33 = *v31; /*0x55be5f*/
        ++i; /*0x55be61*/
        v34 = v31 + 1; /*0x55be62*/
        if ( v33 == v32 ) /*0x55be65*/
        {
          v35 = *i; /*0x55be6b*/
          v36 = *v34; /*0x55be6d*/
          ++i; /*0x55be6f*/
          v37 = v34 + 1; /*0x55be70*/
          if ( v36 == v35 ) /*0x55be73*/
          {
            v38 = *i; /*0x55be79*/
            v39 = *v37; /*0x55be7b*/
            ++i; /*0x55be7d*/
            v40 = v37 + 1; /*0x55be7e*/
            if ( v39 == v38 ) /*0x55be81*/
            {
              v41 = *i; /*0x55be87*/
              v42 = *v40; /*0x55be89*/
              ++i; /*0x55be8b*/
              v43 = v40 + 1; /*0x55be8c*/
              if ( v42 == v41 ) /*0x55be8f*/
              {
                for ( ; i < v65; ++i ) /*0x55be9b*/
                {
                  if ( *v43 != *i ) /*0x55bea3*/
                    break; /*0x55bea3*/
                  ++v43; /*0x55bea5*/
                }
                v44 = i - v64; /*0x55beb5*/
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
    v52 = (_BYTE)--i - (_BYTE)v5; /*0x55bf67*/
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
    if ( i >= v65 - 13 ) /*0x55bfd2*/
      break; /*0x55bfd2*/
    v8 = a5; /*0x55bfe3*/
    v5 = i; /*0x55bfe9*/
  }
  v5 = i; /*0x55c023*/
LABEL_59:
  v56 = v65 - v5; /*0x55c027*/
  if ( v65 - v5 > 0 ) /*0x55c02f*/
  {
    v69 = v65 - v5; /*0x55c039*/
    if ( v6 == a3 && v56 <= 0xEE ) /*0x55c046*/
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
      *v6++ = *v5++; /*0x55c0b5*/
      --v56; /*0x55c0ba*/
    }
    while ( v56 ); /*0x55c0bb*/
  }
  *a4 = v6 - a3; /*0x55c0c9*/
  return 0; /*0x55c0c1*/
}



// ==== 0x0055C0E0  DecodeBlockLCW  this=-  sig=csp ====
int __fastcall LCW_DecodeBlock(unsigned __int8 *a1, int a2, _BYTE *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 *v7; // ebp
  unsigned int v8; // edx
  unsigned __int8 *v9; // eax
  int v10; // edx
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl
  unsigned __int8 *v13; // esi
  unsigned __int8 *v14; // eax
  unsigned __int8 v15; // cl
  unsigned __int8 *v16; // eax
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

  v5 = a1; /*0x55c0e5*/
  *a4 = 0; /*0x55c0e8*/
  v6 = a3; /*0x55c0ef*/
  v7 = &a1[a2]; /*0x55c0f3*/
  if ( *a1 > 0x11u ) /*0x55c0fc*/
  {
    v8 = *a1 - 17; /*0x55c104*/
    goto LABEL_9; /*0x55c107*/
  }
LABEL_3:
  v8 = *v5; /*0x55c109*/
  v9 = v5 + 1; /*0x55c10d*/
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
      v8 = *v9++ + v10; /*0x55c138*/
    }
    *v6 = *v9; /*0x55c13d*/
    v12 = v9[1]; /*0x55c13f*/
    v13 = v6 + 1; /*0x55c142*/
    v14 = v9 + 1; /*0x55c143*/
    *v13 = v12; /*0x55c144*/
    v15 = v14[1]; /*0x55c146*/
    ++v13; /*0x55c149*/
    v5 = v14 + 1; /*0x55c14a*/
    *v13 = v15; /*0x55c14b*/
    v6 = v13 + 1; /*0x55c14d*/
LABEL_9:
    v16 = v5 + 1; /*0x55c14e*/
    do /*0x55c156*/
    {
      *v6++ = *v16++; /*0x55c151*/
      --v8; /*0x55c155*/
    }
    while ( v8 ); /*0x55c156*/
    v8 = *v16; /*0x55c15a*/
    v9 = v16 + 1; /*0x55c15c*/
    if ( v8 < 0x10 ) /*0x55c160*/
    {
      v17 = (int)&v6[-(v8 >> 2) + -4 * *v9]; /*0x55c170*/
      v5 = v9 + 1; /*0x55c17e*/
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
      v21 = &v6[-((v8 >> 2) & 7) - 1 + -8 * *v9]; /*0x55c1db*/
      v5 = v9 + 1; /*0x55c1dc*/
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
      v22 = *v9++ + v23; /*0x55c20d*/
    }
    v21 = &v6[-(*v9 >> 2) - 1 + -64 * v9[1]]; /*0x55c225*/
    v5 = v9 + 2; /*0x55c227*/
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
    v20 = *(v5 - 2) & 3; /*0x55c18e*/
    if ( (*(v5 - 2) & 3) == 0 ) /*0x55c194*/
      goto LABEL_3; /*0x55c194*/
    do /*0x55c1a1*/
    {
      *v6++ = *v5++; /*0x55c19c*/
      --v20; /*0x55c1a0*/
    }
    while ( v20 ); /*0x55c1a1*/
    v8 = *v5; /*0x55c1a5*/
    v9 = v5 + 1; /*0x55c1a7*/
    if ( v8 < 0x10 ) /*0x55c1ab*/
    {
      v18 = &v6[-(v8 >> 2) - 1 + -4 * *v9]; /*0x55c1bd*/
      v5 = v9 + 1; /*0x55c1be*/
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
    v22 = *v9++ + v26; /*0x55c258*/
  }
  v28 = &v25[-(*v9 >> 2)]; /*0x55c262*/
  v29 = v9 + 1; /*0x55c264*/
  v30 = &v28[-64 * *v29]; /*0x55c26c*/
  v5 = v29 + 1; /*0x55c26e*/
  if ( v30 != v6 ) /*0x55c271*/
  {
    v21 = v30 - 0x4000; /*0x55c288*/
    goto LABEL_33; /*0x55c288*/
  }
  *a4 = v6 - a3; /*0x55c27c*/
  return -(v7 != v5); /*0x55c27b*/
}



// ==== 0x0055C2B0  LZOPipe::Constructor  this=LZOPipe  sig=csp ====
_DWORD *__thiscall LZOPipe::Constructor(LZOPipe *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx

  this->LZOPipe_field_0x04 = 0; /*0x55c2b9*/
  *((_DWORD *)this + 2) = 0; /*0x55c2bc*/
  this->q004 = 0; /*0x55c2bf*/
  *((_DWORD *)this + 5) = 0; /*0x55c2c2*/
  *((_DWORD *)this + 6) = 0; /*0x55c2c5*/
  *((_DWORD *)this + 3) = a2; /*0x55c2cc*/
  *((_DWORD *)this + 7) = a3; /*0x55c2cf*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c2d5*/
  *((_DWORD *)this + 8) = a3; /*0x55c2dc*/
  v4 = __2_YAPAXI_Z(2 * a3); /*0x55c2df*/
  v5 = *((_DWORD *)this + 7); /*0x55c2e4*/
  *((_DWORD *)this + 5) = v4; /*0x55c2e7*/
  *((_DWORD *)this + 6) = __2_YAPAXI_Z(v5 + *((_DWORD *)this + 8)); /*0x55c2f8*/
  *((_WORD *)this + 18) = -1; /*0x55c2fb*/
  return this->__pad_0; /*0x55c303*/
}



// ==== 0x0055C310  LZOPipe::Destructor  this=LZOPipe  sig=csp ====
int __thiscall LZOPipe::Destructor(LZOPipe *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x55c313*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c316*/
  __3_YAXPAX_Z(v2); /*0x55c31d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x55c322*/
  *((_DWORD *)this + 5) = 0; /*0x55c325*/
  __3_YAXPAX_Z(v3); /*0x55c32d*/
  *((_DWORD *)this + 6) = 0; /*0x55c337*/
  return Pipe::Dtor((Pipe *)this); /*0x55c343*/
}



// ==== 0x0055C350  LZOPipe::Read  this=LZOPipe  sig=csp ====
int __thiscall Compression::Read(int *this, int Src, signed int Size)
{
  char *v3; // ebp
  signed int v4; // edi
  int v6; // eax
  size_t v7; // ebx
  int v8; // eax
  signed int v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  unsigned __int8 *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v17; // eax
  signed int v18; // ebx
  int v19; // ecx
  int v20; // eax
  void *v21; // ebx
  __int16 v22; // cx
  int v23; // ebx
  int v24; // eax
  void *v25; // ebx
  int v26; // eax
  __int16 v27; // cx
  int v28; // eax
  int v29; // ebx
  int v30; // ebx
  signed int v31; // eax
  _BYTE *v32; // [esp-10h] [ebp-1Ch]

  v3 = (char *)Src; /*0x55c351*/
  v4 = Size; /*0x55c357*/
  if ( !Src || Size < 1 ) /*0x55c368*/
    return Delegate::Dispatch((Pipe *)this, Src, Size); /*0x55c5d0*/
  v6 = *(this + 3); /*0x55c36e*/
  Src = 0; /*0x55c375*/
  if ( v6 == 1 ) /*0x55c37d*/
  {
    while ( 1 ) /*0x55c38b*/
    {
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x55c391*/
      {
        v7 = 4 - this->q004; /*0x55c39b*/
        if ( v4 < v7 ) /*0x55c39f*/
          v7 = v4; /*0x55c3a1*/
        memcpy((void *)(*(this + 5) + this->q004), v3, v7); /*0x55c3ae*/
        v3 += v7; /*0x55c3bb*/
        v8 = v7 + this->q004; /*0x55c3bd*/
        v4 -= v7; /*0x55c3bf*/
        this->q004 = v8; /*0x55c3c4*/
        if ( v8 == 4 ) /*0x55c3c7*/
        {
          memcpy(this + 9, (const void *)*(this + 5), sizeof(int)); /*0x55c3d3*/
          this->q004 = 0; /*0x55c3db*/
        }
      }
      if ( v4 <= 0 ) /*0x55c3e4*/
        break; /*0x55c3e4*/
      v9 = *((unsigned __int16 *)this + 18) - this->q004; /*0x55c3f3*/
      if ( v4 < v9 ) /*0x55c3f7*/
        v9 = v4; /*0x55c3f9*/
      memcpy((void *)(*(this + 5) + this->q004), v3, v9); /*0x55c406*/
      v10 = v9 + this->q004; /*0x55c411*/
      v4 -= v9; /*0x55c413*/
      this->q004 = v10; /*0x55c415*/
      v11 = v10; /*0x55c418*/
      v3 += v9; /*0x55c41c*/
      v12 = *((unsigned __int16 *)this + 18); /*0x55c41e*/
      if ( v11 == (unsigned __int16)v12 ) /*0x55c424*/
      {
        v32 = (_BYTE *)*(this + 6); /*0x55c430*/
        v13 = (unsigned __int8 *)*(this + 5); /*0x55c431*/
        Size = 4; /*0x55c434*/
        DecodeBlockLCW(v13, v12, v32, &Size, 0); /*0x55c43c*/
        v14 = Delegate::Dispatch((Pipe *)this, *(this + 6), *((unsigned __int16 *)this + 19)); /*0x55c44e*/
        v15 = Src; /*0x55c453*/
        this->q004 = 0; /*0x55c457*/
        *((_WORD *)this + 18) = -1; /*0x55c460*/
        Src = v14 + v15; /*0x55c466*/
      }
      if ( v4 <= 0 ) /*0x55c46c*/
        return Src; /*0x55c47a*/
    }
  }
  else
  {
    v17 = this->q004; /*0x55c47d*/
    if ( v17 > 0 ) /*0x55c482*/
    {
      v18 = *(this + 7) - v17; /*0x55c48b*/
      if ( Size < v18 ) /*0x55c48f*/
        v18 = Size; /*0x55c491*/
      memcpy((void *)(*(this + 5) + this->q004), v3, v18); /*0x55c49e*/
      v19 = *(this + 7); /*0x55c4a6*/
      v20 = v18 + this->q004; /*0x55c4ae*/
      v3 += v18; /*0x55c4b0*/
      v4 -= v18; /*0x55c4b2*/
      this->q004 = v20; /*0x55c4b6*/
      if ( v20 == v19 ) /*0x55c4b9*/
      {
        Src = 4; /*0x55c4c0*/
        v21 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c4d3*/
        WriteCompressionBlock((_BYTE *)*(this + 5), *(this + 7), (_BYTE *)*(this + 6), &Src, (int)v21); /*0x55c4e2*/
        __3_YAXPAX_Z(v21); /*0x55c4e8*/
        v22 = Src; /*0x55c4ed*/
        *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x55c4fc*/
        *((_WORD *)this + 18) = v22; /*0x55c500*/
        v23 = Delegate::Dispatch((Pipe *)this, (int)(this + 9), 4); /*0x55c510*/
        v24 = Delegate::Dispatch((Pipe *)this, *(this + 6), Src); /*0x55c51a*/
        this->q004 = 0; /*0x55c521*/
        Src = v24 + v23; /*0x55c528*/
      }
    }
    if ( v4 >= *(this + 7) ) /*0x55c52f*/
    {
      do /*0x55c5aa*/
      {
        Size = 0; /*0x55c536*/
        v25 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c546*/
        WriteCompressionBlock(v3, *(this + 7), (_BYTE *)*(this + 6), &Size, (int)v25); /*0x55c557*/
        __3_YAXPAX_Z(v25); /*0x55c55d*/
        v26 = *(this + 7); /*0x55c562*/
        v27 = Size; /*0x55c565*/
        v3 += v26; /*0x55c56e*/
        v4 -= v26; /*0x55c570*/
        *((_WORD *)this + 19) = *((_WORD *)this + 14); /*0x55c578*/
        *((_WORD *)this + 18) = v27; /*0x55c57f*/
        v28 = Delegate::Dispatch((Pipe *)this, (int)(this + 9), 4); /*0x55c584*/
        v29 = v28 + Src; /*0x55c590*/
        v30 = Delegate::Dispatch((Pipe *)this, *(this + 6), Size) + v29; /*0x55c59f*/
        v31 = *(this + 7); /*0x55c5a1*/
        Src = v30; /*0x55c5a6*/
      }
      while ( v4 >= v31 ); /*0x55c5aa*/
    }
    if ( v4 > 0 ) /*0x55c5ae*/
    {
      memcpy((void *)*(this + 5), v3, v4); /*0x55c5b6*/
      this->q004 = v4; /*0x55c5be*/
    }
  }
  return Src; /*0x55c477*/
}



// ==== 0x0055C5E0  LZOPipe::AddRef  this=LZOPipe  sig=csp ====
int __thiscall LZOPipe_Destru::AddRef(LZOPipe *this)
{
  int v2; // edi
  _WORD *v3; // ebx
  int v4; // edi
  int v5; // edi
  void *v7; // edi
  __int16 v8; // dx
  int v9; // edi
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x55c5ec*/
  if ( *((int *)this + 4) > 0 ) /*0x55c5f0*/
  {
    if ( *((_DWORD *)this + 3) == 1 ) /*0x55c5fa*/
    {
      v3 = (_WORD *)this + 18; /*0x55c602*/
      if ( *((_WORD *)this + 18) == 0xFFFF ) /*0x55c605*/
      {
        v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004); /*0x55c613*/
        this->q004 = 0; /*0x55c615*/
      }
      if ( *((int *)this + 4) > 0 ) /*0x55c61b*/
      {
        v4 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4) + v2; /*0x55c635*/
        v5 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 5), this->q004) + v4; /*0x55c63e*/
        this->q004 = 0; /*0x55c640*/
        *v3 = -1; /*0x55c643*/
        return v5 + GameClass::GetRelatedObject((Pipe *)this); /*0x55c654*/
      }
    }
    else
    {
      v10 = 0; /*0x55c65a*/
      v7 = (void *)__2_YAPAXI_Z(0x10000u); /*0x55c66c*/
      WriteCompressionBlock(*((_BYTE **)this + 5), this->q004, *((_BYTE **)this + 6), &v10, (int)v7); /*0x55c678*/
      __3_YAXPAX_Z(v7); /*0x55c67e*/
      v8 = v10; /*0x55c687*/
      *((_WORD *)this + 19) = *((_WORD *)this + 8); /*0x55c692*/
      *((_WORD *)this + 18) = v8; /*0x55c69b*/
      v9 = Delegate::Dispatch((Pipe *)this, (int)this + 36, 4); /*0x55c6a7*/
      v2 = Delegate::Dispatch((Pipe *)this, *((_DWORD *)this + 6), v10) + v9; /*0x55c6b5*/
      this->q004 = 0; /*0x55c6b7*/
    }
  }
  return v2 + GameClass::GetRelatedObject((Pipe *)this); /*0x55c64f*/
}



// ==== 0x0055C6D0  LZOPipe::QueryInterface  this=LZOPipe  sig=csp ====
int *__thiscall LZOPipe_Destru::QueryInterface(LZOPipe *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x55c6d3*/
  *(_DWORD *)this->__pad_0 = &LZOPipe::`vftable'; /*0x55c6d6*/
  __3_YAXPAX_Z(v3); /*0x55c6dd*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x55c6e2*/
  *((_DWORD *)this + 5) = 0; /*0x55c6e5*/
  __3_YAXPAX_Z(v4); /*0x55c6ed*/
  *((_DWORD *)this + 6) = 0; /*0x55c6f7*/
  Pipe::Dtor((Pipe *)this); /*0x55c6fe*/
  if ( (a2 & 1) != 0 ) /*0x55c708*/
    __3_YAXPAX_Z(this); /*0x55c70b*/
  return (int *)this->__pad_0; /*0x55c715*/
}



// ==== 0x0055C720  LZOStraw::Constructor  this=LZOStraw  sig=csp ====
_DWORD *__thiscall LZOStraw::Constructor(LZOStraw *this, int a2, int a3)
{
  *((_DWORD *)this + 7) = a3; /*0x55c72f*/
  *((_DWORD *)this + 8) = a3; /*0x55c732*/
  this->LZOStraw_field_0x04 = 0; /*0x55c737*/
  *((_DWORD *)this + 2) = 0; /*0x55c73b*/
  *((_DWORD *)this + 3) = a2; /*0x55c73e*/
  this->q004 = 0; /*0x55c741*/
  *((_DWORD *)this + 5) = 0; /*0x55c744*/
  *((_DWORD *)this + 6) = 0; /*0x55c747*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c74a*/
  *((_DWORD *)this + 5) = __2_YAPAXI_Z(2 * a3); /*0x55c75a*/
  if ( !a2 ) /*0x55c75d*/
    *((_DWORD *)this + 6) = __2_YAPAXI_Z(*((_DWORD *)this + 7) + *((_DWORD *)this + 8)); /*0x55c770*/
  return this->__pad_0; /*0x55c775*/
}



// ==== 0x0055C780  LZOStraw::Destructor  this=LZOStraw  sig=csp ====
int __thiscall LZOStraw::Destructor(LZOStraw *this)
{
  void *v2; // eax
  void *v3; // ecx

  v2 = (void *)*((_DWORD *)this + 5); /*0x55c783*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c786*/
  __3_YAXPAX_Z(v2); /*0x55c78d*/
  v3 = (void *)*((_DWORD *)this + 6); /*0x55c792*/
  *((_DWORD *)this + 5) = 0; /*0x55c795*/
  __3_YAXPAX_Z(v3); /*0x55c79d*/
  *((_DWORD *)this + 6) = 0; /*0x55c7a7*/
  return Straw::Dtor((Straw *)this); /*0x55c7b3*/
}



// ==== 0x0055C7C0  LZOStraw::Decompress  this=LZOStraw  sig=csp ====
int __thiscall LCW::Decompress(LZOStraw *this, char *a2, signed int Size)
{
  char *v3; // ebp
  signed int v5; // ebx
  int v6; // eax
  size_t v7; // edi
  size_t v8; // ecx
  unsigned __int16 *v9; // ebx
  void *v10; // edi
  int v11; // eax
  int v12; // edx
  __int16 v13; // ax
  int v14; // eax
  _BYTE *v15; // ecx
  void *v16; // ebx
  unsigned __int16 v17; // dx
  _BYTE *v19; // [esp-10h] [ebp-24h]
  _BYTE *v20; // [esp-10h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h] BYREF

  v3 = a2; /*0x55c7c5*/
  v21 = 0; /*0x55c7ce*/
  if ( !a2 ) /*0x55c7d6*/
    return 0; /*0x55c7d6*/
  v5 = Size; /*0x55c7dc*/
  if ( Size < 1 ) /*0x55c7e3*/
    return 0; /*0x55c981*/
  while ( 1 ) /*0x55c7f8*/
  {
    v6 = this->q004; /*0x55c7f8*/
    if ( v6 > 0 ) /*0x55c7fd*/
    {
      v7 = v5; /*0x55c801*/
      if ( v5 >= v6 ) /*0x55c803*/
        v7 = this->q004; /*0x55c805*/
      if ( *((_DWORD *)this + 3) == 1 ) /*0x55c80e*/
        memcpy(v3, (const void *)(*((_DWORD *)this + 5) + *((unsigned __int16 *)this + 19) - v6), v7); /*0x55c81e*/
      else
        memcpy(v3, (const void *)(*((_DWORD *)this + 6) + *((unsigned __int16 *)this + 18) - v6 + 4), v7); /*0x55c832*/
      v3 += v7; /*0x55c841*/
      v5 -= v7; /*0x55c843*/
      v8 = this->q004 - v7; /*0x55c845*/
      Size = v5; /*0x55c849*/
      this->q004 = v8; /*0x55c84d*/
      v21 += v7; /*0x55c850*/
    }
    if ( !v5 ) /*0x55c856*/
      break; /*0x55c856*/
    if ( *((_DWORD *)this + 3) == 1 ) /*0x55c860*/
    {
      v9 = (unsigned __int16 *)this + 18; /*0x55c862*/
      if ( Delegate::Invoke((Straw *)this, (int)this + 36, 4) != 4 ) /*0x55c872*/
        return v21; /*0x55c872*/
      v10 = (void *)__2_YAPAXI_Z(*v9); /*0x55c88b*/
      v11 = Delegate::Invoke((Straw *)this, (int)v10, *v9); /*0x55c891*/
      v12 = *v9; /*0x55c898*/
      if ( v11 != v12 ) /*0x55c89d*/
      {
        if ( v10 ) /*0x55c966*/
          __3_YAXPAX_Z(v10); /*0x55c969*/
        return v21; /*0x55c969*/
      }
      v19 = (_BYTE *)*((_DWORD *)this + 5); /*0x55c8ad*/
      v22 = 4; /*0x55c8b0*/
      DecodeBlockLCW((unsigned __int8 *)v10, v12, v19, &v22, 0); /*0x55c8b8*/
      __3_YAXPAX_Z(v10); /*0x55c8be*/
      this->q004 = *((unsigned __int16 *)this + 19); /*0x55c8cc*/
    }
    else
    {
      v13 = Delegate::Invoke((Straw *)this, *((_DWORD *)this + 5), *((_DWORD *)this + 7)); /*0x55c8db*/
      *((_WORD *)this + 19) = v13; /*0x55c8e3*/
      if ( !v13 ) /*0x55c8e7*/
        return v21; /*0x55c8e7*/
      v14 = __2_YAPAXI_Z(0x10000u); /*0x55c8f2*/
      v15 = (_BYTE *)*((_DWORD *)this + 5); /*0x55c8f7*/
      v16 = (void *)v14; /*0x55c8fd*/
      v20 = (_BYTE *)(*((_DWORD *)this + 6) + 4); /*0x55c90d*/
      v17 = *((_WORD *)this + 19); /*0x55c90e*/
      a2 = 0; /*0x55c912*/
      WriteCompressionBlock(v15, v17, v20, (int *)&a2, v14); /*0x55c91a*/
      *((_WORD *)this + 18) = (_WORD)a2; /*0x55c928*/
      __3_YAXPAX_Z(v16); /*0x55c92b*/
      memcpy(*((void **)this + 6), (char *)this + 36, 4u); /*0x55c937*/
      this->q004 = *((unsigned __int16 *)this + 18) + 4; /*0x55c947*/
    }
    if ( Size <= 0 ) /*0x55c950*/
      return v21; /*0x55c961*/
    v5 = Size; /*0x55c7f4*/
  }
  return v21; /*0x55c95b*/
}



// ==== 0x0055C990  LZOStraw::QueryInterface  this=LZOStraw  sig=csp ====
int *__thiscall LZOStraw_Destru::QueryInterface(LZOStraw *this, char a2)
{
  void *v3; // eax
  void *v4; // ecx

  v3 = (void *)*((_DWORD *)this + 5); /*0x55c993*/
  *(_DWORD *)this->__pad_0 = &LZOStraw::`vftable'; /*0x55c996*/
  __3_YAXPAX_Z(v3); /*0x55c99d*/
  v4 = (void *)*((_DWORD *)this + 6); /*0x55c9a2*/
  *((_DWORD *)this + 5) = 0; /*0x55c9a5*/
  __3_YAXPAX_Z(v4); /*0x55c9ad*/
  *((_DWORD *)this + 6) = 0; /*0x55c9b7*/
  Straw::Dtor((Straw *)this); /*0x55c9be*/
  if ( (a2 & 1) != 0 ) /*0x55c9c8*/
    __3_YAXPAX_Z(this); /*0x55c9cb*/
  return (int *)this->__pad_0; /*0x55c9d5*/
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
char ScreenCapture::Frame(ScreenCapture *this)
{
  int v1; // eax
  int v2; // eax
  LONG right; // ecx
  LONG bottom; // edx
  int v5; // eax
  int v6; // esi
  int v7; // esi
  LONG v8; // eax
  LONG v9; // ecx
  int i; // esi
  struct tagPOINT v12; // [esp+10h] [ebp-E0h] BYREF
  LONG v13; // [esp+18h] [ebp-D8h]
  LONG v14; // [esp+1Ch] [ebp-D4h]
  struct tagPOINT Point; // [esp+20h] [ebp-D0h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-C8h] BYREF
  struct tagPOINT v17; // [esp+38h] [ebp-B8h] BYREF
  char Buffer[4]; // [esp+40h] [ebp-B0h] BYREF
  int v19; // [esp+44h] [ebp-ACh]
  LONG v20; // [esp+48h] [ebp-A8h]
  LONG v21; // [esp+4Ch] [ebp-A4h]
  XSurface v22[2]; // [esp+60h] [ebp-90h] BYREF
  CCFileClass v23; // [esp+84h] [ebp-6Ch] BYREF
  int v24[3]; // [esp+DCh] [ebp-14h] BYREF
  int v25; // [esp+E8h] [ebp-8h]

  LOBYTE(v1) = stru_A8EB00.?[381]; /*0x55cc20*/
  if ( stru_A8EB00.?[381] ) /*0x55cc33*/
  {
    if ( (g_MissionQueueFrame.waypoints[382] & 1) == 0 ) /*0x55cc40*/
    {
      g_MissionQueueFrame.waypoints[382] |= 1u; /*0x55cc44*/
      LOWORD(v2) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6000) * 900.0); /*0x55cc5a*/
      *(_DWORD *)&g_MissionQueueFrame.waypoints[430] = v2; /*0x55cc5f*/
    }
    if ( !*(_DWORD *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc6a*/
    {
      *(_DWORD *)&g_MissionQueueFrame.waypoints[482] = __2_YAPAXI_Z(4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc89*/
      memset(*(void **)&g_MissionQueueFrame.waypoints[482], 0, 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[430]); /*0x55cc8f*/
      if ( !*(_DWORD *)&g_MissionQueueFrame.waypoints[482] ) /*0x55cc9b*/
        stru_A8EB00.?[381] = 0; /*0x55cc9d*/
    }
    GetClientRect(g_hWnd, &Rect); /*0x55ccaf*/
    Point.x = Rect.left; /*0x55ccc7*/
    Point.y = Rect.top; /*0x55ccd3*/
    v1 = ClientToScreen(g_hWnd, &Point); /*0x55ccd7*/
    if ( v1 ) /*0x55ccdb*/
    {
      v17 = *(struct tagPOINT *)&Rect.right; /*0x55cce9*/
      v1 = ClientToScreen(g_hWnd, &v17); /*0x55ccfc*/
      if ( v1 ) /*0x55cd00*/
      {
        right = Rect.right; /*0x55cd13*/
        bottom = Rect.bottom; /*0x55cd17*/
        v12 = Point; /*0x55cd23*/
        v13 = Rect.right; /*0x55cd2b*/
        v14 = Rect.bottom; /*0x55cd2f*/
        if ( *(_DWORD *)&stru_87F5F0.__pad_58[420] ) /*0x55cd33*/
        {
          if ( *(int *)&stru_87F5F0.__pad_58[420] <= 0 ) /*0x55cd3d*/
          {
            if ( *(int *)&stru_87F5F0.__pad_58[420] >= 0 ) /*0x55cd49*/
              goto LABEL_17; /*0x55cd49*/
            right = *(_DWORD *)&stru_87F5F0.__pad_58[420] + Rect.right; /*0x55cd4b*/
          }
          else
          {
            right = Rect.right - *(_DWORD *)&stru_87F5F0.__pad_58[420]; /*0x55cd41*/
            v12.x = *(_DWORD *)&stru_87F5F0.__pad_58[420] + Point.x; /*0x55cd43*/
          }
          v13 = right; /*0x55cd4d*/
        }
        else if ( !*(_DWORD *)&stru_87F5F0.__pad_58[424] ) /*0x55cd37*/
        {
          goto LABEL_22; /*0x55cd37*/
        }
LABEL_17:
        if ( *(int *)&stru_87F5F0.__pad_58[424] <= 0 ) /*0x55cd53*/
        {
          if ( *(int *)&stru_87F5F0.__pad_58[424] >= 0 ) /*0x55cd60*/
            goto LABEL_22; /*0x55cd60*/
          bottom = *(_DWORD *)&stru_87F5F0.__pad_58[424] + Rect.bottom; /*0x55cd62*/
        }
        else
        {
          bottom = Rect.bottom - *(_DWORD *)&stru_87F5F0.__pad_58[424]; /*0x55cd58*/
          v12.y = *(_DWORD *)&stru_87F5F0.__pad_58[424] + Point.y; /*0x55cd5a*/
        }
        v14 = bottom; /*0x55cd64*/
LABEL_22:
        v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55cd68*/
        if ( *(int *)&g_MissionQueueFrame.waypoints[486] >= *(int *)&g_MissionQueueFrame.waypoints[430] ) /*0x55cd75*/
        {
          stru_A8EB00.?[381] = 0; /*0x55ce3e*/
          DSurface::Construct(v22[0].Surface, right, bottom, 0, 0); /*0x55ce44*/
          for ( i = 0; i < *(int *)&g_MissionQueueFrame.waypoints[486]; ++i ) /*0x55ce52*/
          {
            sprintf(Buffer, "cap%04d.pcx", i); /*0x55ce6d*/
            CCFileClass::Construct(&v23, Buffer); /*0x55ce81*/
            XSurface::BlitWhole(v22, *(int **)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] + 4 * i), 0, 1); /*0x55ce97*/
            CompressScreenshot((int *)v23.CDFileClass, (int *)v22[0].Surface, &FileSystem_TEMPERAT_PAL); /*0x55ceac*/
            *(_DWORD *)v23.CDFileClass = &CCFileClass::`vftable'; /*0x55ceb8*/
            v25 = 0; /*0x55cebf*/
            Vector::Clear((int)v24); /*0x55cec6*/
            *(_DWORD *)v23.CDFileClass = &off_7E1668; /*0x55ced2*/
            BufferIOFileClass::Dtor((BufferIOFileClass *)&v23); /*0x55ced9*/
          }
          *(_DWORD *)&g_MissionQueueFrame.waypoints[486] = 0; /*0x55cef0*/
          LOBYTE(v1) = DSurface::Destroy((DSurface *)v22); /*0x55cef6*/
        }
        else
        {
          v6 = *(_DWORD *)&g_MissionQueueFrame.waypoints[482]; /*0x55cd7b*/
          if ( *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] /*0x55cd81*/
                         + 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) )
            goto LABEL_28; /*0x55cd81*/
          v7 = __2_YAPAXI_Z(0x20u); /*0x55cd8d*/
          if ( v7 ) /*0x55cd94*/
          {
            v8 = v13; /*0x55cd96*/
            v9 = v14; /*0x55cd9a*/
            *(_DWORD *)(v7 + 4) = v13; /*0x55cd9e*/
            *(_DWORD *)(v7 + 8) = v9; /*0x55cda6*/
            *(_DWORD *)(v7 + 12) = 0; /*0x55cdae*/
            *(_DWORD *)v7 = &XSurface_Vtable; /*0x55cdb1*/
            *(_DWORD *)(v7 + 16) = 2; /*0x55cdb7*/
            Buffer::Init((Buffer *)(v7 + 20), 0, 2 * v9 * v8); /*0x55cdbe*/
            *(_DWORD *)v7 = &BSurface_Vtable; /*0x55cdc3*/
          }
          else
          {
            v7 = 0; /*0x55cdcb*/
          }
          *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] + 4 /*0x55cdd9*/
                                                                     * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) = v7;
          v6 = *(_DWORD *)&g_MissionQueueFrame.waypoints[482]; /*0x55cddc*/
          v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55cde2*/
          bottom = v14; /*0x55cde7*/
          right = v13; /*0x55cdeb*/
          if ( *(_DWORD *)(*(_DWORD *)&g_MissionQueueFrame.waypoints[482] /*0x55cdef*/
                         + 4 * *(_DWORD *)&g_MissionQueueFrame.waypoints[486]) )
          {
LABEL_28:
            v21 = bottom; /*0x55cdf4*/
            *(_DWORD *)Buffer = 0; /*0x55ce06*/
            v19 = 0; /*0x55ce0a*/
            v20 = right; /*0x55ce0e*/
            (*(void (__thiscall **)(_DWORD, char *, DSurface *, struct tagPOINT *, _DWORD, int))(**(_DWORD **)(v6 + 4 * v5) /*0x55ce1d*/
                                                                                               + 8))(
              *(_DWORD *)(v6 + 4 * v5),
              Buffer,
              g_DSurface_Primary,
              &v12,
              0,
              1);
            v5 = *(_DWORD *)&g_MissionQueueFrame.waypoints[486]; /*0x55ce20*/
          }
          v1 = v5 + 1; /*0x55ce26*/
          *(_DWORD *)&g_MissionQueueFrame.waypoints[486] = v1; /*0x55ce29*/
        }
      }
    }
  }
  return v1; /*0x55ce25*/
}



// ==== 0x0055CF10  ObjectClass::Map_Get_55CF10  this=ObjectClass  sig=csp ====
char Map_Get_55CF10(ObjectClass *this)
{
  char result; // al
  int v2; // esi
  int v3; // eax
  Network *Ticks; // [esp+0h] [ebp-Ch]

  Debug::Log(); /*0x55cf18*/
  result = (char)dword_A8B238; /*0x55cf1d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55cf28*/
  {
    result = stru_887598.isAliveFlag; /*0x55cf2e*/
    if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x55cf35*/
    {
      result = byte_A8DBA0; /*0x55cf3b*/
      if ( byte_A8DBA0 ) /*0x55cf42*/
      {
        if ( dword_A8EA0C ) /*0x55cf4c*/
        {
          NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&stru_B052C0.__pad_0[16]); /*0x55cf53*/
          v2 = 480; /*0x55cf61*/
          Ticks = (Network *)Timer::GetTicks(); /*0x55cf66*/
          while ( 1 ) /*0x55cf74*/
          {
            if ( Ticks != (Network *)-1 ) /*0x55cf79*/
            {
              v3 = Timer::GetTicks() - (_DWORD)Ticks; /*0x55cf84*/
              if ( v3 >= 480 ) /*0x55cf8a*/
                break; /*0x55cf8a*/
              v2 = 480 - v3; /*0x55cf8c*/
            }
            if ( !v2 ) /*0x55cf90*/
              break; /*0x55cf90*/
            Event::Dispatch(); /*0x55cf92*/
            if ( Process::WaitForExit((Process *)&stru_B052C0.__pad_0[16], 0xAu, 0) ) /*0x55cfa0*/
              break; /*0x55cfa0*/
            v2 = 480; /*0x55cf70*/
          }
        }
        if ( !dword_A8B23C ) /*0x55cfb2*/
          return Network::SendUnreachable(Ticks); /*0x55cfb2*/
        result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->AbstractClass + 2))(dword_A8B23C); /*0x55cfb6*/
        if ( !result ) /*0x55cfbb*/
          return Network::SendUnreachable(Ticks); /*0x55cfbd*/
      }
    }
  }
  return result; /*0x55cfc2*/
}



// ==== 0x0055CFD0  ObjectClass::GameFrameCheck  this=ObjectClass  sig=csp ====
BOOL GameFrameCheck(ObjectClass *this)
{
  char *v1; // eax
  int v2; // eax
  int v3; // edx
  Tooltip *v4; // ecx
  int v5; // esi
  int v6; // eax
  Scenario *v8; // [esp+0h] [ebp-84h]
  Scenario *v9; // [esp+0h] [ebp-84h]
  Network *v10; // [esp+0h] [ebp-84h]
  int Ticks; // [esp+8h] [ebp-7Ch]
  char v12[112]; // [esp+14h] [ebp-70h] BYREF

  if ( ((unsigned __int16)dword_A8ED84 & 0x3FF) == 0 && !CopyProtection::CheckProtectedData() ) /*0x55cfe1*/
  {
    v1 = EventClass::AddEvent(v12, dword_A83D4C->Object_field_0x30, 8u); /*0x55cff9*/
    if ( *(int *)&dword_A802C8 < 128 ) /*0x55d008*/
    {
      qmemcpy(&byte_A802D4[111 * dword_A802D0], v1, 0x6Fu); /*0x55d025*/
      dword_A83A54[dword_A802D0] = timeGetTime(); /*0x55d037*/
      dword_A802D0 = ((_BYTE)dword_A802D0 + 1) & 0x7F; /*0x55d04e*/
      ++*(_DWORD *)&dword_A802C8; /*0x55d054*/
    }
  }
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55d07a*/
  {
    ++dword_A8DAB4; /*0x55d080*/
    v2 = Scenario::ClearScreen(v8); /*0x55d086*/
    LOBYTE(v2) = byte_A83D49; /*0x55d08b*/
    if ( byte_A83D49 || byte_A8ECD0 ) /*0x55d09a*/
    {
      if ( dword_887368 ) /*0x55d0a8*/
      {
        v2 = Tooltip::Enable(dword_887368, 0); /*0x55d0ab*/
        LOBYTE(v2) = byte_A83D49; /*0x55d0b0*/
      }
      if ( (_BYTE)v2 || byte_A8ECD0 ) /*0x55d0bf*/
      {
        v3 = *(_DWORD *)&dword_A8B238; /*0x55d0cb*/
        if ( dword_A8B23C && (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) ) /*0x55d0dd*/
        {
          (*(void (__stdcall **)(int))(dword_A8B23C->ptr_0 + 160))(v2); /*0x55d0e2*/
          LOBYTE(v2) = byte_A83D49; /*0x55d0e8*/
          v3 = *(_DWORD *)&dword_A8B238; /*0x55d0ed*/
        }
        if ( (_BYTE)v2 ) /*0x55d0f5*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d106*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d10e*/
              byte_A8B8C1 = 1; /*0x55d110*/
            Timer::UpdateDelta(); /*0x55d117*/
            ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x55d11e*/
          }
          byte_A8ECD0 = 0; /*0x55d123*/
          byte_A83D49 = 0; /*0x55d129*/
          byte_8B41C0 = 0; /*0x55d12f*/
          byte_A83D48 = 0; /*0x55d135*/
          InitLoadingScreenResources(); /*0x55d13b*/
          WTFMode::Shutdown(&dword_A8B238); /*0x55d145*/
          Scenario::EndGameFlow(v9); /*0x55d14a*/
          WTFMode::Init(&dword_A8B238); /*0x55d154*/
          v4 = dword_887368; /*0x55d159*/
          byte_ABCD58 = 0; /*0x55d15f*/
          if ( !dword_887368 ) /*0x55d167*/
            goto LABEL_52; /*0x55d167*/
          goto LABEL_26; /*0x55d167*/
        }
        if ( byte_A8ECD0 ) /*0x55d183*/
        {
          if ( v3 == 4 && !byte_A8F900 ) /*0x55d194*/
          {
            if ( *(_DWORD *)dword_B779C4 ) /*0x55d19c*/
              byte_A8B8C1 = 1; /*0x55d19e*/
            Timer::UpdateDelta(); /*0x55d1a5*/
            ((void (__fastcall *)(char))ProcessGameResults)(0); /*0x55d1ac*/
          }
          byte_A83D49 = 0; /*0x55d1b1*/
          byte_A8ECD0 = 0; /*0x55d1b7*/
          byte_8B41C0 = 0; /*0x55d1bd*/
          byte_A83D48 = 0; /*0x55d1c3*/
          InitLoadingScreenResources(); /*0x55d1c9*/
          WTFMode::Shutdown(&dword_A8B238); /*0x55d1d3*/
          Scenario::EndGame(v9); /*0x55d1d8*/
          WTFMode::Init(&dword_A8B238); /*0x55d1e2*/
          v4 = dword_887368; /*0x55d1e7*/
          byte_ABCD58 = 0; /*0x55d1ed*/
          if ( !dword_887368 ) /*0x55d1f5*/
            goto LABEL_52; /*0x55d1f5*/
LABEL_26:
          Tooltip::Enable(v4, byte_A8EB80); /*0x55d16d*/
LABEL_52:
          --dword_A8DAB4; /*0x55d341*/
          return byte_A8E9A0 == 0; /*0x55d341*/
        }
      }
    }
    if ( byte_8B41C0 ) /*0x55d212*/
    {
      byte_A83D49 = 0; /*0x55d219*/
      byte_A8ECD0 = 0; /*0x55d21f*/
      byte_8B41C0 = 0; /*0x55d225*/
      byte_A83D48 = 0; /*0x55d22b*/
      WTFMode::Shutdown(&dword_A8B238); /*0x55d231*/
      ((void (__stdcall *)())GameFrameCheck_Check)(); /*0x55d236*/
      WTFMode::Init(&dword_A8B238); /*0x55d240*/
      byte_ABCD58 = 0; /*0x55d245*/
    }
    else if ( byte_A83D48 ) /*0x55d256*/
    {
      byte_A83D49 = 0; /*0x55d25c*/
      byte_A8ECD0 = 0; /*0x55d262*/
      byte_8B41C0 = 0; /*0x55d268*/
      byte_A83D48 = 0; /*0x55d26e*/
      InitLoadingScreenResources(); /*0x55d274*/
      WTFMode::Shutdown(&dword_A8B238); /*0x55d27e*/
      GameFrameCheck_Check_686570((ObjectClass *)v9); /*0x55d283*/
      WTFMode::Init(&dword_A8B238); /*0x55d28d*/
      byte_ABCD58 = 0; /*0x55d292*/
      Debug::Log(); /*0x55d29d*/
      if ( *(_DWORD *)&dword_A8B238 == 4 && dword_887628 && byte_A8DBA0 ) /*0x55d2c5*/
      {
        if ( dword_A8EA0C ) /*0x55d2cd*/
        {
          NetworkEventQueueClass::WaitForResponse((NetworkEventQueueClass *)&unk_B052D0); /*0x55d2d4*/
          v5 = 480; /*0x55d2e2*/
          Ticks = Timer::GetTicks(); /*0x55d2e7*/
          while ( 1 ) /*0x55d2f5*/
          {
            if ( Ticks != -1 ) /*0x55d2fa*/
            {
              v6 = Timer::GetTicks() - Ticks; /*0x55d305*/
              if ( v6 >= 480 ) /*0x55d30b*/
                break; /*0x55d30b*/
              v5 = 480 - v6; /*0x55d30d*/
            }
            if ( !v5 ) /*0x55d311*/
              break; /*0x55d311*/
            Event::Dispatch(); /*0x55d313*/
            if ( Process::WaitForExit((Process *)&unk_B052D0, 0xAu, 0) ) /*0x55d320*/
              break; /*0x55d320*/
            v5 = 480; /*0x55d2f1*/
          }
        }
        if ( !dword_A8B23C /*0x55d335*/
          || !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 8))(dword_A8B23C) )
        {
          Network::SendUnreachable(v10); /*0x55d33c*/
        }
      }
    }
    goto LABEL_52; /*0x55d24b*/
  }
  return byte_A8E9A0 == 0; /*0x55d351*/
}



// ==== 0x0055D360  ObjectClass::GameFrameLoop  this=ObjectClass  sig=csp ====
int GameFrameLoop(ObjectClass *this)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int v4; // esi
  wchar_t *v5; // esi
  signed int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int *v10; // edi
  int v11; // esi
  signed int v12; // eax
  int v13; // esi
  signed int v14; // eax
  int v15; // esi
  signed int v16; // eax
  DWORD v17; // esi
  int referenceCount; // esi
  int *p_abstractFlags; // edi
  int v20; // eax
  char v21; // cl
  int *v22; // eax
  int v23; // esi
  _BYTE *WaypointCoords; // eax
  unsigned __int8 v25; // cl
  int v26; // ecx
  int i; // esi
  _BYTE *v28; // eax
  unsigned __int8 v29; // cl
  int v30; // ecx
  int v31; // esi
  _BYTE *v32; // eax
  unsigned __int8 v33; // cl
  int v34; // ecx
  int v35; // esi
  int Object; // eax
  char *v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed int v41; // eax
  char *v42; // edx
  ObjectClass *v43; // [esp+0h] [ebp-1C4h]
  ObjectClass *v44; // [esp+0h] [ebp-1C4h]
  ObjectClass *v45; // [esp+0h] [ebp-1C4h]
  ObjectClass *v46; // [esp+0h] [ebp-1C4h]
  ObjectClass *v47; // [esp+0h] [ebp-1C4h]
  TechnoClass *v48; // [esp+0h] [ebp-1C4h]
  DWORD Time; // [esp+10h] [ebp-1B4h] BYREF
  Timer v50; // [esp+14h] [ebp-1B0h] BYREF
  char v51; // [esp+150h] [ebp-74h]
  wchar_t Buffer[56]; // [esp+154h] [ebp-70h] BYREF

  if ( !byte_A8E9A0 ) /*0x55d371*/
    goto LABEL_155; /*0x55d371*/
  byte_ABCD58 = 1; /*0x55d37c*/
  if ( !byte_A8ED80 ) /*0x55d385*/
  {
    while ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x55d399*/
    {
      Sleep(0x1F4u); /*0x55d3a0*/
      MessageLoop(); /*0x55d3a2*/
      if ( byte_A8ED80 ) /*0x55d3ae*/
        goto LABEL_8; /*0x55d3ae*/
    }
    Sleep(0xAu); /*0x55d3b4*/
    MessageLoop(); /*0x55d3b6*/
  }
LABEL_8:
  if ( (int)dword_A8ED84 >= dword_A8E2E4 ) /*0x55d3c8*/
    nullsub_35(v43); /*0x55d3cf*/
  dword_A8B55C = timeGetTime(); /*0x55d3da*/
  if ( dword_A8E308 ) /*0x55d3e6*/
    byte_A8ED72 = 1; /*0x55d3e8*/
  if ( byte_A8E378 == 1 && Audio::IsSoundEnabled() ) /*0x55d3f8*/
  {
    v2 = dword_A83D14; /*0x55d401*/
    if ( dword_A83D14 == -1 ) /*0x55d409*/
      v2 = dword_A83D18; /*0x55d40b*/
    if ( byte_A8EBA5 ) /*0x55d418*/
    {
      if ( v2 == -1 ) /*0x55d41d*/
        Theme::QueueSong((int)&unk_A83D10, -2); /*0x55d421*/
    }
    else if ( v2 != -3 ) /*0x55d426*/
    {
      Theme::Stop((Theme *)&unk_A83D10, 1); /*0x55d42f*/
      Theme::QueueSong((int)&unk_A83D10, -3); /*0x55d43b*/
    }
  }
  if ( !*(_DWORD *)&dword_A8B238 ) /*0x55d447*/
  {
    if ( !byte_A8EDDC ) /*0x55d76e*/
    {
      dword_A8EB60 = (AudioOptionsClass)2; /*0x55d774*/
      dword_887348 = Timer::GetTicks(); /*0x55d783*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d791*/
      dword_887350 = 2; /*0x55d796*/
      goto LABEL_62; /*0x55d79c*/
    }
LABEL_61:
    v17 = (DWORD)dword_A8EB60; /*0x55d79e*/
    dword_887348 = Timer::GetTicks(); /*0x55d7b1*/
    dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d7b6*/
    dword_887350 = v17; /*0x55d7bc*/
    goto LABEL_62; /*0x55d7bc*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 5 || dword_A8B24C != 2 ) /*0x55d45d*/
    goto LABEL_61; /*0x55d45d*/
  if ( (dword_A8D5F8 & 2) != 0 ) /*0x55d46a*/
  {
    dword_887348 = Timer::GetTicks(); /*0x55d47b*/
    dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d480*/
    dword_887350 = 0; /*0x55d486*/
  }
  else
  {
    if ( dword_A8B558 ) /*0x55d499*/
    {
      v3 = 60 / (int)dword_A8B558; /*0x55d507*/
      dword_887348 = Timer::GetTicks(); /*0x55d50e*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d517*/
      dword_887350 = v3; /*0x55d528*/
      v4 = 1000 / (int)dword_A8B558; /*0x55d532*/
      Time = timeGetTime(); /*0x55d53d*/
      Timer::EnableHighPrecision(&v50); /*0x55d541*/
      g_TacticalState = Time; /*0x55d54e*/
      *(_DWORD *)&v50.m_2[2] = v4; /*0x55d554*/
      *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d558*/
      dword_887330 = v4; /*0x55d55e*/
    }
    else
    {
      dword_887348 = Timer::GetTicks(); /*0x55d4a9*/
      dword_887350 = 2; /*0x55d4b2*/
      dword_88734C = *(_DWORD *)v50.__pad_0; /*0x55d4bc*/
      Time = timeGetTime(); /*0x55d4ca*/
      Timer::EnableHighPrecision(&v50); /*0x55d4ce*/
      g_TacticalState = Time; /*0x55d4e0*/
      *(_DWORD *)&v50.m_2[2] = 33; /*0x55d4e6*/
      *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d4ea*/
      dword_887330 = 33; /*0x55d4f0*/
    }
    Timer::DisableHighPrecision(); /*0x55d568*/
    v5 = (wchar_t *)dword_887330; /*0x55d572*/
    if ( g_TacticalState != -1 ) /*0x55d57b*/
    {
      v6 = timeGetTime() - g_TacticalState; /*0x55d587*/
      if ( v6 >= (int)v5 ) /*0x55d58f*/
        v5 = 0; /*0x55d595*/
      else
        v5 = (wchar_t *)((char *)v5 - v6); /*0x55d591*/
    }
    v7 = (int)dword_A8B550; /*0x55d59c*/
    v8 = 0; /*0x55d5a2*/
    dword_ABCE04 = v5; /*0x55d5a7*/
    if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55d5ad*/
    {
      if ( (int)dword_A8B550 <= 30 ) /*0x55d5b6*/
        goto LABEL_72; /*0x55d5b6*/
      v9 = 0; /*0x55d5c1*/
      if ( Network::GetSendCount(&unk_A8E9C0) > 0 ) /*0x55d5ca*/
      {
        v10 = dword_A8DB7C; /*0x55d5d0*/
        do /*0x55d5ed*/
        {
          if ( v8 <= *v10 ) /*0x55d5d9*/
            v8 = *v10; /*0x55d5db*/
          ++v9; /*0x55d5e2*/
          ++v10; /*0x55d5e3*/
        }
        while ( v9 < Network::GetSendCount(&unk_A8E9C0) ); /*0x55d5ed*/
        if ( v8 ) /*0x55d5f1*/
        {
          if ( v8 >= v7 / 4 ) /*0x55d604*/
          {
            v11 = dword_887330; /*0x55d60b*/
            if ( g_TacticalState != -1 ) /*0x55d616*/
            {
              v12 = timeGetTime() - g_TacticalState; /*0x55d622*/
              if ( v12 >= v11 ) /*0x55d62a*/
                v11 = 0; /*0x55d630*/
              else
                v11 -= v12; /*0x55d62c*/
            }
            Time = timeGetTime(); /*0x55d63f*/
            Timer::EnableHighPrecision(&v50); /*0x55d643*/
            g_TacticalState = Time; /*0x55d653*/
            *(_DWORD *)&v50.m_2[2] = v11 + 10; /*0x55d65d*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d661*/
            dword_887330 = v11 + 10; /*0x55d667*/
            Timer::DisableHighPrecision(); /*0x55d66c*/
          }
          if ( v8 >= v7 / 2 ) /*0x55d67f*/
          {
            v13 = dword_887330; /*0x55d686*/
            if ( g_TacticalState != -1 ) /*0x55d68e*/
            {
              v14 = timeGetTime() - g_TacticalState; /*0x55d69a*/
              if ( v14 >= v13 ) /*0x55d6a2*/
                v13 = 0; /*0x55d6a8*/
              else
                v13 -= v14; /*0x55d6a4*/
            }
            Time = timeGetTime(); /*0x55d6b7*/
            Timer::EnableHighPrecision(&v50); /*0x55d6bb*/
            g_TacticalState = Time; /*0x55d6cb*/
            *(_DWORD *)&v50.m_2[2] = v13 + 10; /*0x55d6d5*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d6d9*/
            dword_887330 = v13 + 10; /*0x55d6df*/
            Timer::DisableHighPrecision(); /*0x55d6e4*/
          }
          if ( v8 >= 3 * v7 / 4 ) /*0x55d6f7*/
          {
            v15 = dword_887330; /*0x55d702*/
            if ( g_TacticalState != -1 ) /*0x55d70a*/
            {
              v16 = timeGetTime() - g_TacticalState; /*0x55d716*/
              if ( v16 >= v15 ) /*0x55d71e*/
                v15 = 0; /*0x55d724*/
              else
                v15 -= v16; /*0x55d720*/
            }
            Time = timeGetTime(); /*0x55d733*/
            Timer::EnableHighPrecision(&v50); /*0x55d737*/
            g_TacticalState = Time; /*0x55d747*/
            *(_DWORD *)&v50.m_2[2] = v15 + 10; /*0x55d751*/
            *(_DWORD *)stru_88732C.__pad_0 = *(_DWORD *)v50.__pad_0; /*0x55d755*/
            dword_887330 = v15 + 10; /*0x55d75b*/
            Timer::DisableHighPrecision(); /*0x55d760*/
          }
        }
      }
    }
  }
LABEL_62:
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x55d7ce*/
    goto LABEL_72; /*0x55d7ce*/
  if ( LOBYTE(dword_A8B230[44].ptr_0) ) /*0x55d7da*/
  {
    referenceCount = dword_A8B230[43].referenceCount; /*0x55d7ea*/
    if ( dword_A8B230[43].abstractFlags != -1 ) /*0x55d7f9*/
    {
      p_abstractFlags = &dword_A8B230[43].abstractFlags; /*0x55d7f0*/
      v20 = Timer::GetTicks() - *p_abstractFlags; /*0x55d803*/
      if ( v20 >= referenceCount ) /*0x55d807*/
      {
LABEL_69:
        LOBYTE(dword_A8B230[44].ptr_0) = 0; /*0x55d80f*/
        ScenarioClass::ProcessIntroTimer((ScenarioClass *)v43); /*0x55d81c*/
        goto LABEL_70; /*0x55d81c*/
      }
      referenceCount -= v20; /*0x55d809*/
    }
    if ( referenceCount > 0 ) /*0x55d80d*/
      goto LABEL_70; /*0x55d80d*/
    goto LABEL_69; /*0x55d80d*/
  }
LABEL_70:
  if ( dword_A8B230[43].NeedsSaveOrLink ) /*0x55d826*/
  {
    MessageLoop(); /*0x55d830*/
    Event::Dispatch(); /*0x55d835*/
    UpdateChronosphereEffect(); /*0x55d83a*/
    (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55d847*/
    TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55d84f*/
    SyncDelay::Start((SyncDelay *)v43); /*0x55d854*/
    byte_ABCD58 = 0; /*0x55d866*/
    return byte_A8E9A0 == 0; /*0x55d877*/
  }
LABEL_72:
  v21 = dword_A8D5F8; /*0x55d878*/
  if ( (dword_A8D5F8 & 2) == 0 && !dword_A8EDA0 && byte_A8ED80 ) /*0x55d895*/
  {
    InputManager_ProcessEvents::Vtable( /*0x55d8ab*/
      (GScreenClass *)&dword_87F7E8,
      &v50.__pad_1C[8],
      &v50.__pad_1C[16],
      &v50.__pad_1C[12]);
    SyncDelayClass::ProcessNetworkSync((SyncDelayClass *)&v50.__pad_1C[8]); /*0x55d8b4*/
    if ( byte_A8B8B4 ) /*0x55d8c0*/
      DrawHUD(v43); /*0x55d8c4*/
    if ( ((unsigned __int8)dword_A8ED84 & 7) == 7 && *(_DWORD *)&dword_A8B238 == 4 ) /*0x55d8dc*/
      IPXManagerClass::ProcessQueue(&unk_A8E9C0); /*0x55d8e3*/
    MarkAllFootOccupancies(v43); /*0x55d8e8*/
    TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55d8f2*/
    v21 = dword_A8D5F8; /*0x55d8f7*/
  }
  byte_A8ED9D = 0; /*0x55d903*/
  if ( (v21 & 1) != 0 || (v21 & 2) != 0 ) /*0x55d912*/
  {
    if ( (v21 & 1) != 0 ) /*0x55d91a*/
    {
      v22 = RequestMapSnapshot((ObjectClass *)g_TacticalClass_Instance, &v50.__pad_1C[20]); /*0x55d92b*/
      Time = *v22; /*0x55d936*/
      *(_DWORD *)v50.__pad_0 = v22[1]; /*0x55d945*/
      FileClass::Write(&dword_A8D58C, &Time, 8u); /*0x55d949*/
      *(_DWORD *)&v50.__pad_6[2] = dword_A8ECC8; /*0x55d960*/
      FileClass::Write(&dword_A8D58C, &v50.__pad_6[2], 4u); /*0x55d964*/
      v23 = 0; /*0x55d969*/
      for ( *(_DWORD *)&v50.__pad_6[6] = 0; v23 < *(int *)&v50.__pad_6[2]; *(_DWORD *)&v50.__pad_6[6] += v26 ) /*0x55d973*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords( /*0x55d983*/
                           (ScriptAction *)&v50.__pad_6[14],
                           *((_DWORD **)dword_A8ECBC + v23));
        v25 = WaypointCoords[4]; /*0x55d988*/
        if ( v25 ) /*0x55d98d*/
          v26 = *(_DWORD *)WaypointCoords & 0xFFFFFF | (v25 << 24); /*0x55d9a4*/
        else
          v26 = -1; /*0x55d98f*/
        ++v23; /*0x55d9b0*/
      }
      FileClass::Write(&dword_A8D58C, &v50.__pad_6[6], 4u); /*0x55d9c5*/
      for ( i = 0; i < *(int *)&v50.__pad_6[2]; ++i ) /*0x55d9d0*/
      {
        v28 = ScriptAction::GetWaypointCoords((ScriptAction *)&v50.__pad_6[14], *((_DWORD **)dword_A8ECBC + i)); /*0x55d9e0*/
        v29 = v28[4]; /*0x55d9e5*/
        if ( v29 ) /*0x55d9ea*/
          v30 = *(_DWORD *)v28 & 0xFFFFFF | (v29 << 24); /*0x55da02*/
        else
          v30 = -1; /*0x55d9ec*/
        *(_DWORD *)v50.__pad_1C = v30; /*0x55da08*/
        FileClass::Write(&dword_A8D58C, v50.__pad_1C, 4u); /*0x55da14*/
      }
      FileClass::Write(&dword_A8D58C, &dword_ABCDFC, 4u); /*0x55da2c*/
      FileClass::Write(&dword_A8D58C, &dword_ABCE00, 4u); /*0x55da3d*/
      v21 = dword_A8D5F8; /*0x55da42*/
      dword_ABCDFC = 0; /*0x55da48*/
      dword_ABCE00 = 0; /*0x55da4e*/
    }
    if ( (v21 & 2) != 0 ) /*0x55da57*/
    {
      if ( CCFileClass::Read(&dword_A8D58C, &Time, 8) == 8 ) /*0x55da71*/
        TacticalMapClass::SetCameraPosition((TacticalClass *)g_TacticalClass_Instance, (int *)&Time); /*0x55da7e*/
      if ( CCFileClass::Read(&dword_A8D58C, &v50.__pad_6[2], 4) == 4 ) /*0x55da97*/
      {
        v31 = 0; /*0x55daa2*/
        for ( *(_DWORD *)&v50.__pad_6[6] = 0; v31 < (int)dword_A8ECC8; *(_DWORD *)&v50.__pad_6[6] += v34 ) /*0x55daaa*/
        {
          v32 = ScriptAction::GetWaypointCoords((ScriptAction *)&v50.__pad_6[14], *((_DWORD **)dword_A8ECBC + v31)); /*0x55daba*/
          v33 = v32[4]; /*0x55dabf*/
          if ( v33 ) /*0x55dac4*/
            v34 = *(_DWORD *)v32 & 0xFFFFFF | (v33 << 24); /*0x55dadb*/
          else
            v34 = -1; /*0x55dac6*/
          ++v31; /*0x55dae8*/
        }
        CCFileClass::Read(&dword_A8D58C, &v50.__pad_1C[4], 4); /*0x55dafd*/
        if ( *(_DWORD *)&v50.__pad_1C[4] != *(_DWORD *)&v50.__pad_6[6] ) /*0x55db0c*/
          MapClass::UnselectAll_ClearLimboLaunchers((MapClass *)v43); /*0x55db0e*/
        v35 = 0; /*0x55db17*/
        for ( g_MoveFeedback = 1; v35 < *(int *)&v50.__pad_6[2]; ++v35 ) /*0x55db22*/
        {
          if ( CCFileClass::Read(&dword_A8D58C, v50.__pad_1C, 4) == 4 ) /*0x55db38*/
          {
            LOBYTE(v50.m_18) = 0; /*0x55db48*/
            CheckNetworkSync((ObjectClass *)&v50.__pad_6[14], (int)&v50.__pad_1C[20], *(int *)v50.__pad_1C); /*0x55db4d*/
            Object = BuildingLoadQueue::FindObject((BuildingLoadQueue *)&v50.__pad_6[14]); /*0x55db56*/
            if ( Object ) /*0x55db5d*/
            {
              if ( *(_DWORD *)&v50.__pad_1C[4] != *(_DWORD *)&v50.__pad_6[6] ) /*0x55db69*/
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)Object + 332))(Object); /*0x55db6f*/
                g_MoveFeedback = 0; /*0x55db75*/
              }
            }
          }
        }
        g_MoveFeedback = 1; /*0x55db85*/
      }
      CCFileClass::Read(&dword_A8D58C, &dword_ABCDFC, 4); /*0x55db98*/
      CCFileClass::Read(&dword_A8D58C, &dword_ABCE00, 4); /*0x55dba9*/
      MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x55dbb4*/
      TacticalMap::Redraw((GScreenClass *)&dword_87F7E8); /*0x55dbbe*/
    }
  }
  ProcessAutoSave(&stru_8A0390); /*0x55dbc8*/
  if ( !*(_DWORD *)&dword_A8B238 && !byte_ABCE08 ) /*0x55dbe0*/
  {
    byte_ABCE08 = 1; /*0x55dbee*/
    strcpy(&v50.__pad_1C[28], (const char *)&dword_A8B230[130].abstractFlags); /*0x55dc12*/
    v51 = 0; /*0x55dc1f*/
    v37 = strrchr(&v50.__pad_1C[28], 46); /*0x55dc28*/
    if ( v37 ) /*0x55dc32*/
      *v37 = 0; /*0x55dc34*/
    strcat(&v50.__pad_1C[28], aSav); /*0x55dc5c*/
    swprintf(Buffer, (const size_t)aS, (const wchar_t *const)&dword_A8B230[141].ptr_4 + 1); /*0x55dc7d*/
    SaveScenarioClassGame_AdjustMPSaveFileName(&v50.__pad_1C[28], Buffer, 0); /*0x55dc92*/
  }
  Scenario::Update((Scenario *)&dword_87F778); /*0x55dc9e*/
  *(_DWORD *)&v50.__pad_6[10] = dword_82A030; /*0x55dcb5*/
  if ( (unsigned __int8)Mouse::IsButtonDown(dword_A8EC08) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC0C) ) /*0x55dcce*/
  {
    LOWORD(v39) = Math::RoundToInt((double)*(int *)&v50.__pad_6[10] * flt_82A034); /*0x55dd21*/
LABEL_127:
    *(_DWORD *)&v50.__pad_6[10] = v39; /*0x55dd26*/
    goto LABEL_128; /*0x55dd26*/
  }
  if ( (unsigned __int8)Mouse::IsButtonDown(dword_A8EC00) || (unsigned __int8)Mouse::IsButtonDown(dword_A8EC04) ) /*0x55dcf8*/
  {
    v38 = dword_87F8DC; /*0x55dd01*/
    if ( dword_87F8DC <= dword_87F8E0 ) /*0x55dd0e*/
      v38 = dword_87F8E0; /*0x55dd10*/
    v39 = v38 << 8; /*0x55dd12*/
    goto LABEL_127; /*0x55dd15*/
  }
LABEL_128:
  if ( (dword_ABCE14 & 0x100) != 0 ) /*0x55dd32*/
    DisplayClass::SetCoordVisible((DisplayClass *)6, &v50.__pad_6[10], 1); /*0x55dd42*/
  if ( (dword_ABCE14 & 0x1000) != 0 ) /*0x55dd4f*/
    DisplayClass::SetCoordVisible((DisplayClass *)2, &v50.__pad_6[10], 1); /*0x55dd5f*/
  if ( (dword_ABCE14 & 1) != 0 ) /*0x55dd6b*/
    DisplayClass::SetCoordVisible(0, &v50.__pad_6[10], 1); /*0x55dd7a*/
  if ( (dword_ABCE14 & 0x10) != 0 ) /*0x55dd86*/
    DisplayClass::SetCoordVisible((DisplayClass *)4, &v50.__pad_6[10], 1); /*0x55dd96*/
  FlushPlanningQueue(v43); /*0x55dd9b*/
  SyncFrameCounter((char *)&unk_A8BC60); /*0x55dda5*/
  if ( *(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4 ) /*0x55ddb7*/
  {
    if ( dword_A8B23C ) /*0x55ddc1*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C) ) /*0x55ddc5*/
      {
        v40 = *(_DWORD *)((dword_87F8DC << 11) + dword_87F924 + 10268); /*0x55dde1*/
        if ( v40 ) /*0x55dde5*/
        {
          if ( *(_DWORD *)(v40 + 304) != 1 || (*(_BYTE *)(v40 + 300) & 0x18) != 0 ) /*0x55ddf7*/
            Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x55de08*/
        }
      }
    }
  }
  v41 = timeGetTime() - dword_A8B55C; /*0x55de13*/
  if ( v41 > 1000 ) /*0x55de1e*/
    v41 = 1000; /*0x55de20*/
  *(_DWORD *)dword_A8B560 += v41; /*0x55de34*/
  ++dword_A8B564; /*0x55de3a*/
  ProcessNetworkEvents(v44); /*0x55de40*/
  FlushPlanningQueue(v45); /*0x55de45*/
  result = Event::Dispatch(); /*0x55de4a*/
  if ( byte_A83D49 || byte_A8ECD0 || byte_8B41C0 || byte_A83D48 ) /*0x55de71*/
  {
    byte_ABCD58 = 0; /*0x55dec8*/
LABEL_155:
    LOBYTE(result) = 1; /*0x55decf*/
    return result; /*0x55ded2*/
  }
  v42 = (char *)dword_A8ED84 + 1; /*0x55de7e*/
  dword_A8ED84 = (wchar_t *)((char *)dword_A8ED84 + 1); /*0x55de81*/
  if ( dword_B07784 ) /*0x55de87*/
  {
    if ( dword_B07784 < (int)v42 ) /*0x55de8d*/
    {
      UpdateMouse(v46); /*0x55de8f*/
      dword_B07784 = 0; /*0x55de94*/
    }
  }
  SyncDelay::Start((SyncDelay *)v46); /*0x55de9a*/
  ProcessExpiredPointers(v47); /*0x55de9f*/
  ExecutePlanningQueue(v48); /*0x55dea4*/
  byte_ABCD58 = 0; /*0x55deb6*/
  return byte_A8E9A0 == 0; /*0x55d861*/
}



// ==== 0x0055DEE0  SyncDelayClass::ProcessNetworkSync  this=SyncDelayClass  sig=csp ====
char __thiscall SyncDelayClass::ProcessNetworkSync(SyncDelayClass *this)
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
  ObjectClass *v12; // [esp+0h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  Chat::ProcessMessages((Chat *)this); /*0x55dee8*/
  v2 = (int)*this; /*0x55deed*/
  if ( !*(_DWORD *)this ) /*0x55def2*/
    return v2; /*0x55def2*/
  BYTE1(v2) &= ~8u; /*0x55def8*/
  v3 = v2; /*0x55defc*/
  v4 = v2; /*0x55df03*/
  BYTE1(v4) = BYTE1(v2) & 0xE8; /*0x55df05*/
  v14 = v4; /*0x55df0a*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df0e*/
  {
    v5 = *(_DWORD **)&stru_87F5F0.__pad_58[72]; /*0x55df10*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[72] && **(_DWORD **)&stru_87F5F0.__pad_58[72] == v4 ) /*0x55df1b*/
      goto LABEL_7; /*0x55df1b*/
    v5 = (_DWORD *)SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v14); /*0x55df27*/
    if ( v5 ) /*0x55df2e*/
    {
      *(_DWORD *)&stru_87F5F0.__pad_58[72] = v5; /*0x55df30*/
LABEL_7:
      v6 = v5 + 1; /*0x55df35*/
      goto LABEL_9; /*0x55df38*/
    }
  }
  v5 = *(_DWORD **)&stru_87F5F0.__pad_58[72]; /*0x55df3a*/
  v6 = (int *)&unk_B7883C; /*0x55df3f*/
LABEL_9:
  v7 = *v6; /*0x55df44*/
  if ( !*v6 ) /*0x55df44*/
  {
    v13 = v3; /*0x55df50*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df56*/
    {
      if ( v5 && *v5 == v3 ) /*0x55df5e*/
        goto LABEL_15; /*0x55df5e*/
      v5 = (_DWORD *)SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v13); /*0x55df6a*/
      if ( v5 ) /*0x55df71*/
      {
        *(_DWORD *)&stru_87F5F0.__pad_58[72] = v5; /*0x55df73*/
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
    v13 = v3; /*0x55df8e*/
    if ( *(_DWORD *)&stru_87F5F0.__pad_58[60] ) /*0x55df94*/
    {
      if ( !SyncDelay::Check((SyncDelay *)&stru_87F5F0.__pad_58[56], &v13) ) /*0x55dfa0*/
      {
        v8 = SortedVector::BinarySearch((SortedVector *)&stru_87F5F0.__pad_58[56], &v13); /*0x55dfb3*/
        if ( !v8 ) /*0x55dfba*/
          goto LABEL_22; /*0x55dfba*/
        *(_DWORD *)&stru_87F5F0.__pad_58[72] = v8; /*0x55dfbc*/
      }
      v2 = *(_DWORD *)&stru_87F5F0.__pad_58[72] + 4; /*0x55dfc7*/
      goto LABEL_23; /*0x55dfca*/
    }
LABEL_22:
    v2 = (int)&unk_B7883C; /*0x55dfcc*/
    goto LABEL_23; /*0x55dfcc*/
  }
LABEL_24:
  if ( !v7 /*0x55dffc*/
    || stru_A8EB00.?[440]
    && (v9 = (const wchar_t *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7),
        (v2 = _wcsicmp(v9, g_INI_Key_De)) != 0) )
  {
    switch ( v4 ) /*0x55e07c*/
    {
      case 27: /*0x55e07c*/
        LOBYTE(v2) = UI_Create(v12); /*0x55e07e*/
        break;
      case 9: /*0x55e07c*/
        LOBYTE(v2) = Network_Process_6ABC40(); /*0x55e094*/
        break;
      case 37: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e0ab*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e0b0*/
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] & 0xFE; /*0x55e0b2*/
        else
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] | 1; /*0x55e0c1*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e0b7*/
        break;
      case 39: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e0db*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e0e0*/
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] & 0xEF; /*0x55e0e2*/
        else
          BYTE1(v2) = g_MissionQueueFrame.waypoints[491] | 0x10; /*0x55e0f1*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e0e7*/
        break;
      case 38: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e10b*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e110*/
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] & 0xFE; /*0x55e112*/
        else
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] | 1; /*0x55e120*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e116*/
        break;
      case 40: /*0x55e07c*/
        v2 = *(_DWORD *)&g_MissionQueueFrame.waypoints[490]; /*0x55e139*/
        if ( (*(_DWORD *)this & 0x800) != 0 ) /*0x55e13e*/
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] & 0xEF; /*0x55e140*/
        else
          LOBYTE(v2) = g_MissionQueueFrame.waypoints[490] | 0x10; /*0x55e14e*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[490] = v2; /*0x55e144*/
        break;
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 24))(v7, *this) ) /*0x55e006*/
      (*(void (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 32))(v7, *this); /*0x55e015*/
    LOBYTE(v2) = (*(int (__thiscall **)(int, SyncDelayClass))(*(_DWORD *)v7 + 28))(v7, *this); /*0x55e020*/
    if ( (_BYTE)v2 ) /*0x55e025*/
    {
      v10 = 0; /*0x55e031*/
      v2 = (unsigned __int16)EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e03b*/
      if ( v2 == *this ) /*0x55e042*/
      {
        do /*0x55e070*/
        {
          EventQueue::Read(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e04e*/
          v2 = (unsigned __int16)EventQueue::Process(*(EventQueue **)&stru_87F5F0.__pad_58[296]); /*0x55e05e*/
          ++v10; /*0x55e063*/
        }
        while ( v10 < 10 && v2 == *this ); /*0x55e070*/
      }
    }
  }
  return v2; /*0x55e072*/
}



// ==== 0x0055E160  SyncDelay::Start  this=SyncDelay  sig=csp ====
signed int SyncDelay::Start(SyncDelay *this)
{
  DDraw *v1; // edi
  int v2; // ecx
  int v3; // esi
  int Ticks; // eax
  int v5; // eax
  signed int v6; // esi
  signed int v7; // eax
  int v8; // esi
  signed int v9; // eax
  signed int v10; // esi
  signed int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  int v16; // eax
  int v17; // eax
  signed int v18; // esi
  int v19; // eax
  signed int result; // eax
  signed int v21; // esi
  int v22; // ecx
  bool v23; // cc
  SyncDelayClass v24; // [esp+Ch] [ebp-18h] BYREF
  int v25; // [esp+10h] [ebp-14h] BYREF
  _DWORD v26[4]; // [esp+14h] [ebp-10h] BYREF

  v2 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e160*/
  v3 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e171*/
  if ( *(_DWORD *)stru_88732C.__pad_1C != -1 ) /*0x55e179*/
  {
    Ticks = Timer::GetTicks(); /*0x55e180*/
    v2 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e185*/
    v5 = Ticks - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e18b*/
    if ( v5 >= v3 ) /*0x55e18f*/
      v3 = 0; /*0x55e195*/
    else
      v3 -= v5; /*0x55e191*/
  }
  dword_A8E314 += v3; /*0x55e1a7*/
  if ( *(_DWORD *)&dword_A8B238 && *(_DWORD *)&dword_A8B238 != 5 ) /*0x55e1b6*/
  {
    while ( 1 ) /*0x55e1c7*/
    {
      v6 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e1c7*/
      if ( g_TacticalState != -1 ) /*0x55e1cf*/
      {
        v7 = timeGetTime() - g_TacticalState; /*0x55e1db*/
        if ( v7 >= v6 ) /*0x55e1e3*/
          goto LABEL_38; /*0x55e1e3*/
        v6 -= v7; /*0x55e1e9*/
      }
      if ( !v6 ) /*0x55e1ed*/
        goto LABEL_38; /*0x55e1ed*/
      Event::Dispatch(); /*0x55e1f3*/
      if ( !*(_DWORD *)&stru_A8EB00.?[444] && stru_A8EB00.?[412] == 1 ) /*0x55e20b*/
        break; /*0x55e20b*/
LABEL_23:
      Sleep(0); /*0x55e2ac*/
    }
    v8 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e216*/
    v24 = 0; /*0x55e21e*/
    if ( g_TacticalState != -1 ) /*0x55e222*/
    {
      v9 = timeGetTime() - g_TacticalState; /*0x55e22e*/
      if ( v9 >= v8 ) /*0x55e236*/
        goto LABEL_18; /*0x55e236*/
      v8 -= v9; /*0x55e238*/
    }
    if ( v8 > 10 ) /*0x55e23d*/
    {
      InputManager_ProcessEvents::Vtable((GScreenClass *)&stru_87F5F0.__pad_58[416], &v24, v26, &v25); /*0x55e253*/
      SyncDelayClass::ProcessNetworkSync(&v24); /*0x55e25c*/
      (*(void (__thiscall **)(LPPERSISTSTREAM))(*(_DWORD *)g_TacticalClass_Instance + 92))(g_TacticalClass_Instance); /*0x55e269*/
      TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x55e271*/
      goto LABEL_19; /*0x55e276*/
    }
LABEL_18:
    Sleep(0); /*0x55e278*/
LABEL_19:
    v10 = *(_DWORD *)&stru_88732C.m_2[2]; /*0x55e27b*/
    if ( g_TacticalState != -1 ) /*0x55e288*/
    {
      v11 = timeGetTime() - g_TacticalState; /*0x55e294*/
      if ( v11 >= v10 ) /*0x55e29c*/
        goto LABEL_38; /*0x55e29c*/
      v10 -= v11; /*0x55e2a2*/
    }
    if ( !v10 ) /*0x55e2a6*/
      goto LABEL_38; /*0x55e2a6*/
    goto LABEL_23; /*0x55e2a6*/
  }
  v12 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e2b4*/
  if ( v2 != -1 ) /*0x55e2bc*/
  {
    v13 = Timer::GetTicks() - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2c8*/
    if ( v13 >= v12 ) /*0x55e2d0*/
      goto LABEL_38; /*0x55e2d0*/
    v12 -= v13; /*0x55e2d2*/
  }
  if ( v12 ) /*0x55e2d6*/
  {
    DDraw::WaitForIdle(v1); /*0x55e2d8*/
    while ( 1 ) /*0x55e317*/
    {
      while ( 1 ) /*0x55e2e3*/
      {
        v14 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2e3*/
        v15 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e2e9*/
        if ( *(_DWORD *)stru_88732C.__pad_1C != -1 ) /*0x55e2f1*/
        {
          v16 = Timer::GetTicks(); /*0x55e2f8*/
          v14 = *(_DWORD *)stru_88732C.__pad_1C; /*0x55e2fd*/
          v17 = v16 - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e303*/
          if ( v17 >= v15 ) /*0x55e307*/
            goto LABEL_38; /*0x55e307*/
          v15 -= v17; /*0x55e309*/
        }
        if ( !v15 ) /*0x55e30d*/
          goto LABEL_38; /*0x55e30d*/
        v18 = *(_DWORD *)&stru_88732C.__pad_1C[8]; /*0x55e30f*/
        if ( v14 != -1 ) /*0x55e317*/
          break; /*0x55e317*/
LABEL_37:
        Sleep(v18); /*0x55e336*/
      }
      v19 = Timer::GetTicks() - *(_DWORD *)stru_88732C.__pad_1C; /*0x55e323*/
      if ( v19 >= v18 ) /*0x55e32b*/
      {
        v18 = 0; /*0x55e334*/
        goto LABEL_37; /*0x55e334*/
      }
      Sleep(v18 - v19); /*0x55e330*/
    }
  }
LABEL_38:
  if ( (g_MissionQueueFrame.waypoints[362] & 1) == 0 ) /*0x55e343*/
  {
    g_MissionQueueFrame.waypoints[362] |= 1u; /*0x55e34f*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[350] = Timer::GetTicks(); /*0x55e35a*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[358] = 0; /*0x55e35f*/
    atexit(nullsub_23); /*0x55e36a*/
  }
  result = *(_DWORD *)&g_MissionQueueFrame.waypoints[350]; /*0x55e372*/
  v21 = *(_DWORD *)&g_MissionQueueFrame.waypoints[358]; /*0x55e377*/
  if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[350] == -1 ) /*0x55e37f*/
  {
LABEL_43:
    if ( v21 ) /*0x55e399*/
      return result; /*0x55e399*/
    goto LABEL_44; /*0x55e399*/
  }
  result = Timer::GetTicks() - *(_DWORD *)&g_MissionQueueFrame.waypoints[350]; /*0x55e38b*/
  if ( result < v21 ) /*0x55e393*/
  {
    v21 -= result; /*0x55e395*/
    goto LABEL_43; /*0x55e395*/
  }
LABEL_44:
  v22 = *(_DWORD *)&g_MissionQueueFrame.waypoints[278] + *(_DWORD *)&g_MissionQueueFrame.waypoints[286]; /*0x55e39b*/
  v23 = (unsigned int)(*(_DWORD *)&g_MissionQueueFrame.waypoints[278] + *(_DWORD *)&g_MissionQueueFrame.waypoints[286]) <= 0x7FFFFFFF; /*0x55e3af*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[282] = *(_DWORD *)&g_MissionQueueFrame.waypoints[278]; /*0x55e3b5*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[278] = 0; /*0x55e3ba*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[286] = v22; /*0x55e3c0*/
  ++*(_DWORD *)&g_MissionQueueFrame.waypoints[290]; /*0x55e3c6*/
  if ( !v23 ) /*0x55e3cc*/
  {
    *(_DWORD *)&g_MissionQueueFrame.waypoints[286] = 0; /*0x55e3ce*/
    *(_DWORD *)&g_MissionQueueFrame.waypoints[290] = 0; /*0x55e3d4*/
  }
  result = Timer::GetTicks(); /*0x55e3de*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[350] = result; /*0x55e3ec*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[354] = v26[2]; /*0x55e3f1*/
  *(_DWORD *)&g_MissionQueueFrame.waypoints[358] = 60; /*0x55e3f7*/
  return result; /*0x55e3fd*/
}



// ==== 0x0055E410  nullsub_23  this=-  sig=ida-proto ====
void __cdecl nullsub_23()
{
  ; /*0x55e410*/
}



// ==== 0x0055E420  Chat::ProcessMessages  this=Chat  sig=csp ====
char __thiscall Chat::ProcessMessages(Chat *this)
{
  wchar_t *v2; // eax
  int v3; // edx
  unsigned __int16 *v4; // esi
  wchar_t *v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int ActiveChannel; // eax
  bool v10; // bl
  wchar_t *StringCSF; // eax
  wchar_t *v12; // eax
  int PlayerColorScheme; // eax
  int v14; // eax
  char *v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // edi
  const wchar_t *ItemPtr; // eax
  char *v20; // eax
  wchar_t *v21; // eax
  int v22; // ebx
  wchar_t *v23; // eax
  wchar_t *v24; // esi
  wchar_t *v25; // edi
  wchar_t v26; // cx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  wchar_t *v30; // esi
  wchar_t *v31; // eax
  char v32; // bl
  wchar_t *v33; // eax
  wchar_t *v34; // eax
  size_t v35; // eax
  wchar_t *v36; // esi
  const wchar_t *const *v37; // edi
  char *v38; // eax
  char *v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  wchar_t *v43; // esi
  wchar_t *v44; // eax
  const wchar_t *v45; // eax
  int nextArrayIndex; // edi
  int v47; // edx
  int v48; // esi
  int v49; // eax
  int Type; // esi
  int v51; // eax
  wchar_t *v52; // eax
  int v53; // esi
  int SendCount; // ebp
  int v55; // edi
  const wchar_t *v56; // ebx
  int ConnectionSpeed; // esi
  const wchar_t *Class; // eax
  int PlayerByID; // eax
  char *v60; // esi
  int v61; // eax
  int v62; // eax
  int v63; // esi
  const wchar_t *v64; // eax
  wchar_t *v66; // [esp-14h] [ebp-8B4h]
  wchar_t *v67; // [esp-14h] [ebp-8B4h]
  wchar_t *v68; // [esp-14h] [ebp-8B4h]
  wchar_t *v69; // [esp-14h] [ebp-8B4h]
  int v70; // [esp-10h] [ebp-8B0h]
  int v71; // [esp-10h] [ebp-8B0h]
  int v72; // [esp-10h] [ebp-8B0h]
  int v73; // [esp-10h] [ebp-8B0h]
  int v74; // [esp-10h] [ebp-8B0h]
  int v75; // [esp-10h] [ebp-8B0h]
  int v76; // [esp-8h] [ebp-8A8h]
  int v77; // [esp-8h] [ebp-8A8h]
  int v78; // [esp-8h] [ebp-8A8h]
  int v79; // [esp-8h] [ebp-8A8h]
  int v80; // [esp-8h] [ebp-8A8h]
  int v81; // [esp-8h] [ebp-8A8h]
  int v82; // [esp-8h] [ebp-8A8h]
  int v83; // [esp-8h] [ebp-8A8h]
  const wchar_t *v84; // [esp-4h] [ebp-8A4h]
  const wchar_t *v85; // [esp-4h] [ebp-8A4h]
  const wchar_t *v86; // [esp-4h] [ebp-8A4h]
  const wchar_t *v87; // [esp-4h] [ebp-8A4h]
  const wchar_t *v88; // [esp+0h] [ebp-8A0h]
  int v89; // [esp+10h] [ebp-890h] BYREF
  int v90; // [esp+14h] [ebp-88Ch]
  int v91; // [esp+18h] [ebp-888h]
  wchar_t v92[16]; // [esp+1Ch] [ebp-884h] BYREF
  wchar_t String[64]; // [esp+3Ch] [ebp-864h] BYREF
  wchar_t v94[64]; // [esp+BCh] [ebp-7E4h] BYREF
  wchar_t Destination[161]; // [esp+13Ch] [ebp-764h] BYREF
  __int16 v96; // [esp+27Eh] [ebp-622h]
  wchar_t String1[224]; // [esp+280h] [ebp-620h] BYREF
  wchar_t v98[112]; // [esp+440h] [ebp-460h] BYREF
  wchar_t Source[224]; // [esp+520h] [ebp-380h] BYREF
  wchar_t Buffer[224]; // [esp+6E0h] [ebp-1C0h] BYREF

  v2 = (wchar_t *)wcslen(&word_B730EC); /*0x55e431*/
  if ( v2 ) /*0x55e43d*/
  {
    v89 = 0; /*0x55e43f*/
    if ( (int)v2 > 0 ) /*0x55e443*/
    {
      v4 = &word_B730EC; /*0x55e445*/
      v5 = v2; /*0x55e44a*/
      do /*0x55e463*/
      {
        LOBYTE(v2) = ProcessEditControlKey((int)&stru_A8BB1C.__pad_87[189], v3, &v89, *v4++); /*0x55e45a*/
        v5 = (wchar_t *)((char *)v5 - 1); /*0x55e462*/
      }
      while ( v5 ); /*0x55e463*/
    }
    word_B730EC = 0; /*0x55e465*/
  }
  v6 = *(_DWORD *)this->__pad_0; /*0x55e46c*/
  if ( *(_DWORD *)this->__pad_0 )
  {
    if ( *(_DWORD *)&dword_A8B238 )
    {
      if ( *(_DWORD *)&dword_A8B238 != 5 )
      {
        LOBYTE(v2) = stru_A8BB1C.__pad_87[214]; /*0x55e48d*/
        if ( !stru_A8BB1C.__pad_87[214] )
        {
          if ( (v6 & 0x8000) != 0 ) /*0x55e49d*/
            return (char)v2; /*0x55e49d*/
          v7 = (unsigned __int8)Keyboard::MapKey(*(int **)&stru_87F5F0.__pad_58[296], *(_DWORD *)this->__pad_0); /*0x55e4af*/
          v8 = v7; /*0x55e4b4*/
          if ( v7 == 13 || v7 == 92 || v7 == 8 )
          {
            Buffer[0] = 0; /*0x55e4d1*/
            ActiveChannel = BufferIO::FindActiveChannel( /*0x55e4e2*/
                              (BufferIO *)&g_VisibilitySystem,
                              (int)dword_A83D4C->Object_field_0x30);
            v10 = ActiveChannel != 0; /*0x55e4e9*/
            if ( ActiveChannel ) /*0x55e4ee*/
            {
              StringCSF = GetStringCSF(aTxtBeaconMessa, 0, g_Str_File_MainLoop_CPP, 1863); /*0x55e501*/
              swprintf(Buffer, (const size_t)StringCSF, v88); /*0x55e50f*/
            }
            else
            {
              v84 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55e52a*/
              v12 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 1865); /*0x55e537*/
              swprintf(Buffer, (const size_t)v12, v84); /*0x55e545*/
              switch ( v8 ) /*0x55e550*/
              {
                case 13: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 1; /*0x55e552*/
                  break;
                case 92: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 3; /*0x55e563*/
                  break;
                case 8: /*0x55e550*/
                  *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 2; /*0x55e574*/
                  break;
              }
            }
            *(_DWORD *)this->__pad_0 = 0; /*0x55e57e*/
            PlayerColorScheme = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e58d*/
            v14 = NetworkLobby::MessageList_Append(
                    (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
                    PlayerColorScheme,
                    16454,
                    Buffer,
                    0,
                    v10 ? 10000 : -1);
            if ( v10 ) /*0x55e5bb*/
            {
              if ( v14 ) /*0x55e5bf*/
                *(_BYTE *)(v14 + 64) = 1; /*0x55e5c1*/
              stru_A8BB1C.__pad_87[213] = 0; /*0x55e5ca*/
              v15 = CharToWideString(asc_818D7C); /*0x55e5d1*/
              wcscpy(v92, (const wchar_t *)v15); /*0x55e5dc*/
              Network::SendBeacon((Network *)&g_VisibilitySystem, v92, -1, -1, 0); /*0x55e5f3*/
            }
            else
            {
              stru_A8BB1C.__pad_87[213] = 1; /*0x55e5fa*/
            }
            MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x55e607*/
            word_B730EC = 0; /*0x55e60c*/
          }
        }
      }
    }
    v16 = *(_DWORD *)this->__pad_0; /*0x55e615*/
    v17 = ProcessEditControlKey((int)&stru_A8BB1C.__pad_87[189], v6, (int *)this->__pad_0, 0); /*0x55e61f*/
    v18 = v17; /*0x55e624*/
    v89 = v17; /*0x55e629*/
    if ( v17 == 1 ) /*0x55e62d*/
    {
      if ( !*(_DWORD *)&dword_A8B238 ) /*0x55e635*/
        goto LABEL_31; /*0x55e635*/
    }
    else
    {
      if ( v17 != 2 || !*(_DWORD *)&dword_A8B238 ) /*0x55e699*/
        goto LABEL_31; /*0x55e699*/
      if ( v16 == 27 ) /*0x55e69e*/
      {
        MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55e6a6*/
        *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55e6ab*/
LABEL_31:
        v2 = (wchar_t *)BufferIO::FindActiveChannel( /*0x55e642*/
                          (BufferIO *)&g_VisibilitySystem,
                          (int)dword_A83D4C->Object_field_0x30);
        if ( v2 && v16 && v18 == 1 || v18 == 2 || v18 == 4 || dword_B7356C ) /*0x55e677*/
        {
          if ( v16 == 27 ) /*0x55e680*/
          {
            LOBYTE(v2) = Network::SendBeacon((Network *)&g_VisibilitySystem, 0, -1, -1, 1); /*0x55e689*/
          }
          else
          {
            ItemPtr = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e6bd*/
            wcsncpy(Destination, ItemPtr, 0xA2u); /*0x55e6cb*/
            v96 = 0; /*0x55e6e2*/
            wcsncat(Destination, WideCharStr, 0xA2u); /*0x55e6ea*/
            v96 = 0; /*0x55e6f7*/
            v20 = CharToWideString(asc_818D7C); /*0x55e704*/
            wcsncat(Destination, (const wchar_t *)v20, 0xA2u); /*0x55e712*/
            v96 = 0; /*0x55e721*/
            LOBYTE(v2) = Network::SendBeacon((Network *)&g_VisibilitySystem, Destination, -1, -1, 0); /*0x55e734*/
          }
        }
        if ( v18 != 3 && v18 != 4 ) /*0x55e740*/
          goto LABEL_148; /*0x55e740*/
        LOBYTE(v2) = dword_A8B238; /*0x55e746*/
        if ( !*(_DWORD *)&dword_A8B238 || *(_DWORD *)&dword_A8B238 == 5 ) /*0x55e756*/
          goto LABEL_148; /*0x55e756*/
        if ( *(_DWORD *)&dword_A8B238 == 2 || *(_DWORD *)&dword_A8B238 == 1 ) /*0x55e768*/
        {
          v63 = dword_A8EA74; /*0x55f115*/
          *(_DWORD *)dword_A8EA74 = 104; /*0x55f124*/
          CopyWideToChar((_BYTE *)(v63 + 4), (char *)*dword_A8DA78, -1); /*0x55f137*/
          *(_BYTE *)(v63 + 24) = dword_A8B394; /*0x55f145*/
          if ( v18 == 3 ) /*0x55f148*/
          {
            v64 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55f14f*/
            wcscpy((wchar_t *)(v63 + 25), v64); /*0x55f159*/
          }
          else
          {
            wcscpy((wchar_t *)(v63 + 25), &word_A8BDCC); /*0x55f170*/
            word_A8BDCC = 0; /*0x55f178*/
          }
          Stream::WriteBlock((int *)&unk_A8EA70, dword_A8EA74, 250, 1); /*0x55f192*/
          wcscpy(MEMORY[0xA8D112], (const wchar_t *)(v63 + 25)); /*0x55f1a9*/
          goto LABEL_147; /*0x55f1a9*/
        }
        if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 ) /*0x55e775*/
        {
LABEL_147:
          LOBYTE(v2) = MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x55f1b1*/
LABEL_148:
          if ( v18 == 3 ) /*0x55f1c0*/
            *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55f1c2*/
          return (char)v2; /*0x55f1c2*/
        }
        if ( BufferIO::FindActiveChannel((BufferIO *)&g_VisibilitySystem, (int)dword_A83D4C->Object_field_0x30) ) /*0x55e78a*/
        {
          v21 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e79e*/
          Network::SendBeacon((Network *)&g_VisibilitySystem, v21, -1, -1, 1); /*0x55e7a9*/
          goto LABEL_147; /*0x55e7ae*/
        }
        if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x55e7b9*/
        {
          if ( v18 == 3 ) /*0x55e7c2*/
          {
            v85 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e7ce*/
            wcscpy(String1, v85); /*0x55e7d7*/
          }
          else
          {
            wcscpy(String1, &word_A8BDCC); /*0x55e7ea*/
          }
          v2 = HandlePageWOL((ObjectClass *)String1); /*0x55e7f9*/
          if ( v2 ) /*0x55e800*/
          {
            if ( v2 != (wchar_t *)1 ) /*0x55e809*/
              goto LABEL_103; /*0x55e809*/
            v22 = 0; /*0x55e820*/
            v23 = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, g_Str_File_MainLoop_CPP, 2051); /*0x55e822*/
            wcscpy(String, v23); /*0x55e82d*/
            v24 = &String1[wcslen(String)]; /*0x55e83c*/
            if ( *v24 ) /*0x55e846*/
            {
              do /*0x55e862*/
              {
                if ( wcsncmp(v24, asc_82083C, 1u) ) /*0x55e853*/
                  break; /*0x55e85d*/
                ++v24; /*0x55e85f*/
              }
              while ( *v24 ); /*0x55e862*/
              if ( *v24 ) /*0x55e867*/
              {
                v25 = v92; /*0x55e86d*/
                do /*0x55e897*/
                {
                  if ( !wcsncmp(v24, asc_82083C, 1u) ) /*0x55e879*/
                    break; /*0x55e883*/
                  if ( v22 > 10 ) /*0x55e888*/
                    break; /*0x55e888*/
                  v26 = *v24++; /*0x55e88a*/
                  *v25 = v26; /*0x55e890*/
                  ++v22; /*0x55e893*/
                  ++v25; /*0x55e894*/
                }
                while ( *v24 ); /*0x55e897*/
              }
            }
            for ( v92[v22] = 0; *v24; ++v24 ) /*0x55e8a4*/
            {
              if ( wcsncmp(v24, asc_82083C, 1u) ) /*0x55e8b2*/
                break; /*0x55e8bc*/
            }
            if ( wcslen(v92) ) /*0x55e8cb*/
            {
              if ( wcslen(v24) ) /*0x55e927*/
              {
                swprintf(v94, (const size_t)&off_82A0F8, (const wchar_t *const)*dword_A8DA78, v92); /*0x55e99a*/
                LOWORD(v29) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e9b6*/
                v78 = v29; /*0x55e9bb*/
                v72 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e9de*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e9e7*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               v94,
                               dword_A8B394,
                               v24,
                               v72,
                               16454,
                               v78,
                               0);
              }
              else
              {
                LOWORD(v28) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e946*/
                v77 = v28; /*0x55e94b*/
                v71 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e968*/
                v67 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_MainLoop_CPP, 2072); /*0x55e978*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e97d*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               0,
                               -1,
                               v67,
                               v71,
                               16454,
                               v77,
                               0);
              }
            }
            else
            {
              LOWORD(v27) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55e8e9*/
              v76 = v27; /*0x55e8f4*/
              v70 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55e90c*/
              v66 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, g_Str_File_MainLoop_CPP, 2067); /*0x55e91c*/
              LOBYTE(v2) = MessageListClass::AddMessage( /*0x55e921*/
                             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                             0,
                             -1,
                             v66,
                             v70,
                             16454,
                             v76,
                             0);
            }
            if ( v89 != 4 ) /*0x55e9f0*/
              goto LABEL_103; /*0x55e9f0*/
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55e9fb*/
            v30 = v2; /*0x55ea00*/
            if ( !v2 ) /*0x55ea04*/
              goto LABEL_103; /*0x55ea04*/
            v86 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55ea1b*/
            v31 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 2091); /*0x55ea26*/
            swprintf(v98, (const size_t)v31, v86); /*0x55ea34*/
            swprintf(Source, (const size_t)&off_82A0E8, String, v92, v30); /*0x55ea51*/
            Chat::RefreshMessagePositions((Chat *)&stru_A8BB1C.__pad_87[189]); /*0x55ea5e*/
            NetworkLobby::MessageList_Append( /*0x55ea7f*/
              (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
              dword_A8B394,
              16454,
              v98,
              0,
              -1);
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ea89*/
            if ( !v2 ) /*0x55ea90*/
              goto LABEL_103; /*0x55ea90*/
            goto LABEL_102; /*0x55ea90*/
          }
          v2 = (wchar_t *)HandleOnlineWOL((ObjectClass *)String1); /*0x55eaaa*/
          if ( v2 ) /*0x55eab1*/
          {
            word_A8BDCC = 0; /*0x55eab5*/
            return (char)v2; /*0x55eac4*/
          }
          v2 = HandleReplyWOL((ObjectClass *)String1); /*0x55eacc*/
          if ( v2 ) /*0x55ead3*/
          {
            if ( v2 != (wchar_t *)1 ) /*0x55eadc*/
              goto LABEL_103; /*0x55eadc*/
            v32 = 0; /*0x55eaf3*/
            v33 = GetStringCSF(g_Str_TXT_REPLY_COMMAND, 0, g_Str_File_MainLoop_CPP, 2121); /*0x55eaf5*/
            wcscpy(String, v33); /*0x55eb00*/
            v34 = GetStringCSF(g_Str_TXT_REPLY_COMMAND_SHORT, 0, g_Str_File_MainLoop_CPP, 2122); /*0x55eb19*/
            wcscpy(v94, v34); /*0x55eb27*/
            v35 = wcslen(String); /*0x55eb31*/
            if ( !wcsncmp(String1, String, v35) ) /*0x55eb44*/
            {
              v36 = &String1[wcslen(String)]; /*0x55eb5d*/
            }
            else
            {
              v36 = &String1[wcslen(v94)]; /*0x55eb76*/
              v32 = 1; /*0x55eb7d*/
            }
            for ( ; *v36; ++v36 ) /*0x55eb7f*/
            {
              if ( wcsncmp(v36, asc_82083C, 1u) ) /*0x55eb8d*/
                break; /*0x55eb97*/
            }
            v37 = (const wchar_t *const *)dword_A8DA78; /*0x55eba1*/
            v38 = CharToWideString(byte_B77E30); /*0x55ebac*/
            swprintf(v98, (const size_t)&off_82A0F8, *v37, v38); /*0x55ebc2*/
            v39 = CharToWideString(byte_B77E30); /*0x55ebcf*/
            if ( wcslen((const wchar_t *)v39) ) /*0x55ebd5*/
            {
              if ( wcslen(v36) ) /*0x55ec34*/
              {
                LOWORD(v41) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ec54*/
                v80 = v41; /*0x55ec59*/
                v74 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ec7c*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ec80*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               v98,
                               dword_A8B394,
                               v36,
                               v74,
                               16454,
                               v80,
                               0);
              }
              else
              {
                LOWORD(v42) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ec93*/
                v81 = v42; /*0x55ec9e*/
                v75 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ecb6*/
                v69 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_MainLoop_CPP, 2149); /*0x55eccc*/
                LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ecd5*/
                               (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                               0,
                               dword_A8B394,
                               v69,
                               v75,
                               16454,
                               v81,
                               0);
              }
            }
            else
            {
              LOWORD(v40) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ebf4*/
              v79 = v40; /*0x55ebf9*/
              v73 = SessionClass::GetPlayerColorScheme(dword_A8B394); /*0x55ec16*/
              v68 = GetStringCSF(aTxtNameNotSpec, 0, g_Str_File_MainLoop_CPP, 2136); /*0x55ec2c*/
              LOBYTE(v2) = MessageListClass::AddMessage( /*0x55ec2e*/
                             (MessageListClass *)&stru_A8BB1C.__pad_87[189],
                             0,
                             dword_A8B394,
                             v68,
                             v73,
                             16454,
                             v79,
                             0);
            }
            if ( v89 != 4 ) /*0x55ecde*/
              goto LABEL_103; /*0x55ecde*/
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ece9*/
            v43 = v2; /*0x55ecee*/
            if ( !v2 ) /*0x55ecf2*/
              goto LABEL_103; /*0x55ecf2*/
            v87 = (const wchar_t *)&dword_A83D4C[134].__pad_38[50]; /*0x55ed09*/
            v44 = GetStringCSF(g_Str_TXT_FROM, 0, g_Str_File_MainLoop_CPP, 2161); /*0x55ed14*/
            swprintf(Destination, (const size_t)v44, v87); /*0x55ed22*/
            if ( v32 ) /*0x55ed2d*/
              swprintf(Source, (const size_t)&off_826960, v94, v43); /*0x55ed44*/
            else
              swprintf(Source, (const size_t)&off_826960, String, v43); /*0x55ed58*/
            Chat::RefreshMessagePositions((Chat *)&stru_A8BB1C.__pad_87[189]); /*0x55ed65*/
            NetworkLobby::MessageList_Append( /*0x55ed87*/
              (NetworkLobby *)&stru_A8BB1C.__pad_87[189],
              dword_A8B394,
              16454,
              Destination,
              0,
              -1);
            v2 = (wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ed91*/
            if ( !v2 ) /*0x55ed98*/
              goto LABEL_103; /*0x55ed98*/
LABEL_102:
            LOBYTE(v2) = (unsigned __int8)wcscat(v2, Source); /*0x55ed9a*/
LABEL_103:
            word_A8BDCC = 0; /*0x55edab*/
            return (char)v2; /*0x55edbe*/
          }
        }
        *(_DWORD *)&stru_A8D600.__pad_34[4] = 12; /*0x55edc8*/
        strcpy(&stru_A8D600.__pad_34[8], ToWideStringChar((char *)*dword_A8DA78)); /*0x55edf7*/
        *(_DWORD *)&stru_A8D600.__pad_87[193] = dword_A8B394; /*0x55ee0a*/
        *(_DWORD *)&stru_A8D600.__pad_87[197] = WideString::Hash((wchar_t *)&stru_A8D600.Network_field_0x10); /*0x55ee14*/
        stru_A8D600.__pad_64[3] = 0; /*0x55ee20*/
        if ( v89 == 3 ) /*0x55ee27*/
        {
          v45 = (const wchar_t *)PriQueue::GetItemPtr((PriQueue *)&stru_A8BB1C.__pad_87[189]); /*0x55ee2e*/
          wcscpy((wchar_t *)&stru_A8D600.__pad_64[4], v45); /*0x55ee39*/
        }
        else if ( v89 == 4 ) /*0x55ee45*/
        {
          wcscpy((wchar_t *)&stru_A8D600.__pad_64[4], &word_A8BDCC); /*0x55ee51*/
          word_A8BDCC = 0; /*0x55ee59*/
        }
        nextArrayIndex = stru_A80220.?; /*0x55ee65*/
        v91 = stru_A80220.?; /*0x55ee6d*/
        if ( dword_A8B538[0] ) /*0x55ee71*/
        {
          v47 = *(_DWORD *)&g_MissionQueueFrame.waypoints[494]; /*0x55ee77*/
          if ( *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 1 /*0x55ee85*/
            || *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2 )
          {
            v48 = 0; /*0x55ee8b*/
            if ( stru_A80220.? > 0 ) /*0x55ee8f*/
            {
              while ( 1 ) /*0x55eea3*/
              {
                v49 = *((_DWORD *)stru_A80220.? + v48); /*0x55eea3*/
                if ( v49 /*0x55eee3*/
                  && *(_BYTE *)(*(_DWORD *)(v49 + 52) + 421)
                  && (!byte_A8D108[v48] && v47 == 1
                   || !(unsigned __int8)HouseClass::IsAlliedWith(
                                          *((#375 **)stru_A80220.? + *(_DWORD *)(*dword_A8DA78 + 111)),
                                          *((#375 **)stru_A80220.? + v48))
                   && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2) )
                {
                  break; /*0x55eee3*/
                }
                if ( ++v48 >= nextArrayIndex ) /*0x55eee8*/
                  goto LABEL_123; /*0x55eee8*/
                v47 = *(_DWORD *)&g_MissionQueueFrame.waypoints[494]; /*0x55ee97*/
              }
              Type = BuildingAnim::GetType(); /*0x55eef1*/
              LOWORD(v51) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55ef06*/
              v82 = v51; /*0x55ef0b*/
              v52 = GetStringCSF(aTxtObserverCan, 0, g_Str_File_MainLoop_CPP, 2234); /*0x55ef20*/
              MessageListClass::AddMessage((MessageListClass *)&stru_A8BB1C.__pad_87[189], 0, 0, v52, Type, 22, v82, 1); /*0x55ef2d*/
              *(_DWORD *)&g_MissionQueueFrame.waypoints[494] = 0; /*0x55ef32*/
            }
          }
        }
LABEL_123:
        v90 = 0; /*0x55ef38*/
        if ( nextArrayIndex > 0 ) /*0x55ef3e*/
        {
          do /*0x55f04e*/
          {
            v53 = *((_DWORD *)stru_A80220.? + v90); /*0x55ef51*/
            if ( v53 /*0x55efa9*/
              && *(_BYTE *)(*(_DWORD *)(v53 + 52) + 421)
              && (byte_A8D108[v90] && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 1
               || (unsigned __int8)HouseClass::IsAlliedWith(
                                     *((#375 **)stru_A80220.? + *(_DWORD *)(*dword_A8DA78 + 111)),
                                     *((#375 **)stru_A80220.? + v90))
               && *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 2
               || *(_DWORD *)&g_MissionQueueFrame.waypoints[494] == 3) )
            {
              SendCount = Network::GetSendCount(&unk_A8E9C0); /*0x55efb9*/
              v55 = 0; /*0x55efbb*/
              if ( SendCount > 0 ) /*0x55efbf*/
              {
                v56 = (const wchar_t *)(v53 + 90154); /*0x55efc1*/
                do /*0x55f03d*/
                {
                  ConnectionSpeed = Network::GetConnectionSpeed(&unk_A8E9C0, v55); /*0x55efd2*/
                  Class = (const wchar_t *)Network::GetClass((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x55efda*/
                  if ( !wcscmp(v56, Class) ) /*0x55efe1*/
                  {
                    PlayerByID = Network::FindPlayerByID((Network *)&unk_A8E9C0, ConnectionSpeed); /*0x55eff3*/
                    if ( byte_A8DBA0 ) /*0x55f000*/
                    {
                      stru_A8D600.__pad_64[3] |= Factory::GetLinkedIndex( /*0x55f00d*/
                                                   (Factory *)&stru_B052C0.__pad_0[16],
                                                   ConnectionSpeed);
                    }
                    else
                    {
                      Network::SendMessage(&unk_A8E9C0.Socket, (int)&stru_A8D600.__pad_34[4], 455, 1, PlayerByID, 0, 0); /*0x55f02b*/
                      Network::ReceiveLoop(&unk_A8E9C0); /*0x55f035*/
                    }
                  }
                  ++v55; /*0x55f03a*/
                }
                while ( v55 < SendCount ); /*0x55f03d*/
              }
            }
            ++v90; /*0x55f04a*/
          }
          while ( v90 < v91 ); /*0x55f04e*/
        }
        if ( byte_A8DBA0 && stru_A8D600.__pad_64[3] ) /*0x55f066*/
        {
          Debug::Log(); /*0x55f072*/
          Network::SendMessage(&unk_A8E9C0.Socket, (int)&stru_A8D600.__pad_34[4], 455, 1, *dword_A8DA78 + 40, 0, 0); /*0x55f099*/
          Network::ReceiveLoop(&unk_A8E9C0); /*0x55f0a3*/
        }
        v60 = CharToWideString(&stru_A8D600.__pad_34[8]); /*0x55f0b8*/
        LOWORD(v61) = Math::RoundToInt(*(double *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 5312) * 900.0); /*0x55f0c7*/
        v83 = v61; /*0x55f0d2*/
        v62 = SessionClass::GetPlayerColorScheme(*(unsigned int *)&stru_A8D600.__pad_87[193]); /*0x55f0de*/
        MessageListClass::AddMessage( /*0x55f0f5*/
          (MessageListClass *)&stru_A8BB1C.__pad_87[189],
          (wchar_t *)v60,
          *(int *)&stru_A8D600.__pad_87[193],
          (wchar_t *)&stru_A8D600.__pad_64[4],
          v62,
          16454,
          v83,
          0);
        wcscpy(MEMORY[0xA8D112], (const wchar_t *)&stru_A8D600.__pad_64[4]); /*0x55f104*/
        v18 = v89; /*0x55f109*/
        goto LABEL_147; /*0x55f110*/
      }
    }
    MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 0); /*0x55e63d*/
    goto LABEL_31; /*0x55e63d*/
  }
  return (char)v2; /*0x55eab3*/
}


// ==== 0x0055F1E0  ObjectClass::DrawHUD  this=ObjectClass  sig=csp ====
int *DrawHUD(ObjectClass *this)
{
  int *result; // eax
  int Type; // eax
  AudioStream *v3; // esi
  int v4; // eax
  int BuildingAnimByName; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  unsigned int QueueSize; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // [esp-14h] [ebp-264h]
  int v25; // [esp-10h] [ebp-260h]
  int v26; // [esp-10h] [ebp-260h]
  int v27; // [esp-Ch] [ebp-25Ch]
  int v28; // [esp-Ch] [ebp-25Ch]
  int v29; // [esp-Ch] [ebp-25Ch]
  int v30; // [esp-8h] [ebp-258h]
  int v31; // [esp-8h] [ebp-258h]
  int v32; // [esp-8h] [ebp-258h]
  int v33; // [esp-4h] [ebp-254h]
  int v34; // [esp-4h] [ebp-254h]
  int v35; // [esp-4h] [ebp-254h]
  int v36; // [esp+0h] [ebp-250h]
  int v37; // [esp+0h] [ebp-250h]
  int v38; // [esp+0h] [ebp-250h]
  int v39; // [esp+0h] [ebp-250h]
  int v40; // [esp+4h] [ebp-24Ch]
  int v41; // [esp+4h] [ebp-24Ch]
  int v42; // [esp+4h] [ebp-24Ch]
  int v43; // [esp+4h] [ebp-24Ch]
  int v44; // [esp+4h] [ebp-24Ch]
  int v45; // [esp+8h] [ebp-248h] BYREF
  int v46; // [esp+Ch] [ebp-244h] BYREF
  wchar_t Format[2]; // [esp+10h] [ebp-240h] BYREF
  int v48; // [esp+14h] [ebp-23Ch] BYREF
  int v49; // [esp+18h] [ebp-238h] BYREF
  int v50; // [esp+1Ch] [ebp-234h] BYREF
  int v51; // [esp+20h] [ebp-230h] BYREF
  int v52; // [esp+24h] [ebp-22Ch] BYREF
  int v53; // [esp+28h] [ebp-228h] BYREF
  int v54; // [esp+2Ch] [ebp-224h] BYREF
  int v55; // [esp+30h] [ebp-220h] BYREF
  wchar_t v56; // [esp+34h] [ebp-21Ch] BYREF
  wchar_t v57[2]; // [esp+38h] [ebp-218h] BYREF
  wchar_t v58[2]; // [esp+3Ch] [ebp-214h] BYREF
  wchar_t v59[2]; // [esp+40h] [ebp-210h] BYREF
  wchar_t v60[2]; // [esp+44h] [ebp-20Ch] BYREF
  wchar_t v61[4]; // [esp+48h] [ebp-208h] BYREF
  wchar_t Buffer[256]; // [esp+50h] [ebp-200h] BYREF

  result = (int *)dword_8373A0; /*0x55f1e0*/
  if ( dword_8373A0 != -1 ) /*0x55f1f2*/
  {
    *(double *)v61 = (double)(unsigned int)dword_8373A0 * 0.001; /*0x55f20a*/
    Type = BuildingAnim::GetType(); /*0x55f20e*/
    v53 = 100; /*0x55f225*/
    v54 = 0; /*0x55f23a*/
    *(_DWORD *)v57 = 0; /*0x55f23e*/
    *(_DWORD *)v58 = 0; /*0x55f242*/
    wcscpy(v59, L"Ǵ"); /*0x55f246*/
    wcscpy(v60, L"\x0F"); /*0x55f24e*/
    result = TextRenderer::DrawText( /*0x55f278*/
               &v55,
               (size_t)a2f,
               (int)DSurface_Composite,
               v57,
               (int)&v53,
               *(_DWORD *)(*(_DWORD *)&stru_B054D0.m_1[3] + 4 * Type),
               31,
               (int)wcscpy(Format, L"\x06"),
               *(_DWORD *)v61,
               *(_DWORD *)&v61[2],
               &dword_A8B230[130].abstractFlags);
  }
  if ( byte_A8B8B5 ) /*0x55f286*/
  {
    result = *(int **)&dword_A8B238; /*0x55f28c*/
    if ( *(_DWORD *)&dword_A8B238 > 2u ) /*0x55f293*/
    {
      v3 = DSurface_Composite; /*0x55f2b1*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x55f2b9*/
      v4 = *(_DWORD *)v3->__pad_0; /*0x55f2bc*/
      *(_DWORD *)v57 = 0; /*0x55f2c6*/
      wcscpy(v58, L"Ĭ"); /*0x55f2ca*/
      wcscpy(v59, L"ɿ"); /*0x55f2d2*/
      wcscpy(v60, L"æ"); /*0x55f2da*/
      (*(void (__thiscall **)(AudioStream *, wchar_t *, _DWORD))(v4 + 20))(v3, v57, 0); /*0x55f2e2*/
      swprintf(Buffer, (const size_t)&off_82A224, *(const wchar_t *const *)&stru_A8EB00.?[416]); /*0x55f2f6*/
      v53 = 0; /*0x55f308*/
      v54 = 302; /*0x55f30f*/
      BuildingAnimByName = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f317*/
      v6 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f32b*/
                                                                                              + 120))(
                       v3,
                       v57,
                       &v53,
                       BuildingAnimByName,
                       0,
                       25);
      TextRenderer::DrawText(&v54, (size_t)&v61[2], (int)v3, v6, v46, *(int *)Format, v48, v49); /*0x55f33a*/
      swprintf(&v61[2], (const size_t)&off_82A210, *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[282]); /*0x55f34f*/
      v52 = 0; /*0x55f361*/
      v53 = 312; /*0x55f368*/
      v7 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f370*/
      v8 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, wchar_t *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f384*/
                                                                                              + 120))(
                       v3,
                       &v56,
                       &v52,
                       v7,
                       0,
                       25);
      TextRenderer::DrawText(&v53, (size_t)v61, (int)v3, v8, v45, v46, *(int *)Format, v48); /*0x55f393*/
      swprintf(v61, (const size_t)&off_82A1F4, dword_A8B550); /*0x55f3a9*/
      v51 = 0; /*0x55f3b1*/
      v52 = 322; /*0x55f3b5*/
      v9 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f3ca*/
      v10 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f3de*/
                        v3,
                        &v55,
                        &v51,
                        v9,
                        0,
                        25);
      TextRenderer::DrawText(&v52, (size_t)v60, (int)v3, v10, v40, v45, v46, *(int *)Format); /*0x55f3ed*/
      QueueSize = IPXManagerClass::GetQueueSize(&unk_A8E9C0); /*0x55f3fa*/
      swprintf(v60, (const size_t)&off_82A1D0, (const wchar_t *const)((int)(1000 * QueueSize) / 60)); /*0x55f429*/
      v50 = 0; /*0x55f43b*/
      v51 = 332; /*0x55f442*/
      v12 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f44a*/
      v13 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, wchar_t *))(*(_DWORD *)v3->__pad_0 /*0x55f45e*/
                                                                                                 + 120))(
                        v3,
                        &v54,
                        &v50,
                        v12,
                        0,
                        wcscpy(Format, L"\x19"));
      TextRenderer::DrawText(&v51, (size_t)v59, (int)v3, v13, v36, v41, v45, v46); /*0x55f46d*/
      swprintf(v59, (const size_t)&off_82A1B4, dword_A8B558); /*0x55f483*/
      v49 = 0; /*0x55f495*/
      v50 = 342; /*0x55f49c*/
      v14 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f4a4*/
      v15 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f4b8*/
                        v3,
                        &v53,
                        &v49,
                        v14,
                        0,
                        25);
      TextRenderer::DrawText(&v50, (size_t)v58, (int)v3, v15, v33, v37, v42, v45); /*0x55f4c7*/
      swprintf(v58, (const size_t)&off_828788, *(const wchar_t *const *)(*dword_A8DA78 + 115)); /*0x55f4e1*/
      v48 = 0; /*0x55f4f3*/
      v49 = 352; /*0x55f4fa*/
      v16 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f502*/
      v17 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f516*/
                        v3,
                        &v52,
                        &v48,
                        v16,
                        0,
                        25);
      TextRenderer::DrawText(&v49, (size_t)v57, (int)v3, v17, v30, v34, v38, v43); /*0x55f525*/
      swprintf(v57, (const size_t)&off_828708, (const wchar_t *const)(1000 * dword_A8E2D4 / 0x3Cu)); /*0x55f550*/
      *(_DWORD *)Format = 0; /*0x55f562*/
      v48 = 362; /*0x55f569*/
      v18 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f571*/
      v19 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, wchar_t *, int, _DWORD, int))(*(_DWORD *)v3->__pad_0 /*0x55f585*/
                                                                                               + 120))(
                        v3,
                        &v51,
                        Format,
                        v18,
                        0,
                        25);
      TextRenderer::DrawText(&v48, (size_t)&v56, (int)v3, v19, v27, v31, v35, v39); /*0x55f594*/
      swprintf( /*0x55f5c2*/
        &v56,
        (const size_t)&off_82A1A0,
        (const wchar_t *const)g_TacticalState,
        *(_DWORD *)stru_88732C.__pad_0,
        *(_DWORD *)&stru_88732C.m_2[2]);
      v46 = 0; /*0x55f5d4*/
      wcscpy(Format, L"Ŵ"); /*0x55f5db*/
      v20 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f5e3*/
      v21 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f5f7*/
                        v3,
                        &v50,
                        &v46,
                        v20);
      TextRenderer::DrawText((int *)Format, (size_t)&v55, (int)v3, v21, v25, v28, v32, 0); /*0x55f606*/
      swprintf( /*0x55f61b*/
        (wchar_t *const)&v55,
        (const size_t)&off_82A18C,
        *(const wchar_t *const *)&g_MissionQueueFrame.waypoints[474]);
      v45 = 0; /*0x55f62d*/
      v46 = 382; /*0x55f634*/
      v22 = FindBuildingAnimByName(&stru_822420.TrailerAnim, 1); /*0x55f63c*/
      v23 = (_DWORD *)(*(int (__thiscall **)(AudioStream *, int *, int *, int))(*(_DWORD *)v3->__pad_0 + 120))( /*0x55f650*/
                        v3,
                        &v49,
                        &v45,
                        v22);
      TextRenderer::DrawText(&v46, (size_t)&v54, (int)v3, v23, v24, v26, v29, 0); /*0x55f65f*/
      ScoreBoard::Render((char *)&unk_A8E9C0); /*0x55f66c*/
      return (*(int *(__thiscall **)(void *, int, int, int, int, int, _DWORD, int, int, int))(*(_DWORD *)stru_887598.lineTrailer /*0x55f679*/
                                                                                            + 16))(
               stru_887598.lineTrailer,
               25,
               25,
               v44,
               v45,
               v46,
               *(_DWORD *)Format,
               v48,
               v49,
               v50);
    }
  }
  return result; /*0x55f67c*/
}



// ==== 0x0055F690  ObjectClass::CheckNetworkSync  this=ObjectClass  sig=csp ====
int __thiscall CheckNetworkSync(ObjectClass *this, int a2, int a3)
{
  this->AbstractClass = (void *)(a3 & 0xFFFFFF); /*0x55f69f*/
  LOBYTE(this->?) = HIBYTE(a3); /*0x55f6a5*/
  *(_DWORD *)a2 = this->AbstractClass; /*0x55f6ac*/
  *(_BYTE *)(a2 + 4) = this->?; /*0x55f6b2*/
  return a2; /*0x55f6b1*/
}



// ==== 0x0055F6C0  SyncDelay::Check  this=SyncDelay  sig=csp ====
bool __thiscall SyncDelay::Check(SyncDelay *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)this->q010; /*0x55f6c0*/
  return v2 && *v2 == *a2; /*0x55f6d3*/
}



// ==== 0x0055F6E0  SortedVector::BinarySearch  this=SortedVector  sig=csp ====
int __thiscall SortedVector::BinarySearch(SortedVector *this, int *a2)
{
  int result; // eax
  SortedVector v4; // edi
  int v5; // ebx
  int v6; // ecx
  int v7; // esi

  result = *((_DWORD *)this + 1); /*0x55f6e3*/
  if ( result ) /*0x55f6e8*/
  {
    if ( !*((_BYTE *)this + 12) ) /*0x55f6ee*/
    {
      qsort(*(void **)this, result, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x55f700*/
      *((_DWORD *)this + 4) = 0; /*0x55f708*/
      *((_BYTE *)this + 12) = 1; /*0x55f70f*/
    }
    v4 = *this; /*0x55f719*/
    v5 = *a2; /*0x55f71b*/
    v6 = *((_DWORD *)this + 1); /*0x55f71d*/
    if ( v6 <= 0 ) /*0x55f722*/
      return 0; /*0x55f74e*/
    while ( 1 ) /*0x55f72b*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)&v4 + 8 * (v6 / 2)); /*0x55f72b*/
      if ( v7 <= v5 ) /*0x55f733*/
      {
        if ( v7 == v5 ) /*0x55f739*/
          return *(_DWORD *)&v4 + 8 * (v6 / 2); /*0x55f753*/
        *(_DWORD *)&v4 += 8 * (v6 / 2) + 8; /*0x55f73b*/
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
  dword_ABCE28 = 0; /*0x55f762*/
  dword_ABCE2C = 0; /*0x55f767*/
  dword_ABCE30 = 0; /*0x55f76c*/
  dword_ABCE34 = 0; /*0x55f771*/
  return 0; /*0x55f776*/
}



// ==== 0x0055F780  sub_55F780  this=-  sig=ida-proto ====
void sub_55F780()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x55f78c*/
  dbl_ABCE40 = Math::Sqrt(v0 + v0); /*0x55f79e*/
}



// ==== 0x0055F7B0  sub_55F7B0  this=-  sig=ida-proto ====
void sub_55F7B0()
{
  dbl_ABCF48 = dbl_ABCE40 / 60.0; /*0x55f7bc*/
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
  dbl_ABCE48 = 0.0174532925199433 * 60.0; /*0x55f81c*/
}



// ==== 0x0055F830  sub_55F830  this=-  sig=ida-proto ====
void sub_55F830()
{
  dbl_ABCE20 = 0.0174532925199433 * 90.0; /*0x55f83c*/
}



// ==== 0x0055F850  sub_55F850  this=-  sig=ida-proto ====
__int64 sub_55F850()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABCE20 - dbl_ABCE48); /*0x55f862*/
  result = Math::RoundToInt(v0 * dbl_ABCE40 * 0.5); /*0x55f876*/
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
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / dbl_ABCE40); /*0x55f8e2*/
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
  word_ABCE38 = 0; /*0x55f922*/
  word_ABCE3A = 0; /*0x55f928*/
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
  unk_ABCE70[0] = 3; /*0x5fa35a*/
  unk_ABCE70[1] = 1; /*0x5fa360*/
  unk_ABCE70[3] = 0; /*0x5fa363*/
  unk_ABCE70[4] = 3; /*0x5fa366*/
  LOBYTE(unk_ABCE70[5]) = 1; /*0x5fa36d*/
  unk_ABCE70[6] = 2; /*0x5fa370*/
  LOBYTE(unk_ABCE70[7]) = 1; /*0x5fa377*/
  BYTE1(unk_ABCE70[7]) = 1; /*0x5fa37a*/
  BYTE2(unk_ABCE70[7]) = 1; /*0x5fa37d*/
  LOBYTE(unk_ABCE70[8]) = 1; /*0x5fa380*/
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
  HIBYTE(unk_ABCE70[7]) = 0; /*0x5fa3cd*/
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
  return unk_ABCE70; /*0x5fa421*/
}



// ==== 0x0055F980  sub_55F980  this=-  sig=csp ====
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



// ==== 0x0055FAA0  Options::Screen_Save  this=Dialog  sig=csp ====
int __thiscall Options::Screen_Save(Options *this)
{
  HWND DlgItem; // eax
  int v3; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // eax
  int v10; // eax
  HWND v11; // eax
  int result; // eax
  float v13; // [esp+0h] [ebp-18h]
  float v14; // [esp+0h] [ebp-18h]
  float v15; // [esp+0h] [ebp-18h]

  DlgItem = GetDlgItem((HWND)this, 1323); /*0x55fab2*/
  if ( DlgItem )
  {
    v3 = SendMessageA(DlgItem, 0x400u, 0, 0) != 0 ? 2 : 0;
    if ( stru_A8EB00.ObjectTypeClass[30] != v3 ) /*0x55fad9*/
    {
      stru_A8EB00.ObjectTypeClass[30] = v3; /*0x55fae0*/
      TacticalClass::Initialize((TacticalClass *)&stru_87F5F0.__pad_58[416]); /*0x55fae5*/
    }
  }
  v4 = GetDlgItem((HWND)this, 1295); /*0x55faf0*/
  if ( v4 ) /*0x55faf4*/
    stru_A8EB00.ObjectTypeClass[25] = SendMessageA(v4, 0x400u, 0, 0); /*0x55fb02*/
  v5 = GetDlgItem((HWND)this, 1537); /*0x55fb0d*/
  if ( v5 ) /*0x55fb11*/
  {
    BYTE2(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v5, 0xF0u, 0, 0) == 1; /*0x55fb25*/
    SetGlobalFlag(SBYTE2(stru_A8EB00.ObjectTypeClass[31])); /*0x55fb2b*/
  }
  v6 = GetDlgItem((HWND)this, 1540); /*0x55fb36*/
  if ( v6 ) /*0x55fb3a*/
    HIBYTE(stru_A8EB00.ObjectTypeClass[31]) = SendMessageA(v6, 0xF0u, 0, 0) == 1; /*0x55fb4e*/
  v7 = GetDlgItem((HWND)this, 1538); /*0x55fb59*/
  if ( v7 ) /*0x55fb5d*/
    LOBYTE(stru_A8EB00.ObjectTypeClass[32]) = SendMessageA(v7, 0xF0u, 0, 0) == 1; /*0x55fb71*/
  v8 = GetDlgItem((HWND)this, 1322); /*0x55fb7d*/
  if ( v8 ) /*0x55fb81*/
    stru_A8EB00.ObjectTypeClass[28] = 6 - SendMessageA(v8, 0x400u, 0, 0); /*0x55fb96*/
  v9 = GetDlgItem((HWND)this, 1327); /*0x55fba2*/
  if ( v9 ) /*0x55fba6*/
  {
    v13 = (double)SendMessageA(v9, 0x400u, 0, 0) * 0.1; /*0x55fbca*/
    Audio::SetScoreVolume(&stru_A8EB00.ObjectTypeClass[24], v13, 0); /*0x55fbcd*/
    if ( *(float *)&stru_A8EB00.ObjectTypeClass[40] == 0.0 ) /*0x55fbe3*/
    {
      v10 = dword_A83D14; /*0x55fbe5*/
      if ( dword_A83D14 == -1 ) /*0x55fbed*/
        v10 = dword_A83D18; /*0x55fbef*/
      Theme::QueueSong((int)&unk_A83D10, v10); /*0x55fbfa*/
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x55fc06*/
    }
  }
  v11 = GetDlgItem((HWND)this, 1330); /*0x55fc11*/
  if ( v11 ) /*0x55fc15*/
  {
    v14 = (double)SendMessageA(v11, 0x400u, 0, 0) * 0.1; /*0x55fc39*/
    Audio::SetSoundVolume(&stru_A8EB00.ObjectTypeClass[24], v14, 0); /*0x55fc3c*/
  }
  result = (int)GetDlgItem((HWND)this, 1334); /*0x55fc47*/
  if ( result ) /*0x55fc4b*/
  {
    v15 = (double)SendMessageA((HWND)result, 0x400u, 0, 0) * 0.1; /*0x55fc6f*/
    return Audio::SetVoiceVolume(&stru_A8EB00.ObjectTypeClass[24], v15, 0); /*0x55fc72*/
  }
  return result; /*0x55fc77*/
}



// ==== 0x0055FC80  Options::Screen_Dialog  this=Options  sig=ida-proto ====
char sub_55FC80()
{
  HWND v0; // eax
  HWND v1; // esi
  int v2; // ecx
  HWND v3; // eax
  HWND v4; // esi
  int v5; // ecx
  char v7; // [esp+13h] [ebp-9h]
  LONG dwNewLong; // [esp+14h] [ebp-8h] BYREF
  LONG v9; // [esp+18h] [ebp-4h] BYREF

  v7 = byte_A8E9A0; /*0x55fc92*/
  byte_A8E9A0 = 0; /*0x55fc96*/
  while ( 1 ) /*0x55fd14*/
  {
    while ( 1 ) /*0x55fcca*/
    {
      do /*0x55fcca*/
      {
        qmemcpy(&unk_ABCE70, dword_A8EB60, 0xB8u); /*0x55fcb1*/
        dwNewLong = -1; /*0x55fcbd*/
        v0 = (HWND)CreateDialog(0); /*0x55fcc1*/
        v1 = v0; /*0x55fcc6*/
      }
      while ( !v0 ); /*0x55fcca*/
      SetWindowLongA(v0, 8, (LONG)&dwNewLong); /*0x55fcd4*/
      Dialog::Show(v1); /*0x55fcd8*/
      while ( dwNewLong < 0 ) /*0x55fce3*/
      {
        if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fcec*/
          break; /*0x55fcec*/
        LOBYTE(v2) = 0; /*0x55fcee*/
        ScreenSaver::Process(v2); /*0x55fcf0*/
      }
      Options::Screen_Save(v1); /*0x55fcff*/
      Dialog::Destroy(v1); /*0x55fd06*/
      if ( dwNewLong != 1485 ) /*0x55fd14*/
        break; /*0x55fd14*/
      v9 = -1; /*0x55fd2d*/
      ScenarioClass::LoadNetworkConfig(&dword_A8B238); /*0x55fd31*/
      v3 = (HWND)CreateDialog(0); /*0x55fd42*/
      v4 = v3; /*0x55fd47*/
      if ( v3 ) /*0x55fd4b*/
      {
        SetWindowLongA(v3, 8, (LONG)&v9); /*0x55fd59*/
        Dialog::Show(v4); /*0x55fd5d*/
        while ( v9 < 0 ) /*0x55fd68*/
        {
          if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x55fd71*/
            break; /*0x55fd71*/
          LOBYTE(v5) = 0; /*0x55fd73*/
          ScreenSaver::Process(v5); /*0x55fd75*/
        }
        Dialog::Destroy(v4); /*0x55fd84*/
      }
    }
    if ( dwNewLong != 1486 ) /*0x55fd1c*/
      break; /*0x55fd1c*/
    ShowHotkeyOptionsDialog(dword_A8EB60); /*0x55fd1e*/
  }
  ScenarioClass::SaveGameOptions(dword_A8EB60); /*0x55fd8e*/
  byte_A8E9A0 = v7; /*0x55fd9a*/
  return v7; /*0x55fd97*/
}



// ==== 0x0055FDB0  ScreenDlgProcOptions  this=-  sig=csp ====
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
          SendMessageA(v19, 0x405u, 1u, dword_A8EB78 != 0); /*0x56016a*/
        }
        v48 = GetDlgItem(hWnd, 1773); /*0x560176*/
        if ( byte_A8EB95 ) /*0x560181*/
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
            if ( byte_A8EB95 || v23 == 640 || v23 == 800 || v23 == 1024 ) /*0x5601fa*/
            {
              if ( v23 == dword_ABCE94 && v24 == dword_ABCE98 ) /*0x56020a*/
                wParama = (int)v50; /*0x560210*/
              sprintf(lParam, "%d x %d x 16", v23, v24); /*0x560220*/
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
          SendMessageA(v27, 0x405u, 1u, dword_A8EB64); /*0x5602b2*/
        }
        v28 = GetDlgItem(hWnd, 1537); /*0x5602ba*/
        if ( v28 ) /*0x5602be*/
          SendMessageA(v28, 0xF1u, byte_A8EB7E != 0, 0); /*0x5602d6*/
        v29 = GetDlgItem(hWnd, 1540); /*0x5602de*/
        if ( v29 ) /*0x5602e2*/
          SendMessageA(v29, 0xF1u, byte_A8EB7F != 0, 0); /*0x5602fa*/
        v30 = GetDlgItem(hWnd, 1538); /*0x560302*/
        if ( v30 ) /*0x560306*/
          SendMessageA(v30, 0xF1u, byte_A8EB80 != 0, 0); /*0x56031e*/
        v31 = GetDlgItem(hWnd, 1322); /*0x560326*/
        v32 = v31; /*0x560328*/
        if ( v31 ) /*0x56032c*/
        {
          SendMessageA(v31, 0x4ACu, 0, 0); /*0x560338*/
          SendMessageA(v32, 0x406u, 1u, 393216); /*0x560347*/
          SendMessageA(v32, 0x405u, 1u, 6 - dword_A8EB70); /*0x56035f*/
        }
        IsSoundEnabled = Audio::IsSoundEnabled(); /*0x56036c*/
        v34 = GetDlgItem(hWnd, 1327); /*0x56036e*/
        v35 = v34; /*0x560374*/
        if ( v34 ) /*0x560378*/
        {
          SendMessageA(v34, 0x4AEu, 0, 0); /*0x560384*/
          SendMessageA(v35, 0x406u, 1u, 655360); /*0x560393*/
          v36 = Math::RoundToInt(flt_A8EBA0 * 10.0 + 0.5); /*0x5603a7*/
          SendMessageA(v35, 0x405u, 1u, v36); /*0x5603b5*/
          EnableWindow(v35, IsSoundEnabled); /*0x5603b9*/
        }
        v37 = GetDlgItem(hWnd, 1330); /*0x5603c5*/
        v38 = v37; /*0x5603cb*/
        if ( v37 ) /*0x5603cf*/
        {
          SendMessageA(v37, 0x4AEu, 0, 0); /*0x5603db*/
          SendMessageA(v38, 0x406u, 1u, 655360); /*0x5603ea*/
          v39 = Math::RoundToInt(flt_A8EB98 * 10.0 + 0.5); /*0x5603fe*/
          SendMessageA(v38, 0x405u, 1u, v39); /*0x56040c*/
          EnableWindow(v38, IsSoundEnabled); /*0x560410*/
        }
        v40 = GetDlgItem(hWnd, 1334); /*0x56041c*/
        v41 = v40; /*0x560422*/
        if ( v40 ) /*0x560426*/
        {
          SendMessageA(v40, 0x4AEu, 0, 0); /*0x560432*/
          SendMessageA(v41, 0x406u, 1u, 655360); /*0x560441*/
          v42 = Math::RoundToInt(*(float *)&flt_A8EB9C * 10.0 + 0.5); /*0x560455*/
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
                    Audio::SetScoreVolume((float *)dword_A8EB60, v43, 1); /*0x560051*/
                    return 0; /*0x56005f*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1330) ) /*0x56006c*/
                {
                  if ( byte_ABCF54 ) /*0x560075*/
                  {
                    v44 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600a1*/
                    Audio::SetSoundVolume((float *)dword_A8EB60, v44, 1); /*0x5600a4*/
                    return 0; /*0x5600b2*/
                  }
                }
                else if ( a4 == GetDlgItem(hWnd, 1334) && byte_ABCF54 ) /*0x5600cc*/
                {
                  v45 = (double)SendMessageA(a4, 0x400u, 0, 0) * 0.1; /*0x5600f8*/
                  Audio::SetVoiceVolume((float *)dword_A8EB60, v45, 1); /*0x5600fb*/
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
                if ( v10 != dword_A8EB84 || v11 != dword_A8EB88 ) /*0x55ff1f*/
                {
                  dword_A8EB88 = v11; /*0x55ff27*/
                  dword_A8EB84 = v10; /*0x55ff2d*/
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


