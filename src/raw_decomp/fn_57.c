// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00570050  Terrain::ProcessCellModification  this=Terrain  sig=csp ====
void __thiscall Terrain::ProcessCellModification(Terrain *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // esi
  char v12; // bl
  __int16 *v13; // ecx
  unsigned int v14; // eax
  int *v15; // eax
  __int16 *v16; // ecx
  unsigned int v17; // eax
  int *v18; // eax
  __int16 *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  int v26; // eax
  bool v27; // sf
  int v28; // eax
  int *v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edi
  unsigned int v34; // eax
  int *v35; // eax
  int *v36; // edx
  int v37; // eax
  unsigned int v38; // eax
  int *v39; // eax
  __int16 *v40; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  __int16 *v43; // ecx
  unsigned int v44; // eax
  int *v45; // eax
  __int16 *v46; // ecx
  unsigned int v47; // eax
  int *v48; // eax
  int v49; // eax
  int v50; // edi
  int v51; // esi
  int v52; // eax
  Terrain *v53; // esi
  unsigned int v54; // eax
  int *v55; // eax
  unsigned int v56; // eax
  int *v57; // eax
  Terrain *v58; // ebx
  __int16 *v59; // ecx
  unsigned int v60; // eax
  int *v61; // eax
  __int16 *v62; // ecx
  unsigned int v63; // eax
  int *v64; // eax
  __int16 *v65; // ecx
  unsigned int v66; // eax
  int *v67; // eax
  int Capacity; // eax
  int v69; // edi
  int v70; // esi
  int v71; // eax
  unsigned int v72; // eax
  int *v73; // eax
  int v75; // [esp+14h] [ebp-4Ch] BYREF
  __int16 v76[2]; // [esp+18h] [ebp-48h] BYREF
  __int16 v77[2]; // [esp+1Ch] [ebp-44h] BYREF
  int v78; // [esp+20h] [ebp-40h] BYREF
  __int16 v79[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v80; // [esp+2Ch] [ebp-34h] BYREF
  __int16 v81[4]; // [esp+30h] [ebp-30h] BYREF
  int v82; // [esp+38h] [ebp-28h] BYREF
  int v83; // [esp+3Ch] [ebp-24h]
  int v84; // [esp+40h] [ebp-20h]
  int v85; // [esp+44h] [ebp-1Ch]
  VectorClass v86; // [esp+48h] [ebp-18h] BYREF
  int v87; // [esp+58h] [ebp-8h]
  int v88; // [esp+5Ch] [ebp-4h]

  v2 = a2; /*0x570055*/
  v4 = -2; /*0x570061*/
  do /*0x5700b1*/
  {
    v5 = -2; /*0x570066*/
    do /*0x5700ab*/
    {
      v6 = v2[1] + v5; /*0x570075*/
      LOWORD(a2) = *v2 + v4; /*0x570079*/
      HIWORD(a2) = v6; /*0x57007e*/
      *(_DWORD *)v76 = a2; /*0x570091*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v76) + 17); /*0x57009a*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x5700a5*/
      {
        v8 = v2[1] + v5; /*0x5700b9*/
        LOWORD(a2) = *v2 + v4; /*0x5700c1*/
        HIWORD(a2) = v8; /*0x5700c6*/
        CellClass::ApplyCliffTileModifications((CellClass *)this, (int)&a2); /*0x5700d6*/
        return; /*0x5700e2*/
      }
      ++v5; /*0x5700a7*/
    }
    while ( v5 < 3 ); /*0x5700ab*/
    ++v4; /*0x5700ad*/
  }
  while ( v4 < 3 ); /*0x5700b1*/
  v9 = *v2 + (v2[1] << 9); /*0x5700f0*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x570106*/
  {
    v11 = v10; /*0x570108*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x57010f*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v2; /*0x570114*/
  }
  v12 = 0; /*0x57011f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x570124*/
  {
    *(_DWORD *)v76 = 0; /*0x57012a*/
    do /*0x57024e*/
    {
      v13 = (__int16 *)*CellStruct::Add((CellStruct *)v2, &v78, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x570147*/
      *(_DWORD *)v77 = v13; /*0x570149*/
      a2 = v13; /*0x57014d*/
      v14 = (__int16)v13 + (SHIWORD(v13) << 9); /*0x57015c*/
      if ( v14 < 0x40000 && (v15 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x570172*/
      {
        v11 = v15; /*0x570174*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v13; /*0x570178*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57017e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57018c*/
        break; /*0x57018c*/
      v16 = (__int16 *)*CellStruct::Add((CellStruct *)&a2, v79, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5701a1*/
      *(_DWORD *)v77 = v16; /*0x5701a3*/
      a2 = v16; /*0x5701a7*/
      v17 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x5701b6*/
      if ( v17 < 0x40000 && (v18 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17)) != 0 ) /*0x5701cc*/
      {
        v11 = v18; /*0x5701ce*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v16; /*0x5701d2*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5701d8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5701e6*/
        break; /*0x5701e6*/
      v19 = (__int16 *)*CellStruct::Add((CellStruct *)&a2, &v80, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5701f7*/
      *(_DWORD *)v77 = v19; /*0x5701f9*/
      a2 = v19; /*0x5701fd*/
      v20 = (__int16)v19 + (SHIWORD(v19) << 9); /*0x57020c*/
      if ( v20 < 0x40000 && (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) != 0 ) /*0x570222*/
      {
        v11 = v21; /*0x570224*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v19; /*0x570228*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57022e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57023c*/
        break; /*0x57023c*/
      v12 = (v12 + 1) & 7; /*0x570243*/
      ++*(_DWORD *)v76; /*0x57024a*/
    }
    while ( *(int *)v76 < 8 ); /*0x57024e*/
  }
  v22 = v11[80]; /*0x570254*/
  if ( (v22 & 0x100) != 0 || (v22 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v22 & 0x80u) == 0 ) /*0x570273*/
        v23 = *(_DWORD *)(v11[11] + 36); /*0x570280*/
      else
        v23 = v11[9]; /*0x570275*/
    }
    else
    {
      *(_DWORD *)v76 = 0; /*0x57028d*/
      v24 = (v22 & 0x800) != 0 ? 4 : 2;
      v75 = v11[9]; /*0x5702a6*/
      while ( 1 ) /*0x5702c3*/
      {
        v25 = *CellStruct::Add((CellStruct *)&v75, &v80, (_WORD *)(4 * (v24 & 7) + 9041544)); /*0x5702c3*/
        *(_DWORD *)v77 = v25; /*0x5702c5*/
        v26 = SHIWORD(v25) << 9; /*0x5702d4*/
        v27 = (__int16)v25 + v26 < 0; /*0x5702d7*/
        v28 = (__int16)v25 + v26; /*0x5702d7*/
        v75 = v25; /*0x5702d9*/
        if ( v27 || v28 >= 0x40000 || (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) == 0 ) /*0x5702f1*/
        {
          g_MissionQueueFrame.briefing[139] = v25; /*0x5702f3*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x5702f9*/
        }
        if ( (v29[80] & 0x400) == 0 ) /*0x570307*/
          break; /*0x570307*/
        ++*(_DWORD *)v76; /*0x570311*/
        if ( *(int *)v76 >= 4 ) /*0x570315*/
          return; /*0x570315*/
      }
      v30 = ((_BYTE)v24 - 4) & 7; /*0x570327*/
      v76[0] = LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]) + v25; /*0x57033a*/
      v76[1] = HIWORD(v25) + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x57034a*/
      *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570358*/
      v23 = *CellStruct::Add((CellStruct *)v77, &v80, (_WORD *)(4 * v30 + 9041544)); /*0x570361*/
    }
    v75 = v23; /*0x570363*/
    v31 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v81 = v23; /*0x570382*/
    LOBYTE(a2) = 0; /*0x570386*/
    VectorClass::CellConstructor(&v86, 0, 0); /*0x57038b*/
    v32 = *(_DWORD *)v81; /*0x570390*/
    v86.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x570394*/
    v88 = 10; /*0x57039c*/
    v87 = 0; /*0x5703a4*/
    while ( 1 ) /*0x5703ba*/
    {
      v33 = v81[1] + (__int16)v32; /*0x5703ba*/
      if ( v33 <= *(int *)&stru_87F5F0.__pad_58[660] /*0x5703e8*/
        || (__int16)v32 - v81[1] >= *(int *)&stru_87F5F0.__pad_58[660]
        || v81[1] - (__int16)v32 >= *(int *)&stru_87F5F0.__pad_58[660]
        || v33 > *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664] )
      {
        goto LABEL_139; /*0x5703e8*/
      }
      v34 = (__int16)v32 + (v81[1] << 9); /*0x5703f1*/
      if ( !*((_DWORD *)this->Terrain_field_0x13C + v34) ) /*0x570401*/
        goto LABEL_74; /*0x570401*/
      if ( v34 < 0x40000 && (v35 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v34)) != 0 ) /*0x57041d*/
      {
        v36 = v35; /*0x57041f*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x570423*/
        v36 = &g_MissionQueueFrame.briefing[130]; /*0x570429*/
      }
      v37 = v36[14] - g_TerrainBridgeIndex + 1; /*0x57043f*/
      if ( (v37 == dword_ABC2B4 || v37 == dword_AA1130) && *((_BYTE *)v36 + 282) == 8 ) /*0x570453*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x570511*/
        v38 = v81[0] + (v81[1] << 9); /*0x570525*/
        if ( v38 >= 0x40000 || (v39 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v38)) == 0 ) /*0x57053b*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x57053d*/
          v39 = &g_MissionQueueFrame.briefing[130]; /*0x570543*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v39, 2, &v82); /*0x57054f*/
        goto LABEL_109; /*0x57054f*/
      }
      if ( (v37 == g_TerrainSoundTable2 /*0x570486*/
         || v37 == g_TerrainSoundTable2 + 3
         || v37 == g_TerrainSoundTable2 + 4
         || v37 == g_TerrainSoundTable2 + 1
         || v37 == g_TerrainSoundTable2 + 2)
        && *((_BYTE *)v36 + 282) == 5 )
      {
        break; /*0x570486*/
      }
      if ( (v37 == dword_AA1548 || v37 == dword_AA0740) && *((_BYTE *)v36 + 282) == 12 ) /*0x5704a3*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x5707b7*/
        v56 = v81[0] + (v81[1] << 9); /*0x5707cb*/
        if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x5707e1*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x5707e3*/
          v57 = &g_MissionQueueFrame.briefing[130]; /*0x5707e9*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v57, 4, &v82); /*0x5707f8*/
LABEL_109:
        Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x5707fd*/
        goto LABEL_139; /*0x57082a*/
      }
      if ( (v37 == g_TerrainSoundConfig /*0x5704d6*/
         || v37 == g_TerrainSoundConfig + 3
         || v37 == g_TerrainSoundConfig + 4
         || v37 == g_TerrainSoundConfig + 1
         || v37 == g_TerrainSoundConfig + 2)
        && *((_BYTE *)v36 + 282) == 7 )
      {
        if ( v37 != g_TerrainSoundConfig + 4 ) /*0x570834*/
        {
          v58 = this; /*0x5709e9*/
          goto LABEL_133; /*0x5709e9*/
        }
        v58 = this; /*0x57083a*/
        Cell::SetTileType(v81, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570850*/
        v59 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &a2, &g_DDrawSurfaceManager.scenario[82]); /*0x570868*/
        a2 = v59; /*0x57086a*/
        *(_DWORD *)v79 = v59; /*0x57086e*/
        v60 = (__int16)v59 + (SHIWORD(v59) << 9); /*0x57087d*/
        if ( v60 >= 0x40000 || (v61 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v60)) == 0 ) /*0x570893*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v59; /*0x570895*/
          v61 = &g_MissionQueueFrame.briefing[130]; /*0x57089b*/
        }
        *((_BYTE *)v61 + 283) += 4; /*0x5708ae*/
        v62 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[84]); /*0x5708c2*/
        a2 = v62; /*0x5708c4*/
        v63 = (__int16)v62 + (SHIWORD(v62) << 9); /*0x5708d3*/
        if ( v63 >= 0x40000 || (v64 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v63)) == 0 ) /*0x5708e9*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v62; /*0x5708eb*/
          v64 = &g_MissionQueueFrame.briefing[130]; /*0x5708f1*/
        }
        *((_BYTE *)v64 + 283) += 4; /*0x570904*/
        v65 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[88]); /*0x570918*/
        a2 = v65; /*0x57091a*/
        v66 = (__int16)v65 + (SHIWORD(v65) << 9); /*0x570929*/
        if ( v66 >= 0x40000 || (v67 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v66)) == 0 ) /*0x57093f*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v65; /*0x570941*/
          v67 = &g_MissionQueueFrame.briefing[130]; /*0x570947*/
        }
        *((_BYTE *)v67 + 283) += 4; /*0x570957*/
        LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x570967*/
        Capacity = v86.Capacity; /*0x57096b*/
        v69 = 0; /*0x57096f*/
        while ( 1 ) /*0x570971*/
        {
          v70 = -2; /*0x570971*/
          do /*0x5709db*/
          {
            v76[0] = v70 + v79[0]; /*0x570983*/
            v76[1] = v69 + v79[1]; /*0x570988*/
            if ( v87 < Capacity ) /*0x570993*/
              goto LABEL_127; /*0x570993*/
            if ( (v86.IsAllocated || !Capacity) && v88 > 0 ) /*0x5709a7*/
            {
              if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v86.ptr_0 + 2))( /*0x5709b6*/
                     &v86,
                     v88 + Capacity,
                     0) )
              {
LABEL_127:
                v71 = v87++; /*0x5709bd*/
                *((_DWORD *)v86.Items + v71) = *(_DWORD *)v76; /*0x5709d0*/
              }
              Capacity = v86.Capacity; /*0x5709d3*/
            }
            ++v70; /*0x5709d7*/
          }
          while ( v70 < 3 ); /*0x5709db*/
          if ( ++v69 >= 2 ) /*0x5709e1*/
          {
            LOWORD(v32) = v81[0]; /*0x5709e3*/
LABEL_133:
            v76[0] = v32; /*0x5709ed*/
            v76[1] = v81[1] - 2; /*0x5709fd*/
            *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570a06*/
            Terrain::ProcessCellModification(v58, v77); /*0x570a0d*/
            v72 = v81[0] + (v81[1] << 9); /*0x570a21*/
            if ( v72 >= 0x40000 || (v73 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v72)) == 0 ) /*0x570a37*/
            {
              g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x570a39*/
              v73 = &g_MissionQueueFrame.briefing[130]; /*0x570a3f*/
            }
            DestroyCliffMap((ObjectClass *)v58, (int)v73, 4, &v82); /*0x570a4e*/
            Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x570a7b*/
            v53 = this; /*0x570a80*/
LABEL_137:
            if ( (_BYTE)a2 ) /*0x570a8a*/
              Terrain::ConnectivityGraph(v53); /*0x570a8e*/
LABEL_139:
            if ( v87 > 0 ) /*0x570a99*/
              LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v86); /*0x570aa4*/
            v86.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x570aad*/
            if ( v86.Items ) /*0x570ab7*/
            {
              if ( v86.IsAllocated ) /*0x570abf*/
                __3_YAXPAX_Z(v86.Items); /*0x570ac2*/
            }
            return; /*0x570ac2*/
          }
        }
      }
LABEL_74:
      v32 = *CellStruct::Add((CellStruct *)v81, &v80, (_WORD *)(4 * (v31 & 7) + 9041544)); /*0x5704dc*/
      *(_DWORD *)v81 = v32; /*0x5704f9*/
    }
    if ( v37 != g_TerrainSoundTable2 + 4 ) /*0x570559*/
      goto LABEL_101; /*0x570559*/
    Cell::SetTileType(v81, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570573*/
    v40 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &a2, &g_DDrawSurfaceManager.scenario[88]); /*0x57058b*/
    a2 = v40; /*0x57058d*/
    *(_DWORD *)v79 = v40; /*0x570591*/
    v41 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x5705a0*/
    if ( v41 >= 0x40000 || (v42 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v41)) == 0 ) /*0x5705b6*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v40; /*0x5705b8*/
      v42 = &g_MissionQueueFrame.briefing[130]; /*0x5705be*/
    }
    *((_BYTE *)v42 + 283) += 4; /*0x5705d2*/
    v43 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[82]); /*0x5705e6*/
    a2 = v43; /*0x5705e8*/
    v44 = (__int16)v43 + (SHIWORD(v43) << 9); /*0x5705f7*/
    if ( v44 >= 0x40000 || (v45 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v44)) == 0 ) /*0x57060d*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v43; /*0x57060f*/
      v45 = &g_MissionQueueFrame.briefing[130]; /*0x570615*/
    }
    *((_BYTE *)v45 + 283) += 4; /*0x570627*/
    v46 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[86]); /*0x57063b*/
    a2 = v46; /*0x57063d*/
    v47 = (__int16)v46 + (SHIWORD(v46) << 9); /*0x57064c*/
    if ( v47 >= 0x40000 || (v48 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v47)) == 0 ) /*0x570662*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v46; /*0x570664*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x57066a*/
    }
    *((_BYTE *)v48 + 283) += 4; /*0x57067b*/
    LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x57068b*/
    v49 = v86.Capacity; /*0x57068f*/
    v50 = 0; /*0x570693*/
LABEL_90:
    v51 = -2; /*0x570695*/
    while ( 1 ) /*0x5706a7*/
    {
      v76[0] = v50 + v79[0]; /*0x5706a7*/
      v76[1] = v51 + v79[1]; /*0x5706ac*/
      if ( v87 < v49 ) /*0x5706b7*/
        goto LABEL_96; /*0x5706b7*/
      if ( !v86.IsAllocated && v49 || v88 <= 0 ) /*0x5706cb*/
        goto LABEL_98; /*0x5706cb*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v86.ptr_0 + 2))(&v86, v88 + v49, 0) ) /*0x5706da*/
      {
LABEL_96:
        v52 = v87++; /*0x5706e9*/
        *((_DWORD *)v86.Items + v52) = *(_DWORD *)v76; /*0x5706f4*/
      }
      v49 = v86.Capacity; /*0x5706f7*/
LABEL_98:
      if ( ++v51 >= 3 ) /*0x5706ff*/
      {
        if ( ++v50 >= 2 ) /*0x570705*/
        {
          LOWORD(v32) = v81[0]; /*0x570707*/
LABEL_101:
          v53 = this; /*0x57070b*/
          v76[1] = v81[1]; /*0x570717*/
          v76[0] = v32 - 2; /*0x57071c*/
          *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570729*/
          Terrain::ProcessCellModification(this, v77); /*0x570730*/
          v54 = v81[0] + (v81[1] << 9); /*0x570744*/
          if ( v54 >= 0x40000 || (v55 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v54)) == 0 ) /*0x57075a*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x57075c*/
            v55 = &g_MissionQueueFrame.briefing[130]; /*0x570762*/
          }
          DestroyCliffMap((ObjectClass *)this, (int)v55, 2, &v82); /*0x570771*/
          Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x57079e*/
          goto LABEL_137; /*0x5707a3*/
        }
        goto LABEL_90; /*0x570705*/
      }
    }
  }
}



// ==== 0x00570AE0  CellClass::RecursiveTileUpdate  this=CellClass  sig=csp ====
int __thiscall CellClass::RecursiveTileUpdate(CellClass *this, __int16 *a2, int a3, int *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  __int16 v8; // di
  _WORD *v9; // esi
  __int16 v10; // di
  __int16 v11; // bx
  __int16 v12; // di
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  int *v16; // eax
  int result; // eax
  unsigned int v18; // eax
  int *v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // edi
  int *v27; // ebp
  signed int v28; // ecx
  signed int v29; // eax
  int v30; // edx
  int v31; // esi
  int v32; // ebp
  int v33; // ebp
  int v34; // ebx
  bool v35; // bl
  int v36; // edi
  char v37; // dl
  void *v38; // ebp
  int v39; // ecx
  unsigned int v40; // eax
  int *v41; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  int *v47; // eax
  int *v48; // esi
  int *v49; // [esp+4h] [ebp-48h]
  int v50; // [esp+4h] [ebp-48h]
  int *v51; // [esp+4h] [ebp-48h]
  int v52; // [esp+8h] [ebp-44h]
  int v53; // [esp+Ch] [ebp-40h]
  void *v54; // [esp+10h] [ebp-3Ch]
  int v55; // [esp+10h] [ebp-3Ch]
  int v56; // [esp+14h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-34h]
  int v58; // [esp+1Ch] [ebp-30h] BYREF
  int v59; // [esp+20h] [ebp-2Ch]
  CellClass *v60; // [esp+24h] [ebp-28h]
  _WORD *v61; // [esp+28h] [ebp-24h]
  int v62; // [esp+2Ch] [ebp-20h] BYREF
  int v63; // [esp+30h] [ebp-1Ch]
  int v64; // [esp+34h] [ebp-18h]
  int v65; // [esp+38h] [ebp-14h]
  int v66; // [esp+3Ch] [ebp-10h]
  int v67; // [esp+54h] [ebp+8h]

  v60 = this; /*0x570ae3*/
  v4 = *a2 + (a2[1] << 9); /*0x570af5*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x570b0b*/
  {
    v6 = v5; /*0x570b0d*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x570b13*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x570b18*/
  }
  v7 = a3 & 7; /*0x570b29*/
  v58 = v6[9]; /*0x570b2d*/
  v52 = 1; /*0x570b31*/
  v8 = g_DDrawSurfaceManager.scenario[v7 + 82]; /*0x570b39*/
  v9 = (_WORD *)(4 * v7 + 9041544); /*0x570b41*/
  v61 = v9; /*0x570b4b*/
  LOWORD(v54) = v58 + v8; /*0x570b53*/
  HIWORD(v54) = HIWORD(v58) + v9[1]; /*0x570b5d*/
  while ( 1 ) /*0x570b65*/
  {
    v10 = *v9; /*0x570b65*/
    v58 = v6[9]; /*0x570b68*/
    v11 = v9[1] + HIWORD(v58); /*0x570b71*/
    v12 = v58 + v10; /*0x570b75*/
    v13 = v11 << 9; /*0x570b7e*/
    v14 = v12 + v13 < 0; /*0x570b81*/
    v15 = v12 + v13; /*0x570b81*/
    LOWORD(v53) = v12; /*0x570b83*/
    HIWORD(v53) = v11; /*0x570b88*/
    if ( v14 || v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x570ba1*/
    {
      v6 = &g_MissionQueueFrame.briefing[130]; /*0x570bab*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x570bb0*/
    }
    else
    {
      v6 = v16; /*0x570ba3*/
    }
    result = v6[14] - g_TerrainBridgeIndex + 1; /*0x570bc0*/
    if ( a3 != 2 ) /*0x570bc4*/
      break; /*0x570bc4*/
    if ( result == dword_ABC1E8 && *((_BYTE *)v6 + 282) == 4 /*0x570c20*/
      || result == dword_AA0E38 && *((_BYTE *)v6 + 282) == 4
      || (result == g_TerrainSoundTable2
       || result == g_TerrainSoundTable2 + 3
       || result == g_TerrainSoundTable2 + 1
       || result == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v6 + 282) == 4 )
    {
      goto LABEL_33; /*0x570c20*/
    }
LABEL_32:
    result = ++v52; /*0x570c7d*/
    if ( v52 >= 30 ) /*0x570c89*/
      goto LABEL_33; /*0x570c89*/
  }
  if ( a3 != 4 /*0x570c7b*/
    || (result != dword_ABC1D0 || *((_BYTE *)v6 + 282) != 2)
    && (result != dword_AA1540 || *((_BYTE *)v6 + 282) != 2)
    && (result != g_TerrainSoundConfig
     && result != g_TerrainSoundConfig + 3
     && result != g_TerrainSoundConfig + 1
     && result != g_TerrainSoundConfig + 2
     || *((_BYTE *)v6 + 282) != 2) )
  {
    goto LABEL_32; /*0x570c7b*/
  }
LABEL_33:
  if ( v52 == 30 ) /*0x570c94*/
    goto LABEL_85; /*0x570c94*/
  v18 = *a2 + (a2[1] << 9); /*0x570ca8*/
  if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x570cbe*/
  {
    v20 = v19; /*0x570cc0*/
    v49 = v19; /*0x570cc2*/
  }
  else
  {
    v49 = &g_MissionQueueFrame.briefing[130]; /*0x570cca*/
    v20 = &g_MissionQueueFrame.briefing[130]; /*0x570cd2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x570cd6*/
  }
  if ( a4 ) /*0x570ce1*/
  {
    v21 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x570cf5*/
    v22 = a2[1] << 8; /*0x570cff*/
    v62 = (*a2 << 8) + 128; /*0x570d0d*/
    v63 = v22 + 128; /*0x570d11*/
    v64 = v21; /*0x570d1d*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v58); /*0x570d29*/
    v23 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x570d35*/
    v62 = (v12 << 8) + 128; /*0x570d54*/
    v63 = (v11 << 8) + 128; /*0x570d58*/
    v64 = v23; /*0x570d6c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v56); /*0x570d70*/
    v24 = v58; /*0x570d7f*/
    if ( v58 >= v56 ) /*0x570d81*/
      v24 = v56; /*0x570d83*/
    v66 = v24 - 64; /*0x570d92*/
    v25 = v59; /*0x570d96*/
    if ( v59 >= v57 ) /*0x570d98*/
      v25 = v57; /*0x570d9a*/
    v26 = v25 - 64; /*0x570d9e*/
    v27 = a4; /*0x570daa*/
    v28 = abs32(v58 - v56) + 128; /*0x570db3*/
    v29 = abs32(v59 - v57) + 128; /*0x570dbe*/
    if ( a4[2] <= 0 || a4[3] <= 0 ) /*0x570dd0*/
    {
      v30 = v24 - 64; /*0x570e63*/
      v31 = v26; /*0x570e65*/
    }
    else if ( v28 <= 0 || v29 <= 0 ) /*0x570ddc*/
    {
      v30 = *a4; /*0x570e56*/
      v31 = a4[1]; /*0x570e58*/
      v28 = a4[2]; /*0x570e5b*/
      v29 = a4[3]; /*0x570e5e*/
    }
    else
    {
      v30 = *a4; /*0x570dde*/
      v31 = a4[1]; /*0x570de1*/
      v64 = a4[2]; /*0x570de7*/
      v65 = a4[3]; /*0x570dee*/
      if ( v30 > v66 ) /*0x570df8*/
      {
        v32 = v30 - v66 + v64; /*0x570e00*/
        v30 = v66; /*0x570e02*/
        v64 = v32; /*0x570e04*/
      }
      if ( v31 > v26 ) /*0x570e0a*/
      {
        v33 = v31 - v26 + v65; /*0x570e12*/
        v31 = v26; /*0x570e14*/
        v65 = v33; /*0x570e16*/
      }
      if ( v30 + v64 < v28 + v66 ) /*0x570e24*/
        v64 = v28 - v30 + v66 + 1; /*0x570e30*/
      v34 = v65; /*0x570e34*/
      if ( v65 + v31 < v29 + v26 ) /*0x570e40*/
        v34 = v29 - v31 + v26 + 1; /*0x570e44*/
      v28 = v64; /*0x570e48*/
      v27 = a4; /*0x570e4c*/
      v29 = v34; /*0x570e50*/
    }
    *v27 = v30; /*0x570e67*/
    v27[1] = v31; /*0x570e6a*/
    v20 = v49; /*0x570e6d*/
    v27[2] = v28; /*0x570e71*/
    v27[3] = v29; /*0x570e74*/
  }
  v35 = 0; /*0x570e7a*/
  result = v52; /*0x570e86*/
  LOWORD(v36) = -1; /*0x570e8a*/
  v37 = 0; /*0x570e8e*/
  v56 = -1; /*0x570e90*/
  v58 = 0; /*0x570e96*/
  if ( v52 <= 0 ) /*0x570e9e*/
  {
LABEL_85:
    LOBYTE(result) = 0; /*0x571039*/
  }
  else
  {
    v38 = v54; /*0x570ea4*/
    while ( 1 ) /*0x570ea8*/
    {
      v39 = v20[80]; /*0x570ea8*/
      if ( (v39 & 0x80) != 0 && v35 ) /*0x570eb9*/
      {
        v36 = v20[9]; /*0x570ebb*/
        v56 = v36; /*0x570ebe*/
      }
      if ( (v39 & 0x80) == 0 && !v35 && ((_WORD)v36 != 0xFFFF || HIWORD(v56) != 0xFFFF) ) /*0x570edb*/
        break; /*0x570edb*/
      v35 = (v39 & 0x80) == 0; /*0x570ee8*/
      if ( (v39 & 0x80) == 0 && !v37 ) /*0x570eef*/
      {
        UpdateTeamsInAreaMap(v38, v53); /*0x570f00*/
        v37 = 1; /*0x570f05*/
      }
      v50 = v20[9]; /*0x570f10*/
      LOWORD(v55) = *v61 + v50; /*0x570f23*/
      HIWORD(v55) = HIWORD(v50) + v61[1]; /*0x570f2b*/
      v40 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x570f36*/
      if ( v40 < 0x40000 && (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) != 0 ) /*0x570f4c*/
      {
        v51 = v41; /*0x570f4e*/
      }
      else
      {
        v51 = &g_MissionQueueFrame.briefing[130]; /*0x570f58*/
        g_MissionQueueFrame.briefing[139] = v55; /*0x570f60*/
      }
      result = ++v58; /*0x570f6d*/
      if ( v58 >= v52 ) /*0x570f74*/
        goto LABEL_85; /*0x570f74*/
      v20 = v51; /*0x570f7a*/
    }
    v61 = (_WORD *)v20[9]; /*0x570f8a*/
    v43 = ((_BYTE)a3 - 4) & 7; /*0x570f91*/
    v44 = 4 * v43 + 9041544; /*0x570f94*/
    LOWORD(v43) = (_WORD)v61 + LOWORD(g_DDrawSurfaceManager.scenario[v43 + 82]); /*0x570fac*/
    v45 = (__int16)v43; /*0x570faf*/
    HIWORD(v67) = HIWORD(v61) + *(_WORD *)(v44 + 2); /*0x570fb2*/
    LOWORD(v67) = v43; /*0x570fb7*/
    v46 = (__int16)v43 + (SHIWORD(v67) << 9); /*0x570fc2*/
    if ( v46 < 0x40000 && (v47 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v46)) != 0 ) /*0x570fd8*/
    {
      v48 = v47; /*0x570fda*/
    }
    else
    {
      v45 = v67; /*0x570fde*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x570fe2*/
      g_MissionQueueFrame.briefing[139] = v67; /*0x570fe7*/
    }
    if ( a3 == 2 ) /*0x570ff2*/
      SetCellClassOccupancyFlags((int)v48, v45, 0, 0); /*0x570ff6*/
    else
      SetCellClassOccupancyFlags((int)v48, v45, 6u, 0); /*0x570ffc*/
    *((_BYTE *)v48 + 286) = 0; /*0x571001*/
    v48[17] = -1; /*0x571008*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v48 + 9)); /*0x571014*/
    result = CellClass::RecursiveTileUpdate(v60, a2, a3, a4); /*0x571028*/
    LOBYTE(result) = 1; /*0x571030*/
  }
  return result; /*0x571033*/
}



// ==== 0x00571050  CellClass::ProcessTileChange  this=CellClass  sig=csp ====
char __thiscall CellClass::ProcessTileChange(CellClass *this, _WORD *a2)
{
  CellClass *v2; // ebp
  _WORD *v3; // edi
  char v4; // si
  int i; // ebx
  int v6; // eax
  __int16 v7; // dx
  unsigned int v8; // eax
  int *v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // ebx
  __int16 v13; // si
  int v14; // edx
  bool v15; // sf
  int v16; // edx
  int *v17; // edx
  int v18; // eax
  __int16 v19; // dx
  int v20; // eax
  __int16 v21; // cx
  __int16 v22; // si
  int v23; // edi
  int v24; // ebx
  int occupationFlags; // edx
  int v26; // edi
  int altOccupationFlags; // edx
  unsigned int v28; // eax
  int *v29; // eax
  int *v30; // edx
  int v31; // eax
  int v32; // edx
  __int16 v33; // cx
  int v34; // edx
  int v35; // esi
  int v36; // ecx
  __int16 v38; // [esp+12h] [ebp-22h]
  int v39; // [esp+14h] [ebp-20h]
  int *v40; // [esp+18h] [ebp-1Ch]
  _WORD *v41; // [esp+18h] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-18h]
  int v43; // [esp+24h] [ebp-10h] BYREF
  int v44; // [esp+28h] [ebp-Ch]
  int v45; // [esp+2Ch] [ebp-8h]
  int v46; // [esp+30h] [ebp-4h]

  v2 = this; /*0x571056*/
  v3 = a2; /*0x57105f*/
  v4 = 0; /*0x571063*/
  for ( i = 0; i < 8; ++i ) /*0x571069*/
  {
    v6 = v4 & 7; /*0x57106d*/
    v7 = g_DDrawSurfaceManager.scenario[v6 + 82]; /*0x571070*/
    LOWORD(v6) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x571086*/
    LOWORD(a2) = *v3 + v7; /*0x57108a*/
    HIWORD(a2) = v6; /*0x571092*/
    v8 = (__int16)a2 + ((__int16)v6 << 9); /*0x57109d*/
    if ( v8 < 0x40000 && (v9 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v8)) != 0 ) /*0x5710ad*/
    {
      v10 = v9; /*0x5710af*/
    }
    else
    {
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x5710b7*/
      g_MissionQueueFrame.briefing[139] = (int)a2; /*0x5710bc*/
    }
    v40 = v10; /*0x5710c7*/
    if ( (v10[80] & 0x500) != 0 ) /*0x5710ce*/
      break; /*0x5710ce*/
    v4 = (v4 + 1) & 7; /*0x5710d1*/
  }
  v11 = v10[80]; /*0x5710da*/
  if ( (v11 & 0x100) != 0 || (v11 & 0x400) != 0 )
  {
    if ( (v10[80] & 0x100) != 0 )
    {
      v11 = (v11 & 0x80u) == 0 ? *(_DWORD *)(v10[11] + 36) : v10[9];
    }
    else
    {
      v12 = v10[9]; /*0x571113*/
      v38 = HIWORD(v12); /*0x57111a*/
      v39 = 0; /*0x571121*/
      v42 = (v11 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x57113d*/
      {
        v13 = LOWORD(g_DDrawSurfaceManager.scenario[(v42 & 7) + 82]) + v12; /*0x57113d*/
        LOWORD(a2) = v13; /*0x571141*/
        HIWORD(a2) = v38 + HIWORD(g_DDrawSurfaceManager.scenario[(v42 & 7) + 82]); /*0x571155*/
        LOWORD(v12) = v13; /*0x57115a*/
        v14 = SHIWORD(a2) << 9; /*0x57115e*/
        v15 = v13 + v14 < 0; /*0x571161*/
        v16 = v13 + v14; /*0x571161*/
        v38 = HIWORD(a2); /*0x571163*/
        if ( v15 || v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x57117c*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x57117e*/
          v17 = &g_MissionQueueFrame.briefing[130]; /*0x571184*/
        }
        if ( (v17[80] & 0x400) == 0 ) /*0x571192*/
          break; /*0x571192*/
        LOBYTE(v11) = ++v39; /*0x571198*/
        if ( v39 >= 4 ) /*0x5711a0*/
          return v11; /*0x5711a0*/
      }
      v2 = this; /*0x5711b0*/
      v18 = ((_BYTE)v42 - 4) & 7; /*0x5711ba*/
      v19 = g_DDrawSurfaceManager.scenario[v18 + 82]; /*0x5711bd*/
      v20 = 4 * v18 + 9041544; /*0x5711cd*/
      v21 = v13 + v19 + v19; /*0x5711d7*/
      v22 = *(_WORD *)(v20 + 2); /*0x5711da*/
      LOWORD(a2) = v21; /*0x5711de*/
      HIWORD(a2) += v22 + *(_WORD *)(v20 + 2); /*0x5711ed*/
      v11 = (int)a2; /*0x5711f2*/
      v10 = v40; /*0x5711f6*/
    }
    v23 = v10[80]; /*0x5711fa*/
    v44 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]; /*0x571212*/
    v24 = v11; /*0x57121e*/
    v46 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2130]; /*0x571220*/
    occupationFlags = v2->occupationFlags; /*0x571224*/
    v43 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2118]; /*0x57122a*/
    a2 = (_WORD *)v11; /*0x571234*/
    v45 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]; /*0x57123d*/
    v26 = (v23 & 0x800) != 0 ? 6 : 0;
    if ( (__int16)v11 >= occupationFlags ) /*0x571246*/
    {
      do /*0x57124c*/
      {
        if ( (__int16)v24 > occupationFlags + v2->copyFlags ) /*0x571259*/
          return v11; /*0x571259*/
        LOBYTE(v11) = BYTE2(a2); /*0x57125f*/
        altOccupationFlags = v2->altOccupationFlags; /*0x571264*/
        if ( SHIWORD(a2) < altOccupationFlags || SHIWORD(a2) > altOccupationFlags + v2->shroudCounter ) /*0x57127c*/
          return v11; /*0x57127c*/
        v28 = (__int16)v24 + (SHIWORD(a2) << 9); /*0x57128b*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v28) ) /*0x57128d*/
        {
          if ( v28 < 0x40000 && (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) != 0 ) /*0x5712ad*/
          {
            v30 = v29; /*0x5712af*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = v24; /*0x5712b3*/
            v30 = &g_MissionQueueFrame.briefing[130]; /*0x5712b9*/
          }
          v31 = v30[14] - g_TerrainBridgeIndex + 1; /*0x5712cf*/
          if ( (v31 == dword_ABC2B4 || v31 == dword_AA1130) && *((_BYTE *)v30 + 282) == 8 /*0x57130f*/
            || (v31 == g_TerrainSoundTable2
             || v31 == g_TerrainSoundTable2 + 3
             || v31 == g_TerrainSoundTable2 + 1
             || v31 == g_TerrainSoundTable2 + 2)
            && *((_BYTE *)v30 + 282) == 5 )
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 2, &v43); /*0x5713bb*/
LABEL_51:
            if ( (_BYTE)v11 ) /*0x5713c2*/
            {
              v11 = v43; /*0x5713c8*/
              v34 = v44; /*0x5713d2*/
              v35 = v46; /*0x5713d6*/
              v36 = v45; /*0x5713dc*/
              if ( v43 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x5713fc*/
                || v44 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
                || v45 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
                || v46 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
              {
LABEL_64:
                LOBYTE(v11) = Cell::CreateCrater(v11, v34, v36, v35, 0); /*0x571469*/
                return v11; /*0x571481*/
              }
            }
            return v11; /*0x5713fc*/
          }
          if ( (v31 == dword_AA1548 || v31 == dword_AA0740) && *((_BYTE *)v30 + 282) == 12 ) /*0x57132c*/
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 4, &v43); /*0x57141e*/
            goto LABEL_51; /*0x57141e*/
          }
          if ( (v31 == g_TerrainSoundConfig /*0x571356*/
             || v31 == g_TerrainSoundConfig + 3
             || v31 == g_TerrainSoundConfig + 2
             || v31 == g_TerrainSoundConfig + 1)
            && *((_BYTE *)v30 + 282) == 7 )
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 4, &v43); /*0x57142e*/
            if ( (_BYTE)v11 ) /*0x571435*/
            {
              v11 = v43; /*0x571437*/
              v34 = v44; /*0x571441*/
              v35 = v46; /*0x571445*/
              v36 = v45; /*0x57144b*/
              if ( v43 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x571467*/
                || v44 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
                || v45 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
                || v46 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
              {
                goto LABEL_64; /*0x571467*/
              }
            }
            return v11; /*0x571467*/
          }
        }
        v32 = v26 & 7; /*0x57135e*/
        LOWORD(v11) = g_DDrawSurfaceManager.scenario[v32 + 82]; /*0x571361*/
        v33 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x571371*/
        occupationFlags = v2->occupationFlags; /*0x57137d*/
        LOWORD(v41) = v24 + v11; /*0x571386*/
        HIWORD(v41) = v33; /*0x57138b*/
        v24 = (int)v41; /*0x571390*/
        LOBYTE(v11) = (_BYTE)v41; /*0x571394*/
        a2 = v41; /*0x571399*/
      }
      while ( (__int16)v41 >= occupationFlags ); /*0x57124c*/
    }
  }
  return v11; /*0x5711a2*/
}



// ==== 0x00571490  CellClass::PropagateTerrainVariant2  this=CellClass  sig=csp ====
char __thiscall CellClass::PropagateTerrainVariant2(CellClass *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  char result; // al
  int v11; // eax
  int v12; // esi
  bool v13; // cc
  int *v14; // eax
  __int16 v15; // dx
  unsigned int v16; // eax
  int *v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  __int16 *v20; // eax
  int v21; // eax
  __int16 *v22; // ebp
  __int16 v23; // si
  int v24; // eax
  bool v25; // sf
  int v26; // eax
  CellClass *v27; // eax
  unsigned int v28; // eax
  CellClass *v29; // eax
  CellClass *v30; // ecx
  unsigned int v31; // eax
  CellClass *v32; // eax
  CellClass *v33; // ecx
  unsigned int v34; // eax
  int *v35; // eax
  __int16 v36; // si
  int v37; // ecx
  int v38; // ecx
  CellClass *v39; // ecx
  unsigned int v40; // eax
  CellClass *v41; // eax
  CellClass *v42; // ecx
  int v43; // edx
  int v44; // ea... [26137 chars total]



// ==== 0x00572230  globalHelper  this=ObjectClass  sig=csp ====
char __stdcall sub_572230(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572239*/
  v3 = dword_89F688[v2]; /*0x57223c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572252*/
  LOWORD(a2) = *a1 + v3; /*0x572256*/
  HIWORD(a2) = v2; /*0x57225e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57226d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572287*/
  {
    dword_ABDC74 = a2; /*0x572289*/
    v5 = unk_ABDC50; /*0x57228f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57229b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57229d*/
    if ( v6 <= 3u ) /*0x5722a6*/
    {
      *((_BYTE *)v5 + 286) = 4; /*0x5722b6*/
    }
    else if ( v6 == 5 ) /*0x5722ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5722ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5722ce*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x5722d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572327*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5722e3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundTable2, -1, -1, 0); /*0x5722f3*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x572303*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572315*/
  }
  return v7; /*0x5722f8*/
}



// ==== 0x00572330  globalHelper  this=ObjectClass  sig=csp ====
char __stdcall sub_572330(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572339*/
  v3 = dword_89F688[v2]; /*0x57233c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572352*/
  LOWORD(a2) = *a1 + v3; /*0x572356*/
  HIWORD(a2) = v2; /*0x57235e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57236d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572387*/
  {
    dword_ABDC74 = a2; /*0x572389*/
    v5 = unk_ABDC50; /*0x57238f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57239b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57239d*/
    if ( v6 <= 3u ) /*0x5723a6*/
    {
      *((_BYTE *)v5 + 286) = 5; /*0x5723b6*/
    }
    else if ( v6 == 4 ) /*0x5723ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5723ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5723ce*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x5723d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572429*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5723e3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x5723f5*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x572405*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572417*/
  }
  return v7; /*0x5723fa*/
}



// ==== 0x00572440  CellClass::UpdateVariant7  this=CellClass  sig=csp ====
char __stdcall sub_572440(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x572446*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572467*/
  a2 = v3; /*0x572469*/
  *(_DWORD *)v32 = v3; /*0x57246d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x57247c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572492*/
  {
    v6 = v5; /*0x572494*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572498*/
    v6 = &unk_ABDC50; /*0x57249e*/
  }
  if ( (char)v6[320] < 0 ) /*0x5724aa*/
  {
    v7 = v6[286]; /*0x5724ac*/
    if ( v7 <= 6u ) /*0x5724b4*/
    {
      v6[286] = 7; /*0x5724f0*/
    }
    else if ( v7 == 8 ) /*0x5724b8*/
    {
      CellClass::UpdateVariant7(v32, v2); /*0x5724c2*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x5724cd*/
      v6[286] = 0; /*0x5724d5*/
      *((_DWORD *)v6 + 17) = -1; /*0x5724e2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x5724e9*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572508*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x572517*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x5727c7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x572532*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x5727ae*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x57253d*/
  {
    CellClass::UpdateVariant7(v32, v2); /*0x57254b*/
    if ( (v6[282] & 1) != 0 ) /*0x572557*/
    {
      HIWORD(a2) = v32[1]; /*0x572568*/
      LOWORD(a2) = v32[0] - 1; /*0x57256d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x57257b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572591*/
      {
        v12 = v11; /*0x572593*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57259b*/
        dword_ABDC74 = a2; /*0x5725a0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x5725a5*/
      LOWORD(a2) = v32[0] - 1; /*0x5725b6*/
      HIWORD(a2) = v32[1] - 1; /*0x5725bb*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x5725c9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x5725df*/
      {
        v15 = v14; /*0x5725e1*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x5725e9*/
        dword_ABDC74 = a2; /*0x5725ee*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x5725f3*/
      LOWORD(a2) = v32[0] - 1; /*0x572604*/
      HIWORD(a2) = v32[1] + 1; /*0x572609*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x572617*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x57262d*/
      {
        v18 = v17; /*0x57262f*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x572637*/
        dword_ABDC74 = a2; /*0x57263c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x572641*/
      HIWORD(a2) = v32[1]; /*0x57264e*/
      v19 = (__int16)(v32[0] - 1); /*0x572657*/
      v20 = v32[1] << 9; /*0x57265a*/
      v21 = v19 + v20 < 0; /*0x57265d*/
      v22 = v19 + v20; /*0x57265d*/
      LOWORD(a2) = v32[0] - 1; /*0x57265f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572678*/
      {
        v23 = (char *)&unk_ABDC50; /*0x57267e*/
        dword_ABDC74 = a2; /*0x572683*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x5726cb*/
      v24 = v32[0] + (v32[1] << 9); /*0x5726d9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x5726ef*/
      {
        v26 = v25; /*0x5726f1*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x5726f9*/
        dword_ABDC74 = a2; /*0x5726fe*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572704*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x572717*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x572725*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x57273b*/
      {
        v29 = v28; /*0x57273d*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572745*/
        dword_ABDC74 = a2; /*0x57274a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x57274f*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x572767*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x57277a*/
      CellClass::UpdateAnimations((int)v30); /*0x572781*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572792*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0); /*0x5726b0*/
  }
  return v9; /*0x5726b5*/
}



// ==== 0x005727E0  CellClass::UpdateVariant8  this=CellClass  sig=csp ====
char __stdcall sub_5727E0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x5727e6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572807*/
  a2 = v3; /*0x572809*/
  *(_DWORD *)v32 = v3; /*0x57280d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x57281c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572832*/
  {
    v6 = v5; /*0x572834*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572838*/
    v6 = &unk_ABDC50; /*0x57283e*/
  }
  if ( (char)v6[320] < 0 ) /*0x57284a*/
  {
    v7 = v6[286]; /*0x57284c*/
    if ( v7 <= 6u ) /*0x572854*/
    {
      v6[286] = 8; /*0x572890*/
    }
    else if ( v7 == 7 ) /*0x572858*/
    {
      CellClass::UpdateVariant8(v32, v2); /*0x572862*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x57286d*/
      v6[286] = 0; /*0x572875*/
      *((_DWORD *)v6 + 17) = -1; /*0x572882*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572889*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x5728a8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x5728b7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x572b67*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x5728d2*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572b4e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x5728dd*/
  {
    CellClass::UpdateVariant8(v32, v2); /*0x5728eb*/
    if ( (v6[282] & 1) != 0 ) /*0x5728f7*/
    {
      HIWORD(a2) = v32[1]; /*0x572908*/
      LOWORD(a2) = v32[0] - 1; /*0x57290d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x57291b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572931*/
      {
        v12 = v11; /*0x572933*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57293b*/
        dword_ABDC74 = a2; /*0x572940*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x572945*/
      LOWORD(a2) = v32[0] - 1; /*0x572956*/
      HIWORD(a2) = v32[1] - 1; /*0x57295b*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x572969*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x57297f*/
      {
        v15 = v14; /*0x572981*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x572989*/
        dword_ABDC74 = a2; /*0x57298e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x572993*/
      LOWORD(a2) = v32[0] - 1; /*0x5729a4*/
      HIWORD(a2) = v32[1] + 1; /*0x5729a9*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x5729b7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x5729cd*/
      {
        v18 = v17; /*0x5729cf*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x5729d7*/
        dword_ABDC74 = a2; /*0x5729dc*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x5729e1*/
      HIWORD(a2) = v32[1]; /*0x5729ee*/
      v19 = (__int16)(v32[0] - 1); /*0x5729f7*/
      v20 = v32[1] << 9; /*0x5729fa*/
      v21 = v19 + v20 < 0; /*0x5729fd*/
      v22 = v19 + v20; /*0x5729fd*/
      LOWORD(a2) = v32[0] - 1; /*0x5729ff*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572a18*/
      {
        v23 = (char *)&unk_ABDC50; /*0x572a1e*/
        dword_ABDC74 = a2; /*0x572a23*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x572a6b*/
      v24 = v32[0] + (v32[1] << 9); /*0x572a79*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x572a8f*/
      {
        v26 = v25; /*0x572a91*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x572a99*/
        dword_ABDC74 = a2; /*0x572a9e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572aa4*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x572ab7*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x572ac5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x572adb*/
      {
        v29 = v28; /*0x572add*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572ae5*/
        dword_ABDC74 = a2; /*0x572aea*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x572aef*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x572b07*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x572b1a*/
      CellClass::UpdateAnimations((int)v30); /*0x572b21*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572b32*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0); /*0x572a50*/
  }
  return v9; /*0x572a55*/
}



// ==== 0x00572B80  CellClass::SetTileType13  this=CellClass  sig=csp ====
char __stdcall CellClass_SetTileType13(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572b89*/
  v3 = dword_89F688[v2]; /*0x572b8c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572ba2*/
  LOWORD(a2) = *a1 + v3; /*0x572ba6*/
  HIWORD(a2) = v2; /*0x572bae*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x572bbd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572bd7*/
  {
    dword_ABDC74 = a2; /*0x572bd9*/
    v5 = unk_ABDC50; /*0x572bdf*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572beb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x572bed*/
    if ( v6 >= 9u ) /*0x572bf6*/
    {
      if ( v6 <= 0xCu ) /*0x572bfb*/
      {
        *((_BYTE *)v5 + 286) = 14; /*0x572c0b*/
      }
      else if ( v6 == 13 ) /*0x572c00*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x572c02*/
      }
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572c23*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x572c2e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572c7c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572c38*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundConfig, -1, -1, 0); /*0x572c48*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x572c58*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572c6a*/
  }
  return v7; /*0x572c4d*/
}



// ==== 0x00572C90  CellClass::SetTileType14  this=CellClass  sig=csp ====
char __stdcall CellClass_SetTileType14(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572c99*/
  v3 = dword_89F688[v2]; /*0x572c9c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572cb2*/
  LOWORD(a2) = *a1 + v3; /*0x572cb6*/
  HIWORD(a2) = v2; /*0x572cbe*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x572ccd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572ce7*/
  {
    dword_ABDC74 = a2; /*0x572ce9*/
    v5 = unk_ABDC50; /*0x572cef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572cfb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x572cfd*/
    if ( v6 >= 9u ) /*0x572d06*/
    {
      if ( v6 <= 0xCu ) /*0x572d0b*/
      {
        *((_BYTE *)v5 + 286) = 13; /*0x572d1b*/
      }
      else if ( v6 == 14 ) /*0x572d10*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x572d12*/
      }
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572d33*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x572d3e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572d8e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572d48*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x572d5a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x572d6a*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572d7c*/
  }
  return v7; /*0x572d5f*/
}



// ==== 0x00572DA0  CellClass::UpdateVariant5  this=AbstractClass  sig=csp ====
char __stdcall sub_572DA0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x572da6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572dc7*/
  a2 = v3; /*0x572dc9*/
  *(_DWORD *)v31 = v3; /*0x572dcd*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x572ddc*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572df2*/
  {
    v6 = v5; /*0x572df4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572df8*/
    v6 = &unk_ABDC50; /*0x572dfe*/
  }
  if ( (char)v6[320] < 0 ) /*0x572e0a*/
  {
    v7 = v6[286]; /*0x572e0c*/
    if ( v7 >= 9u ) /*0x572e14*/
    {
      if ( v7 <= 0xFu ) /*0x572e18*/
      {
        v6[286] = 17; /*0x572e54*/
      }
      else if ( v7 == 16 ) /*0x572e1c*/
      {
        CellClass::UpdateVariant5(v31, v2); /*0x572e26*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x572e31*/
        v6[286] = 0; /*0x572e39*/
        *((_DWORD *)v6 + 17) = -1; /*0x572e46*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572e4d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572e6c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x572e7b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x573156*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x572e96*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57313d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x572ea1*/
  {
    CellClass::UpdateVariant5(v31, v2); /*0x572eaf*/
    v10 = v31[0] - 1; /*0x572ec0*/
    if ( v6[282] <= 4u ) /*0x572ec3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x573029*/
      HIWORD(a2) = v31[1]; /*0x57302e*/
      v22 = v10 + (v31[1] << 9); /*0x57303c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573052*/
      {
        v24 = v23; /*0x573054*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57305c*/
        dword_ABDC74 = a2; /*0x573061*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573066*/
      a2 = *(_DWORD *)v31; /*0x573078*/
      v25 = v31[0] + (v31[1] << 9); /*0x573086*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57309c*/
      {
        v27 = v26; /*0x57309e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x5730a6*/
        dword_ABDC74 = a2; /*0x5730ab*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x5730b0*/
      HIWORD(a2) = v31[1]; /*0x5730bf*/
      LOWORD(a2) = v31[0] + 1; /*0x5730c4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x5730db*/
      CellClass::UpdateAnimations((int)v28); /*0x5730e2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5730f3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x57311d*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x572ecd*/
      HIWORD(a2) = v31[1] - 1; /*0x572ed8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x572ee3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x572ef9*/
      {
        v13 = v12; /*0x572efb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x572f03*/
        dword_ABDC74 = a2; /*0x572f08*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x572f0d*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x572f22*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x572f30*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x572f46*/
      {
        v16 = v15; /*0x572f48*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x572f50*/
        dword_ABDC74 = a2; /*0x572f55*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x572f5a*/
      LOWORD(a2) = v31[0] + 1; /*0x572f6b*/
      HIWORD(a2) = v31[1] - 1; /*0x572f70*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x572f7e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x572f94*/
      {
        v19 = v18; /*0x572f96*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x572f9e*/
        dword_ABDC74 = a2; /*0x572fa3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x572fa8*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x572fbd*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x572fcb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x572fe1*/
      {
        dword_ABDC74 = a2; /*0x572fe7*/
        v21 = (char *)&unk_ABDC50; /*0x572fec*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x573017*/
    }
  }
  return v9; /*0x57301c*/
}



// ==== 0x00573170  CellClass::UpdateVariant6  this=AbstractClass  sig=csp ====
char __stdcall sub_573170(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x573176*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x573197*/
  a2 = v3; /*0x573199*/
  *(_DWORD *)v31 = v3; /*0x57319d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x5731ac*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x5731c2*/
  {
    v6 = v5; /*0x5731c4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x5731c8*/
    v6 = &unk_ABDC50; /*0x5731ce*/
  }
  if ( (char)v6[320] < 0 ) /*0x5731da*/
  {
    v7 = v6[286]; /*0x5731dc*/
    if ( v7 >= 9u ) /*0x5731e4*/
    {
      if ( v7 <= 0xFu ) /*0x5731e8*/
      {
        v6[286] = 16; /*0x573224*/
      }
      else if ( v7 == 17 ) /*0x5731ec*/
      {
        CellClass::UpdateVariant6(v31, v2); /*0x5731f6*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x573201*/
        v6[286] = 0; /*0x573209*/
        *((_DWORD *)v6 + 17) = -1; /*0x573216*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x57321d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x57323c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x57324b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x573526*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x573266*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57350d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x573271*/
  {
    CellClass::UpdateVariant6(v31, v2); /*0x57327f*/
    v10 = v31[0] - 1; /*0x573290*/
    if ( v6[282] <= 4u ) /*0x573293*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x5733f9*/
      HIWORD(a2) = v31[1]; /*0x5733fe*/
      v22 = v10 + (v31[1] << 9); /*0x57340c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573422*/
      {
        v24 = v23; /*0x573424*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57342c*/
        dword_ABDC74 = a2; /*0x573431*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573436*/
      a2 = *(_DWORD *)v31; /*0x573448*/
      v25 = v31[0] + (v31[1] << 9); /*0x573456*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57346c*/
      {
        v27 = v26; /*0x57346e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x573476*/
        dword_ABDC74 = a2; /*0x57347b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x573480*/
      HIWORD(a2) = v31[1]; /*0x57348f*/
      LOWORD(a2) = v31[0] + 1; /*0x573494*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x5734ab*/
      CellClass::UpdateAnimations((int)v28); /*0x5734b2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5734c3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x5734ed*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x57329d*/
      HIWORD(a2) = v31[1] - 1; /*0x5732a8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x5732b3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x5732c9*/
      {
        v13 = v12; /*0x5732cb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x5732d3*/
        dword_ABDC74 = a2; /*0x5732d8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x5732dd*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x5732f2*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x573300*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x573316*/
      {
        v16 = v15; /*0x573318*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x573320*/
        dword_ABDC74 = a2; /*0x573325*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x57332a*/
      LOWORD(a2) = v31[0] + 1; /*0x57333b*/
      HIWORD(a2) = v31[1] - 1; /*0x573340*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x57334e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x573364*/
      {
        v19 = v18; /*0x573366*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x57336e*/
        dword_ABDC74 = a2; /*0x573373*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x573378*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x57338d*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x57339b*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x5733b1*/
      {
        dword_ABDC74 = a2; /*0x5733b7*/
        v21 = (char *)&unk_ABDC50; /*0x5733bc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x5733e7*/
    }
  }
  return v9; /*0x5733ec*/
}



// ==== 0x00573540  Terrain::RecursiveModify  this=Terrain  sig=csp ====
void __thiscall Terrain::RecursiveModify(Terrain *this, int a2)
{
  CellStruct *v2; // ebx
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edx
  char v12; // di
  int i; // ebp
  int v14; // ecx
  unsigned int v15; // eax
  int *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebp
  __int16 v26; // di
  int v27; // ecx
  bool v28; // sf
  int v29; // ecx
  int *v30; // ecx
  int v31; // eax
  __int16 v32; // cx
  _WORD *v33; // eax
  __int16 v34; // si
  __int16 v35; // di
  __int16 v36; // cx
  int v37; // esi
  int v38; // ebx
  int v39; // eax
  void *Terrain_field_0x128; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  int *v43; // edx
  int v44; // eax
  unsigned int v45; // eax
  int *v46; // eax
  Terrain *v47; // ebp
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int *v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int *v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  int *v57; // eax
  int Capacity; // eax
  int v59; // edi
  int v60; // esi
  int v61; // eax
  unsigned int v62; // eax
  int *v63; // eax
  unsigned int v64; // eax
  int *v65; // eax
  Terrain *v66; // ebp
  int v67; // ecx
  unsigned int v68; // eax
  int *v69; // eax
  int v70; // ecx
  unsigned int v71; // eax
  int *v72; // eax
  int v73; // ecx
  unsigned int v74; // eax
  int *v75; // eax
  int v76; // eax
  int v77; // edi
  int v78; // esi
  int v79; // eax
  unsigned int v80; // eax
  int *v81; // eax
  int v83; // [esp+14h] [ebp-44h] BYREF
  __int16 v84[4]; // [esp+18h] [ebp-40h] BYREF
  __int16 v85[2]; // [esp+20h] [ebp-38h] BYREF
  int v86; // [esp+24h] [ebp-34h] BYREF
  __int16 v87[4]; // [esp+28h] [ebp-30h] BYREF
  int v88; // [esp+30h] [ebp-28h] BYREF
  int v89; // [esp+34h] [ebp-24h]
  int v90; // [esp+38h] [ebp-20h]
  int v91; // [esp+3Ch] [ebp-1Ch]
  VectorClass v92; // [esp+40h] [ebp-18h] BYREF
  int v93; // [esp+50h] [ebp-8h]
  int v94; // [esp+54h] [ebp-4h]

  v2 = (CellStruct *)a2; /*0x573544*/
  v4 = -2; /*0x573551*/
  do /*0x5735a4*/
  {
    v5 = -2; /*0x573556*/
    do /*0x57359e*/
    {
      v6 = HIWORD(v2->field_0) + v5; /*0x573564*/
      LOWORD(a2) = LOWORD(v2->field_0) + v4; /*0x573568*/
      HIWORD(a2) = v6; /*0x57356d*/
      *(_DWORD *)v85 = a2; /*0x573580*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v85) + 17); /*0x573589*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x573598*/
      {
        v8 = HIWORD(v2->field_0) + v5; /*0x5735ab*/
        LOWORD(a2) = LOWORD(v2->field_0) + v4; /*0x5735b3*/
        HIWORD(a2) = v8; /*0x5735b8*/
        CellClass::ApplyTileMod58((CellClass *)this, (int)&a2); /*0x5735c8*/
        return; /*0x5735d4*/
      }
      ++v5; /*0x57359a*/
    }
    while ( v5 < 3 ); /*0x57359e*/
    ++v4; /*0x5735a0*/
  }
  while ( v4 < 3 ); /*0x5735a4*/
  v9 = SLOWORD(v2->field_0) + (SHIWORD(v2->field_0) << 9); /*0x5735e1*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5735f7*/
  {
    v11 = v10; /*0x5735f9*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x5735ff*/
    g_MissionQueueFrame.briefing[139] = v2->field_0; /*0x573604*/
  }
  v12 = 0; /*0x57360f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x573614*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57361a*/
    {
      v14 = *CellStruct::Add(v2, &v86, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x573635*/
      *(_DWORD *)v85 = v14; /*0x573637*/
      a2 = v14; /*0x57363b*/
      v15 = (__int16)v14 + (SHIWORD(v14) << 9); /*0x57364a*/
      if ( v15 < 0x40000 && (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) != 0 ) /*0x573660*/
      {
        v11 = v16; /*0x573662*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v14; /*0x573666*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57366c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57367a*/
        break; /*0x57367a*/
      v17 = *CellStruct::Add((CellStruct *)&a2, v84, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x57368f*/
      *(_DWORD *)v85 = v17; /*0x573691*/
      a2 = v17; /*0x573695*/
      v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x5736a4*/
      if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x5736ba*/
      {
        v11 = v19; /*0x5736bc*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v17; /*0x5736c0*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5736c6*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5736d4*/
        break; /*0x5736d4*/
      v20 = *CellStruct::Add((CellStruct *)&a2, &v83, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5736e5*/
      *(_DWORD *)v85 = v20; /*0x5736e7*/
      a2 = v20; /*0x5736eb*/
      v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5736fa*/
      if ( v21 < 0x40000 && (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) != 0 ) /*0x573710*/
      {
        v11 = v22; /*0x573712*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v20; /*0x573716*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57371c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57372a*/
        break; /*0x57372a*/
      v12 = (v12 + 1) & 7; /*0x57372d*/
    }
  }
  v23 = v11[80]; /*0x57373a*/
  if ( (v23 & 0x100) != 0 || (v23 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v23 & 0x80u) == 0 ) /*0x573759*/
        v24 = *(_DWORD *)(v11[11] + 36); /*0x573766*/
      else
        v24 = v11[9]; /*0x57375b*/
    }
    else
    {
      v25 = v11[9]; /*0x573773*/
      *(_DWORD *)v84 = v25; /*0x57377a*/
      *(_DWORD *)v85 = 0; /*0x573781*/
      v86 = (v23 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x5737a2*/
      {
        v26 = HIWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v84[1]; /*0x5737a2*/
        LOWORD(v83) = LOWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v25; /*0x5737af*/
        HIWORD(v83) = v26; /*0x5737b4*/
        LOWORD(v25) = v83; /*0x5737b9*/
        v27 = v26 << 9; /*0x5737bd*/
        v28 = (__int16)v83 + v27 < 0; /*0x5737c0*/
        v29 = (__int16)v83 + v27; /*0x5737c0*/
        *(_DWORD *)v84 = v83; /*0x5737c2*/
        if ( v28 || v29 >= 0x40000 || (v30 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x5737db*/
        {
          g_MissionQueueFrame.briefing[139] = v83; /*0x5737e1*/
          v30 = &g_MissionQueueFrame.briefing[130]; /*0x5737e7*/
        }
        if ( (v30[80] & 0x400) == 0 ) /*0x5737f5*/
          break; /*0x5737f5*/
        ++*(_DWORD *)v85; /*0x5737ff*/
        if ( *(int *)v85 >= 4 ) /*0x573803*/
          return; /*0x573803*/
      }
      v31 = ((_BYTE)v86 - 4) & 7; /*0x573819*/
      v32 = g_DDrawSurfaceManager.scenario[v31 + 82]; /*0x57381c*/
      v33 = (_WORD *)(4 * v31 + 9041544); /*0x573824*/
      v34 = v26 + v33[1]; /*0x573832*/
      v35 = v83 + v32 + *v33; /*0x573838*/
      v36 = v33[1]; /*0x57383b*/
      v85[0] = v35; /*0x573842*/
      v85[1] = v34 + v36; /*0x573847*/
      v24 = *(_DWORD *)v85; /*0x57384c*/
    }
    v37 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v87 = v24; /*0x57386b*/
    VectorClass::CellConstructor(&v92, 0, 0); /*0x57386f*/
    v38 = *(_DWORD *)v87; /*0x573874*/
    v39 = *(_DWORD *)&this->__pad_122[2]; /*0x57387f*/
    v92.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x573885*/
    v94 = 10; /*0x57388f*/
    v93 = 0; /*0x573897*/
    LOBYTE(a2) = 0; /*0x57389f*/
    if ( v87[0] < v39 ) /*0x5738a4*/
      goto LABEL_141; /*0x5738a4*/
    while ( 1 ) /*0x5738aa*/
    {
      if ( (__int16)v38 > (int)this->Terrain_field_0x12C + v39 ) /*0x5738bb*/
        goto LABEL_141; /*0x5738bb*/
      Terrain_field_0x128 = this->Terrain_field_0x128; /*0x5738ca*/
      if ( v87[1] < (int)Terrain_field_0x128 || v87[1] > (int)Terrain_field_0x128 + *(_DWORD *)this->__pad_130 ) /*0x5738e6*/
        goto LABEL_141; /*0x5738e6*/
      v41 = (__int16)v38 + (v87[1] << 9); /*0x5738ef*/
      if ( *((_DWORD *)this->Terrain_field_0x13C + v41) ) /*0x5738fb*/
      {
        if ( v41 < 0x40000 && (v42 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v41)) != 0 ) /*0x57391b*/
        {
          v43 = v42; /*0x57391d*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = v38; /*0x573921*/
          v43 = &g_MissionQueueFrame.briefing[130]; /*0x573927*/
        }
        v44 = v43[14] - g_Cell_BuildabilityLUT + 1; /*0x57393d*/
        if ( (v44 == dword_ABC2B4 || v44 == dword_AA1130) && *((_BYTE *)v43 + 282) == 8 ) /*0x573951*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573a26*/
          v45 = v87[0] + (v87[1] << 9); /*0x573a3a*/
          if ( v45 >= 0x40000 || (v46 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v45)) == 0 ) /*0x573a50*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573a52*/
            v46 = &g_MissionQueueFrame.briefing[130]; /*0x573a58*/
          }
          Terrain::PlaceCliffs(this, (int)v46, 2, &v88); /*0x573a64*/
          goto LABEL_111; /*0x573a64*/
        }
        if ( (v44 == g_TerrainSoundTable2 /*0x573984*/
           || v44 == g_TerrainSoundTable2 + 3
           || v44 == g_TerrainSoundTable2 + 4
           || v44 == g_TerrainSoundTable2 + 1
           || v44 == g_TerrainSoundTable2 + 2)
          && *((_BYTE *)v43 + 282) == 5 )
        {
          if ( v44 != g_TerrainSoundTable2 + 4 ) /*0x573a6e*/
          {
            v47 = this; /*0x573c2e*/
LABEL_103:
            v85[0] = v38 - 2; /*0x573c32*/
            v85[1] = v87[1]; /*0x573c3f*/
            v86 = *(_DWORD *)v85; /*0x573c4c*/
            Terrain::RecursiveModify(v47, (int)&v86); /*0x573c53*/
            v62 = v87[0] + (v87[1] << 9); /*0x573c67*/
            if ( v62 >= 0x40000 || (v63 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v62)) == 0 ) /*0x573c7d*/
            {
              g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573c7f*/
              v63 = &g_MissionQueueFrame.briefing[130]; /*0x573c85*/
            }
            Terrain::PlaceCliffs(v47, (int)v63, 2, &v88); /*0x573c94*/
            Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573cc1*/
            goto LABEL_139; /*0x573cc6*/
          }
          v47 = this; /*0x573a74*/
          Cell::SetTileType(v87, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573a8a*/
          LOWORD(a2) = v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x573aa7*/
          v48 = (__int16)(v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88])); /*0x573aac*/
          HIWORD(a2) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]; /*0x573aaf*/
          v49 = (__int16)(HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]) << 9; /*0x573abb*/
          v28 = v48 + v49 < 0; /*0x573abe*/
          v50 = v48 + v49; /*0x573abe*/
          *(_DWORD *)v84 = a2; /*0x573ac0*/
          if ( v28 || v50 >= 0x40000 || (v51 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v50)) == 0 ) /*0x573ad8*/
          {
            g_MissionQueueFrame.briefing[139] = a2; /*0x573ada*/
            v51 = &g_MissionQueueFrame.briefing[130]; /*0x573ae0*/
          }
          *((_BYTE *)v51 + 283) += 4; /*0x573af7*/
          v52 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[82]); /*0x573b07*/
          a2 = v52; /*0x573b09*/
          v53 = (__int16)v52 + (SHIWORD(v52) << 9); /*0x573b18*/
          if ( v53 >= 0x40000 || (v54 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v53)) == 0 ) /*0x573b2e*/
          {
            g_MissionQueueFrame.briefing[139] = v52; /*0x573b30*/
            v54 = &g_MissionQueueFrame.briefing[130]; /*0x573b36*/
          }
          *((_BYTE *)v54 + 283) += 4; /*0x573b49*/
          v55 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[86]); /*0x573b5d*/
          a2 = v55; /*0x573b5f*/
          v56 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x573b6e*/
          if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x573b84*/
          {
            g_MissionQueueFrame.briefing[139] = v55; /*0x573b86*/
            v57 = &g_MissionQueueFrame.briefing[130]; /*0x573b8c*/
          }
          *((_BYTE *)v57 + 283) += 4; /*0x573b9c*/
          LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573bac*/
          Capacity = v92.Capacity; /*0x573bb0*/
          v59 = 0; /*0x573bb4*/
          while ( 2 ) /*0x573bb6*/
          {
            v60 = -2; /*0x573bb6*/
LABEL_92:
            v85[0] = v59 + v84[0]; /*0x573bbb*/
            v85[1] = v60 + v84[1]; /*0x573bcd*/
            if ( v93 >= Capacity ) /*0x573bd8*/
            {
              if ( (v92.IsAllocated || !Capacity) && v94 > 0 ) /*0x573bec*/
              {
                if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v92.ptr_0 + 2))( /*0x573bfb*/
                       &v92,
                       v94 + Capacity,
                       0) )
                {
                  break; /*0x573c00*/
                }
LABEL_98:
                Capacity = v92.Capacity; /*0x573c18*/
              }
              if ( ++v60 >= 3 ) /*0x573c20*/
              {
                if ( ++v59 >= 2 ) /*0x573c26*/
                {
                  LOWORD(v38) = v87[0]; /*0x573c28*/
                  goto LABEL_103; /*0x573c2c*/
                }
                continue; /*0x573c26*/
              }
              goto LABEL_92; /*0x573c20*/
            }
            break;
          }
          v61 = v93++; /*0x573c02*/
          *((_DWORD *)v92.Items + v61) = *(_DWORD *)v85; /*0x573c15*/
          goto LABEL_98; /*0x573c15*/
        }
        if ( (v44 == dword_AA1548 || v44 == dword_AA0740) && *((_BYTE *)v43 + 282) == 12 ) /*0x5739a1*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573cda*/
          v64 = v87[0] + (v87[1] << 9); /*0x573cee*/
          if ( v64 >= 0x40000 || (v65 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v64)) == 0 ) /*0x573d04*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573d06*/
            v65 = &g_MissionQueueFrame.briefing[130]; /*0x573d0c*/
          }
          Terrain::PlaceCliffs(this, (int)v65, 4, &v88); /*0x573d1b*/
LABEL_111:
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573d20*/
          goto LABEL_141; /*0x573d4d*/
        }
        if ( (v44 == g_TerrainSoundConfig /*0x5739d4*/
           || v44 == g_TerrainSoundConfig + 3
           || v44 == g_TerrainSoundConfig + 4
           || v44 == g_TerrainSoundConfig + 1
           || v44 == g_TerrainSoundConfig + 2)
          && *((_BYTE *)v43 + 282) == 7 )
        {
          break; /*0x5739d4*/
        }
      }
      v38 = *CellStruct::Add((CellStruct *)v87, &v86, (_WORD *)(4 * (v37 & 7) + 9041544)); /*0x5739fb*/
      v39 = *(_DWORD *)&this->__pad_122[2]; /*0x5739fd*/
      *(_DWORD *)v87 = v38; /*0x573a03*/
      if ( (__int16)v38 < v39 ) /*0x573a0c*/
        goto LABEL_141; /*0x573a0c*/
    }
    if ( v44 != g_TerrainSoundConfig + 4 ) /*0x573d57*/
    {
      v66 = this; /*0x573f0c*/
      goto LABEL_135; /*0x573f0c*/
    }
    v66 = this; /*0x573d5d*/
    Cell::SetTileType(v87, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573d73*/
    v67 = *CellStruct::Add((CellStruct *)v87, &a2, &g_DDrawSurfaceManager.scenario[82]); /*0x573d8b*/
    a2 = v67; /*0x573d8d*/
    *(_DWORD *)v84 = v67; /*0x573d91*/
    v68 = (__int16)v67 + (SHIWORD(v67) << 9); /*0x573da0*/
    if ( v68 >= 0x40000 || (v69 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v68)) == 0 ) /*0x573db6*/
    {
      g_MissionQueueFrame.briefing[139] = v67; /*0x573db8*/
      v69 = &g_MissionQueueFrame.briefing[130]; /*0x573dbe*/
    }
    *((_BYTE *)v69 + 283) += 4; /*0x573dd1*/
    v70 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[84]); /*0x573de5*/
    a2 = v70; /*0x573de7*/
    v71 = (__int16)v70 + (SHIWORD(v70) << 9); /*0x573df6*/
    if ( v71 >= 0x40000 || (v72 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v71)) == 0 ) /*0x573e0c*/
    {
      g_MissionQueueFrame.briefing[139] = v70; /*0x573e0e*/
      v72 = &g_MissionQueueFrame.briefing[130]; /*0x573e14*/
    }
    *((_BYTE *)v72 + 283) += 4; /*0x573e27*/
    v73 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[88]); /*0x573e3b*/
    a2 = v73; /*0x573e3d*/
    v74 = (__int16)v73 + (SHIWORD(v73) << 9); /*0x573e4c*/
    if ( v74 >= 0x40000 || (v75 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v74)) == 0 ) /*0x573e62*/
    {
      g_MissionQueueFrame.briefing[139] = v73; /*0x573e64*/
      v75 = &g_MissionQueueFrame.briefing[130]; /*0x573e6a*/
    }
    *((_BYTE *)v75 + 283) += 4; /*0x573e7a*/
    LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573e8a*/
    v76 = v92.Capacity; /*0x573e8e*/
    v77 = 0; /*0x573e92*/
LABEL_123:
    v78 = -2; /*0x573e94*/
    while ( 1 ) /*0x573ea6*/
    {
      v85[0] = v78 + v84[0]; /*0x573ea6*/
      v85[1] = v77 + v84[1]; /*0x573eab*/
      if ( v93 < v76 ) /*0x573eb6*/
        goto LABEL_129; /*0x573eb6*/
      if ( !v92.IsAllocated && v76 || v94 <= 0 ) /*0x573eca*/
        goto LABEL_131; /*0x573eca*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v92.ptr_0 + 2))(&v92, v94 + v76, 0) ) /*0x573ed9*/
      {
LABEL_129:
        v79 = v93++; /*0x573ee8*/
        *((_DWORD *)v92.Items + v79) = *(_DWORD *)v85; /*0x573ef3*/
      }
      v76 = v92.Capacity; /*0x573ef6*/
LABEL_131:
      if ( ++v78 >= 3 ) /*0x573efe*/
      {
        if ( ++v77 >= 2 ) /*0x573f04*/
        {
          LOWORD(v38) = v87[0]; /*0x573f06*/
LABEL_135:
          v85[0] = v38; /*0x573f10*/
          v85[1] = v87[1] - 2; /*0x573f20*/
          v86 = *(_DWORD *)v85; /*0x573f29*/
          Terrain::RecursiveModify(v66, (int)&v86); /*0x573f30*/
          v80 = v87[0] + (v87[1] << 9); /*0x573f44*/
          if ( v80 >= 0x40000 || (v81 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v80)) == 0 ) /*0x573f5a*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573f5c*/
            v81 = &g_MissionQueueFrame.briefing[130]; /*0x573f62*/
          }
          Terrain::PlaceCliffs(v66, (int)v81, 4, &v88); /*0x573f71*/
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573f9e*/
          v47 = this; /*0x573fa3*/
LABEL_139:
          if ( (_BYTE)a2 ) /*0x573fad*/
            Terrain::ConnectivityGraph(v47); /*0x573fb1*/
LABEL_141:
          if ( v93 > 0 ) /*0x573fbc*/
            LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v92); /*0x573fc7*/
          v92.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x573fd0*/
          if ( v92.Items ) /*0x573fda*/
          {
            if ( v92.IsAllocated ) /*0x573fe2*/
              __3_YAXPAX_Z(v92.Items); /*0x573fe5*/
          }
          return; /*0x573fe5*/
        }
        goto LABEL_123; /*0x573f04*/
      }
    }
  }
}



// ==== 0x00574000  TerrainClass::ProcessSlope  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::ProcessSlope(TerrainClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  __int16 *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  __int16 *v31; // eax
  int v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  __int16 *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  TerrainClass *v55; // esi
  int v56; // eax
  int v57; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  __int16 v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  __int16 v68[2]; // [esp+28h] [ebp-1Ch] BYREF
  VectorClass v69; // [esp+2Ch] [ebp-18h] BYREF
  int v70; // [esp+3Ch] [ebp-8h]
  int v71; // [esp+40h] [ebp-4h]

  v2 = (CellClass *)this; /*0x574006*/
  v3 = -2; /*0x57400d*/
  while ( 2 ) /*0x574012*/
  {
    v4 = -2; /*0x574012*/
    do /*0x57405e*/
    {
      v5 = a2; /*0x574017*/
      v6 = a2[1]; /*0x57401e*/
      LOWORD(v64) = v3 + *a2; /*0x574028*/
      HIWORD(v64) = v4 + v6; /*0x57402d*/
      *(_DWORD *)v68 = v64; /*0x574040*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v68) + 17); /*0x574049*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x574058*/
      {
        v8 = v4 + v5[1]; /*0x574072*/
        LOWORD(a2) = v3 + *v5; /*0x574075*/
        HIWORD(a2) = v8; /*0x57407e*/
        CellClass::ApplyTerrainModTile(v2, (int)&a2); /*0x57408e*/
        return; /*0x57409a*/
      }
      ++v4; /*0x57405a*/
    }
    while ( v4 < 3 ); /*0x57405e*/
    if ( ++v3 < 3 ) /*0x574064*/
      continue; /*0x574064*/
    break;
  }
  v9 = *v5 + (v5[1] << 9); /*0x5740a7*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5740bd*/
  {
    v11 = v10; /*0x5740bf*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x5740c5*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v5; /*0x5740ca*/
  }
  v12 = v11[80]; /*0x5740d0*/
  v64 = 0; /*0x5740db*/
  if ( (v12 & 0x500) == 0 ) /*0x5740df*/
  {
    *(_DWORD *)v68 = 0; /*0x5740e5*/
    while ( 1 ) /*0x5740fa*/
    {
      v13 = v64 & 7; /*0x5740fa*/
      v14 = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + *v5; /*0x574105*/
      v15 = v5[1] + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x57410d*/
      v16 = (__int16 *)(4 * v13 + 9041544); /*0x574111*/
      v17 = v15 << 9; /*0x57411e*/
      v18 = v14 + v17 < 0; /*0x574121*/
      v19 = v14 + v17; /*0x574121*/
      LOWORD(v65) = v14; /*0x574123*/
      HIWORD(v65) = v15; /*0x574128*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x574141*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57414b*/
        g_MissionQueueFrame.briefing[139] = v65; /*0x574150*/
      }
      else
      {
        v11 = v20; /*0x574143*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57415e*/
        break; /*0x57415e*/
      v21 = v15 + v16[1]; /*0x57416b*/
      v22 = v14 + *v16; /*0x57416e*/
      v23 = v21 << 9; /*0x574177*/
      v18 = v22 + v23 < 0; /*0x57417a*/
      v24 = v22 + v23; /*0x57417a*/
      LOWORD(v66) = v22; /*0x57417c*/
      HIWORD(v66) = v21; /*0x574181*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x57419a*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5741a4*/
        g_MissionQueueFrame.briefing[139] = v66; /*0x5741a9*/
      }
      else
      {
        v11 = v25; /*0x57419c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5741bb*/
        goto LABEL_34; /*0x5741bb*/
      v26 = *v16; /*0x5741bd*/
      HIWORD(v67) = v21 + v16[1]; /*0x5741cd*/
      LOWORD(v67) = v22 + v26; /*0x5741d2*/
      v27 = (__int16)(v22 + v26) + (SHIWORD(v67) << 9); /*0x5741dd*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) != 0 ) /*0x5741f3*/
      {
        v11 = v28; /*0x5741f5*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5741fd*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574202*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *(_DWORD *)v68 + 1 < 8, v64 = ((_BYTE)v64 + 1) & 7, ++*(_DWORD *)v68, !v29) ) /*0x574227*/
      {
LABEL_34:
        v2 = (CellClass *)this; /*0x57422d*/
        break; /*0x57422d*/
      }
      v5 = a2; /*0x5740eb*/
      v2 = (CellClass *)this; /*0x5740ef*/
    }
  }
  v30 = v11[80]; /*0x574231*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574250*/
        v31 = *(__int16 **)(v11[11] + 36); /*0x57425d*/
      else
        v31 = (__int16 *)v11[9]; /*0x574252*/
    }
    else
    {
      v32 = v11[9]; /*0x57426a*/
      *(_DWORD *)v68 = v32; /*0x574271*/
      v67 = 0; /*0x574278*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574299*/
      {
        v33 = HIWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]) + v68[1]; /*0x574299*/
        LOWORD(a2) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]); /*0x5742a6*/
        HIWORD(a2) = v33; /*0x5742ab*/
        LOWORD(v32) = (_WORD)a2; /*0x5742b0*/
        v34 = v33 << 9; /*0x5742b4*/
        v18 = (__int16)a2 + v34 < 0; /*0x5742b7*/
        v35 = (__int16)a2 + v34; /*0x5742b7*/
        *(_DWORD *)v68 = a2; /*0x5742b9*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v35)) == 0 ) /*0x5742d3*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x5742d9*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x5742df*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x5742ee*/
          break; /*0x5742ee*/
        if ( ++v67 >= 4 ) /*0x5742fc*/
          return; /*0x5742fc*/
      }
      v2 = (CellClass *)this; /*0x57430c*/
      v37 = ((_BYTE)v66 - 4) & 7; /*0x574316*/
      v38 = HIWORD(g_DDrawSurfaceManager.scenario[v37 + 82]); /*0x574332*/
      LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]) /*0x57433c*/
                 + (_WORD)a2
                 + LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]);
      HIWORD(a2) = v33 + v38 + v38; /*0x574341*/
      v31 = a2; /*0x574346*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v63 = v31; /*0x574365*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574369*/
    v40 = *(__int16 **)v63; /*0x57436e*/
    occupationFlags = v2->occupationFlags; /*0x574372*/
    v69.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x57437d*/
    v71 = 10; /*0x574385*/
    v70 = 0; /*0x57438d*/
    if ( v63[0] >= occupationFlags ) /*0x574395*/
    {
      do /*0x5743a1*/
      {
        if ( (__int16)v40 > occupationFlags + v2->copyFlags ) /*0x5743a8*/
          break; /*0x5743a8*/
        altOccupationFlags = v2->altOccupationFlags; /*0x5743b3*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x5743cb*/
          break; /*0x5743cb*/
        v43 = (__int16)v40 + (v63[1] << 9); /*0x5743da*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v43) ) /*0x5743dc*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v43)) != 0 ) /*0x5743f8*/
          {
            v45 = v44; /*0x5743fa*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = (int)v40; /*0x5743fe*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x574404*/
          }
          if ( globalHelper_0746C0(v45[14] - g_Cell_BuildabilityLUT + 1, (int)v45) ) /*0x574415*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x574471*/
            a2 = *(__int16 **)v63; /*0x574474*/
            for ( i = 0; i < 3; ++i ) /*0x574478*/
            {
              if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, v63) ) /*0x574483*/
                break; /*0x57448a*/
            }
            while ( 1 ) /*0x5744ac*/
            {
              v50 = LOWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + (_WORD)a2; /*0x5744ac*/
              v68[1] = HIWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + HIWORD(a2); /*0x5744b2*/
              v68[0] = v50; /*0x5744b7*/
              v51 = v50; /*0x5744c0*/
              a2 = *(__int16 **)v68; /*0x5744c5*/
              v52 = v50 + (v68[1] << 9); /*0x5744cc*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) != 0 ) /*0x5744e2*/
              {
                v54 = v53; /*0x5744e4*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(_DWORD *)v68; /*0x5744e8*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x5744ee*/
              }
              v55 = this; /*0x5744f3*/
              v56 = *((_DWORD *)this + 73); /*0x5744f7*/
              if ( v51 < v56 ) /*0x5744ff*/
                break; /*0x5744ff*/
              if ( v51 > v56 + *((_DWORD *)this + 75) ) /*0x57450f*/
                goto LABEL_79; /*0x57450f*/
              v57 = this->q04A; /*0x574519*/
              if ( v68[1] < v57 || v68[1] > v57 + this->q04C ) /*0x574531*/
                goto LABEL_79; /*0x574531*/
              v58 = v54[14] - g_Cell_BuildabilityLUT + 1; /*0x57453f*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x574544*/
              {
                if ( v58 != -1 ) /*0x574554*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57455e*/
                  v60 = HIWORD(g_DDrawSurfaceManager.scenario[v59 + 82]); /*0x574570*/
                  v68[0] = LOWORD(g_DDrawSurfaceManager.scenario[v59 + 82]) + (_WORD)a2; /*0x574578*/
                  v61 = 0; /*0x574582*/
                  v68[1] = HIWORD(a2) + v60; /*0x574584*/
                  a2 = *(__int16 **)v68; /*0x57458d*/
                  do /*0x5745a7*/
                  {
                    if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, (__int16 *)&a2) ) /*0x57459a*/
                      break; /*0x5745a1*/
                    ++v61; /*0x5745a3*/
                  }
                  while ( v61 < 3 ); /*0x5745a7*/
                }
LABEL_79:
                v55 = this; /*0x5745a9*/
                break; /*0x5745a9*/
              }
            }
            Terrain::CreateCrater((Terrain *)v55, (int)v63); /*0x5745ad*/
            v2 = (CellClass *)this; /*0x5745bf*/
            g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x5745c3*/
            break; /*0x5745c3*/
          }
          LOWORD(v40) = v63[0]; /*0x57441e*/
        }
        v46 = v39 & 7; /*0x574424*/
        v47 = v63[1] + HIWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x57443a*/
        LOWORD(a2) = (_WORD)v40 + LOWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x574442*/
        HIWORD(a2) = v47; /*0x57444a*/
        occupationFlags = v2->occupationFlags; /*0x57444f*/
        v40 = a2; /*0x574455*/
        *(_DWORD *)v63 = a2; /*0x57445b*/
      }
      while ( (__int16)a2 >= occupationFlags ); /*0x5743a1*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5745ca*/
    v69.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5745d5*/
    if ( v69.Items ) /*0x5745df*/
    {
      if ( v69.IsAllocated ) /*0x5745e7*/
        __3_YAXPAX_Z(v69.Items); /*0x5745ea*/
    }
  }
}



// ==== 0x00574600  globalHelper  this=-  sig=csp ====
bool __fastcall sub_574600(int a1, int a2, int a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // eax

  v3 = 2; /*0x574601*/
  if ( a2 == 2 ) /*0x574609*/
  {
    v4 = a3; /*0x574610*/
    v3 = 4; /*0x574616*/
    if ( a1 == dword_ABC1E8 && *(_BYTE *)(a3 + 282) == 4 || a1 == dword_AA0E38 && *(_BYTE *)(a3 + 282) == 4 ) /*0x574634*/
      return 1; /*0x574634*/
    v5 = g_TerrainSoundTable2; /*0x574636*/
    if ( a1 != g_TerrainSoundTable2 && a1 != g_TerrainSoundTable2 + 3 && a1 != g_TerrainSoundTable2 + 1 ) /*0x57464b*/
    {
LABEL_20:
      if ( a1 != v5 + 2 ) /*0x5746a3*/
        return 0; /*0x5746a3*/
    }
  }
  else
  {
    if ( a2 != 4 ) /*0x574652*/
      return 0; /*0x574652*/
    v4 = a3; /*0x574659*/
    if ( a1 == dword_ABC1D0 && *(_BYTE *)(a3 + 282) == 2 ) /*0x574667*/
      return 1; /*0x57466d*/
    if ( a1 == dword_AA1540 && *(_BYTE *)(a3 + 282) == 2 ) /*0x57467e*/
      return 1; /*0x574684*/
    v5 = g_TerrainSoundConfig; /*0x574687*/
    if ( a1 != g_TerrainSoundConfig && a1 != g_TerrainSoundConfig + 3 && a1 != g_TerrainSoundConfig + 1 ) /*0x57469c*/
      goto LABEL_20; /*0x57469c*/
  }
  return *(_BYTE *)(v4 + 282) == v3; /*0x574669*/
}



// ==== 0x005746C0  globalHelper_0746C0  this=-  sig=ida-proto ====
bool __fastcall sub_5746C0(int a1, int a2)
{
  if ( a1 == dword_AA1548 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746d3*/
    return 1; /*0x5746d6*/
  if ( a1 == dword_AA0740 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746e7*/
    return 1; /*0x5746ea*/
  if ( (a1 == g_TerrainSoundTable2 /*0x574712*/
     || a1 == g_TerrainSoundTable2 + 3
     || a1 == g_TerrainSoundTable2 + 1
     || a1 == g_TerrainSoundTable2 + 2)
    && *(_BYTE *)(a2 + 282) == 4 )
  {
    return 1; /*0x574715*/
  }
  if ( a1 == dword_ABC2B4 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57472a*/
    return 1; /*0x57472d*/
  if ( a1 == dword_AA1130 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57473e*/
    return 1; /*0x574741*/
  return (a1 == g_TerrainSoundConfig /*0x5746d5*/
       || a1 == g_TerrainSoundConfig + 3
       || a1 == g_TerrainSoundConfig + 1
       || a1 == g_TerrainSoundConfig + 2)
      && *(_BYTE *)(a2 + 282) == 2;
}



// ==== 0x00574780  MapClass::TransitionCliff  this=MapClass  sig=csp ====
int __thiscall MapClass::TransitionCliff(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x574784*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x574795*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5747ab*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5747af*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5747b4*/
  }
  result = v5[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x5747dc*/
    LOWORD(a2) = *(_WORD *)a2; /*0x5747e0*/
    HIWORD(a2) = v7 - 1; /*0x5747eb*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574803*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57480e*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x574846*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57484a*/
      HIWORD(a2) = v10; /*0x57484f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57486b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x574876*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57488b*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57488f*/
        HIWORD(a2) = v12 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(this, &a2); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2(this, (_DWORD *)v2); /*0x57487b*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x574817*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574819*/
      HIWORD(a2) = v9; /*0x57481e*/
      return CellClass::ApplyCliffMod2(this, &a2); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x5748db*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x5748dd*/
    LOWORD(a2) = v13; /*0x5748e2*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x5748fe*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x574909*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x574941*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574945*/
      LOWORD(a2) = v16; /*0x57494a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574966*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x574971*/
      {
        a2 = 1; /*0x57498f*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x5749a8*/
        return CellClass::ApplyCliffMod(this, &v18); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod(this, (_DWORD *)v2); /*0x574976*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x574912*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574914*/
      LOWORD(a2) = v15; /*0x574919*/
      return CellClass::ApplyCliffMod(this, &a2); /*0x57492d*/
    }
  }
  return result; /*0x574837*/
}



// ==== 0x005749C0  CellClass::ApplyTerrainModTile  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTerrainModTile(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x5749c4*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x5749d5*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5749eb*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5749ef*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5749f4*/
  }
  result = v5[17]; /*0x5749f9*/
  if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 ) /*0x574a1d*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x574a26*/
    LOWORD(a2) = *(_WORD *)a2; /*0x574a2a*/
    HIWORD(a2) = v7 - 1; /*0x574a35*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574a4d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x574a5c*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x574a94*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574a98*/
      HIWORD(a2) = v10; /*0x574a9d*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574ab9*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x574ac8*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x574add*/
        LOWORD(a2) = *(_WORD *)v2; /*0x574ae1*/
        HIWORD(a2) = v12 - 1; /*0x574aec*/
        return CellClass::ApplyTerrainMod2(this, &a2); /*0x574afc*/
      }
      else
      {
        return CellClass::ApplyTerrainMod2(this, (_DWORD *)v2); /*0x574acd*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x574a65*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574a67*/
      HIWORD(a2) = v9; /*0x574a6c*/
      return CellClass::ApplyTerrainMod2(this, &a2); /*0x574a80*/
    }
  }
  else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 ) /*0x574b2a*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x574b37*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x574b39*/
    LOWORD(a2) = v13; /*0x574b3e*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574b5a*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x574b69*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x574ba1*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574ba5*/
      LOWORD(a2) = v16; /*0x574baa*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574bc6*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x574bd5*/
      {
        a2 = 1; /*0x574bf3*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x574c0c*/
        return CellClass::ApplyTerrainMod(this, &v18); /*0x574c13*/
      }
      else
      {
        return CellClass::ApplyTerrainMod(this, (_DWORD *)v2); /*0x574bda*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x574b72*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574b74*/
      LOWORD(a2) = v15; /*0x574b79*/
      return CellClass::ApplyTerrainMod(this, &a2); /*0x574b8d*/
    }
  }
  return result; /*0x574a85*/
}



// ==== 0x00574C20  MapClass::ApplyTerrainDamage  this=MapClass  sig=csp ====
void __thiscall MapClass::ApplyTerrainDamage(MapClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  __int16 *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  __int16 *v31; // eax
  int v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  __int16 *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  MapClass *v55; // esi
  int v56; // eax
  void *MapClass_field_0x128; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  __int16 v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  __int16 v68[2]; // [esp+28h] [ebp-1Ch] BYREF
  VectorClass v69; // [esp+2Ch] [ebp-18h] BYREF
  int v70; // [esp+3Ch] [ebp-8h]
  int v71; // [esp+40h] [ebp-4h]

  v2 = (CellClass *)this; /*0x574c26*/
  v3 = -2; /*0x574c2d*/
  while ( 2 ) /*0x574c32*/
  {
    v4 = -2; /*0x574c32*/
    do /*0x574c7a*/
    {
      v5 = a2; /*0x574c37*/
      v6 = a2[1]; /*0x574c3e*/
      LOWORD(v64) = v3 + *a2; /*0x574c48*/
      HIWORD(v64) = v4 + v6; /*0x574c4d*/
      *(_DWORD *)v68 = v64; /*0x574c60*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v68) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = v4 + v5[1]; /*0x574c8e*/
        LOWORD(a2) = v3 + *v5; /*0x574c91*/
        HIWORD(a2) = v8; /*0x574c9a*/
        MapClass::TransitionCliff(v2, (int)&a2); /*0x574caa*/
        return; /*0x574cb6*/
      }
      ++v4; /*0x574c76*/
    }
    while ( v4 < 3 ); /*0x574c7a*/
    if ( ++v3 < 3 ) /*0x574c80*/
      continue; /*0x574c80*/
    break;
  }
  v9 = *v5 + (v5[1] << 9); /*0x574cc3*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x574ce1*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v5; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v64 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    *(_DWORD *)v68 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = v64 & 7; /*0x574d16*/
      v14 = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + *v5; /*0x574d21*/
      v15 = v5[1] + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x574d29*/
      v16 = (__int16 *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      LOWORD(v65) = v14; /*0x574d3f*/
      HIWORD(v65) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x574d5d*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574d67*/
        g_MissionQueueFrame.briefing[139] = v65; /*0x574d6c*/
      }
      else
      {
        v11 = v20; /*0x574d5f*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574d7a*/
        break; /*0x574d7a*/
      v21 = v15 + v16[1]; /*0x574d87*/
      v22 = v14 + *v16; /*0x574d8a*/
      v23 = v21 << 9; /*0x574d93*/
      v18 = v22 + v23 < 0; /*0x574d96*/
      v24 = v22 + v23; /*0x574d96*/
      LOWORD(v66) = v22; /*0x574d98*/
      HIWORD(v66) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x574db6*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574dc0*/
        g_MissionQueueFrame.briefing[139] = v66; /*0x574dc5*/
      }
      else
      {
        v11 = v25; /*0x574db8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574dd7*/
        goto LABEL_34; /*0x574dd7*/
      v26 = *v16; /*0x574dd9*/
      HIWORD(v67) = v21 + v16[1]; /*0x574de9*/
      LOWORD(v67) = v22 + v26; /*0x574dee*/
      v27 = (__int16)(v22 + v26) + (SHIWORD(v67) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574e19*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *(_DWORD *)v68 + 1 < 8, v64 = ((_BYTE)v64 + 1) & 7, ++*(_DWORD *)v68, !v29) ) /*0x574e43*/
      {
LABEL_34:
        v2 = (CellClass *)this; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = a2; /*0x574d07*/
      v2 = (CellClass *)this; /*0x574d0b*/
    }
  }
  v30 = v11[80]; /*0x574e4d*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574e6c*/
        v31 = *(__int16 **)(v11[11] + 36); /*0x574e79*/
      else
        v31 = (__int16 *)v11[9]; /*0x574e6e*/
    }
    else
    {
      v32 = v11[9]; /*0x574e86*/
      *(_DWORD *)v68 = v32; /*0x574e8d*/
      v67 = 0; /*0x574e94*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574eb5*/
      {
        v33 = HIWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]) + v68[1]; /*0x574eb5*/
        LOWORD(a2) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]); /*0x574ec2*/
        HIWORD(a2) = v33; /*0x574ec7*/
        LOWORD(v32) = (_WORD)a2; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = (__int16)a2 + v34 < 0; /*0x574ed3*/
        v35 = (__int16)a2 + v34; /*0x574ed3*/
        *(_DWORD *)v68 = a2; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x574ef5*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        if ( ++v67 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = (CellClass *)this; /*0x574f28*/
      v37 = ((_BYTE)v66 - 4) & 7; /*0x574f32*/
      v38 = HIWORD(g_DDrawSurfaceManager.scenario[v37 + 82]); /*0x574f4e*/
      LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]) /*0x574f58*/
                 + (_WORD)a2
                 + LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]);
      HIWORD(a2) = v33 + v38 + v38; /*0x574f5d*/
      v31 = a2; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v63 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574f85*/
    v40 = *(__int16 **)v63; /*0x574f8a*/
    occupationFlags = v2->occupationFlags; /*0x574f8e*/
    v69.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x574f99*/
    v71 = 10; /*0x574fa1*/
    v70 = 0; /*0x574fa9*/
    if ( v63[0] >= occupationFlags ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (__int16)v40 > occupationFlags + v2->copyFlags ) /*0x574fc4*/
          break; /*0x574fc4*/
        altOccupationFlags = v2->altOccupationFlags; /*0x574fcf*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (__int16)v40 + (v63[1] << 9); /*0x574ff6*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v43)) != 0 ) /*0x575014*/
          {
            v45 = v44; /*0x575016*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = (int)v40; /*0x57501a*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x575020*/
          }
          if ( globalHelper_0746C0(v45[14] - g_TerrainBridgeIndex + 1, (int)v45) ) /*0x575031*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x57508d*/
            a2 = *(__int16 **)v63; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, v63) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v50 = LOWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + (_WORD)a2; /*0x5750c8*/
              v68[1] = HIWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + HIWORD(a2); /*0x5750ce*/
              v68[0] = v50; /*0x5750d3*/
              v51 = v50; /*0x5750dc*/
              a2 = *(__int16 **)v68; /*0x5750e1*/
              v52 = v50 + (v68[1] << 9); /*0x5750e8*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) != 0 ) /*0x5750fe*/
              {
                v54 = v53; /*0x575100*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(_DWORD *)v68; /*0x575104*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x57510a*/
              }
              v55 = this; /*0x57510f*/
              v56 = *(_DWORD *)&this->__pad_10C[24]; /*0x575113*/
              if ( v51 < v56 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v51 > v56 + *(_DWORD *)this->__pad_12C ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              MapClass_field_0x128 = this->MapClass_field_0x128; /*0x575135*/
              if ( v68[1] < (int)MapClass_field_0x128 /*0x57514d*/
                || v68[1] > (int)((int)MapClass_field_0x128 + (unsigned int)this->MapClass_field_0x130) )
              {
                goto LABEL_79; /*0x57514d*/
              }
              v58 = v54[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x575160*/
              {
                if ( v58 != -1 ) /*0x575170*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57517a*/
                  v60 = HIWORD(g_DDrawSurfaceManager.scenario[v59 + 82]); /*0x57518c*/
                  v68[0] = LOWORD(g_DDrawSurfaceManager.scenario[v59 + 82]) + (_WORD)a2; /*0x575194*/
                  v61 = 0; /*0x57519e*/
                  v68[1] = HIWORD(a2) + v60; /*0x5751a0*/
                  a2 = *(__int16 **)v68; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, (__int16 *)&a2) ) /*0x5751b6*/
                      break; /*0x5751bd*/
                    ++v61; /*0x5751bf*/
                  }
                  while ( v61 < 3 ); /*0x5751c3*/
                }
LABEL_79:
                v55 = this; /*0x5751c5*/
                break; /*0x5751c5*/
              }
            }
            Terrain::CreateCrater((Terrain *)v55, (int)v63); /*0x5751c9*/
            v2 = (CellClass *)this; /*0x5751db*/
            g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x5751df*/
            break; /*0x5751df*/
          }
          LOWORD(v40) = v63[0]; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = v63[1] + HIWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x575056*/
        LOWORD(a2) = (_WORD)v40 + LOWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x57505e*/
        HIWORD(a2) = v47; /*0x575066*/
        occupationFlags = v2->occupationFlags; /*0x57506b*/
        v40 = a2; /*0x575071*/
        *(_DWORD *)v63 = a2; /*0x575077*/
      }
      while ( (__int16)a2 >= occupationFlags ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5751e6*/
    v69.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5751f1*/
    if ( v69.Items ) /*0x5751fb*/
    {
      if ( v69.IsAllocated ) /*0x575203*/
        __3_YAXPAX_Z(v69.Items); /*0x575206*/
    }
  }
}



// ==== 0x00575220  CellClass::ApplyCliffMod2  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyCliffMod2(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // cx
  int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-34h]
  int v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  __int16 v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v40[4]; // [esp+28h] [ebp-1Ch] BYREF
  int v41; // [esp+30h] [ebp-14h]
  int v42; // [esp+38h] [ebp-Ch] BYREF
  int v43; // [esp+3Ch] [ebp-8h]
  int v44; // [esp+40h] [ebp-4h]
  int v45; // [esp+48h] [ebp+4h]

  v2 = this; /*0x57522d*/
  v3 = 0; /*0x57522f*/
  *(_DWORD *)v40 = *a2; /*0x575235*/
  v4 = *(_DWORD *)v40; /*0x575239*/
  v37 = 1; /*0x57523b*/
  v5 = 0; /*0x575243*/
  do /*0x575265*/
  {
    --v40[0]; /*0x575245*/
    ++v3; /*0x575254*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x57525a*/
  }
  while ( v6 >= 74 && v6 <= 101 ); /*0x575265*/
  *(_DWORD *)v40 = v4; /*0x575267*/
  do /*0x57528b*/
  {
    ++v40[0]; /*0x57526b*/
    ++v5; /*0x57527a*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x575280*/
  }
  while ( v7 >= 74 && v7 <= 101 ); /*0x57528b*/
  if ( v5 < v3 ) /*0x57528f*/
    v37 = -1; /*0x575291*/
  v40[1] = HIWORD(v4); /*0x57529b*/
  v8 = v3 - v5; /*0x57529f*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5752a1*/
  v10 = HIWORD(v4); /*0x5752aa*/
  v45 = 4; /*0x5752b3*/
  v11 = v4 - v8 / 2; /*0x5752bb*/
  v40[0] = v11; /*0x5752be*/
  v12 = *(_DWORD *)v40; /*0x5752c3*/
  do /*0x57551c*/
  {
    if ( v45 <= 0 ) /*0x5752cd*/
      break; /*0x5752cd*/
    v13 = v11 + (v10 << 9); /*0x5752dc*/
    if ( v13 < 0x40000 ) /*0x5752de*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x5752e7*/
      if ( v14 ) /*0x5752ec*/
        goto LABEL_36; /*0x5752ec*/
    }
    g_MissionQueueFrame.briefing[139] = v12; /*0x5752ee*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x5752f4*/
    if ( v14[17] != 100 ) /*0x5752fd*/
    {
      LOWORD(v34) = v11; /*0x575307*/
      v36 = 3; /*0x57530d*/
      HIWORD(v34) = v40[1] - 1; /*0x575315*/
      v15 = v34; /*0x57531a*/
      v41 = v34; /*0x57531e*/
      while ( 1 ) /*0x57532a*/
      {
        v16 = HIWORD(v41); /*0x57532a*/
        v17 = (__int16)v15 + (SHIWORD(v41) << 9); /*0x575337*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575347*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x575349*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x57534f*/
        }
        v19 = v18[9]; /*0x575354*/
        v44 = 0; /*0x575357*/
        v42 = ((__int16)v19 << 8) + 128; /*0x575382*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x575386*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x57539f*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5753a9*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x5753cc*/
        v42 = v21; /*0x5753e4*/
        v38 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5753ed*/
        LOWORD(v22) = Math::RoundToInt(((double)v38 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x57540b*/
        v43 = v22; /*0x575415*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x57541e*/
        if ( v23 ) /*0x575425*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575442*/
          v25 = Random::Range( /*0x575459*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575481*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v35) = v15; /*0x57548b*/
        HIWORD(v35) = v16 + 1; /*0x575490*/
        v15 = v35; /*0x575495*/
        v26 = v36 == 1; /*0x575499*/
        v41 = v35; /*0x57549a*/
        --v36; /*0x57549e*/
        if ( v26 ) /*0x5754a2*/
          break; /*0x5754a2*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575324*/
      }
      v2 = this; /*0x5754a8*/
    }
    for ( i = 0; i < 3; ++i ) /*0x5754ac*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable2((int)v40) ) /*0x5754b5*/
        break; /*0x5754bc*/
    }
    v11 = v37 + v40[0]; /*0x5754cd*/
    v10 = v40[1]; /*0x5754d2*/
    --v45; /*0x5754d8*/
    v40[0] = v11; /*0x5754dc*/
    v12 = *(_DWORD *)v40; /*0x5754e1*/
    v28 = v40[1] << 9; /*0x5754eb*/
    v29 = v11 + v28 < 0; /*0x5754ee*/
    v30 = v11 + v28; /*0x5754ee*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5754f0*/
    if ( !v29 && v30 < 0x40000 ) /*0x5754fd*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x5754ff*/
      if ( v31 ) /*0x575504*/
        goto LABEL_36; /*0x575504*/
    }
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v40; /*0x575506*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x57550c*/
LABEL_36:
    v32 = v31[17]; /*0x575511*/
    if ( v32 < 74 ) /*0x575517*/
      break; /*0x575517*/
  }
  while ( v32 <= 101 ); /*0x57551c*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575524*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575532*/
  return result; /*0x57552f*/
}



// ==== 0x00575540  CellClass::ApplyCliffMod  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyCliffMod(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  __int16 v10; // dx
  __int16 v11; // cx
  _DWORD *v12; // esi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+1Ch] [ebp-20h]
  __int16 v38; // [esp+1Eh] [ebp-1Eh]
  int v39; // [esp+20h] [ebp-1Ch]
  __int16 v40; // [esp+28h] [ebp-14h]
  int v42; // [esp+30h] [ebp-Ch] BYREF
  int v43; // [esp+34h] [ebp-8h]
  int v44; // [esp+38h] [ebp-4h]

  v2 = this; /*0x57554d*/
  v3 = (_DWORD *)*a2; /*0x57554f*/
  v4 = 0; /*0x575551*/
  a2 = (_DWORD *)*a2; /*0x575557*/
  v40 = 1; /*0x57555f*/
  v5 = 0; /*0x575567*/
  do /*0x575589*/
  {
    --HIWORD(a2); /*0x575569*/
    ++v4; /*0x575578*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57557e*/
  }
  while ( v6 >= 74 && v6 <= 101 ); /*0x575589*/
  a2 = v3; /*0x57558b*/
  do /*0x5755af*/
  {
    ++HIWORD(a2); /*0x57558f*/
    ++v5; /*0x57559e*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x5755a4*/
  }
  while ( v7 >= 74 && v7 <= 101 ); /*0x5755af*/
  if ( v5 < v4 ) /*0x5755b3*/
    v40 = -1; /*0x5755b5*/
  v8 = v4 - v5; /*0x5755c3*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5755c5*/
  LOWORD(a2) = (_WORD)v3; /*0x5755ce*/
  v10 = (__int16)v3; /*0x5755d2*/
  v34 = 4; /*0x5755d7*/
  v11 = HIWORD(v3) - v8 / 2; /*0x5755e1*/
  HIWORD(a2) = v11; /*0x5755e3*/
  v12 = a2; /*0x5755e8*/
  do /*0x57583e*/
  {
    if ( v34 <= 0 ) /*0x5755f2*/
      break; /*0x5755f2*/
    v13 = v10 + (v11 << 9); /*0x575601*/
    if ( v13 < 0x40000 ) /*0x575603*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x57560c*/
      if ( v14 ) /*0x575611*/
        goto LABEL_36; /*0x575611*/
    }
    g_MissionQueueFrame.briefing[139] = (int)v12; /*0x575613*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x575619*/
    if ( v14[17] != 101 ) /*0x575622*/
    {
      HIWORD(v35) = v11; /*0x575629*/
      LOWORD(v35) = (_WORD)v12 - 1; /*0x57562e*/
      v15 = v35; /*0x575633*/
      v38 = v11; /*0x575637*/
      v39 = 3; /*0x57563b*/
      while ( 1 ) /*0x57564b*/
      {
        v16 = v38; /*0x57564b*/
        v17 = (__int16)v15 + (v38 << 9); /*0x575659*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575669*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x57566b*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x575671*/
        }
        v19 = v18[9]; /*0x575676*/
        v44 = 0; /*0x575679*/
        v42 = ((__int16)v19 << 8) + 128; /*0x5756a4*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x5756a8*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x5756c1*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5756cb*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x5756ee*/
        v42 = v21; /*0x575706*/
        v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x57570f*/
        LOWORD(v22) = Math::RoundToInt(((double)v37 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x57572d*/
        v43 = v22; /*0x575737*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575740*/
        if ( v23 ) /*0x575747*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575764*/
          v25 = Random::Range( /*0x57577b*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x5757a3*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v36) = v15 + 1; /*0x5757ad*/
        HIWORD(v36) = v16; /*0x5757b2*/
        v15 = v36; /*0x5757b7*/
        v26 = v39 == 1; /*0x5757bb*/
        v38 = v16; /*0x5757bc*/
        --v39; /*0x5757c0*/
        if ( v26 ) /*0x5757c4*/
          break; /*0x5757c4*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575645*/
      }
      v2 = this; /*0x5757ca*/
    }
    for ( i = 0; i < 3; ++i ) /*0x5757ce*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable2((int)&a2) ) /*0x5757d7*/
        break; /*0x5757de*/
    }
    v11 = v40 + HIWORD(a2); /*0x5757ef*/
    v10 = (__int16)a2; /*0x5757f4*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5757fa*/
    --v34; /*0x575800*/
    HIWORD(a2) = v11; /*0x575804*/
    v28 = v11 << 9; /*0x57580f*/
    v29 = (__int16)a2 + v28 < 0; /*0x575812*/
    v30 = (__int16)a2 + v28; /*0x575812*/
    v12 = a2; /*0x575814*/
    if ( !v29 && v30 < 0x40000 ) /*0x57581f*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575821*/
      if ( v31 ) /*0x575826*/
        goto LABEL_36; /*0x575826*/
    }
    g_MissionQueueFrame.briefing[139] = (int)a2; /*0x575828*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x57582e*/
LABEL_36:
    v32 = v31[17]; /*0x575833*/
    if ( v32 < 74 ) /*0x575839*/
      break; /*0x575839*/
  }
  while ( v32 <= 101 ); /*0x57583e*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575846*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575854*/
  return result; /*0x575851*/
}



// ==== 0x00575870  CellClass::ApplyTerrainMod2  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTerrainMod2(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // cx
  int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-34h]
  int v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  __int16 v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v40[4]; // [esp+28h] [ebp-1Ch] BYREF
  int v41; // [esp+30h] [ebp-14h]
  int v42; // [esp+38h] [ebp-Ch] BYREF
  int v43; // [esp+3Ch] [ebp-8h]
  int v44; // [esp+40h] [ebp-4h]
  int v45; // [esp+48h] [ebp+4h]

  v2 = this; /*0x57587d*/
  v3 = 0; /*0x57587f*/
  *(_DWORD *)v40 = *a2; /*0x575885*/
  v4 = *(_DWORD *)v40; /*0x575889*/
  v37 = 1; /*0x57588b*/
  v5 = 0; /*0x575893*/
  do /*0x5758b9*/
  {
    --v40[0]; /*0x575895*/
    ++v3; /*0x5758a4*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x5758aa*/
  }
  while ( v6 >= 205 && v6 <= 232 ); /*0x5758b9*/
  *(_DWORD *)v40 = v4; /*0x5758bb*/
  do /*0x5758e3*/
  {
    ++v40[0]; /*0x5758bf*/
    ++v5; /*0x5758ce*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x5758d4*/
  }
  while ( v7 >= 205 && v7 <= 232 ); /*0x5758e3*/
  if ( v5 < v3 ) /*0x5758e7*/
    v37 = -1; /*0x5758e9*/
  v40[1] = HIWORD(v4); /*0x5758f3*/
  v8 = v3 - v5; /*0x5758f7*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5758f9*/
  v10 = HIWORD(v4); /*0x575902*/
  v45 = 4; /*0x57590b*/
  v11 = v4 - v8 / 2; /*0x575913*/
  v40[0] = v11; /*0x575916*/
  v12 = *(_DWORD *)v40; /*0x57591b*/
  do /*0x575b7b*/
  {
    if ( v45 <= 0 ) /*0x575925*/
      break; /*0x575925*/
    v13 = v11 + (v10 << 9); /*0x575934*/
    if ( v13 < 0x40000 ) /*0x575936*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x57593f*/
      if ( v14 ) /*0x575944*/
        goto LABEL_36; /*0x575944*/
    }
    g_MissionQueueFrame.briefing[139] = v12; /*0x575946*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x57594c*/
    if ( v14[17] != 231 ) /*0x575958*/
    {
      LOWORD(v34) = v11; /*0x575962*/
      v36 = 3; /*0x575968*/
      HIWORD(v34) = v40[1] - 1; /*0x575970*/
      v15 = v34; /*0x575975*/
      v41 = v34; /*0x575979*/
      while ( 1 ) /*0x575985*/
      {
        v16 = HIWORD(v41); /*0x575985*/
        v17 = (__int16)v15 + (SHIWORD(v41) << 9); /*0x575992*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x5759a2*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x5759a4*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x5759aa*/
        }
        v19 = v18[9]; /*0x5759af*/
        v44 = 0; /*0x5759b2*/
        v42 = ((__int16)v19 << 8) + 128; /*0x5759dd*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x5759e1*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x5759fa*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575a04*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x575a27*/
        v42 = v21; /*0x575a3f*/
        v38 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575a48*/
        LOWORD(v22) = Math::RoundToInt(((double)v38 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x575a66*/
        v43 = v22; /*0x575a70*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575a79*/
        if ( v23 ) /*0x575a80*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575a9d*/
          v25 = Random::Range( /*0x575ab4*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575adc*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v35) = v15; /*0x575ae6*/
        HIWORD(v35) = v16 + 1; /*0x575aeb*/
        v15 = v35; /*0x575af0*/
        v26 = v36 == 1; /*0x575af4*/
        v41 = v35; /*0x575af5*/
        --v36; /*0x575af9*/
        if ( v26 ) /*0x575afd*/
          break; /*0x575afd*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x57597f*/
      }
      v2 = this; /*0x575b03*/
    }
    for ( i = 0; i < 3; ++i ) /*0x575b07*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable((int)v40) ) /*0x575b10*/
        break; /*0x575b17*/
    }
    v11 = v37 + v40[0]; /*0x575b28*/
    v10 = v40[1]; /*0x575b2d*/
    --v45; /*0x575b33*/
    v40[0] = v11; /*0x575b37*/
    v12 = *(_DWORD *)v40; /*0x575b3c*/
    v28 = v40[1] << 9; /*0x575b46*/
    v29 = v11 + v28 < 0; /*0x575b49*/
    v30 = v11 + v28; /*0x575b49*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575b4b*/
    if ( !v29 && v30 < 0x40000 ) /*0x575b58*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575b5a*/
      if ( v31 ) /*0x575b5f*/
        goto LABEL_36; /*0x575b5f*/
    }
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v40; /*0x575b61*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x575b67*/
LABEL_36:
    v32 = v31[17]; /*0x575b6c*/
    if ( v32 < 205 ) /*0x575b74*/
      break; /*0x575b74*/
  }
  while ( v32 <= 232 ); /*0x575b7b*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575b83*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575b91*/
  return result; /*0x575b8e*/
}



// ==== 0x00575BA0  CellClass::ApplyTerrainMod  this=TOP  sig=csp ====
int __thiscall CellClass::ApplyTerrainMod(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  __int16 v10; // dx
  __int16 v11; // cx
  _DWORD *v12; // esi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+1Ch] [ebp-20h]
  __int16 v38; // [esp+1Eh] [ebp-1Eh]
  int v39; // [esp+20h] [ebp-1Ch]
  __int16 v40; // [esp+28h] [ebp-14h]
  int v42; // [esp+30h] [ebp-Ch] BYREF
  int v43; // [esp+34h] [ebp-8h]
  int v44; // [esp+38h] [ebp-4h]

  v2 = this; /*0x575bad*/
  v3 = (_DWORD *)*a2; /*0x575baf*/
  v4 = 0; /*0x575bb1*/
  a2 = (_DWORD *)*a2; /*0x575bb7*/
  v40 = 1; /*0x575bbf*/
  v5 = 0; /*0x575bc7*/
  do /*0x575bed*/
  {
    --HIWORD(a2); /*0x575bc9*/
    ++v4; /*0x575bd8*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x575bde*/
  }
  while ( v6 >= 205 && v6 <= 232 ); /*0x575bed*/
  a2 = v3; /*0x575bef*/
  do /*0x575c17*/
  {
    ++HIWORD(a2); /*0x575bf3*/
    ++v5; /*0x575c02*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x575c08*/
  }
  while ( v7 >= 205 && v7 <= 232 ); /*0x575c17*/
  if ( v5 < v4 ) /*0x575c1b*/
    v40 = -1; /*0x575c1d*/
  v8 = v4 - v5; /*0x575c2b*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575c2d*/
  LOWORD(a2) = (_WORD)v3; /*0x575c36*/
  v10 = (__int16)v3; /*0x575c3a*/
  v34 = 4; /*0x575c3f*/
  v11 = HIWORD(v3) - v8 / 2; /*0x575c49*/
  HIWORD(a2) = v11; /*0x575c4b*/
  v12 = a2; /*0x575c50*/
  do /*0x575ead*/
  {
    if ( v34 <= 0 ) /*0x575c5a*/
      break; /*0x575c5a*/
    v13 = v10 + (v11 << 9); /*0x575c69*/
    if ( v13 < 0x40000 ) /*0x575c6b*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x575c74*/
      if ( v14 ) /*0x575c79*/
        goto LABEL_36; /*0x575c79*/
    }
    g_MissionQueueFrame.briefing[139] = (int)v12; /*0x575c7b*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x575c81*/
    if ( v14[17] != 232 ) /*0x575c8d*/
    {
      HIWORD(v35) = v11; /*0x575c94*/
      LOWORD(v35) = (_WORD)v12 - 1; /*0x575c99*/
      v15 = v35; /*0x575c9e*/
      v38 = v11; /*0x575ca2*/
      v39 = 3; /*0x575ca6*/
      while ( 1 ) /*0x575cb6*/
      {
        v16 = v38; /*0x575cb6*/
        v17 = (__int16)v15 + (v38 << 9); /*0x575cc4*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575cd4*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x575cd6*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x575cdc*/
        }
        v19 = v18[9]; /*0x575ce1*/
        v44 = 0; /*0x575ce4*/
        v42 = ((__int16)v19 << 8) + 128; /*0x575d0f*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x575d13*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x575d2c*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575d36*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x575d59*/
        v42 = v21; /*0x575d71*/
        v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575d7a*/
        LOWORD(v22) = Math::RoundToInt(((double)v37 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x575d98*/
        v43 = v22; /*0x575da2*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575dab*/
        if ( v23 ) /*0x575db2*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575dcf*/
          v25 = Random::Range( /*0x575de6*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575e0e*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v36) = v15 + 1; /*0x575e18*/
        HIWORD(v36) = v16; /*0x575e1d*/
        v15 = v36; /*0x575e22*/
        v26 = v39 == 1; /*0x575e26*/
        v38 = v16; /*0x575e27*/
        --v39; /*0x575e2b*/
        if ( v26 ) /*0x575e2f*/
          break; /*0x575e2f*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575cb0*/
      }
      v2 = this; /*0x575e35*/
    }
    for ( i = 0; i < 3; ++i ) /*0x575e39*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable((int)&a2) ) /*0x575e42*/
        break; /*0x575e49*/
    }
    v11 = v40 + HIWORD(a2); /*0x575e5a*/
    v10 = (__int16)a2; /*0x575e5f*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575e65*/
    --v34; /*0x575e6b*/
    HIWORD(a2) = v11; /*0x575e6f*/
    v28 = v11 << 9; /*0x575e7a*/
    v29 = (__int16)a2 + v28 < 0; /*0x575e7d*/
    v30 = (__int16)a2 + v28; /*0x575e7d*/
    v12 = a2; /*0x575e7f*/
    if ( !v29 && v30 < 0x40000 ) /*0x575e8a*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575e8c*/
      if ( v31 ) /*0x575e91*/
        goto LABEL_36; /*0x575e91*/
    }
    g_MissionQueueFrame.briefing[139] = (int)a2; /*0x575e93*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x575e99*/
LABEL_36:
    v32 = v31[17]; /*0x575e9e*/
    if ( v32 < 205 ) /*0x575ea6*/
      break; /*0x575ea6*/
  }
  while ( v32 <= 232 ); /*0x575ead*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575eb5*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575ec3*/
  return result; /*0x575ec0*/
}



// ==== 0x00575EE0  UpdateTeamsInAreaMap  this=-  sig=csp ====
char __stdcall sub_575EE0(void *a1, int a2)
{
  unsigned __int16 v2; // bp
  char v3; // bl
  void *v4; // eax
  unsigned __int16 v5; // di
  unsigned int v6; // eax
  void *v7; // eax
  void **v8; // ecx
  unsigned int v9; // eax
  void *v10; // eax
  void **v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // esi
  void **v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  void **v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  void *v22; // eax
  void **v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // esi
  void **v28; // ecx
  void **v29; // ecx
  int v31; // [esp+14h] [ebp-18h] BYREF
  int v32; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-Ch] BYREF
  int v35; // [esp+24h] [ebp-8h] BYREF
  int v36; // [esp+28h] [ebp-4h] BYREF
  int v37; // [esp+30h] [ebp+4h]

  v2 = HIWORD(a2); /*0x575eea*/
  v3 = 0; /*0x575eef*/
  if ( HIWORD(a1) == HIWORD(a2) ) /*0x575ef6*/
  {
    v4 = a1; /*0x575ef8*/
    v5 = a2; /*0x575efc*/
    v3 = 1; /*0x575f03*/
    if ( (__int16)a1 > (__int16)a2 ) /*0x575f05*/
    {
      v4 = (void *)a2; /*0x575f09*/
      v2 = HIWORD(a1); /*0x575f11*/
      v5 = (unsigned __int16)a1; /*0x575f11*/
    }
  }
  else if ( SHIWORD(a1) <= SHIWORD(a2) ) /*0x575f18*/
  {
    v5 = a2; /*0x575f2f*/
    v4 = a1; /*0x575f33*/
  }
  else
  {
    v4 = (void *)a2; /*0x575f1e*/
    v5 = (unsigned __int16)a1; /*0x575f22*/
    a2 = (int)a1; /*0x575f24*/
    v2 = HIWORD(a1); /*0x575f28*/
  }
  a2 = (int)v4; /*0x575f37*/
  while ( a2 != __PAIR32__(v2, v5) ) /*0x575f43*/
  {
    v6 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x575f5b*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x575f71*/
    {
      dword_ABDC74 = a2; /*0x575f77*/
      v7 = &unk_ABDC50; /*0x575f7c*/
    }
    v8 = (void **)*((_DWORD *)v7 + 15); /*0x575f81*/
    if ( v8 ) /*0x575f86*/
      TeamClass::Update_0(v8, 31, 0, dword_ABD480, 0, 0); /*0x575f97*/
    if ( v3 ) /*0x575f9e*/
    {
      v9 = (__int16)(dword_89F698 + a2) + ((__int16)(HIWORD(a2) + HIWORD(dword_89F698)) << 9); /*0x575fcd*/
      if ( v9 >= 0x40000 || (v10 = *(void **)(dword_87F924 + 4 * v9)) == 0 ) /*0x575fe3*/
      {
        v10 = &unk_ABDC50; /*0x575fe9*/
        LOWORD(v37) = dword_89F698 + a2; /*0x575fba*/
        HIWORD(v37) = HIWORD(a2) + HIWORD(dword_89F698); /*0x575fc2*/
        dword_ABDC74 = v37; /*0x575fee*/
      }
      v11 = (void **)*((_DWORD *)v10 + 15); /*0x575ff4*/
      if ( v11 ) /*0x575ff9*/
        TeamClass::Update_0(v11, 31, 0, dword_ABD480, 0, 0); /*0x576009*/
      v12 = *CellStruct::Add(&a2, &v32, dword_89F688); /*0x576021*/
      v13 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x576032*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x576048*/
      {
        v15 = v14; /*0x57604a*/
      }
      else
      {
        dword_ABDC74 = v12; /*0x57604e*/
        v15 = &unk_ABDC50; /*0x576054*/
      }
      v16 = (void **)*((_DWORD *)v15 + 15); /*0x576059*/
      if ( v16 ) /*0x57605e*/
        TeamClass::Update_0(v16, 31, 0, dword_ABD480, 0, 0); /*0x57606e*/
      v17 = *CellStruct::Add((_WORD *)v15 + 18, &v33, dword_89F688); /*0x576085*/
      v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x576096*/
      if ( v18 >= 0x40000 || (v4 = *(void **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5760ac*/
      {
        dword_ABDC74 = v17; /*0x5760ae*/
        v4 = &unk_ABDC50; /*0x5760b4*/
      }
      v19 = (void **)*((_DWORD *)v4 + 15); /*0x5760b9*/
      if ( v19 ) /*0x5760be*/
        LOBYTE(v4) = TeamClass::Update_0(v19, 31, 0, dword_ABD480, 0, 0); /*0x5760ce*/
      LOWORD(a2) = a2 + 1; /*0x5760d3*/
    }
    else
    {
      v20 = *CellStruct::Add(&a2, &v34, &dword_89F690); /*0x5760f0*/
      v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x576101*/
      if ( v21 >= 0x40000 || (v22 = *(void **)(dword_87F924 + 4 * v21)) == 0 ) /*0x576117*/
      {
        dword_ABDC74 = v20; /*0x576119*/
        v22 = &unk_ABDC50; /*0x57611f*/
      }
      v23 = (void **)*((_DWORD *)v22 + 15); /*0x576124*/
      if ( v23 ) /*0x576129*/
        TeamClass::Update_0(v23, 31, 0, dword_ABD480, 0, 0); /*0x576139*/
      v24 = *CellStruct::Add(&a2, &v35, &dword_89F6A0); /*0x576151*/
      v25 = (__int16)v24 + (SHIWORD(v24) << 9); /*0x576162*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x576178*/
      {
        v27 = v26; /*0x57617a*/
      }
      else
      {
        dword_ABDC74 = v24; /*0x57617e*/
        v27 = &unk_ABDC50; /*0x576184*/
      }
      v28 = (void **)*((_DWORD *)v27 + 15); /*0x576189*/
      if ( v28 ) /*0x57618e*/
        TeamClass::Update_0(v28, 31, 0, dword_ABD480, 0, 0); /*0x57619e*/
      v31 = *CellStruct::Add((_WORD *)v27 + 18, &v36, &dword_89F6A0); /*0x5761c1*/
      v4 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v31); /*0x5761c5*/
      v29 = (void **)*((_DWORD *)v4 + 15); /*0x5761ca*/
      if ( v29 ) /*0x5761cf*/
        LOBYTE(v4) = TeamClass::Update_0(v29, 31, 0, dword_ABD480, 0, 0); /*0x5761e0*/
      ++HIWORD(a2); /*0x5761e5*/
    }
  }
  return (char)v4; /*0x5761ef*/
}



// ==== 0x00576200  CellClass::RecursiveCraterUpdate  this=CellClass  sig=csp ====
int __thiscall CellClass::RecursiveCraterUpdate(CellClass *this, __int16 *a2, int a3, int *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  __int16 v8; // di
  _WORD *v9; // esi
  __int16 v10; // di
  __int16 v11; // bx
  __int16 v12; // di
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  int *v16; // eax
  int result; // eax
  unsigned int v18; // eax
  int *v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // edi
  int *v27; // ebp
  signed int v28; // ecx
  signed int v29; // eax
  int v30; // edx
  int v31; // esi
  int v32; // ebp
  int v33; // ebp
  int v34; // ebx
  bool v35; // bl
  int v36; // edi
  char v37; // dl
  void *v38; // ebp
  int v39; // ecx
  unsigned int v40; // eax
  int *v41; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  int *v47; // eax
  int *v48; // esi
  int *v49; // [esp+4h] [ebp-48h]
  int v50; // [esp+4h] [ebp-48h]
  int *v51; // [esp+4h] [ebp-48h]
  int v52; // [esp+8h] [ebp-44h]
  int v53; // [esp+Ch] [ebp-40h]
  void *v54; // [esp+10h] [ebp-3Ch]
  int v55; // [esp+10h] [ebp-3Ch]
  int v56; // [esp+14h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-34h]
  int v58; // [esp+1Ch] [ebp-30h] BYREF
  int v59; // [esp+20h] [ebp-2Ch]
  CellClass *v60; // [esp+24h] [ebp-28h]
  _WORD *v61; // [esp+28h] [ebp-24h]
  int v62; // [esp+2Ch] [ebp-20h] BYREF
  int v63; // [esp+30h] [ebp-1Ch]
  int v64; // [esp+34h] [ebp-18h]
  int v65; // [esp+38h] [ebp-14h]
  int v66; // [esp+3Ch] [ebp-10h]
  int v67; // [esp+54h] [ebp+8h]

  v60 = this; /*0x576203*/
  v4 = *a2 + (a2[1] << 9); /*0x576215*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57622b*/
  {
    v6 = v5; /*0x57622d*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x576233*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x576238*/
  }
  v7 = a3 & 7; /*0x576249*/
  v58 = v6[9]; /*0x57624d*/
  v52 = 1; /*0x576251*/
  v8 = g_DDrawSurfaceManager.scenario[v7 + 82]; /*0x576259*/
  v9 = (_WORD *)(4 * v7 + 9041544); /*0x576261*/
  v61 = v9; /*0x57626b*/
  LOWORD(v54) = v58 + v8; /*0x576273*/
  HIWORD(v54) = HIWORD(v58) + v9[1]; /*0x57627d*/
  while ( 1 ) /*0x576285*/
  {
    v10 = *v9; /*0x576285*/
    v58 = v6[9]; /*0x576288*/
    v11 = v9[1] + HIWORD(v58); /*0x576291*/
    v12 = v58 + v10; /*0x576295*/
    v13 = v11 << 9; /*0x57629e*/
    v14 = v12 + v13 < 0; /*0x5762a1*/
    v15 = v12 + v13; /*0x5762a1*/
    LOWORD(v53) = v12; /*0x5762a3*/
    HIWORD(v53) = v11; /*0x5762a8*/
    if ( v14 || v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x5762c1*/
    {
      v6 = &g_MissionQueueFrame.briefing[130]; /*0x5762cb*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x5762d0*/
    }
    else
    {
      v6 = v16; /*0x5762c3*/
    }
    result = v6[14] - g_Cell_BuildabilityLUT + 1; /*0x5762e0*/
    if ( a3 != 2 ) /*0x5762e4*/
      break; /*0x5762e4*/
    if ( result == dword_ABC1E8 && *((_BYTE *)v6 + 282) == 4 /*0x576340*/
      || result == dword_AA0E38 && *((_BYTE *)v6 + 282) == 4
      || (result == g_TerrainSoundTable2
       || result == g_TerrainSoundTable2 + 3
       || result == g_TerrainSoundTable2 + 1
       || result == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v6 + 282) == 4 )
    {
      goto LABEL_33; /*0x576340*/
    }
LABEL_32:
    result = ++v52; /*0x57639d*/
    if ( v52 >= 30 ) /*0x5763a9*/
      goto LABEL_33; /*0x5763a9*/
  }
  if ( a3 != 4 /*0x57639b*/
    || (result != dword_ABC1D0 || *((_BYTE *)v6 + 282) != 2)
    && (result != dword_AA1540 || *((_BYTE *)v6 + 282) != 2)
    && (result != g_TerrainSoundConfig
     && result != g_TerrainSoundConfig + 3
     && result != g_TerrainSoundConfig + 1
     && result != g_TerrainSoundConfig + 2
     || *((_BYTE *)v6 + 282) != 2) )
  {
    goto LABEL_32; /*0x57639b*/
  }
LABEL_33:
  if ( v52 == 30 ) /*0x5763b4*/
    goto LABEL_85; /*0x5763b4*/
  v18 = *a2 + (a2[1] << 9); /*0x5763c8*/
  if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x5763de*/
  {
    v20 = v19; /*0x5763e0*/
    v49 = v19; /*0x5763e2*/
  }
  else
  {
    v49 = &g_MissionQueueFrame.briefing[130]; /*0x5763ea*/
    v20 = &g_MissionQueueFrame.briefing[130]; /*0x5763f2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5763f6*/
  }
  if ( a4 ) /*0x576401*/
  {
    v21 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x576415*/
    v22 = a2[1] << 8; /*0x57641f*/
    v62 = (*a2 << 8) + 128; /*0x57642d*/
    v63 = v22 + 128; /*0x576431*/
    v64 = v21; /*0x57643d*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v58); /*0x576449*/
    v23 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x576455*/
    v62 = (v12 << 8) + 128; /*0x576474*/
    v63 = (v11 << 8) + 128; /*0x576478*/
    v64 = v23; /*0x57648c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v56); /*0x576490*/
    v24 = v58; /*0x57649f*/
    if ( v58 >= v56 ) /*0x5764a1*/
      v24 = v56; /*0x5764a3*/
    v66 = v24 - 64; /*0x5764b2*/
    v25 = v59; /*0x5764b6*/
    if ( v59 >= v57 ) /*0x5764b8*/
      v25 = v57; /*0x5764ba*/
    v26 = v25 - 64; /*0x5764be*/
    v27 = a4; /*0x5764ca*/
    v28 = abs32(v58 - v56) + 128; /*0x5764d3*/
    v29 = abs32(v59 - v57) + 128; /*0x5764de*/
    if ( a4[2] <= 0 || a4[3] <= 0 ) /*0x5764f0*/
    {
      v30 = v24 - 64; /*0x576583*/
      v31 = v26; /*0x576585*/
    }
    else if ( v28 <= 0 || v29 <= 0 ) /*0x5764fc*/
    {
      v30 = *a4; /*0x576576*/
      v31 = a4[1]; /*0x576578*/
      v28 = a4[2]; /*0x57657b*/
      v29 = a4[3]; /*0x57657e*/
    }
    else
    {
      v30 = *a4; /*0x5764fe*/
      v31 = a4[1]; /*0x576501*/
      v64 = a4[2]; /*0x576507*/
      v65 = a4[3]; /*0x57650e*/
      if ( v30 > v66 ) /*0x576518*/
      {
        v32 = v30 - v66 + v64; /*0x576520*/
        v30 = v66; /*0x576522*/
        v64 = v32; /*0x576524*/
      }
      if ( v31 > v26 ) /*0x57652a*/
      {
        v33 = v31 - v26 + v65; /*0x576532*/
        v31 = v26; /*0x576534*/
        v65 = v33; /*0x576536*/
      }
      if ( v30 + v64 < v28 + v66 ) /*0x576544*/
        v64 = v28 - v30 + v66 + 1; /*0x576550*/
      v34 = v65; /*0x576554*/
      if ( v65 + v31 < v29 + v26 ) /*0x576560*/
        v34 = v29 - v31 + v26 + 1; /*0x576564*/
      v28 = v64; /*0x576568*/
      v27 = a4; /*0x57656c*/
      v29 = v34; /*0x576570*/
    }
    *v27 = v30; /*0x576587*/
    v27[1] = v31; /*0x57658a*/
    v20 = v49; /*0x57658d*/
    v27[2] = v28; /*0x576591*/
    v27[3] = v29; /*0x576594*/
  }
  v35 = 0; /*0x57659a*/
  result = v52; /*0x5765a6*/
  LOWORD(v36) = -1; /*0x5765aa*/
  v37 = 0; /*0x5765ae*/
  v56 = -1; /*0x5765b0*/
  v58 = 0; /*0x5765b6*/
  if ( v52 <= 0 ) /*0x5765be*/
  {
LABEL_85:
    LOBYTE(result) = 0; /*0x576759*/
  }
  else
  {
    v38 = v54; /*0x5765c4*/
    while ( 1 ) /*0x5765c8*/
    {
      v39 = v20[80]; /*0x5765c8*/
      if ( (v39 & 0x80) != 0 && v35 ) /*0x5765d9*/
      {
        v36 = v20[9]; /*0x5765db*/
        v56 = v36; /*0x5765de*/
      }
      if ( (v39 & 0x80) == 0 && !v35 && ((_WORD)v36 != 0xFFFF || HIWORD(v56) != 0xFFFF) ) /*0x5765fb*/
        break; /*0x5765fb*/
      v35 = (v39 & 0x80) == 0; /*0x576608*/
      if ( (v39 & 0x80) == 0 && !v37 ) /*0x57660f*/
      {
        UpdateTeamsInAreaMap(v38, v53); /*0x576620*/
        v37 = 1; /*0x576625*/
      }
      v50 = v20[9]; /*0x576630*/
      LOWORD(v55) = *v61 + v50; /*0x576643*/
      HIWORD(v55) = HIWORD(v50) + v61[1]; /*0x57664b*/
      v40 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x576656*/
      if ( v40 < 0x40000 && (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) != 0 ) /*0x57666c*/
      {
        v51 = v41; /*0x57666e*/
      }
      else
      {
        v51 = &g_MissionQueueFrame.briefing[130]; /*0x576678*/
        g_MissionQueueFrame.briefing[139] = v55; /*0x576680*/
      }
      result = ++v58; /*0x57668d*/
      if ( v58 >= v52 ) /*0x576694*/
        goto LABEL_85; /*0x576694*/
      v20 = v51; /*0x57669a*/
    }
    v61 = (_WORD *)v20[9]; /*0x5766aa*/
    v43 = ((_BYTE)a3 - 4) & 7; /*0x5766b1*/
    v44 = 4 * v43 + 9041544; /*0x5766b4*/
    LOWORD(v43) = (_WORD)v61 + LOWORD(g_DDrawSurfaceManager.scenario[v43 + 82]); /*0x5766cc*/
    v45 = (__int16)v43; /*0x5766cf*/
    HIWORD(v67) = HIWORD(v61) + *(_WORD *)(v44 + 2); /*0x5766d2*/
    LOWORD(v67) = v43; /*0x5766d7*/
    v46 = (__int16)v43 + (SHIWORD(v67) << 9); /*0x5766e2*/
    if ( v46 < 0x40000 && (v47 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v46)) != 0 ) /*0x5766f8*/
    {
      v48 = v47; /*0x5766fa*/
    }
    else
    {
      v45 = v67; /*0x5766fe*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x576702*/
      g_MissionQueueFrame.briefing[139] = v67; /*0x576707*/
    }
    if ( a3 == 2 ) /*0x576712*/
      UpdateCellClassNeighborTerrain((int)v48, v45, 0, 0); /*0x576716*/
    else
      UpdateCellClassNeighborTerrain((int)v48, v45, 6u, 0); /*0x57671c*/
    *((_BYTE *)v48 + 286) = 0; /*0x576721*/
    v48[17] = -1; /*0x576728*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v48 + 9)); /*0x576734*/
    result = CellClass::RecursiveCraterUpdate(v60, a2, a3, a4); /*0x576748*/
    LOBYTE(result) = 1; /*0x576750*/
  }
  return result; /*0x576753*/
}



// ==== 0x00576770  Terrain::CreateCrater  this=Terrain  sig=csp ====
char __thiscall Terrain::CreateCrater(Terrain *this, int a2)
{
  _WORD *v2; // edi
  char v3; // si
  int i; // ebx
  int v5; // eax
  __int16 v6; // dx
  unsigned int v7; // eax
  int *v8; // eax
  int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // dx
  int v14; // esi
  bool v15; // sf
  int v16; // esi
  int *v17; // esi
  int v18; // eax
  __int16 v19; // si
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // esi
  unsigned int v24; // eax
  int *v25; // eax
  int *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  __int16 v33; // [esp+16h] [ebp-1Eh]
  int v34; // [esp+18h] [ebp-1Ch]
  int *v35; // [esp+1Ch] [ebp-18h]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]
  int v38; // [esp+24h] [ebp-10h] BYREF
  int v39; // [esp+28h] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-8h]
  int v41; // [esp+30h] [ebp-4h]

  v2 = (_WORD *)a2; /*0x576781*/
  v3 = 0; /*0x576785*/
  for ( i = 0; i < 8; ++i ) /*0x576787*/
  {
    v5 = v3 & 7; /*0x57678b*/
    v6 = g_DDrawSurfaceManager.scenario[v5 + 82]; /*0x57678e*/
    LOWORD(v5) = v2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x5767a4*/
    LOWORD(a2) = *v2 + v6; /*0x5767a8*/
    HIWORD(a2) = v5; /*0x5767b0*/
    v7 = (__int16)a2 + ((__int16)v5 << 9); /*0x5767bb*/
    if ( v7 < 0x40000 && (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x5767cb*/
    {
      v9 = v8; /*0x5767cd*/
    }
    else
    {
      v9 = &g_MissionQueueFrame.briefing[130]; /*0x5767d5*/
      g_MissionQueueFrame.briefing[139] = a2; /*0x5767da*/
    }
    v35 = v9; /*0x5767e5*/
    if ( (v9[80] & 0x500) != 0 ) /*0x5767ec*/
      break; /*0x5767ec*/
    v3 = (v3 + 1) & 7; /*0x5767ef*/
  }
  v10 = v9[80]; /*0x5767f8*/
  if ( (v10 & 0x100) == 0 && (v10 & 0x400) == 0 ) /*0x57680b*/
    return v10; /*0x57680b*/
  if ( (v9[80] & 0x100) != 0 )
  {
    if ( (v10 & 0x80u) == 0 ) /*0x576817*/
      v11 = *(_DWORD *)(v9[11] + 36); /*0x576824*/
    else
      v11 = v9[9]; /*0x576819*/
  }
  else
  {
    v12 = v9[9]; /*0x576831*/
    v33 = HIWORD(v12); /*0x576838*/
    v34 = 0; /*0x57683f*/
    v37 = (v10 & 0x800) != 0 ? 4 : 2;
    while ( 1 ) /*0x57685c*/
    {
      v13 = v12 + LOWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x57685c*/
      LOWORD(a2) = v13; /*0x57685f*/
      HIWORD(a2) = v33 + HIWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x576873*/
      LOWORD(v12) = v13; /*0x576878*/
      v14 = SHIWORD(a2) << 9; /*0x57687c*/
      v15 = v13 + v14 < 0; /*0x57687f*/
      v16 = v13 + v14; /*0x57687f*/
      v33 = HIWORD(a2); /*0x576881*/
      if ( v15 || v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x57689a*/
      {
        g_MissionQueueFrame.briefing[139] = a2; /*0x57689c*/
        v17 = &g_MissionQueueFrame.briefing[130]; /*0x5768a2*/
      }
      if ( (v17[80] & 0x400) == 0 ) /*0x5768b0*/
        break; /*0x5768b0*/
      LOBYTE(v10) = ++v34; /*0x5768b6*/
      if ( v34 >= 4 ) /*0x5768be*/
        return v10; /*0x5768be*/
    }
    v18 = ((_BYTE)v37 - 4) & 7; /*0x5768d4*/
    v19 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5768f9*/
    LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]) /*0x5768fc*/
               + v13
               + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]);
    HIWORD(a2) = v19 + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x576908*/
    v11 = a2; /*0x57690d*/
    v9 = v35; /*0x576911*/
  }
  v20 = v9[80]; /*0x576915*/
  v21 = v11; /*0x576933*/
  a2 = v11; /*0x57693a*/
  v38 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2118]; /*0x576940*/
  v39 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]; /*0x57694b*/
  v22 = (v20 & 0x800) != 0 ? 6 : 0;
  v40 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]; /*0x576952*/
  v41 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2130]; /*0x576956*/
  while ( 1 ) /*0x57695a*/
  {
    LOBYTE(v10) = BYTE2(a2); /*0x57695a*/
    v23 = SHIWORD(a2) + (__int16)v21; /*0x576962*/
    if ( v23 <= *(int *)&stru_87F5F0.__pad_58[660] /*0x576990*/
      || (__int16)v21 - SHIWORD(a2) >= *(int *)&stru_87F5F0.__pad_58[660]
      || SHIWORD(a2) - (__int16)v21 >= *(int *)&stru_87F5F0.__pad_58[660]
      || v23 > *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664] )
    {
      return v10; /*0x576990*/
    }
    v24 = (__int16)v21 + (SHIWORD(a2) << 9); /*0x57699d*/
    if ( !*((_DWORD *)this->Terrain_field_0x13C + v24) ) /*0x5769a9*/
      goto LABEL_49; /*0x5769a9*/
    if ( v24 < 0x40000 && (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) != 0 ) /*0x5769c5*/
    {
      v26 = v25; /*0x5769c7*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = v21; /*0x5769cb*/
      v26 = &g_MissionQueueFrame.briefing[130]; /*0x5769d1*/
    }
    v27 = v26[14] - g_Cell_BuildabilityLUT + 1; /*0x5769e7*/
    if ( (v27 == dword_ABC2B4 || v27 == dword_AA1130) && *((_BYTE *)v26 + 282) == 8 ) /*0x5769fb*/
      break; /*0x5769fb*/
    if ( (v27 == g_TerrainSoundTable2 /*0x576a27*/
       || v27 == g_TerrainSoundTable2 + 3
       || v27 == g_TerrainSoundTable2 + 1
       || v27 == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v26 + 282) == 5 )
    {
      break; /*0x576a27*/
    }
    if ( (v27 == dword_AA1548 || v27 == dword_AA0740) && *((_BYTE *)v26 + 282) == 12 ) /*0x576a44*/
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38); /*0x576b26*/
      goto LABEL_51; /*0x576b26*/
    }
    if ( (v27 == g_TerrainSoundConfig /*0x576a6e*/
       || v27 == g_TerrainSoundConfig + 3
       || v27 == g_TerrainSoundConfig + 2
       || v27 == g_TerrainSoundConfig + 1)
      && *((_BYTE *)v26 + 282) == 7 )
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38); /*0x576b38*/
      if ( (_BYTE)v10 ) /*0x576b3f*/
      {
        v10 = v38; /*0x576b41*/
        v29 = v39; /*0x576b4b*/
        v30 = v41; /*0x576b4f*/
        v31 = v40; /*0x576b55*/
        if ( v38 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x576b71*/
          || v39 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
          || v40 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
          || v41 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
        {
          goto LABEL_64; /*0x576b71*/
        }
      }
      return v10; /*0x576b71*/
    }
LABEL_49:
    v28 = v22 & 7; /*0x576a74*/
    LOWORD(v36) = v21 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a8f*/
    HIWORD(v36) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a99*/
    v21 = v36; /*0x576a9e*/
    a2 = v36; /*0x576aa2*/
  }
  LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 2, &v38); /*0x576ab7*/
LABEL_51:
  if ( (_BYTE)v10 ) /*0x576abe*/
  {
    v10 = v38; /*0x576ac4*/
    v29 = v39; /*0x576ace*/
    v30 = v41; /*0x576ad2*/
    v31 = v40; /*0x576ad8*/
    if ( v38 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x576afc*/
      || v39 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
      || v40 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
      || v41 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
    {
LABEL_64:
      LOBYTE(v10) = Cell::CreateCrater(v10, v29, v31, v30, 0); /*0x576b73*/
    }
  }
  return v10; /*0x5768c0*/
}



// ==== 0x00576BA0  CellClass::PropagateTerrainVariant5  this=CellClass  sig=csp ====
char __thiscall CellClass::PropagateTerrainVariant5(CellClass *this, __int16 *a2)
{
  __int16 *v2; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int v7; // ecx
  __int16 *v8; // edx
  __int16 *v9; // edi
  int v10; // eax
  int v11; // esi
  bool v12; // cc
  int *v13; // eax
  unsigned int v14; // eax
  int *v15; // eax
  int *v16; // ecx
  unsigned int v17; // eax
  int *v18; // eax
  int *v19; // edi
  unsigned __int8 v20; // al
  unsigned int v21; // eax
  CellClass *v22; // eax
  unsigned int v23; // eax
  CellClass *v24; // eax
  CellClass *v25; // ecx
  unsigned int v26; // eax
  CellClass *v27; // eax
  CellClass *v28; // ecx
  unsigned int v29; // eax
  int *v30; // eax
  __int16 v31; // si
  int v32; // ecx
  bool v33; // sf
  int v34; // ecx
  CellClass *v35; // ecx
  unsigned int v36; // eax
  CellClass *v37; // eax
  CellClass *v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  CellClass *v42; // eax
  CellClass *v43; // ecx
  int ... [26848 chars total]



// ==== 0x00577920  MapClass::RemoveTriggerRef  this=MapClass  sig=csp ====
int __thiscall MapClass::RemoveTriggerRef(MapClass *this, int a2, int a3)
{
  int v3; // esi
  int i; // ebp
  int MapClass_field_0x1160; // ecx
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edi
  int v13; // eax
  MapClass *MapClass_field_0x116C; // ecx
  MapClass *v15; // ecx
  int result; // eax

  v3 = a2; /*0x577922*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 44 ) /*0x577932*/
  {
    for ( i = 0; i < (int)this->MapClass_field_0x116C; ++i ) /*0x577943*/
    {
      MapClass_field_0x1160 = this->MapClass_field_0x1160; /*0x57794a*/
      v7 = *(__int16 *)(MapClass_field_0x1160 + 4 * i + 2); /*0x577950*/
      v8 = *(__int16 *)(MapClass_field_0x1160 + 4 * i); /*0x577955*/
      v9 = (int *)(MapClass_field_0x1160 + 4 * i); /*0x577959*/
      v10 = v8 + (v7 << 9); /*0x57795f*/
      if ( v10 < 0x40000 && (v11 = (ObjectClass *)*((_DWORD *)this->MapClass_field_0x13C + v10)) != 0 ) /*0x577975*/
      {
        v12 = v11; /*0x577977*/
      }
      else
      {
        v12 = (ObjectClass *)&g_MissionQueueFrame.briefing[130]; /*0x57797d*/
        g_MissionQueueFrame.briefing[139] = *v9; /*0x577982*/
      }
      if ( v12 && v12->ambientSoundController[0] == v3 ) /*0x57798e*/
      {
        ObjectClass::SetTriggerTarget(v12, 0); /*0x577994*/
        v13 = ((int (__thiscall *)(ObjectClass **, int *))this->MapClass_field_0x115C->?)( /*0x5779ab*/
                &this->MapClass_field_0x115C,
                &v12->occupant);
        if ( v13 != -1 ) /*0x5779b1*/
        {
          MapClass_field_0x116C = this->MapClass_field_0x116C; /*0x5779b3*/
          if ( v13 < (int)MapClass_field_0x116C ) /*0x5779b8*/
          {
            v15 = (MapClass *)((char *)MapClass_field_0x116C - 1); /*0x5779ba*/
            for ( this->MapClass_field_0x116C = v15; /*0x5779c0*/
                  v13 < (int)this->MapClass_field_0x116C;
                  *(_DWORD *)(this->MapClass_field_0x1160 + 4 * v13 - 4) = *(_DWORD *)(this->MapClass_field_0x1160
                                                                                     + 4 * v13) )
            {
              ++v13; /*0x5779c5*/
            }
          }
        }
        v3 = a2; /*0x5779d4*/
        --i; /*0x5779d8*/
      }
    }
    MapClass::RemoveCellReference((MapClass *)&g_MissionQueueFrame.briefing[130], v3); /*0x5779ef*/
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    a2 = v3; /*0x577a11*/
    result = (*(int (__thiscall **)(int *, int *))(FootClass_Array.?[4] + 16))(&FootClass_Array.?[4], &a2); /*0x577a15*/
    if ( result != -1 && result < FootClass_Array.?[0] ) /*0x577a25*/
    {
      --FootClass_Array.?[0]; /*0x577a2a*/
      for ( ; /*0x577a30*/
            result < FootClass_Array.?[0];
            *(_DWORD *)(FootClass_Array.?[5] + 4 * result - 4) = *(_DWORD *)(FootClass_Array.?[5] + 4 * result) )
      {
        ++result; /*0x577a38*/
      }
    }
  }
  return result; /*0x577a4a*/
}



// ==== 0x00577AB0  ShroudClass::Reset  this=ShroudClass  sig=csp ====
int __thiscall ShroudClass::Reset(ShroudClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD *i; // eax
  unsigned int v6; // edx

  result = a2; /*0x577ab0*/
  if ( a2 ) /*0x577abc*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577aca*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577ad6*/
  {
    if ( a2 ) /*0x577ada*/
      return result; /*0x577ada*/
    goto LABEL_7; /*0x577ada*/
  }
  if ( !a2 ) /*0x577ae4*/
LABEL_7:
    Debug::Log(); /*0x577ae6*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577af3*/
  v4 = *((_DWORD *)this + 61); /*0x577aff*/
  *((_DWORD *)this + 67) = 1; /*0x577b05*/
  *((_DWORD *)this + 68) = v4; /*0x577b0f*/
  *((_DWORD *)this + 69) = v4 - 1; /*0x577b18*/
  *((_DWORD *)this + 70) = (v4 << 11) + *((_DWORD *)this + 79) + 4; /*0x577b2d*/
  for ( i = (_DWORD *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x577b3a*/
        i;
        i = (_DWORD *)LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    v6 = i[80] & 0xFFFFFFFC; /*0x577b4b*/
    i[75] &= 0xFFFFFFE7; /*0x577b4e*/
    i[76] = 1; /*0x577b56*/
    i[77] = 0; /*0x577b60*/
    i[80] = v6; /*0x577b66*/
  }
  Radar::UpdateReveal(0, 0); /*0x577b7c*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577b8b*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577b91*/
  return (*(int (__thiscall **)(ShroudClass *, int))(*(_DWORD *)this->__pad_0 + 56))(this, 2); /*0x577b9f*/
}



// ==== 0x00577BB0  TeamClass::DisbandTeam  this=TeamClass  sig=csp ====
int __thiscall TeamClass::DisbandTeam(TeamClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int i; // eax
  unsigned int v6; // edx

  result = a2; /*0x577bb0*/
  if ( a2 ) /*0x577bb9*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577bc7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577bd4*/
  {
    if ( a2 ) /*0x577bd8*/
      return result; /*0x577bd8*/
    goto LABEL_7; /*0x577bd8*/
  }
  if ( !a2 ) /*0x577be2*/
LABEL_7:
    Debug::Log(); /*0x577be4*/
  v4 = this->q03D; /*0x577bf1*/
  *((_DWORD *)this + 67) = 1; /*0x577bf7*/
  this->unknown44 = v4; /*0x577c01*/
  this->q045 = v4 - 1; /*0x577c0a*/
  this->q046 = (v4 << 11) + this->q04F + 4; /*0x577c1f*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577c2c*/
  {
    v6 = *(_DWORD *)(i + 320) & 0xFFFFFFFC; /*0x577c3d*/
    *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577c40*/
    *(_DWORD *)(i + 320) = v6; /*0x577c48*/
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x577c60*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577c6f*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577c76*/
  return (*((int (__thiscall **)(TeamClass *, int))this->AbstractClass + 14))(this, 2); /*0x577c84*/
}



// ==== 0x00577C90  TActionClass::executeRepairAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeRepairAction(TActionClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int i; // esi
  int v6; // eax

  result = a2; /*0x577c90*/
  if ( a2 ) /*0x577c99*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577ca7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577cb4*/
  {
    if ( a2 ) /*0x577cb8*/
      return result; /*0x577cb8*/
    goto LABEL_7; /*0x577cb8*/
  }
  if ( !a2 ) /*0x577cc2*/
LABEL_7:
    Debug::Log(); /*0x577cc4*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577cd1*/
  v4 = this->q03D; /*0x577ce0*/
  *((_DWORD *)this + 67) = 1; /*0x577ce6*/
  this->TActionClass_field_44 = v4; /*0x577cf0*/
  this->q045 = v4 - 1; /*0x577cf9*/
  this->q046 = (v4 << 11) + this->q04F + 4; /*0x577d0e*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577d1d*/
  {
    DisplayClass::AdvanceFrameCounter((DisplayClass *)i); /*0x577d21*/
    if ( *(int *)(i + 304) >= 0 ) /*0x577d2e*/
    {
      v6 = *(_DWORD *)(i + 320); /*0x577d36*/
      LOBYTE(v6) = v6 & 0xFC; /*0x577d3f*/
      *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577d41*/
      *(_DWORD *)(i + 320) = v6; /*0x577d47*/
    }
  }
  Radar::UpdateReveal(0, 0); /*0x577d63*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577d72*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577d79*/
  return (*((int (__thiscall **)(TActionClass *, int))this->AbstractClass + 14))(this, 2); /*0x577d88*/
}



// ==== 0x00577D90  LayerClass::Reveal  this=LayerClass  sig=csp ====
void *__thiscall LayerClass::Reveal(LayerClass *this, int a2)
{
  void *result; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  char v8; // [esp+10h] [ebp+4h]

  result = (void *)a2; /*0x577d90*/
  if ( a2 ) /*0x577da2*/
    *(_BYTE *)(*(&dword_A8022C->ptr_0 + *(_DWORD *)(a2 + 48)) + 577) = 1; /*0x577db0*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return result; /*0x577dc0*/
  }
  Debug::Log(); /*0x577dd1*/
LABEL_8:
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x577df4*/
    || !dword_A8B23C
    || (v8 = 1, (*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = dword_A83D4C; /*0x577e04*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    dword_A83D4C->__pad_140[256] = 1; /*0x577e29*/
    dword_87F8F8 = dword_87F8DC; /*0x577e3a*/
    dword_87F8F4 = 1; /*0x577e42*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577e4b*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577e60*/
    if ( v4 ) /*0x577e67*/
    {
      while ( 1 ) /*0x577e6e*/
      {
        if ( !v8 ) /*0x577e74*/
          goto LABEL_23; /*0x577e74*/
        v5 = *(__int16 *)(v4 + 36); /*0x577e76*/
        v6 = *(__int16 *)(v4 + 38); /*0x577e7a*/
        if ( v5 != 7 ) /*0x577e81*/
          break; /*0x577e81*/
        if ( v6 != *((_DWORD *)this + 61) + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
LABEL_24:
        v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == *((_DWORD *)this + 61) + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
LABEL_21:
      v7 = *((_DWORD *)this + 62); /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == *((_DWORD *)this + 61) + v7 - 15 ) /*0x577ebd*/
        goto LABEL_24; /*0x577ebd*/
LABEL_23:
      *(_DWORD *)(v4 + 304) = 0; /*0x577ebf*/
      *(_DWORD *)(v4 + 308) = 0; /*0x577ec5*/
      *(_DWORD *)(v4 + 300) |= 0x18u; /*0x577ed4*/
      *(_DWORD *)(v4 + 320) |= 3u; /*0x577ee3*/
      goto LABEL_24; /*0x577ee3*/
    }
LABEL_25:
    Radar::UpdateReveal(0, 0); /*0x577efc*/
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x577f0d*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x577f19*/
  }
  return result; /*0x577f1e*/
}



// ==== 0x00577F30  MapClass::ClearShroud  this=MapClass  sig=csp ====
void *__thiscall MapClass::ClearShroud(MapClass *this, int a2)
{
  void *result; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx

  result = (void *)a2; /*0x577f30*/
  if ( a2 ) /*0x577f3a*/
    *(_BYTE *)(*(&dword_A8022C->ptr_0 + *(_DWORD *)(a2 + 48)) + 577) = 1; /*0x577f48*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x577f55*/
  {
    if ( a2 ) /*0x577f63*/
      goto LABEL_8; /*0x577f63*/
  }
  else if ( a2 ) /*0x577f59*/
  {
    return result; /*0x577f59*/
  }
  Debug::Log(); /*0x577f6a*/
LABEL_8:
  v4 = (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x577f94*/
    && dword_A8B23C
    && !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C);
  result = dword_A83D4C; /*0x577f9a*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577f9f*/
  {
    dword_A83D4C->__pad_140[256] = 1; /*0x577fad*/
    dword_87F8F8 = dword_87F8DC; /*0x577fbf*/
    dword_87F8F4 = 1; /*0x577fc7*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577fd4*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577fe3*/
    v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577fe8*/
    if ( v5 ) /*0x577fef*/
    {
      while ( 1 ) /*0x577ff3*/
      {
        v6 = *(__int16 *)(v5 + 36); /*0x577ff3*/
        v7 = (__int16 *)(v5 + 36); /*0x577ff7*/
        v8 = *(__int16 *)(v5 + 38); /*0x577ffa*/
        if ( !v4 ) /*0x578000*/
          goto LABEL_24; /*0x578000*/
        if ( v6 != 7 ) /*0x578005*/
          break; /*0x578005*/
        if ( v8 != this->MapClass_field_0xF4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
LABEL_25:
        v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x578054*/
        if ( !v5 ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == this->MapClass_field_0xF4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
LABEL_22:
      v9 = *(_DWORD *)this->__pad_F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == this->MapClass_field_0xF4 + v9 - 15 ) /*0x578041*/
        goto LABEL_25; /*0x578041*/
LABEL_24:
      DisplayClass::RevealFogCell((DisplayClass *)&dword_87F7E8, v7, (int)dword_A83D4C); /*0x578043*/
      goto LABEL_25; /*0x57804f*/
    }
LABEL_26:
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x578064*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x578075*/
  }
  return result; /*0x57807a*/
}



// ==== 0x00578080  Cell::GetGroundHeight  this=Cell  sig=csp ====
__int64 __stdcall Cell::GetGroundHeight(_DWORD *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int *v4; // ecx
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp+4h]

  v1 = a1[1]; /*0x57808a*/
  v6[0] = *a1; /*0x57808d*/
  v6[1] = v1; /*0x578091*/
  v2 = a1[1] / 256; /*0x5780ac*/
  v3 = v6[0] / 256 + (v2 << 9); /*0x5780b7*/
  if ( v3 < 0 /*0x5780ce*/
    || v3 >= *(int *)&stru_87F5F0.__pad_58[736]
    || (v4 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v3)) == 0 )
  {
    LOWORD(v7) = v6[0] / 256; /*0x5780d0*/
    HIWORD(v7) = v2; /*0x5780d5*/
    v4 = &g_MissionQueueFrame.briefing[130]; /*0x5780de*/
    g_MissionQueueFrame.briefing[139] = v7; /*0x5780e3*/
  }
  return Isometric::InitTables((int)v4, v6); /*0x5780f2*/
}



// ==== 0x00578100  CellSystem::UpdateVisibility  this=CellSystem  sig=csp ====
int __thiscall CellSystem::UpdateVisibility(CellSystem *this)
{
  int v2; // eax
  int i; // esi
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  int result; // eax
  _BYTE *j; // esi
  _DWORD *v9; // eax
  char AdjacentPassableMask; // al
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h] BYREF
  _BYTE v13[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 61); /*0x57810d*/
  *((_DWORD *)this + 67) = 1; /*0x578113*/
  *((_DWORD *)this + 68) = v2; /*0x578119*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x578122*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x578137*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x578146*/
  {
    if ( (*(_BYTE *)(i + 320) & 0x20) != 0 ) /*0x57814f*/
    {
      v4 = *(_DWORD *)(i + 300); /*0x578151*/
      LOBYTE(v4) = v4 & 0xE7; /*0x57815d*/
      v5 = *(_DWORD *)(i + 320) & 0xFFFFFFDC; /*0x57815f*/
      *(_DWORD *)(i + 300) = v4; /*0x578162*/
      *(_DWORD *)(i + 320) = v5; /*0x578168*/
      *(_BYTE *)(i + 312) = 1; /*0x57816e*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, i); /*0x57817b*/
      if ( *(_BYTE *)(i + 288) == 0xFE ) /*0x578187*/
        CellClass::SpiralFindClosest(i, (int)dword_A83D4C, 1); /*0x578197*/
    }
  }
  v6 = *((_DWORD *)this + 61); /*0x5781a9*/
  *((_DWORD *)this + 67) = 1; /*0x5781af*/
  *((_DWORD *)this + 68) = v6; /*0x5781b5*/
  *((_DWORD *)this + 69) = v6 - 1; /*0x5781be*/
  *((_DWORD *)this + 70) = (v6 << 11) + *((_DWORD *)this + 79) + 4; /*0x5781d3*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5781d9*/
  for ( j = (_BYTE *)result; result; j = (_BYTE *)result ) /*0x5781e2*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)j + 72))(j, v13); /*0x5781f1*/
    LOWORD(v11) = *v9 / 256; /*0x578206*/
    HIWORD(v11) = v9[1] / 256; /*0x578220*/
    v12 = v11; /*0x57822d*/
    AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&v12, 0); /*0x578232*/
    if ( AdjacentPassableMask != j[288] ) /*0x57823d*/
    {
      j[288] = AdjacentPassableMask; /*0x57823f*/
      j[312] = 1; /*0x578245*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)j); /*0x578252*/
      if ( j[288] == 0xFE ) /*0x57825e*/
        CellClass::SpiralFindClosest((int)j, (int)dword_A83D4C, 1); /*0x57826e*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x578275*/
  }
  return result; /*0x578284*/
}



// ==== 0x00578290  LayerClass::CellIteratorNext  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CellIteratorNext(LayerClass *this)
{
  int v1; // eax
  int *v2; // ebp
  int v3; // edx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int v10; // eax

  v1 = *((_DWORD *)this + 69); /*0x578290*/
  v2 = (int *)*((_DWORD *)this + 70); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *((_DWORD *)this + 68) - 1; /*0x5782af*/
    ++*((_DWORD *)this + 67); /*0x5782b1*/
    *((_DWORD *)this + 69) = v1 - 1; /*0x5782b7*/
    *((_DWORD *)this + 68) = v3; /*0x5782c3*/
    *((_DWORD *)this + 70) = v2 - 511; /*0x5782c9*/
    return *v2; /*0x5782cf*/
  }
  else
  {
    v5 = *((_DWORD *)this + 68); /*0x5782d5*/
    v6 = *((_DWORD *)this + 67); /*0x5782db*/
    v7 = *((_DWORD *)this + 61); /*0x5782e1*/
    *((_DWORD *)this + 67) = v5; /*0x5782e8*/
    *((_DWORD *)this + 68) = v6; /*0x5782f2*/
    if ( (((_BYTE)v5 - (_BYTE)v7 + (_BYTE)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      *((_DWORD *)this + 68) = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      *((_DWORD *)this + 67) = v5 + 1; /*0x57830f*/
    }
    v9 = *((_DWORD *)this + 67); /*0x57831b*/
    v10 = *((_DWORD *)this + 68) << 9; /*0x578321*/
    *((_DWORD *)this + 69) = v8; /*0x578324*/
    *((_DWORD *)this + 70) = *((_DWORD *)this + 79) + 4 * (v9 + v10); /*0x578337*/
    return *v2; /*0x57833d*/
  }
}



// ==== 0x00578350  LayerClass::CellIteratorReset  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CellIteratorReset(LayerClass *this)
{
  int v1; // eax
  int result; // eax

  v1 = *((_DWORD *)this + 61); /*0x578350*/
  *((_DWORD *)this + 67) = 1; /*0x578356*/
  *((_DWORD *)this + 68) = v1; /*0x578360*/
  *((_DWORD *)this + 69) = v1 - 1; /*0x578369*/
  result = (v1 << 11) + *((_DWORD *)this + 79) + 4; /*0x578378*/
  *((_DWORD *)this + 70) = result; /*0x57837c*/
  return result; /*0x578382*/
}



// ==== 0x00578390  MapClass::IsRectInBounds  this=MapClass  sig=csp ====
BOOL __thiscall MapClass::IsRectInBounds(MapClass *this, _WORD *a2, int a3)
{
  char v3; // bl
  _WORD *v4; // esi
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  __int16 v13[2]; // [esp+Ch] [ebp-8h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x578394*/
  v4 = a2; /*0x578399*/
  v6 = *a2; /*0x5783a4*/
  HIWORD(a2) = a2[2]; /*0x5783ab*/
  LOWORD(a2) = v6; /*0x5783b4*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, a3) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  v7 = v4[2]; /*0x5783d0*/
  LOWORD(a3) = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x5783d8*/
  HIWORD(a3) = v7; /*0x5783e0*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, v3) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  v8 = *((_DWORD *)v4 + 1); /*0x5783f1*/
  v9 = *((_DWORD *)v4 + 3); /*0x5783f4*/
  v13[0] = *v4; /*0x5783f7*/
  v13[1] = v8 + v9 - 1; /*0x578408*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, v3) ) /*0x57840d*/
    return 0; /*0x57840d*/
  v10 = *((_DWORD *)v4 + 1); /*0x578420*/
  v11 = *((_DWORD *)v4 + 3); /*0x578423*/
  v14[0] = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x578426*/
  v14[1] = v10 + v11 - 1; /*0x578436*/
  return (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v14, v3) != 0; /*0x578446*/
}



// ==== 0x00578460  LayerClass::IsWithinUsableArea  this=LayerClass  sig=csp ====
int __thiscall LayerClass::IsWithinUsableArea(LayerClass *this, __int16 *a2, char a3)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int result; // eax
  int v9; // esi

  v3 = 0; /*0x57846b*/
  v4 = a2[1]; /*0x57846d*/
  v5 = *a2; /*0x578472*/
  if ( a3 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x578498*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((_BYTE *)v7 + 284) && v4 + v5 < v3 + *((_DWORD *)this + 61) + 2 * *((_DWORD *)this + 64) + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  result = *((_DWORD *)this + 61); /*0x5784d3*/
  LOBYTE(result) = v4 + v5 > v3 + result + 2 * *((_DWORD *)this + 64) /*0x578531*/
                && v4 + v5 <= v3 + result + 2 * (*((_DWORD *)this + 64) + *((_DWORD *)this + 66)) + 2
                && (v9 = *((_DWORD *)this + 63), v5 - v4 < 2 * (v9 + *((_DWORD *)this + 65)) - result)
                && (result -= 2 * v9, v4 - v5 < result);
  return result; /*0x578525*/
}



// ==== 0x00578540  Type::CheckAmbiguity  this=Type  sig=csp ====
int __thiscall Type::CheckAmbiguity(Type *this, int a2, char a3)
{
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int result; // eax
  int v7; // esi

  v3 = *(__int16 *)(a2 + 38); /*0x57854a*/
  v4 = 0; /*0x57854f*/
  v5 = *(__int16 *)(a2 + 36); /*0x578552*/
  if ( a3 ) /*0x578558*/
  {
    v4 = *(char *)(a2 + 283); /*0x578560*/
    if ( *(_BYTE *)(a2 + 284) ) /*0x57855a*/
    {
      if ( v3 + v5 < v4 + *((_DWORD *)this + 61) + 2 * *((_DWORD *)this + 64) + 4 ) /*0x578582*/
        ++v4; /*0x578584*/
    }
  }
  result = *((_DWORD *)this + 61); /*0x57858b*/
  LOBYTE(result) = v3 + v5 > v4 + result + 2 * *((_DWORD *)this + 64) /*0x5785e9*/
                && v3 + v5 <= v4 + result + 2 * (*((_DWORD *)this + 64) + *((_DWORD *)this + 66)) + 2
                && (v7 = *((_DWORD *)this + 63), v5 - v3 < 2 * (v7 + *((_DWORD *)this + 65)) - result)
                && (result -= 2 * v7, v3 - v5 < result);
  return result; /*0x5785dd*/
}



// ==== 0x005785F0  ObjectClass::IsCoordVisibleMap  this=ObjectClass  sig=csp ====
int __thiscall IsCoordVisibleMap(ObjectClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = a2; /*0x5785f1*/
  LOWORD(a2) = *a2 / 256; /*0x578605*/
  HIWORD(a2) = v2[1] / 256; /*0x57861d*/
  return LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1); /*0x578630*/
}



// ==== 0x00578640  ObjectClass::Math_Helper  this=ObjectClass  sig=csp ====
bool __thiscall Math_Helper(ObjectClass *this, _DWORD *a2, __int16 *a3, char a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // edi
  unsigned int v7; // eax
  int *v8; // eax
  int v9; // ebx
  int v10; // eax

  v4 = a3[1]; /*0x57864f*/
  v5 = 0; /*0x578653*/
  v6 = *a3; /*0x578656*/
  if ( a4 ) /*0x57865b*/
  {
    v7 = v6 + (v4 << 9); /*0x578662*/
    if ( v7 >= 0x40000 || (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) == 0 ) /*0x578678*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x57867c*/
      v8 = &g_MissionQueueFrame.briefing[130]; /*0x578681*/
    }
    v5 = *((char *)v8 + 283); /*0x57868c*/
    if ( *((_BYTE *)v8 + 284) && v4 + v6 < v5 + this->q03D + 2 * a2[1] + 4 ) /*0x5786ab*/
      ++v5; /*0x5786ad*/
  }
  v9 = a2[1]; /*0x5786ae*/
  v10 = this->q03D; /*0x5786b1*/
  return v4 + v6 > v5 + v10 + 2 * v9 /*0x5786f7*/
      && v4 + v6 <= v5 + v10 + 2 * (v9 + a2[3]) + 2
      && v6 - v4 < 2 * (*a2 + a2[2]) - v10
      && v4 - v6 < v10 - 2 * *a2;
}



// ==== 0x00578710  MapClass::SpiralSearch  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::SpiralSearch(MapClass *this)
{
  void *MapClass_field_0xF4; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  bool v7; // al
  int v8; // ecx
  int v9; // ebp
  int v10; // ebx
  _DWORD *result; // eax
  unsigned int v12; // eax
  __int16 v13[2]; // [esp+10h] [ebp-4h] BYREF

  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x578723*/
  v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x578729*/
  v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x57872f*/
  if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578740*/
               + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
               + 12 )
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
    v5 = *(_DWORD *)this->__pad_104; /*0x578746*/
    v6 = 2 * ((int)this->MapClass_field_0xFC + v5) - (_DWORD)MapClass_field_0xF4 - 2; /*0x57875c*/
    v13[0] = v4; /*0x57875f*/
    v13[1] = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      *(_DWORD *)&this->__pad_10C[16] = v4 + 1; /*0x5787be*/
      *(_DWORD *)&this->__pad_10C[20] = v3 - 1; /*0x5787c4*/
    }
    else
    {
      v7 = (((_BYTE)v4 - (_BYTE)MapClass_field_0xF4 + (_BYTE)v3 - 1) & 1) == 1; /*0x578785*/
      v8 = v5 - (v7 + 1); /*0x578790*/
      v9 = *(_DWORD *)&this->__pad_10C[16] - v8; /*0x578792*/
      v10 = v8 + *(_DWORD *)&this->__pad_10C[20]; /*0x578794*/
      *(_DWORD *)&this->__pad_10C[16] = v9; /*0x578798*/
      *(_DWORD *)&this->__pad_10C[20] = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        *(_DWORD *)&this->__pad_10C[20] = v10 + 1; /*0x5787ab*/
      else
        *(_DWORD *)&this->__pad_10C[16] = v9 + 1; /*0x5787b4*/
    }
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, 1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5787e8*/
    v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x5787ee*/
    v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x5787f4*/
    if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578805*/
                 + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
                 + 12 )
      return 0; /*0x578805*/
  }
  v12 = v13[0] + (v13[1] << 9); /*0x578820*/
  if ( v12 >= 0x40000 || (result = (_DWORD *)*((_DWORD *)this->MapClass_field_0x13C + v12)) == 0 ) /*0x578836*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v13; /*0x57883f*/
    return &g_MissionQueueFrame.briefing[130]; /*0x578845*/
  }
  return result; /*0x57880d*/
}



// ==== 0x00578850  TActionClass::executeSellAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeSellAction(TActionClass *this)
{
  int result; // eax
  int v2; // edx

  result = this->TActionClass_field_40; /*0x578850*/
  v2 = *((_DWORD *)this + 63); /*0x578856*/
  *((_DWORD *)this + 71) = v2 + result + 1; /*0x578861*/
  this->TActionClass_field_48 = result + this->q03D - v2; /*0x578871*/
  return result; /*0x578877*/
}



// ==== 0x00578880  MapClass::FastCellLookup  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::FastCellLookup(MapClass *this, __int16 *a2, int a3, char a4)
{
  unsigned int v4; // eax
  _DWORD *result; // eax
  void *MapClass_field_0xFC; // edi
  int v7; // ebp
  int v8; // ebx
  void *MapClass_field_0x100; // eax
  int v10; // esi
  int v12; // edx
  void *MapClass_field_0x108; // ecx
  __int16 v14; // bx
  __int16 v15; // bp
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  __int16 v19; // bx
  __int16 v20; // bp
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp+4h]
  int v27; // [esp+20h] [ebp+8h]
  int v28; // [esp+24h] [ebp+Ch]
  int v29; // [esp+24h] [ebp+Ch]
  int v30; // [esp+24h] [ebp+Ch]

  if ( a3 == 1 ) /*0x57888e*/
  {
    v4 = *a2 + (a2[1] << 9); /*0x57889e*/
    if ( v4 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5788be*/
      return &g_MissionQueueFrame.briefing[130]; /*0x5788c4*/
    }
  }
  else
  {
    MapClass_field_0xFC = this->MapClass_field_0xFC; /*0x5788d4*/
    v7 = *a2; /*0x5788da*/
    v8 = a2[1]; /*0x5788dd*/
    MapClass_field_0x100 = this->MapClass_field_0x100; /*0x5788e1*/
    v10 = (__int16)((__int16)this->MapClass_field_0xF4 + (_WORD)MapClass_field_0x100 - (_WORD)MapClass_field_0xFC); /*0x5788fd*/
    v25 = (__int16)((_WORD)MapClass_field_0x100 + (_WORD)MapClass_field_0xFC + 1); /*0x57890e*/
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
    v27 = v25 + v10; /*0x57895b*/
    if ( a4 || (MapClass_field_0x108 = this->MapClass_field_0x108, v8 + v7 < v27 + 2 * (int)MapClass_field_0x108 / 3) ) /*0x578987*/
    {
      v23 = (__int16)v8 << 9; /*0x578a74*/
      v17 = (__int16)v7 + v23 < 0; /*0x578a77*/
      v24 = (__int16)v7 + v23; /*0x578a77*/
      LOWORD(v30) = v7; /*0x578a79*/
      HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x578a97*/
      {
        g_MissionQueueFrame.briefing[139] = v30; /*0x578a9d*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578aa2*/
      }
    }
    else if ( v8 + v7 >= v27 + 4 * (int)MapClass_field_0x108 / 3 || a3 <= 2 ) /*0x5789ab*/
    {
      v19 = v8 - (a3 - 1); /*0x578a27*/
      v20 = v7 - (a3 - 1); /*0x578a29*/
      v21 = v19 << 9; /*0x578a31*/
      v17 = v20 + v21 < 0; /*0x578a34*/
      v22 = v20 + v21; /*0x578a34*/
      LOWORD(v29) = v20; /*0x578a36*/
      HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x578a54*/
      {
        g_MissionQueueFrame.briefing[139] = v29; /*0x578a5c*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a62*/
      }
    }
    else
    {
      v14 = v8 - a3 / 2; /*0x5789c6*/
      v15 = v7 - a3 / 2; /*0x5789c8*/
      v16 = v14 << 9; /*0x5789d0*/
      v17 = v15 + v16 < 0; /*0x5789d3*/
      v18 = v15 + v16; /*0x5789d3*/
      LOWORD(v28) = v15; /*0x5789d5*/
      HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x5789f3*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x578a00*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a06*/
      }
    }
  }
  return result; /*0x5788bc*/
}



// ==== 0x00578AC0  MapClass::IncrementRedrawCounter  this=MapClass  sig=csp ====
void __thiscall MapClass::IncrementRedrawCounter(MapClass *this)
{
  ++this->__pad_D80[984]; /*0x578ac0*/
}



// ==== 0x00578AD0  Cell::IsPassableAllied  this=Cell  sig=csp ====
char __stdcall Cell_IsPassableAllied(int a1, __int16 *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi

  v2 = *a2 + (a2[1] << 9); /*0x578ade*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(dword_87F924 + 4 * v2)) == 0 ) /*0x578af4*/
  {
    dword_ABDC74 = *(_DWORD *)a2; /*0x578af8*/
    v3 = &unk_ABDC50; /*0x578afd*/
  }
  v4 = v3[57]; /*0x578b03*/
  if ( !v4 ) /*0x578b0c*/
    return 1; /*0x578b58*/
  while ( a1 == v4 /*0x578b30*/
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 6
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5815) )
  {
LABEL_10:
    v4 = *(_DWORD *)(v4 + 48); /*0x578b4d*/
    if ( !v4 ) /*0x578b52*/
      return 1; /*0x578b52*/
  }
  if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v4 + 540), a1) ) /*0x578b39*/
  {
    if ( (unsigned __int8)BuildingClass::IsPoweredOn(v4) ) /*0x578b44*/
      return 1; /*0x578b4b*/
    goto LABEL_10; /*0x578b4b*/
  }
  return BuildingClass::MakeTraversable(v4); /*0x578b58*/
}



// ==== 0x00578B70  ObjectClass::method_578B70  this=ObjectClass  sig=csp ====
int __thiscall sub_578B70(ObjectClass *this, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 v4; // ax
  __int16 v5; // bp
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // eax

  v2 = this->q040; /*0x578b77*/
  v3 = *((_DWORD *)this + 63); /*0x578b80*/
  v4 = v2 + this->q03D - v3; /*0x578b89*/
  v5 = v2 + v3 + 1; /*0x578b8b*/
  v6 = this->u32_41; /*0x578b8f*/
  v7 = *((_DWORD *)this + 66); /*0x578b95*/
  v8 = *a2; /*0x578bac*/
  v9 = a2[1]; /*0x578baf*/
  v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3); /*0x578bf4*/
  v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5; /*0x578c0d*/
  v12 = (unsigned __int64)(1431655766LL * (2 * v7 - 1)) >> 32; /*0x578c16*/
  v13 = (v8 + v11) / (int)((v12 >> 31) + v12); /*0x578c24*/
  if ( v10 == 3 ) /*0x578c28*/
    v10 = 2; /*0x578c2a*/
  if ( v13 == 3 ) /*0x578c32*/
    v13 = 2; /*0x578c34*/
  return v13 + v10 + 2 * v13 + 1; /*0x578c3c*/
}



// ==== 0x00578C50  ObjectClass::method_578C50  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_578C50(ObjectClass *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edx
  __int16 v8; // [esp+12h] [ebp-Eh]
  int v9; // [esp+28h] [ebp+8h]

  v3 = ((2 * this->u32_41 - 1) % 3 != 0) + (2 * this->u32_41 - 1) / 3 * ((a3 - 1) % 3); /*0x578ca4*/
  v4 = this->q040; /*0x578ccc*/
  v5 = ((2 * *((_DWORD *)this + 66) - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 * *((_DWORD *)this + 66) - 1) / 3); /*0x578cd8*/
  v6 = *((_DWORD *)this + 63); /*0x578cda*/
  v8 = v4 + this->q03D - v6; /*0x578cf0*/
  LOWORD(v9) = v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2; /*0x578d34*/
  HIWORD(v9) = (v5 - v3) / 2 + v8; /*0x578d3f*/
  *a2 = v9; /*0x578d4b*/
  return a2; /*0x578d48*/
}



// ==== 0x00578D80  Map_Helper  this=-  sig=ida-proto ====
bool __fastcall sub_578D80(int a1, unsigned int a2)
{
  if ( a1 >= g_TerrainBuildConfig && a1 < g_TerrainBuildConfig + 40 ) /*0x578d8f*/
    return 1; /*0x578d94*/
  if ( a1 >= dword_AA073C && a1 < dword_AA073C + 4 ) /*0x578da3*/
  {
    if ( a1 == dword_AA073C || a1 == dword_AA073C + 3 ) /*0x578dae*/
      return a2 && a2 != 4; /*0x578dbf*/
    return 1; /*0x578e56*/
  }
  if ( a1 >= dword_ABB110 && a1 < dword_ABB110 + 4 ) /*0x578dd7*/
  {
    if ( a1 == dword_ABB110 || a1 == dword_ABB110 + 3 ) /*0x578de2*/
      return a2 != 1 && a2 != 3; /*0x578dec*/
    return 1; /*0x578de2*/
  }
  if ( a1 >= dword_AA1050 && a1 < dword_AA1050 + 4 ) /*0x578e00*/
  {
    if ( a1 == dword_AA1050 || a1 == dword_AA1050 + 3 ) /*0x578e0b*/
      return a2 >= 2; /*0x578e0f*/
    return 1; /*0x578e0b*/
  }
  if ( a1 >= dword_AA10A0 && a1 < dword_AA10A0 + 4 ) /*0x578e28*/
  {
    if ( a1 == dword_AA10A0 || a1 == dword_AA10A0 + 3 ) /*0x578e33*/
      return a2 != 2 && a2 != 3; /*0x578e3d*/
    return 1; /*0x578e33*/
  }
  return a1 >= dword_ABBEBC && a1 < dword_ABBEBC + 20; /*0x578d93*/
}



// ==== 0x00578E60  CreateMapObject  this=-  sig=csp ====
char __stdcall sub_578E60(int a1, int a2)
{
  char v2; // bl
  int v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  int v6; // edi
  int i; // esi
  char *Entry; // eax
  int j; // eax
  int k; // esi
  char v12; // [esp+13h] [ebp-5h]

  v2 = 1; /*0x578e72*/
  v12 = 0; /*0x578e74*/
  if ( !dword_ABED10 ) /*0x578e79*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x578e81*/
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x578e90*/
    if ( v4 ) /*0x578e97*/
    {
      v5 = v4; /*0x578e9c*/
      if ( v3 - 1 >= 0 ) /*0x578ea0*/
      {
        do /*0x578eb0*/
        {
          TileData::Constructor(v5); /*0x578ea7*/
          v5 += 20; /*0x578eac*/
          --v3; /*0x578eaf*/
        }
        while ( v3 ); /*0x578eb0*/
      }
      dword_ABED10 = v4; /*0x578eb2*/
    }
    else
    {
      dword_ABED10 = 0; /*0x578eba*/
    }
    v12 = 1; /*0x578ec4*/
  }
  v6 = g_MapCellWidth * g_MapCellWidth; /*0x578ed1*/
  for ( i = 0; i < v6; Entry[74] = 1 ) /*0x578ed8*/
    Entry = GetTileDataEntry(i++); /*0x578edc*/
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x578ef0*/
  dword_87F8F8 = dword_87F8DC; /*0x578f00*/
  dword_87F8F4 = 1; /*0x578f0d*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f16*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f25*/
  for ( j = LayerClass::CellIteratorNext(&dword_87F7E8); j; j = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f35*/
  {
    if ( !v2 ) /*0x578f39*/
      break; /*0x578f39*/
    v2 = Cliff::ProcessTransitions(j, a2); /*0x578f4b*/
  }
  dword_87F8F8 = dword_87F8DC; /*0x578f61*/
  dword_87F8F4 = 1; /*0x578f66*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f72*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f81*/
  for ( k = LayerClass::CellIteratorNext(&dword_87F7E8); k; k = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f8f*/
  {
    if ( !v2 ) /*0x578f93*/
      break; /*0x578f93*/
    if ( !*(_BYTE *)(k + 284) && Cell::IsEmpty((_DWORD *)k) ) /*0x578fa1*/
      v2 = Terrain::SelectTileType(k, a2); /*0x578fb5*/
  }
  dword_880990 = 0; /*0x578fcd*/
  if ( dword_88098C ) /*0x578fd5*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_88098C + 32))(dword_88098C, 1); /*0x578fdb*/
    dword_88098C = 0; /*0x578fde*/
  }
  if ( v12 ) /*0x578fea*/
  {
    __3_YAXPAX_Z(dword_ABED10); /*0x578ff2*/
    dword_ABED10 = 0; /*0x578ffa*/
  }
  return v2; /*0x579000*/
}



// ==== 0x00579010  Cliff::ProcessTransitions  this=MapClass  sig=csp ====
char __stdcall Cliff_ProcessTransitions(int a1, int a2)
{
  int v2; // ebp
  char AdjacencyFlags; // al
  char v4; // bl
  int v5; // edi
  unsigned int v6; // eax
  void *v7; // eax
  unsigned int v8; // eax
  void *v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  unsigned int v12; // eax
  void *v13; // eax
  int v14; // eax
  int v15; // edi
  int v17; // edx
  signed int i; // esi
  void *NeighbourContent; // eax
  int v20; // [esp-4h] [ebp-24h]
  bool v21; // [esp+13h] [ebp-Dh]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+14h] [ebp-Ch]

  v2 = a1; /*0x579015*/
  v21 = 0; /*0x579022*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(a1); /*0x579027*/
  v4 = AdjacencyFlags; /*0x57902c*/
  v5 = AdjacencyFlags & 0xA0; /*0x579030*/
  if ( v5 == 160 ) /*0x57903c*/
    v21 = (AdjacencyFlags & 0x11) == 17; /*0x579045*/
  if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57904d*/
  {
    v22 = *(_DWORD *)(v2 + 36); /*0x579052*/
    HIWORD(a1) = HIWORD(v22); /*0x57905e*/
    LOWORD(a1) = v22 + 1; /*0x579063*/
    v6 = (__int16)(v22 + 1) + (SHIWORD(v22) << 9); /*0x579071*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x579087*/
    {
      dword_ABDC74 = a1; /*0x57908d*/
      v7 = &unk_ABDC50; /*0x579092*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v7) & 2) != 0 ) /*0x5790a1*/
      v21 = 1; /*0x5790a3*/
  }
  if ( (v4 & 2) != 0 ) /*0x5790ab*/
  {
    v23 = *(_DWORD *)(v2 + 36); /*0x5790b0*/
    HIWORD(a1) = HIWORD(v23); /*0x5790bc*/
    LOWORD(a1) = v23 - 1; /*0x5790c1*/
    v8 = (__int16)(v23 - 1) + (SHIWORD(v23) << 9); /*0x5790cf*/
    if ( v8 >= 0x40000 || (v9 = *(void **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5790e5*/
    {
      dword_ABDC74 = a1; /*0x5790eb*/
      v9 = &unk_ABDC50; /*0x5790f0*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v9) & 0x20) != 0 ) /*0x5790ff*/
      v21 = 1; /*0x579101*/
  }
  if ( (v4 & 8) != 0 ) /*0x579109*/
  {
    v24 = *(_DWORD *)(v2 + 36); /*0x57910e*/
    a1 = v24 - 0x10000; /*0x57911e*/
    v10 = (__int16)v24 + ((__int16)(HIWORD(v24) - 1) << 9); /*0x57912c*/
    if ( v10 >= 0x40000 || (v11 = *(void **)(dword_87F924 + 4 * v10)) == 0 ) /*0x579142*/
    {
      dword_ABDC74 = a1; /*0x579148*/
      v11 = &unk_ABDC50; /*0x57914d*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v11) & 0x80u) != 0 ) /*0x57915c*/
      v21 = 1; /*0x57915e*/
  }
  if ( v4 < 0 ) /*0x579166*/
  {
    v25 = *(_DWORD *)(v2 + 36); /*0x57916b*/
    a1 = v25 + 0x10000; /*0x57917b*/
    v12 = (__int16)v25 + ((__int16)(HIWORD(v25) + 1) << 9); /*0x579189*/
    if ( v12 >= 0x40000 || (v13 = *(void **)(dword_87F924 + 4 * v12)) == 0 ) /*0x57919f*/
    {
      dword_ABDC74 = a1; /*0x5791a5*/
      v13 = &unk_ABDC50; /*0x5791aa*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v13) & 8) != 0 ) /*0x5791b9*/
      v21 = 1; /*0x5791bb*/
  }
  if ( (v4 & 0x11) == 0x11 && ((v4 & 0xA) != 0xA || (v4 & 0xE0) != 0) && (v5 != 160 || (v4 & 0xE) != 0) ) /*0x5791e4*/
    v21 = 1; /*0x5791e6*/
  if ( (v4 & 0x44) == 0x44 && ((v4 & 0x28) != 0x28 || (v4 & 0x83) != 0) && ((v4 & 0x82) != 0x82 || (v4 & 0x38) != 0) ) /*0x579213*/
    v21 = 1; /*0x579215*/
  if ( (v4 & 0x2C) == 0x24 /*0x57926f*/
    || (v4 & 0xA1) == 0x21
    || (v4 & 0x1A) == 0x12
    || (v4 & 0xC2) == 0x42
    || (v4 & 0xB) == 9
    || (v4 & 0x68) == 0x48
    || (v4 & 0x86) == 0x84
    || (v4 & 0xB0) == 0x90 )
  {
    v21 = 1; /*0x579271*/
  }
  if ( (v4 & 0x88) == 0x88 || (v4 & 0x22) == 0x22 || v21 ) /*0x579291*/
  {
    a1 = *(_DWORD *)(v2 + 36); /*0x5792a0*/
    v14 = MapClass::GetTileDataField14(&a1); /*0x5792a4*/
    v15 = a2; /*0x5792a9*/
    if ( v14 > 0 && v14 != a2 && a2 != -1 ) /*0x5792b8*/
      return 0; /*0x5792c3*/
    v17 = *(_DWORD *)(v2 + 36); /*0x5792cc*/
    v20 = a2; /*0x5792d6*/
    *(_BYTE *)(v2 + 283) += 4; /*0x5792dd*/
    a1 = v17; /*0x5792e3*/
    MapClass::SetObstruction(&a1, v20); /*0x5792e7*/
    for ( i = 0; i < 8; ++i ) /*0x5792ec*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v2, i); /*0x5792f2*/
      Cliff::ProcessTransitions(NeighbourContent, v15); /*0x5792fc*/
    }
  }
  return 1; /*0x5792ba*/
}



// ==== 0x00579320  InitializeTileNeighborTable  this=-  sig=ida-proto ====
int InitializeTileNeighborTable()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-4h] BYREF

  dword_ABDDA8 = 0; /*0x57934e*/
  dword_ABDDAC = 0; /*0x579361*/
  dword_ABDDB0 = 0; /*0x579375*/
  dword_ABDDB4 = 0; /*0x579389*/
  v1 = 0; /*0x57938e*/
  dword_ABDDB8 = 0; /*0x57939c*/
  dword_ABDDC4 = 0; /*0x5793b1*/
  dword_ABDDBC = 0; /*0x5793bc*/
  dword_ABDDC0 = 0; /*0x5793c2*/
  dword_ABDDC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793d4*/
  dword_ABDDCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793e7*/
  dword_ABDDD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793f4*/
  dword_ABDDD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57940c*/
  dword_ABDDD8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57941f*/
  dword_ABDDDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57942c*/
  dword_ABDDE0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579444*/
  dword_ABDDE4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579457*/
  dword_ABDDE8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579464*/
  dword_ABDDEC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57947c*/
  dword_ABDDF0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57948f*/
  dword_ABDDF4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57949c*/
  dword_ABDDF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794b4*/
  dword_ABDDFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794c7*/
  dword_ABDE00 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794d4*/
  dword_ABDE04 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ec*/
  dword_ABDE08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ff*/
  dword_ABDE0C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57950c*/
  dword_ABDE10 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579524*/
  dword_ABDE14 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579537*/
  dword_ABDE18 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579544*/
  dword_ABDE1C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57955c*/
  dword_ABDE20 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579570*/
  dword_ABDE24 = *(_DWORD *)CellStruct::Set(&v1, 1, 0); /*0x57957d*/
  dword_ABDE28 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579595*/
  dword_ABDE2C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795a8*/
  dword_ABDE30 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795b5*/
  dword_ABDE34 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795cd*/
  dword_ABDE38 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795e0*/
  dword_ABDE3C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795ed*/
  dword_ABDE40 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579605*/
  result = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579610*/
  dword_ABDE44 = result; /*0x579613*/
  return result; /*0x579612*/
}



// ==== 0x00579620  Terrain::SelectTileType  this=MapClass  sig=csp ====
bool __stdcall Terrain_SelectTileType(int a1, int a2)
{
  int v2; // eax
  int v3; // ebp
  int AdjacencyFlags; // ebx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  char v7; // bl
  unsigned int v8; // eax
  _DWORD *v9; // eax
  char v10; // al
  int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  char v14; // si
  unsigned int v15; // eax
  _DWORD *v16; // eax
  char v17; // al
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  _DWORD *v23; // eax
  char v24; // si
  unsigned int v25; // eax
  _DWORD *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  _DWORD *v29; // eax
  char v30; // al
  int v31; // eax
  __int16 v32; // cx
  __int16 v33; // dx
  char v35; // [esp-10h] [ebp-34h]
  int v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+14h] [ebp-10h] BYREF
  int v38; // [esp+1Ch] [ebp-8h] BYREF

  v2 = Range_RandomInt(0, 5u); /*0x579630*/
  v3 = a1; /*0x579635*/
  v36 = v2; /*0x57963c*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(a1); /*0x579645*/
  v38 = AdjacencyFlags; /*0x57964e*/
  if ( (AdjacencyFlags & 0xA0) == 0xA0 ) /*0x579652*/
  {
    v37 = *(_DWORD *)(v3 + 36); /*0x57965b*/
    a1 = v37 + 0x10000; /*0x57966b*/
    v5 = (__int16)v37 + ((__int16)(HIWORD(v37) + 1) << 9); /*0x579679*/
    if ( v5 >= 0x40000 || (v6 = *(_DWORD **)(dword_87F924 + 4 * v5)) == 0 ) /*0x57968f*/
    {
      dword_ABDC74 = a1; /*0x579695*/
      v6 = unk_ABDC50; /*0x57969a*/
    }
    v7 = Cell::GetAdjacencyFlags((int)v6); /*0x5796a7*/
    v37 = *(_DWORD *)(v3 + 36); /*0x5796ac*/
    HIWORD(a1) = HIWORD(v37); /*0x5796b8*/
    LOWORD(a1) = v37 + 1; /*0x5796bd*/
    v8 = (__int16)(v37 + 1) + (SHIWORD(v37) << 9); /*0x5796cb*/
    if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5796e1*/
    {
      dword_ABDC74 = a1; /*0x5796e7*/
      v9 = unk_ABDC50; /*0x5796ec*/
    }
    v10 = Cell::GetAdjacencyFlags((int)v9); /*0x5796f4*/
    if ( (v7 & 0x20) != 0 || v10 < 0 ) /*0x579704*/
    {
      v11 = 34; /*0x5797fc*/
      goto LABEL_82; /*0x579801*/
    }
    v11 = v36 % 3 + 9; /*0x579716*/
    if ( v36 % 3 != -10 ) /*0x57971c*/
      goto LABEL_81; /*0x57971c*/
    LOBYTE(AdjacencyFlags) = v38; /*0x579722*/
  }
  else
  {
    if ( (AdjacencyFlags & 0x82) == 0x82 ) /*0x579811*/
    {
      v11 = 39; /*0x579813*/
      goto LABEL_82; /*0x579818*/
    }
    if ( (AdjacencyFlags & 0xA) == 0xA ) /*0x579824*/
    {
      v11 = 33; /*0x579826*/
      goto LABEL_82; /*0x57982b*/
    }
    if ( (AdjacencyFlags & 0x28) == 0x28 ) /*0x579838*/
    {
      v11 = 40; /*0x57983e*/
      goto LABEL_82; /*0x579843*/
    }
  }
  if ( (AdjacencyFlags & 2) == 0 ) /*0x579729*/
  {
    if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57986f*/
    {
      v38 = *(_DWORD *)(v3 + 36); /*0x579878*/
      a1 = v38 + 0x10000; /*0x579888*/
      v19 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579896*/
      if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(dword_87F924 + 4 * v19)) == 0 ) /*0x5798ac*/
      {
        dword_ABDC74 = a1; /*0x5798b2*/
        v20 = unk_ABDC50; /*0x5798b7*/
      }
      v21 = Cell::GetAdjacencyFlags((int)v20); /*0x5798bf*/
      if ( (AdjacencyFlags & 0x10) == 0 || (AdjacencyFlags & 0xC) != 0 || (v21 & 0x28) == 0x28 ) /*0x5798d3*/
      {
        v11 = 18; /*0x5798f6*/
        goto LABEL_82; /*0x5798fb*/
      }
      v11 = v36 % 3 + 15; /*0x5798e1*/
    }
    else if ( (AdjacencyFlags & 8) != 0 ) /*0x579903*/
    {
      v38 = *(_DWORD *)(v3 + 36); /*0x57990c*/
      HIWORD(a1) = HIWORD(v38); /*0x579918*/
      LOWORD(a1) = v38 + 1; /*0x57991d*/
      v22 = (__int16)(v38 + 1) + (SHIWORD(v38) << 9); /*0x57992b*/
      if ( v22 >= 0x40000 || (v23 = *(_DWORD **)(dword_87F924 + 4 * v22)) == 0 ) /*0x579941*/
      {
        v23 = unk_ABDC50; /*0x579947*/
        dword_ABDC74 = a1; /*0x57994c*/
      }
      v24 = Cell::GetAdjacencyFlags((int)v23); /*0x57995a*/
      v38 = *(_DWORD *)(v3 + 36); /*0x57995f*/
      LOWORD(a1) = v38 + 1; /*0x57996b*/
      HIWORD(a1) = HIWORD(v38) + 1; /*0x579970*/
      v25 = (__int16)(v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x57997e*/
      if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(dword_87F924 + 4 * v25)) == 0 ) /*0x579994*/
      {
        dword_ABDC74 = a1; /*0x57999a*/
        v26 = unk_ABDC50; /*0x57999f*/
      }
      v27 = Cell::GetAdjacencyFlags((int)v26); /*0x5799a7*/
      if ( (AdjacencyFlags & 4) == 0 || (AdjacencyFlags & 3) != 0 || (v24 & 0xA) == 0xA ) /*0x5799be*/
      {
        if ( (AdjacencyFlags & 6) != 0 || (v27 & 8) != 0 || (v36 & 1) == 0 ) /*0x5799e2*/
          v11 = 26; /*0x5799ee*/
        else
          v11 = 21; /*0x5799e4*/
        goto LABEL_82; /*0x5799e9*/
      }
      v11 = v36 % 3 + 23; /*0x5799cc*/
    }
    else
    {
      if ( (AdjacencyFlags & 0x80u) == 0 ) /*0x5799fb*/
      {
        v18 = v36; /*0x579a7c*/
LABEL_73:
        if ( (AdjacencyFlags & 1) != 0 ) /*0x579a83*/
        {
          v11 = 2; /*0x579a85*/
          goto LABEL_82; /*0x579a8a*/
        }
        if ( (AdjacencyFlags & 4) != 0 ) /*0x579a8f*/
        {
          v11 = (v18 & 1) + 29; /*0x579a97*/
        }
        else
        {
          if ( (AdjacencyFlags & 0x10) != 0 ) /*0x579a9e*/
          {
            v11 = 22; /*0x579aa0*/
            goto LABEL_82; /*0x579aa5*/
          }
          if ( (AdjacencyFlags & 0x40) == 0 ) /*0x579aaa*/
            return 1; /*0x579aaa*/
          v11 = v18 % 3 + 12; /*0x579aba*/
        }
LABEL_81:
        if ( v11 <= 0 ) /*0x579abf*/
          return 1; /*0x579abf*/
        goto LABEL_82; /*0x579abf*/
      }
      v38 = *(_DWORD *)(v3 + 36); /*0x579a00*/
      HIWORD(a1) = HIWORD(v38); /*0x579a0c*/
      LOWORD(a1) = v38 + 1; /*0x579a11*/
      v28 = (__int16)(v38 + 1) + (SHIWORD(v38) << 9); /*0x579a1f*/
      if ( v28 >= 0x40000 || (v29 = *(_DWORD **)(dword_87F924 + 4 * v28)) == 0 ) /*0x579a35*/
      {
        v29 = unk_ABDC50; /*0x579a3b*/
        dword_ABDC74 = a1; /*0x579a40*/
      }
      v30 = Cell::GetAdjacencyFlags((int)v29); /*0x579a49*/
      if ( (AdjacencyFlags & 1) == 0 || (AdjacencyFlags & 6) != 0 || (v30 & 0x82) == 0x82 ) /*0x579a5f*/
      {
        v11 = 8; /*0x579a75*/
        goto LABEL_82; /*0x579a7a*/
      }
      v11 = v36 % 3 + 5; /*0x579a6d*/
    }
    v18 = v36; /*0x5798e4*/
LABEL_44:
    if ( v11 != -1 ) /*0x5798eb*/
      goto LABEL_81; /*0x5798eb*/
    goto LABEL_73; /*0x5798eb*/
  }
  v38 = *(_DWORD *)(v3 + 36); /*0x579732*/
  a1 = v38 + 0x10000; /*0x579742*/
  v12 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579750*/
  if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579766*/
  {
    dword_ABDC74 = a1; /*0x57976c*/
    v13 = unk_ABDC50; /*0x579771*/
  }
  v14 = Cell::GetAdjacencyFlags((int)v13); /*0x57977e*/
  v38 = *(_DWORD *)(v3 + 36); /*0x579783*/
  LOWORD(a1) = v38 + 1; /*0x579791*/
  HIWORD(a1) = HIWORD(v38) + 1; /*0x579796*/
  v15 = (__int16)(v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x5797a4*/
  if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5797ba*/
  {
    dword_ABDC74 = a1; /*0x5797c0*/
    v16 = unk_ABDC50; /*0x5797c5*/
  }
  v17 = Cell::GetAdjacencyFlags((int)v16); /*0x5797cd*/
  if ( (AdjacencyFlags & 4) != 0 && (AdjacencyFlags & 0x18) == 0 && (v14 & 0xA) != 0xA ) /*0x5797e4*/
  {
    v18 = v36; /*0x5797e6*/
    v11 = v36 % 3 + 35; /*0x5797f4*/
    goto LABEL_44; /*0x5797f7*/
  }
  if ( (AdjacencyFlags & 0xC) != 0 || (v17 & 2) != 0 || (v36 & 1) == 0 ) /*0x579856*/
    v11 = 38; /*0x579862*/
  else
    v11 = 1; /*0x579858*/
LABEL_82:
  dword_880990 = *((_DWORD *)dword_A8ED2C + v11 + g_TerrainBuildConfig - 1); /*0x579ac5*/
  v31 = *(_DWORD *)(v3 + 36); /*0x579adb*/
  v32 = MEMORY[0xABDDA4][2 * v11]; /*0x579ade*/
  v33 = MEMORY[0xABDDA6][2 * v11]; /*0x579ae6*/
  LOWORD(a1) = v31 + v32; /*0x579afa*/
  HIWORD(a1) = HIWORD(v31) + v33; /*0x579aff*/
  v38 = a1; /*0x579b17*/
  Tactical::MouseMove((int)&dword_87F7E8, &v37, &v38); /*0x579b1b*/
  v35 = *(_BYTE *)(v3 + 283); /*0x579b33*/
  LOBYTE(a1) = 1; /*0x579b3a*/
  return GenerateTerrainMap(0, 0, v35, a2, &a1, 0) || (_BYTE)a1; /*0x579b4e*/
}



// ==== 0x00579B70  Cell::GetAdjacencyFlags  this=Cell  sig=csp ====
int __stdcall Cell_GetAdjacencyFlags(int a1)
{
  __int16 v1; // cx
  unsigned int v2; // eax
  char *v3; // eax
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  char *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // esi
  unsigned int v21; // eax
  char *v22; // eax
  char *v23; // ebp
  unsigned int v24; // eax
  char *v25; // eax
  char *v26; // ebx
  int v27; // edi
  int v28; // edi
  int v29; // ebp
  _WORD *v30; // eax
  _WORD *v31; // eax
  _WORD *v32; // eax
  _WORD *v33; // eax
  int v35; // [esp+Ch] [ebp-2Ch]
  char *v36; // [esp+10h] [ebp-28h]
  char *v37; // [esp+14h] [ebp-24h]
  char *v38; // [esp+18h] [ebp-20h]
  char *v39; // [esp+1Ch] [ebp-1Ch]
  char *v40; // [esp+20h] [ebp-18h]
  char *v41; // [esp+24h] [ebp-14h]
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v44[4]; // [esp+30h] [ebp-8h] BYREF

  v35 = *(char *)(a1 + 283); /*0x579b89*/
  a1 = *(_DWORD *)(a1 + 36); /*0x579b8d*/
  *(_DWORD *)v44 = a1; /*0x579b91*/
  if ( SHIWORD(a1) + (__int16)a1 <= dword_87F8DC /*0x579bdf*/
    || (__int16)a1 - SHIWORD(a1) >= dword_87F8DC
    || SHIWORD(a1) - (__int16)a1 >= dword_87F8DC
    || SHIWORD(a1) + (__int16)a1 > dword_87F8DC + 2 * dword_87F8E0
    || !*(_BYTE *)(Tactical::GetCellData(v44) + 74) )
  {
    return 0; /*0x57a0b0*/
  }
  v1 = v44[0] + 1; /*0x579bfa*/
  LOWORD(a1) = v44[0] + 1; /*0x579c00*/
  v42 = *(_DWORD *)&v44[1] - 1; /*0x579c05*/
  HIWORD(a1) = v44[1] - 1; /*0x579c09*/
  v2 = (__int16)(v44[0] + 1) + ((__int16)(v44[1] - 1) << 9); /*0x579c17*/
  if ( v2 < 0x40000 && (v3 = *(char **)(dword_87F924 + 4 * v2)) != 0 ) /*0x579c27*/
  {
    v36 = v3; /*0x579c29*/
  }
  else
  {
    v36 = (char *)&unk_ABDC50; /*0x579c33*/
    dword_ABDC74 = a1; /*0x579c3b*/
  }
  LOWORD(a1) = v44[0] + 1; /*0x579c45*/
  v4 = v44[1] << 9; /*0x579c4d*/
  v5 = v1 + v4 < 0; /*0x579c50*/
  v6 = v1 + v4; /*0x579c50*/
  HIWORD(a1) = v44[1]; /*0x579c52*/
  if ( v5 || v6 >= 0x40000 || (v7 = *(char **)(dword_87F924 + 4 * v6)) == 0 ) /*0x579c65*/
  {
    v38 = (char *)&unk_ABDC50; /*0x579c71*/
    dword_ABDC74 = a1; /*0x579c79*/
  }
  else
  {
    v38 = v7; /*0x579c67*/
  }
  v8 = v44[1] + 1; /*0x579c7e*/
  LOWORD(a1) = v44[0] + 1; /*0x579c81*/
  HIWORD(a1) = v44[1] + 1; /*0x579c89*/
  v9 = v1 + ((__int16)(v44[1] + 1) << 9); /*0x579c97*/
  if ( v9 < 0x40000 && (v10 = *(char **)(dword_87F924 + 4 * v9)) != 0 ) /*0x579ca7*/
  {
    v41 = v10; /*0x579ca9*/
  }
  else
  {
    v41 = (char *)&unk_ABDC50; /*0x579cb3*/
    dword_ABDC74 = a1; /*0x579cbb*/
  }
  a1 = *(_DWORD *)v44 + 0x10000; /*0x579cc8*/
  v11 = v8 << 9; /*0x579cd3*/
  v5 = v44[0] + v11 < 0; /*0x579cd6*/
  v12 = v44[0] + v11; /*0x579cd6*/
  v43 = v44[0]; /*0x579cd8*/
  if ( v5 || v12 >= 0x40000 || (v13 = *(char **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579cea*/
  {
    v40 = (char *)&unk_ABDC50; /*0x579cf6*/
    dword_ABDC74 = a1; /*0x579cfe*/
  }
  else
  {
    v40 = v13; /*0x579cec*/
  }
  v14 = v44[0] - 1; /*0x579d04*/
  HIWORD(a1) = v44[1] + 1; /*0x579d07*/
  v15 = v8; /*0x579d0c*/
  v16 = (__int16)(v44[0] - 1); /*0x579d0f*/
  v15 <<= 9; /*0x579d12*/
  v5 = v16 + v15 < 0; /*0x579d15*/
  v17 = v16 + v15; /*0x579d15*/
  LOWORD(a1) = v44[0] - 1; /*0x579d17*/
  if ( v5 || v17 >= 0x40000 || (v18 = *(char **)(dword_87F924 + 4 * v17)) == 0 ) /*0x579d2a*/
  {
    v39 = (char *)&unk_ABDC50; /*0x579d36*/
    dword_ABDC74 = a1; /*0x579d3e*/
  }
  else
  {
    v39 = v18; /*0x579d2c*/
  }
  HIWORD(a1) = v44[1]; /*0x579d46*/
  v19 = v44[1] << 9; /*0x579d4e*/
  v5 = v14 + v19 < 0; /*0x579d51*/
  v20 = v14 + v19; /*0x579d51*/
  LOWORD(a1) = v44[0] - 1; /*0x579d53*/
  if ( v5 || v20 >= 0x40000 || !*(_DWORD *)(dword_87F924 + 4 * v20) ) /*0x579d63*/
  {
    v37 = (char *)&unk_ABDC50; /*0x579d74*/
    dword_ABDC74 = a1; /*0x579d7c*/
  }
  else
  {
    v37 = *(char **)(dword_87F924 + 4 * v20); /*0x579d6a*/
  }
  LOWORD(a1) = v44[0] - 1; /*0x579d85*/
  HIWORD(a1) = v42; /*0x579d8d*/
  v21 = v14 + ((__int16)v42 << 9); /*0x579d9b*/
  if ( v21 < 0x40000 && (v22 = *(char **)(dword_87F924 + 4 * v21)) != 0 ) /*0x579dab*/
  {
    v23 = v22; /*0x579dad*/
  }
  else
  {
    v23 = (char *)&unk_ABDC50; /*0x579db5*/
    dword_ABDC74 = a1; /*0x579dba*/
  }
  HIWORD(a1) = v42; /*0x579dc6*/
  LOWORD(a1) = v44[0]; /*0x579dcb*/
  v24 = v43 + ((__int16)v42 << 9); /*0x579dd6*/
  if ( v24 < 0x40000 && (v25 = *(char **)(dword_87F924 + 4 * v24)) != 0 ) /*0x579de6*/
  {
    v26 = v25; /*0x579de8*/
  }
  else
  {
    v26 = (char *)&unk_ABDC50; /*0x579df0*/
    dword_ABDC74 = a1; /*0x579df5*/
  }
  v27 = v14 + (__int16)v42; /*0x579e07*/
  if ( v27 <= dword_87F8DC /*0x579e27*/
    || v14 - (__int16)v42 >= dword_87F8DC
    || (__int16)v42 - v14 >= dword_87F8DC
    || v27 > dword_87F8DC + 2 * dword_87F8E0 )
  {
    v29 = 0; /*0x579e53*/
    v28 = v35; /*0x579e57*/
  }
  else
  {
    v28 = v35; /*0x579e29*/
    if ( v23[283] != v35 + 4 || CellLand::IsBuildable((int)v23) ) /*0x579e3d*/
      v29 = 0; /*0x579e4d*/
    else
      v29 = 64; /*0x579e46*/
  }
  a1 = *(_DWORD *)v44 - 0x10000; /*0x579e6a*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579e9a*/
    && v26[283] == v28 + 4
    && !CellLand::IsBuildable((int)v26) )
  {
    v29 |= 0x80u; /*0x579ea3*/
  }
  a1 = -65535; /*0x579eba*/
  v43 = *CellStruct::Add(v44, &v42, &a1); /*0x579ed7*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&v43) /*0x579ef6*/
    && v36[283] == v28 + 4
    && !CellLand::IsBuildable((int)v36) )
  {
    v29 |= 1u; /*0x579eff*/
  }
  a1 = 0xFFFF; /*0x579f10*/
  v43 = *CellStruct::Add(v44, &v42, &a1); /*0x579f2d*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&v43) /*0x579f4c*/
    && v37[283] == v28 + 4
    && !CellLand::IsBuildable((int)v37) )
  {
    v29 |= 0x20u; /*0x579f55*/
  }
  v30 = CellStruct::Set(&v43, 1, 0); /*0x579f60*/
  a1 = *CellStruct::Add(v44, &v42, v30); /*0x579f80*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579f9f*/
    && v38[283] == v28 + 4
    && !CellLand::IsBuildable((int)v38) )
  {
    v29 |= 2u; /*0x579fa8*/
  }
  v31 = CellStruct::Set(&v43, -1, 1); /*0x579fb2*/
  a1 = *CellStruct::Add(v44, &v42, v31); /*0x579fd2*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579ff1*/
    && v39[283] == v28 + 4
    && !CellLand::IsBuildable((int)v39) )
  {
    v29 |= 0x10u; /*0x579ffa*/
  }
  v32 = CellStruct::Set(&v43, 0, 1); /*0x57a005*/
  a1 = *CellStruct::Add(v44, &v42, v32); /*0x57a025*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x57a044*/
    && v40[283] == v28 + 4
    && !CellLand::IsBuildable((int)v40) )
  {
    v29 |= 8u; /*0x57a04d*/
  }
  v33 = CellStruct::Set(&v43, 1, 1); /*0x57a058*/
  a1 = *CellStruct::Add(v44, &v42, v33); /*0x57a078*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x57a097*/
    && v41[283] == v28 + 4
    && !CellLand::IsBuildable((int)v41) )
  {
    return v29 | 4; /*0x57a0a0*/
  }
  return v29; /*0x57a0a7*/
}



// ==== 0x0057A0C0  MapClass::InitTileData  this=MapClass  sig=csp ====
char __thiscall MapClass::InitTileData(MapClass *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  TileData *v8; // edi
  int v9; // esi
  int v10; // esi
  int i; // edi
  char *TileDataEntry; // eax
  int v13; // eax
  int v14; // edx
  char j; // bl
  int k; // eax
  int *m; // eax
  int v18; // edx
  int *n; // eax
  int v20; // edx
  char v22; // [esp+13h] [ebp-1h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x57a0ce*/
  v22 = 0; /*0x57a0d8*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x57a0df*/
  {
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x57a0e7*/
    v5 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x57a0f1*/
    v6 = v5; /*0x57a0f6*/
    if ( v5 ) /*0x57a0fd*/
    {
      v7 = v4 - 1; /*0x57a0ff*/
      v8 = (TileData *)v5; /*0x57a100*/
      if ( v7 >= 0 ) /*0x57a104*/
      {
        v9 = v7 + 1; /*0x57a106*/
        do /*0x57a112*/
        {
          TileData::Constructor(v8); /*0x57a109*/
          v8 += 20; /*0x57a10e*/
          --v9; /*0x57a111*/
        }
        while ( v9 ); /*0x57a112*/
      }
      g_MissionQueueFrame.localVariables[163] = v6; /*0x57a114*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x57a11c*/
    }
    v22 = 1; /*0x57a126*/
  }
  v10 = 0; /*0x57a131*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v10 < i; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x57a138*/
    TileDataEntry = GetTileDataEntry(v10++); /*0x57a13f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a157*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a15c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a16c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a17b*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a180*/
  for ( j = 1; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
    j = RecursiveCellClassNeighbourUpdate(this, v14, v13, a2, a3); /*0x57a1a6*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a1bc*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a1c1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a1d1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a1e0*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a1ec*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(this, k, a2, a3); /*0x57a1f7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a215*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a21a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a22a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a239*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a245*/
        m;
        m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
    j = GenerateMapClassCliffTransitions(this, v18, m, 1, a2, a3); /*0x57a25c*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a272*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a277*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a287*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a296*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a2a2*/
        n;
        n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
    j = GenerateMapClassCliffTransitions(this, v20, n, 2, a2, a3); /*0x57a2b9*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x57a2ca*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x57a2d6*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x57a2dc*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
      1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x57a2df*/
  }
  if ( v22 ) /*0x57a2ef*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x57a2f7*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}



// ==== 0x0057A320  MapClass::BuildTileConnectivityGraph  this=MapClass  sig=csp ====
int __thiscall MapClass::BuildTileConnectivityGraph(MapClass *this, int a2, int a3, int a4)
{
  Cell *v4; // ebp
  int result; // eax
  signed int v6; // ebx
  bool v7; // zf
  int *NeighbourContent; // esi
  int v9; // edx
  int v10; // edi
  char *CellData; // edi

  v4 = (Cell *)a2; /*0x57a328*/
  result = *(_DWORD *)(a2 + 56); /*0x57a330*/
  if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 ) /*0x57a340*/
  {
    result = Cell::GetTerrainMask((Cell *)this, (int *)a2, 2); /*0x57a349*/
    if ( result == 199 /*0x57a37c*/
      || result == 124
      || result == 241
      || result == 31
      || result == 198
      || result == 108
      || result == 177
      || result == 27 )
    {
      v6 = 0; /*0x57a387*/
      v7 = (_BYTE)a4 == 0; /*0x57a38a*/
      *(_DWORD *)(a2 + 56) = 0xFFFF; /*0x57a38d*/
      *(_BYTE *)(a2 + 282) = 0; /*0x57a394*/
      if ( !v7 ) /*0x57a39a*/
        *((_DWORD *)Tactical::GetCellData((Tactical *)(a2 + 36)) + 14) = a3; /*0x57a3a8*/
      do /*0x57a41e*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(v4, v6); /*0x57a3b3*/
        v9 = NeighbourContent[9]; /*0x57a3b5*/
        a4 = v9; /*0x57a3ba*/
        result = SHIWORD(v9); /*0x57a3c1*/
        v10 = SHIWORD(v9) + (__int16)v9; /*0x57a3c6*/
        if ( v10 > g_MissionQueueFrame.localVariables[160] ) /*0x57a3cf*/
        {
          if ( (__int16)a4 - SHIWORD(a4) < g_MissionQueueFrame.localVariables[160] ) /*0x57a3db*/
          {
            result = SHIWORD(a4) - (__int16)a4; /*0x57a3dd*/
            if ( result < g_MissionQueueFrame.localVariables[160] && v10 <= g_MissionQueueFrame.localVariables[161] ) /*0x57a3ef*/
            {
              a4 = v9; /*0x57a3f5*/
              CellData = Tactical::GetCellData((Tactical *)&a4); /*0x57a402*/
              *((_DWORD *)CellData + 16) = -1; /*0x57a407*/
              result = Cell::GetTerrainMask((Cell *)this, NeighbourContent, 2); /*0x57a40e*/
              *((_DWORD *)CellData + 16) = result; /*0x57a413*/
            }
          }
          v4 = (Cell *)a2; /*0x57a416*/
        }
        ++v6; /*0x57a41a*/
      }
      while ( v6 < 8 ); /*0x57a41e*/
    }
  }
  return result; /*0x57a423*/
}



// ==== 0x0057A430  RecursiveCellClassNeighbourUpdate  this=MapClass  sig=csp ====
char __fastcall CellClass_RecursiveNeighbourUpdate(_DWORD *a1, int a2, int i, int a4, int a5)
{
  int v5; // ebp
  int v7; // eax
  char *CellData; // esi
  int TerrainMask; // eax
  char v10; // bl
  unsigned int v11; // eax
  int *v12; // eax
  unsigned int v13; // eax
  int *v14; // eax
  char v15; // al
  unsigned int v16; // eax
  int *v17; // eax
  char v18; // bl
  unsigned int v19; // eax
  int *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  int *v23; // eax
  char v24; // bl
  unsigned int v25; // eax
  int *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  int *v29; // eax
  char v30; // bl
  unsigned int v31; // eax
  int *v32; // eax
  char v33; // al
  int v34; // eax
  int v35; // edx
  char v36; // cl
  int v38; // eax
  unsigned int v39; // eax
  _DWORD *NeighbourContent; // esi
  int v41; // edx
  int v42; // edi
  char *v43; // eax
  int v44; // edx
  char v45; // [esp+13h] [ebp-15h]
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+14h] [ebp-14h]
  int v48; // [esp+14h] [ebp-14h]
  int v49; // [esp+14h] [ebp-14h]
  int v50; // [esp+18h] [ebp-10h]
  int v51; // [esp+18h] [ebp-10h]
  _DWORD v52[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = i; /*0x57a435*/
  v7 = *(_DWORD *)(i + 36); /*0x57a43d*/
  v52[2] = a1; /*0x57a444*/
  v45 = 0; /*0x57a448*/
  i = v7; /*0x57a44d*/
  CellData = Tactical::GetCellData((__int16 *)&i); /*0x57a45b*/
  *((_DWORD *)CellData + 16) = Cell::GetTerrainMask(a1, (int *)v5, 2); /*0x57a467*/
  TerrainMask = Cell::GetTerrainMask(a1, (int *)v5, 0); /*0x57a46a*/
  v10 = TerrainMask; /*0x57a46f*/
  i = TerrainMask; /*0x57a473*/
  if ( TerrainMask > 0 ) /*0x57a477*/
  {
    if ( TerrainMask == 11 || TerrainMask == 26 ) /*0x57a485*/
      v45 = 1; /*0x57a487*/
    if ( (TerrainMask & 0xA0) == 0xA0 && (TerrainMask & 0x11) == 0 /*0x57a4cb*/
      || (TerrainMask & 0x82) == 0x82 && (TerrainMask & 0x44) == 0
      || (TerrainMask & 0xA) == 0xA && (TerrainMask & 0x11) == 0
      || (TerrainMask & 0x28) == 0x28 && (TerrainMask & 0x44) == 0 )
    {
      v45 = 1; /*0x57a4cd*/
    }
    if ( (TerrainMask & 0x20) != 0 ) /*0x57a4d5*/
    {
      v50 = *(_DWORD *)(v5 + 36); /*0x57a4de*/
      v11 = (__int16)(v50 + 1) + (SHIWORD(v50) << 9); /*0x57a4fd*/
      if ( v11 >= 0x40000 || (v12 = *(int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57a513*/
      {
        v12 = unk_ABDC50; /*0x57a519*/
        LOWORD(v46) = v50 + 1; /*0x57a4ef*/
        HIWORD(v46) = HIWORD(*(_DWORD *)(v5 + 36)); /*0x57a4ea*/
        dword_ABDC74 = v46; /*0x57a51e*/
      }
      v52[0] = Cell::GetTerrainMask(a1, v12, 0); /*0x57a52e*/
      v51 = *(_DWORD *)(v5 + 36); /*0x57a535*/
      v13 = (__int16)(v51 + 2) + (SHIWORD(v51) << 9); /*0x57a554*/
      if ( v13 >= 0x40000 || (v14 = *(int **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57a56a*/
      {
        LOWORD(v47) = v51 + 2; /*0x57a546*/
        HIWORD(v47) = HIWORD(*(_DWORD *)(v5 + 36)); /*0x57a541*/
        dword_ABDC74 = v47; /*0x57a570*/
        v14 = unk_ABDC50; /*0x57a575*/
      }
      v15 = Cell::GetTerrainMask(a1, v14, 0); /*0x57a57f*/
      if ( (v52[0] & 2) != 0 || (v15 & 2) != 0 ) /*0x57a58d*/
        v45 = 1; /*0x57a58f*/
    }
    if ( (v10 & 2) != 0 ) /*0x57a597*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a5a0*/
      HIWORD(v48) = HIWORD(v52[0]); /*0x57a5ac*/
      v16 = (__int16)(LOWORD(v52[0]) - 1) + (SHIWORD(v52[0]) << 9); /*0x57a5bf*/
      if ( v16 >= 0x40000 || (v17 = *(int **)(dword_87F924 + 4 * v16)) == 0 ) /*0x57a5d5*/
      {
        LOWORD(v48) = LOWORD(v52[0]) - 1; /*0x57a5b1*/
        dword_ABDC74 = v48; /*0x57a5db*/
        v17 = unk_ABDC50; /*0x57a5e0*/
      }
      v18 = Cell::GetTerrainMask(a1, v17, 0); /*0x57a5ef*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a5f4*/
      HIWORD(v49) = HIWORD(v52[0]); /*0x57a600*/
      v19 = (__int16)(LOWORD(v52[0]) - 2) + (SHIWORD(v52[0]) << 9); /*0x57a613*/
      if ( v19 >= 0x40000 || (v20 = *(int **)(dword_87F924 + 4 * v19)) == 0 ) /*0x57a629*/
      {
        LOWORD(v49) = LOWORD(v52[0]) - 2; /*0x57a605*/
        dword_ABDC74 = v49; /*0x57a62f*/
        v20 = unk_ABDC50; /*0x57a634*/
      }
      v21 = Cell::GetTerrainMask(a1, v20, 0); /*0x57a63e*/
      if ( (v18 & 0x20) != 0 || (v21 & 0x20) != 0 ) /*0x57a64a*/
        v45 = 1; /*0x57a64c*/
      v10 = i; /*0x57a651*/
    }
    if ( (v10 & 8) != 0 ) /*0x57a658*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a661*/
      v22 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) - 1) << 9); /*0x57a67f*/
      if ( v22 >= 0x40000 || (v23 = *(int **)(dword_87F924 + 4 * v22)) == 0 ) /*0x57a695*/
      {
        dword_ABDC74 = v52[0] - 0x10000; /*0x57a69b*/
        v23 = unk_ABDC50; /*0x57a6a0*/
      }
      v24 = Cell::GetTerrainMask(a1, v23, 0); /*0x57a6b2*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a6b4*/
      v25 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) - 2) << 9); /*0x57a6d2*/
      if ( v25 >= 0x40000 || (v26 = *(int **)(dword_87F924 + 4 * v25)) == 0 ) /*0x57a6e8*/
      {
        dword_ABDC74 = v52[0] - 0x20000; /*0x57a6ee*/
        v26 = unk_ABDC50; /*0x57a6f3*/
      }
      v27 = Cell::GetTerrainMask(a1, v26, 0); /*0x57a6fd*/
      if ( v24 < 0 || v27 < 0 ) /*0x57a709*/
        v45 = 1; /*0x57a70b*/
      v10 = i; /*0x57a710*/
    }
    if ( v10 < 0 ) /*0x57a717*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a720*/
      v28 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) + 1) << 9); /*0x57a73e*/
      if ( v28 >= 0x40000 || (v29 = *(int **)(dword_87F924 + 4 * v28)) == 0 ) /*0x57a754*/
      {
        dword_ABDC74 = v52[0] + 0x10000; /*0x57a75a*/
        v29 = unk_ABDC50; /*0x57a75f*/
      }
      v30 = Cell::GetTerrainMask(a1, v29, 0); /*0x57a771*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a773*/
      v31 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) + 2) << 9); /*0x57a791*/
      if ( v31 >= 0x40000 || (v32 = *(int **)(dword_87F924 + 4 * v31)) == 0 ) /*0x57a7a7*/
      {
        dword_ABDC74 = v52[0] + 0x20000; /*0x57a7ad*/
        v32 = unk_ABDC50; /*0x57a7b2*/
      }
      v33 = Cell::GetTerrainMask(a1, v32, 0); /*0x57a7bc*/
      if ( (v30 & 8) != 0 || (v33 & 8) != 0 ) /*0x57a7c8*/
        v45 = 1; /*0x57a7ca*/
      v10 = i; /*0x57a7cf*/
    }
    if ( (v10 & 0x88) == 0x88 || (v10 & 0x22) == 0x22 || v45 ) /*0x57a7ee*/
    {
      i = *(_DWORD *)(v5 + 36); /*0x57a801*/
      v34 = MapClass::GetTileDataField14(&i); /*0x57a805*/
      v35 = a4; /*0x57a80a*/
      v36 = a5; /*0x57a80e*/
      if ( v34 > 0 && v34 != a4 && !(_BYTE)a5 ) /*0x57a81c*/
        return 0; /*0x57a827*/
      v38 = g_CellPassabilityLUT; /*0x57a82a*/
      *(_BYTE *)(v5 + 282) = 0; /*0x57a82f*/
      *(_DWORD *)(v5 + 56) = v38; /*0x57a838*/
      i = *(_DWORD *)(v5 + 36); /*0x57a846*/
      if ( v36 ) /*0x57a83b*/
        MapClass::SetObstruction((__int16 *)&i, 0); /*0x57a84b*/
      else
        MapClass::SetObstruction((__int16 *)&i, v35); /*0x57a85f*/
      v39 = 0; /*0x57a864*/
      for ( i = 0; i < 8; ++i ) /*0x57a866*/
      {
        NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v5, v39); /*0x57a872*/
        v41 = NeighbourContent[9]; /*0x57a87a*/
        v52[0] = v41; /*0x57a87f*/
        v42 = SHIWORD(v41) + (__int16)v41; /*0x57a88b*/
        if ( v42 > dword_ABED04 /*0x57a8b0*/
          && SLOWORD(v52[0]) - SHIWORD(v52[0]) < dword_ABED04
          && SHIWORD(v52[0]) - SLOWORD(v52[0]) < dword_ABED04
          && v42 <= dword_ABED08 )
        {
          v52[0] = v41; /*0x57a8b6*/
          v43 = Tactical::GetCellData((__int16 *)v52); /*0x57a8ba*/
          v44 = a5; /*0x57a8bf*/
          *((_DWORD *)v43 + 16) = -1; /*0x57a8c7*/
          RecursiveCellClassNeighbourUpdate(NeighbourContent, a4, v44); /*0x57a8d5*/
        }
        v39 = i + 1; /*0x57a8de*/
      }
    }
  }
  return 1; /*0x57a81e*/
}



// ==== 0x0057A900  sub_57A900  this=-  sig=ida-proto ====
int __fastcall sub_57A900(Cell *a1, signed int a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  Cell *NeighbourContent; // esi
  Cell *v6; // edi
  char IsValidHeight; // al
  bool v8; // bl
  bool v10; // [esp+13h] [ebp-15h]
  int v11; // [esp+14h] [ebp-14h]
  unsigned int v12[4]; // [esp+18h] [ebp-10h]

  v12[1] = 4; /*0x57a913*/
  v12[3] = 4; /*0x57a917*/
  v12[0] = 2; /*0x57a91d*/
  v12[2] = 2; /*0x57a921*/
  v3 = 1; /*0x57a928*/
  v4 = v12[a2 / 2]; /*0x57a92f*/
  NeighbourContent = (Cell *)Cell::GetNeighbourContent(a1, v4); /*0x57a939*/
  v6 = (Cell *)Cell::GetNeighbourContent(NeighbourContent, a2); /*0x57a945*/
  v10 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a950*/
  IsValidHeight = Cell::IsValidHeight(v6); /*0x57a955*/
  if ( v10 ) /*0x57a960*/
  {
    while ( IsValidHeight ) /*0x57a96a*/
    {
      v11 = v3 + 1; /*0x57a970*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, v4); /*0x57a97b*/
      v6 = (Cell *)Cell::GetNeighbourContent(v6, v4); /*0x57a985*/
      v8 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a990*/
      IsValidHeight = Cell::IsValidHeight(v6); /*0x57a993*/
      if ( !v8 ) /*0x57a99a*/
        return v11; /*0x57a9a7*/
      v3 = v11; /*0x57a964*/
    }
  }
  return v3; /*0x57a9a0*/
}



// ==== 0x0057A9C0  InitializeCliffRampTable  this=-  sig=ida-proto ====
int *InitializeCliffRampTable()
{
  int *result; // eax
  int v1; // [esp+8h] [ebp-4h] BYREF

  dword_ABDB68 = -65536; /*0x57a9f2*/
  dword_ABDB6C = -65536; /*0x57aa05*/
  dword_ABDB70 = -65536; /*0x57aa1b*/
  v1 = -1; /*0x57aa21*/
  dword_ABDB74 = -65536; /*0x57aa31*/
  dword_ABDB78 = -131072; /*0x57aa44*/
  dword_ABDB7C = -65537; /*0x57aa50*/
  dword_ABDB80 = -1; /*0x57aa56*/
  dword_ABDB84 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57aa63*/
  dword_ABDB88 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa7b*/
  dword_ABDB8C = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa8e*/
  dword_ABDB90 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa9b*/
  dword_ABDB94 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aab4*/
  dword_ABDB98 = *(_DWORD *)CellStruct::Set(&v1, -2, -1); /*0x57aac8*/
  dword_ABDB9C = *(_DWORD *)CellStruct::Set(&v1, -2, 0); /*0x57aad5*/
  dword_ABDBA0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aae8*/
  dword_ABDBA4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab00*/
  dword_ABDBA8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab0d*/
  dword_ABDBAC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab25*/
  dword_ABDBB0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab38*/
  dword_ABDBB4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab45*/
  dword_ABDBB8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab5d*/
  dword_ABDBBC = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab70*/
  dword_ABDBC0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab7d*/
  dword_ABDBC4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab95*/
  dword_ABDBC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57aba8*/
  dword_ABDBCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abb5*/
  dword_ABDBD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abcd*/
  dword_ABDBD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abe0*/
  dword_ABDBD8 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57abed*/
  dword_ABDBDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac05*/
  dword_ABDBE0 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac18*/
  dword_ABDBE4 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac25*/
  dword_ABDBE8 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac3d*/
  dword_ABDBEC = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac50*/
  dword_ABDBF0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac5d*/
  dword_ABDBF4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac75*/
  dword_ABDBF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac88*/
  dword_ABDBFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac95*/
  dword_ABDC00 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acad*/
  dword_ABDC04 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acc0*/
  dword_ABDC08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57accd*/
  result = (int *)CellStruct::Set(&v1, 0, 0); /*0x57acd8*/
  dword_ABDC0C = *result; /*0x57ace0*/
  return result; /*0x57acdf*/
}



// ==== 0x0057ACF0  GenerateMapClassCliffTransitions  this=MapClass  sig=csp ====
bool __fastcall GenerateMapClassCliffTransitions(Cell *a1, int a2, Cell *a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int TerrainMask; // eax
  char v11; // bl
  int v12; // ebp
  int v13; // eax
  Cell *NeighbourContent; // esi
  Cell *v15; // edi
  char IsValidHeight; // al
  Cell *v17; // esi
  Cell *v18; // edi
  char v19; // al
  Cell *v20; // esi
  Cell *v21; // edi
  char v22; // al
  Cell *v23; // esi
  Cell *v24; // edi
  char v25; // al
  Cell *v26; // esi
  int v27; // ecx
  __int16 v28; // dx
  __int16 v29; // ax
  bool v31; // [esp+13h] [ebp-Dh]
  bool v32; // [esp+13h] [ebp-Dh]
  bool v33; // [esp+13h] [ebp-Dh]
  bool v34; // [esp+13h] [ebp-Dh]
  bool v35; // [esp+13h] [ebp-Dh]
  bool v36; // [esp+13h] [ebp-Dh]
  bool v37; // [esp+13h] [ebp-Dh]
  bool v38; // [esp+13h] [ebp-Dh]
  _DWORD v39[2]; // [esp+14h] [ebp-Ch] BYREF
  int v40; // [esp+1Ch] [ebp-4h] BYREF

  v39[1] = a1; /*0x57ad00*/
  v7 = Range_RandomInt(0, 5u); /*0x57ad04*/
  v8 = a4; /*0x57ad09*/
  v9 = v7; /*0x57ad0d*/
  if ( a4 == 2 ) /*0x57ad12*/
    TerrainMask = Cell::GetTerrainMask(a1, &a3->Cell_field_0x0, 1); /*0x57ad1b*/
  else
    TerrainMask = Cell::GetTerrainMask(a1, &a3->Cell_field_0x0, 0); /*0x57ad26*/
  v11 = TerrainMask; /*0x57ad2b*/
  if ( !TerrainMask ) /*0x57ad2f*/
    return 1; /*0x57ad2f*/
  if ( v8 != 2 ) /*0x57ad38*/
  {
    if ( (TerrainMask & 2) != 0 ) /*0x57ae12*/
    {
      v39[0] = 1; /*0x57ae1e*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(a3, 4u); /*0x57ae2b*/
      v15 = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 2u); /*0x57ae38*/
      v31 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae43*/
      IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae48*/
      if ( v31 ) /*0x57ae53*/
      {
        do /*0x57ae93*/
        {
          if ( !IsValidHeight ) /*0x57ae57*/
            break; /*0x57ae57*/
          ++v39[0]; /*0x57ae62*/
          NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 4u); /*0x57ae6f*/
          v15 = (Cell *)Cell::GetNeighbourContent(v15, 4u); /*0x57ae78*/
          v32 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae83*/
          IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae88*/
        }
        while ( v32 ); /*0x57ae93*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 4) == 0 || (v11 & 0x18) != 0 ) /*0x57aeb3*/
      {
        v13 = 12; /*0x57aea1*/
        goto LABEL_71; /*0x57aea6*/
      }
      v13 = abs32(v9 % 3) + 9; /*0x57aec6*/
    }
    else if ( (TerrainMask & 0x20) != 0 ) /*0x57aed1*/
    {
      v39[0] = 1; /*0x57aedd*/
      v17 = (Cell *)Cell::GetNeighbourContent(a3, 4u); /*0x57aeea*/
      v18 = (Cell *)Cell::GetNeighbourContent(v17, 6u); /*0x57aef7*/
      v33 = (unsigned __int8)Cell::IsValidHeight(v17) == 0; /*0x57af02*/
      v19 = Cell::IsValidHeight(v18); /*0x57af07*/
      if ( v33 ) /*0x57af12*/
      {
        do /*0x57af52*/
        {
          if ( !v19 ) /*0x57af16*/
            break; /*0x57af16*/
          ++v39[0]; /*0x57af21*/
          v17 = (Cell *)Cell::GetNeighbourContent(v17, 4u); /*0x57af2e*/
          v18 = (Cell *)Cell::GetNeighbourContent(v18, 4u); /*0x57af37*/
          v34 = (unsigned __int8)Cell::IsValidHeight(v17) == 0; /*0x57af42*/
          v19 = Cell::IsValidHeight(v18); /*0x57af47*/
        }
        while ( v34 ); /*0x57af52*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 0x10) == 0 || (v11 & 0xC) != 0 ) /*0x57af72*/
      {
        v13 = 28; /*0x57af60*/
        goto LABEL_71; /*0x57af65*/
      }
      v13 = v9 % 3 + 25; /*0x57af80*/
    }
    else if ( (TerrainMask & 8) != 0 ) /*0x57af8b*/
    {
      v39[0] = 1; /*0x57af97*/
      v20 = (Cell *)Cell::GetNeighbourContent(a3, 2u); /*0x57afa4*/
      v21 = (Cell *)Cell::GetNeighbourContent(v20, 4u); /*0x57afb1*/
      v35 = (unsigned __int8)Cell::IsValidHeight(v20) == 0; /*0x57afbc*/
      v22 = Cell::IsValidHeight(v21); /*0x57afc1*/
      if ( v35 ) /*0x57afcc*/
      {
        do /*0x57b00c*/
        {
          if ( !v22 ) /*0x57afd0*/
            break; /*0x57afd0*/
          ++v39[0]; /*0x57afdb*/
          v20 = (Cell *)Cell::GetNeighbourContent(v20, 2u); /*0x57afe8*/
          v21 = (Cell *)Cell::GetNeighbourContent(v21, 2u); /*0x57aff1*/
          v36 = (unsigned __int8)Cell::IsValidHeight(v20) == 0; /*0x57affc*/
          v22 = Cell::IsValidHeight(v21); /*0x57b001*/
        }
        while ( v36 ); /*0x57b00c*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 4) == 0 || (v11 & 3) != 0 ) /*0x57b027*/
      {
        v13 = 4; /*0x57b015*/
        goto LABEL_71; /*0x57b01a*/
      }
      v13 = v9 % 3 + 1; /*0x57b035*/
    }
    else
    {
      if ( (TerrainMask & 0x80u) == 0 ) /*0x57b03e*/
      {
LABEL_61:
        if ( (v11 & 1) != 0 ) /*0x57b0f0*/
        {
          v12 = (v9 & 1) + 35; /*0x57b0f5*/
        }
        else if ( (v11 & 4) != 0 ) /*0x57b0fd*/
        {
          v12 = (v9 & 1) + 33; /*0x57b102*/
        }
        else if ( (v11 & 0x10) != 0 ) /*0x57b10a*/
        {
          v12 = (v9 & 1) + 39; /*0x57b10f*/
        }
        else
        {
          if ( (v11 & 0x40) == 0 ) /*0x57b117*/
            return 1; /*0x57b117*/
          v12 = (v9 & 1) + 37; /*0x57b120*/
        }
        goto LABEL_69; /*0x57b0f8*/
      }
      v39[0] = 1; /*0x57b04a*/
      v23 = (Cell *)Cell::GetNeighbourContent(a3, 2u); /*0x57b057*/
      v24 = (Cell *)Cell::GetNeighbourContent(v23, 0); /*0x57b064*/
      v37 = (unsigned __int8)Cell::IsValidHeight(v23) == 0; /*0x57b06f*/
      v25 = Cell::IsValidHeight(v24); /*0x57b074*/
      if ( v37 ) /*0x57b07f*/
      {
        do /*0x57b0bf*/
        {
          if ( !v25 ) /*0x57b083*/
            break; /*0x57b083*/
          ++v39[0]; /*0x57b08e*/
          v23 = (Cell *)Cell::GetNeighbourContent(v23, 2u); /*0x57b09b*/
          v24 = (Cell *)Cell::GetNeighbourContent(v24, 2u); /*0x57b0a4*/
          v38 = (unsigned __int8)Cell::IsValidHeight(v23) == 0; /*0x57b0af*/
          v25 = Cell::IsValidHeight(v24); /*0x57b0b4*/
        }
        while ( v38 ); /*0x57b0bf*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 1) == 0 || (v11 & 6) != 0 ) /*0x57b0d7*/
      {
        v13 = 20; /*0x57b0c8*/
        goto LABEL_71; /*0x57b0cd*/
      }
      v13 = v9 % 3 + 17; /*0x57b0e5*/
    }
    if ( v13 != -1 ) /*0x57b0eb*/
      goto LABEL_70; /*0x57b0eb*/
    goto LABEL_61; /*0x57b0eb*/
  }
  if ( (TerrainMask & 0xA0) == 0xA0 )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57ad50*/
    {
      v12 = (v9 & 1) + 23; /*0x57ad55*/
LABEL_69:
      v13 = v12; /*0x57b123*/
LABEL_70:
      if ( v13 <= 0 ) /*0x57b127*/
        return 1; /*0x57b127*/
      goto LABEL_71; /*0x57b127*/
    }
    v13 = (TerrainMask & 1) != 0 ? 21 : 30;
  }
  else if ( (TerrainMask & 0x82) == 0x82 )
  {
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57ad86*/
    {
      v12 = (v9 & 1) + 15; /*0x57ad8b*/
      goto LABEL_69; /*0x57ad8e*/
    }
    v13 = (TerrainMask & 4) != 0 ? 14 : 22;
  }
  else if ( (TerrainMask & 0xA) == 0xA )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57adb8*/
    {
      v12 = (v9 & 1) + 7; /*0x57adbd*/
      goto LABEL_69; /*0x57adc0*/
    }
    v13 = (TerrainMask & 1) != 0 ? 13 : 6;
  }
  else
  {
    if ( (TerrainMask & 0x28) != 0x28 ) /*0x57ade1*/
      return 1; /*0x57ade1*/
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57adee*/
    {
      v12 = (v9 & 1) + 31; /*0x57adf3*/
      goto LABEL_69; /*0x57adf6*/
    }
    v13 = (TerrainMask & 4) != 0 ? 5 : 29;
  }
LABEL_71:
  v26 = a3; /*0x57b12d*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (v13 + dword_ABAD28) - 4); /*0x57b143*/
  v27 = *(_DWORD *)&a3->__pad_1C[8]; /*0x57b149*/
  v28 = g_MissionQueueFrame.briefing[v13 + 71]; /*0x57b14c*/
  v29 = HIWORD(g_MissionQueueFrame.briefing[v13 + 71]); /*0x57b154*/
  LOWORD(a3) = v27 + v28; /*0x57b168*/
  HIWORD(a3) = HIWORD(v27) + v29; /*0x57b16d*/
  v39[0] = a3; /*0x57b17e*/
  Tactical::MouseMove((Tactical *)&stru_87F5F0.__pad_58[416], &v40, v39); /*0x57b189*/
  LOBYTE(a3) = 1; /*0x57b192*/
  if ( a4 == 1 ) /*0x57b19a*/
  {
    GenerateTerrainMap(0, 0, v26->Cell_field_0x11B[0], a5, &a3, a6); /*0x57b1b7*/
  }
  else
  {
    if ( a4 != 2 ) /*0x57b1bc*/
      return 1; /*0x57b1bc*/
    GenerateTerrainMap(dword_ABAD28, dword_ABAD28 + 41, v26->Cell_field_0x11B[0], a5, &a3, a6); /*0x57b1e3*/
  }
  return (_BYTE)a3 != 0; /*0x57b1ee*/
}



// ==== 0x0057B210  Cell::GetTerrainMask  this=MapClass  sig=csp ====
int __thiscall Cell::GetTerrainMask(Cell *this, int *a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // eax
  char *CellData; // eax
  _DWORD *Cell_field_0x13C; // edx
  int v11; // esi
  Cell *v12; // ecx
  _DWORD *v13; // esi
  char v14; // bl
  int v15; // edi
  Cell *v16; // ecx
  _DWORD *v17; // esi
  Cell *v18; // ecx
  _DWORD *v19; // esi
  Cell *v20; // ecx
  _DWORD *v21; // esi
  Cell *v22; // ecx
  _DWORD *v23; // esi
  Cell *v24; // ecx
  _DWORD *v25; // esi
  Cell *v26; // ecx
  _DWORD *v27; // esi
  Cell *v28; // ecx
  _DWORD *v29; // esi
  int v30; // [esp+18h] [ebp-8h]
  char IsValidHeight; // [esp+24h] [ebp+4h]

  v3 = g_CellPassabilityLUT; /*0x57b214*/
  v5 = a2[9]; /*0x57b224*/
  v30 = g_CellPassabilityLUT + 14; /*0x57b239*/
  IsValidHeight = Cell::IsValidHeight((Cell *)a2); /*0x57b248*/
  v6 = SHIWORD(v5) + (__int16)v5; /*0x57b254*/
  if ( v6 <= g_MissionQueueFrame.localVariables[160] /*0x57b271*/
    || (__int16)v5 - SHIWORD(v5) >= g_MissionQueueFrame.localVariables[160]
    || SHIWORD(v5) - (__int16)v5 >= g_MissionQueueFrame.localVariables[160]
    || v6 > g_MissionQueueFrame.localVariables[161] )
  {
    return 0; /*0x57b27c*/
  }
  if ( a3 ) /*0x57b285*/
  {
    if ( a3 == 1 ) /*0x57b2a1*/
    {
      v8 = a2[14]; /*0x57b2a3*/
      if ( v8 >= v3 && v8 < v30 ) /*0x57b2ae*/
        return 0; /*0x57b2b9*/
    }
  }
  else if ( !(unsigned __int8)Cell::IsEmpty((Cell *)a2) ) /*0x57b289*/
  {
    return 0; /*0x57b29b*/
  }
  a3 = a2[9]; /*0x57b2c3*/
  CellData = Tactical::GetCellData((Tactical *)&a3); /*0x57b2c7*/
  if ( !CellData[74] ) /*0x57b2cc*/
    return 0; /*0x57b2d6*/
  result = *((_DWORD *)CellData + 16); /*0x57b2df*/
  if ( result < 0 ) /*0x57b2e4*/
  {
    Cell_field_0x13C = this->Cell_field_0x13C; /*0x57b2f1*/
    v11 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x57b2f7*/
    v12 = (Cell *)Cell_field_0x13C[v11 - 513]; /*0x57b2f9*/
    v13 = &Cell_field_0x13C[v11 - 513]; /*0x57b300*/
    if ( v12 && (unsigned __int8)Cell::IsValidHeight(v12) ) /*0x57b30b*/
    {
      v14 = IsValidHeight; /*0x57b328*/
      v15 = 64; /*0x57b32c*/
    }
    else if ( *v13 ) /*0x57b314*/
    {
      v15 = 0; /*0x57b333*/
      v14 = IsValidHeight; /*0x57b337*/
    }
    else
    {
      v14 = IsValidHeight; /*0x57b319*/
      if ( IsValidHeight ) /*0x57b31f*/
        v15 = 64; /*0x57b321*/
      else
        v15 = 0; /*0x57b33d*/
    }
    v16 = (Cell *)v13[1]; /*0x57b341*/
    v17 = v13 + 1; /*0x57b344*/
    if ( v16 && (unsigned __int8)Cell::IsValidHeight(v16) || !*v17 && v14 ) /*0x57b35b*/
      v15 |= 0x80u; /*0x57b35d*/
    v18 = (Cell *)v17[1]; /*0x57b363*/
    v19 = v17 + 1; /*0x57b366*/
    if ( v18 && (unsigned __int8)Cell::IsValidHeight(v18) || !*v19 && v14 ) /*0x57b37d*/
      v15 |= 1u; /*0x57b37f*/
    v20 = (Cell *)v19[510]; /*0x57b382*/
    v21 = v19 + 510; /*0x57b388*/
    if ( v20 && (unsigned __int8)Cell::IsValidHeight(v20) || !*v21 && v14 ) /*0x57b3a2*/
      v15 |= 0x20u; /*0x57b3a4*/
    v22 = (Cell *)v21[2]; /*0x57b3a7*/
    v23 = v21 + 2; /*0x57b3aa*/
    if ( v22 && (unsigned __int8)Cell::IsValidHeight(v22) || !*v23 && v14 ) /*0x57b3c1*/
      v15 |= 2u; /*0x57b3c3*/
    v24 = (Cell *)v23[510]; /*0x57b3c6*/
    v25 = v23 + 510; /*0x57b3cc*/
    if ( v24 && (unsigned __int8)Cell::IsValidHeight(v24) || !*v25 && v14 ) /*0x57b3e6*/
      v15 |= 0x10u; /*0x57b3e8*/
    v26 = (Cell *)v25[1]; /*0x57b3eb*/
    v27 = v25 + 1; /*0x57b3ee*/
    if ( v26 && (unsigned __int8)Cell::IsValidHeight(v26) || !*v27 && v14 ) /*0x57b405*/
      v15 |= 8u; /*0x57b407*/
    v28 = (Cell *)v27[1]; /*0x57b40a*/
    v29 = v27 + 1; /*0x57b40d*/
    if ( v28 && (unsigned __int8)Cell::IsValidHeight(v28) || !*v29 && v14 ) /*0x57b424*/
      return v15 | 4; /*0x57b426*/
    return v15; /*0x57b429*/
  }
  return result; /*0x57b273*/
}



// ==== 0x0057B440  GenerateTerrainMap  this=-  sig=csp ====
char __stdcall Map_GenerateTerrain(int a1, int a2, char a3, int a4, _BYTE *a5, char a6)
{
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  _DWORD *v14; // esi
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v28; // eax
  int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+1Ch] [ebp-10h]
  int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990) != 18 ) /*0x57b455*/
    return 0; /*0x57b455*/
  if ( a6 ) /*0x57b461*/
    a4 = 0; /*0x57b463*/
  v6 = dword_880990; /*0x57b46b*/
  v29 = dword_880990; /*0x57b473*/
  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 156))(dword_880990); /*0x57b482*/
  if ( !v34 ) /*0x57b486*/
    return 0; /*0x57b486*/
  v30 = 0; /*0x57b492*/
  if ( *(int *)(v6 + 744) <= 0 ) /*0x57b49c*/
    return 1; /*0x57b70e*/
  v7 = dword_87F8DC; /*0x57b4a2*/
  while ( 1 ) /*0x57b4a8*/
  {
    v8 = *(_DWORD *)(v6 + 740); /*0x57b4a8*/
    v9 = 0; /*0x57b4ae*/
    v32 = 0; /*0x57b4b2*/
    if ( v8 > 0 ) /*0x57b4b6*/
      break; /*0x57b4b6*/
LABEL_39:
    if ( ++v30 >= *(_DWORD *)(v6 + 744) ) /*0x57b6a4*/
      return 1; /*0x57b6b3*/
  }
  while ( 1 ) /*0x57b4d0*/
  {
    LOWORD(v33) = v9 + dword_88095C; /*0x57b4d0*/
    v10 = (__int16)(v9 + dword_88095C); /*0x57b4d5*/
    HIWORD(v33) = HIWORD(dword_88095C) + v30; /*0x57b4d8*/
    v11 = (__int16)(HIWORD(dword_88095C) + v30); /*0x57b4e1*/
    v31 = v33; /*0x57b4e4*/
    v12 = (__int16)v10 + v11; /*0x57b4e8*/
    if ( v12 <= v7 || v10 - v11 >= v7 || v11 - v10 >= v7 || v12 > v7 + 2 * dword_87F8E0 ) /*0x57b516*/
      goto LABEL_38; /*0x57b516*/
    v13 = v10 + (v11 << 9); /*0x57b51f*/
    if ( v13 >= 0x40000 || (v14 = *(_DWORD **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57b535*/
    {
      dword_ABDC74 = v33; /*0x57b537*/
      v14 = &unk_ABDC50; /*0x57b53d*/
    }
    v15 = v32 + v30 * *(_DWORD *)(v6 + 740); /*0x57b555*/
    v35 = *(_DWORD *)(v34 + 4 * v15 + 16); /*0x57b55d*/
    v16 = v35; /*0x57b557*/
    if ( v35 ) /*0x57b561*/
      break; /*0x57b561*/
LABEL_37:
    v6 = v29; /*0x57b678*/
LABEL_38:
    v26 = *(_DWORD *)(v6 + 740); /*0x57b67c*/
    v9 = ++v32; /*0x57b686*/
    if ( v32 >= v26 ) /*0x57b68d*/
      goto LABEL_39; /*0x57b68d*/
  }
  v17 = MapClass::GetTileDataField14(&v31); /*0x57b571*/
  if ( a6 ) /*0x57b57c*/
  {
    v17 = 0; /*0x57b57e*/
LABEL_18:
    v18 = a4; /*0x57b580*/
    goto LABEL_19; /*0x57b580*/
  }
  if ( v17 <= 0 ) /*0x57b5e0*/
    goto LABEL_18; /*0x57b5e0*/
  v18 = a4; /*0x57b5e2*/
  if ( v17 == a4 ) /*0x57b5e8*/
    goto LABEL_20; /*0x57b5e8*/
  if ( a4 != -1 ) /*0x57b5ed*/
  {
    v23 = v14[14] - dword_ABAD28; /*0x57b603*/
    v24 = *(_DWORD *)(v29 + 660) - dword_ABAD28; /*0x57b605*/
    if ( !Cell::IsEmpty(v14) ) /*0x57b60e*/
    {
      if ( v23 < 0 || v24 < 0 || v23 > 41 || v24 > 41 || dword_82A7F4[v23] != dword_82A7F4[v24] ) /*0x57b703*/
      {
        *a5 = 0; /*0x57b718*/
        return 0; /*0x57b721*/
      }
      return 1; /*0x57b703*/
    }
    MapClass::SetObstruction(&v31, a4); /*0x57b623*/
    v16 = v35; /*0x57b628*/
    goto LABEL_32; /*0x57b628*/
  }
LABEL_19:
  if ( v17 == v18 ) /*0x57b586*/
  {
LABEL_20:
    v19 = v14[14] - dword_ABAD28; /*0x57b58c*/
    v20 = *(_DWORD *)(v29 + 660) - dword_ABAD28; /*0x57b5a1*/
    if ( v19 >= 0 && v20 >= 0 && v19 <= 41 && v20 <= 41 ) /*0x57b5b7*/
    {
      v21 = dword_82A89C[v19] - dword_82A89C[v20]; /*0x57b5c9*/
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x57b5cc*/
      if ( v22 >= 3 && v22 <= 5 ) /*0x57b5d6*/
      {
        *a5 = 0; /*0x57b72b*/
        return 0; /*0x57b734*/
      }
    }
    goto LABEL_32; /*0x57b5d6*/
  }
  if ( !Cell::IsEmpty(v14) ) /*0x57b6bf*/
  {
    if ( v18 != -1 ) /*0x57b6d9*/
      goto LABEL_58; /*0x57b6d9*/
    goto LABEL_36; /*0x57b6d9*/
  }
  MapClass::SetObstruction(&v31, v18); /*0x57b6cc*/
LABEL_32:
  if ( Cell::IsEmpty(v14) || (v25 = v14[14], v25 >= a1) && v25 <= a2 ) /*0x57b64a*/
  {
    v14[14] = *(_DWORD *)(v29 + 660); /*0x57b65e*/
    *((_BYTE *)v14 + 282) = v15; /*0x57b661*/
    *((_BYTE *)v14 + 283) = a3 + *(_BYTE *)(v16 + 40); /*0x57b66c*/
LABEL_36:
    v7 = dword_87F8DC; /*0x57b672*/
    goto LABEL_37; /*0x57b672*/
  }
  if ( (unsigned __int8)CellClass::IsTerrainType(v14) && (unsigned __int8)Map_Helper(*(_DWORD *)(v29 + 660), v15) /*0x57b774*/
    || (v28 = *(_DWORD *)(v29 + 660), v28 >= dword_ABAD28) && v28 < dword_ABAD28 + 42 && CellLand::IsBuildable((int)v14) )
  {
LABEL_58:
    *a5 = 0; /*0x57b77d*/
  }
  return 0; /*0x57b6aa*/
}



// ==== 0x0057B790  MapClass::TriggerEVA  this=MapClass  sig=csp ====
int __stdcall MapClass_TriggerEVA(__int16 *a1)
{
  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int result; // eax
  unsigned int v5; // eax
  void *v6; // ecx

  v1 = -5; /*0x57b79f*/
  do /*0x57b854*/
  {
    v2 = -5; /*0x57b7a4*/
    do /*0x57b84a*/
    {
      v3 = Math::Sqrt( /*0x57b7f6*/
             (double)(__int16)-(__int16)v1 * (double)(__int16)-(__int16)v1
           + (double)(__int16)-(__int16)v2 * (double)(__int16)-(__int16)v2);
      result = Math::RoundToInt(v3); /*0x57b7fe*/
      if ( (__int16)result <= 5 ) /*0x57b807*/
      {
        v5 = *a1 + (a1[1] << 9); /*0x57b813*/
        if ( v5 < 0x40000 && (result = *(_DWORD *)(dword_87F924 + 4 * v5)) != 0 ) /*0x57b829*/
        {
          v6 = (void *)result; /*0x57b82b*/
        }
        else
        {
          result = *(_DWORD *)a1; /*0x57b82f*/
          v6 = &unk_ABDC50; /*0x57b831*/
          dword_ABDC74 = *(_DWORD *)a1; /*0x57b836*/
        }
        if ( v6 ) /*0x57b83d*/
          result = CellClass::ReduceTiberium((int)v6, 1); /*0x57b841*/
      }
      ++v2; /*0x57b846*/
    }
    while ( v2 <= 5 ); /*0x57b84a*/
    ++v1; /*0x57b850*/
  }
  while ( v1 <= 5 ); /*0x57b854*/
  return result; /*0x57b85a*/
}



// ==== 0x0057B870  ObjectClass::Map_Create  this=ObjectClass  sig=csp ====
int __thiscall Map_Create(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  HIWORD(v8) = HIWORD(this->AbstractClass); /*0x57b87a*/
  LOWORD(v8) = LOWORD(this->AbstractClass) - 1; /*0x57b882*/
  v1 = (__int16)v8 + (SHIWORD(v8) << 9); /*0x57b895*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57b8a5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57b8ab*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57b8b0*/
  }
  v3 = v2[17]; /*0x57b8bc*/
  HIWORD(v9) = HIWORD(this->AbstractClass); /*0x57b8c4*/
  LOWORD(v9) = LOWORD(this->AbstractClass) + 1; /*0x57b8c9*/
  v4 = (__int16)v9 + (SHIWORD(v9) << 9); /*0x57b8d4*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57b8e4*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57b8ea*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57b8ef*/
  }
  v6 = 0; /*0x57b8f8*/
  switch ( v5[17] ) /*0x57b90a*/
  {
    case 'N': /*0x57b90a*/
    case 'P': /*0x57b90a*/
    case 'R': /*0x57b90a*/
    case ']': /*0x57b90a*/
      v6 = 1; /*0x57b911*/
      break; /*0x57b916*/
    case 'Q': /*0x57b90a*/
    case 'd': /*0x57b90a*/
      v6 = 2; /*0x57b918*/
      break; /*0x57b918*/
    default:
      break;
  }
  switch ( v3 ) /*0x57b92f*/
  {
    case 'O': /*0x57b92f*/
    case 'P': /*0x57b92f*/
    case 'Q': /*0x57b92f*/
    case '_': /*0x57b92f*/
      result = v6 | 4; /*0x57b939*/
      break; /*0x57b93c*/
    case 'R': /*0x57b92f*/
    case 'd': /*0x57b92f*/
      v6 |= 8u; /*0x57b93d*/
      goto LABEL_13; /*0x57b93d*/
    default:
LABEL_13:
      result = v6; /*0x57b940*/
      break; /*0x57b940*/
  }
  return result; /*0x57b920*/
}



// ==== 0x0057B990  ObjectClass::Map_Create_57B990  this=ObjectClass  sig=csp ====
char __thiscall Map_Create_57B990(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edi
  char result; // al

  v1 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass - 0x10000) >> 16) << 9); /*0x57b9b4*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57b9c4*/
  {
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass - 0x10000; /*0x57b9ca*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57b9cf*/
  }
  v3 = v2[17]; /*0x57b9dc*/
  v4 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass + 0x10000) >> 16) << 9); /*0x57b9f4*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57ba04*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57ba0a*/
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass + 0x10000; /*0x57ba0f*/
  }
  v6 = v5[17]; /*0x57ba15*/
  result = 0; /*0x57ba1b*/
  switch ( v3 ) /*0x57ba2b*/
  {
    case 'W': /*0x57ba2b*/
    case 'Y': /*0x57ba2b*/
    case '[': /*0x57ba2b*/
    case 'a': /*0x57ba2b*/
      result = 1; /*0x57ba32*/
      break; /*0x57ba37*/
    case 'Z': /*0x57ba2b*/
    case 'e': /*0x57ba2b*/
      result = 2; /*0x57ba39*/
      break; /*0x57ba39*/
    default:
      break;
  }
  switch ( v6 ) /*0x57ba4f*/
  {
    case 'X': /*0x57ba4f*/
    case 'Y': /*0x57ba4f*/
    case 'Z': /*0x57ba4f*/
    case 'c': /*0x57ba4f*/
      result |= 4u; /*0x57ba56*/
      break; /*0x57ba59*/
    case '[': /*0x57ba4f*/
    case 'e': /*0x57ba4f*/
      result |= 8u; /*0x57ba5a*/
      break; /*0x57ba5a*/
    default:
      return result;
  }
  return result; /*0x57ba41*/
}



// ==== 0x0057BAA0  CellClass::CheckTilePassable2  this=CellClass  sig=csp ====
int __stdcall CellClass::CheckTilePassable2(int a1)
{
  CellClass *v1; // ecx
  __int16 *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (__int16 *)a1; /*0x57baa4*/
  v3 = v1; /*0x57baa9*/
  v4 = *(__int16 *)a1 + (*(__int16 *)(a1 + 2) << 9); /*0x57bab5*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57bacb*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a1; /*0x57bacf*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57bad4*/
  }
  result = v5[17]; /*0x57bad9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x57baf3*/
  {
    v7 = *(_WORD *)(a1 + 2); /*0x57bafc*/
    LOWORD(a1) = *(_WORD *)a1; /*0x57bb00*/
    HIWORD(a1) = v7 - 1; /*0x57bb0b*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bb23*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57bb2e*/
    {
      v10 = v2[1] - 2; /*0x57bb66*/
      LOWORD(a1) = *v2; /*0x57bb6a*/
      HIWORD(a1) = v10; /*0x57bb6f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bb8b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x57bb96*/
      {
        v12 = v2[1]; /*0x57bbab*/
        LOWORD(a1) = *v2; /*0x57bbaf*/
        HIWORD(a1) = v12 - 1; /*0x57bbba*/
        LOBYTE(result) = CellClass::ApplyTileModification(v3, (__int16 *)&a1); /*0x57bbca*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification(v3, v2); /*0x57bb9b*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57bb37*/
      LOWORD(a1) = *v2; /*0x57bb39*/
      HIWORD(a1) = v9; /*0x57bb3e*/
      LOBYTE(result) = CellClass::ApplyTileModification(v3, (__int16 *)&a1); /*0x57bb52*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x57bbee*/
  {
    v13 = *(_WORD *)a1 - 1; /*0x57bbfb*/
    HIWORD(a1) = *(_WORD *)(a1 + 2); /*0x57bbfd*/
    LOWORD(a1) = v13; /*0x57bc02*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bc1e*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x57bc29*/
    {
      v16 = *v2 - 2; /*0x57bc61*/
      HIWORD(a1) = v2[1]; /*0x57bc65*/
      LOWORD(a1) = v16; /*0x57bc6a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bc86*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x57bc91*/
      {
        a1 = 1; /*0x57bcaf*/
        *(_DWORD *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a1); /*0x57bcc8*/
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v18); /*0x57bccf*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v2); /*0x57bc96*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57bc32*/
      HIWORD(a1) = v2[1]; /*0x57bc34*/
      LOWORD(a1) = v15; /*0x57bc39*/
      LOBYTE(result) = CellClass::ApplyTileModification2(v3, (__int16 *)&a1); /*0x57bc4d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57bcdd*/
  }
  return result; /*0x57bb57*/
}



// ==== 0x0057BCF0  CellClass::ApplyTileModification  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // ax
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // ax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+10h] [ebp-B0h]
  int v54; // [esp+10h] [ebp-B0h]
  int v55; // [esp+10h] [ebp-B0h]
  int v56; // [esp+14h] [ebp-ACh] BYREF
  char v57; // [esp+1Bh] [ebp-A5h]
  int v58; // [esp+1Ch] [ebp-A4h]
  int v59; // [esp+20h] [ebp-A0h]
  Terrain *v60; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v62; // [esp+38h] [ebp-88h]
  int v63; // [esp+3Ch] [ebp-84h]
  int v64; // [esp+40h] [ebp-80h] BYREF
  int v65; // [esp+44h] [ebp-7Ch]
  int v66; // [esp+48h] [ebp-78h]
  int v67; // [esp+4Ch] [ebp-74h]
  int v68; // [esp+50h] [ebp-70h]
  int v69; // [esp+54h] [ebp-6Ch]
  LONG v70; // [esp+58h] [ebp-68h]
  LONG v71; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v73; // [esp+70h] [ebp-50h] BYREF
  LONG v74; // [esp+78h] [ebp-48h]
  _DWORD v75[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v77[4]; // [esp+A0h] [ebp-20h] BYREF

  v60 = (Terrain *)this; /*0x57bd06*/
  v2 = *a2 + (a2[1] << 9); /*0x57bd15*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57bd2a*/
  {
    v4 = v3; /*0x57bd2c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57bd32*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57bd34*/
  }
  v5 = a2[1] - 1; /*0x57bd40*/
  LOWORD(v58) = *a2; /*0x57bd42*/
  HIWORD(v58) = v5; /*0x57bd47*/
  v6 = (__int16)v58 + (v5 << 9); /*0x57bd55*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57bd65*/
  {
    v59 = v7; /*0x57bd67*/
  }
  else
  {
    v59 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57bd71*/
    g_MissionQueueFrame.briefing[139] = v58; /*0x57bd75*/
  }
  v8 = a2[1] + 1; /*0x57bd81*/
  LOWORD(v58) = *a2; /*0x57bd83*/
  HIWORD(v58) = v8; /*0x57bd88*/
  v9 = (__int16)v58 + (v8 << 9); /*0x57bd96*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57bda6*/
  {
    v58 = v10; /*0x57bda8*/
  }
  else
  {
    v11 = v58; /*0x57bdae*/
    v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57bdb2*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57bdb6*/
  }
  v56 = v4->?[2]; /*0x57bdc6*/
  LOBYTE(v63) = 0; /*0x57bdca*/
  v57 = 0; /*0x57bdcf*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v73); /*0x57bde0*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57bde2*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57bdf7*/
  {
    v15 = *PlacementRect; /*0x57bea8*/
    v24 = PlacementRect[1]; /*0x57beaa*/
    right = PlacementRect[2]; /*0x57bead*/
    bottom = PlacementRect[3]; /*0x57beb0*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57be02*/
    if ( v50 <= 0 || (v62 = PlacementRect[3], v62 <= 0) ) /*0x57be15*/
    {
      v15 = *StartCoords; /*0x57be9b*/
      v24 = StartCoords[1]; /*0x57be9d*/
      right = StartCoords[2]; /*0x57bea0*/
      bottom = StartCoords[3]; /*0x57bea3*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57be1b*/
      v15 = *StartCoords; /*0x57be1e*/
      v16 = StartCoords[1]; /*0x57be20*/
      v17 = StartCoords[3]; /*0x57be23*/
      rcDst.right = v14; /*0x57be26*/
      v18 = *PlacementRect; /*0x57be2a*/
      v19 = v15 <= *PlacementRect; /*0x57be2c*/
      rcDst.bottom = v17; /*0x57be2e*/
      if ( !v19 ) /*0x57be32*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57be3a*/
        v15 = v18; /*0x57be3c*/
        rcDst.right = v20; /*0x57be3e*/
      }
      v21 = PlacementRect[1]; /*0x57be42*/
      rcSrc2.left = v21; /*0x57be47*/
      if ( v16 > v21 ) /*0x57be4b*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57be53*/
        v16 = v21; /*0x57be55*/
        rcDst.bottom = v22; /*0x57be57*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57be69*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57be75*/
      bottom = rcDst.bottom; /*0x57be83*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v62 ) /*0x57be8c*/
        bottom = rcSrc2.left + v62 - v16 + 1; /*0x57be91*/
      v24 = v16; /*0x57be93*/
      right = rcDst.right; /*0x57be95*/
    }
  }
  v71 = bottom; /*0x57beb3*/
  v70 = right; /*0x57bebb*/
  v68 = v15; /*0x57bec4*/
  v69 = v24; /*0x57bec8*/
  v64 = 0; /*0x57becc*/
  v65 = 0; /*0x57bed0*/
  v66 = 0; /*0x57bed4*/
  v67 = 0; /*0x57bed8*/
  if ( v56 == 92 ) /*0x57bedc*/
  {
    v26 = v58; /*0x57bee2*/
    *(_DWORD *)(v59 + 68) = 93; /*0x57beeb*/
    *(_DWORD *)(v26 + 68) = 93; /*0x57beee*/
    v4->?[2] = 93; /*0x57bef1*/
    LOWORD(v51) = *a2 - 1; /*0x57befd*/
    HIWORD(v51) = a2[1]; /*0x57bf02*/
    v56 = v51; /*0x57bf0f*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bf18*/
  }
  else if ( v56 == 94 ) /*0x57bf25*/
  {
    v27 = v58; /*0x57bf2b*/
    *(_DWORD *)(v59 + 68) = 95; /*0x57bf34*/
    *(_DWORD *)(v27 + 68) = 95; /*0x57bf37*/
    v4->?[2] = 95; /*0x57bf3a*/
    LOWORD(v52) = *a2 + 1; /*0x57bf46*/
    HIWORD(v52) = a2[1]; /*0x57bf4b*/
    v56 = v52; /*0x57bf5c*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bf61*/
  }
  else if ( v56 >= 80 ) /*0x57bf72*/
  {
    if ( v56 >= 83 ) /*0x57bfdf*/
      return v57; /*0x57c29e*/
    v29 = v59; /*0x57bfe5*/
    v30 = v58; /*0x57bfe9*/
    *(_DWORD *)(v59 + 68) = 100; /*0x57bff2*/
    *(_DWORD *)(v30 + 68) = 100; /*0x57bff5*/
    v4->?[2] = 100; /*0x57bffb*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57c004*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57c012*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57c020*/
    LOWORD(v54) = *a2 - 1; /*0x57c032*/
    HIWORD(v54) = a2[1]; /*0x57c03b*/
    LOBYTE(v63) = 1; /*0x57c047*/
    v56 = v54; /*0x57c04c*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57c050*/
    HIWORD(v54) = a2[1]; /*0x57c05e*/
    LOWORD(v54) = *a2 + 1; /*0x57c063*/
    v56 = v54; /*0x57c070*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57c077*/
    globalHelper_07C990(*(_DWORD *)a2); /*0x57c081*/
    v31 = *a2 - 1; /*0x57c092*/
    v32 = a2[1] - 1; /*0x57c093*/
    v57 = 1; /*0x57c096*/
    v64 = v31; /*0x57c09b*/
    v65 = v32; /*0x57c09f*/
    v66 = 3; /*0x57c0a3*/
    v67 = 3; /*0x57c0a7*/
  }
  else
  {
    v28 = v58; /*0x57bf78*/
    *(_DWORD *)(v59 + 68) = 80; /*0x57bf80*/
    *(_DWORD *)(v28 + 68) = 80; /*0x57bf83*/
    v4->?[2] = 80; /*0x57bf86*/
    LOWORD(v53) = *a2 - 1; /*0x57bf92*/
    HIWORD(v53) = a2[1]; /*0x57bf9b*/
    v56 = v53; /*0x57bfa7*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bfab*/
    HIWORD(v53) = a2[1]; /*0x57bfb9*/
    LOWORD(v53) = *a2 + 1; /*0x57bfbe*/
    v56 = v53; /*0x57bfcb*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bfd2*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57c0b6*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57c0c4*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v75); /*0x57c0d7*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v77); /*0x57c0d9*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57c0ea*/
  {
    rcDst = *v34; /*0x57c19f*/
  }
  else
  {
    v55 = v34->right; /*0x57c0f5*/
    if ( v55 <= 0 || (v62 = v34->bottom, v62 <= 0) ) /*0x57c108*/
    {
      rcDst = *v33; /*0x57c182*/
    }
    else
    {
      left = v33->left; /*0x57c10a*/
      v36 = v34->left; /*0x57c10c*/
      v37 = v33->right; /*0x57c10e*/
      top = v33->top; /*0x57c111*/
      v39 = v33->bottom; /*0x57c114*/
      v19 = left <= v34->left; /*0x57c117*/
      v74 = v37; /*0x57c119*/
      if ( !v19 ) /*0x57c11d*/
      {
        v37 += left - v36; /*0x57c121*/
        left = v36; /*0x57c123*/
        v74 = v37; /*0x57c125*/
      }
      v40 = v34->top; /*0x57c129*/
      v56 = v40; /*0x57c12e*/
      if ( top > v40 ) /*0x57c132*/
      {
        v39 += top - v40; /*0x57c136*/
        top = v40; /*0x57c138*/
      }
      if ( left + v37 >= v36 + v55 ) /*0x57c144*/
        v41 = v74; /*0x57c152*/
      else
        v41 = v36 - left + v55 + 1; /*0x57c14c*/
      if ( v39 + top < v62 + v56 ) /*0x57c165*/
        v39 = v62 + v56 - top + 1; /*0x57c16a*/
      rcDst.left = left; /*0x57c16c*/
      rcDst.top = top; /*0x57c170*/
      rcDst.right = v41; /*0x57c174*/
      rcDst.bottom = v39; /*0x57c178*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57c1d5*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57c1dc*/
  v68 = *v43; /*0x57c1e9*/
  v69 = v43[1]; /*0x57c1f0*/
  v70 = v43[2]; /*0x57c1f7*/
  v71 = v43[3]; /*0x57c200*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57c220*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57c229*/
  House::AnnounceUpgrade(v59, -1); /*0x57c234*/
  v44 = v58; /*0x57c239*/
  House::AnnounceUpgrade(v58, -1); /*0x57c241*/
  v45 = v63; /*0x57c246*/
  Cell::SearchEnemies((int)v4, v63); /*0x57c24d*/
  Cell::SearchEnemies(v59, v45); /*0x57c257*/
  Cell::SearchEnemies(v44, v45); /*0x57c25f*/
  v46 = v57; /*0x57c264*/
  if ( v57 ) /*0x57c26a*/
    Terrain::ConnectivityGraph(v60); /*0x57c270*/
  if ( v66 > 0 && v67 > 0 ) /*0x57c27f*/
    UpdateAreaConnectivityMap((ObjectClass *)v60, &v64); /*0x57c28a*/
  return v46; /*0x57c291*/
}



// ==== 0x0057C2B0  CellClass::ApplyTileModification2  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification2(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // cx
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+14h] [ebp-ACh] BYREF
  char v54; // [esp+1Bh] [ebp-A5h]
  int v55; // [esp+1Ch] [ebp-A4h]
  int v56; // [esp+20h] [ebp-A0h]
  Terrain *v57; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v59; // [esp+38h] [ebp-88h]
  int v60; // [esp+3Ch] [ebp-84h]
  int v61; // [esp+40h] [ebp-80h] BYREF
  int v62; // [esp+44h] [ebp-7Ch]
  int v63; // [esp+48h] [ebp-78h]
  int v64; // [esp+4Ch] [ebp-74h]
  int v65; // [esp+50h] [ebp-70h]
  int v66; // [esp+54h] [ebp-6Ch]
  LONG v67; // [esp+58h] [ebp-68h]
  LONG v68; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v70; // [esp+70h] [ebp-50h] BYREF
  LONG v71; // [esp+78h] [ebp-48h]
  _DWORD v72[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v74[4]; // [esp+A0h] [ebp-20h] BYREF

  v57 = (Terrain *)this; /*0x57c2c6*/
  v2 = *a2 + (a2[1] << 9); /*0x57c2d5*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57c2ea*/
  {
    v4 = v3; /*0x57c2ec*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57c2f2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57c2f4*/
  }
  v5 = *a2 - 1; /*0x57c300*/
  HIWORD(v55) = a2[1]; /*0x57c302*/
  LOWORD(v55) = v5; /*0x57c30a*/
  v6 = v5 + (SHIWORD(v55) << 9); /*0x57c315*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57c325*/
  {
    v56 = v7; /*0x57c327*/
  }
  else
  {
    v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57c331*/
    g_MissionQueueFrame.briefing[139] = v55; /*0x57c335*/
  }
  v8 = *a2 + 1; /*0x57c341*/
  HIWORD(v55) = a2[1]; /*0x57c343*/
  LOWORD(v55) = v8; /*0x57c34b*/
  v9 = v8 + (SHIWORD(v55) << 9); /*0x57c356*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57c366*/
  {
    v55 = v10; /*0x57c368*/
  }
  else
  {
    v11 = v55; /*0x57c36e*/
    v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57c372*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57c376*/
  }
  v53 = v4->?[2]; /*0x57c386*/
  LOBYTE(v60) = 0; /*0x57c38a*/
  v54 = 0; /*0x57c38f*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v70); /*0x57c3a0*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57c3a2*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57c3b7*/
  {
    v15 = *PlacementRect; /*0x57c468*/
    v24 = PlacementRect[1]; /*0x57c46a*/
    right = PlacementRect[2]; /*0x57c46d*/
    bottom = PlacementRect[3]; /*0x57c470*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57c3c2*/
    if ( v50 <= 0 || (v59 = PlacementRect[3], v59 <= 0) ) /*0x57c3d5*/
    {
      v15 = *StartCoords; /*0x57c45b*/
      v24 = StartCoords[1]; /*0x57c45d*/
      right = StartCoords[2]; /*0x57c460*/
      bottom = StartCoords[3]; /*0x57c463*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57c3db*/
      v15 = *StartCoords; /*0x57c3de*/
      v16 = StartCoords[1]; /*0x57c3e0*/
      v17 = StartCoords[3]; /*0x57c3e3*/
      rcDst.right = v14; /*0x57c3e6*/
      v18 = *PlacementRect; /*0x57c3ea*/
      v19 = v15 <= *PlacementRect; /*0x57c3ec*/
      rcDst.bottom = v17; /*0x57c3ee*/
      if ( !v19 ) /*0x57c3f2*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57c3fa*/
        v15 = v18; /*0x57c3fc*/
        rcDst.right = v20; /*0x57c3fe*/
      }
      v21 = PlacementRect[1]; /*0x57c402*/
      rcSrc2.left = v21; /*0x57c407*/
      if ( v16 > v21 ) /*0x57c40b*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57c413*/
        v16 = v21; /*0x57c415*/
        rcDst.bottom = v22; /*0x57c417*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57c429*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57c435*/
      bottom = rcDst.bottom; /*0x57c443*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v59 ) /*0x57c44c*/
        bottom = rcSrc2.left + v59 - v16 + 1; /*0x57c451*/
      v24 = v16; /*0x57c453*/
      right = rcDst.right; /*0x57c455*/
    }
  }
  v68 = bottom; /*0x57c473*/
  v67 = right; /*0x57c47b*/
  v65 = v15; /*0x57c484*/
  v66 = v24; /*0x57c488*/
  v61 = 0; /*0x57c48c*/
  v62 = 0; /*0x57c490*/
  v63 = 0; /*0x57c494*/
  v64 = 0; /*0x57c498*/
  if ( v53 == 96 ) /*0x57c49c*/
  {
    v26 = v55; /*0x57c4a2*/
    *(_DWORD *)(v56 + 68) = 97; /*0x57c4ab*/
    *(_DWORD *)(v26 + 68) = 97; /*0x57c4ae*/
    v4->?[2] = 97; /*0x57c4b1*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c4cf*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c4d8*/
  }
  else if ( v53 == 98 ) /*0x57c4e5*/
  {
    v27 = v55; /*0x57c4eb*/
    *(_DWORD *)(v56 + 68) = 99; /*0x57c4f4*/
    *(_DWORD *)(v27 + 68) = 99; /*0x57c4f7*/
    v4->?[2] = 99; /*0x57c4fa*/
    v53 = *(_DWORD *)a2 - 0x10000; /*0x57c51c*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c521*/
  }
  else if ( v53 >= 89 ) /*0x57c532*/
  {
    if ( v53 >= 92 ) /*0x57c59f*/
      return v54; /*0x57c85e*/
    v29 = v56; /*0x57c5a5*/
    v30 = v55; /*0x57c5a9*/
    *(_DWORD *)(v56 + 68) = 101; /*0x57c5b2*/
    *(_DWORD *)(v30 + 68) = 101; /*0x57c5b5*/
    v4->?[2] = 101; /*0x57c5bb*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57c5c4*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57c5d2*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57c5e0*/
    v51 = *(_DWORD *)a2 - 0x10000; /*0x57c5fb*/
    LOBYTE(v60) = 1; /*0x57c607*/
    v53 = v51; /*0x57c60c*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c610*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c630*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c637*/
    globalHelper_07C870(*(_DWORD *)a2); /*0x57c641*/
    v31 = *a2 - 1; /*0x57c652*/
    v32 = a2[1] - 1; /*0x57c653*/
    v54 = 1; /*0x57c656*/
    v61 = v31; /*0x57c65b*/
    v62 = v32; /*0x57c65f*/
    v63 = 3; /*0x57c663*/
    v64 = 3; /*0x57c667*/
  }
  else
  {
    v28 = v55; /*0x57c538*/
    *(_DWORD *)(v56 + 68) = 89; /*0x57c540*/
    *(_DWORD *)(v28 + 68) = 89; /*0x57c543*/
    v4->?[2] = 89; /*0x57c546*/
    v53 = *(_DWORD *)a2 - 0x10000; /*0x57c567*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c56b*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c58b*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c592*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57c676*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57c684*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v72); /*0x57c697*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v74); /*0x57c699*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57c6aa*/
  {
    rcDst = *v34; /*0x57c75f*/
  }
  else
  {
    v52 = v34->right; /*0x57c6b5*/
    if ( v52 <= 0 || (v59 = v34->bottom, v59 <= 0) ) /*0x57c6c8*/
    {
      rcDst = *v33; /*0x57c742*/
    }
    else
    {
      left = v33->left; /*0x57c6ca*/
      v36 = v34->left; /*0x57c6cc*/
      v37 = v33->right; /*0x57c6ce*/
      top = v33->top; /*0x57c6d1*/
      v39 = v33->bottom; /*0x57c6d4*/
      v19 = left <= v34->left; /*0x57c6d7*/
      v71 = v37; /*0x57c6d9*/
      if ( !v19 ) /*0x57c6dd*/
      {
        v37 += left - v36; /*0x57c6e1*/
        left = v36; /*0x57c6e3*/
        v71 = v37; /*0x57c6e5*/
      }
      v40 = v34->top; /*0x57c6e9*/
      v53 = v40; /*0x57c6ee*/
      if ( top > v40 ) /*0x57c6f2*/
      {
        v39 += top - v40; /*0x57c6f6*/
        top = v40; /*0x57c6f8*/
      }
      if ( left + v37 >= v36 + v52 ) /*0x57c704*/
        v41 = v71; /*0x57c712*/
      else
        v41 = v36 - left + v52 + 1; /*0x57c70c*/
      if ( v39 + top < v59 + v53 ) /*0x57c725*/
        v39 = v59 + v53 - top + 1; /*0x57c72a*/
      rcDst.left = left; /*0x57c72c*/
      rcDst.top = top; /*0x57c730*/
      rcDst.right = v41; /*0x57c734*/
      rcDst.bottom = v39; /*0x57c738*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57c795*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57c79c*/
  v65 = *v43; /*0x57c7a9*/
  v66 = v43[1]; /*0x57c7b0*/
  v67 = v43[2]; /*0x57c7b7*/
  v68 = v43[3]; /*0x57c7c0*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57c7e0*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57c7e9*/
  House::AnnounceUpgrade(v56, -1); /*0x57c7f4*/
  v44 = v55; /*0x57c7f9*/
  House::AnnounceUpgrade(v55, -1); /*0x57c801*/
  v45 = v60; /*0x57c806*/
  Cell::SearchEnemies((int)v4, v60); /*0x57c80d*/
  Cell::SearchEnemies(v56, v45); /*0x57c817*/
  Cell::SearchEnemies(v44, v45); /*0x57c81f*/
  v46 = v54; /*0x57c824*/
  if ( v54 ) /*0x57c82a*/
    Terrain::ConnectivityGraph(v57); /*0x57c830*/
  if ( v63 > 0 && v64 > 0 ) /*0x57c83f*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v61); /*0x57c84a*/
  return v46; /*0x57c851*/
}



// ==== 0x0057C870  globalHelper_07C870  this=-  sig=csp ====
char __stdcall sub_57C870(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c877*/
  v2 = a1; /*0x57c885*/
  do /*0x57c8e3*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57c895*/
    LOWORD(v15) = LOWORD(dword_89F688[0]) + v2; /*0x57c89a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57c8a5*/
    v2 += LOWORD(dword_89F688[0]); /*0x57c8aa*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F688[0])) << 9; /*0x57c8ae*/
    v5 = v2 + v4 < 0; /*0x57c8b1*/
    v6 = v2 + v4; /*0x57c8b1*/
    HIWORD(a1) += HIWORD(dword_89F688[0]); /*0x57c8b3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c8cb*/
    {
      dword_ABDC74 = v15; /*0x57c8cd*/
      v7 = unk_ABDC50; /*0x57c8d3*/
    }
    v8 = v7[17]; /*0x57c8d8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57c8e3*/
  v19 = HIWORD(v1); /*0x57c8eb*/
  LOWORD(v17) = v15 + dword_89F698; /*0x57c8f9*/
  HIWORD(v17) = v3 + HIWORD(dword_89F698); /*0x57c904*/
  do /*0x57c95d*/
  {
    v9 = v19 + HIWORD(dword_89F698); /*0x57c90f*/
    LOWORD(v16) = v1 + dword_89F698; /*0x57c914*/
    HIWORD(v16) = v19 + HIWORD(dword_89F698); /*0x57c91f*/
    LOWORD(v1) = v1 + dword_89F698; /*0x57c924*/
    v10 = (__int16)(v19 + HIWORD(dword_89F698)) << 9; /*0x57c928*/
    v5 = (__int16)v1 + v10 < 0; /*0x57c92b*/
    v11 = (__int16)v1 + v10; /*0x57c92b*/
    v19 += HIWORD(dword_89F698); /*0x57c92d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57c945*/
    {
      dword_ABDC74 = v16; /*0x57c947*/
      v12 = unk_ABDC50; /*0x57c94d*/
    }
    v13 = v12[17]; /*0x57c952*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57c95d*/
  LOWORD(v18) = LOWORD(dword_89F688[0]) + v16; /*0x57c968*/
  HIWORD(v18) = HIWORD(dword_89F688[0]) + v9; /*0x57c96d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57c985*/
}



// ==== 0x0057C990  globalHelper_07C990  this=-  sig=csp ====
char __stdcall sub_57C990(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c997*/
  v2 = a1; /*0x57c9a5*/
  do /*0x57ca03*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57c9b5*/
    LOWORD(v15) = dword_89F6A0 + v2; /*0x57c9ba*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57c9c5*/
    v2 += dword_89F6A0; /*0x57c9ca*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F6A0)) << 9; /*0x57c9ce*/
    v5 = v2 + v4 < 0; /*0x57c9d1*/
    v6 = v2 + v4; /*0x57c9d1*/
    HIWORD(a1) += HIWORD(dword_89F6A0); /*0x57c9d3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c9eb*/
    {
      dword_ABDC74 = v15; /*0x57c9ed*/
      v7 = unk_ABDC50; /*0x57c9f3*/
    }
    v8 = v7[17]; /*0x57c9f8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57ca03*/
  v19 = HIWORD(v1); /*0x57ca0b*/
  LOWORD(v17) = v15 + dword_89F690; /*0x57ca19*/
  HIWORD(v17) = v3 + HIWORD(dword_89F690); /*0x57ca24*/
  do /*0x57ca7d*/
  {
    v9 = v19 + HIWORD(dword_89F690); /*0x57ca2f*/
    LOWORD(v16) = v1 + dword_89F690; /*0x57ca34*/
    HIWORD(v16) = v19 + HIWORD(dword_89F690); /*0x57ca3f*/
    LOWORD(v1) = v1 + dword_89F690; /*0x57ca44*/
    v10 = (__int16)(v19 + HIWORD(dword_89F690)) << 9; /*0x57ca48*/
    v5 = (__int16)v1 + v10 < 0; /*0x57ca4b*/
    v11 = (__int16)v1 + v10; /*0x57ca4b*/
    v19 += HIWORD(dword_89F690); /*0x57ca4d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57ca65*/
    {
      dword_ABDC74 = v16; /*0x57ca67*/
      v12 = unk_ABDC50; /*0x57ca6d*/
    }
    v13 = v12[17]; /*0x57ca72*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57ca7d*/
  LOWORD(v18) = dword_89F6A0 + v16; /*0x57ca88*/
  HIWORD(v18) = HIWORD(dword_89F6A0) + v9; /*0x57ca8d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57caa5*/
}



// ==== 0x0057CAB0  ObjectClass::Map_Create_57CAB0  this=ObjectClass  sig=csp ====
int __thiscall Map_Create_57CAB0(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  HIWORD(v8) = HIWORD(this->AbstractClass); /*0x57caba*/
  LOWORD(v8) = LOWORD(this->AbstractClass) - 1; /*0x57cac2*/
  v1 = (__int16)v8 + (SHIWORD(v8) << 9); /*0x57cad5*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57cae5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57caeb*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57caf0*/
  }
  v3 = v2[17]; /*0x57cafc*/
  HIWORD(v9) = HIWORD(this->AbstractClass); /*0x57cb04*/
  LOWORD(v9) = LOWORD(this->AbstractClass) + 1; /*0x57cb09*/
  v4 = (__int16)v9 + (SHIWORD(v9) << 9); /*0x57cb14*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cb24*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cb2a*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57cb2f*/
  }
  v6 = 0; /*0x57cb38*/
  switch ( v5[17] ) /*0x57cb4d*/
  {
    case 209: /*0x57cb4d*/
    case 211: /*0x57cb4d*/
    case 213: /*0x57cb4d*/
    case 224: /*0x57cb4d*/
      v6 = 1; /*0x57cb54*/
      break; /*0x57cb59*/
    case 212: /*0x57cb4d*/
    case 231: /*0x57cb4d*/
      v6 = 2; /*0x57cb5b*/
      break; /*0x57cb5b*/
    default:
      break;
  }
  switch ( v3 ) /*0x57cb75*/
  {
    case 210: /*0x57cb75*/
    case 211: /*0x57cb75*/
    case 212: /*0x57cb75*/
    case 226: /*0x57cb75*/
      result = v6 | 4; /*0x57cb7f*/
      break; /*0x57cb82*/
    case 213: /*0x57cb75*/
    case 231: /*0x57cb75*/
      v6 |= 8u; /*0x57cb83*/
      goto LABEL_13; /*0x57cb83*/
    default:
LABEL_13:
      result = v6; /*0x57cb86*/
      break; /*0x57cb86*/
  }
  return result; /*0x57cb66*/
}



// ==== 0x0057CBE0  ObjectClass::Map_Create_57CBE0  this=ObjectClass  sig=csp ====
char __thiscall Map_Create_57CBE0(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edi
  char result; // al

  v1 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass - 0x10000) >> 16) << 9); /*0x57cc04*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57cc14*/
  {
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass - 0x10000; /*0x57cc1a*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57cc1f*/
  }
  v3 = v2[17]; /*0x57cc2c*/
  v4 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass + 0x10000) >> 16) << 9); /*0x57cc44*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cc54*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cc5a*/
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass + 0x10000; /*0x57cc5f*/
  }
  v6 = v5[17]; /*0x57cc65*/
  result = 0; /*0x57cc6e*/
  switch ( v3 ) /*0x57cc7e*/
  {
    case 218: /*0x57cc7e*/
    case 220: /*0x57cc7e*/
    case 222: /*0x57cc7e*/
    case 228: /*0x57cc7e*/
      result = 1; /*0x57cc85*/
      break; /*0x57cc8a*/
    case 221: /*0x57cc7e*/
    case 232: /*0x57cc7e*/
      result = 2; /*0x57cc8c*/
      break; /*0x57cc8c*/
    default:
      break;
  }
  switch ( v6 ) /*0x57cca5*/
  {
    case 219: /*0x57cca5*/
    case 220: /*0x57cca5*/
    case 221: /*0x57cca5*/
    case 230: /*0x57cca5*/
      result |= 4u; /*0x57ccac*/
      break; /*0x57ccaf*/
    case 222: /*0x57cca5*/
    case 232: /*0x57cca5*/
      result |= 8u; /*0x57ccb0*/
      break; /*0x57ccb0*/
    default:
      return result;
  }
  return result; /*0x57cc97*/
}



// ==== 0x0057CCF0  CellClass::CheckTilePassable  this=CellClass  sig=csp ====
int __stdcall CellClass::CheckTilePassable(int a1)
{
  CellClass *v1; // ecx
  __int16 *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (__int16 *)a1; /*0x57ccf4*/
  v3 = v1; /*0x57ccf9*/
  v4 = *(__int16 *)a1 + (*(__int16 *)(a1 + 2) << 9); /*0x57cd05*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cd1b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a1; /*0x57cd1f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cd24*/
  }
  result = v5[17]; /*0x57cd29*/
  if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 ) /*0x57cd4d*/
  {
    v7 = *(_WORD *)(a1 + 2); /*0x57cd56*/
    LOWORD(a1) = *(_WORD *)a1; /*0x57cd5a*/
    HIWORD(a1) = v7 - 1; /*0x57cd65*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cd7d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57cd8c*/
    {
      v10 = v2[1] - 2; /*0x57cdc4*/
      LOWORD(a1) = *v2; /*0x57cdc8*/
      HIWORD(a1) = v10; /*0x57cdcd*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cde9*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x57cdf8*/
      {
        v12 = v2[1]; /*0x57ce0d*/
        LOWORD(a1) = *v2; /*0x57ce11*/
        HIWORD(a1) = v12 - 1; /*0x57ce1c*/
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, (__int16 *)&a1); /*0x57ce2c*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, v2); /*0x57cdfd*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57cd95*/
      LOWORD(a1) = *v2; /*0x57cd97*/
      HIWORD(a1) = v9; /*0x57cd9c*/
      LOBYTE(result) = CellClass::ApplyTileModification3(v3, (__int16 *)&a1); /*0x57cdb0*/
    }
  }
  else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 ) /*0x57ce5a*/
  {
    v13 = *(_WORD *)a1 - 1; /*0x57ce67*/
    HIWORD(a1) = *(_WORD *)(a1 + 2); /*0x57ce69*/
    LOWORD(a1) = v13; /*0x57ce6e*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57ce8a*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x57ce99*/
    {
      v16 = *v2 - 2; /*0x57ced1*/
      HIWORD(a1) = v2[1]; /*0x57ced5*/
      LOWORD(a1) = v16; /*0x57ceda*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cef6*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x57cf05*/
      {
        a1 = 1; /*0x57cf23*/
        *(_DWORD *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a1); /*0x57cf3c*/
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v18); /*0x57cf43*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v2); /*0x57cf0a*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57cea2*/
      HIWORD(a1) = v2[1]; /*0x57cea4*/
      LOWORD(a1) = v15; /*0x57cea9*/
      LOBYTE(result) = CellClass::ApplyTileModification4(v3, (__int16 *)&a1); /*0x57cebd*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57cf51*/
  }
  return result; /*0x57cdb5*/
}



// ==== 0x0057CF60  CellClass::ApplyTileModification3  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification3(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // ax
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // ax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+10h] [ebp-B0h]
  int v54; // [esp+10h] [ebp-B0h]
  int v55; // [esp+10h] [ebp-B0h]
  int v56; // [esp+14h] [ebp-ACh] BYREF
  char v57; // [esp+1Bh] [ebp-A5h]
  int v58; // [esp+1Ch] [ebp-A4h]
  int v59; // [esp+20h] [ebp-A0h]
  Terrain *v60; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v62; // [esp+38h] [ebp-88h]
  int v63; // [esp+3Ch] [ebp-84h]
  int v64; // [esp+40h] [ebp-80h] BYREF
  int v65; // [esp+44h] [ebp-7Ch]
  int v66; // [esp+48h] [ebp-78h]
  int v67; // [esp+4Ch] [ebp-74h]
  int v68; // [esp+50h] [ebp-70h]
  int v69; // [esp+54h] [ebp-6Ch]
  LONG v70; // [esp+58h] [ebp-68h]
  LONG v71; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v73; // [esp+70h] [ebp-50h] BYREF
  LONG v74; // [esp+78h] [ebp-48h]
  _DWORD v75[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v77[4]; // [esp+A0h] [ebp-20h] BYREF

  v60 = (Terrain *)this; /*0x57cf76*/
  v2 = *a2 + (a2[1] << 9); /*0x57cf85*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57cf9a*/
  {
    v4 = v3; /*0x57cf9c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57cfa2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57cfa4*/
  }
  v5 = a2[1] - 1; /*0x57cfb0*/
  LOWORD(v58) = *a2; /*0x57cfb2*/
  HIWORD(v58) = v5; /*0x57cfb7*/
  v6 = (__int16)v58 + (v5 << 9); /*0x57cfc5*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57cfd5*/
  {
    v59 = v7; /*0x57cfd7*/
  }
  else
  {
    v59 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57cfe1*/
    g_MissionQueueFrame.briefing[139] = v58; /*0x57cfe5*/
  }
  v8 = a2[1] + 1; /*0x57cff1*/
  LOWORD(v58) = *a2; /*0x57cff3*/
  HIWORD(v58) = v8; /*0x57cff8*/
  v9 = (__int16)v58 + (v8 << 9); /*0x57d006*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57d016*/
  {
    v58 = v10; /*0x57d018*/
  }
  else
  {
    v11 = v58; /*0x57d01e*/
    v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d022*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57d026*/
  }
  v56 = v4->?[2]; /*0x57d036*/
  LOBYTE(v63) = 0; /*0x57d03a*/
  v57 = 0; /*0x57d03f*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v73); /*0x57d050*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57d052*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57d067*/
  {
    v15 = *PlacementRect; /*0x57d118*/
    v24 = PlacementRect[1]; /*0x57d11a*/
    right = PlacementRect[2]; /*0x57d11d*/
    bottom = PlacementRect[3]; /*0x57d120*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57d072*/
    if ( v50 <= 0 || (v62 = PlacementRect[3], v62 <= 0) ) /*0x57d085*/
    {
      v15 = *StartCoords; /*0x57d10b*/
      v24 = StartCoords[1]; /*0x57d10d*/
      right = StartCoords[2]; /*0x57d110*/
      bottom = StartCoords[3]; /*0x57d113*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57d08b*/
      v15 = *StartCoords; /*0x57d08e*/
      v16 = StartCoords[1]; /*0x57d090*/
      v17 = StartCoords[3]; /*0x57d093*/
      rcDst.right = v14; /*0x57d096*/
      v18 = *PlacementRect; /*0x57d09a*/
      v19 = v15 <= *PlacementRect; /*0x57d09c*/
      rcDst.bottom = v17; /*0x57d09e*/
      if ( !v19 ) /*0x57d0a2*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57d0aa*/
        v15 = v18; /*0x57d0ac*/
        rcDst.right = v20; /*0x57d0ae*/
      }
      v21 = PlacementRect[1]; /*0x57d0b2*/
      rcSrc2.left = v21; /*0x57d0b7*/
      if ( v16 > v21 ) /*0x57d0bb*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57d0c3*/
        v16 = v21; /*0x57d0c5*/
        rcDst.bottom = v22; /*0x57d0c7*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57d0d9*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57d0e5*/
      bottom = rcDst.bottom; /*0x57d0f3*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v62 ) /*0x57d0fc*/
        bottom = rcSrc2.left + v62 - v16 + 1; /*0x57d101*/
      v24 = v16; /*0x57d103*/
      right = rcDst.right; /*0x57d105*/
    }
  }
  v71 = bottom; /*0x57d123*/
  v70 = right; /*0x57d12b*/
  v68 = v15; /*0x57d136*/
  v69 = v24; /*0x57d13a*/
  v64 = 0; /*0x57d13e*/
  v65 = 0; /*0x57d142*/
  v66 = 0; /*0x57d146*/
  v67 = 0; /*0x57d14a*/
  if ( v56 == 223 ) /*0x57d14e*/
  {
    v26 = v58; /*0x57d154*/
    *(_DWORD *)(v59 + 68) = 224; /*0x57d15d*/
    *(_DWORD *)(v26 + 68) = 224; /*0x57d160*/
    v4->?[2] = 224; /*0x57d163*/
    LOWORD(v51) = *a2 - 1; /*0x57d16f*/
    HIWORD(v51) = a2[1]; /*0x57d174*/
    v56 = v51; /*0x57d181*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d18a*/
  }
  else if ( v56 == 225 ) /*0x57d199*/
  {
    v27 = v58; /*0x57d19f*/
    *(_DWORD *)(v59 + 68) = 226; /*0x57d1a8*/
    *(_DWORD *)(v27 + 68) = 226; /*0x57d1ab*/
    v4->?[2] = 226; /*0x57d1ae*/
    LOWORD(v52) = *a2 + 1; /*0x57d1ba*/
    HIWORD(v52) = a2[1]; /*0x57d1bf*/
    v56 = v52; /*0x57d1d0*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d1d5*/
  }
  else if ( v56 >= 211 ) /*0x57d1e6*/
  {
    if ( v56 >= 214 ) /*0x57d255*/
      return v57; /*0x57d514*/
    v29 = v59; /*0x57d25b*/
    v30 = v58; /*0x57d25f*/
    *(_DWORD *)(v59 + 68) = 231; /*0x57d268*/
    *(_DWORD *)(v30 + 68) = 231; /*0x57d26b*/
    v4->?[2] = 231; /*0x57d271*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57d27a*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57d288*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57d296*/
    LOWORD(v54) = *a2 - 1; /*0x57d2a8*/
    HIWORD(v54) = a2[1]; /*0x57d2b1*/
    LOBYTE(v63) = 1; /*0x57d2bd*/
    v56 = v54; /*0x57d2c2*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d2c6*/
    HIWORD(v54) = a2[1]; /*0x57d2d4*/
    LOWORD(v54) = *a2 + 1; /*0x57d2d9*/
    v56 = v54; /*0x57d2e6*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d2ed*/
    globalHelper_07DC20(*(_DWORD *)a2); /*0x57d2f7*/
    v31 = *a2 - 1; /*0x57d308*/
    v32 = a2[1] - 1; /*0x57d309*/
    v57 = 1; /*0x57d30c*/
    v64 = v31; /*0x57d311*/
    v65 = v32; /*0x57d315*/
    v66 = 3; /*0x57d319*/
    v67 = 3; /*0x57d31d*/
  }
  else
  {
    v28 = v58; /*0x57d1ec*/
    *(_DWORD *)(v59 + 68) = 211; /*0x57d1f4*/
    *(_DWORD *)(v28 + 68) = 211; /*0x57d1f7*/
    v4->?[2] = 211; /*0x57d1fa*/
    LOWORD(v53) = *a2 - 1; /*0x57d206*/
    HIWORD(v53) = a2[1]; /*0x57d20f*/
    v56 = v53; /*0x57d21b*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d21f*/
    HIWORD(v53) = a2[1]; /*0x57d22d*/
    LOWORD(v53) = *a2 + 1; /*0x57d232*/
    v56 = v53; /*0x57d23f*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d246*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57d32c*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57d33a*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v75); /*0x57d34d*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v77); /*0x57d34f*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57d360*/
  {
    rcDst = *v34; /*0x57d415*/
  }
  else
  {
    v55 = v34->right; /*0x57d36b*/
    if ( v55 <= 0 || (v62 = v34->bottom, v62 <= 0) ) /*0x57d37e*/
    {
      rcDst = *v33; /*0x57d3f8*/
    }
    else
    {
      left = v33->left; /*0x57d380*/
      v36 = v34->left; /*0x57d382*/
      v37 = v33->right; /*0x57d384*/
      top = v33->top; /*0x57d387*/
      v39 = v33->bottom; /*0x57d38a*/
      v19 = left <= v34->left; /*0x57d38d*/
      v74 = v37; /*0x57d38f*/
      if ( !v19 ) /*0x57d393*/
      {
        v37 += left - v36; /*0x57d397*/
        left = v36; /*0x57d399*/
        v74 = v37; /*0x57d39b*/
      }
      v40 = v34->top; /*0x57d39f*/
      v56 = v40; /*0x57d3a4*/
      if ( top > v40 ) /*0x57d3a8*/
      {
        v39 += top - v40; /*0x57d3ac*/
        top = v40; /*0x57d3ae*/
      }
      if ( left + v37 >= v36 + v55 ) /*0x57d3ba*/
        v41 = v74; /*0x57d3c8*/
      else
        v41 = v36 - left + v55 + 1; /*0x57d3c2*/
      if ( v39 + top < v62 + v56 ) /*0x57d3db*/
        v39 = v62 + v56 - top + 1; /*0x57d3e0*/
      rcDst.left = left; /*0x57d3e2*/
      rcDst.top = top; /*0x57d3e6*/
      rcDst.right = v41; /*0x57d3ea*/
      rcDst.bottom = v39; /*0x57d3ee*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57d44b*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57d452*/
  v68 = *v43; /*0x57d45f*/
  v69 = v43[1]; /*0x57d466*/
  v70 = v43[2]; /*0x57d46d*/
  v71 = v43[3]; /*0x57d476*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57d496*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57d49f*/
  House::AnnounceUpgrade(v59, -1); /*0x57d4aa*/
  v44 = v58; /*0x57d4af*/
  House::AnnounceUpgrade(v58, -1); /*0x57d4b7*/
  v45 = v63; /*0x57d4bc*/
  Cell::SearchEnemies((int)v4, v63); /*0x57d4c3*/
  Cell::SearchEnemies(v59, v45); /*0x57d4cd*/
  Cell::SearchEnemies(v44, v45); /*0x57d4d5*/
  v46 = v57; /*0x57d4da*/
  if ( v57 ) /*0x57d4e0*/
    Terrain::ConnectivityGraph(v60); /*0x57d4e6*/
  if ( v66 > 0 && v67 > 0 ) /*0x57d4f5*/
    UpdateAreaConnectivityMap((ObjectClass *)v60, &v64); /*0x57d500*/
  return v46; /*0x57d507*/
}



// ==== 0x0057D530  CellClass::ApplyTileModification4  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification4(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // cx
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C4h]
  _DWORD *v49; // [esp-4h] [ebp-C0h]
  int v50; // [esp+10h] [ebp-ACh]
  int v51; // [esp+10h] [ebp-ACh]
  int v52; // [esp+14h] [ebp-A8h] BYREF
  char v53; // [esp+1Bh] [ebp-A1h]
  int v54; // [esp+1Ch] [ebp-A0h]
  Terrain *v55; // [esp+20h] [ebp-9Ch]
  int v56; // [esp+24h] [ebp-98h]
  struct tagRECT rcDst; // [esp+28h] [ebp-94h] BYREF
  int v58; // [esp+38h] [ebp-84h]
  int v59; // [esp+3Ch] [ebp-80h] BYREF
  int v60; // [esp+40h] [ebp-7Ch]
  int v61; // [esp+44h] [ebp-78h]
  int v62; // [esp+48h] [ebp-74h]
  int v63; // [esp+4Ch] [ebp-70h]
  int v64; // [esp+50h] [ebp-6Ch]
  LONG v65; // [esp+54h] [ebp-68h]
  LONG v66; // [esp+58h] [ebp-64h]
  RECT rcSrc2; // [esp+5Ch] [ebp-60h] BYREF
  int v68; // [esp+6Ch] [ebp-50h] BYREF
  LONG v69; // [esp+74h] [ebp-48h]
  int v70[4]; // [esp+7Ch] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+8Ch] [ebp-30h] BYREF
  int v72[4]; // [esp+9Ch] [ebp-20h] BYREF

  v55 = (Terrain *)this; /*0x57d546*/
  v2 = *a2 + (a2[1] << 9); /*0x57d555*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57d56a*/
  {
    v4 = v3; /*0x57d56c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57d572*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57d574*/
  }
  v5 = *a2 - 1; /*0x57d580*/
  HIWORD(v54) = a2[1]; /*0x57d582*/
  LOWORD(v54) = v5; /*0x57d58a*/
  v6 = v5 + (SHIWORD(v54) << 9); /*0x57d595*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57d5a5*/
  {
    v56 = v7; /*0x57d5a7*/
  }
  else
  {
    v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d5b1*/
    g_MissionQueueFrame.briefing[139] = v54; /*0x57d5b5*/
  }
  v8 = *a2 + 1; /*0x57d5c1*/
  HIWORD(v54) = a2[1]; /*0x57d5c3*/
  LOWORD(v54) = v8; /*0x57d5cb*/
  v9 = v8 + (SHIWORD(v54) << 9); /*0x57d5d6*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57d5e6*/
  {
    v54 = v10; /*0x57d5e8*/
  }
  else
  {
    v11 = v54; /*0x57d5ee*/
    v54 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d5f2*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57d5f6*/
  }
  v52 = v4->?[2]; /*0x57d606*/
  v53 = 0; /*0x57d60a*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v68); /*0x57d61b*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57d61d*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57d632*/
  {
    v15 = *PlacementRect; /*0x57d6e3*/
    v24 = PlacementRect[1]; /*0x57d6e5*/
    right = PlacementRect[2]; /*0x57d6e8*/
    bottom = PlacementRect[3]; /*0x57d6eb*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57d63d*/
    if ( v50 <= 0 || (v58 = PlacementRect[3], v58 <= 0) ) /*0x57d650*/
    {
      v15 = *StartCoords; /*0x57d6d6*/
      v24 = StartCoords[1]; /*0x57d6d8*/
      right = StartCoords[2]; /*0x57d6db*/
      bottom = StartCoords[3]; /*0x57d6de*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57d656*/
      v15 = *StartCoords; /*0x57d659*/
      v16 = StartCoords[1]; /*0x57d65b*/
      v17 = StartCoords[3]; /*0x57d65e*/
      rcDst.right = v14; /*0x57d661*/
      v18 = *PlacementRect; /*0x57d665*/
      v19 = v15 <= *PlacementRect; /*0x57d667*/
      rcDst.bottom = v17; /*0x57d669*/
      if ( !v19 ) /*0x57d66d*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57d675*/
        v15 = v18; /*0x57d677*/
        rcDst.right = v20; /*0x57d679*/
      }
      v21 = PlacementRect[1]; /*0x57d67d*/
      rcSrc2.left = v21; /*0x57d682*/
      if ( v16 > v21 ) /*0x57d686*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57d68e*/
        v16 = v21; /*0x57d690*/
        rcDst.bottom = v22; /*0x57d692*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57d6a4*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57d6b0*/
      bottom = rcDst.bottom; /*0x57d6be*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v58 ) /*0x57d6c7*/
        bottom = rcSrc2.left + v58 - v16 + 1; /*0x57d6cc*/
      v24 = v16; /*0x57d6ce*/
      right = rcDst.right; /*0x57d6d0*/
    }
  }
  v66 = bottom; /*0x57d6ee*/
  v65 = right; /*0x57d6f6*/
  v63 = v15; /*0x57d701*/
  v64 = v24; /*0x57d705*/
  v59 = 0; /*0x57d709*/
  v60 = 0; /*0x57d70d*/
  v61 = 0; /*0x57d711*/
  v62 = 0; /*0x57d715*/
  if ( v52 == 227 ) /*0x57d719*/
  {
    v26 = v54; /*0x57d71f*/
    *(_DWORD *)(v56 + 68) = 228; /*0x57d728*/
    *(_DWORD *)(v26 + 68) = 228; /*0x57d72b*/
    v4->?[2] = 228; /*0x57d72e*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d74c*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d755*/
  }
  else if ( v52 == 229 ) /*0x57d764*/
  {
    v27 = v54; /*0x57d76a*/
    *(_DWORD *)(v56 + 68) = 230; /*0x57d773*/
    *(_DWORD *)(v27 + 68) = 230; /*0x57d776*/
    v4->?[2] = 230; /*0x57d779*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d79b*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d7a0*/
  }
  else if ( v52 >= 220 ) /*0x57d7b1*/
  {
    if ( v52 >= 223 ) /*0x57d820*/
      return v53; /*0x57dad6*/
    v29 = v56; /*0x57d826*/
    v30 = v54; /*0x57d82a*/
    *(_DWORD *)(v56 + 68) = 232; /*0x57d833*/
    *(_DWORD *)(v30 + 68) = 232; /*0x57d836*/
    v4->?[2] = 232; /*0x57d83c*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57d845*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57d853*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57d861*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d888*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d88c*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d8ac*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d8b3*/
    globalHelper_07DAF0(*(_DWORD *)a2); /*0x57d8bd*/
    v31 = *a2 - 1; /*0x57d8ce*/
    v32 = a2[1] - 1; /*0x57d8cf*/
    v53 = 1; /*0x57d8d2*/
    v59 = v31; /*0x57d8d7*/
    v60 = v32; /*0x57d8db*/
    v61 = 3; /*0x57d8df*/
    v62 = 3; /*0x57d8e3*/
  }
  else
  {
    v28 = v54; /*0x57d7b7*/
    *(_DWORD *)(v56 + 68) = 220; /*0x57d7bf*/
    *(_DWORD *)(v28 + 68) = 220; /*0x57d7c2*/
    v4->?[2] = 220; /*0x57d7c5*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d7e6*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d7ea*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d80a*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d811*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57d8f2*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57d900*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v72); /*0x57d910*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v70); /*0x57d912*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57d923*/
  {
    rcDst = *v34; /*0x57d9d8*/
  }
  else
  {
    v51 = v34->right; /*0x57d92e*/
    if ( v51 <= 0 || (v58 = v34->bottom, v58 <= 0) ) /*0x57d941*/
    {
      rcDst = *v33; /*0x57d9bb*/
    }
    else
    {
      left = v33->left; /*0x57d943*/
      v36 = v34->left; /*0x57d945*/
      v37 = v33->right; /*0x57d947*/
      top = v33->top; /*0x57d94a*/
      v39 = v33->bottom; /*0x57d94d*/
      v19 = left <= v34->left; /*0x57d950*/
      v69 = v37; /*0x57d952*/
      if ( !v19 ) /*0x57d956*/
      {
        v37 += left - v36; /*0x57d95a*/
        left = v36; /*0x57d95c*/
        v69 = v37; /*0x57d95e*/
      }
      v40 = v34->top; /*0x57d962*/
      v52 = v40; /*0x57d967*/
      if ( top > v40 ) /*0x57d96b*/
      {
        v39 += top - v40; /*0x57d96f*/
        top = v40; /*0x57d971*/
      }
      if ( left + v37 >= v36 + v51 ) /*0x57d97d*/
        v41 = v69; /*0x57d98b*/
      else
        v41 = v36 - left + v51 + 1; /*0x57d985*/
      if ( v39 + top < v58 + v52 ) /*0x57d99e*/
        v39 = v58 + v52 - top + 1; /*0x57d9a3*/
      rcDst.left = left; /*0x57d9a5*/
      rcDst.top = top; /*0x57d9a9*/
      rcDst.right = v41; /*0x57d9ad*/
      rcDst.bottom = v39; /*0x57d9b1*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57da0e*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57da15*/
  v63 = *v43; /*0x57da22*/
  v64 = v43[1]; /*0x57da29*/
  v65 = v43[2]; /*0x57da30*/
  v66 = v43[3]; /*0x57da39*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57da59*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57da62*/
  v44 = v56; /*0x57da67*/
  House::AnnounceUpgrade(v56, -1); /*0x57da6f*/
  v45 = v54; /*0x57da74*/
  House::AnnounceUpgrade(v54, -1); /*0x57da7c*/
  Cell::SearchEnemies((int)v4, 1); /*0x57da85*/
  Cell::SearchEnemies(v44, 1); /*0x57da8e*/
  Cell::SearchEnemies(v45, 1); /*0x57da97*/
  v46 = v53; /*0x57da9c*/
  if ( v53 ) /*0x57daa2*/
    Terrain::ConnectivityGraph(v55); /*0x57daa8*/
  if ( v61 > 0 && v62 > 0 ) /*0x57dab7*/
    UpdateAreaConnectivityMap((ObjectClass *)v55, &v59); /*0x57dac2*/
  return v46; /*0x57dac9*/
}



// ==== 0x0057DAF0  globalHelper_07DAF0  this=-  sig=csp ====
char __stdcall sub_57DAF0(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57daf7*/
  v2 = a1; /*0x57db05*/
  do /*0x57db67*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57db15*/
    LOWORD(v15) = LOWORD(dword_89F688[0]) + v2; /*0x57db1a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57db25*/
    v2 += LOWORD(dword_89F688[0]); /*0x57db2a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F688[0])) << 9; /*0x57db2e*/
    v5 = v2 + v4 < 0; /*0x57db31*/
    v6 = v2 + v4; /*0x57db31*/
    HIWORD(a1) += HIWORD(dword_89F688[0]); /*0x57db33*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57db4b*/
    {
      dword_ABDC74 = v15; /*0x57db4d*/
      v7 = unk_ABDC50; /*0x57db53*/
    }
    v8 = v7[17]; /*0x57db58*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57db67*/
  v19 = HIWORD(v1); /*0x57db6f*/
  LOWORD(v17) = v15 + dword_89F698; /*0x57db7d*/
  HIWORD(v17) = v3 + HIWORD(dword_89F698); /*0x57db88*/
  do /*0x57dbe5*/
  {
    v9 = v19 + HIWORD(dword_89F698); /*0x57db93*/
    LOWORD(v16) = v1 + dword_89F698; /*0x57db98*/
    HIWORD(v16) = v19 + HIWORD(dword_89F698); /*0x57dba3*/
    LOWORD(v1) = v1 + dword_89F698; /*0x57dba8*/
    v10 = (__int16)(v19 + HIWORD(dword_89F698)) << 9; /*0x57dbac*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dbaf*/
    v11 = (__int16)v1 + v10; /*0x57dbaf*/
    v19 += HIWORD(dword_89F698); /*0x57dbb1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dbc9*/
    {
      dword_ABDC74 = v16; /*0x57dbcb*/
      v12 = unk_ABDC50; /*0x57dbd1*/
    }
    v13 = v12[17]; /*0x57dbd6*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dbe5*/
  LOWORD(v18) = LOWORD(dword_89F688[0]) + v16; /*0x57dbf0*/
  HIWORD(v18) = HIWORD(dword_89F688[0]) + v9; /*0x57dbf5*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dc0d*/
}



// ==== 0x0057DC20  globalHelper_07DC20  this=-  sig=csp ====
char __stdcall sub_57DC20(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57dc27*/
  v2 = a1; /*0x57dc35*/
  do /*0x57dc97*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57dc45*/
    LOWORD(v15) = dword_89F6A0 + v2; /*0x57dc4a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57dc55*/
    v2 += dword_89F6A0; /*0x57dc5a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F6A0)) << 9; /*0x57dc5e*/
    v5 = v2 + v4 < 0; /*0x57dc61*/
    v6 = v2 + v4; /*0x57dc61*/
    HIWORD(a1) += HIWORD(dword_89F6A0); /*0x57dc63*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57dc7b*/
    {
      dword_ABDC74 = v15; /*0x57dc7d*/
      v7 = unk_ABDC50; /*0x57dc83*/
    }
    v8 = v7[17]; /*0x57dc88*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57dc97*/
  v19 = HIWORD(v1); /*0x57dc9f*/
  LOWORD(v17) = v15 + dword_89F690; /*0x57dcad*/
  HIWORD(v17) = v3 + HIWORD(dword_89F690); /*0x57dcb8*/
  do /*0x57dd15*/
  {
    v9 = v19 + HIWORD(dword_89F690); /*0x57dcc3*/
    LOWORD(v16) = v1 + dword_89F690; /*0x57dcc8*/
    HIWORD(v16) = v19 + HIWORD(dword_89F690); /*0x57dcd3*/
    LOWORD(v1) = v1 + dword_89F690; /*0x57dcd8*/
    v10 = (__int16)(v19 + HIWORD(dword_89F690)) << 9; /*0x57dcdc*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dcdf*/
    v11 = (__int16)v1 + v10; /*0x57dcdf*/
    v19 += HIWORD(dword_89F690); /*0x57dce1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dcf9*/
    {
      dword_ABDC74 = v16; /*0x57dcfb*/
      v12 = unk_ABDC50; /*0x57dd01*/
    }
    v13 = v12[17]; /*0x57dd06*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dd15*/
  LOWORD(v18) = dword_89F6A0 + v16; /*0x57dd20*/
  HIWORD(v18) = HIWORD(dword_89F6A0) + v9; /*0x57dd25*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dd3d*/
}



// ==== 0x0057DD50  CreateCliffRampMap  this=-  sig=csp ====
int __stdcall CreateCliffRampMap(__int16 *a1)
{
  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  _DWORD *v36; // eax
  int *v37; // eax
  int *v38; // eax
  _WORD *v39; // eax
  int v40; // ebp
  int v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  _DWORD v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  _DWORD v62[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57dd5d*/
  result = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57dd6c*/
  if ( result >= 74 && result <= 101 ) /*0x57dd7b*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57dd92*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57dda2*/
    {
      v5 = (CellClass *)v4; /*0x57dda4*/
      v49 = v4; /*0x57dda6*/
    }
    else
    {
      v6 = *(_DWORD *)a1; /*0x57ddac*/
      v49 = (int)&unk_ABDC50; /*0x57ddaf*/
      v5 = &unk_ABDC50; /*0x57ddb7*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57ddbb*/
    }
    v46 = *(_DWORD *)a1 - 0x10000; /*0x57ddcf*/
    v7 = *a1 + (SHIWORD(v46) << 9); /*0x57dddd*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57dded*/
    {
      v51 = v8; /*0x57ddef*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57ddf9*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57de01*/
    }
    v9 = *a1 + ((__int16)((unsigned int)(*(_DWORD *)a1 + 0x10000) >> 16) << 9); /*0x57de23*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57de33*/
    {
      v47 = v10; /*0x57de35*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57de3f*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1 + 0x10000; /*0x57de47*/
    }
    LOBYTE(v54) = 0; /*0x57de54*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57de62*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57de67*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57de7c*/
    {
      v19 = *PlacementRect; /*0x57df02*/
      v15 = PlacementRect[1]; /*0x57df04*/
      v16 = PlacementRect[2]; /*0x57df07*/
      v17 = PlacementRect[3]; /*0x57df0a*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57de87*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57de96*/
      {
        v19 = *StartCoords; /*0x57def5*/
        v15 = StartCoords[1]; /*0x57def7*/
        v16 = StartCoords[2]; /*0x57defa*/
        v17 = StartCoords[3]; /*0x57defd*/
      }
      else
      {
        v13 = *StartCoords; /*0x57de98*/
        v14 = *PlacementRect; /*0x57de9a*/
        v15 = StartCoords[1]; /*0x57de9c*/
        v16 = StartCoords[2]; /*0x57de9f*/
        v17 = StartCoords[3]; /*0x57dea2*/
        if ( v13 > *PlacementRect ) /*0x57dea7*/
        {
          v16 += v13 - v14; /*0x57deab*/
          v13 = *PlacementRect; /*0x57dead*/
        }
        v18 = PlacementRect[1]; /*0x57deaf*/
        v52[0] = v18; /*0x57deb4*/
        if ( v15 > v18 ) /*0x57deb8*/
        {
          v17 += v15 - v18; /*0x57debc*/
          v15 = v18; /*0x57debe*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57dec8*/
          v16 = v14 - v13 + right + 1; /*0x57ded0*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57dee3*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57dee8*/
        v19 = v13; /*0x57deea*/
        v1 = a1; /*0x57deec*/
      }
    }
    v58 = v19; /*0x57df0d*/
    v63[2] = 82; /*0x57df16*/
    v63[6] = 82; /*0x57df1a*/
    v61 = v17; /*0x57df26*/
    v63[8] = 81; /*0x57df2d*/
    v63[9] = 81; /*0x57df34*/
    v59 = v15; /*0x57df3d*/
    v60 = v16; /*0x57df41*/
    v63[0] = -1; /*0x57df45*/
    v63[1] = 79; /*0x57df49*/
    v63[3] = -1; /*0x57df51*/
    v63[4] = 78; /*0x57df55*/
    v63[5] = 80; /*0x57df5d*/
    v63[7] = -1; /*0x57df68*/
    v63[10] = 100; /*0x57df6f*/
    memset(&v63[11], 255, 20); /*0x57df7a*/
    result = Map_Create(v1); /*0x57df9d*/
    v20 = *v1 + (v1[1] << 9); /*0x57dfad*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57dfc4*/
    {
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)v1; /*0x57dfc9*/
      v21 = &unk_ABDC50; /*0x57dfcf*/
    }
    v22 = *(_DWORD *)&v21->__pad_28[28]; /*0x57dfd4*/
    if ( result > 0 ) /*0x57dfd9*/
    {
      if ( v22 < 92 ) /*0x57dfe2*/
      {
        v23 = v63[result]; /*0x57dffd*/
        if ( v22 == v23 ) /*0x57e003*/
          return result; /*0x57e003*/
      }
      else if ( v22 == 92 ) /*0x57dfe4*/
      {
        v23 = 93; /*0x57dfe6*/
      }
      else
      {
        if ( v22 != 94 ) /*0x57dff0*/
          return result; /*0x57dff0*/
        v23 = 95; /*0x57dff6*/
      }
      v24 = v49; /*0x57e009*/
      v25 = v51; /*0x57e00d*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57e015*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57e018*/
      *(_DWORD *)&v47->__pad_28[28] = v23; /*0x57e01b*/
      v62[1] = dword_886FA4; /*0x57e029*/
      v62[0] = DSurface_ViewBounds; /*0x57e034*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v65); /*0x57e04a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57e04c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e061*/
      {
        rcDst = *v27; /*0x57e136*/
      }
      else
      {
        right = v27->right; /*0x57e06c*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57e07f*/
        {
          rcDst = *v26; /*0x57e119*/
        }
        else
        {
          left = v26->left; /*0x57e088*/
          top = v26->top; /*0x57e08a*/
          v56 = v26->right; /*0x57e08d*/
          bottom = v26->bottom; /*0x57e094*/
          v30 = v27->left; /*0x57e098*/
          if ( left > v27->left ) /*0x57e09c*/
          {
            v31 = left - v30 + v56; /*0x57e0a4*/
            left = v27->left; /*0x57e0a6*/
            v56 = v31; /*0x57e0a8*/
          }
          v32 = v27->top; /*0x57e0ac*/
          v50[0] = v32; /*0x57e0b1*/
          if ( top > v32 ) /*0x57e0b5*/
          {
            v33 = top - v32 + bottom; /*0x57e0bd*/
            top = v32; /*0x57e0bf*/
            bottom = v33; /*0x57e0c1*/
          }
          if ( left + v56 < v30 + right ) /*0x57e0d3*/
            v56 = v30 - left + right + 1; /*0x57e0df*/
          v34 = bottom; /*0x57e0eb*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57e0f6*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57e0fb*/
          rcDst.left = left; /*0x57e0fd*/
          rcDst.top = top; /*0x57e105*/
          v24 = v49; /*0x57e109*/
          rcDst.right = v56; /*0x57e10d*/
          rcDst.bottom = v34; /*0x57e111*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57e15f*/
      v43 = v35[3]; /*0x57e16a*/
      v42 = v35[2]; /*0x57e16f*/
      v36 = CellStruct::Copy(v35, v52); /*0x57e17d*/
      v37 = Coord2D::Sub(v36, v50, v62); /*0x57e184*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57e18e*/
      v58 = *v38; /*0x57e19c*/
      v59 = v38[1]; /*0x57e1a3*/
      v60 = v38[2]; /*0x57e1aa*/
      v61 = v38[3]; /*0x57e1b3*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57e1d3*/
      if ( v23 == 100 ) /*0x57e1db*/
      {
        LOBYTE(v54) = 1; /*0x57e1e8*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57e1ec*/
        right = 0x10000; /*0x57e1fd*/
        v50[0] = *CellStruct::Add(v1, v52, &right); /*0x57e21a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e21e*/
        v39 = CellStruct::Set(v52, 0, 1); /*0x57e22a*/
        v50[0] = *CellStruct::Sub(v1, &right, v39); /*0x57e248*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e24c*/
      }
      House::AnnounceUpgrade(v24, -1); /*0x57e255*/
      v40 = v51; /*0x57e25a*/
      House::AnnounceUpgrade(v51, -1); /*0x57e262*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57e26f*/
      v41 = v54; /*0x57e274*/
      Cell::SearchEnemies(v24, v54); /*0x57e27b*/
      Cell::SearchEnemies(v40, v41); /*0x57e283*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57e28b*/
    }
  }
  return result; /*0x57e290*/
}



// ==== 0x0057E2A0  CreateCliffStraightMap  this=-  sig=csp ====
char __stdcall CreateCliffStraightMap(__int16 *a1)
{
  __int16 *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  int v41; // ebx
  int v42; // edi
  int v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  _DWORD v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  _DWORD v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  _DWORD v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57e2ac*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57e2bc*/
  if ( v2 >= 74 && v2 <= 101 ) /*0x57e2cb*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57e2e6*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e2f6*/
    {
      v5 = v4; /*0x57e2f8*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57e2fe*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1; /*0x57e300*/
    }
    v6 = *a1 - 1; /*0x57e30c*/
    HIWORD(v50) = a1[1]; /*0x57e30e*/
    LOWORD(v50) = v6; /*0x57e316*/
    v53 = (int)v5; /*0x57e31b*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57e325*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e335*/
    {
      v52 = v8; /*0x57e337*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57e341*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57e345*/
    }
    v9 = *a1 + 1; /*0x57e351*/
    HIWORD(v50) = a1[1]; /*0x57e353*/
    LOWORD(v50) = v9; /*0x57e35b*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57e366*/
    if ( v10 < 0x40000 && (v11 = *(_DWORD *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57e376*/
    {
      v50 = v11; /*0x57e378*/
    }
    else
    {
      v12 = v50; /*0x57e37e*/
      v50 = (int)&unk_ABDC50; /*0x57e382*/
      unk_ABDC50.smudgeTypeIndex = v12; /*0x57e386*/
    }
    LOBYTE(v55) = 0; /*0x57e393*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57e3a1*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57e3a6*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e3bb*/
    {
      v21 = *PlacementRect; /*0x57e448*/
      v17 = PlacementRect[1]; /*0x57e44a*/
      v18 = PlacementRect[2]; /*0x57e44d*/
      v19 = PlacementRect[3]; /*0x57e450*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e3c6*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57e3d5*/
      {
        v21 = *StartCoords; /*0x57e43b*/
        v17 = StartCoords[1]; /*0x57e43d*/
        v18 = StartCoords[2]; /*0x57e440*/
        v19 = StartCoords[3]; /*0x57e443*/
      }
      else
      {
        v15 = *StartCoords; /*0x57e3d7*/
        v16 = *PlacementRect; /*0x57e3d9*/
        v17 = StartCoords[1]; /*0x57e3db*/
        v18 = StartCoords[2]; /*0x57e3de*/
        v19 = StartCoords[3]; /*0x57e3e1*/
        if ( v15 > *PlacementRect ) /*0x57e3e6*/
        {
          v18 += v15 - v16; /*0x57e3ea*/
          v15 = *PlacementRect; /*0x57e3ec*/
        }
        v20 = PlacementRect[1]; /*0x57e3ee*/
        v56[0] = v20; /*0x57e3f3*/
        if ( v17 > v20 ) /*0x57e3f7*/
        {
          v19 += v17 - v20; /*0x57e3fb*/
          v17 = v20; /*0x57e3fd*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57e40a*/
          v18 = v16 - v15 + right + 1; /*0x57e412*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57e425*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57e42a*/
        v1 = a1; /*0x57e42c*/
        v21 = v15; /*0x57e433*/
        v5 = (CellClass *)v53; /*0x57e435*/
      }
    }
    v60 = v19; /*0x57e453*/
    v59 = v18; /*0x57e45c*/
    v64[2] = 91; /*0x57e460*/
    v64[6] = 91; /*0x57e464*/
    v57 = v21; /*0x57e46b*/
    v58 = v17; /*0x57e479*/
    v64[0] = -1; /*0x57e47d*/
    v64[1] = 88; /*0x57e481*/
    v64[3] = -1; /*0x57e489*/
    v64[4] = 87; /*0x57e48d*/
    v64[5] = 89; /*0x57e495*/
    v64[7] = -1; /*0x57e4a0*/
    v64[8] = 90; /*0x57e4a7*/
    v64[9] = 90; /*0x57e4ae*/
    v64[10] = 101; /*0x57e4b5*/
    memset(&v64[11], 255, 20); /*0x57e4c0*/
    LOBYTE(v2) = Map_Create_57B990(v1); /*0x57e4e3*/
    v22 = *(_DWORD *)&v5->__pad_28[28]; /*0x57e4e8*/
    if ( v2 > 0 ) /*0x57e4ed*/
    {
      if ( v22 < 96 ) /*0x57e4f6*/
      {
        v23 = v64[v2]; /*0x57e511*/
        if ( v23 == v22 ) /*0x57e517*/
          return v2; /*0x57e517*/
      }
      else if ( v22 == 96 ) /*0x57e4f8*/
      {
        v23 = 97; /*0x57e4fa*/
      }
      else
      {
        if ( v22 != 98 ) /*0x57e504*/
          return v2; /*0x57e504*/
        v23 = 99; /*0x57e50a*/
      }
      v24 = v52; /*0x57e51d*/
      v25 = v50; /*0x57e521*/
      *(_DWORD *)&v5->__pad_28[28] = v23; /*0x57e525*/
      *(_DWORD *)(v24 + 68) = v23; /*0x57e528*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57e52b*/
      v61[1] = dword_886FA4; /*0x57e539*/
      v61[0] = DSurface_ViewBounds; /*0x57e547*/
      v26 = (struct tagRECT *)House::GetStartCoords((int)v5, v66); /*0x57e55a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57e55c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e571*/
      {
        rcDst = *v27; /*0x57e62b*/
      }
      else
      {
        right = v27->right; /*0x57e57c*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57e58f*/
        {
          rcDst = *v26; /*0x57e60e*/
        }
        else
        {
          left = v26->left; /*0x57e591*/
          v29 = v27->left; /*0x57e593*/
          v30 = v26->right; /*0x57e595*/
          top = v26->top; /*0x57e598*/
          bottom = v26->bottom; /*0x57e59b*/
          v33 = left <= v27->left; /*0x57e59e*/
          v63 = v30; /*0x57e5a0*/
          if ( !v33 ) /*0x57e5a4*/
          {
            v30 += left - v29; /*0x57e5a8*/
            left = v29; /*0x57e5aa*/
            v63 = v30; /*0x57e5ac*/
          }
          v34 = v27->top; /*0x57e5b0*/
          v51[0] = v34; /*0x57e5b5*/
          if ( top > v34 ) /*0x57e5b9*/
          {
            bottom += top - v34; /*0x57e5bd*/
            top = v34; /*0x57e5bf*/
          }
          if ( left + v30 >= v29 + right ) /*0x57e5cb*/
            v35 = v63; /*0x57e5d9*/
          else
            v35 = v29 - left + right + 1; /*0x57e5d3*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57e5ec*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57e5f1*/
          v5 = (CellClass *)v53; /*0x57e5f3*/
          rcDst.top = top; /*0x57e5f7*/
          rcDst.left = left; /*0x57e5fb*/
          rcDst.right = v35; /*0x57e5ff*/
          rcDst.bottom = bottom; /*0x57e603*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57e654*/
      v46 = v36[3]; /*0x57e65f*/
      v45 = v36[2]; /*0x57e664*/
      v37 = CellStruct::Copy(v36, v56); /*0x57e672*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57e679*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57e683*/
      v57 = *v39; /*0x57e691*/
      v58 = v39[1]; /*0x57e698*/
      v59 = v39[2]; /*0x57e69f*/
      v60 = v39[3]; /*0x57e6a8*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57e6c8*/
      if ( v23 == 101 ) /*0x57e6d0*/
      {
        LOBYTE(v55) = 1; /*0x57e6e4*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)a1); /*0x57e6e8*/
        v40 = *a1 + 1; /*0x57e6f4*/
        HIWORD(right) = a1[1]; /*0x57e6f6*/
        LOWORD(right) = v40; /*0x57e6fb*/
        v51[0] = right; /*0x57e708*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e712*/
        right = 1; /*0x57e723*/
        v51[0] = *CellStruct::Sub(a1, v56, &right); /*0x57e73a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e744*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57e74c*/
      v41 = v52; /*0x57e751*/
      House::AnnounceUpgrade(v52, -1); /*0x57e758*/
      v42 = v50; /*0x57e75e*/
      House::AnnounceUpgrade(v50, -1); /*0x57e764*/
      v43 = v55; /*0x57e769*/
      Cell::SearchEnemies((int)v5, v55); /*0x57e770*/
      Cell::SearchEnemies(v41, v43); /*0x57e778*/
      LOBYTE(v2) = Cell::SearchEnemies(v42, v43); /*0x57e780*/
    }
  }
  return v2; /*0x57e785*/
}



// ==== 0x0057E7A0  CreateCliffBridgeMap  this=-  sig=csp ====
int __stdcall CreateCliffBridgeMap(__int16 *a1)
{
  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  _DWORD *v36; // eax
  int *v37; // eax
  int *v38; // eax
  _WORD *v39; // eax
  int v40; // ebp
  int v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  _DWORD v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  _DWORD v62[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57e7ad*/
  result = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57e7bc*/
  if ( result >= 205 && result <= 232 ) /*0x57e7cf*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57e7e6*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e7f6*/
    {
      v5 = (CellClass *)v4; /*0x57e7f8*/
      v49 = v4; /*0x57e7fa*/
    }
    else
    {
      v6 = *(_DWORD *)a1; /*0x57e800*/
      v49 = (int)&unk_ABDC50; /*0x57e803*/
      v5 = &unk_ABDC50; /*0x57e80b*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57e80f*/
    }
    v46 = *(_DWORD *)a1 - 0x10000; /*0x57e823*/
    v7 = *a1 + (SHIWORD(v46) << 9); /*0x57e831*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e841*/
    {
      v51 = v8; /*0x57e843*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57e84d*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57e855*/
    }
    v9 = *a1 + ((__int16)((unsigned int)(*(_DWORD *)a1 + 0x10000) >> 16) << 9); /*0x57e877*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57e887*/
    {
      v47 = v10; /*0x57e889*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57e893*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1 + 0x10000; /*0x57e89b*/
    }
    LOBYTE(v54) = 0; /*0x57e8a8*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57e8b6*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57e8bb*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e8d0*/
    {
      v19 = *PlacementRect; /*0x57e956*/
      v15 = PlacementRect[1]; /*0x57e958*/
      v16 = PlacementRect[2]; /*0x57e95b*/
      v17 = PlacementRect[3]; /*0x57e95e*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e8db*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57e8ea*/
      {
        v19 = *StartCoords; /*0x57e949*/
        v15 = StartCoords[1]; /*0x57e94b*/
        v16 = StartCoords[2]; /*0x57e94e*/
        v17 = StartCoords[3]; /*0x57e951*/
      }
      else
      {
        v13 = *StartCoords; /*0x57e8ec*/
        v14 = *PlacementRect; /*0x57e8ee*/
        v15 = StartCoords[1]; /*0x57e8f0*/
        v16 = StartCoords[2]; /*0x57e8f3*/
        v17 = StartCoords[3]; /*0x57e8f6*/
        if ( v13 > *PlacementRect ) /*0x57e8fb*/
        {
          v16 += v13 - v14; /*0x57e8ff*/
          v13 = *PlacementRect; /*0x57e901*/
        }
        v18 = PlacementRect[1]; /*0x57e903*/
        v52[0] = v18; /*0x57e908*/
        if ( v15 > v18 ) /*0x57e90c*/
        {
          v17 += v15 - v18; /*0x57e910*/
          v15 = v18; /*0x57e912*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57e91c*/
          v16 = v14 - v13 + right + 1; /*0x57e924*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57e937*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57e93c*/
        v19 = v13; /*0x57e93e*/
        v1 = a1; /*0x57e940*/
      }
    }
    v58 = v19; /*0x57e961*/
    v63[2] = 213; /*0x57e96a*/
    v63[6] = 213; /*0x57e96e*/
    v61 = v17; /*0x57e97a*/
    v63[8] = 212; /*0x57e981*/
    v63[9] = 212; /*0x57e988*/
    v59 = v15; /*0x57e991*/
    v60 = v16; /*0x57e995*/
    v63[0] = -1; /*0x57e999*/
    v63[1] = 210; /*0x57e99d*/
    v63[3] = -1; /*0x57e9a5*/
    v63[4] = 209; /*0x57e9a9*/
    v63[5] = 211; /*0x57e9b1*/
    v63[7] = -1; /*0x57e9bc*/
    v63[10] = 231; /*0x57e9c3*/
    memset(&v63[11], 255, 20); /*0x57e9ce*/
    result = Map_Create_57CAB0(v1); /*0x57e9f1*/
    v20 = *v1 + (v1[1] << 9); /*0x57ea01*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57ea18*/
    {
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)v1; /*0x57ea1d*/
      v21 = &unk_ABDC50; /*0x57ea23*/
    }
    v22 = *(_DWORD *)&v21->__pad_28[28]; /*0x57ea28*/
    if ( result > 0 ) /*0x57ea2d*/
    {
      if ( v22 < 223 ) /*0x57ea39*/
      {
        v23 = v63[result]; /*0x57ea57*/
        if ( v22 == v23 ) /*0x57ea5d*/
          return result; /*0x57ea5d*/
      }
      else if ( v22 == 223 ) /*0x57ea3b*/
      {
        v23 = 224; /*0x57ea3d*/
      }
      else
      {
        if ( v22 != 225 ) /*0x57ea4a*/
          return result; /*0x57ea4a*/
        v23 = 226; /*0x57ea50*/
      }
      v24 = v49; /*0x57ea63*/
      v25 = v51; /*0x57ea67*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57ea6f*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57ea72*/
      *(_DWORD *)&v47->__pad_28[28] = v23; /*0x57ea75*/
      v62[1] = dword_886FA4; /*0x57ea83*/
      v62[0] = DSurface_ViewBounds; /*0x57ea8e*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v65); /*0x57eaa4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57eaa6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57eabb*/
      {
        rcDst = *v27; /*0x57eb90*/
      }
      else
      {
        right = v27->right; /*0x57eac6*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57ead9*/
        {
          rcDst = *v26; /*0x57eb73*/
        }
        else
        {
          left = v26->left; /*0x57eae2*/
          top = v26->top; /*0x57eae4*/
          v56 = v26->right; /*0x57eae7*/
          bottom = v26->bottom; /*0x57eaee*/
          v30 = v27->left; /*0x57eaf2*/
          if ( left > v27->left ) /*0x57eaf6*/
          {
            v31 = left - v30 + v56; /*0x57eafe*/
            left = v27->left; /*0x57eb00*/
            v56 = v31; /*0x57eb02*/
          }
          v32 = v27->top; /*0x57eb06*/
          v50[0] = v32; /*0x57eb0b*/
          if ( top > v32 ) /*0x57eb0f*/
          {
            v33 = top - v32 + bottom; /*0x57eb17*/
            top = v32; /*0x57eb19*/
            bottom = v33; /*0x57eb1b*/
          }
          if ( left + v56 < v30 + right ) /*0x57eb2d*/
            v56 = v30 - left + right + 1; /*0x57eb39*/
          v34 = bottom; /*0x57eb45*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57eb50*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57eb55*/
          rcDst.left = left; /*0x57eb57*/
          rcDst.top = top; /*0x57eb5f*/
          v24 = v49; /*0x57eb63*/
          rcDst.right = v56; /*0x57eb67*/
          rcDst.bottom = v34; /*0x57eb6b*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57ebb9*/
      v43 = v35[3]; /*0x57ebc4*/
      v42 = v35[2]; /*0x57ebc9*/
      v36 = CellStruct::Copy(v35, v52); /*0x57ebd7*/
      v37 = Coord2D::Sub(v36, v50, v62); /*0x57ebde*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57ebe8*/
      v58 = *v38; /*0x57ebf6*/
      v59 = v38[1]; /*0x57ebfd*/
      v60 = v38[2]; /*0x57ec04*/
      v61 = v38[3]; /*0x57ec0d*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57ec2d*/
      if ( v23 == 231 ) /*0x57ec38*/
      {
        LOBYTE(v54) = 1; /*0x57ec45*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57ec49*/
        right = 0x10000; /*0x57ec5a*/
        v50[0] = *CellStruct::Add(v1, v52, &right); /*0x57ec77*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57ec7b*/
        v39 = CellStruct::Set(v52, 0, 1); /*0x57ec87*/
        v50[0] = *CellStruct::Sub(v1, &right, v39); /*0x57eca5*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57eca9*/
      }
      House::AnnounceUpgrade(v24, -1); /*0x57ecb2*/
      v40 = v51; /*0x57ecb7*/
      House::AnnounceUpgrade(v51, -1); /*0x57ecbf*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57eccc*/
      v41 = v54; /*0x57ecd1*/
      Cell::SearchEnemies(v24, v54); /*0x57ecd8*/
      Cell::SearchEnemies(v40, v41); /*0x57ece0*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57ece8*/
    }
  }
  return result; /*0x57eced*/
}



// ==== 0x0057ED00  CreateCliffStraightBridgeMap  this=-  sig=csp ====
char __stdcall CreateCliffStraightBridgeMap(__int16 *a1)
{
  __int16 *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  int v41; // ebx
  int v42; // edi
  int v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  _DWORD v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  _DWORD v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  _DWORD v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57ed0c*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57ed1c*/
  if ( v2 >= 205 && v2 <= 232 ) /*0x57ed2f*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57ed4a*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57ed5a*/
    {
      v5 = v4; /*0x57ed5c*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57ed62*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1; /*0x57ed64*/
    }
    v6 = *a1 - 1; /*0x57ed70*/
    HIWORD(v50) = a1[1]; /*0x57ed72*/
    LOWORD(v50) = v6; /*0x57ed7a*/
    v53 = (int)v5; /*0x57ed7f*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57ed89*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57ed99*/
    {
      v52 = v8; /*0x57ed9b*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57eda5*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57eda9*/
    }
    v9 = *a1 + 1; /*0x57edb5*/
    HIWORD(v50) = a1[1]; /*0x57edb7*/
    LOWORD(v50) = v9; /*0x57edbf*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57edca*/
    if ( v10 < 0x40000 && (v11 = *(_DWORD *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57edda*/
    {
      v50 = v11; /*0x57eddc*/
    }
    else
    {
      v12 = v50; /*0x57ede2*/
      v50 = (int)&unk_ABDC50; /*0x57ede6*/
      unk_ABDC50.smudgeTypeIndex = v12; /*0x57edea*/
    }
    LOBYTE(v55) = 0; /*0x57edf7*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57ee05*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57ee0a*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57ee1f*/
    {
      v21 = *PlacementRect; /*0x57eeac*/
      v17 = PlacementRect[1]; /*0x57eeae*/
      v18 = PlacementRect[2]; /*0x57eeb1*/
      v19 = PlacementRect[3]; /*0x57eeb4*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57ee2a*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57ee39*/
      {
        v21 = *StartCoords; /*0x57ee9f*/
        v17 = StartCoords[1]; /*0x57eea1*/
        v18 = StartCoords[2]; /*0x57eea4*/
        v19 = StartCoords[3]; /*0x57eea7*/
      }
      else
      {
        v15 = *StartCoords; /*0x57ee3b*/
        v16 = *PlacementRect; /*0x57ee3d*/
        v17 = StartCoords[1]; /*0x57ee3f*/
        v18 = StartCoords[2]; /*0x57ee42*/
        v19 = StartCoords[3]; /*0x57ee45*/
        if ( v15 > *PlacementRect ) /*0x57ee4a*/
        {
          v18 += v15 - v16; /*0x57ee4e*/
          v15 = *PlacementRect; /*0x57ee50*/
        }
        v20 = PlacementRect[1]; /*0x57ee52*/
        v56[0] = v20; /*0x57ee57*/
        if ( v17 > v20 ) /*0x57ee5b*/
        {
          v19 += v17 - v20; /*0x57ee5f*/
          v17 = v20; /*0x57ee61*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57ee6e*/
          v18 = v16 - v15 + right + 1; /*0x57ee76*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57ee89*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57ee8e*/
        v1 = a1; /*0x57ee90*/
        v21 = v15; /*0x57ee97*/
        v5 = (CellClass *)v53; /*0x57ee99*/
      }
    }
    v60 = v19; /*0x57eeb7*/
    v59 = v18; /*0x57eec0*/
    v64[2] = 222; /*0x57eec4*/
    v64[6] = 222; /*0x57eec8*/
    v57 = v21; /*0x57eecf*/
    v58 = v17; /*0x57eedd*/
    v64[0] = -1; /*0x57eee1*/
    v64[1] = 219; /*0x57eee5*/
    v64[3] = -1; /*0x57eeed*/
    v64[4] = 218; /*0x57eef1*/
    v64[5] = 220; /*0x57eef9*/
    v64[7] = -1; /*0x57ef04*/
    v64[8] = 221; /*0x57ef0b*/
    v64[9] = 221; /*0x57ef12*/
    v64[10] = 232; /*0x57ef19*/
    memset(&v64[11], 255, 20); /*0x57ef24*/
    LOBYTE(v2) = Map_Create_57CBE0(v1); /*0x57ef47*/
    v22 = *(_DWORD *)&v5->__pad_28[28]; /*0x57ef4c*/
    if ( v2 > 0 ) /*0x57ef51*/
    {
      if ( v22 < 227 ) /*0x57ef5d*/
      {
        v23 = v64[v2]; /*0x57ef7b*/
        if ( v23 == v22 ) /*0x57ef81*/
          return v2; /*0x57ef81*/
      }
      else if ( v22 == 227 ) /*0x57ef5f*/
      {
        v23 = 228; /*0x57ef61*/
      }
      else
      {
        if ( v22 != 229 ) /*0x57ef6e*/
          return v2; /*0x57ef6e*/
        v23 = 230; /*0x57ef74*/
      }
      v24 = v52; /*0x57ef87*/
      v25 = v50; /*0x57ef8b*/
      *(_DWORD *)&v5->__pad_28[28] = v23; /*0x57ef8f*/
      *(_DWORD *)(v24 + 68) = v23; /*0x57ef92*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57ef95*/
      v61[1] = dword_886FA4; /*0x57efa3*/
      v61[0] = DSurface_ViewBounds; /*0x57efb1*/
      v26 = (struct tagRECT *)House::GetStartCoords((int)v5, v66); /*0x57efc4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57efc6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57efdb*/
      {
        rcDst = *v27; /*0x57f095*/
      }
      else
      {
        right = v27->right; /*0x57efe6*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57eff9*/
        {
          rcDst = *v26; /*0x57f078*/
        }
        else
        {
          left = v26->left; /*0x57effb*/
          v29 = v27->left; /*0x57effd*/
          v30 = v26->right; /*0x57efff*/
          top = v26->top; /*0x57f002*/
          bottom = v26->bottom; /*0x57f005*/
          v33 = left <= v27->left; /*0x57f008*/
          v63 = v30; /*0x57f00a*/
          if ( !v33 ) /*0x57f00e*/
          {
            v30 += left - v29; /*0x57f012*/
            left = v29; /*0x57f014*/
            v63 = v30; /*0x57f016*/
          }
          v34 = v27->top; /*0x57f01a*/
          v51[0] = v34; /*0x57f01f*/
          if ( top > v34 ) /*0x57f023*/
          {
            bottom += top - v34; /*0x57f027*/
            top = v34; /*0x57f029*/
          }
          if ( left + v30 >= v29 + right ) /*0x57f035*/
            v35 = v63; /*0x57f043*/
          else
            v35 = v29 - left + right + 1; /*0x57f03d*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57f056*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57f05b*/
          v5 = (CellClass *)v53; /*0x57f05d*/
          rcDst.top = top; /*0x57f061*/
          rcDst.left = left; /*0x57f065*/
          rcDst.right = v35; /*0x57f069*/
          rcDst.bottom = bottom; /*0x57f06d*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57f0be*/
      v46 = v36[3]; /*0x57f0c9*/
      v45 = v36[2]; /*0x57f0ce*/
      v37 = CellStruct::Copy(v36, v56); /*0x57f0dc*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57f0e3*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57f0ed*/
      v57 = *v39; /*0x57f0fb*/
      v58 = v39[1]; /*0x57f102*/
      v59 = v39[2]; /*0x57f109*/
      v60 = v39[3]; /*0x57f112*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57f132*/
      if ( v23 == 232 ) /*0x57f13d*/
      {
        LOBYTE(v55) = 1; /*0x57f151*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)a1); /*0x57f155*/
        v40 = *a1 + 1; /*0x57f161*/
        HIWORD(right) = a1[1]; /*0x57f163*/
        LOWORD(right) = v40; /*0x57f168*/
        v51[0] = right; /*0x57f175*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f17f*/
        right = 1; /*0x57f190*/
        v51[0] = *CellStruct::Sub(a1, v56, &right); /*0x57f1a7*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f1b1*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57f1b9*/
      v41 = v52; /*0x57f1be*/
      House::AnnounceUpgrade(v52, -1); /*0x57f1c5*/
      v42 = v50; /*0x57f1cb*/
      House::AnnounceUpgrade(v50, -1); /*0x57f1d1*/
      v43 = v55; /*0x57f1d6*/
      Cell::SearchEnemies((int)v5, v55); /*0x57f1dd*/
      Cell::SearchEnemies(v41, v43); /*0x57f1e5*/
      LOBYTE(v2) = Cell::SearchEnemies(v42, v43); /*0x57f1ed*/
    }
  }
  return v2; /*0x57f1f2*/
}



// ==== 0x0057F200  CellClass::ApplyCliffTileModifications  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyCliffTileModifications(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x57f204*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x57f215*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57f22b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57f22f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57f234*/
  }
  v6 = v5[17]; /*0x57f239*/
  if ( v6 >= 74 && v6 <= 82 || v6 >= 92 && v6 <= 95 || v6 == 100 ) /*0x57f253*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x57f25c*/
    LOWORD(a2) = *(_WORD *)a2; /*0x57f260*/
    HIWORD(a2) = v7 - 1; /*0x57f26b*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f283*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57f28e*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x57f2c6*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f2ca*/
      HIWORD(a2) = v10; /*0x57f2cf*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f2eb*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x57f2f6*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57f30b*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57f30f*/
        HIWORD(a2) = v12 - 1; /*0x57f31a*/
        CellClass::ApplyTileModification6(this, &a2); /*0x57f32a*/
      }
      else
      {
        CellClass::ApplyTileModification6(this, (_DWORD *)v2); /*0x57f2fb*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x57f297*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f299*/
      HIWORD(a2) = v9; /*0x57f29e*/
      CellClass::ApplyTileModification6(this, &a2); /*0x57f2b2*/
    }
  }
  else if ( v6 >= 83 && v6 <= 91 || v6 >= 96 && v6 <= 99 || v6 == 101 ) /*0x57f34e*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x57f35b*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x57f35d*/
    LOWORD(a2) = v13; /*0x57f362*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f37e*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x57f389*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x57f3c1*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f3c5*/
      LOWORD(a2) = v16; /*0x57f3ca*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f3e6*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x57f3f1*/
      {
        a2 = 1; /*0x57f40f*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x57f428*/
        CellClass::ApplyTileModification7(this, &v18); /*0x57f42f*/
      }
      else
      {
        CellClass::ApplyTileModification7(this, (int *)v2); /*0x57f3f6*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x57f392*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f394*/
      LOWORD(a2) = v15; /*0x57f399*/
      CellClass::ApplyTileModification7(this, &a2); /*0x57f3ad*/
    }
  }
}



// ==== 0x0057F440  CellClass::ApplyTileMod58  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileMod58(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x57f444*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x57f455*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57f46b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57f46f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57f474*/
  }
  v6 = v5[17]; /*0x57f479*/
  if ( v6 >= 205 && v6 <= 213 || v6 >= 223 && v6 <= 226 || v6 == 231 ) /*0x57f49d*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x57f4a6*/
    LOWORD(a2) = *(_WORD *)a2; /*0x57f4aa*/
    HIWORD(a2) = v7 - 1; /*0x57f4b5*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f4cd*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57f4dc*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x57f514*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f518*/
      HIWORD(a2) = v10; /*0x57f51d*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f539*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x57f548*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57f55d*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57f561*/
        HIWORD(a2) = v12 - 1; /*0x57f56c*/
        CellClass::ApplyTileModification5(this, &a2); /*0x57f57c*/
      }
      else
      {
        CellClass::ApplyTileModification5(this, (_DWORD *)v2); /*0x57f54d*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x57f4e5*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f4e7*/
      HIWORD(a2) = v9; /*0x57f4ec*/
      CellClass::ApplyTileModification5(this, &a2); /*0x57f500*/
    }
  }
  else if ( v6 >= 214 && v6 <= 222 || v6 >= 227 && v6 <= 230 || v6 == 232 ) /*0x57f5aa*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x57f5b7*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x57f5b9*/
    LOWORD(a2) = v13; /*0x57f5be*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f5da*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x57f5e9*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x57f621*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f625*/
      LOWORD(a2) = v16; /*0x57f62a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f646*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x57f655*/
      {
        a2 = 1; /*0x57f673*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x57f68c*/
        CellClass::ApplyTileModification8(this, &v18); /*0x57f693*/
      }
      else
      {
        CellClass::ApplyTileModification8(this, (int *)v2); /*0x57f65a*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x57f5f2*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f5f4*/
      LOWORD(a2) = v15; /*0x57f5f9*/
      CellClass::ApplyTileModification8(this, &a2); /*0x57f60d*/
    }
  }
}



// ==== 0x0057F6A0  CellClass::ApplyTileModification6  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTileModification6(CellClass *this, _DWORD *a2)
{
  int v2; // eax
  __int16 v3; // cx
  unsigned int v4; // eax
  BuildingClass *v5; // eax
  BuildingClass *v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // edi
  int v28; // ebx
  int v29; // ebp
  int v30; // edi
  struct tagRECT *v31; // eax
  int v32; // eax
  Coord2D *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int result; // eax
  int v37; // [esp-8h] [ebp-118h]
  struct tagRECT *v38; // [esp-4h] [ebp-114h]
  int v39; // [esp-4h] [ebp-114h]
  const RECT *v40; // [esp+0h] [ebp-110h]
  const RECT *v41; // [esp+0h] [ebp-110h]
  const RECT *v42; // [esp+4h] [ebp-10Ch]
  const RECT *v43; // [esp+4h] [ebp-10Ch]
  char v44; // [esp+13h] [ebp-FDh]
  __int16 v45[4]; // [esp+14h] [ebp-FCh] BYREF
  int v46; // [esp+1Ch] [ebp-F4h] BYREF
  int v47; // [esp+20h] [ebp-F0h]
  int v48; // [esp+24h] [ebp-ECh]
  int v49; // [esp+28h] [ebp-E8h]
  int v50; // [esp+2Ch] [ebp-E4h]
  BuildingClass *v51; // [esp+30h] [ebp-E0h]
  Terrain *v52; // [esp+34h] [ebp-DCh]
  int v53; // [esp+38h] [ebp-D8h]
  _WORD v54[2]; // [esp+3Ch] [ebp-D4h] BYREF
  int v55; // [esp+40h] [ebp-D0h]
  _WORD v56[2]; // [esp+44h] [ebp-CCh] BYREF
  int v57; // [esp+48h] [ebp-C8h]
  int v58; // [esp+4Ch] [ebp-C4h]
  int v59; // [esp+50h] [ebp-C0h]
  int v60; // [esp+54h] [ebp-BCh]
  int v61; // [esp+60h] [ebp-B0h]
  int v62; // [esp+64h] [ebp-ACh]
  int v63; // [esp+68h] [ebp-A8h]
  int v64; // [esp+6Ch] [ebp-A4h]
  int v65; // [esp+70h] [ebp-A0h]
  int v66; // [esp+74h] [ebp-9Ch] BYREF
  int v67; // [esp+78h] [ebp-98h]
  int v68; // [esp+7Ch] [ebp-94h] BYREF
  _DWORD v69[2]; // [esp+80h] [ebp-90h] BYREF
  int v70; // [esp+88h] [ebp-88h] BYREF
  int v71; // [esp+8Ch] [ebp-84h] BYREF
  int v72; // [esp+90h] [ebp-80h] BYREF
  int v73; // [esp+98h] [ebp-78h] BYREF
  _DWORD v74[4]; // [esp+A0h] [ebp-70h] BYREF
  int v75[4]; // [esp+B0h] [ebp-60h] BYREF
  int v76[4]; // [esp+D0h] [ebp-40h] BYREF
  int v77[4]; // [esp+F0h] [ebp-20h] BYREF
  Rect v78; // [esp+100h] [ebp-10h] BYREF

  v52 = (Terrain *)this; /*0x57f6ad*/
  *(_DWORD *)v45 = *a2; /*0x57f6b7*/
  v44 = 0; /*0x57f6bb*/
  do /*0x57f6df*/
  {
    --v45[0]; /*0x57f6c0*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45) + 17); /*0x57f6d4*/
  }
  while ( v2 >= 74 && v2 <= 101 ); /*0x57f6df*/
  v3 = ++v45[0]; /*0x57f6e6*/
  v46 = 0; /*0x57f6ef*/
  v47 = 0; /*0x57f6f3*/
  v48 = 0; /*0x57f6f7*/
  v49 = 0; /*0x57f6fb*/
  while ( 1 ) /*0x57f71b*/
  {
    v4 = v3 + (v45[1] << 9); /*0x57f719*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57f729*/
    {
      v6 = v5; /*0x57f72b*/
    }
    else
    {
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57f733*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v45; /*0x57f738*/
    }
    v51 = v6; /*0x57f741*/
    LOWORD(v53) = v3; /*0x57f74b*/
    HIWORD(v53) = v45[1] - 1; /*0x57f750*/
    v7 = v3 + ((__int16)(v45[1] - 1) << 9); /*0x57f75b*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x57f76b*/
    {
      v58 = v8; /*0x57f76d*/
    }
    else
    {
      v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57f777*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x57f77f*/
    }
    LOWORD(v57) = v3; /*0x57f787*/
    HIWORD(v57) = v45[1] + 1; /*0x57f78c*/
    v9 = v3 + ((__int16)(v45[1] + 1) << 9); /*0x57f797*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57f7a7*/
    {
      v55 = v10; /*0x57f7a9*/
    }
    else
    {
      v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57f7b3*/
      g_MissionQueueFrame.briefing[139] = v57; /*0x57f7bb*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v77); /*0x57f7d0*/
    StartCoords = House::GetStartCoords((House *)v6, v74); /*0x57f7dc*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57f7f1*/
    {
      v13 = *PlacementRect; /*0x57f877*/
      v15 = PlacementRect[1]; /*0x57f879*/
      v19 = PlacementRect[2]; /*0x57f87c*/
      v17 = PlacementRect[3]; /*0x57f87f*/
    }
    else
    {
      v59 = PlacementRect[2]; /*0x57f7fc*/
      if ( v59 <= 0 || (v50 = PlacementRect[3], v50 <= 0) ) /*0x57f80b*/
      {
        v13 = *StartCoords; /*0x57f86a*/
        v15 = StartCoords[1]; /*0x57f86c*/
        v19 = StartCoords[2]; /*0x57f86f*/
        v17 = StartCoords[3]; /*0x57f872*/
      }
      else
      {
        v13 = *StartCoords; /*0x57f80d*/
        v14 = *PlacementRect; /*0x57f80f*/
        v15 = StartCoords[1]; /*0x57f811*/
        v16 = StartCoords[2]; /*0x57f814*/
        v17 = StartCoords[3]; /*0x57f817*/
        if ( v13 > *PlacementRect ) /*0x57f81c*/
        {
          v16 += v13 - v14; /*0x57f820*/
          v13 = *PlacementRect; /*0x57f822*/
        }
        v18 = PlacementRect[1]; /*0x57f824*/
        v67 = v18; /*0x57f829*/
        if ( v15 > v18 ) /*0x57f82d*/
        {
          v17 += v15 - v18; /*0x57f831*/
          v15 = v18; /*0x57f833*/
        }
        if ( v13 + v16 < v14 + v59 ) /*0x57f840*/
          v16 = v14 - v13 + v59 + 1; /*0x57f848*/
        if ( v17 + v15 < v50 + v67 ) /*0x57f85b*/
          v17 = v50 + v67 - v15 + 1; /*0x57f860*/
        v6 = v51; /*0x57f862*/
        v19 = v16; /*0x57f866*/
      }
    }
    v62 = v13; /*0x57f882*/
    v63 = v15; /*0x57f886*/
    v64 = v19; /*0x57f88a*/
    v65 = v17; /*0x57f88e*/
    v20 = v6->?[2]; /*0x57f892*/
    v50 = v20; /*0x57f895*/
    switch ( v20 ) /*0x57f8ad*/
    {
      case 'N': /*0x57f8ad*/
      case 'O': /*0x57f8ad*/
      case 'P': /*0x57f8ad*/
      case 'Q': /*0x57f8ad*/
      case 'R': /*0x57f8ad*/
      case 'd': /*0x57f8ad*/
        v22 = Range_RandomInt(0, 3u); /*0x57f8cf*/
        v23 = v48; /*0x57f8d9*/
        v21 = v22 + 74; /*0x57f8dd*/
        v24 = v45[0]; /*0x57f8e0*/
        v25 = v45[1] - 1; /*0x57f8e5*/
        v26 = 3; /*0x57f8ed*/
        if ( v48 <= 0 || v49 <= 0 ) /*0x57f8f9*/
        {
          v23 = 1; /*0x57f96a*/
        }
        else
        {
          v61 = v49; /*0x57f903*/
          v60 = v46; /*0x57f90b*/
          v27 = v47; /*0x57f90f*/
          if ( v46 > v45[0] ) /*0x57f915*/
          {
            v60 = v45[0]; /*0x57f919*/
            v23 = v46 + v48 - v45[0]; /*0x57f91d*/
          }
          if ( v47 > v25 ) /*0x57f921*/
          {
            v27 = v45[1] - 1; /*0x57f92b*/
            v61 += v47 - v25; /*0x57f92d*/
          }
          if ( v23 + v60 < v45[0] + 1 ) /*0x57f93c*/
            v23 = v45[0] - v60 + 2; /*0x57f945*/
          v28 = v61; /*0x57f947*/
          if ( v61 + v27 < v25 + 3 ) /*0x57f953*/
            v28 = v25 - v27 + 4; /*0x57f95a*/
          v24 = v60; /*0x57f95c*/
          v25 = v27; /*0x57f960*/
          v26 = v28; /*0x57f962*/
          v6 = v51; /*0x57f964*/
        }
        v48 = v23; /*0x57f96c*/
        v20 = v50; /*0x57f970*/
        v46 = v24; /*0x57f974*/
        v47 = v25; /*0x57f978*/
        v49 = v26; /*0x57f97c*/
        v44 = 1; /*0x57f980*/
        goto LABEL_49; /*0x57f980*/
      case '\\': /*0x57f8ad*/
      case ']': /*0x57f8ad*/
        v21 = 92; /*0x57f8b4*/
        goto LABEL_49; /*0x57f8b9*/
      case '^': /*0x57f8ad*/
      case '_': /*0x57f8ad*/
        v21 = 94; /*0x57f8be*/
LABEL_49:
        if ( v21 != v20 ) /*0x57f987*/
        {
          v29 = v58; /*0x57f98d*/
          v30 = v55; /*0x57f991*/
          v6->?[2] = v21; /*0x57f995*/
          *(_DWORD *)(v29 + 68) = v21; /*0x57f998*/
          *(_DWORD *)(v30 + 68) = v21; /*0x57f99b*/
          v69[0] = DSurface_ViewBounds.field_0; /*0x57f9a9*/
          v69[1] = DSurface_ViewBounds.field_4; /*0x57f9b7*/
          v38 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v76); /*0x57f9cd*/
          House::GetStartCoords((House *)v6, v75); /*0x57f9d1*/
          v31 = (struct tagRECT *)Rect::Union(v38, v40, v42); /*0x57f9df*/
          v32 = Rect::Union(v31, v41, v43); /*0x57f9f0*/
          v39 = *(_DWORD *)(v32 + 12); /*0x57f9fb*/
          v37 = *(_DWORD *)(v32 + 8); /*0x57fa03*/
          v33 = (Coord2D *)CellStruct::Copy((CellStruct *)v32, &v73); /*0x57fa17*/
          v34 = Coord2D::Sub(v33, &v72, v69); /*0x57fa1e*/
          v35 = Rect::Construct(&v78, v34, v37, v39); /*0x57fa2b*/
          v62 = *v35; /*0x57fa39*/
          v63 = v35[1]; /*0x57fa40*/
          v64 = v35[2]; /*0x57fa47*/
          v65 = v35[3]; /*0x57fa53*/
          Cell::CreateCrater(*v35, v35[1], v35[2], v35[3], 0); /*0x57fa76*/
          if ( v20 == 100 ) /*0x57fa7e*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v45); /*0x57fa8e*/
            v54[0] = 0; /*0x57faa9*/
            v54[1] = 1; /*0x57fab0*/
            v66 = *CellStruct::Add((CellStruct *)v45, &v70, v54); /*0x57fac0*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v66); /*0x57faca*/
            v56[0] = 0; /*0x57fae0*/
            v56[1] = 1; /*0x57fae7*/
            v68 = *CellStruct::Sub((CellStruct *)v45, &v71, v56); /*0x57fafd*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v68); /*0x57fb04*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x57fb0d*/
          House::AnnounceUpgrade(v29, -1); /*0x57fb16*/
          House::AnnounceUpgrade(v30, -1); /*0x57fb1f*/
          Cell::SearchEnemies((int)v6, 0); /*0x57fb28*/
          Cell::SearchEnemies(v29, 0); /*0x57fb31*/
          Cell::SearchEnemies(v30, 0); /*0x57fb3a*/
        }
        break; /*0x57fb3a*/
      default:
        break;
    }
    ++v45[0]; /*0x57fb3f*/
    if ( !CellClass::updateLighting((CellClass *)v45) ) /*0x57fb48*/
      break; /*0x57fb48*/
    v3 = v45[0]; /*0x57f701*/
  }
  if ( v44 ) /*0x57fb5b*/
    Terrain::ConnectivityGraph(v52); /*0x57fb61*/
  result = v48; /*0x57fb66*/
  if ( v48 > 0 ) /*0x57fb6c*/
  {
    result = v49; /*0x57fb6e*/
    if ( v49 > 0 ) /*0x57fb74*/
      UpdateAreaConnectivityMap((ObjectClass *)v52, &v46); /*0x57fb7f*/
  }
  return result; /*0x57fb84*/
}



// ==== 0x0057FBC0  CellClass::ApplyTileModification7  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification7(CellClass *this, int *a2)
{
  int v2; // eax
  __int16 i; // di
  unsigned int v4; // eax
  BuildingClass *v5; // eax
  BuildingClass *v6; // ebp
  int v7; // edx
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  int v23; // esi
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  int v32; // ebx
  int v33; // edi
  int v34; // edi
  int v35; // ebx
  struct tagRECT *v36; // eax
  int v37; // eax
  Coord2D *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int v41; // [esp-8h] [ebp-114h]
  struct tagRECT *v42; // [esp-4h] [ebp-110h]
  int v43; // [esp-4h] [ebp-110h]
  const RECT *v44; // [esp+0h] [ebp-10Ch]
  const RECT *v45; // [esp+0h] [ebp-10Ch]
  const RECT *v46; // [esp+4h] [ebp-108h]
  const RECT *v47; // [esp+4h] [ebp-108h]
  __int16 v48[2]; // [esp+10h] [ebp-FCh] BYREF
  char v49; // [esp+17h] [ebp-F5h]
  int v50; // [esp+18h] [ebp-F4h] BYREF
  int v51; // [esp+1Ch] [ebp-F0h]
  int v52; // [esp+20h] [ebp-ECh]
  int v53; // [esp+24h] [ebp-E8h]
  BuildingClass *v54; // [esp+28h] [ebp-E4h]
  int v55; // [esp+2Ch] [ebp-E0h]
  int v56; // [esp+30h] [ebp-DCh]
  Terrain *v57; // [esp+34h] [ebp-D8h]
  int v58; // [esp+38h] [ebp-D4h]
  _WORD v59[2]; // [esp+3Ch] [ebp-D0h] BYREF
  int v60; // [esp+40h] [ebp-CCh]
  int v61; // [esp+44h] [ebp-C8h]
  _WORD v62[2]; // [esp+48h] [ebp-C4h] BYREF
  int v63; // [esp+4Ch] [ebp-C0h]
  int v64; // [esp+50h] [ebp-BCh]
  int v65; // [esp+54h] [ebp-B8h]
  int v66; // [esp+58h] [ebp-B4h]
  int v67; // [esp+5Ch] [ebp-B0h]
  int v68; // [esp+68h] [ebp-A4h]
  int v69; // [esp+6Ch] [ebp-A0h] BYREF
  int v70; // [esp+70h] [ebp-9Ch]
  int v71; // [esp+74h] [ebp-98h]
  int v72; // [esp+78h] [ebp-94h] BYREF
  _DWORD v73[2]; // [esp+7Ch] [ebp-90h] BYREF
  int v74; // [esp+84h] [ebp-88h] BYREF
  int v75; // [esp+88h] [ebp-84h] BYREF
  int v76; // [esp+8Ch] [ebp-80h] BYREF
  int v77; // [esp+94h] [ebp-78h] BYREF
  _DWORD v78[4]; // [esp+9Ch] [ebp-70h] BYREF
  int v79[4]; // [esp+ACh] [ebp-60h] BYREF
  int v80[4]; // [esp+CCh] [ebp-40h] BYREF
  int v81[4]; // [esp+ECh] [ebp-20h] BYREF
  Rect v82; // [esp+FCh] [ebp-10h] BYREF

  v57 = (Terrain *)this; /*0x57fbce*/
  *(_DWORD *)v48 = *a2; /*0x57fbd9*/
  v50 = 0; /*0x57fbdd*/
  v51 = 0; /*0x57fbe1*/
  v52 = 0; /*0x57fbe5*/
  v53 = 0; /*0x57fbe9*/
  v49 = 0; /*0x57fbed*/
  do /*0x57fc11*/
  {
    --v48[1]; /*0x57fbf2*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48) + 17); /*0x57fc06*/
  }
  while ( v2 >= 74 && v2 <= 101 ); /*0x57fc11*/
  for ( i = ++v48[1]; ; i = v48[1] ) /*0x57fc18*/
  {
    v4 = v48[0] + (i << 9); /*0x57fc3f*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57fc4f*/
    {
      v6 = v5; /*0x57fc51*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v48; /*0x57fc55*/
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57fc5b*/
    }
    HIWORD(v58) = i; /*0x57fc66*/
    LOWORD(v58) = v48[0] - 1; /*0x57fc6b*/
    v7 = (__int16)(v48[0] - 1); /*0x57fc73*/
    v8 = i << 9; /*0x57fc76*/
    v9 = v7 + v8 < 0; /*0x57fc79*/
    v10 = v7 + v8; /*0x57fc79*/
    v54 = v6; /*0x57fc7b*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x57fc8d*/
    {
      v61 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57fc99*/
      g_MissionQueueFrame.briefing[139] = v58; /*0x57fca1*/
    }
    else
    {
      v61 = v11; /*0x57fc8f*/
    }
    HIWORD(v60) = i; /*0x57fca9*/
    v12 = (__int16)(v48[0] + 1); /*0x57fcae*/
    v13 = i << 9; /*0x57fcb1*/
    v9 = v12 + v13 < 0; /*0x57fcb4*/
    v14 = v12 + v13; /*0x57fcb4*/
    LOWORD(v60) = v48[0] + 1; /*0x57fcb6*/
    if ( v9 || v14 >= 0x40000 || (v15 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) == 0 ) /*0x57fcca*/
    {
      v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57fcd6*/
      g_MissionQueueFrame.briefing[139] = v60; /*0x57fcde*/
    }
    else
    {
      v56 = v15; /*0x57fccc*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v81); /*0x57fcfc*/
    StartCoords = House::GetStartCoords((House *)v6, v78); /*0x57fcfe*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57fd13*/
    {
      v18 = *PlacementRect; /*0x57fd92*/
      v20 = PlacementRect[1]; /*0x57fd94*/
      v24 = PlacementRect[2]; /*0x57fd97*/
      v22 = PlacementRect[3]; /*0x57fd9a*/
    }
    else
    {
      v71 = PlacementRect[2]; /*0x57fd1a*/
      if ( v71 <= 0 || (v55 = PlacementRect[3], v55 <= 0) ) /*0x57fd29*/
      {
        v18 = *StartCoords; /*0x57fd85*/
        v20 = StartCoords[1]; /*0x57fd87*/
        v24 = StartCoords[2]; /*0x57fd8a*/
        v22 = StartCoords[3]; /*0x57fd8d*/
      }
      else
      {
        v18 = *StartCoords; /*0x57fd2b*/
        v19 = *PlacementRect; /*0x57fd2d*/
        v20 = StartCoords[1]; /*0x57fd2f*/
        v21 = StartCoords[2]; /*0x57fd32*/
        v22 = StartCoords[3]; /*0x57fd35*/
        if ( v18 > *PlacementRect ) /*0x57fd3a*/
        {
          v21 += v18 - v19; /*0x57fd3e*/
          v18 = *PlacementRect; /*0x57fd40*/
        }
        v23 = PlacementRect[1]; /*0x57fd42*/
        v70 = v23; /*0x57fd47*/
        if ( v20 > v23 ) /*0x57fd4b*/
        {
          v22 += v20 - v23; /*0x57fd4f*/
          v20 = v23; /*0x57fd51*/
        }
        if ( v18 + v21 < v19 + v71 ) /*0x57fd5b*/
          v21 = v19 - v18 + v71 + 1; /*0x57fd63*/
        if ( v22 + v20 < v55 + v70 ) /*0x57fd76*/
          v22 = v55 + v70 - v20 + 1; /*0x57fd7b*/
        v24 = v21; /*0x57fd7d*/
        v6 = v54; /*0x57fd7f*/
      }
    }
    v63 = v18; /*0x57fd9d*/
    v64 = v20; /*0x57fda1*/
    v65 = v24; /*0x57fda5*/
    v66 = v22; /*0x57fda9*/
    v25 = v6->?[2]; /*0x57fdad*/
    v55 = v25; /*0x57fdb0*/
    switch ( v25 ) /*0x57fdc8*/
    {
      case 'W': /*0x57fdc8*/
      case 'X': /*0x57fdc8*/
      case 'Y': /*0x57fdc8*/
      case 'Z': /*0x57fdc8*/
      case '[': /*0x57fdc8*/
      case 'e': /*0x57fdc8*/
        v27 = Range_RandomInt(0, 3u); /*0x57fdea*/
        v28 = v52; /*0x57fdf4*/
        v26 = v27 + 83; /*0x57fdf8*/
        v29 = v48[1]; /*0x57fdfb*/
        v30 = v48[0] - 1; /*0x57fe00*/
        if ( v52 <= 0 || v53 <= 0 ) /*0x57fe14*/
        {
          v28 = 3; /*0x57fe85*/
          v33 = 1; /*0x57fe87*/
        }
        else
        {
          v68 = v53; /*0x57fe1e*/
          v67 = v50; /*0x57fe26*/
          v31 = v51; /*0x57fe2a*/
          if ( v50 > v30 ) /*0x57fe30*/
          {
            v67 = v48[0] - 1; /*0x57fe34*/
            v28 = v50 + v52 - v30; /*0x57fe38*/
          }
          if ( v51 > v48[1] ) /*0x57fe3c*/
          {
            v31 = v48[1]; /*0x57fe46*/
            v68 += v51 - v48[1]; /*0x57fe48*/
          }
          if ( v28 + v67 < v30 + 3 ) /*0x57fe57*/
            v28 = v30 - v67 + 4; /*0x57fe60*/
          v32 = v68; /*0x57fe62*/
          if ( v68 + v31 < v48[1] + 1 ) /*0x57fe6e*/
            v32 = v48[1] - v31 + 2; /*0x57fe75*/
          v30 = v67; /*0x57fe77*/
          v6 = v54; /*0x57fe7b*/
          v29 = v31; /*0x57fe7f*/
          v33 = v32; /*0x57fe81*/
        }
        v51 = v29; /*0x57fe89*/
        v25 = v55; /*0x57fe8d*/
        v50 = v30; /*0x57fe91*/
        v52 = v28; /*0x57fe95*/
        v53 = v33; /*0x57fe99*/
        v49 = 1; /*0x57fe9d*/
        goto LABEL_51; /*0x57fe9d*/
      case '`': /*0x57fdc8*/
      case 'a': /*0x57fdc8*/
        v26 = 96; /*0x57fdcf*/
        goto LABEL_51; /*0x57fdd4*/
      case 'b': /*0x57fdc8*/
      case 'c': /*0x57fdc8*/
        v26 = 98; /*0x57fdd9*/
LABEL_51:
        if ( v26 != v25 ) /*0x57fea4*/
        {
          v34 = v61; /*0x57feaa*/
          v35 = v56; /*0x57feae*/
          v6->?[2] = v26; /*0x57feb2*/
          *(_DWORD *)(v34 + 68) = v26; /*0x57febc*/
          *(_DWORD *)(v35 + 68) = v26; /*0x57febf*/
          v73[1] = DSurface_ViewBounds.field_4; /*0x57fecd*/
          v73[0] = DSurface_ViewBounds.field_0; /*0x57fed7*/
          v42 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v80); /*0x57fee3*/
          House::GetStartCoords((House *)v6, v79); /*0x57feee*/
          v36 = (struct tagRECT *)Rect::Union(v42, v44, v46); /*0x57fefc*/
          v37 = Rect::Union(v36, v45, v47); /*0x57ff0d*/
          v43 = *(_DWORD *)(v37 + 12); /*0x57ff18*/
          v41 = *(_DWORD *)(v37 + 8); /*0x57ff20*/
          v38 = (Coord2D *)CellStruct::Copy((CellStruct *)v37, &v76); /*0x57ff34*/
          v39 = Coord2D::Sub(v38, &v77, v73); /*0x57ff3b*/
          v40 = Rect::Construct(&v82, v39, v41, v43); /*0x57ff48*/
          v63 = *v40; /*0x57ff56*/
          v64 = v40[1]; /*0x57ff5d*/
          v65 = v40[2]; /*0x57ff64*/
          v66 = v40[3]; /*0x57ff6d*/
          Cell::CreateCrater(*v40, v40[1], v40[2], v40[3], 0); /*0x57ff8d*/
          if ( v25 == 101 ) /*0x57ff95*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v48); /*0x57ffa5*/
            v59[0] = 1; /*0x57ffc0*/
            v59[1] = 0; /*0x57ffc5*/
            v72 = *CellStruct::Add((CellStruct *)v48, &v74, v59); /*0x57ffd7*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v72); /*0x57ffe1*/
            v62[0] = 1; /*0x57fff7*/
            v62[1] = 0; /*0x57fffc*/
            v69 = *CellStruct::Sub((CellStruct *)v48, &v75, v62); /*0x580014*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v69); /*0x580018*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580021*/
          House::AnnounceUpgrade(v34, -1); /*0x58002a*/
          House::AnnounceUpgrade(v35, -1); /*0x580033*/
          Cell::SearchEnemies((int)v6, 0); /*0x58003c*/
          Cell::SearchEnemies(v34, 0); /*0x580045*/
          Cell::SearchEnemies(v35, 0); /*0x58004e*/
        }
        break; /*0x58004e*/
      default:
        break;
    }
    ++v48[1]; /*0x580053*/
    if ( !CellClass::updateLighting((CellClass *)v48) ) /*0x58005c*/
      break; /*0x58005c*/
  }
  if ( v49 ) /*0x58006f*/
    Terrain::ConnectivityGraph(v57); /*0x580075*/
  if ( v52 > 0 && v53 > 0 ) /*0x580088*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v50); /*0x580093*/
}



// ==== 0x00570050  Terrain::ProcessCellModification  this=Terrain  sig=csp ====
void __thiscall Terrain::ProcessCellModification(Terrain *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // esi
  char v12; // bl
  __int16 *v13; // ecx
  unsigned int v14; // eax
  int *v15; // eax
  __int16 *v16; // ecx
  unsigned int v17; // eax
  int *v18; // eax
  __int16 *v19; // ecx
  unsigned int v20; // eax
  int *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  int v26; // eax
  bool v27; // sf
  int v28; // eax
  int *v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ebp
  int v33; // edi
  unsigned int v34; // eax
  int *v35; // eax
  int *v36; // edx
  int v37; // eax
  unsigned int v38; // eax
  int *v39; // eax
  __int16 *v40; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  __int16 *v43; // ecx
  unsigned int v44; // eax
  int *v45; // eax
  __int16 *v46; // ecx
  unsigned int v47; // eax
  int *v48; // eax
  int v49; // eax
  int v50; // edi
  int v51; // esi
  int v52; // eax
  Terrain *v53; // esi
  unsigned int v54; // eax
  int *v55; // eax
  unsigned int v56; // eax
  int *v57; // eax
  Terrain *v58; // ebx
  __int16 *v59; // ecx
  unsigned int v60; // eax
  int *v61; // eax
  __int16 *v62; // ecx
  unsigned int v63; // eax
  int *v64; // eax
  __int16 *v65; // ecx
  unsigned int v66; // eax
  int *v67; // eax
  int Capacity; // eax
  int v69; // edi
  int v70; // esi
  int v71; // eax
  unsigned int v72; // eax
  int *v73; // eax
  int v75; // [esp+14h] [ebp-4Ch] BYREF
  __int16 v76[2]; // [esp+18h] [ebp-48h] BYREF
  __int16 v77[2]; // [esp+1Ch] [ebp-44h] BYREF
  int v78; // [esp+20h] [ebp-40h] BYREF
  __int16 v79[4]; // [esp+24h] [ebp-3Ch] BYREF
  int v80; // [esp+2Ch] [ebp-34h] BYREF
  __int16 v81[4]; // [esp+30h] [ebp-30h] BYREF
  int v82; // [esp+38h] [ebp-28h] BYREF
  int v83; // [esp+3Ch] [ebp-24h]
  int v84; // [esp+40h] [ebp-20h]
  int v85; // [esp+44h] [ebp-1Ch]
  VectorClass v86; // [esp+48h] [ebp-18h] BYREF
  int v87; // [esp+58h] [ebp-8h]
  int v88; // [esp+5Ch] [ebp-4h]

  v2 = a2; /*0x570055*/
  v4 = -2; /*0x570061*/
  do /*0x5700b1*/
  {
    v5 = -2; /*0x570066*/
    do /*0x5700ab*/
    {
      v6 = v2[1] + v5; /*0x570075*/
      LOWORD(a2) = *v2 + v4; /*0x570079*/
      HIWORD(a2) = v6; /*0x57007e*/
      *(_DWORD *)v76 = a2; /*0x570091*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v76) + 17); /*0x57009a*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x5700a5*/
      {
        v8 = v2[1] + v5; /*0x5700b9*/
        LOWORD(a2) = *v2 + v4; /*0x5700c1*/
        HIWORD(a2) = v8; /*0x5700c6*/
        CellClass::ApplyCliffTileModifications((CellClass *)this, (int)&a2); /*0x5700d6*/
        return; /*0x5700e2*/
      }
      ++v5; /*0x5700a7*/
    }
    while ( v5 < 3 ); /*0x5700ab*/
    ++v4; /*0x5700ad*/
  }
  while ( v4 < 3 ); /*0x5700b1*/
  v9 = *v2 + (v2[1] << 9); /*0x5700f0*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x570106*/
  {
    v11 = v10; /*0x570108*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x57010f*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v2; /*0x570114*/
  }
  v12 = 0; /*0x57011f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x570124*/
  {
    *(_DWORD *)v76 = 0; /*0x57012a*/
    do /*0x57024e*/
    {
      v13 = (__int16 *)*CellStruct::Add((CellStruct *)v2, &v78, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x570147*/
      *(_DWORD *)v77 = v13; /*0x570149*/
      a2 = v13; /*0x57014d*/
      v14 = (__int16)v13 + (SHIWORD(v13) << 9); /*0x57015c*/
      if ( v14 < 0x40000 && (v15 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) != 0 ) /*0x570172*/
      {
        v11 = v15; /*0x570174*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v13; /*0x570178*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57017e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57018c*/
        break; /*0x57018c*/
      v16 = (__int16 *)*CellStruct::Add((CellStruct *)&a2, v79, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5701a1*/
      *(_DWORD *)v77 = v16; /*0x5701a3*/
      a2 = v16; /*0x5701a7*/
      v17 = (__int16)v16 + (SHIWORD(v16) << 9); /*0x5701b6*/
      if ( v17 < 0x40000 && (v18 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v17)) != 0 ) /*0x5701cc*/
      {
        v11 = v18; /*0x5701ce*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v16; /*0x5701d2*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5701d8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5701e6*/
        break; /*0x5701e6*/
      v19 = (__int16 *)*CellStruct::Add((CellStruct *)&a2, &v80, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5701f7*/
      *(_DWORD *)v77 = v19; /*0x5701f9*/
      a2 = v19; /*0x5701fd*/
      v20 = (__int16)v19 + (SHIWORD(v19) << 9); /*0x57020c*/
      if ( v20 < 0x40000 && (v21 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v20)) != 0 ) /*0x570222*/
      {
        v11 = v21; /*0x570224*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = (int)v19; /*0x570228*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57022e*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57023c*/
        break; /*0x57023c*/
      v12 = (v12 + 1) & 7; /*0x570243*/
      ++*(_DWORD *)v76; /*0x57024a*/
    }
    while ( *(int *)v76 < 8 ); /*0x57024e*/
  }
  v22 = v11[80]; /*0x570254*/
  if ( (v22 & 0x100) != 0 || (v22 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v22 & 0x80u) == 0 ) /*0x570273*/
        v23 = *(_DWORD *)(v11[11] + 36); /*0x570280*/
      else
        v23 = v11[9]; /*0x570275*/
    }
    else
    {
      *(_DWORD *)v76 = 0; /*0x57028d*/
      v24 = (v22 & 0x800) != 0 ? 4 : 2;
      v75 = v11[9]; /*0x5702a6*/
      while ( 1 ) /*0x5702c3*/
      {
        v25 = *CellStruct::Add((CellStruct *)&v75, &v80, (_WORD *)(4 * (v24 & 7) + 9041544)); /*0x5702c3*/
        *(_DWORD *)v77 = v25; /*0x5702c5*/
        v26 = SHIWORD(v25) << 9; /*0x5702d4*/
        v27 = (__int16)v25 + v26 < 0; /*0x5702d7*/
        v28 = (__int16)v25 + v26; /*0x5702d7*/
        v75 = v25; /*0x5702d9*/
        if ( v27 || v28 >= 0x40000 || (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) == 0 ) /*0x5702f1*/
        {
          g_MissionQueueFrame.briefing[139] = v25; /*0x5702f3*/
          v29 = &g_MissionQueueFrame.briefing[130]; /*0x5702f9*/
        }
        if ( (v29[80] & 0x400) == 0 ) /*0x570307*/
          break; /*0x570307*/
        ++*(_DWORD *)v76; /*0x570311*/
        if ( *(int *)v76 >= 4 ) /*0x570315*/
          return; /*0x570315*/
      }
      v30 = ((_BYTE)v24 - 4) & 7; /*0x570327*/
      v76[0] = LOWORD(g_DDrawSurfaceManager.scenario[v30 + 82]) + v25; /*0x57033a*/
      v76[1] = HIWORD(v25) + HIWORD(g_DDrawSurfaceManager.scenario[v30 + 82]); /*0x57034a*/
      *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570358*/
      v23 = *CellStruct::Add((CellStruct *)v77, &v80, (_WORD *)(4 * v30 + 9041544)); /*0x570361*/
    }
    v75 = v23; /*0x570363*/
    v31 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v81 = v23; /*0x570382*/
    LOBYTE(a2) = 0; /*0x570386*/
    VectorClass::CellConstructor(&v86, 0, 0); /*0x57038b*/
    v32 = *(_DWORD *)v81; /*0x570390*/
    v86.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x570394*/
    v88 = 10; /*0x57039c*/
    v87 = 0; /*0x5703a4*/
    while ( 1 ) /*0x5703ba*/
    {
      v33 = v81[1] + (__int16)v32; /*0x5703ba*/
      if ( v33 <= *(int *)&stru_87F5F0.__pad_58[660] /*0x5703e8*/
        || (__int16)v32 - v81[1] >= *(int *)&stru_87F5F0.__pad_58[660]
        || v81[1] - (__int16)v32 >= *(int *)&stru_87F5F0.__pad_58[660]
        || v33 > *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664] )
      {
        goto LABEL_139; /*0x5703e8*/
      }
      v34 = (__int16)v32 + (v81[1] << 9); /*0x5703f1*/
      if ( !*((_DWORD *)this->Terrain_field_0x13C + v34) ) /*0x570401*/
        goto LABEL_74; /*0x570401*/
      if ( v34 < 0x40000 && (v35 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v34)) != 0 ) /*0x57041d*/
      {
        v36 = v35; /*0x57041f*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v32; /*0x570423*/
        v36 = &g_MissionQueueFrame.briefing[130]; /*0x570429*/
      }
      v37 = v36[14] - g_TerrainBridgeIndex + 1; /*0x57043f*/
      if ( (v37 == dword_ABC2B4 || v37 == dword_AA1130) && *((_BYTE *)v36 + 282) == 8 ) /*0x570453*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x570511*/
        v38 = v81[0] + (v81[1] << 9); /*0x570525*/
        if ( v38 >= 0x40000 || (v39 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v38)) == 0 ) /*0x57053b*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x57053d*/
          v39 = &g_MissionQueueFrame.briefing[130]; /*0x570543*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v39, 2, &v82); /*0x57054f*/
        goto LABEL_109; /*0x57054f*/
      }
      if ( (v37 == g_TerrainSoundTable2 /*0x570486*/
         || v37 == g_TerrainSoundTable2 + 3
         || v37 == g_TerrainSoundTable2 + 4
         || v37 == g_TerrainSoundTable2 + 1
         || v37 == g_TerrainSoundTable2 + 2)
        && *((_BYTE *)v36 + 282) == 5 )
      {
        break; /*0x570486*/
      }
      if ( (v37 == dword_AA1548 || v37 == dword_AA0740) && *((_BYTE *)v36 + 282) == 12 ) /*0x5704a3*/
      {
        Cell::UpdateTileType(v81, 0, 0); /*0x5707b7*/
        v56 = v81[0] + (v81[1] << 9); /*0x5707cb*/
        if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x5707e1*/
        {
          g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x5707e3*/
          v57 = &g_MissionQueueFrame.briefing[130]; /*0x5707e9*/
        }
        DestroyCliffMap((ObjectClass *)this, (int)v57, 4, &v82); /*0x5707f8*/
LABEL_109:
        Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x5707fd*/
        goto LABEL_139; /*0x57082a*/
      }
      if ( (v37 == g_TerrainSoundConfig /*0x5704d6*/
         || v37 == g_TerrainSoundConfig + 3
         || v37 == g_TerrainSoundConfig + 4
         || v37 == g_TerrainSoundConfig + 1
         || v37 == g_TerrainSoundConfig + 2)
        && *((_BYTE *)v36 + 282) == 7 )
      {
        if ( v37 != g_TerrainSoundConfig + 4 ) /*0x570834*/
        {
          v58 = this; /*0x5709e9*/
          goto LABEL_133; /*0x5709e9*/
        }
        v58 = this; /*0x57083a*/
        Cell::SetTileType(v81, g_TerrainSoundConfig + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570850*/
        v59 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &a2, &g_DDrawSurfaceManager.scenario[82]); /*0x570868*/
        a2 = v59; /*0x57086a*/
        *(_DWORD *)v79 = v59; /*0x57086e*/
        v60 = (__int16)v59 + (SHIWORD(v59) << 9); /*0x57087d*/
        if ( v60 >= 0x40000 || (v61 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v60)) == 0 ) /*0x570893*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v59; /*0x570895*/
          v61 = &g_MissionQueueFrame.briefing[130]; /*0x57089b*/
        }
        *((_BYTE *)v61 + 283) += 4; /*0x5708ae*/
        v62 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[84]); /*0x5708c2*/
        a2 = v62; /*0x5708c4*/
        v63 = (__int16)v62 + (SHIWORD(v62) << 9); /*0x5708d3*/
        if ( v63 >= 0x40000 || (v64 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v63)) == 0 ) /*0x5708e9*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v62; /*0x5708eb*/
          v64 = &g_MissionQueueFrame.briefing[130]; /*0x5708f1*/
        }
        *((_BYTE *)v64 + 283) += 4; /*0x570904*/
        v65 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[88]); /*0x570918*/
        a2 = v65; /*0x57091a*/
        v66 = (__int16)v65 + (SHIWORD(v65) << 9); /*0x570929*/
        if ( v66 >= 0x40000 || (v67 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v66)) == 0 ) /*0x57093f*/
        {
          g_MissionQueueFrame.briefing[139] = (int)v65; /*0x570941*/
          v67 = &g_MissionQueueFrame.briefing[130]; /*0x570947*/
        }
        *((_BYTE *)v67 + 283) += 4; /*0x570957*/
        LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x570967*/
        Capacity = v86.Capacity; /*0x57096b*/
        v69 = 0; /*0x57096f*/
        while ( 1 ) /*0x570971*/
        {
          v70 = -2; /*0x570971*/
          do /*0x5709db*/
          {
            v76[0] = v70 + v79[0]; /*0x570983*/
            v76[1] = v69 + v79[1]; /*0x570988*/
            if ( v87 < Capacity ) /*0x570993*/
              goto LABEL_127; /*0x570993*/
            if ( (v86.IsAllocated || !Capacity) && v88 > 0 ) /*0x5709a7*/
            {
              if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v86.ptr_0 + 2))( /*0x5709b6*/
                     &v86,
                     v88 + Capacity,
                     0) )
              {
LABEL_127:
                v71 = v87++; /*0x5709bd*/
                *((_DWORD *)v86.Items + v71) = *(_DWORD *)v76; /*0x5709d0*/
              }
              Capacity = v86.Capacity; /*0x5709d3*/
            }
            ++v70; /*0x5709d7*/
          }
          while ( v70 < 3 ); /*0x5709db*/
          if ( ++v69 >= 2 ) /*0x5709e1*/
          {
            LOWORD(v32) = v81[0]; /*0x5709e3*/
LABEL_133:
            v76[0] = v32; /*0x5709ed*/
            v76[1] = v81[1] - 2; /*0x5709fd*/
            *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570a06*/
            Terrain::ProcessCellModification(v58, v77); /*0x570a0d*/
            v72 = v81[0] + (v81[1] << 9); /*0x570a21*/
            if ( v72 >= 0x40000 || (v73 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v72)) == 0 ) /*0x570a37*/
            {
              g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x570a39*/
              v73 = &g_MissionQueueFrame.briefing[130]; /*0x570a3f*/
            }
            DestroyCliffMap((ObjectClass *)v58, (int)v73, 4, &v82); /*0x570a4e*/
            Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x570a7b*/
            v53 = this; /*0x570a80*/
LABEL_137:
            if ( (_BYTE)a2 ) /*0x570a8a*/
              Terrain::ConnectivityGraph(v53); /*0x570a8e*/
LABEL_139:
            if ( v87 > 0 ) /*0x570a99*/
              LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v86); /*0x570aa4*/
            v86.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x570aad*/
            if ( v86.Items ) /*0x570ab7*/
            {
              if ( v86.IsAllocated ) /*0x570abf*/
                __3_YAXPAX_Z(v86.Items); /*0x570ac2*/
            }
            return; /*0x570ac2*/
          }
        }
      }
LABEL_74:
      v32 = *CellStruct::Add((CellStruct *)v81, &v80, (_WORD *)(4 * (v31 & 7) + 9041544)); /*0x5704dc*/
      *(_DWORD *)v81 = v32; /*0x5704f9*/
    }
    if ( v37 != g_TerrainSoundTable2 + 4 ) /*0x570559*/
      goto LABEL_101; /*0x570559*/
    Cell::SetTileType(v81, g_TerrainSoundTable2 + g_TerrainBridgeIndex - 1, -1, -1, 0); /*0x570573*/
    v40 = (__int16 *)*CellStruct::Add((CellStruct *)v81, &a2, &g_DDrawSurfaceManager.scenario[88]); /*0x57058b*/
    a2 = v40; /*0x57058d*/
    *(_DWORD *)v79 = v40; /*0x570591*/
    v41 = (__int16)v40 + (SHIWORD(v40) << 9); /*0x5705a0*/
    if ( v41 >= 0x40000 || (v42 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v41)) == 0 ) /*0x5705b6*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v40; /*0x5705b8*/
      v42 = &g_MissionQueueFrame.briefing[130]; /*0x5705be*/
    }
    *((_BYTE *)v42 + 283) += 4; /*0x5705d2*/
    v43 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[82]); /*0x5705e6*/
    a2 = v43; /*0x5705e8*/
    v44 = (__int16)v43 + (SHIWORD(v43) << 9); /*0x5705f7*/
    if ( v44 >= 0x40000 || (v45 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v44)) == 0 ) /*0x57060d*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v43; /*0x57060f*/
      v45 = &g_MissionQueueFrame.briefing[130]; /*0x570615*/
    }
    *((_BYTE *)v45 + 283) += 4; /*0x570627*/
    v46 = (__int16 *)*CellStruct::Add((CellStruct *)v79, &v80, &g_DDrawSurfaceManager.scenario[86]); /*0x57063b*/
    a2 = v46; /*0x57063d*/
    v47 = (__int16)v46 + (SHIWORD(v46) << 9); /*0x57064c*/
    if ( v47 >= 0x40000 || (v48 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v47)) == 0 ) /*0x570662*/
    {
      g_MissionQueueFrame.briefing[139] = (int)v46; /*0x570664*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x57066a*/
    }
    *((_BYTE *)v48 + 283) += 4; /*0x57067b*/
    LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v79); /*0x57068b*/
    v49 = v86.Capacity; /*0x57068f*/
    v50 = 0; /*0x570693*/
LABEL_90:
    v51 = -2; /*0x570695*/
    while ( 1 ) /*0x5706a7*/
    {
      v76[0] = v50 + v79[0]; /*0x5706a7*/
      v76[1] = v51 + v79[1]; /*0x5706ac*/
      if ( v87 < v49 ) /*0x5706b7*/
        goto LABEL_96; /*0x5706b7*/
      if ( !v86.IsAllocated && v49 || v88 <= 0 ) /*0x5706cb*/
        goto LABEL_98; /*0x5706cb*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v86.ptr_0 + 2))(&v86, v88 + v49, 0) ) /*0x5706da*/
      {
LABEL_96:
        v52 = v87++; /*0x5706e9*/
        *((_DWORD *)v86.Items + v52) = *(_DWORD *)v76; /*0x5706f4*/
      }
      v49 = v86.Capacity; /*0x5706f7*/
LABEL_98:
      if ( ++v51 >= 3 ) /*0x5706ff*/
      {
        if ( ++v50 >= 2 ) /*0x570705*/
        {
          LOWORD(v32) = v81[0]; /*0x570707*/
LABEL_101:
          v53 = this; /*0x57070b*/
          v76[1] = v81[1]; /*0x570717*/
          v76[0] = v32 - 2; /*0x57071c*/
          *(_DWORD *)v77 = *(_DWORD *)v76; /*0x570729*/
          Terrain::ProcessCellModification(this, v77); /*0x570730*/
          v54 = v81[0] + (v81[1] << 9); /*0x570744*/
          if ( v54 >= 0x40000 || (v55 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v54)) == 0 ) /*0x57075a*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v81; /*0x57075c*/
            v55 = &g_MissionQueueFrame.briefing[130]; /*0x570762*/
          }
          DestroyCliffMap((ObjectClass *)this, (int)v55, 2, &v82); /*0x570771*/
          Cell::CreateCrater(v82, v83, v84, v85, 0); /*0x57079e*/
          goto LABEL_137; /*0x5707a3*/
        }
        goto LABEL_90; /*0x570705*/
      }
    }
  }
}



// ==== 0x00570AE0  CellClass::RecursiveTileUpdate  this=CellClass  sig=csp ====
int __thiscall CellClass::RecursiveTileUpdate(CellClass *this, __int16 *a2, int a3, int *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  __int16 v8; // di
  _WORD *v9; // esi
  __int16 v10; // di
  __int16 v11; // bx
  __int16 v12; // di
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  int *v16; // eax
  int result; // eax
  unsigned int v18; // eax
  int *v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // edi
  int *v27; // ebp
  signed int v28; // ecx
  signed int v29; // eax
  int v30; // edx
  int v31; // esi
  int v32; // ebp
  int v33; // ebp
  int v34; // ebx
  bool v35; // bl
  int v36; // edi
  char v37; // dl
  void *v38; // ebp
  int v39; // ecx
  unsigned int v40; // eax
  int *v41; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  int *v47; // eax
  int *v48; // esi
  int *v49; // [esp+4h] [ebp-48h]
  int v50; // [esp+4h] [ebp-48h]
  int *v51; // [esp+4h] [ebp-48h]
  int v52; // [esp+8h] [ebp-44h]
  int v53; // [esp+Ch] [ebp-40h]
  void *v54; // [esp+10h] [ebp-3Ch]
  int v55; // [esp+10h] [ebp-3Ch]
  int v56; // [esp+14h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-34h]
  int v58; // [esp+1Ch] [ebp-30h] BYREF
  int v59; // [esp+20h] [ebp-2Ch]
  CellClass *v60; // [esp+24h] [ebp-28h]
  _WORD *v61; // [esp+28h] [ebp-24h]
  int v62; // [esp+2Ch] [ebp-20h] BYREF
  int v63; // [esp+30h] [ebp-1Ch]
  int v64; // [esp+34h] [ebp-18h]
  int v65; // [esp+38h] [ebp-14h]
  int v66; // [esp+3Ch] [ebp-10h]
  int v67; // [esp+54h] [ebp+8h]

  v60 = this; /*0x570ae3*/
  v4 = *a2 + (a2[1] << 9); /*0x570af5*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x570b0b*/
  {
    v6 = v5; /*0x570b0d*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x570b13*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x570b18*/
  }
  v7 = a3 & 7; /*0x570b29*/
  v58 = v6[9]; /*0x570b2d*/
  v52 = 1; /*0x570b31*/
  v8 = g_DDrawSurfaceManager.scenario[v7 + 82]; /*0x570b39*/
  v9 = (_WORD *)(4 * v7 + 9041544); /*0x570b41*/
  v61 = v9; /*0x570b4b*/
  LOWORD(v54) = v58 + v8; /*0x570b53*/
  HIWORD(v54) = HIWORD(v58) + v9[1]; /*0x570b5d*/
  while ( 1 ) /*0x570b65*/
  {
    v10 = *v9; /*0x570b65*/
    v58 = v6[9]; /*0x570b68*/
    v11 = v9[1] + HIWORD(v58); /*0x570b71*/
    v12 = v58 + v10; /*0x570b75*/
    v13 = v11 << 9; /*0x570b7e*/
    v14 = v12 + v13 < 0; /*0x570b81*/
    v15 = v12 + v13; /*0x570b81*/
    LOWORD(v53) = v12; /*0x570b83*/
    HIWORD(v53) = v11; /*0x570b88*/
    if ( v14 || v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x570ba1*/
    {
      v6 = &g_MissionQueueFrame.briefing[130]; /*0x570bab*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x570bb0*/
    }
    else
    {
      v6 = v16; /*0x570ba3*/
    }
    result = v6[14] - g_TerrainBridgeIndex + 1; /*0x570bc0*/
    if ( a3 != 2 ) /*0x570bc4*/
      break; /*0x570bc4*/
    if ( result == dword_ABC1E8 && *((_BYTE *)v6 + 282) == 4 /*0x570c20*/
      || result == dword_AA0E38 && *((_BYTE *)v6 + 282) == 4
      || (result == g_TerrainSoundTable2
       || result == g_TerrainSoundTable2 + 3
       || result == g_TerrainSoundTable2 + 1
       || result == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v6 + 282) == 4 )
    {
      goto LABEL_33; /*0x570c20*/
    }
LABEL_32:
    result = ++v52; /*0x570c7d*/
    if ( v52 >= 30 ) /*0x570c89*/
      goto LABEL_33; /*0x570c89*/
  }
  if ( a3 != 4 /*0x570c7b*/
    || (result != dword_ABC1D0 || *((_BYTE *)v6 + 282) != 2)
    && (result != dword_AA1540 || *((_BYTE *)v6 + 282) != 2)
    && (result != g_TerrainSoundConfig
     && result != g_TerrainSoundConfig + 3
     && result != g_TerrainSoundConfig + 1
     && result != g_TerrainSoundConfig + 2
     || *((_BYTE *)v6 + 282) != 2) )
  {
    goto LABEL_32; /*0x570c7b*/
  }
LABEL_33:
  if ( v52 == 30 ) /*0x570c94*/
    goto LABEL_85; /*0x570c94*/
  v18 = *a2 + (a2[1] << 9); /*0x570ca8*/
  if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x570cbe*/
  {
    v20 = v19; /*0x570cc0*/
    v49 = v19; /*0x570cc2*/
  }
  else
  {
    v49 = &g_MissionQueueFrame.briefing[130]; /*0x570cca*/
    v20 = &g_MissionQueueFrame.briefing[130]; /*0x570cd2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x570cd6*/
  }
  if ( a4 ) /*0x570ce1*/
  {
    v21 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x570cf5*/
    v22 = a2[1] << 8; /*0x570cff*/
    v62 = (*a2 << 8) + 128; /*0x570d0d*/
    v63 = v22 + 128; /*0x570d11*/
    v64 = v21; /*0x570d1d*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v58); /*0x570d29*/
    v23 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x570d35*/
    v62 = (v12 << 8) + 128; /*0x570d54*/
    v63 = (v11 << 8) + 128; /*0x570d58*/
    v64 = v23; /*0x570d6c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v56); /*0x570d70*/
    v24 = v58; /*0x570d7f*/
    if ( v58 >= v56 ) /*0x570d81*/
      v24 = v56; /*0x570d83*/
    v66 = v24 - 64; /*0x570d92*/
    v25 = v59; /*0x570d96*/
    if ( v59 >= v57 ) /*0x570d98*/
      v25 = v57; /*0x570d9a*/
    v26 = v25 - 64; /*0x570d9e*/
    v27 = a4; /*0x570daa*/
    v28 = abs32(v58 - v56) + 128; /*0x570db3*/
    v29 = abs32(v59 - v57) + 128; /*0x570dbe*/
    if ( a4[2] <= 0 || a4[3] <= 0 ) /*0x570dd0*/
    {
      v30 = v24 - 64; /*0x570e63*/
      v31 = v26; /*0x570e65*/
    }
    else if ( v28 <= 0 || v29 <= 0 ) /*0x570ddc*/
    {
      v30 = *a4; /*0x570e56*/
      v31 = a4[1]; /*0x570e58*/
      v28 = a4[2]; /*0x570e5b*/
      v29 = a4[3]; /*0x570e5e*/
    }
    else
    {
      v30 = *a4; /*0x570dde*/
      v31 = a4[1]; /*0x570de1*/
      v64 = a4[2]; /*0x570de7*/
      v65 = a4[3]; /*0x570dee*/
      if ( v30 > v66 ) /*0x570df8*/
      {
        v32 = v30 - v66 + v64; /*0x570e00*/
        v30 = v66; /*0x570e02*/
        v64 = v32; /*0x570e04*/
      }
      if ( v31 > v26 ) /*0x570e0a*/
      {
        v33 = v31 - v26 + v65; /*0x570e12*/
        v31 = v26; /*0x570e14*/
        v65 = v33; /*0x570e16*/
      }
      if ( v30 + v64 < v28 + v66 ) /*0x570e24*/
        v64 = v28 - v30 + v66 + 1; /*0x570e30*/
      v34 = v65; /*0x570e34*/
      if ( v65 + v31 < v29 + v26 ) /*0x570e40*/
        v34 = v29 - v31 + v26 + 1; /*0x570e44*/
      v28 = v64; /*0x570e48*/
      v27 = a4; /*0x570e4c*/
      v29 = v34; /*0x570e50*/
    }
    *v27 = v30; /*0x570e67*/
    v27[1] = v31; /*0x570e6a*/
    v20 = v49; /*0x570e6d*/
    v27[2] = v28; /*0x570e71*/
    v27[3] = v29; /*0x570e74*/
  }
  v35 = 0; /*0x570e7a*/
  result = v52; /*0x570e86*/
  LOWORD(v36) = -1; /*0x570e8a*/
  v37 = 0; /*0x570e8e*/
  v56 = -1; /*0x570e90*/
  v58 = 0; /*0x570e96*/
  if ( v52 <= 0 ) /*0x570e9e*/
  {
LABEL_85:
    LOBYTE(result) = 0; /*0x571039*/
  }
  else
  {
    v38 = v54; /*0x570ea4*/
    while ( 1 ) /*0x570ea8*/
    {
      v39 = v20[80]; /*0x570ea8*/
      if ( (v39 & 0x80) != 0 && v35 ) /*0x570eb9*/
      {
        v36 = v20[9]; /*0x570ebb*/
        v56 = v36; /*0x570ebe*/
      }
      if ( (v39 & 0x80) == 0 && !v35 && ((_WORD)v36 != 0xFFFF || HIWORD(v56) != 0xFFFF) ) /*0x570edb*/
        break; /*0x570edb*/
      v35 = (v39 & 0x80) == 0; /*0x570ee8*/
      if ( (v39 & 0x80) == 0 && !v37 ) /*0x570eef*/
      {
        UpdateTeamsInAreaMap(v38, v53); /*0x570f00*/
        v37 = 1; /*0x570f05*/
      }
      v50 = v20[9]; /*0x570f10*/
      LOWORD(v55) = *v61 + v50; /*0x570f23*/
      HIWORD(v55) = HIWORD(v50) + v61[1]; /*0x570f2b*/
      v40 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x570f36*/
      if ( v40 < 0x40000 && (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) != 0 ) /*0x570f4c*/
      {
        v51 = v41; /*0x570f4e*/
      }
      else
      {
        v51 = &g_MissionQueueFrame.briefing[130]; /*0x570f58*/
        g_MissionQueueFrame.briefing[139] = v55; /*0x570f60*/
      }
      result = ++v58; /*0x570f6d*/
      if ( v58 >= v52 ) /*0x570f74*/
        goto LABEL_85; /*0x570f74*/
      v20 = v51; /*0x570f7a*/
    }
    v61 = (_WORD *)v20[9]; /*0x570f8a*/
    v43 = ((_BYTE)a3 - 4) & 7; /*0x570f91*/
    v44 = 4 * v43 + 9041544; /*0x570f94*/
    LOWORD(v43) = (_WORD)v61 + LOWORD(g_DDrawSurfaceManager.scenario[v43 + 82]); /*0x570fac*/
    v45 = (__int16)v43; /*0x570faf*/
    HIWORD(v67) = HIWORD(v61) + *(_WORD *)(v44 + 2); /*0x570fb2*/
    LOWORD(v67) = v43; /*0x570fb7*/
    v46 = (__int16)v43 + (SHIWORD(v67) << 9); /*0x570fc2*/
    if ( v46 < 0x40000 && (v47 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v46)) != 0 ) /*0x570fd8*/
    {
      v48 = v47; /*0x570fda*/
    }
    else
    {
      v45 = v67; /*0x570fde*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x570fe2*/
      g_MissionQueueFrame.briefing[139] = v67; /*0x570fe7*/
    }
    if ( a3 == 2 ) /*0x570ff2*/
      SetCellClassOccupancyFlags((int)v48, v45, 0, 0); /*0x570ff6*/
    else
      SetCellClassOccupancyFlags((int)v48, v45, 6u, 0); /*0x570ffc*/
    *((_BYTE *)v48 + 286) = 0; /*0x571001*/
    v48[17] = -1; /*0x571008*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v48 + 9)); /*0x571014*/
    result = CellClass::RecursiveTileUpdate(v60, a2, a3, a4); /*0x571028*/
    LOBYTE(result) = 1; /*0x571030*/
  }
  return result; /*0x571033*/
}



// ==== 0x00571050  CellClass::ProcessTileChange  this=CellClass  sig=csp ====
char __thiscall CellClass::ProcessTileChange(CellClass *this, _WORD *a2)
{
  CellClass *v2; // ebp
  _WORD *v3; // edi
  char v4; // si
  int i; // ebx
  int v6; // eax
  __int16 v7; // dx
  unsigned int v8; // eax
  int *v9; // eax
  int *v10; // edx
  int v11; // eax
  int v12; // ebx
  __int16 v13; // si
  int v14; // edx
  bool v15; // sf
  int v16; // edx
  int *v17; // edx
  int v18; // eax
  __int16 v19; // dx
  int v20; // eax
  __int16 v21; // cx
  __int16 v22; // si
  int v23; // edi
  int v24; // ebx
  int occupationFlags; // edx
  int v26; // edi
  int altOccupationFlags; // edx
  unsigned int v28; // eax
  int *v29; // eax
  int *v30; // edx
  int v31; // eax
  int v32; // edx
  __int16 v33; // cx
  int v34; // edx
  int v35; // esi
  int v36; // ecx
  __int16 v38; // [esp+12h] [ebp-22h]
  int v39; // [esp+14h] [ebp-20h]
  int *v40; // [esp+18h] [ebp-1Ch]
  _WORD *v41; // [esp+18h] [ebp-1Ch]
  int v42; // [esp+1Ch] [ebp-18h]
  int v43; // [esp+24h] [ebp-10h] BYREF
  int v44; // [esp+28h] [ebp-Ch]
  int v45; // [esp+2Ch] [ebp-8h]
  int v46; // [esp+30h] [ebp-4h]

  v2 = this; /*0x571056*/
  v3 = a2; /*0x57105f*/
  v4 = 0; /*0x571063*/
  for ( i = 0; i < 8; ++i ) /*0x571069*/
  {
    v6 = v4 & 7; /*0x57106d*/
    v7 = g_DDrawSurfaceManager.scenario[v6 + 82]; /*0x571070*/
    LOWORD(v6) = v3[1] + HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x571086*/
    LOWORD(a2) = *v3 + v7; /*0x57108a*/
    HIWORD(a2) = v6; /*0x571092*/
    v8 = (__int16)a2 + ((__int16)v6 << 9); /*0x57109d*/
    if ( v8 < 0x40000 && (v9 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v8)) != 0 ) /*0x5710ad*/
    {
      v10 = v9; /*0x5710af*/
    }
    else
    {
      v10 = &g_MissionQueueFrame.briefing[130]; /*0x5710b7*/
      g_MissionQueueFrame.briefing[139] = (int)a2; /*0x5710bc*/
    }
    v40 = v10; /*0x5710c7*/
    if ( (v10[80] & 0x500) != 0 ) /*0x5710ce*/
      break; /*0x5710ce*/
    v4 = (v4 + 1) & 7; /*0x5710d1*/
  }
  v11 = v10[80]; /*0x5710da*/
  if ( (v11 & 0x100) != 0 || (v11 & 0x400) != 0 )
  {
    if ( (v10[80] & 0x100) != 0 )
    {
      v11 = (v11 & 0x80u) == 0 ? *(_DWORD *)(v10[11] + 36) : v10[9];
    }
    else
    {
      v12 = v10[9]; /*0x571113*/
      v38 = HIWORD(v12); /*0x57111a*/
      v39 = 0; /*0x571121*/
      v42 = (v11 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x57113d*/
      {
        v13 = LOWORD(g_DDrawSurfaceManager.scenario[(v42 & 7) + 82]) + v12; /*0x57113d*/
        LOWORD(a2) = v13; /*0x571141*/
        HIWORD(a2) = v38 + HIWORD(g_DDrawSurfaceManager.scenario[(v42 & 7) + 82]); /*0x571155*/
        LOWORD(v12) = v13; /*0x57115a*/
        v14 = SHIWORD(a2) << 9; /*0x57115e*/
        v15 = v13 + v14 < 0; /*0x571161*/
        v16 = v13 + v14; /*0x571161*/
        v38 = HIWORD(a2); /*0x571163*/
        if ( v15 || v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x57117c*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x57117e*/
          v17 = &g_MissionQueueFrame.briefing[130]; /*0x571184*/
        }
        if ( (v17[80] & 0x400) == 0 ) /*0x571192*/
          break; /*0x571192*/
        LOBYTE(v11) = ++v39; /*0x571198*/
        if ( v39 >= 4 ) /*0x5711a0*/
          return v11; /*0x5711a0*/
      }
      v2 = this; /*0x5711b0*/
      v18 = ((_BYTE)v42 - 4) & 7; /*0x5711ba*/
      v19 = g_DDrawSurfaceManager.scenario[v18 + 82]; /*0x5711bd*/
      v20 = 4 * v18 + 9041544; /*0x5711cd*/
      v21 = v13 + v19 + v19; /*0x5711d7*/
      v22 = *(_WORD *)(v20 + 2); /*0x5711da*/
      LOWORD(a2) = v21; /*0x5711de*/
      HIWORD(a2) += v22 + *(_WORD *)(v20 + 2); /*0x5711ed*/
      v11 = (int)a2; /*0x5711f2*/
      v10 = v40; /*0x5711f6*/
    }
    v23 = v10[80]; /*0x5711fa*/
    v44 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]; /*0x571212*/
    v24 = v11; /*0x57121e*/
    v46 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2130]; /*0x571220*/
    occupationFlags = v2->occupationFlags; /*0x571224*/
    v43 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2118]; /*0x57122a*/
    a2 = (_WORD *)v11; /*0x571234*/
    v45 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]; /*0x57123d*/
    v26 = (v23 & 0x800) != 0 ? 6 : 0;
    if ( (__int16)v11 >= occupationFlags ) /*0x571246*/
    {
      do /*0x57124c*/
      {
        if ( (__int16)v24 > occupationFlags + v2->copyFlags ) /*0x571259*/
          return v11; /*0x571259*/
        LOBYTE(v11) = BYTE2(a2); /*0x57125f*/
        altOccupationFlags = v2->altOccupationFlags; /*0x571264*/
        if ( SHIWORD(a2) < altOccupationFlags || SHIWORD(a2) > altOccupationFlags + v2->shroudCounter ) /*0x57127c*/
          return v11; /*0x57127c*/
        v28 = (__int16)v24 + (SHIWORD(a2) << 9); /*0x57128b*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v28) ) /*0x57128d*/
        {
          if ( v28 < 0x40000 && (v29 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v28)) != 0 ) /*0x5712ad*/
          {
            v30 = v29; /*0x5712af*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = v24; /*0x5712b3*/
            v30 = &g_MissionQueueFrame.briefing[130]; /*0x5712b9*/
          }
          v31 = v30[14] - g_TerrainBridgeIndex + 1; /*0x5712cf*/
          if ( (v31 == dword_ABC2B4 || v31 == dword_AA1130) && *((_BYTE *)v30 + 282) == 8 /*0x57130f*/
            || (v31 == g_TerrainSoundTable2
             || v31 == g_TerrainSoundTable2 + 3
             || v31 == g_TerrainSoundTable2 + 1
             || v31 == g_TerrainSoundTable2 + 2)
            && *((_BYTE *)v30 + 282) == 5 )
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 2, &v43); /*0x5713bb*/
LABEL_51:
            if ( (_BYTE)v11 ) /*0x5713c2*/
            {
              v11 = v43; /*0x5713c8*/
              v34 = v44; /*0x5713d2*/
              v35 = v46; /*0x5713d6*/
              v36 = v45; /*0x5713dc*/
              if ( v43 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x5713fc*/
                || v44 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
                || v45 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
                || v46 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
              {
LABEL_64:
                LOBYTE(v11) = Cell::CreateCrater(v11, v34, v36, v35, 0); /*0x571469*/
                return v11; /*0x571481*/
              }
            }
            return v11; /*0x5713fc*/
          }
          if ( (v31 == dword_AA1548 || v31 == dword_AA0740) && *((_BYTE *)v30 + 282) == 12 ) /*0x57132c*/
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 4, &v43); /*0x57141e*/
            goto LABEL_51; /*0x57141e*/
          }
          if ( (v31 == g_TerrainSoundConfig /*0x571356*/
             || v31 == g_TerrainSoundConfig + 3
             || v31 == g_TerrainSoundConfig + 2
             || v31 == g_TerrainSoundConfig + 1)
            && *((_BYTE *)v30 + 282) == 7 )
          {
            LOBYTE(v11) = CellClass::RecursiveTileUpdate(v2, (__int16 *)&a2, 4, &v43); /*0x57142e*/
            if ( (_BYTE)v11 ) /*0x571435*/
            {
              v11 = v43; /*0x571437*/
              v34 = v44; /*0x571441*/
              v35 = v46; /*0x571445*/
              v36 = v45; /*0x57144b*/
              if ( v43 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x571467*/
                || v44 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
                || v45 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
                || v46 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
              {
                goto LABEL_64; /*0x571467*/
              }
            }
            return v11; /*0x571467*/
          }
        }
        v32 = v26 & 7; /*0x57135e*/
        LOWORD(v11) = g_DDrawSurfaceManager.scenario[v32 + 82]; /*0x571361*/
        v33 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v32 + 82]); /*0x571371*/
        occupationFlags = v2->occupationFlags; /*0x57137d*/
        LOWORD(v41) = v24 + v11; /*0x571386*/
        HIWORD(v41) = v33; /*0x57138b*/
        v24 = (int)v41; /*0x571390*/
        LOBYTE(v11) = (_BYTE)v41; /*0x571394*/
        a2 = v41; /*0x571399*/
      }
      while ( (__int16)v41 >= occupationFlags ); /*0x57124c*/
    }
  }
  return v11; /*0x5711a2*/
}



// ==== 0x00571490  CellClass::PropagateTerrainVariant2  this=CellClass  sig=csp ====
char __thiscall CellClass::PropagateTerrainVariant2(CellClass *this, __int16 *a2)
{
  __int16 *v2; // ebp
  int v3; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  char result; // al
  int v11; // eax
  int v12; // esi
  bool v13; // cc
  int *v14; // eax
  __int16 v15; // dx
  unsigned int v16; // eax
  int *v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  __int16 *v20; // eax
  int v21; // eax
  __int16 *v22; // ebp
  __int16 v23; // si
  int v24; // eax
  bool v25; // sf
  int v26; // eax
  CellClass *v27; // eax
  unsigned int v28; // eax
  CellClass *v29; // eax
  CellClass *v30; // ecx
  unsigned int v31; // eax
  CellClass *v32; // eax
  CellClass *v33; // ecx
  unsigned int v34; // eax
  int *v35; // eax
  __int16 v36; // si
  int v37; // ecx
  int v38; // ecx
  CellClass *v39; // ecx
  unsigned int v40; // eax
  CellClass *v41; // eax
  CellClass *v42; // ecx
  int v43; // edx
  int v44; // ea... [26137 chars total]



// ==== 0x00572230  globalHelper  this=ObjectClass  sig=csp ====
char __stdcall sub_572230(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572239*/
  v3 = dword_89F688[v2]; /*0x57223c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572252*/
  LOWORD(a2) = *a1 + v3; /*0x572256*/
  HIWORD(a2) = v2; /*0x57225e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57226d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572287*/
  {
    dword_ABDC74 = a2; /*0x572289*/
    v5 = unk_ABDC50; /*0x57228f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57229b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57229d*/
    if ( v6 <= 3u ) /*0x5722a6*/
    {
      *((_BYTE *)v5 + 286) = 4; /*0x5722b6*/
    }
    else if ( v6 == 5 ) /*0x5722ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5722ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5722ce*/
  if ( v7 == dword_ABC1E8 || v7 == dword_AA0E38 ) /*0x5722d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572327*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5722e3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundTable2, -1, -1, 0); /*0x5722f3*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 2 ) /*0x572303*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572315*/
  }
  return v7; /*0x5722f8*/
}



// ==== 0x00572330  globalHelper  this=ObjectClass  sig=csp ====
char __stdcall sub_572330(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572339*/
  v3 = dword_89F688[v2]; /*0x57233c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572352*/
  LOWORD(a2) = *a1 + v3; /*0x572356*/
  HIWORD(a2) = v2; /*0x57235e*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x57236d*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572387*/
  {
    dword_ABDC74 = a2; /*0x572389*/
    v5 = unk_ABDC50; /*0x57238f*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x57239b*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x57239d*/
    if ( v6 <= 3u ) /*0x5723a6*/
    {
      *((_BYTE *)v5 + 286) = 5; /*0x5723b6*/
    }
    else if ( v6 == 4 ) /*0x5723ab*/
    {
      *((_BYTE *)v5 + 286) = 6; /*0x5723ad*/
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x5723ce*/
  if ( v7 == dword_ABC2B4 || v7 == dword_AA1130 ) /*0x5723d9*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572429*/
  }
  else if ( v7 == g_TerrainSoundTable2 ) /*0x5723e3*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x5723f5*/
  }
  else if ( v7 == g_TerrainSoundTable2 + 1 ) /*0x572405*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572417*/
  }
  return v7; /*0x5723fa*/
}



// ==== 0x00572440  CellClass::UpdateVariant7  this=CellClass  sig=csp ====
char __stdcall sub_572440(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x572446*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572467*/
  a2 = v3; /*0x572469*/
  *(_DWORD *)v32 = v3; /*0x57246d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x57247c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572492*/
  {
    v6 = v5; /*0x572494*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572498*/
    v6 = &unk_ABDC50; /*0x57249e*/
  }
  if ( (char)v6[320] < 0 ) /*0x5724aa*/
  {
    v7 = v6[286]; /*0x5724ac*/
    if ( v7 <= 6u ) /*0x5724b4*/
    {
      v6[286] = 7; /*0x5724f0*/
    }
    else if ( v7 == 8 ) /*0x5724b8*/
    {
      CellClass::UpdateVariant7(v32, v2); /*0x5724c2*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x5724cd*/
      v6[286] = 0; /*0x5724d5*/
      *((_DWORD *)v6 + 17) = -1; /*0x5724e2*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x5724e9*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572508*/
  if ( v9 == dword_ABC1E8 || v9 == dword_AA0E38 ) /*0x572517*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x5727c7*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 2 ) /*0x572532*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x5727ae*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x57253d*/
  {
    CellClass::UpdateVariant7(v32, v2); /*0x57254b*/
    if ( (v6[282] & 1) != 0 ) /*0x572557*/
    {
      HIWORD(a2) = v32[1]; /*0x572568*/
      LOWORD(a2) = v32[0] - 1; /*0x57256d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x57257b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572591*/
      {
        v12 = v11; /*0x572593*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57259b*/
        dword_ABDC74 = a2; /*0x5725a0*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x5725a5*/
      LOWORD(a2) = v32[0] - 1; /*0x5725b6*/
      HIWORD(a2) = v32[1] - 1; /*0x5725bb*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x5725c9*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x5725df*/
      {
        v15 = v14; /*0x5725e1*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x5725e9*/
        dword_ABDC74 = a2; /*0x5725ee*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x5725f3*/
      LOWORD(a2) = v32[0] - 1; /*0x572604*/
      HIWORD(a2) = v32[1] + 1; /*0x572609*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x572617*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x57262d*/
      {
        v18 = v17; /*0x57262f*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x572637*/
        dword_ABDC74 = a2; /*0x57263c*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x572641*/
      HIWORD(a2) = v32[1]; /*0x57264e*/
      v19 = (__int16)(v32[0] - 1); /*0x572657*/
      v20 = v32[1] << 9; /*0x57265a*/
      v21 = v19 + v20 < 0; /*0x57265d*/
      v22 = v19 + v20; /*0x57265d*/
      LOWORD(a2) = v32[0] - 1; /*0x57265f*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572678*/
      {
        v23 = (char *)&unk_ABDC50; /*0x57267e*/
        dword_ABDC74 = a2; /*0x572683*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x5726cb*/
      v24 = v32[0] + (v32[1] << 9); /*0x5726d9*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x5726ef*/
      {
        v26 = v25; /*0x5726f1*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x5726f9*/
        dword_ABDC74 = a2; /*0x5726fe*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572704*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x572717*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x572725*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x57273b*/
      {
        v29 = v28; /*0x57273d*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572745*/
        dword_ABDC74 = a2; /*0x57274a*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x57274f*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x572767*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x57277a*/
      CellClass::UpdateAnimations((int)v30); /*0x572781*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572792*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0); /*0x5726b0*/
  }
  return v9; /*0x5726b5*/
}



// ==== 0x005727E0  CellClass::UpdateVariant8  this=CellClass  sig=csp ====
char __stdcall sub_5727E0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // ecx
  unsigned int v16; // eax
  void *v17; // eax
  void *v18; // ecx
  int v19; // edx
  int v20; // eax
  bool v21; // sf
  int v22; // eax
  char *v23; // eax
  unsigned int v24; // eax
  void *v25; // eax
  void *v26; // ecx
  unsigned int v27; // eax
  void *v28; // eax
  void *v29; // ecx
  void *v30; // eax
  __int16 v32[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x5727e6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572807*/
  a2 = v3; /*0x572809*/
  *(_DWORD *)v32 = v3; /*0x57280d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x57281c*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572832*/
  {
    v6 = v5; /*0x572834*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572838*/
    v6 = &unk_ABDC50; /*0x57283e*/
  }
  if ( (char)v6[320] < 0 ) /*0x57284a*/
  {
    v7 = v6[286]; /*0x57284c*/
    if ( v7 <= 6u ) /*0x572854*/
    {
      v6[286] = 8; /*0x572890*/
    }
    else if ( v7 == 7 ) /*0x572858*/
    {
      CellClass::UpdateVariant8(v32, v2); /*0x572862*/
      UpdateCellClassNeighborTerrain((int)v6, v8, 0, 0); /*0x57286d*/
      v6[286] = 0; /*0x572875*/
      *((_DWORD *)v6 + 17) = -1; /*0x572882*/
      BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572889*/
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x5728a8*/
  if ( v9 == dword_ABC2B4 || v9 == dword_AA1130 ) /*0x5728b7*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v32, 1, 0); /*0x572b67*/
  }
  else if ( v9 == g_TerrainSoundTable2 || v9 == g_TerrainSoundTable2 + 1 ) /*0x5728d2*/
  {
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572b4e*/
  }
  else if ( v9 == g_TerrainSoundTable2 + 3 ) /*0x5728dd*/
  {
    CellClass::UpdateVariant8(v32, v2); /*0x5728eb*/
    if ( (v6[282] & 1) != 0 ) /*0x5728f7*/
    {
      HIWORD(a2) = v32[1]; /*0x572908*/
      LOWORD(a2) = v32[0] - 1; /*0x57290d*/
      v10 = (__int16)(v32[0] - 1) + (v32[1] << 9); /*0x57291b*/
      if ( v10 < 0x40000 && (v11 = *(void **)(dword_87F924 + 4 * v10)) != 0 ) /*0x572931*/
      {
        v12 = v11; /*0x572933*/
      }
      else
      {
        v12 = &unk_ABDC50; /*0x57293b*/
        dword_ABDC74 = a2; /*0x572940*/
      }
      CellClass::UpdateAnimations((int)v12); /*0x572945*/
      LOWORD(a2) = v32[0] - 1; /*0x572956*/
      HIWORD(a2) = v32[1] - 1; /*0x57295b*/
      v13 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] - 1) << 9); /*0x572969*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x57297f*/
      {
        v15 = v14; /*0x572981*/
      }
      else
      {
        v15 = &unk_ABDC50; /*0x572989*/
        dword_ABDC74 = a2; /*0x57298e*/
      }
      CellClass::UpdateAnimations((int)v15); /*0x572993*/
      LOWORD(a2) = v32[0] - 1; /*0x5729a4*/
      HIWORD(a2) = v32[1] + 1; /*0x5729a9*/
      v16 = (__int16)(v32[0] - 1) + ((__int16)(v32[1] + 1) << 9); /*0x5729b7*/
      if ( v16 < 0x40000 && (v17 = *(void **)(dword_87F924 + 4 * v16)) != 0 ) /*0x5729cd*/
      {
        v18 = v17; /*0x5729cf*/
      }
      else
      {
        v18 = &unk_ABDC50; /*0x5729d7*/
        dword_ABDC74 = a2; /*0x5729dc*/
      }
      CellClass::UpdateAnimations((int)v18); /*0x5729e1*/
      HIWORD(a2) = v32[1]; /*0x5729ee*/
      v19 = (__int16)(v32[0] - 1); /*0x5729f7*/
      v20 = v32[1] << 9; /*0x5729fa*/
      v21 = v19 + v20 < 0; /*0x5729fd*/
      v22 = v19 + v20; /*0x5729fd*/
      LOWORD(a2) = v32[0] - 1; /*0x5729ff*/
      if ( v21 || v22 >= 0x40000 || (v23 = *(char **)(dword_87F924 + 4 * v22)) == 0 ) /*0x572a18*/
      {
        v23 = (char *)&unk_ABDC50; /*0x572a1e*/
        dword_ABDC74 = a2; /*0x572a23*/
      }
    }
    else
    {
      a2 = *(_DWORD *)v32; /*0x572a6b*/
      v24 = v32[0] + (v32[1] << 9); /*0x572a79*/
      if ( v24 < 0x40000 && (v25 = *(void **)(dword_87F924 + 4 * v24)) != 0 ) /*0x572a8f*/
      {
        v26 = v25; /*0x572a91*/
      }
      else
      {
        v26 = &unk_ABDC50; /*0x572a99*/
        dword_ABDC74 = a2; /*0x572a9e*/
      }
      CellClass::UpdateAnimations((int)v26); /*0x572aa4*/
      a2 = *(_DWORD *)v32 - 0x10000; /*0x572ab7*/
      v27 = v32[0] + ((__int16)(v32[1] - 1) << 9); /*0x572ac5*/
      if ( v27 < 0x40000 && (v28 = *(void **)(dword_87F924 + 4 * v27)) != 0 ) /*0x572adb*/
      {
        v29 = v28; /*0x572add*/
      }
      else
      {
        v29 = &unk_ABDC50; /*0x572ae5*/
        dword_ABDC74 = a2; /*0x572aea*/
      }
      CellClass::UpdateAnimations((int)v29); /*0x572aef*/
      a2 = *(_DWORD *)v32 + 0x10000; /*0x572b07*/
      v30 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x572b1a*/
      CellClass::UpdateAnimations((int)v30); /*0x572b21*/
      v23 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v32); /*0x572b32*/
    }
    LOBYTE(v9) = Cell::SetTileType(v32, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT + 3, -1, v23[283] - 4, 0); /*0x572a50*/
  }
  return v9; /*0x572a55*/
}



// ==== 0x00572B80  CellClass::SetTileType13  this=CellClass  sig=csp ====
char __stdcall CellClass_SetTileType13(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572b89*/
  v3 = dword_89F688[v2]; /*0x572b8c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572ba2*/
  LOWORD(a2) = *a1 + v3; /*0x572ba6*/
  HIWORD(a2) = v2; /*0x572bae*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x572bbd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572bd7*/
  {
    dword_ABDC74 = a2; /*0x572bd9*/
    v5 = unk_ABDC50; /*0x572bdf*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572beb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x572bed*/
    if ( v6 >= 9u ) /*0x572bf6*/
    {
      if ( v6 <= 0xCu ) /*0x572bfb*/
      {
        *((_BYTE *)v5 + 286) = 14; /*0x572c0b*/
      }
      else if ( v6 == 13 ) /*0x572c00*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x572c02*/
      }
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572c23*/
  if ( v7 == dword_ABC1D0 || v7 == dword_AA1540 ) /*0x572c2e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572c7c*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572c38*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_Cell_BuildabilityLUT + g_TerrainSoundConfig, -1, -1, 0); /*0x572c48*/
  }
  else if ( v7 == g_TerrainSoundConfig + 2 ) /*0x572c58*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572c6a*/
  }
  return v7; /*0x572c4d*/
}



// ==== 0x00572C90  CellClass::SetTileType14  this=CellClass  sig=csp ====
char __stdcall CellClass_SetTileType14(_WORD *a1, int a2)
{
  int v2; // eax
  __int16 v3; // dx
  unsigned int v4; // eax
  _DWORD *v5; // eax
  unsigned __int8 v6; // dl
  int v7; // eax

  v2 = a2 & 7; /*0x572c99*/
  v3 = dword_89F688[v2]; /*0x572c9c*/
  LOWORD(v2) = a1[1] + HIWORD(dword_89F688[v2]); /*0x572cb2*/
  LOWORD(a2) = *a1 + v3; /*0x572cb6*/
  HIWORD(a2) = v2; /*0x572cbe*/
  v4 = (__int16)a2 + ((__int16)v2 << 9); /*0x572ccd*/
  if ( v4 >= 0x40000 || (v5 = *(_DWORD **)(dword_87F924 + 4 * v4)) == 0 ) /*0x572ce7*/
  {
    dword_ABDC74 = a2; /*0x572ce9*/
    v5 = unk_ABDC50; /*0x572cef*/
  }
  if ( *((char *)v5 + 320) < 0 ) /*0x572cfb*/
  {
    v6 = *((_BYTE *)v5 + 286); /*0x572cfd*/
    if ( v6 >= 9u ) /*0x572d06*/
    {
      if ( v6 <= 0xCu ) /*0x572d0b*/
      {
        *((_BYTE *)v5 + 286) = 13; /*0x572d1b*/
      }
      else if ( v6 == 14 ) /*0x572d10*/
      {
        *((_BYTE *)v5 + 286) = 15; /*0x572d12*/
      }
    }
  }
  v7 = v5[14] - g_Cell_BuildabilityLUT + 1; /*0x572d33*/
  if ( v7 == dword_AA1548 || v7 == dword_AA0740 ) /*0x572d3e*/
  {
    LOBYTE(v7) = Cell::UpdateTileType((__int16 *)&a2, 1, 0); /*0x572d8e*/
  }
  else if ( v7 == g_TerrainSoundConfig ) /*0x572d48*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 1, -1, -1, 0); /*0x572d5a*/
  }
  else if ( v7 == g_TerrainSoundConfig + 1 ) /*0x572d6a*/
  {
    LOBYTE(v7) = Cell::SetTileType((__int16 *)&a2, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x572d7c*/
  }
  return v7; /*0x572d5f*/
}



// ==== 0x00572DA0  CellClass::UpdateVariant5  this=AbstractClass  sig=csp ====
char __stdcall sub_572DA0(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x572da6*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x572dc7*/
  a2 = v3; /*0x572dc9*/
  *(_DWORD *)v31 = v3; /*0x572dcd*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x572ddc*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x572df2*/
  {
    v6 = v5; /*0x572df4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x572df8*/
    v6 = &unk_ABDC50; /*0x572dfe*/
  }
  if ( (char)v6[320] < 0 ) /*0x572e0a*/
  {
    v7 = v6[286]; /*0x572e0c*/
    if ( v7 >= 9u ) /*0x572e14*/
    {
      if ( v7 <= 0xFu ) /*0x572e18*/
      {
        v6[286] = 17; /*0x572e54*/
      }
      else if ( v7 == 16 ) /*0x572e1c*/
      {
        CellClass::UpdateVariant5(v31, v2); /*0x572e26*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x572e31*/
        v6[286] = 0; /*0x572e39*/
        *((_DWORD *)v6 + 17) = -1; /*0x572e46*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x572e4d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x572e6c*/
  if ( v9 == dword_ABC1D0 || v9 == dword_AA1540 ) /*0x572e7b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x573156*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 2 ) /*0x572e96*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57313d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x572ea1*/
  {
    CellClass::UpdateVariant5(v31, v2); /*0x572eaf*/
    v10 = v31[0] - 1; /*0x572ec0*/
    if ( v6[282] <= 4u ) /*0x572ec3*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x573029*/
      HIWORD(a2) = v31[1]; /*0x57302e*/
      v22 = v10 + (v31[1] << 9); /*0x57303c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573052*/
      {
        v24 = v23; /*0x573054*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57305c*/
        dword_ABDC74 = a2; /*0x573061*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573066*/
      a2 = *(_DWORD *)v31; /*0x573078*/
      v25 = v31[0] + (v31[1] << 9); /*0x573086*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57309c*/
      {
        v27 = v26; /*0x57309e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x5730a6*/
        dword_ABDC74 = a2; /*0x5730ab*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x5730b0*/
      HIWORD(a2) = v31[1]; /*0x5730bf*/
      LOWORD(a2) = v31[0] + 1; /*0x5730c4*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x5730db*/
      CellClass::UpdateAnimations((int)v28); /*0x5730e2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5730f3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x57311d*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x572ecd*/
      HIWORD(a2) = v31[1] - 1; /*0x572ed8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x572ee3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x572ef9*/
      {
        v13 = v12; /*0x572efb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x572f03*/
        dword_ABDC74 = a2; /*0x572f08*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x572f0d*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x572f22*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x572f30*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x572f46*/
      {
        v16 = v15; /*0x572f48*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x572f50*/
        dword_ABDC74 = a2; /*0x572f55*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x572f5a*/
      LOWORD(a2) = v31[0] + 1; /*0x572f6b*/
      HIWORD(a2) = v31[1] - 1; /*0x572f70*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x572f7e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x572f94*/
      {
        v19 = v18; /*0x572f96*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x572f9e*/
        dword_ABDC74 = a2; /*0x572fa3*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x572fa8*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x572fbd*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x572fcb*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x572fe1*/
      {
        dword_ABDC74 = a2; /*0x572fe7*/
        v21 = (char *)&unk_ABDC50; /*0x572fec*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x573017*/
    }
  }
  return v9; /*0x57301c*/
}



// ==== 0x00573170  CellClass::UpdateVariant6  this=AbstractClass  sig=csp ====
char __stdcall sub_573170(_WORD *a1, int a2)
{
  int v2; // edi
  int v3; // ecx
  unsigned int v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  unsigned __int8 v7; // al
  int v8; // edx
  int v9; // eax
  __int16 v10; // cx
  unsigned int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  unsigned int v14; // eax
  void *v15; // eax
  void *v16; // ecx
  unsigned int v17; // eax
  void *v18; // eax
  void *v19; // ecx
  unsigned int v20; // eax
  char *v21; // eax
  unsigned int v22; // eax
  void *v23; // eax
  void *v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // ecx
  void *v28; // eax
  char *v29; // eax
  __int16 v31[4]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2; /*0x573176*/
  v3 = *CellStruct::Add(a1, &a2, (_WORD *)(4 * (a2 & 7) + 9041544)); /*0x573197*/
  a2 = v3; /*0x573199*/
  *(_DWORD *)v31 = v3; /*0x57319d*/
  v4 = (__int16)v3 + (SHIWORD(v3) << 9); /*0x5731ac*/
  if ( v4 < 0x40000 && (v5 = *(_BYTE **)(dword_87F924 + 4 * v4)) != 0 ) /*0x5731c2*/
  {
    v6 = v5; /*0x5731c4*/
  }
  else
  {
    dword_ABDC74 = v3; /*0x5731c8*/
    v6 = &unk_ABDC50; /*0x5731ce*/
  }
  if ( (char)v6[320] < 0 ) /*0x5731da*/
  {
    v7 = v6[286]; /*0x5731dc*/
    if ( v7 >= 9u ) /*0x5731e4*/
    {
      if ( v7 <= 0xFu ) /*0x5731e8*/
      {
        v6[286] = 16; /*0x573224*/
      }
      else if ( v7 == 17 ) /*0x5731ec*/
      {
        CellClass::UpdateVariant6(v31, v2); /*0x5731f6*/
        UpdateCellClassNeighborTerrain((int)v6, v8, 6u, 0); /*0x573201*/
        v6[286] = 0; /*0x573209*/
        *((_DWORD *)v6 + 17) = -1; /*0x573216*/
        BuildingClass::AddUpgrade((int)&dword_87F7E8, (int)(v6 + 36)); /*0x57321d*/
      }
    }
  }
  v9 = *((_DWORD *)v6 + 14) - g_Cell_BuildabilityLUT + 1; /*0x57323c*/
  if ( v9 == dword_AA1548 || v9 == dword_AA0740 ) /*0x57324b*/
  {
    LOBYTE(v9) = Cell::UpdateTileType(v31, 1, 0); /*0x573526*/
  }
  else if ( v9 == g_TerrainSoundConfig || v9 == g_TerrainSoundConfig + 1 ) /*0x573266*/
  {
    LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 2, -1, -1, 0); /*0x57350d*/
  }
  else if ( v9 == g_TerrainSoundConfig + 3 ) /*0x573271*/
  {
    CellClass::UpdateVariant6(v31, v2); /*0x57327f*/
    v10 = v31[0] - 1; /*0x573290*/
    if ( v6[282] <= 4u ) /*0x573293*/
    {
      LOWORD(a2) = v31[0] - 1; /*0x5733f9*/
      HIWORD(a2) = v31[1]; /*0x5733fe*/
      v22 = v10 + (v31[1] << 9); /*0x57340c*/
      if ( v22 < 0x40000 && (v23 = *(void **)(dword_87F924 + 4 * v22)) != 0 ) /*0x573422*/
      {
        v24 = v23; /*0x573424*/
      }
      else
      {
        v24 = &unk_ABDC50; /*0x57342c*/
        dword_ABDC74 = a2; /*0x573431*/
      }
      CellClass::UpdateAnimations((int)v24); /*0x573436*/
      a2 = *(_DWORD *)v31; /*0x573448*/
      v25 = v31[0] + (v31[1] << 9); /*0x573456*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x57346c*/
      {
        v27 = v26; /*0x57346e*/
      }
      else
      {
        v27 = &unk_ABDC50; /*0x573476*/
        dword_ABDC74 = a2; /*0x57347b*/
      }
      CellClass::UpdateAnimations((int)v27); /*0x573480*/
      HIWORD(a2) = v31[1]; /*0x57348f*/
      LOWORD(a2) = v31[0] + 1; /*0x573494*/
      v28 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a2); /*0x5734ab*/
      CellClass::UpdateAnimations((int)v28); /*0x5734b2*/
      v29 = (char *)CellCoord::To_CellObj(&dword_87F7E8, v31); /*0x5734c3*/
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v29[283] - 4, 0); /*0x5734ed*/
    }
    else
    {
      LOWORD(a2) = v31[0] - 1; /*0x57329d*/
      HIWORD(a2) = v31[1] - 1; /*0x5732a8*/
      v11 = v10 + ((__int16)(v31[1] - 1) << 9); /*0x5732b3*/
      if ( v11 < 0x40000 && (v12 = *(void **)(dword_87F924 + 4 * v11)) != 0 ) /*0x5732c9*/
      {
        v13 = v12; /*0x5732cb*/
      }
      else
      {
        v13 = &unk_ABDC50; /*0x5732d3*/
        dword_ABDC74 = a2; /*0x5732d8*/
      }
      CellClass::UpdateAnimations((int)v13); /*0x5732dd*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x5732f2*/
      v14 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x573300*/
      if ( v14 < 0x40000 && (v15 = *(void **)(dword_87F924 + 4 * v14)) != 0 ) /*0x573316*/
      {
        v16 = v15; /*0x573318*/
      }
      else
      {
        v16 = &unk_ABDC50; /*0x573320*/
        dword_ABDC74 = a2; /*0x573325*/
      }
      CellClass::UpdateAnimations((int)v16); /*0x57332a*/
      LOWORD(a2) = v31[0] + 1; /*0x57333b*/
      HIWORD(a2) = v31[1] - 1; /*0x573340*/
      v17 = (__int16)(v31[0] + 1) + ((__int16)(v31[1] - 1) << 9); /*0x57334e*/
      if ( v17 < 0x40000 && (v18 = *(void **)(dword_87F924 + 4 * v17)) != 0 ) /*0x573364*/
      {
        v19 = v18; /*0x573366*/
      }
      else
      {
        v19 = &unk_ABDC50; /*0x57336e*/
        dword_ABDC74 = a2; /*0x573373*/
      }
      CellClass::UpdateAnimations((int)v19); /*0x573378*/
      a2 = *(_DWORD *)v31 - 0x10000; /*0x57338d*/
      v20 = v31[0] + ((__int16)(v31[1] - 1) << 9); /*0x57339b*/
      if ( v20 >= 0x40000 || (v21 = *(char **)(dword_87F924 + 4 * v20)) == 0 ) /*0x5733b1*/
      {
        dword_ABDC74 = a2; /*0x5733b7*/
        v21 = (char *)&unk_ABDC50; /*0x5733bc*/
      }
      LOBYTE(v9) = Cell::SetTileType(v31, g_TerrainSoundConfig + g_Cell_BuildabilityLUT + 3, -1, v21[283] - 4, 0); /*0x5733e7*/
    }
  }
  return v9; /*0x5733ec*/
}



// ==== 0x00573540  Terrain::RecursiveModify  this=Terrain  sig=csp ====
void __thiscall Terrain::RecursiveModify(Terrain *this, int a2)
{
  CellStruct *v2; // ebx
  int v4; // edi
  int v5; // esi
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // si
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edx
  char v12; // di
  int i; // ebp
  int v14; // ecx
  unsigned int v15; // eax
  int *v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebp
  __int16 v26; // di
  int v27; // ecx
  bool v28; // sf
  int v29; // ecx
  int *v30; // ecx
  int v31; // eax
  __int16 v32; // cx
  _WORD *v33; // eax
  __int16 v34; // si
  __int16 v35; // di
  __int16 v36; // cx
  int v37; // esi
  int v38; // ebx
  int v39; // eax
  void *Terrain_field_0x128; // ecx
  unsigned int v41; // eax
  int *v42; // eax
  int *v43; // edx
  int v44; // eax
  unsigned int v45; // eax
  int *v46; // eax
  Terrain *v47; // ebp
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int *v51; // eax
  int v52; // ecx
  unsigned int v53; // eax
  int *v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  int *v57; // eax
  int Capacity; // eax
  int v59; // edi
  int v60; // esi
  int v61; // eax
  unsigned int v62; // eax
  int *v63; // eax
  unsigned int v64; // eax
  int *v65; // eax
  Terrain *v66; // ebp
  int v67; // ecx
  unsigned int v68; // eax
  int *v69; // eax
  int v70; // ecx
  unsigned int v71; // eax
  int *v72; // eax
  int v73; // ecx
  unsigned int v74; // eax
  int *v75; // eax
  int v76; // eax
  int v77; // edi
  int v78; // esi
  int v79; // eax
  unsigned int v80; // eax
  int *v81; // eax
  int v83; // [esp+14h] [ebp-44h] BYREF
  __int16 v84[4]; // [esp+18h] [ebp-40h] BYREF
  __int16 v85[2]; // [esp+20h] [ebp-38h] BYREF
  int v86; // [esp+24h] [ebp-34h] BYREF
  __int16 v87[4]; // [esp+28h] [ebp-30h] BYREF
  int v88; // [esp+30h] [ebp-28h] BYREF
  int v89; // [esp+34h] [ebp-24h]
  int v90; // [esp+38h] [ebp-20h]
  int v91; // [esp+3Ch] [ebp-1Ch]
  VectorClass v92; // [esp+40h] [ebp-18h] BYREF
  int v93; // [esp+50h] [ebp-8h]
  int v94; // [esp+54h] [ebp-4h]

  v2 = (CellStruct *)a2; /*0x573544*/
  v4 = -2; /*0x573551*/
  do /*0x5735a4*/
  {
    v5 = -2; /*0x573556*/
    do /*0x57359e*/
    {
      v6 = HIWORD(v2->field_0) + v5; /*0x573564*/
      LOWORD(a2) = LOWORD(v2->field_0) + v4; /*0x573568*/
      HIWORD(a2) = v6; /*0x57356d*/
      *(_DWORD *)v85 = a2; /*0x573580*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v85) + 17); /*0x573589*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x573598*/
      {
        v8 = HIWORD(v2->field_0) + v5; /*0x5735ab*/
        LOWORD(a2) = LOWORD(v2->field_0) + v4; /*0x5735b3*/
        HIWORD(a2) = v8; /*0x5735b8*/
        CellClass::ApplyTileMod58((CellClass *)this, (int)&a2); /*0x5735c8*/
        return; /*0x5735d4*/
      }
      ++v5; /*0x57359a*/
    }
    while ( v5 < 3 ); /*0x57359e*/
    ++v4; /*0x5735a0*/
  }
  while ( v4 < 3 ); /*0x5735a4*/
  v9 = SLOWORD(v2->field_0) + (SHIWORD(v2->field_0) << 9); /*0x5735e1*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5735f7*/
  {
    v11 = v10; /*0x5735f9*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x5735ff*/
    g_MissionQueueFrame.briefing[139] = v2->field_0; /*0x573604*/
  }
  v12 = 0; /*0x57360f*/
  if ( (v11[80] & 0x500) == 0 ) /*0x573614*/
  {
    for ( i = 0; i < 8; ++i ) /*0x57361a*/
    {
      v14 = *CellStruct::Add(v2, &v86, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x573635*/
      *(_DWORD *)v85 = v14; /*0x573637*/
      a2 = v14; /*0x57363b*/
      v15 = (__int16)v14 + (SHIWORD(v14) << 9); /*0x57364a*/
      if ( v15 < 0x40000 && (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) != 0 ) /*0x573660*/
      {
        v11 = v16; /*0x573662*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v14; /*0x573666*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57366c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57367a*/
        break; /*0x57367a*/
      v17 = *CellStruct::Add((CellStruct *)&a2, v84, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x57368f*/
      *(_DWORD *)v85 = v17; /*0x573691*/
      a2 = v17; /*0x573695*/
      v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x5736a4*/
      if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x5736ba*/
      {
        v11 = v19; /*0x5736bc*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v17; /*0x5736c0*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5736c6*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5736d4*/
        break; /*0x5736d4*/
      v20 = *CellStruct::Add((CellStruct *)&a2, &v83, (_WORD *)(4 * (v12 & 7) + 9041544)); /*0x5736e5*/
      *(_DWORD *)v85 = v20; /*0x5736e7*/
      a2 = v20; /*0x5736eb*/
      v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x5736fa*/
      if ( v21 < 0x40000 && (v22 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v21)) != 0 ) /*0x573710*/
      {
        v11 = v22; /*0x573712*/
      }
      else
      {
        g_MissionQueueFrame.briefing[139] = v20; /*0x573716*/
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57371c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57372a*/
        break; /*0x57372a*/
      v12 = (v12 + 1) & 7; /*0x57372d*/
    }
  }
  v23 = v11[80]; /*0x57373a*/
  if ( (v23 & 0x100) != 0 || (v23 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v23 & 0x80u) == 0 ) /*0x573759*/
        v24 = *(_DWORD *)(v11[11] + 36); /*0x573766*/
      else
        v24 = v11[9]; /*0x57375b*/
    }
    else
    {
      v25 = v11[9]; /*0x573773*/
      *(_DWORD *)v84 = v25; /*0x57377a*/
      *(_DWORD *)v85 = 0; /*0x573781*/
      v86 = (v23 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x5737a2*/
      {
        v26 = HIWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v84[1]; /*0x5737a2*/
        LOWORD(v83) = LOWORD(g_DDrawSurfaceManager.scenario[(v86 & 7) + 82]) + v25; /*0x5737af*/
        HIWORD(v83) = v26; /*0x5737b4*/
        LOWORD(v25) = v83; /*0x5737b9*/
        v27 = v26 << 9; /*0x5737bd*/
        v28 = (__int16)v83 + v27 < 0; /*0x5737c0*/
        v29 = (__int16)v83 + v27; /*0x5737c0*/
        *(_DWORD *)v84 = v83; /*0x5737c2*/
        if ( v28 || v29 >= 0x40000 || (v30 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v29)) == 0 ) /*0x5737db*/
        {
          g_MissionQueueFrame.briefing[139] = v83; /*0x5737e1*/
          v30 = &g_MissionQueueFrame.briefing[130]; /*0x5737e7*/
        }
        if ( (v30[80] & 0x400) == 0 ) /*0x5737f5*/
          break; /*0x5737f5*/
        ++*(_DWORD *)v85; /*0x5737ff*/
        if ( *(int *)v85 >= 4 ) /*0x573803*/
          return; /*0x573803*/
      }
      v31 = ((_BYTE)v86 - 4) & 7; /*0x573819*/
      v32 = g_DDrawSurfaceManager.scenario[v31 + 82]; /*0x57381c*/
      v33 = (_WORD *)(4 * v31 + 9041544); /*0x573824*/
      v34 = v26 + v33[1]; /*0x573832*/
      v35 = v83 + v32 + *v33; /*0x573838*/
      v36 = v33[1]; /*0x57383b*/
      v85[0] = v35; /*0x573842*/
      v85[1] = v34 + v36; /*0x573847*/
      v24 = *(_DWORD *)v85; /*0x57384c*/
    }
    v37 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v87 = v24; /*0x57386b*/
    VectorClass::CellConstructor(&v92, 0, 0); /*0x57386f*/
    v38 = *(_DWORD *)v87; /*0x573874*/
    v39 = *(_DWORD *)&this->__pad_122[2]; /*0x57387f*/
    v92.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x573885*/
    v94 = 10; /*0x57388f*/
    v93 = 0; /*0x573897*/
    LOBYTE(a2) = 0; /*0x57389f*/
    if ( v87[0] < v39 ) /*0x5738a4*/
      goto LABEL_141; /*0x5738a4*/
    while ( 1 ) /*0x5738aa*/
    {
      if ( (__int16)v38 > (int)this->Terrain_field_0x12C + v39 ) /*0x5738bb*/
        goto LABEL_141; /*0x5738bb*/
      Terrain_field_0x128 = this->Terrain_field_0x128; /*0x5738ca*/
      if ( v87[1] < (int)Terrain_field_0x128 || v87[1] > (int)Terrain_field_0x128 + *(_DWORD *)this->__pad_130 ) /*0x5738e6*/
        goto LABEL_141; /*0x5738e6*/
      v41 = (__int16)v38 + (v87[1] << 9); /*0x5738ef*/
      if ( *((_DWORD *)this->Terrain_field_0x13C + v41) ) /*0x5738fb*/
      {
        if ( v41 < 0x40000 && (v42 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v41)) != 0 ) /*0x57391b*/
        {
          v43 = v42; /*0x57391d*/
        }
        else
        {
          g_MissionQueueFrame.briefing[139] = v38; /*0x573921*/
          v43 = &g_MissionQueueFrame.briefing[130]; /*0x573927*/
        }
        v44 = v43[14] - g_Cell_BuildabilityLUT + 1; /*0x57393d*/
        if ( (v44 == dword_ABC2B4 || v44 == dword_AA1130) && *((_BYTE *)v43 + 282) == 8 ) /*0x573951*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573a26*/
          v45 = v87[0] + (v87[1] << 9); /*0x573a3a*/
          if ( v45 >= 0x40000 || (v46 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v45)) == 0 ) /*0x573a50*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573a52*/
            v46 = &g_MissionQueueFrame.briefing[130]; /*0x573a58*/
          }
          Terrain::PlaceCliffs(this, (int)v46, 2, &v88); /*0x573a64*/
          goto LABEL_111; /*0x573a64*/
        }
        if ( (v44 == g_TerrainSoundTable2 /*0x573984*/
           || v44 == g_TerrainSoundTable2 + 3
           || v44 == g_TerrainSoundTable2 + 4
           || v44 == g_TerrainSoundTable2 + 1
           || v44 == g_TerrainSoundTable2 + 2)
          && *((_BYTE *)v43 + 282) == 5 )
        {
          if ( v44 != g_TerrainSoundTable2 + 4 ) /*0x573a6e*/
          {
            v47 = this; /*0x573c2e*/
LABEL_103:
            v85[0] = v38 - 2; /*0x573c32*/
            v85[1] = v87[1]; /*0x573c3f*/
            v86 = *(_DWORD *)v85; /*0x573c4c*/
            Terrain::RecursiveModify(v47, (int)&v86); /*0x573c53*/
            v62 = v87[0] + (v87[1] << 9); /*0x573c67*/
            if ( v62 >= 0x40000 || (v63 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v62)) == 0 ) /*0x573c7d*/
            {
              g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573c7f*/
              v63 = &g_MissionQueueFrame.briefing[130]; /*0x573c85*/
            }
            Terrain::PlaceCliffs(v47, (int)v63, 2, &v88); /*0x573c94*/
            Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573cc1*/
            goto LABEL_139; /*0x573cc6*/
          }
          v47 = this; /*0x573a74*/
          Cell::SetTileType(v87, g_TerrainSoundTable2 + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573a8a*/
          LOWORD(a2) = v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88]); /*0x573aa7*/
          v48 = (__int16)(v87[0] + LOWORD(g_DDrawSurfaceManager.scenario[88])); /*0x573aac*/
          HIWORD(a2) = HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]; /*0x573aaf*/
          v49 = (__int16)(HIWORD(g_DDrawSurfaceManager.scenario[88]) + v87[1]) << 9; /*0x573abb*/
          v28 = v48 + v49 < 0; /*0x573abe*/
          v50 = v48 + v49; /*0x573abe*/
          *(_DWORD *)v84 = a2; /*0x573ac0*/
          if ( v28 || v50 >= 0x40000 || (v51 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v50)) == 0 ) /*0x573ad8*/
          {
            g_MissionQueueFrame.briefing[139] = a2; /*0x573ada*/
            v51 = &g_MissionQueueFrame.briefing[130]; /*0x573ae0*/
          }
          *((_BYTE *)v51 + 283) += 4; /*0x573af7*/
          v52 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[82]); /*0x573b07*/
          a2 = v52; /*0x573b09*/
          v53 = (__int16)v52 + (SHIWORD(v52) << 9); /*0x573b18*/
          if ( v53 >= 0x40000 || (v54 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v53)) == 0 ) /*0x573b2e*/
          {
            g_MissionQueueFrame.briefing[139] = v52; /*0x573b30*/
            v54 = &g_MissionQueueFrame.briefing[130]; /*0x573b36*/
          }
          *((_BYTE *)v54 + 283) += 4; /*0x573b49*/
          v55 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[86]); /*0x573b5d*/
          a2 = v55; /*0x573b5f*/
          v56 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x573b6e*/
          if ( v56 >= 0x40000 || (v57 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v56)) == 0 ) /*0x573b84*/
          {
            g_MissionQueueFrame.briefing[139] = v55; /*0x573b86*/
            v57 = &g_MissionQueueFrame.briefing[130]; /*0x573b8c*/
          }
          *((_BYTE *)v57 + 283) += 4; /*0x573b9c*/
          LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573bac*/
          Capacity = v92.Capacity; /*0x573bb0*/
          v59 = 0; /*0x573bb4*/
          while ( 2 ) /*0x573bb6*/
          {
            v60 = -2; /*0x573bb6*/
LABEL_92:
            v85[0] = v59 + v84[0]; /*0x573bbb*/
            v85[1] = v60 + v84[1]; /*0x573bcd*/
            if ( v93 >= Capacity ) /*0x573bd8*/
            {
              if ( (v92.IsAllocated || !Capacity) && v94 > 0 ) /*0x573bec*/
              {
                if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v92.ptr_0 + 2))( /*0x573bfb*/
                       &v92,
                       v94 + Capacity,
                       0) )
                {
                  break; /*0x573c00*/
                }
LABEL_98:
                Capacity = v92.Capacity; /*0x573c18*/
              }
              if ( ++v60 >= 3 ) /*0x573c20*/
              {
                if ( ++v59 >= 2 ) /*0x573c26*/
                {
                  LOWORD(v38) = v87[0]; /*0x573c28*/
                  goto LABEL_103; /*0x573c2c*/
                }
                continue; /*0x573c26*/
              }
              goto LABEL_92; /*0x573c20*/
            }
            break;
          }
          v61 = v93++; /*0x573c02*/
          *((_DWORD *)v92.Items + v61) = *(_DWORD *)v85; /*0x573c15*/
          goto LABEL_98; /*0x573c15*/
        }
        if ( (v44 == dword_AA1548 || v44 == dword_AA0740) && *((_BYTE *)v43 + 282) == 12 ) /*0x5739a1*/
        {
          Cell::UpdateTileType(v87, 0, 0); /*0x573cda*/
          v64 = v87[0] + (v87[1] << 9); /*0x573cee*/
          if ( v64 >= 0x40000 || (v65 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v64)) == 0 ) /*0x573d04*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573d06*/
            v65 = &g_MissionQueueFrame.briefing[130]; /*0x573d0c*/
          }
          Terrain::PlaceCliffs(this, (int)v65, 4, &v88); /*0x573d1b*/
LABEL_111:
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573d20*/
          goto LABEL_141; /*0x573d4d*/
        }
        if ( (v44 == g_TerrainSoundConfig /*0x5739d4*/
           || v44 == g_TerrainSoundConfig + 3
           || v44 == g_TerrainSoundConfig + 4
           || v44 == g_TerrainSoundConfig + 1
           || v44 == g_TerrainSoundConfig + 2)
          && *((_BYTE *)v43 + 282) == 7 )
        {
          break; /*0x5739d4*/
        }
      }
      v38 = *CellStruct::Add((CellStruct *)v87, &v86, (_WORD *)(4 * (v37 & 7) + 9041544)); /*0x5739fb*/
      v39 = *(_DWORD *)&this->__pad_122[2]; /*0x5739fd*/
      *(_DWORD *)v87 = v38; /*0x573a03*/
      if ( (__int16)v38 < v39 ) /*0x573a0c*/
        goto LABEL_141; /*0x573a0c*/
    }
    if ( v44 != g_TerrainSoundConfig + 4 ) /*0x573d57*/
    {
      v66 = this; /*0x573f0c*/
      goto LABEL_135; /*0x573f0c*/
    }
    v66 = this; /*0x573d5d*/
    Cell::SetTileType(v87, g_TerrainSoundConfig + g_Cell_BuildabilityLUT - 1, -1, -1, 0); /*0x573d73*/
    v67 = *CellStruct::Add((CellStruct *)v87, &a2, &g_DDrawSurfaceManager.scenario[82]); /*0x573d8b*/
    a2 = v67; /*0x573d8d*/
    *(_DWORD *)v84 = v67; /*0x573d91*/
    v68 = (__int16)v67 + (SHIWORD(v67) << 9); /*0x573da0*/
    if ( v68 >= 0x40000 || (v69 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v68)) == 0 ) /*0x573db6*/
    {
      g_MissionQueueFrame.briefing[139] = v67; /*0x573db8*/
      v69 = &g_MissionQueueFrame.briefing[130]; /*0x573dbe*/
    }
    *((_BYTE *)v69 + 283) += 4; /*0x573dd1*/
    v70 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[84]); /*0x573de5*/
    a2 = v70; /*0x573de7*/
    v71 = (__int16)v70 + (SHIWORD(v70) << 9); /*0x573df6*/
    if ( v71 >= 0x40000 || (v72 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v71)) == 0 ) /*0x573e0c*/
    {
      g_MissionQueueFrame.briefing[139] = v70; /*0x573e0e*/
      v72 = &g_MissionQueueFrame.briefing[130]; /*0x573e14*/
    }
    *((_BYTE *)v72 + 283) += 4; /*0x573e27*/
    v73 = *CellStruct::Add((CellStruct *)v84, &v86, &g_DDrawSurfaceManager.scenario[88]); /*0x573e3b*/
    a2 = v73; /*0x573e3d*/
    v74 = (__int16)v73 + (SHIWORD(v73) << 9); /*0x573e4c*/
    if ( v74 >= 0x40000 || (v75 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v74)) == 0 ) /*0x573e62*/
    {
      g_MissionQueueFrame.briefing[139] = v73; /*0x573e64*/
      v75 = &g_MissionQueueFrame.briefing[130]; /*0x573e6a*/
    }
    *((_BYTE *)v75 + 283) += 4; /*0x573e7a*/
    LOBYTE(a2) = InvalidateTileRegionMap((ObjectClass *)this, v84); /*0x573e8a*/
    v76 = v92.Capacity; /*0x573e8e*/
    v77 = 0; /*0x573e92*/
LABEL_123:
    v78 = -2; /*0x573e94*/
    while ( 1 ) /*0x573ea6*/
    {
      v85[0] = v78 + v84[0]; /*0x573ea6*/
      v85[1] = v77 + v84[1]; /*0x573eab*/
      if ( v93 < v76 ) /*0x573eb6*/
        goto LABEL_129; /*0x573eb6*/
      if ( !v92.IsAllocated && v76 || v94 <= 0 ) /*0x573eca*/
        goto LABEL_131; /*0x573eca*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v92.ptr_0 + 2))(&v92, v94 + v76, 0) ) /*0x573ed9*/
      {
LABEL_129:
        v79 = v93++; /*0x573ee8*/
        *((_DWORD *)v92.Items + v79) = *(_DWORD *)v85; /*0x573ef3*/
      }
      v76 = v92.Capacity; /*0x573ef6*/
LABEL_131:
      if ( ++v78 >= 3 ) /*0x573efe*/
      {
        if ( ++v77 >= 2 ) /*0x573f04*/
        {
          LOWORD(v38) = v87[0]; /*0x573f06*/
LABEL_135:
          v85[0] = v38; /*0x573f10*/
          v85[1] = v87[1] - 2; /*0x573f20*/
          v86 = *(_DWORD *)v85; /*0x573f29*/
          Terrain::RecursiveModify(v66, (int)&v86); /*0x573f30*/
          v80 = v87[0] + (v87[1] << 9); /*0x573f44*/
          if ( v80 >= 0x40000 || (v81 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v80)) == 0 ) /*0x573f5a*/
          {
            g_MissionQueueFrame.briefing[139] = *(_DWORD *)v87; /*0x573f5c*/
            v81 = &g_MissionQueueFrame.briefing[130]; /*0x573f62*/
          }
          Terrain::PlaceCliffs(v66, (int)v81, 4, &v88); /*0x573f71*/
          Cell::CreateCrater(v88, v89, v90, v91, 0); /*0x573f9e*/
          v47 = this; /*0x573fa3*/
LABEL_139:
          if ( (_BYTE)a2 ) /*0x573fad*/
            Terrain::ConnectivityGraph(v47); /*0x573fb1*/
LABEL_141:
          if ( v93 > 0 ) /*0x573fbc*/
            LayerClass::Update_Pathfinding_2((LayerClass *)this, (int)&v92); /*0x573fc7*/
          v92.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x573fd0*/
          if ( v92.Items ) /*0x573fda*/
          {
            if ( v92.IsAllocated ) /*0x573fe2*/
              __3_YAXPAX_Z(v92.Items); /*0x573fe5*/
          }
          return; /*0x573fe5*/
        }
        goto LABEL_123; /*0x573f04*/
      }
    }
  }
}



// ==== 0x00574000  TerrainClass::ProcessSlope  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::ProcessSlope(TerrainClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  __int16 *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  __int16 *v31; // eax
  int v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  __int16 *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  TerrainClass *v55; // esi
  int v56; // eax
  int v57; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  __int16 v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  __int16 v68[2]; // [esp+28h] [ebp-1Ch] BYREF
  VectorClass v69; // [esp+2Ch] [ebp-18h] BYREF
  int v70; // [esp+3Ch] [ebp-8h]
  int v71; // [esp+40h] [ebp-4h]

  v2 = (CellClass *)this; /*0x574006*/
  v3 = -2; /*0x57400d*/
  while ( 2 ) /*0x574012*/
  {
    v4 = -2; /*0x574012*/
    do /*0x57405e*/
    {
      v5 = a2; /*0x574017*/
      v6 = a2[1]; /*0x57401e*/
      LOWORD(v64) = v3 + *a2; /*0x574028*/
      HIWORD(v64) = v4 + v6; /*0x57402d*/
      *(_DWORD *)v68 = v64; /*0x574040*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v68) + 17); /*0x574049*/
      if ( v7 >= 205 && v7 <= 232 ) /*0x574058*/
      {
        v8 = v4 + v5[1]; /*0x574072*/
        LOWORD(a2) = v3 + *v5; /*0x574075*/
        HIWORD(a2) = v8; /*0x57407e*/
        CellClass::ApplyTerrainModTile(v2, (int)&a2); /*0x57408e*/
        return; /*0x57409a*/
      }
      ++v4; /*0x57405a*/
    }
    while ( v4 < 3 ); /*0x57405e*/
    if ( ++v3 < 3 ) /*0x574064*/
      continue; /*0x574064*/
    break;
  }
  v9 = *v5 + (v5[1] << 9); /*0x5740a7*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x5740bd*/
  {
    v11 = v10; /*0x5740bf*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x5740c5*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v5; /*0x5740ca*/
  }
  v12 = v11[80]; /*0x5740d0*/
  v64 = 0; /*0x5740db*/
  if ( (v12 & 0x500) == 0 ) /*0x5740df*/
  {
    *(_DWORD *)v68 = 0; /*0x5740e5*/
    while ( 1 ) /*0x5740fa*/
    {
      v13 = v64 & 7; /*0x5740fa*/
      v14 = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + *v5; /*0x574105*/
      v15 = v5[1] + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x57410d*/
      v16 = (__int16 *)(4 * v13 + 9041544); /*0x574111*/
      v17 = v15 << 9; /*0x57411e*/
      v18 = v14 + v17 < 0; /*0x574121*/
      v19 = v14 + v17; /*0x574121*/
      LOWORD(v65) = v14; /*0x574123*/
      HIWORD(v65) = v15; /*0x574128*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x574141*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x57414b*/
        g_MissionQueueFrame.briefing[139] = v65; /*0x574150*/
      }
      else
      {
        v11 = v20; /*0x574143*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x57415e*/
        break; /*0x57415e*/
      v21 = v15 + v16[1]; /*0x57416b*/
      v22 = v14 + *v16; /*0x57416e*/
      v23 = v21 << 9; /*0x574177*/
      v18 = v22 + v23 < 0; /*0x57417a*/
      v24 = v22 + v23; /*0x57417a*/
      LOWORD(v66) = v22; /*0x57417c*/
      HIWORD(v66) = v21; /*0x574181*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x57419a*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5741a4*/
        g_MissionQueueFrame.briefing[139] = v66; /*0x5741a9*/
      }
      else
      {
        v11 = v25; /*0x57419c*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x5741bb*/
        goto LABEL_34; /*0x5741bb*/
      v26 = *v16; /*0x5741bd*/
      HIWORD(v67) = v21 + v16[1]; /*0x5741cd*/
      LOWORD(v67) = v22 + v26; /*0x5741d2*/
      v27 = (__int16)(v22 + v26) + (SHIWORD(v67) << 9); /*0x5741dd*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) != 0 ) /*0x5741f3*/
      {
        v11 = v28; /*0x5741f5*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x5741fd*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574202*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *(_DWORD *)v68 + 1 < 8, v64 = ((_BYTE)v64 + 1) & 7, ++*(_DWORD *)v68, !v29) ) /*0x574227*/
      {
LABEL_34:
        v2 = (CellClass *)this; /*0x57422d*/
        break; /*0x57422d*/
      }
      v5 = a2; /*0x5740eb*/
      v2 = (CellClass *)this; /*0x5740ef*/
    }
  }
  v30 = v11[80]; /*0x574231*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574250*/
        v31 = *(__int16 **)(v11[11] + 36); /*0x57425d*/
      else
        v31 = (__int16 *)v11[9]; /*0x574252*/
    }
    else
    {
      v32 = v11[9]; /*0x57426a*/
      *(_DWORD *)v68 = v32; /*0x574271*/
      v67 = 0; /*0x574278*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574299*/
      {
        v33 = HIWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]) + v68[1]; /*0x574299*/
        LOWORD(a2) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]); /*0x5742a6*/
        HIWORD(a2) = v33; /*0x5742ab*/
        LOWORD(v32) = (_WORD)a2; /*0x5742b0*/
        v34 = v33 << 9; /*0x5742b4*/
        v18 = (__int16)a2 + v34 < 0; /*0x5742b7*/
        v35 = (__int16)a2 + v34; /*0x5742b7*/
        *(_DWORD *)v68 = a2; /*0x5742b9*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v35)) == 0 ) /*0x5742d3*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x5742d9*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x5742df*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x5742ee*/
          break; /*0x5742ee*/
        if ( ++v67 >= 4 ) /*0x5742fc*/
          return; /*0x5742fc*/
      }
      v2 = (CellClass *)this; /*0x57430c*/
      v37 = ((_BYTE)v66 - 4) & 7; /*0x574316*/
      v38 = HIWORD(g_DDrawSurfaceManager.scenario[v37 + 82]); /*0x574332*/
      LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]) /*0x57433c*/
                 + (_WORD)a2
                 + LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]);
      HIWORD(a2) = v33 + v38 + v38; /*0x574341*/
      v31 = a2; /*0x574346*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v63 = v31; /*0x574365*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574369*/
    v40 = *(__int16 **)v63; /*0x57436e*/
    occupationFlags = v2->occupationFlags; /*0x574372*/
    v69.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x57437d*/
    v71 = 10; /*0x574385*/
    v70 = 0; /*0x57438d*/
    if ( v63[0] >= occupationFlags ) /*0x574395*/
    {
      do /*0x5743a1*/
      {
        if ( (__int16)v40 > occupationFlags + v2->copyFlags ) /*0x5743a8*/
          break; /*0x5743a8*/
        altOccupationFlags = v2->altOccupationFlags; /*0x5743b3*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x5743cb*/
          break; /*0x5743cb*/
        v43 = (__int16)v40 + (v63[1] << 9); /*0x5743da*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v43) ) /*0x5743dc*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v43)) != 0 ) /*0x5743f8*/
          {
            v45 = v44; /*0x5743fa*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = (int)v40; /*0x5743fe*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x574404*/
          }
          if ( globalHelper_0746C0(v45[14] - g_Cell_BuildabilityLUT + 1, (int)v45) ) /*0x574415*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x574471*/
            a2 = *(__int16 **)v63; /*0x574474*/
            for ( i = 0; i < 3; ++i ) /*0x574478*/
            {
              if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, v63) ) /*0x574483*/
                break; /*0x57448a*/
            }
            while ( 1 ) /*0x5744ac*/
            {
              v50 = LOWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + (_WORD)a2; /*0x5744ac*/
              v68[1] = HIWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + HIWORD(a2); /*0x5744b2*/
              v68[0] = v50; /*0x5744b7*/
              v51 = v50; /*0x5744c0*/
              a2 = *(__int16 **)v68; /*0x5744c5*/
              v52 = v50 + (v68[1] << 9); /*0x5744cc*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) != 0 ) /*0x5744e2*/
              {
                v54 = v53; /*0x5744e4*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(_DWORD *)v68; /*0x5744e8*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x5744ee*/
              }
              v55 = this; /*0x5744f3*/
              v56 = *((_DWORD *)this + 73); /*0x5744f7*/
              if ( v51 < v56 ) /*0x5744ff*/
                break; /*0x5744ff*/
              if ( v51 > v56 + *((_DWORD *)this + 75) ) /*0x57450f*/
                goto LABEL_79; /*0x57450f*/
              v57 = this->q04A; /*0x574519*/
              if ( v68[1] < v57 || v68[1] > v57 + this->q04C ) /*0x574531*/
                goto LABEL_79; /*0x574531*/
              v58 = v54[14] - g_Cell_BuildabilityLUT + 1; /*0x57453f*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x574544*/
              {
                if ( v58 != -1 ) /*0x574554*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57455e*/
                  v60 = HIWORD(g_DDrawSurfaceManager.scenario[v59 + 82]); /*0x574570*/
                  v68[0] = LOWORD(g_DDrawSurfaceManager.scenario[v59 + 82]) + (_WORD)a2; /*0x574578*/
                  v61 = 0; /*0x574582*/
                  v68[1] = HIWORD(a2) + v60; /*0x574584*/
                  a2 = *(__int16 **)v68; /*0x57458d*/
                  do /*0x5745a7*/
                  {
                    if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, (__int16 *)&a2) ) /*0x57459a*/
                      break; /*0x5745a1*/
                    ++v61; /*0x5745a3*/
                  }
                  while ( v61 < 3 ); /*0x5745a7*/
                }
LABEL_79:
                v55 = this; /*0x5745a9*/
                break; /*0x5745a9*/
              }
            }
            Terrain::CreateCrater((Terrain *)v55, (int)v63); /*0x5745ad*/
            v2 = (CellClass *)this; /*0x5745bf*/
            g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x5745c3*/
            break; /*0x5745c3*/
          }
          LOWORD(v40) = v63[0]; /*0x57441e*/
        }
        v46 = v39 & 7; /*0x574424*/
        v47 = v63[1] + HIWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x57443a*/
        LOWORD(a2) = (_WORD)v40 + LOWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x574442*/
        HIWORD(a2) = v47; /*0x57444a*/
        occupationFlags = v2->occupationFlags; /*0x57444f*/
        v40 = a2; /*0x574455*/
        *(_DWORD *)v63 = a2; /*0x57445b*/
      }
      while ( (__int16)a2 >= occupationFlags ); /*0x5743a1*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5745ca*/
    v69.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5745d5*/
    if ( v69.Items ) /*0x5745df*/
    {
      if ( v69.IsAllocated ) /*0x5745e7*/
        __3_YAXPAX_Z(v69.Items); /*0x5745ea*/
    }
  }
}



// ==== 0x00574600  globalHelper  this=-  sig=csp ====
bool __fastcall sub_574600(int a1, int a2, int a3)
{
  char v3; // bl
  int v4; // edx
  int v5; // eax

  v3 = 2; /*0x574601*/
  if ( a2 == 2 ) /*0x574609*/
  {
    v4 = a3; /*0x574610*/
    v3 = 4; /*0x574616*/
    if ( a1 == dword_ABC1E8 && *(_BYTE *)(a3 + 282) == 4 || a1 == dword_AA0E38 && *(_BYTE *)(a3 + 282) == 4 ) /*0x574634*/
      return 1; /*0x574634*/
    v5 = g_TerrainSoundTable2; /*0x574636*/
    if ( a1 != g_TerrainSoundTable2 && a1 != g_TerrainSoundTable2 + 3 && a1 != g_TerrainSoundTable2 + 1 ) /*0x57464b*/
    {
LABEL_20:
      if ( a1 != v5 + 2 ) /*0x5746a3*/
        return 0; /*0x5746a3*/
    }
  }
  else
  {
    if ( a2 != 4 ) /*0x574652*/
      return 0; /*0x574652*/
    v4 = a3; /*0x574659*/
    if ( a1 == dword_ABC1D0 && *(_BYTE *)(a3 + 282) == 2 ) /*0x574667*/
      return 1; /*0x57466d*/
    if ( a1 == dword_AA1540 && *(_BYTE *)(a3 + 282) == 2 ) /*0x57467e*/
      return 1; /*0x574684*/
    v5 = g_TerrainSoundConfig; /*0x574687*/
    if ( a1 != g_TerrainSoundConfig && a1 != g_TerrainSoundConfig + 3 && a1 != g_TerrainSoundConfig + 1 ) /*0x57469c*/
      goto LABEL_20; /*0x57469c*/
  }
  return *(_BYTE *)(v4 + 282) == v3; /*0x574669*/
}



// ==== 0x005746C0  globalHelper_0746C0  this=-  sig=ida-proto ====
bool __fastcall sub_5746C0(int a1, int a2)
{
  if ( a1 == dword_AA1548 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746d3*/
    return 1; /*0x5746d6*/
  if ( a1 == dword_AA0740 && *(_BYTE *)(a2 + 282) == 12 ) /*0x5746e7*/
    return 1; /*0x5746ea*/
  if ( (a1 == g_TerrainSoundTable2 /*0x574712*/
     || a1 == g_TerrainSoundTable2 + 3
     || a1 == g_TerrainSoundTable2 + 1
     || a1 == g_TerrainSoundTable2 + 2)
    && *(_BYTE *)(a2 + 282) == 4 )
  {
    return 1; /*0x574715*/
  }
  if ( a1 == dword_ABC2B4 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57472a*/
    return 1; /*0x57472d*/
  if ( a1 == dword_AA1130 && *(_BYTE *)(a2 + 282) == 8 ) /*0x57473e*/
    return 1; /*0x574741*/
  return (a1 == g_TerrainSoundConfig /*0x5746d5*/
       || a1 == g_TerrainSoundConfig + 3
       || a1 == g_TerrainSoundConfig + 1
       || a1 == g_TerrainSoundConfig + 2)
      && *(_BYTE *)(a2 + 282) == 2;
}



// ==== 0x00574780  MapClass::TransitionCliff  this=MapClass  sig=csp ====
int __thiscall MapClass::TransitionCliff(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x574784*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x574795*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5747ab*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5747af*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5747b4*/
  }
  result = v5[17]; /*0x5747b9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x5747d3*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x5747dc*/
    LOWORD(a2) = *(_WORD *)a2; /*0x5747e0*/
    HIWORD(a2) = v7 - 1; /*0x5747eb*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574803*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57480e*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x574846*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57484a*/
      HIWORD(a2) = v10; /*0x57484f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57486b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x574876*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57488b*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57488f*/
        HIWORD(a2) = v12 - 1; /*0x57489a*/
        return CellClass::ApplyCliffMod2(this, &a2); /*0x5748aa*/
      }
      else
      {
        return CellClass::ApplyCliffMod2(this, (_DWORD *)v2); /*0x57487b*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x574817*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574819*/
      HIWORD(a2) = v9; /*0x57481e*/
      return CellClass::ApplyCliffMod2(this, &a2); /*0x574832*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x5748ce*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x5748db*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x5748dd*/
    LOWORD(a2) = v13; /*0x5748e2*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x5748fe*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x574909*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x574941*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574945*/
      LOWORD(a2) = v16; /*0x57494a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574966*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x574971*/
      {
        a2 = 1; /*0x57498f*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x5749a8*/
        return CellClass::ApplyCliffMod(this, &v18); /*0x5749af*/
      }
      else
      {
        return CellClass::ApplyCliffMod(this, (_DWORD *)v2); /*0x574976*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x574912*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574914*/
      LOWORD(a2) = v15; /*0x574919*/
      return CellClass::ApplyCliffMod(this, &a2); /*0x57492d*/
    }
  }
  return result; /*0x574837*/
}



// ==== 0x005749C0  CellClass::ApplyTerrainModTile  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTerrainModTile(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x5749c4*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x5749d5*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5749eb*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5749ef*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x5749f4*/
  }
  result = v5[17]; /*0x5749f9*/
  if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 ) /*0x574a1d*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x574a26*/
    LOWORD(a2) = *(_WORD *)a2; /*0x574a2a*/
    HIWORD(a2) = v7 - 1; /*0x574a35*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574a4d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x574a5c*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x574a94*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574a98*/
      HIWORD(a2) = v10; /*0x574a9d*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574ab9*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x574ac8*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x574add*/
        LOWORD(a2) = *(_WORD *)v2; /*0x574ae1*/
        HIWORD(a2) = v12 - 1; /*0x574aec*/
        return CellClass::ApplyTerrainMod2(this, &a2); /*0x574afc*/
      }
      else
      {
        return CellClass::ApplyTerrainMod2(this, (_DWORD *)v2); /*0x574acd*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x574a65*/
      LOWORD(a2) = *(_WORD *)v2; /*0x574a67*/
      HIWORD(a2) = v9; /*0x574a6c*/
      return CellClass::ApplyTerrainMod2(this, &a2); /*0x574a80*/
    }
  }
  else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 ) /*0x574b2a*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x574b37*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x574b39*/
    LOWORD(a2) = v13; /*0x574b3e*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574b5a*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x574b69*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x574ba1*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574ba5*/
      LOWORD(a2) = v16; /*0x574baa*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x574bc6*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x574bd5*/
      {
        a2 = 1; /*0x574bf3*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x574c0c*/
        return CellClass::ApplyTerrainMod(this, &v18); /*0x574c13*/
      }
      else
      {
        return CellClass::ApplyTerrainMod(this, (_DWORD *)v2); /*0x574bda*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x574b72*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x574b74*/
      LOWORD(a2) = v15; /*0x574b79*/
      return CellClass::ApplyTerrainMod(this, &a2); /*0x574b8d*/
    }
  }
  return result; /*0x574a85*/
}



// ==== 0x00574C20  MapClass::ApplyTerrainDamage  this=MapClass  sig=csp ====
void __thiscall MapClass::ApplyTerrainDamage(MapClass *this, __int16 *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // esi
  __int16 *v5; // ebx
  __int16 v6; // cx
  int v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  int *v10; // eax
  int *v11; // edi
  int v12; // eax
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // si
  __int16 *v16; // ecx
  int v17; // eax
  bool v18; // sf
  int v19; // eax
  int *v20; // eax
  __int16 v21; // bp
  __int16 v22; // bx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  __int16 v26; // dx
  unsigned int v27; // eax
  int *v28; // eax
  bool v29; // cc
  int v30; // eax
  __int16 *v31; // eax
  int v32; // ebx
  __int16 v33; // si
  int v34; // ecx
  int v35; // ecx
  int *v36; // ecx
  int v37; // eax
  __int16 v38; // cx
  int v39; // edi
  __int16 *v40; // edx
  int occupationFlags; // ecx
  int altOccupationFlags; // ecx
  unsigned int v43; // eax
  int *v44; // eax
  int *v45; // edx
  int v46; // eax
  __int16 v47; // cx
  int v48; // ebp
  int i; // esi
  __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // eax
  int *v53; // eax
  int *v54; // ebx
  MapClass *v55; // esi
  int v56; // eax
  void *MapClass_field_0x128; // eax
  int v58; // esi
  int v59; // ebp
  __int16 v60; // ax
  int v61; // esi
  __int16 v63[2]; // [esp+14h] [ebp-30h] BYREF
  int v64; // [esp+18h] [ebp-2Ch]
  int v65; // [esp+1Ch] [ebp-28h]
  int v66; // [esp+20h] [ebp-24h]
  int v67; // [esp+24h] [ebp-20h]
  __int16 v68[2]; // [esp+28h] [ebp-1Ch] BYREF
  VectorClass v69; // [esp+2Ch] [ebp-18h] BYREF
  int v70; // [esp+3Ch] [ebp-8h]
  int v71; // [esp+40h] [ebp-4h]

  v2 = (CellClass *)this; /*0x574c26*/
  v3 = -2; /*0x574c2d*/
  while ( 2 ) /*0x574c32*/
  {
    v4 = -2; /*0x574c32*/
    do /*0x574c7a*/
    {
      v5 = a2; /*0x574c37*/
      v6 = a2[1]; /*0x574c3e*/
      LOWORD(v64) = v3 + *a2; /*0x574c48*/
      HIWORD(v64) = v4 + v6; /*0x574c4d*/
      *(_DWORD *)v68 = v64; /*0x574c60*/
      v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v68) + 17); /*0x574c69*/
      if ( v7 >= 74 && v7 <= 101 ) /*0x574c74*/
      {
        v8 = v4 + v5[1]; /*0x574c8e*/
        LOWORD(a2) = v3 + *v5; /*0x574c91*/
        HIWORD(a2) = v8; /*0x574c9a*/
        MapClass::TransitionCliff(v2, (int)&a2); /*0x574caa*/
        return; /*0x574cb6*/
      }
      ++v4; /*0x574c76*/
    }
    while ( v4 < 3 ); /*0x574c7a*/
    if ( ++v3 < 3 ) /*0x574c80*/
      continue; /*0x574c80*/
    break;
  }
  v9 = *v5 + (v5[1] << 9); /*0x574cc3*/
  if ( v9 < 0x40000 && (v10 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x574cd9*/
  {
    v11 = v10; /*0x574cdb*/
  }
  else
  {
    v11 = &g_MissionQueueFrame.briefing[130]; /*0x574ce1*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v5; /*0x574ce6*/
  }
  v12 = v11[80]; /*0x574cec*/
  v64 = 0; /*0x574cf7*/
  if ( (v12 & 0x500) == 0 ) /*0x574cfb*/
  {
    *(_DWORD *)v68 = 0; /*0x574d01*/
    while ( 1 ) /*0x574d16*/
    {
      v13 = v64 & 7; /*0x574d16*/
      v14 = LOWORD(g_DDrawSurfaceManager.scenario[v13 + 82]) + *v5; /*0x574d21*/
      v15 = v5[1] + HIWORD(g_DDrawSurfaceManager.scenario[v13 + 82]); /*0x574d29*/
      v16 = (__int16 *)(4 * v13 + 9041544); /*0x574d2d*/
      v17 = v15 << 9; /*0x574d3a*/
      v18 = v14 + v17 < 0; /*0x574d3d*/
      v19 = v14 + v17; /*0x574d3d*/
      LOWORD(v65) = v14; /*0x574d3f*/
      HIWORD(v65) = v15; /*0x574d44*/
      if ( v18 || v19 >= 0x40000 || (v20 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v19)) == 0 ) /*0x574d5d*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574d67*/
        g_MissionQueueFrame.briefing[139] = v65; /*0x574d6c*/
      }
      else
      {
        v11 = v20; /*0x574d5f*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574d7a*/
        break; /*0x574d7a*/
      v21 = v15 + v16[1]; /*0x574d87*/
      v22 = v14 + *v16; /*0x574d8a*/
      v23 = v21 << 9; /*0x574d93*/
      v18 = v22 + v23 < 0; /*0x574d96*/
      v24 = v22 + v23; /*0x574d96*/
      LOWORD(v66) = v22; /*0x574d98*/
      HIWORD(v66) = v21; /*0x574d9d*/
      if ( v18 || v24 >= 0x40000 || (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x574db6*/
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574dc0*/
        g_MissionQueueFrame.briefing[139] = v66; /*0x574dc5*/
      }
      else
      {
        v11 = v25; /*0x574db8*/
      }
      if ( (v11[80] & 0x500) != 0 ) /*0x574dd7*/
        goto LABEL_34; /*0x574dd7*/
      v26 = *v16; /*0x574dd9*/
      HIWORD(v67) = v21 + v16[1]; /*0x574de9*/
      LOWORD(v67) = v22 + v26; /*0x574dee*/
      v27 = (__int16)(v22 + v26) + (SHIWORD(v67) << 9); /*0x574df9*/
      if ( v27 < 0x40000 && (v28 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v27)) != 0 ) /*0x574e0f*/
      {
        v11 = v28; /*0x574e11*/
      }
      else
      {
        v11 = &g_MissionQueueFrame.briefing[130]; /*0x574e19*/
        g_MissionQueueFrame.briefing[139] = v67; /*0x574e1e*/
      }
      if ( (v11[80] & 0x500) != 0 || (v29 = *(_DWORD *)v68 + 1 < 8, v64 = ((_BYTE)v64 + 1) & 7, ++*(_DWORD *)v68, !v29) ) /*0x574e43*/
      {
LABEL_34:
        v2 = (CellClass *)this; /*0x574e49*/
        break; /*0x574e49*/
      }
      v5 = a2; /*0x574d07*/
      v2 = (CellClass *)this; /*0x574d0b*/
    }
  }
  v30 = v11[80]; /*0x574e4d*/
  if ( (v30 & 0x100) != 0 || (v30 & 0x400) != 0 )
  {
    if ( (v11[80] & 0x100) != 0 )
    {
      if ( (v30 & 0x80u) == 0 ) /*0x574e6c*/
        v31 = *(__int16 **)(v11[11] + 36); /*0x574e79*/
      else
        v31 = (__int16 *)v11[9]; /*0x574e6e*/
    }
    else
    {
      v32 = v11[9]; /*0x574e86*/
      *(_DWORD *)v68 = v32; /*0x574e8d*/
      v67 = 0; /*0x574e94*/
      v66 = (v30 & 0x800) != 0 ? 4 : 2;
      while ( 1 ) /*0x574eb5*/
      {
        v33 = HIWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]) + v68[1]; /*0x574eb5*/
        LOWORD(a2) = v32 + LOWORD(g_DDrawSurfaceManager.scenario[(v66 & 7) + 82]); /*0x574ec2*/
        HIWORD(a2) = v33; /*0x574ec7*/
        LOWORD(v32) = (_WORD)a2; /*0x574ecc*/
        v34 = v33 << 9; /*0x574ed0*/
        v18 = (__int16)a2 + v34 < 0; /*0x574ed3*/
        v35 = (__int16)a2 + v34; /*0x574ed3*/
        *(_DWORD *)v68 = a2; /*0x574ed5*/
        if ( v18 || v35 >= 0x40000 || (v36 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v35)) == 0 ) /*0x574eef*/
        {
          g_MissionQueueFrame.briefing[139] = (int)a2; /*0x574ef5*/
          v36 = &g_MissionQueueFrame.briefing[130]; /*0x574efb*/
        }
        if ( (v36[80] & 0x400) == 0 ) /*0x574f0a*/
          break; /*0x574f0a*/
        if ( ++v67 >= 4 ) /*0x574f18*/
          return; /*0x574f18*/
      }
      v2 = (CellClass *)this; /*0x574f28*/
      v37 = ((_BYTE)v66 - 4) & 7; /*0x574f32*/
      v38 = HIWORD(g_DDrawSurfaceManager.scenario[v37 + 82]); /*0x574f4e*/
      LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]) /*0x574f58*/
                 + (_WORD)a2
                 + LOWORD(g_DDrawSurfaceManager.scenario[v37 + 82]);
      HIWORD(a2) = v33 + v38 + v38; /*0x574f5d*/
      v31 = a2; /*0x574f62*/
    }
    v39 = (v11[80] & 0x800) != 0 ? 6 : 0;
    *(_DWORD *)v63 = v31; /*0x574f81*/
    VectorClass::CellConstructor(&v69, 0, 0); /*0x574f85*/
    v40 = *(__int16 **)v63; /*0x574f8a*/
    occupationFlags = v2->occupationFlags; /*0x574f8e*/
    v69.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x574f99*/
    v71 = 10; /*0x574fa1*/
    v70 = 0; /*0x574fa9*/
    if ( v63[0] >= occupationFlags ) /*0x574fb1*/
    {
      do /*0x574fbd*/
      {
        if ( (__int16)v40 > occupationFlags + v2->copyFlags ) /*0x574fc4*/
          break; /*0x574fc4*/
        altOccupationFlags = v2->altOccupationFlags; /*0x574fcf*/
        if ( v63[1] < altOccupationFlags || v63[1] > altOccupationFlags + v2->shroudCounter ) /*0x574fe7*/
          break; /*0x574fe7*/
        v43 = (__int16)v40 + (v63[1] << 9); /*0x574ff6*/
        if ( *(_DWORD *)(v2->CellClass_field_13C + 4 * v43) ) /*0x574ff8*/
        {
          if ( v43 < 0x40000 && (v44 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v43)) != 0 ) /*0x575014*/
          {
            v45 = v44; /*0x575016*/
          }
          else
          {
            g_MissionQueueFrame.briefing[139] = (int)v40; /*0x57501a*/
            v45 = &g_MissionQueueFrame.briefing[130]; /*0x575020*/
          }
          if ( globalHelper_0746C0(v45[14] - g_TerrainBridgeIndex + 1, (int)v45) ) /*0x575031*/
          {
            v48 = ((_BYTE)v39 - 4) & 7; /*0x57508d*/
            a2 = *(__int16 **)v63; /*0x575090*/
            for ( i = 0; i < 3; ++i ) /*0x575094*/
            {
              if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, v63) ) /*0x57509f*/
                break; /*0x5750a6*/
            }
            while ( 1 ) /*0x5750c8*/
            {
              v50 = LOWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + (_WORD)a2; /*0x5750c8*/
              v68[1] = HIWORD(g_DDrawSurfaceManager.scenario[(((_BYTE)v39 - 4) & 7) + 82]) + HIWORD(a2); /*0x5750ce*/
              v68[0] = v50; /*0x5750d3*/
              v51 = v50; /*0x5750dc*/
              a2 = *(__int16 **)v68; /*0x5750e1*/
              v52 = v50 + (v68[1] << 9); /*0x5750e8*/
              if ( v52 < 0x40000 && (v53 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v52)) != 0 ) /*0x5750fe*/
              {
                v54 = v53; /*0x575100*/
              }
              else
              {
                g_MissionQueueFrame.briefing[139] = *(_DWORD *)v68; /*0x575104*/
                v54 = &g_MissionQueueFrame.briefing[130]; /*0x57510a*/
              }
              v55 = this; /*0x57510f*/
              v56 = *(_DWORD *)&this->__pad_10C[24]; /*0x575113*/
              if ( v51 < v56 ) /*0x57511b*/
                break; /*0x57511b*/
              if ( v51 > v56 + *(_DWORD *)this->__pad_12C ) /*0x57512b*/
                goto LABEL_79; /*0x57512b*/
              MapClass_field_0x128 = this->MapClass_field_0x128; /*0x575135*/
              if ( v68[1] < (int)MapClass_field_0x128 /*0x57514d*/
                || v68[1] > (int)((int)MapClass_field_0x128 + (unsigned int)this->MapClass_field_0x130) )
              {
                goto LABEL_79; /*0x57514d*/
              }
              v58 = v54[14] - g_TerrainBridgeIndex + 1; /*0x57515b*/
              if ( globalHelper_074600(v58, v48, (int)v54) ) /*0x575160*/
              {
                if ( v58 != -1 ) /*0x575170*/
                {
                  v59 = ((_BYTE)v48 - 4) & 7; /*0x57517a*/
                  v60 = HIWORD(g_DDrawSurfaceManager.scenario[v59 + 82]); /*0x57518c*/
                  v68[0] = LOWORD(g_DDrawSurfaceManager.scenario[v59 + 82]) + (_WORD)a2; /*0x575194*/
                  v61 = 0; /*0x57519e*/
                  v68[1] = HIWORD(a2) + v60; /*0x5751a0*/
                  a2 = *(__int16 **)v68; /*0x5751a9*/
                  do /*0x5751c3*/
                  {
                    if ( (unsigned __int8)CellClass::SetTerrainType((CellClass *)this, (__int16 *)&a2) ) /*0x5751b6*/
                      break; /*0x5751bd*/
                    ++v61; /*0x5751bf*/
                  }
                  while ( v61 < 3 ); /*0x5751c3*/
                }
LABEL_79:
                v55 = this; /*0x5751c5*/
                break; /*0x5751c5*/
              }
            }
            Terrain::CreateCrater((Terrain *)v55, (int)v63); /*0x5751c9*/
            v2 = (CellClass *)this; /*0x5751db*/
            g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x5751df*/
            break; /*0x5751df*/
          }
          LOWORD(v40) = v63[0]; /*0x57503a*/
        }
        v46 = v39 & 7; /*0x575040*/
        v47 = v63[1] + HIWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x575056*/
        LOWORD(a2) = (_WORD)v40 + LOWORD(g_DDrawSurfaceManager.scenario[v46 + 82]); /*0x57505e*/
        HIWORD(a2) = v47; /*0x575066*/
        occupationFlags = v2->occupationFlags; /*0x57506b*/
        v40 = a2; /*0x575071*/
        *(_DWORD *)v63 = a2; /*0x575077*/
      }
      while ( (__int16)a2 >= occupationFlags ); /*0x574fbd*/
    }
    Terrain::ConnectivityGraph((Terrain *)v2); /*0x5751e6*/
    v69.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x5751f1*/
    if ( v69.Items ) /*0x5751fb*/
    {
      if ( v69.IsAllocated ) /*0x575203*/
        __3_YAXPAX_Z(v69.Items); /*0x575206*/
    }
  }
}



// ==== 0x00575220  CellClass::ApplyCliffMod2  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyCliffMod2(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // cx
  int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-34h]
  int v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  __int16 v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v40[4]; // [esp+28h] [ebp-1Ch] BYREF
  int v41; // [esp+30h] [ebp-14h]
  int v42; // [esp+38h] [ebp-Ch] BYREF
  int v43; // [esp+3Ch] [ebp-8h]
  int v44; // [esp+40h] [ebp-4h]
  int v45; // [esp+48h] [ebp+4h]

  v2 = this; /*0x57522d*/
  v3 = 0; /*0x57522f*/
  *(_DWORD *)v40 = *a2; /*0x575235*/
  v4 = *(_DWORD *)v40; /*0x575239*/
  v37 = 1; /*0x57523b*/
  v5 = 0; /*0x575243*/
  do /*0x575265*/
  {
    --v40[0]; /*0x575245*/
    ++v3; /*0x575254*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x57525a*/
  }
  while ( v6 >= 74 && v6 <= 101 ); /*0x575265*/
  *(_DWORD *)v40 = v4; /*0x575267*/
  do /*0x57528b*/
  {
    ++v40[0]; /*0x57526b*/
    ++v5; /*0x57527a*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x575280*/
  }
  while ( v7 >= 74 && v7 <= 101 ); /*0x57528b*/
  if ( v5 < v3 ) /*0x57528f*/
    v37 = -1; /*0x575291*/
  v40[1] = HIWORD(v4); /*0x57529b*/
  v8 = v3 - v5; /*0x57529f*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5752a1*/
  v10 = HIWORD(v4); /*0x5752aa*/
  v45 = 4; /*0x5752b3*/
  v11 = v4 - v8 / 2; /*0x5752bb*/
  v40[0] = v11; /*0x5752be*/
  v12 = *(_DWORD *)v40; /*0x5752c3*/
  do /*0x57551c*/
  {
    if ( v45 <= 0 ) /*0x5752cd*/
      break; /*0x5752cd*/
    v13 = v11 + (v10 << 9); /*0x5752dc*/
    if ( v13 < 0x40000 ) /*0x5752de*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x5752e7*/
      if ( v14 ) /*0x5752ec*/
        goto LABEL_36; /*0x5752ec*/
    }
    g_MissionQueueFrame.briefing[139] = v12; /*0x5752ee*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x5752f4*/
    if ( v14[17] != 100 ) /*0x5752fd*/
    {
      LOWORD(v34) = v11; /*0x575307*/
      v36 = 3; /*0x57530d*/
      HIWORD(v34) = v40[1] - 1; /*0x575315*/
      v15 = v34; /*0x57531a*/
      v41 = v34; /*0x57531e*/
      while ( 1 ) /*0x57532a*/
      {
        v16 = HIWORD(v41); /*0x57532a*/
        v17 = (__int16)v15 + (SHIWORD(v41) << 9); /*0x575337*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575347*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x575349*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x57534f*/
        }
        v19 = v18[9]; /*0x575354*/
        v44 = 0; /*0x575357*/
        v42 = ((__int16)v19 << 8) + 128; /*0x575382*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x575386*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x57539f*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5753a9*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x5753cc*/
        v42 = v21; /*0x5753e4*/
        v38 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5753ed*/
        LOWORD(v22) = Math::RoundToInt(((double)v38 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x57540b*/
        v43 = v22; /*0x575415*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x57541e*/
        if ( v23 ) /*0x575425*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575442*/
          v25 = Random::Range( /*0x575459*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575481*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v35) = v15; /*0x57548b*/
        HIWORD(v35) = v16 + 1; /*0x575490*/
        v15 = v35; /*0x575495*/
        v26 = v36 == 1; /*0x575499*/
        v41 = v35; /*0x57549a*/
        --v36; /*0x57549e*/
        if ( v26 ) /*0x5754a2*/
          break; /*0x5754a2*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575324*/
      }
      v2 = this; /*0x5754a8*/
    }
    for ( i = 0; i < 3; ++i ) /*0x5754ac*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable2((int)v40) ) /*0x5754b5*/
        break; /*0x5754bc*/
    }
    v11 = v37 + v40[0]; /*0x5754cd*/
    v10 = v40[1]; /*0x5754d2*/
    --v45; /*0x5754d8*/
    v40[0] = v11; /*0x5754dc*/
    v12 = *(_DWORD *)v40; /*0x5754e1*/
    v28 = v40[1] << 9; /*0x5754eb*/
    v29 = v11 + v28 < 0; /*0x5754ee*/
    v30 = v11 + v28; /*0x5754ee*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5754f0*/
    if ( !v29 && v30 < 0x40000 ) /*0x5754fd*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x5754ff*/
      if ( v31 ) /*0x575504*/
        goto LABEL_36; /*0x575504*/
    }
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v40; /*0x575506*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x57550c*/
LABEL_36:
    v32 = v31[17]; /*0x575511*/
    if ( v32 < 74 ) /*0x575517*/
      break; /*0x575517*/
  }
  while ( v32 <= 101 ); /*0x57551c*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575524*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575532*/
  return result; /*0x57552f*/
}



// ==== 0x00575540  CellClass::ApplyCliffMod  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyCliffMod(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  __int16 v10; // dx
  __int16 v11; // cx
  _DWORD *v12; // esi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+1Ch] [ebp-20h]
  __int16 v38; // [esp+1Eh] [ebp-1Eh]
  int v39; // [esp+20h] [ebp-1Ch]
  __int16 v40; // [esp+28h] [ebp-14h]
  int v42; // [esp+30h] [ebp-Ch] BYREF
  int v43; // [esp+34h] [ebp-8h]
  int v44; // [esp+38h] [ebp-4h]

  v2 = this; /*0x57554d*/
  v3 = (_DWORD *)*a2; /*0x57554f*/
  v4 = 0; /*0x575551*/
  a2 = (_DWORD *)*a2; /*0x575557*/
  v40 = 1; /*0x57555f*/
  v5 = 0; /*0x575567*/
  do /*0x575589*/
  {
    --HIWORD(a2); /*0x575569*/
    ++v4; /*0x575578*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57557e*/
  }
  while ( v6 >= 74 && v6 <= 101 ); /*0x575589*/
  a2 = v3; /*0x57558b*/
  do /*0x5755af*/
  {
    ++HIWORD(a2); /*0x57558f*/
    ++v5; /*0x57559e*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x5755a4*/
  }
  while ( v7 >= 74 && v7 <= 101 ); /*0x5755af*/
  if ( v5 < v4 ) /*0x5755b3*/
    v40 = -1; /*0x5755b5*/
  v8 = v4 - v5; /*0x5755c3*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5755c5*/
  LOWORD(a2) = (_WORD)v3; /*0x5755ce*/
  v10 = (__int16)v3; /*0x5755d2*/
  v34 = 4; /*0x5755d7*/
  v11 = HIWORD(v3) - v8 / 2; /*0x5755e1*/
  HIWORD(a2) = v11; /*0x5755e3*/
  v12 = a2; /*0x5755e8*/
  do /*0x57583e*/
  {
    if ( v34 <= 0 ) /*0x5755f2*/
      break; /*0x5755f2*/
    v13 = v10 + (v11 << 9); /*0x575601*/
    if ( v13 < 0x40000 ) /*0x575603*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x57560c*/
      if ( v14 ) /*0x575611*/
        goto LABEL_36; /*0x575611*/
    }
    g_MissionQueueFrame.briefing[139] = (int)v12; /*0x575613*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x575619*/
    if ( v14[17] != 101 ) /*0x575622*/
    {
      HIWORD(v35) = v11; /*0x575629*/
      LOWORD(v35) = (_WORD)v12 - 1; /*0x57562e*/
      v15 = v35; /*0x575633*/
      v38 = v11; /*0x575637*/
      v39 = 3; /*0x57563b*/
      while ( 1 ) /*0x57564b*/
      {
        v16 = v38; /*0x57564b*/
        v17 = (__int16)v15 + (v38 << 9); /*0x575659*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575669*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x57566b*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x575671*/
        }
        v19 = v18[9]; /*0x575676*/
        v44 = 0; /*0x575679*/
        v42 = ((__int16)v19 << 8) + 128; /*0x5756a4*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x5756a8*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x5756c1*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x5756cb*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x5756ee*/
        v42 = v21; /*0x575706*/
        v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x57570f*/
        LOWORD(v22) = Math::RoundToInt(((double)v37 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x57572d*/
        v43 = v22; /*0x575737*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575740*/
        if ( v23 ) /*0x575747*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575764*/
          v25 = Random::Range( /*0x57577b*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x5757a3*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v36) = v15 + 1; /*0x5757ad*/
        HIWORD(v36) = v16; /*0x5757b2*/
        v15 = v36; /*0x5757b7*/
        v26 = v39 == 1; /*0x5757bb*/
        v38 = v16; /*0x5757bc*/
        --v39; /*0x5757c0*/
        if ( v26 ) /*0x5757c4*/
          break; /*0x5757c4*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575645*/
      }
      v2 = this; /*0x5757ca*/
    }
    for ( i = 0; i < 3; ++i ) /*0x5757ce*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable2((int)&a2) ) /*0x5757d7*/
        break; /*0x5757de*/
    }
    v11 = v40 + HIWORD(a2); /*0x5757ef*/
    v10 = (__int16)a2; /*0x5757f4*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5757fa*/
    --v34; /*0x575800*/
    HIWORD(a2) = v11; /*0x575804*/
    v28 = v11 << 9; /*0x57580f*/
    v29 = (__int16)a2 + v28 < 0; /*0x575812*/
    v30 = (__int16)a2 + v28; /*0x575812*/
    v12 = a2; /*0x575814*/
    if ( !v29 && v30 < 0x40000 ) /*0x57581f*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575821*/
      if ( v31 ) /*0x575826*/
        goto LABEL_36; /*0x575826*/
    }
    g_MissionQueueFrame.briefing[139] = (int)a2; /*0x575828*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x57582e*/
LABEL_36:
    v32 = v31[17]; /*0x575833*/
    if ( v32 < 74 ) /*0x575839*/
      break; /*0x575839*/
  }
  while ( v32 <= 101 ); /*0x57583e*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575846*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575854*/
  return result; /*0x575851*/
}



// ==== 0x00575870  CellClass::ApplyTerrainMod2  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTerrainMod2(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int16 v10; // dx
  __int16 v11; // cx
  int v12; // edi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-34h]
  int v35; // [esp+14h] [ebp-30h]
  int v36; // [esp+18h] [ebp-2Ch]
  __int16 v37; // [esp+1Ch] [ebp-28h]
  int v38; // [esp+20h] [ebp-24h]
  __int16 v40[4]; // [esp+28h] [ebp-1Ch] BYREF
  int v41; // [esp+30h] [ebp-14h]
  int v42; // [esp+38h] [ebp-Ch] BYREF
  int v43; // [esp+3Ch] [ebp-8h]
  int v44; // [esp+40h] [ebp-4h]
  int v45; // [esp+48h] [ebp+4h]

  v2 = this; /*0x57587d*/
  v3 = 0; /*0x57587f*/
  *(_DWORD *)v40 = *a2; /*0x575885*/
  v4 = *(_DWORD *)v40; /*0x575889*/
  v37 = 1; /*0x57588b*/
  v5 = 0; /*0x575893*/
  do /*0x5758b9*/
  {
    --v40[0]; /*0x575895*/
    ++v3; /*0x5758a4*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x5758aa*/
  }
  while ( v6 >= 205 && v6 <= 232 ); /*0x5758b9*/
  *(_DWORD *)v40 = v4; /*0x5758bb*/
  do /*0x5758e3*/
  {
    ++v40[0]; /*0x5758bf*/
    ++v5; /*0x5758ce*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v40) + 17); /*0x5758d4*/
  }
  while ( v7 >= 205 && v7 <= 232 ); /*0x5758e3*/
  if ( v5 < v3 ) /*0x5758e7*/
    v37 = -1; /*0x5758e9*/
  v40[1] = HIWORD(v4); /*0x5758f3*/
  v8 = v3 - v5; /*0x5758f7*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x5758f9*/
  v10 = HIWORD(v4); /*0x575902*/
  v45 = 4; /*0x57590b*/
  v11 = v4 - v8 / 2; /*0x575913*/
  v40[0] = v11; /*0x575916*/
  v12 = *(_DWORD *)v40; /*0x57591b*/
  do /*0x575b7b*/
  {
    if ( v45 <= 0 ) /*0x575925*/
      break; /*0x575925*/
    v13 = v11 + (v10 << 9); /*0x575934*/
    if ( v13 < 0x40000 ) /*0x575936*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x57593f*/
      if ( v14 ) /*0x575944*/
        goto LABEL_36; /*0x575944*/
    }
    g_MissionQueueFrame.briefing[139] = v12; /*0x575946*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x57594c*/
    if ( v14[17] != 231 ) /*0x575958*/
    {
      LOWORD(v34) = v11; /*0x575962*/
      v36 = 3; /*0x575968*/
      HIWORD(v34) = v40[1] - 1; /*0x575970*/
      v15 = v34; /*0x575975*/
      v41 = v34; /*0x575979*/
      while ( 1 ) /*0x575985*/
      {
        v16 = HIWORD(v41); /*0x575985*/
        v17 = (__int16)v15 + (SHIWORD(v41) << 9); /*0x575992*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x5759a2*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x5759a4*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x5759aa*/
        }
        v19 = v18[9]; /*0x5759af*/
        v44 = 0; /*0x5759b2*/
        v42 = ((__int16)v19 << 8) + 128; /*0x5759dd*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x5759e1*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x5759fa*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575a04*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x575a27*/
        v42 = v21; /*0x575a3f*/
        v38 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575a48*/
        LOWORD(v22) = Math::RoundToInt(((double)v38 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x575a66*/
        v43 = v22; /*0x575a70*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575a79*/
        if ( v23 ) /*0x575a80*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575a9d*/
          v25 = Random::Range( /*0x575ab4*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575adc*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v35) = v15; /*0x575ae6*/
        HIWORD(v35) = v16 + 1; /*0x575aeb*/
        v15 = v35; /*0x575af0*/
        v26 = v36 == 1; /*0x575af4*/
        v41 = v35; /*0x575af5*/
        --v36; /*0x575af9*/
        if ( v26 ) /*0x575afd*/
          break; /*0x575afd*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x57597f*/
      }
      v2 = this; /*0x575b03*/
    }
    for ( i = 0; i < 3; ++i ) /*0x575b07*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable((int)v40) ) /*0x575b10*/
        break; /*0x575b17*/
    }
    v11 = v37 + v40[0]; /*0x575b28*/
    v10 = v40[1]; /*0x575b2d*/
    --v45; /*0x575b33*/
    v40[0] = v11; /*0x575b37*/
    v12 = *(_DWORD *)v40; /*0x575b3c*/
    v28 = v40[1] << 9; /*0x575b46*/
    v29 = v11 + v28 < 0; /*0x575b49*/
    v30 = v11 + v28; /*0x575b49*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575b4b*/
    if ( !v29 && v30 < 0x40000 ) /*0x575b58*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575b5a*/
      if ( v31 ) /*0x575b5f*/
        goto LABEL_36; /*0x575b5f*/
    }
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v40; /*0x575b61*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x575b67*/
LABEL_36:
    v32 = v31[17]; /*0x575b6c*/
    if ( v32 < 205 ) /*0x575b74*/
      break; /*0x575b74*/
  }
  while ( v32 <= 232 ); /*0x575b7b*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575b83*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575b91*/
  return result; /*0x575b8e*/
}



// ==== 0x00575BA0  CellClass::ApplyTerrainMod  this=TOP  sig=csp ====
int __thiscall CellClass::ApplyTerrainMod(CellClass *this, _DWORD *a2)
{
  CellClass *v2; // ebp
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  __int16 v10; // dx
  __int16 v11; // cx
  _DWORD *v12; // esi
  unsigned int v13; // eax
  int *v14; // eax
  int v15; // ebx
  __int16 v16; // bp
  unsigned int v17; // eax
  int *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  AnimClass *v23; // esi
  void *v24; // edi
  int v25; // eax
  bool v26; // zf
  int i; // esi
  int v28; // eax
  bool v29; // sf
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int result; // eax
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+1Ch] [ebp-20h]
  __int16 v38; // [esp+1Eh] [ebp-1Eh]
  int v39; // [esp+20h] [ebp-1Ch]
  __int16 v40; // [esp+28h] [ebp-14h]
  int v42; // [esp+30h] [ebp-Ch] BYREF
  int v43; // [esp+34h] [ebp-8h]
  int v44; // [esp+38h] [ebp-4h]

  v2 = this; /*0x575bad*/
  v3 = (_DWORD *)*a2; /*0x575baf*/
  v4 = 0; /*0x575bb1*/
  a2 = (_DWORD *)*a2; /*0x575bb7*/
  v40 = 1; /*0x575bbf*/
  v5 = 0; /*0x575bc7*/
  do /*0x575bed*/
  {
    --HIWORD(a2); /*0x575bc9*/
    ++v4; /*0x575bd8*/
    v6 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x575bde*/
  }
  while ( v6 >= 205 && v6 <= 232 ); /*0x575bed*/
  a2 = v3; /*0x575bef*/
  do /*0x575c17*/
  {
    ++HIWORD(a2); /*0x575bf3*/
    ++v5; /*0x575c02*/
    v7 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x575c08*/
  }
  while ( v7 >= 205 && v7 <= 232 ); /*0x575c17*/
  if ( v5 < v4 ) /*0x575c1b*/
    v40 = -1; /*0x575c1d*/
  v8 = v4 - v5; /*0x575c2b*/
  v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575c2d*/
  LOWORD(a2) = (_WORD)v3; /*0x575c36*/
  v10 = (__int16)v3; /*0x575c3a*/
  v34 = 4; /*0x575c3f*/
  v11 = HIWORD(v3) - v8 / 2; /*0x575c49*/
  HIWORD(a2) = v11; /*0x575c4b*/
  v12 = a2; /*0x575c50*/
  do /*0x575ead*/
  {
    if ( v34 <= 0 ) /*0x575c5a*/
      break; /*0x575c5a*/
    v13 = v10 + (v11 << 9); /*0x575c69*/
    if ( v13 < 0x40000 ) /*0x575c6b*/
    {
      v14 = *(int **)(v9 + 4 * v13); /*0x575c74*/
      if ( v14 ) /*0x575c79*/
        goto LABEL_36; /*0x575c79*/
    }
    g_MissionQueueFrame.briefing[139] = (int)v12; /*0x575c7b*/
    v14 = &g_MissionQueueFrame.briefing[130]; /*0x575c81*/
    if ( v14[17] != 232 ) /*0x575c8d*/
    {
      HIWORD(v35) = v11; /*0x575c94*/
      LOWORD(v35) = (_WORD)v12 - 1; /*0x575c99*/
      v15 = v35; /*0x575c9e*/
      v38 = v11; /*0x575ca2*/
      v39 = 3; /*0x575ca6*/
      while ( 1 ) /*0x575cb6*/
      {
        v16 = v38; /*0x575cb6*/
        v17 = (__int16)v15 + (v38 << 9); /*0x575cc4*/
        if ( v17 >= 0x40000 || (v18 = *(int **)(v9 + 4 * v17)) == 0 ) /*0x575cd4*/
        {
          g_MissionQueueFrame.briefing[139] = v15; /*0x575cd6*/
          v18 = &g_MissionQueueFrame.briefing[130]; /*0x575cdc*/
        }
        v19 = v18[9]; /*0x575ce1*/
        v44 = 0; /*0x575ce4*/
        v42 = ((__int16)v19 << 8) + 128; /*0x575d0f*/
        v43 = (SHIWORD(v19) << 8) + 128; /*0x575d13*/
        v44 = g_MissionQueueFrame.briefing[272] * *((char *)v18 + 283); /*0x575d2c*/
        v20 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575d36*/
        LOWORD(v21) = Math::RoundToInt(((double)v20 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v42); /*0x575d59*/
        v42 = v21; /*0x575d71*/
        v37 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x575d7a*/
        LOWORD(v22) = Math::RoundToInt(((double)v37 * 4.656612877414201e-10 - 0.5) * 50.0 + (double)v43); /*0x575d98*/
        v43 = v22; /*0x575da2*/
        v23 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x575dab*/
        if ( v23 ) /*0x575db2*/
        {
          v24 = (void *)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 5); /*0x575dcf*/
          v25 = Random::Range( /*0x575de6*/
                  (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                  0,
                  *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 360) - 1);
          AnimClass::ctor( /*0x575e0e*/
            v23,
            *(void **)(*(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 348) + 4 * v25),
            &v42,
            v24,
            1,
            (void *)0x600,
            0,
            0);
        }
        LOWORD(v36) = v15 + 1; /*0x575e18*/
        HIWORD(v36) = v16; /*0x575e1d*/
        v15 = v36; /*0x575e22*/
        v26 = v39 == 1; /*0x575e26*/
        v38 = v16; /*0x575e27*/
        --v39; /*0x575e2b*/
        if ( v26 ) /*0x575e2f*/
          break; /*0x575e2f*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575cb0*/
      }
      v2 = this; /*0x575e35*/
    }
    for ( i = 0; i < 3; ++i ) /*0x575e39*/
    {
      if ( (unsigned __int8)CellClass::CheckTilePassable((int)&a2) ) /*0x575e42*/
        break; /*0x575e49*/
    }
    v11 = v40 + HIWORD(a2); /*0x575e5a*/
    v10 = (__int16)a2; /*0x575e5f*/
    v9 = *(_DWORD *)&stru_87F5F0.__pad_58[732]; /*0x575e65*/
    --v34; /*0x575e6b*/
    HIWORD(a2) = v11; /*0x575e6f*/
    v28 = v11 << 9; /*0x575e7a*/
    v29 = (__int16)a2 + v28 < 0; /*0x575e7d*/
    v30 = (__int16)a2 + v28; /*0x575e7d*/
    v12 = a2; /*0x575e7f*/
    if ( !v29 && v30 < 0x40000 ) /*0x575e8a*/
    {
      v31 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v30); /*0x575e8c*/
      if ( v31 ) /*0x575e91*/
        goto LABEL_36; /*0x575e91*/
    }
    g_MissionQueueFrame.briefing[139] = (int)a2; /*0x575e93*/
    v31 = &g_MissionQueueFrame.briefing[130]; /*0x575e99*/
LABEL_36:
    v32 = v31[17]; /*0x575e9e*/
    if ( v32 < 205 ) /*0x575ea6*/
      break; /*0x575ea6*/
  }
  while ( v32 <= 232 ); /*0x575ead*/
  result = Terrain::ConnectivityGraph((Terrain *)v2); /*0x575eb5*/
  g_TacticalClass_Instance[863].__tail_0[0] = 1; /*0x575ec3*/
  return result; /*0x575ec0*/
}



// ==== 0x00575EE0  UpdateTeamsInAreaMap  this=-  sig=csp ====
char __stdcall sub_575EE0(void *a1, int a2)
{
  unsigned __int16 v2; // bp
  char v3; // bl
  void *v4; // eax
  unsigned __int16 v5; // di
  unsigned int v6; // eax
  void *v7; // eax
  void **v8; // ecx
  unsigned int v9; // eax
  void *v10; // eax
  void **v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  void *v14; // eax
  void *v15; // esi
  void **v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  void **v19; // ecx
  int v20; // ecx
  unsigned int v21; // eax
  void *v22; // eax
  void **v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  void *v26; // eax
  void *v27; // esi
  void **v28; // ecx
  void **v29; // ecx
  int v31; // [esp+14h] [ebp-18h] BYREF
  int v32; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+1Ch] [ebp-10h] BYREF
  int v34; // [esp+20h] [ebp-Ch] BYREF
  int v35; // [esp+24h] [ebp-8h] BYREF
  int v36; // [esp+28h] [ebp-4h] BYREF
  int v37; // [esp+30h] [ebp+4h]

  v2 = HIWORD(a2); /*0x575eea*/
  v3 = 0; /*0x575eef*/
  if ( HIWORD(a1) == HIWORD(a2) ) /*0x575ef6*/
  {
    v4 = a1; /*0x575ef8*/
    v5 = a2; /*0x575efc*/
    v3 = 1; /*0x575f03*/
    if ( (__int16)a1 > (__int16)a2 ) /*0x575f05*/
    {
      v4 = (void *)a2; /*0x575f09*/
      v2 = HIWORD(a1); /*0x575f11*/
      v5 = (unsigned __int16)a1; /*0x575f11*/
    }
  }
  else if ( SHIWORD(a1) <= SHIWORD(a2) ) /*0x575f18*/
  {
    v5 = a2; /*0x575f2f*/
    v4 = a1; /*0x575f33*/
  }
  else
  {
    v4 = (void *)a2; /*0x575f1e*/
    v5 = (unsigned __int16)a1; /*0x575f22*/
    a2 = (int)a1; /*0x575f24*/
    v2 = HIWORD(a1); /*0x575f28*/
  }
  a2 = (int)v4; /*0x575f37*/
  while ( a2 != __PAIR32__(v2, v5) ) /*0x575f43*/
  {
    v6 = (__int16)a2 + (SHIWORD(a2) << 9); /*0x575f5b*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x575f71*/
    {
      dword_ABDC74 = a2; /*0x575f77*/
      v7 = &unk_ABDC50; /*0x575f7c*/
    }
    v8 = (void **)*((_DWORD *)v7 + 15); /*0x575f81*/
    if ( v8 ) /*0x575f86*/
      TeamClass::Update_0(v8, 31, 0, dword_ABD480, 0, 0); /*0x575f97*/
    if ( v3 ) /*0x575f9e*/
    {
      v9 = (__int16)(dword_89F698 + a2) + ((__int16)(HIWORD(a2) + HIWORD(dword_89F698)) << 9); /*0x575fcd*/
      if ( v9 >= 0x40000 || (v10 = *(void **)(dword_87F924 + 4 * v9)) == 0 ) /*0x575fe3*/
      {
        v10 = &unk_ABDC50; /*0x575fe9*/
        LOWORD(v37) = dword_89F698 + a2; /*0x575fba*/
        HIWORD(v37) = HIWORD(a2) + HIWORD(dword_89F698); /*0x575fc2*/
        dword_ABDC74 = v37; /*0x575fee*/
      }
      v11 = (void **)*((_DWORD *)v10 + 15); /*0x575ff4*/
      if ( v11 ) /*0x575ff9*/
        TeamClass::Update_0(v11, 31, 0, dword_ABD480, 0, 0); /*0x576009*/
      v12 = *CellStruct::Add(&a2, &v32, dword_89F688); /*0x576021*/
      v13 = (__int16)v12 + (SHIWORD(v12) << 9); /*0x576032*/
      if ( v13 < 0x40000 && (v14 = *(void **)(dword_87F924 + 4 * v13)) != 0 ) /*0x576048*/
      {
        v15 = v14; /*0x57604a*/
      }
      else
      {
        dword_ABDC74 = v12; /*0x57604e*/
        v15 = &unk_ABDC50; /*0x576054*/
      }
      v16 = (void **)*((_DWORD *)v15 + 15); /*0x576059*/
      if ( v16 ) /*0x57605e*/
        TeamClass::Update_0(v16, 31, 0, dword_ABD480, 0, 0); /*0x57606e*/
      v17 = *CellStruct::Add((_WORD *)v15 + 18, &v33, dword_89F688); /*0x576085*/
      v18 = (__int16)v17 + (SHIWORD(v17) << 9); /*0x576096*/
      if ( v18 >= 0x40000 || (v4 = *(void **)(dword_87F924 + 4 * v18)) == 0 ) /*0x5760ac*/
      {
        dword_ABDC74 = v17; /*0x5760ae*/
        v4 = &unk_ABDC50; /*0x5760b4*/
      }
      v19 = (void **)*((_DWORD *)v4 + 15); /*0x5760b9*/
      if ( v19 ) /*0x5760be*/
        LOBYTE(v4) = TeamClass::Update_0(v19, 31, 0, dword_ABD480, 0, 0); /*0x5760ce*/
      LOWORD(a2) = a2 + 1; /*0x5760d3*/
    }
    else
    {
      v20 = *CellStruct::Add(&a2, &v34, &dword_89F690); /*0x5760f0*/
      v21 = (__int16)v20 + (SHIWORD(v20) << 9); /*0x576101*/
      if ( v21 >= 0x40000 || (v22 = *(void **)(dword_87F924 + 4 * v21)) == 0 ) /*0x576117*/
      {
        dword_ABDC74 = v20; /*0x576119*/
        v22 = &unk_ABDC50; /*0x57611f*/
      }
      v23 = (void **)*((_DWORD *)v22 + 15); /*0x576124*/
      if ( v23 ) /*0x576129*/
        TeamClass::Update_0(v23, 31, 0, dword_ABD480, 0, 0); /*0x576139*/
      v24 = *CellStruct::Add(&a2, &v35, &dword_89F6A0); /*0x576151*/
      v25 = (__int16)v24 + (SHIWORD(v24) << 9); /*0x576162*/
      if ( v25 < 0x40000 && (v26 = *(void **)(dword_87F924 + 4 * v25)) != 0 ) /*0x576178*/
      {
        v27 = v26; /*0x57617a*/
      }
      else
      {
        dword_ABDC74 = v24; /*0x57617e*/
        v27 = &unk_ABDC50; /*0x576184*/
      }
      v28 = (void **)*((_DWORD *)v27 + 15); /*0x576189*/
      if ( v28 ) /*0x57618e*/
        TeamClass::Update_0(v28, 31, 0, dword_ABD480, 0, 0); /*0x57619e*/
      v31 = *CellStruct::Add((_WORD *)v27 + 18, &v36, &dword_89F6A0); /*0x5761c1*/
      v4 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v31); /*0x5761c5*/
      v29 = (void **)*((_DWORD *)v4 + 15); /*0x5761ca*/
      if ( v29 ) /*0x5761cf*/
        LOBYTE(v4) = TeamClass::Update_0(v29, 31, 0, dword_ABD480, 0, 0); /*0x5761e0*/
      ++HIWORD(a2); /*0x5761e5*/
    }
  }
  return (char)v4; /*0x5761ef*/
}



// ==== 0x00576200  CellClass::RecursiveCraterUpdate  this=CellClass  sig=csp ====
int __thiscall CellClass::RecursiveCraterUpdate(CellClass *this, __int16 *a2, int a3, int *a4)
{
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // ecx
  int v7; // esi
  __int16 v8; // di
  _WORD *v9; // esi
  __int16 v10; // di
  __int16 v11; // bx
  __int16 v12; // di
  int v13; // eax
  bool v14; // sf
  int v15; // eax
  int *v16; // eax
  int result; // eax
  unsigned int v18; // eax
  int *v19; // eax
  int *v20; // esi
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // edi
  int v26; // edi
  int *v27; // ebp
  signed int v28; // ecx
  signed int v29; // eax
  int v30; // edx
  int v31; // esi
  int v32; // ebp
  int v33; // ebp
  int v34; // ebx
  bool v35; // bl
  int v36; // edi
  char v37; // dl
  void *v38; // ebp
  int v39; // ecx
  unsigned int v40; // eax
  int *v41; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  int *v47; // eax
  int *v48; // esi
  int *v49; // [esp+4h] [ebp-48h]
  int v50; // [esp+4h] [ebp-48h]
  int *v51; // [esp+4h] [ebp-48h]
  int v52; // [esp+8h] [ebp-44h]
  int v53; // [esp+Ch] [ebp-40h]
  void *v54; // [esp+10h] [ebp-3Ch]
  int v55; // [esp+10h] [ebp-3Ch]
  int v56; // [esp+14h] [ebp-38h] BYREF
  int v57; // [esp+18h] [ebp-34h]
  int v58; // [esp+1Ch] [ebp-30h] BYREF
  int v59; // [esp+20h] [ebp-2Ch]
  CellClass *v60; // [esp+24h] [ebp-28h]
  _WORD *v61; // [esp+28h] [ebp-24h]
  int v62; // [esp+2Ch] [ebp-20h] BYREF
  int v63; // [esp+30h] [ebp-1Ch]
  int v64; // [esp+34h] [ebp-18h]
  int v65; // [esp+38h] [ebp-14h]
  int v66; // [esp+3Ch] [ebp-10h]
  int v67; // [esp+54h] [ebp+8h]

  v60 = this; /*0x576203*/
  v4 = *a2 + (a2[1] << 9); /*0x576215*/
  if ( v4 < 0x40000 && (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57622b*/
  {
    v6 = v5; /*0x57622d*/
  }
  else
  {
    v6 = &g_MissionQueueFrame.briefing[130]; /*0x576233*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x576238*/
  }
  v7 = a3 & 7; /*0x576249*/
  v58 = v6[9]; /*0x57624d*/
  v52 = 1; /*0x576251*/
  v8 = g_DDrawSurfaceManager.scenario[v7 + 82]; /*0x576259*/
  v9 = (_WORD *)(4 * v7 + 9041544); /*0x576261*/
  v61 = v9; /*0x57626b*/
  LOWORD(v54) = v58 + v8; /*0x576273*/
  HIWORD(v54) = HIWORD(v58) + v9[1]; /*0x57627d*/
  while ( 1 ) /*0x576285*/
  {
    v10 = *v9; /*0x576285*/
    v58 = v6[9]; /*0x576288*/
    v11 = v9[1] + HIWORD(v58); /*0x576291*/
    v12 = v58 + v10; /*0x576295*/
    v13 = v11 << 9; /*0x57629e*/
    v14 = v12 + v13 < 0; /*0x5762a1*/
    v15 = v12 + v13; /*0x5762a1*/
    LOWORD(v53) = v12; /*0x5762a3*/
    HIWORD(v53) = v11; /*0x5762a8*/
    if ( v14 || v15 >= 0x40000 || (v16 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v15)) == 0 ) /*0x5762c1*/
    {
      v6 = &g_MissionQueueFrame.briefing[130]; /*0x5762cb*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x5762d0*/
    }
    else
    {
      v6 = v16; /*0x5762c3*/
    }
    result = v6[14] - g_Cell_BuildabilityLUT + 1; /*0x5762e0*/
    if ( a3 != 2 ) /*0x5762e4*/
      break; /*0x5762e4*/
    if ( result == dword_ABC1E8 && *((_BYTE *)v6 + 282) == 4 /*0x576340*/
      || result == dword_AA0E38 && *((_BYTE *)v6 + 282) == 4
      || (result == g_TerrainSoundTable2
       || result == g_TerrainSoundTable2 + 3
       || result == g_TerrainSoundTable2 + 1
       || result == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v6 + 282) == 4 )
    {
      goto LABEL_33; /*0x576340*/
    }
LABEL_32:
    result = ++v52; /*0x57639d*/
    if ( v52 >= 30 ) /*0x5763a9*/
      goto LABEL_33; /*0x5763a9*/
  }
  if ( a3 != 4 /*0x57639b*/
    || (result != dword_ABC1D0 || *((_BYTE *)v6 + 282) != 2)
    && (result != dword_AA1540 || *((_BYTE *)v6 + 282) != 2)
    && (result != g_TerrainSoundConfig
     && result != g_TerrainSoundConfig + 3
     && result != g_TerrainSoundConfig + 1
     && result != g_TerrainSoundConfig + 2
     || *((_BYTE *)v6 + 282) != 2) )
  {
    goto LABEL_32; /*0x57639b*/
  }
LABEL_33:
  if ( v52 == 30 ) /*0x5763b4*/
    goto LABEL_85; /*0x5763b4*/
  v18 = *a2 + (a2[1] << 9); /*0x5763c8*/
  if ( v18 < 0x40000 && (v19 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) != 0 ) /*0x5763de*/
  {
    v20 = v19; /*0x5763e0*/
    v49 = v19; /*0x5763e2*/
  }
  else
  {
    v49 = &g_MissionQueueFrame.briefing[130]; /*0x5763ea*/
    v20 = &g_MissionQueueFrame.briefing[130]; /*0x5763f2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5763f6*/
  }
  if ( a4 ) /*0x576401*/
  {
    v21 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x576415*/
    v22 = a2[1] << 8; /*0x57641f*/
    v62 = (*a2 << 8) + 128; /*0x57642d*/
    v63 = v22 + 128; /*0x576431*/
    v64 = v21; /*0x57643d*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v58); /*0x576449*/
    v23 = g_MissionQueueFrame.briefing[272] * *((char *)v20 + 283); /*0x576455*/
    v62 = (v12 << 8) + 128; /*0x576474*/
    v63 = (v11 << 8) + 128; /*0x576478*/
    v64 = v23; /*0x57648c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v62, &v56); /*0x576490*/
    v24 = v58; /*0x57649f*/
    if ( v58 >= v56 ) /*0x5764a1*/
      v24 = v56; /*0x5764a3*/
    v66 = v24 - 64; /*0x5764b2*/
    v25 = v59; /*0x5764b6*/
    if ( v59 >= v57 ) /*0x5764b8*/
      v25 = v57; /*0x5764ba*/
    v26 = v25 - 64; /*0x5764be*/
    v27 = a4; /*0x5764ca*/
    v28 = abs32(v58 - v56) + 128; /*0x5764d3*/
    v29 = abs32(v59 - v57) + 128; /*0x5764de*/
    if ( a4[2] <= 0 || a4[3] <= 0 ) /*0x5764f0*/
    {
      v30 = v24 - 64; /*0x576583*/
      v31 = v26; /*0x576585*/
    }
    else if ( v28 <= 0 || v29 <= 0 ) /*0x5764fc*/
    {
      v30 = *a4; /*0x576576*/
      v31 = a4[1]; /*0x576578*/
      v28 = a4[2]; /*0x57657b*/
      v29 = a4[3]; /*0x57657e*/
    }
    else
    {
      v30 = *a4; /*0x5764fe*/
      v31 = a4[1]; /*0x576501*/
      v64 = a4[2]; /*0x576507*/
      v65 = a4[3]; /*0x57650e*/
      if ( v30 > v66 ) /*0x576518*/
      {
        v32 = v30 - v66 + v64; /*0x576520*/
        v30 = v66; /*0x576522*/
        v64 = v32; /*0x576524*/
      }
      if ( v31 > v26 ) /*0x57652a*/
      {
        v33 = v31 - v26 + v65; /*0x576532*/
        v31 = v26; /*0x576534*/
        v65 = v33; /*0x576536*/
      }
      if ( v30 + v64 < v28 + v66 ) /*0x576544*/
        v64 = v28 - v30 + v66 + 1; /*0x576550*/
      v34 = v65; /*0x576554*/
      if ( v65 + v31 < v29 + v26 ) /*0x576560*/
        v34 = v29 - v31 + v26 + 1; /*0x576564*/
      v28 = v64; /*0x576568*/
      v27 = a4; /*0x57656c*/
      v29 = v34; /*0x576570*/
    }
    *v27 = v30; /*0x576587*/
    v27[1] = v31; /*0x57658a*/
    v20 = v49; /*0x57658d*/
    v27[2] = v28; /*0x576591*/
    v27[3] = v29; /*0x576594*/
  }
  v35 = 0; /*0x57659a*/
  result = v52; /*0x5765a6*/
  LOWORD(v36) = -1; /*0x5765aa*/
  v37 = 0; /*0x5765ae*/
  v56 = -1; /*0x5765b0*/
  v58 = 0; /*0x5765b6*/
  if ( v52 <= 0 ) /*0x5765be*/
  {
LABEL_85:
    LOBYTE(result) = 0; /*0x576759*/
  }
  else
  {
    v38 = v54; /*0x5765c4*/
    while ( 1 ) /*0x5765c8*/
    {
      v39 = v20[80]; /*0x5765c8*/
      if ( (v39 & 0x80) != 0 && v35 ) /*0x5765d9*/
      {
        v36 = v20[9]; /*0x5765db*/
        v56 = v36; /*0x5765de*/
      }
      if ( (v39 & 0x80) == 0 && !v35 && ((_WORD)v36 != 0xFFFF || HIWORD(v56) != 0xFFFF) ) /*0x5765fb*/
        break; /*0x5765fb*/
      v35 = (v39 & 0x80) == 0; /*0x576608*/
      if ( (v39 & 0x80) == 0 && !v37 ) /*0x57660f*/
      {
        UpdateTeamsInAreaMap(v38, v53); /*0x576620*/
        v37 = 1; /*0x576625*/
      }
      v50 = v20[9]; /*0x576630*/
      LOWORD(v55) = *v61 + v50; /*0x576643*/
      HIWORD(v55) = HIWORD(v50) + v61[1]; /*0x57664b*/
      v40 = (__int16)v55 + (SHIWORD(v55) << 9); /*0x576656*/
      if ( v40 < 0x40000 && (v41 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v40)) != 0 ) /*0x57666c*/
      {
        v51 = v41; /*0x57666e*/
      }
      else
      {
        v51 = &g_MissionQueueFrame.briefing[130]; /*0x576678*/
        g_MissionQueueFrame.briefing[139] = v55; /*0x576680*/
      }
      result = ++v58; /*0x57668d*/
      if ( v58 >= v52 ) /*0x576694*/
        goto LABEL_85; /*0x576694*/
      v20 = v51; /*0x57669a*/
    }
    v61 = (_WORD *)v20[9]; /*0x5766aa*/
    v43 = ((_BYTE)a3 - 4) & 7; /*0x5766b1*/
    v44 = 4 * v43 + 9041544; /*0x5766b4*/
    LOWORD(v43) = (_WORD)v61 + LOWORD(g_DDrawSurfaceManager.scenario[v43 + 82]); /*0x5766cc*/
    v45 = (__int16)v43; /*0x5766cf*/
    HIWORD(v67) = HIWORD(v61) + *(_WORD *)(v44 + 2); /*0x5766d2*/
    LOWORD(v67) = v43; /*0x5766d7*/
    v46 = (__int16)v43 + (SHIWORD(v67) << 9); /*0x5766e2*/
    if ( v46 < 0x40000 && (v47 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v46)) != 0 ) /*0x5766f8*/
    {
      v48 = v47; /*0x5766fa*/
    }
    else
    {
      v45 = v67; /*0x5766fe*/
      v48 = &g_MissionQueueFrame.briefing[130]; /*0x576702*/
      g_MissionQueueFrame.briefing[139] = v67; /*0x576707*/
    }
    if ( a3 == 2 ) /*0x576712*/
      UpdateCellClassNeighborTerrain((int)v48, v45, 0, 0); /*0x576716*/
    else
      UpdateCellClassNeighborTerrain((int)v48, v45, 6u, 0); /*0x57671c*/
    *((_BYTE *)v48 + 286) = 0; /*0x576721*/
    v48[17] = -1; /*0x576728*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)(v48 + 9)); /*0x576734*/
    result = CellClass::RecursiveCraterUpdate(v60, a2, a3, a4); /*0x576748*/
    LOBYTE(result) = 1; /*0x576750*/
  }
  return result; /*0x576753*/
}



// ==== 0x00576770  Terrain::CreateCrater  this=Terrain  sig=csp ====
char __thiscall Terrain::CreateCrater(Terrain *this, int a2)
{
  _WORD *v2; // edi
  char v3; // si
  int i; // ebx
  int v5; // eax
  __int16 v6; // dx
  unsigned int v7; // eax
  int *v8; // eax
  int *v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  __int16 v13; // dx
  int v14; // esi
  bool v15; // sf
  int v16; // esi
  int *v17; // esi
  int v18; // eax
  __int16 v19; // si
  int v20; // ebp
  int v21; // edi
  int v22; // ebp
  int v23; // esi
  unsigned int v24; // eax
  int *v25; // eax
  int *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // esi
  int v31; // ecx
  __int16 v33; // [esp+16h] [ebp-1Eh]
  int v34; // [esp+18h] [ebp-1Ch]
  int *v35; // [esp+1Ch] [ebp-18h]
  int v36; // [esp+1Ch] [ebp-18h]
  int v37; // [esp+20h] [ebp-14h]
  int v38; // [esp+24h] [ebp-10h] BYREF
  int v39; // [esp+28h] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-8h]
  int v41; // [esp+30h] [ebp-4h]

  v2 = (_WORD *)a2; /*0x576781*/
  v3 = 0; /*0x576785*/
  for ( i = 0; i < 8; ++i ) /*0x576787*/
  {
    v5 = v3 & 7; /*0x57678b*/
    v6 = g_DDrawSurfaceManager.scenario[v5 + 82]; /*0x57678e*/
    LOWORD(v5) = v2[1] + HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82]); /*0x5767a4*/
    LOWORD(a2) = *v2 + v6; /*0x5767a8*/
    HIWORD(a2) = v5; /*0x5767b0*/
    v7 = (__int16)a2 + ((__int16)v5 << 9); /*0x5767bb*/
    if ( v7 < 0x40000 && (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x5767cb*/
    {
      v9 = v8; /*0x5767cd*/
    }
    else
    {
      v9 = &g_MissionQueueFrame.briefing[130]; /*0x5767d5*/
      g_MissionQueueFrame.briefing[139] = a2; /*0x5767da*/
    }
    v35 = v9; /*0x5767e5*/
    if ( (v9[80] & 0x500) != 0 ) /*0x5767ec*/
      break; /*0x5767ec*/
    v3 = (v3 + 1) & 7; /*0x5767ef*/
  }
  v10 = v9[80]; /*0x5767f8*/
  if ( (v10 & 0x100) == 0 && (v10 & 0x400) == 0 ) /*0x57680b*/
    return v10; /*0x57680b*/
  if ( (v9[80] & 0x100) != 0 )
  {
    if ( (v10 & 0x80u) == 0 ) /*0x576817*/
      v11 = *(_DWORD *)(v9[11] + 36); /*0x576824*/
    else
      v11 = v9[9]; /*0x576819*/
  }
  else
  {
    v12 = v9[9]; /*0x576831*/
    v33 = HIWORD(v12); /*0x576838*/
    v34 = 0; /*0x57683f*/
    v37 = (v10 & 0x800) != 0 ? 4 : 2;
    while ( 1 ) /*0x57685c*/
    {
      v13 = v12 + LOWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x57685c*/
      LOWORD(a2) = v13; /*0x57685f*/
      HIWORD(a2) = v33 + HIWORD(g_DDrawSurfaceManager.scenario[(v37 & 7) + 82]); /*0x576873*/
      LOWORD(v12) = v13; /*0x576878*/
      v14 = SHIWORD(a2) << 9; /*0x57687c*/
      v15 = v13 + v14 < 0; /*0x57687f*/
      v16 = v13 + v14; /*0x57687f*/
      v33 = HIWORD(a2); /*0x576881*/
      if ( v15 || v16 >= 0x40000 || (v17 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v16)) == 0 ) /*0x57689a*/
      {
        g_MissionQueueFrame.briefing[139] = a2; /*0x57689c*/
        v17 = &g_MissionQueueFrame.briefing[130]; /*0x5768a2*/
      }
      if ( (v17[80] & 0x400) == 0 ) /*0x5768b0*/
        break; /*0x5768b0*/
      LOBYTE(v10) = ++v34; /*0x5768b6*/
      if ( v34 >= 4 ) /*0x5768be*/
        return v10; /*0x5768be*/
    }
    v18 = ((_BYTE)v37 - 4) & 7; /*0x5768d4*/
    v19 = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x5768f9*/
    LOWORD(a2) = LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]) /*0x5768fc*/
               + v13
               + LOWORD(g_DDrawSurfaceManager.scenario[v18 + 82]);
    HIWORD(a2) = v19 + HIWORD(g_DDrawSurfaceManager.scenario[v18 + 82]); /*0x576908*/
    v11 = a2; /*0x57690d*/
    v9 = v35; /*0x576911*/
  }
  v20 = v9[80]; /*0x576915*/
  v21 = v11; /*0x576933*/
  a2 = v11; /*0x57693a*/
  v38 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2118]; /*0x576940*/
  v39 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]; /*0x57694b*/
  v22 = (v20 & 0x800) != 0 ? 6 : 0;
  v40 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]; /*0x576952*/
  v41 = *(_DWORD *)&g_MissionQueueFrame.waypoints[2130]; /*0x576956*/
  while ( 1 ) /*0x57695a*/
  {
    LOBYTE(v10) = BYTE2(a2); /*0x57695a*/
    v23 = SHIWORD(a2) + (__int16)v21; /*0x576962*/
    if ( v23 <= *(int *)&stru_87F5F0.__pad_58[660] /*0x576990*/
      || (__int16)v21 - SHIWORD(a2) >= *(int *)&stru_87F5F0.__pad_58[660]
      || SHIWORD(a2) - (__int16)v21 >= *(int *)&stru_87F5F0.__pad_58[660]
      || v23 > *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * *(_DWORD *)&stru_87F5F0.__pad_58[664] )
    {
      return v10; /*0x576990*/
    }
    v24 = (__int16)v21 + (SHIWORD(a2) << 9); /*0x57699d*/
    if ( !*((_DWORD *)this->Terrain_field_0x13C + v24) ) /*0x5769a9*/
      goto LABEL_49; /*0x5769a9*/
    if ( v24 < 0x40000 && (v25 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) != 0 ) /*0x5769c5*/
    {
      v26 = v25; /*0x5769c7*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = v21; /*0x5769cb*/
      v26 = &g_MissionQueueFrame.briefing[130]; /*0x5769d1*/
    }
    v27 = v26[14] - g_Cell_BuildabilityLUT + 1; /*0x5769e7*/
    if ( (v27 == dword_ABC2B4 || v27 == dword_AA1130) && *((_BYTE *)v26 + 282) == 8 ) /*0x5769fb*/
      break; /*0x5769fb*/
    if ( (v27 == g_TerrainSoundTable2 /*0x576a27*/
       || v27 == g_TerrainSoundTable2 + 3
       || v27 == g_TerrainSoundTable2 + 1
       || v27 == g_TerrainSoundTable2 + 2)
      && *((_BYTE *)v26 + 282) == 5 )
    {
      break; /*0x576a27*/
    }
    if ( (v27 == dword_AA1548 || v27 == dword_AA0740) && *((_BYTE *)v26 + 282) == 12 ) /*0x576a44*/
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38); /*0x576b26*/
      goto LABEL_51; /*0x576b26*/
    }
    if ( (v27 == g_TerrainSoundConfig /*0x576a6e*/
       || v27 == g_TerrainSoundConfig + 3
       || v27 == g_TerrainSoundConfig + 2
       || v27 == g_TerrainSoundConfig + 1)
      && *((_BYTE *)v26 + 282) == 7 )
    {
      LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 4, &v38); /*0x576b38*/
      if ( (_BYTE)v10 ) /*0x576b3f*/
      {
        v10 = v38; /*0x576b41*/
        v29 = v39; /*0x576b4b*/
        v30 = v41; /*0x576b4f*/
        v31 = v40; /*0x576b55*/
        if ( v38 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x576b71*/
          || v39 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
          || v40 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
          || v41 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
        {
          goto LABEL_64; /*0x576b71*/
        }
      }
      return v10; /*0x576b71*/
    }
LABEL_49:
    v28 = v22 & 7; /*0x576a74*/
    LOWORD(v36) = v21 + LOWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a8f*/
    HIWORD(v36) = HIWORD(a2) + HIWORD(g_DDrawSurfaceManager.scenario[v28 + 82]); /*0x576a99*/
    v21 = v36; /*0x576a9e*/
    a2 = v36; /*0x576aa2*/
  }
  LOBYTE(v10) = CellClass::RecursiveCraterUpdate((CellClass *)this, (__int16 *)&a2, 2, &v38); /*0x576ab7*/
LABEL_51:
  if ( (_BYTE)v10 ) /*0x576abe*/
  {
    v10 = v38; /*0x576ac4*/
    v29 = v39; /*0x576ace*/
    v30 = v41; /*0x576ad2*/
    v31 = v40; /*0x576ad8*/
    if ( v38 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2118] /*0x576afc*/
      || v39 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2122]
      || v40 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2126]
      || v41 != *(_DWORD *)&g_MissionQueueFrame.waypoints[2130] )
    {
LABEL_64:
      LOBYTE(v10) = Cell::CreateCrater(v10, v29, v31, v30, 0); /*0x576b73*/
    }
  }
  return v10; /*0x5768c0*/
}



// ==== 0x00576BA0  CellClass::PropagateTerrainVariant5  this=CellClass  sig=csp ====
char __thiscall CellClass::PropagateTerrainVariant5(CellClass *this, __int16 *a2)
{
  __int16 *v2; // ebx
  unsigned int v4; // eax
  int *v5; // eax
  int *v6; // esi
  int v7; // ecx
  __int16 *v8; // edx
  __int16 *v9; // edi
  int v10; // eax
  int v11; // esi
  bool v12; // cc
  int *v13; // eax
  unsigned int v14; // eax
  int *v15; // eax
  int *v16; // ecx
  unsigned int v17; // eax
  int *v18; // eax
  int *v19; // edi
  unsigned __int8 v20; // al
  unsigned int v21; // eax
  CellClass *v22; // eax
  unsigned int v23; // eax
  CellClass *v24; // eax
  CellClass *v25; // ecx
  unsigned int v26; // eax
  CellClass *v27; // eax
  CellClass *v28; // ecx
  unsigned int v29; // eax
  int *v30; // eax
  __int16 v31; // si
  int v32; // ecx
  bool v33; // sf
  int v34; // ecx
  CellClass *v35; // ecx
  unsigned int v36; // eax
  CellClass *v37; // eax
  CellClass *v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  CellClass *v42; // eax
  CellClass *v43; // ecx
  int ... [26848 chars total]



// ==== 0x00577920  MapClass::RemoveTriggerRef  this=MapClass  sig=csp ====
int __thiscall MapClass::RemoveTriggerRef(MapClass *this, int a2, int a3)
{
  int v3; // esi
  int i; // ebp
  int MapClass_field_0x1160; // ecx
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  unsigned int v10; // eax
  ObjectClass *v11; // eax
  ObjectClass *v12; // edi
  int v13; // eax
  MapClass *MapClass_field_0x116C; // ecx
  MapClass *v15; // ecx
  int result; // eax

  v3 = a2; /*0x577922*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 44))(a2) == 44 ) /*0x577932*/
  {
    for ( i = 0; i < (int)this->MapClass_field_0x116C; ++i ) /*0x577943*/
    {
      MapClass_field_0x1160 = this->MapClass_field_0x1160; /*0x57794a*/
      v7 = *(__int16 *)(MapClass_field_0x1160 + 4 * i + 2); /*0x577950*/
      v8 = *(__int16 *)(MapClass_field_0x1160 + 4 * i); /*0x577955*/
      v9 = (int *)(MapClass_field_0x1160 + 4 * i); /*0x577959*/
      v10 = v8 + (v7 << 9); /*0x57795f*/
      if ( v10 < 0x40000 && (v11 = (ObjectClass *)*((_DWORD *)this->MapClass_field_0x13C + v10)) != 0 ) /*0x577975*/
      {
        v12 = v11; /*0x577977*/
      }
      else
      {
        v12 = (ObjectClass *)&g_MissionQueueFrame.briefing[130]; /*0x57797d*/
        g_MissionQueueFrame.briefing[139] = *v9; /*0x577982*/
      }
      if ( v12 && v12->ambientSoundController[0] == v3 ) /*0x57798e*/
      {
        ObjectClass::SetTriggerTarget(v12, 0); /*0x577994*/
        v13 = ((int (__thiscall *)(ObjectClass **, int *))this->MapClass_field_0x115C->?)( /*0x5779ab*/
                &this->MapClass_field_0x115C,
                &v12->occupant);
        if ( v13 != -1 ) /*0x5779b1*/
        {
          MapClass_field_0x116C = this->MapClass_field_0x116C; /*0x5779b3*/
          if ( v13 < (int)MapClass_field_0x116C ) /*0x5779b8*/
          {
            v15 = (MapClass *)((char *)MapClass_field_0x116C - 1); /*0x5779ba*/
            for ( this->MapClass_field_0x116C = v15; /*0x5779c0*/
                  v13 < (int)this->MapClass_field_0x116C;
                  *(_DWORD *)(this->MapClass_field_0x1160 + 4 * v13 - 4) = *(_DWORD *)(this->MapClass_field_0x1160
                                                                                     + 4 * v13) )
            {
              ++v13; /*0x5779c5*/
            }
          }
        }
        v3 = a2; /*0x5779d4*/
        --i; /*0x5779d8*/
      }
    }
    MapClass::RemoveCellReference((MapClass *)&g_MissionQueueFrame.briefing[130], v3); /*0x5779ef*/
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x5779f9*/
  if ( result == 44 ) /*0x5779ff*/
  {
    a2 = v3; /*0x577a11*/
    result = (*(int (__thiscall **)(int *, int *))(FootClass_Array.?[4] + 16))(&FootClass_Array.?[4], &a2); /*0x577a15*/
    if ( result != -1 && result < FootClass_Array.?[0] ) /*0x577a25*/
    {
      --FootClass_Array.?[0]; /*0x577a2a*/
      for ( ; /*0x577a30*/
            result < FootClass_Array.?[0];
            *(_DWORD *)(FootClass_Array.?[5] + 4 * result - 4) = *(_DWORD *)(FootClass_Array.?[5] + 4 * result) )
      {
        ++result; /*0x577a38*/
      }
    }
  }
  return result; /*0x577a4a*/
}



// ==== 0x00577AB0  ShroudClass::Reset  this=ShroudClass  sig=csp ====
int __thiscall ShroudClass::Reset(ShroudClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD *i; // eax
  unsigned int v6; // edx

  result = a2; /*0x577ab0*/
  if ( a2 ) /*0x577abc*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577aca*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577ad6*/
  {
    if ( a2 ) /*0x577ada*/
      return result; /*0x577ada*/
    goto LABEL_7; /*0x577ada*/
  }
  if ( !a2 ) /*0x577ae4*/
LABEL_7:
    Debug::Log(); /*0x577ae6*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577af3*/
  v4 = *((_DWORD *)this + 61); /*0x577aff*/
  *((_DWORD *)this + 67) = 1; /*0x577b05*/
  *((_DWORD *)this + 68) = v4; /*0x577b0f*/
  *((_DWORD *)this + 69) = v4 - 1; /*0x577b18*/
  *((_DWORD *)this + 70) = (v4 << 11) + *((_DWORD *)this + 79) + 4; /*0x577b2d*/
  for ( i = (_DWORD *)LayerClass::CellIteratorNext((LayerClass *)this); /*0x577b3a*/
        i;
        i = (_DWORD *)LayerClass::CellIteratorNext((LayerClass *)this) )
  {
    v6 = i[80] & 0xFFFFFFFC; /*0x577b4b*/
    i[75] &= 0xFFFFFFE7; /*0x577b4e*/
    i[76] = 1; /*0x577b56*/
    i[77] = 0; /*0x577b60*/
    i[80] = v6; /*0x577b66*/
  }
  Radar::UpdateReveal(0, 0); /*0x577b7c*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577b8b*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577b91*/
  return (*(int (__thiscall **)(ShroudClass *, int))(*(_DWORD *)this->__pad_0 + 56))(this, 2); /*0x577b9f*/
}



// ==== 0x00577BB0  TeamClass::DisbandTeam  this=TeamClass  sig=csp ====
int __thiscall TeamClass::DisbandTeam(TeamClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int i; // eax
  unsigned int v6; // edx

  result = a2; /*0x577bb0*/
  if ( a2 ) /*0x577bb9*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577bc7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577bd4*/
  {
    if ( a2 ) /*0x577bd8*/
      return result; /*0x577bd8*/
    goto LABEL_7; /*0x577bd8*/
  }
  if ( !a2 ) /*0x577be2*/
LABEL_7:
    Debug::Log(); /*0x577be4*/
  v4 = this->q03D; /*0x577bf1*/
  *((_DWORD *)this + 67) = 1; /*0x577bf7*/
  this->unknown44 = v4; /*0x577c01*/
  this->q045 = v4 - 1; /*0x577c0a*/
  this->q046 = (v4 << 11) + this->q04F + 4; /*0x577c1f*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577c2c*/
  {
    v6 = *(_DWORD *)(i + 320) & 0xFFFFFFFC; /*0x577c3d*/
    *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577c40*/
    *(_DWORD *)(i + 320) = v6; /*0x577c48*/
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x577c60*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577c6f*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577c76*/
  return (*((int (__thiscall **)(TeamClass *, int))this->AbstractClass + 14))(this, 2); /*0x577c84*/
}



// ==== 0x00577C90  TActionClass::executeRepairAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeRepairAction(TActionClass *this, int a2)
{
  int result; // eax
  int v4; // eax
  int i; // esi
  int v6; // eax

  result = a2; /*0x577c90*/
  if ( a2 ) /*0x577c99*/
    *(_BYTE *)(*((_DWORD *)stru_A80220.? + *(_DWORD *)(a2 + 48)) + 577) = 0; /*0x577ca7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577cb4*/
  {
    if ( a2 ) /*0x577cb8*/
      return result; /*0x577cb8*/
    goto LABEL_7; /*0x577cb8*/
  }
  if ( !a2 ) /*0x577cc2*/
LABEL_7:
    Debug::Log(); /*0x577cc4*/
  HouseClass::ResetObjectOrders(0, 0); /*0x577cd1*/
  v4 = this->q03D; /*0x577ce0*/
  *((_DWORD *)this + 67) = 1; /*0x577ce6*/
  this->TActionClass_field_44 = v4; /*0x577cf0*/
  this->q045 = v4 - 1; /*0x577cf9*/
  this->q046 = (v4 << 11) + this->q04F + 4; /*0x577d0e*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577d1d*/
  {
    DisplayClass::AdvanceFrameCounter((DisplayClass *)i); /*0x577d21*/
    if ( *(int *)(i + 304) >= 0 ) /*0x577d2e*/
    {
      v6 = *(_DWORD *)(i + 320); /*0x577d36*/
      LOBYTE(v6) = v6 & 0xFC; /*0x577d3f*/
      *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577d41*/
      *(_DWORD *)(i + 320) = v6; /*0x577d47*/
    }
  }
  Radar::UpdateReveal(0, 0); /*0x577d63*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577d72*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577d79*/
  return (*((int (__thiscall **)(TActionClass *, int))this->AbstractClass + 14))(this, 2); /*0x577d88*/
}



// ==== 0x00577D90  LayerClass::Reveal  this=LayerClass  sig=csp ====
void *__thiscall LayerClass::Reveal(LayerClass *this, int a2)
{
  void *result; // eax
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  char v8; // [esp+10h] [ebp+4h]

  result = (void *)a2; /*0x577d90*/
  if ( a2 ) /*0x577da2*/
    *(_BYTE *)(*(&dword_A8022C->ptr_0 + *(_DWORD *)(a2 + 48)) + 577) = 1; /*0x577db0*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x577dbc*/
  {
    if ( a2 ) /*0x577dca*/
      goto LABEL_8; /*0x577dca*/
  }
  else if ( a2 ) /*0x577dc0*/
  {
    return result; /*0x577dc0*/
  }
  Debug::Log(); /*0x577dd1*/
LABEL_8:
  if ( *(_DWORD *)&dword_A8B238 != 3 && *(_DWORD *)&dword_A8B238 != 4 /*0x577df4*/
    || !dword_A8B23C
    || (v8 = 1, (*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C)) )
  {
    v8 = 0; /*0x577dff*/
  }
  result = dword_A83D4C; /*0x577e04*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577e09*/
  {
    HouseClass::ResetObjectOrders(0, 0); /*0x577e1e*/
    dword_A83D4C->__pad_140[256] = 1; /*0x577e29*/
    dword_87F8F8 = dword_87F8DC; /*0x577e3a*/
    dword_87F8F4 = 1; /*0x577e42*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577e4b*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577e5a*/
    v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577e60*/
    if ( v4 ) /*0x577e67*/
    {
      while ( 1 ) /*0x577e6e*/
      {
        if ( !v8 ) /*0x577e74*/
          goto LABEL_23; /*0x577e74*/
        v5 = *(__int16 *)(v4 + 36); /*0x577e76*/
        v6 = *(__int16 *)(v4 + 38); /*0x577e7a*/
        if ( v5 != 7 ) /*0x577e81*/
          break; /*0x577e81*/
        if ( v6 != *((_DWORD *)this + 61) + 5 ) /*0x577e8e*/
          goto LABEL_21; /*0x577e8e*/
LABEL_24:
        v4 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577ee9*/
        if ( !v4 ) /*0x577ef5*/
          goto LABEL_25; /*0x577ef5*/
      }
      if ( v5 == 13 && v6 == *((_DWORD *)this + 61) + 11 ) /*0x577ea2*/
        goto LABEL_24; /*0x577ea2*/
LABEL_21:
      v7 = *((_DWORD *)this + 62); /*0x577ea4*/
      if ( v5 == v7 + 13 && v6 == *((_DWORD *)this + 61) + v7 - 15 ) /*0x577ebd*/
        goto LABEL_24; /*0x577ebd*/
LABEL_23:
      *(_DWORD *)(v4 + 304) = 0; /*0x577ebf*/
      *(_DWORD *)(v4 + 308) = 0; /*0x577ec5*/
      *(_DWORD *)(v4 + 300) |= 0x18u; /*0x577ed4*/
      *(_DWORD *)(v4 + 320) |= 3u; /*0x577ee3*/
      goto LABEL_24; /*0x577ee3*/
    }
LABEL_25:
    Radar::UpdateReveal(0, 0); /*0x577efc*/
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x577f0d*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x577f19*/
  }
  return result; /*0x577f1e*/
}



// ==== 0x00577F30  MapClass::ClearShroud  this=MapClass  sig=csp ====
void *__thiscall MapClass::ClearShroud(MapClass *this, int a2)
{
  void *result; // eax
  bool v4; // bl
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // esi
  int v8; // eax
  int v9; // edx

  result = (void *)a2; /*0x577f30*/
  if ( a2 ) /*0x577f3a*/
    *(_BYTE *)(*(&dword_A8022C->ptr_0 + *(_DWORD *)(a2 + 48)) + 577) = 1; /*0x577f48*/
  if ( (Object *)a2 == dword_A83D4C ) /*0x577f55*/
  {
    if ( a2 ) /*0x577f63*/
      goto LABEL_8; /*0x577f63*/
  }
  else if ( a2 ) /*0x577f59*/
  {
    return result; /*0x577f59*/
  }
  Debug::Log(); /*0x577f6a*/
LABEL_8:
  v4 = (*(_DWORD *)&dword_A8B238 == 3 || *(_DWORD *)&dword_A8B238 == 4) /*0x577f94*/
    && dword_A8B23C
    && !(*(unsigned __int8 (__thiscall **)(ObjectClass *))(dword_A8B23C->ptr_0 + 4))(dword_A8B23C);
  result = dword_A83D4C; /*0x577f9a*/
  if ( !dword_A83D4C->__pad_140[256] ) /*0x577f9f*/
  {
    dword_A83D4C->__pad_140[256] = 1; /*0x577fad*/
    dword_87F8F8 = dword_87F8DC; /*0x577fbf*/
    dword_87F8F4 = 1; /*0x577fc7*/
    dword_87F8FC = dword_87F8DC - 1; /*0x577fd4*/
    dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x577fe3*/
    v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x577fe8*/
    if ( v5 ) /*0x577fef*/
    {
      while ( 1 ) /*0x577ff3*/
      {
        v6 = *(__int16 *)(v5 + 36); /*0x577ff3*/
        v7 = (__int16 *)(v5 + 36); /*0x577ff7*/
        v8 = *(__int16 *)(v5 + 38); /*0x577ffa*/
        if ( !v4 ) /*0x578000*/
          goto LABEL_24; /*0x578000*/
        if ( v6 != 7 ) /*0x578005*/
          break; /*0x578005*/
        if ( v8 != this->MapClass_field_0xF4 + 5 ) /*0x578012*/
          goto LABEL_22; /*0x578012*/
LABEL_25:
        v5 = LayerClass::CellIteratorNext((LayerClass *)&dword_87F7E8); /*0x578054*/
        if ( !v5 ) /*0x578060*/
          goto LABEL_26; /*0x578060*/
      }
      if ( v6 == 13 && v8 == this->MapClass_field_0xF4 + 11 ) /*0x578026*/
        goto LABEL_25; /*0x578026*/
LABEL_22:
      v9 = *(_DWORD *)this->__pad_F8; /*0x578028*/
      if ( v6 == v9 + 13 && v8 == this->MapClass_field_0xF4 + v9 - 15 ) /*0x578041*/
        goto LABEL_25; /*0x578041*/
LABEL_24:
      DisplayClass::RevealFogCell((DisplayClass *)&dword_87F7E8, v7, (int)dword_A83D4C); /*0x578043*/
      goto LABEL_25; /*0x57804f*/
    }
LABEL_26:
    FogOfWar::Render((FogOfWar *)&dword_87F7E8); /*0x578064*/
    return (void *)MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 1); /*0x578075*/
  }
  return result; /*0x57807a*/
}



// ==== 0x00578080  Cell::GetGroundHeight  this=Cell  sig=csp ====
__int64 __stdcall Cell::GetGroundHeight(_DWORD *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int *v4; // ecx
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp+4h]

  v1 = a1[1]; /*0x57808a*/
  v6[0] = *a1; /*0x57808d*/
  v6[1] = v1; /*0x578091*/
  v2 = a1[1] / 256; /*0x5780ac*/
  v3 = v6[0] / 256 + (v2 << 9); /*0x5780b7*/
  if ( v3 < 0 /*0x5780ce*/
    || v3 >= *(int *)&stru_87F5F0.__pad_58[736]
    || (v4 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v3)) == 0 )
  {
    LOWORD(v7) = v6[0] / 256; /*0x5780d0*/
    HIWORD(v7) = v2; /*0x5780d5*/
    v4 = &g_MissionQueueFrame.briefing[130]; /*0x5780de*/
    g_MissionQueueFrame.briefing[139] = v7; /*0x5780e3*/
  }
  return Isometric::InitTables((int)v4, v6); /*0x5780f2*/
}



// ==== 0x00578100  CellSystem::UpdateVisibility  this=CellSystem  sig=csp ====
int __thiscall CellSystem::UpdateVisibility(CellSystem *this)
{
  int v2; // eax
  int i; // esi
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  int result; // eax
  _BYTE *j; // esi
  _DWORD *v9; // eax
  char AdjacentPassableMask; // al
  int v11; // [esp+Ch] [ebp-14h]
  int v12; // [esp+10h] [ebp-10h] BYREF
  _BYTE v13[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 61); /*0x57810d*/
  *((_DWORD *)this + 67) = 1; /*0x578113*/
  *((_DWORD *)this + 68) = v2; /*0x578119*/
  *((_DWORD *)this + 69) = v2 - 1; /*0x578122*/
  *((_DWORD *)this + 70) = (v2 << 11) + *((_DWORD *)this + 79) + 4; /*0x578137*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)this); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x578146*/
  {
    if ( (*(_BYTE *)(i + 320) & 0x20) != 0 ) /*0x57814f*/
    {
      v4 = *(_DWORD *)(i + 300); /*0x578151*/
      LOBYTE(v4) = v4 & 0xE7; /*0x57815d*/
      v5 = *(_DWORD *)(i + 320) & 0xFFFFFFDC; /*0x57815f*/
      *(_DWORD *)(i + 300) = v4; /*0x578162*/
      *(_DWORD *)(i + 320) = v5; /*0x578168*/
      *(_BYTE *)(i + 312) = 1; /*0x57816e*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, i); /*0x57817b*/
      if ( *(_BYTE *)(i + 288) == 0xFE ) /*0x578187*/
        CellClass::SpiralFindClosest(i, (int)dword_A83D4C, 1); /*0x578197*/
    }
  }
  v6 = *((_DWORD *)this + 61); /*0x5781a9*/
  *((_DWORD *)this + 67) = 1; /*0x5781af*/
  *((_DWORD *)this + 68) = v6; /*0x5781b5*/
  *((_DWORD *)this + 69) = v6 - 1; /*0x5781be*/
  *((_DWORD *)this + 70) = (v6 << 11) + *((_DWORD *)this + 79) + 4; /*0x5781d3*/
  result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x5781d9*/
  for ( j = (_BYTE *)result; result; j = (_BYTE *)result ) /*0x5781e2*/
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)j + 72))(j, v13); /*0x5781f1*/
    LOWORD(v11) = *v9 / 256; /*0x578206*/
    HIWORD(v11) = v9[1] / 256; /*0x578220*/
    v12 = v11; /*0x57822d*/
    AdjacentPassableMask = Cell::GetAdjacentPassableMask((__int16 *)&v12, 0); /*0x578232*/
    if ( AdjacentPassableMask != j[288] ) /*0x57823d*/
    {
      j[288] = AdjacentPassableMask; /*0x57823f*/
      j[312] = 1; /*0x578245*/
      Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)j); /*0x578252*/
      if ( j[288] == 0xFE ) /*0x57825e*/
        CellClass::SpiralFindClosest((int)j, (int)dword_A83D4C, 1); /*0x57826e*/
    }
    result = LayerClass::CellIteratorNext((LayerClass *)this); /*0x578275*/
  }
  return result; /*0x578284*/
}



// ==== 0x00578290  LayerClass::CellIteratorNext  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CellIteratorNext(LayerClass *this)
{
  int v1; // eax
  int *v2; // ebp
  int v3; // edx
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // esi
  int v9; // edx
  int v10; // eax

  v1 = *((_DWORD *)this + 69); /*0x578290*/
  v2 = (int *)*((_DWORD *)this + 70); /*0x578297*/
  if ( v1 ) /*0x5782a0*/
  {
    v3 = *((_DWORD *)this + 68) - 1; /*0x5782af*/
    ++*((_DWORD *)this + 67); /*0x5782b1*/
    *((_DWORD *)this + 69) = v1 - 1; /*0x5782b7*/
    *((_DWORD *)this + 68) = v3; /*0x5782c3*/
    *((_DWORD *)this + 70) = v2 - 511; /*0x5782c9*/
    return *v2; /*0x5782cf*/
  }
  else
  {
    v5 = *((_DWORD *)this + 68); /*0x5782d5*/
    v6 = *((_DWORD *)this + 67); /*0x5782db*/
    v7 = *((_DWORD *)this + 61); /*0x5782e1*/
    *((_DWORD *)this + 67) = v5; /*0x5782e8*/
    *((_DWORD *)this + 68) = v6; /*0x5782f2*/
    if ( (((_BYTE)v5 - (_BYTE)v7 + (_BYTE)v6 - 1) & 1) != 0 ) /*0x5782ff*/
    {
      v8 = v7 - 1; /*0x578302*/
      *((_DWORD *)this + 68) = v6 + 1; /*0x578303*/
    }
    else
    {
      v8 = v7 - 2; /*0x57830c*/
      *((_DWORD *)this + 67) = v5 + 1; /*0x57830f*/
    }
    v9 = *((_DWORD *)this + 67); /*0x57831b*/
    v10 = *((_DWORD *)this + 68) << 9; /*0x578321*/
    *((_DWORD *)this + 69) = v8; /*0x578324*/
    *((_DWORD *)this + 70) = *((_DWORD *)this + 79) + 4 * (v9 + v10); /*0x578337*/
    return *v2; /*0x57833d*/
  }
}



// ==== 0x00578350  LayerClass::CellIteratorReset  this=LayerClass  sig=csp ====
int __thiscall LayerClass::CellIteratorReset(LayerClass *this)
{
  int v1; // eax
  int result; // eax

  v1 = *((_DWORD *)this + 61); /*0x578350*/
  *((_DWORD *)this + 67) = 1; /*0x578356*/
  *((_DWORD *)this + 68) = v1; /*0x578360*/
  *((_DWORD *)this + 69) = v1 - 1; /*0x578369*/
  result = (v1 << 11) + *((_DWORD *)this + 79) + 4; /*0x578378*/
  *((_DWORD *)this + 70) = result; /*0x57837c*/
  return result; /*0x578382*/
}



// ==== 0x00578390  MapClass::IsRectInBounds  this=MapClass  sig=csp ====
BOOL __thiscall MapClass::IsRectInBounds(MapClass *this, _WORD *a2, int a3)
{
  char v3; // bl
  _WORD *v4; // esi
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  __int16 v13[2]; // [esp+Ch] [ebp-8h] BYREF
  __int16 v14[2]; // [esp+10h] [ebp-4h] BYREF

  v3 = a3; /*0x578394*/
  v4 = a2; /*0x578399*/
  v6 = *a2; /*0x5783a4*/
  HIWORD(a2) = a2[2]; /*0x5783ab*/
  LOWORD(a2) = v6; /*0x5783b4*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, a3) ) /*0x5783b9*/
    return 0; /*0x5783b9*/
  v7 = v4[2]; /*0x5783d0*/
  LOWORD(a3) = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x5783d8*/
  HIWORD(a3) = v7; /*0x5783e0*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a3, v3) ) /*0x5783e5*/
    return 0; /*0x5783e5*/
  v8 = *((_DWORD *)v4 + 1); /*0x5783f1*/
  v9 = *((_DWORD *)v4 + 3); /*0x5783f4*/
  v13[0] = *v4; /*0x5783f7*/
  v13[1] = v8 + v9 - 1; /*0x578408*/
  if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, v3) ) /*0x57840d*/
    return 0; /*0x57840d*/
  v10 = *((_DWORD *)v4 + 1); /*0x578420*/
  v11 = *((_DWORD *)v4 + 3); /*0x578423*/
  v14[0] = *((_DWORD *)v4 + 2) + *(_DWORD *)v4 - 1; /*0x578426*/
  v14[1] = v10 + v11 - 1; /*0x578436*/
  return (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v14, v3) != 0; /*0x578446*/
}



// ==== 0x00578460  LayerClass::IsWithinUsableArea  this=LayerClass  sig=csp ====
int __thiscall LayerClass::IsWithinUsableArea(LayerClass *this, __int16 *a2, char a3)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  int *v7; // eax
  int result; // eax
  int v9; // esi

  v3 = 0; /*0x57846b*/
  v4 = a2[1]; /*0x57846d*/
  v5 = *a2; /*0x578472*/
  if ( a3 ) /*0x578477*/
  {
    v6 = v5 + (v4 << 9); /*0x57847e*/
    if ( v6 >= 0x40000 || (v7 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) == 0 ) /*0x578494*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x578498*/
      v7 = &g_MissionQueueFrame.briefing[130]; /*0x57849d*/
    }
    v3 = *((char *)v7 + 283); /*0x5784a8*/
    if ( *((_BYTE *)v7 + 284) && v4 + v5 < v3 + *((_DWORD *)this + 61) + 2 * *((_DWORD *)this + 64) + 4 ) /*0x5784ca*/
      ++v3; /*0x5784cc*/
  }
  result = *((_DWORD *)this + 61); /*0x5784d3*/
  LOBYTE(result) = v4 + v5 > v3 + result + 2 * *((_DWORD *)this + 64) /*0x578531*/
                && v4 + v5 <= v3 + result + 2 * (*((_DWORD *)this + 64) + *((_DWORD *)this + 66)) + 2
                && (v9 = *((_DWORD *)this + 63), v5 - v4 < 2 * (v9 + *((_DWORD *)this + 65)) - result)
                && (result -= 2 * v9, v4 - v5 < result);
  return result; /*0x578525*/
}



// ==== 0x00578540  Type::CheckAmbiguity  this=Type  sig=csp ====
int __thiscall Type::CheckAmbiguity(Type *this, int a2, char a3)
{
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int result; // eax
  int v7; // esi

  v3 = *(__int16 *)(a2 + 38); /*0x57854a*/
  v4 = 0; /*0x57854f*/
  v5 = *(__int16 *)(a2 + 36); /*0x578552*/
  if ( a3 ) /*0x578558*/
  {
    v4 = *(char *)(a2 + 283); /*0x578560*/
    if ( *(_BYTE *)(a2 + 284) ) /*0x57855a*/
    {
      if ( v3 + v5 < v4 + *((_DWORD *)this + 61) + 2 * *((_DWORD *)this + 64) + 4 ) /*0x578582*/
        ++v4; /*0x578584*/
    }
  }
  result = *((_DWORD *)this + 61); /*0x57858b*/
  LOBYTE(result) = v3 + v5 > v4 + result + 2 * *((_DWORD *)this + 64) /*0x5785e9*/
                && v3 + v5 <= v4 + result + 2 * (*((_DWORD *)this + 64) + *((_DWORD *)this + 66)) + 2
                && (v7 = *((_DWORD *)this + 63), v5 - v3 < 2 * (v7 + *((_DWORD *)this + 65)) - result)
                && (result -= 2 * v7, v3 - v5 < result);
  return result; /*0x5785dd*/
}



// ==== 0x005785F0  ObjectClass::IsCoordVisibleMap  this=ObjectClass  sig=csp ====
int __thiscall IsCoordVisibleMap(ObjectClass *this, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = a2; /*0x5785f1*/
  LOWORD(a2) = *a2 / 256; /*0x578605*/
  HIWORD(a2) = v2[1] / 256; /*0x57861d*/
  return LayerClass::IsWithinUsableArea((LayerClass *)this, (__int16 *)&a2, 1); /*0x578630*/
}



// ==== 0x00578640  ObjectClass::Math_Helper  this=ObjectClass  sig=csp ====
bool __thiscall Math_Helper(ObjectClass *this, _DWORD *a2, __int16 *a3, char a4)
{
  int v4; // edx
  int v5; // esi
  int v6; // edi
  unsigned int v7; // eax
  int *v8; // eax
  int v9; // ebx
  int v10; // eax

  v4 = a3[1]; /*0x57864f*/
  v5 = 0; /*0x578653*/
  v6 = *a3; /*0x578656*/
  if ( a4 ) /*0x57865b*/
  {
    v7 = v6 + (v4 << 9); /*0x578662*/
    if ( v7 >= 0x40000 || (v8 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) == 0 ) /*0x578678*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a3; /*0x57867c*/
      v8 = &g_MissionQueueFrame.briefing[130]; /*0x578681*/
    }
    v5 = *((char *)v8 + 283); /*0x57868c*/
    if ( *((_BYTE *)v8 + 284) && v4 + v6 < v5 + this->q03D + 2 * a2[1] + 4 ) /*0x5786ab*/
      ++v5; /*0x5786ad*/
  }
  v9 = a2[1]; /*0x5786ae*/
  v10 = this->q03D; /*0x5786b1*/
  return v4 + v6 > v5 + v10 + 2 * v9 /*0x5786f7*/
      && v4 + v6 <= v5 + v10 + 2 * (v9 + a2[3]) + 2
      && v6 - v4 < 2 * (*a2 + a2[2]) - v10
      && v4 - v6 < v10 - 2 * *a2;
}



// ==== 0x00578710  MapClass::SpiralSearch  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::SpiralSearch(MapClass *this)
{
  void *MapClass_field_0xF4; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // ebx
  bool v7; // al
  int v8; // ecx
  int v9; // ebp
  int v10; // ebx
  _DWORD *result; // eax
  unsigned int v12; // eax
  __int16 v13[2]; // [esp+10h] [ebp-4h] BYREF

  MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x578723*/
  v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x578729*/
  v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x57872f*/
  if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578740*/
               + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
               + 12 )
    return 0; /*0x57880b*/
  while ( 1 ) /*0x578746*/
  {
    v5 = *(_DWORD *)this->__pad_104; /*0x578746*/
    v6 = 2 * ((int)this->MapClass_field_0xFC + v5) - (_DWORD)MapClass_field_0xF4 - 2; /*0x57875c*/
    v13[0] = v4; /*0x57875f*/
    v13[1] = v3; /*0x578766*/
    if ( v4 - v3 < v6 ) /*0x57876b*/
    {
      *(_DWORD *)&this->__pad_10C[16] = v4 + 1; /*0x5787be*/
      *(_DWORD *)&this->__pad_10C[20] = v3 - 1; /*0x5787c4*/
    }
    else
    {
      v7 = (((_BYTE)v4 - (_BYTE)MapClass_field_0xF4 + (_BYTE)v3 - 1) & 1) == 1; /*0x578785*/
      v8 = v5 - (v7 + 1); /*0x578790*/
      v9 = *(_DWORD *)&this->__pad_10C[16] - v8; /*0x578792*/
      v10 = v8 + *(_DWORD *)&this->__pad_10C[20]; /*0x578794*/
      *(_DWORD *)&this->__pad_10C[16] = v9; /*0x578798*/
      *(_DWORD *)&this->__pad_10C[20] = v10; /*0x5787a0*/
      if ( v7 ) /*0x5787a8*/
        *(_DWORD *)&this->__pad_10C[20] = v10 + 1; /*0x5787ab*/
      else
        *(_DWORD *)&this->__pad_10C[16] = v9 + 1; /*0x5787b4*/
    }
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)this, v13, 1) ) /*0x5787d3*/
      break; /*0x5787d3*/
    MapClass_field_0xF4 = this->MapClass_field_0xF4; /*0x5787e8*/
    v3 = *(_DWORD *)&this->__pad_10C[20]; /*0x5787ee*/
    v4 = *(_DWORD *)&this->__pad_10C[16]; /*0x5787f4*/
    if ( v4 + v3 > (int)MapClass_field_0xF4 /*0x578805*/
                 + 2 * (int)((int)this->MapClass_field_0x108 + (unsigned int)this->MapClass_field_0x100)
                 + 12 )
      return 0; /*0x578805*/
  }
  v12 = v13[0] + (v13[1] << 9); /*0x578820*/
  if ( v12 >= 0x40000 || (result = (_DWORD *)*((_DWORD *)this->MapClass_field_0x13C + v12)) == 0 ) /*0x578836*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)v13; /*0x57883f*/
    return &g_MissionQueueFrame.briefing[130]; /*0x578845*/
  }
  return result; /*0x57880d*/
}



// ==== 0x00578850  TActionClass::executeSellAction  this=TActionClass  sig=csp ====
int __thiscall TActionClass::executeSellAction(TActionClass *this)
{
  int result; // eax
  int v2; // edx

  result = this->TActionClass_field_40; /*0x578850*/
  v2 = *((_DWORD *)this + 63); /*0x578856*/
  *((_DWORD *)this + 71) = v2 + result + 1; /*0x578861*/
  this->TActionClass_field_48 = result + this->q03D - v2; /*0x578871*/
  return result; /*0x578877*/
}



// ==== 0x00578880  MapClass::FastCellLookup  this=MapClass  sig=csp ====
_DWORD *__thiscall MapClass::FastCellLookup(MapClass *this, __int16 *a2, int a3, char a4)
{
  unsigned int v4; // eax
  _DWORD *result; // eax
  void *MapClass_field_0xFC; // edi
  int v7; // ebp
  int v8; // ebx
  void *MapClass_field_0x100; // eax
  int v10; // esi
  int v12; // edx
  void *MapClass_field_0x108; // ecx
  __int16 v14; // bx
  __int16 v15; // bp
  int v16; // eax
  bool v17; // sf
  int v18; // eax
  __int16 v19; // bx
  __int16 v20; // bp
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+1Ch] [ebp+4h]
  int v27; // [esp+20h] [ebp+8h]
  int v28; // [esp+24h] [ebp+Ch]
  int v29; // [esp+24h] [ebp+Ch]
  int v30; // [esp+24h] [ebp+Ch]

  if ( a3 == 1 ) /*0x57888e*/
  {
    v4 = *a2 + (a2[1] << 9); /*0x57889e*/
    if ( v4 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x5788b4*/
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x5788be*/
      return &g_MissionQueueFrame.briefing[130]; /*0x5788c4*/
    }
  }
  else
  {
    MapClass_field_0xFC = this->MapClass_field_0xFC; /*0x5788d4*/
    v7 = *a2; /*0x5788da*/
    v8 = a2[1]; /*0x5788dd*/
    MapClass_field_0x100 = this->MapClass_field_0x100; /*0x5788e1*/
    v10 = (__int16)((__int16)this->MapClass_field_0xF4 + (_WORD)MapClass_field_0x100 - (_WORD)MapClass_field_0xFC); /*0x5788fd*/
    v25 = (__int16)((_WORD)MapClass_field_0x100 + (_WORD)MapClass_field_0xFC + 1); /*0x57890e*/
    v26 = (6000 * a3 + v25 - v7) % a3; /*0x578928*/
    v12 = (6000 * a3 + (__int16)v10 - v8) % a3; /*0x57892d*/
    if ( v26 > 0 ) /*0x578939*/
      v7 += a3 - v26; /*0x57893f*/
    if ( v12 > 0 ) /*0x578947*/
      v8 += a3 - v12; /*0x57894d*/
    v27 = v25 + v10; /*0x57895b*/
    if ( a4 || (MapClass_field_0x108 = this->MapClass_field_0x108, v8 + v7 < v27 + 2 * (int)MapClass_field_0x108 / 3) ) /*0x578987*/
    {
      v23 = (__int16)v8 << 9; /*0x578a74*/
      v17 = (__int16)v7 + v23 < 0; /*0x578a77*/
      v24 = (__int16)v7 + v23; /*0x578a77*/
      LOWORD(v30) = v7; /*0x578a79*/
      HIWORD(v30) = v8; /*0x578a7e*/
      if ( v17 || v24 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v24)) == 0 ) /*0x578a97*/
      {
        g_MissionQueueFrame.briefing[139] = v30; /*0x578a9d*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578aa2*/
      }
    }
    else if ( v8 + v7 >= v27 + 4 * (int)MapClass_field_0x108 / 3 || a3 <= 2 ) /*0x5789ab*/
    {
      v19 = v8 - (a3 - 1); /*0x578a27*/
      v20 = v7 - (a3 - 1); /*0x578a29*/
      v21 = v19 << 9; /*0x578a31*/
      v17 = v20 + v21 < 0; /*0x578a34*/
      v22 = v20 + v21; /*0x578a34*/
      LOWORD(v29) = v20; /*0x578a36*/
      HIWORD(v29) = v19; /*0x578a3b*/
      if ( v17 || v22 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v22)) == 0 ) /*0x578a54*/
      {
        g_MissionQueueFrame.briefing[139] = v29; /*0x578a5c*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a62*/
      }
    }
    else
    {
      v14 = v8 - a3 / 2; /*0x5789c6*/
      v15 = v7 - a3 / 2; /*0x5789c8*/
      v16 = v14 << 9; /*0x5789d0*/
      v17 = v15 + v16 < 0; /*0x5789d3*/
      v18 = v15 + v16; /*0x5789d3*/
      LOWORD(v28) = v15; /*0x5789d5*/
      HIWORD(v28) = v14; /*0x5789da*/
      if ( v17 || v18 >= 0x40000 || (result = *(_DWORD **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v18)) == 0 ) /*0x5789f3*/
      {
        g_MissionQueueFrame.briefing[139] = v28; /*0x578a00*/
        return &g_MissionQueueFrame.briefing[130]; /*0x578a06*/
      }
    }
  }
  return result; /*0x5788bc*/
}



// ==== 0x00578AC0  MapClass::IncrementRedrawCounter  this=MapClass  sig=csp ====
void __thiscall MapClass::IncrementRedrawCounter(MapClass *this)
{
  ++this->__pad_D80[984]; /*0x578ac0*/
}



// ==== 0x00578AD0  Cell::IsPassableAllied  this=Cell  sig=csp ====
char __stdcall Cell_IsPassableAllied(int a1, __int16 *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  int v4; // esi

  v2 = *a2 + (a2[1] << 9); /*0x578ade*/
  if ( v2 >= 0x40000 || (v3 = *(_DWORD **)(dword_87F924 + 4 * v2)) == 0 ) /*0x578af4*/
  {
    dword_ABDC74 = *(_DWORD *)a2; /*0x578af8*/
    v3 = &unk_ABDC50; /*0x578afd*/
  }
  v4 = v3[57]; /*0x578b03*/
  if ( !v4 ) /*0x578b0c*/
    return 1; /*0x578b58*/
  while ( a1 == v4 /*0x578b30*/
       || (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 44))(v4) != 6
       || !*(_BYTE *)(*(_DWORD *)(v4 + 1312) + 5815) )
  {
LABEL_10:
    v4 = *(_DWORD *)(v4 + 48); /*0x578b4d*/
    if ( !v4 ) /*0x578b52*/
      return 1; /*0x578b52*/
  }
  if ( !Object::IsAlliedWithObjectHouse(*(_DWORD **)(v4 + 540), a1) ) /*0x578b39*/
  {
    if ( (unsigned __int8)BuildingClass::IsPoweredOn(v4) ) /*0x578b44*/
      return 1; /*0x578b4b*/
    goto LABEL_10; /*0x578b4b*/
  }
  return BuildingClass::MakeTraversable(v4); /*0x578b58*/
}



// ==== 0x00578B70  ObjectClass::method_578B70  this=ObjectClass  sig=csp ====
int __thiscall sub_578B70(ObjectClass *this, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 v4; // ax
  __int16 v5; // bp
  int v6; // edx
  int v7; // ecx
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // eax

  v2 = this->q040; /*0x578b77*/
  v3 = *((_DWORD *)this + 63); /*0x578b80*/
  v4 = v2 + this->q03D - v3; /*0x578b89*/
  v5 = v2 + v3 + 1; /*0x578b8b*/
  v6 = this->u32_41; /*0x578b8f*/
  v7 = *((_DWORD *)this + 66); /*0x578b95*/
  v8 = *a2; /*0x578bac*/
  v9 = a2[1]; /*0x578baf*/
  v10 = (v8 + v4 - ((2 * v6 - 1) % 3 != 0) - v5 - v9) / ((2 * v6 - 1) / 3); /*0x578bf4*/
  v11 = v9 - ((2 * v7 - 1) % 3 != 0) - v4 - v5; /*0x578c0d*/
  v12 = (unsigned __int64)(1431655766LL * (2 * v7 - 1)) >> 32; /*0x578c16*/
  v13 = (v8 + v11) / (int)((v12 >> 31) + v12); /*0x578c24*/
  if ( v10 == 3 ) /*0x578c28*/
    v10 = 2; /*0x578c2a*/
  if ( v13 == 3 ) /*0x578c32*/
    v13 = 2; /*0x578c34*/
  return v13 + v10 + 2 * v13 + 1; /*0x578c3c*/
}



// ==== 0x00578C50  ObjectClass::method_578C50  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_578C50(ObjectClass *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // edx
  __int16 v8; // [esp+12h] [ebp-Eh]
  int v9; // [esp+28h] [ebp+8h]

  v3 = ((2 * this->u32_41 - 1) % 3 != 0) + (2 * this->u32_41 - 1) / 3 * ((a3 - 1) % 3); /*0x578ca4*/
  v4 = this->q040; /*0x578ccc*/
  v5 = ((2 * *((_DWORD *)this + 66) - 1) % 3 != 0) + (a3 - 1) / 3 * ((2 * *((_DWORD *)this + 66) - 1) / 3); /*0x578cd8*/
  v6 = *((_DWORD *)this + 63); /*0x578cda*/
  v8 = v4 + this->q03D - v6; /*0x578cf0*/
  LOWORD(v9) = v4 + v6 + 1 + (v3 + (v5 & 1) + v5 + (v3 & 1)) / 2; /*0x578d34*/
  HIWORD(v9) = (v5 - v3) / 2 + v8; /*0x578d3f*/
  *a2 = v9; /*0x578d4b*/
  return a2; /*0x578d48*/
}



// ==== 0x00578D80  Map_Helper  this=-  sig=ida-proto ====
bool __fastcall sub_578D80(int a1, unsigned int a2)
{
  if ( a1 >= g_TerrainBuildConfig && a1 < g_TerrainBuildConfig + 40 ) /*0x578d8f*/
    return 1; /*0x578d94*/
  if ( a1 >= dword_AA073C && a1 < dword_AA073C + 4 ) /*0x578da3*/
  {
    if ( a1 == dword_AA073C || a1 == dword_AA073C + 3 ) /*0x578dae*/
      return a2 && a2 != 4; /*0x578dbf*/
    return 1; /*0x578e56*/
  }
  if ( a1 >= dword_ABB110 && a1 < dword_ABB110 + 4 ) /*0x578dd7*/
  {
    if ( a1 == dword_ABB110 || a1 == dword_ABB110 + 3 ) /*0x578de2*/
      return a2 != 1 && a2 != 3; /*0x578dec*/
    return 1; /*0x578de2*/
  }
  if ( a1 >= dword_AA1050 && a1 < dword_AA1050 + 4 ) /*0x578e00*/
  {
    if ( a1 == dword_AA1050 || a1 == dword_AA1050 + 3 ) /*0x578e0b*/
      return a2 >= 2; /*0x578e0f*/
    return 1; /*0x578e0b*/
  }
  if ( a1 >= dword_AA10A0 && a1 < dword_AA10A0 + 4 ) /*0x578e28*/
  {
    if ( a1 == dword_AA10A0 || a1 == dword_AA10A0 + 3 ) /*0x578e33*/
      return a2 != 2 && a2 != 3; /*0x578e3d*/
    return 1; /*0x578e33*/
  }
  return a1 >= dword_ABBEBC && a1 < dword_ABBEBC + 20; /*0x578d93*/
}



// ==== 0x00578E60  CreateMapObject  this=-  sig=csp ====
char __stdcall sub_578E60(int a1, int a2)
{
  char v2; // bl
  int v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  int v6; // edi
  int i; // esi
  char *Entry; // eax
  int j; // eax
  int k; // esi
  char v12; // [esp+13h] [ebp-5h]

  v2 = 1; /*0x578e72*/
  v12 = 0; /*0x578e74*/
  if ( !dword_ABED10 ) /*0x578e79*/
  {
    v3 = g_MapCellWidth * g_MapCellWidth; /*0x578e81*/
    v4 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x578e90*/
    if ( v4 ) /*0x578e97*/
    {
      v5 = v4; /*0x578e9c*/
      if ( v3 - 1 >= 0 ) /*0x578ea0*/
      {
        do /*0x578eb0*/
        {
          TileData::Constructor(v5); /*0x578ea7*/
          v5 += 20; /*0x578eac*/
          --v3; /*0x578eaf*/
        }
        while ( v3 ); /*0x578eb0*/
      }
      dword_ABED10 = v4; /*0x578eb2*/
    }
    else
    {
      dword_ABED10 = 0; /*0x578eba*/
    }
    v12 = 1; /*0x578ec4*/
  }
  v6 = g_MapCellWidth * g_MapCellWidth; /*0x578ed1*/
  for ( i = 0; i < v6; Entry[74] = 1 ) /*0x578ed8*/
    Entry = GetTileDataEntry(i++); /*0x578edc*/
  Mouse::SetBounds((int)&dword_87F7E8, 0); /*0x578ef0*/
  dword_87F8F8 = dword_87F8DC; /*0x578f00*/
  dword_87F8F4 = 1; /*0x578f0d*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f16*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f25*/
  for ( j = LayerClass::CellIteratorNext(&dword_87F7E8); j; j = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f35*/
  {
    if ( !v2 ) /*0x578f39*/
      break; /*0x578f39*/
    v2 = Cliff::ProcessTransitions(j, a2); /*0x578f4b*/
  }
  dword_87F8F8 = dword_87F8DC; /*0x578f61*/
  dword_87F8F4 = 1; /*0x578f66*/
  dword_87F8FC = dword_87F8DC - 1; /*0x578f72*/
  dword_87F900 = (dword_87F8DC << 11) + dword_87F924 + 4; /*0x578f81*/
  for ( k = LayerClass::CellIteratorNext(&dword_87F7E8); k; k = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x578f8f*/
  {
    if ( !v2 ) /*0x578f93*/
      break; /*0x578f93*/
    if ( !*(_BYTE *)(k + 284) && Cell::IsEmpty((_DWORD *)k) ) /*0x578fa1*/
      v2 = Terrain::SelectTileType(k, a2); /*0x578fb5*/
  }
  dword_880990 = 0; /*0x578fcd*/
  if ( dword_88098C ) /*0x578fd5*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_88098C + 32))(dword_88098C, 1); /*0x578fdb*/
    dword_88098C = 0; /*0x578fde*/
  }
  if ( v12 ) /*0x578fea*/
  {
    __3_YAXPAX_Z(dword_ABED10); /*0x578ff2*/
    dword_ABED10 = 0; /*0x578ffa*/
  }
  return v2; /*0x579000*/
}



// ==== 0x00579010  Cliff::ProcessTransitions  this=MapClass  sig=csp ====
char __stdcall Cliff_ProcessTransitions(int a1, int a2)
{
  int v2; // ebp
  char AdjacencyFlags; // al
  char v4; // bl
  int v5; // edi
  unsigned int v6; // eax
  void *v7; // eax
  unsigned int v8; // eax
  void *v9; // eax
  unsigned int v10; // eax
  void *v11; // eax
  unsigned int v12; // eax
  void *v13; // eax
  int v14; // eax
  int v15; // edi
  int v17; // edx
  signed int i; // esi
  void *NeighbourContent; // eax
  int v20; // [esp-4h] [ebp-24h]
  bool v21; // [esp+13h] [ebp-Dh]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-Ch]
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+14h] [ebp-Ch]

  v2 = a1; /*0x579015*/
  v21 = 0; /*0x579022*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(a1); /*0x579027*/
  v4 = AdjacencyFlags; /*0x57902c*/
  v5 = AdjacencyFlags & 0xA0; /*0x579030*/
  if ( v5 == 160 ) /*0x57903c*/
    v21 = (AdjacencyFlags & 0x11) == 17; /*0x579045*/
  if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57904d*/
  {
    v22 = *(_DWORD *)(v2 + 36); /*0x579052*/
    HIWORD(a1) = HIWORD(v22); /*0x57905e*/
    LOWORD(a1) = v22 + 1; /*0x579063*/
    v6 = (__int16)(v22 + 1) + (SHIWORD(v22) << 9); /*0x579071*/
    if ( v6 >= 0x40000 || (v7 = *(void **)(dword_87F924 + 4 * v6)) == 0 ) /*0x579087*/
    {
      dword_ABDC74 = a1; /*0x57908d*/
      v7 = &unk_ABDC50; /*0x579092*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v7) & 2) != 0 ) /*0x5790a1*/
      v21 = 1; /*0x5790a3*/
  }
  if ( (v4 & 2) != 0 ) /*0x5790ab*/
  {
    v23 = *(_DWORD *)(v2 + 36); /*0x5790b0*/
    HIWORD(a1) = HIWORD(v23); /*0x5790bc*/
    LOWORD(a1) = v23 - 1; /*0x5790c1*/
    v8 = (__int16)(v23 - 1) + (SHIWORD(v23) << 9); /*0x5790cf*/
    if ( v8 >= 0x40000 || (v9 = *(void **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5790e5*/
    {
      dword_ABDC74 = a1; /*0x5790eb*/
      v9 = &unk_ABDC50; /*0x5790f0*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v9) & 0x20) != 0 ) /*0x5790ff*/
      v21 = 1; /*0x579101*/
  }
  if ( (v4 & 8) != 0 ) /*0x579109*/
  {
    v24 = *(_DWORD *)(v2 + 36); /*0x57910e*/
    a1 = v24 - 0x10000; /*0x57911e*/
    v10 = (__int16)v24 + ((__int16)(HIWORD(v24) - 1) << 9); /*0x57912c*/
    if ( v10 >= 0x40000 || (v11 = *(void **)(dword_87F924 + 4 * v10)) == 0 ) /*0x579142*/
    {
      dword_ABDC74 = a1; /*0x579148*/
      v11 = &unk_ABDC50; /*0x57914d*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v11) & 0x80u) != 0 ) /*0x57915c*/
      v21 = 1; /*0x57915e*/
  }
  if ( v4 < 0 ) /*0x579166*/
  {
    v25 = *(_DWORD *)(v2 + 36); /*0x57916b*/
    a1 = v25 + 0x10000; /*0x57917b*/
    v12 = (__int16)v25 + ((__int16)(HIWORD(v25) + 1) << 9); /*0x579189*/
    if ( v12 >= 0x40000 || (v13 = *(void **)(dword_87F924 + 4 * v12)) == 0 ) /*0x57919f*/
    {
      dword_ABDC74 = a1; /*0x5791a5*/
      v13 = &unk_ABDC50; /*0x5791aa*/
    }
    if ( (Cell::GetAdjacencyFlags((int)v13) & 8) != 0 ) /*0x5791b9*/
      v21 = 1; /*0x5791bb*/
  }
  if ( (v4 & 0x11) == 0x11 && ((v4 & 0xA) != 0xA || (v4 & 0xE0) != 0) && (v5 != 160 || (v4 & 0xE) != 0) ) /*0x5791e4*/
    v21 = 1; /*0x5791e6*/
  if ( (v4 & 0x44) == 0x44 && ((v4 & 0x28) != 0x28 || (v4 & 0x83) != 0) && ((v4 & 0x82) != 0x82 || (v4 & 0x38) != 0) ) /*0x579213*/
    v21 = 1; /*0x579215*/
  if ( (v4 & 0x2C) == 0x24 /*0x57926f*/
    || (v4 & 0xA1) == 0x21
    || (v4 & 0x1A) == 0x12
    || (v4 & 0xC2) == 0x42
    || (v4 & 0xB) == 9
    || (v4 & 0x68) == 0x48
    || (v4 & 0x86) == 0x84
    || (v4 & 0xB0) == 0x90 )
  {
    v21 = 1; /*0x579271*/
  }
  if ( (v4 & 0x88) == 0x88 || (v4 & 0x22) == 0x22 || v21 ) /*0x579291*/
  {
    a1 = *(_DWORD *)(v2 + 36); /*0x5792a0*/
    v14 = MapClass::GetTileDataField14(&a1); /*0x5792a4*/
    v15 = a2; /*0x5792a9*/
    if ( v14 > 0 && v14 != a2 && a2 != -1 ) /*0x5792b8*/
      return 0; /*0x5792c3*/
    v17 = *(_DWORD *)(v2 + 36); /*0x5792cc*/
    v20 = a2; /*0x5792d6*/
    *(_BYTE *)(v2 + 283) += 4; /*0x5792dd*/
    a1 = v17; /*0x5792e3*/
    MapClass::SetObstruction(&a1, v20); /*0x5792e7*/
    for ( i = 0; i < 8; ++i ) /*0x5792ec*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v2, i); /*0x5792f2*/
      Cliff::ProcessTransitions(NeighbourContent, v15); /*0x5792fc*/
    }
  }
  return 1; /*0x5792ba*/
}



// ==== 0x00579320  InitializeTileNeighborTable  this=-  sig=ida-proto ====
int InitializeTileNeighborTable()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-4h] BYREF

  dword_ABDDA8 = 0; /*0x57934e*/
  dword_ABDDAC = 0; /*0x579361*/
  dword_ABDDB0 = 0; /*0x579375*/
  dword_ABDDB4 = 0; /*0x579389*/
  v1 = 0; /*0x57938e*/
  dword_ABDDB8 = 0; /*0x57939c*/
  dword_ABDDC4 = 0; /*0x5793b1*/
  dword_ABDDBC = 0; /*0x5793bc*/
  dword_ABDDC0 = 0; /*0x5793c2*/
  dword_ABDDC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793d4*/
  dword_ABDDCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793e7*/
  dword_ABDDD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5793f4*/
  dword_ABDDD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57940c*/
  dword_ABDDD8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57941f*/
  dword_ABDDDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57942c*/
  dword_ABDDE0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579444*/
  dword_ABDDE4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579457*/
  dword_ABDDE8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579464*/
  dword_ABDDEC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57947c*/
  dword_ABDDF0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57948f*/
  dword_ABDDF4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57949c*/
  dword_ABDDF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794b4*/
  dword_ABDDFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794c7*/
  dword_ABDE00 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794d4*/
  dword_ABDE04 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ec*/
  dword_ABDE08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5794ff*/
  dword_ABDE0C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57950c*/
  dword_ABDE10 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579524*/
  dword_ABDE14 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579537*/
  dword_ABDE18 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579544*/
  dword_ABDE1C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57955c*/
  dword_ABDE20 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579570*/
  dword_ABDE24 = *(_DWORD *)CellStruct::Set(&v1, 1, 0); /*0x57957d*/
  dword_ABDE28 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579595*/
  dword_ABDE2C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795a8*/
  dword_ABDE30 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795b5*/
  dword_ABDE34 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795cd*/
  dword_ABDE38 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795e0*/
  dword_ABDE3C = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x5795ed*/
  dword_ABDE40 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579605*/
  result = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x579610*/
  dword_ABDE44 = result; /*0x579613*/
  return result; /*0x579612*/
}



// ==== 0x00579620  Terrain::SelectTileType  this=MapClass  sig=csp ====
bool __stdcall Terrain_SelectTileType(int a1, int a2)
{
  int v2; // eax
  int v3; // ebp
  int AdjacencyFlags; // ebx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  char v7; // bl
  unsigned int v8; // eax
  _DWORD *v9; // eax
  char v10; // al
  int v11; // edx
  unsigned int v12; // eax
  _DWORD *v13; // eax
  char v14; // si
  unsigned int v15; // eax
  _DWORD *v16; // eax
  char v17; // al
  int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  _DWORD *v23; // eax
  char v24; // si
  unsigned int v25; // eax
  _DWORD *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  _DWORD *v29; // eax
  char v30; // al
  int v31; // eax
  __int16 v32; // cx
  __int16 v33; // dx
  char v35; // [esp-10h] [ebp-34h]
  int v36; // [esp+10h] [ebp-14h]
  int v37; // [esp+14h] [ebp-10h] BYREF
  int v38; // [esp+1Ch] [ebp-8h] BYREF

  v2 = Range_RandomInt(0, 5u); /*0x579630*/
  v3 = a1; /*0x579635*/
  v36 = v2; /*0x57963c*/
  AdjacencyFlags = Cell::GetAdjacencyFlags(a1); /*0x579645*/
  v38 = AdjacencyFlags; /*0x57964e*/
  if ( (AdjacencyFlags & 0xA0) == 0xA0 ) /*0x579652*/
  {
    v37 = *(_DWORD *)(v3 + 36); /*0x57965b*/
    a1 = v37 + 0x10000; /*0x57966b*/
    v5 = (__int16)v37 + ((__int16)(HIWORD(v37) + 1) << 9); /*0x579679*/
    if ( v5 >= 0x40000 || (v6 = *(_DWORD **)(dword_87F924 + 4 * v5)) == 0 ) /*0x57968f*/
    {
      dword_ABDC74 = a1; /*0x579695*/
      v6 = unk_ABDC50; /*0x57969a*/
    }
    v7 = Cell::GetAdjacencyFlags((int)v6); /*0x5796a7*/
    v37 = *(_DWORD *)(v3 + 36); /*0x5796ac*/
    HIWORD(a1) = HIWORD(v37); /*0x5796b8*/
    LOWORD(a1) = v37 + 1; /*0x5796bd*/
    v8 = (__int16)(v37 + 1) + (SHIWORD(v37) << 9); /*0x5796cb*/
    if ( v8 >= 0x40000 || (v9 = *(_DWORD **)(dword_87F924 + 4 * v8)) == 0 ) /*0x5796e1*/
    {
      dword_ABDC74 = a1; /*0x5796e7*/
      v9 = unk_ABDC50; /*0x5796ec*/
    }
    v10 = Cell::GetAdjacencyFlags((int)v9); /*0x5796f4*/
    if ( (v7 & 0x20) != 0 || v10 < 0 ) /*0x579704*/
    {
      v11 = 34; /*0x5797fc*/
      goto LABEL_82; /*0x579801*/
    }
    v11 = v36 % 3 + 9; /*0x579716*/
    if ( v36 % 3 != -10 ) /*0x57971c*/
      goto LABEL_81; /*0x57971c*/
    LOBYTE(AdjacencyFlags) = v38; /*0x579722*/
  }
  else
  {
    if ( (AdjacencyFlags & 0x82) == 0x82 ) /*0x579811*/
    {
      v11 = 39; /*0x579813*/
      goto LABEL_82; /*0x579818*/
    }
    if ( (AdjacencyFlags & 0xA) == 0xA ) /*0x579824*/
    {
      v11 = 33; /*0x579826*/
      goto LABEL_82; /*0x57982b*/
    }
    if ( (AdjacencyFlags & 0x28) == 0x28 ) /*0x579838*/
    {
      v11 = 40; /*0x57983e*/
      goto LABEL_82; /*0x579843*/
    }
  }
  if ( (AdjacencyFlags & 2) == 0 ) /*0x579729*/
  {
    if ( (AdjacencyFlags & 0x20) != 0 ) /*0x57986f*/
    {
      v38 = *(_DWORD *)(v3 + 36); /*0x579878*/
      a1 = v38 + 0x10000; /*0x579888*/
      v19 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579896*/
      if ( v19 >= 0x40000 || (v20 = *(_DWORD **)(dword_87F924 + 4 * v19)) == 0 ) /*0x5798ac*/
      {
        dword_ABDC74 = a1; /*0x5798b2*/
        v20 = unk_ABDC50; /*0x5798b7*/
      }
      v21 = Cell::GetAdjacencyFlags((int)v20); /*0x5798bf*/
      if ( (AdjacencyFlags & 0x10) == 0 || (AdjacencyFlags & 0xC) != 0 || (v21 & 0x28) == 0x28 ) /*0x5798d3*/
      {
        v11 = 18; /*0x5798f6*/
        goto LABEL_82; /*0x5798fb*/
      }
      v11 = v36 % 3 + 15; /*0x5798e1*/
    }
    else if ( (AdjacencyFlags & 8) != 0 ) /*0x579903*/
    {
      v38 = *(_DWORD *)(v3 + 36); /*0x57990c*/
      HIWORD(a1) = HIWORD(v38); /*0x579918*/
      LOWORD(a1) = v38 + 1; /*0x57991d*/
      v22 = (__int16)(v38 + 1) + (SHIWORD(v38) << 9); /*0x57992b*/
      if ( v22 >= 0x40000 || (v23 = *(_DWORD **)(dword_87F924 + 4 * v22)) == 0 ) /*0x579941*/
      {
        v23 = unk_ABDC50; /*0x579947*/
        dword_ABDC74 = a1; /*0x57994c*/
      }
      v24 = Cell::GetAdjacencyFlags((int)v23); /*0x57995a*/
      v38 = *(_DWORD *)(v3 + 36); /*0x57995f*/
      LOWORD(a1) = v38 + 1; /*0x57996b*/
      HIWORD(a1) = HIWORD(v38) + 1; /*0x579970*/
      v25 = (__int16)(v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x57997e*/
      if ( v25 >= 0x40000 || (v26 = *(_DWORD **)(dword_87F924 + 4 * v25)) == 0 ) /*0x579994*/
      {
        dword_ABDC74 = a1; /*0x57999a*/
        v26 = unk_ABDC50; /*0x57999f*/
      }
      v27 = Cell::GetAdjacencyFlags((int)v26); /*0x5799a7*/
      if ( (AdjacencyFlags & 4) == 0 || (AdjacencyFlags & 3) != 0 || (v24 & 0xA) == 0xA ) /*0x5799be*/
      {
        if ( (AdjacencyFlags & 6) != 0 || (v27 & 8) != 0 || (v36 & 1) == 0 ) /*0x5799e2*/
          v11 = 26; /*0x5799ee*/
        else
          v11 = 21; /*0x5799e4*/
        goto LABEL_82; /*0x5799e9*/
      }
      v11 = v36 % 3 + 23; /*0x5799cc*/
    }
    else
    {
      if ( (AdjacencyFlags & 0x80u) == 0 ) /*0x5799fb*/
      {
        v18 = v36; /*0x579a7c*/
LABEL_73:
        if ( (AdjacencyFlags & 1) != 0 ) /*0x579a83*/
        {
          v11 = 2; /*0x579a85*/
          goto LABEL_82; /*0x579a8a*/
        }
        if ( (AdjacencyFlags & 4) != 0 ) /*0x579a8f*/
        {
          v11 = (v18 & 1) + 29; /*0x579a97*/
        }
        else
        {
          if ( (AdjacencyFlags & 0x10) != 0 ) /*0x579a9e*/
          {
            v11 = 22; /*0x579aa0*/
            goto LABEL_82; /*0x579aa5*/
          }
          if ( (AdjacencyFlags & 0x40) == 0 ) /*0x579aaa*/
            return 1; /*0x579aaa*/
          v11 = v18 % 3 + 12; /*0x579aba*/
        }
LABEL_81:
        if ( v11 <= 0 ) /*0x579abf*/
          return 1; /*0x579abf*/
        goto LABEL_82; /*0x579abf*/
      }
      v38 = *(_DWORD *)(v3 + 36); /*0x579a00*/
      HIWORD(a1) = HIWORD(v38); /*0x579a0c*/
      LOWORD(a1) = v38 + 1; /*0x579a11*/
      v28 = (__int16)(v38 + 1) + (SHIWORD(v38) << 9); /*0x579a1f*/
      if ( v28 >= 0x40000 || (v29 = *(_DWORD **)(dword_87F924 + 4 * v28)) == 0 ) /*0x579a35*/
      {
        v29 = unk_ABDC50; /*0x579a3b*/
        dword_ABDC74 = a1; /*0x579a40*/
      }
      v30 = Cell::GetAdjacencyFlags((int)v29); /*0x579a49*/
      if ( (AdjacencyFlags & 1) == 0 || (AdjacencyFlags & 6) != 0 || (v30 & 0x82) == 0x82 ) /*0x579a5f*/
      {
        v11 = 8; /*0x579a75*/
        goto LABEL_82; /*0x579a7a*/
      }
      v11 = v36 % 3 + 5; /*0x579a6d*/
    }
    v18 = v36; /*0x5798e4*/
LABEL_44:
    if ( v11 != -1 ) /*0x5798eb*/
      goto LABEL_81; /*0x5798eb*/
    goto LABEL_73; /*0x5798eb*/
  }
  v38 = *(_DWORD *)(v3 + 36); /*0x579732*/
  a1 = v38 + 0x10000; /*0x579742*/
  v12 = (__int16)v38 + ((__int16)(HIWORD(v38) + 1) << 9); /*0x579750*/
  if ( v12 >= 0x40000 || (v13 = *(_DWORD **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579766*/
  {
    dword_ABDC74 = a1; /*0x57976c*/
    v13 = unk_ABDC50; /*0x579771*/
  }
  v14 = Cell::GetAdjacencyFlags((int)v13); /*0x57977e*/
  v38 = *(_DWORD *)(v3 + 36); /*0x579783*/
  LOWORD(a1) = v38 + 1; /*0x579791*/
  HIWORD(a1) = HIWORD(v38) + 1; /*0x579796*/
  v15 = (__int16)(v38 + 1) + ((__int16)(HIWORD(v38) + 1) << 9); /*0x5797a4*/
  if ( v15 >= 0x40000 || (v16 = *(_DWORD **)(dword_87F924 + 4 * v15)) == 0 ) /*0x5797ba*/
  {
    dword_ABDC74 = a1; /*0x5797c0*/
    v16 = unk_ABDC50; /*0x5797c5*/
  }
  v17 = Cell::GetAdjacencyFlags((int)v16); /*0x5797cd*/
  if ( (AdjacencyFlags & 4) != 0 && (AdjacencyFlags & 0x18) == 0 && (v14 & 0xA) != 0xA ) /*0x5797e4*/
  {
    v18 = v36; /*0x5797e6*/
    v11 = v36 % 3 + 35; /*0x5797f4*/
    goto LABEL_44; /*0x5797f7*/
  }
  if ( (AdjacencyFlags & 0xC) != 0 || (v17 & 2) != 0 || (v36 & 1) == 0 ) /*0x579856*/
    v11 = 38; /*0x579862*/
  else
    v11 = 1; /*0x579858*/
LABEL_82:
  dword_880990 = *((_DWORD *)dword_A8ED2C + v11 + g_TerrainBuildConfig - 1); /*0x579ac5*/
  v31 = *(_DWORD *)(v3 + 36); /*0x579adb*/
  v32 = MEMORY[0xABDDA4][2 * v11]; /*0x579ade*/
  v33 = MEMORY[0xABDDA6][2 * v11]; /*0x579ae6*/
  LOWORD(a1) = v31 + v32; /*0x579afa*/
  HIWORD(a1) = HIWORD(v31) + v33; /*0x579aff*/
  v38 = a1; /*0x579b17*/
  Tactical::MouseMove((int)&dword_87F7E8, &v37, &v38); /*0x579b1b*/
  v35 = *(_BYTE *)(v3 + 283); /*0x579b33*/
  LOBYTE(a1) = 1; /*0x579b3a*/
  return GenerateTerrainMap(0, 0, v35, a2, &a1, 0) || (_BYTE)a1; /*0x579b4e*/
}



// ==== 0x00579B70  Cell::GetAdjacencyFlags  this=Cell  sig=csp ====
int __stdcall Cell_GetAdjacencyFlags(int a1)
{
  __int16 v1; // cx
  unsigned int v2; // eax
  char *v3; // eax
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  char *v7; // eax
  __int16 v8; // dx
  unsigned int v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  __int16 v14; // cx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // esi
  unsigned int v21; // eax
  char *v22; // eax
  char *v23; // ebp
  unsigned int v24; // eax
  char *v25; // eax
  char *v26; // ebx
  int v27; // edi
  int v28; // edi
  int v29; // ebp
  _WORD *v30; // eax
  _WORD *v31; // eax
  _WORD *v32; // eax
  _WORD *v33; // eax
  int v35; // [esp+Ch] [ebp-2Ch]
  char *v36; // [esp+10h] [ebp-28h]
  char *v37; // [esp+14h] [ebp-24h]
  char *v38; // [esp+18h] [ebp-20h]
  char *v39; // [esp+1Ch] [ebp-1Ch]
  char *v40; // [esp+20h] [ebp-18h]
  char *v41; // [esp+24h] [ebp-14h]
  int v42; // [esp+28h] [ebp-10h] BYREF
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  __int16 v44[4]; // [esp+30h] [ebp-8h] BYREF

  v35 = *(char *)(a1 + 283); /*0x579b89*/
  a1 = *(_DWORD *)(a1 + 36); /*0x579b8d*/
  *(_DWORD *)v44 = a1; /*0x579b91*/
  if ( SHIWORD(a1) + (__int16)a1 <= dword_87F8DC /*0x579bdf*/
    || (__int16)a1 - SHIWORD(a1) >= dword_87F8DC
    || SHIWORD(a1) - (__int16)a1 >= dword_87F8DC
    || SHIWORD(a1) + (__int16)a1 > dword_87F8DC + 2 * dword_87F8E0
    || !*(_BYTE *)(Tactical::GetCellData(v44) + 74) )
  {
    return 0; /*0x57a0b0*/
  }
  v1 = v44[0] + 1; /*0x579bfa*/
  LOWORD(a1) = v44[0] + 1; /*0x579c00*/
  v42 = *(_DWORD *)&v44[1] - 1; /*0x579c05*/
  HIWORD(a1) = v44[1] - 1; /*0x579c09*/
  v2 = (__int16)(v44[0] + 1) + ((__int16)(v44[1] - 1) << 9); /*0x579c17*/
  if ( v2 < 0x40000 && (v3 = *(char **)(dword_87F924 + 4 * v2)) != 0 ) /*0x579c27*/
  {
    v36 = v3; /*0x579c29*/
  }
  else
  {
    v36 = (char *)&unk_ABDC50; /*0x579c33*/
    dword_ABDC74 = a1; /*0x579c3b*/
  }
  LOWORD(a1) = v44[0] + 1; /*0x579c45*/
  v4 = v44[1] << 9; /*0x579c4d*/
  v5 = v1 + v4 < 0; /*0x579c50*/
  v6 = v1 + v4; /*0x579c50*/
  HIWORD(a1) = v44[1]; /*0x579c52*/
  if ( v5 || v6 >= 0x40000 || (v7 = *(char **)(dword_87F924 + 4 * v6)) == 0 ) /*0x579c65*/
  {
    v38 = (char *)&unk_ABDC50; /*0x579c71*/
    dword_ABDC74 = a1; /*0x579c79*/
  }
  else
  {
    v38 = v7; /*0x579c67*/
  }
  v8 = v44[1] + 1; /*0x579c7e*/
  LOWORD(a1) = v44[0] + 1; /*0x579c81*/
  HIWORD(a1) = v44[1] + 1; /*0x579c89*/
  v9 = v1 + ((__int16)(v44[1] + 1) << 9); /*0x579c97*/
  if ( v9 < 0x40000 && (v10 = *(char **)(dword_87F924 + 4 * v9)) != 0 ) /*0x579ca7*/
  {
    v41 = v10; /*0x579ca9*/
  }
  else
  {
    v41 = (char *)&unk_ABDC50; /*0x579cb3*/
    dword_ABDC74 = a1; /*0x579cbb*/
  }
  a1 = *(_DWORD *)v44 + 0x10000; /*0x579cc8*/
  v11 = v8 << 9; /*0x579cd3*/
  v5 = v44[0] + v11 < 0; /*0x579cd6*/
  v12 = v44[0] + v11; /*0x579cd6*/
  v43 = v44[0]; /*0x579cd8*/
  if ( v5 || v12 >= 0x40000 || (v13 = *(char **)(dword_87F924 + 4 * v12)) == 0 ) /*0x579cea*/
  {
    v40 = (char *)&unk_ABDC50; /*0x579cf6*/
    dword_ABDC74 = a1; /*0x579cfe*/
  }
  else
  {
    v40 = v13; /*0x579cec*/
  }
  v14 = v44[0] - 1; /*0x579d04*/
  HIWORD(a1) = v44[1] + 1; /*0x579d07*/
  v15 = v8; /*0x579d0c*/
  v16 = (__int16)(v44[0] - 1); /*0x579d0f*/
  v15 <<= 9; /*0x579d12*/
  v5 = v16 + v15 < 0; /*0x579d15*/
  v17 = v16 + v15; /*0x579d15*/
  LOWORD(a1) = v44[0] - 1; /*0x579d17*/
  if ( v5 || v17 >= 0x40000 || (v18 = *(char **)(dword_87F924 + 4 * v17)) == 0 ) /*0x579d2a*/
  {
    v39 = (char *)&unk_ABDC50; /*0x579d36*/
    dword_ABDC74 = a1; /*0x579d3e*/
  }
  else
  {
    v39 = v18; /*0x579d2c*/
  }
  HIWORD(a1) = v44[1]; /*0x579d46*/
  v19 = v44[1] << 9; /*0x579d4e*/
  v5 = v14 + v19 < 0; /*0x579d51*/
  v20 = v14 + v19; /*0x579d51*/
  LOWORD(a1) = v44[0] - 1; /*0x579d53*/
  if ( v5 || v20 >= 0x40000 || !*(_DWORD *)(dword_87F924 + 4 * v20) ) /*0x579d63*/
  {
    v37 = (char *)&unk_ABDC50; /*0x579d74*/
    dword_ABDC74 = a1; /*0x579d7c*/
  }
  else
  {
    v37 = *(char **)(dword_87F924 + 4 * v20); /*0x579d6a*/
  }
  LOWORD(a1) = v44[0] - 1; /*0x579d85*/
  HIWORD(a1) = v42; /*0x579d8d*/
  v21 = v14 + ((__int16)v42 << 9); /*0x579d9b*/
  if ( v21 < 0x40000 && (v22 = *(char **)(dword_87F924 + 4 * v21)) != 0 ) /*0x579dab*/
  {
    v23 = v22; /*0x579dad*/
  }
  else
  {
    v23 = (char *)&unk_ABDC50; /*0x579db5*/
    dword_ABDC74 = a1; /*0x579dba*/
  }
  HIWORD(a1) = v42; /*0x579dc6*/
  LOWORD(a1) = v44[0]; /*0x579dcb*/
  v24 = v43 + ((__int16)v42 << 9); /*0x579dd6*/
  if ( v24 < 0x40000 && (v25 = *(char **)(dword_87F924 + 4 * v24)) != 0 ) /*0x579de6*/
  {
    v26 = v25; /*0x579de8*/
  }
  else
  {
    v26 = (char *)&unk_ABDC50; /*0x579df0*/
    dword_ABDC74 = a1; /*0x579df5*/
  }
  v27 = v14 + (__int16)v42; /*0x579e07*/
  if ( v27 <= dword_87F8DC /*0x579e27*/
    || v14 - (__int16)v42 >= dword_87F8DC
    || (__int16)v42 - v14 >= dword_87F8DC
    || v27 > dword_87F8DC + 2 * dword_87F8E0 )
  {
    v29 = 0; /*0x579e53*/
    v28 = v35; /*0x579e57*/
  }
  else
  {
    v28 = v35; /*0x579e29*/
    if ( v23[283] != v35 + 4 || CellLand::IsBuildable((int)v23) ) /*0x579e3d*/
      v29 = 0; /*0x579e4d*/
    else
      v29 = 64; /*0x579e46*/
  }
  a1 = *(_DWORD *)v44 - 0x10000; /*0x579e6a*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579e9a*/
    && v26[283] == v28 + 4
    && !CellLand::IsBuildable((int)v26) )
  {
    v29 |= 0x80u; /*0x579ea3*/
  }
  a1 = -65535; /*0x579eba*/
  v43 = *CellStruct::Add(v44, &v42, &a1); /*0x579ed7*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&v43) /*0x579ef6*/
    && v36[283] == v28 + 4
    && !CellLand::IsBuildable((int)v36) )
  {
    v29 |= 1u; /*0x579eff*/
  }
  a1 = 0xFFFF; /*0x579f10*/
  v43 = *CellStruct::Add(v44, &v42, &a1); /*0x579f2d*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&v43) /*0x579f4c*/
    && v37[283] == v28 + 4
    && !CellLand::IsBuildable((int)v37) )
  {
    v29 |= 0x20u; /*0x579f55*/
  }
  v30 = CellStruct::Set(&v43, 1, 0); /*0x579f60*/
  a1 = *CellStruct::Add(v44, &v42, v30); /*0x579f80*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579f9f*/
    && v38[283] == v28 + 4
    && !CellLand::IsBuildable((int)v38) )
  {
    v29 |= 2u; /*0x579fa8*/
  }
  v31 = CellStruct::Set(&v43, -1, 1); /*0x579fb2*/
  a1 = *CellStruct::Add(v44, &v42, v31); /*0x579fd2*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x579ff1*/
    && v39[283] == v28 + 4
    && !CellLand::IsBuildable((int)v39) )
  {
    v29 |= 0x10u; /*0x579ffa*/
  }
  v32 = CellStruct::Set(&v43, 0, 1); /*0x57a005*/
  a1 = *CellStruct::Add(v44, &v42, v32); /*0x57a025*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x57a044*/
    && v40[283] == v28 + 4
    && !CellLand::IsBuildable((int)v40) )
  {
    v29 |= 8u; /*0x57a04d*/
  }
  v33 = CellStruct::Set(&v43, 1, 1); /*0x57a058*/
  a1 = *CellStruct::Add(v44, &v42, v33); /*0x57a078*/
  if ( LayerClass::CoordinatesLegal(&dword_87F7E8, (__int16 *)&a1) /*0x57a097*/
    && v41[283] == v28 + 4
    && !CellLand::IsBuildable((int)v41) )
  {
    return v29 | 4; /*0x57a0a0*/
  }
  return v29; /*0x57a0a7*/
}



// ==== 0x0057A0C0  MapClass::InitTileData  this=MapClass  sig=csp ====
char __thiscall MapClass::InitTileData(MapClass *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  TileData *v8; // edi
  int v9; // esi
  int v10; // esi
  int i; // edi
  char *TileDataEntry; // eax
  int v13; // eax
  int v14; // edx
  char j; // bl
  int k; // eax
  int *m; // eax
  int v18; // edx
  int *n; // eax
  int v20; // edx
  char v22; // [esp+13h] [ebp-1h]

  Mouse::SetBounds((int)&stru_87F5F0.__pad_58[416], 0); /*0x57a0ce*/
  v22 = 0; /*0x57a0d8*/
  if ( !g_MissionQueueFrame.localVariables[163] ) /*0x57a0df*/
  {
    v4 = g_MapCellWidth * g_MapCellWidth; /*0x57a0e7*/
    v5 = __2_YAPAXI_Z(80 * g_MapCellWidth * g_MapCellWidth); /*0x57a0f1*/
    v6 = v5; /*0x57a0f6*/
    if ( v5 ) /*0x57a0fd*/
    {
      v7 = v4 - 1; /*0x57a0ff*/
      v8 = (TileData *)v5; /*0x57a100*/
      if ( v7 >= 0 ) /*0x57a104*/
      {
        v9 = v7 + 1; /*0x57a106*/
        do /*0x57a112*/
        {
          TileData::Constructor(v8); /*0x57a109*/
          v8 += 20; /*0x57a10e*/
          --v9; /*0x57a111*/
        }
        while ( v9 ); /*0x57a112*/
      }
      g_MissionQueueFrame.localVariables[163] = v6; /*0x57a114*/
    }
    else
    {
      g_MissionQueueFrame.localVariables[163] = 0; /*0x57a11c*/
    }
    v22 = 1; /*0x57a126*/
  }
  v10 = 0; /*0x57a131*/
  for ( i = g_MapCellWidth * g_MapCellWidth; v10 < i; *((_DWORD *)TileDataEntry + 16) = -1 ) /*0x57a138*/
    TileDataEntry = GetTileDataEntry(v10++); /*0x57a13f*/
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a157*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a15c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a16c*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a17b*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a180*/
  for ( j = 1; v13; v13 = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) ) /*0x57a191*/
  {
    if ( !j ) /*0x57a195*/
      break; /*0x57a195*/
    j = RecursiveCellClassNeighbourUpdate(this, v14, v13, a2, a3); /*0x57a1a6*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a1bc*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a1c1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a1d1*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a1e0*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a1ec*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a1f0*/
      break; /*0x57a1f0*/
    MapClass::BuildTileConnectivityGraph(this, k, a2, a3); /*0x57a1f7*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a215*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a21a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a22a*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a239*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a245*/
        m;
        m = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a249*/
      break; /*0x57a249*/
    j = GenerateMapClassCliffTransitions(this, v18, m, 1, a2, a3); /*0x57a25c*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_58[688] = *(_DWORD *)&stru_87F5F0.__pad_58[660]; /*0x57a272*/
  *(_DWORD *)&stru_87F5F0.__pad_58[684] = 1; /*0x57a277*/
  *(_DWORD *)&stru_87F5F0.__pad_58[692] = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x57a287*/
  *(_DWORD *)&stru_87F5F0.__pad_58[696] = (*(_DWORD *)&stru_87F5F0.__pad_58[660] << 11) /*0x57a296*/
                                        + *(_DWORD *)&stru_87F5F0.__pad_58[732]
                                        + 4;
  for ( n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x57a2a2*/
        n;
        n = (int *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( !j ) /*0x57a2a6*/
      break; /*0x57a2a6*/
    j = GenerateMapClassCliffTransitions(this, v20, n, 2, a2, a3); /*0x57a2b9*/
  }
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = 0; /*0x57a2ca*/
  if ( *(_DWORD *)&stru_87F5F0.__pad_E12[1418] ) /*0x57a2d6*/
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&stru_87F5F0.__pad_E12[1418] + 32))( /*0x57a2dc*/
      *(_DWORD *)&stru_87F5F0.__pad_E12[1418],
      1);
    *(_DWORD *)&stru_87F5F0.__pad_E12[1418] = 0; /*0x57a2df*/
  }
  if ( v22 ) /*0x57a2ef*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x57a2f7*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x57a2ff*/
  }
  return j; /*0x57a309*/
}



// ==== 0x0057A320  MapClass::BuildTileConnectivityGraph  this=MapClass  sig=csp ====
int __thiscall MapClass::BuildTileConnectivityGraph(MapClass *this, int a2, int a3, int a4)
{
  Cell *v4; // ebp
  int result; // eax
  signed int v6; // ebx
  bool v7; // zf
  int *NeighbourContent; // esi
  int v9; // edx
  int v10; // edi
  char *CellData; // edi

  v4 = (Cell *)a2; /*0x57a328*/
  result = *(_DWORD *)(a2 + 56); /*0x57a330*/
  if ( result >= g_CellPassabilityLUT && result < g_CellPassabilityLUT + 12 ) /*0x57a340*/
  {
    result = Cell::GetTerrainMask((Cell *)this, (int *)a2, 2); /*0x57a349*/
    if ( result == 199 /*0x57a37c*/
      || result == 124
      || result == 241
      || result == 31
      || result == 198
      || result == 108
      || result == 177
      || result == 27 )
    {
      v6 = 0; /*0x57a387*/
      v7 = (_BYTE)a4 == 0; /*0x57a38a*/
      *(_DWORD *)(a2 + 56) = 0xFFFF; /*0x57a38d*/
      *(_BYTE *)(a2 + 282) = 0; /*0x57a394*/
      if ( !v7 ) /*0x57a39a*/
        *((_DWORD *)Tactical::GetCellData((Tactical *)(a2 + 36)) + 14) = a3; /*0x57a3a8*/
      do /*0x57a41e*/
      {
        NeighbourContent = (int *)Cell::GetNeighbourContent(v4, v6); /*0x57a3b3*/
        v9 = NeighbourContent[9]; /*0x57a3b5*/
        a4 = v9; /*0x57a3ba*/
        result = SHIWORD(v9); /*0x57a3c1*/
        v10 = SHIWORD(v9) + (__int16)v9; /*0x57a3c6*/
        if ( v10 > g_MissionQueueFrame.localVariables[160] ) /*0x57a3cf*/
        {
          if ( (__int16)a4 - SHIWORD(a4) < g_MissionQueueFrame.localVariables[160] ) /*0x57a3db*/
          {
            result = SHIWORD(a4) - (__int16)a4; /*0x57a3dd*/
            if ( result < g_MissionQueueFrame.localVariables[160] && v10 <= g_MissionQueueFrame.localVariables[161] ) /*0x57a3ef*/
            {
              a4 = v9; /*0x57a3f5*/
              CellData = Tactical::GetCellData((Tactical *)&a4); /*0x57a402*/
              *((_DWORD *)CellData + 16) = -1; /*0x57a407*/
              result = Cell::GetTerrainMask((Cell *)this, NeighbourContent, 2); /*0x57a40e*/
              *((_DWORD *)CellData + 16) = result; /*0x57a413*/
            }
          }
          v4 = (Cell *)a2; /*0x57a416*/
        }
        ++v6; /*0x57a41a*/
      }
      while ( v6 < 8 ); /*0x57a41e*/
    }
  }
  return result; /*0x57a423*/
}



// ==== 0x0057A430  RecursiveCellClassNeighbourUpdate  this=MapClass  sig=csp ====
char __fastcall CellClass_RecursiveNeighbourUpdate(_DWORD *a1, int a2, int i, int a4, int a5)
{
  int v5; // ebp
  int v7; // eax
  char *CellData; // esi
  int TerrainMask; // eax
  char v10; // bl
  unsigned int v11; // eax
  int *v12; // eax
  unsigned int v13; // eax
  int *v14; // eax
  char v15; // al
  unsigned int v16; // eax
  int *v17; // eax
  char v18; // bl
  unsigned int v19; // eax
  int *v20; // eax
  char v21; // al
  unsigned int v22; // eax
  int *v23; // eax
  char v24; // bl
  unsigned int v25; // eax
  int *v26; // eax
  char v27; // al
  unsigned int v28; // eax
  int *v29; // eax
  char v30; // bl
  unsigned int v31; // eax
  int *v32; // eax
  char v33; // al
  int v34; // eax
  int v35; // edx
  char v36; // cl
  int v38; // eax
  unsigned int v39; // eax
  _DWORD *NeighbourContent; // esi
  int v41; // edx
  int v42; // edi
  char *v43; // eax
  int v44; // edx
  char v45; // [esp+13h] [ebp-15h]
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+14h] [ebp-14h]
  int v48; // [esp+14h] [ebp-14h]
  int v49; // [esp+14h] [ebp-14h]
  int v50; // [esp+18h] [ebp-10h]
  int v51; // [esp+18h] [ebp-10h]
  _DWORD v52[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = i; /*0x57a435*/
  v7 = *(_DWORD *)(i + 36); /*0x57a43d*/
  v52[2] = a1; /*0x57a444*/
  v45 = 0; /*0x57a448*/
  i = v7; /*0x57a44d*/
  CellData = Tactical::GetCellData((__int16 *)&i); /*0x57a45b*/
  *((_DWORD *)CellData + 16) = Cell::GetTerrainMask(a1, (int *)v5, 2); /*0x57a467*/
  TerrainMask = Cell::GetTerrainMask(a1, (int *)v5, 0); /*0x57a46a*/
  v10 = TerrainMask; /*0x57a46f*/
  i = TerrainMask; /*0x57a473*/
  if ( TerrainMask > 0 ) /*0x57a477*/
  {
    if ( TerrainMask == 11 || TerrainMask == 26 ) /*0x57a485*/
      v45 = 1; /*0x57a487*/
    if ( (TerrainMask & 0xA0) == 0xA0 && (TerrainMask & 0x11) == 0 /*0x57a4cb*/
      || (TerrainMask & 0x82) == 0x82 && (TerrainMask & 0x44) == 0
      || (TerrainMask & 0xA) == 0xA && (TerrainMask & 0x11) == 0
      || (TerrainMask & 0x28) == 0x28 && (TerrainMask & 0x44) == 0 )
    {
      v45 = 1; /*0x57a4cd*/
    }
    if ( (TerrainMask & 0x20) != 0 ) /*0x57a4d5*/
    {
      v50 = *(_DWORD *)(v5 + 36); /*0x57a4de*/
      v11 = (__int16)(v50 + 1) + (SHIWORD(v50) << 9); /*0x57a4fd*/
      if ( v11 >= 0x40000 || (v12 = *(int **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57a513*/
      {
        v12 = unk_ABDC50; /*0x57a519*/
        LOWORD(v46) = v50 + 1; /*0x57a4ef*/
        HIWORD(v46) = HIWORD(*(_DWORD *)(v5 + 36)); /*0x57a4ea*/
        dword_ABDC74 = v46; /*0x57a51e*/
      }
      v52[0] = Cell::GetTerrainMask(a1, v12, 0); /*0x57a52e*/
      v51 = *(_DWORD *)(v5 + 36); /*0x57a535*/
      v13 = (__int16)(v51 + 2) + (SHIWORD(v51) << 9); /*0x57a554*/
      if ( v13 >= 0x40000 || (v14 = *(int **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57a56a*/
      {
        LOWORD(v47) = v51 + 2; /*0x57a546*/
        HIWORD(v47) = HIWORD(*(_DWORD *)(v5 + 36)); /*0x57a541*/
        dword_ABDC74 = v47; /*0x57a570*/
        v14 = unk_ABDC50; /*0x57a575*/
      }
      v15 = Cell::GetTerrainMask(a1, v14, 0); /*0x57a57f*/
      if ( (v52[0] & 2) != 0 || (v15 & 2) != 0 ) /*0x57a58d*/
        v45 = 1; /*0x57a58f*/
    }
    if ( (v10 & 2) != 0 ) /*0x57a597*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a5a0*/
      HIWORD(v48) = HIWORD(v52[0]); /*0x57a5ac*/
      v16 = (__int16)(LOWORD(v52[0]) - 1) + (SHIWORD(v52[0]) << 9); /*0x57a5bf*/
      if ( v16 >= 0x40000 || (v17 = *(int **)(dword_87F924 + 4 * v16)) == 0 ) /*0x57a5d5*/
      {
        LOWORD(v48) = LOWORD(v52[0]) - 1; /*0x57a5b1*/
        dword_ABDC74 = v48; /*0x57a5db*/
        v17 = unk_ABDC50; /*0x57a5e0*/
      }
      v18 = Cell::GetTerrainMask(a1, v17, 0); /*0x57a5ef*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a5f4*/
      HIWORD(v49) = HIWORD(v52[0]); /*0x57a600*/
      v19 = (__int16)(LOWORD(v52[0]) - 2) + (SHIWORD(v52[0]) << 9); /*0x57a613*/
      if ( v19 >= 0x40000 || (v20 = *(int **)(dword_87F924 + 4 * v19)) == 0 ) /*0x57a629*/
      {
        LOWORD(v49) = LOWORD(v52[0]) - 2; /*0x57a605*/
        dword_ABDC74 = v49; /*0x57a62f*/
        v20 = unk_ABDC50; /*0x57a634*/
      }
      v21 = Cell::GetTerrainMask(a1, v20, 0); /*0x57a63e*/
      if ( (v18 & 0x20) != 0 || (v21 & 0x20) != 0 ) /*0x57a64a*/
        v45 = 1; /*0x57a64c*/
      v10 = i; /*0x57a651*/
    }
    if ( (v10 & 8) != 0 ) /*0x57a658*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a661*/
      v22 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) - 1) << 9); /*0x57a67f*/
      if ( v22 >= 0x40000 || (v23 = *(int **)(dword_87F924 + 4 * v22)) == 0 ) /*0x57a695*/
      {
        dword_ABDC74 = v52[0] - 0x10000; /*0x57a69b*/
        v23 = unk_ABDC50; /*0x57a6a0*/
      }
      v24 = Cell::GetTerrainMask(a1, v23, 0); /*0x57a6b2*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a6b4*/
      v25 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) - 2) << 9); /*0x57a6d2*/
      if ( v25 >= 0x40000 || (v26 = *(int **)(dword_87F924 + 4 * v25)) == 0 ) /*0x57a6e8*/
      {
        dword_ABDC74 = v52[0] - 0x20000; /*0x57a6ee*/
        v26 = unk_ABDC50; /*0x57a6f3*/
      }
      v27 = Cell::GetTerrainMask(a1, v26, 0); /*0x57a6fd*/
      if ( v24 < 0 || v27 < 0 ) /*0x57a709*/
        v45 = 1; /*0x57a70b*/
      v10 = i; /*0x57a710*/
    }
    if ( v10 < 0 ) /*0x57a717*/
    {
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a720*/
      v28 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) + 1) << 9); /*0x57a73e*/
      if ( v28 >= 0x40000 || (v29 = *(int **)(dword_87F924 + 4 * v28)) == 0 ) /*0x57a754*/
      {
        dword_ABDC74 = v52[0] + 0x10000; /*0x57a75a*/
        v29 = unk_ABDC50; /*0x57a75f*/
      }
      v30 = Cell::GetTerrainMask(a1, v29, 0); /*0x57a771*/
      v52[0] = *(_DWORD *)(v5 + 36); /*0x57a773*/
      v31 = SLOWORD(v52[0]) + ((__int16)(HIWORD(v52[0]) + 2) << 9); /*0x57a791*/
      if ( v31 >= 0x40000 || (v32 = *(int **)(dword_87F924 + 4 * v31)) == 0 ) /*0x57a7a7*/
      {
        dword_ABDC74 = v52[0] + 0x20000; /*0x57a7ad*/
        v32 = unk_ABDC50; /*0x57a7b2*/
      }
      v33 = Cell::GetTerrainMask(a1, v32, 0); /*0x57a7bc*/
      if ( (v30 & 8) != 0 || (v33 & 8) != 0 ) /*0x57a7c8*/
        v45 = 1; /*0x57a7ca*/
      v10 = i; /*0x57a7cf*/
    }
    if ( (v10 & 0x88) == 0x88 || (v10 & 0x22) == 0x22 || v45 ) /*0x57a7ee*/
    {
      i = *(_DWORD *)(v5 + 36); /*0x57a801*/
      v34 = MapClass::GetTileDataField14(&i); /*0x57a805*/
      v35 = a4; /*0x57a80a*/
      v36 = a5; /*0x57a80e*/
      if ( v34 > 0 && v34 != a4 && !(_BYTE)a5 ) /*0x57a81c*/
        return 0; /*0x57a827*/
      v38 = g_CellPassabilityLUT; /*0x57a82a*/
      *(_BYTE *)(v5 + 282) = 0; /*0x57a82f*/
      *(_DWORD *)(v5 + 56) = v38; /*0x57a838*/
      i = *(_DWORD *)(v5 + 36); /*0x57a846*/
      if ( v36 ) /*0x57a83b*/
        MapClass::SetObstruction((__int16 *)&i, 0); /*0x57a84b*/
      else
        MapClass::SetObstruction((__int16 *)&i, v35); /*0x57a85f*/
      v39 = 0; /*0x57a864*/
      for ( i = 0; i < 8; ++i ) /*0x57a866*/
      {
        NeighbourContent = Cell::GetNeighbourContent((_DWORD *)v5, v39); /*0x57a872*/
        v41 = NeighbourContent[9]; /*0x57a87a*/
        v52[0] = v41; /*0x57a87f*/
        v42 = SHIWORD(v41) + (__int16)v41; /*0x57a88b*/
        if ( v42 > dword_ABED04 /*0x57a8b0*/
          && SLOWORD(v52[0]) - SHIWORD(v52[0]) < dword_ABED04
          && SHIWORD(v52[0]) - SLOWORD(v52[0]) < dword_ABED04
          && v42 <= dword_ABED08 )
        {
          v52[0] = v41; /*0x57a8b6*/
          v43 = Tactical::GetCellData((__int16 *)v52); /*0x57a8ba*/
          v44 = a5; /*0x57a8bf*/
          *((_DWORD *)v43 + 16) = -1; /*0x57a8c7*/
          RecursiveCellClassNeighbourUpdate(NeighbourContent, a4, v44); /*0x57a8d5*/
        }
        v39 = i + 1; /*0x57a8de*/
      }
    }
  }
  return 1; /*0x57a81e*/
}



// ==== 0x0057A900  sub_57A900  this=-  sig=ida-proto ====
int __fastcall sub_57A900(Cell *a1, signed int a2)
{
  int v3; // ebx
  unsigned int v4; // ebp
  Cell *NeighbourContent; // esi
  Cell *v6; // edi
  char IsValidHeight; // al
  bool v8; // bl
  bool v10; // [esp+13h] [ebp-15h]
  int v11; // [esp+14h] [ebp-14h]
  unsigned int v12[4]; // [esp+18h] [ebp-10h]

  v12[1] = 4; /*0x57a913*/
  v12[3] = 4; /*0x57a917*/
  v12[0] = 2; /*0x57a91d*/
  v12[2] = 2; /*0x57a921*/
  v3 = 1; /*0x57a928*/
  v4 = v12[a2 / 2]; /*0x57a92f*/
  NeighbourContent = (Cell *)Cell::GetNeighbourContent(a1, v4); /*0x57a939*/
  v6 = (Cell *)Cell::GetNeighbourContent(NeighbourContent, a2); /*0x57a945*/
  v10 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a950*/
  IsValidHeight = Cell::IsValidHeight(v6); /*0x57a955*/
  if ( v10 ) /*0x57a960*/
  {
    while ( IsValidHeight ) /*0x57a96a*/
    {
      v11 = v3 + 1; /*0x57a970*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, v4); /*0x57a97b*/
      v6 = (Cell *)Cell::GetNeighbourContent(v6, v4); /*0x57a985*/
      v8 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57a990*/
      IsValidHeight = Cell::IsValidHeight(v6); /*0x57a993*/
      if ( !v8 ) /*0x57a99a*/
        return v11; /*0x57a9a7*/
      v3 = v11; /*0x57a964*/
    }
  }
  return v3; /*0x57a9a0*/
}



// ==== 0x0057A9C0  InitializeCliffRampTable  this=-  sig=ida-proto ====
int *InitializeCliffRampTable()
{
  int *result; // eax
  int v1; // [esp+8h] [ebp-4h] BYREF

  dword_ABDB68 = -65536; /*0x57a9f2*/
  dword_ABDB6C = -65536; /*0x57aa05*/
  dword_ABDB70 = -65536; /*0x57aa1b*/
  v1 = -1; /*0x57aa21*/
  dword_ABDB74 = -65536; /*0x57aa31*/
  dword_ABDB78 = -131072; /*0x57aa44*/
  dword_ABDB7C = -65537; /*0x57aa50*/
  dword_ABDB80 = -1; /*0x57aa56*/
  dword_ABDB84 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57aa63*/
  dword_ABDB88 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa7b*/
  dword_ABDB8C = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa8e*/
  dword_ABDB90 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aa9b*/
  dword_ABDB94 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aab4*/
  dword_ABDB98 = *(_DWORD *)CellStruct::Set(&v1, -2, -1); /*0x57aac8*/
  dword_ABDB9C = *(_DWORD *)CellStruct::Set(&v1, -2, 0); /*0x57aad5*/
  dword_ABDBA0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57aae8*/
  dword_ABDBA4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab00*/
  dword_ABDBA8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab0d*/
  dword_ABDBAC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab25*/
  dword_ABDBB0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab38*/
  dword_ABDBB4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab45*/
  dword_ABDBB8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab5d*/
  dword_ABDBBC = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ab70*/
  dword_ABDBC0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab7d*/
  dword_ABDBC4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ab95*/
  dword_ABDBC8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57aba8*/
  dword_ABDBCC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abb5*/
  dword_ABDBD0 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abcd*/
  dword_ABDBD4 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57abe0*/
  dword_ABDBD8 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57abed*/
  dword_ABDBDC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac05*/
  dword_ABDBE0 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac18*/
  dword_ABDBE4 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57ac25*/
  dword_ABDBE8 = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac3d*/
  dword_ABDBEC = *(_DWORD *)CellStruct::Set(&v1, -1, -1); /*0x57ac50*/
  dword_ABDBF0 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac5d*/
  dword_ABDBF4 = *(_DWORD *)CellStruct::Set(&v1, -1, 0); /*0x57ac75*/
  dword_ABDBF8 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac88*/
  dword_ABDBFC = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57ac95*/
  dword_ABDC00 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acad*/
  dword_ABDC04 = *(_DWORD *)CellStruct::Set(&v1, 0, -1); /*0x57acc0*/
  dword_ABDC08 = *(_DWORD *)CellStruct::Set(&v1, 0, 0); /*0x57accd*/
  result = (int *)CellStruct::Set(&v1, 0, 0); /*0x57acd8*/
  dword_ABDC0C = *result; /*0x57ace0*/
  return result; /*0x57acdf*/
}



// ==== 0x0057ACF0  GenerateMapClassCliffTransitions  this=MapClass  sig=csp ====
bool __fastcall GenerateMapClassCliffTransitions(Cell *a1, int a2, Cell *a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int TerrainMask; // eax
  char v11; // bl
  int v12; // ebp
  int v13; // eax
  Cell *NeighbourContent; // esi
  Cell *v15; // edi
  char IsValidHeight; // al
  Cell *v17; // esi
  Cell *v18; // edi
  char v19; // al
  Cell *v20; // esi
  Cell *v21; // edi
  char v22; // al
  Cell *v23; // esi
  Cell *v24; // edi
  char v25; // al
  Cell *v26; // esi
  int v27; // ecx
  __int16 v28; // dx
  __int16 v29; // ax
  bool v31; // [esp+13h] [ebp-Dh]
  bool v32; // [esp+13h] [ebp-Dh]
  bool v33; // [esp+13h] [ebp-Dh]
  bool v34; // [esp+13h] [ebp-Dh]
  bool v35; // [esp+13h] [ebp-Dh]
  bool v36; // [esp+13h] [ebp-Dh]
  bool v37; // [esp+13h] [ebp-Dh]
  bool v38; // [esp+13h] [ebp-Dh]
  _DWORD v39[2]; // [esp+14h] [ebp-Ch] BYREF
  int v40; // [esp+1Ch] [ebp-4h] BYREF

  v39[1] = a1; /*0x57ad00*/
  v7 = Range_RandomInt(0, 5u); /*0x57ad04*/
  v8 = a4; /*0x57ad09*/
  v9 = v7; /*0x57ad0d*/
  if ( a4 == 2 ) /*0x57ad12*/
    TerrainMask = Cell::GetTerrainMask(a1, &a3->Cell_field_0x0, 1); /*0x57ad1b*/
  else
    TerrainMask = Cell::GetTerrainMask(a1, &a3->Cell_field_0x0, 0); /*0x57ad26*/
  v11 = TerrainMask; /*0x57ad2b*/
  if ( !TerrainMask ) /*0x57ad2f*/
    return 1; /*0x57ad2f*/
  if ( v8 != 2 ) /*0x57ad38*/
  {
    if ( (TerrainMask & 2) != 0 ) /*0x57ae12*/
    {
      v39[0] = 1; /*0x57ae1e*/
      NeighbourContent = (Cell *)Cell::GetNeighbourContent(a3, 4u); /*0x57ae2b*/
      v15 = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 2u); /*0x57ae38*/
      v31 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae43*/
      IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae48*/
      if ( v31 ) /*0x57ae53*/
      {
        do /*0x57ae93*/
        {
          if ( !IsValidHeight ) /*0x57ae57*/
            break; /*0x57ae57*/
          ++v39[0]; /*0x57ae62*/
          NeighbourContent = (Cell *)Cell::GetNeighbourContent(NeighbourContent, 4u); /*0x57ae6f*/
          v15 = (Cell *)Cell::GetNeighbourContent(v15, 4u); /*0x57ae78*/
          v32 = (unsigned __int8)Cell::IsValidHeight(NeighbourContent) == 0; /*0x57ae83*/
          IsValidHeight = Cell::IsValidHeight(v15); /*0x57ae88*/
        }
        while ( v32 ); /*0x57ae93*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 4) == 0 || (v11 & 0x18) != 0 ) /*0x57aeb3*/
      {
        v13 = 12; /*0x57aea1*/
        goto LABEL_71; /*0x57aea6*/
      }
      v13 = abs32(v9 % 3) + 9; /*0x57aec6*/
    }
    else if ( (TerrainMask & 0x20) != 0 ) /*0x57aed1*/
    {
      v39[0] = 1; /*0x57aedd*/
      v17 = (Cell *)Cell::GetNeighbourContent(a3, 4u); /*0x57aeea*/
      v18 = (Cell *)Cell::GetNeighbourContent(v17, 6u); /*0x57aef7*/
      v33 = (unsigned __int8)Cell::IsValidHeight(v17) == 0; /*0x57af02*/
      v19 = Cell::IsValidHeight(v18); /*0x57af07*/
      if ( v33 ) /*0x57af12*/
      {
        do /*0x57af52*/
        {
          if ( !v19 ) /*0x57af16*/
            break; /*0x57af16*/
          ++v39[0]; /*0x57af21*/
          v17 = (Cell *)Cell::GetNeighbourContent(v17, 4u); /*0x57af2e*/
          v18 = (Cell *)Cell::GetNeighbourContent(v18, 4u); /*0x57af37*/
          v34 = (unsigned __int8)Cell::IsValidHeight(v17) == 0; /*0x57af42*/
          v19 = Cell::IsValidHeight(v18); /*0x57af47*/
        }
        while ( v34 ); /*0x57af52*/
      }
      if ( (v39[0] & 1) != 0 && v11 >= 0 || (v11 & 0x10) == 0 || (v11 & 0xC) != 0 ) /*0x57af72*/
      {
        v13 = 28; /*0x57af60*/
        goto LABEL_71; /*0x57af65*/
      }
      v13 = v9 % 3 + 25; /*0x57af80*/
    }
    else if ( (TerrainMask & 8) != 0 ) /*0x57af8b*/
    {
      v39[0] = 1; /*0x57af97*/
      v20 = (Cell *)Cell::GetNeighbourContent(a3, 2u); /*0x57afa4*/
      v21 = (Cell *)Cell::GetNeighbourContent(v20, 4u); /*0x57afb1*/
      v35 = (unsigned __int8)Cell::IsValidHeight(v20) == 0; /*0x57afbc*/
      v22 = Cell::IsValidHeight(v21); /*0x57afc1*/
      if ( v35 ) /*0x57afcc*/
      {
        do /*0x57b00c*/
        {
          if ( !v22 ) /*0x57afd0*/
            break; /*0x57afd0*/
          ++v39[0]; /*0x57afdb*/
          v20 = (Cell *)Cell::GetNeighbourContent(v20, 2u); /*0x57afe8*/
          v21 = (Cell *)Cell::GetNeighbourContent(v21, 2u); /*0x57aff1*/
          v36 = (unsigned __int8)Cell::IsValidHeight(v20) == 0; /*0x57affc*/
          v22 = Cell::IsValidHeight(v21); /*0x57b001*/
        }
        while ( v36 ); /*0x57b00c*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 4) == 0 || (v11 & 3) != 0 ) /*0x57b027*/
      {
        v13 = 4; /*0x57b015*/
        goto LABEL_71; /*0x57b01a*/
      }
      v13 = v9 % 3 + 1; /*0x57b035*/
    }
    else
    {
      if ( (TerrainMask & 0x80u) == 0 ) /*0x57b03e*/
      {
LABEL_61:
        if ( (v11 & 1) != 0 ) /*0x57b0f0*/
        {
          v12 = (v9 & 1) + 35; /*0x57b0f5*/
        }
        else if ( (v11 & 4) != 0 ) /*0x57b0fd*/
        {
          v12 = (v9 & 1) + 33; /*0x57b102*/
        }
        else if ( (v11 & 0x10) != 0 ) /*0x57b10a*/
        {
          v12 = (v9 & 1) + 39; /*0x57b10f*/
        }
        else
        {
          if ( (v11 & 0x40) == 0 ) /*0x57b117*/
            return 1; /*0x57b117*/
          v12 = (v9 & 1) + 37; /*0x57b120*/
        }
        goto LABEL_69; /*0x57b0f8*/
      }
      v39[0] = 1; /*0x57b04a*/
      v23 = (Cell *)Cell::GetNeighbourContent(a3, 2u); /*0x57b057*/
      v24 = (Cell *)Cell::GetNeighbourContent(v23, 0); /*0x57b064*/
      v37 = (unsigned __int8)Cell::IsValidHeight(v23) == 0; /*0x57b06f*/
      v25 = Cell::IsValidHeight(v24); /*0x57b074*/
      if ( v37 ) /*0x57b07f*/
      {
        do /*0x57b0bf*/
        {
          if ( !v25 ) /*0x57b083*/
            break; /*0x57b083*/
          ++v39[0]; /*0x57b08e*/
          v23 = (Cell *)Cell::GetNeighbourContent(v23, 2u); /*0x57b09b*/
          v24 = (Cell *)Cell::GetNeighbourContent(v24, 2u); /*0x57b0a4*/
          v38 = (unsigned __int8)Cell::IsValidHeight(v23) == 0; /*0x57b0af*/
          v25 = Cell::IsValidHeight(v24); /*0x57b0b4*/
        }
        while ( v38 ); /*0x57b0bf*/
      }
      if ( (v39[0] & 1) != 0 || (v11 & 1) == 0 || (v11 & 6) != 0 ) /*0x57b0d7*/
      {
        v13 = 20; /*0x57b0c8*/
        goto LABEL_71; /*0x57b0cd*/
      }
      v13 = v9 % 3 + 17; /*0x57b0e5*/
    }
    if ( v13 != -1 ) /*0x57b0eb*/
      goto LABEL_70; /*0x57b0eb*/
    goto LABEL_61; /*0x57b0eb*/
  }
  if ( (TerrainMask & 0xA0) == 0xA0 )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57ad50*/
    {
      v12 = (v9 & 1) + 23; /*0x57ad55*/
LABEL_69:
      v13 = v12; /*0x57b123*/
LABEL_70:
      if ( v13 <= 0 ) /*0x57b127*/
        return 1; /*0x57b127*/
      goto LABEL_71; /*0x57b127*/
    }
    v13 = (TerrainMask & 1) != 0 ? 21 : 30;
  }
  else if ( (TerrainMask & 0x82) == 0x82 )
  {
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57ad86*/
    {
      v12 = (v9 & 1) + 15; /*0x57ad8b*/
      goto LABEL_69; /*0x57ad8e*/
    }
    v13 = (TerrainMask & 4) != 0 ? 14 : 22;
  }
  else if ( (TerrainMask & 0xA) == 0xA )
  {
    if ( (TerrainMask & 0x11) == 0x11 ) /*0x57adb8*/
    {
      v12 = (v9 & 1) + 7; /*0x57adbd*/
      goto LABEL_69; /*0x57adc0*/
    }
    v13 = (TerrainMask & 1) != 0 ? 13 : 6;
  }
  else
  {
    if ( (TerrainMask & 0x28) != 0x28 ) /*0x57ade1*/
      return 1; /*0x57ade1*/
    if ( (TerrainMask & 0x44) == 0x44 ) /*0x57adee*/
    {
      v12 = (v9 & 1) + 31; /*0x57adf3*/
      goto LABEL_69; /*0x57adf6*/
    }
    v13 = (TerrainMask & 4) != 0 ? 5 : 29;
  }
LABEL_71:
  v26 = a3; /*0x57b12d*/
  *(_DWORD *)&stru_87F5F0.__pad_E12[1422] = *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * (v13 + dword_ABAD28) - 4); /*0x57b143*/
  v27 = *(_DWORD *)&a3->__pad_1C[8]; /*0x57b149*/
  v28 = g_MissionQueueFrame.briefing[v13 + 71]; /*0x57b14c*/
  v29 = HIWORD(g_MissionQueueFrame.briefing[v13 + 71]); /*0x57b154*/
  LOWORD(a3) = v27 + v28; /*0x57b168*/
  HIWORD(a3) = HIWORD(v27) + v29; /*0x57b16d*/
  v39[0] = a3; /*0x57b17e*/
  Tactical::MouseMove((Tactical *)&stru_87F5F0.__pad_58[416], &v40, v39); /*0x57b189*/
  LOBYTE(a3) = 1; /*0x57b192*/
  if ( a4 == 1 ) /*0x57b19a*/
  {
    GenerateTerrainMap(0, 0, v26->Cell_field_0x11B[0], a5, &a3, a6); /*0x57b1b7*/
  }
  else
  {
    if ( a4 != 2 ) /*0x57b1bc*/
      return 1; /*0x57b1bc*/
    GenerateTerrainMap(dword_ABAD28, dword_ABAD28 + 41, v26->Cell_field_0x11B[0], a5, &a3, a6); /*0x57b1e3*/
  }
  return (_BYTE)a3 != 0; /*0x57b1ee*/
}



// ==== 0x0057B210  Cell::GetTerrainMask  this=MapClass  sig=csp ====
int __thiscall Cell::GetTerrainMask(Cell *this, int *a2, int a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  int result; // eax
  int v8; // eax
  char *CellData; // eax
  _DWORD *Cell_field_0x13C; // edx
  int v11; // esi
  Cell *v12; // ecx
  _DWORD *v13; // esi
  char v14; // bl
  int v15; // edi
  Cell *v16; // ecx
  _DWORD *v17; // esi
  Cell *v18; // ecx
  _DWORD *v19; // esi
  Cell *v20; // ecx
  _DWORD *v21; // esi
  Cell *v22; // ecx
  _DWORD *v23; // esi
  Cell *v24; // ecx
  _DWORD *v25; // esi
  Cell *v26; // ecx
  _DWORD *v27; // esi
  Cell *v28; // ecx
  _DWORD *v29; // esi
  int v30; // [esp+18h] [ebp-8h]
  char IsValidHeight; // [esp+24h] [ebp+4h]

  v3 = g_CellPassabilityLUT; /*0x57b214*/
  v5 = a2[9]; /*0x57b224*/
  v30 = g_CellPassabilityLUT + 14; /*0x57b239*/
  IsValidHeight = Cell::IsValidHeight((Cell *)a2); /*0x57b248*/
  v6 = SHIWORD(v5) + (__int16)v5; /*0x57b254*/
  if ( v6 <= g_MissionQueueFrame.localVariables[160] /*0x57b271*/
    || (__int16)v5 - SHIWORD(v5) >= g_MissionQueueFrame.localVariables[160]
    || SHIWORD(v5) - (__int16)v5 >= g_MissionQueueFrame.localVariables[160]
    || v6 > g_MissionQueueFrame.localVariables[161] )
  {
    return 0; /*0x57b27c*/
  }
  if ( a3 ) /*0x57b285*/
  {
    if ( a3 == 1 ) /*0x57b2a1*/
    {
      v8 = a2[14]; /*0x57b2a3*/
      if ( v8 >= v3 && v8 < v30 ) /*0x57b2ae*/
        return 0; /*0x57b2b9*/
    }
  }
  else if ( !(unsigned __int8)Cell::IsEmpty((Cell *)a2) ) /*0x57b289*/
  {
    return 0; /*0x57b29b*/
  }
  a3 = a2[9]; /*0x57b2c3*/
  CellData = Tactical::GetCellData((Tactical *)&a3); /*0x57b2c7*/
  if ( !CellData[74] ) /*0x57b2cc*/
    return 0; /*0x57b2d6*/
  result = *((_DWORD *)CellData + 16); /*0x57b2df*/
  if ( result < 0 ) /*0x57b2e4*/
  {
    Cell_field_0x13C = this->Cell_field_0x13C; /*0x57b2f1*/
    v11 = (__int16)v5 + (SHIWORD(v5) << 9); /*0x57b2f7*/
    v12 = (Cell *)Cell_field_0x13C[v11 - 513]; /*0x57b2f9*/
    v13 = &Cell_field_0x13C[v11 - 513]; /*0x57b300*/
    if ( v12 && (unsigned __int8)Cell::IsValidHeight(v12) ) /*0x57b30b*/
    {
      v14 = IsValidHeight; /*0x57b328*/
      v15 = 64; /*0x57b32c*/
    }
    else if ( *v13 ) /*0x57b314*/
    {
      v15 = 0; /*0x57b333*/
      v14 = IsValidHeight; /*0x57b337*/
    }
    else
    {
      v14 = IsValidHeight; /*0x57b319*/
      if ( IsValidHeight ) /*0x57b31f*/
        v15 = 64; /*0x57b321*/
      else
        v15 = 0; /*0x57b33d*/
    }
    v16 = (Cell *)v13[1]; /*0x57b341*/
    v17 = v13 + 1; /*0x57b344*/
    if ( v16 && (unsigned __int8)Cell::IsValidHeight(v16) || !*v17 && v14 ) /*0x57b35b*/
      v15 |= 0x80u; /*0x57b35d*/
    v18 = (Cell *)v17[1]; /*0x57b363*/
    v19 = v17 + 1; /*0x57b366*/
    if ( v18 && (unsigned __int8)Cell::IsValidHeight(v18) || !*v19 && v14 ) /*0x57b37d*/
      v15 |= 1u; /*0x57b37f*/
    v20 = (Cell *)v19[510]; /*0x57b382*/
    v21 = v19 + 510; /*0x57b388*/
    if ( v20 && (unsigned __int8)Cell::IsValidHeight(v20) || !*v21 && v14 ) /*0x57b3a2*/
      v15 |= 0x20u; /*0x57b3a4*/
    v22 = (Cell *)v21[2]; /*0x57b3a7*/
    v23 = v21 + 2; /*0x57b3aa*/
    if ( v22 && (unsigned __int8)Cell::IsValidHeight(v22) || !*v23 && v14 ) /*0x57b3c1*/
      v15 |= 2u; /*0x57b3c3*/
    v24 = (Cell *)v23[510]; /*0x57b3c6*/
    v25 = v23 + 510; /*0x57b3cc*/
    if ( v24 && (unsigned __int8)Cell::IsValidHeight(v24) || !*v25 && v14 ) /*0x57b3e6*/
      v15 |= 0x10u; /*0x57b3e8*/
    v26 = (Cell *)v25[1]; /*0x57b3eb*/
    v27 = v25 + 1; /*0x57b3ee*/
    if ( v26 && (unsigned __int8)Cell::IsValidHeight(v26) || !*v27 && v14 ) /*0x57b405*/
      v15 |= 8u; /*0x57b407*/
    v28 = (Cell *)v27[1]; /*0x57b40a*/
    v29 = v27 + 1; /*0x57b40d*/
    if ( v28 && (unsigned __int8)Cell::IsValidHeight(v28) || !*v29 && v14 ) /*0x57b424*/
      return v15 | 4; /*0x57b426*/
    return v15; /*0x57b429*/
  }
  return result; /*0x57b273*/
}



// ==== 0x0057B440  GenerateTerrainMap  this=-  sig=csp ====
char __stdcall Map_GenerateTerrain(int a1, int a2, char a3, int a4, _BYTE *a5, char a6)
{
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  _DWORD *v14; // esi
  int v15; // ebx
  int v16; // ebp
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v28; // eax
  int v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+1Ch] [ebp-10h]
  int v33; // [esp+20h] [ebp-Ch]
  int v34; // [esp+24h] [ebp-8h]
  int v35; // [esp+28h] [ebp-4h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 44))(dword_880990) != 18 ) /*0x57b455*/
    return 0; /*0x57b455*/
  if ( a6 ) /*0x57b461*/
    a4 = 0; /*0x57b463*/
  v6 = dword_880990; /*0x57b46b*/
  v29 = dword_880990; /*0x57b473*/
  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_880990 + 156))(dword_880990); /*0x57b482*/
  if ( !v34 ) /*0x57b486*/
    return 0; /*0x57b486*/
  v30 = 0; /*0x57b492*/
  if ( *(int *)(v6 + 744) <= 0 ) /*0x57b49c*/
    return 1; /*0x57b70e*/
  v7 = dword_87F8DC; /*0x57b4a2*/
  while ( 1 ) /*0x57b4a8*/
  {
    v8 = *(_DWORD *)(v6 + 740); /*0x57b4a8*/
    v9 = 0; /*0x57b4ae*/
    v32 = 0; /*0x57b4b2*/
    if ( v8 > 0 ) /*0x57b4b6*/
      break; /*0x57b4b6*/
LABEL_39:
    if ( ++v30 >= *(_DWORD *)(v6 + 744) ) /*0x57b6a4*/
      return 1; /*0x57b6b3*/
  }
  while ( 1 ) /*0x57b4d0*/
  {
    LOWORD(v33) = v9 + dword_88095C; /*0x57b4d0*/
    v10 = (__int16)(v9 + dword_88095C); /*0x57b4d5*/
    HIWORD(v33) = HIWORD(dword_88095C) + v30; /*0x57b4d8*/
    v11 = (__int16)(HIWORD(dword_88095C) + v30); /*0x57b4e1*/
    v31 = v33; /*0x57b4e4*/
    v12 = (__int16)v10 + v11; /*0x57b4e8*/
    if ( v12 <= v7 || v10 - v11 >= v7 || v11 - v10 >= v7 || v12 > v7 + 2 * dword_87F8E0 ) /*0x57b516*/
      goto LABEL_38; /*0x57b516*/
    v13 = v10 + (v11 << 9); /*0x57b51f*/
    if ( v13 >= 0x40000 || (v14 = *(_DWORD **)(dword_87F924 + 4 * v13)) == 0 ) /*0x57b535*/
    {
      dword_ABDC74 = v33; /*0x57b537*/
      v14 = &unk_ABDC50; /*0x57b53d*/
    }
    v15 = v32 + v30 * *(_DWORD *)(v6 + 740); /*0x57b555*/
    v35 = *(_DWORD *)(v34 + 4 * v15 + 16); /*0x57b55d*/
    v16 = v35; /*0x57b557*/
    if ( v35 ) /*0x57b561*/
      break; /*0x57b561*/
LABEL_37:
    v6 = v29; /*0x57b678*/
LABEL_38:
    v26 = *(_DWORD *)(v6 + 740); /*0x57b67c*/
    v9 = ++v32; /*0x57b686*/
    if ( v32 >= v26 ) /*0x57b68d*/
      goto LABEL_39; /*0x57b68d*/
  }
  v17 = MapClass::GetTileDataField14(&v31); /*0x57b571*/
  if ( a6 ) /*0x57b57c*/
  {
    v17 = 0; /*0x57b57e*/
LABEL_18:
    v18 = a4; /*0x57b580*/
    goto LABEL_19; /*0x57b580*/
  }
  if ( v17 <= 0 ) /*0x57b5e0*/
    goto LABEL_18; /*0x57b5e0*/
  v18 = a4; /*0x57b5e2*/
  if ( v17 == a4 ) /*0x57b5e8*/
    goto LABEL_20; /*0x57b5e8*/
  if ( a4 != -1 ) /*0x57b5ed*/
  {
    v23 = v14[14] - dword_ABAD28; /*0x57b603*/
    v24 = *(_DWORD *)(v29 + 660) - dword_ABAD28; /*0x57b605*/
    if ( !Cell::IsEmpty(v14) ) /*0x57b60e*/
    {
      if ( v23 < 0 || v24 < 0 || v23 > 41 || v24 > 41 || dword_82A7F4[v23] != dword_82A7F4[v24] ) /*0x57b703*/
      {
        *a5 = 0; /*0x57b718*/
        return 0; /*0x57b721*/
      }
      return 1; /*0x57b703*/
    }
    MapClass::SetObstruction(&v31, a4); /*0x57b623*/
    v16 = v35; /*0x57b628*/
    goto LABEL_32; /*0x57b628*/
  }
LABEL_19:
  if ( v17 == v18 ) /*0x57b586*/
  {
LABEL_20:
    v19 = v14[14] - dword_ABAD28; /*0x57b58c*/
    v20 = *(_DWORD *)(v29 + 660) - dword_ABAD28; /*0x57b5a1*/
    if ( v19 >= 0 && v20 >= 0 && v19 <= 41 && v20 <= 41 ) /*0x57b5b7*/
    {
      v21 = dword_82A89C[v19] - dword_82A89C[v20]; /*0x57b5c9*/
      v22 = (HIDWORD(v21) ^ v21) - HIDWORD(v21); /*0x57b5cc*/
      if ( v22 >= 3 && v22 <= 5 ) /*0x57b5d6*/
      {
        *a5 = 0; /*0x57b72b*/
        return 0; /*0x57b734*/
      }
    }
    goto LABEL_32; /*0x57b5d6*/
  }
  if ( !Cell::IsEmpty(v14) ) /*0x57b6bf*/
  {
    if ( v18 != -1 ) /*0x57b6d9*/
      goto LABEL_58; /*0x57b6d9*/
    goto LABEL_36; /*0x57b6d9*/
  }
  MapClass::SetObstruction(&v31, v18); /*0x57b6cc*/
LABEL_32:
  if ( Cell::IsEmpty(v14) || (v25 = v14[14], v25 >= a1) && v25 <= a2 ) /*0x57b64a*/
  {
    v14[14] = *(_DWORD *)(v29 + 660); /*0x57b65e*/
    *((_BYTE *)v14 + 282) = v15; /*0x57b661*/
    *((_BYTE *)v14 + 283) = a3 + *(_BYTE *)(v16 + 40); /*0x57b66c*/
LABEL_36:
    v7 = dword_87F8DC; /*0x57b672*/
    goto LABEL_37; /*0x57b672*/
  }
  if ( (unsigned __int8)CellClass::IsTerrainType(v14) && (unsigned __int8)Map_Helper(*(_DWORD *)(v29 + 660), v15) /*0x57b774*/
    || (v28 = *(_DWORD *)(v29 + 660), v28 >= dword_ABAD28) && v28 < dword_ABAD28 + 42 && CellLand::IsBuildable((int)v14) )
  {
LABEL_58:
    *a5 = 0; /*0x57b77d*/
  }
  return 0; /*0x57b6aa*/
}



// ==== 0x0057B790  MapClass::TriggerEVA  this=MapClass  sig=csp ====
int __stdcall MapClass_TriggerEVA(__int16 *a1)
{
  int v1; // ebx
  int v2; // edi
  double v3; // st7
  int result; // eax
  unsigned int v5; // eax
  void *v6; // ecx

  v1 = -5; /*0x57b79f*/
  do /*0x57b854*/
  {
    v2 = -5; /*0x57b7a4*/
    do /*0x57b84a*/
    {
      v3 = Math::Sqrt( /*0x57b7f6*/
             (double)(__int16)-(__int16)v1 * (double)(__int16)-(__int16)v1
           + (double)(__int16)-(__int16)v2 * (double)(__int16)-(__int16)v2);
      result = Math::RoundToInt(v3); /*0x57b7fe*/
      if ( (__int16)result <= 5 ) /*0x57b807*/
      {
        v5 = *a1 + (a1[1] << 9); /*0x57b813*/
        if ( v5 < 0x40000 && (result = *(_DWORD *)(dword_87F924 + 4 * v5)) != 0 ) /*0x57b829*/
        {
          v6 = (void *)result; /*0x57b82b*/
        }
        else
        {
          result = *(_DWORD *)a1; /*0x57b82f*/
          v6 = &unk_ABDC50; /*0x57b831*/
          dword_ABDC74 = *(_DWORD *)a1; /*0x57b836*/
        }
        if ( v6 ) /*0x57b83d*/
          result = CellClass::ReduceTiberium((int)v6, 1); /*0x57b841*/
      }
      ++v2; /*0x57b846*/
    }
    while ( v2 <= 5 ); /*0x57b84a*/
    ++v1; /*0x57b850*/
  }
  while ( v1 <= 5 ); /*0x57b854*/
  return result; /*0x57b85a*/
}



// ==== 0x0057B870  ObjectClass::Map_Create  this=ObjectClass  sig=csp ====
int __thiscall Map_Create(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  HIWORD(v8) = HIWORD(this->AbstractClass); /*0x57b87a*/
  LOWORD(v8) = LOWORD(this->AbstractClass) - 1; /*0x57b882*/
  v1 = (__int16)v8 + (SHIWORD(v8) << 9); /*0x57b895*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57b8a5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57b8ab*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57b8b0*/
  }
  v3 = v2[17]; /*0x57b8bc*/
  HIWORD(v9) = HIWORD(this->AbstractClass); /*0x57b8c4*/
  LOWORD(v9) = LOWORD(this->AbstractClass) + 1; /*0x57b8c9*/
  v4 = (__int16)v9 + (SHIWORD(v9) << 9); /*0x57b8d4*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57b8e4*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57b8ea*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57b8ef*/
  }
  v6 = 0; /*0x57b8f8*/
  switch ( v5[17] ) /*0x57b90a*/
  {
    case 'N': /*0x57b90a*/
    case 'P': /*0x57b90a*/
    case 'R': /*0x57b90a*/
    case ']': /*0x57b90a*/
      v6 = 1; /*0x57b911*/
      break; /*0x57b916*/
    case 'Q': /*0x57b90a*/
    case 'd': /*0x57b90a*/
      v6 = 2; /*0x57b918*/
      break; /*0x57b918*/
    default:
      break;
  }
  switch ( v3 ) /*0x57b92f*/
  {
    case 'O': /*0x57b92f*/
    case 'P': /*0x57b92f*/
    case 'Q': /*0x57b92f*/
    case '_': /*0x57b92f*/
      result = v6 | 4; /*0x57b939*/
      break; /*0x57b93c*/
    case 'R': /*0x57b92f*/
    case 'd': /*0x57b92f*/
      v6 |= 8u; /*0x57b93d*/
      goto LABEL_13; /*0x57b93d*/
    default:
LABEL_13:
      result = v6; /*0x57b940*/
      break; /*0x57b940*/
  }
  return result; /*0x57b920*/
}



// ==== 0x0057B990  ObjectClass::Map_Create_57B990  this=ObjectClass  sig=csp ====
char __thiscall Map_Create_57B990(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edi
  char result; // al

  v1 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass - 0x10000) >> 16) << 9); /*0x57b9b4*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57b9c4*/
  {
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass - 0x10000; /*0x57b9ca*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57b9cf*/
  }
  v3 = v2[17]; /*0x57b9dc*/
  v4 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass + 0x10000) >> 16) << 9); /*0x57b9f4*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57ba04*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57ba0a*/
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass + 0x10000; /*0x57ba0f*/
  }
  v6 = v5[17]; /*0x57ba15*/
  result = 0; /*0x57ba1b*/
  switch ( v3 ) /*0x57ba2b*/
  {
    case 'W': /*0x57ba2b*/
    case 'Y': /*0x57ba2b*/
    case '[': /*0x57ba2b*/
    case 'a': /*0x57ba2b*/
      result = 1; /*0x57ba32*/
      break; /*0x57ba37*/
    case 'Z': /*0x57ba2b*/
    case 'e': /*0x57ba2b*/
      result = 2; /*0x57ba39*/
      break; /*0x57ba39*/
    default:
      break;
  }
  switch ( v6 ) /*0x57ba4f*/
  {
    case 'X': /*0x57ba4f*/
    case 'Y': /*0x57ba4f*/
    case 'Z': /*0x57ba4f*/
    case 'c': /*0x57ba4f*/
      result |= 4u; /*0x57ba56*/
      break; /*0x57ba59*/
    case '[': /*0x57ba4f*/
    case 'e': /*0x57ba4f*/
      result |= 8u; /*0x57ba5a*/
      break; /*0x57ba5a*/
    default:
      return result;
  }
  return result; /*0x57ba41*/
}



// ==== 0x0057BAA0  CellClass::CheckTilePassable2  this=CellClass  sig=csp ====
int __stdcall CellClass::CheckTilePassable2(int a1)
{
  CellClass *v1; // ecx
  __int16 *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (__int16 *)a1; /*0x57baa4*/
  v3 = v1; /*0x57baa9*/
  v4 = *(__int16 *)a1 + (*(__int16 *)(a1 + 2) << 9); /*0x57bab5*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57bacb*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a1; /*0x57bacf*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57bad4*/
  }
  result = v5[17]; /*0x57bad9*/
  if ( result >= 74 && result <= 82 || result >= 92 && result <= 95 || result == 100 ) /*0x57baf3*/
  {
    v7 = *(_WORD *)(a1 + 2); /*0x57bafc*/
    LOWORD(a1) = *(_WORD *)a1; /*0x57bb00*/
    HIWORD(a1) = v7 - 1; /*0x57bb0b*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bb23*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57bb2e*/
    {
      v10 = v2[1] - 2; /*0x57bb66*/
      LOWORD(a1) = *v2; /*0x57bb6a*/
      HIWORD(a1) = v10; /*0x57bb6f*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bb8b*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x57bb96*/
      {
        v12 = v2[1]; /*0x57bbab*/
        LOWORD(a1) = *v2; /*0x57bbaf*/
        HIWORD(a1) = v12 - 1; /*0x57bbba*/
        LOBYTE(result) = CellClass::ApplyTileModification(v3, (__int16 *)&a1); /*0x57bbca*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification(v3, v2); /*0x57bb9b*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57bb37*/
      LOWORD(a1) = *v2; /*0x57bb39*/
      HIWORD(a1) = v9; /*0x57bb3e*/
      LOBYTE(result) = CellClass::ApplyTileModification(v3, (__int16 *)&a1); /*0x57bb52*/
    }
  }
  else if ( result >= 83 && result <= 91 || result >= 96 && result <= 99 || result == 101 ) /*0x57bbee*/
  {
    v13 = *(_WORD *)a1 - 1; /*0x57bbfb*/
    HIWORD(a1) = *(_WORD *)(a1 + 2); /*0x57bbfd*/
    LOWORD(a1) = v13; /*0x57bc02*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bc1e*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x57bc29*/
    {
      v16 = *v2 - 2; /*0x57bc61*/
      HIWORD(a1) = v2[1]; /*0x57bc65*/
      LOWORD(a1) = v16; /*0x57bc6a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57bc86*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x57bc91*/
      {
        a1 = 1; /*0x57bcaf*/
        *(_DWORD *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a1); /*0x57bcc8*/
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v18); /*0x57bccf*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification2(v3, v2); /*0x57bc96*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57bc32*/
      HIWORD(a1) = v2[1]; /*0x57bc34*/
      LOWORD(a1) = v15; /*0x57bc39*/
      LOBYTE(result) = CellClass::ApplyTileModification2(v3, (__int16 *)&a1); /*0x57bc4d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57bcdd*/
  }
  return result; /*0x57bb57*/
}



// ==== 0x0057BCF0  CellClass::ApplyTileModification  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // ax
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // ax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+10h] [ebp-B0h]
  int v54; // [esp+10h] [ebp-B0h]
  int v55; // [esp+10h] [ebp-B0h]
  int v56; // [esp+14h] [ebp-ACh] BYREF
  char v57; // [esp+1Bh] [ebp-A5h]
  int v58; // [esp+1Ch] [ebp-A4h]
  int v59; // [esp+20h] [ebp-A0h]
  Terrain *v60; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v62; // [esp+38h] [ebp-88h]
  int v63; // [esp+3Ch] [ebp-84h]
  int v64; // [esp+40h] [ebp-80h] BYREF
  int v65; // [esp+44h] [ebp-7Ch]
  int v66; // [esp+48h] [ebp-78h]
  int v67; // [esp+4Ch] [ebp-74h]
  int v68; // [esp+50h] [ebp-70h]
  int v69; // [esp+54h] [ebp-6Ch]
  LONG v70; // [esp+58h] [ebp-68h]
  LONG v71; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v73; // [esp+70h] [ebp-50h] BYREF
  LONG v74; // [esp+78h] [ebp-48h]
  _DWORD v75[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v77[4]; // [esp+A0h] [ebp-20h] BYREF

  v60 = (Terrain *)this; /*0x57bd06*/
  v2 = *a2 + (a2[1] << 9); /*0x57bd15*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57bd2a*/
  {
    v4 = v3; /*0x57bd2c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57bd32*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57bd34*/
  }
  v5 = a2[1] - 1; /*0x57bd40*/
  LOWORD(v58) = *a2; /*0x57bd42*/
  HIWORD(v58) = v5; /*0x57bd47*/
  v6 = (__int16)v58 + (v5 << 9); /*0x57bd55*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57bd65*/
  {
    v59 = v7; /*0x57bd67*/
  }
  else
  {
    v59 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57bd71*/
    g_MissionQueueFrame.briefing[139] = v58; /*0x57bd75*/
  }
  v8 = a2[1] + 1; /*0x57bd81*/
  LOWORD(v58) = *a2; /*0x57bd83*/
  HIWORD(v58) = v8; /*0x57bd88*/
  v9 = (__int16)v58 + (v8 << 9); /*0x57bd96*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57bda6*/
  {
    v58 = v10; /*0x57bda8*/
  }
  else
  {
    v11 = v58; /*0x57bdae*/
    v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57bdb2*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57bdb6*/
  }
  v56 = v4->?[2]; /*0x57bdc6*/
  LOBYTE(v63) = 0; /*0x57bdca*/
  v57 = 0; /*0x57bdcf*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v73); /*0x57bde0*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57bde2*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57bdf7*/
  {
    v15 = *PlacementRect; /*0x57bea8*/
    v24 = PlacementRect[1]; /*0x57beaa*/
    right = PlacementRect[2]; /*0x57bead*/
    bottom = PlacementRect[3]; /*0x57beb0*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57be02*/
    if ( v50 <= 0 || (v62 = PlacementRect[3], v62 <= 0) ) /*0x57be15*/
    {
      v15 = *StartCoords; /*0x57be9b*/
      v24 = StartCoords[1]; /*0x57be9d*/
      right = StartCoords[2]; /*0x57bea0*/
      bottom = StartCoords[3]; /*0x57bea3*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57be1b*/
      v15 = *StartCoords; /*0x57be1e*/
      v16 = StartCoords[1]; /*0x57be20*/
      v17 = StartCoords[3]; /*0x57be23*/
      rcDst.right = v14; /*0x57be26*/
      v18 = *PlacementRect; /*0x57be2a*/
      v19 = v15 <= *PlacementRect; /*0x57be2c*/
      rcDst.bottom = v17; /*0x57be2e*/
      if ( !v19 ) /*0x57be32*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57be3a*/
        v15 = v18; /*0x57be3c*/
        rcDst.right = v20; /*0x57be3e*/
      }
      v21 = PlacementRect[1]; /*0x57be42*/
      rcSrc2.left = v21; /*0x57be47*/
      if ( v16 > v21 ) /*0x57be4b*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57be53*/
        v16 = v21; /*0x57be55*/
        rcDst.bottom = v22; /*0x57be57*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57be69*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57be75*/
      bottom = rcDst.bottom; /*0x57be83*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v62 ) /*0x57be8c*/
        bottom = rcSrc2.left + v62 - v16 + 1; /*0x57be91*/
      v24 = v16; /*0x57be93*/
      right = rcDst.right; /*0x57be95*/
    }
  }
  v71 = bottom; /*0x57beb3*/
  v70 = right; /*0x57bebb*/
  v68 = v15; /*0x57bec4*/
  v69 = v24; /*0x57bec8*/
  v64 = 0; /*0x57becc*/
  v65 = 0; /*0x57bed0*/
  v66 = 0; /*0x57bed4*/
  v67 = 0; /*0x57bed8*/
  if ( v56 == 92 ) /*0x57bedc*/
  {
    v26 = v58; /*0x57bee2*/
    *(_DWORD *)(v59 + 68) = 93; /*0x57beeb*/
    *(_DWORD *)(v26 + 68) = 93; /*0x57beee*/
    v4->?[2] = 93; /*0x57bef1*/
    LOWORD(v51) = *a2 - 1; /*0x57befd*/
    HIWORD(v51) = a2[1]; /*0x57bf02*/
    v56 = v51; /*0x57bf0f*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bf18*/
  }
  else if ( v56 == 94 ) /*0x57bf25*/
  {
    v27 = v58; /*0x57bf2b*/
    *(_DWORD *)(v59 + 68) = 95; /*0x57bf34*/
    *(_DWORD *)(v27 + 68) = 95; /*0x57bf37*/
    v4->?[2] = 95; /*0x57bf3a*/
    LOWORD(v52) = *a2 + 1; /*0x57bf46*/
    HIWORD(v52) = a2[1]; /*0x57bf4b*/
    v56 = v52; /*0x57bf5c*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bf61*/
  }
  else if ( v56 >= 80 ) /*0x57bf72*/
  {
    if ( v56 >= 83 ) /*0x57bfdf*/
      return v57; /*0x57c29e*/
    v29 = v59; /*0x57bfe5*/
    v30 = v58; /*0x57bfe9*/
    *(_DWORD *)(v59 + 68) = 100; /*0x57bff2*/
    *(_DWORD *)(v30 + 68) = 100; /*0x57bff5*/
    v4->?[2] = 100; /*0x57bffb*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57c004*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57c012*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57c020*/
    LOWORD(v54) = *a2 - 1; /*0x57c032*/
    HIWORD(v54) = a2[1]; /*0x57c03b*/
    LOBYTE(v63) = 1; /*0x57c047*/
    v56 = v54; /*0x57c04c*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57c050*/
    HIWORD(v54) = a2[1]; /*0x57c05e*/
    LOWORD(v54) = *a2 + 1; /*0x57c063*/
    v56 = v54; /*0x57c070*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57c077*/
    globalHelper_07C990(*(_DWORD *)a2); /*0x57c081*/
    v31 = *a2 - 1; /*0x57c092*/
    v32 = a2[1] - 1; /*0x57c093*/
    v57 = 1; /*0x57c096*/
    v64 = v31; /*0x57c09b*/
    v65 = v32; /*0x57c09f*/
    v66 = 3; /*0x57c0a3*/
    v67 = 3; /*0x57c0a7*/
  }
  else
  {
    v28 = v58; /*0x57bf78*/
    *(_DWORD *)(v59 + 68) = 80; /*0x57bf80*/
    *(_DWORD *)(v28 + 68) = 80; /*0x57bf83*/
    v4->?[2] = 80; /*0x57bf86*/
    LOWORD(v53) = *a2 - 1; /*0x57bf92*/
    HIWORD(v53) = a2[1]; /*0x57bf9b*/
    v56 = v53; /*0x57bfa7*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bfab*/
    HIWORD(v53) = a2[1]; /*0x57bfb9*/
    LOWORD(v53) = *a2 + 1; /*0x57bfbe*/
    v56 = v53; /*0x57bfcb*/
    CreateCliffRampMap((__int16 *)&v56); /*0x57bfd2*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57c0b6*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57c0c4*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v75); /*0x57c0d7*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v77); /*0x57c0d9*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57c0ea*/
  {
    rcDst = *v34; /*0x57c19f*/
  }
  else
  {
    v55 = v34->right; /*0x57c0f5*/
    if ( v55 <= 0 || (v62 = v34->bottom, v62 <= 0) ) /*0x57c108*/
    {
      rcDst = *v33; /*0x57c182*/
    }
    else
    {
      left = v33->left; /*0x57c10a*/
      v36 = v34->left; /*0x57c10c*/
      v37 = v33->right; /*0x57c10e*/
      top = v33->top; /*0x57c111*/
      v39 = v33->bottom; /*0x57c114*/
      v19 = left <= v34->left; /*0x57c117*/
      v74 = v37; /*0x57c119*/
      if ( !v19 ) /*0x57c11d*/
      {
        v37 += left - v36; /*0x57c121*/
        left = v36; /*0x57c123*/
        v74 = v37; /*0x57c125*/
      }
      v40 = v34->top; /*0x57c129*/
      v56 = v40; /*0x57c12e*/
      if ( top > v40 ) /*0x57c132*/
      {
        v39 += top - v40; /*0x57c136*/
        top = v40; /*0x57c138*/
      }
      if ( left + v37 >= v36 + v55 ) /*0x57c144*/
        v41 = v74; /*0x57c152*/
      else
        v41 = v36 - left + v55 + 1; /*0x57c14c*/
      if ( v39 + top < v62 + v56 ) /*0x57c165*/
        v39 = v62 + v56 - top + 1; /*0x57c16a*/
      rcDst.left = left; /*0x57c16c*/
      rcDst.top = top; /*0x57c170*/
      rcDst.right = v41; /*0x57c174*/
      rcDst.bottom = v39; /*0x57c178*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57c1d5*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57c1dc*/
  v68 = *v43; /*0x57c1e9*/
  v69 = v43[1]; /*0x57c1f0*/
  v70 = v43[2]; /*0x57c1f7*/
  v71 = v43[3]; /*0x57c200*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57c220*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57c229*/
  House::AnnounceUpgrade(v59, -1); /*0x57c234*/
  v44 = v58; /*0x57c239*/
  House::AnnounceUpgrade(v58, -1); /*0x57c241*/
  v45 = v63; /*0x57c246*/
  Cell::SearchEnemies((int)v4, v63); /*0x57c24d*/
  Cell::SearchEnemies(v59, v45); /*0x57c257*/
  Cell::SearchEnemies(v44, v45); /*0x57c25f*/
  v46 = v57; /*0x57c264*/
  if ( v57 ) /*0x57c26a*/
    Terrain::ConnectivityGraph(v60); /*0x57c270*/
  if ( v66 > 0 && v67 > 0 ) /*0x57c27f*/
    UpdateAreaConnectivityMap((ObjectClass *)v60, &v64); /*0x57c28a*/
  return v46; /*0x57c291*/
}



// ==== 0x0057C2B0  CellClass::ApplyTileModification2  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification2(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // cx
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+14h] [ebp-ACh] BYREF
  char v54; // [esp+1Bh] [ebp-A5h]
  int v55; // [esp+1Ch] [ebp-A4h]
  int v56; // [esp+20h] [ebp-A0h]
  Terrain *v57; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v59; // [esp+38h] [ebp-88h]
  int v60; // [esp+3Ch] [ebp-84h]
  int v61; // [esp+40h] [ebp-80h] BYREF
  int v62; // [esp+44h] [ebp-7Ch]
  int v63; // [esp+48h] [ebp-78h]
  int v64; // [esp+4Ch] [ebp-74h]
  int v65; // [esp+50h] [ebp-70h]
  int v66; // [esp+54h] [ebp-6Ch]
  LONG v67; // [esp+58h] [ebp-68h]
  LONG v68; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v70; // [esp+70h] [ebp-50h] BYREF
  LONG v71; // [esp+78h] [ebp-48h]
  _DWORD v72[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v74[4]; // [esp+A0h] [ebp-20h] BYREF

  v57 = (Terrain *)this; /*0x57c2c6*/
  v2 = *a2 + (a2[1] << 9); /*0x57c2d5*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57c2ea*/
  {
    v4 = v3; /*0x57c2ec*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57c2f2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57c2f4*/
  }
  v5 = *a2 - 1; /*0x57c300*/
  HIWORD(v55) = a2[1]; /*0x57c302*/
  LOWORD(v55) = v5; /*0x57c30a*/
  v6 = v5 + (SHIWORD(v55) << 9); /*0x57c315*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57c325*/
  {
    v56 = v7; /*0x57c327*/
  }
  else
  {
    v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57c331*/
    g_MissionQueueFrame.briefing[139] = v55; /*0x57c335*/
  }
  v8 = *a2 + 1; /*0x57c341*/
  HIWORD(v55) = a2[1]; /*0x57c343*/
  LOWORD(v55) = v8; /*0x57c34b*/
  v9 = v8 + (SHIWORD(v55) << 9); /*0x57c356*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57c366*/
  {
    v55 = v10; /*0x57c368*/
  }
  else
  {
    v11 = v55; /*0x57c36e*/
    v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57c372*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57c376*/
  }
  v53 = v4->?[2]; /*0x57c386*/
  LOBYTE(v60) = 0; /*0x57c38a*/
  v54 = 0; /*0x57c38f*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v70); /*0x57c3a0*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57c3a2*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57c3b7*/
  {
    v15 = *PlacementRect; /*0x57c468*/
    v24 = PlacementRect[1]; /*0x57c46a*/
    right = PlacementRect[2]; /*0x57c46d*/
    bottom = PlacementRect[3]; /*0x57c470*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57c3c2*/
    if ( v50 <= 0 || (v59 = PlacementRect[3], v59 <= 0) ) /*0x57c3d5*/
    {
      v15 = *StartCoords; /*0x57c45b*/
      v24 = StartCoords[1]; /*0x57c45d*/
      right = StartCoords[2]; /*0x57c460*/
      bottom = StartCoords[3]; /*0x57c463*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57c3db*/
      v15 = *StartCoords; /*0x57c3de*/
      v16 = StartCoords[1]; /*0x57c3e0*/
      v17 = StartCoords[3]; /*0x57c3e3*/
      rcDst.right = v14; /*0x57c3e6*/
      v18 = *PlacementRect; /*0x57c3ea*/
      v19 = v15 <= *PlacementRect; /*0x57c3ec*/
      rcDst.bottom = v17; /*0x57c3ee*/
      if ( !v19 ) /*0x57c3f2*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57c3fa*/
        v15 = v18; /*0x57c3fc*/
        rcDst.right = v20; /*0x57c3fe*/
      }
      v21 = PlacementRect[1]; /*0x57c402*/
      rcSrc2.left = v21; /*0x57c407*/
      if ( v16 > v21 ) /*0x57c40b*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57c413*/
        v16 = v21; /*0x57c415*/
        rcDst.bottom = v22; /*0x57c417*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57c429*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57c435*/
      bottom = rcDst.bottom; /*0x57c443*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v59 ) /*0x57c44c*/
        bottom = rcSrc2.left + v59 - v16 + 1; /*0x57c451*/
      v24 = v16; /*0x57c453*/
      right = rcDst.right; /*0x57c455*/
    }
  }
  v68 = bottom; /*0x57c473*/
  v67 = right; /*0x57c47b*/
  v65 = v15; /*0x57c484*/
  v66 = v24; /*0x57c488*/
  v61 = 0; /*0x57c48c*/
  v62 = 0; /*0x57c490*/
  v63 = 0; /*0x57c494*/
  v64 = 0; /*0x57c498*/
  if ( v53 == 96 ) /*0x57c49c*/
  {
    v26 = v55; /*0x57c4a2*/
    *(_DWORD *)(v56 + 68) = 97; /*0x57c4ab*/
    *(_DWORD *)(v26 + 68) = 97; /*0x57c4ae*/
    v4->?[2] = 97; /*0x57c4b1*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c4cf*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c4d8*/
  }
  else if ( v53 == 98 ) /*0x57c4e5*/
  {
    v27 = v55; /*0x57c4eb*/
    *(_DWORD *)(v56 + 68) = 99; /*0x57c4f4*/
    *(_DWORD *)(v27 + 68) = 99; /*0x57c4f7*/
    v4->?[2] = 99; /*0x57c4fa*/
    v53 = *(_DWORD *)a2 - 0x10000; /*0x57c51c*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c521*/
  }
  else if ( v53 >= 89 ) /*0x57c532*/
  {
    if ( v53 >= 92 ) /*0x57c59f*/
      return v54; /*0x57c85e*/
    v29 = v56; /*0x57c5a5*/
    v30 = v55; /*0x57c5a9*/
    *(_DWORD *)(v56 + 68) = 101; /*0x57c5b2*/
    *(_DWORD *)(v30 + 68) = 101; /*0x57c5b5*/
    v4->?[2] = 101; /*0x57c5bb*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57c5c4*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57c5d2*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57c5e0*/
    v51 = *(_DWORD *)a2 - 0x10000; /*0x57c5fb*/
    LOBYTE(v60) = 1; /*0x57c607*/
    v53 = v51; /*0x57c60c*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c610*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c630*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c637*/
    globalHelper_07C870(*(_DWORD *)a2); /*0x57c641*/
    v31 = *a2 - 1; /*0x57c652*/
    v32 = a2[1] - 1; /*0x57c653*/
    v54 = 1; /*0x57c656*/
    v61 = v31; /*0x57c65b*/
    v62 = v32; /*0x57c65f*/
    v63 = 3; /*0x57c663*/
    v64 = 3; /*0x57c667*/
  }
  else
  {
    v28 = v55; /*0x57c538*/
    *(_DWORD *)(v56 + 68) = 89; /*0x57c540*/
    *(_DWORD *)(v28 + 68) = 89; /*0x57c543*/
    v4->?[2] = 89; /*0x57c546*/
    v53 = *(_DWORD *)a2 - 0x10000; /*0x57c567*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c56b*/
    v53 = *(_DWORD *)a2 + 0x10000; /*0x57c58b*/
    CreateCliffStraightMap((__int16 *)&v53); /*0x57c592*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57c676*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57c684*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v72); /*0x57c697*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v74); /*0x57c699*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57c6aa*/
  {
    rcDst = *v34; /*0x57c75f*/
  }
  else
  {
    v52 = v34->right; /*0x57c6b5*/
    if ( v52 <= 0 || (v59 = v34->bottom, v59 <= 0) ) /*0x57c6c8*/
    {
      rcDst = *v33; /*0x57c742*/
    }
    else
    {
      left = v33->left; /*0x57c6ca*/
      v36 = v34->left; /*0x57c6cc*/
      v37 = v33->right; /*0x57c6ce*/
      top = v33->top; /*0x57c6d1*/
      v39 = v33->bottom; /*0x57c6d4*/
      v19 = left <= v34->left; /*0x57c6d7*/
      v71 = v37; /*0x57c6d9*/
      if ( !v19 ) /*0x57c6dd*/
      {
        v37 += left - v36; /*0x57c6e1*/
        left = v36; /*0x57c6e3*/
        v71 = v37; /*0x57c6e5*/
      }
      v40 = v34->top; /*0x57c6e9*/
      v53 = v40; /*0x57c6ee*/
      if ( top > v40 ) /*0x57c6f2*/
      {
        v39 += top - v40; /*0x57c6f6*/
        top = v40; /*0x57c6f8*/
      }
      if ( left + v37 >= v36 + v52 ) /*0x57c704*/
        v41 = v71; /*0x57c712*/
      else
        v41 = v36 - left + v52 + 1; /*0x57c70c*/
      if ( v39 + top < v59 + v53 ) /*0x57c725*/
        v39 = v59 + v53 - top + 1; /*0x57c72a*/
      rcDst.left = left; /*0x57c72c*/
      rcDst.top = top; /*0x57c730*/
      rcDst.right = v41; /*0x57c734*/
      rcDst.bottom = v39; /*0x57c738*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57c795*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57c79c*/
  v65 = *v43; /*0x57c7a9*/
  v66 = v43[1]; /*0x57c7b0*/
  v67 = v43[2]; /*0x57c7b7*/
  v68 = v43[3]; /*0x57c7c0*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57c7e0*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57c7e9*/
  House::AnnounceUpgrade(v56, -1); /*0x57c7f4*/
  v44 = v55; /*0x57c7f9*/
  House::AnnounceUpgrade(v55, -1); /*0x57c801*/
  v45 = v60; /*0x57c806*/
  Cell::SearchEnemies((int)v4, v60); /*0x57c80d*/
  Cell::SearchEnemies(v56, v45); /*0x57c817*/
  Cell::SearchEnemies(v44, v45); /*0x57c81f*/
  v46 = v54; /*0x57c824*/
  if ( v54 ) /*0x57c82a*/
    Terrain::ConnectivityGraph(v57); /*0x57c830*/
  if ( v63 > 0 && v64 > 0 ) /*0x57c83f*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v61); /*0x57c84a*/
  return v46; /*0x57c851*/
}



// ==== 0x0057C870  globalHelper_07C870  this=-  sig=csp ====
char __stdcall sub_57C870(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c877*/
  v2 = a1; /*0x57c885*/
  do /*0x57c8e3*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57c895*/
    LOWORD(v15) = LOWORD(dword_89F688[0]) + v2; /*0x57c89a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57c8a5*/
    v2 += LOWORD(dword_89F688[0]); /*0x57c8aa*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F688[0])) << 9; /*0x57c8ae*/
    v5 = v2 + v4 < 0; /*0x57c8b1*/
    v6 = v2 + v4; /*0x57c8b1*/
    HIWORD(a1) += HIWORD(dword_89F688[0]); /*0x57c8b3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c8cb*/
    {
      dword_ABDC74 = v15; /*0x57c8cd*/
      v7 = unk_ABDC50; /*0x57c8d3*/
    }
    v8 = v7[17]; /*0x57c8d8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57c8e3*/
  v19 = HIWORD(v1); /*0x57c8eb*/
  LOWORD(v17) = v15 + dword_89F698; /*0x57c8f9*/
  HIWORD(v17) = v3 + HIWORD(dword_89F698); /*0x57c904*/
  do /*0x57c95d*/
  {
    v9 = v19 + HIWORD(dword_89F698); /*0x57c90f*/
    LOWORD(v16) = v1 + dword_89F698; /*0x57c914*/
    HIWORD(v16) = v19 + HIWORD(dword_89F698); /*0x57c91f*/
    LOWORD(v1) = v1 + dword_89F698; /*0x57c924*/
    v10 = (__int16)(v19 + HIWORD(dword_89F698)) << 9; /*0x57c928*/
    v5 = (__int16)v1 + v10 < 0; /*0x57c92b*/
    v11 = (__int16)v1 + v10; /*0x57c92b*/
    v19 += HIWORD(dword_89F698); /*0x57c92d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57c945*/
    {
      dword_ABDC74 = v16; /*0x57c947*/
      v12 = unk_ABDC50; /*0x57c94d*/
    }
    v13 = v12[17]; /*0x57c952*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57c95d*/
  LOWORD(v18) = LOWORD(dword_89F688[0]) + v16; /*0x57c968*/
  HIWORD(v18) = HIWORD(dword_89F688[0]) + v9; /*0x57c96d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57c985*/
}



// ==== 0x0057C990  globalHelper_07C990  this=-  sig=csp ====
char __stdcall sub_57C990(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57c997*/
  v2 = a1; /*0x57c9a5*/
  do /*0x57ca03*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57c9b5*/
    LOWORD(v15) = dword_89F6A0 + v2; /*0x57c9ba*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57c9c5*/
    v2 += dword_89F6A0; /*0x57c9ca*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F6A0)) << 9; /*0x57c9ce*/
    v5 = v2 + v4 < 0; /*0x57c9d1*/
    v6 = v2 + v4; /*0x57c9d1*/
    HIWORD(a1) += HIWORD(dword_89F6A0); /*0x57c9d3*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57c9eb*/
    {
      dword_ABDC74 = v15; /*0x57c9ed*/
      v7 = unk_ABDC50; /*0x57c9f3*/
    }
    v8 = v7[17]; /*0x57c9f8*/
  }
  while ( v8 >= 74 && v8 <= 101 ); /*0x57ca03*/
  v19 = HIWORD(v1); /*0x57ca0b*/
  LOWORD(v17) = v15 + dword_89F690; /*0x57ca19*/
  HIWORD(v17) = v3 + HIWORD(dword_89F690); /*0x57ca24*/
  do /*0x57ca7d*/
  {
    v9 = v19 + HIWORD(dword_89F690); /*0x57ca2f*/
    LOWORD(v16) = v1 + dword_89F690; /*0x57ca34*/
    HIWORD(v16) = v19 + HIWORD(dword_89F690); /*0x57ca3f*/
    LOWORD(v1) = v1 + dword_89F690; /*0x57ca44*/
    v10 = (__int16)(v19 + HIWORD(dword_89F690)) << 9; /*0x57ca48*/
    v5 = (__int16)v1 + v10 < 0; /*0x57ca4b*/
    v11 = (__int16)v1 + v10; /*0x57ca4b*/
    v19 += HIWORD(dword_89F690); /*0x57ca4d*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57ca65*/
    {
      dword_ABDC74 = v16; /*0x57ca67*/
      v12 = unk_ABDC50; /*0x57ca6d*/
    }
    v13 = v12[17]; /*0x57ca72*/
  }
  while ( v13 >= 74 && v13 <= 101 ); /*0x57ca7d*/
  LOWORD(v18) = dword_89F6A0 + v16; /*0x57ca88*/
  HIWORD(v18) = HIWORD(dword_89F6A0) + v9; /*0x57ca8d*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57caa5*/
}



// ==== 0x0057CAB0  ObjectClass::Map_Create_57CAB0  this=ObjectClass  sig=csp ====
int __thiscall Map_Create_57CAB0(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  int v9; // [esp+8h] [ebp-4h]

  HIWORD(v8) = HIWORD(this->AbstractClass); /*0x57caba*/
  LOWORD(v8) = LOWORD(this->AbstractClass) - 1; /*0x57cac2*/
  v1 = (__int16)v8 + (SHIWORD(v8) << 9); /*0x57cad5*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57cae5*/
  {
    g_MissionQueueFrame.briefing[139] = v8; /*0x57caeb*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57caf0*/
  }
  v3 = v2[17]; /*0x57cafc*/
  HIWORD(v9) = HIWORD(this->AbstractClass); /*0x57cb04*/
  LOWORD(v9) = LOWORD(this->AbstractClass) + 1; /*0x57cb09*/
  v4 = (__int16)v9 + (SHIWORD(v9) << 9); /*0x57cb14*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cb24*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cb2a*/
    g_MissionQueueFrame.briefing[139] = v9; /*0x57cb2f*/
  }
  v6 = 0; /*0x57cb38*/
  switch ( v5[17] ) /*0x57cb4d*/
  {
    case 209: /*0x57cb4d*/
    case 211: /*0x57cb4d*/
    case 213: /*0x57cb4d*/
    case 224: /*0x57cb4d*/
      v6 = 1; /*0x57cb54*/
      break; /*0x57cb59*/
    case 212: /*0x57cb4d*/
    case 231: /*0x57cb4d*/
      v6 = 2; /*0x57cb5b*/
      break; /*0x57cb5b*/
    default:
      break;
  }
  switch ( v3 ) /*0x57cb75*/
  {
    case 210: /*0x57cb75*/
    case 211: /*0x57cb75*/
    case 212: /*0x57cb75*/
    case 226: /*0x57cb75*/
      result = v6 | 4; /*0x57cb7f*/
      break; /*0x57cb82*/
    case 213: /*0x57cb75*/
    case 231: /*0x57cb75*/
      v6 |= 8u; /*0x57cb83*/
      goto LABEL_13; /*0x57cb83*/
    default:
LABEL_13:
      result = v6; /*0x57cb86*/
      break; /*0x57cb86*/
  }
  return result; /*0x57cb66*/
}



// ==== 0x0057CBE0  ObjectClass::Map_Create_57CBE0  this=ObjectClass  sig=csp ====
char __thiscall Map_Create_57CBE0(ObjectClass *this)
{
  unsigned int v1; // eax
  int *v2; // eax
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // edi
  char result; // al

  v1 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass - 0x10000) >> 16) << 9); /*0x57cc04*/
  if ( v1 >= 0x40000 || (v2 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v1)) == 0 ) /*0x57cc14*/
  {
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass - 0x10000; /*0x57cc1a*/
    v2 = &g_MissionQueueFrame.briefing[130]; /*0x57cc1f*/
  }
  v3 = v2[17]; /*0x57cc2c*/
  v4 = SLOWORD(this->AbstractClass) + ((__int16)(((unsigned int)this->AbstractClass + 0x10000) >> 16) << 9); /*0x57cc44*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cc54*/
  {
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cc5a*/
    g_MissionQueueFrame.briefing[139] = (int)this->AbstractClass + 0x10000; /*0x57cc5f*/
  }
  v6 = v5[17]; /*0x57cc65*/
  result = 0; /*0x57cc6e*/
  switch ( v3 ) /*0x57cc7e*/
  {
    case 218: /*0x57cc7e*/
    case 220: /*0x57cc7e*/
    case 222: /*0x57cc7e*/
    case 228: /*0x57cc7e*/
      result = 1; /*0x57cc85*/
      break; /*0x57cc8a*/
    case 221: /*0x57cc7e*/
    case 232: /*0x57cc7e*/
      result = 2; /*0x57cc8c*/
      break; /*0x57cc8c*/
    default:
      break;
  }
  switch ( v6 ) /*0x57cca5*/
  {
    case 219: /*0x57cca5*/
    case 220: /*0x57cca5*/
    case 221: /*0x57cca5*/
    case 230: /*0x57cca5*/
      result |= 4u; /*0x57ccac*/
      break; /*0x57ccaf*/
    case 222: /*0x57cca5*/
    case 232: /*0x57cca5*/
      result |= 8u; /*0x57ccb0*/
      break; /*0x57ccb0*/
    default:
      return result;
  }
  return result; /*0x57cc97*/
}



// ==== 0x0057CCF0  CellClass::CheckTilePassable  this=CellClass  sig=csp ====
int __stdcall CellClass::CheckTilePassable(int a1)
{
  CellClass *v1; // ecx
  __int16 *v2; // esi
  CellClass *v3; // edi
  unsigned int v4; // eax
  int *v5; // eax
  int result; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  __int16 v18[2]; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = (__int16 *)a1; /*0x57ccf4*/
  v3 = v1; /*0x57ccf9*/
  v4 = *(__int16 *)a1 + (*(__int16 *)(a1 + 2) << 9); /*0x57cd05*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57cd1b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a1; /*0x57cd1f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57cd24*/
  }
  result = v5[17]; /*0x57cd29*/
  if ( result >= 205 && result <= 213 || result >= 223 && result <= 226 || result == 231 ) /*0x57cd4d*/
  {
    v7 = *(_WORD *)(a1 + 2); /*0x57cd56*/
    LOWORD(a1) = *(_WORD *)a1; /*0x57cd5a*/
    HIWORD(a1) = v7 - 1; /*0x57cd65*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cd7d*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57cd8c*/
    {
      v10 = v2[1] - 2; /*0x57cdc4*/
      LOWORD(a1) = *v2; /*0x57cdc8*/
      HIWORD(a1) = v10; /*0x57cdcd*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cde9*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x57cdf8*/
      {
        v12 = v2[1]; /*0x57ce0d*/
        LOWORD(a1) = *v2; /*0x57ce11*/
        HIWORD(a1) = v12 - 1; /*0x57ce1c*/
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, (__int16 *)&a1); /*0x57ce2c*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification3(v3, v2); /*0x57cdfd*/
      }
    }
    else
    {
      v9 = v2[1] + 1; /*0x57cd95*/
      LOWORD(a1) = *v2; /*0x57cd97*/
      HIWORD(a1) = v9; /*0x57cd9c*/
      LOBYTE(result) = CellClass::ApplyTileModification3(v3, (__int16 *)&a1); /*0x57cdb0*/
    }
  }
  else if ( result >= 214 && result <= 222 || result >= 227 && result <= 230 || result == 232 ) /*0x57ce5a*/
  {
    v13 = *(_WORD *)a1 - 1; /*0x57ce67*/
    HIWORD(a1) = *(_WORD *)(a1 + 2); /*0x57ce69*/
    LOWORD(a1) = v13; /*0x57ce6e*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57ce8a*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x57ce99*/
    {
      v16 = *v2 - 2; /*0x57ced1*/
      HIWORD(a1) = v2[1]; /*0x57ced5*/
      LOWORD(a1) = v16; /*0x57ceda*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a1) + 17); /*0x57cef6*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x57cf05*/
      {
        a1 = 1; /*0x57cf23*/
        *(_DWORD *)v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a1); /*0x57cf3c*/
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v18); /*0x57cf43*/
      }
      else
      {
        LOBYTE(result) = CellClass::ApplyTileModification4(v3, v2); /*0x57cf0a*/
      }
    }
    else
    {
      v15 = *v2 + 1; /*0x57cea2*/
      HIWORD(a1) = v2[1]; /*0x57cea4*/
      LOWORD(a1) = v15; /*0x57cea9*/
      LOBYTE(result) = CellClass::ApplyTileModification4(v3, (__int16 *)&a1); /*0x57cebd*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x57cf51*/
  }
  return result; /*0x57cdb5*/
}



// ==== 0x0057CF60  CellClass::ApplyTileModification3  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification3(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // ax
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // ax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C8h]
  _DWORD *v49; // [esp-4h] [ebp-C4h]
  int v50; // [esp+10h] [ebp-B0h]
  int v51; // [esp+10h] [ebp-B0h]
  int v52; // [esp+10h] [ebp-B0h]
  int v53; // [esp+10h] [ebp-B0h]
  int v54; // [esp+10h] [ebp-B0h]
  int v55; // [esp+10h] [ebp-B0h]
  int v56; // [esp+14h] [ebp-ACh] BYREF
  char v57; // [esp+1Bh] [ebp-A5h]
  int v58; // [esp+1Ch] [ebp-A4h]
  int v59; // [esp+20h] [ebp-A0h]
  Terrain *v60; // [esp+24h] [ebp-9Ch]
  struct tagRECT rcDst; // [esp+28h] [ebp-98h] BYREF
  int v62; // [esp+38h] [ebp-88h]
  int v63; // [esp+3Ch] [ebp-84h]
  int v64; // [esp+40h] [ebp-80h] BYREF
  int v65; // [esp+44h] [ebp-7Ch]
  int v66; // [esp+48h] [ebp-78h]
  int v67; // [esp+4Ch] [ebp-74h]
  int v68; // [esp+50h] [ebp-70h]
  int v69; // [esp+54h] [ebp-6Ch]
  LONG v70; // [esp+58h] [ebp-68h]
  LONG v71; // [esp+5Ch] [ebp-64h]
  RECT rcSrc2; // [esp+60h] [ebp-60h] BYREF
  int v73; // [esp+70h] [ebp-50h] BYREF
  LONG v74; // [esp+78h] [ebp-48h]
  _DWORD v75[4]; // [esp+80h] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+90h] [ebp-30h] BYREF
  int v77[4]; // [esp+A0h] [ebp-20h] BYREF

  v60 = (Terrain *)this; /*0x57cf76*/
  v2 = *a2 + (a2[1] << 9); /*0x57cf85*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57cf9a*/
  {
    v4 = v3; /*0x57cf9c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57cfa2*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57cfa4*/
  }
  v5 = a2[1] - 1; /*0x57cfb0*/
  LOWORD(v58) = *a2; /*0x57cfb2*/
  HIWORD(v58) = v5; /*0x57cfb7*/
  v6 = (__int16)v58 + (v5 << 9); /*0x57cfc5*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57cfd5*/
  {
    v59 = v7; /*0x57cfd7*/
  }
  else
  {
    v59 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57cfe1*/
    g_MissionQueueFrame.briefing[139] = v58; /*0x57cfe5*/
  }
  v8 = a2[1] + 1; /*0x57cff1*/
  LOWORD(v58) = *a2; /*0x57cff3*/
  HIWORD(v58) = v8; /*0x57cff8*/
  v9 = (__int16)v58 + (v8 << 9); /*0x57d006*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57d016*/
  {
    v58 = v10; /*0x57d018*/
  }
  else
  {
    v11 = v58; /*0x57d01e*/
    v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d022*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57d026*/
  }
  v56 = v4->?[2]; /*0x57d036*/
  LOBYTE(v63) = 0; /*0x57d03a*/
  v57 = 0; /*0x57d03f*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v73); /*0x57d050*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57d052*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57d067*/
  {
    v15 = *PlacementRect; /*0x57d118*/
    v24 = PlacementRect[1]; /*0x57d11a*/
    right = PlacementRect[2]; /*0x57d11d*/
    bottom = PlacementRect[3]; /*0x57d120*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57d072*/
    if ( v50 <= 0 || (v62 = PlacementRect[3], v62 <= 0) ) /*0x57d085*/
    {
      v15 = *StartCoords; /*0x57d10b*/
      v24 = StartCoords[1]; /*0x57d10d*/
      right = StartCoords[2]; /*0x57d110*/
      bottom = StartCoords[3]; /*0x57d113*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57d08b*/
      v15 = *StartCoords; /*0x57d08e*/
      v16 = StartCoords[1]; /*0x57d090*/
      v17 = StartCoords[3]; /*0x57d093*/
      rcDst.right = v14; /*0x57d096*/
      v18 = *PlacementRect; /*0x57d09a*/
      v19 = v15 <= *PlacementRect; /*0x57d09c*/
      rcDst.bottom = v17; /*0x57d09e*/
      if ( !v19 ) /*0x57d0a2*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57d0aa*/
        v15 = v18; /*0x57d0ac*/
        rcDst.right = v20; /*0x57d0ae*/
      }
      v21 = PlacementRect[1]; /*0x57d0b2*/
      rcSrc2.left = v21; /*0x57d0b7*/
      if ( v16 > v21 ) /*0x57d0bb*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57d0c3*/
        v16 = v21; /*0x57d0c5*/
        rcDst.bottom = v22; /*0x57d0c7*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57d0d9*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57d0e5*/
      bottom = rcDst.bottom; /*0x57d0f3*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v62 ) /*0x57d0fc*/
        bottom = rcSrc2.left + v62 - v16 + 1; /*0x57d101*/
      v24 = v16; /*0x57d103*/
      right = rcDst.right; /*0x57d105*/
    }
  }
  v71 = bottom; /*0x57d123*/
  v70 = right; /*0x57d12b*/
  v68 = v15; /*0x57d136*/
  v69 = v24; /*0x57d13a*/
  v64 = 0; /*0x57d13e*/
  v65 = 0; /*0x57d142*/
  v66 = 0; /*0x57d146*/
  v67 = 0; /*0x57d14a*/
  if ( v56 == 223 ) /*0x57d14e*/
  {
    v26 = v58; /*0x57d154*/
    *(_DWORD *)(v59 + 68) = 224; /*0x57d15d*/
    *(_DWORD *)(v26 + 68) = 224; /*0x57d160*/
    v4->?[2] = 224; /*0x57d163*/
    LOWORD(v51) = *a2 - 1; /*0x57d16f*/
    HIWORD(v51) = a2[1]; /*0x57d174*/
    v56 = v51; /*0x57d181*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d18a*/
  }
  else if ( v56 == 225 ) /*0x57d199*/
  {
    v27 = v58; /*0x57d19f*/
    *(_DWORD *)(v59 + 68) = 226; /*0x57d1a8*/
    *(_DWORD *)(v27 + 68) = 226; /*0x57d1ab*/
    v4->?[2] = 226; /*0x57d1ae*/
    LOWORD(v52) = *a2 + 1; /*0x57d1ba*/
    HIWORD(v52) = a2[1]; /*0x57d1bf*/
    v56 = v52; /*0x57d1d0*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d1d5*/
  }
  else if ( v56 >= 211 ) /*0x57d1e6*/
  {
    if ( v56 >= 214 ) /*0x57d255*/
      return v57; /*0x57d514*/
    v29 = v59; /*0x57d25b*/
    v30 = v58; /*0x57d25f*/
    *(_DWORD *)(v59 + 68) = 231; /*0x57d268*/
    *(_DWORD *)(v30 + 68) = 231; /*0x57d26b*/
    v4->?[2] = 231; /*0x57d271*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57d27a*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57d288*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57d296*/
    LOWORD(v54) = *a2 - 1; /*0x57d2a8*/
    HIWORD(v54) = a2[1]; /*0x57d2b1*/
    LOBYTE(v63) = 1; /*0x57d2bd*/
    v56 = v54; /*0x57d2c2*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d2c6*/
    HIWORD(v54) = a2[1]; /*0x57d2d4*/
    LOWORD(v54) = *a2 + 1; /*0x57d2d9*/
    v56 = v54; /*0x57d2e6*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d2ed*/
    globalHelper_07DC20(*(_DWORD *)a2); /*0x57d2f7*/
    v31 = *a2 - 1; /*0x57d308*/
    v32 = a2[1] - 1; /*0x57d309*/
    v57 = 1; /*0x57d30c*/
    v64 = v31; /*0x57d311*/
    v65 = v32; /*0x57d315*/
    v66 = 3; /*0x57d319*/
    v67 = 3; /*0x57d31d*/
  }
  else
  {
    v28 = v58; /*0x57d1ec*/
    *(_DWORD *)(v59 + 68) = 211; /*0x57d1f4*/
    *(_DWORD *)(v28 + 68) = 211; /*0x57d1f7*/
    v4->?[2] = 211; /*0x57d1fa*/
    LOWORD(v53) = *a2 - 1; /*0x57d206*/
    HIWORD(v53) = a2[1]; /*0x57d20f*/
    v56 = v53; /*0x57d21b*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d21f*/
    HIWORD(v53) = a2[1]; /*0x57d22d*/
    LOWORD(v53) = *a2 + 1; /*0x57d232*/
    v56 = v53; /*0x57d23f*/
    CreateCliffBridgeMap((__int16 *)&v56); /*0x57d246*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57d32c*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57d33a*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v75); /*0x57d34d*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v77); /*0x57d34f*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57d360*/
  {
    rcDst = *v34; /*0x57d415*/
  }
  else
  {
    v55 = v34->right; /*0x57d36b*/
    if ( v55 <= 0 || (v62 = v34->bottom, v62 <= 0) ) /*0x57d37e*/
    {
      rcDst = *v33; /*0x57d3f8*/
    }
    else
    {
      left = v33->left; /*0x57d380*/
      v36 = v34->left; /*0x57d382*/
      v37 = v33->right; /*0x57d384*/
      top = v33->top; /*0x57d387*/
      v39 = v33->bottom; /*0x57d38a*/
      v19 = left <= v34->left; /*0x57d38d*/
      v74 = v37; /*0x57d38f*/
      if ( !v19 ) /*0x57d393*/
      {
        v37 += left - v36; /*0x57d397*/
        left = v36; /*0x57d399*/
        v74 = v37; /*0x57d39b*/
      }
      v40 = v34->top; /*0x57d39f*/
      v56 = v40; /*0x57d3a4*/
      if ( top > v40 ) /*0x57d3a8*/
      {
        v39 += top - v40; /*0x57d3ac*/
        top = v40; /*0x57d3ae*/
      }
      if ( left + v37 >= v36 + v55 ) /*0x57d3ba*/
        v41 = v74; /*0x57d3c8*/
      else
        v41 = v36 - left + v55 + 1; /*0x57d3c2*/
      if ( v39 + top < v62 + v56 ) /*0x57d3db*/
        v39 = v62 + v56 - top + 1; /*0x57d3e0*/
      rcDst.left = left; /*0x57d3e2*/
      rcDst.top = top; /*0x57d3e6*/
      rcDst.right = v41; /*0x57d3ea*/
      rcDst.bottom = v39; /*0x57d3ee*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57d44b*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57d452*/
  v68 = *v43; /*0x57d45f*/
  v69 = v43[1]; /*0x57d466*/
  v70 = v43[2]; /*0x57d46d*/
  v71 = v43[3]; /*0x57d476*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57d496*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57d49f*/
  House::AnnounceUpgrade(v59, -1); /*0x57d4aa*/
  v44 = v58; /*0x57d4af*/
  House::AnnounceUpgrade(v58, -1); /*0x57d4b7*/
  v45 = v63; /*0x57d4bc*/
  Cell::SearchEnemies((int)v4, v63); /*0x57d4c3*/
  Cell::SearchEnemies(v59, v45); /*0x57d4cd*/
  Cell::SearchEnemies(v44, v45); /*0x57d4d5*/
  v46 = v57; /*0x57d4da*/
  if ( v57 ) /*0x57d4e0*/
    Terrain::ConnectivityGraph(v60); /*0x57d4e6*/
  if ( v66 > 0 && v67 > 0 ) /*0x57d4f5*/
    UpdateAreaConnectivityMap((ObjectClass *)v60, &v64); /*0x57d500*/
  return v46; /*0x57d507*/
}



// ==== 0x0057D530  CellClass::ApplyTileModification4  this=CellClass  sig=csp ====
char __thiscall CellClass::ApplyTileModification4(CellClass *this, __int16 *a2)
{
  unsigned int v2; // eax
  BuildingClass *v3; // eax
  BuildingClass *v4; // ebx
  __int16 v5; // cx
  unsigned int v6; // eax
  int v7; // eax
  __int16 v8; // cx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // edx
  int *PlacementRect; // edi
  int *StartCoords; // eax
  LONG v14; // ecx
  int v15; // edx
  int v16; // ebp
  LONG v17; // eax
  int v18; // ecx
  bool v19; // cc
  LONG v20; // eax
  LONG v21; // edi
  LONG v22; // eax
  LONG bottom; // eax
  int v24; // ecx
  LONG right; // ebp
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // ecx
  struct tagRECT *v33; // esi
  struct tagRECT *v34; // eax
  LONG left; // edx
  LONG v36; // ecx
  LONG v37; // ebp
  LONG top; // edi
  LONG v39; // esi
  int v40; // eax
  LONG v41; // ecx
  Bounds *v42; // eax
  int *v43; // eax
  int v44; // edi
  int v45; // esi
  char v46; // bl
  _DWORD *v48; // [esp-8h] [ebp-C4h]
  _DWORD *v49; // [esp-4h] [ebp-C0h]
  int v50; // [esp+10h] [ebp-ACh]
  int v51; // [esp+10h] [ebp-ACh]
  int v52; // [esp+14h] [ebp-A8h] BYREF
  char v53; // [esp+1Bh] [ebp-A1h]
  int v54; // [esp+1Ch] [ebp-A0h]
  Terrain *v55; // [esp+20h] [ebp-9Ch]
  int v56; // [esp+24h] [ebp-98h]
  struct tagRECT rcDst; // [esp+28h] [ebp-94h] BYREF
  int v58; // [esp+38h] [ebp-84h]
  int v59; // [esp+3Ch] [ebp-80h] BYREF
  int v60; // [esp+40h] [ebp-7Ch]
  int v61; // [esp+44h] [ebp-78h]
  int v62; // [esp+48h] [ebp-74h]
  int v63; // [esp+4Ch] [ebp-70h]
  int v64; // [esp+50h] [ebp-6Ch]
  LONG v65; // [esp+54h] [ebp-68h]
  LONG v66; // [esp+58h] [ebp-64h]
  RECT rcSrc2; // [esp+5Ch] [ebp-60h] BYREF
  int v68; // [esp+6Ch] [ebp-50h] BYREF
  LONG v69; // [esp+74h] [ebp-48h]
  int v70[4]; // [esp+7Ch] [ebp-40h] BYREF
  RECT rcSrc1; // [esp+8Ch] [ebp-30h] BYREF
  int v72[4]; // [esp+9Ch] [ebp-20h] BYREF

  v55 = (Terrain *)this; /*0x57d546*/
  v2 = *a2 + (a2[1] << 9); /*0x57d555*/
  if ( v2 < 0x40000 && (v3 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v2)) != 0 ) /*0x57d56a*/
  {
    v4 = v3; /*0x57d56c*/
  }
  else
  {
    v4 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57d572*/
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57d574*/
  }
  v5 = *a2 - 1; /*0x57d580*/
  HIWORD(v54) = a2[1]; /*0x57d582*/
  LOWORD(v54) = v5; /*0x57d58a*/
  v6 = v5 + (SHIWORD(v54) << 9); /*0x57d595*/
  if ( v6 < 0x40000 && (v7 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v6)) != 0 ) /*0x57d5a5*/
  {
    v56 = v7; /*0x57d5a7*/
  }
  else
  {
    v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d5b1*/
    g_MissionQueueFrame.briefing[139] = v54; /*0x57d5b5*/
  }
  v8 = *a2 + 1; /*0x57d5c1*/
  HIWORD(v54) = a2[1]; /*0x57d5c3*/
  LOWORD(v54) = v8; /*0x57d5cb*/
  v9 = v8 + (SHIWORD(v54) << 9); /*0x57d5d6*/
  if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57d5e6*/
  {
    v54 = v10; /*0x57d5e8*/
  }
  else
  {
    v11 = v54; /*0x57d5ee*/
    v54 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57d5f2*/
    g_MissionQueueFrame.briefing[139] = v11; /*0x57d5f6*/
  }
  v52 = v4->?[2]; /*0x57d606*/
  v53 = 0; /*0x57d60a*/
  PlacementRect = BuildingClass::GetPlacementRect(v4, &v68); /*0x57d61b*/
  StartCoords = House::GetStartCoords((House *)v4, &rcSrc2); /*0x57d61d*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57d632*/
  {
    v15 = *PlacementRect; /*0x57d6e3*/
    v24 = PlacementRect[1]; /*0x57d6e5*/
    right = PlacementRect[2]; /*0x57d6e8*/
    bottom = PlacementRect[3]; /*0x57d6eb*/
  }
  else
  {
    v50 = PlacementRect[2]; /*0x57d63d*/
    if ( v50 <= 0 || (v58 = PlacementRect[3], v58 <= 0) ) /*0x57d650*/
    {
      v15 = *StartCoords; /*0x57d6d6*/
      v24 = StartCoords[1]; /*0x57d6d8*/
      right = StartCoords[2]; /*0x57d6db*/
      bottom = StartCoords[3]; /*0x57d6de*/
    }
    else
    {
      v14 = StartCoords[2]; /*0x57d656*/
      v15 = *StartCoords; /*0x57d659*/
      v16 = StartCoords[1]; /*0x57d65b*/
      v17 = StartCoords[3]; /*0x57d65e*/
      rcDst.right = v14; /*0x57d661*/
      v18 = *PlacementRect; /*0x57d665*/
      v19 = v15 <= *PlacementRect; /*0x57d667*/
      rcDst.bottom = v17; /*0x57d669*/
      if ( !v19 ) /*0x57d66d*/
      {
        v20 = v15 - v18 + rcDst.right; /*0x57d675*/
        v15 = v18; /*0x57d677*/
        rcDst.right = v20; /*0x57d679*/
      }
      v21 = PlacementRect[1]; /*0x57d67d*/
      rcSrc2.left = v21; /*0x57d682*/
      if ( v16 > v21 ) /*0x57d686*/
      {
        v22 = v16 - v21 + rcDst.bottom; /*0x57d68e*/
        v16 = v21; /*0x57d690*/
        rcDst.bottom = v22; /*0x57d692*/
      }
      if ( v15 + rcDst.right < v18 + v50 ) /*0x57d6a4*/
        rcDst.right = v18 - v15 + v50 + 1; /*0x57d6b0*/
      bottom = rcDst.bottom; /*0x57d6be*/
      if ( rcDst.bottom + v16 < rcSrc2.left + v58 ) /*0x57d6c7*/
        bottom = rcSrc2.left + v58 - v16 + 1; /*0x57d6cc*/
      v24 = v16; /*0x57d6ce*/
      right = rcDst.right; /*0x57d6d0*/
    }
  }
  v66 = bottom; /*0x57d6ee*/
  v65 = right; /*0x57d6f6*/
  v63 = v15; /*0x57d701*/
  v64 = v24; /*0x57d705*/
  v59 = 0; /*0x57d709*/
  v60 = 0; /*0x57d70d*/
  v61 = 0; /*0x57d711*/
  v62 = 0; /*0x57d715*/
  if ( v52 == 227 ) /*0x57d719*/
  {
    v26 = v54; /*0x57d71f*/
    *(_DWORD *)(v56 + 68) = 228; /*0x57d728*/
    *(_DWORD *)(v26 + 68) = 228; /*0x57d72b*/
    v4->?[2] = 228; /*0x57d72e*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d74c*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d755*/
  }
  else if ( v52 == 229 ) /*0x57d764*/
  {
    v27 = v54; /*0x57d76a*/
    *(_DWORD *)(v56 + 68) = 230; /*0x57d773*/
    *(_DWORD *)(v27 + 68) = 230; /*0x57d776*/
    v4->?[2] = 230; /*0x57d779*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d79b*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d7a0*/
  }
  else if ( v52 >= 220 ) /*0x57d7b1*/
  {
    if ( v52 >= 223 ) /*0x57d820*/
      return v53; /*0x57dad6*/
    v29 = v56; /*0x57d826*/
    v30 = v54; /*0x57d82a*/
    *(_DWORD *)(v56 + 68) = 232; /*0x57d833*/
    *(_DWORD *)(v30 + 68) = 232; /*0x57d836*/
    v4->?[2] = 232; /*0x57d83c*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v29 + 36); /*0x57d845*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], v30 + 36); /*0x57d853*/
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v4->?); /*0x57d861*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d888*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d88c*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d8ac*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d8b3*/
    globalHelper_07DAF0(*(_DWORD *)a2); /*0x57d8bd*/
    v31 = *a2 - 1; /*0x57d8ce*/
    v32 = a2[1] - 1; /*0x57d8cf*/
    v53 = 1; /*0x57d8d2*/
    v59 = v31; /*0x57d8d7*/
    v60 = v32; /*0x57d8db*/
    v61 = 3; /*0x57d8df*/
    v62 = 3; /*0x57d8e3*/
  }
  else
  {
    v28 = v54; /*0x57d7b7*/
    *(_DWORD *)(v56 + 68) = 220; /*0x57d7bf*/
    *(_DWORD *)(v28 + 68) = 220; /*0x57d7c2*/
    v4->?[2] = 220; /*0x57d7c5*/
    v52 = *(_DWORD *)a2 - 0x10000; /*0x57d7e6*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d7ea*/
    v52 = *(_DWORD *)a2 + 0x10000; /*0x57d80a*/
    CreateCliffStraightBridgeMap((__int16 *)&v52); /*0x57d811*/
  }
  rcSrc2.top = (LONG)DSurface_ViewBounds.field_4; /*0x57d8f2*/
  rcSrc2.left = DSurface_ViewBounds.field_0; /*0x57d900*/
  v33 = (struct tagRECT *)House::GetStartCoords((House *)v4, v72); /*0x57d910*/
  v34 = (struct tagRECT *)BuildingClass::GetPlacementRect(v4, v70); /*0x57d912*/
  if ( v33->right <= 0 || v33->bottom <= 0 ) /*0x57d923*/
  {
    rcDst = *v34; /*0x57d9d8*/
  }
  else
  {
    v51 = v34->right; /*0x57d92e*/
    if ( v51 <= 0 || (v58 = v34->bottom, v58 <= 0) ) /*0x57d941*/
    {
      rcDst = *v33; /*0x57d9bb*/
    }
    else
    {
      left = v33->left; /*0x57d943*/
      v36 = v34->left; /*0x57d945*/
      v37 = v33->right; /*0x57d947*/
      top = v33->top; /*0x57d94a*/
      v39 = v33->bottom; /*0x57d94d*/
      v19 = left <= v34->left; /*0x57d950*/
      v69 = v37; /*0x57d952*/
      if ( !v19 ) /*0x57d956*/
      {
        v37 += left - v36; /*0x57d95a*/
        left = v36; /*0x57d95c*/
        v69 = v37; /*0x57d95e*/
      }
      v40 = v34->top; /*0x57d962*/
      v52 = v40; /*0x57d967*/
      if ( top > v40 ) /*0x57d96b*/
      {
        v39 += top - v40; /*0x57d96f*/
        top = v40; /*0x57d971*/
      }
      if ( left + v37 >= v36 + v51 ) /*0x57d97d*/
        v41 = v69; /*0x57d98b*/
      else
        v41 = v36 - left + v51 + 1; /*0x57d985*/
      if ( v39 + top < v58 + v52 ) /*0x57d99e*/
        v39 = v58 + v52 - top + 1; /*0x57d9a3*/
      rcDst.left = left; /*0x57d9a5*/
      rcDst.top = top; /*0x57d9a9*/
      rcDst.right = v41; /*0x57d9ad*/
      rcDst.bottom = v39; /*0x57d9b1*/
    }
  }
  v42 = (Bounds *)Rect::Union(&rcDst, &rcSrc1, &rcSrc2); /*0x57da0e*/
  v43 = Bounds::Subtract(v42, v48, v49); /*0x57da15*/
  v63 = *v43; /*0x57da22*/
  v64 = v43[1]; /*0x57da29*/
  v65 = v43[2]; /*0x57da30*/
  v66 = v43[3]; /*0x57da39*/
  Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x57da59*/
  House::AnnounceUpgrade((int)v4, -1); /*0x57da62*/
  v44 = v56; /*0x57da67*/
  House::AnnounceUpgrade(v56, -1); /*0x57da6f*/
  v45 = v54; /*0x57da74*/
  House::AnnounceUpgrade(v54, -1); /*0x57da7c*/
  Cell::SearchEnemies((int)v4, 1); /*0x57da85*/
  Cell::SearchEnemies(v44, 1); /*0x57da8e*/
  Cell::SearchEnemies(v45, 1); /*0x57da97*/
  v46 = v53; /*0x57da9c*/
  if ( v53 ) /*0x57daa2*/
    Terrain::ConnectivityGraph(v55); /*0x57daa8*/
  if ( v61 > 0 && v62 > 0 ) /*0x57dab7*/
    UpdateAreaConnectivityMap((ObjectClass *)v55, &v59); /*0x57dac2*/
  return v46; /*0x57dac9*/
}



// ==== 0x0057DAF0  globalHelper_07DAF0  this=-  sig=csp ====
char __stdcall sub_57DAF0(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57daf7*/
  v2 = a1; /*0x57db05*/
  do /*0x57db67*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57db15*/
    LOWORD(v15) = LOWORD(dword_89F688[0]) + v2; /*0x57db1a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F688[0]); /*0x57db25*/
    v2 += LOWORD(dword_89F688[0]); /*0x57db2a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F688[0])) << 9; /*0x57db2e*/
    v5 = v2 + v4 < 0; /*0x57db31*/
    v6 = v2 + v4; /*0x57db31*/
    HIWORD(a1) += HIWORD(dword_89F688[0]); /*0x57db33*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57db4b*/
    {
      dword_ABDC74 = v15; /*0x57db4d*/
      v7 = unk_ABDC50; /*0x57db53*/
    }
    v8 = v7[17]; /*0x57db58*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57db67*/
  v19 = HIWORD(v1); /*0x57db6f*/
  LOWORD(v17) = v15 + dword_89F698; /*0x57db7d*/
  HIWORD(v17) = v3 + HIWORD(dword_89F698); /*0x57db88*/
  do /*0x57dbe5*/
  {
    v9 = v19 + HIWORD(dword_89F698); /*0x57db93*/
    LOWORD(v16) = v1 + dword_89F698; /*0x57db98*/
    HIWORD(v16) = v19 + HIWORD(dword_89F698); /*0x57dba3*/
    LOWORD(v1) = v1 + dword_89F698; /*0x57dba8*/
    v10 = (__int16)(v19 + HIWORD(dword_89F698)) << 9; /*0x57dbac*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dbaf*/
    v11 = (__int16)v1 + v10; /*0x57dbaf*/
    v19 += HIWORD(dword_89F698); /*0x57dbb1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dbc9*/
    {
      dword_ABDC74 = v16; /*0x57dbcb*/
      v12 = unk_ABDC50; /*0x57dbd1*/
    }
    v13 = v12[17]; /*0x57dbd6*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dbe5*/
  LOWORD(v18) = LOWORD(dword_89F688[0]) + v16; /*0x57dbf0*/
  HIWORD(v18) = HIWORD(dword_89F688[0]) + v9; /*0x57dbf5*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dc0d*/
}



// ==== 0x0057DC20  globalHelper_07DC20  this=-  sig=csp ====
char __stdcall sub_57DC20(int a1)
{
  int v1; // edi
  __int16 v2; // bx
  __int16 v3; // dx
  int v4; // eax
  bool v5; // sf
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+10h] [ebp-Ch]
  void *v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+20h] [ebp+4h]
  __int16 v19; // [esp+22h] [ebp+6h]

  v1 = a1; /*0x57dc27*/
  v2 = a1; /*0x57dc35*/
  do /*0x57dc97*/
  {
    v3 = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57dc45*/
    LOWORD(v15) = dword_89F6A0 + v2; /*0x57dc4a*/
    HIWORD(v15) = HIWORD(a1) + HIWORD(dword_89F6A0); /*0x57dc55*/
    v2 += dword_89F6A0; /*0x57dc5a*/
    v4 = (__int16)(HIWORD(a1) + HIWORD(dword_89F6A0)) << 9; /*0x57dc5e*/
    v5 = v2 + v4 < 0; /*0x57dc61*/
    v6 = v2 + v4; /*0x57dc61*/
    HIWORD(a1) += HIWORD(dword_89F6A0); /*0x57dc63*/
    if ( v5 || v6 >= 0x40000 || (v7 = *(_DWORD **)(dword_87F924 + 4 * v6)) == 0 ) /*0x57dc7b*/
    {
      dword_ABDC74 = v15; /*0x57dc7d*/
      v7 = unk_ABDC50; /*0x57dc83*/
    }
    v8 = v7[17]; /*0x57dc88*/
  }
  while ( v8 >= 205 && v8 <= 232 ); /*0x57dc97*/
  v19 = HIWORD(v1); /*0x57dc9f*/
  LOWORD(v17) = v15 + dword_89F690; /*0x57dcad*/
  HIWORD(v17) = v3 + HIWORD(dword_89F690); /*0x57dcb8*/
  do /*0x57dd15*/
  {
    v9 = v19 + HIWORD(dword_89F690); /*0x57dcc3*/
    LOWORD(v16) = v1 + dword_89F690; /*0x57dcc8*/
    HIWORD(v16) = v19 + HIWORD(dword_89F690); /*0x57dcd3*/
    LOWORD(v1) = v1 + dword_89F690; /*0x57dcd8*/
    v10 = (__int16)(v19 + HIWORD(dword_89F690)) << 9; /*0x57dcdc*/
    v5 = (__int16)v1 + v10 < 0; /*0x57dcdf*/
    v11 = (__int16)v1 + v10; /*0x57dcdf*/
    v19 += HIWORD(dword_89F690); /*0x57dce1*/
    if ( v5 || v11 >= 0x40000 || (v12 = *(_DWORD **)(dword_87F924 + 4 * v11)) == 0 ) /*0x57dcf9*/
    {
      dword_ABDC74 = v16; /*0x57dcfb*/
      v12 = unk_ABDC50; /*0x57dd01*/
    }
    v13 = v12[17]; /*0x57dd06*/
  }
  while ( v13 >= 205 && v13 <= 232 ); /*0x57dd15*/
  LOWORD(v18) = dword_89F6A0 + v16; /*0x57dd20*/
  HIWORD(v18) = HIWORD(dword_89F6A0) + v9; /*0x57dd25*/
  return UpdateTeamsInAreaMap(v17, v18); /*0x57dd3d*/
}



// ==== 0x0057DD50  CreateCliffRampMap  this=-  sig=csp ====
int __stdcall CreateCliffRampMap(__int16 *a1)
{
  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  _DWORD *v36; // eax
  int *v37; // eax
  int *v38; // eax
  _WORD *v39; // eax
  int v40; // ebp
  int v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  _DWORD v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  _DWORD v62[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57dd5d*/
  result = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57dd6c*/
  if ( result >= 74 && result <= 101 ) /*0x57dd7b*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57dd92*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57dda2*/
    {
      v5 = (CellClass *)v4; /*0x57dda4*/
      v49 = v4; /*0x57dda6*/
    }
    else
    {
      v6 = *(_DWORD *)a1; /*0x57ddac*/
      v49 = (int)&unk_ABDC50; /*0x57ddaf*/
      v5 = &unk_ABDC50; /*0x57ddb7*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57ddbb*/
    }
    v46 = *(_DWORD *)a1 - 0x10000; /*0x57ddcf*/
    v7 = *a1 + (SHIWORD(v46) << 9); /*0x57dddd*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57dded*/
    {
      v51 = v8; /*0x57ddef*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57ddf9*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57de01*/
    }
    v9 = *a1 + ((__int16)((unsigned int)(*(_DWORD *)a1 + 0x10000) >> 16) << 9); /*0x57de23*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57de33*/
    {
      v47 = v10; /*0x57de35*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57de3f*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1 + 0x10000; /*0x57de47*/
    }
    LOBYTE(v54) = 0; /*0x57de54*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57de62*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57de67*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57de7c*/
    {
      v19 = *PlacementRect; /*0x57df02*/
      v15 = PlacementRect[1]; /*0x57df04*/
      v16 = PlacementRect[2]; /*0x57df07*/
      v17 = PlacementRect[3]; /*0x57df0a*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57de87*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57de96*/
      {
        v19 = *StartCoords; /*0x57def5*/
        v15 = StartCoords[1]; /*0x57def7*/
        v16 = StartCoords[2]; /*0x57defa*/
        v17 = StartCoords[3]; /*0x57defd*/
      }
      else
      {
        v13 = *StartCoords; /*0x57de98*/
        v14 = *PlacementRect; /*0x57de9a*/
        v15 = StartCoords[1]; /*0x57de9c*/
        v16 = StartCoords[2]; /*0x57de9f*/
        v17 = StartCoords[3]; /*0x57dea2*/
        if ( v13 > *PlacementRect ) /*0x57dea7*/
        {
          v16 += v13 - v14; /*0x57deab*/
          v13 = *PlacementRect; /*0x57dead*/
        }
        v18 = PlacementRect[1]; /*0x57deaf*/
        v52[0] = v18; /*0x57deb4*/
        if ( v15 > v18 ) /*0x57deb8*/
        {
          v17 += v15 - v18; /*0x57debc*/
          v15 = v18; /*0x57debe*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57dec8*/
          v16 = v14 - v13 + right + 1; /*0x57ded0*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57dee3*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57dee8*/
        v19 = v13; /*0x57deea*/
        v1 = a1; /*0x57deec*/
      }
    }
    v58 = v19; /*0x57df0d*/
    v63[2] = 82; /*0x57df16*/
    v63[6] = 82; /*0x57df1a*/
    v61 = v17; /*0x57df26*/
    v63[8] = 81; /*0x57df2d*/
    v63[9] = 81; /*0x57df34*/
    v59 = v15; /*0x57df3d*/
    v60 = v16; /*0x57df41*/
    v63[0] = -1; /*0x57df45*/
    v63[1] = 79; /*0x57df49*/
    v63[3] = -1; /*0x57df51*/
    v63[4] = 78; /*0x57df55*/
    v63[5] = 80; /*0x57df5d*/
    v63[7] = -1; /*0x57df68*/
    v63[10] = 100; /*0x57df6f*/
    memset(&v63[11], 255, 20); /*0x57df7a*/
    result = Map_Create(v1); /*0x57df9d*/
    v20 = *v1 + (v1[1] << 9); /*0x57dfad*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57dfc4*/
    {
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)v1; /*0x57dfc9*/
      v21 = &unk_ABDC50; /*0x57dfcf*/
    }
    v22 = *(_DWORD *)&v21->__pad_28[28]; /*0x57dfd4*/
    if ( result > 0 ) /*0x57dfd9*/
    {
      if ( v22 < 92 ) /*0x57dfe2*/
      {
        v23 = v63[result]; /*0x57dffd*/
        if ( v22 == v23 ) /*0x57e003*/
          return result; /*0x57e003*/
      }
      else if ( v22 == 92 ) /*0x57dfe4*/
      {
        v23 = 93; /*0x57dfe6*/
      }
      else
      {
        if ( v22 != 94 ) /*0x57dff0*/
          return result; /*0x57dff0*/
        v23 = 95; /*0x57dff6*/
      }
      v24 = v49; /*0x57e009*/
      v25 = v51; /*0x57e00d*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57e015*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57e018*/
      *(_DWORD *)&v47->__pad_28[28] = v23; /*0x57e01b*/
      v62[1] = dword_886FA4; /*0x57e029*/
      v62[0] = DSurface_ViewBounds; /*0x57e034*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v65); /*0x57e04a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57e04c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e061*/
      {
        rcDst = *v27; /*0x57e136*/
      }
      else
      {
        right = v27->right; /*0x57e06c*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57e07f*/
        {
          rcDst = *v26; /*0x57e119*/
        }
        else
        {
          left = v26->left; /*0x57e088*/
          top = v26->top; /*0x57e08a*/
          v56 = v26->right; /*0x57e08d*/
          bottom = v26->bottom; /*0x57e094*/
          v30 = v27->left; /*0x57e098*/
          if ( left > v27->left ) /*0x57e09c*/
          {
            v31 = left - v30 + v56; /*0x57e0a4*/
            left = v27->left; /*0x57e0a6*/
            v56 = v31; /*0x57e0a8*/
          }
          v32 = v27->top; /*0x57e0ac*/
          v50[0] = v32; /*0x57e0b1*/
          if ( top > v32 ) /*0x57e0b5*/
          {
            v33 = top - v32 + bottom; /*0x57e0bd*/
            top = v32; /*0x57e0bf*/
            bottom = v33; /*0x57e0c1*/
          }
          if ( left + v56 < v30 + right ) /*0x57e0d3*/
            v56 = v30 - left + right + 1; /*0x57e0df*/
          v34 = bottom; /*0x57e0eb*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57e0f6*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57e0fb*/
          rcDst.left = left; /*0x57e0fd*/
          rcDst.top = top; /*0x57e105*/
          v24 = v49; /*0x57e109*/
          rcDst.right = v56; /*0x57e10d*/
          rcDst.bottom = v34; /*0x57e111*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57e15f*/
      v43 = v35[3]; /*0x57e16a*/
      v42 = v35[2]; /*0x57e16f*/
      v36 = CellStruct::Copy(v35, v52); /*0x57e17d*/
      v37 = Coord2D::Sub(v36, v50, v62); /*0x57e184*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57e18e*/
      v58 = *v38; /*0x57e19c*/
      v59 = v38[1]; /*0x57e1a3*/
      v60 = v38[2]; /*0x57e1aa*/
      v61 = v38[3]; /*0x57e1b3*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57e1d3*/
      if ( v23 == 100 ) /*0x57e1db*/
      {
        LOBYTE(v54) = 1; /*0x57e1e8*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57e1ec*/
        right = 0x10000; /*0x57e1fd*/
        v50[0] = *CellStruct::Add(v1, v52, &right); /*0x57e21a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e21e*/
        v39 = CellStruct::Set(v52, 0, 1); /*0x57e22a*/
        v50[0] = *CellStruct::Sub(v1, &right, v39); /*0x57e248*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57e24c*/
      }
      House::AnnounceUpgrade(v24, -1); /*0x57e255*/
      v40 = v51; /*0x57e25a*/
      House::AnnounceUpgrade(v51, -1); /*0x57e262*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57e26f*/
      v41 = v54; /*0x57e274*/
      Cell::SearchEnemies(v24, v54); /*0x57e27b*/
      Cell::SearchEnemies(v40, v41); /*0x57e283*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57e28b*/
    }
  }
  return result; /*0x57e290*/
}



// ==== 0x0057E2A0  CreateCliffStraightMap  this=-  sig=csp ====
char __stdcall CreateCliffStraightMap(__int16 *a1)
{
  __int16 *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  int v41; // ebx
  int v42; // edi
  int v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  _DWORD v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  _DWORD v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  _DWORD v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57e2ac*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57e2bc*/
  if ( v2 >= 74 && v2 <= 101 ) /*0x57e2cb*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57e2e6*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e2f6*/
    {
      v5 = v4; /*0x57e2f8*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57e2fe*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1; /*0x57e300*/
    }
    v6 = *a1 - 1; /*0x57e30c*/
    HIWORD(v50) = a1[1]; /*0x57e30e*/
    LOWORD(v50) = v6; /*0x57e316*/
    v53 = (int)v5; /*0x57e31b*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57e325*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e335*/
    {
      v52 = v8; /*0x57e337*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57e341*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57e345*/
    }
    v9 = *a1 + 1; /*0x57e351*/
    HIWORD(v50) = a1[1]; /*0x57e353*/
    LOWORD(v50) = v9; /*0x57e35b*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57e366*/
    if ( v10 < 0x40000 && (v11 = *(_DWORD *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57e376*/
    {
      v50 = v11; /*0x57e378*/
    }
    else
    {
      v12 = v50; /*0x57e37e*/
      v50 = (int)&unk_ABDC50; /*0x57e382*/
      unk_ABDC50.smudgeTypeIndex = v12; /*0x57e386*/
    }
    LOBYTE(v55) = 0; /*0x57e393*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57e3a1*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57e3a6*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e3bb*/
    {
      v21 = *PlacementRect; /*0x57e448*/
      v17 = PlacementRect[1]; /*0x57e44a*/
      v18 = PlacementRect[2]; /*0x57e44d*/
      v19 = PlacementRect[3]; /*0x57e450*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e3c6*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57e3d5*/
      {
        v21 = *StartCoords; /*0x57e43b*/
        v17 = StartCoords[1]; /*0x57e43d*/
        v18 = StartCoords[2]; /*0x57e440*/
        v19 = StartCoords[3]; /*0x57e443*/
      }
      else
      {
        v15 = *StartCoords; /*0x57e3d7*/
        v16 = *PlacementRect; /*0x57e3d9*/
        v17 = StartCoords[1]; /*0x57e3db*/
        v18 = StartCoords[2]; /*0x57e3de*/
        v19 = StartCoords[3]; /*0x57e3e1*/
        if ( v15 > *PlacementRect ) /*0x57e3e6*/
        {
          v18 += v15 - v16; /*0x57e3ea*/
          v15 = *PlacementRect; /*0x57e3ec*/
        }
        v20 = PlacementRect[1]; /*0x57e3ee*/
        v56[0] = v20; /*0x57e3f3*/
        if ( v17 > v20 ) /*0x57e3f7*/
        {
          v19 += v17 - v20; /*0x57e3fb*/
          v17 = v20; /*0x57e3fd*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57e40a*/
          v18 = v16 - v15 + right + 1; /*0x57e412*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57e425*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57e42a*/
        v1 = a1; /*0x57e42c*/
        v21 = v15; /*0x57e433*/
        v5 = (CellClass *)v53; /*0x57e435*/
      }
    }
    v60 = v19; /*0x57e453*/
    v59 = v18; /*0x57e45c*/
    v64[2] = 91; /*0x57e460*/
    v64[6] = 91; /*0x57e464*/
    v57 = v21; /*0x57e46b*/
    v58 = v17; /*0x57e479*/
    v64[0] = -1; /*0x57e47d*/
    v64[1] = 88; /*0x57e481*/
    v64[3] = -1; /*0x57e489*/
    v64[4] = 87; /*0x57e48d*/
    v64[5] = 89; /*0x57e495*/
    v64[7] = -1; /*0x57e4a0*/
    v64[8] = 90; /*0x57e4a7*/
    v64[9] = 90; /*0x57e4ae*/
    v64[10] = 101; /*0x57e4b5*/
    memset(&v64[11], 255, 20); /*0x57e4c0*/
    LOBYTE(v2) = Map_Create_57B990(v1); /*0x57e4e3*/
    v22 = *(_DWORD *)&v5->__pad_28[28]; /*0x57e4e8*/
    if ( v2 > 0 ) /*0x57e4ed*/
    {
      if ( v22 < 96 ) /*0x57e4f6*/
      {
        v23 = v64[v2]; /*0x57e511*/
        if ( v23 == v22 ) /*0x57e517*/
          return v2; /*0x57e517*/
      }
      else if ( v22 == 96 ) /*0x57e4f8*/
      {
        v23 = 97; /*0x57e4fa*/
      }
      else
      {
        if ( v22 != 98 ) /*0x57e504*/
          return v2; /*0x57e504*/
        v23 = 99; /*0x57e50a*/
      }
      v24 = v52; /*0x57e51d*/
      v25 = v50; /*0x57e521*/
      *(_DWORD *)&v5->__pad_28[28] = v23; /*0x57e525*/
      *(_DWORD *)(v24 + 68) = v23; /*0x57e528*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57e52b*/
      v61[1] = dword_886FA4; /*0x57e539*/
      v61[0] = DSurface_ViewBounds; /*0x57e547*/
      v26 = (struct tagRECT *)House::GetStartCoords((int)v5, v66); /*0x57e55a*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57e55c*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57e571*/
      {
        rcDst = *v27; /*0x57e62b*/
      }
      else
      {
        right = v27->right; /*0x57e57c*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57e58f*/
        {
          rcDst = *v26; /*0x57e60e*/
        }
        else
        {
          left = v26->left; /*0x57e591*/
          v29 = v27->left; /*0x57e593*/
          v30 = v26->right; /*0x57e595*/
          top = v26->top; /*0x57e598*/
          bottom = v26->bottom; /*0x57e59b*/
          v33 = left <= v27->left; /*0x57e59e*/
          v63 = v30; /*0x57e5a0*/
          if ( !v33 ) /*0x57e5a4*/
          {
            v30 += left - v29; /*0x57e5a8*/
            left = v29; /*0x57e5aa*/
            v63 = v30; /*0x57e5ac*/
          }
          v34 = v27->top; /*0x57e5b0*/
          v51[0] = v34; /*0x57e5b5*/
          if ( top > v34 ) /*0x57e5b9*/
          {
            bottom += top - v34; /*0x57e5bd*/
            top = v34; /*0x57e5bf*/
          }
          if ( left + v30 >= v29 + right ) /*0x57e5cb*/
            v35 = v63; /*0x57e5d9*/
          else
            v35 = v29 - left + right + 1; /*0x57e5d3*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57e5ec*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57e5f1*/
          v5 = (CellClass *)v53; /*0x57e5f3*/
          rcDst.top = top; /*0x57e5f7*/
          rcDst.left = left; /*0x57e5fb*/
          rcDst.right = v35; /*0x57e5ff*/
          rcDst.bottom = bottom; /*0x57e603*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57e654*/
      v46 = v36[3]; /*0x57e65f*/
      v45 = v36[2]; /*0x57e664*/
      v37 = CellStruct::Copy(v36, v56); /*0x57e672*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57e679*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57e683*/
      v57 = *v39; /*0x57e691*/
      v58 = v39[1]; /*0x57e698*/
      v59 = v39[2]; /*0x57e69f*/
      v60 = v39[3]; /*0x57e6a8*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57e6c8*/
      if ( v23 == 101 ) /*0x57e6d0*/
      {
        LOBYTE(v55) = 1; /*0x57e6e4*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)a1); /*0x57e6e8*/
        v40 = *a1 + 1; /*0x57e6f4*/
        HIWORD(right) = a1[1]; /*0x57e6f6*/
        LOWORD(right) = v40; /*0x57e6fb*/
        v51[0] = right; /*0x57e708*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e712*/
        right = 1; /*0x57e723*/
        v51[0] = *CellStruct::Sub(a1, v56, &right); /*0x57e73a*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57e744*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57e74c*/
      v41 = v52; /*0x57e751*/
      House::AnnounceUpgrade(v52, -1); /*0x57e758*/
      v42 = v50; /*0x57e75e*/
      House::AnnounceUpgrade(v50, -1); /*0x57e764*/
      v43 = v55; /*0x57e769*/
      Cell::SearchEnemies((int)v5, v55); /*0x57e770*/
      Cell::SearchEnemies(v41, v43); /*0x57e778*/
      LOBYTE(v2) = Cell::SearchEnemies(v42, v43); /*0x57e780*/
    }
  }
  return v2; /*0x57e785*/
}



// ==== 0x0057E7A0  CreateCliffBridgeMap  this=-  sig=csp ====
int __stdcall CreateCliffBridgeMap(__int16 *a1)
{
  __int16 *v1; // ebp
  int result; // eax
  unsigned int v3; // eax
  int v4; // eax
  CellClass *v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  CellClass *v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // ebp
  int v14; // ecx
  int v15; // edx
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // ecx
  CellClass *v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edi
  int v25; // edx
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG top; // edi
  LONG v30; // ecx
  LONG v31; // esi
  int v32; // eax
  LONG v33; // esi
  LONG v34; // esi
  int *v35; // eax
  _DWORD *v36; // eax
  int *v37; // eax
  int *v38; // eax
  _WORD *v39; // eax
  int v40; // ebp
  int v41; // esi
  int v42; // [esp-8h] [ebp-E4h]
  int v43; // [esp-4h] [ebp-E0h]
  const RECT *v44; // [esp+0h] [ebp-DCh]
  const RECT *v45; // [esp+4h] [ebp-D8h]
  int v46; // [esp+10h] [ebp-CCh]
  CellClass *v47; // [esp+10h] [ebp-CCh]
  int right; // [esp+14h] [ebp-C8h] BYREF
  int v49; // [esp+18h] [ebp-C4h]
  int v50[2]; // [esp+1Ch] [ebp-C0h] BYREF
  int v51; // [esp+24h] [ebp-B8h]
  _DWORD v52[2]; // [esp+28h] [ebp-B4h] BYREF
  struct tagRECT rcDst; // [esp+30h] [ebp-ACh] BYREF
  int v54; // [esp+40h] [ebp-9Ch]
  int v55[2]; // [esp+44h] [ebp-98h] BYREF
  LONG v56; // [esp+4Ch] [ebp-90h]
  LONG bottom; // [esp+50h] [ebp-8Ch]
  int v58; // [esp+54h] [ebp-88h]
  int v59; // [esp+58h] [ebp-84h]
  int v60; // [esp+5Ch] [ebp-80h]
  int v61; // [esp+60h] [ebp-7Ch]
  _DWORD v62[2]; // [esp+64h] [ebp-78h] BYREF
  _DWORD v63[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v64[4]; // [esp+ACh] [ebp-30h] BYREF
  int v65[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57e7ad*/
  result = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57e7bc*/
  if ( result >= 205 && result <= 232 ) /*0x57e7cf*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57e7e6*/
    if ( v3 < 0x40000 && (v4 = *(_DWORD *)(dword_87F924 + 4 * v3)) != 0 ) /*0x57e7f6*/
    {
      v5 = (CellClass *)v4; /*0x57e7f8*/
      v49 = v4; /*0x57e7fa*/
    }
    else
    {
      v6 = *(_DWORD *)a1; /*0x57e800*/
      v49 = (int)&unk_ABDC50; /*0x57e803*/
      v5 = &unk_ABDC50; /*0x57e80b*/
      unk_ABDC50.smudgeTypeIndex = v6; /*0x57e80f*/
    }
    v46 = *(_DWORD *)a1 - 0x10000; /*0x57e823*/
    v7 = *a1 + (SHIWORD(v46) << 9); /*0x57e831*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57e841*/
    {
      v51 = v8; /*0x57e843*/
    }
    else
    {
      v51 = (int)&unk_ABDC50; /*0x57e84d*/
      unk_ABDC50.smudgeTypeIndex = v46; /*0x57e855*/
    }
    v9 = *a1 + ((__int16)((unsigned int)(*(_DWORD *)a1 + 0x10000) >> 16) << 9); /*0x57e877*/
    if ( v9 < 0x40000 && (v10 = *(CellClass **)(dword_87F924 + 4 * v9)) != 0 ) /*0x57e887*/
    {
      v47 = v10; /*0x57e889*/
    }
    else
    {
      v47 = &unk_ABDC50; /*0x57e893*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1 + 0x10000; /*0x57e89b*/
    }
    LOBYTE(v54) = 0; /*0x57e8a8*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v55); /*0x57e8b6*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57e8bb*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57e8d0*/
    {
      v19 = *PlacementRect; /*0x57e956*/
      v15 = PlacementRect[1]; /*0x57e958*/
      v16 = PlacementRect[2]; /*0x57e95b*/
      v17 = PlacementRect[3]; /*0x57e95e*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57e8db*/
      if ( right <= 0 || (v50[0] = PlacementRect[3], v50[0] <= 0) ) /*0x57e8ea*/
      {
        v19 = *StartCoords; /*0x57e949*/
        v15 = StartCoords[1]; /*0x57e94b*/
        v16 = StartCoords[2]; /*0x57e94e*/
        v17 = StartCoords[3]; /*0x57e951*/
      }
      else
      {
        v13 = *StartCoords; /*0x57e8ec*/
        v14 = *PlacementRect; /*0x57e8ee*/
        v15 = StartCoords[1]; /*0x57e8f0*/
        v16 = StartCoords[2]; /*0x57e8f3*/
        v17 = StartCoords[3]; /*0x57e8f6*/
        if ( v13 > *PlacementRect ) /*0x57e8fb*/
        {
          v16 += v13 - v14; /*0x57e8ff*/
          v13 = *PlacementRect; /*0x57e901*/
        }
        v18 = PlacementRect[1]; /*0x57e903*/
        v52[0] = v18; /*0x57e908*/
        if ( v15 > v18 ) /*0x57e90c*/
        {
          v17 += v15 - v18; /*0x57e910*/
          v15 = v18; /*0x57e912*/
        }
        if ( v16 + v13 < v14 + right ) /*0x57e91c*/
          v16 = v14 - v13 + right + 1; /*0x57e924*/
        if ( v17 + v15 < v50[0] + v52[0] ) /*0x57e937*/
          v17 = v50[0] + v52[0] - v15 + 1; /*0x57e93c*/
        v19 = v13; /*0x57e93e*/
        v1 = a1; /*0x57e940*/
      }
    }
    v58 = v19; /*0x57e961*/
    v63[2] = 213; /*0x57e96a*/
    v63[6] = 213; /*0x57e96e*/
    v61 = v17; /*0x57e97a*/
    v63[8] = 212; /*0x57e981*/
    v63[9] = 212; /*0x57e988*/
    v59 = v15; /*0x57e991*/
    v60 = v16; /*0x57e995*/
    v63[0] = -1; /*0x57e999*/
    v63[1] = 210; /*0x57e99d*/
    v63[3] = -1; /*0x57e9a5*/
    v63[4] = 209; /*0x57e9a9*/
    v63[5] = 211; /*0x57e9b1*/
    v63[7] = -1; /*0x57e9bc*/
    v63[10] = 231; /*0x57e9c3*/
    memset(&v63[11], 255, 20); /*0x57e9ce*/
    result = Map_Create_57CAB0(v1); /*0x57e9f1*/
    v20 = *v1 + (v1[1] << 9); /*0x57ea01*/
    if ( v20 >= 0x40000 || (v21 = *(CellClass **)(dword_87F924 + 4 * v20)) == 0 ) /*0x57ea18*/
    {
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)v1; /*0x57ea1d*/
      v21 = &unk_ABDC50; /*0x57ea23*/
    }
    v22 = *(_DWORD *)&v21->__pad_28[28]; /*0x57ea28*/
    if ( result > 0 ) /*0x57ea2d*/
    {
      if ( v22 < 223 ) /*0x57ea39*/
      {
        v23 = v63[result]; /*0x57ea57*/
        if ( v22 == v23 ) /*0x57ea5d*/
          return result; /*0x57ea5d*/
      }
      else if ( v22 == 223 ) /*0x57ea3b*/
      {
        v23 = 224; /*0x57ea3d*/
      }
      else
      {
        if ( v22 != 225 ) /*0x57ea4a*/
          return result; /*0x57ea4a*/
        v23 = 226; /*0x57ea50*/
      }
      v24 = v49; /*0x57ea63*/
      v25 = v51; /*0x57ea67*/
      *(_DWORD *)(v49 + 68) = v23; /*0x57ea6f*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57ea72*/
      *(_DWORD *)&v47->__pad_28[28] = v23; /*0x57ea75*/
      v62[1] = dword_886FA4; /*0x57ea83*/
      v62[0] = DSurface_ViewBounds; /*0x57ea8e*/
      v26 = (struct tagRECT *)House::GetStartCoords(v24, v65); /*0x57eaa4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect(v24, v64); /*0x57eaa6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57eabb*/
      {
        rcDst = *v27; /*0x57eb90*/
      }
      else
      {
        right = v27->right; /*0x57eac6*/
        if ( right <= 0 || (v52[0] = v27->bottom, v52[0] <= 0) ) /*0x57ead9*/
        {
          rcDst = *v26; /*0x57eb73*/
        }
        else
        {
          left = v26->left; /*0x57eae2*/
          top = v26->top; /*0x57eae4*/
          v56 = v26->right; /*0x57eae7*/
          bottom = v26->bottom; /*0x57eaee*/
          v30 = v27->left; /*0x57eaf2*/
          if ( left > v27->left ) /*0x57eaf6*/
          {
            v31 = left - v30 + v56; /*0x57eafe*/
            left = v27->left; /*0x57eb00*/
            v56 = v31; /*0x57eb02*/
          }
          v32 = v27->top; /*0x57eb06*/
          v50[0] = v32; /*0x57eb0b*/
          if ( top > v32 ) /*0x57eb0f*/
          {
            v33 = top - v32 + bottom; /*0x57eb17*/
            top = v32; /*0x57eb19*/
            bottom = v33; /*0x57eb1b*/
          }
          if ( left + v56 < v30 + right ) /*0x57eb2d*/
            v56 = v30 - left + right + 1; /*0x57eb39*/
          v34 = bottom; /*0x57eb45*/
          if ( bottom + top < v52[0] + v50[0] ) /*0x57eb50*/
            v34 = v52[0] + v50[0] - top + 1; /*0x57eb55*/
          rcDst.left = left; /*0x57eb57*/
          rcDst.top = top; /*0x57eb5f*/
          v24 = v49; /*0x57eb63*/
          rcDst.right = v56; /*0x57eb67*/
          rcDst.bottom = v34; /*0x57eb6b*/
        }
      }
      v35 = (int *)Rect::Union(&rcDst, v44, v45); /*0x57ebb9*/
      v43 = v35[3]; /*0x57ebc4*/
      v42 = v35[2]; /*0x57ebc9*/
      v36 = CellStruct::Copy(v35, v52); /*0x57ebd7*/
      v37 = Coord2D::Sub(v36, v50, v62); /*0x57ebde*/
      v38 = Rect::Construct(v55, v37, v42, v43); /*0x57ebe8*/
      v58 = *v38; /*0x57ebf6*/
      v59 = v38[1]; /*0x57ebfd*/
      v60 = v38[2]; /*0x57ec04*/
      v61 = v38[3]; /*0x57ec0d*/
      Cell::CreateCrater(*v38, v38[1], v38[2], v38[3], 0); /*0x57ec2d*/
      if ( v23 == 231 ) /*0x57ec38*/
      {
        LOBYTE(v54) = 1; /*0x57ec45*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v1); /*0x57ec49*/
        right = 0x10000; /*0x57ec5a*/
        v50[0] = *CellStruct::Add(v1, v52, &right); /*0x57ec77*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57ec7b*/
        v39 = CellStruct::Set(v52, 0, 1); /*0x57ec87*/
        v50[0] = *CellStruct::Sub(v1, &right, v39); /*0x57eca5*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v50); /*0x57eca9*/
      }
      House::AnnounceUpgrade(v24, -1); /*0x57ecb2*/
      v40 = v51; /*0x57ecb7*/
      House::AnnounceUpgrade(v51, -1); /*0x57ecbf*/
      House::AnnounceUpgrade((int)v47, -1); /*0x57eccc*/
      v41 = v54; /*0x57ecd1*/
      Cell::SearchEnemies(v24, v54); /*0x57ecd8*/
      Cell::SearchEnemies(v40, v41); /*0x57ece0*/
      return Cell::SearchEnemies((int)v47, v41); /*0x57ece8*/
    }
  }
  return result; /*0x57eced*/
}



// ==== 0x0057ED00  CreateCliffStraightBridgeMap  this=-  sig=csp ====
char __stdcall CreateCliffStraightBridgeMap(__int16 *a1)
{
  __int16 *v1; // ebx
  int v2; // eax
  unsigned int v3; // eax
  CellClass *v4; // eax
  CellClass *v5; // ebp
  __int16 v6; // cx
  unsigned int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  int v24; // edx
  int v25; // eax
  struct tagRECT *v26; // esi
  struct tagRECT *v27; // eax
  LONG left; // edx
  LONG v29; // ecx
  LONG v30; // ebp
  LONG top; // edi
  LONG bottom; // esi
  bool v33; // cc
  int v34; // eax
  LONG v35; // ecx
  int *v36; // eax
  _DWORD *v37; // eax
  int *v38; // eax
  int *v39; // eax
  __int16 v40; // cx
  int v41; // ebx
  int v42; // edi
  int v43; // esi
  int v45; // [esp-8h] [ebp-E4h]
  int v46; // [esp-4h] [ebp-E0h]
  const RECT *v47; // [esp+0h] [ebp-DCh]
  const RECT *v48; // [esp+4h] [ebp-D8h]
  int right; // [esp+10h] [ebp-CCh] BYREF
  int v50; // [esp+14h] [ebp-C8h]
  int v51[2]; // [esp+18h] [ebp-C4h] BYREF
  int v52; // [esp+20h] [ebp-BCh]
  int v53; // [esp+24h] [ebp-B8h]
  struct tagRECT rcDst; // [esp+28h] [ebp-B4h] BYREF
  int v55; // [esp+38h] [ebp-A4h]
  _DWORD v56[2]; // [esp+3Ch] [ebp-A0h] BYREF
  int v57; // [esp+44h] [ebp-98h]
  int v58; // [esp+48h] [ebp-94h]
  int v59; // [esp+4Ch] [ebp-90h]
  int v60; // [esp+50h] [ebp-8Ch]
  _DWORD v61[2]; // [esp+54h] [ebp-88h] BYREF
  int v62[2]; // [esp+5Ch] [ebp-80h] BYREF
  LONG v63; // [esp+64h] [ebp-78h]
  _DWORD v64[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v65[4]; // [esp+ACh] [ebp-30h] BYREF
  int v66[4]; // [esp+CCh] [ebp-10h] BYREF

  v1 = a1; /*0x57ed0c*/
  v2 = *((_DWORD *)CellCoord::To_CellObj(&dword_87F7E8, a1) + 17); /*0x57ed1c*/
  if ( v2 >= 205 && v2 <= 232 ) /*0x57ed2f*/
  {
    v3 = *a1 + (a1[1] << 9); /*0x57ed4a*/
    if ( v3 < 0x40000 && (v4 = *(CellClass **)(dword_87F924 + 4 * v3)) != 0 ) /*0x57ed5a*/
    {
      v5 = v4; /*0x57ed5c*/
    }
    else
    {
      v5 = &unk_ABDC50; /*0x57ed62*/
      unk_ABDC50.smudgeTypeIndex = *(_DWORD *)a1; /*0x57ed64*/
    }
    v6 = *a1 - 1; /*0x57ed70*/
    HIWORD(v50) = a1[1]; /*0x57ed72*/
    LOWORD(v50) = v6; /*0x57ed7a*/
    v53 = (int)v5; /*0x57ed7f*/
    v7 = v6 + (SHIWORD(v50) << 9); /*0x57ed89*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(dword_87F924 + 4 * v7)) != 0 ) /*0x57ed99*/
    {
      v52 = v8; /*0x57ed9b*/
    }
    else
    {
      v52 = (int)&unk_ABDC50; /*0x57eda5*/
      unk_ABDC50.smudgeTypeIndex = v50; /*0x57eda9*/
    }
    v9 = *a1 + 1; /*0x57edb5*/
    HIWORD(v50) = a1[1]; /*0x57edb7*/
    LOWORD(v50) = v9; /*0x57edbf*/
    v10 = v9 + (SHIWORD(v50) << 9); /*0x57edca*/
    if ( v10 < 0x40000 && (v11 = *(_DWORD *)(dword_87F924 + 4 * v10)) != 0 ) /*0x57edda*/
    {
      v50 = v11; /*0x57eddc*/
    }
    else
    {
      v12 = v50; /*0x57ede2*/
      v50 = (int)&unk_ABDC50; /*0x57ede6*/
      unk_ABDC50.smudgeTypeIndex = v12; /*0x57edea*/
    }
    LOBYTE(v55) = 0; /*0x57edf7*/
    PlacementRect = BuildingClass::GetPlacementRect((int)v5, v62); /*0x57ee05*/
    StartCoords = House::GetStartCoords((int)v5, &rcDst); /*0x57ee0a*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57ee1f*/
    {
      v21 = *PlacementRect; /*0x57eeac*/
      v17 = PlacementRect[1]; /*0x57eeae*/
      v18 = PlacementRect[2]; /*0x57eeb1*/
      v19 = PlacementRect[3]; /*0x57eeb4*/
    }
    else
    {
      right = PlacementRect[2]; /*0x57ee2a*/
      if ( right <= 0 || (v51[0] = PlacementRect[3], v51[0] <= 0) ) /*0x57ee39*/
      {
        v21 = *StartCoords; /*0x57ee9f*/
        v17 = StartCoords[1]; /*0x57eea1*/
        v18 = StartCoords[2]; /*0x57eea4*/
        v19 = StartCoords[3]; /*0x57eea7*/
      }
      else
      {
        v15 = *StartCoords; /*0x57ee3b*/
        v16 = *PlacementRect; /*0x57ee3d*/
        v17 = StartCoords[1]; /*0x57ee3f*/
        v18 = StartCoords[2]; /*0x57ee42*/
        v19 = StartCoords[3]; /*0x57ee45*/
        if ( v15 > *PlacementRect ) /*0x57ee4a*/
        {
          v18 += v15 - v16; /*0x57ee4e*/
          v15 = *PlacementRect; /*0x57ee50*/
        }
        v20 = PlacementRect[1]; /*0x57ee52*/
        v56[0] = v20; /*0x57ee57*/
        if ( v17 > v20 ) /*0x57ee5b*/
        {
          v19 += v17 - v20; /*0x57ee5f*/
          v17 = v20; /*0x57ee61*/
        }
        if ( v18 + v15 < v16 + right ) /*0x57ee6e*/
          v18 = v16 - v15 + right + 1; /*0x57ee76*/
        if ( v19 + v17 < v51[0] + v56[0] ) /*0x57ee89*/
          v19 = v51[0] + v56[0] - v17 + 1; /*0x57ee8e*/
        v1 = a1; /*0x57ee90*/
        v21 = v15; /*0x57ee97*/
        v5 = (CellClass *)v53; /*0x57ee99*/
      }
    }
    v60 = v19; /*0x57eeb7*/
    v59 = v18; /*0x57eec0*/
    v64[2] = 222; /*0x57eec4*/
    v64[6] = 222; /*0x57eec8*/
    v57 = v21; /*0x57eecf*/
    v58 = v17; /*0x57eedd*/
    v64[0] = -1; /*0x57eee1*/
    v64[1] = 219; /*0x57eee5*/
    v64[3] = -1; /*0x57eeed*/
    v64[4] = 218; /*0x57eef1*/
    v64[5] = 220; /*0x57eef9*/
    v64[7] = -1; /*0x57ef04*/
    v64[8] = 221; /*0x57ef0b*/
    v64[9] = 221; /*0x57ef12*/
    v64[10] = 232; /*0x57ef19*/
    memset(&v64[11], 255, 20); /*0x57ef24*/
    LOBYTE(v2) = Map_Create_57CBE0(v1); /*0x57ef47*/
    v22 = *(_DWORD *)&v5->__pad_28[28]; /*0x57ef4c*/
    if ( v2 > 0 ) /*0x57ef51*/
    {
      if ( v22 < 227 ) /*0x57ef5d*/
      {
        v23 = v64[v2]; /*0x57ef7b*/
        if ( v23 == v22 ) /*0x57ef81*/
          return v2; /*0x57ef81*/
      }
      else if ( v22 == 227 ) /*0x57ef5f*/
      {
        v23 = 228; /*0x57ef61*/
      }
      else
      {
        if ( v22 != 229 ) /*0x57ef6e*/
          return v2; /*0x57ef6e*/
        v23 = 230; /*0x57ef74*/
      }
      v24 = v52; /*0x57ef87*/
      v25 = v50; /*0x57ef8b*/
      *(_DWORD *)&v5->__pad_28[28] = v23; /*0x57ef8f*/
      *(_DWORD *)(v24 + 68) = v23; /*0x57ef92*/
      *(_DWORD *)(v25 + 68) = v23; /*0x57ef95*/
      v61[1] = dword_886FA4; /*0x57efa3*/
      v61[0] = DSurface_ViewBounds; /*0x57efb1*/
      v26 = (struct tagRECT *)House::GetStartCoords((int)v5, v66); /*0x57efc4*/
      v27 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v5, v65); /*0x57efc6*/
      if ( v26->right <= 0 || v26->bottom <= 0 ) /*0x57efdb*/
      {
        rcDst = *v27; /*0x57f095*/
      }
      else
      {
        right = v27->right; /*0x57efe6*/
        if ( right <= 0 || (v56[0] = v27->bottom, v56[0] <= 0) ) /*0x57eff9*/
        {
          rcDst = *v26; /*0x57f078*/
        }
        else
        {
          left = v26->left; /*0x57effb*/
          v29 = v27->left; /*0x57effd*/
          v30 = v26->right; /*0x57efff*/
          top = v26->top; /*0x57f002*/
          bottom = v26->bottom; /*0x57f005*/
          v33 = left <= v27->left; /*0x57f008*/
          v63 = v30; /*0x57f00a*/
          if ( !v33 ) /*0x57f00e*/
          {
            v30 += left - v29; /*0x57f012*/
            left = v29; /*0x57f014*/
            v63 = v30; /*0x57f016*/
          }
          v34 = v27->top; /*0x57f01a*/
          v51[0] = v34; /*0x57f01f*/
          if ( top > v34 ) /*0x57f023*/
          {
            bottom += top - v34; /*0x57f027*/
            top = v34; /*0x57f029*/
          }
          if ( left + v30 >= v29 + right ) /*0x57f035*/
            v35 = v63; /*0x57f043*/
          else
            v35 = v29 - left + right + 1; /*0x57f03d*/
          if ( bottom + top < v56[0] + v51[0] ) /*0x57f056*/
            bottom = v56[0] + v51[0] - top + 1; /*0x57f05b*/
          v5 = (CellClass *)v53; /*0x57f05d*/
          rcDst.top = top; /*0x57f061*/
          rcDst.left = left; /*0x57f065*/
          rcDst.right = v35; /*0x57f069*/
          rcDst.bottom = bottom; /*0x57f06d*/
        }
      }
      v36 = (int *)Rect::Union(&rcDst, v47, v48); /*0x57f0be*/
      v46 = v36[3]; /*0x57f0c9*/
      v45 = v36[2]; /*0x57f0ce*/
      v37 = CellStruct::Copy(v36, v56); /*0x57f0dc*/
      v38 = Coord2D::Sub(v37, v51, v61); /*0x57f0e3*/
      v39 = Rect::Construct(v62, v38, v45, v46); /*0x57f0ed*/
      v57 = *v39; /*0x57f0fb*/
      v58 = v39[1]; /*0x57f102*/
      v59 = v39[2]; /*0x57f109*/
      v60 = v39[3]; /*0x57f112*/
      Cell::CreateCrater(*v39, v39[1], v39[2], v39[3], 0); /*0x57f132*/
      if ( v23 == 232 ) /*0x57f13d*/
      {
        LOBYTE(v55) = 1; /*0x57f151*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)a1); /*0x57f155*/
        v40 = *a1 + 1; /*0x57f161*/
        HIWORD(right) = a1[1]; /*0x57f163*/
        LOWORD(right) = v40; /*0x57f168*/
        v51[0] = right; /*0x57f175*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f17f*/
        right = 1; /*0x57f190*/
        v51[0] = *CellStruct::Sub(a1, v56, &right); /*0x57f1a7*/
        BuildingClass::AddUpgrade(&dword_87F7E8.field_0, (int)v51); /*0x57f1b1*/
      }
      House::AnnounceUpgrade((int)v5, -1); /*0x57f1b9*/
      v41 = v52; /*0x57f1be*/
      House::AnnounceUpgrade(v52, -1); /*0x57f1c5*/
      v42 = v50; /*0x57f1cb*/
      House::AnnounceUpgrade(v50, -1); /*0x57f1d1*/
      v43 = v55; /*0x57f1d6*/
      Cell::SearchEnemies((int)v5, v55); /*0x57f1dd*/
      Cell::SearchEnemies(v41, v43); /*0x57f1e5*/
      LOBYTE(v2) = Cell::SearchEnemies(v42, v43); /*0x57f1ed*/
    }
  }
  return v2; /*0x57f1f2*/
}



// ==== 0x0057F200  CellClass::ApplyCliffTileModifications  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyCliffTileModifications(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x57f204*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x57f215*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57f22b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57f22f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57f234*/
  }
  v6 = v5[17]; /*0x57f239*/
  if ( v6 >= 74 && v6 <= 82 || v6 >= 92 && v6 <= 95 || v6 == 100 ) /*0x57f253*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x57f25c*/
    LOWORD(a2) = *(_WORD *)a2; /*0x57f260*/
    HIWORD(a2) = v7 - 1; /*0x57f26b*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f283*/
    if ( v8 >= 74 && v8 <= 101 ) /*0x57f28e*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x57f2c6*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f2ca*/
      HIWORD(a2) = v10; /*0x57f2cf*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f2eb*/
      if ( v11 >= 74 && v11 <= 101 ) /*0x57f2f6*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57f30b*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57f30f*/
        HIWORD(a2) = v12 - 1; /*0x57f31a*/
        CellClass::ApplyTileModification6(this, &a2); /*0x57f32a*/
      }
      else
      {
        CellClass::ApplyTileModification6(this, (_DWORD *)v2); /*0x57f2fb*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x57f297*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f299*/
      HIWORD(a2) = v9; /*0x57f29e*/
      CellClass::ApplyTileModification6(this, &a2); /*0x57f2b2*/
    }
  }
  else if ( v6 >= 83 && v6 <= 91 || v6 >= 96 && v6 <= 99 || v6 == 101 ) /*0x57f34e*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x57f35b*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x57f35d*/
    LOWORD(a2) = v13; /*0x57f362*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f37e*/
    if ( v14 >= 74 && v14 <= 101 ) /*0x57f389*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x57f3c1*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f3c5*/
      LOWORD(a2) = v16; /*0x57f3ca*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f3e6*/
      if ( v17 >= 74 && v17 <= 101 ) /*0x57f3f1*/
      {
        a2 = 1; /*0x57f40f*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x57f428*/
        CellClass::ApplyTileModification7(this, &v18); /*0x57f42f*/
      }
      else
      {
        CellClass::ApplyTileModification7(this, (int *)v2); /*0x57f3f6*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x57f392*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f394*/
      LOWORD(a2) = v15; /*0x57f399*/
      CellClass::ApplyTileModification7(this, &a2); /*0x57f3ad*/
    }
  }
}



// ==== 0x0057F440  CellClass::ApplyTileMod58  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileMod58(CellClass *this, int a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int *v5; // eax
  int v6; // eax
  __int16 v7; // dx
  int v8; // eax
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // dx
  __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int16 v16; // cx
  int v17; // eax
  int v18; // [esp+8h] [ebp-8h] BYREF
  int v19; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x57f444*/
  v4 = *(__int16 *)a2 + (*(__int16 *)(a2 + 2) << 9); /*0x57f455*/
  if ( v4 >= 0x40000 || (v5 = *(int **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) == 0 ) /*0x57f46b*/
  {
    g_MissionQueueFrame.briefing[139] = *(_DWORD *)a2; /*0x57f46f*/
    v5 = &g_MissionQueueFrame.briefing[130]; /*0x57f474*/
  }
  v6 = v5[17]; /*0x57f479*/
  if ( v6 >= 205 && v6 <= 213 || v6 >= 223 && v6 <= 226 || v6 == 231 ) /*0x57f49d*/
  {
    v7 = *(_WORD *)(a2 + 2); /*0x57f4a6*/
    LOWORD(a2) = *(_WORD *)a2; /*0x57f4aa*/
    HIWORD(a2) = v7 - 1; /*0x57f4b5*/
    v8 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f4cd*/
    if ( v8 >= 205 && v8 <= 232 ) /*0x57f4dc*/
    {
      v10 = *(_WORD *)(v2 + 2) - 2; /*0x57f514*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f518*/
      HIWORD(a2) = v10; /*0x57f51d*/
      v11 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f539*/
      if ( v11 >= 205 && v11 <= 232 ) /*0x57f548*/
      {
        v12 = *(_WORD *)(v2 + 2); /*0x57f55d*/
        LOWORD(a2) = *(_WORD *)v2; /*0x57f561*/
        HIWORD(a2) = v12 - 1; /*0x57f56c*/
        CellClass::ApplyTileModification5(this, &a2); /*0x57f57c*/
      }
      else
      {
        CellClass::ApplyTileModification5(this, (_DWORD *)v2); /*0x57f54d*/
      }
    }
    else
    {
      v9 = *(_WORD *)(v2 + 2) + 1; /*0x57f4e5*/
      LOWORD(a2) = *(_WORD *)v2; /*0x57f4e7*/
      HIWORD(a2) = v9; /*0x57f4ec*/
      CellClass::ApplyTileModification5(this, &a2); /*0x57f500*/
    }
  }
  else if ( v6 >= 214 && v6 <= 222 || v6 >= 227 && v6 <= 230 || v6 == 232 ) /*0x57f5aa*/
  {
    v13 = *(_WORD *)a2 - 1; /*0x57f5b7*/
    HIWORD(a2) = *(_WORD *)(a2 + 2); /*0x57f5b9*/
    LOWORD(a2) = v13; /*0x57f5be*/
    v14 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f5da*/
    if ( v14 >= 205 && v14 <= 232 ) /*0x57f5e9*/
    {
      v16 = *(_WORD *)v2 - 2; /*0x57f621*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f625*/
      LOWORD(a2) = v16; /*0x57f62a*/
      v17 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 17); /*0x57f646*/
      if ( v17 >= 205 && v17 <= 232 ) /*0x57f655*/
      {
        a2 = 1; /*0x57f673*/
        v18 = *CellStruct::Sub((CellStruct *)v2, &v19, &a2); /*0x57f68c*/
        CellClass::ApplyTileModification8(this, &v18); /*0x57f693*/
      }
      else
      {
        CellClass::ApplyTileModification8(this, (int *)v2); /*0x57f65a*/
      }
    }
    else
    {
      v15 = *(_WORD *)v2 + 1; /*0x57f5f2*/
      HIWORD(a2) = *(_WORD *)(v2 + 2); /*0x57f5f4*/
      LOWORD(a2) = v15; /*0x57f5f9*/
      CellClass::ApplyTileModification8(this, &a2); /*0x57f60d*/
    }
  }
}



// ==== 0x0057F6A0  CellClass::ApplyTileModification6  this=CellClass  sig=csp ====
int __thiscall CellClass::ApplyTileModification6(CellClass *this, _DWORD *a2)
{
  int v2; // eax
  __int16 v3; // cx
  unsigned int v4; // eax
  BuildingClass *v5; // eax
  BuildingClass *v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // edi
  int v28; // ebx
  int v29; // ebp
  int v30; // edi
  struct tagRECT *v31; // eax
  int v32; // eax
  Coord2D *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int result; // eax
  int v37; // [esp-8h] [ebp-118h]
  struct tagRECT *v38; // [esp-4h] [ebp-114h]
  int v39; // [esp-4h] [ebp-114h]
  const RECT *v40; // [esp+0h] [ebp-110h]
  const RECT *v41; // [esp+0h] [ebp-110h]
  const RECT *v42; // [esp+4h] [ebp-10Ch]
  const RECT *v43; // [esp+4h] [ebp-10Ch]
  char v44; // [esp+13h] [ebp-FDh]
  __int16 v45[4]; // [esp+14h] [ebp-FCh] BYREF
  int v46; // [esp+1Ch] [ebp-F4h] BYREF
  int v47; // [esp+20h] [ebp-F0h]
  int v48; // [esp+24h] [ebp-ECh]
  int v49; // [esp+28h] [ebp-E8h]
  int v50; // [esp+2Ch] [ebp-E4h]
  BuildingClass *v51; // [esp+30h] [ebp-E0h]
  Terrain *v52; // [esp+34h] [ebp-DCh]
  int v53; // [esp+38h] [ebp-D8h]
  _WORD v54[2]; // [esp+3Ch] [ebp-D4h] BYREF
  int v55; // [esp+40h] [ebp-D0h]
  _WORD v56[2]; // [esp+44h] [ebp-CCh] BYREF
  int v57; // [esp+48h] [ebp-C8h]
  int v58; // [esp+4Ch] [ebp-C4h]
  int v59; // [esp+50h] [ebp-C0h]
  int v60; // [esp+54h] [ebp-BCh]
  int v61; // [esp+60h] [ebp-B0h]
  int v62; // [esp+64h] [ebp-ACh]
  int v63; // [esp+68h] [ebp-A8h]
  int v64; // [esp+6Ch] [ebp-A4h]
  int v65; // [esp+70h] [ebp-A0h]
  int v66; // [esp+74h] [ebp-9Ch] BYREF
  int v67; // [esp+78h] [ebp-98h]
  int v68; // [esp+7Ch] [ebp-94h] BYREF
  _DWORD v69[2]; // [esp+80h] [ebp-90h] BYREF
  int v70; // [esp+88h] [ebp-88h] BYREF
  int v71; // [esp+8Ch] [ebp-84h] BYREF
  int v72; // [esp+90h] [ebp-80h] BYREF
  int v73; // [esp+98h] [ebp-78h] BYREF
  _DWORD v74[4]; // [esp+A0h] [ebp-70h] BYREF
  int v75[4]; // [esp+B0h] [ebp-60h] BYREF
  int v76[4]; // [esp+D0h] [ebp-40h] BYREF
  int v77[4]; // [esp+F0h] [ebp-20h] BYREF
  Rect v78; // [esp+100h] [ebp-10h] BYREF

  v52 = (Terrain *)this; /*0x57f6ad*/
  *(_DWORD *)v45 = *a2; /*0x57f6b7*/
  v44 = 0; /*0x57f6bb*/
  do /*0x57f6df*/
  {
    --v45[0]; /*0x57f6c0*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45) + 17); /*0x57f6d4*/
  }
  while ( v2 >= 74 && v2 <= 101 ); /*0x57f6df*/
  v3 = ++v45[0]; /*0x57f6e6*/
  v46 = 0; /*0x57f6ef*/
  v47 = 0; /*0x57f6f3*/
  v48 = 0; /*0x57f6f7*/
  v49 = 0; /*0x57f6fb*/
  while ( 1 ) /*0x57f71b*/
  {
    v4 = v3 + (v45[1] << 9); /*0x57f719*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57f729*/
    {
      v6 = v5; /*0x57f72b*/
    }
    else
    {
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57f733*/
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v45; /*0x57f738*/
    }
    v51 = v6; /*0x57f741*/
    LOWORD(v53) = v3; /*0x57f74b*/
    HIWORD(v53) = v45[1] - 1; /*0x57f750*/
    v7 = v3 + ((__int16)(v45[1] - 1) << 9); /*0x57f75b*/
    if ( v7 < 0x40000 && (v8 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v7)) != 0 ) /*0x57f76b*/
    {
      v58 = v8; /*0x57f76d*/
    }
    else
    {
      v58 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57f777*/
      g_MissionQueueFrame.briefing[139] = v53; /*0x57f77f*/
    }
    LOWORD(v57) = v3; /*0x57f787*/
    HIWORD(v57) = v45[1] + 1; /*0x57f78c*/
    v9 = v3 + ((__int16)(v45[1] + 1) << 9); /*0x57f797*/
    if ( v9 < 0x40000 && (v10 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v9)) != 0 ) /*0x57f7a7*/
    {
      v55 = v10; /*0x57f7a9*/
    }
    else
    {
      v55 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57f7b3*/
      g_MissionQueueFrame.briefing[139] = v57; /*0x57f7bb*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v77); /*0x57f7d0*/
    StartCoords = House::GetStartCoords((House *)v6, v74); /*0x57f7dc*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57f7f1*/
    {
      v13 = *PlacementRect; /*0x57f877*/
      v15 = PlacementRect[1]; /*0x57f879*/
      v19 = PlacementRect[2]; /*0x57f87c*/
      v17 = PlacementRect[3]; /*0x57f87f*/
    }
    else
    {
      v59 = PlacementRect[2]; /*0x57f7fc*/
      if ( v59 <= 0 || (v50 = PlacementRect[3], v50 <= 0) ) /*0x57f80b*/
      {
        v13 = *StartCoords; /*0x57f86a*/
        v15 = StartCoords[1]; /*0x57f86c*/
        v19 = StartCoords[2]; /*0x57f86f*/
        v17 = StartCoords[3]; /*0x57f872*/
      }
      else
      {
        v13 = *StartCoords; /*0x57f80d*/
        v14 = *PlacementRect; /*0x57f80f*/
        v15 = StartCoords[1]; /*0x57f811*/
        v16 = StartCoords[2]; /*0x57f814*/
        v17 = StartCoords[3]; /*0x57f817*/
        if ( v13 > *PlacementRect ) /*0x57f81c*/
        {
          v16 += v13 - v14; /*0x57f820*/
          v13 = *PlacementRect; /*0x57f822*/
        }
        v18 = PlacementRect[1]; /*0x57f824*/
        v67 = v18; /*0x57f829*/
        if ( v15 > v18 ) /*0x57f82d*/
        {
          v17 += v15 - v18; /*0x57f831*/
          v15 = v18; /*0x57f833*/
        }
        if ( v13 + v16 < v14 + v59 ) /*0x57f840*/
          v16 = v14 - v13 + v59 + 1; /*0x57f848*/
        if ( v17 + v15 < v50 + v67 ) /*0x57f85b*/
          v17 = v50 + v67 - v15 + 1; /*0x57f860*/
        v6 = v51; /*0x57f862*/
        v19 = v16; /*0x57f866*/
      }
    }
    v62 = v13; /*0x57f882*/
    v63 = v15; /*0x57f886*/
    v64 = v19; /*0x57f88a*/
    v65 = v17; /*0x57f88e*/
    v20 = v6->?[2]; /*0x57f892*/
    v50 = v20; /*0x57f895*/
    switch ( v20 ) /*0x57f8ad*/
    {
      case 'N': /*0x57f8ad*/
      case 'O': /*0x57f8ad*/
      case 'P': /*0x57f8ad*/
      case 'Q': /*0x57f8ad*/
      case 'R': /*0x57f8ad*/
      case 'd': /*0x57f8ad*/
        v22 = Range_RandomInt(0, 3u); /*0x57f8cf*/
        v23 = v48; /*0x57f8d9*/
        v21 = v22 + 74; /*0x57f8dd*/
        v24 = v45[0]; /*0x57f8e0*/
        v25 = v45[1] - 1; /*0x57f8e5*/
        v26 = 3; /*0x57f8ed*/
        if ( v48 <= 0 || v49 <= 0 ) /*0x57f8f9*/
        {
          v23 = 1; /*0x57f96a*/
        }
        else
        {
          v61 = v49; /*0x57f903*/
          v60 = v46; /*0x57f90b*/
          v27 = v47; /*0x57f90f*/
          if ( v46 > v45[0] ) /*0x57f915*/
          {
            v60 = v45[0]; /*0x57f919*/
            v23 = v46 + v48 - v45[0]; /*0x57f91d*/
          }
          if ( v47 > v25 ) /*0x57f921*/
          {
            v27 = v45[1] - 1; /*0x57f92b*/
            v61 += v47 - v25; /*0x57f92d*/
          }
          if ( v23 + v60 < v45[0] + 1 ) /*0x57f93c*/
            v23 = v45[0] - v60 + 2; /*0x57f945*/
          v28 = v61; /*0x57f947*/
          if ( v61 + v27 < v25 + 3 ) /*0x57f953*/
            v28 = v25 - v27 + 4; /*0x57f95a*/
          v24 = v60; /*0x57f95c*/
          v25 = v27; /*0x57f960*/
          v26 = v28; /*0x57f962*/
          v6 = v51; /*0x57f964*/
        }
        v48 = v23; /*0x57f96c*/
        v20 = v50; /*0x57f970*/
        v46 = v24; /*0x57f974*/
        v47 = v25; /*0x57f978*/
        v49 = v26; /*0x57f97c*/
        v44 = 1; /*0x57f980*/
        goto LABEL_49; /*0x57f980*/
      case '\\': /*0x57f8ad*/
      case ']': /*0x57f8ad*/
        v21 = 92; /*0x57f8b4*/
        goto LABEL_49; /*0x57f8b9*/
      case '^': /*0x57f8ad*/
      case '_': /*0x57f8ad*/
        v21 = 94; /*0x57f8be*/
LABEL_49:
        if ( v21 != v20 ) /*0x57f987*/
        {
          v29 = v58; /*0x57f98d*/
          v30 = v55; /*0x57f991*/
          v6->?[2] = v21; /*0x57f995*/
          *(_DWORD *)(v29 + 68) = v21; /*0x57f998*/
          *(_DWORD *)(v30 + 68) = v21; /*0x57f99b*/
          v69[0] = DSurface_ViewBounds.field_0; /*0x57f9a9*/
          v69[1] = DSurface_ViewBounds.field_4; /*0x57f9b7*/
          v38 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v76); /*0x57f9cd*/
          House::GetStartCoords((House *)v6, v75); /*0x57f9d1*/
          v31 = (struct tagRECT *)Rect::Union(v38, v40, v42); /*0x57f9df*/
          v32 = Rect::Union(v31, v41, v43); /*0x57f9f0*/
          v39 = *(_DWORD *)(v32 + 12); /*0x57f9fb*/
          v37 = *(_DWORD *)(v32 + 8); /*0x57fa03*/
          v33 = (Coord2D *)CellStruct::Copy((CellStruct *)v32, &v73); /*0x57fa17*/
          v34 = Coord2D::Sub(v33, &v72, v69); /*0x57fa1e*/
          v35 = Rect::Construct(&v78, v34, v37, v39); /*0x57fa2b*/
          v62 = *v35; /*0x57fa39*/
          v63 = v35[1]; /*0x57fa40*/
          v64 = v35[2]; /*0x57fa47*/
          v65 = v35[3]; /*0x57fa53*/
          Cell::CreateCrater(*v35, v35[1], v35[2], v35[3], 0); /*0x57fa76*/
          if ( v20 == 100 ) /*0x57fa7e*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v45); /*0x57fa8e*/
            v54[0] = 0; /*0x57faa9*/
            v54[1] = 1; /*0x57fab0*/
            v66 = *CellStruct::Add((CellStruct *)v45, &v70, v54); /*0x57fac0*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v66); /*0x57faca*/
            v56[0] = 0; /*0x57fae0*/
            v56[1] = 1; /*0x57fae7*/
            v68 = *CellStruct::Sub((CellStruct *)v45, &v71, v56); /*0x57fafd*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v68); /*0x57fb04*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x57fb0d*/
          House::AnnounceUpgrade(v29, -1); /*0x57fb16*/
          House::AnnounceUpgrade(v30, -1); /*0x57fb1f*/
          Cell::SearchEnemies((int)v6, 0); /*0x57fb28*/
          Cell::SearchEnemies(v29, 0); /*0x57fb31*/
          Cell::SearchEnemies(v30, 0); /*0x57fb3a*/
        }
        break; /*0x57fb3a*/
      default:
        break;
    }
    ++v45[0]; /*0x57fb3f*/
    if ( !CellClass::updateLighting((CellClass *)v45) ) /*0x57fb48*/
      break; /*0x57fb48*/
    v3 = v45[0]; /*0x57f701*/
  }
  if ( v44 ) /*0x57fb5b*/
    Terrain::ConnectivityGraph(v52); /*0x57fb61*/
  result = v48; /*0x57fb66*/
  if ( v48 > 0 ) /*0x57fb6c*/
  {
    result = v49; /*0x57fb6e*/
    if ( v49 > 0 ) /*0x57fb74*/
      UpdateAreaConnectivityMap((ObjectClass *)v52, &v46); /*0x57fb7f*/
  }
  return result; /*0x57fb84*/
}



// ==== 0x0057FBC0  CellClass::ApplyTileModification7  this=CellClass  sig=csp ====
void __thiscall CellClass::ApplyTileModification7(CellClass *this, int *a2)
{
  int v2; // eax
  __int16 i; // di
  unsigned int v4; // eax
  BuildingClass *v5; // eax
  BuildingClass *v6; // ebp
  int v7; // edx
  int v8; // eax
  bool v9; // sf
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  int v23; // esi
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  int v32; // ebx
  int v33; // edi
  int v34; // edi
  int v35; // ebx
  struct tagRECT *v36; // eax
  int v37; // eax
  Coord2D *v38; // eax
  int *v39; // eax
  int *v40; // eax
  int v41; // [esp-8h] [ebp-114h]
  struct tagRECT *v42; // [esp-4h] [ebp-110h]
  int v43; // [esp-4h] [ebp-110h]
  const RECT *v44; // [esp+0h] [ebp-10Ch]
  const RECT *v45; // [esp+0h] [ebp-10Ch]
  const RECT *v46; // [esp+4h] [ebp-108h]
  const RECT *v47; // [esp+4h] [ebp-108h]
  __int16 v48[2]; // [esp+10h] [ebp-FCh] BYREF
  char v49; // [esp+17h] [ebp-F5h]
  int v50; // [esp+18h] [ebp-F4h] BYREF
  int v51; // [esp+1Ch] [ebp-F0h]
  int v52; // [esp+20h] [ebp-ECh]
  int v53; // [esp+24h] [ebp-E8h]
  BuildingClass *v54; // [esp+28h] [ebp-E4h]
  int v55; // [esp+2Ch] [ebp-E0h]
  int v56; // [esp+30h] [ebp-DCh]
  Terrain *v57; // [esp+34h] [ebp-D8h]
  int v58; // [esp+38h] [ebp-D4h]
  _WORD v59[2]; // [esp+3Ch] [ebp-D0h] BYREF
  int v60; // [esp+40h] [ebp-CCh]
  int v61; // [esp+44h] [ebp-C8h]
  _WORD v62[2]; // [esp+48h] [ebp-C4h] BYREF
  int v63; // [esp+4Ch] [ebp-C0h]
  int v64; // [esp+50h] [ebp-BCh]
  int v65; // [esp+54h] [ebp-B8h]
  int v66; // [esp+58h] [ebp-B4h]
  int v67; // [esp+5Ch] [ebp-B0h]
  int v68; // [esp+68h] [ebp-A4h]
  int v69; // [esp+6Ch] [ebp-A0h] BYREF
  int v70; // [esp+70h] [ebp-9Ch]
  int v71; // [esp+74h] [ebp-98h]
  int v72; // [esp+78h] [ebp-94h] BYREF
  _DWORD v73[2]; // [esp+7Ch] [ebp-90h] BYREF
  int v74; // [esp+84h] [ebp-88h] BYREF
  int v75; // [esp+88h] [ebp-84h] BYREF
  int v76; // [esp+8Ch] [ebp-80h] BYREF
  int v77; // [esp+94h] [ebp-78h] BYREF
  _DWORD v78[4]; // [esp+9Ch] [ebp-70h] BYREF
  int v79[4]; // [esp+ACh] [ebp-60h] BYREF
  int v80[4]; // [esp+CCh] [ebp-40h] BYREF
  int v81[4]; // [esp+ECh] [ebp-20h] BYREF
  Rect v82; // [esp+FCh] [ebp-10h] BYREF

  v57 = (Terrain *)this; /*0x57fbce*/
  *(_DWORD *)v48 = *a2; /*0x57fbd9*/
  v50 = 0; /*0x57fbdd*/
  v51 = 0; /*0x57fbe1*/
  v52 = 0; /*0x57fbe5*/
  v53 = 0; /*0x57fbe9*/
  v49 = 0; /*0x57fbed*/
  do /*0x57fc11*/
  {
    --v48[1]; /*0x57fbf2*/
    v2 = *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v48) + 17); /*0x57fc06*/
  }
  while ( v2 >= 74 && v2 <= 101 ); /*0x57fc11*/
  for ( i = ++v48[1]; ; i = v48[1] ) /*0x57fc18*/
  {
    v4 = v48[0] + (i << 9); /*0x57fc3f*/
    if ( v4 < 0x40000 && (v5 = *(BuildingClass **)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v4)) != 0 ) /*0x57fc4f*/
    {
      v6 = v5; /*0x57fc51*/
    }
    else
    {
      g_MissionQueueFrame.briefing[139] = *(_DWORD *)v48; /*0x57fc55*/
      v6 = (BuildingClass *)&g_MissionQueueFrame.briefing[130]; /*0x57fc5b*/
    }
    HIWORD(v58) = i; /*0x57fc66*/
    LOWORD(v58) = v48[0] - 1; /*0x57fc6b*/
    v7 = (__int16)(v48[0] - 1); /*0x57fc73*/
    v8 = i << 9; /*0x57fc76*/
    v9 = v7 + v8 < 0; /*0x57fc79*/
    v10 = v7 + v8; /*0x57fc79*/
    v54 = v6; /*0x57fc7b*/
    if ( v9 || v10 >= 0x40000 || (v11 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v10)) == 0 ) /*0x57fc8d*/
    {
      v61 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57fc99*/
      g_MissionQueueFrame.briefing[139] = v58; /*0x57fca1*/
    }
    else
    {
      v61 = v11; /*0x57fc8f*/
    }
    HIWORD(v60) = i; /*0x57fca9*/
    v12 = (__int16)(v48[0] + 1); /*0x57fcae*/
    v13 = i << 9; /*0x57fcb1*/
    v9 = v12 + v13 < 0; /*0x57fcb4*/
    v14 = v12 + v13; /*0x57fcb4*/
    LOWORD(v60) = v48[0] + 1; /*0x57fcb6*/
    if ( v9 || v14 >= 0x40000 || (v15 = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[732] + 4 * v14)) == 0 ) /*0x57fcca*/
    {
      v56 = (int)&g_MissionQueueFrame.briefing[130]; /*0x57fcd6*/
      g_MissionQueueFrame.briefing[139] = v60; /*0x57fcde*/
    }
    else
    {
      v56 = v15; /*0x57fccc*/
    }
    PlacementRect = BuildingClass::GetPlacementRect(v6, v81); /*0x57fcfc*/
    StartCoords = House::GetStartCoords((House *)v6, v78); /*0x57fcfe*/
    if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x57fd13*/
    {
      v18 = *PlacementRect; /*0x57fd92*/
      v20 = PlacementRect[1]; /*0x57fd94*/
      v24 = PlacementRect[2]; /*0x57fd97*/
      v22 = PlacementRect[3]; /*0x57fd9a*/
    }
    else
    {
      v71 = PlacementRect[2]; /*0x57fd1a*/
      if ( v71 <= 0 || (v55 = PlacementRect[3], v55 <= 0) ) /*0x57fd29*/
      {
        v18 = *StartCoords; /*0x57fd85*/
        v20 = StartCoords[1]; /*0x57fd87*/
        v24 = StartCoords[2]; /*0x57fd8a*/
        v22 = StartCoords[3]; /*0x57fd8d*/
      }
      else
      {
        v18 = *StartCoords; /*0x57fd2b*/
        v19 = *PlacementRect; /*0x57fd2d*/
        v20 = StartCoords[1]; /*0x57fd2f*/
        v21 = StartCoords[2]; /*0x57fd32*/
        v22 = StartCoords[3]; /*0x57fd35*/
        if ( v18 > *PlacementRect ) /*0x57fd3a*/
        {
          v21 += v18 - v19; /*0x57fd3e*/
          v18 = *PlacementRect; /*0x57fd40*/
        }
        v23 = PlacementRect[1]; /*0x57fd42*/
        v70 = v23; /*0x57fd47*/
        if ( v20 > v23 ) /*0x57fd4b*/
        {
          v22 += v20 - v23; /*0x57fd4f*/
          v20 = v23; /*0x57fd51*/
        }
        if ( v18 + v21 < v19 + v71 ) /*0x57fd5b*/
          v21 = v19 - v18 + v71 + 1; /*0x57fd63*/
        if ( v22 + v20 < v55 + v70 ) /*0x57fd76*/
          v22 = v55 + v70 - v20 + 1; /*0x57fd7b*/
        v24 = v21; /*0x57fd7d*/
        v6 = v54; /*0x57fd7f*/
      }
    }
    v63 = v18; /*0x57fd9d*/
    v64 = v20; /*0x57fda1*/
    v65 = v24; /*0x57fda5*/
    v66 = v22; /*0x57fda9*/
    v25 = v6->?[2]; /*0x57fdad*/
    v55 = v25; /*0x57fdb0*/
    switch ( v25 ) /*0x57fdc8*/
    {
      case 'W': /*0x57fdc8*/
      case 'X': /*0x57fdc8*/
      case 'Y': /*0x57fdc8*/
      case 'Z': /*0x57fdc8*/
      case '[': /*0x57fdc8*/
      case 'e': /*0x57fdc8*/
        v27 = Range_RandomInt(0, 3u); /*0x57fdea*/
        v28 = v52; /*0x57fdf4*/
        v26 = v27 + 83; /*0x57fdf8*/
        v29 = v48[1]; /*0x57fdfb*/
        v30 = v48[0] - 1; /*0x57fe00*/
        if ( v52 <= 0 || v53 <= 0 ) /*0x57fe14*/
        {
          v28 = 3; /*0x57fe85*/
          v33 = 1; /*0x57fe87*/
        }
        else
        {
          v68 = v53; /*0x57fe1e*/
          v67 = v50; /*0x57fe26*/
          v31 = v51; /*0x57fe2a*/
          if ( v50 > v30 ) /*0x57fe30*/
          {
            v67 = v48[0] - 1; /*0x57fe34*/
            v28 = v50 + v52 - v30; /*0x57fe38*/
          }
          if ( v51 > v48[1] ) /*0x57fe3c*/
          {
            v31 = v48[1]; /*0x57fe46*/
            v68 += v51 - v48[1]; /*0x57fe48*/
          }
          if ( v28 + v67 < v30 + 3 ) /*0x57fe57*/
            v28 = v30 - v67 + 4; /*0x57fe60*/
          v32 = v68; /*0x57fe62*/
          if ( v68 + v31 < v48[1] + 1 ) /*0x57fe6e*/
            v32 = v48[1] - v31 + 2; /*0x57fe75*/
          v30 = v67; /*0x57fe77*/
          v6 = v54; /*0x57fe7b*/
          v29 = v31; /*0x57fe7f*/
          v33 = v32; /*0x57fe81*/
        }
        v51 = v29; /*0x57fe89*/
        v25 = v55; /*0x57fe8d*/
        v50 = v30; /*0x57fe91*/
        v52 = v28; /*0x57fe95*/
        v53 = v33; /*0x57fe99*/
        v49 = 1; /*0x57fe9d*/
        goto LABEL_51; /*0x57fe9d*/
      case '`': /*0x57fdc8*/
      case 'a': /*0x57fdc8*/
        v26 = 96; /*0x57fdcf*/
        goto LABEL_51; /*0x57fdd4*/
      case 'b': /*0x57fdc8*/
      case 'c': /*0x57fdc8*/
        v26 = 98; /*0x57fdd9*/
LABEL_51:
        if ( v26 != v25 ) /*0x57fea4*/
        {
          v34 = v61; /*0x57feaa*/
          v35 = v56; /*0x57feae*/
          v6->?[2] = v26; /*0x57feb2*/
          *(_DWORD *)(v34 + 68) = v26; /*0x57febc*/
          *(_DWORD *)(v35 + 68) = v26; /*0x57febf*/
          v73[1] = DSurface_ViewBounds.field_4; /*0x57fecd*/
          v73[0] = DSurface_ViewBounds.field_0; /*0x57fed7*/
          v42 = (struct tagRECT *)BuildingClass::GetPlacementRect(v6, v80); /*0x57fee3*/
          House::GetStartCoords((House *)v6, v79); /*0x57feee*/
          v36 = (struct tagRECT *)Rect::Union(v42, v44, v46); /*0x57fefc*/
          v37 = Rect::Union(v36, v45, v47); /*0x57ff0d*/
          v43 = *(_DWORD *)(v37 + 12); /*0x57ff18*/
          v41 = *(_DWORD *)(v37 + 8); /*0x57ff20*/
          v38 = (Coord2D *)CellStruct::Copy((CellStruct *)v37, &v76); /*0x57ff34*/
          v39 = Coord2D::Sub(v38, &v77, v73); /*0x57ff3b*/
          v40 = Rect::Construct(&v82, v39, v41, v43); /*0x57ff48*/
          v63 = *v40; /*0x57ff56*/
          v64 = v40[1]; /*0x57ff5d*/
          v65 = v40[2]; /*0x57ff64*/
          v66 = v40[3]; /*0x57ff6d*/
          Cell::CreateCrater(*v40, v40[1], v40[2], v40[3], 0); /*0x57ff8d*/
          if ( v25 == 101 ) /*0x57ff95*/
          {
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)v48); /*0x57ffa5*/
            v59[0] = 1; /*0x57ffc0*/
            v59[1] = 0; /*0x57ffc5*/
            v72 = *CellStruct::Add((CellStruct *)v48, &v74, v59); /*0x57ffd7*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v72); /*0x57ffe1*/
            v62[0] = 1; /*0x57fff7*/
            v62[1] = 0; /*0x57fffc*/
            v69 = *CellStruct::Sub((CellStruct *)v48, &v75, v62); /*0x580014*/
            BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&v69); /*0x580018*/
          }
          House::AnnounceUpgrade((int)v6, -1); /*0x580021*/
          House::AnnounceUpgrade(v34, -1); /*0x58002a*/
          House::AnnounceUpgrade(v35, -1); /*0x580033*/
          Cell::SearchEnemies((int)v6, 0); /*0x58003c*/
          Cell::SearchEnemies(v34, 0); /*0x580045*/
          Cell::SearchEnemies(v35, 0); /*0x58004e*/
        }
        break; /*0x58004e*/
      default:
        break;
    }
    ++v48[1]; /*0x580053*/
    if ( !CellClass::updateLighting((CellClass *)v48) ) /*0x58005c*/
      break; /*0x58005c*/
  }
  if ( v49 ) /*0x58006f*/
    Terrain::ConnectivityGraph(v57); /*0x580075*/
  if ( v52 > 0 && v53 > 0 ) /*0x580088*/
    UpdateAreaConnectivityMap((ObjectClass *)v57, &v50); /*0x580093*/
}


