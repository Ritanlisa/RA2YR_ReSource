// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00561350  sub_561350  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00561350.json)
}

// ==== BACKFILL 0x00565090  RadarClass::RenderMapPreview  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int RadarClass::RenderMapPreview() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 14 errs): wrong-universe gap2 body; truth func_0x565090.json */
}

// ==== BACKFILL 0x00565190  RadarClass::Render  cls=RadarClass  sig=csp  renamed_refs=0  residual=- ====
void* RadarClass::Render(int a2) {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 17 errs): wrong-universe gap2 body; truth func_0x565190.json */
}

// ==== BACKFILL 0x005654E0  sub_5654E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_5654E0(unsigned int * a2, int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005654E0.json)
}

// ==== BACKFILL 0x00565520  CellClass::GetScreenCenterOffset  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::GetScreenCenterOffset(void* a1, void* a2) {
  return nullptr;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x00565610  sub_565610  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_565610(unsigned int * a2, short * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00565610.json)
}

// ==== BACKFILL 0x005656D0  MapClass::IsCellPassable  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::IsCellPassable(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005656D0.json)
}

// ==== BACKFILL 0x00565B00  MapClass::FreeAllCells  cls=MapClass  sig=csp  renamed_refs=0  residual=- ====
int MapClass::FreeAllCells()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00565B00.json)
}

// ==== BACKFILL 0x00567110  CellClass::BuildPathfindingGraph  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
void* CellClass::BuildPathfindingGraph() {
  return nullptr;  /* G42.33b2 restub: auto restub (pass4+, 17 errs): wrong-universe gap2 body; truth func_0x567110.json */
}

// ==== BACKFILL 0x0056A080  PlaceTerrainCliffsRegion  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_56A080::PlaceTerrainCliffsRegion() {

  int result; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ebp
  unsigned int v10; // eax
  int *v11; // eax
  int *v12; // ebp
  int v13; // ebx
  int16_t v14; // ax
  int16_t v15; // di
  unsigned int v16; // ecx
  int *v17; // ecx
  unsigned int v18; // ecx
  int *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int *v24; // eax
  int v25; // ecx
  unsigned int v26; // eax
  int *v27; // eax
  unsigned char *v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // [esp+4h] [ebp-34h] BYREF
  int v32; // [esp+8h] [ebp-30h]
  int v33; // [esp+Ch] [ebp-2Ch]
  int v34; // [esp+10h] [ebp-28h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h]
  int v37; // [esp+1Ch] [ebp-1Ch]
  int v38; // [esp+20h] [ebp-18h] BYREF
  int v39; // [esp+24h] [ebp-14h]
  int16_t v40[2]; // [esp+28h] [ebp-10h] BYREF
  int v41; // [esp+2Ch] [ebp-Ch] BYREF
  int v42; // [esp+30h] [ebp-8h] BYREF
  int v43; // [esp+34h] [ebp-4h] BYREF

  result = *((unsigned int *)this + 74); /*0x56a086*/
  v3 = result + *((unsigned int *)this + 76); /*0x56a092*/
  v33 = result; /*0x56a094*/
  if ( result < v3 ) /*0x56a09a*/
  {
    v4 = g_TerrainSoundTable2; /*0x56a0a0*/
    v5 = g_TerrainSoundConfig; /*0x56a0a9*/
    do /*0x56a4ab*/
    {
      v6 = *((unsigned int *)this + 73); /*0x56a0af*/
      v7 = v6 + *((unsigned int *)this + 75); /*0x56a0bb*/
      v32 = v6; /*0x56a0bd*/
      if ( v6 < v7 ) /*0x56a0c3*/
      {
        v8 = (int16_t)result << 9; /*0x56a0cc*/
        v34 = v8; /*0x56a0cf*/
        while ( 1 ) /*0x56a0dd*/
        {
          v9 = *((unsigned int *)this + 79); /*0x56a0dd*/
          HIWORD(v31) = result; /*0x56a0e3*/
          LOWORD(v31) = v6; /*0x56a0ed*/
          if ( *(unsigned int *)(v9 + 4 * ((int16_t)v6 + v8)) ) /*0x56a0f2*/
          {
            v10 = v34 + (int16_t)v6; /*0x56a101*/
            if ( v10 < 0x40000 && (v11 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v10)) != 0 ) /*0x56a119*/
            {
              v12 = v11; /*0x56a11b*/
            }
            else
            {
              v12 = &g_MissionQueueFrame.briefing[130]; /*0x56a123*/
              g_MissionQueueFrame.briefing[139] = v31; /*0x56a128*/
            }
            v13 = v12[14] - g_Cell_BuildabilityLUT + 1; /*0x56a13c*/
            if ( (v13 == dword_ABC2B4 || v13 == dword_AA1130) && *((unsigned char *)v12 + 282) == 8 ) /*0x56a150*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a159*/
              v4 = g_TerrainSoundTable2; /*0x56a15e*/
              v5 = g_TerrainSoundConfig; /*0x56a164*/
            }
            if ( (v13 == v4 || v13 == v4 + 3 || v13 == v4 + 4 || v13 == v4 + 1 || v13 == v4 + 2) /*0x56a195*/
              && *((unsigned char *)v12 + 282) == 5 )
            {
              if ( v13 == v4 + 4 ) /*0x56a1a0*/
              {
                Cell::SetTileType((int16_t *)&v31, v4 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a1bd*/
                v14 = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1d5*/
                LOWORD(v35) = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1da*/
                HIWORD(v35) = HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88]); /*0x56a1e8*/
                v15 = LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31; /*0x56a1ed*/
                v16 = (int16_t)(LOWORD(g_DDrawSurfaceManager.scenario[88]) + v31) /*0x56a1f1*/
                    + ((int16_t)(HIWORD(v31) + HIWORD(g_DDrawSurfaceManager.scenario[88])) << 9);
                if ( v16 >= 0x40000 || (v17 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x56a208*/
                {
                  g_MissionQueueFrame.briefing[139] = v35; /*0x56a20a*/
                  v17 = &g_MissionQueueFrame.briefing[130]; /*0x56a210*/
                }
                *((unsigned char *)v17 + 283) += 4; /*0x56a21e*/
                LOWORD(v36) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[82]); /*0x56a237*/
                HIWORD(v36) = HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14; /*0x56a23f*/
                v18 = (int16_t)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[82])) /*0x56a24a*/
                    + ((int16_t)(HIWORD(g_DDrawSurfaceManager.scenario[82]) + v14) << 9);
                if ( v18 >= 0x40000 || (v19 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x56a261*/
                {
                  g_MissionQueueFrame.briefing[139] = v36; /*0x56a267*/
                  v19 = &g_MissionQueueFrame.briefing[130]; /*0x56a26d*/
                }
                *((unsigned char *)v19 + 283) += 4; /*0x56a27b*/
                HIWORD(v37) = HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14; /*0x56a291*/
                LOWORD(v37) = v15 + LOWORD(g_DDrawSurfaceManager.scenario[86]); /*0x56a296*/
                v20 = (int16_t)(v15 + LOWORD(g_DDrawSurfaceManager.scenario[86])) /*0x56a2a4*/
                    + ((int16_t)(HIWORD(g_DDrawSurfaceManager.scenario[86]) + v14) << 9);
                if ( v20 >= 0x40000 || (v21 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v20)) == 0 ) /*0x56a2ba*/
                {
                  g_MissionQueueFrame.briefing[139] = v37; /*0x56a2c0*/
                  v21 = &g_MissionQueueFrame.briefing[130]; /*0x56a2c5*/
                }
                *((unsigned char *)v21 + 283) += 4; /*0x56a2ca*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 2, 0); /*0x56a2d8*/
              v4 = g_TerrainSoundTable2; /*0x56a2dd*/
              v5 = g_TerrainSoundConfig; /*0x56a2e3*/
            }
            if ( (v13 == dword_AA1548 || v13 == dword_AA0740) && *((unsigned char *)v12 + 282) == 12 ) /*0x56a300*/
            {
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a309*/
              v4 = g_TerrainSoundTable2; /*0x56a30e*/
              v5 = g_TerrainSoundConfig; /*0x56a314*/
            }
            if ( (v13 == v5 || v13 == v5 + 3 || v13 == v5 + 4 || v13 == v5 + 2 || v13 == v5 + 1) /*0x56a345*/
              && *((unsigned char *)v12 + 282) == 7 )
            {
              if ( v13 == v5 + 4 ) /*0x56a350*/
              {
                Cell::SetTileType((int16_t *)&v31, v5 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x56a36e*/
                v22 = *CellStruct::Add((CellStruct *)&v31, &v41, &g_DDrawSurfaceManager.scenario[82]); /*0x56a386*/
                v39 = v22; /*0x56a388*/
                v38 = v22; /*0x56a38c*/
                v23 = (int16_t)v22 + (SHIWORD(v22) << 9); /*0x56a39b*/
                if ( v23 >= 0x40000 || (v24 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v23)) == 0 ) /*0x56a3b1*/
                {
                  g_MissionQueueFrame.briefing[139] = v22; /*0x56a3b3*/
                  v24 = &g_MissionQueueFrame.briefing[130]; /*0x56a3b9*/
                }
                *((unsigned char *)v24 + 283) += 4; /*0x56a3d0*/
                v25 = *CellStruct::Add((CellStruct *)&v38, &v42, &g_DDrawSurfaceManager.scenario[84]); /*0x56a3e0*/
                v39 = v25; /*0x56a3e2*/
                v26 = (int16_t)v25 + (SHIWORD(v25) << 9); /*0x56a3f1*/
                if ( v26 >= 0x40000 || (v27 = *(int **)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * v26)) == 0 ) /*0x56a407*/
                {
                  g_MissionQueueFrame.briefing[139] = v25; /*0x56a409*/
                  v27 = &g_MissionQueueFrame.briefing[130]; /*0x56a40f*/
                }
                *((unsigned char *)v27 + 283) += 4; /*0x56a422*/
                *(unsigned int *)v40 = *CellStruct::Add((CellStruct *)&v38, &v43, &g_DDrawSurfaceManager.scenario[88]); /*0x56a43c*/
                v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40); /*0x56a446*/
                v28[283] += 4; /*0x56a459*/
              }
              Terrain::PlaceCliffs((Terrain *)this, (int)v12, 4, 0); /*0x56a462*/
              v4 = g_TerrainSoundTable2; /*0x56a467*/
              v5 = g_TerrainSoundConfig; /*0x56a46d*/
            }
            v6 = v32; /*0x56a473*/
          }
          ++v6; /*0x56a483*/
          v29 = *((unsigned int *)this + 73) + *((unsigned int *)this + 75); /*0x56a484*/
          v32 = v6; /*0x56a488*/
          if ( v6 >= v29 ) /*0x56a48c*/
            break; /*0x56a48c*/
          v8 = v34; /*0x56a0d5*/
          LOWORD(result) = v33; /*0x56a0d9*/
        }
        result = v33; /*0x56a492*/
      }
      ++result; /*0x56a4a2*/
      v30 = *((unsigned int *)this + 74) + *((unsigned int *)this + 76); /*0x56a4a3*/
      v33 = result; /*0x56a4a7*/
    }
    while ( result < v30 ); /*0x56a4ab*/
  }
  return result; /*0x56a4b4*/

}

// ==== BACKFILL 0x0056AE40  sub_56AE40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_56AE40(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056AE40.json)
}

// ==== BACKFILL 0x0056B0F0  sub_56B0F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_56B0F0(int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056B0F0.json)
}

// ==== BACKFILL 0x0056B5A0  CellClass::LoadTerrainTiles  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::LoadTerrainTiles(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 14 errs): wrong-universe gap2 body; truth func_0x56B5A0.json */
}

// ==== BACKFILL 0x0056B780  CellClass::CreateOverlay  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CreateOverlay(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 21 errs): wrong-universe gap2 body; truth func_0x56B780.json */
}

// ==== BACKFILL 0x0056B8A0  CellClass::DecompressRawCellData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::DecompressRawCellData(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 4 errs): wrong-universe gap2 body; truth func_0x56B8A0.json */
}

// ==== BACKFILL 0x0056B9A0  CellClass::DecompressTerrainDataSimple  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::DecompressTerrainDataSimple(int a2) {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 6 errs): wrong-universe gap2 body; truth func_0x56B9A0.json */
}

// ==== BACKFILL 0x0056BAC0  CellClass::DecompressTerrainData  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::DecompressTerrainData(int a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0056BC50  Cell::PosToLinearIndex  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Cell::PosToLinearIndex(IUnknown * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56BC50)
}

// ==== BACKFILL 0x0056BCD0  CellClass::GetTileData  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int CellClass::GetTileData(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x56BCD0)
}

// ==== BACKFILL 0x0056C020  CellClass::CreateBuildingCrater  cls=CellClass  sig=csp  renamed_refs=0  residual=- ====
int CellClass::CreateBuildingCrater(void* a1) {
  return 0;  /* G42.33b2 restub: R2 def-header normalised from hpp decl */
}

// ==== BACKFILL 0x0056CB80  Cell::DecodeFlags  cls=Cell  sig=csp  renamed_refs=0  residual=- ====
int Cell::DecodeFlags()
{

  return this->Cell_field_0x0 & 0xF | ((uint16_t)this->Cell_field_0x0 >> 12); /*0x56cb8f*/

}

// ==== BACKFILL 0x0056D3F0  CellToTileIndexMap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int Gap2Recv_56D3F0::CellToTileIndexMap(IUnknown * aP1) {

  int result; // eax
  int health; // ecx

  result = *aP1 + aP1[1] * (*((unsigned int *)this + 62) + *((unsigned int *)this + 61) + 1); /*0x56d40f*/
  if ( result < 0 ) /*0x56d412*/
    return 0; /*0x56d414*/
  health = this->health; /*0x56d419*/
  if ( result >= health ) /*0x56d41e*/
    return health - 1; /*0x56d420*/
  return result; /*0x56d411*/

}

// ==== BACKFILL 0x0056DB70  InvalidateTileRegionMap  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_56DB70::InvalidateTileRegionMap(IUnknown * aP1) {

  int result; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  char v8; // cl
  unsigned char *v9; // eax
  char v10; // [esp+10h] [ebp+4h]

  result = GetRegionMap(this, aP1, 3, 0); /*0x56db7e*/
  v5 = result; /*0x56db83*/
  if ( result == -1 /*0x56dba2*/
    && (MapClass::ProcessRegion((MapClass *)this), result = GetRegionMap(this, aP1, 3, 0), v5 = result, result == -1) )
  {
    LOBYTE(result) = 0; /*0x56dba6*/
  }
  else
  {
    v10 = 0; /*0x56dbaf*/
    if ( v5 != -1 ) /*0x56dbb4*/
    {
      do /*0x56dc0f*/
      {
        v6 = this->customSound_controller[1]; /*0x56dbb7*/
        v7 = 16 * v5; /*0x56dbbc*/
        v8 = *(unsigned char *)(v6 + 16 * v5 + 8); /*0x56dbbf*/
        v9 = (unsigned char *)(v6 + 16 * v5 + 8); /*0x56dbc3*/
        if ( !v8 ) /*0x56dbc9*/
        {
          *v9 = 1; /*0x56dbcb*/
          BuildTileAdjacencyTable(this, (int *)(v7 + this->customSound_controller[1])); /*0x56dbd6*/
          if ( !MapSeed::CheckTileMatch( /*0x56dbf0*/
                  (MapSeed *)this,
                  (int16_t *)(this->customSound_controller[1] + v7),
                  (int16_t *)(this->customSound_controller[1] + v7 + 4),
                  0,
                  0,
                  0,
                  0) )
            v10 = 1; /*0x56dbf9*/
        }
        result = GetRegionMap(this, aP1, 3, v5 + 1); /*0x56dc05*/
        v5 = result; /*0x56dc0a*/
      }
      while ( result != -1 ); /*0x56dc0f*/
    }
    LOBYTE(result) = v10; /*0x56dc12*/
  }
  return result; /*0x56dba4*/

}

// ==== BACKFILL 0x0056E890  ProcessDataHouseClass  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_56E890::ProcessDataHouseClass(void* a2, void* a3, void* a4) {

  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  unsigned int *StartCoords; // eax
  int v10; // eax
  unsigned int v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *a2 == *(unsigned short *)&g_MissionQueueFrame.waypoints[2134] && a2[1] == *(unsigned short *)&g_MissionQueueFrame.waypoints[2136] ) /*0x56e8b2*/
    return 0; /*0x56e8b2*/
  v4 = *((unsigned int *)this + 61); /*0x56e8b8*/
  v5 = *a2; /*0x56e8be*/
  v6 = a2[1]; /*0x56e8c1*/
  if ( v6 + v5 <= v4 ) /*0x56e8ca*/
    return 0; /*0x56e8ca*/
  if ( v5 - v6 >= v4 ) /*0x56e8d6*/
    return 0; /*0x56e8d6*/
  if ( v6 - v5 >= v4 ) /*0x56e8e0*/
    return 0; /*0x56e8e0*/
  if ( v6 + v5 > v4 + 2 * *((unsigned int *)this + 62) ) /*0x56e8ed*/
    return 0; /*0x56e8ed*/
  v7 = 0; /*0x56e8f4*/
  if ( ((char *)&stru_A80220) <= 0 ) /*0x56e8f8*/
    return 0; /*0x56e961*/
  while ( 1 ) /*0x56e904*/
  {
    v8 = *((unsigned int *)((char *)&stru_A80220) + v7); /*0x56e904*/
    if ( v8 ) /*0x56e909*/
    {
      if ( !*(unsigned char *)(v8 + 501) ) /*0x56e90b*/
      {
        StartCoords = HouseClass::GetStartCoords(*((HouseClass **)((char *)&stru_A80220) + v7), v12); /*0x56e91c*/
        if ( *StartCoords != g_MissionQueueFrame.briefing[114] /*0x56e945*/
          || StartCoords[1] != g_MissionQueueFrame.briefing[115]
          || StartCoords[2] != g_MissionQueueFrame.briefing[116] )
        {
          v10 = sub_4FFD90((ObjectClass *)v8, a2); /*0x56e94a*/
          *a4 = v10; /*0x56e952*/
          if ( v10 != -1 ) /*0x56e955*/
            break; /*0x56e955*/
        }
      }
    }
    if ( ++v7 >= ((char *)&stru_A80220) ) /*0x56e95f*/
      return 0; /*0x56e95f*/
  }
  *a3 = *(unsigned int *)(*(unsigned int *)(v8 + 52) + 184); /*0x56e97d*/
  return 1; /*0x56e961*/

}

// ==== BACKFILL 0x0056ED40  globalHelper_06ED40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06ED40(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056ED40.json)
}

// ==== BACKFILL 0x0056EE40  globalHelper_06EE40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06EE40(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056EE40.json)
}

// ==== BACKFILL 0x0056F690  globalHelper_06F690  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char globalHelper_06F690(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056F690.json)
}

// ==== BACKFILL 0x0056F7A0  globalHelper_06F7A0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_56F7A0(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056F7A0.json)
}
