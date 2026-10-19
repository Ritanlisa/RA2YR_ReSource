// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x005A0090  MapClass::SetObstruction  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
MapClass *  MapClass::SetObstruction(int16_t * a0, MapClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005A0090.json)
}

// ==== BACKFILL 0x005A00C0  MapClass::GetTileDataField14  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MapClass::GetTileDataField14(MapResourceClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005A00C0.json)
}

// ==== BACKFILL 0x005A1190  sub_5A1190  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_5A1190(short * a1, short * a2, double a3)
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
  return (double)(unsigned int)((Random *)(&unk_ABE890))->State() * 2.328306437080797e-10 * 2.0 + 1.5 * v9; /*0x5a125c*/
}

// ==== BACKFILL 0x005A1FB0  SpreadMapSeedTerrainFromWaypoints  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5A1FB0::SpreadMapSeedTerrainFromWaypoints() {

  int v1; // eax
  int v2; // ebx
  int v3; // edi
  unsigned int *v4; // ebp
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
  int16_t v28; // ax
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
  int16_t v43[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v44; // [esp+20h] [ebp-38h]
  int v45; // [esp+24h] [ebp-34h]
  CellStruct *v46; // [esp+28h] [ebp-30h]
  int v47; // [esp+2Ch] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-28h]
  unsigned int *v49; // [esp+34h] [ebp-24h]
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
      v4 = (unsigned int *)__2_YAPAXI_Z(0x1900u); /*0x5a1fef*/
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
            *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v9 - 4) = 0; /*0x5a203d*/
          }
          while ( v9 <= *(unsigned int *)&v6[1] ); /*0x5a204a*/
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
        v50 = *(unsigned int *)(i + 36); /*0x5a206b*/
        *(unsigned int *)(80 * ((int16_t)v50 + g_MapCellWidth * (short)(((v50) >> 16) & 0xFFFF)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x5a208c*/
      }
      v11 = v2 + 1; /*0x5a20a6*/
      v12 = 0; /*0x5a20a7*/
      v13 = *(unsigned int *)v6 < 0; /*0x5a20a9*/
      v45 = 0; /*0x5a20ab*/
      v50 = v11; /*0x5a20af*/
      if ( !v13 ) /*0x5a20b3*/
      {
        do /*0x5a20c1*/
        {
          ++v12; /*0x5a20b8*/
          *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v12 - 4) = 0; /*0x5a20b9*/
        }
        while ( v12 <= *(unsigned int *)v6 ); /*0x5a20c1*/
      }
      v14 = (short)(((v47) >> 16) & 0xFFFF); /*0x5a20c3*/
      *v6 = 0; /*0x5a20c8*/
      *v4 = v3; /*0x5a20ca*/
      v4[1] = 0; /*0x5a20cd*/
      v53 = (int16_t)v3; /*0x5a20dc*/
      v44 = 1; /*0x5a20e6*/
      *(unsigned int *)(80 * ((int16_t)v3 + g_MapCellWidth * v14) + g_MissionQueueFrame.localVariables[163] + 60) = v11; /*0x5a20f4*/
      v15 = *(unsigned int *)v6 + 1; /*0x5a20fd*/
      v51 = v4[1]; /*0x5a2100*/
      v16 = v15 >> 1; /*0x5a2107*/
      if ( v15 < *(unsigned int *)&v6[1] ) /*0x5a210b*/
      {
        for ( ; v15 > 1; v16 >>= 1 ) /*0x5a2110*/
        {
          v17 = v6[2]; /*0x5a2112*/
          _EBX = *(unsigned int *)(*(unsigned int *)&v17 + 4 * v16); /*0x5a2115*/
          __asm /*0x5a2118*/
          {
            fld dword ptr [ebx+4]
            fcomp [esp+50h+var_1C]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5a2124*/
            break; /*0x5a2124*/
          *(unsigned int *)(*(unsigned int *)&v17 + 4 * v15) = _EBX; /*0x5a2126*/
          v15 = v16; /*0x5a2129*/
        }
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * v15) = v4; /*0x5a2135*/
        v20 = (unsigned int)v6[3]; /*0x5a213a*/
        ++*(unsigned int *)v6; /*0x5a2140*/
        if ( (unsigned int)v4 > v20 ) /*0x5a2142*/
          v6[3] = (Heap)v4; /*0x5a2144*/
        if ( (unsigned int)v4 < *(unsigned int *)&v6[4] ) /*0x5a214a*/
          v6[4] = (Heap)v4; /*0x5a214c*/
      }
      if ( *v6 ) /*0x5a214f*/
      {
        v21 = v6[2]; /*0x5a2159*/
        v22 = *(CellStruct **)(*(unsigned int *)&v21 + 4); /*0x5a2161*/
        *(unsigned int *)(*(unsigned int *)&v21 + 4) = *(unsigned int *)(*(unsigned int *)&v21 + 4 * *(unsigned int *)v6); /*0x5a2164*/
        *(unsigned int *)(*(unsigned int *)&v6[2] + 4 * (*(unsigned int *)v6)--) = 0; /*0x5a216e*/
        Heap::SiftDown(v6, 1); /*0x5a217a*/
        v46 = v22; /*0x5a2181*/
        if ( v22 ) /*0x5a2185*/
        {
          do /*0x5a2368*/
          {
            if ( v45 >= 400 ) /*0x5a2193*/
              break; /*0x5a2193*/
            v23 = v46; /*0x5a2199*/
            *(unsigned char *)(80 * ((short)((v46->field_0) & 0xFFFF) + g_MapCellWidth * (short)(((v46->field_0) >> 16) & 0xFFFF)) /*0x5a21b9*/
                     + g_MissionQueueFrame.localVariables[163]
                     + 69) = 1;
            v24 = 0; /*0x5a21c2*/
            v48 = 0; /*0x5a21c4*/
            v25 = (float *)&v4[2 * v44]; /*0x5a21c8*/
            while ( 1 ) /*0x5a21ef*/
            {
              v52 = *CellStruct::Add(v23, &v57, (unsigned short *)(4 * (v24 & 7) + 9041544)); /*0x5a21ef*/
              *(unsigned int *)v43 = v52; /*0x5a21f3*/
              v26 = (short)(((v52) >> 16) & 0xFFFF) + (int16_t)v52; /*0x5a21ff*/
              if ( v26 > g_MissionQueueFrame.localVariables[160] /*0x5a2243*/
                && (int16_t)v52 - (short)(((v52) >> 16) & 0xFFFF) < g_MissionQueueFrame.localVariables[160]
                && (short)(((v52) >> 16) & 0xFFFF) - (int16_t)v52 < g_MissionQueueFrame.localVariables[160]
                && v26 <= g_MissionQueueFrame.localVariables[161]
                && !*(unsigned int *)(80 * ((int16_t)v52 + g_MapCellWidth * (short)(((v52) >> 16) & 0xFFFF))
                              + g_MissionQueueFrame.localVariables[163]
                              + 60) )
              {
                v27 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v43); /*0x5a2259*/
                if ( (uint8_t)Cell::IsEmpty(v27) ) /*0x5a2260*/
                {
                  v28 = v43[0]; /*0x5a226d*/
                  v29 = v53; /*0x5a2271*/
                  v30 = (short)(((v47) >> 16) & 0xFFFF); /*0x5a2275*/
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
                  *(unsigned int *)(80 * (v43[0] + g_MapCellWidth * v31) + g_MissionQueueFrame.localVariables[163] + 60) = v50; /*0x5a22d5*/
                  v34 = *(unsigned int *)(*(unsigned int *)&v33 + 4); /*0x5a22df*/
                  v35 = *(unsigned int *)v6 + 1; /*0x5a22e3*/
                  ++v44; /*0x5a22e4*/
                  v54 = v34; /*0x5a22ea*/
                  v36 = v35 >> 1; /*0x5a22f1*/
                  if ( v35 < *(unsigned int *)&v6[1] ) /*0x5a22f5*/
                  {
                    for ( ; v35 > 1; v36 >>= 1 ) /*0x5a22fa*/
                    {
                      v37 = v6[2]; /*0x5a22fc*/
                      _EAX = *(unsigned int *)(*(unsigned int *)&v37 + 4 * v36); /*0x5a22ff*/
                      __asm /*0x5a2302*/
                      {
                        fld dword ptr [eax+4]
                        fcomp [esp+50h+var_10]
                        fnstsw ax
                      }
                      if ( (_EAX & 0x4100) != 0 ) /*0x5a230e*/
                        break; /*0x5a230e*/
                      *(unsigned int *)(*(unsigned int *)&v37 + 4 * v35) = *(unsigned int *)(*(unsigned int *)&v37 + 4 * v36); /*0x5a2313*/
                      v35 = v36; /*0x5a2316*/
                    }
                    *(Heap *)(*(unsigned int *)&v6[2] + 4 * v35) = v33; /*0x5a2322*/
                    v39 = v6[3]; /*0x5a2327*/
                    ++*(unsigned int *)v6; /*0x5a232d*/
                    if ( *(unsigned int *)&v33 > *(unsigned int *)&v39 ) /*0x5a232f*/
                      v6[3] = v33; /*0x5a2331*/
                    if ( *(unsigned int *)&v33 < *(unsigned int *)&v6[4] ) /*0x5a2337*/
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

// ==== BACKFILL 0x005A2ED0  sub_5A2ED0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_5A2ED0(short * a1, short * a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a2eec*/
  v3 = a1[1] - a2[1]; /*0x5a2eee*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a2f0d*/
  return (double)(unsigned int)((Random *)(&unk_ABE890))->State() * 5.0 * 2.328306437080797e-10 + v5; /*0x5a2f3f*/
}

// ==== BACKFILL 0x005A38C0  CellClass::Reset  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::Reset() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x5A38C0.json */
}

// ==== BACKFILL 0x005A4AE0  sub_5A4AE0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_5A4AE0(short * a1, short * a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a4afc*/
  v3 = a1[1] - a2[1]; /*0x5a4afe*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4b1d*/
  return (double)(unsigned int)((Random *)(&unk_ABE890))->State() * 5.0 * 2.328306437080797e-10 + v5; /*0x5a4b4f*/
}

// ==== BACKFILL 0x005A4FA0  sub_5A4FA0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_5A4FA0(short * a1, short * a2)
{
  int v2; // eax
  int v3; // edx
  double v5; // [esp+14h] [ebp-8h]

  v2 = *a1 - *a2; /*0x5a4fbc*/
  v3 = a1[1] - a2[1]; /*0x5a4fbe*/
  v5 = Math::Sqrt((double)(v2 * v2 + v3 * v3)); /*0x5a4fdd*/
  return (double)(unsigned int)((Random *)(&unk_ABE890))->State() * 5.0 * 2.328306437080797e-10 + v5; /*0x5a500f*/
}

// ==== BACKFILL 0x005A5AE0  sub_5A5AE0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_5A5AE0(short * a1, short * a2)
{
  signed int v2; // ecx
  int64_t v3; // rax
  int v5; // [esp+10h] [ebp+4h]

  v2 = abs32(a1[1] - a2[1]); /*0x5a5b06*/
  v3 = *a1 - *a2; /*0x5a5b08*/
  v5 = ((((v3) >> 32) & 0xFFFFFFFFu) ^ v3) - (((v3) >> 32) & 0xFFFFFFFFu); /*0x5a5b0f*/
  if ( v5 <= v2 ) /*0x5a5b13*/
    v5 = v2; /*0x5a5b15*/
  return (double)(unsigned int)((Random *)(&unk_ABE890))->State() * 3.0 * 2.328306437080797e-10 + (double)v5; /*0x5a5b45*/
}

// ==== BACKFILL 0x005A7640  globalHelper_0A7640  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * globalHelper_0A7640(unsigned int *a0, int aP1)
{
  int16_t v2; // ax
  int16_t v3; // di
  int16_t v4; // bp
  int v5; // esi
  int16_t v6; // bx
  bool v7; // zf
  int *v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = 0; /*0x5a7643*/
  v3 = 999; /*0x5a764d*/
  v4 = 0; /*0x5a7651*/
  v5 = *(unsigned int *)(aP1 + 16) - 1; /*0x5a7654*/
  v6 = 999; /*0x5a7655*/
  if ( v5 >= 0 ) /*0x5a7658*/
  {
    v9 = (int *)(*(unsigned int *)(aP1 + 4) + 4 * v5); /*0x5a7661*/
    v10 = *(unsigned int *)(aP1 + 16); /*0x5a7665*/
    do /*0x5a76ac*/
    {
      v11 = *v9; /*0x5a7672*/
      if ( (int16_t)*v9 < v3 ) /*0x5a7676*/
        v3 = *v9; /*0x5a7678*/
      if ( (short)(((v11) >> 16) & 0xFFFF) < v6 ) /*0x5a7683*/
        v6 = (((*v9) >> 16) & 0xFFFF); /*0x5a7685*/
      if ( (int16_t)*v9 > v2 ) /*0x5a768b*/
        v2 = *v9; /*0x5a768d*/
      if ( (short)(((v11) >> 16) & 0xFFFF) > v4 ) /*0x5a7693*/
        v4 = (((*v9) >> 16) & 0xFFFF); /*0x5a7695*/
      v7 = v10 == 1; /*0x5a76a3*/
      --v9; /*0x5a76a4*/
      --v10; /*0x5a76a8*/
    }
    while ( !v7 ); /*0x5a76ac*/
  }
  *a0 = v3; /*0x5a76bb*/
  a0[1] = v6; /*0x5a76c1*/
  a0[2] = v2 - v3 + 1; /*0x5a76c8*/
  a0[3] = v4 - v6 + 1; /*0x5a76cb*/
  return a0; /*0x5a76c7*/
}

// ==== BACKFILL 0x005A9920  sub_5A9920  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_5A9920::sub_5A9920(unsigned int * a1, ObjectClass * aP2)
{

  this->AbstractClass = (void *)*a1; /*0x5a992c*/
  ((unsigned int *)this)[0] = (void *)aP2; /*0x5a992e*/
  return this; /*0x5a9931*/

}

// ==== BACKFILL 0x005A9960  sub_5A9960  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * E4Recv_5A9960::sub_5A9960(unsigned int * a1)
{

  this->AbstractClass = (void *)*a1; /*0x5a9968*/
  ((unsigned int *)this)[0] = (void *)a1[1]; /*0x5a996d*/
  return this; /*0x5a9970*/

}

// ==== BACKFILL 0x005A9980  sub_5A9980  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5A9980::sub_5A9980(int a2, unsigned int * a3, int a4, unsigned int * a5, int a6)
{

  *this = a2; /*0x5a998a*/
  *((unsigned int *)this + 1) = *a3; /*0x5a9992*/
  *((unsigned int *)this + 2) = a4; /*0x5a9999*/
  *((unsigned int *)this + 3) = *a5; /*0x5a99a2*/
  *((unsigned int *)this + 4) = a6; /*0x5a99a5*/
  return this; /*0x5a99a8*/

}

// ==== BACKFILL 0x005A99B0  Object_Helper_5A99B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_5A99B0::Object_Helper_5A99B0() {

  this->AbstractClass = (void *)0xFFFF; /*0x5a99d1*/
  ((unsigned int *)this)[0] = 0; /*0x5a99d7*/
  ((unsigned int *)this)[0] = (void *)0xFFFF; /*0x5a99da*/
  ((unsigned int *)this)[0] = 0; /*0x5a99e1*/
  ((unsigned int *)this)[0] = -1; /*0x5a99e4*/
  return this; /*0x5a99ec*/

}

// ==== BACKFILL 0x005A99F0  sub_5A99F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * E4Recv_5A99F0::sub_5A99F0(unsigned int * a2)
{

  this->AbstractClass = (void *)*a2; /*0x5a99f8*/
  ((unsigned int *)this)[0] = (void *)a2[1]; /*0x5a99fd*/
  ((unsigned int *)this)[0] = (void *)a2[2]; /*0x5a9a03*/
  ((unsigned int *)this)[0] = (void *)a2[3]; /*0x5a9a09*/
  ((unsigned int *)this)[0] = a2[4]; /*0x5a9a0f*/
  return this; /*0x5a9a12*/

}

// ==== BACKFILL 0x005A9BF0  ??0_ReaderWriterLock_details_Concurrency__QAE_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
Concurrency::details::_ReaderWriterLock * E4Recv_5A9BF0::__0_ReaderWriterLock_details_Concurrency__QAE_XZ()
{

  *(unsigned int *)this = 0; /*0x5a9bf2*/
  *((unsigned int *)this + 1) = 0; /*0x5a9bf8*/
  return this; /*0x5a9bff*/

}

// ==== BACKFILL 0x005AC270  MapSeedClass::QueryInterface  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
MapSeedClass * MapSeedClass::QueryInterface(char a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AC270)
}

// ==== BACKFILL 0x005AC290  RandomMap::Constructor_VectorClass_Cell_  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Constructor_VectorClass_Cell_(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC290.json)
}

// ==== BACKFILL 0x005AC3D0  VectorClass_ptr_MapRegionClass::GetItemIndex  cls=VectorClass_ptr_MapRegionClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_MapRegionClass::Get(int a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AC3F0)
}

// ==== BACKFILL 0x005AC400  TypeList::BuildingTypeConstructor  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
CCINIClass * TypeList_flat::BuildingTypeConstructor()
{

  ((unsigned int *)this)[0] = 0; /*0x5ac404*/
  ((unsigned int *)this)[0] = 0; /*0x5ac407*/
  ((unsigned int *)this)[0] = 1; /*0x5ac40a*/
  ((unsigned int *)this)[0] = 0; /*0x5ac40e*/
  ((unsigned int *)this)[0] = 10; /*0x5ac411*/
  ((unsigned int *)this)[0] = 0; /*0x5ac418*/
  this->DynamicVectorClass = &g_var_131447; /*0x5ac41b*/
return (gamemd::CCINIClass *)&this->DynamicVectorClass; /*0x5ac421*/

}

// ==== BACKFILL 0x005AC5A0  DynamicVector::checkCellBounds  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void MapClass::checkCellBounds()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC5A0.json)
}

// ==== BACKFILL 0x005AC5D0  DynamicVector::validateCellCoord  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::validateCellCoord(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AC5D0.json)
}

// ==== BACKFILL 0x005AC650  TypeList_BuildingType::Add  cls=_TypeList_PBVBuildingTypeClass  sig=csp  renamed_refs=0  residual=- ====
TypeList_flat * TypeList_BuildingType::Add(unsigned int * Block, char a2, void *a3_1)
{

  void *v3; // eax

  v3 = (void *)*((unsigned int *)Block + 1); /*0x5ac653*/
  *(unsigned int *)Block = (unsigned int)(&g_ptr_7E8500); /*0x5ac656*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x5ac660*/
  {
    __3_YAXPAX_Z(v3); /*0x5ac668*/
    *((unsigned int *)Block + 1) = 0; /*0x5ac670*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x5ac67b*/
  *((unsigned int *)Block + 2) = 0; /*0x5ac681*/
  if ( (a2 & 1) != 0 ) /*0x5ac688*/
    __3_YAXPAX_Z(Block); /*0x5ac68b*/
  return (gamemd::TypeList_flat *)(Block); /*0x5ac695*/

}

// ==== BACKFILL 0x005AD0C0  DynamicVector::updatePathfindingGrid  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int MapClass::updatePathfindingGrid(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD0C0.json)
}

// ==== BACKFILL 0x005AD660  TypeList::BuildingTypeCopy  cls=TypeList  sig=csp  renamed_refs=0  residual=- ====
unsigned int * TypeList_flat::BuildingTypeCopy(VectorClass_flat * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AD660)
}

// ==== BACKFILL 0x005AD7D0  DynamicVector::Add_Alt3  cls=DynamicVector  sig=csp  renamed_refs=0  residual=DynamicVector_field_0x1 ====
char DynamicVector::Add_Alt3(VectorClass_flat * aP1)
{

  int DynamicVector_field_0x8; // ecx
  int result; // eax
  int v5; // edx

  DynamicVector_field_0x8 = this->DynamicVector_field_0x8; /*0x5ad7d3*/
  result = (int)this->DynamicVector_field_0x10; /*0x5ad7d6*/
  if ( result < DynamicVector_field_0x8 /*0x5ad7fd*/
    || (this->__pad_C[1] || !DynamicVector_field_0x8)
    && (result = *(unsigned int *)this->__pad_14, result > 0)
    && (result = (*(int (**)(DynamicVector *, int, unsigned int))(*(unsigned int *)this->__pad_0 + 8))(
                   this,
                   DynamicVector_field_0x8 + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->DynamicVector_field_0x10; /*0x5ad805*/
    v5 = (unsigned int)(*(unsigned int *)&(&this->DynamicVector_field_0x1)[3]); /*0x5ad808*/
    this->DynamicVector_field_0x10 = (unsigned int)((void *)(result + 1)); /*0x5ad80e*/
    *(unsigned int *)(v5 + 4 * result) = *(unsigned int *)aP1; /*0x5ad818*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x5ad81b*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x5ad7ff*/
  }
  return result; /*0x5ad801*/

}

// ==== BACKFILL 0x005AD820  RandomMap::Constructor  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Constructor(int a2, int a3, void *a3_2)
{
    (void)a2; (void)a3; (void)a3_2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AD820.json)
}

// ==== BACKFILL 0x005AD930  Map_Helper_5AD930  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5AD930::Map_Helper_5AD930(int a2) {

  char *v3; // edi
  int i; // ecx
  int v5; // eax
  unsigned int *v6; // edx
  int v7; // eax

  if ( a2 < 0 ) /*0x5ad93c*/
    return 0; /*0x5ad93c*/
  v3 = (char *)__2_YAPAXI_Z(8 * (a2 + *((unsigned int *)this + 2))); /*0x5ad950*/
  if ( !v3 ) /*0x5ad957*/
    return 0; /*0x5ad9b0*/
  for ( i = 0; i < *((unsigned int *)this + 1); *(unsigned int *)&v3[v5 + 4] = v6[1] ) /*0x5ad965*/
  {
    v5 = 8 * i; /*0x5ad969*/
    v6 = (unsigned int *)(*(unsigned int *)this + 8 * i++); /*0x5ad972*/
    *(unsigned int *)&v3[v5] = *v6; /*0x5ad977*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x5ad98b*/
  v7 = a2 + *((unsigned int *)this + 2); /*0x5ad996*/
  *(unsigned int *)this = v3; /*0x5ad998*/
  *((unsigned int *)this + 2) = v7; /*0x5ad99a*/
  *((unsigned int *)this + 4) = 0; /*0x5ad99d*/
  return 1; /*0x5ad9a4*/

}

// ==== BACKFILL 0x005AD9F0  Map_Cleanup  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_5AD9F0::Map_Cleanup(int a2, int a3) {

  this->Items = 0; /*0x5ad9fb*/
  this->Capacity = a2; /*0x5ad9fe*/
  this->IsInitialized = 1; /*0x5ada01*/
  this->IsAllocated = 0; /*0x5ada05*/
  /* X11: ptr_0 install elided (implicit via VectorClass virtuals 0x5ada08) */
  if ( a2 ) /*0x5ada0e*/
  {
    if ( a3 ) /*0x5ada16*/
    {
      this->Items = (void *)a3; /*0x5ada18*/
      return &this->ptr_0; /*0x5ada1e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x5ada2d*/
    this->IsAllocated = 1; /*0x5ada30*/
  }
  return &this->ptr_0; /*0x5ada1d*/

}

// ==== BACKFILL 0x005ADA40  RandomMap::Constructor_0  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Constructor_0(int a2, int a3, void *a3_2)
{
    (void)a2; (void)a3; (void)a3_2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005ADA40.json)
}

// ==== BACKFILL 0x005ADAB0  RandomMap::Constructor_1  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
unsigned int * Constructor_1(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005ADAB0.json)
}

// ==== BACKFILL 0x005ADE20  Map_Delete_5ADE20  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
const char * Map_Delete_5ADE20(ObjectClass * a1, const char * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5ADE20)
}

// ==== BACKFILL 0x005AE100  ScenarioClass::Load  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::Load(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AE100)
}

// ==== BACKFILL 0x005AE460  CampaignClass::ReleaseSubobjectsAndDestruct  cls=CampaignClass  sig=csp  renamed_refs=0  residual=- ====
int CampaignClass::ReleaseSubobjectsAndDestruct() {
    void (__thiscall ***v2)(unsigned int, int); // ecx
    void (__thiscall ***v3)(unsigned int, int); // ecx
    void (__thiscall ***v4)(unsigned int, int); // ecx

    v2 = (void (__thiscall ***)(unsigned int, int))this->scenario[35]; /*0x5ae463*/
    if ( v2 ) /*0x5ae46b*/
    {
      (**v2)((unsigned int)v2, 1); /*0x5ae471*/
      this->scenario[35] = 0; /*0x5ae473*/
    }
    v3 = (void (__thiscall ***)(unsigned int, int))this->scenario[34]; /*0x5ae47d*/
    if ( v3 ) /*0x5ae485*/
    {
      (**v3)((unsigned int)v3, 1); /*0x5ae48b*/
      this->scenario[34] = 0; /*0x5ae48d*/
    }
    v4 = (void (__thiscall ***)(unsigned int, int))this->scenario[33]; /*0x5ae497*/
    if ( v4 ) /*0x5ae49f*/
    {
      (**v4)((unsigned int)v4, 1); /*0x5ae4a5*/
      this->scenario[33] = 0; /*0x5ae4a7*/
    }
    return ((SessionClass *)((char *)&this->scenario[10]))->Destruct(); /*0x5ae4b9*/
}

// ==== BACKFILL 0x005AE4F0  sub_5AE4F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_5AE4F0(int a1)
{
  return 0; /*0x5ae4f2*/
}

// ==== BACKFILL 0x005AE500  sub_5AE500  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char E4Recv_5AE500::sub_5AE500(const char ** a2)
{

  const char **result; // eax
  ObjectClass *v4; // [esp+0h] [ebp-8h]

  result = (const char **)((String *)((String *)a2))->NotEquals(0); /*0x5ae50c*/
  if ( (unsigned char)result ) /*0x5ae513*/
  {
    result = sub_5CF840((ObjectClass *)this->customSound_controller, (const char **)a2); /*0x5ae519*/
    if ( result ) /*0x5ae520*/
      return (const char **)nullsub_24(v4); /*0x5ae524*/
  }
  return result; /*0x5ae529*/

}

// ==== BACKFILL 0x005AE530  sub_5AE530  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
DWORD E4Recv_5AE530::sub_5AE530(ObjectClass * aP1, ObjectClass * aP2)
{

  ObjectClass *v3; // esi
  DWORD result; // eax
  void *v5; // [esp+8h] [ebp-8h]

  v3 = this; /*0x5ae538*/
  ((String *)((String *)this + 25))->Reassign(aP1); /*0x5ae541*/
  result = TimerGetTicks(); /*0x5ae54a*/
  v3 = (ObjectClass *)((char *)v3 + 204); /*0x5ae557*/
  v3->AbstractClass = (void *)result; /*0x5ae55d*/
  ((unsigned int *)v3)[0] = v5; /*0x5ae55f*/
  ((unsigned int *)v3)[0] = (void *)aP2; /*0x5ae562*/
  return result; /*0x5ae565*/

}

// ==== BACKFILL 0x005AE570  nullsub_170  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_170(int a1)
{
  ; /*0x5ae570*/
}

// ==== BACKFILL 0x005AE580  nullsub_171  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void nullsub_171(int a1)
{
  ; /*0x5ae580*/
}

// ==== BACKFILL 0x005AE590  MSEngine_Destru::StubReturnFalse  cls=MSEngine  sig=csp  renamed_refs=0  residual=- ====
void MSEngine_Destru::StubReturnFalse(int a1)
{
}

// ==== BACKFILL 0x005AE610  Transform::Copy  cls=Transform  sig=csp  renamed_refs=0  residual=- ====
void * Transform::Copy(const void * a2, void *a2_2)
{

  qmemcpy(this, a2, 0x30u); /*0x5ae61f*/
  return this; /*0x5ae621*/

}

// ==== BACKFILL 0x005AE6F0  Matrix3D::Constructor  cls=Matrix3D  sig=csp  renamed_refs=0  residual=- ====
void* Matrix3D::Constructor(float a1, float a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AE6F0)
}

// ==== BACKFILL 0x005AEAD0  BuildingClass::processBaseExpansion  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void BuildingClass::processBaseExpansion(float a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AEAD0.json)
}

// ==== BACKFILL 0x005AEAF0  BuildingClass::updateFoundation  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void BuildingClass::updateFoundation(float a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AEAF0.json)
}

// ==== BACKFILL 0x005AEB20  BuildingClass::recalcAdjacency  cls=BuildingClass  sig=csp  renamed_refs=0  residual=- ====
void BuildingClass::recalcAdjacency(float a1)
{
    (void)a1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AEB20.json)
}

// ==== BACKFILL 0x005AEC40  sub_5AEC40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5AEC40::sub_5AEC40(float a2)
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
  abstractFlags = ((unsigned int *)this)[0]; /*0x5aec74*/
  __asm { fchs } /*0x5aec7b*/
  NeedsSaveOrLink = ((unsigned int *)this)[0]; /*0x5aec7d*/
  __asm /*0x5aec84*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  uniqueId = ((unsigned int *)this)[0]; /*0x5aec8a*/
  nextArrayIndex = ((unsigned int *)this)[0]; /*0x5aec8e*/
  __asm { fld [esp+40h+var_20] } /*0x5aec92*/
  __asm { fmul st, st(3) }
  occupant = this->occupant; /*0x5aec9e*/
  LODWORD(v19) = ((unsigned int *)this)[0]; /*0x5aeca2*/
  result = this->owningHouseIndex; /*0x5aeca6*/
  __asm { faddp st(1), st } /*0x5aecac*/
  v16 = result; /*0x5aecae*/
  fallRate = this->fallRate; /*0x5aecb2*/
  __asm { fstp dword ptr [esi+10h] } /*0x5aecb9*/
  ((unsigned int *)this)[0] = _ET1; /*0x5aecb9*/
  __asm /*0x5aecbc*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aecca*/
  __asm /*0x5aeccd*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aecdb*/
  __asm /*0x5aecde*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+1Ch]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aecec*/
  __asm /*0x5aecef*/
  {
//L-fix     fstp st
//L-fix     fld [esp+30h+var_24]
//L-fix     fmul st, st(1)
//L-fix     fld [esp+30h+var_20]
//L-fix     fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aed01*/
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

// ==== BACKFILL 0x005AED50  sub_5AED50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5AED50::sub_5AED50(float a2)
{

  int result; // eax
  void *ptr_4; // [esp+0h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-18h]
  void *ptr_8; // [esp+8h] [ebp-14h]
  int owningHouseIndex; // [esp+Ch] [ebp-10h]
  void *ptr_C; // [esp+10h] [ebp-Ch]
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
  ptr_4 = ((unsigned int *)_ESI)[0]; /*0x5aed95*/
  result = _ESI->occupant; /*0x5aed99*/
  v13 = result; /*0x5aed9c*/
  ptr_8 = ((unsigned int *)_ESI)[0]; /*0x5aeda0*/
  __asm { faddp st(1), st } /*0x5aeda4*/
  owningHouseIndex = _ESI->owningHouseIndex; /*0x5aedac*/
  ptr_C = ((unsigned int *)_ESI)[0]; /*0x5aedb0*/
  __asm { fstp dword ptr [esi] } /*0x5aedb4*/
  *(float *)_ESI = _ET1; /*0x5aedb4*/
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
  *(float *)&((unsigned int *)_ESI)[0] = _ET1; /*0x5aedd0*/
  __asm /*0x5aedd3*/
  {
    fld [esp+28h+var_10]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_14]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  *(float *)&((unsigned int *)_ESI)[0] = _ET1; /*0x5aede3*/
  __asm /*0x5aede6*/
  {
    fld dword ptr [esp+28h+var_8]
    fmul [esp+28h+arg_0]
    fld [esp+28h+var_C]
    fmul st, st(5)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  *(float *)&((unsigned int *)_ESI)[0] = _ET1; /*0x5aedf6*/
  __asm /*0x5aedf9*/
  {
    fxch st(1)
    fmul st, st(2)
    fxch st(1)
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+20h]
  }
  *(float *)&((unsigned int *)_ESI)[0] = _ET1; /*0x5aee03*/
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

// ==== BACKFILL 0x005AEE50  sub_5AEE50  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5AEE50::sub_5AEE50(float a2)
{

  int result; // eax
  int uniqueId; // [esp+0h] [ebp-24h]
  void *ptr_0; // [esp+4h] [ebp-20h]
  int abstractFlags; // [esp+8h] [ebp-1Ch]
  void *ptr_4; // [esp+Ch] [ebp-18h]
  int v16; // [esp+10h] [ebp-14h]
  void *ptr_8; // [esp+14h] [ebp-10h]
  int referenceCount; // [esp+18h] [ebp-Ch]
  double v19; // [esp+1Ch] [ebp-8h]

  __asm { fld [esp+24h+arg_0] } /*0x5aee53*/
  __asm { fstp [esp+2Ch+var_8] }
  Math::SinCos(v19); /*0x5aee6a*/
  __asm { fstp [esp+38h+arg_0] } /*0x5aee6f*/
  Math::ArcTan2(v19); /*0x5aee75*/
  __asm { fld [esp+40h+arg_0] } /*0x5aee7f*/
  ptr_4 = ((unsigned int *)this)[0]; /*0x5aee83*/
  __asm { fchs } /*0x5aee8a*/
  uniqueId = ((unsigned int *)this)[0]; /*0x5aee8c*/
  __asm /*0x5aee93*/
  {
    fld [esp+40h+var_24]
    fmul st, st(1)
  }
  ptr_0 = this->AbstractClass; /*0x5aee99*/
  ptr_8 = ((unsigned int *)this)[0]; /*0x5aee9d*/
  __asm { fld [esp+40h+var_20] } /*0x5aeea1*/
  __asm { fmul st, st(3) }
  abstractFlags = ((unsigned int *)this)[0]; /*0x5aeead*/
  LODWORD(v19) = ((unsigned int *)this)[0]; /*0x5aeeb1*/
  result = ((unsigned int *)this)[0]; /*0x5aeeb5*/
  __asm { faddp st(1), st } /*0x5aeebb*/
  v16 = result; /*0x5aeebd*/
  referenceCount = ((unsigned int *)this)[0]; /*0x5aeec1*/
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
  ((unsigned int *)this)[0] = _ET1; /*0x5aeed8*/
  __asm /*0x5aeedb*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+8]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aeee9*/
  __asm /*0x5aeeec*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul st, st(3)
    faddp st(1), st
    fstp dword ptr [esi+0Ch]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aeefa*/
  __asm /*0x5aeefd*/
  {
//L-fix     fstp st
//L-fix     fld [esp+30h+var_24]
//L-fix     fmul st, st(1)
//L-fix     fld [esp+30h+var_20]
//L-fix     fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+10h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aef0f*/
  __asm /*0x5aef12*/
  {
    fld [esp+30h+var_1C]
    fmul st, st(1)
    fld [esp+30h+var_18]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+14h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aef22*/
  __asm /*0x5aef25*/
  {
    fld [esp+30h+var_14]
    fmul st, st(1)
    fld [esp+30h+var_10]
    fmul [esp+30h+arg_0]
    faddp st(1), st
    fstp dword ptr [esi+18h]
  }
  ((unsigned int *)this)[0] = _ET1; /*0x5aef35*/
  __asm /*0x5aef38*/
  {
    fld [esp+30h+var_C]
    fmul st, st(1)
    fld dword ptr [esp+30h+var_8]
    fmul [esp+30h+arg_0]
    faddp st(1), st
  }
  __asm { fstp dword ptr [esi+1Ch] }
  ((unsigned int *)this)[0] = _ET1; /*0x5aef49*/
  __asm { fstp st } /*0x5aef4e*/
  return result; /*0x5aef50*/

}

// ==== BACKFILL 0x005AF000  sub_5AF000  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5AF000::sub_5AF000(ObjectClass * aP1, ObjectClass * aP2)
{

  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = *((unsigned int *)this + 1); /*0x5af000*/
  v4 = *((unsigned int *)this + 2); /*0x5af003*/
  *((unsigned int *)this + 1) = v4 * aP1 + v3 * aP2; /*0x5af014*/
  *((unsigned int *)this + 2) = v4 * aP2 - v3 * aP1; /*0x5af023*/
  v5 = *((unsigned int *)this + 5); /*0x5af026*/
  v6 = *((unsigned int *)this + 6); /*0x5af029*/
  *((unsigned int *)this + 5) = v6 * aP1 + v5 * aP2; /*0x5af03a*/
  *((unsigned int *)this + 6) = v6 * aP2 - v5 * aP1; /*0x5af049*/
  v7 = *((unsigned int *)this + 9); /*0x5af04c*/
  v8 = *((unsigned int *)this + 10); /*0x5af04f*/
  *((unsigned int *)this + 9) = v8 * aP1 + v7 * aP2; /*0x5af060*/
  *((unsigned int *)this + 10) = v8 * aP2 - v7 * aP1; /*0x5af06f*/

}

// ==== BACKFILL 0x005AF080  Matrix3D::RotateZ  cls=Matrix3D  sig=csp  renamed_refs=0  residual=- ====
void Matrix3D::RotateZ(float a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AF080)
}

// ==== BACKFILL 0x005AF120  sub_5AF120  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5AF120::sub_5AF120(float a2, float a3)
{

  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6

  v3 = *this; /*0x5af120*/
  v4 = *((unsigned int *)this + 2); /*0x5af122*/
  *this = v3 * a3 - v4 * a2; /*0x5af133*/
  *((unsigned int *)this + 2) = v3 * a2 + v4 * a3; /*0x5af143*/
  v5 = *((unsigned int *)this + 4); /*0x5af146*/
  v6 = *((unsigned int *)this + 6); /*0x5af149*/
  *((unsigned int *)this + 4) = v5 * a3 - v6 * a2; /*0x5af15a*/
  *((unsigned int *)this + 6) = v5 * a2 + v6 * a3; /*0x5af16b*/
  v7 = *((unsigned int *)this + 8); /*0x5af16e*/
  v8 = *((unsigned int *)this + 10); /*0x5af171*/
  *((unsigned int *)this + 8) = v7 * a3 - v8 * a2; /*0x5af182*/
  *((unsigned int *)this + 10) = v7 * a2 + v8 * a3; /*0x5af193*/

}

// ==== BACKFILL 0x005AF2C0  sub_5AF2C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_5AF2C0::sub_5AF2C0()
{

  float v2[3]; // [esp+0h] [ebp-24h] BYREF
  float v3[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v2, 0, sizeof(v2)); /*0x5af2ce*/
  return *TransformMatrix3x4Point(v3, (float *)this, v2); /*0x5af303*/

}

// ==== BACKFILL 0x005AF310  sub_5AF310  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_5AF310::sub_5AF310()
{

  float *v1; // eax
  float v3[4]; // [esp+0h] [ebp-24h] BYREF
  float v4[3]; // [esp+18h] [ebp-Ch] BYREF

  memset(v3, 0, 12); /*0x5af31e*/
  v1 = TransformMatrix3x4Point(v4, (float *)this, v3); /*0x5af336*/
  v3[3] = *v1; /*0x5af33d*/
  return v1[1]; /*0x5af353*/

}

// ==== BACKFILL 0x005AF360  sub_5AF360  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_5AF360::sub_5AF360()
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

// ==== BACKFILL 0x005AF3B0  sub_5AF3B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_5AF3B0::sub_5AF3B0()
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

// ==== BACKFILL 0x005AFB80  TransformMatrix3x4Point  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * TransformMatrix3x4Point(AbstractClass * aP0, IUnknown * aP1, IUnknown * aP2)
{
  double v4; // st7
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v5 = aP1[2] * aP2[2] + aP1[1] * aP2[1] + *aP1 * *aP2 + aP1[3]; /*0x5afba1*/
  v6 = aP1[4] * *aP2 + aP1[6] * aP2[2] + aP1[5] * aP2[1] + aP1[7]; /*0x5afbbd*/
  v4 = aP1[8] * *aP2 + aP1[10] * aP2[2] + aP1[9] * aP2[1] + aP1[11]; /*0x5afbd7*/
  *aP0 = v5; /*0x5afbde*/
  v7 = v4; /*0x5afbe4*/
  aP0[1] = v6; /*0x5afbe8*/
  aP0[2] = v7; /*0x5afbef*/
  return aP0; /*0x5afbf2*/
}

// ==== BACKFILL 0x005AFC20  InvertMatrix3x3Signs  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
float * Matrix3x3_InvertSigns(float * a1, float * a2)
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

// ==== BACKFILL 0x005AFEF0  SmallFunc_5AFEF0  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_5AFEF0::sub_5AFEF0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5AFEF0)
}

// ==== BACKFILL 0x005AFF50  sub_5AFF50  cls=MechLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_5AFF50::sub_5AFF50()
{

  *(unsigned int *)this->LocomotionClass = &g_ptr_7EDB6C; /*0x5aff50*/
  *(unsigned int *)&this->LocomotionClass[4] = &g_ptr_7EDB6C; /*0x5aff56*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x5aff5d*/

}

// ==== BACKFILL 0x005AFF70  JumpjetLocomotionClass::SmallStub_5AFF70  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
char JumpjetLocomotionClass::SmallStub_5AFF70(int a1)
{

  return LOBYTE(a1->Accel); /*0x5aff77*/

}

// ==== BACKFILL 0x005AFF80  JumpjetLocomotionClass::GetMovementCoordinate_1  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetMovementCoordinate_1(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AFF80.json)
}

// ==== BACKFILL 0x005AFFE0  JumpjetLocomotionClass::GetRenderCoordinate_0  cls=JumpjetLocomotionClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * JumpjetLocomotionClass::GetRenderCoordinate_0(unsigned int * a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005AFFE0.json)
}
