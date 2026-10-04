// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00591740  PlaceMapSeedCityArea  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char Gap2Recv_591740::PlaceMapSeedCityArea(void* a2, void* a3, void* a4) {

  int16_t *v4; // ebp
  int16_t v6; // ax
  int16_t v7; // bx
  int16_t v8; // si
  int v9; // eax
  char result; // al
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // kr00_4
  int v15; // esi
  int v16; // ebx
  int MapSeed_field_0x10; // edx
  int v18; // eax
  int v19; // ebp
  unsigned char *v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned char *v25; // ebp
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  int MapSeed_field_0x08; // ebp
  int v30; // ebx
  int v31; // ebx
  unsigned char *v32; // eax
  int v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ebp
  int v39; // esi
  unsigned char *v40; // eax
  int16_t v41; // ax
  int uniqueId; // edx
  int16_t *v43; // ebp
  int MapSeed_field_0x0C; // esi
  int v45; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  int16_t v48; // ax
  int16_t v49; // bp
  char *v50; // esi
  int v51; // ebx
  bool v52; // zf
  int16_t MapSeed_field_0x04; // cx
  int16_t v54; // dx
  unsigned char *v55; // eax
  char v56; // dl
  uint8_t v57; // cl
  int v58; // edx
  bool v59; // cc
  int v60; // edx
  int16_t MapSeed_field_0x20_high; // bp
  int16_t v62; // si
  int16_t v63; // ax
  int16_t v64; // ax
  unsigned char *v65; // eax
  char v66; // dl
  int v67; // edx
  MapSeed v69; // [esp+14h] [ebp-58h] BYREF
  int16_t v70; // [esp+3Ch] [ebp-30h]
  int16_t v71; // [esp+3Eh] [ebp-2Eh]
  int16_t v72[4]; // [esp+44h] [ebp-28h]
  int64_t v73; // [esp+4Ch] [ebp-20h]
  int v74; // [esp+5Ch] [ebp-10h] BYREF
  int v75; // [esp+60h] [ebp-Ch]
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  int16_t *v78; // [esp+70h] [ebp+4h]

  v4 = a3; /*0x591745*/
  v6 = *a2; /*0x591757*/
  v7 = *a2; /*0x59175d*/
  if ( *a2 <= *a3 ) /*0x59175f*/
    v7 = *a3; /*0x591761*/
  v8 = *a2; /*0x591766*/
  if ( v6 >= *a3 ) /*0x591768*/
  {
    v8 = *a3; /*0x59176a*/
    v6 = *a3; /*0x591771*/
  }
  v74 = v6 - 3; /*0x591779*/
  v9 = a3[1]; /*0x59177d*/
  v75 = v9 - 4; /*0x591784*/
  v77 = a2[1] - v9 + 9; /*0x5917a0*/
  v76 = v7 - v8 + 11; /*0x5917aa*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v74, (int)a4); /*0x5917ae*/
  if ( result ) /*0x5917b5*/
  {
    v11 = *a2; /*0x5917c1*/
    v12 = a2[1]; /*0x5917ca*/
    v69.MapSeed_field_0x0C = *a3 - v11; /*0x5917ce*/
    v13 = v12 - a3[1]; /*0x5917df*/
    v78 = (int16_t *)abs32(v69.MapSeed_field_0x0C); /*0x5917e1*/
    if ( (int)v78 <= v13 - 5 ) /*0x5917ea*/
    {
      v14 = v13 + 1; /*0x5917fa*/
      v15 = (v13 + 1) / 2 + 2; /*0x591800*/
      v16 = v11 + 1; /*0x591803*/
      LODWORD(v73) = v16; /*0x591806*/
      v69.MapSeed_field_0x04 = v12 - (v13 + 1) / 2; /*0x59180d*/
      MapSeed_field_0x10 = v15 + v69.MapSeed_field_0x04 + 3; /*0x591811*/
      v69.MapSeed_field_0x10 = MapSeed_field_0x10; /*0x591817*/
      if ( v69.MapSeed_field_0x04 < MapSeed_field_0x10 ) /*0x59181b*/
      {
        v18 = v16 + 7; /*0x59181d*/
        do /*0x59188d*/
        {
          v19 = v16; /*0x591822*/
          if ( v16 < v18 ) /*0x591824*/
          {
            do /*0x59187c*/
            {
              *(unsigned short *)v69.__pad_0 = v19; /*0x59182f*/
              *(unsigned short *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x591834*/
              if ( (uint8_t)MapSeed::IsCellInBounds(&v69) ) /*0x591839*/
              {
                SetLayerDataMap((int16_t *)v69.__pad_0, (int)a4); /*0x59184a*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v69.__pad_0); /*0x591862*/
                v20[283] = *(unsigned char *)(List::FindByValue((List *)a4) + 16); /*0x59186c*/
                v16 = v73; /*0x591872*/
              }
              ++v19; /*0x591876*/
              v18 = v16 + 7; /*0x591877*/
            }
            while ( v19 < v16 + 7 ); /*0x59187c*/
            MapSeed_field_0x10 = v69.MapSeed_field_0x10; /*0x59187e*/
          }
          ++v69.MapSeed_field_0x04; /*0x591889*/
        }
        while ( v69.MapSeed_field_0x04 < MapSeed_field_0x10 ); /*0x59188d*/
        v4 = a3; /*0x59188f*/
      }
      v21 = *v4 + 1; /*0x59189b*/
      LODWORD(v73) = v21; /*0x59189c*/
      v69.MapSeed_field_0x04 = v75; /*0x5918a0*/
      v22 = v15 + v75 + 2; /*0x5918a4*/
      v69.MapSeed_field_0x10 = v22; /*0x5918aa*/
      if ( v75 < v22 ) /*0x5918ae*/
      {
        v23 = v21 + 7; /*0x5918b0*/
        do /*0x591920*/
        {
          v24 = v21; /*0x5918b5*/
          if ( v21 < v23 ) /*0x5918b7*/
          {
            do /*0x59190f*/
            {
              *(unsigned short *)v69.__pad_0 = v24; /*0x5918c2*/
              *(unsigned short *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x5918c7*/
              if ( (uint8_t)MapSeed::IsCellInBounds(&v69) ) /*0x5918cc*/
              {
                SetLayerDataMap((int16_t *)v69.__pad_0, (int)a4); /*0x5918dd*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v69.__pad_0); /*0x5918f5*/
                v25[283] = *(unsigned char *)(List::FindByValue((List *)a4) + 16); /*0x5918ff*/
                v21 = v73; /*0x591905*/
              }
              ++v24; /*0x591909*/
              v23 = v21 + 7; /*0x59190a*/
            }
            while ( v24 < v21 + 7 ); /*0x59190f*/
            v22 = v69.MapSeed_field_0x10; /*0x591911*/
          }
          ++v69.MapSeed_field_0x04; /*0x59191c*/
        }
        while ( v69.MapSeed_field_0x04 < v22 ); /*0x591920*/
      }
      v26 = v74; /*0x591922*/
      v27 = *a2 - v74; /*0x59192c*/
      LODWORD(v73) = v74 + 2; /*0x59192e*/
      v28 = v27 - 1; /*0x59193b*/
      v30 = a2[1] + 1; /*0x59193e*/
      v69.MapSeed_field_0x08 = a2[1] - v14 / 2; /*0x591942*/
      MapSeed_field_0x08 = v69.MapSeed_field_0x08; /*0x59193c*/
      v69.MapSeed_field_0x10 = v30; /*0x591948*/
      if ( v69.MapSeed_field_0x08 < v30 ) /*0x59194c*/
      {
        v31 = v73; /*0x59194e*/
        v69.MapSeed_field_0x04 = v73 + v28; /*0x591954*/
        do /*0x5919bd*/
        {
          if ( v31 < v69.MapSeed_field_0x04 ) /*0x59195c*/
          {
            do /*0x5919a8*/
            {
              *(unsigned short *)v69.__pad_0 = v31; /*0x591962*/
              *(unsigned short *)&v69.__pad_0[2] = MapSeed_field_0x08; /*0x591967*/
              if ( (uint8_t)MapSeed::IsCellInBounds(&v69) ) /*0x59196c*/
              {
                SetLayerDataMap((int16_t *)v69.__pad_0, (int)((unsigned int *)this)[0]); /*0x591980*/
                v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v69.__pad_0); /*0x59198f*/
                MapSeed_field_0x08 = v69.MapSeed_field_0x08; /*0x591997*/
                v32[283] = ((unsigned int *)this)[0]; /*0x59199b*/
              }
              ++v31; /*0x5919a5*/
            }
            while ( v31 < v69.MapSeed_field_0x04 ); /*0x5919a8*/
            v26 = v74; /*0x5919aa*/
            v31 = v73; /*0x5919ae*/
          }
          v69.MapSeed_field_0x08 = ++MapSeed_field_0x08; /*0x5919b9*/
        }
        while ( MapSeed_field_0x08 < v69.MapSeed_field_0x10 ); /*0x5919bd*/
      }
      v33 = v26 + 2; /*0x5919c3*/
      LODWORD(v73) = v26 + 2; /*0x5919c6*/
      v34 = a3[1]; /*0x5919ca*/
      v35 = *a3 - v26; /*0x5919d1*/
      v36 = v14 / 2 + v34; /*0x5919d3*/
      v37 = v35 - 1; /*0x5919d7*/
      v38 = v34; /*0x5919da*/
      v69.MapSeed_field_0x10 = v36; /*0x5919dc*/
      if ( v34 < v36 ) /*0x5919e0*/
      {
        v69.MapSeed_field_0x08 = v33 + v37; /*0x5919e4*/
        do /*0x591a45*/
        {
          v39 = v33; /*0x5919ec*/
          if ( v33 < v69.MapSeed_field_0x08 ) /*0x5919f0*/
          {
            do /*0x591a3c*/
            {
              *(unsigned short *)v69.__pad_0 = v39; /*0x5919f6*/
              *(unsigned short *)&v69.__pad_0[2] = v38; /*0x5919fb*/
              if ( (uint8_t)MapSeed::IsCellInBounds(&v69) ) /*0x591a00*/
              {
                SetLayerDataMap((int16_t *)v69.__pad_0, (int)((unsigned int *)this)[0]); /*0x591a14*/
                v40 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)v69.__pad_0); /*0x591a23*/
                v33 = v73; /*0x591a2b*/
                v40[283] = ((unsigned int *)this)[0]; /*0x591a2f*/
              }
              ++v39; /*0x591a39*/
            }
            while ( v39 < v69.MapSeed_field_0x08 ); /*0x591a3c*/
            v36 = v69.MapSeed_field_0x10; /*0x591a3e*/
          }
          ++v38; /*0x591a42*/
        }
        while ( v38 < v36 ); /*0x591a45*/
      }
      v41 = a2[1] - 2; /*0x591a56*/
      LOWORD(v69.MapSeed_field_0x08) = *a2; /*0x591a5a*/
      uniqueId = ((unsigned int *)this)[0]; /*0x591a5f*/
      HIWORD(v69.MapSeed_field_0x08) = v41; /*0x591a62*/
      v69.MapSeed_field_0x10 = v69.MapSeed_field_0x08; /*0x591a70*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &v69.MapSeed_field_0x10, (int)a4, uniqueId); /*0x591a7d*/
      v43 = a3; /*0x591a8a*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, a3, (int)a4, ((unsigned int *)this)[0]); /*0x591a95*/
      MapSeed_field_0x0C = v69.MapSeed_field_0x0C; /*0x591a9a*/
      v45 = 0; /*0x591a9e*/
      v69.MapSeed_field_0x20 = 0; /*0x591aa2*/
      if ( v69.MapSeed_field_0x0C ) /*0x591aac*/
      {
        do /*0x591ad6*/
        {
          v73 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x591abc*/
          LOWORD(v46) = Math::RoundToInt((double)v73 * 4.656612874161595e-10); /*0x591ace*/
        }
        while ( v46 > 1 ); /*0x591ad6*/
        v47 = MapSeed_field_0x0C > 0; /*0x591adc*/
        v69.MapSeed_field_0x08 = v47; /*0x591aea*/
        v69.MapSeed_field_0x18 = (uint16_t)((MapSeed_field_0x0C >= 0) - 1); /*0x591aee*/
        if ( v46 == 1 ) /*0x591af8*/
        {
          LOWORD(v69.MapSeed_field_0x20) = MapSeed_field_0x0C; /*0x591afe*/
          HIWORD(v69.MapSeed_field_0x20) = -(int16_t)v78; /*0x591b05*/
        }
        else
        {
          v48 = a2[1]; /*0x591b0c*/
          LOWORD(v69.MapSeed_field_0x18) = (MapSeed_field_0x0C >= 0) - 1; /*0x591b10*/
          v72[1] = v48 - (unsigned short)v78 - a3[1] - 5; /*0x591b21*/
          HIWORD(v69.MapSeed_field_0x18) = -v72[1]; /*0x591b2c*/
        }
        *(unsigned int *)v69.__pad_0 = 0; /*0x591b35*/
        if ( (int)v78 > 0 ) /*0x591b3b*/
        {
          v69.MapSeed_field_0x04 = 0; /*0x591b41*/
          while ( 1 ) /*0x591b51*/
          {
            v49 = 0; /*0x591b51*/
            v50 = &(unsigned int *)((char *)&stru_82ADA8 + 131); /*0x591b56*/
            WORD1(v73) = -*(unsigned short *)v69.__pad_0; /*0x591b5d*/
            v51 = 20 * v47 + 8564620; /*0x591b62*/
            while ( 1 ) /*0x591b6f*/
            {
              v52 = v47 == 0; /*0x591b6f*/
              MapSeed_field_0x04 = *(unsigned short *)v69.__pad_0; /*0x591b71*/
              if ( v52 ) /*0x591b75*/
                MapSeed_field_0x04 = v69.MapSeed_field_0x04; /*0x591b77*/
              v54 = a2[1] - 3; /*0x591b82*/
              v70 = *a2; /*0x591b86*/
              v71 = v54; /*0x591b8b*/
              v72[0] = v49 + v70; /*0x591b9a*/
              v72[1] = WORD1(v73) + v54; /*0x591ba9*/
              LOWORD(v69.MapSeed_field_0x0C) = LOWORD(v69.MapSeed_field_0x18) + v49 + v70; /*0x591bb8*/
              HIWORD(v69.MapSeed_field_0x0C) = WORD1(v73) + v54 + HIWORD(v69.MapSeed_field_0x18); /*0x591bc3*/
              LOWORD(v69.MapSeed_field_0x10) = MapSeed_field_0x04 + LOWORD(v69.MapSeed_field_0x0C); /*0x591bd2*/
              HIWORD(v69.MapSeed_field_0x10) = HIWORD(v69.MapSeed_field_0x0C); /*0x591bd7*/
              v69.MapSeed_field_0x14 = v69.MapSeed_field_0x10; /*0x591be6*/
              v55 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&v69.MapSeed_field_0x14); /*0x591bea*/
              v56 = *v50; /*0x591bf3*/
              v50 += 4; /*0x591bf5*/
              v51 += 4; /*0x591bf8*/
              v55[283] = LOBYTE(((unsigned int *)this)[0]) + v56 - 4; /*0x591c01*/
              v57 = *(unsigned char *)(v51 - 4); /*0x591c07*/
              v55[284] = v57; /*0x591c0a*/
              v58 = g_CellTileLookup; /*0x591c10*/
              ++v49; /*0x591c1c*/
              v55[282] = 0; /*0x591c23*/
              *((unsigned int *)v55 + 14) = v57 + v58 - 1; /*0x591c2e*/
              if ( (int)v50 >= (int)&(unsigned int *)((char *)&stru_82ADA8 + 151) ) /*0x591c31*/
                break; /*0x591c31*/
              v47 = v69.MapSeed_field_0x08; /*0x591b6b*/
            }
            v59 = ++*(unsigned int *)v69.__pad_0 < (int)v78; /*0x591c45*/
            --v69.MapSeed_field_0x04; /*0x591c4b*/
            if ( !v59 ) /*0x591c4f*/
              break; /*0x591c4f*/
            v47 = v69.MapSeed_field_0x08; /*0x591b47*/
          }
          v43 = a3; /*0x591c55*/
          v45 = 0; /*0x591c59*/
        }
      }
      v60 = a2[1] - v43[1] - (unsigned int)v78; /*0x591c69*/
      v69.MapSeed_field_0x04 = 0; /*0x591c6b*/
      if ( v60 - 5 > 0 ) /*0x591c74*/
      {
        MapSeed_field_0x20_high = HIWORD(v69.MapSeed_field_0x20); /*0x591c7a*/
        while ( 1 ) /*0x591c88*/
        {
          WORD1(v73) = -LOWORD(v69.MapSeed_field_0x04); /*0x591c88*/
          v62 = -LOWORD(v69.MapSeed_field_0x04); /*0x591c8d*/
          do /*0x591d44*/
          {
            v63 = a2[1] - 3; /*0x591c98*/
            v72[0] = *a2; /*0x591c9c*/
            v72[1] = v63; /*0x591ca1*/
            v70 = v45 + v72[0]; /*0x591cb2*/
            v71 = v62 + v63; /*0x591cbb*/
            v64 = v62 + v63 + MapSeed_field_0x20_high; /*0x591cca*/
            LOWORD(v69.MapSeed_field_0x10) = v45 + v72[0] + LOWORD(v69.MapSeed_field_0x20); /*0x591ccd*/
            HIWORD(v69.MapSeed_field_0x10) = v71 + MapSeed_field_0x20_high; /*0x591cd2*/
            v69.MapSeed_field_0x14 = v69.MapSeed_field_0x10; /*0x591cdb*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x591ce7*/
              *(unsigned int *)(80 * ((int16_t)(v45 + v72[0] + LOWORD(v69.MapSeed_field_0x20)) + g_MapCellWidth * v64) /*0x591d02*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v65 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&v69.MapSeed_field_0x14); /*0x591d10*/
            v66 = ((unsigned int *)this)[0]; /*0x591d19*/
            v65[284] = 3; /*0x591d1c*/
            v65[283] = v66 - v45++ - 1; /*0x591d27*/
            *((unsigned int *)v65 + 14) = g_CellTileLookup + 2; /*0x591d3a*/
            v65[282] = 0; /*0x591d3d*/
          }
          while ( v45 < 4 ); /*0x591d44*/
          v67 = a2[1] - a3[1] - (unsigned int)v78 - 5; /*0x591d63*/
          if ( ++v69.MapSeed_field_0x04 >= v67 ) /*0x591d6c*/
            break; /*0x591d6c*/
          v45 = 0; /*0x591c80*/
        }
      }
      return 1; /*0x591d75*/
    }
    else
    {
      return 0; /*0x5917ef*/
    }
  }
  return result; /*0x5917b7*/

}

// ==== BACKFILL 0x00592AF0  PlaceMapSeedCityBlockVariant  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char MapSeedClass::PlaceCityBlockVariant(int16_t * a2, int16_t * a3, ObjectClass * aP2) {

  int16_t *v4; // ebp
  int16_t *v5; // edi
  int v6; // ebx
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  int16_t *v11; // eax
  int v12; // ebx
  int v13; // ecx
  int16_t *v14; // esi
  unsigned char *v15; // esi
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  unsigned char *v19; // ebx
  int16_t *v20; // ebx
  int v21; // esi
  int16_t *v22; // ecx
  int v23; // esi
  int16_t *v24; // ecx
  int16_t *v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ebx
  void *v32; // ebx
  int i; // ebx
  int16_t v34; // ax
  unsigned char *v35; // eax
  char uniqueId; // dl
  int j; // ebx
  int16_t v38; // ax
  int k; // esi
  int16_t v40; // cx
  unsigned char *v41; // eax
  char v42; // dl
  int v43; // ecx
  int m; // ebx
  int16_t v45; // ax
  int n; // esi
  unsigned char *v47; // eax
  char v48; // cl
  int v49; // edx
  int v52; // [esp+14h] [ebp-28h]
  int v53; // [esp+14h] [ebp-28h]
  int v54; // [esp+18h] [ebp-24h]
  int v55; // [esp+18h] [ebp-24h]
  int16_t *v56; // [esp+1Ch] [ebp-20h] BYREF
  int16_t *v57; // [esp+20h] [ebp-1Ch]
  int v58; // [esp+24h] [ebp-18h]
  int v59; // [esp+28h] [ebp-14h]
  int16_t *v60; // [esp+2Ch] [ebp-10h]
  int16_t *v61; // [esp+30h] [ebp-Ch]
  int v62; // [esp+38h] [ebp-4h]

  v4 = a3; /*0x592af5*/
  v5 = a2; /*0x592afb*/
  v6 = *a2; /*0x592b03*/
  v7 = *a3 - v6; /*0x592b06*/
  if ( v7 < 3 ) /*0x592b11*/
    return 0; /*0x592b11*/
  v9 = a3[1]; /*0x592b17*/
  v10 = a2[1] - v9; /*0x592b1f*/
  if ( v10 < 3 ) /*0x592b24*/
    return 0; /*0x592b24*/
  v58 = v7 + 10; /*0x592b30*/
  v59 = v10 + 10; /*0x592b38*/
  v56 = (int16_t *)(v6 - 2); /*0x592b4a*/
  v57 = (int16_t *)(v9 - 2); /*0x592b4e*/
  if ( !(uint8_t)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v56, (int)aP2) ) /*0x592b52*/
    return 0; /*0x593025*/
  v11 = v56; /*0x592b63*/
  v12 = v5[1] + 1; /*0x592b67*/
  v60 = v56; /*0x592b68*/
  v13 = v12 + 7; /*0x592b6c*/
  v54 = v12 + 7; /*0x592b71*/
  if ( !__OFSUB__(v12, v12 + 7) ) /*0x592b75*/
  {
    v52 = (int)v56 + v58; /*0x592b81*/
    do /*0x592c14*/
    {
      v14 = v11; /*0x592b89*/
      a3 = v11; /*0x592b8d*/
      if ( (int)v11 < v52 ) /*0x592b91*/
      {
        do /*0x592c07*/
        {
          LOWORD(a2) = (unsigned short)v14; /*0x592b97*/
          HIWORD(a2) = v12; /*0x592b9c*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592ba1*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592bb2*/
              *(unsigned int *)(80 * ((int16_t)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592bd1*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = aP2;
            v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2); /*0x592be8*/
            v15[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x592bf2*/
            v14 = a3; /*0x592bf8*/
          }
          v14 = (int16_t *)((char *)v14 + 1); /*0x592c00*/
          a3 = v14; /*0x592c03*/
        }
        while ( (int)v14 < v52 ); /*0x592c07*/
        v13 = v54; /*0x592c09*/
        v11 = v60; /*0x592c0d*/
      }
      ++v12; /*0x592c11*/
    }
    while ( v12 < v13 ); /*0x592c14*/
  }
  v16 = *v4 + 1; /*0x592c26*/
  v61 = v57; /*0x592c27*/
  v60 = (int16_t *)v16; /*0x592c2e*/
  v62 = v59; /*0x592c34*/
  a3 = v57; /*0x592c38*/
  if ( (int)v57 < (int)((char *)v57 + v59) ) /*0x592c3c*/
  {
    v17 = v16 + 7; /*0x592c42*/
    do /*0x592cd6*/
    {
      v18 = v16; /*0x592c47*/
      if ( v16 < v17 ) /*0x592c49*/
      {
        do /*0x592cbf*/
        {
          LOWORD(a2) = v18; /*0x592c54*/
          HIWORD(a2) = (unsigned short)a3; /*0x592c59*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592c5e*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592c6f*/
              *(unsigned int *)(80 * ((int16_t)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592c8e*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = aP2;
            v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2); /*0x592ca5*/
            v19[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x592caf*/
            v16 = (int)v60; /*0x592cb5*/
          }
          ++v18; /*0x592cb9*/
          v17 = v16 + 7; /*0x592cba*/
        }
        while ( v18 < v16 + 7 ); /*0x592cbf*/
      }
      a3 = (int16_t *)((char *)a3 + 1); /*0x592cd0*/
    }
    while ( (int)a3 < (int)((char *)v61 + v62) ); /*0x592cd6*/
  }
  v20 = (int16_t *)*v5; /*0x592ce0*/
  v21 = v5[1] - 1; /*0x592ce3*/
  v60 = v20; /*0x592ce4*/
  v22 = (int16_t *)(v21 + 2); /*0x592ce8*/
  a3 = (int16_t *)(v21 + 2); /*0x592ced*/
  if ( !__OFSUB__(v21, v21 + 2) ) /*0x592cf1*/
  {
    do /*0x592d70*/
    {
      if ( !__OFSUB__(v20, (char *)v20 + 1) ) /*0x592cf8*/
      {
        do /*0x592d63*/
        {
          LOWORD(a2) = (unsigned short)v20; /*0x592cfe*/
          HIWORD(a2) = v21; /*0x592d03*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d08*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592d19*/
              *(unsigned int *)(80 * ((int16_t)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592d3b*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = ((unsigned int *)this)[0];
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) = ((unsigned int *)this)[0]; /*0x592d55*/
          }
          v20 = (int16_t *)((char *)v20 + 1); /*0x592d5f*/
        }
        while ( (int)v20 < (int)((char *)v60 + 1) ); /*0x592d63*/
        v22 = a3; /*0x592d65*/
        v20 = v60; /*0x592d69*/
      }
      ++v21; /*0x592d6d*/
    }
    while ( v21 < (int)v22 ); /*0x592d70*/
  }
  v23 = *v4; /*0x592d72*/
  v24 = (int16_t *)(v23 + 1); /*0x592d76*/
  v25 = (int16_t *)(v23 - 1); /*0x592d79*/
  v60 = (int16_t *)(v23 - 1); /*0x592d7e*/
  a3 = (int16_t *)(v23 + 1); /*0x592d82*/
  if ( !__OFSUB__(v23, v23 + 1) ) /*0x592d86*/
  {
    do /*0x592de9*/
    {
      if ( !__OFSUB__(v25, v25 + 1) ) /*0x592d8d*/
      {
        do /*0x592ddc*/
        {
          LOWORD(a2) = (unsigned short)v25; /*0x592d93*/
          HIWORD(a2) = v23; /*0x592d98*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d9d*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)((unsigned int *)this)[0]); /*0x592db1*/
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) = ((unsigned int *)this)[0]; /*0x592dcc*/
          }
          v25 = (int16_t *)((char *)v25 + 1); /*0x592dd6*/
        }
        while ( (int)v25 < (int)(v60 + 1) ); /*0x592ddc*/
        v24 = a3; /*0x592dde*/
        v25 = v60; /*0x592de2*/
      }
      ++v23; /*0x592de6*/
    }
    while ( v23 < (int)v24 ); /*0x592de9*/
  }
  v26 = *v5; /*0x592deb*/
  v27 = v4[1]; /*0x592dee*/
  v60 = (int16_t *)(v26 + 1); /*0x592df5*/
  v28 = v27 + 1; /*0x592e02*/
  v29 = *v4 - v26 - 1; /*0x592e0a*/
  v53 = v27 + 1; /*0x592e0c*/
  v30 = v5[1]; /*0x592e10*/
  v55 = v30; /*0x592e14*/
  if ( v27 + 1 < v30 ) /*0x592e18*/
  {
    v31 = (int)v60; /*0x592e1a*/
    a3 = (int16_t *)((char *)v60 + v29); /*0x592e20*/
    do /*0x592e85*/
    {
      if ( v31 < (int)a3 ) /*0x592e28*/
      {
        do /*0x592e74*/
        {
          LOWORD(a2) = v31; /*0x592e2e*/
          HIWORD(a2) = v28; /*0x592e33*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592e38*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)((unsigned int *)this)[0]); /*0x592e4c*/
            v28 = v53; /*0x592e63*/
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) = ((unsigned int *)this)[0]; /*0x592e67*/
          }
          ++v31; /*0x592e71*/
        }
        while ( v31 < (int)a3 ); /*0x592e74*/
        v30 = v55; /*0x592e76*/
        v31 = (int)v60; /*0x592e7a*/
      }
      v53 = ++v28; /*0x592e81*/
    }
    while ( v28 < v30 ); /*0x592e85*/
  }
  v32 = aP2; /*0x592e8b*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2, v5, (int)aP2, ((unsigned int *)this)[0]); /*0x592e9c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, v4, (int)v32, ((unsigned int *)this)[0]); /*0x592eb1*/
  for ( i = 0; i < 4; ++i ) /*0x592eb6*/
  {
    v34 = v5[1] + i; /*0x592ebf*/
    LOWORD(aP2) = i + *v4; /*0x592ed0*/
    HIWORD(aP2) = v34; /*0x592ed5*/
    v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x592eda*/
    uniqueId = ((unsigned int *)this)[0]; /*0x592edf*/
    v35[284] = 7; /*0x592ee2*/
    v35[283] = uniqueId - i - 1; /*0x592eed*/
    *((unsigned int *)v35 + 14) = g_CellTileLookup + 6; /*0x592f00*/
    v35[282] = 0; /*0x592f03*/
  }
  for ( j = 0; j < 4; ++j ) /*0x592f0c*/
  {
    v38 = *v5; /*0x592f0e*/
    for ( k = 0; k < *v4 - *v5 + j - 3; ++k ) /*0x592f22*/
    {
      v40 = v5[1] + j; /*0x592f2b*/
      LOWORD(aP2) = v38 + k + 3; /*0x592f34*/
      HIWORD(aP2) = v40; /*0x592f39*/
      v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x592f43*/
      v42 = ((unsigned int *)this)[0]; /*0x592f4c*/
      v41[284] = 4; /*0x592f4f*/
      v41[283] = v42 - j - 1; /*0x592f5a*/
      v43 = g_CellTileLookup + 3; /*0x592f66*/
      v41[282] = 0; /*0x592f69*/
      *((unsigned int *)v41 + 14) = v43; /*0x592f70*/
      v38 = *v5; /*0x592f73*/
    }
  }
  for ( m = 0; m < 4; ++m ) /*0x592f8e*/
  {
    v45 = v4[1]; /*0x592f90*/
    for ( n = 0; n < v5[1] - v45 + m - 3; ++n ) /*0x592fa5*/
    {
      LOWORD(aP2) = m + *v4; /*0x592fbc*/
      HIWORD(aP2) = v45 + n + 3; /*0x592fc1*/
      v47 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x592fc6*/
      v48 = ((unsigned int *)this)[0]; /*0x592fcf*/
      v47[284] = 3; /*0x592fd2*/
      v47[283] = v48 - m - 1; /*0x592fdd*/
      v49 = g_CellTileLookup + 2; /*0x592fe9*/
      v47[282] = 0; /*0x592fec*/
      *((unsigned int *)v47 + 14) = v49; /*0x592ff3*/
      v45 = v4[1]; /*0x592ff6*/
    }
  }
  return 1; /*0x593016*/

}

// ==== BACKFILL 0x00593030  PlaceMapSeedCityBlockDiagonal  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char MapSeedClass::PlaceCityBlockDiagonal(int16_t * a2, int16_t * a3, ObjectClass * aP2) {

  int16_t *v4; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int16_t *v10; // eax
  int v11; // esi
  int16_t *v12; // ebx
  unsigned char *v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  unsigned char *v17; // esi
  int16_t *v18; // ecx
  int v19; // esi
  int16_t *v20; // edx
  int v21; // eax
  int v22; // ebx
  unsigned char *v23; // eax
  int16_t *v24; // ecx
  int16_t *v25; // edx
  int v26; // esi
  int v27; // eax
  int v28; // ebx
  unsigned char *v29; // eax
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // esi
  int v37; // eax
  int v38; // ebx
  void *v39; // ebx
  int16_t v40; // ax
  int uniqueId; // edx
  int16_t v42; // dx
  int v43; // ecx
  int i; // ebx
  int16_t v45; // dx
  unsigned char *v46; // eax
  char v47; // cl
  int j; // ebx
  int16_t v49; // ax
  int k; // esi
  int16_t v51; // dx
  unsigned char *v52; // eax
  char v53; // dl
  int v54; // ecx
  int m; // ebx
  int16_t v56; // ax
  int n; // esi
  int16_t v58; // dx
  int16_t v59; // ax
  unsigned char *v60; // eax
  char v61; // cl
  int v62; // edx
  int16_t *v65; // [esp+14h] [ebp-28h]
  int v66; // [esp+14h] [ebp-28h]
  int v67; // [esp+18h] [ebp-24h]
  int16_t *v68; // [esp+18h] [ebp-24h]
  char *v69; // [esp+18h] [ebp-24h]
  int v70; // [esp+18h] [ebp-24h]
  int v71; // [esp+1Ch] [ebp-20h] BYREF
  int16_t *v72; // [esp+20h] [ebp-1Ch]
  int v73; // [esp+24h] [ebp-18h]
  int v74; // [esp+28h] [ebp-14h]
  int v75; // [esp+2Ch] [ebp-10h]
  int16_t *v76; // [esp+30h] [ebp-Ch]
  int v77; // [esp+38h] [ebp-4h]
  int16_t *v78; // [esp+40h] [ebp+4h]
  int16_t *v79; // [esp+40h] [ebp+4h]
  int16_t *v80; // [esp+40h] [ebp+4h]
  int16_t *v81; // [esp+40h] [ebp+4h]
  int16_t *v82; // [esp+40h] [ebp+4h]

  v4 = a3; /*0x593035*/
  v6 = *a3; /*0x59303f*/
  v7 = *a2 - v6; /*0x593046*/
  if ( v7 < 3 ) /*0x59304f*/
    return 0; /*0x59304f*/
  v8 = a3[1]; /*0x593055*/
  v9 = a2[1] - v8; /*0x59305d*/
  if ( v9 < 3 ) /*0x593062*/
    return 0; /*0x593062*/
  v73 = v7 + 10; /*0x59306e*/
  v74 = v9 + 10; /*0x593076*/
  v71 = v6 - 2; /*0x593086*/
  v72 = (int16_t *)(v8 - 7); /*0x59308a*/
  if ( !(uint8_t)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v71, (int)aP2) ) /*0x59308e*/
    return 0; /*0x59353e*/
  v10 = v72; /*0x59309b*/
  v11 = v71; /*0x59309f*/
  v12 = v72; /*0x5930a3*/
  v75 = v71; /*0x5930a5*/
  v65 = v72; /*0x5930ac*/
  v67 = (int)v72 + 7; /*0x5930b2*/
  if ( !__OFSUB__(v72, (char *)v72 + 7) ) /*0x5930b6*/
  {
    v78 = (int16_t *)(v71 + v73); /*0x5930be*/
    do /*0x59312f*/
    {
      if ( v11 < (int)v78 ) /*0x5930c6*/
      {
        do /*0x59311a*/
        {
          LOWORD(a3) = v11; /*0x5930cc*/
          HIWORD(a3) = (unsigned short)v12; /*0x5930d1*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5930d6*/
          {
            SetLayerDataMap((int16_t *)&a3, (int)aP2); /*0x5930e7*/
            v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x5930ff*/
            v13[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x593109*/
            v12 = v65; /*0x59310f*/
          }
          ++v11; /*0x593117*/
        }
        while ( v11 < (int)v78 ); /*0x59311a*/
        v10 = v72; /*0x59311c*/
        v11 = v75; /*0x593120*/
      }
      v12 = (int16_t *)((char *)v12 + 1); /*0x593128*/
      v65 = v12; /*0x59312b*/
    }
    while ( (int)v12 < v67 ); /*0x59312f*/
  }
  v14 = *a2 + 1; /*0x593138*/
  v77 = v74; /*0x593139*/
  v75 = v14; /*0x593141*/
  v76 = v10; /*0x593145*/
  v79 = v10; /*0x593149*/
  if ( (int)v10 < (int)((char *)v10 + v74) ) /*0x59314d*/
  {
    v15 = v14 + 7; /*0x59314f*/
    do /*0x5931c5*/
    {
      v16 = v14; /*0x593154*/
      if ( v14 < v15 ) /*0x593156*/
      {
        do /*0x5931ae*/
        {
          LOWORD(a3) = v16; /*0x59315d*/
          HIWORD(a3) = (unsigned short)v79; /*0x593162*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x59316b*/
          {
            SetLayerDataMap((int16_t *)&a3, (int)aP2); /*0x59317c*/
            v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x593194*/
            v17[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x59319e*/
            v14 = v75; /*0x5931a4*/
          }
          ++v16; /*0x5931a8*/
          v15 = v14 + 7; /*0x5931a9*/
        }
        while ( v16 < v14 + 7 ); /*0x5931ae*/
      }
      v79 = (int16_t *)((char *)v79 + 1); /*0x5931bf*/
    }
    while ( (int)v79 < (int)((char *)v76 + v77) ); /*0x5931c5*/
  }
  v18 = (int16_t *)v4[1]; /*0x5931c7*/
  v19 = *v4; /*0x5931cb*/
  v20 = v18 + 1; /*0x5931cf*/
  v75 = v19; /*0x5931d2*/
  v80 = v18; /*0x5931d8*/
  v68 = v18 + 1; /*0x5931dc*/
  if ( !__OFSUB__(v18, v18 + 1) ) /*0x5931e0*/
  {
    v21 = v19 + 1; /*0x5931e2*/
    do /*0x593245*/
    {
      v22 = v19; /*0x5931e7*/
      if ( v19 < v21 ) /*0x5931e9*/
      {
        do /*0x593238*/
        {
          HIWORD(a3) = (unsigned short)v18; /*0x5931eb*/
          LOWORD(a3) = v22; /*0x5931f4*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5931f9*/
          {
            SetLayerDataMap((int16_t *)&a3, (int)((unsigned int *)this)[0]); /*0x59320d*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x59321c*/
            v19 = v75; /*0x593224*/
            v23[283] = ((unsigned int *)this)[0]; /*0x593228*/
          }
          v18 = v80; /*0x59322e*/
          ++v22; /*0x593232*/
          v21 = v19 + 1; /*0x593233*/
        }
        while ( v22 < v19 + 1 ); /*0x593238*/
        v20 = v68; /*0x59323a*/
      }
      v18 = (int16_t *)((char *)v18 + 1); /*0x59323e*/
      v80 = v18; /*0x593241*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593245*/
  }
  v24 = (int16_t *)a2[1]; /*0x593247*/
  v25 = (int16_t *)((char *)v24 + 1); /*0x59324e*/
  v26 = *a2 - 1; /*0x593251*/
  v75 = v26; /*0x593254*/
  v81 = v24; /*0x593258*/
  v69 = (char *)v24 + 1; /*0x59325c*/
  if ( !__OFSUB__(v24, (char *)v24 + 1) ) /*0x593260*/
  {
    v27 = v26 + 2; /*0x593262*/
    do /*0x5932c5*/
    {
      v28 = v26; /*0x593267*/
      if ( v26 < v27 ) /*0x593269*/
      {
        do /*0x5932b8*/
        {
          HIWORD(a3) = (unsigned short)v24; /*0x59326b*/
          LOWORD(a3) = v28; /*0x593274*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593279*/
          {
            SetLayerDataMap((int16_t *)&a3, (int)((unsigned int *)this)[0]); /*0x59328d*/
            v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3); /*0x59329c*/
            v26 = v75; /*0x5932a4*/
            v29[283] = ((unsigned int *)this)[0]; /*0x5932a8*/
          }
          v24 = v81; /*0x5932ae*/
          ++v28; /*0x5932b2*/
          v27 = v26 + 2; /*0x5932b3*/
        }
        while ( v28 < v26 + 2 ); /*0x5932b8*/
        v25 = (int16_t *)v69; /*0x5932ba*/
      }
      v24 = (int16_t *)((char *)v24 + 1); /*0x5932be*/
      v81 = v24; /*0x5932c1*/
    }
    while ( (int)v24 < (int)v25 ); /*0x5932c5*/
  }
  v30 = *v4; /*0x5932c7*/
  v31 = v4[1]; /*0x5932ce*/
  v32 = v30 + 1; /*0x5932d2*/
  v33 = *a2 - v30; /*0x5932d5*/
  v34 = a2[1] - v31; /*0x5932db*/
  v75 = v32; /*0x5932dd*/
  v35 = v33 - 1; /*0x5932e1*/
  v36 = v31 + 1; /*0x5932e6*/
  v37 = v31 + v34; /*0x5932e8*/
  v66 = v31 + 1; /*0x5932ea*/
  v70 = v37; /*0x5932f0*/
  if ( v31 + 1 < v37 ) /*0x5932f4*/
  {
    v38 = v75; /*0x5932f6*/
    v82 = (int16_t *)(v75 + v35); /*0x5932fc*/
    do /*0x593361*/
    {
      if ( v38 < (int)v82 ) /*0x593304*/
      {
        do /*0x593350*/
        {
          LOWORD(a3) = v38; /*0x59330a*/
          HIWORD(a3) = v36; /*0x59330f*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593314*/
          {
            SetLayerDataMap((int16_t *)&a3, (int)((unsigned int *)this)[0]); /*0x593328*/
            v36 = v66; /*0x59333f*/
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a3) + 283) = ((unsigned int *)this)[0]; /*0x593343*/
          }
          ++v38; /*0x59334d*/
        }
        while ( v38 < (int)v82 ); /*0x593350*/
        v37 = v70; /*0x593352*/
        v38 = v75; /*0x593356*/
      }
      v66 = ++v36; /*0x59335d*/
    }
    while ( v36 < v37 ); /*0x593361*/
  }
  v39 = aP2; /*0x59336e*/
  v40 = a2[1] - 2; /*0x593372*/
  LOWORD(a3) = *a2; /*0x593376*/
  uniqueId = ((unsigned int *)this)[0]; /*0x59337b*/
  HIWORD(a3) = v40; /*0x59337e*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &a3, (int)aP2, uniqueId); /*0x593399*/
  v42 = v4[1] - 3; /*0x5933a6*/
  LOWORD(aP2) = *v4; /*0x5933aa*/
  v43 = ((unsigned int *)this)[0]; /*0x5933af*/
  HIWORD(aP2) = v42; /*0x5933b2*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &aP2, (int)v39, v43); /*0x5933cd*/
  for ( i = 0; i < 4; ++i ) /*0x5933d2*/
  {
    v45 = v4[1]; /*0x5933d7*/
    LOWORD(aP2) = i + *a2; /*0x5933e2*/
    HIWORD(aP2) = v45 - i; /*0x5933f0*/
    v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x5933f5*/
    v47 = ((unsigned int *)this)[0]; /*0x5933fa*/
    v46[284] = 6; /*0x5933fd*/
    v46[283] = v47 - i - 1; /*0x593408*/
    *((unsigned int *)v46 + 14) = g_CellTileLookup + 5; /*0x59341b*/
    v46[282] = 0; /*0x59341e*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593427*/
  {
    v49 = a2[1]; /*0x593429*/
    for ( k = 0; k < v49 - v4[1] + j - 3; ++k ) /*0x59343e*/
    {
      v51 = j + *a2; /*0x593448*/
      HIWORD(aP2) = v49 - k - 3; /*0x59344b*/
      LOWORD(aP2) = v51; /*0x59345a*/
      v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x59345f*/
      v53 = ((unsigned int *)this)[0]; /*0x593468*/
      v52[284] = 3; /*0x59346b*/
      v52[283] = v53 - j - 1; /*0x593476*/
      v54 = g_CellTileLookup + 2; /*0x593482*/
      v52[282] = 0; /*0x593485*/
      *((unsigned int *)v52 + 14) = v54; /*0x59348c*/
      v49 = a2[1]; /*0x59348f*/
    }
  }
  for ( m = 0; m < 4; ++m ) /*0x5934af*/
  {
    v56 = *v4; /*0x5934b1*/
    for ( n = 0; n < *a2 - *v4 + m - 3; ++n ) /*0x5934c5*/
    {
      v58 = v56 + n + 3; /*0x5934c7*/
      v59 = v4[1] - m; /*0x5934d3*/
      LOWORD(aP2) = v58; /*0x5934dc*/
      HIWORD(aP2) = v59; /*0x5934e1*/
      v60 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x5934e6*/
      v61 = ((unsigned int *)this)[0]; /*0x5934ef*/
      v60[284] = 2; /*0x5934f2*/
      v60[283] = v61 - m - 1; /*0x5934fd*/
      v62 = g_CellTileLookup + 1; /*0x593509*/
      v60[282] = 0; /*0x59350a*/
      *((unsigned int *)v60 + 14) = v62; /*0x593511*/
      v56 = *v4; /*0x593514*/
    }
  }
  return 1; /*0x59352f*/

}

// ==== BACKFILL 0x00593AF0  PlaceMapSeedCityBlockVariant2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char MapSeedClass::PlaceCityBlockVariant2(int16_t * a2, int16_t * a3, ObjectClass * aP2) {

  int16_t *v4; // ebp
  int16_t *v5; // edi
  int v6; // esi
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // esi
  unsigned char *v14; // esi
  int v15; // ebx
  int v16; // esi
  int v17; // eax
  int16_t *v18; // ecx
  int v19; // esi
  int16_t *v20; // edx
  int v21; // eax
  int v22; // ebx
  unsigned char *v23; // eax
  int v24; // ebx
  int v25; // esi
  int16_t *v26; // ecx
  int v27; // eax
  int v28; // ebx
  int v29; // esi
  int v30; // ecx
  int v31; // eax
  int v32; // ebx
  void *v33; // ebx
  int16_t v34; // dx
  int16_t v35; // cx
  int i; // ebx
  int16_t v37; // dx
  unsigned char *v38; // eax
  char uniqueId; // cl
  int j; // ebx
  int16_t v41; // ax
  int k; // esi
  unsigned char *v43; // eax
  char v44; // cl
  int m; // ebx
  int16_t v46; // ax
  int n; // esi
  unsigned char *v48; // eax
  char v49; // cl
  int v50; // edx
  int v53; // [esp+14h] [ebp-28h]
  unsigned char *v54; // [esp+14h] [ebp-28h]
  int v55; // [esp+14h] [ebp-28h]
  int v56; // [esp+18h] [ebp-24h]
  char *v57; // [esp+18h] [ebp-24h]
  int v58; // [esp+18h] [ebp-24h]
  int v59; // [esp+1Ch] [ebp-20h] BYREF
  int v60; // [esp+20h] [ebp-1Ch]
  int v61; // [esp+24h] [ebp-18h]
  int v62; // [esp+28h] [ebp-14h]
  int v63; // [esp+2Ch] [ebp-10h]
  int v64; // [esp+30h] [ebp-Ch]
  int v65; // [esp+38h] [ebp-4h]

  v4 = a2; /*0x593af5*/
  v5 = a3; /*0x593afb*/
  v6 = *a2; /*0x593aff*/
  v7 = *a3 - v6; /*0x593b06*/
  if ( v7 < 3 ) /*0x593b11*/
    return 0; /*0x593b11*/
  v9 = a2[1]; /*0x593b17*/
  v10 = a3[1] - v9; /*0x593b1f*/
  if ( v10 < 3 ) /*0x593b24*/
    return 0; /*0x593b24*/
  v61 = v7 + 10; /*0x593b30*/
  v62 = v10 + 10; /*0x593b38*/
  v59 = v6 - 7; /*0x593b4a*/
  v60 = v9 - 4; /*0x593b4e*/
  if ( !(uint8_t)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v59, (int)aP2) ) /*0x593b52*/
    return 0; /*0x593ffa*/
  v11 = v59; /*0x593b67*/
  v65 = v62; /*0x593b6b*/
  v12 = v59; /*0x593b71*/
  v13 = v60; /*0x593b73*/
  v63 = v59; /*0x593b77*/
  v64 = v60; /*0x593b7b*/
  v53 = v60; /*0x593b7f*/
  if ( v60 < v60 + v62 ) /*0x593b83*/
  {
    a3 = (int16_t *)(v59 + 7); /*0x593b88*/
    do /*0x593bff*/
    {
      if ( v12 < (int)a3 ) /*0x593b90*/
      {
        do /*0x593be4*/
        {
          LOWORD(a2) = v12; /*0x593b96*/
          HIWORD(a2) = v13; /*0x593b9b*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593ba0*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)aP2); /*0x593bb1*/
            v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2); /*0x593bc9*/
            v14[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x593bd3*/
            v13 = v53; /*0x593bd9*/
          }
          ++v12; /*0x593be1*/
        }
        while ( v12 < (int)a3 ); /*0x593be4*/
        v11 = v59; /*0x593be6*/
        v12 = v63; /*0x593bea*/
      }
      v53 = ++v13; /*0x593bfb*/
    }
    while ( v13 < v64 + v65 ); /*0x593bff*/
  }
  v15 = v5[1] + 1; /*0x593c05*/
  v16 = v11; /*0x593c06*/
  v63 = v11; /*0x593c08*/
  v17 = v15 + 7; /*0x593c0c*/
  v56 = v15 + 7; /*0x593c11*/
  if ( !__OFSUB__(v15, v15 + 7) ) /*0x593c15*/
  {
    a3 = (int16_t *)(v11 + v61); /*0x593c1d*/
    do /*0x593c88*/
    {
      if ( v16 < (int)a3 ) /*0x593c25*/
      {
        do /*0x593c7b*/
        {
          LOWORD(a2) = v16; /*0x593c2b*/
          HIWORD(a2) = v15; /*0x593c30*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593c35*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)aP2); /*0x593c46*/
            v54 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2); /*0x593c5e*/
            v54[283] = *(unsigned char *)(List::FindByValue((List *)aP2) + 16); /*0x593c6e*/
          }
          ++v16; /*0x593c78*/
        }
        while ( v16 < (int)a3 ); /*0x593c7b*/
        v16 = v63; /*0x593c7d*/
        v17 = v56; /*0x593c81*/
      }
      ++v15; /*0x593c85*/
    }
    while ( v15 < v17 ); /*0x593c88*/
  }
  v18 = (int16_t *)v4[1]; /*0x593c8a*/
  v19 = *v4; /*0x593c8e*/
  v20 = (int16_t *)((char *)v18 + 1); /*0x593c92*/
  v63 = v19; /*0x593c95*/
  a3 = v18; /*0x593c9b*/
  v57 = (char *)v18 + 1; /*0x593c9f*/
  if ( !__OFSUB__(v18, (char *)v18 + 1) ) /*0x593ca3*/
  {
    v21 = v19 + 2; /*0x593ca5*/
    do /*0x593d08*/
    {
      v22 = v19; /*0x593caa*/
      if ( v19 < v21 ) /*0x593cac*/
      {
        do /*0x593cfb*/
        {
          HIWORD(a2) = (unsigned short)v18; /*0x593cae*/
          LOWORD(a2) = v22; /*0x593cb7*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593cbc*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)((unsigned int *)this)[0]); /*0x593cd0*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2); /*0x593cdf*/
            v19 = v63; /*0x593ce7*/
            v23[283] = ((unsigned int *)this)[0]; /*0x593ceb*/
          }
          v18 = a3; /*0x593cf1*/
          ++v22; /*0x593cf5*/
          v21 = v19 + 2; /*0x593cf6*/
        }
        while ( v22 < v19 + 2 ); /*0x593cfb*/
        v20 = (int16_t *)v57; /*0x593cfd*/
      }
      v18 = (int16_t *)((char *)v18 + 1); /*0x593d01*/
      a3 = v18; /*0x593d04*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593d08*/
  }
  v24 = *v5; /*0x593d0e*/
  v25 = v5[1] - 1; /*0x593d11*/
  v63 = v24; /*0x593d12*/
  v26 = (int16_t *)(v25 + 2); /*0x593d16*/
  a3 = (int16_t *)(v25 + 2); /*0x593d1b*/
  if ( !__OFSUB__(v25, v25 + 2) ) /*0x593d1f*/
  {
    do /*0x593d80*/
    {
      if ( !__OFSUB__(v24, v24 + 1) ) /*0x593d26*/
      {
        do /*0x593d73*/
        {
          LOWORD(a2) = v24; /*0x593d2c*/
          HIWORD(a2) = v25; /*0x593d31*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593d36*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)((unsigned int *)this)[0]); /*0x593d4a*/
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) = ((unsigned int *)this)[0]; /*0x593d65*/
          }
          ++v24; /*0x593d6f*/
        }
        while ( v24 < v63 + 1 ); /*0x593d73*/
        v26 = a3; /*0x593d75*/
        v24 = v63; /*0x593d79*/
      }
      ++v25; /*0x593d7d*/
    }
    while ( v25 < (int)v26 ); /*0x593d80*/
  }
  v27 = *v4; /*0x593d82*/
  v28 = v4[1]; /*0x593d86*/
  v63 = v27 + 1; /*0x593d8d*/
  v29 = v28 + 1; /*0x593d99*/
  v30 = *v5 - v27 - 1; /*0x593da1*/
  v55 = v28 + 1; /*0x593da3*/
  v31 = v5[1]; /*0x593da7*/
  v58 = v31; /*0x593dab*/
  if ( v28 + 1 < v31 ) /*0x593daf*/
  {
    v32 = v63; /*0x593db1*/
    a3 = (int16_t *)(v63 + v30); /*0x593db7*/
    do /*0x593e1c*/
    {
      if ( v32 < (int)a3 ) /*0x593dbf*/
      {
        do /*0x593e0b*/
        {
          LOWORD(a2) = v32; /*0x593dc5*/
          HIWORD(a2) = v29; /*0x593dca*/
          if ( (uint8_t)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593dcf*/
          {
            SetLayerDataMap((int16_t *)&a2, (int)((unsigned int *)this)[0]); /*0x593de3*/
            v29 = v55; /*0x593dfa*/
            *((unsigned char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&a2) + 283) = ((unsigned int *)this)[0]; /*0x593dfe*/
          }
          ++v32; /*0x593e08*/
        }
        while ( v32 < (int)a3 ); /*0x593e0b*/
        v31 = v58; /*0x593e0d*/
        v32 = v63; /*0x593e11*/
      }
      v55 = ++v29; /*0x593e18*/
    }
    while ( v29 < v31 ); /*0x593e1c*/
  }
  v33 = aP2; /*0x593e2a*/
  v34 = *v4 - 3; /*0x593e2e*/
  HIWORD(a2) = v4[1]; /*0x593e32*/
  LOWORD(a2) = v34; /*0x593e3c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &a2, (int)aP2, ((unsigned int *)this)[0]); /*0x593e55*/
  v35 = *v5 - 2; /*0x593e61*/
  HIWORD(aP2) = v5[1]; /*0x593e65*/
  LOWORD(aP2) = v35; /*0x593e6a*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &aP2, (int)v33, ((unsigned int *)this)[0]); /*0x593e88*/
  for ( i = 0; i < 4; ++i ) /*0x593e8d*/
  {
    v37 = v5[1] + i; /*0x593e96*/
    LOWORD(aP2) = *v4 - i; /*0x593ea1*/
    HIWORD(aP2) = v37; /*0x593eac*/
    v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x593eb1*/
    uniqueId = ((unsigned int *)this)[0]; /*0x593eb6*/
    v38[284] = 8; /*0x593eb9*/
    v38[283] = uniqueId - i - 1; /*0x593ec4*/
    *((unsigned int *)v38 + 14) = g_CellTileLookup + 7; /*0x593ed7*/
    v38[282] = 0; /*0x593eda*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593ee3*/
  {
    v41 = v4[1]; /*0x593ee5*/
    for ( k = 0; k < v5[1] - v41 + j - 3; v41 = v4[1] ) /*0x593efa*/
    {
      LOWORD(aP2) = *v4 - j; /*0x593f11*/
      HIWORD(aP2) = v41 + k + 3; /*0x593f16*/
      v43 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x593f1b*/
      v44 = ((unsigned int *)this)[0]; /*0x593f24*/
      v43[284] = 1; /*0x593f27*/
      ++k; /*0x593f32*/
      v43[283] = v44 - j - 1; /*0x593f33*/
      *((unsigned int *)v43 + 14) = g_CellTileLookup; /*0x593f3f*/
      v43[282] = 0; /*0x593f42*/
    }
  }
  for ( m = 0; m < 4; ++m ) /*0x593f64*/
  {
    v46 = *v5; /*0x593f66*/
    for ( n = 0; n < *v5 - *v4 + m - 3; ++n ) /*0x593f7a*/
    {
      LOWORD(aP2) = v46 - n - 3; /*0x593f86*/
      HIWORD(aP2) = v5[1] + m; /*0x593f97*/
      v48 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x593f9c*/
      v49 = ((unsigned int *)this)[0]; /*0x593fa5*/
      v48[284] = 4; /*0x593fa8*/
      v48[283] = v49 - m - 1; /*0x593fb3*/
      v50 = g_CellTileLookup + 3; /*0x593fbf*/
      v48[282] = 0; /*0x593fc2*/
      *((unsigned int *)v48 + 14) = v50; /*0x593fc9*/
      v46 = *v5; /*0x593fcc*/
    }
  }
  return 1; /*0x593feb*/

}

// ==== BACKFILL 0x005942F0  sub_5942F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_5942F0(int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005942F0.json)
}

// ==== BACKFILL 0x00594870  PlaceRandomWaypoints  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void Gap2Recv_594870::PlaceRandomWaypoints(int a2) {

  unsigned int v3; // eax
  void *NeedsSaveOrLink; // ecx
  int i; // edi
  char *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int *v9; // edi
  int j; // eax
  int v11; // esi
  int v12; // ebp
  int16_t *Waypoint_Location; // eax
  unsigned int *v14; // eax
  int k; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  void *Items; // eax
  int16_t v20[2]; // [esp+10h] [ebp-5Ch] BYREF
  int64_t v21; // [esp+14h] [ebp-58h]
  int64_t attachedBomb; // [esp+1Ch] [ebp-50h]
  int64_t v23; // [esp+24h] [ebp-48h]
  double v24; // [esp+2Ch] [ebp-40h]
  int v25[4]; // [esp+34h] [ebp-38h] BYREF
  unsigned int v26[4]; // [esp+44h] [ebp-28h] BYREF
  VectorClass v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+64h] [ebp-8h]
  int v29; // [esp+68h] [ebp-4h]

  v26[1] = *(unsigned int *)&stru_87F5F0.__pad_58[672] + 4; /*0x594898*/
  v26[0] = *(unsigned int *)&stru_87F5F0.__pad_58[668] + 4; /*0x5948a8*/
  v26[2] = *(unsigned int *)&stru_87F5F0.__pad_58[676] - 8; /*0x5948ac*/
  v26[3] = *(unsigned int *)&stru_87F5F0.__pad_58[680] - 8; /*0x5948b0*/
  VectorClass::CellConstructor(&v27, 0, 0); /*0x5948b4*/
  v27.vtable0 = &vt_DynamicVectorClass; /*0x5948b9*/
  v29 = 10; /*0x5948c1*/
  v28 = 0; /*0x5948c9*/
  do /*0x5948f1*/
  {
    v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5948d7*/
    LOWORD(v3) = Math::RoundToInt((double)v21 * 6.984919311242392e-10); /*0x5948e9*/
  }
  while ( v3 > 2 ); /*0x5948f1*/
  NeedsSaveOrLink = ((unsigned int *)this)[0]; /*0x5948f3*/
  LODWORD(v21) = 0; /*0x5948f6*/
  for ( i = v3 + 12 * (unsigned int)NeedsSaveOrLink + 3 * (unsigned int)NeedsSaveOrLink; v28 < i; LODWORD(v21) = v21 + 1 ) /*0x59490a*/
  {
    if ( (int)v21 >= 300 ) /*0x594918*/
      break; /*0x594918*/
    v6 = &this->attachedBomb[-1].pad_59[2]; /*0x594925*/
    attachedBomb = (unsigned int)this->attachedBomb; /*0x594929*/
    v24 = (double)attachedBomb; /*0x594931*/
    do /*0x59495c*/
    {
      v23 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59493f*/
      LOWORD(v7) = Math::RoundToInt((double)v23 * v24 * 2.328306437080797e-10); /*0x594955*/
    }
    while ( v7 > (unsigned int)v6 ); /*0x59495c*/
    *(unsigned int *)v20 = *(unsigned int *)(this->fallRate + 4 * v7); /*0x594967*/
    v25[0] = v20[0] - 3; /*0x594979*/
    v25[1] = v20[1] - 3; /*0x59497d*/
    v25[2] = 6; /*0x59498a*/
    v25[3] = 6; /*0x59498e*/
    if ( (uint8_t)IsAreaClearMap(v25, 0, 0) /*0x5949e1*/
      && Math_Helper((ObjectClass *)&stru_87F5F0.__pad_58[416], v26, v20, 1)
      && (v28 < v27.Capacity
       || (v27.IsAllocated || !v27.Capacity)
       && v29 > 0
       && (*((uint8_t (**)(VectorClass *, int, unsigned int))v27.vtable0 + 2))(&v27, v29 + v27.Capacity, 0)) )
    {
      v8 = v28++; /*0x5949f0*/
      *((unsigned int *)v27.Items + v8) = *(unsigned int *)v20; /*0x5949fb*/
    }
  }
  v9 = BuildingPlacement::SelectBuildingPlacementCells((BuildingPlacement *)this, (int)&v27); /*0x594a1f*/
  if ( v9 ) /*0x594a23*/
  {
    for ( j = 4544; j < 4576; j += 4 ) /*0x594a58*/
      *(void **)((char *)&dword_A8B230->vtable0 + j) = *(void **)&g_MissionQueueFrame.globalVariables[128]; /*0x594a69*/
    v11 = 0; /*0x594a79*/
    if ( (int)((unsigned int *)this)[0] > 0 ) /*0x594a7d*/
    {
      v12 = a2; /*0x594a7f*/
      do /*0x594add*/
      {
        ScenarioClass::Set_Waypoint((char *)dword_A8B230, v12, *(unsigned int *)(v9[1] + 4 * v11)); /*0x594a91*/
        Waypoint_Location = (int16_t *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, v12); /*0x594aa2*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x594aad*/
        ++v11; /*0x594ac0*/
        v14[80] |= 4u; /*0x594ac1*/
        ++v12; /*0x594acc*/
        *((unsigned int *)&dword_A8B230[126].vtable1 + v11) = *(unsigned int *)(v9[1] + 4 * v11 - 4); /*0x594ad1*/
      }
      while ( v11 < (int)((unsigned int *)this)[0] ); /*0x594add*/
    }
    for ( k = 0; k < (int)((unsigned int *)this)[0]; ++k ) /*0x594ae8*/
    {
      v16 = v9[4]; /*0x594aea*/
      if ( v16 > 0 ) /*0x594aef*/
      {
        v17 = v16 - 1; /*0x594af1*/
        v18 = 0; /*0x594af4*/
        for ( v9[4] = v17; v18 < v9[4]; *(unsigned int *)(v9[1] + 4 * v18 - 4) = *(unsigned int *)(v9[1] + 4 * v18) ) /*0x594afb*/
          ++v18; /*0x594b00*/
      }
    }
    if ( this->AbstractClass ) /*0x594b17*/
      (**(void (***)(void *, int))this->AbstractClass)(this->AbstractClass, 1); /*0x594b21*/
    Items = v27.Items; /*0x594b23*/
    this->AbstractClass = v9; /*0x594b27*/
    v27.vtable0 = &vt_VectorClass; /*0x594b2b*/
    if ( Items && v27.IsAllocated ) /*0x594b3b*/
      __3_YAXPAX_Z(Items); /*0x594b3e*/
  }
  else
  {
    v27.vtable0 = &vt_VectorClass; /*0x594a29*/
    if ( v27.Items ) /*0x594a33*/
    {
      if ( v27.IsAllocated ) /*0x594a3f*/
        __3_YAXPAX_Z(v27.Items); /*0x594a46*/
    }
  }

}

// ==== BACKFILL 0x00595BC0  CCFileClass::Load  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Load() {
  return 0;  /* G42.33b2 restub: auto restub (pass4+, 2 errs): wrong-universe gap2 body; truth func_0x595BC0.json */
}

// ==== BACKFILL 0x00597430  Team_Start_597430  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void* Gap2Recv_597430::Team_Start_597430() {

  unsigned int *WDTTerritoryClass; // eax
  int v3; // ecx
  int v4; // eax
  void **v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch]
  rc_ptr v8[4]; // [esp+14h] [ebp-8h] BYREF

  ComPtr::Constructor((ComPtr *)&v6); /*0x59743c*/
  v6 = &vt_rc_ptr; /*0x59744e*/
  if ( *(unsigned int *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x59745f*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass(v8, *(int *)dword_A8B240); /*0x59746b*/
    ComPtr::Set((ComPtr *)&v6, WDTTerritoryClass[1]); /*0x597478*/
    *(unsigned int *)v8 = &vt_rc_ptr; /*0x597481*/
    ComPtr::Release((ComPtr *)v8); /*0x597485*/
  }
  v3 = v7; /*0x59748a*/
  if ( v7 ) /*0x597490*/
  {
    if ( *(unsigned short *)(v7 + 12) ) /*0x597496*/
    {
      v4 = *(uint16_t *)(v7 + 12); /*0x5974b6*/
    }
    else
    {
      v4 = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x5974ab*/
      v3 = v7; /*0x5974b0*/
    }
    *(unsigned int *)&this->isOnMap = v4; /*0x5974bb*/
    switch ( *(unsigned char *)(v3 + 18) ) /*0x5974d1*/
    {
      case 0: /*0x5974d1*/
        this->customSound = 0; /*0x5974d8*/
        break; /*0x5974df*/
      case 2: /*0x5974d1*/
        this->customSound = 2; /*0x5974e1*/
        break; /*0x5974e4*/
      case 3: /*0x5974d1*/
        this->customSound = 3; /*0x5974e6*/
        break; /*0x5974e9*/
      default:
        this->customSound = 1; /*0x5974eb*/
        break; /*0x5974eb*/
    }
    switch ( *(unsigned char *)(v3 + 19) ) /*0x5974f7*/
    {
      case 0: /*0x5974f7*/
        *(unsigned int *)&this->bombVisible = 0; /*0x5974fe*/
        break; /*0x597505*/
      case 2: /*0x5974f7*/
        *(unsigned int *)&this->bombVisible = 2; /*0x597507*/
        break; /*0x59750a*/
      case 3: /*0x5974f7*/
        *(unsigned int *)&this->bombVisible = 3; /*0x59750c*/
        break; /*0x59750f*/
      default:
        *(unsigned int *)&this->bombVisible = 1; /*0x597511*/
        break; /*0x597511*/
    }
    this->customSound_controller[0] = 4; /*0x597516*/
    switch ( *(unsigned char *)(v3 + 30) ) /*0x597524*/
    {
      case 1: /*0x597524*/
        this->ambientSoundController[3] = 2; /*0x597534*/
        break; /*0x597537*/
      case 2: /*0x597524*/
        this->ambientSoundController[3] = 0; /*0x59752b*/
        break; /*0x597532*/
      case 3: /*0x597524*/
        this->ambientSoundController[3] = 3; /*0x597539*/
        break; /*0x59753c*/
      default:
        this->ambientSoundController[3] = 1; /*0x59753e*/
        break; /*0x59753e*/
    }
    this->ambientSoundController[0] = *(uint8_t *)(v3 + 28); /*0x59754d*/
    this->attachedBomb = (BombClass *)*(uint8_t *)(v3 + 29); /*0x597555*/
    this->estimatedHealth = *(uint8_t *)(v3 + 33); /*0x59755d*/
    this->health = *(uint8_t *)(v3 + 36); /*0x597565*/
    this->ambientSoundController[2] = *(uint8_t *)(v3 + 39); /*0x59756d*/
    this->ambientSoundController[4] = *(uint8_t *)(v3 + 42); /*0x597575*/
    this->customSound_controller[1] = *(uint8_t *)(v3 + 45); /*0x59757d*/
    this->customSound_controller[2] = *(uint8_t *)(v3 + 48); /*0x597585*/
    this->customSound_controller[3] = *(uint8_t *)(v3 + 51); /*0x59758d*/
    this->customSound_controller[4] = *(uint8_t *)(v3 + 54); /*0x597593*/
    this->ambientSoundController[1] = *(unsigned int *)(v3 + 24); /*0x597599*/
  }
  v6 = &vt_rc_ptr; /*0x5975a0*/
  return ComPtr::Release((ComPtr *)&v6); /*0x5975a9*/

}

// ==== BACKFILL 0x00597D40  j_Options::GetValue  cls=j_Options  sig=csp  renamed_refs=0  residual=- ====
int j_Options::j_Options_GetValue(const char ** dwNewLong)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x597D40)
}

// ==== BACKFILL 0x00597D50  MapSeedClass::ddtor  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
bool MapSeedClass::ddtor(char* lpFileName)
{
    return {}; // TODO stub - G42 return-sync (bool->virtual bool)
}

// ==== BACKFILL 0x00597FA0  MapSeedClass::GetCell  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::GetCell()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 2), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5578); /*0x597fb6*/

}

// ==== BACKFILL 0x00597FC0  MapSeedClass::SetCell  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::SetCell()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 6), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5584); /*0x597fd6*/

}

// ==== BACKFILL 0x00597FE0  MapSeedClass::Validate  cls=MapSeedClass  sig=csp  renamed_refs=0  residual=- ====
wchar_t * MapSeedClass::Validate()
{

  return GetStringCSF((wchar_t *)(unsigned int *)((char *)&stru_82BA00 + 11), 0,(const char *)((unsigned int *)((char *)&stru_82BA00 + 11)), 5590); /*0x597ff6*/

}

// ==== BACKFILL 0x00598030  Range_RandomInt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
long long Range_RandomInt(MouseClass * aP0, MapClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x598030)
}

// ==== BACKFILL 0x005980A0  sub_5980A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_5980A0(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005980A0.json)
}

// ==== BACKFILL 0x0059B940  Map_Helper_59B940  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double Map_Helper_59B940(MapResourceClass * aP0, short * a1, MapResourceClass * aP2, MapResourceClass * aP3, float a5, MapResourceClass * aP5)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0059B940.json)
}

// ==== BACKFILL 0x0059D480  sub_59D480  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
double sub_59D480(short * a1, short * a2, int a3)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0059D480.json)
}
