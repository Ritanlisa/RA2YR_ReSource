// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00580B20  CellClass::updateLighting  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::updateLighting() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x580B20.json */
}

// ==== BACKFILL 0x00580B70  CellClass::applyTileDamage  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
bool CellClass::applyTileDamage() {
  return false;  /* G42.33b2 restub: auto restub (pass4+, 3 errs): wrong-universe gap2 body; truth func_0x580B70.json */
}

// ==== BACKFILL 0x00581090  CleanupMapSystems  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_581090::CleanupMapSystems() {

  int v2; // ebx
  int *p_nextArrayIndex; // esi
  unsigned int *abstractFlags; // esi
  char *p_needsRedraw; // ebx
  char *p_onBridge; // edi
  int v7; // ebp
  unsigned int *v8; // esi

  v2 = 13; /*0x581096*/
  p_nextArrayIndex = &((unsigned int *)this)[0]; /*0x58109b*/
  do /*0x5810b7*/
  {
    if ( *p_nextArrayIndex ) /*0x58109e*/
    {
      __3_YAXPAX_Z((void *)*p_nextArrayIndex); /*0x5810a5*/
      *p_nextArrayIndex = 0; /*0x5810ad*/
    }
    ++p_nextArrayIndex; /*0x5810b3*/
    --v2; /*0x5810b6*/
  }
  while ( v2 ); /*0x5810b7*/
  abstractFlags = (unsigned int *)((unsigned int *)this)[0]; /*0x5810b9*/
  if ( abstractFlags ) /*0x5810be*/
  {
    if ( *abstractFlags ) /*0x5810c0*/
      (**(void (***)(unsigned int, int))*abstractFlags)(*abstractFlags, 3); /*0x5810ca*/
    __3_YAXPAX_Z(abstractFlags); /*0x5810cd*/
    ((unsigned int *)this)[0] = 0; /*0x5810d5*/
  }
  p_needsRedraw = &this->needsRedraw; /*0x5810dc*/
  p_onBridge = &this->onBridge; /*0x5810e2*/
  v7 = 3; /*0x5810e8*/
  do /*0x58111c*/
  {
    (*(void (**)(char *))(*(unsigned int *)p_onBridge + 12))(p_onBridge); /*0x5810f1*/
    v8 = *(unsigned int **)p_needsRedraw; /*0x5810f4*/
    if ( *(unsigned int *)p_needsRedraw ) /*0x5810f4*/
    {
      if ( *v8 ) /*0x5810fa*/
        (**(void (***)(unsigned int, int))*v8)(*v8, 3); /*0x581104*/
      __3_YAXPAX_Z(v8); /*0x581107*/
      *(unsigned int *)p_needsRedraw = 0; /*0x58110f*/
    }
    p_needsRedraw += 4; /*0x581115*/
    p_onBridge += 24; /*0x581118*/
    --v7; /*0x58111b*/
  }
  while ( v7 ); /*0x58111c*/
  CleanupVeinholeSystem(); /*0x58111e*/
  Map_Destroy(); /*0x581123*/
  BuildingClass::FreeUpgradeQueue(); /*0x581128*/
  return BuildingClass::FreeUpgradeQueue2(); /*0x58112d*/

}

// ==== BACKFILL 0x00581F50  MapClass::BuildSubzones  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * MapClass::BuildSubzones()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00581F50.json)
}

// ==== BACKFILL 0x00582D30  SmallFunc_582D30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_582D30::SmallFunc_582D30(int a2) {

  int v3; // ebx
  int result; // eax
  int v5; // edi
  int v6; // edx

  v3 = 0; /*0x582d34*/
  result = this->customSound_controller[4]; /*0x582d36*/
  if ( result > 0 ) /*0x582d3b*/
  {
    v5 = 0; /*0x582d43*/
    do /*0x582d65*/
    {
      v6 = this->customSound_controller[1]; /*0x582d45*/
      if ( *(unsigned char *)(v6 + v5 + 8) ) /*0x582d4c*/
        RadarClass::RenderBlips((RadarClass *)this, (int *)(v6 + v5), a2); /*0x582d57*/
      result = this->customSound_controller[4]; /*0x582d5c*/
      ++v3; /*0x582d5f*/
      v5 += 16; /*0x582d60*/
    }
    while ( v3 < result ); /*0x582d65*/
  }
  return result; /*0x582d69*/

}

// ==== BACKFILL 0x00583820  Pathfinding::CheckCliff  cls=Pathfinding  sig=csp  renamed_refs=0  residual=- ====
void* Pathfinding::CheckCliff(void* a1, void* a2, int a3, int a4) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 35 errs): wrong-universe gap2 body; truth func_0x583820.json */
}

// ==== BACKFILL 0x005840C0  CheckMapReachability  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_5840C0::CheckMapReachability(CCINIClass * aP1, int a3, int a4, int j) {

  ObjectClass *v5; // ebx
  int v6; // ebp
  int *v7; // edx
  int *v8; // edi
  int v9; // edi
  int16_t *v10; // esi
  int v11; // eax
  int health; // ecx
  uint16_t v13; // dx
  int v14; // edx
  int v15; // edi
  int16_t *i; // eax
  int16_t *v17; // esi
  int v18; // edi
  int v19; // ebp
  int v20; // eax
  int v21; // ecx
  int16_t v22; // bx
  int v23; // eax
  unsigned short *v24; // ecx
  int v25; // eax
  unsigned short *v26; // edi
  int16_t v27; // bx
  int16_t v28; // bp
  int v29; // eax
  int v30; // ecx
  bool v31; // cc
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // esi
  int *v36; // ebx
  int v37; // ebp
  int v38; // edi
  int v39; // eax
  uint16_t *v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  unsigned int v46; // [esp+1Ch] [ebp-3Ch]
  unsigned int v47; // [esp+1Ch] [ebp-3Ch]
  int v48; // [esp+20h] [ebp-38h]
  int v49; // [esp+24h] [ebp-34h]
  int *v50; // [esp+24h] [ebp-34h]
  int v52; // [esp+2Ch] [ebp-2Ch]
  uint16_t v53; // [esp+2Ch] [ebp-2Ch]
  int16_t **v54; // [esp+30h] [ebp-28h]
  int16_t v55; // [esp+34h] [ebp-24h]
  int v56; // [esp+34h] [ebp-24h]
  Cell *v57; // [esp+38h] [ebp-20h]
  int *v58; // [esp+3Ch] [ebp-1Ch]
  WordVector v59; // [esp+40h] [ebp-18h] BYREF
  void *Block; // [esp+44h] [ebp-14h]
  int v61; // [esp+48h] [ebp-10h]
  char v62; // [esp+4Dh] [ebp-Bh]
  int v63; // [esp+50h] [ebp-8h]
  int v64; // [esp+54h] [ebp-4h]

  v5 = this; /*0x5840c8*/
  v6 = 1 << (a3 + 1); /*0x5840d6*/
  v48 = v6; /*0x5840e3*/
  WordVector::Constructor(&v59, 0, 0); /*0x5840e7*/
  v59 = (WordVector)&g_ptr_7E3238; /*0x5840f0*/
  v64 = 10; /*0x5840fa*/
  v63 = 0; /*0x584102*/
  if ( Block && v62 ) /*0x58410e*/
  {
    __3_YAXPAX_Z(Block); /*0x584111*/
    Block = 0; /*0x584119*/
  }
  v62 = 0; /*0x58411f*/
  v61 = 0; /*0x584124*/
  if ( v6 > 0 ) /*0x584128*/
  {
    v7 = &g_MissionQueueFrame.briefing[256]; /*0x58412a*/
    v52 = v6; /*0x58412f*/
    do /*0x584153*/
    {
      memset(v7, 0, 4 * ((unsigned int)v6 >> 2)); /*0x58413e*/
      v8 = &v7[(unsigned int)v6 >> 2]; /*0x58413e*/
      v7 += 2; /*0x584142*/
      memset(v8, 0, v6 & 3); /*0x584148*/
      --v52; /*0x58414f*/
    }
    while ( v52 ); /*0x584153*/
  }
  v9 = aP1; /*0x584155*/
  v10 = (int16_t *)(aP1 + 36); /*0x58415b*/
  v11 = Cell::CoordToIndex((Cell *)v5, (int16_t *)(aP1 + 36)); /*0x58415f*/
  if ( v11 >= 0 ) /*0x584166*/
  {
    health = v5->health; /*0x58416c*/
    if ( v11 >= health ) /*0x584171*/
      v11 = health - 1; /*0x584173*/
  }
  else
  {
    v11 = 0; /*0x584168*/
  }
  v55 = 0; /*0x58417a*/
  v13 = *(unsigned short *)(v5->estimatedHealth + 2 * (a3 + 4 * v11 + v11)); /*0x58418a*/
  g_MissionQueueFrame.briefing[8] = v9; /*0x58418e*/
  v53 = v13; /*0x584197*/
  v14 = (v6 - 1) & *(int16_t *)(v9 + 38); /*0x5841a5*/
  v15 = 1; /*0x5841a7*/
  *((unsigned char *)&g_MissionQueueFrame.briefing[2 * ((v6 - 1) & *v10) + 256] + v14) = 1; /*0x5841ac*/
  v58 = &dword_82A594[8 * *(unsigned int *)((*(int (**)(int))(*(unsigned int *)j + 132))(j) + 1460)]; /*0x5841ce*/
  while ( 1 ) /*0x5841e1*/
  {
    v46 = 0; /*0x5841e1*/
    v49 = v15 - 1; /*0x5841e9*/
    v57 = (Cell *)g_MissionQueueFrame.briefing[v15 + 7]; /*0x5841fb*/
    v54 = (int16_t **)(4 * (v15 - 1) + 11262568); /*0x5841ff*/
    for ( i = (int16_t *)Cell::GetNeighbourContent(v57, 0); ; i = (int16_t *)Cell::GetNeighbourContent(v57, v46) ) /*0x584203*/
    {
      v17 = i; /*0x58421b*/
      v18 = (v6 - 1) & i[18]; /*0x58422b*/
      v19 = (v6 - 1) & i[19]; /*0x58422d*/
      v20 = Cell::CoordToIndex((Cell *)v5, i + 18); /*0x584232*/
      if ( v20 >= 0 ) /*0x584239*/
      {
        v21 = v5->health; /*0x58423f*/
        if ( v20 >= v21 ) /*0x584244*/
          v20 = v21 - 1; /*0x584246*/
      }
      else
      {
        v20 = 0; /*0x58423b*/
      }
      v22 = *(unsigned short *)(v5->estimatedHealth + 2 * (a3 + 4 * v20 + v20)); /*0x584259*/
      if ( !(*(int (**)(int16_t *, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)j + 428))( /*0x584286*/
              v17,
              v46,
              *((char *)v17 + 283),
              0,
              1)
        || v58[*((unsigned int *)v17 + 19)] != 1 )
      {
        if ( v22 == v53 ) /*0x584291*/
        {
          if ( !*((unsigned char *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) ) /*0x584293*/
          {
            *((unsigned char *)&g_MissionQueueFrame.briefing[2 * v18 + 256] + v19) = 1; /*0x5842ab*/
            *v54 = v17; /*0x5842b3*/
            ++v49; /*0x5842b8*/
            ++v54; /*0x5842bc*/
          }
        }
        else if ( v22 != v55 && v22 ) /*0x5842cc*/
        {
          v55 = v22; /*0x5842d2*/
          v23 = v63 - 1; /*0x5842d6*/
          if ( v63 - 1 >= 0 ) /*0x5842db*/
          {
            v24 = (char *)Block + 2 * v23; /*0x5842e1*/
            do /*0x5842ef*/
            {
              if ( *v24 == v22 ) /*0x5842e7*/
                break; /*0x5842e7*/
              --v23; /*0x5842e9*/
              --v24; /*0x5842ea*/
            }
            while ( v23 >= 0 ); /*0x5842ef*/
          }
          if ( v23 == -1 /*0x58431f*/
            && (v63 < v61
             || (v62 || !v61)
             && v64 > 0
             && (*(uint8_t (**)(WordVector *, int, unsigned int))(*(unsigned int *)&v59 + 8))(&v59, v64 + v61, 0)) )
          {
            v25 = v63++; /*0x58432a*/
            *((unsigned short *)Block + v25) = v22; /*0x584335*/
          }
        }
      }
      if ( (int)++v46 >= 8 ) /*0x584345*/
        break; /*0x584345*/
      v5 = this; /*0x584205*/
      v6 = v48; /*0x584209*/
    }
    if ( v49 <= 0 ) /*0x584351*/
      break; /*0x584351*/
    v15 = v49; /*0x5841d4*/
    v5 = this; /*0x5841d8*/
    v6 = v48; /*0x5841dc*/
  }
  v26 = (unsigned short *)(aP1 + 36); /*0x58436a*/
  v27 = (v48 - 1) & *(unsigned short *)(aP1 + 36); /*0x58436d*/
  v28 = (v48 - 1) & *(unsigned short *)(aP1 + 38); /*0x58436f*/
  v47 = 0; /*0x584377*/
  if ( v48 > 0 ) /*0x58437f*/
  {
    v50 = &g_MissionQueueFrame.briefing[256]; /*0x584385*/
    while ( 2 ) /*0x58438d*/
    {
      for ( j = 0; j < v48; ++j ) /*0x58438d*/
      {
        (v56) = ((v56) & ~0xFFFF) | ((v27 + *v26) & 0xFFFF); /*0x5843a6*/
        HIWORD(v56) = v26[1] + v28; /*0x5843b1*/
        aP1 = v56; /*0x5843ba*/
        if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)this, (int16_t *)&aP1, 1) ) /*0x5843c1*/
        {
          v29 = (int16_t)aP1 + SHIWORD(aP1) * (*((unsigned int *)this + 62) + *((unsigned int *)this + 61) + 1); /*0x5843e7*/
          if ( v29 >= 0 ) /*0x5843e9*/
          {
            v30 = this->health; /*0x5843ef*/
            if ( v29 >= v30 ) /*0x5843f4*/
              v29 = v30 - 1; /*0x5843f6*/
          }
          else
          {
            v29 = 0; /*0x5843eb*/
          }
          if ( v53 == *(unsigned short *)(this->estimatedHealth + 2 * (a3 + 4 * v29 + v29)) && !*((unsigned char *)v50 + j) ) /*0x58441c*/
          {
            v59 = (WordVector)&g_ptr_7E8500; /*0x584522*/
            if ( Block && v62 ) /*0x584534*/
              __3_YAXPAX_Z(Block); /*0x584537*/
            return 1; /*0x584542*/
          }
        }
      }
      v31 = (int)++v47 < v48; /*0x584443*/
      v50 += 2; /*0x584449*/
      if ( v31 ) /*0x58444d*/
        continue; /*0x58444d*/
      break;
    }
  }
  v32 = *((unsigned int *)&this->isAliveFlag + 6 * a3) + 36 * v53; /*0x58446e*/
  v33 = *(unsigned int *)(v32 + 4); /*0x584471*/
  v34 = *(unsigned int *)(v32 + 16) - 1; /*0x584478*/
  if ( v34 >= 0 ) /*0x584479*/
  {
    v35 = a4; /*0x58447b*/
    v36 = (int *)(v33 + 8 * v34); /*0x58447f*/
    v37 = v34 + 1; /*0x584482*/
    do /*0x5844ef*/
    {
      v38 = *v36; /*0x584489*/
      v39 = v63 - 1; /*0x58448b*/
      if ( v63 - 1 >= 0 ) /*0x584490*/
      {
        v40 = (uint16_t *)((char *)Block + 2 * v39); /*0x584496*/
        do /*0x5844a8*/
        {
          if ( *v40 == v38 ) /*0x5844a0*/
            break; /*0x5844a0*/
          --v39; /*0x5844a2*/
          --v40; /*0x5844a3*/
        }
        while ( v39 >= 0 ); /*0x5844a8*/
      }
      if ( v39 == -1 ) /*0x5844ad*/
      {
        v41 = *(unsigned int *)(v35 + 8); /*0x5844af*/
        if ( *(unsigned int *)(v35 + 16) < v41 /*0x5844d4*/
          || (*(unsigned char *)(v35 + 13) || !v41)
          && (v42 = *(unsigned int *)(v35 + 20), v42 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v35 + 8))(v35, v41 + v42, 0) )
        {
          v43 = *(unsigned int *)(v35 + 16); /*0x5844db*/
          v44 = *(unsigned int *)(v35 + 4); /*0x5844de*/
          *(unsigned int *)(v35 + 16) = v43 + 1; /*0x5844e4*/
          *(unsigned short *)(v44 + 2 * v43) = v38; /*0x5844e7*/
        }
      }
      v36 -= 2; /*0x5844eb*/
      --v37; /*0x5844ee*/
    }
    while ( v37 ); /*0x5844ef*/
  }
  v59 = (WordVector)&g_ptr_7E8500; /*0x5844f5*/
  if ( Block ) /*0x5844ff*/
  {
    if ( v62 ) /*0x584507*/
      __3_YAXPAX_Z(Block); /*0x58450a*/
  }
  return 0; /*0x584512*/

}

// ==== BACKFILL 0x005851B0  BuildTileAdjacencyTable  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5851B0::BuildTileAdjacencyTable(IUnknown * aP1) {

  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  Cell *v6; // eax
  Cell *v7; // edi
  char v8; // al
  int v9; // ecx
  int v10; // edi
  unsigned short *v11; // ebx
  unsigned short *v12; // edi
  int v13; // ebp
  int v14; // ebx
  int *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edx
  char v19; // al
  int v20; // eax
  int v21; // edx
  int v22; // edi
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // ebx
  int *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // edx
  char v34; // al
  int v35; // eax
  int v36; // edx
  int v37; // edi
  int v38; // edi
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // ebx
  int *v45; // ecx
  int v46; // edi
  int v47; // eax
  int v48; // edx
  char v49; // al
  int v50; // eax
  int v51; // edx
  int v52; // edi
  int v53; // edi
  int result; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // ecx
  char *p_isAliveFlag; // [esp+30h] [ebp-50h]
  int16_t v59[2]; // [esp+34h] [ebp-4Ch] BYREF
  int16_t v60[2]; // [esp+38h] [ebp-48h] BYREF
  int16_t v61[4]; // [esp+3Ch] [ebp-44h] BYREF
  int16_t v62[2]; // [esp+44h] [ebp-3Ch] BYREF
  int16_t v63[2]; // [esp+48h] [ebp-38h] BYREF
  int16_t v64[4]; // [esp+4Ch] [ebp-34h] BYREF
  int v65; // [esp+54h] [ebp-2Ch]
  int v66; // [esp+5Ch] [ebp-24h]
  int v67; // [esp+64h] [ebp-1Ch]
  int v68; // [esp+6Ch] [ebp-14h]
  int v69; // [esp+74h] [ebp-Ch]
  int v70; // [esp+7Ch] [ebp-4h]

  v3 = *aP1; /*0x5851bd*/
  v4 = aP1[1]; /*0x5851bf*/
  *(unsigned int *)v59 = v3; /*0x5851c2*/
  *(unsigned int *)v60 = v4; /*0x5851c6*/
  v5 = (int16_t)v3 + ((short)(((v3) >> 16) & 0xFFFF) << 9); /*0x5851d5*/
  if ( v5 < 0x40000 && (v6 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v5)) != 0 ) /*0x5851eb*/
  {
    v7 = v6; /*0x5851ed*/
  }
  else
  {
    g_MissionQueueFrame.briefing[139] = v3; /*0x5851f1*/
    v7 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x5851f7*/
  }
  *(unsigned int *)v61 = *(unsigned int *)&g_MissionQueueFrame.waypoints[2134]; /*0x585203*/
  if ( (uint8_t)Cell::IsInRange(v7) || (uint8_t)Cell::IsInRange2(v7) ) /*0x585212*/
  {
    v8 = Cell::IsInRange(v7); /*0x585221*/
    v9 = g_Cell_BuildabilityLUT; /*0x585226*/
    if ( !v8 ) /*0x585231*/
      v9 = g_TerrainBridgeIndex; /*0x585233*/
    v10 = dword_82A944[v7->Cell_field_0x38 - v9]; /*0x58523f*/
    v11 = (unsigned short *)(4 * (v10 & 7) + 9041544); /*0x58524b*/
    *(unsigned int *)v62 = *CellStruct::Add((CellStruct *)v59, &aP1, v11); /*0x585265*/
    v12 = (unsigned short *)(4 * (((unsigned char)v10 - 4) & 7) + 9041544); /*0x585271*/
    *(unsigned int *)v64 = *CellStruct::Add((CellStruct *)v59, &aP1, v12); /*0x58528b*/
    *(unsigned int *)v63 = *CellStruct::Add((CellStruct *)v60, &aP1, v11); /*0x5852a0*/
    *(unsigned int *)v61 = *CellStruct::Add((CellStruct *)v60, &aP1, v12); /*0x5852ab*/
  }
  (v65) = ((v65) & ~0xFF) | ((0) & 0xFF); /*0x5852b5*/
  (v66) = ((v66) & ~0xFF) | ((0) & 0xFF); /*0x5852ba*/
  (v67) = ((v67) & ~0xFF) | ((0) & 0xFF); /*0x5852bf*/
  (v68) = ((v68) & ~0xFF) | ((0) & 0xFF); /*0x5852c4*/
  (v69) = ((v69) & ~0xFF) | ((0) & 0xFF); /*0x5852c9*/
  (v70) = ((v70) & ~0xFF) | ((0) & 0xFF); /*0x5852ce*/
  v13 = 0; /*0x5852d3*/
  p_isAliveFlag = &this->isAliveFlag; /*0x5852d5*/
  do /*0x585581*/
  {
    v14 = *(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v59) + v13); /*0x5852f5*/
    v15 = (int *)*(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v60) + v13); /*0x58530a*/
    aP1 = v15; /*0x585312*/
    v16 = *(unsigned int *)p_isAliveFlag + 36 * v14; /*0x585318*/
    v17 = *(unsigned int *)(v16 + 8); /*0x58531b*/
    if ( *(unsigned int *)(v16 + 16) < v17 /*0x58534c*/
      || (*(unsigned char *)(v16 + 13) || !v17)
      && (v18 = *(unsigned int *)(v16 + 20), v18 > 0)
      && (v19 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v16 + 8))(v16, v17 + v18, 0), v15 = aP1, v19) )
    {
      v20 = *(unsigned int *)(v16 + 16); /*0x58534e*/
      *(unsigned int *)(v16 + 16) = v20 + 1; /*0x585354*/
      v21 = *(unsigned int *)(v16 + 4); /*0x585357*/
      v22 = v65; /*0x58535a*/
      *(unsigned int *)(v21 + 8 * v20) = v15; /*0x58535e*/
      *(unsigned int *)(v21 + 8 * v20 + 4) = v22; /*0x585361*/
    }
    v23 = *(unsigned int *)p_isAliveFlag + 36 * (unsigned int)v15; /*0x585372*/
    v24 = *(unsigned int *)(v23 + 8); /*0x585375*/
    if ( *(unsigned int *)(v23 + 16) < v24 /*0x585398*/
      || (*(unsigned char *)(v23 + 13) || !v24)
      && (v25 = *(unsigned int *)(v23 + 20), v25 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v23 + 8))(v23, v24 + v25, 0) )
    {
      v26 = *(unsigned int *)(v23 + 16); /*0x58539f*/
      v27 = *(unsigned int *)(v23 + 4); /*0x5853a2*/
      *(unsigned int *)(v23 + 16) = v26 + 1; /*0x5853a8*/
      v28 = v66; /*0x5853ab*/
      *(unsigned int *)(v27 + 8 * v26) = v14; /*0x5853af*/
      *(unsigned int *)(v27 + 8 * v26 + 4) = v28; /*0x5853b2*/
    }
    v29 = *(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v62) + v13); /*0x5853d2*/
    v30 = (int *)*(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v63) + v13); /*0x5853e7*/
    aP1 = v30; /*0x5853ef*/
    v31 = *(unsigned int *)p_isAliveFlag + 36 * v29; /*0x5853f5*/
    v32 = *(unsigned int *)(v31 + 8); /*0x5853f8*/
    if ( *(unsigned int *)(v31 + 16) < v32 /*0x585429*/
      || (*(unsigned char *)(v31 + 13) || !v32)
      && (v33 = *(unsigned int *)(v31 + 20), v33 > 0)
      && (v34 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v31 + 8))(v31, v32 + v33, 0), v30 = aP1, v34) )
    {
      v35 = *(unsigned int *)(v31 + 16); /*0x58542b*/
      *(unsigned int *)(v31 + 16) = v35 + 1; /*0x585431*/
      v36 = *(unsigned int *)(v31 + 4); /*0x585434*/
      v37 = v67; /*0x585437*/
      *(unsigned int *)(v36 + 8 * v35) = v30; /*0x58543b*/
      *(unsigned int *)(v36 + 8 * v35 + 4) = v37; /*0x58543e*/
    }
    v38 = *(unsigned int *)p_isAliveFlag + 36 * (unsigned int)v30; /*0x58544f*/
    v39 = *(unsigned int *)(v38 + 8); /*0x585452*/
    if ( *(unsigned int *)(v38 + 16) < v39 /*0x585475*/
      || (*(unsigned char *)(v38 + 13) || !v39)
      && (v40 = *(unsigned int *)(v38 + 20), v40 > 0)
      && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v38 + 8))(v38, v39 + v40, 0) )
    {
      v41 = *(unsigned int *)(v38 + 16); /*0x58547c*/
      v42 = *(unsigned int *)(v38 + 4); /*0x58547f*/
      *(unsigned int *)(v38 + 16) = v41 + 1; /*0x585485*/
      v43 = v68; /*0x585488*/
      *(unsigned int *)(v42 + 8 * v41) = v29; /*0x58548c*/
      *(unsigned int *)(v42 + 8 * v41 + 4) = v43; /*0x58548f*/
    }
    v44 = *(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v64) + v13); /*0x5854af*/
    v45 = (int *)*(int16_t *)(this->estimatedHealth + 10 * CellToTileIndexMap(this, v61) + v13); /*0x5854c4*/
    aP1 = v45; /*0x5854cc*/
    v46 = *(unsigned int *)p_isAliveFlag + 36 * v44; /*0x5854d2*/
    v47 = *(unsigned int *)(v46 + 8); /*0x5854d5*/
    if ( *(unsigned int *)(v46 + 16) < v47 /*0x585506*/
      || (*(unsigned char *)(v46 + 13) || !v47)
      && (v48 = *(unsigned int *)(v46 + 20), v48 > 0)
      && (v49 = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v46 + 8))(v46, v47 + v48, 0), v45 = aP1, v49) )
    {
      v50 = *(unsigned int *)(v46 + 16); /*0x585508*/
      *(unsigned int *)(v46 + 16) = v50 + 1; /*0x58550e*/
      v51 = *(unsigned int *)(v46 + 4); /*0x585511*/
      v52 = v69; /*0x585514*/
      *(unsigned int *)(v51 + 8 * v50) = v45; /*0x585518*/
      *(unsigned int *)(v51 + 8 * v50 + 4) = v52; /*0x58551b*/
    }
    v53 = *(unsigned int *)p_isAliveFlag + 36 * (unsigned int)v45; /*0x58552c*/
    result = *(unsigned int *)(v53 + 8); /*0x58552f*/
    if ( *(unsigned int *)(v53 + 16) < result /*0x585557*/
      || (*(unsigned char *)(v53 + 13) || !result)
      && (v55 = *(unsigned int *)(v53 + 20), v55 > 0)
      && (result = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v53 + 8))(v53, result + v55, 0), (unsigned char)result) )
    {
      result = *(unsigned int *)(v53 + 16); /*0x585559*/
      v56 = *(unsigned int *)(v53 + 4); /*0x58555c*/
      *(unsigned int *)(v53 + 16) = result + 1; /*0x585562*/
      v57 = v70; /*0x585565*/
      *(unsigned int *)(v56 + 8 * result) = v44; /*0x585569*/
      *(unsigned int *)(v56 + 8 * result + 4) = v57; /*0x58556c*/
    }
    v13 += 2; /*0x585574*/
    p_isAliveFlag += 24; /*0x58557d*/
  }
  while ( v13 < 6 ); /*0x585581*/
  return result; /*0x585587*/

}

// ==== BACKFILL 0x005855A0  LayerClass::AssignCellOwnership  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
int LayerClass::AssignCellOwnership() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x5855A0.json */
}

// ==== BACKFILL 0x00585930  FloodFillConnectedCells  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_585930::FloodFillConnectedCells(MapClass * aP1, int a3) {

  int v4; // eax
  int v5; // esi
  char *TileDataEntry; // eax
  Tactical *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // edx
  int i; // eax
  int v17; // ecx
  int v18; // eax
  int j; // edi
  int *v20; // eax
  int v21; // ecx
  int v22; // esi
  char *CellData; // esi
  unsigned int v24; // eax
  Cell *v25; // eax
  Cell *v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int v32; // ebp
  int m; // esi
  int k; // [esp+18h] [ebp-44h] BYREF
  int v35; // [esp+1Ch] [ebp-40h]
  int v36; // [esp+20h] [ebp-3Ch]
  LayerClass *v37; // [esp+24h] [ebp-38h]
  int v38; // [esp+28h] [ebp-34h] BYREF
  _VectorClass_VCell v39; // [esp+2Ch] [ebp-30h] BYREF
  int v40; // [esp+40h] [ebp-1Ch]
  _VectorClass_VCell v41; // [esp+44h] [ebp-18h] BYREF
  int v42; // [esp+58h] [ebp-4h]

  v37 = (LayerClass *)this; /*0x585941*/
  VectorClass::CellConstructor((VectorClass *)&v41, 0, 0); /*0x585945*/
  *(unsigned int *)v41.__pad_0 = &g_ptr_7E3238; /*0x585958*/
  v42 = 10; /*0x58595c*/
  *(unsigned int *)v41.__tail_10 = 0; /*0x585960*/
  Buffer::Cleanup(&v41); /*0x585964*/
  v42 = 100; /*0x58596f*/
  VectorClass::CellConstructor((VectorClass *)&v39, 0, 0); /*0x585977*/
  *(unsigned int *)v39.__pad_0 = &g_ptr_7E3238; /*0x585980*/
  v40 = 10; /*0x585984*/
  *(unsigned int *)v39.__tail_10 = 0; /*0x585988*/
  Buffer::Cleanup(&v39); /*0x58598c*/
  v4 = 1000; /*0x585997*/
  v5 = g_MapCellWidth * g_MapCellWidth - 1; /*0x58599f*/
  v40 = 1000; /*0x5859a0*/
  if ( v5 >= 0 ) /*0x5859a4*/
  {
    do /*0x5859b4*/
    {
      TileDataEntry = GetTileDataEntry(v5--); /*0x5859a8*/
      TileDataEntry[73] = 0; /*0x5859ae*/
      TileDataEntry[74] = 0; /*0x5859b1*/
    }
    while ( v5 >= 0 ); /*0x5859b4*/
    v4 = v40; /*0x5859b6*/
  }
  v7 = (Tactical *)aP1; /*0x5859c2*/
  if ( *(int *)v39.__tail_10 < v39.m_8 /*0x5859e4*/
    || (BYTE1(v39.m_C) || !v39.m_8)
    && v4 > 0
    && (*(uint8_t (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v39.__pad_0 + 8))(
         &v39,
         v4 + v39.m_8,
         0) )
  {
    v8 = (*(unsigned int *)v39.__tail_10)++; /*0x5859f3*/
    *(unsigned int *)(*(unsigned int *)&v39.m_1[3] + 4 * v8) = *(unsigned int *)v7->__pad_0; /*0x5859fc*/
  }
  if ( *(int *)v41.__tail_10 < v41.m_8 /*0x585a29*/
    || (BYTE1(v41.m_C) || !v41.m_8)
    && v42 > 0
    && (*(uint8_t (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v41.__pad_0 + 8))(
         &v41,
         v42 + v41.m_8,
         0) )
  {
    v9 = (*(unsigned int *)v41.__tail_10)++; /*0x585a38*/
    *(unsigned int *)(*(unsigned int *)&v41.m_1[3] + 4 * v9) = *(unsigned int *)v7->__pad_0; /*0x585a41*/
  }
  v10 = *(int16_t *)v7->__pad_0; /*0x585a44*/
  v11 = *(int16_t *)v7->Tactical_field_0x2; /*0x585a47*/
  v12 = *((unsigned int *)this + 61); /*0x585a4b*/
  if ( v10 + v11 > v12 && v10 - v11 < v12 && v11 - v10 < v12 && v10 + v11 <= v12 + 2 * *((unsigned int *)this + 62) ) /*0x585a71*/
    Tactical::GetCellData(v7)[73] = 1; /*0x585a7a*/
  v13 = *(int16_t *)v7->__pad_0 + (*(int16_t *)v7->Tactical_field_0x2 << 9); /*0x585a88*/
  if ( v13 >= 0x40000 || (v14 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v13)) == 0 ) /*0x585a9e*/
  {
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x585aa2*/
    g_MissionQueueFrame.briefing[139] = *(unsigned int *)v7->__pad_0; /*0x585aa7*/
  }
  v15 = *(unsigned int *)v39.__tail_10; /*0x585ab4*/
  v36 = *((char *)v14 + 283); /*0x585ab8*/
  for ( i = *(unsigned int *)v39.__tail_10; *(unsigned int *)v39.__tail_10; i = *(unsigned int *)v39.__tail_10 ) /*0x585ac0*/
  {
    v17 = *(unsigned int *)&v39.m_1[3]; /*0x585ac6*/
    v18 = i - 1; /*0x585aca*/
    k = *(unsigned int *)(*(unsigned int *)&v39.m_1[3] + 4 * v18); /*0x585ad0*/
    if ( v18 < v15 ) /*0x585ad4*/
    {
      *(unsigned int *)v39.__tail_10 = v15 - 1; /*0x585ad9*/
      if ( v18 < v15 - 1 ) /*0x585add*/
      {
        while ( 1 ) /*0x585ae9*/
        {
          *(unsigned int *)(v17 + 4 * v18) = *(unsigned int *)(v17 + 4 * v18 + 4); /*0x585ae9*/
          if ( ++v18 >= *(int *)v39.__tail_10 ) /*0x585af3*/
            break; /*0x585af3*/
          v17 = *(unsigned int *)&v39.m_1[3]; /*0x585ae1*/
        }
      }
    }
    for ( j = 0; j < 8; ++j ) /*0x585af5*/
    {
      v20 = CellStruct::Add((CellStruct *)&k, &v38, (unsigned short *)(4 * (j & 7) + 9041544)); /*0x585b0d*/
      v21 = *((unsigned int *)this + 61); /*0x585b14*/
      v35 = *v20; /*0x585b1a*/
      aP1 = v35; /*0x585b1e*/
      v22 = (short)(((v35) >> 16) & 0xFFFF) + (int16_t)v35; /*0x585b2a*/
      if ( v22 > v21 /*0x585b56*/
        && (int16_t)v35 - (short)(((v35) >> 16) & 0xFFFF) < v21
        && (short)(((v35) >> 16) & 0xFFFF) - (int16_t)v35 < v21
        && v22 <= v21 + 2 * *((unsigned int *)this + 62) )
      {
        CellData = Tactical::GetCellData((Tactical *)&aP1); /*0x585b69*/
        v24 = (int16_t)aP1 + (SHIWORD(aP1) << 9); /*0x585b76*/
        if ( v24 < 0x40000 && (v25 = *(Cell **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v24)) != 0 ) /*0x585b8c*/
        {
          v26 = v25; /*0x585b8e*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = aP1; /*0x585b92*/
          v26 = (Cell *)&g_MissionQueueFrame.briefing[130]; /*0x585b98*/
        }
        if ( !CellData[73] ) /*0x585b9d*/
        {
          if ( (unsigned char)a3 ) /*0x585bae*/
          {
            if ( !(uint8_t)Cell::IsGroundTypeRange(v26) ) /*0x585bb0*/
              continue; /*0x585bb7*/
          }
          else if ( v26->Cell_field_0x11B[0] != v36 || !(uint8_t)Cell::IsEmpty(v26) ) /*0x585bc8*/
          {
            continue; /*0x585bcf*/
          }
          if ( *(int *)v39.__tail_10 < v39.m_8 /*0x585bfe*/
            || (BYTE1(v39.m_C) || !v39.m_8)
            && v40 > 0
            && (*(uint8_t (**)(_VectorClass_VCell *, int, unsigned int))(*(unsigned int *)v39.__pad_0 + 8))(
                 &v39,
                 v40 + v39.m_8,
                 0) )
          {
            v27 = (*(unsigned int *)v39.__tail_10)++; /*0x585c0d*/
            *(unsigned int *)(*(unsigned int *)&v39.m_1[3] + 4 * v27) = aP1; /*0x585c18*/
          }
          TileVector::PushBack((TileVector *)&v41, &aP1); /*0x585c24*/
          CellData[73] = 1; /*0x585c29*/
        }
      }
    }
    v15 = *(unsigned int *)v39.__tail_10; /*0x585c37*/
  }
  v28 = 0; /*0x585c45*/
  for ( k = 0; v28 < *(int *)v41.__tail_10; k = v28 ) /*0x585c51*/
  {
    v29 = *(unsigned int *)(*(unsigned int *)&v41.m_1[3] + 4 * v28); /*0x585c57*/
    v36 = v29; /*0x585c5a*/
    v30 = (short)(((v29) >> 16) & 0xFFFF) - 1; /*0x585c63*/
    v31 = (short)(((v29) >> 16) & 0xFFFF) + 2; /*0x585c66*/
    if ( v30 < v31 ) /*0x585c6b*/
    {
      v32 = (int16_t)v29 + 2; /*0x585c73*/
      v36 = (int16_t)v29 - 1; /*0x585c76*/
      do /*0x585cbd*/
      {
        for ( m = v36; m < v32; ++m ) /*0x585c80*/
        {
          LOWORD(a3) = m; /*0x585c8b*/
          HIWORD(a3) = v30; /*0x585c90*/
          if ( (uint8_t)LayerClass::CoordinatesLegal(v37, (int16_t *)&a3) ) /*0x585c95*/
          {
            LOWORD(aP1) = m; /*0x585ca2*/
            HIWORD(aP1) = v30; /*0x585ca7*/
            Tactical::GetCellData((Tactical *)&aP1)[74] = 1; /*0x585cb1*/
          }
        }
        ++v30; /*0x585cba*/
      }
      while ( v30 < v31 ); /*0x585cbd*/
      v28 = k; /*0x585cbf*/
    }
    ++v28; /*0x585cc7*/
  }
  *(unsigned int *)v39.__pad_0 = &g_ptr_7E8500; /*0x585cd9*/
  Buffer::Cleanup(&v39); /*0x585cdd*/
  *(unsigned int *)v41.__pad_0 = &g_ptr_7E8500; /*0x585ce6*/
  Buffer::Cleanup(&v41); /*0x585cea*/

}

// ==== BACKFILL 0x00586360  Cell::IsPassable  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool Cell_IsPassable_free(void * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (truth = 0x586360)
}

// ==== BACKFILL 0x005864A0  FogOfWar_Get  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool FogOfWar_Get(IUnknown * aP0)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5864A0)
}

// ==== BACKFILL 0x005865E0  Game::Stub3  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Coord::Stub3(int a1)
{
    (void)a1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005865E0.json)
}

// ==== BACKFILL 0x005865F0  CellClass::SpiralFindClosest  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::SpiralFindClosest(IUnknown * aP0, MouseClass * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5865F0)
}

// ==== BACKFILL 0x005866C0  SmallFunc_5866C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_5866C0::SmallFunc_5866C0() {

  int v2; // eax
  int result; // eax

  v2 = *((unsigned int *)this + 61); /*0x5866c3*/
  *((unsigned int *)this + 67) = 1; /*0x5866c9*/
  *((unsigned int *)this + 68) = v2; /*0x5866d3*/
  *((unsigned int *)this + 69) = v2 - 1; /*0x5866dc*/
  *((unsigned int *)this + 70) = (v2 << 11) + *((unsigned int *)this + 79) + 4; /*0x5866f1*/
  for ( result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5866fe*/
        result;
        result = LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    if ( (*(unsigned char *)(result + 320) & 2) == 0 ) /*0x586707*/
      CellClass::CreateFoggedObjects((CellClass *)result); /*0x58670b*/
  }
  return result; /*0x58671b*/

}

// ==== BACKFILL 0x00586990  LayerClass::Update_Pathfinding_2  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
void LayerClass::Update_Pathfinding_2(int a1) {
}

// ==== BACKFILL 0x00586E50  HouseClass::ClampToUsableCell  cls=HouseClass  sig=csp  renamed_refs=0  residual=- ====
void* HouseClass::ClampToUsableCell(void* a1, void* a2)
{
    (void)a1; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00586E50.json)
}

// ==== BACKFILL 0x00587C50  DiagnoseMapCheck  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_587C50::DiagnoseMapCheck() {

  LayerClass *v1; // esi
  int count; // eax
  int v3; // ebx
  char **v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  bool v8; // al
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int16_t *v14; // ebp
  int16_t *v15; // edi
  int16_t *v16; // esi
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  char v24; // [esp+Bh] [ebp-19h]
  bool v25; // [esp+Ch] [ebp-18h]
  bool v26; // [esp+Dh] [ebp-17h]
  bool v27; // [esp+Eh] [ebp-16h]
  bool v28; // [esp+Fh] [ebp-15h]
  int v29; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]
  char **v32; // [esp+1Ch] [ebp-8h]
  FILE *Stream; // [esp+20h] [ebp-4h]

  v1 = (LayerClass *)this; /*0x587c55*/
  v24 = 1; /*0x587c65*/
  Stream = fopen(&(unsigned int *)((char *)&stru_82ADA8 + 11), &(unsigned int *)((char *)&stru_82ADA8 + 27)); /*0x587c6f*/
  count = v1[20].count; /*0x587c73*/
  v1[22].count = 1; /*0x587c79*/
  v1[22].capacity = count; /*0x587c83*/
  v1[23].items[0] = count - 1; /*0x587c8f*/
  v1[23].count = (count << 11) + v1[26].count + 4; /*0x587ca4*/
  v3 = LayerClass::CellIteratorNext(v1); /*0x587caf*/
  for ( i = v3; v3; i = v3 ) /*0x587cb7*/
  {
    if ( (uint8_t)Type::CheckAmbiguity((Type *)v1, v3, 1) ) /*0x587cc4*/
    {
      v4 = &off_81BA88; /*0x587cd1*/
      v29 = 0; /*0x587cd6*/
      v32 = &off_81BA88; /*0x587cde*/
      do /*0x588065*/
      {
        if ( v4 != off_81BAAC && v4 != off_81BAA0 ) /*0x587cf4*/
        {
          v27 = dword_82A594[8 * v29 + *(unsigned int *)(v3 + 76)] == 1; /*0x587d1e*/
          v8 = 0; /*0x587d5f*/
          if ( (*(unsigned int *)(v3 + 320) & 0x100) != 0 /*0x587d59*/
            && ((v5 = *(unsigned int *)(v3 + 320) & 0x800) != 0
             && ((v6 = *(unsigned int *)(v3 + 44)) == 0 || *(int16_t *)(v6 + 38) - *(int16_t *)(v3 + 38) != 2)
             || !v5 && ((v7 = *(unsigned int *)(v3 + 44)) == 0 || *(int16_t *)(v7 + 36) - *(int16_t *)(v3 + 36) != 2)) )
          {
            v8 = 1; /*0x587d22*/
          }
          v25 = v8; /*0x587d63*/
          if ( dword_82A594[8 * v29 + *(unsigned int *)(v3 + 76)] == 1 || v8 ) /*0x587d6b*/
          {
            v9 = v1[21].count; /*0x587d71*/
            v10 = v1[21].items[0]; /*0x587d77*/
            v11 = v10 + v9 + 1; /*0x587d7d*/
            v12 = v9 - v10; /*0x587d81*/
            v13 = v1[20].count; /*0x587d83*/
            v1[23].capacity = v11; /*0x587d89*/
            v1[24].items[0] = v13 + v12; /*0x587d93*/
            v14 = (int16_t *)MapClass::SpiralSearch((MapClass *)v1); /*0x587d9e*/
            if ( v14 ) /*0x587da2*/
            {
              v15 = (int16_t *)(v3 + 36); /*0x587da8*/
              do /*0x588041*/
              {
                v16 = v14 + 18; /*0x587db3*/
                v17 = v14[18] + v14[19]; /*0x587db6*/
                v18 = *(int16_t *)(v3 + 38); /*0x587db9*/
                v19 = *v15; /*0x587dbd*/
                if ( v17 > v19 + v18 || v17 == v19 + v18 && *v16 - v14[19] > v19 - v18 ) /*0x587ddc*/
                {
                  v28 = dword_82A594[8 * v29 + *((unsigned int *)v14 + 19)] == 1; /*0x587e00*/
                  v26 = 0; /*0x587e47*/
                  if ( (*((unsigned int *)v14 + 80) & 0x100) != 0 /*0x587e3e*/
                    && ((v20 = *((unsigned int *)v14 + 80) & 0x800) != 0
                     && ((v21 = *((unsigned int *)v14 + 11)) == 0 || *(int16_t *)(v21 + 38) - v14[19] != 2)
                     || !v20 && ((v22 = *((unsigned int *)v14 + 11)) == 0 || *(int16_t *)(v22 + 36) - *v16 != 2)) )
                  {
                    v26 = 1; /*0x587e08*/
                  }
                  if ( dword_82A594[8 * v29 + *((unsigned int *)v14 + 19)] == 1 /*0x587e8e*/
                    && v27
                    && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 0, 0, 0)
                    && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 0, 0, v29) == 0x7FFFFFFF )
                  {
                    v3 = i; /*0x587e94*/
                    v24 = 0; /*0x587e9e*/
                    fprintf( /*0x587ebc*/
                      Stream,
                      (const char *const)&(unsigned int *)((char *)&stru_82ADA8 + 6),
                      *v15,
                      *(int16_t *)(i + 38),
                      *v16,
                      v14[19],
                      *v32);
                  }
                  else
                  {
                    v3 = i; /*0x587ec6*/
                  }
                  if ( v26 ) /*0x587ed0*/
                  {
                    if ( v25 /*0x587f14*/
                      && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 1, 1, 0)
                      && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 1, 1, v29) == 0x7FFFFFFF )
                    {
                      v24 = 0; /*0x587f1a*/
                      fprintf( /*0x587f3e*/
                        Stream,
                        (const char *const)&(unsigned int *)((char *)&stru_82ADA8 + 9),
                        *v15,
                        *(int16_t *)(v3 + 38),
                        *v16,
                        v14[19],
                        *v32);
                    }
                    if ( v27 /*0x587f84*/
                      && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 0, 1, 0)
                      && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 0, 1, v29) == 0x7FFFFFFF )
                    {
                      v24 = 0; /*0x587f8a*/
                      fprintf( /*0x587fae*/
                        Stream,
                        (const char *const)&((char *)&stru_82ADA8),
                        *v15,
                        *(int16_t *)(v3 + 38),
                        *v16,
                        v14[19],
                        *v32);
                    }
                  }
                  if ( v28 /*0x587ffc*/
                    && v25
                    && MapSeed::CheckTileMatch((MapSeed *)this, v15, v14 + 18, v29, 1, 0, 0)
                    && Pathfinding::CalcDistance((int)&stru_87E790.__pad_D8[80], v15, v14 + 18, 0, 1, 0, v29) == 0x7FFFFFFF )
                  {
                    v24 = 0; /*0x588002*/
                    fprintf(Stream, &(unsigned int *)((char *)&stru_82ADA8 + 4), *v15, *(int16_t *)(v3 + 38), *v16, v14[19], *v32); /*0x588026*/
                  }
                }
                else
                {
                  v3 = i; /*0x588030*/
                }
                v14 = (int16_t *)MapClass::SpiralSearch((MapClass *)this); /*0x58803d*/
              }
              while ( v14 ); /*0x588041*/
              v4 = v32; /*0x588047*/
              v1 = (LayerClass *)this; /*0x58804b*/
            }
          }
        }
        ++v4; /*0x588053*/
        ++v29; /*0x58805d*/
        v32 = v4; /*0x588061*/
      }
      while ( (int)v4 < (int)&off_81BABC ); /*0x588065*/
    }
    v3 = LayerClass::CellIteratorNext(v1); /*0x588072*/
  }
  fclose(Stream); /*0x588087*/
  return v24; /*0x588093*/

}

// ==== BACKFILL 0x00588960  Object_Create  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_588960::Object_Create(int a2) {

  int v2; // eax
  int result; // eax

  v2 = *((unsigned int *)this + 82); /*0x588960*/
  if ( v2 >= a2 ) /*0x58896c*/
    v2 = a2; /*0x58896e*/
  *((unsigned int *)this + 82) = v2; /*0x588972*/
  result = v2 <= 0 ? 0 : v2;
  *((unsigned int *)this + 82) = result; /*0x588980*/
  return result; /*0x588986*/

}

// ==== BACKFILL 0x00588990  ScenarioClass::CalcMinShroudLevel  cls=ScenarioClass  sig=csp  renamed_refs=0  residual=- ====
int ScenarioClass::CalcMinShroudLevel() {

  int v1; // edi
  int i; // esi
  int v3; // eax
  int v4; // eax

  if ( this->altNextScenario[17] >= 13 )
  {
    v1 = this->altNextScenario[15]; /*0x58899d*/
    for ( i = 0; i < v1; ++i )
    {
      v3 = *(unsigned int *)(this->altNextScenario[14] + 4 * i); /*0x5889af*/
      if ( v3 )
      {
        v4 = *(char *)(v3 + 283); /*0x5889b6*/
        if ( this->altNextScenario[17] < v4 ) /*0x5889c5*/
          v4 = this->altNextScenario[17]; /*0x5889c7*/
        this->altNextScenario[17] = v4; /*0x5889cb*/
        this->altNextScenario[17] = v4 <= 0 ? 0 : v4;
      }
    }
  }
  return this->altNextScenario[17]; /*0x5889ea*/

}

// ==== BACKFILL 0x00588AC0  LayerClass::ClearFactoryCellAssignments  cls=LayerClass  sig=csp  renamed_refs=0  residual=- ====
int LayerClass::ClearFactoryCellAssignments() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x588AC0.json */
}

// ==== BACKFILL 0x00588BF0  MapClass::Destru_vt04  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
MapClass * MapClass::Destru_vt04(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588BF0.json)
}

// ==== BACKFILL 0x00588C10  CellClass::CopyNeighborData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CopyNeighborData(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 1 errs): wrong-universe gap2 body; truth func_0x588C10.json */
}

// ==== BACKFILL 0x00588C90  DynamicVector::CleanupSubzone  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_flat::CleanupSubzone()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588C90.json)
}

// ==== BACKFILL 0x00588DE0  DynamicVector::initCellVectors  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::initCellVectors(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00588DE0.json)
}

// ==== BACKFILL 0x00589060  VectorClass::InitCellVe_vt00  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat * MapClass::InitCellVe_vt00(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589060.json)
}

// ==== BACKFILL 0x005894A0  VectorClass::allocateCellArrays  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MapClass::allocateCellArrays()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005894A0.json)
}

// ==== BACKFILL 0x005894D0  VectorClass::FindSubzoneConnectionIndex  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int  MapClass::FindSubzoneConnectionIndex(unsigned short * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005894D0.json)
}

// ==== BACKFILL 0x00589530  VectorClass::initSubzoneData  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::initSubzoneData(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589530.json)
}

// ==== BACKFILL 0x00589CE0  VectorClass::InitCellVe_vt02  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char MapClass::InitCellVe_vt02(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589CE0.json)
}

// ==== BACKFILL 0x00589D90  VectorClass::InitCellVe_vt03  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void MapClass::InitCellVe_vt03()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589D90.json)
}

// ==== BACKFILL 0x00589DC0  VectorClass::InitCellVe_vt04  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int  MapClass::InitCellVe_vt04(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589DC0.json)
}

// ==== BACKFILL 0x00589E00  VectorClass::InitCellVe_vt05  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int MapClass::InitCellVe_vt05(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00589E00.json)
}

// ==== BACKFILL 0x0058ADB0  RadarClass::drawRadarTerrain  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::drawRadarTerrain(int a1, int a2) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0058AE60  RadarClass::RenderJammerRadius  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::RenderJammerRadius(int a1, void* a2) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0058AF80  RadarClass::drawRadarEvents  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::drawRadarEvents(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0058BB00  Map_Helper_58BB00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58BB00(unsigned int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x58BB00)
}

// ==== BACKFILL 0x0058BE20  sub_58BE20  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58BE20()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058BE20.json)
}

// ==== BACKFILL 0x0058BEA0  sub_58BEA0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58BEA0()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058BEA0.json)
}

// ==== BACKFILL 0x0058C100  sub_58C100  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_58C100()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058C100.json)
}

// ==== BACKFILL 0x0058C320  sub_58C320  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58C320(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058C320.json)
}

// ==== BACKFILL 0x0058C3B0  sub_58C3B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58C3B0(unsigned int * a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058C3B0.json)
}

// ==== BACKFILL 0x0058C4A0  sub_58C4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_58C4A0(ObjectClass * aP1)
{
    (void)aP1; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058C4A0.json)
}

// ==== BACKFILL 0x0058C6F0  Memory_Helper_58C6F0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Memory_Helper_58C6F0(IUnknown * aP0, short * a1, double a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x58C6F0)
}

// ==== BACKFILL 0x0058CE90  Map_Helper_58CE90  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_58CE90()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058CE90.json)
}

// ==== BACKFILL 0x0058CF90  RandomMap::GenerateTerrainForAllCells  cls=RandomMap  sig=csp  renamed_refs=0  residual=- ====
int GenerateTerrainForAllCells()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058CF90.json)
}

// ==== BACKFILL 0x0058D070  SetLayerDataMap  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Map_SetLayerData(short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058D070.json)
}

// ==== BACKFILL 0x0058D120  sub_58D120  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_58D120(int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0058D120.json)
}
