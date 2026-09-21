// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x005902C0  Object_Helper  this=-  sig=csp ====
char __stdcall sub_5902C0(int a1)
{
  int *v1; // ebx
  __int16 v2; // ax
  char *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // edi
  int v9; // ebp
  int v10; // esi
  int *v11; // eax
  int *v12; // edi
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  v1 = (int *)a1; /*0x5902c4*/
  v2 = *(_WORD *)a1; /*0x5902ce*/
  HIWORD(a1) = *(_WORD *)(a1 + 4); /*0x5902d6*/
  LOWORD(a1) = v2; /*0x5902e1*/
  v3 = (char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (__int16)*v1; /*0x590301*/
  v15 = v4; /*0x590307*/
  a1 = (__int16)v4 + v6; /*0x590310*/
  if ( a1 > g_MapCellHeight_Value /*0x59033c*/
    && v6 - (__int16)v4 < g_MapCellHeight_Value
    && (__int16)v4 - v6 < g_MapCellHeight_Value
    && a1 <= g_MapCellCount )
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (__int16)(v5 + v7 - 1); /*0x59034f*/
    if ( (__int16)v4 + a1 > g_MapCellHeight_Value /*0x590387*/
      && a1 - (__int16)v4 < g_MapCellHeight_Value
      && (__int16)v4 - a1 < g_MapCellHeight_Value
      && (__int16)v4 + a1 <= g_MapCellCount )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (__int16)v14 + (__int16)v5; /*0x5903a3*/
      if ( a1 > g_MapCellHeight_Value /*0x5903cf*/
        && (__int16)v5 - (__int16)v14 < g_MapCellHeight_Value
        && (__int16)v14 - (__int16)v5 < g_MapCellHeight_Value
        && a1 <= g_MapCellCount )
      {
        v8 = (__int16)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (__int16)v14 + v8; /*0x5903e6*/
        if ( a1 > g_MapCellHeight_Value /*0x590412*/
          && v8 - (__int16)v14 < g_MapCellHeight_Value
          && (__int16)v14 - v8 < g_MapCellHeight_Value
          && a1 <= g_MapCellCount )
        {
          v9 = v15; /*0x590418*/
          if ( v15 >= v1[3] + v15 + 1 ) /*0x590425*/
            return 1; /*0x59049b*/
          while ( 1 ) /*0x590427*/
          {
            v10 = v5; /*0x590427*/
            if ( v5 < v7 + v5 + 1 ) /*0x59042f*/
              break; /*0x59042f*/
LABEL_24:
            if ( ++v9 >= v1[1] + v1[3] + 1 ) /*0x590490*/
              return 1; /*0x590490*/
          }
          while ( 1 ) /*0x59043b*/
          {
            LOWORD(a1) = v10; /*0x59043b*/
            HIWORD(a1) = v9; /*0x590440*/
            v11 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x590445*/
            v12 = v11; /*0x59044a*/
            if ( v11[17] != -1 || *((char *)v11 + 283) != v16 || !Cell::IsEmpty(v11) && !Cell::IsGroundTypeRange(v12) ) /*0x59046c*/
              break; /*0x59046c*/
            v7 = v1[2]; /*0x590475*/
            v5 = *v1; /*0x590478*/
            if ( ++v10 >= v7 + *v1 + 1 ) /*0x590481*/
              goto LABEL_24; /*0x590481*/
          }
        }
      }
    }
  }
  return 0; /*0x590492*/
}


// ==== 0x005904B0  PlaceCabhutMap  this=-  sig=csp ====
char __stdcall PlaceCabhutMap(FootClass *aP0)
{
  FootClass *v1; // ebp
  int v2; // ebx
  int v3; // edi
  Random *v4; // eax
  Random *v5; // esi
  void *v7; // eax
  AbstractClass *Owner; // edi
  FootClass *IndexByName; // ebx
  int v10; // eax
  BuildingClass *v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = aP0; /*0x5904b5*/
  v2 = *(_DWORD *)&aP0->__pad_0[4]; /*0x5904bb*/
  if ( v2 >= *(_DWORD *)&aP0->__pad_0[12] + v2 + 1 ) /*0x5904c7*/
    return 0; /*0x59052b*/
  while ( 1 ) /*0x5904c9*/
  {
    v3 = *(_DWORD *)v1->__pad_0; /*0x5904c9*/
    if ( *(_DWORD *)v1->__pad_0 < *(_DWORD *)&v1->__pad_0[8] + *(_DWORD *)v1->__pad_0 + 1 ) /*0x5904d5*/
      break; /*0x5904d5*/
LABEL_7:
    if ( ++v2 >= *(_DWORD *)&v1->__pad_0[12] + *(_DWORD *)&v1->__pad_0[4] + 1 ) /*0x590529*/
      return 0; /*0x590529*/
  }
  while ( 1 ) /*0x5904db*/
  {
    LOWORD(aP0) = v3; /*0x5904db*/
    HIWORD(aP0) = v2; /*0x5904e6*/
    v4 = (Random *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&aP0); /*0x5904eb*/
    v5 = v4; /*0x5904f0*/
    if ( v4[4].Random_field_0x04 == -1 && Cell::IsEmpty(v4) && !v5[14].Random_field_0x04 ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= *(_DWORD *)&v1->__pad_0[8] + *(_DWORD *)v1->__pad_0 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x59053c*/
  Owner = (AbstractClass *)HouseClass::FindOwner(v7); /*0x59054d*/
  IndexByName = (FootClass *)BuildingTypeClass::FindIndexByName(aCabhut); /*0x590559*/
  v10 = __2_YAPAXI_Z(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = BuildingClass::Construct(v10, *((AbstractClass **)g_TriggerTypeCount + (_DWORD)IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = SLOWORD(v5[2].Random_field_0x04) << 8; /*0x590588*/
  v14[1] = (SHIWORD(v5[2].Random_field_0x04) << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *(_DWORD *)v11->__pad_0; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  (*(void (__thiscall **)(BuildingClass *, _DWORD *, _DWORD))(v13 + 216))(v11, v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}


// ==== 0x005905D0  RandomMap::AllocateArea  this=RandomMap  sig=csp ====
char __thiscall sub_5905D0(int this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // ebx
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  char *v21; // ecx
  int v22; // esi
  int v23; // ebp
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // eax
  char *v30; // ecx
  _DWORD *v31; // ebp
  _DWORD *v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // eax
  int v35; // edx
  float v37; // [esp+0h] [ebp-58h]
  _DWORD *v39; // [esp+18h] [ebp-40h]
  int v40; // [esp+18h] [ebp-40h]
  int v41; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  int v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  __int64 v46; // [esp+30h] [ebp-28h]
  __int64 v47; // [esp+38h] [ebp-20h]
  __int64 v48; // [esp+40h] [ebp-18h]
  __int64 v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]

  v1 = (_DWORD *)this; /*0x5905d6*/
  LOBYTE(v2) = *(_BYTE *)(this + 20); /*0x5905dd*/
  if ( (_BYTE)v2 ) /*0x5905e2*/
  {
    v3 = *(_DWORD *)(this + 4); /*0x5905e8*/
    v4 = *(_DWORD *)(v3 + 16); /*0x5905eb*/
    LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
      v5 = g_RandomMap_TerrainState; /*0x5905f9*/
      v6 = g_RandomMap_TileData; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      v41 = 0; /*0x59060d*/
      while ( 1 ) /*0x590615*/
      {
        v7 = 0; /*0x590615*/
        if ( v6 <= 0 ) /*0x590619*/
        {
LABEL_9:
          v39 = 0; /*0x590640*/
        }
        else
        {
          v8 = v5; /*0x590625*/
          while ( *(_DWORD *)(*v8 + 8) != *(_DWORD *)(*(_DWORD *)(v3 + 4) + v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            ++v8; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_RandomMap_TerrainState; /*0x590636*/
              v1 = (_DWORD *)this; /*0x59063c*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_RandomMap_TerrainState; /*0x59068e*/
          v1 = (_DWORD *)this; /*0x590694*/
          v39 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + v7); /*0x59069b*/
        }
        if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
          goto LABEL_28; /*0x590659*/
        v9 = v42; /*0x59065f*/
        v43 = v42; /*0x590665*/
        if ( v42 < v4 ) /*0x590669*/
          break; /*0x590669*/
LABEL_29:
        v41 += 4; /*0x590701*/
        v3 = v1[1]; /*0x59070d*/
        v42 = v9 + 1; /*0x590710*/
        v4 = *(_DWORD *)(v3 + 16); /*0x590715*/
        LOBYTE(v2) = v4 - 1; /*0x590718*/
        if ( v9 >= v4 - 1 ) /*0x59071d*/
          return v2; /*0x59071d*/
      }
      do /*0x5906f7*/
      {
        v10 = 0; /*0x59066f*/
        if ( v6 <= 0 ) /*0x590673*/
        {
LABEL_20:
          v13 = 0; /*0x5906a6*/
        }
        else
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * v9); /*0x590678*/
          v12 = v5; /*0x59067b*/
          while ( *(_DWORD *)(*v12 + 8) != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            ++v12; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = v5[v10]; /*0x5906a1*/
        }
        if ( (*(int *)(*(_DWORD *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(_BYTE *)(v13 + 20) ) /*0x5906b7*/
        {
          v14 = v39[4]; /*0x5906c5*/
          if ( *(_DWORD *)(v13 + 16) == v14 && v14 == v1[4] ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(v1, (int)v39, v13); /*0x5906d5*/
            v5 = g_RandomMap_TerrainState; /*0x5906da*/
            v6 = g_RandomMap_TileData; /*0x5906e0*/
          }
        }
        v3 = v1[1]; /*0x5906e6*/
        v9 = v43 + 1; /*0x5906ed*/
        v15 = *(_DWORD *)(v3 + 16); /*0x5906ee*/
        v43 = v9; /*0x5906f1*/
      }
      while ( v9 < v15 ); /*0x5906f7*/
LABEL_28:
      v9 = v42; /*0x5906fd*/
      goto LABEL_29; /*0x5906fd*/
    }
  }
  else
  {
    v16 = *(_DWORD *)(this + 4); /*0x59072b*/
    v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
      v18 = g_RandomMap_TileData; /*0x59073d*/
      do /*0x590952*/
      {
        v19 = 0; /*0x590743*/
        if ( v18 <= 0 ) /*0x590747*/
        {
LABEL_37:
          v22 = 0; /*0x59076e*/
        }
        else
        {
          v20 = *(_DWORD *)(*(_DWORD *)(v16 + 4) + 4 * v42); /*0x590756*/
          v21 = (char *)g_RandomMap_TerrainState; /*0x590759*/
          while ( *(_DWORD *)(*(_DWORD *)v21 + 8) != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *((_DWORD *)g_RandomMap_TerrainState + v19); /*0x5907ee*/
        }
        v23 = this; /*0x590770*/
        if ( *(_DWORD *)(v22 + 8) > *(_DWORD *)(this + 8) && *(_DWORD *)(v22 + 16) != *(_DWORD *)(this + 16) ) /*0x590788*/
        {
          v40 = 0; /*0x59078e*/
          do /*0x5907b6*/
          {
            v46 = (unsigned int)Random::State(&g_Randomizer); /*0x59079c*/
            v24 = Math::RoundToInt((double)v46 * 0.00000002351589501451605); /*0x5907ae*/
          }
          while ( v24 > 0x64 ); /*0x5907b6*/
          if ( (int)v24 >= dword_ABE044 ) /*0x5907be*/
          {
            v25 = 0; /*0x5907f6*/
          }
          else
          {
            do /*0x5907ea*/
            {
              v47 = (unsigned int)Random::State(&g_Randomizer); /*0x5907ca*/
              v25 = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
            }
            while ( v25 > 2 ); /*0x5907ea*/
          }
          v26 = *(_DWORD *)(this + 16); /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          v27 = *(_DWORD *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= v26 ) /*0x590809*/
            v28 = *(_DWORD *)(this + 8); /*0x590810*/
          else
            v28 = *(_DWORD *)(v22 + 8); /*0x59080b*/
          if ( v27 <= v26 ) /*0x590815*/
            v43 = *(_DWORD *)(v22 + 8); /*0x590823*/
          else
            v43 = *(_DWORD *)(this + 8); /*0x59081a*/
          v29 = 0; /*0x59082d*/
          if ( g_RandomMap_TileData <= 0 ) /*0x590831*/
          {
LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            v30 = (char *)g_RandomMap_TerrainState; /*0x590839*/
            while ( *(_DWORD *)(*(_DWORD *)v30 + 8) != v28 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_RandomMap_TileData ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + v29); /*0x590960*/
          }
          v32 = RandomMap::TerrainAlloc(v31); /*0x590857*/
          if ( v45 <= 0 ) /*0x59085f*/
            goto LABEL_66; /*0x59085f*/
          do /*0x590913*/
          {
            if ( v17 >= 100 ) /*0x590868*/
              break; /*0x590868*/
            v33 = v32[4] - 1; /*0x590879*/
            v48 = (unsigned int)v32[4]; /*0x59087d*/
            v50 = (double)v48; /*0x590885*/
            do /*0x5908b4*/
            {
              v49 = (unsigned int)Random::State(&g_Randomizer); /*0x590893*/
              v34 = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            v41 = *(_DWORD *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v41, 1) ) /*0x5908cc*/
            {
              v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += (unsigned __int8)RandomMap::CheckCellPlacement((int)&v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
LABEL_66:
            *(_BYTE *)(this + 27) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (__thiscall **)(_DWORD *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_RandomMap_TileData; /*0x590935*/
          v23 = this; /*0x59093b*/
          v17 = 0; /*0x59093f*/
        }
        v16 = *(_DWORD *)(v23 + 4); /*0x590941*/
        v2 = v42 + 1; /*0x590948*/
        v35 = *(_DWORD *)(v16 + 16); /*0x590949*/
        v42 = v2; /*0x59094c*/
      }
      while ( v2 < v35 ); /*0x590952*/
    }
  }
  return v2; /*0x590723*/
}


// ==== 0x00590970  RandomMap::CheckCellPlacement  this=DynamicVector  sig=csp ====
char __thiscall RandomMap::CheckCellPlacement(_DWORD *this, __int16 *a1, void *a2, DynamicVector *aP3)
{
  __int16 *v4; // esi
  void *v5; // edi
  DynamicVector *v7; // ebx
  char v9; // cl
  __int16 v10; // ax
  __int16 v11; // cx
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // ax
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int16 v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int16 v24; // cx
  __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int16 v28; // cx
  __int16 v29; // ax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int16 v32; // dx
  __int16 v33; // cx
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // ax
  __int16 v37; // ax
  __int16 v38; // si
  _BYTE v39[5]; // [esp+13h] [ebp-Dh] BYREF
  __int64 v40; // [esp+18h] [ebp-8h]

  v4 = a1; /*0x59097a*/
  v5 = a2; /*0x59097f*/
  v39[0] = 1; /*0x59098f*/
  v7 = (DynamicVector *)RandomMap::CheckNeighborhoodCompatibility(this, a1, (DynamicVector *)v39, (int)a2, aP3); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  v9 = 0; /*0x5909af*/
  if ( v7 == (DynamicVector *)255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( ((unsigned __int8)v7 & 0x82) != 0x82 || ((unsigned __int8)v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(_WORD *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  LOWORD(a1) = v10 + 5; /*0x5909e9*/
  *(_WORD *)&v39[3] = v11 - 5; /*0x5909f5*/
  HIWORD(a1) = v11 + 1; /*0x5909fa*/
  if ( ((unsigned __int8)v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(_WORD *)&v39[3]; /*0x590a01*/
  if ( ((unsigned __int8)v7 & 4) != 0 ) /*0x590a09*/
    LOWORD(a1) = (_WORD)a1 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
LABEL_86:
    if ( ((unsigned __int8)v7 & 0xA) != 0xA || ((unsigned __int8)v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(_WORD *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    LOWORD(a1) = v12 - 1; /*0x590a4b*/
    *(_WORD *)&v39[3] = v13 - 1; /*0x590a59*/
    HIWORD(a1) = v13 + 5; /*0x590a5e*/
    if ( ((unsigned __int8)v7 & 0x10) != 0 ) /*0x590a63*/
      --HIWORD(a1); /*0x590a65*/
    if ( ((unsigned __int8)v7 & 1) != 0 ) /*0x590a6d*/
      --*(_WORD *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
LABEL_87:
      if ( ((unsigned __int8)v7 & 0x28) != 0x28 || ((unsigned __int8)v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(_WORD *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      LOWORD(a1) = v14 - 5; /*0x590ab1*/
      *(_WORD *)&v39[3] = v15 + 5; /*0x590abd*/
      HIWORD(a1) = v15 - 1; /*0x590ac2*/
      if ( ((unsigned __int8)v7 & 0x40) != 0 ) /*0x590ac7*/
        LOWORD(a1) = (_WORD)a1 - 1; /*0x590ac9*/
      if ( ((unsigned __int8)v7 & 4) != 0 ) /*0x590ad1*/
        --*(_WORD *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
LABEL_88:
        if ( ((unsigned __int8)v7 & 0xA0) != 0xA0 || ((unsigned __int8)v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(_WORD *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        LOWORD(a1) = v16 + 1; /*0x590b16*/
        *(_WORD *)&v39[3] = v17 + 1; /*0x590b24*/
        HIWORD(a1) = v17 - 5; /*0x590b29*/
        if ( ((unsigned __int8)v7 & 1) != 0 ) /*0x590b2e*/
          ++HIWORD(a1); /*0x590b30*/
        if ( ((unsigned __int8)v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(_WORD *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
LABEL_89:
          if ( ((unsigned __int8)v7 & 0x70) != 0 || ((unsigned __int8)v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(_WORD *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(_WORD *)&v39[3] = v18 - 4; /*0x590b84*/
          LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590b89*/
          HIWORD(a1) = v18 + 4; /*0x590b8e*/
          if ( (char)v7 < 0 ) /*0x590b93*/
          {
            ++*(_WORD *)&v39[3]; /*0x590b95*/
            ++HIWORD(a1); /*0x590b9a*/
          }
          if ( ((unsigned __int8)v7 & 8) != 0 ) /*0x590ba2*/
          {
            --HIWORD(a1); /*0x590ba4*/
            --*(_WORD *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590bb8*/
            v19 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(_WORD *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590be7*/
            v20 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          LOWORD(a1) = v20 + (_WORD)a1; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
LABEL_90:
            if ( ((unsigned __int8)v7 & 7) != 0 || ((unsigned __int8)v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(_WORD *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(_WORD *)&v39[3] = v21 + 4; /*0x590c51*/
            LOWORD(a1) = *(_WORD *)&v39[1]; /*0x590c56*/
            HIWORD(a1) = v21 - 4; /*0x590c5b*/
            if ( (char)v7 < 0 ) /*0x590c60*/
            {
              ++HIWORD(a1); /*0x590c62*/
              ++*(_WORD *)&v39[3]; /*0x590c67*/
            }
            if ( ((unsigned __int8)v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(_WORD *)&v39[3]; /*0x590c71*/
              --HIWORD(a1); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590c85*/
              v22 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(_WORD *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590cb5*/
              v23 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            LOWORD(a1) = v23 - 1 + (_WORD)a1; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
LABEL_91:
              if ( ((unsigned __int8)v7 & 0xC1) != 0 || ((unsigned __int8)v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(_WORD *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(_WORD *)&v39[3] = v25; /*0x590d20*/
              LOWORD(a1) = v24 - 4; /*0x590d25*/
              HIWORD(a1) = v25; /*0x590d2a*/
              if ( ((unsigned __int8)v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                LOWORD(a1) = (_WORD)a1 + 1; /*0x590d31*/
                ++*(_WORD *)&v39[1]; /*0x590d36*/
              }
              if ( ((unsigned __int8)v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(_WORD *)&v39[1]; /*0x590d40*/
                LOWORD(a1) = (_WORD)a1 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d54*/
                v26 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(_WORD *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590d83*/
                v27 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              HIWORD(a1) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
LABEL_64:
                if ( ((unsigned __int8)v7 & 0x1C) == 0 && ((unsigned __int8)v7 & 0x22) != 0 ) /*0x590dd0*/
                {
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(_WORD *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(_WORD *)&v39[3] = v29; /*0x590ded*/
                  LOWORD(a1) = v28 + 4; /*0x590df2*/
                  HIWORD(a1) = v29; /*0x590df7*/
                  if ( ((unsigned __int8)v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(_WORD *)&v39[1]; /*0x590dfe*/
                    LOWORD(a1) = (_WORD)a1 + 1; /*0x590e03*/
                  }
                  if ( ((unsigned __int8)v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    LOWORD(a1) = (_WORD)a1 - 1; /*0x590e0d*/
                    --*(_WORD *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e21*/
                    v30 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(_WORD *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State(&g_Randomizer); /*0x590e51*/
                    v31 = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  HIWORD(a1) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock(this, (__int16 *)&v39[1], (__int16 *)&a1, v5); /*0x590e89*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *(float *)&aP3 > 0.5 && !v9 ) /*0x590ea2*/
  {
    if ( ((unsigned __int8)v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          HIWORD(a1) = v4[1] + 1,
          HIWORD(aP3) = HIWORD(a1),
          LOWORD(aP3) = v33,
          LOWORD(a1) = v32,
          (v9 = MapSeed::PlaceCityBlock(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
    {
      if ( ((unsigned __int8)v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            LOWORD(a1) = *v4 + 1,
            LOWORD(aP3) = (_WORD)a1,
            HIWORD(aP3) = v34 - 4,
            HIWORD(a1) = v34 + 4,
            (v9 = PlaceMapSeedCityArea(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
      {
        if ( ((unsigned __int8)v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              LOWORD(a1) = *v4 + 4,
              v36 = v4[1] - 1,
              LOWORD(aP3) = v35,
              HIWORD(a1) = v36,
              HIWORD(aP3) = v36,
              (v9 = MapSeed::PlaceCityBuildings(this, (__int16 *)&a1, (__int16 *)&aP3, a2)) == 0) )
        {
          if ( ((unsigned __int8)v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            LOWORD(a1) = v37 - 1; /*0x590f92*/
            LOWORD(aP3) = v37 - 1; /*0x590f97*/
            HIWORD(a1) = v38 - 4; /*0x590f9c*/
            HIWORD(aP3) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea(this, (__int16 *)&a1, (__int16 *)&aP3, a2); /*0x590fbb*/
          }
        }
      }
    }
  }
  return v9; /*0x5909a3*/
}


// ==== 0x00590FD0  RandomMap::CheckNeighborhoodCompatibility  this=DynamicVector  sig=csp ====
int __thiscall RandomMap::CheckNeighborhoodCompatibility(
        int *this,
        _WORD *a1,
        DynamicVector *aP2,
        int a4,
        DynamicVector *aP4)
{
  __int16 v6; // cx
  DynamicVector *v7; // ebx
  int v8; // edx
  int v10; // esi
  int v11; // edi
  DynamicVector *v12; // ebx
  int v13; // edx
  int v14; // [esp+0h] [ebp-18h]
  DynamicVector *v15; // [esp+4h] [ebp-14h]
  DynamicVector *v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]
  DynamicVector *a1a; // [esp+1Ch] [ebp+4h]
  int aP4a; // [esp+28h] [ebp+10h]

  v15 = (DynamicVector *)Math::RoundToInt((15.0 - 5.0) * (1.0 - *(float *)&aP4) + 5.0); /*0x591000*/
  v6 = a1[1] - 2; /*0x591010*/
  v7 = (DynamicVector *)(__int16)(*a1 - 2); /*0x591014*/
  v8 = this->DynamicVector_field_0x8; /*0x59101a*/
  v14 = v6; /*0x59101d*/
  v17 = v6; /*0x591021*/
  v18 = 5; /*0x59102a*/
  v19 = 5; /*0x59102e*/
  a1a = v7; /*0x59103b*/
  v16 = v7; /*0x59103f*/
  if ( Map_Check((__int16 *)&v16, v8, a4, (int)v15) ) /*0x591043*/
  {
    v10 = 0; /*0x59105d*/
    aP4a = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      v11 = 0; /*0x59106a*/
      v12 = (DynamicVector *)((char *)v7 - 5); /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v10 != 1 || v11 != 1 ) /*0x591076*/
        {
          v16 = v12; /*0x59107c*/
          v13 = this->DynamicVector_field_0x8; /*0x591088*/
          v18 = 5; /*0x591094*/
          v19 = 5; /*0x591098*/
          v17 = v10 + v14 + 4 * v10 - 5; /*0x5910a0*/
          if ( Map_Check((__int16 *)&v16, v13, a4, (int)v15) ) /*0x5910a9*/
            aP4a |= dword_82AF18[2 * v10 + v11 + v10]; /*0x5910c6*/
        }
        ++v11; /*0x5910ca*/
        v12 = (DynamicVector *)((char *)v12 + 5); /*0x5910cb*/
      }
      while ( v11 < 3 ); /*0x5910d1*/
      if ( ++v10 >= 3 ) /*0x5910d7*/
        break; /*0x5910d7*/
      v7 = a1a; /*0x591066*/
    }
    return aP4a; /*0x5910d9*/
  }
  else
  {
    aP2->__pad_0[0] = 0; /*0x591052*/
    return 0; /*0x591054*/
  }
}


// ==== 0x005910F0  MapSeed::PlaceCityBlock  this=MapSeed  sig=csp ====
char __thiscall MapSeed_PlaceCityBlock(_DWORD *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebx
  __int16 v5; // dx
  __int16 v7; // ax
  __int16 v8; // bp
  __int16 v9; // si
  int v10; // eax
  char result; // al
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // kr00_4
  int v16; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  _BYTE *v24; // ecx
  int v25; // eax
  int v26; // ebx
  _BYTE *v27; // ebp
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // eax
  _BYTE *v33; // eax
  int v34; // ebp
  int v35; // ebx
  _BYTE *v36; // eax
  __int16 v37; // ax
  int v38; // eax
  int v39; // ebp
  unsigned int v40; // eax
  BOOL v41; // ecx
  int v42; // eax
  __int16 v43; // bp
  char *v44; // esi
  int v45; // ebx
  __int16 v46; // dx
  _BYTE *v47; // eax
  char v48; // cl
  unsigned __int8 v49; // cl
  int v50; // edx
  int v51; // esi
  __int16 v52; // bp
  int i; // ebx
  __int16 v54; // cx
  __int16 v55; // cx
  _BYTE *v56; // eax
  char v57; // dl
  int v59; // [esp+14h] [ebp-58h] BYREF
  int v60; // [esp+18h] [ebp-54h]
  int v61; // [esp+1Ch] [ebp-50h]
  int v62; // [esp+20h] [ebp-4Ch]
  _BYTE *v63; // [esp+24h] [ebp-48h]
  int v64; // [esp+28h] [ebp-44h] BYREF
  int v65; // [esp+30h] [ebp-3Ch] BYREF
  __int16 v66; // [esp+34h] [ebp-38h]
  __int16 v67; // [esp+36h] [ebp-36h]
  __int16 v68; // [esp+3Ch] [ebp-30h]
  __int16 v69; // [esp+3Eh] [ebp-2Eh]
  __int16 v70; // [esp+44h] [ebp-28h]
  __int16 v71; // [esp+46h] [ebp-26h]
  __int64 v72; // [esp+4Ch] [ebp-20h]
  int v73; // [esp+58h] [ebp-14h]
  int v74; // [esp+5Ch] [ebp-10h] BYREF
  int v75; // [esp+60h] [ebp-Ch]
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  int v78; // [esp+70h] [ebp+4h]

  v4 = a3; /*0x5910f4*/
  v5 = a3[1]; /*0x5910fa*/
  v7 = a2[1]; /*0x591107*/
  v8 = v7; /*0x59110e*/
  if ( v7 <= v5 ) /*0x591110*/
    v8 = a3[1]; /*0x591112*/
  v9 = a2[1]; /*0x591117*/
  if ( v7 < v5 ) /*0x591119*/
    v5 = a2[1]; /*0x591122*/
  else
    v9 = a3[1]; /*0x59111b*/
  v10 = *a2; /*0x591124*/
  v74 = v10 - 5; /*0x591130*/
  v75 = v5 - 3; /*0x591134*/
  v76 = *a3 - v10 + 9; /*0x591148*/
  v77 = v8 - v9 + 11; /*0x59115d*/
  result = BuildingTypeClass::CheckPlacementArea(this, &v74, (int)a4); /*0x591161*/
  if ( result )
  {
    v12 = a2[1]; /*0x591174*/
    v65 = a3[1] - v12; /*0x59117e*/
    v13 = *a3 - *a2; /*0x59118f*/
    v78 = abs32(v65); /*0x591191*/
    if ( v78 <= v13 - 5 )
    {
      v14 = v77; /*0x5911a8*/
      v15 = v13 + 1; /*0x5911b2*/
      LODWORD(v72) = v74; /*0x5911b8*/
      v16 = (v13 + 1) / 2 + 3; /*0x5911cb*/
      v64 = v16; /*0x5911d0*/
      v60 = v12 + 1; /*0x5911d6*/
      v62 = v77 + v75 + 2; /*0x5911da*/
      if ( v12 + 1 < v62 ) /*0x5911de*/
      {
        v61 = v74 + v16 + 2; /*0x5911ec*/
        do /*0x59126a*/
        {
          v17 = v72; /*0x5911f0*/
          if ( (int)v72 < v61 ) /*0x5911fa*/
          {
            do /*0x591255*/
            {
              LOWORD(v59) = v17; /*0x591205*/
              HIWORD(v59) = v60; /*0x59120a*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v59) ) /*0x59120f*/
              {
                SetLayerDataMap((__int16 *)&v59, (int)a4); /*0x591220*/
                v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v59); /*0x591238*/
                v18 = List::FindByValue(a4); /*0x59123c*/
                v63[283] = *(_BYTE *)(v18 + 16); /*0x591248*/
              }
              ++v17; /*0x591252*/
            }
            while ( v17 < v61 ); /*0x591255*/
            v14 = v77; /*0x591257*/
          }
          ++v60; /*0x591266*/
        }
        while ( v60 < v62 ); /*0x59126a*/
      }
      v19 = a3[1]; /*0x59126c*/
      v20 = v19 + 1; /*0x591273*/
      v21 = v14 - v19; /*0x591276*/
      v22 = v75; /*0x591278*/
      v23 = *a3 - v15 / 2; /*0x59127e*/
      v60 = v20; /*0x591281*/
      v73 = v21 + v75 + 1; /*0x591289*/
      v24 = (_BYTE *)(v20 + v73); /*0x59128d*/
      v63 = (_BYTE *)(v20 + v73); /*0x591291*/
      if ( v20 < v20 + v73 ) /*0x591295*/
      {
        v25 = v23 + v16 + 2; /*0x591297*/
        do /*0x591309*/
        {
          v26 = v23; /*0x59129d*/
          if ( v23 < v25 ) /*0x59129f*/
          {
            do /*0x5912f8*/
            {
              LOWORD(v59) = v26; /*0x5912aa*/
              HIWORD(v59) = v60; /*0x5912af*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v59) ) /*0x5912b4*/
              {
                SetLayerDataMap((__int16 *)&v59, (int)a4); /*0x5912c5*/
                v27 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v59); /*0x5912dd*/
                v27[283] = *(_BYTE *)(List::FindByValue(a4) + 16); /*0x5912e7*/
                v16 = v64; /*0x5912ed*/
              }
              ++v26; /*0x5912f1*/
              v25 = v23 + v16 + 2; /*0x5912f2*/
            }
            while ( v26 < v25 ); /*0x5912f8*/
            v24 = v63; /*0x5912fa*/
          }
          ++v60; /*0x591305*/
        }
        while ( v60 < (int)v24 ); /*0x591309*/
        v4 = a3; /*0x59130b*/
        v22 = v75; /*0x59130f*/
      }
      v60 = v22 + 2; /*0x59131a*/
      v28 = v74 + 4; /*0x59131e*/
      v29 = a2[1] - v22; /*0x591325*/
      LODWORD(v72) = v74 + 4; /*0x591327*/
      v30 = v22 + 2 + v29 - 1; /*0x59132c*/
      v64 = v30; /*0x591330*/
      if ( v22 + 2 < v30 ) /*0x591334*/
      {
        do /*0x5913a6*/
        {
          if ( v28 < v28 + v16 - 2 ) /*0x59133c*/
          {
            do /*0x591391*/
            {
              LOWORD(v59) = v28; /*0x591343*/
              HIWORD(v59) = v60; /*0x591348*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v59) ) /*0x591351*/
              {
                SetLayerDataMap((__int16 *)&v59, this->MapSeed_field_0x08); /*0x591365*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v59) + 283) = this->MapSeed_field_0x10; /*0x591380*/
              }
              ++v28; /*0x59138a*/
            }
            while ( v28 < (int)v72 + v16 - 2 ); /*0x591391*/
            v30 = v64; /*0x591393*/
            v28 = v72; /*0x591397*/
          }
          ++v60; /*0x5913a2*/
        }
        while ( v60 < v30 ); /*0x5913a6*/
      }
      v31 = *v4 - v16 + 2; /*0x5913bb*/
      v32 = v4[1] - v75 - 1; /*0x5913c1*/
      v60 = v75 + 2; /*0x5913c2*/
      v33 = (_BYTE *)(v75 + 2 + v32); /*0x5913c6*/
      v63 = v33; /*0x5913ca*/
      if ( v75 + 2 < (int)v33 ) /*0x5913ce*/
      {
        v34 = v31 + v16 - 1; /*0x5913d0*/
        v64 = v34; /*0x5913d4*/
        do /*0x59143a*/
        {
          v35 = v31; /*0x5913da*/
          if ( v31 < v34 ) /*0x5913dc*/
          {
            do /*0x591429*/
            {
              LOWORD(v59) = v35; /*0x5913e7*/
              HIWORD(v59) = v60; /*0x5913ec*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v59) ) /*0x5913f1*/
              {
                SetLayerDataMap((__int16 *)&v59, this->MapSeed_field_0x08); /*0x591405*/
                v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v59); /*0x591414*/
                v34 = v64; /*0x59141c*/
                v36[283] = this->MapSeed_field_0x10; /*0x591420*/
              }
              ++v35; /*0x591426*/
            }
            while ( v35 < v34 ); /*0x591429*/
            v33 = v63; /*0x59142b*/
          }
          ++v60; /*0x591436*/
        }
        while ( v60 < (int)v33 ); /*0x59143a*/
        v4 = a3; /*0x59143c*/
      }
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2, a2, (int)a4, this->MapSeed_field_0x10); /*0x591455*/
      v37 = *v4 - 2; /*0x591461*/
      HIWORD(v61) = v4[1]; /*0x591465*/
      LOWORD(v61) = v37; /*0x591470*/
      v38 = this->MapSeed_field_0x10; /*0x591479*/
      v64 = v61; /*0x59147c*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &v64, (int)a4, v38); /*0x591487*/
      v39 = v65; /*0x59148c*/
      v64 = 0; /*0x591494*/
      if ( v65 )
      {
        do /*0x5914ce*/
        {
          v72 = (unsigned int)Random::State(&g_Randomizer); /*0x5914ae*/
          v40 = Math::RoundToInt((double)v72 * 4.656612874161595e-10); /*0x5914c4*/
        }
        while ( v40 > 1 ); /*0x5914ce*/
        v66 = 0; /*0x5914d2*/
        v41 = v39 > 0; /*0x5914db*/
        v61 = v41; /*0x5914e0*/
        v67 = (v39 >= 0) - 1; /*0x5914ed*/
        if ( v40 == 1 ) /*0x5914f2*/
        {
          HIWORD(v64) = v39; /*0x5914f9*/
          LOWORD(v64) = v78; /*0x5914fe*/
        }
        else
        {
          v66 = *v4 - v78 - *a2 - 5; /*0x591513*/
        }
        v42 = 0; /*0x59151c*/
        v59 = 0; /*0x591520*/
        if ( v78 > 0 )
        {
          v60 = 0; /*0x59152a*/
          while ( 1 )
          {
            v43 = 0; /*0x59153b*/
            v44 = (char *)&unk_82AF3C; /*0x59153d*/
            v45 = 20 * v41 + 8564560; /*0x591542*/
            while ( 1 )
            {
              v62 = v41 ? v42 : v60;
              v46 = *a2 + 3; /*0x591568*/
              v69 = a2[1]; /*0x59156c*/
              v68 = v46; /*0x591571*/
              v70 = v42 + v46; /*0x591582*/
              v71 = v43 + v69; /*0x59158b*/
              LOWORD(v63) = v42 + v46 + v66; /*0x59159f*/
              WORD1(v72) = v67 + v43 + v69; /*0x5915a6*/
              HIWORD(v63) = v62 + WORD1(v72); /*0x5915ba*/
              v65 = (int)v63; /*0x5915c7*/
              v47 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v65); /*0x5915cc*/
              v48 = *v44; /*0x5915d5*/
              v44 += 4; /*0x5915d7*/
              v45 += 4; /*0x5915da*/
              v47[283] = this->MapSeed_field_0x10 + v48 - 4; /*0x5915e3*/
              v49 = *(_BYTE *)(v45 - 4); /*0x5915e9*/
              v47[284] = v49; /*0x5915ec*/
              v50 = g_CellTileLookup; /*0x5915f2*/
              ++v43; /*0x5915fe*/
              v47[282] = 0; /*0x5915ff*/
              *((_DWORD *)v47 + 14) = v49 + v50 - 1; /*0x591610*/
              v42 = v59; /*0x591613*/
              if ( (int)v44 >= (int)byte_82AF50 ) /*0x591617*/
                break; /*0x591617*/
              v41 = v61; /*0x59154b*/
            }
            ++v59; /*0x591629*/
            --v60; /*0x59162d*/
            if ( v59 >= v78 ) /*0x591631*/
              break; /*0x591631*/
            v42 = v59; /*0x591530*/
            v41 = v61; /*0x591534*/
          }
          v4 = a3; /*0x591637*/
        }
      }
      v51 = 0; /*0x591649*/
      if ( *v4 - *a2 - v78 - 5 > 0 ) /*0x591650*/
      {
        v52 = HIWORD(v64); /*0x591656*/
        do /*0x59172e*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59165a*/
          {
            v54 = *a2 + 3; /*0x591663*/
            v71 = a2[1]; /*0x591667*/
            v70 = v54; /*0x59166c*/
            v68 = v51 + v54; /*0x59167d*/
            v69 = i + v71; /*0x591686*/
            v55 = v51 + v54 + v64; /*0x59168f*/
            LOWORD(v63) = v68 + v64; /*0x591696*/
            HIWORD(v63) = i + v71 + v52; /*0x59169e*/
            v65 = (int)v63; /*0x5916a7*/
            if ( g_MapTileArray ) /*0x5916b3*/
              *((_DWORD *)g_MapTileArray + 20 * v55 + 20 * unk_89C2DC * (__int16)(i + v71 + v52) + 14) = a4; /*0x5916ce*/
            v56 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v65); /*0x5916dc*/
            v57 = this->MapSeed_field_0x10; /*0x5916e5*/
            v56[284] = 4; /*0x5916e8*/
            v56[283] = v57 - i - 1; /*0x5916f3*/
            *((_DWORD *)v56 + 14) = g_CellTileLookup + 3; /*0x591706*/
            v56[282] = 0; /*0x591709*/
          }
          ++v51; /*0x591726*/
        }
        while ( v51 < *a3 - *a2 - v78 - 5 ); /*0x59172e*/
      }
      return 1; /*0x591737*/
    }
    else
    {
      return 0; /*0x59119f*/
    }
  }
  return result; /*0x59116a*/
}


// ==== 0x00591740  ObjectClass::PlaceMapSeedCityArea  this=ObjectClass  sig=csp ====
char __thiscall MapSeedClass::PlaceCityArea(_DWORD *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebp
  __int16 v6; // ax
  __int16 v7; // bx
  __int16 v8; // si
  int v9; // eax
  char result; // al
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // kr00_4
  int v15; // esi
  int v16; // ebx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  _BYTE *v20; // ebx
  int v21; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  _BYTE *v25; // ebp
  int v26; // edx
  int v27; // ecx
  int v28; // ecx
  int v29; // ebp
  int v30; // ebx
  int v31; // ebx
  _BYTE *v32; // eax
  int v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ebp
  int v39; // esi
  _BYTE *v40; // eax
  __int16 v41; // ax
  int v42; // edx
  __int16 *v43; // ebp
  int v44; // esi
  int v45; // ebx
  unsigned int v46; // eax
  BOOL v47; // ecx
  __int16 v48; // ax
  __int16 v49; // bp
  char *v50; // esi
  int v51; // ebx
  bool v52; // zf
  __int16 v53; // cx
  __int16 v54; // dx
  _BYTE *v55; // eax
  char v56; // dl
  unsigned __int8 v57; // cl
  int v58; // edx
  bool v59; // cc
  int v60; // edx
  __int16 v61; // bp
  __int16 v62; // si
  __int16 v63; // ax
  __int16 v64; // ax
  _BYTE *v65; // eax
  char v66; // dl
  int v67; // edx
  int v69; // [esp+14h] [ebp-58h] BYREF
  int v70; // [esp+18h] [ebp-54h]
  int v71; // [esp+1Ch] [ebp-50h]
  int v72; // [esp+20h] [ebp-4Ch]
  int v73; // [esp+24h] [ebp-48h] BYREF
  int v74; // [esp+28h] [ebp-44h] BYREF
  int v75; // [esp+2Ch] [ebp-40h]
  int v76; // [esp+34h] [ebp-38h]
  __int16 v77; // [esp+3Ch] [ebp-30h]
  __int16 v78; // [esp+3Eh] [ebp-2Eh]
  __int16 v79; // [esp+44h] [ebp-28h]
  __int16 v80; // [esp+46h] [ebp-26h]
  __int64 v81; // [esp+4Ch] [ebp-20h]
  int v82; // [esp+5Ch] [ebp-10h] BYREF
  int v83; // [esp+60h] [ebp-Ch]
  int v84; // [esp+64h] [ebp-8h]
  int v85; // [esp+68h] [ebp-4h]
  int v86; // [esp+70h] [ebp+4h]

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
  v82 = v6 - 3; /*0x591779*/
  v9 = a3[1]; /*0x59177d*/
  v83 = v9 - 4; /*0x591784*/
  v85 = a2[1] - v9 + 9; /*0x5917a0*/
  v84 = v7 - v8 + 11; /*0x5917aa*/
  result = BuildingTypeClass::CheckPlacementArea(this, &v82, (int)a4); /*0x5917ae*/
  if ( result ) /*0x5917b5*/
  {
    v11 = *a2; /*0x5917c1*/
    v12 = a2[1]; /*0x5917ca*/
    v72 = *a3 - v11; /*0x5917ce*/
    v13 = v12 - a3[1]; /*0x5917df*/
    v86 = abs32(v72); /*0x5917e1*/
    if ( v86 <= v13 - 5 ) /*0x5917ea*/
    {
      v14 = v13 + 1; /*0x5917fa*/
      v15 = (v13 + 1) / 2 + 2; /*0x591800*/
      v16 = v11 + 1; /*0x591803*/
      LODWORD(v81) = v16; /*0x591806*/
      v70 = v12 - (v13 + 1) / 2; /*0x59180d*/
      v17 = v15 + v70 + 3; /*0x591811*/
      v73 = v17; /*0x591817*/
      if ( v70 < v17 ) /*0x59181b*/
      {
        v18 = v16 + 7; /*0x59181d*/
        do /*0x59188d*/
        {
          v19 = v16; /*0x591822*/
          if ( v16 < v18 ) /*0x591824*/
          {
            do /*0x59187c*/
            {
              LOWORD(v69) = v19; /*0x59182f*/
              HIWORD(v69) = v70; /*0x591834*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v69) ) /*0x591839*/
              {
                SetLayerDataMap((__int16 *)&v69, (int)a4); /*0x59184a*/
                v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x591862*/
                v20[283] = *(_BYTE *)(List::FindByValue(a4) + 16); /*0x59186c*/
                v16 = v81; /*0x591872*/
              }
              ++v19; /*0x591876*/
              v18 = v16 + 7; /*0x591877*/
            }
            while ( v19 < v16 + 7 ); /*0x59187c*/
            v17 = v73; /*0x59187e*/
          }
          ++v70; /*0x591889*/
        }
        while ( v70 < v17 ); /*0x59188d*/
        v4 = a3; /*0x59188f*/
      }
      v21 = *v4 + 1; /*0x59189b*/
      LODWORD(v81) = v21; /*0x59189c*/
      v70 = v83; /*0x5918a0*/
      v22 = v15 + v83 + 2; /*0x5918a4*/
      v73 = v22; /*0x5918aa*/
      if ( v83 < v22 ) /*0x5918ae*/
      {
        v23 = v21 + 7; /*0x5918b0*/
        do /*0x591920*/
        {
          v24 = v21; /*0x5918b5*/
          if ( v21 < v23 ) /*0x5918b7*/
          {
            do /*0x59190f*/
            {
              LOWORD(v69) = v24; /*0x5918c2*/
              HIWORD(v69) = v70; /*0x5918c7*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v69) ) /*0x5918cc*/
              {
                SetLayerDataMap((__int16 *)&v69, (int)a4); /*0x5918dd*/
                v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x5918f5*/
                v25[283] = *(_BYTE *)(List::FindByValue(a4) + 16); /*0x5918ff*/
                v21 = v81; /*0x591905*/
              }
              ++v24; /*0x591909*/
              v23 = v21 + 7; /*0x59190a*/
            }
            while ( v24 < v21 + 7 ); /*0x59190f*/
            v22 = v73; /*0x591911*/
          }
          ++v70; /*0x59191c*/
        }
        while ( v70 < v22 ); /*0x591920*/
      }
      v26 = v82; /*0x591922*/
      v27 = *a2 - v82; /*0x59192c*/
      LODWORD(v81) = v82 + 2; /*0x59192e*/
      v28 = v27 - 1; /*0x59193b*/
      v30 = a2[1] + 1; /*0x59193e*/
      v71 = a2[1] - v14 / 2; /*0x591942*/
      v29 = v71; /*0x59193c*/
      v73 = v30; /*0x591948*/
      if ( v71 < v30 ) /*0x59194c*/
      {
        v31 = v81; /*0x59194e*/
        v70 = v81 + v28; /*0x591954*/
        do /*0x5919bd*/
        {
          if ( v31 < v70 ) /*0x59195c*/
          {
            do /*0x5919a8*/
            {
              LOWORD(v69) = v31; /*0x591962*/
              HIWORD(v69) = v29; /*0x591967*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v69) ) /*0x59196c*/
              {
                SetLayerDataMap((__int16 *)&v69, this->vtable3); /*0x591980*/
                v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x59198f*/
                v29 = v71; /*0x591997*/
                v32[283] = this->q040; /*0x59199b*/
              }
              ++v31; /*0x5919a5*/
            }
            while ( v31 < v70 ); /*0x5919a8*/
            v26 = v82; /*0x5919aa*/
            v31 = v81; /*0x5919ae*/
          }
          v71 = ++v29; /*0x5919b9*/
        }
        while ( v29 < v73 ); /*0x5919bd*/
      }
      v33 = v26 + 2; /*0x5919c3*/
      LODWORD(v81) = v26 + 2; /*0x5919c6*/
      v34 = a3[1]; /*0x5919ca*/
      v35 = *a3 - v26; /*0x5919d1*/
      v36 = v14 / 2 + v34; /*0x5919d3*/
      v37 = v35 - 1; /*0x5919d7*/
      v38 = v34; /*0x5919da*/
      v73 = v36; /*0x5919dc*/
      if ( v34 < v36 ) /*0x5919e0*/
      {
        v71 = v33 + v37; /*0x5919e4*/
        do /*0x591a45*/
        {
          v39 = v33; /*0x5919ec*/
          if ( v33 < v71 ) /*0x5919f0*/
          {
            do /*0x591a3c*/
            {
              LOWORD(v69) = v39; /*0x5919f6*/
              HIWORD(v69) = v38; /*0x5919fb*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v69) ) /*0x591a00*/
              {
                SetLayerDataMap((__int16 *)&v69, this->vtable3); /*0x591a14*/
                v40 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x591a23*/
                v33 = v81; /*0x591a2b*/
                v40[283] = this->q040; /*0x591a2f*/
              }
              ++v39; /*0x591a39*/
            }
            while ( v39 < v71 ); /*0x591a3c*/
            v36 = v73; /*0x591a3e*/
          }
          ++v38; /*0x591a42*/
        }
        while ( v38 < v36 ); /*0x591a45*/
      }
      v41 = a2[1] - 2; /*0x591a56*/
      LOWORD(v71) = *a2; /*0x591a5a*/
      v42 = this->uniqueId; /*0x591a5f*/
      HIWORD(v71) = v41; /*0x591a62*/
      v73 = v71; /*0x591a70*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &v73, (int)a4, v42); /*0x591a7d*/
      v43 = a3; /*0x591a8a*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, a3, (int)a4, this->uniqueId); /*0x591a95*/
      v44 = v72; /*0x591a9a*/
      v45 = 0; /*0x591a9e*/
      v76 = 0; /*0x591aa2*/
      if ( v72 ) /*0x591aac*/
      {
        do /*0x591ad6*/
        {
          v81 = (unsigned int)Random::State(&g_Randomizer); /*0x591abc*/
          v46 = Math::RoundToInt((double)v81 * 4.656612874161595e-10); /*0x591ace*/
        }
        while ( v46 > 1 ); /*0x591ad6*/
        v47 = v44 > 0; /*0x591adc*/
        v71 = v47; /*0x591aea*/
        v75 = (unsigned __int16)((v44 >= 0) - 1); /*0x591aee*/
        if ( v46 == 1 ) /*0x591af8*/
        {
          LOWORD(v76) = v44; /*0x591afe*/
          HIWORD(v76) = -(__int16)v86; /*0x591b05*/
        }
        else
        {
          v48 = a2[1]; /*0x591b0c*/
          LOWORD(v75) = (v44 >= 0) - 1; /*0x591b10*/
          v80 = v48 - v86 - a3[1] - 5; /*0x591b21*/
          HIWORD(v75) = -v80; /*0x591b2c*/
        }
        v69 = 0; /*0x591b35*/
        if ( v86 > 0 ) /*0x591b3b*/
        {
          v70 = 0; /*0x591b41*/
          while ( 1 ) /*0x591b51*/
          {
            v49 = 0; /*0x591b51*/
            v50 = (char *)&unk_82AF78; /*0x591b56*/
            WORD1(v81) = -(__int16)v69; /*0x591b5d*/
            v51 = 20 * v47 + 8564620; /*0x591b62*/
            while ( 1 ) /*0x591b6f*/
            {
              v52 = !v47; /*0x591b6f*/
              v53 = v69; /*0x591b71*/
              if ( v52 ) /*0x591b75*/
                v53 = v70; /*0x591b77*/
              v54 = a2[1] - 3; /*0x591b82*/
              v77 = *a2; /*0x591b86*/
              v78 = v54; /*0x591b8b*/
              v79 = v49 + v77; /*0x591b9a*/
              v80 = WORD1(v81) + v54; /*0x591ba9*/
              LOWORD(v72) = v75 + v49 + v77; /*0x591bb8*/
              HIWORD(v72) = WORD1(v81) + v54 + HIWORD(v75); /*0x591bc3*/
              LOWORD(v73) = v53 + v72; /*0x591bd2*/
              HIWORD(v73) = HIWORD(v72); /*0x591bd7*/
              v74 = v73; /*0x591be6*/
              v55 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v74); /*0x591bea*/
              v56 = *v50; /*0x591bf3*/
              v50 += 4; /*0x591bf5*/
              v51 += 4; /*0x591bf8*/
              v55[283] = this->q040 + v56 - 4; /*0x591c01*/
              v57 = *(_BYTE *)(v51 - 4); /*0x591c07*/
              v55[284] = v57; /*0x591c0a*/
              v58 = g_CellTileLookup; /*0x591c10*/
              ++v49; /*0x591c1c*/
              v55[282] = 0; /*0x591c23*/
              *((_DWORD *)v55 + 14) = v57 + v58 - 1; /*0x591c2e*/
              if ( (int)v50 >= (int)byte_82AF8C ) /*0x591c31*/
                break; /*0x591c31*/
              v47 = v71; /*0x591b6b*/
            }
            v59 = ++v69 < v86; /*0x591c45*/
            --v70; /*0x591c4b*/
            if ( !v59 ) /*0x591c4f*/
              break; /*0x591c4f*/
            v47 = v71; /*0x591b47*/
          }
          v43 = a3; /*0x591c55*/
          v45 = 0; /*0x591c59*/
        }
      }
      v60 = a2[1] - v43[1] - v86; /*0x591c69*/
      v70 = 0; /*0x591c6b*/
      if ( v60 - 5 > 0 ) /*0x591c74*/
      {
        v61 = HIWORD(v76); /*0x591c7a*/
        while ( 1 ) /*0x591c88*/
        {
          WORD1(v81) = -(__int16)v70; /*0x591c88*/
          v62 = -(__int16)v70; /*0x591c8d*/
          do /*0x591d44*/
          {
            v63 = a2[1] - 3; /*0x591c98*/
            v79 = *a2; /*0x591c9c*/
            v80 = v63; /*0x591ca1*/
            v77 = v45 + v79; /*0x591cb2*/
            v78 = v62 + v63; /*0x591cbb*/
            v64 = v62 + v63 + v61; /*0x591cca*/
            LOWORD(v73) = v45 + v79 + v76; /*0x591ccd*/
            HIWORD(v73) = v78 + v61; /*0x591cd2*/
            v74 = v73; /*0x591cdb*/
            if ( g_MapTileArray ) /*0x591ce7*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)(v45 + v79 + v76) + 20 * unk_89C2DC * v64 + 14) = a4; /*0x591d02*/
            v65 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v74); /*0x591d10*/
            v66 = this->q040; /*0x591d19*/
            v65[284] = 3; /*0x591d1c*/
            v65[283] = v66 - v45++ - 1; /*0x591d27*/
            *((_DWORD *)v65 + 14) = g_CellTileLookup + 2; /*0x591d3a*/
            v65[282] = 0; /*0x591d3d*/
          }
          while ( v45 < 4 ); /*0x591d44*/
          v67 = a2[1] - a3[1] - v86 - 5; /*0x591d63*/
          if ( ++v70 >= v67 ) /*0x591d6c*/
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


// ==== 0x00591D80  MapSeed::PlaceCityBuildings  this=MapSeed  sig=csp ====
char __thiscall sub_591D80(_DWORD *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebx
  __int16 v5; // ax
  __int16 v7; // bp
  __int16 v8; // dx
  __int16 v9; // si
  int v10; // eax
  char result; // al
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // kr00_4
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  _BYTE *v21; // edx
  int v22; // ecx
  int v23; // ebx
  _BYTE *v24; // ebp
  int v25; // edx
  int v26; // ebx
  int v27; // ecx
  int v28; // esi
  _BYTE *v29; // eax
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  int v33; // ebp
  int v34; // ebx
  _BYTE *v35; // eax
  __int16 v36; // ax
  int v37; // edx
  __int16 v38; // dx
  int v39; // ecx
  __int16 v40; // dx
  int v41; // ecx
  int v42; // esi
  unsigned int v43; // eax
  BOOL v44; // ecx
  int v45; // eax
  __int16 v46; // bp
  char *v47; // esi
  int v48; // ebx
  __int16 v49; // cx
  _BYTE *v50; // eax
  char v51; // cl
  unsigned __int8 v52; // cl
  int v53; // edx
  int v54; // esi
  __int16 v55; // bp
  int i; // ebx
  __int16 v57; // ax
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // dl
  int v63; // [esp+14h] [ebp-60h] BYREF
  int v64; // [esp+18h] [ebp-5Ch]
  int v65; // [esp+1Ch] [ebp-58h]
  int v66; // [esp+20h] [ebp-54h]
  _BYTE *v67; // [esp+24h] [ebp-50h]
  _DWORD v68[2]; // [esp+28h] [ebp-4Ch] BYREF
  int v69; // [esp+30h] [ebp-44h] BYREF
  __int16 v70; // [esp+34h] [ebp-40h]
  _BOOL2 v71; // [esp+36h] [ebp-3Eh]
  __int16 v72; // [esp+3Ch] [ebp-38h]
  __int16 v73; // [esp+3Eh] [ebp-36h]
  __int16 v74; // [esp+44h] [ebp-30h]
  __int16 v75; // [esp+46h] [ebp-2Eh]
  int v76; // [esp+4Eh] [ebp-26h]
  __int64 v77; // [esp+54h] [ebp-20h]
  int v78; // [esp+64h] [ebp-10h] BYREF
  int v79; // [esp+68h] [ebp-Ch]
  int v80; // [esp+6Ch] [ebp-8h]
  int v81; // [esp+70h] [ebp-4h]
  int v82; // [esp+7Ch] [ebp+8h]

  v4 = a2; /*0x591d84*/
  v5 = a2[1]; /*0x591d8a*/
  v7 = v5; /*0x591d97*/
  v8 = a3[1]; /*0x591d99*/
  if ( v5 <= v8 ) /*0x591da0*/
    v7 = a3[1]; /*0x591da2*/
  v9 = a2[1]; /*0x591da7*/
  if ( v5 < v8 ) /*0x591da9*/
    v8 = a2[1]; /*0x591db2*/
  else
    v9 = a3[1]; /*0x591dab*/
  v10 = *a3; /*0x591db4*/
  v78 = v10 - 4; /*0x591dc0*/
  v79 = v8 - 7; /*0x591dc4*/
  v80 = *a2 - v10 + 8; /*0x591dd8*/
  v81 = v7 - v9 + 11; /*0x591df0*/
  result = BuildingTypeClass::CheckPlacementArea(this, &v78, (int)a4); /*0x591df4*/
  if ( result )
  {
    v12 = a3[1]; /*0x591e07*/
    v69 = v12 - a2[1]; /*0x591e13*/
    v13 = *a2 - *a3; /*0x591e24*/
    v82 = abs32(v69); /*0x591e26*/
    if ( v82 <= v13 - 5 )
    {
      v14 = v78; /*0x591e3e*/
      LODWORD(v77) = v78; /*0x591e45*/
      v15 = v13 + 1; /*0x591e49*/
      v16 = v79; /*0x591e4b*/
      v64 = v79; /*0x591e51*/
      v17 = v15 / 2 + 3; /*0x591e59*/
      v68[0] = v17; /*0x591e5e*/
      v66 = v12; /*0x591e62*/
      if ( v79 < v12 ) /*0x591e66*/
      {
        v65 = v78 + v17 + 2; /*0x591e70*/
        do /*0x591ef2*/
        {
          if ( v14 < v65 ) /*0x591e78*/
          {
            do /*0x591ed9*/
            {
              LOWORD(v63) = v14; /*0x591e83*/
              HIWORD(v63) = v64; /*0x591e88*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v63) ) /*0x591e8d*/
              {
                SetLayerDataMap((__int16 *)&v63, (int)a4); /*0x591ea1*/
                v67 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v63); /*0x591ebc*/
                v18 = List::FindByValue(a4); /*0x591ec0*/
                v67[283] = *(_BYTE *)(v18 + 16); /*0x591ecc*/
              }
              ++v14; /*0x591ed6*/
            }
            while ( v14 < v65 ); /*0x591ed9*/
            v16 = v79; /*0x591edb*/
            v14 = v77; /*0x591edf*/
          }
          ++v64; /*0x591eee*/
        }
        while ( v64 < v66 ); /*0x591ef2*/
      }
      v19 = a2[1] - v16; /*0x591efb*/
      v20 = *a2 - v17 + 2; /*0x591eff*/
      v64 = v16; /*0x591f02*/
      v21 = (_BYTE *)(v19 + v16); /*0x591f06*/
      v67 = (_BYTE *)(v19 + v16); /*0x591f0b*/
      if ( v16 < v19 + v16 ) /*0x591f0f*/
      {
        v22 = v20 + v17 + 3; /*0x591f15*/
        do /*0x591f91*/
        {
          v23 = v20; /*0x591f1b*/
          if ( v20 < v22 ) /*0x591f1d*/
          {
            do /*0x591f7c*/
            {
              LOWORD(v63) = v23; /*0x591f28*/
              HIWORD(v63) = v64; /*0x591f2d*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v63) ) /*0x591f32*/
              {
                SetLayerDataMap((__int16 *)&v63, (int)a4); /*0x591f46*/
                v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v63); /*0x591f61*/
                v24[283] = *(_BYTE *)(List::FindByValue(a4) + 16); /*0x591f6b*/
                v17 = v68[0]; /*0x591f71*/
              }
              ++v23; /*0x591f75*/
              v22 = v20 + v17 + 3; /*0x591f76*/
            }
            while ( v23 < v22 ); /*0x591f7c*/
            v16 = v79; /*0x591f7e*/
            v21 = v67; /*0x591f82*/
          }
          ++v64; /*0x591f8d*/
        }
        while ( v64 < (int)v21 ); /*0x591f91*/
        v4 = a2; /*0x591f93*/
      }
      v25 = v81; /*0x591f9a*/
      LODWORD(v77) = *a3; /*0x591f9e*/
      v64 = a3[1]; /*0x591fa8*/
      v68[0] = v81 + v16 - 2; /*0x591fb6*/
      if ( v64 < v68[0] ) /*0x591fba*/
      {
        v26 = v77; /*0x591fbc*/
        v27 = v77 + v17 - 2; /*0x591fc0*/
        do /*0x592030*/
        {
          v28 = v26; /*0x591fc6*/
          if ( v26 < v27 ) /*0x591fc8*/
          {
            do /*0x592019*/
            {
              LOWORD(v63) = v28; /*0x591fd3*/
              HIWORD(v63) = v64; /*0x591fd8*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v63) ) /*0x591fdd*/
              {
                SetLayerDataMap((__int16 *)&v63, this->MapSeed_field_0x08); /*0x591ff1*/
                v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v63); /*0x592000*/
                v26 = v77; /*0x592008*/
                v29[283] = this->MapSeed_field_0x10; /*0x59200c*/
              }
              ++v28; /*0x592012*/
              v27 = v26 + v17 - 2; /*0x592013*/
            }
            while ( v28 < v27 ); /*0x592019*/
            v25 = v81; /*0x59201b*/
            v16 = v79; /*0x59201f*/
          }
          ++v64; /*0x59202c*/
        }
        while ( v64 < v68[0] ); /*0x592030*/
        v4 = a2; /*0x592032*/
      }
      v30 = v4[1]; /*0x592036*/
      v31 = *v4 - v17 + 2; /*0x592041*/
      v64 = v30; /*0x592044*/
      v32 = v25 + v16 - 2; /*0x59204c*/
      v67 = (_BYTE *)v32; /*0x592050*/
      if ( v30 < v32 ) /*0x592054*/
      {
        v33 = v31 + v17 - 1; /*0x592056*/
        v68[0] = v33; /*0x59205a*/
        do /*0x5920c0*/
        {
          v34 = v31; /*0x592060*/
          if ( v31 < v33 ) /*0x592062*/
          {
            do /*0x5920af*/
            {
              LOWORD(v63) = v34; /*0x59206d*/
              HIWORD(v63) = v64; /*0x592072*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v63) ) /*0x592077*/
              {
                SetLayerDataMap((__int16 *)&v63, this->MapSeed_field_0x08); /*0x59208b*/
                v35 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v63); /*0x59209a*/
                v33 = v68[0]; /*0x5920a2*/
                v35[283] = this->MapSeed_field_0x10; /*0x5920a6*/
              }
              ++v34; /*0x5920ac*/
            }
            while ( v34 < v33 ); /*0x5920af*/
            v32 = (int)v67; /*0x5920b1*/
          }
          ++v64; /*0x5920bc*/
        }
        while ( v64 < v32 ); /*0x5920c0*/
        v4 = a2; /*0x5920c2*/
      }
      v36 = a3[1] - 3; /*0x5920d8*/
      LOWORD(v65) = *a3; /*0x5920dc*/
      v37 = this->MapSeed_field_0x10; /*0x5920e1*/
      HIWORD(v65) = v36; /*0x5920e4*/
      v68[0] = v65; /*0x5920f2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, v68, (int)a4, v37); /*0x5920ff*/
      v38 = v4[1] - 3; /*0x59210f*/
      LOWORD(v65) = *v4 - 2; /*0x592113*/
      v39 = this->MapSeed_field_0x10; /*0x592118*/
      HIWORD(v65) = v38; /*0x59211b*/
      v68[0] = v65; /*0x592124*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 5, v68, (int)a4, v39); /*0x592136*/
      v40 = v4[1] - 1; /*0x592144*/
      LOWORD(v65) = *v4 - 1; /*0x592146*/
      v41 = this->MapSeed_field_0x10; /*0x59214b*/
      HIWORD(v65) = v40; /*0x59214e*/
      v68[0] = v65; /*0x592157*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 6, v68, (int)a4, v41); /*0x592169*/
      v42 = v69; /*0x59216e*/
      v68[0] = 0; /*0x592176*/
      if ( v69 )
      {
        do /*0x5921b0*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x592190*/
          v43 = Math::RoundToInt((double)v77 * 4.656612874161595e-10); /*0x5921a6*/
        }
        while ( v43 > 1 ); /*0x5921b0*/
        v70 = 0; /*0x5921b4*/
        v44 = v42 > 0; /*0x5921bd*/
        v65 = v44; /*0x5921c2*/
        v71 = v42 < 0; /*0x5921ce*/
        if ( v43 == 1 ) /*0x5921d3*/
        {
          LOWORD(v68[0]) = v82; /*0x5921dc*/
          HIWORD(v68[0]) = -(__int16)v42; /*0x5921e1*/
        }
        else
        {
          v70 = *v4 - v82 - *a3 - 5; /*0x5921f6*/
        }
        v45 = 0; /*0x5921ff*/
        v63 = 0; /*0x592203*/
        if ( v82 > 0 )
        {
          v64 = 0; /*0x59220d*/
          while ( 1 )
          {
            v46 = 0; /*0x59221e*/
            v47 = (char *)&unk_82AFB4; /*0x592220*/
            v48 = 20 * v44 + 8564680; /*0x592225*/
            while ( 1 )
            {
              v66 = v44 ? v64 : v45;
              v49 = *a3; /*0x592244*/
              LOWORD(v76) = -v46; /*0x59224b*/
              v73 = a3[1]; /*0x592258*/
              v72 = v49 + 3; /*0x592261*/
              v74 = v45 + v49 + 3; /*0x592272*/
              v75 = v73 - v46; /*0x592277*/
              LOWORD(v67) = v74 + v70; /*0x59228f*/
              WORD1(v77) = v71 + v73 - v46; /*0x592296*/
              HIWORD(v67) = v66 + WORD1(v77); /*0x5922aa*/
              v69 = (int)v67; /*0x5922b7*/
              v50 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x5922bc*/
              v51 = *v47; /*0x5922c5*/
              v47 += 4; /*0x5922c7*/
              v48 += 4; /*0x5922ca*/
              v50[283] = this->MapSeed_field_0x10 + v51 - 4; /*0x5922d3*/
              v52 = *(_BYTE *)(v48 - 4); /*0x5922d9*/
              v50[284] = v52; /*0x5922dc*/
              v53 = g_CellTileLookup; /*0x5922e2*/
              ++v46; /*0x5922ee*/
              v50[282] = 0; /*0x5922ef*/
              *((_DWORD *)v50 + 14) = v52 + v53 - 1; /*0x592300*/
              v45 = v63; /*0x592303*/
              if ( (int)v47 >= (int)byte_82AFC8 ) /*0x592307*/
                break; /*0x592307*/
              v44 = v65; /*0x59222e*/
            }
            ++v63; /*0x592319*/
            --v64; /*0x59231d*/
            if ( v63 >= v82 ) /*0x592321*/
              break; /*0x592321*/
            v45 = v63; /*0x592213*/
            v44 = v65; /*0x592217*/
          }
          v4 = a2; /*0x592327*/
        }
      }
      v54 = 0; /*0x592339*/
      if ( *v4 - *a3 - v82 - 5 > 0 ) /*0x592340*/
      {
        v55 = HIWORD(v68[0]); /*0x592346*/
        do /*0x59242a*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59234a*/
          {
            v57 = a3[1]; /*0x59234f*/
            v58 = *a3 + 3; /*0x592355*/
            WORD1(v77) = -(__int16)i; /*0x59235b*/
            v74 = v58; /*0x592360*/
            v75 = v57; /*0x592365*/
            v72 = v54 + v58; /*0x59237a*/
            v73 = v57 - i; /*0x59237f*/
            v59 = v55 + v57 - i; /*0x592392*/
            LOWORD(v67) = LOWORD(v68[0]) + v54 + v58; /*0x592394*/
            HIWORD(v67) = v55 + v73; /*0x592399*/
            v69 = (int)v67; /*0x5923a2*/
            if ( g_MapTileArray ) /*0x5923ae*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)(LOWORD(v68[0]) + v54 + v58) + 20 * unk_89C2DC * v59 + 14) = a4; /*0x5923cc*/
            v60 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v69); /*0x5923da*/
            v61 = this->MapSeed_field_0x10; /*0x5923e3*/
            v60[284] = 2; /*0x5923e6*/
            v60[283] = v61 - i - 1; /*0x5923f1*/
            *((_DWORD *)v60 + 14) = g_CellTileLookup + 1; /*0x592402*/
            v60[282] = 0; /*0x592405*/
          }
          ++v54; /*0x592422*/
        }
        while ( v54 < *a2 - *a3 - v82 - 5 ); /*0x59242a*/
      }
      return 1; /*0x592433*/
    }
    else
    {
      return 0; /*0x591e34*/
    }
  }
  return result; /*0x591dfd*/
}


// ==== 0x00592440  RandomMap::CheckPlacementArea  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CheckPlacementArea(_DWORD *this, __int16 *a2, __int16 *a3, ObjectClass *aP2)
{
  __int16 v5; // ax
  __int16 v6; // bp
  __int16 v7; // si
  int v8; // eax
  char result; // al
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  ObjectClass *v14; // ecx
  int v15; // esi
  int v16; // kr00_4
  int v17; // ebx
  char *v18; // ebp
  int v19; // esi
  _BYTE *v20; // ebp
  int v21; // edx
  int v22; // ebp
  int v23; // esi
  int v24; // esi
  _BYTE *v25; // ebp
  int v26; // ebp
  int v27; // edx
  int v28; // esi
  _BYTE *v29; // eax
  __int16 *v30; // ebp
  int v31; // esi
  char *v32; // edx
  int v33; // ecx
  int v34; // ebx
  __int16 v35; // dx
  int v36; // edx
  __int16 v37; // dx
  int v38; // ecx
  __int16 v39; // dx
  int v40; // ecx
  int v41; // esi
  int v42; // ebx
  unsigned int v43; // eax
  BOOL v44; // ecx
  __int16 v45; // bp
  char *v46; // esi
  int v47; // ebx
  bool v48; // zf
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // ax
  _BYTE *v52; // eax
  char v53; // dl
  unsigned __int8 v54; // cl
  CCINIClass *v55; // edx
  bool v56; // cc
  int v57; // esi
  __int16 v58; // bp
  __int16 v59; // dx
  __int16 v60; // ax
  __int16 v61; // ax
  _BYTE *v62; // eax
  char v63; // dl
  char v64; // dl
  int v66; // [esp+14h] [ebp-54h] BYREF
  int v67; // [esp+18h] [ebp-50h]
  char *v68; // [esp+1Ch] [ebp-4Ch]
  ObjectClass *v69; // [esp+20h] [ebp-48h]
  int v70; // [esp+24h] [ebp-44h] BYREF
  int v71; // [esp+28h] [ebp-40h] BYREF
  int v72; // [esp+2Ch] [ebp-3Ch] BYREF
  int v73; // [esp+30h] [ebp-38h]
  int v74; // [esp+38h] [ebp-30h]
  __int16 v75; // [esp+40h] [ebp-28h]
  __int16 v76; // [esp+42h] [ebp-26h]
  __int64 v77; // [esp+48h] [ebp-20h]
  ObjectClass *v78; // [esp+50h] [ebp-18h]
  ObjectClass *v79; // [esp+58h] [ebp-10h] BYREF
  char *v80; // [esp+5Ch] [ebp-Ch]
  int v81; // [esp+60h] [ebp-8h]
  int v82; // [esp+64h] [ebp-4h]
  ObjectClass *v83; // [esp+6Ch] [ebp+4h]

  v5 = *a2; /*0x592456*/
  v6 = *a2; /*0x59245c*/
  if ( *a2 <= *a3 ) /*0x59245e*/
    v6 = *a3; /*0x592460*/
  v7 = *a2; /*0x592465*/
  if ( v5 >= *a3 ) /*0x592467*/
  {
    v7 = *a3; /*0x592469*/
    v5 = *a3; /*0x592470*/
  }
  v79 = (ObjectClass *)(v5 - 7); /*0x592478*/
  v8 = a2[1]; /*0x59247c*/
  v80 = (char *)(v8 - 4); /*0x592483*/
  v82 = a3[1] - v8 + 9; /*0x59249f*/
  v81 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v79, aP2); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    v10 = *a2; /*0x5924c0*/
    v11 = a3[1]; /*0x5924c8*/
    v71 = *a3 - v10; /*0x5924cc*/
    v12 = v11 - a2[1]; /*0x5924d9*/
    v83 = (ObjectClass *)abs32(v71); /*0x5924db*/
    if ( (int)v83 <= v12 - 5 ) /*0x5924e4*/
    {
      v13 = v12 + 1; /*0x5924f2*/
      v14 = v79; /*0x5924f5*/
      v15 = v10 - (_DWORD)v79; /*0x5924fc*/
      v16 = v13; /*0x5924fe*/
      v17 = v13 / 2 + 2; /*0x592506*/
      v18 = v80; /*0x592509*/
      LODWORD(v77) = v79; /*0x59250b*/
      v68 = v80; /*0x59250f*/
      v70 = (int)&v80[v17 + 2]; /*0x592519*/
      if ( (int)v80 < v70 ) /*0x59251d*/
      {
        v67 = (int)&v79->__pad_0[v15]; /*0x592521*/
        do /*0x592596*/
        {
          v19 = v77; /*0x592525*/
          if ( (int)v77 < v67 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              LOWORD(v66) = v19; /*0x592537*/
              HIWORD(v66) = (_WORD)v18; /*0x59253c*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x592541*/
              {
                SetLayerDataMap((__int16 *)&v66, (int)aP2); /*0x592552*/
                v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66); /*0x59256a*/
                v20[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592574*/
                v18 = v68; /*0x59257a*/
              }
              ++v19; /*0x592582*/
            }
            while ( v19 < v67 ); /*0x592585*/
            v14 = v79; /*0x592587*/
          }
          v68 = ++v18; /*0x592592*/
        }
        while ( (int)v18 < v70 ); /*0x592596*/
      }
      LODWORD(v77) = v14; /*0x59259c*/
      v21 = *a3 - (_DWORD)v14; /*0x5925a9*/
      v23 = a3[1] + 5; /*0x5925b0*/
      v67 = a3[1] - v17 + 3; /*0x5925b4*/
      v22 = v67; /*0x5925ae*/
      v70 = v23; /*0x5925ba*/
      if ( v67 < v23 ) /*0x5925be*/
      {
        v68 = &v14->__pad_0[v21]; /*0x5925c2*/
        do /*0x592635*/
        {
          v24 = v77; /*0x5925c6*/
          if ( (int)v77 < (int)v68 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              LOWORD(v66) = v24; /*0x5925d6*/
              HIWORD(v66) = v22; /*0x5925db*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((__int16 *)&v66, (int)aP2); /*0x5925f1*/
                v25 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66); /*0x592609*/
                v25[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592613*/
                v22 = v67; /*0x592619*/
              }
              ++v24; /*0x592621*/
            }
            while ( v24 < (int)v68 ); /*0x592624*/
            v14 = v79; /*0x592626*/
          }
          v67 = ++v22; /*0x592631*/
        }
        while ( v22 < v70 ); /*0x592635*/
      }
      v26 = *a2; /*0x592637*/
      v27 = v81; /*0x59263a*/
      v70 = v26; /*0x59263e*/
      v67 = a2[1]; /*0x592648*/
      v78 = (ObjectClass *)((char *)v14 + v81 - v26 - 1); /*0x592652*/
      v69 = (ObjectClass *)(v17 + v67 - 1); /*0x59265c*/
      if ( v67 < (int)v69 ) /*0x592660*/
      {
        v68 = &v78->__pad_0[v26]; /*0x592668*/
        do /*0x5926de*/
        {
          v28 = v26; /*0x592670*/
          if ( v26 < (int)v68 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              LOWORD(v66) = v28; /*0x59267b*/
              HIWORD(v66) = v67; /*0x592680*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x592689*/
              {
                SetLayerDataMap((__int16 *)&v66, this->RandomMap_field_0x8); /*0x59269d*/
                v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66); /*0x5926ac*/
                v26 = v70; /*0x5926b4*/
                v29[283] = this->RandomMap_field_0x40; /*0x5926b8*/
              }
              ++v28; /*0x5926c2*/
            }
            while ( v28 < (int)v68 ); /*0x5926c5*/
            v27 = v81; /*0x5926c7*/
            v14 = v79; /*0x5926cb*/
          }
          ++v67; /*0x5926da*/
        }
        while ( v67 < (int)v69 ); /*0x5926de*/
      }
      v30 = a3; /*0x5926e0*/
      v31 = *a3; /*0x5926e8*/
      v32 = &v14->__pad_0[v27 - v31 - 1]; /*0x5926f3*/
      v67 = a3[1] - v17 + 3; /*0x5926f7*/
      v33 = v16 / 2 + v67; /*0x5926fb*/
      v70 = v33; /*0x592701*/
      if ( v67 < v33 ) /*0x592705*/
      {
        v68 = &v32[v31]; /*0x592709*/
        do /*0x592777*/
        {
          v34 = v31; /*0x592711*/
          if ( v31 < (int)v68 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              LOWORD(v66) = v34; /*0x592720*/
              HIWORD(v66) = v67; /*0x592725*/
              if ( MapSeed::IsCellInBounds((__int16 *)&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((__int16 *)&v66, this->RandomMap_field_0x8); /*0x59273e*/
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v66) + 283) = this->RandomMap_field_0x40; /*0x592759*/
              }
              ++v34; /*0x592763*/
            }
            while ( v34 < (int)v68 ); /*0x592766*/
            v33 = v70; /*0x592768*/
          }
          ++v67; /*0x592773*/
        }
        while ( v67 < v33 ); /*0x592777*/
      }
      v35 = *a2 - 3; /*0x592788*/
      HIWORD(v68) = a2[1]; /*0x59278c*/
      LOWORD(v68) = v35; /*0x592796*/
      v36 = this->RandomMap_field_0x10; /*0x59279f*/
      v70 = (int)v68; /*0x5927a2*/
      PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 3, &v70, (int)aP2, v36); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      LOWORD(v68) = *a3 - 3; /*0x5927c4*/
      v38 = this->RandomMap_field_0x10; /*0x5927c9*/
      HIWORD(v68) = v37; /*0x5927cc*/
      v70 = (int)v68; /*0x5927d5*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1], &v70, (int)aP2, v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      LOWORD(v68) = *a3 - 1; /*0x5927f8*/
      v40 = this->RandomMap_field_0x10; /*0x5927fd*/
      HIWORD(v68) = v39; /*0x592800*/
      v70 = (int)v68; /*0x592809*/
      PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1] + 1, &v70, (int)aP2, v40); /*0x59281b*/
      v41 = v71; /*0x592820*/
      v42 = 0; /*0x592824*/
      v73 = 0; /*0x592828*/
      if ( v71 ) /*0x592832*/
      {
        do /*0x59285c*/
        {
          v77 = (unsigned int)Random::State(&g_Randomizer); /*0x592842*/
          v43 = Math::RoundToInt((double)v77 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        v44 = v41 > 0; /*0x592862*/
        v68 = (char *)v44; /*0x59286f*/
        v74 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          LOWORD(v73) = v41; /*0x592884*/
          HIWORD(v73) = (_WORD)v83; /*0x592889*/
        }
        else
        {
          HIWORD(v74) = a3[1] - (_WORD)v83 - a2[1] - 5; /*0x5928a0*/
        }
        v66 = 0; /*0x5928a9*/
        if ( (int)v83 > 0 ) /*0x5928af*/
        {
          v67 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            v46 = (char *)&unk_82AFF0; /*0x5928c6*/
            v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              v48 = !v44; /*0x5928d8*/
              v49 = v66; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v67; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              LOWORD(v71) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v75 = v50; /*0x5928f8*/
              v76 = v51; /*0x5928fd*/
              LOWORD(v77) = v50 - v45; /*0x592910*/
              WORD1(v77) = v66 + v51; /*0x59291f*/
              LOWORD(v69) = v74 + v50 - v45; /*0x59292e*/
              HIWORD(v69) = v66 + v51 + HIWORD(v74); /*0x592939*/
              LOWORD(v70) = v49 + (_WORD)v69; /*0x592948*/
              HIWORD(v70) = HIWORD(v69); /*0x59294d*/
              v72 = v70; /*0x59295c*/
              v52 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v72); /*0x592960*/
              v53 = *v46; /*0x592969*/
              v46 += 4; /*0x59296b*/
              v47 += 4; /*0x59296e*/
              v52[283] = this->RandomMap_field_0x40 + v53 - 4; /*0x592977*/
              v54 = *(_BYTE *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((_DWORD *)v52 + 14) = &v55->__pad_0[v54 - 1]; /*0x5929a4*/
              if ( (int)v46 >= (int)byte_82B004 ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = (BOOL)v68; /*0x5928d4*/
            }
            v56 = ++v66 < (int)v83; /*0x5929bb*/
            --v67; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = (BOOL)v68; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v83 - 5 > 0 ) /*0x5929e8*/
      {
        v58 = HIWORD(v73); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            LOWORD(v72) = -(__int16)v42; /*0x592a05*/
            LOWORD(v77) = v59; /*0x592a0a*/
            WORD1(v77) = v60; /*0x592a13*/
            v75 = v59 - v42; /*0x592a28*/
            v76 = v57 + v60; /*0x592a2d*/
            v61 = v58 + v57 + v60; /*0x592a3c*/
            LOWORD(v70) = v73 + v59 - v42; /*0x592a3e*/
            HIWORD(v70) = v58 + v76; /*0x592a43*/
            v71 = v70; /*0x592a4c*/
            if ( g_MapTileArray ) /*0x592a58*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)(v73 + v59 - v42) + 20 * unk_89C2DC * v61 + 14) = aP2; /*0x592a73*/
            v62 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v71); /*0x592a81*/
            v63 = this->RandomMap_field_0x40; /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((_DWORD *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
            v62[282] = 0; /*0x592aab*/
          }
          while ( v42 < 4 ); /*0x592ab2*/
          if ( ++v57 >= a3[1] - a2[1] - (int)v83 - 5 ) /*0x592ad2*/
            break; /*0x592ad2*/
          v42 = 0; /*0x5929f4*/
        }
      }
      return 1; /*0x592adb*/
    }
    else
    {
      return 0; /*0x5924e9*/
    }
  }
  return result; /*0x5924b6*/
}


// ==== 0x00592AF0  ObjectClass::PlaceMapSeedCityBlockVariant  this=ObjectClass  sig=csp ====
char __thiscall PlaceMapSeedCityBlockVariant(_DWORD *this, __int16 *a2, __int16 *a3, ObjectClass *aP2)
{
  __int16 *v4; // ebp
  __int16 *v5; // edi
  int v6; // ebx
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  __int16 *v11; // eax
  int v12; // ebx
  int v13; // ecx
  __int16 *v14; // esi
  _BYTE *v15; // esi
  int v16; // ebx
  int v17; // eax
  int v18; // esi
  _BYTE *v19; // ebx
  __int16 *v20; // ebx
  int v21; // esi
  __int16 *v22; // ecx
  int v23; // esi
  __int16 *v24; // ecx
  __int16 *v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // esi
  int v29; // ecx
  int v30; // eax
  int v31; // ebx
  ObjectClass *v32; // ebx
  int i; // ebx
  __int16 v34; // ax
  _BYTE *v35; // eax
  char v36; // dl
  int j; // ebx
  __int16 v38; // ax
  int k; // esi
  __int16 v40; // cx
  _BYTE *v41; // eax
  char v42; // dl
  char *v43; // ecx
  int m; // ebx
  __int16 v45; // ax
  int n; // esi
  _BYTE *v47; // eax
  char v48; // cl
  char *v49; // edx
  int v52; // [esp+14h] [ebp-28h]
  int v53; // [esp+14h] [ebp-28h]
  int v54; // [esp+18h] [ebp-24h]
  int v55; // [esp+18h] [ebp-24h]
  __int16 *v56; // [esp+1Ch] [ebp-20h] BYREF
  __int16 *v57; // [esp+20h] [ebp-1Ch]
  int v58; // [esp+24h] [ebp-18h]
  int v59; // [esp+28h] [ebp-14h]
  __int16 *v60; // [esp+2Ch] [ebp-10h]
  __int16 *v61; // [esp+30h] [ebp-Ch]
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
  v56 = (__int16 *)(v6 - 2); /*0x592b4a*/
  v57 = (__int16 *)(v9 - 2); /*0x592b4e*/
  if ( !BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v56, aP2) ) /*0x592b52*/
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
          LOWORD(a2) = (_WORD)v14; /*0x592b97*/
          HIWORD(a2) = v12; /*0x592b9c*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x592ba1*/
          {
            if ( g_MapTileArray ) /*0x592bb2*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)a2 + 20 * unk_89C2DC * SHIWORD(a2) + 14) = aP2; /*0x592bd1*/
            v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x592be8*/
            v15[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592bf2*/
            v14 = a3; /*0x592bf8*/
          }
          v14 = (__int16 *)((char *)v14 + 1); /*0x592c00*/
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
  v60 = (__int16 *)v16; /*0x592c2e*/
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
          HIWORD(a2) = (_WORD)a3; /*0x592c59*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x592c5e*/
          {
            if ( g_MapTileArray ) /*0x592c6f*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)a2 + 20 * unk_89C2DC * SHIWORD(a2) + 14) = aP2; /*0x592c8e*/
            v19 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x592ca5*/
            v19[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x592caf*/
            v16 = (int)v60; /*0x592cb5*/
          }
          ++v18; /*0x592cb9*/
          v17 = v16 + 7; /*0x592cba*/
        }
        while ( v18 < v16 + 7 ); /*0x592cbf*/
      }
      a3 = (__int16 *)((char *)a3 + 1); /*0x592cd0*/
    }
    while ( (int)a3 < (int)((char *)v61 + v62) ); /*0x592cd6*/
  }
  v20 = (__int16 *)*v5; /*0x592ce0*/
  v21 = v5[1] - 1; /*0x592ce3*/
  v60 = v20; /*0x592ce4*/
  v22 = (__int16 *)(v21 + 2); /*0x592ce8*/
  a3 = (__int16 *)(v21 + 2); /*0x592ced*/
  if ( !__OFSUB__(v21, v21 + 2) ) /*0x592cf1*/
  {
    do /*0x592d70*/
    {
      if ( !__OFSUB__(v20, (char *)v20 + 1) ) /*0x592cf8*/
      {
        do /*0x592d63*/
        {
          LOWORD(a2) = (_WORD)v20; /*0x592cfe*/
          HIWORD(a2) = v21; /*0x592d03*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x592d08*/
          {
            if ( g_MapTileArray ) /*0x592d19*/
              *((_DWORD *)g_MapTileArray + 20 * (__int16)a2 + 20 * unk_89C2DC * SHIWORD(a2) + 14) = this->vtable3; /*0x592d3b*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) = this->q040; /*0x592d55*/
          }
          v20 = (__int16 *)((char *)v20 + 1); /*0x592d5f*/
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
  v24 = (__int16 *)(v23 + 1); /*0x592d76*/
  v25 = (__int16 *)(v23 - 1); /*0x592d79*/
  v60 = (__int16 *)(v23 - 1); /*0x592d7e*/
  a3 = (__int16 *)(v23 + 1); /*0x592d82*/
  if ( !__OFSUB__(v23, v23 + 1) ) /*0x592d86*/
  {
    do /*0x592de9*/
    {
      if ( !__OFSUB__(v25, v25 + 1) ) /*0x592d8d*/
      {
        do /*0x592ddc*/
        {
          LOWORD(a2) = (_WORD)v25; /*0x592d93*/
          HIWORD(a2) = v23; /*0x592d98*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x592d9d*/
          {
            SetLayerDataMap((__int16 *)&a2, this->vtable3); /*0x592db1*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) = this->q040; /*0x592dcc*/
          }
          v25 = (__int16 *)((char *)v25 + 1); /*0x592dd6*/
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
  v60 = (__int16 *)(v26 + 1); /*0x592df5*/
  v28 = v27 + 1; /*0x592e02*/
  v29 = *v4 - v26 - 1; /*0x592e0a*/
  v53 = v27 + 1; /*0x592e0c*/
  v30 = v5[1]; /*0x592e10*/
  v55 = v30; /*0x592e14*/
  if ( v27 + 1 < v30 ) /*0x592e18*/
  {
    v31 = (int)v60; /*0x592e1a*/
    a3 = (__int16 *)((char *)v60 + v29); /*0x592e20*/
    do /*0x592e85*/
    {
      if ( v31 < (int)a3 ) /*0x592e28*/
      {
        do /*0x592e74*/
        {
          LOWORD(a2) = v31; /*0x592e2e*/
          HIWORD(a2) = v28; /*0x592e33*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x592e38*/
          {
            SetLayerDataMap((__int16 *)&a2, this->vtable3); /*0x592e4c*/
            v28 = v53; /*0x592e63*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) = this->q040; /*0x592e67*/
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
  PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2, v5, (int)aP2, this->uniqueId); /*0x592e9c*/
  PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->__pad_0[3], v4, (int)v32, this->uniqueId); /*0x592eb1*/
  for ( i = 0; i < 4; ++i ) /*0x592eb6*/
  {
    v34 = v5[1] + i; /*0x592ebf*/
    LOWORD(aP2) = i + *v4; /*0x592ed0*/
    HIWORD(aP2) = v34; /*0x592ed5*/
    v35 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x592eda*/
    v36 = this->q040; /*0x592edf*/
    v35[284] = 7; /*0x592ee2*/
    v35[283] = v36 - i - 1; /*0x592eed*/
    *((_DWORD *)v35 + 14) = (char *)g_CellTileLookup->headNode + 2; /*0x592f00*/
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
      v41 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x592f43*/
      v42 = this->q040; /*0x592f4c*/
      v41[284] = 4; /*0x592f4f*/
      v41[283] = v42 - j - 1; /*0x592f5a*/
      v43 = &g_CellTileLookup->__pad_0[3]; /*0x592f66*/
      v41[282] = 0; /*0x592f69*/
      *((_DWORD *)v41 + 14) = v43; /*0x592f70*/
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
      v47 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x592fc6*/
      v48 = this->q040; /*0x592fcf*/
      v47[284] = 3; /*0x592fd2*/
      v47[283] = v48 - m - 1; /*0x592fdd*/
      v49 = &g_CellTileLookup->__pad_0[2]; /*0x592fe9*/
      v47[282] = 0; /*0x592fec*/
      *((_DWORD *)v47 + 14) = v49; /*0x592ff3*/
      v45 = v4[1]; /*0x592ff6*/
    }
  }
  return 1; /*0x593016*/
}


// ==== 0x00593030  ObjectClass::PlaceMapSeedCityBlockDiagonal  this=ObjectClass  sig=csp ====
char __thiscall PlaceMapSeedCityBlockDiagonal(_DWORD *this, __int16 *a2, __int16 *a3, ObjectClass *aP2)
{
  __int16 *v4; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  ObjectClass *v10; // eax
  int v11; // esi
  ObjectClass *v12; // ebx
  _BYTE *v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  _BYTE *v17; // esi
  ObjectClass *v18; // ecx
  int v19; // esi
  char *v20; // edx
  int v21; // eax
  int v22; // ebx
  _BYTE *v23; // eax
  ObjectClass *v24; // ecx
  char *v25; // edx
  int v26; // esi
  int v27; // eax
  int v28; // ebx
  _BYTE *v29; // eax
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // esi
  int v37; // eax
  int v38; // ebx
  ObjectClass *v39; // ebx
  __int16 v40; // ax
  int v41; // edx
  __int16 v42; // dx
  int v43; // ecx
  int i; // ebx
  __int16 v45; // dx
  _BYTE *v46; // eax
  char v47; // cl
  int j; // ebx
  __int16 v49; // ax
  int k; // esi
  __int16 v51; // dx
  _BYTE *v52; // eax
  char v53; // dl
  char *v54; // ecx
  int m; // ebx
  __int16 v56; // ax
  int n; // esi
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // cl
  char *v62; // edx
  ObjectClass *v65; // [esp+14h] [ebp-28h]
  int v66; // [esp+14h] [ebp-28h]
  char *v67; // [esp+18h] [ebp-24h]
  char *v68; // [esp+18h] [ebp-24h]
  char *v69; // [esp+18h] [ebp-24h]
  int v70; // [esp+18h] [ebp-24h]
  int v71; // [esp+1Ch] [ebp-20h] BYREF
  ObjectClass *v72; // [esp+20h] [ebp-1Ch]
  int v73; // [esp+24h] [ebp-18h]
  int v74; // [esp+28h] [ebp-14h]
  int v75; // [esp+2Ch] [ebp-10h]
  ObjectClass *v76; // [esp+30h] [ebp-Ch]
  int v77; // [esp+38h] [ebp-4h]
  ObjectClass *v78; // [esp+40h] [ebp+4h]
  ObjectClass *v79; // [esp+40h] [ebp+4h]
  ObjectClass *v80; // [esp+40h] [ebp+4h]
  ObjectClass *v81; // [esp+40h] [ebp+4h]
  ObjectClass *v82; // [esp+40h] [ebp+4h]

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
  v72 = (ObjectClass *)(v8 - 7); /*0x59308a*/
  if ( !BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v71, aP2) ) /*0x59308e*/
    return 0; /*0x59353e*/
  v10 = v72; /*0x59309b*/
  v11 = v71; /*0x59309f*/
  v12 = v72; /*0x5930a3*/
  v75 = v71; /*0x5930a5*/
  v65 = v72; /*0x5930ac*/
  v67 = &v72->__pad_0[7]; /*0x5930b2*/
  if ( !__OFSUB__(v72, &v72->__pad_0[7]) ) /*0x5930b6*/
  {
    v78 = (ObjectClass *)(v71 + v73); /*0x5930be*/
    do /*0x59312f*/
    {
      if ( v11 < (int)v78 ) /*0x5930c6*/
      {
        do /*0x59311a*/
        {
          LOWORD(a3) = v11; /*0x5930cc*/
          HIWORD(a3) = (_WORD)v12; /*0x5930d1*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x5930d6*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)aP2); /*0x5930e7*/
            v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x5930ff*/
            v13[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x593109*/
            v12 = v65; /*0x59310f*/
          }
          ++v11; /*0x593117*/
        }
        while ( v11 < (int)v78 ); /*0x59311a*/
        v10 = v72; /*0x59311c*/
        v11 = v75; /*0x593120*/
      }
      v12 = (ObjectClass *)((char *)v12 + 1); /*0x593128*/
      v65 = v12; /*0x59312b*/
    }
    while ( (int)v12 < (int)v67 ); /*0x59312f*/
  }
  v14 = *a2 + 1; /*0x593138*/
  v77 = v74; /*0x593139*/
  v75 = v14; /*0x593141*/
  v76 = v10; /*0x593145*/
  v79 = v10; /*0x593149*/
  if ( (int)v10 < (int)&v10->__pad_0[v74] ) /*0x59314d*/
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
          HIWORD(a3) = (_WORD)v79; /*0x593162*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x59316b*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)aP2); /*0x59317c*/
            v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x593194*/
            v17[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x59319e*/
            v14 = v75; /*0x5931a4*/
          }
          ++v16; /*0x5931a8*/
          v15 = v14 + 7; /*0x5931a9*/
        }
        while ( v16 < v14 + 7 ); /*0x5931ae*/
      }
      v79 = (ObjectClass *)((char *)v79 + 1); /*0x5931bf*/
    }
    while ( (int)v79 < (int)&v76->__pad_0[v77] ); /*0x5931c5*/
  }
  v18 = (ObjectClass *)v4[1]; /*0x5931c7*/
  v19 = *v4; /*0x5931cb*/
  v20 = &v18->__pad_0[2]; /*0x5931cf*/
  v75 = v19; /*0x5931d2*/
  v80 = v18; /*0x5931d8*/
  v68 = &v18->__pad_0[2]; /*0x5931dc*/
  if ( !__OFSUB__(v18, &v18->__pad_0[2]) ) /*0x5931e0*/
  {
    v21 = v19 + 1; /*0x5931e2*/
    do /*0x593245*/
    {
      v22 = v19; /*0x5931e7*/
      if ( v19 < v21 ) /*0x5931e9*/
      {
        do /*0x593238*/
        {
          HIWORD(a3) = (_WORD)v18; /*0x5931eb*/
          LOWORD(a3) = v22; /*0x5931f4*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x5931f9*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x59320d*/
            v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x59321c*/
            v19 = v75; /*0x593224*/
            v23[283] = this->q040; /*0x593228*/
          }
          v18 = v80; /*0x59322e*/
          ++v22; /*0x593232*/
          v21 = v19 + 1; /*0x593233*/
        }
        while ( v22 < v19 + 1 ); /*0x593238*/
        v20 = v68; /*0x59323a*/
      }
      v18 = (ObjectClass *)((char *)v18 + 1); /*0x59323e*/
      v80 = v18; /*0x593241*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593245*/
  }
  v24 = (ObjectClass *)a2[1]; /*0x593247*/
  v25 = &v24->__pad_0[1]; /*0x59324e*/
  v26 = *a2 - 1; /*0x593251*/
  v75 = v26; /*0x593254*/
  v81 = v24; /*0x593258*/
  v69 = &v24->__pad_0[1]; /*0x59325c*/
  if ( !__OFSUB__(v24, &v24->__pad_0[1]) ) /*0x593260*/
  {
    v27 = v26 + 2; /*0x593262*/
    do /*0x5932c5*/
    {
      v28 = v26; /*0x593267*/
      if ( v26 < v27 ) /*0x593269*/
      {
        do /*0x5932b8*/
        {
          HIWORD(a3) = (_WORD)v24; /*0x59326b*/
          LOWORD(a3) = v28; /*0x593274*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x593279*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x59328d*/
            v29 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x59329c*/
            v26 = v75; /*0x5932a4*/
            v29[283] = this->q040; /*0x5932a8*/
          }
          v24 = v81; /*0x5932ae*/
          ++v28; /*0x5932b2*/
          v27 = v26 + 2; /*0x5932b3*/
        }
        while ( v28 < v26 + 2 ); /*0x5932b8*/
        v25 = v69; /*0x5932ba*/
      }
      v24 = (ObjectClass *)((char *)v24 + 1); /*0x5932be*/
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
    v82 = (ObjectClass *)(v75 + v35); /*0x5932fc*/
    do /*0x593361*/
    {
      if ( v38 < (int)v82 ) /*0x593304*/
      {
        do /*0x593350*/
        {
          LOWORD(a3) = v38; /*0x59330a*/
          HIWORD(a3) = v36; /*0x59330f*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x593314*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x593328*/
            v36 = v66; /*0x59333f*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3) + 283) = this->q040; /*0x593343*/
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
  v41 = this->uniqueId; /*0x59337b*/
  HIWORD(a3) = v40; /*0x59337e*/
  PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->__pad_0[2], &a3, (int)aP2, v41); /*0x593399*/
  v42 = v4[1] - 3; /*0x5933a6*/
  LOWORD(aP2) = *v4; /*0x5933aa*/
  v43 = this->uniqueId; /*0x5933af*/
  HIWORD(aP2) = v42; /*0x5933b2*/
  PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode, &aP2, (int)v39, v43); /*0x5933cd*/
  for ( i = 0; i < 4; ++i ) /*0x5933d2*/
  {
    v45 = v4[1]; /*0x5933d7*/
    LOWORD(aP2) = i + *a2; /*0x5933e2*/
    HIWORD(aP2) = v45 - i; /*0x5933f0*/
    v46 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x5933f5*/
    v47 = this->q040; /*0x5933fa*/
    v46[284] = 6; /*0x5933fd*/
    v46[283] = v47 - i - 1; /*0x593408*/
    *((_DWORD *)v46 + 14) = (char *)g_CellTileLookup->headNode + 1; /*0x59341b*/
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
      v52 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x59345f*/
      v53 = this->q040; /*0x593468*/
      v52[284] = 3; /*0x59346b*/
      v52[283] = v53 - j - 1; /*0x593476*/
      v54 = &g_CellTileLookup->__pad_0[2]; /*0x593482*/
      v52[282] = 0; /*0x593485*/
      *((_DWORD *)v52 + 14) = v54; /*0x59348c*/
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
      v60 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x5934e6*/
      v61 = this->q040; /*0x5934ef*/
      v60[284] = 2; /*0x5934f2*/
      v60[283] = v61 - m - 1; /*0x5934fd*/
      v62 = &g_CellTileLookup->__pad_0[1]; /*0x593509*/
      v60[282] = 0; /*0x59350a*/
      *((_DWORD *)v60 + 14) = v62; /*0x593511*/
      v56 = *v4; /*0x593514*/
    }
  }
  return 1; /*0x59352f*/
}


// ==== 0x00593550  MapSeed::PlaceCityBlock2  this=ObjectClass  sig=csp ====
char __thiscall MapSeed::PlaceCityBlock2(_DWORD *this, __int16 *a2, __int16 *a3, ObjectClass *aP2)
{
  __int16 *v4; // ebp
  int v6; // esi
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  ObjectClass *v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ebx
  _BYTE *v15; // esi
  int v16; // ebx
  ObjectClass *v17; // esi
  _BYTE *v18; // esi
  ObjectClass *v19; // ecx
  int v20; // esi
  char *v21; // edx
  int v22; // eax
  int v23; // ebx
  _BYTE *v24; // eax
  ObjectClass *v25; // ecx
  int v26; // esi
  char *v27; // edx
  int v28; // eax
  int v29; // ebx
  _BYTE *v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // esi
  int v38; // eax
  int v39; // ebx
  ObjectClass *v40; // ebx
  __int16 v41; // ax
  int v42; // edx
  __int16 v43; // dx
  int v44; // ecx
  __int16 v45; // dx
  int v46; // ecx
  __int16 v47; // dx
  int v48; // ecx
  int i; // ebx
  __int16 v50; // dx
  _BYTE *v51; // eax
  char v52; // cl
  int j; // ebx
  __int16 v54; // ax
  int k; // esi
  __int16 v56; // dx
  _BYTE *v57; // eax
  char v58; // dl
  char *v59; // ecx
  int m; // ebx
  __int16 v61; // ax
  int n; // esi
  __int16 v63; // dx
  _BYTE *v64; // eax
  char v65; // dl
  int v68; // [esp+14h] [ebp-28h]
  ObjectClass *v69; // [esp+14h] [ebp-28h]
  int v70; // [esp+14h] [ebp-28h]
  int v71; // [esp+18h] [ebp-24h]
  char *v72; // [esp+18h] [ebp-24h]
  char *v73; // [esp+18h] [ebp-24h]
  int v74; // [esp+18h] [ebp-24h]
  int v75; // [esp+1Ch] [ebp-20h] BYREF
  ObjectClass *v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+24h] [ebp-18h]
  int v78; // [esp+28h] [ebp-14h]
  __int16 v79[2]; // [esp+2Ch] [ebp-10h]
  ObjectClass *v80; // [esp+30h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-4h]
  ObjectClass *v82; // [esp+40h] [ebp+4h]
  ObjectClass *v83; // [esp+40h] [ebp+4h]
  ObjectClass *v84; // [esp+40h] [ebp+4h]
  ObjectClass *v85; // [esp+40h] [ebp+4h]
  ObjectClass *v86; // [esp+40h] [ebp+4h]

  v4 = a3; /*0x593555*/
  v6 = *a3; /*0x59355f*/
  v7 = *a2 - v6; /*0x593566*/
  if ( v7 < 3 ) /*0x593571*/
    return 0; /*0x593571*/
  v9 = a2[1]; /*0x593577*/
  v10 = a3[1] - v9; /*0x59357f*/
  if ( v10 < 3 ) /*0x593584*/
    return 0; /*0x593584*/
  v77 = v7 + 10; /*0x593590*/
  v78 = v10 + 10; /*0x593598*/
  v75 = v6 - 7; /*0x5935aa*/
  v76 = (ObjectClass *)(v9 - 7); /*0x5935ae*/
  if ( !BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v75, aP2) ) /*0x5935b2*/
    return 0; /*0x593ad9*/
  v11 = v76; /*0x5935bf*/
  v12 = v75; /*0x5935c3*/
  *(_DWORD *)v79 = v75; /*0x5935c7*/
  v82 = v76; /*0x5935cb*/
  v71 = (int)&v76->__pad_0[7]; /*0x5935d4*/
  if ( !__OFSUB__(v76, &v76->__pad_0[7]) ) /*0x5935d8*/
  {
    v13 = v77 + v75; /*0x5935e2*/
    v68 = v77 + v75; /*0x5935e5*/
    do /*0x59365f*/
    {
      v14 = *(_DWORD *)v79; /*0x5935e9*/
      if ( *(int *)v79 < v13 ) /*0x5935f1*/
      {
        do /*0x593646*/
        {
          LOWORD(a3) = v14; /*0x5935fc*/
          HIWORD(a3) = (_WORD)v82; /*0x593601*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x593606*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)aP2); /*0x593617*/
            v15 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x59362f*/
            v15[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x593639*/
            v13 = v68; /*0x59363f*/
          }
          ++v14; /*0x593643*/
        }
        while ( v14 < v13 ); /*0x593646*/
        v11 = v76; /*0x593648*/
        v12 = v75; /*0x59364c*/
      }
      v82 = (ObjectClass *)((char *)v82 + 1); /*0x59365b*/
    }
    while ( (int)v82 < v71 ); /*0x59365f*/
  }
  v16 = v12; /*0x593665*/
  v81 = v78; /*0x593667*/
  v17 = v11; /*0x59366d*/
  *(_DWORD *)v79 = v12; /*0x593671*/
  v80 = v11; /*0x593675*/
  v69 = v11; /*0x593679*/
  if ( (int)v11 < (int)&v11->__pad_0[v78] ) /*0x59367d*/
  {
    v83 = (ObjectClass *)(v12 + 7); /*0x593682*/
    do /*0x5936f5*/
    {
      if ( v16 < (int)v83 ) /*0x59368a*/
      {
        do /*0x5936de*/
        {
          LOWORD(a3) = v16; /*0x593690*/
          HIWORD(a3) = (_WORD)v17; /*0x593695*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x59369a*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)aP2); /*0x5936ab*/
            v18 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x5936c3*/
            v18[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x5936cd*/
            v17 = v69; /*0x5936d3*/
          }
          ++v16; /*0x5936db*/
        }
        while ( v16 < (int)v83 ); /*0x5936de*/
        v16 = *(_DWORD *)v79; /*0x5936e0*/
      }
      v17 = (ObjectClass *)((char *)v17 + 1); /*0x5936ec*/
      v69 = v17; /*0x5936f1*/
    }
    while ( (int)v17 < (int)&v80->__pad_0[v81] ); /*0x5936f5*/
  }
  v19 = (ObjectClass *)a2[1]; /*0x5936f7*/
  v20 = *a2; /*0x5936fb*/
  v21 = &v19->__pad_0[2]; /*0x5936fe*/
  *(_DWORD *)v79 = v20; /*0x593701*/
  v84 = v19; /*0x593707*/
  v72 = &v19->__pad_0[2]; /*0x59370b*/
  if ( !__OFSUB__(v19, &v19->__pad_0[2]) ) /*0x59370f*/
  {
    v22 = v20 + 1; /*0x593711*/
    do /*0x593774*/
    {
      v23 = v20; /*0x593716*/
      if ( v20 < v22 ) /*0x593718*/
      {
        do /*0x593767*/
        {
          HIWORD(a3) = (_WORD)v19; /*0x59371a*/
          LOWORD(a3) = v23; /*0x593723*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x593728*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x59373c*/
            v24 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x59374b*/
            v20 = *(_DWORD *)v79; /*0x593753*/
            v24[283] = this->q040; /*0x593757*/
          }
          v19 = v84; /*0x59375d*/
          ++v23; /*0x593761*/
          v22 = v20 + 1; /*0x593762*/
        }
        while ( v23 < v20 + 1 ); /*0x593767*/
        v21 = v72; /*0x593769*/
      }
      v19 = (ObjectClass *)((char *)v19 + 1); /*0x59376d*/
      v84 = v19; /*0x593770*/
    }
    while ( (int)v19 < (int)v21 ); /*0x593774*/
  }
  v25 = (ObjectClass *)v4[1]; /*0x593776*/
  v26 = *v4; /*0x59377a*/
  v27 = &v25->__pad_0[1]; /*0x59377e*/
  *(_DWORD *)v79 = v26; /*0x593781*/
  v85 = v25; /*0x593787*/
  v73 = &v25->__pad_0[1]; /*0x59378b*/
  if ( !__OFSUB__(v25, &v25->__pad_0[1]) ) /*0x59378f*/
  {
    v28 = v26 + 2; /*0x593791*/
    do /*0x5937f4*/
    {
      v29 = v26; /*0x593796*/
      if ( v26 < v28 ) /*0x593798*/
      {
        do /*0x5937e7*/
        {
          HIWORD(a3) = (_WORD)v25; /*0x59379a*/
          LOWORD(a3) = v29; /*0x5937a3*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x5937a8*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x5937bc*/
            v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3); /*0x5937cb*/
            v26 = *(_DWORD *)v79; /*0x5937d3*/
            v30[283] = this->q040; /*0x5937d7*/
          }
          v25 = v85; /*0x5937dd*/
          ++v29; /*0x5937e1*/
          v28 = v26 + 2; /*0x5937e2*/
        }
        while ( v29 < v26 + 2 ); /*0x5937e7*/
        v27 = v73; /*0x5937e9*/
      }
      v25 = (ObjectClass *)((char *)v25 + 1); /*0x5937ed*/
      v85 = v25; /*0x5937f0*/
    }
    while ( (int)v25 < (int)v27 ); /*0x5937f4*/
  }
  v31 = *v4; /*0x5937f6*/
  v32 = a2[1]; /*0x5937fd*/
  v33 = v31 + 1; /*0x593801*/
  v34 = *a2 - v31; /*0x593804*/
  v35 = v4[1] - v32; /*0x59380a*/
  *(_DWORD *)v79 = v33; /*0x59380c*/
  v36 = v34 - 1; /*0x593810*/
  v37 = v32 + 1; /*0x593815*/
  v38 = v32 + v35; /*0x593817*/
  v70 = v32 + 1; /*0x593819*/
  v74 = v38; /*0x59381f*/
  if ( v32 + 1 < v38 ) /*0x593823*/
  {
    v39 = *(_DWORD *)v79; /*0x593825*/
    v86 = (ObjectClass *)(*(_DWORD *)v79 + v36); /*0x59382b*/
    do /*0x593891*/
    {
      if ( v39 < (int)v86 ) /*0x593833*/
      {
        do /*0x593880*/
        {
          CellStruct::Set((rc_ptr_base *)&a3, v39, v37); /*0x59383b*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a3) ) /*0x593844*/
          {
            SetLayerDataMap((__int16 *)&a3, this->vtable3); /*0x593858*/
            v37 = v70; /*0x59386f*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a3) + 283) = this->q040; /*0x593873*/
          }
          ++v39; /*0x59387d*/
        }
        while ( v39 < (int)v86 ); /*0x593880*/
        v39 = *(_DWORD *)v79; /*0x593882*/
        v38 = v74; /*0x593886*/
      }
      v70 = ++v37; /*0x59388d*/
    }
    while ( v37 < v38 ); /*0x593891*/
  }
  v40 = aP2; /*0x59389e*/
  v41 = a2[1] - 3; /*0x5938a6*/
  LOWORD(a3) = *a2 - 2; /*0x5938aa*/
  v42 = this->uniqueId; /*0x5938af*/
  HIWORD(a3) = v41; /*0x5938b2*/
  PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 1, &a3, (int)aP2, v42); /*0x5938cd*/
  v43 = a2[1] - 1; /*0x5938db*/
  LOWORD(aP2) = *a2 - 1; /*0x5938dd*/
  v44 = this->uniqueId; /*0x5938e2*/
  HIWORD(aP2) = v43; /*0x5938e5*/
  PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 2, &aP2, (int)v40, v44); /*0x593900*/
  v45 = v4[1] - 2; /*0x593911*/
  LOWORD(aP2) = *v4 - 3; /*0x593915*/
  v46 = this->uniqueId; /*0x59391a*/
  HIWORD(aP2) = v45; /*0x59391d*/
  PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1], &aP2, (int)v40, v46); /*0x593938*/
  v47 = v4[1] - 1; /*0x593947*/
  LOWORD(aP2) = *v4 - 1; /*0x593949*/
  v48 = this->uniqueId; /*0x59394e*/
  HIWORD(aP2) = v47; /*0x593951*/
  PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->headNode[1] + 1, &aP2, (int)v40, v48); /*0x59396c*/
  for ( i = 0; i < 4; ++i ) /*0x593971*/
  {
    v50 = a2[1]; /*0x593977*/
    LOWORD(aP2) = *v4 - i; /*0x593982*/
    HIWORD(aP2) = v50 - i; /*0x593990*/
    v51 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x593995*/
    v52 = this->q040; /*0x59399a*/
    v51[284] = 5; /*0x59399d*/
    v51[283] = v52 - i - 1; /*0x5939a8*/
    *((_DWORD *)v51 + 14) = g_CellTileLookup->headNode; /*0x5939bb*/
    v51[282] = 0; /*0x5939be*/
  }
  for ( j = 0; j < 4; ++j ) /*0x5939c7*/
  {
    v54 = *a2; /*0x5939c9*/
    for ( k = 0; k < *a2 - *v4 + j - 3; ++k ) /*0x5939dd*/
    {
      v56 = a2[1] - j; /*0x5939e8*/
      LOWORD(aP2) = v54 - k - 3; /*0x5939eb*/
      HIWORD(aP2) = v56; /*0x5939fa*/
      v57 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x5939ff*/
      v58 = this->q040; /*0x593a08*/
      v57[284] = 2; /*0x593a0b*/
      v57[283] = v58 - j - 1; /*0x593a16*/
      v59 = &g_CellTileLookup->__pad_0[1]; /*0x593a22*/
      v57[282] = 0; /*0x593a23*/
      *((_DWORD *)v57 + 14) = v59; /*0x593a2a*/
      v54 = *a2; /*0x593a2d*/
    }
  }
  for ( m = 0; m < 4; ++m ) /*0x593a48*/
  {
    v61 = v4[1]; /*0x593a4a*/
    for ( n = 0; n < v61 - a2[1] + m - 3; v61 = v4[1] ) /*0x593a5f*/
    {
      v63 = *v4 - m; /*0x593a6a*/
      HIWORD(aP2) = v61 - n - 3; /*0x593a6d*/
      LOWORD(aP2) = v63; /*0x593a7c*/
      v64 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x593a81*/
      v65 = this->q040; /*0x593a8a*/
      v64[284] = 1; /*0x593a8d*/
      ++n; /*0x593a98*/
      v64[283] = v65 - m - 1; /*0x593a99*/
      *((_DWORD *)v64 + 14) = g_CellTileLookup; /*0x593aa5*/
      v64[282] = 0; /*0x593aa8*/
    }
  }
  return 1; /*0x593aca*/
}


// ==== 0x00593AF0  ObjectClass::PlaceMapSeedCityBlockVariant2  this=ObjectClass  sig=csp ====
char __thiscall PlaceMapSeedCityBlockVariant2(_DWORD *this, __int16 *a2, __int16 *a3, ObjectClass *aP2)
{
  __int16 *v4; // ebp
  __int16 *v5; // edi
  int v6; // esi
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // esi
  _BYTE *v14; // esi
  int v15; // ebx
  int v16; // esi
  int v17; // eax
  __int16 *v18; // ecx
  int v19; // esi
  __int16 *v20; // edx
  int v21; // eax
  int v22; // ebx
  _BYTE *v23; // eax
  int v24; // ebx
  int v25; // esi
  __int16 *v26; // ecx
  int v27; // eax
  int v28; // ebx
  int v29; // esi
  int v30; // ecx
  int v31; // eax
  int v32; // ebx
  ObjectClass *v33; // ebx
  __int16 v34; // dx
  __int16 v35; // cx
  int i; // ebx
  __int16 v37; // dx
  _BYTE *v38; // eax
  char v39; // cl
  int j; // ebx
  __int16 v41; // ax
  int k; // esi
  _BYTE *v43; // eax
  char v44; // cl
  int m; // ebx
  __int16 v46; // ax
  int n; // esi
  _BYTE *v48; // eax
  char v49; // cl
  char *v50; // edx
  int v53; // [esp+14h] [ebp-28h]
  _BYTE *v54; // [esp+14h] [ebp-28h]
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
  if ( !BuildingTypeClass::CheckPlacementArea(this, (ObjectClass *)&v59, aP2) ) /*0x593b52*/
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
    a3 = (__int16 *)(v59 + 7); /*0x593b88*/
    do /*0x593bff*/
    {
      if ( v12 < (int)a3 ) /*0x593b90*/
      {
        do /*0x593be4*/
        {
          LOWORD(a2) = v12; /*0x593b96*/
          HIWORD(a2) = v13; /*0x593b9b*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x593ba0*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)aP2); /*0x593bb1*/
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x593bc9*/
            v14[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x593bd3*/
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
    a3 = (__int16 *)(v11 + v61); /*0x593c1d*/
    do /*0x593c88*/
    {
      if ( v16 < (int)a3 ) /*0x593c25*/
      {
        do /*0x593c7b*/
        {
          LOWORD(a2) = v16; /*0x593c2b*/
          HIWORD(a2) = v15; /*0x593c30*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x593c35*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)aP2); /*0x593c46*/
            v54 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x593c5e*/
            v54[283] = *(_BYTE *)(List::FindByValue(aP2) + 16); /*0x593c6e*/
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
  v18 = (__int16 *)v4[1]; /*0x593c8a*/
  v19 = *v4; /*0x593c8e*/
  v20 = (__int16 *)((char *)v18 + 1); /*0x593c92*/
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
          HIWORD(a2) = (_WORD)v18; /*0x593cae*/
          LOWORD(a2) = v22; /*0x593cb7*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x593cbc*/
          {
            SetLayerDataMap((__int16 *)&a2, this->vtable3); /*0x593cd0*/
            v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x593cdf*/
            v19 = v63; /*0x593ce7*/
            v23[283] = this->q040; /*0x593ceb*/
          }
          v18 = a3; /*0x593cf1*/
          ++v22; /*0x593cf5*/
          v21 = v19 + 2; /*0x593cf6*/
        }
        while ( v22 < v19 + 2 ); /*0x593cfb*/
        v20 = (__int16 *)v57; /*0x593cfd*/
      }
      v18 = (__int16 *)((char *)v18 + 1); /*0x593d01*/
      a3 = v18; /*0x593d04*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593d08*/
  }
  v24 = *v5; /*0x593d0e*/
  v25 = v5[1] - 1; /*0x593d11*/
  v63 = v24; /*0x593d12*/
  v26 = (__int16 *)(v25 + 2); /*0x593d16*/
  a3 = (__int16 *)(v25 + 2); /*0x593d1b*/
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
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x593d36*/
          {
            SetLayerDataMap((__int16 *)&a2, this->vtable3); /*0x593d4a*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) = this->q040; /*0x593d65*/
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
    a3 = (__int16 *)(v63 + v30); /*0x593db7*/
    do /*0x593e1c*/
    {
      if ( v32 < (int)a3 ) /*0x593dbf*/
      {
        do /*0x593e0b*/
        {
          LOWORD(a2) = v32; /*0x593dc5*/
          HIWORD(a2) = v29; /*0x593dca*/
          if ( MapSeed::IsCellInBounds((__int16 *)&a2) ) /*0x593dcf*/
          {
            SetLayerDataMap((__int16 *)&a2, this->vtable3); /*0x593de3*/
            v29 = v55; /*0x593dfa*/
            *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) = this->q040; /*0x593dfe*/
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
  PlaceMapSeedClassBuildings((int)g_TerrainTypeTable2->headNode + 3, &a2, (int)aP2, this->uniqueId); /*0x593e55*/
  v35 = *v5 - 2; /*0x593e61*/
  HIWORD(aP2) = v5[1]; /*0x593e65*/
  LOWORD(aP2) = v35; /*0x593e6a*/
  PlaceMapSeedClassBuildings((int)&g_TerrainTypeTable2->__pad_0[1], &aP2, (int)v33, this->uniqueId); /*0x593e88*/
  for ( i = 0; i < 4; ++i ) /*0x593e8d*/
  {
    v37 = v5[1] + i; /*0x593e96*/
    LOWORD(aP2) = *v4 - i; /*0x593ea1*/
    HIWORD(aP2) = v37; /*0x593eac*/
    v38 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x593eb1*/
    v39 = this->q040; /*0x593eb6*/
    v38[284] = 8; /*0x593eb9*/
    v38[283] = v39 - i - 1; /*0x593ec4*/
    *((_DWORD *)v38 + 14) = (char *)g_CellTileLookup->headNode + 3; /*0x593ed7*/
    v38[282] = 0; /*0x593eda*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593ee3*/
  {
    v41 = v4[1]; /*0x593ee5*/
    for ( k = 0; k < v5[1] - v41 + j - 3; v41 = v4[1] ) /*0x593efa*/
    {
      LOWORD(aP2) = *v4 - j; /*0x593f11*/
      HIWORD(aP2) = v41 + k + 3; /*0x593f16*/
      v43 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x593f1b*/
      v44 = this->q040; /*0x593f24*/
      v43[284] = 1; /*0x593f27*/
      ++k; /*0x593f32*/
      v43[283] = v44 - j - 1; /*0x593f33*/
      *((_DWORD *)v43 + 14) = g_CellTileLookup; /*0x593f3f*/
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
      v48 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP2); /*0x593f9c*/
      v49 = this->q040; /*0x593fa5*/
      v48[284] = 4; /*0x593fa8*/
      v48[283] = v49 - m - 1; /*0x593fb3*/
      v50 = &g_CellTileLookup->__pad_0[3]; /*0x593fbf*/
      v48[282] = 0; /*0x593fc2*/
      *((_DWORD *)v48 + 14) = v50; /*0x593fc9*/
      v46 = *v5; /*0x593fcc*/
    }
  }
  return 1; /*0x593feb*/
}


// ==== 0x00594010  BuildingTypeClass::CheckPlacementArea  this=ObjectClass  sig=csp ====
char __thiscall BuildingTypeClass::CheckPlacementArea(_DWORD *this, ObjectClass *aP1, ObjectClass *aP2)
{
  IUnknown *v3; // edi
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  ObjectClass *v11; // ebp
  int v12; // esi
  ObjectClass *v13; // eax
  _DWORD *v14; // eax

  v3 = (IUnknown *)aP1; /*0x594015*/
  v4 = *(_WORD *)aP1->__pad_0; /*0x594027*/
  HIWORD(aP1) = *(_WORD *)&aP1->__pad_0[4]; /*0x59402a*/
  LOWORD(aP1) = v4; /*0x594035*/
  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
  {
    v5 = v3->field_4; /*0x594052*/
    LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x59405a*/
    HIWORD(aP1) = v5; /*0x594065*/
    if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
    {
      v6 = v3->field_4; /*0x59407a*/
      v7 = v3->field_C; /*0x59407d*/
      LOWORD(aP1) = v3->field_0; /*0x594080*/
      HIWORD(aP1) = v6 + v7 - 1; /*0x594095*/
      if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
      {
        v8 = v3->field_4; /*0x5940b2*/
        v9 = v3->field_C; /*0x5940b5*/
        LOWORD(aP1) = v3->field_8 + v3->field_0 - 1; /*0x5940b8*/
        HIWORD(aP1) = v8 + v9 - 1; /*0x5940cb*/
        if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)&aP1, (TechnoClass *)1) )
        {
          v10 = v3->field_4; /*0x5940dd*/
          if ( v10 >= v3->field_C + v10 ) /*0x5940e9*/
            return 1; /*0x594177*/
          v11 = aP2; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v12 = v3->field_0; /*0x5940f3*/
            if ( v3->field_0 < v3->field_0 + v3->field_8 ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v10 >= v3->field_C + v3->field_4 ) /*0x59416e*/
              return 1; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(aP1) = v12; /*0x594104*/
            HIWORD(aP1) = v10; /*0x59410b*/
            v13 = (ObjectClass *)(g_MapTileArray
                                ? *((_DWORD *)g_MapTileArray + 20 * (__int16)v12 + 20 * unk_89C2DC * (__int16)v10 + 14)
                                : -1);
            if ( v13 != (ObjectClass *)this->vtable3 && v13 != v11 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x594147*/
            if ( !Cell::IsEmpty(v14) ) /*0x59414e*/
              break; /*0x59414e*/
            if ( ++v12 >= v3->field_0 + v3->field_8 ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  return 0; /*0x594170*/
}


// ==== 0x00594190  sub_594190  this=-  sig=csp ====
int __stdcall sub_594190(int *a1, int a2)
{
  int *v2; // ebp
  int v3; // esi
  int result; // eax
  int v5; // edx
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ebp
  _BYTE *v10; // eax
  int v11; // ecx
  char *v12; // esi
  int v13; // [esp+8h] [ebp-Ch]
  int v14; // [esp+Ch] [ebp-8h]
  __int16 v15[2]; // [esp+10h] [ebp-4h] BYREF

  v2 = a1; /*0x594194*/
  v3 = a1[1]; /*0x594199*/
  result = v3 + a1[3]; /*0x59419f*/
  v14 = v3; /*0x5941a1*/
  if ( v3 < result ) /*0x5941a7*/
  {
    v5 = g_MapCellHeight_Value; /*0x5941ad*/
    do /*0x5942d7*/
    {
      v6 = *v2; /*0x5941b5*/
      v13 = *v2; /*0x5941bd*/
      if ( *v2 < *v2 + v2[2] ) /*0x5941c3*/
      {
        v7 = (__int16)v3; /*0x5941c9*/
        do /*0x5942c2*/
        {
          v15[0] = v6; /*0x5941cf*/
          v15[1] = v3; /*0x5941d4*/
          v8 = v7 + (__int16)v6; /*0x5941d9*/
          if ( v8 > v5 ) /*0x5941de*/
          {
            if ( (__int16)v6 - v7 >= v5 || v7 - (__int16)v6 >= v5 || v8 > g_MapCellCount ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( g_MapTileArray ) /*0x594210*/
              {
                v7 = (__int16)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v6 + 20 * unk_89C2DC * (__int16)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v15); /*0x59423e*/
              v11 = 0; /*0x594249*/
              if ( g_RandomMap_TileData <= 0 ) /*0x59424d*/
              {
                v2 = a1; /*0x594298*/
LABEL_19:
                v10[283] = MEMORY[0x10]; /*0x59429c*/
                v5 = g_MapCellHeight_Value; /*0x5942a7*/
              }
              else
              {
                v12 = (char *)g_RandomMap_TerrainState; /*0x59424f*/
                while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v9 ) /*0x59425a*/
                {
                  ++v11; /*0x59425c*/
                  v12 += 4; /*0x59425d*/
                  if ( v11 >= g_RandomMap_TileData ) /*0x594262*/
                  {
                    v3 = v14; /*0x594264*/
                    v2 = a1; /*0x594268*/
                    v6 = v13; /*0x59426c*/
                    goto LABEL_19; /*0x594270*/
                  }
                }
                v3 = v14; /*0x594278*/
                v2 = a1; /*0x59427c*/
                v6 = v13; /*0x594280*/
                v10[283] = *(_BYTE *)(*((_DWORD *)g_RandomMap_TerrainState + v11) + 16); /*0x59428a*/
                v5 = g_MapCellHeight_Value; /*0x594290*/
              }
            }
          }
          ++v6; /*0x5942b9*/
          result = *v2 + v2[2]; /*0x5942ba*/
          v13 = v6; /*0x5942be*/
        }
        while ( v6 < result ); /*0x5942c2*/
      }
      v14 = ++v3; /*0x5942d3*/
    }
    while ( v3 < v2[1] + v2[3] ); /*0x5942d7*/
  }
  return result; /*0x5942df*/
}


// ==== 0x005942F0  ObjectClass::method_5942F0  this=ObjectClass  sig=csp ====
int __thiscall sub_5942F0(_DWORD *this, int *a2)
{
  int *v2; // ebp
  int v3; // ebx
  int result; // eax
  int v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // [esp+8h] [ebp-Ch]
  __int16 v11[2]; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x5942f5*/
  v12 = this; /*0x5942f9*/
  v3 = a2[1]; /*0x5942fd*/
  result = v3 + a2[3]; /*0x594303*/
  v10 = v3; /*0x594305*/
  if ( v3 < result ) /*0x59430b*/
  {
    v5 = g_MapCellHeight_Value; /*0x594311*/
    do /*0x5943c8*/
    {
      v6 = *v2; /*0x594319*/
      if ( *v2 < *v2 + v2[2] ) /*0x594323*/
      {
        v7 = (__int16)v3; /*0x594329*/
        do /*0x5943b3*/
        {
          v11[0] = v6; /*0x59432f*/
          v11[1] = v3; /*0x594334*/
          v8 = v7 + (__int16)v6; /*0x594339*/
          if ( v8 > v5 ) /*0x59433e*/
          {
            if ( (__int16)v6 - v7 < v5 && v7 - (__int16)v6 < v5 && v8 <= g_MapCellCount ) /*0x594356*/
            {
              if ( g_MapTileArray ) /*0x594360*/
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v6 + 20 * unk_89C2DC * v7 + 14) = v12[2]; /*0x59437a*/
              v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v11); /*0x594388*/
              v9[283] = *((_BYTE *)v12 + 16); /*0x594394*/
              v5 = g_MapCellHeight_Value; /*0x59439a*/
            }
            v3 = v10; /*0x5943a0*/
            v2 = a2; /*0x5943a4*/
          }
          ++v6; /*0x5943ae*/
          result = *v2 + v2[2]; /*0x5943af*/
        }
        while ( v6 < result ); /*0x5943b3*/
      }
      v10 = ++v3; /*0x5943c4*/
    }
    while ( v3 < v2[1] + v2[3] ); /*0x5943c8*/
  }
  return result; /*0x5943d0*/
}


// ==== 0x005943E0  List::FindByValue  this=List  sig=csp ====
int __thiscall List_FindByValue(void *this)
{
  int v1; // eax
  char *i; // edx

  v1 = 0; /*0x5943e8*/
  if ( g_RandomMap_TileData <= 0 ) /*0x5943ed*/
    return 0; /*0x594406*/
  for ( i = (char *)g_RandomMap_TerrainState; *(void **)(*(_DWORD *)i + 8) != this; i += 4 ) /*0x5943f5*/
  {
    if ( ++v1 >= g_RandomMap_TileData ) /*0x594404*/
      return 0; /*0x594404*/
  }
  return *((_DWORD *)g_RandomMap_TerrainState + v1); /*0x594406*/
}


// ==== 0x00594420  FloodFillRandomMapTerrain  this=-  sig=csp ====
void __fastcall FloodFillRandomMapTerrain(int a1, IUnknown *a2, int a3)
{
  _DWORD *v4; // eax
  ObjectClass *v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  void *nextObject; // eax
  int v15; // ecx
  void *attachedBomb; // eax
  int fallRate; // edx
  int v18; // ebx
  int v19; // eax
  __int16 *v20; // eax
  int v21; // edx
  int v22; // ecx
  IUnknown *v23; // esi
  char *v24; // edi
  int v25; // eax
  int v26; // [esp+10h] [ebp-30h]
  ObjectClass *v27; // [esp+14h] [ebp-2Ch]
  IUnknown *v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  IUnknown *v30; // [esp+20h] [ebp-20h] BYREF
  IUnknown *aP2; // [esp+24h] [ebp-1Ch]
  void **v32; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  char v35; // [esp+35h] [ebp-Bh]
  int v36; // [esp+38h] [ebp-8h]
  int v37; // [esp+3Ch] [ebp-4h]

  aP2 = a2; /*0x594426*/
  v4 = (_DWORD *)__2_YAPAXI_Z(0x50u); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = (ObjectClass *)RandomMap::TerrainTileDataConstructor(v4, *(_DWORD *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = *(_DWORD *)&v5->__pad_0[8]; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(__int16 *)(a1 + 36) + unk_89C2DC * *(__int16 *)(a1 + 38); /*0x594478*/
  v32 = &vt_DynamicVectorClass_Cell; /*0x59447a*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((_DWORD *)g_MapTileArray + 20 * v7 + 15) = v6; /*0x594498*/
  if ( v36 < v34 /*0x5944c7*/
    || (v35 || !v34) && v37 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
  {
    v8 = v36++; /*0x5944d6*/
    *((_DWORD *)Block + v8) = *(_DWORD *)(a1 + 36); /*0x5944e0*/
  }
  v9 = v36; /*0x5944e3*/
  v10 = v36; /*0x5944e7*/
  if ( v36 > 0 ) /*0x5944eb*/
  {
    while ( 1 ) /*0x5944fc*/
    {
      v11 = Block; /*0x5944fc*/
      v12 = v10 - 1; /*0x594500*/
      v13 = *((_DWORD *)Block + v12); /*0x594503*/
      v26 = v13; /*0x594506*/
      if ( v12 < v9 ) /*0x59450a*/
      {
        v36 = v9 - 1; /*0x59450f*/
        if ( v12 < v9 - 1 ) /*0x594513*/
        {
          while ( 1 ) /*0x59451f*/
          {
            v11[v12] = v11[v12 + 1]; /*0x59451f*/
            if ( ++v12 >= v36 ) /*0x594529*/
              break; /*0x594529*/
            v11 = Block; /*0x594517*/
          }
        }
      }
      *((_DWORD *)g_MapTileArray + 20 * (__int16)v13 + 20 * unk_89C2DC * SHIWORD(v13) + 14) = v6; /*0x59454a*/
      ++*(_DWORD *)&v5->__pad_0[12]; /*0x594552*/
      nextObject = v5->nextObject; /*0x594555*/
      if ( (int)v5->attachedBomb < (int)nextObject /*0x594578*/
        || (BYTE1(v5->attachedTag) || !nextObject)
        && (v15 = v5->ambientSoundController[0], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(v5->owningHouseIndex + 8))(
             &v5->owningHouseIndex,
             (int)nextObject + v15,
             0) )
      {
        attachedBomb = v5->attachedBomb; /*0x59457f*/
        fallRate = v5->fallRate; /*0x594582*/
        v5->attachedBomb = (char *)attachedBomb + 1; /*0x594588*/
        *(_DWORD *)(fallRate + 4 * (_DWORD)attachedBomb) = v13; /*0x59458b*/
      }
      v18 = 0; /*0x59458e*/
      while ( 1 ) /*0x594598*/
      {
        v19 = v18 & 7; /*0x594598*/
        LOWORD(v28) = v13 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v19); /*0x5945ba*/
        HIWORD(v28) = HIWORD(v26) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v19); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = (IUnknown *)(v20 + 18); /*0x5945e3*/
        if ( v21 + v22 > g_MapCellHeight_Value /*0x59461d*/
          && v21 - v22 < g_MapCellHeight_Value
          && v22 - v21 < g_MapCellHeight_Value
          && v21 + v22 <= g_MapCellCount )
        {
          v24 = (char *)g_MapTileArray + 80 * v20[18] + 80 * unk_89C2DC * v20[19]; /*0x594642*/
          if ( !*((_DWORD *)v20 + 19) /*0x594664*/
            && MapClass::GetTileIndex(&MEMORY[0x87F7E8], v23, aP2, 0) == a3
            && *((_DWORD *)v24 + 15) == -1 )
          {
            *((_DWORD *)v24 + 15) = v29; /*0x59466a*/
            if ( v36 < v34 /*0x594698*/
              || (v35 || !v34)
              && v37 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
            {
              v25 = v36++; /*0x5946a7*/
              *((_DWORD *)Block + v25) = v23->field_0; /*0x5946b0*/
            }
          }
        }
        if ( ++v18 >= 8 ) /*0x5946b7*/
          break; /*0x5946b7*/
        LOWORD(v13) = v26; /*0x594592*/
      }
      v9 = v36; /*0x5946bd*/
      v10 = v36; /*0x5946c1*/
      if ( v36 <= 0 ) /*0x5946c5*/
        break; /*0x5946c5*/
      v5 = v27; /*0x5944f4*/
      v6 = v29; /*0x5944f8*/
    }
  }
  v32 = &vt_VectorClass_Cell; /*0x5946d2*/
  if ( Block ) /*0x5946dd*/
  {
    if ( v35 ) /*0x5946e5*/
      __3_YAXPAX_Z(Block); /*0x5946e8*/
  }
}


// ==== 0x00594700  MapClass::Cleanup  this=MapClass  sig=ida-proto ====
int __fastcall sub_594700(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int i; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int result; // eax
  int j; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  int TileIndex; // eax
  _DWORD *v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v15 = a2; /*0x594710*/
  v14 = a1; /*0x594714*/
  if ( g_MapTileArray ) /*0x594718*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x594720*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x594733*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&g_RandomMap_BuildObject, v6); /*0x59478f*/
      v5[10] = &vt_VectorClass_Cell; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      __3_YAXPAX_Z(v5); /*0x5947a3*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(__int16 *)(j + 36); /*0x5947d7*/
    v10 = *(__int16 *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > g_MapCellHeight_Value /*0x594828*/
      && v9 - v10 < g_MapCellHeight_Value
      && v10 - v9 < g_MapCellHeight_Value
      && v10 + v9 <= g_MapCellCount
      && *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(j + 36) + 20 * unk_89C2DC * *(__int16 *)(j + 38) + 14) == -1
      && !*(_DWORD *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x594858*/
  }
  return result; /*0x594868*/
}


// ==== 0x00594870  ObjectClass::PlaceRandomWaypoints  this=DynamicVector  sig=csp ====
void __thiscall PlaceRandomWaypoints(int *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int i; // edi
  unsigned int v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int j; // eax
  int v11; // esi
  int v12; // ebp
  __int16 *WaypointLocationScenarioClass; // eax
  _DWORD *v14; // eax
  int k; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  void *v19; // eax
  int v20; // [esp+10h] [ebp-5Ch] BYREF
  __int64 v21; // [esp+14h] [ebp-58h]
  __int64 v22; // [esp+1Ch] [ebp-50h]
  __int64 v23; // [esp+24h] [ebp-48h]
  double v24; // [esp+2Ch] [ebp-40h]
  int v25[4]; // [esp+34h] [ebp-38h] BYREF
  _DWORD v26[4]; // [esp+44h] [ebp-28h] BYREF
  void **v27; // [esp+54h] [ebp-18h] BYREF
  void *Block; // [esp+58h] [ebp-14h]
  int v29; // [esp+5Ch] [ebp-10h]
  char v30; // [esp+61h] [ebp-Bh]
  int v31; // [esp+64h] [ebp-8h]
  int v32; // [esp+68h] [ebp-4h]

  v26[1] = MEMORY[0x87F8E8] + 4; /*0x594898*/
  v26[0] = MEMORY[0x87F8E4] + 4; /*0x5948a8*/
  v26[2] = MEMORY[0x87F8EC] - 8; /*0x5948ac*/
  v26[3] = MEMORY[0x87F8F0] - 8; /*0x5948b0*/
  VectorClass::CellConstructor(&v27, 0, 0); /*0x5948b4*/
  v27 = &vt_DynamicVectorClass_Cell; /*0x5948b9*/
  v32 = 10; /*0x5948c1*/
  v31 = 0; /*0x5948c9*/
  do /*0x5948f1*/
  {
    v21 = (unsigned int)Random::State(&g_Randomizer); /*0x5948d7*/
    v3 = Math::RoundToInt((double)v21 * 6.984919311242392e-10); /*0x5948e9*/
  }
  while ( v3 > 2 ); /*0x5948f1*/
  v4 = this->DynamicVector_field_0x8; /*0x5948f3*/
  LODWORD(v21) = 0; /*0x5948f6*/
  for ( i = v3 + 12 * v4 + 3 * v4; v31 < i; LODWORD(v21) = v21 + 1 ) /*0x59490a*/
  {
    if ( (int)v21 >= 300 ) /*0x594918*/
      break; /*0x594918*/
    v6 = this->tail_E - 1; /*0x594925*/
    v22 = (unsigned int)this->tail_E; /*0x594929*/
    v24 = (double)v22; /*0x594931*/
    do /*0x59495c*/
    {
      v23 = (unsigned int)Random::State(&g_Randomizer); /*0x59493f*/
      v7 = Math::RoundToInt((double)v23 * v24 * 2.328306437080797e-10); /*0x594955*/
    }
    while ( v7 > v6 ); /*0x59495c*/
    v20 = *(_DWORD *)(*(this + 11) + 4 * v7); /*0x594967*/
    v25[0] = (__int16)v20 - 3; /*0x594979*/
    v25[1] = SHIWORD(v20) - 3; /*0x59497d*/
    v25[2] = 6; /*0x59498a*/
    v25[3] = 6; /*0x59498e*/
    if ( IsAreaClearMap(v25, 0, 0) /*0x5949e1*/
      && (unsigned __int8)Math_Helper(v26, &v20, 1)
      && (v31 < v29
       || (v30 || !v29)
       && v32 > 0
       && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v27[2])(&v27, v32 + v29, 0)) )
    {
      v8 = v31++; /*0x5949f0*/
      *((_DWORD *)Block + v8) = v20; /*0x5949fb*/
    }
  }
  v9 = BuildingPlacement::SelectBuildingPlacementCells(this, (int)&v27); /*0x594a1f*/
  if ( v9 ) /*0x594a23*/
  {
    for ( j = 4544; j < 4576; j += 4 ) /*0x594a58*/
      *(_DWORD *)((char *)MEMORY[0xA8B230] + j) = dword_ABE300; /*0x594a69*/
    v11 = 0; /*0x594a79*/
    if ( this->DynamicVector_field_0x8 > 0 ) /*0x594a7d*/
    {
      v12 = a2; /*0x594a7f*/
      do /*0x594add*/
      {
        ScenarioClass::Set_Waypoint(v12, *(_DWORD *)(v9[1] + 4 * v11)); /*0x594a91*/
        WaypointLocationScenarioClass = (__int16 *)ScenarioClass::Get_Waypoint_Location(&a2, v12); /*0x594aa2*/
        v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], WaypointLocationScenarioClass); /*0x594aad*/
        ++v11; /*0x594ac0*/
        v14[80] |= 4u; /*0x594ac1*/
        ++v12; /*0x594acc*/
        *((_DWORD *)MEMORY[0xA8B230] + v11 + 1135) = *(_DWORD *)(v9[1] + 4 * v11 - 4); /*0x594ad1*/
      }
      while ( v11 < this->DynamicVector_field_0x8 ); /*0x594add*/
    }
    for ( k = 0; k < this->DynamicVector_field_0x8; ++k ) /*0x594ae8*/
    {
      v16 = v9[4]; /*0x594aea*/
      if ( v16 > 0 ) /*0x594aef*/
      {
        v17 = v16 - 1; /*0x594af1*/
        v18 = 0; /*0x594af4*/
        for ( v9[4] = v17; v18 < v9[4]; *(_DWORD *)(v9[1] + 4 * v18 - 4) = *(_DWORD *)(v9[1] + 4 * v18) ) /*0x594afb*/
          ++v18; /*0x594b00*/
      }
    }
    if ( *this ) /*0x594b17*/
      (**(void (__thiscall ***)(int, int))*this)(*this, 1); /*0x594b21*/
    v19 = Block; /*0x594b23*/
    *this = (int)v9; /*0x594b27*/
    v27 = &vt_VectorClass_Cell; /*0x594b2b*/
    if ( v19 && v30 ) /*0x594b3b*/
      __3_YAXPAX_Z(v19); /*0x594b3e*/
  }
  else
  {
    v27 = &vt_VectorClass_Cell; /*0x594a29*/
    if ( Block ) /*0x594a33*/
    {
      if ( v30 ) /*0x594a3f*/
        __3_YAXPAX_Z(Block); /*0x594a46*/
    }
  }
}


// ==== 0x00594B50  ObjectClass::DistributeRandomMapTerrain  this=ObjectClass  sig=csp ====
char RandomMap_DistributeTerrain()
{
  double v0; // st7
  int v1; // eax
  int v2; // ebx
  int v3; // ebp
  int i; // esi
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  void *v9; // esi
  int j; // edi
  int v11; // esi
  _DWORD *v12; // ebp
  size_t v13; // eax
  signed int k; // edi
  int v15; // eax
  int v16; // eax
  int v17; // edx
  int *v18; // ecx
  int v19; // esi
  int v20; // edi
  int v21; // ebx
  int v22; // ebp
  int v23; // esi
  int v24; // edi
  int v25; // eax
  int v26; // edi
  int n; // esi
  int ii; // esi
  int v30; // [esp+10h] [ebp-54h]
  __int64 m; // [esp+14h] [ebp-50h]
  int v32; // [esp+18h] [ebp-4Ch]
  signed int NumOfElements; // [esp+28h] [ebp-3Ch]
  char v34; // [esp+30h] [ebp-34h]
  _DWORD v35[5]; // [esp+38h] [ebp-2Ch]
  void **v36; // [esp+4Ch] [ebp-18h] BYREF
  void *Block; // [esp+50h] [ebp-14h]
  int v38; // [esp+54h] [ebp-10h]
  char v39; // [esp+59h] [ebp-Bh]
  int v40; // [esp+5Ch] [ebp-8h]
  int v41; // [esp+60h] [ebp-4h]

  v35[0] = 5; /*0x594b60*/
  v35[1] = 5; /*0x594b6a*/
  v35[2] = 5; /*0x594b6e*/
  v35[3] = 0; /*0x594b76*/
  v35[4] = 0; /*0x594b7a*/
  v0 = (double)dword_ABE15C * (double)dword_ABE158 * 0.03; /*0x594b7e*/
  if ( v0 < 400.0 ) /*0x594b91*/
    v0 = 400.0; /*0x594b95*/
  v32 = Math::RoundToInt(v0); /*0x594ba5*/
  v1 = Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]); /*0x594ba9*/
  HIWORD(v3) = 0; /*0x594bb4*/
  v2 = v35[dword_ABE014]; /*0x594bb6*/
  LOWORD(v3) = *(_WORD *)(MEMORY[0x87F800][v2] + 2 * v1); /*0x594bc1*/
  Map_Helper_58CE90(); /*0x594bc5*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x594be2*/
  {
    if ( MapSeed::IsCellInBounds((__int16 *)(i + 36)) /*0x594c2b*/
      && *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14) == -1
      && !*(_DWORD *)(i + 76)
      && MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)(i + 36), v2, 0) == v3 )
    {
      FloodFillRandomMapTerrain(v3); /*0x594c32*/
    }
  }
  v5 = g_RandomMap_TileData; /*0x594c4f*/
  v6 = g_RandomMap_TileData - 1; /*0x594c51*/
  if ( g_RandomMap_TileData - 1 >= 0 ) /*0x594c54*/
  {
    v7 = g_RandomMap_TerrainState; /*0x594c56*/
    do /*0x594c81*/
    {
      v8 = (_DWORD *)v7[v6]; /*0x594c5b*/
      if ( v8[3] < v32 ) /*0x594c65*/
      {
        v9 = (void *)v7[v6]; /*0x594c67*/
        if ( v8 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v8); /*0x594c6d*/
          __3_YAXPAX_Z(v9); /*0x594c73*/
          v7 = g_RandomMap_TerrainState; /*0x594c78*/
        }
      }
      --v6; /*0x594c80*/
    }
    while ( v6 >= 0 ); /*0x594c81*/
  }
  TileSystem::Constructor(0, 0); /*0x594c89*/
  v36 = (void **)&off_7ED858; /*0x594c92*/
  v41 = 10; /*0x594c9a*/
  NumOfElements = 0; /*0x594ca6*/
  v34 = 0; /*0x594cae*/
  v40 = 0; /*0x594cb7*/
  VectorClass_ptr_MapRegionClass::Remove(&v36); /*0x594cbb*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x594cc9*/
  {
    v11 = *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + j) + 8) /*0x594ce8*/
        + v5 * (500000 - *(_DWORD *)(*((_DWORD *)g_RandomMap_TerrainState + j) + 12));
    v12 = (char *)g_RandomMap_TerrainState + 4 * j; /*0x594cea*/
    if ( NumOfElements + 1 <= 0 || (unsigned __int8)Map_Helper_5AD930(10) ) /*0x594d06*/
    {
      *(_DWORD *)(8 * NumOfElements) = v11; /*0x594d17*/
      *(_DWORD *)(8 * NumOfElements + 4) = *v12; /*0x594d25*/
      v34 = 0; /*0x594d2e*/
      ++NumOfElements; /*0x594d33*/
    }
  }
  v13 = NumOfElements; /*0x594d43*/
  for ( k = 0; k < NumOfElements; ++k ) /*0x594d4b*/
  {
    if ( !v34 ) /*0x594d53*/
    {
      qsort(0, v13, 8u, sub_5AD9C0); /*0x594d62*/
      v34 = 1; /*0x594d6e*/
    }
    if ( v40 < v38 /*0x594da7*/
      || (v39 || !v38) && v41 > 0 && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v36[2])(&v36, v41 + v38, 0) )
    {
      v15 = v40++; /*0x594db6*/
      *((_DWORD *)Block + v15) = *(_DWORD *)(8 * k + 4); /*0x594dbf*/
    }
    v13 = NumOfElements; /*0x594dc2*/
  }
  v16 = v40; /*0x594dcb*/
  v17 = 0; /*0x594dcf*/
  v30 = 0; /*0x594dd3*/
  if ( v40 > 0 ) /*0x594dd7*/
  {
    v18 = (int *)Block; /*0x594dd9*/
    v19 = v40; /*0x594ddd*/
    do /*0x594dea*/
    {
      v20 = *v18++; /*0x594ddf*/
      v17 += *(_DWORD *)(v20 + 12); /*0x594de7*/
      --v19; /*0x594de9*/
    }
    while ( v19 ); /*0x594dea*/
    v30 = v17; /*0x594dec*/
  }
  v21 = 0; /*0x594df6*/
  v22 = 0; /*0x594df8*/
  v23 = 0; /*0x594dfa*/
  for ( m = (unsigned int)dword_ABE028; v23 < v40; HIDWORD(m) = v22 ) /*0x594e06*/
  {
    v24 = *((_DWORD *)Block + v23); /*0x594e0c*/
    v21 += *(_DWORD *)(v24 + 12); /*0x594e12*/
    if ( v23 == v16 - 1 ) /*0x594e1b*/
      v25 = m - v22; /*0x594e21*/
    else
      v25 = Math::RoundToInt((double)v21 / (double)v30 * (double)(int)m + 0.5 - (double)SHIDWORD(m)); /*0x594e3b*/
    *(_DWORD *)(v24 + 32) = v25; /*0x594e40*/
    v22 += v25; /*0x594e43*/
    v16 = v40; /*0x594e45*/
    ++v23; /*0x594e49*/
  }
  v26 = 0; /*0x594e56*/
  for ( n = 0; n < v40; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(v26); /*0x594e66*/
    v26 += *(_DWORD *)(*((_DWORD *)Block + n) + 32); /*0x594e79*/
  }
  if ( !dword_ABE014 ) /*0x594e87*/
  {
    for ( ii = 0; ii < v40; ++ii ) /*0x594e91*/
    {
      if ( !*(_DWORD *)(*((_DWORD *)Block + ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*((_DWORD *)Block + ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(); /*0x594ee3*/
  __3_YAXPAX_Z(0); /*0x594eed*/
  v36 = &vt_VectorClass_MapRegionClass; /*0x594efb*/
  if ( Block && v39 ) /*0x594f25*/
    __3_YAXPAX_Z(Block); /*0x594f28*/
  return 1; /*0x594f03*/
}


// ==== 0x00594F40  BuildingPlacement::SelectBuildingPlacementCells  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BuildingPlacement_SelectCells(int *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // ebx
  int v12; // esi
  double v13; // st7
  _DWORD *v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // eax
  _DWORD *v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // ebx
  int v27; // esi
  double v28; // st7
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // [esp+14h] [ebp-34h]
  int v34; // [esp+14h] [ebp-34h]
  _DWORD *v35; // [esp+18h] [ebp-30h]
  int v36; // [esp+1Ch] [ebp-2Ch]
  int v37; // [esp+20h] [ebp-28h]
  double v38; // [esp+20h] [ebp-28h]
  int v39; // [esp+2Ch] [ebp-1Ch]
  int v40; // [esp+2Ch] [ebp-1Ch]
  int v41; // [esp+30h] [ebp-18h]
  int v42; // [esp+30h] [ebp-18h]
  int v43; // [esp+34h] [ebp-14h]
  int v44; // [esp+34h] [ebp-14h]
  int v45; // [esp+38h] [ebp-10h]
  int v46; // [esp+38h] [ebp-10h]
  int v47; // [esp+3Ch] [ebp-Ch]
  _DWORD *v48; // [esp+3Ch] [ebp-Ch]
  double v49; // [esp+40h] [ebp-8h]
  double v50; // [esp+40h] [ebp-8h]

  v2 = this->DynamicVector_field_0x8; /*0x594f51*/
  v49 = -1.0; /*0x594f5f*/
  v41 = -1; /*0x594f6f*/
  v3 = Math::RoundToInt(((double)dword_ABE030 * 0.01 * 12.0 / (double)dword_ABE028 + 2.0) * (double)v2); /*0x594f8d*/
  v4 = a2; /*0x594f92*/
  v36 = v3; /*0x594f99*/
  if ( !v2 && *(int *)(a2 + 16) > 0 ) /*0x594fa4*/
  {
    v36 = *(_DWORD *)(a2 + 16); /*0x594fa6*/
    v3 = v36; /*0x594faa*/
  }
  if ( v3 > *(_DWORD *)(a2 + 16) || !v3 ) /*0x594fb5*/
  {
    if ( !v2 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v36 = *(_DWORD *)(a2 + 16); /*0x594fc6*/
  }
  v6 = __2_YAPAXI_Z(0x18u); /*0x594fcc*/
  v7 = v6; /*0x594fd1*/
  if ( v6 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v6, 0, 0); /*0x594fde*/
    *v7 = &vt_DynamicVectorClass_Cell; /*0x594fe3*/
    v7[5] = 10; /*0x594fe9*/
    v7[4] = 0; /*0x594ff0*/
    v35 = v7; /*0x594ff3*/
  }
  else
  {
    v35 = 0; /*0x594ff9*/
    v7 = 0; /*0x594ffd*/
  }
  v8 = *(_DWORD *)(a2 + 16); /*0x594fff*/
  v33 = 0; /*0x595002*/
  v9 = g_MapTileArray; /*0x595006*/
  if ( v8 - 1 > 0 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v33); /*0x595025*/
      if ( v9 ) /*0x59502c*/
        v39 = v9[20 * (__int16)v10 + 14 + 20 * unk_89C2DC * SHIWORD(v10)]; /*0x595053*/
      else
        v39 = -1; /*0x59502e*/
      v11 = v33 + 1; /*0x59505b*/
      if ( v33 + 1 < v8 )
      {
        v43 = (__int16)v10; /*0x595072*/
        v45 = SHIWORD(v10); /*0x595076*/
        do
        {
          v37 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v11); /*0x59508b*/
          if ( v9 ) /*0x59509d*/
            v12 = v9[20 * (__int16)v37 + 14 + 20 * unk_89C2DC * SHIWORD(v37)]; /*0x5950b3*/
          else
            v12 = -1; /*0x59509f*/
          v13 = Math::Sqrt((double)((v43 - (__int16)v37) * (v43 - (__int16)v37)
                                  + (v45 - SHIWORD(v37)) * (v45 - SHIWORD(v37))))
              + (double)(v39 != v12 ? 0x14 : 0);
          if ( v11 && v13 > v49 ) /*0x5950fd*/
          {
            v49 = v13; /*0x595103*/
            v41 = v33; /*0x595107*/
          }
          v9 = g_MapTileArray; /*0x595112*/
          ++v11; /*0x595118*/
        }
        while ( v11 < *(_DWORD *)(a2 + 16) );
        v11 = v33 + 1; /*0x595122*/
        v7 = v35; /*0x595126*/
      }
      v33 = v11; /*0x59512d*/
      v8 = *(_DWORD *)(a2 + 16); /*0x595131*/
      if ( v11 >= v8 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v4 = a2; /*0x595019*/
    }
    if ( v41 != -1 ) /*0x595146*/
    {
      v14 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v41); /*0x595155*/
      v15 = v7[2]; /*0x595158*/
      if ( v7[4] < v15 ) /*0x59515d*/
        goto LABEL_35; /*0x59515d*/
      if ( !*((_BYTE *)v7 + 13) && v15 ) /*0x595168*/
        goto LABEL_37; /*0x595168*/
      v16 = v7[5]; /*0x59516a*/
      if ( v16 <= 0 ) /*0x59516f*/
        goto LABEL_37; /*0x59516f*/
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v15 + v16, 0) ) /*0x59517a*/
      {
LABEL_35:
        v17 = v7[4]; /*0x595181*/
        v18 = v7[1]; /*0x595184*/
        v7[4] = v17 + 1; /*0x59518a*/
        *(_DWORD *)(v18 + 4 * v17) = *v14; /*0x59518f*/
      }
      v9 = g_MapTileArray; /*0x595192*/
LABEL_37:
      v4 = a2; /*0x595198*/
      goto LABEL_38; /*0x595198*/
    }
    v4 = a2; /*0x5951d7*/
  }
  if ( !*(_DWORD *)(v4 + 16) )
  {
LABEL_38:
    v19 = v7[4]; /*0x59519b*/
    if ( v19 < v36 )
    {
      while ( 1 )
      {
        v50 = -1.0; /*0x5951ad*/
        v40 = -1; /*0x5951bf*/
        v34 = 0; /*0x5951c7*/
        if ( *(int *)(v4 + 16) > 0 )
        {
          while ( 1 )
          {
            v25 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v34); /*0x595244*/
            if ( v9 ) /*0x595250*/
              v42 = v9[20 * (__int16)v25 + 14 + 20 * unk_89C2DC * SHIWORD(v25)]; /*0x595275*/
            else
              v42 = -1; /*0x595252*/
            v26 = 0; /*0x595279*/
            v38 = 9999999.0; /*0x59527b*/
            if ( v19 > 0 )
            {
              v47 = (__int16)v25; /*0x595299*/
              v44 = SHIWORD(v25); /*0x59529d*/
              do
              {
                v46 = *(_DWORD *)(v35[1] + 4 * v26); /*0x5952b3*/
                if ( v9 ) /*0x5952c5*/
                  v27 = v9[20 * (__int16)v46 + 14 + 20 * unk_89C2DC * SHIWORD(v46)]; /*0x5952db*/
                else
                  v27 = -1; /*0x5952c7*/
                v28 = Math::Sqrt((double)((v47 - (__int16)v46) * (v47 - (__int16)v46)
                                        + (v44 - SHIWORD(v46)) * (v44 - SHIWORD(v46))))
                    + (double)(v42 != v27 ? 0x14 : 0);
                if ( v28 < v38 ) /*0x595321*/
                  v38 = v28; /*0x595323*/
                v9 = g_MapTileArray; /*0x59532f*/
                ++v26; /*0x595335*/
                v19 = v35[4]; /*0x595336*/
              }
              while ( v26 < v19 );
            }
            if ( v38 > v50 ) /*0x59534e*/
            {
              v50 = v38; /*0x595358*/
              v40 = v34; /*0x595364*/
            }
            if ( ++v34 >= *(_DWORD *)(a2 + 16) ) /*0x595379*/
              break; /*0x595379*/
            v4 = a2; /*0x595238*/
          }
          v7 = v35; /*0x59537f*/
          v4 = a2; /*0x595383*/
        }
        v29 = v7[2]; /*0x59538f*/
        v48 = (_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v40); /*0x595392*/
        if ( v7[4] < v29 ) /*0x59539b*/
          goto LABEL_70; /*0x59539b*/
        if ( !*((_BYTE *)v7 + 13) && v29 ) /*0x5953a6*/
          goto LABEL_72; /*0x5953a6*/
        v30 = v7[5]; /*0x5953a8*/
        if ( v30 <= 0 ) /*0x5953ad*/
          goto LABEL_72; /*0x5953ad*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v29 + v30, 0) ) /*0x5953b8*/
        {
LABEL_70:
          v31 = v7[4]; /*0x5953bf*/
          v32 = v7[1]; /*0x5953c2*/
          v7[4] = v31 + 1; /*0x5953c8*/
          *(_DWORD *)(v32 + 4 * v31) = *v48; /*0x5953d1*/
        }
        v9 = g_MapTileArray; /*0x5953d4*/
LABEL_72:
        v19 = v7[4]; /*0x5953da*/
        if ( v19 >= v36 ) /*0x5953e3*/
          return v7; /*0x5953e3*/
      }
    }
    return v7; /*0x5951a4*/
  }
  v20 = v7[2]; /*0x5951e1*/
  v21 = *(_DWORD **)(v4 + 4); /*0x5951e7*/
  if ( v7[4] < v20 /*0x595211*/
    || (*((_BYTE *)v7 + 13) || !v20)
    && (v22 = v7[5], v22 > 0)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v7 + 8))(v7, v20 + v22, 0) )
  {
    v23 = v7[4]; /*0x59521c*/
    v24 = v7[1]; /*0x59521f*/
    v7[4] = v23 + 1; /*0x595225*/
    *(_DWORD *)(v24 + 4 * v23) = *v21; /*0x59522a*/
    return v7; /*0x595235*/
  }
  return v7; /*0x594fbd*/
}


// ==== 0x00595400  ObjectClass::PlaceNeutralBuilding  this=ObjectClass  sig=csp ====
char __thiscall PlaceNeutralBuilding(_DWORD *this)
{
  _DWORD *v1; // ebx
  void *v2; // eax
  int Owner; // ebp
  void *v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ebp
  _WORD *v10; // edi
  char v11; // bl
  __int16 v12; // dx
  _DWORD *v13; // esi
  int v14; // eax
  char result; // al
  char v16; // [esp+13h] [ebp-39h]
  int v17; // [esp+14h] [ebp-38h] BYREF
  int *v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  int v20; // [esp+20h] [ebp-2Ch]
  _DWORD *v21; // [esp+24h] [ebp-28h]
  __int64 v22; // [esp+28h] [ebp-24h] BYREF
  __int64 v23; // [esp+30h] [ebp-1Ch]
  __int64 v24; // [esp+38h] [ebp-14h]
  _DWORD v25[3]; // [esp+40h] [ebp-Ch] BYREF

  v1 = this; /*0x595405*/
  v21 = this; /*0x59540e*/
  v2 = (void *)SuperWeaponTypeClass::FindByName(g_INI_Key_Neutral); /*0x595412*/
  Owner = HouseClass::FindOwner(v2); /*0x595425*/
  v16 = 0; /*0x595427*/
  v19 = 0; /*0x59542c*/
  v4 = __2_YAPAXI_Z(0x720u); /*0x595435*/
  if ( v4 ) /*0x59543c*/
  {
    v5 = MEMORY[0x8871E0]->DropZoneRadius[1] - 1; /*0x595451*/
    *(double *)&v24 = (double)(unsigned int)MEMORY[0x8871E0]->DropZoneRadius[1]; /*0x59545d*/
    do /*0x59548c*/
    {
      v22 = (unsigned int)Random::State(&g_Randomizer); /*0x59546b*/
      v6 = Math::RoundToInt((double)v22 * *(double *)&v24 * 2.328306437080797e-10); /*0x595485*/
    }
    while ( v6 > v5 ); /*0x59548c*/
    v18 = (int *)BuildingClass::Construct((int)v4, *(_DWORD *)(MEMORY[0x8871E0]->BridgeDestruction[2] + 4 * v6), Owner); /*0x5954a6*/
  }
  else
  {
    v18 = 0; /*0x5954ac*/
  }
  while ( v19 < 100 ) /*0x5954bb*/
  {
    v7 = v1[14] - 1; /*0x5954c4*/
    v23 = (unsigned int)v1[14]; /*0x5954ce*/
    *(double *)&v22 = (double)v23; /*0x5954d6*/
    do /*0x595501*/
    {
      v24 = (unsigned int)Random::State(&g_Randomizer); /*0x5954e4*/
      v8 = Math::RoundToInt((double)v24 * *(double *)&v22 * 2.328306437080797e-10); /*0x5954fa*/
    }
    while ( v8 > v7 ); /*0x595501*/
    v17 = *(_DWORD *)(v1[11] + 4 * v8); /*0x595513*/
    v9 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v17) + 283); /*0x595522*/
    v10 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v18[328] + 144))(v18[328], 1); /*0x595537*/
    v11 = 1; /*0x595539*/
    while ( *v10 != 0x7FFF || v10[1] != 0x7FFF ) /*0x595548*/
    {
      v12 = HIWORD(v17) + v10[1]; /*0x595556*/
      LOWORD(v20) = v17 + *v10; /*0x595561*/
      HIWORD(v20) = v12; /*0x595566*/
      LODWORD(v22) = v20; /*0x595575*/
      v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v22); /*0x59557e*/
      if ( v13[57] /*0x5955d6*/
        || !Cell::IsEmpty(v13)
        || *((char *)v13 + 283) != v9
        || v13[59] == 3
        || !Type::CheckAmbiguity(&MEMORY[0x87F7E8], (int)v13, 1)
        || *((_BYTE *)g_MapTileArray + 80 * *((__int16 *)v13 + 18) + 80 * unk_89C2DC * *((__int16 *)v13 + 19) + 69) )
      {
        v11 = 0; /*0x5955de*/
      }
      v10 += 2; /*0x5955e0*/
      if ( !v11 ) /*0x5955e5*/
        goto LABEL_24; /*0x5955e5*/
    }
    v25[0] = ((__int16)v17 << 8) + 128; /*0x595608*/
    v25[2] = 0; /*0x595616*/
    v14 = *v18; /*0x59561e*/
    v25[1] = (SHIWORD(v17) << 8) + 128; /*0x595620*/
    if ( (*(unsigned __int8 (__thiscall **)(int *, _DWORD *, _DWORD))(v14 + 216))(v18, v25, 0) ) /*0x595629*/
      v16 = 1; /*0x595633*/
LABEL_24:
    result = v16; /*0x595638*/
    ++v19; /*0x595643*/
    if ( v16 ) /*0x595647*/
      return result; /*0x595647*/
    v1 = v21; /*0x5954b2*/
  }
  result = 0; /*0x595655*/
  if ( v18 ) /*0x595663*/
    return (*(int (__thiscall **)(int *, int))(*v18 + 32))(v18, 1); /*0x595669*/
  return result; /*0x59564d*/
}


// ==== 0x00595680  MapSeedClass::Constructor  this=MapSeedClass  sig=csp ====
int __thiscall MapSeedClass::Constructor(int this)
{
  #72 *StringCSF; // eax

  LoadOptions::LoadOptions((_DWORD *)this); /*0x595684*/
  *(_DWORD *)(this + 56) = 0; /*0x595693*/
  *(_DWORD *)(this + 60) = 1; /*0x595696*/
  *(_DWORD *)(this + 64) = 1; /*0x595699*/
  *(_DWORD *)(this + 68) = 0; /*0x59569c*/
  *(_DWORD *)(this + 72) = 1; /*0x59569f*/
  *(_DWORD *)(this + 76) = 0; /*0x5956a2*/
  *(_DWORD *)(this + 80) = 2; /*0x5956a5*/
  *(_DWORD *)(this + 84) = 0; /*0x5956ac*/
  *(_DWORD *)(this + 88) = 0; /*0x5956af*/
  *(_DWORD *)(this + 92) = 0; /*0x5956b2*/
  *(_DWORD *)(this + 96) = 0; /*0x5956b5*/
  *(_DWORD *)(this + 100) = 0; /*0x5956b8*/
  *(_DWORD *)(this + 104) = 0; /*0x5956bb*/
  *(_DWORD *)(this + 108) = 0; /*0x5956be*/
  *(_DWORD *)(this + 112) = 0; /*0x5956c1*/
  *(_DWORD *)(this + 116) = -1; /*0x5956c4*/
  *(_DWORD *)this = &MapSeedClass::`vftable'; /*0x5956cb*/
  *(_DWORD *)(this + 8) = &off_82BA60; /*0x5956d1*/
  *(_WORD *)(this + 120) = 0; /*0x5956d8*/
  *(_DWORD *)(this + 12) = this + 120; /*0x5956db*/
  if ( Map_Create_734FD0() ) /*0x5956de*/
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 3934); /*0x5956f8*/
    wcscpy((#72 *)(this + 120), StringCSF); /*0x5956ff*/
  }
  return this; /*0x595709*/
}


// ==== 0x00595710  CSFClass::CopyString  this=MapResourceClass  sig=csp ====
wchar_t *__thiscall sub_595710(wchar_t *this)
{
  wchar_t *StringCSF; // eax

  StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 3934); /*0x595724*/
  return wcscpy(this + 60, StringCSF); /*0x595736*/
}


// ==== 0x00595740  MapResourceClass::Constructor  this=MapResourceClass  sig=csp ====
int __thiscall sub_595740(int this)
{
  MapSeedClass::Constructor(this); /*0x595745*/
  *(_DWORD *)(this + 376) = 0; /*0x595756*/
  *(_DWORD *)(this + 380) = 0; /*0x59575c*/
  *(_DWORD *)(this + 384) = 0; /*0x595762*/
  *(_DWORD *)(this + 388) = 0; /*0x595768*/
  DynamicVectorClass::Construct((_DWORD *)(this + 392), 0, 0); /*0x59576e*/
  *(_DWORD *)(this + 392) = &vt_TypeList_int; /*0x595773*/
  DynamicVectorClass::Construct((_DWORD *)(this + 420), 0, 0); /*0x595783*/
  *(_DWORD *)(this + 420) = &vt_TypeList_int; /*0x595788*/
  DynamicVectorClass::Construct((_DWORD *)(this + 448), 0, 0); /*0x595798*/
  *(_DWORD *)(this + 448) = &vt_TypeList_int; /*0x59579d*/
  DynamicVectorClass::Construct((_DWORD *)(this + 476), 0, 0); /*0x5957ad*/
  *(_DWORD *)(this + 476) = &vt_TypeList_int; /*0x5957b2*/
  VectorClass::Construct((_DWORD *)(this + 504), 0, 0); /*0x5957c2*/
  *(_DWORD *)(this + 524) = 10; /*0x5957c7*/
  *(_DWORD *)(this + 520) = 0; /*0x5957ce*/
  *(_DWORD *)(this + 504) = &vt_TypeList_int; /*0x5957d1*/
  DynamicVectorClass::Construct((_DWORD *)(this + 532), 0, 0); /*0x5957e1*/
  *(_DWORD *)(this + 532) = &vt_TypeList_int; /*0x5957e6*/
  DynamicVectorClass::Construct((_DWORD *)(this + 560), 0, 0); /*0x5957f6*/
  *(_DWORD *)(this + 560) = &vt_TypeList_int; /*0x5957fb*/
  DynamicVectorClass::Construct((_DWORD *)(this + 588), 0, 0); /*0x59580b*/
  *(_DWORD *)(this + 588) = &vt_TypeList_int; /*0x595810*/
  VectorClass::Construct((_DWORD *)(this + 616), 0, 0); /*0x595820*/
  *(_DWORD *)(this + 636) = 10; /*0x595825*/
  *(_DWORD *)(this + 632) = 0; /*0x59582c*/
  *(_DWORD *)(this + 616) = &vt_TypeList_int; /*0x59582f*/
  DynamicVectorClass::Construct((_DWORD *)(this + 644), 0, 0); /*0x59583f*/
  *(_DWORD *)(this + 644) = &vt_TypeList_int; /*0x595844*/
  DynamicVectorClass::Construct((_DWORD *)(this + 672), 0, 0); /*0x595854*/
  *(_DWORD *)(this + 672) = &vt_TypeList_int; /*0x595859*/
  *(_DWORD *)(this + 700) = 2500; /*0x59585f*/
  *(_DWORD *)(this + 704) = 5500; /*0x595873*/
  DynamicVectorClass::BuildingTypeConstructor((_DWORD *)(this + 708), 0, 0); /*0x59587d*/
  *(_DWORD *)(this + 708) = &vt_TypeList_BuildingTypeClass_const; /*0x595882*/
  VectorClass::BuildingTypeConstructor((_DWORD *)(this + 736), 0, 0); /*0x595892*/
  *(_DWORD *)(this + 756) = 10; /*0x595897*/
  *(_DWORD *)(this + 752) = 0; /*0x59589e*/
  *(_DWORD *)(this + 736) = &vt_TypeList_BuildingTypeClass_const; /*0x5958a1*/
  *(_DWORD *)(this + 764) = 500; /*0x5958a7*/
  *(_BYTE *)(this + 768) = 1; /*0x5958b1*/
  *(_DWORD *)(this + 772) = 0; /*0x5958b8*/
  *(_DWORD *)(this + 780) = 4; /*0x5958be*/
  *(_BYTE *)(this + 784) = 0; /*0x5958c8*/
  return this; /*0x5958d0*/
}


// ==== 0x005958E0  RandomMap::CleanupRandomMapData  this=RandomMap  sig=csp ====
void __thiscall CleanupRandomMapData(int this)
{
  int v2; // ecx
  int v3; // eax
  int i; // ebp
  void *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void *v7; // edi
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax

  if ( g_MapTileArray ) /*0x5958ee*/
  {
    v2 = unk_89C2DC * unk_89C2DC; /*0x5958f6*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x5958fb*/
    {
      v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 24) = -1; /*0x59590c*/
        *(_DWORD *)((char *)g_MapTileArray + v3 - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x595927*/
  {
    v5 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*((_DWORD **)g_RandomMap_TerrainState + i)); /*0x595938*/
      __3_YAXPAX_Z(v5); /*0x59593e*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59594e*/
  if ( g_MapTileArray ) /*0x595957*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x59595a*/
    g_MapTileArray = 0; /*0x595962*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))(this + 376); /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *(_DWORD *)(this + 376) = 0; /*0x595978*/
  }
  v7 = *(void **)(this + 380); /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(*(_DWORD **)(this + 380)); /*0x59598a*/
    __3_YAXPAX_Z(v7); /*0x595990*/
    *(_DWORD *)(this + 380) = 0; /*0x595998*/
  }
  *(_DWORD *)(this + 736) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959a4*/
  DynamicVectorClass::Destroy(this + 736); /*0x5959aa*/
  *(_DWORD *)(this + 708) = &vt_VectorClass_BuildingTypeClass_const; /*0x5959b5*/
  DynamicVectorClass::Destroy(this + 708); /*0x5959bb*/
  *(_DWORD *)(this + 672) = &vt_VectorClass_int; /*0x5959cb*/
  VectorClass::Destroy(this + 672); /*0x5959cd*/
  *(_DWORD *)(this + 644) = &vt_VectorClass_int; /*0x5959d8*/
  VectorClass::Destroy(this + 644); /*0x5959da*/
  v8 = *(void **)(this + 620); /*0x5959df*/
  *(_DWORD *)(this + 616) = &vt_VectorClass_int; /*0x5959e5*/
  if ( v8 && *(_BYTE *)(this + 629) ) /*0x5959ef*/
  {
    __3_YAXPAX_Z(v8); /*0x5959f8*/
    *(_DWORD *)(this + 620) = 0; /*0x595a00*/
  }
  *(_BYTE *)(this + 629) = 0; /*0x595a06*/
  *(_DWORD *)(this + 624) = 0; /*0x595a0c*/
  v9 = *(void **)(this + 592); /*0x595a12*/
  *(_DWORD *)(this + 588) = &vt_VectorClass_int; /*0x595a18*/
  if ( v9 && *(_BYTE *)(this + 601) ) /*0x595a22*/
  {
    __3_YAXPAX_Z(v9); /*0x595a2b*/
    *(_DWORD *)(this + 592) = 0; /*0x595a33*/
  }
  *(_BYTE *)(this + 601) = 0; /*0x595a39*/
  *(_DWORD *)(this + 596) = 0; /*0x595a3f*/
  v10 = *(void **)(this + 564); /*0x595a45*/
  *(_DWORD *)(this + 560) = &vt_VectorClass_int; /*0x595a4b*/
  if ( v10 && *(_BYTE *)(this + 573) ) /*0x595a55*/
  {
    __3_YAXPAX_Z(v10); /*0x595a5e*/
    *(_DWORD *)(this + 564) = 0; /*0x595a66*/
  }
  *(_BYTE *)(this + 573) = 0; /*0x595a6c*/
  *(_DWORD *)(this + 568) = 0; /*0x595a72*/
  v11 = *(void **)(this + 536); /*0x595a78*/
  *(_DWORD *)(this + 532) = &vt_VectorClass_int; /*0x595a7e*/
  if ( v11 && *(_BYTE *)(this + 545) ) /*0x595a88*/
  {
    __3_YAXPAX_Z(v11); /*0x595a91*/
    *(_DWORD *)(this + 536) = 0; /*0x595a99*/
  }
  *(_BYTE *)(this + 545) = 0; /*0x595a9f*/
  *(_DWORD *)(this + 540) = 0; /*0x595aa5*/
  v12 = *(void **)(this + 508); /*0x595aab*/
  *(_DWORD *)(this + 504) = &vt_VectorClass_int; /*0x595ab1*/
  if ( v12 && *(_BYTE *)(this + 517) ) /*0x595abb*/
  {
    __3_YAXPAX_Z(v12); /*0x595ac4*/
    *(_DWORD *)(this + 508) = 0; /*0x595acc*/
  }
  *(_BYTE *)(this + 517) = 0; /*0x595ad2*/
  *(_DWORD *)(this + 512) = 0; /*0x595ad8*/
  v13 = *(void **)(this + 480); /*0x595ade*/
  *(_DWORD *)(this + 476) = &vt_VectorClass_int; /*0x595ae4*/
  if ( v13 && *(_BYTE *)(this + 489) ) /*0x595aee*/
  {
    __3_YAXPAX_Z(v13); /*0x595af7*/
    *(_DWORD *)(this + 480) = 0; /*0x595aff*/
  }
  *(_BYTE *)(this + 489) = 0; /*0x595b05*/
  *(_DWORD *)(this + 484) = 0; /*0x595b0b*/
  v14 = *(void **)(this + 452); /*0x595b11*/
  *(_DWORD *)(this + 448) = &vt_VectorClass_int; /*0x595b17*/
  if ( v14 && *(_BYTE *)(this + 461) ) /*0x595b21*/
  {
    __3_YAXPAX_Z(v14); /*0x595b2a*/
    *(_DWORD *)(this + 452) = 0; /*0x595b32*/
  }
  *(_BYTE *)(this + 461) = 0; /*0x595b38*/
  *(_DWORD *)(this + 456) = 0; /*0x595b3e*/
  v15 = *(void **)(this + 424); /*0x595b44*/
  *(_DWORD *)(this + 420) = &vt_VectorClass_int; /*0x595b4a*/
  if ( v15 && *(_BYTE *)(this + 433) ) /*0x595b54*/
  {
    __3_YAXPAX_Z(v15); /*0x595b5d*/
    *(_DWORD *)(this + 424) = 0; /*0x595b65*/
  }
  *(_BYTE *)(this + 433) = 0; /*0x595b6b*/
  *(_DWORD *)(this + 428) = 0; /*0x595b71*/
  v16 = *(void **)(this + 396); /*0x595b77*/
  *(_DWORD *)(this + 392) = &vt_VectorClass_int; /*0x595b7d*/
  if ( v16 && *(_BYTE *)(this + 405) ) /*0x595b87*/
  {
    __3_YAXPAX_Z(v16); /*0x595b90*/
    *(_DWORD *)(this + 396) = 0; /*0x595b98*/
  }
  *(_BYTE *)(this + 405) = 0; /*0x595ba0*/
  *(_DWORD *)(this + 400) = 0; /*0x595ba6*/
  LoadOptions::Cleanup((_DWORD *)this); /*0x595bac*/
}


// ==== 0x00595BC0  CCFileClass::Load  this=CCFileClass  sig=csp ====
LONG __thiscall sub_595BC0(char (*this)())
{
  HWND Dialog; // edi
  int v3; // ecx
  _DWORD *v4; // esi
  LONG dwNewLong; // [esp+Ch] [ebp-28h] BYREF
  int v7[9]; // [esp+10h] [ebp-24h] BYREF

  dwNewLong = 0; /*0x595bcf*/
  RandomMap::LoadConfig(dword_ABDFD8); /*0x595bd3*/
  Dialog = (HWND)CreateDialog(0x105u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SkirmishMapGen::DlgProc, 0); /*0x595be8*/
  if ( Dialog ) /*0x595bec*/
  {
    off_82AF14 = this; /*0x595bf2*/
    dword_ABDFEC = (int)this; /*0x595bfc*/
    SetWindowLongA(Dialog, 8, (LONG)&dwNewLong); /*0x595c02*/
    SendMessageA(Dialog, 0x4A9u, 0, 1); /*0x595c11*/
    Dialog::Show(Dialog); /*0x595c19*/
    while ( !dwNewLong ) /*0x595c22*/
    {
      if ( Dialog::PumpMessages() == 1 ) /*0x595c2b*/
        break; /*0x595c2b*/
      if ( this ) /*0x595c2f*/
        this(); /*0x595c31*/
      LOBYTE(v3) = 0; /*0x595c33*/
      ScreenSaver::Process(v3); /*0x595c35*/
    }
    Dialog::Destroy(Dialog); /*0x595c42*/
  }
  v4 = g_Map_TiberiumConfig; /*0x595c47*/
  off_82AF14 = Event_Dispatch::Return0; /*0x595c4d*/
  dword_ABDFEC = 0; /*0x595c59*/
  if ( g_Map_TiberiumConfig ) /*0x595c5f*/
  {
    if ( *(_DWORD *)g_Map_TiberiumConfig ) /*0x595c61*/
    {
      RawFileClass::Construct(v7, (int)stru_829ABC); /*0x595c6e*/
      CompressScreenshot(v7, *(int **)g_Map_TiberiumConfig, &MEMORY[0x885780]); /*0x595c84*/
      RawFileClass::Dtor(v7); /*0x595c8d*/
      v4 = g_Map_TiberiumConfig; /*0x595c92*/
    }
    if ( v4 ) /*0x595c9a*/
    {
      ComPtr::Dtor(v4); /*0x595c9e*/
      __3_YAXPAX_Z(v4); /*0x595ca4*/
    }
    g_Map_TiberiumConfig = 0; /*0x595cac*/
  }
  if ( dword_ABE150 ) /*0x595cba*/
  {
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x595cc0*/
    dword_ABE150 = 0; /*0x595cc2*/
  }
  return dwNewLong; /*0x595ccc*/
}


// ==== 0x00595CE0  ObjectClass::CleanupRandomMapCache  this=ObjectClass  sig=csp ====
void CleanupRandomMapCache()
{
  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // esi
  void **v7; // eax
  char *v8; // ecx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  FILETIME FileTime2; // [esp+10h] [ebp-20h] BYREF
  void **v14; // [esp+18h] [ebp-18h] BYREF
  void *Block; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  char v17; // [esp+25h] [ebp-Bh]
  int j; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(0, 0); /*0x595cef*/
  v14 = &vt_DynamicVectorClass_WIN32_FIND_DATAA; /*0x595cf4*/
  v19 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA(aRmcacheMmp, i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v16 || (v17 || !v16) && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v14[2])(&v14, v19 + v16, 0) ) /*0x595d5f*/
    {
      v2 = j++; /*0x595d6a*/
      *((_DWORD *)Block + v2) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u) )
    {
      if ( j < v16 /*0x595dc2*/
        || (v17 || !v16)
        && v19 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v14[2])(&v14, v19 + v16, 0) )
      {
        v3 = j++; /*0x595dcd*/
        *((_DWORD *)Block + v3) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  __3_YAXPAX_Z(i); /*0x595dfa*/
  v4 = j; /*0x595dff*/
  if ( j <= 70 ) /*0x595e09*/
  {
LABEL_36:
    v7 = (void **)Block; /*0x595f3d*/
    goto LABEL_37; /*0x595f3d*/
  }
  while ( 2 ) /*0x595e1b*/
  {
    v5 = -1; /*0x595e1b*/
    v6 = 0; /*0x595e1e*/
    FileTime2.dwLowDateTime = -1; /*0x595e22*/
    FileTime2.dwHighDateTime = 0x7FFFFFFF; /*0x595e26*/
    if ( v4 <= 0 ) /*0x595e2e*/
      goto LABEL_36; /*0x595e2e*/
    v7 = (void **)Block; /*0x595e34*/
    do /*0x595ee3*/
    {
      v8 = (char *)v7[v6]; /*0x595e38*/
      if ( *((_DWORD *)v8 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          v7 = (void **)Block; /*0x595e56*/
          v5 = v6; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 12); /*0x595e62*/
          goto LABEL_29; /*0x595e70*/
        }
      }
      else if ( *((_DWORD *)v8 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v8 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          v7 = (void **)Block; /*0x595e89*/
          v5 = v6; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 4); /*0x595e95*/
          goto LABEL_29; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((_DWORD *)v8 + 6) ) /*0x595eaa*/
          goto LABEL_29; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v8 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          v7 = (void **)Block; /*0x595ebc*/
          v5 = v6; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)Block + v6) + 20); /*0x595ec8*/
          goto LABEL_29; /*0x595ed6*/
        }
      }
      v7 = (void **)Block; /*0x595ed8*/
LABEL_29:
      ++v6; /*0x595edc*/
    }
    while ( v6 < j ); /*0x595ee3*/
    if ( v5 != -1 ) /*0x595eec*/
    {
      if ( !DeleteFileA((LPCSTR)v7[v5] + 44) ) /*0x595ef5*/
        goto LABEL_36; /*0x595ef5*/
      __3_YAXPAX_Z(*((void **)Block + v5)); /*0x595f03*/
      v9 = j; /*0x595f08*/
      if ( v5 < j ) /*0x595f11*/
      {
        v9 = j - 1; /*0x595f13*/
        v10 = v5; /*0x595f14*/
        for ( j = v9; v10 < j; v9 = j ) /*0x595f1c*/
        {
          ++v10; /*0x595f22*/
          *((_DWORD *)Block + v10 - 1) = *((_DWORD *)Block + v10); /*0x595f26*/
        }
      }
      v4 = v9; /*0x595f32*/
      if ( v9 <= 70 ) /*0x595f37*/
        goto LABEL_36; /*0x595f37*/
      continue; /*0x595f37*/
    }
    break;
  }
LABEL_37:
  if ( j ) /*0x595f4b*/
  {
    do /*0x595f85*/
    {
      __3_YAXPAX_Z(*v7); /*0x595f50*/
      v11 = j == 0; /*0x595f5c*/
      if ( j > 0 ) /*0x595f5e*/
      {
        v12 = 0; /*0x595f61*/
        v11 = j-- == 1; /*0x595f63*/
        if ( j > 0 ) /*0x595f69*/
        {
          do /*0x595f7d*/
          {
            ++v12; /*0x595f6f*/
            *((_DWORD *)Block + v12 - 1) = *((_DWORD *)Block + v12); /*0x595f73*/
          }
          while ( v12 < j ); /*0x595f7d*/
          v11 = j == 0; /*0x595f7f*/
        }
      }
      v7 = (void **)Block; /*0x595f81*/
    }
    while ( !v11 ); /*0x595f85*/
  }
  v14 = &vt_VectorClass_WIN32_FIND_DATAA; /*0x595f89*/
  if ( v7 ) /*0x595f91*/
  {
    if ( v17 ) /*0x595f99*/
      __3_YAXPAX_Z(v7); /*0x595f9c*/
  }
}


// ==== 0x00595FB0  GenerateRandomMapAndMinimap  this=-  sig=csp ====
_DWORD *__fastcall GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)())
{
  _DWORD *v4; // eax
  char *v5; // esi
  void *v6; // eax
  void *v7; // eax
  void *v8; // esi
  void *v9; // esi
  void *v10; // eax
  HWND *v11; // eax
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD v15[2]; // [esp+10h] [ebp-260h] BYREF
  _DWORD v16[2]; // [esp+18h] [ebp-258h] BYREF
  int v17[9]; // [esp+20h] [ebp-250h] BYREF
  _DWORD v18[22]; // [esp+44h] [ebp-22Ch] BYREF
  _BYTE v19[12]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(v15); /*0x595fc2*/
  v15[0] = &vt_rc_ptr_WDTTerritory; /*0x595fd8*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x595fe5*/
  {
    v4 = FindWDTTerritoryClass(v16, *(int *)MEMORY[0xA8B240]); /*0x595ff1*/
    ComPtr::Set(v15, v4[1]); /*0x595ffe*/
    v16[0] = &vt_rc_ptr_WDTTerritory; /*0x596007*/
    ComPtr::Release(v16); /*0x59600b*/
  }
  if ( v15[1] ) /*0x596016*/
    dword_ABE028 = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, MEMORY[0x82BB38], 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  __3_YAXPAX_Z(v5); /*0x596060*/
  strncat(Destination, MEMORY[0x82BB30], 0x80u); /*0x596077*/
  CCFileClass::Construct(v18, Destination); /*0x59608b*/
  if ( CCFileClass::Open(v18, 0) ) /*0x596097*/
  {
    v6 = g_Map_TiberiumConfig; /*0x5960a4*/
    if ( !g_Map_TiberiumConfig ) /*0x5960ab*/
    {
      v7 = __2_YAPAXI_Z(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (void *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      g_Map_TiberiumConfig = v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP((char **)v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct(v17, (int)stru_829ABC); /*0x5960e7*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &MEMORY[0x885780]); /*0x5960fc*/
      v8 = g_Map_TiberiumConfig; /*0x596101*/
      if ( g_Map_TiberiumConfig ) /*0x596109*/
      {
        ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59610d*/
        __3_YAXPAX_Z(v8); /*0x596113*/
      }
      g_Map_TiberiumConfig = 0; /*0x59611f*/
      RawFileClass::Dtor(v17); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = g_Map_TiberiumConfig; /*0x59612f*/
    if ( g_Map_TiberiumConfig ) /*0x596137*/
    {
      ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59613b*/
      __3_YAXPAX_Z(v9); /*0x596141*/
    }
    g_Map_TiberiumConfig = 0; /*0x596149*/
  }
  off_82AF14 = a2; /*0x596154*/
  dword_ABDFEC = (int)a2; /*0x59615d*/
  if ( dword_ABE04C == -1 ) /*0x596163*/
    dword_ABE04C = Random::Range(MEMORY[0x886B88], 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((int *)dword_ABDFD8, 1, hDlg); /*0x596182*/
  MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59618d*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x5961a2*/
    MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x5961aa*/
  if ( dword_ABE150 ) /*0x5961b7*/
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5961bd*/
  v10 = __2_YAPAXI_Z(0x178u); /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (HWND *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  dword_ABE150 = (int)v11; /*0x5961e7*/
  qmemcpy(v11, dword_ABDFD8, 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)MEMORY[0xA8B230], g_INI_Key_RandomMap); /*0x5961f9*/
  LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12); /*0x596200*/
  v13 = g_Map_TiberiumConfig; /*0x596205*/
  if ( g_Map_TiberiumConfig ) /*0x59620f*/
  {
    if ( *(_DWORD *)g_Map_TiberiumConfig ) /*0x596215*/
    {
      RawFileClass::Construct(v17, (int)stru_829ABC); /*0x596222*/
      CompressScreenshot(v17, *(int **)g_Map_TiberiumConfig, &MEMORY[0x885780]); /*0x596237*/
      if ( FindFirstFileA(PathName, &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA(PathName, 0); /*0x59625a*/
      CopyFileA(stru_829ABC, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(); /*0x596274*/
      RawFileClass::Dtor(v17); /*0x59627d*/
      v13 = g_Map_TiberiumConfig; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      __3_YAXPAX_Z(v13); /*0x596294*/
    }
    g_Map_TiberiumConfig = 0; /*0x59629c*/
  }
  if ( dword_ABE150 ) /*0x5962aa*/
  {
    (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x5962b0*/
    dword_ABE150 = 0; /*0x5962b2*/
  }
LABEL_39:
  v18[0] = &vt_CCFileClass; /*0x5962b8*/
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  v18[0] = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor(v18); /*0x5962df*/
  v15[0] = &vt_rc_ptr_WDTTerritory; /*0x5962e8*/
  return ComPtr::Release(v15); /*0x5962f5*/
}


// ==== 0x00596300  SkirmishMapGen::DlgProc  this=SkirmishMapGen  sig=csp ====
int __stdcall SkirmishMapGen_DlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  _DWORD *WindowLongA; // ecx
  HWND v7; // eax
  HWND v8; // eax
  int *v9; // edx
  int v10; // edi
  _DWORD *v11; // ebx
  int v12; // eax
  int v13; // ecx
  int *i; // esi
  int v15; // edx
  int v16; // esi
  HWND v17; // eax
  HWND v18; // eax
  HWND v19; // eax
  HWND v20; // eax
  HWND v21; // eax
  HWND v22; // eax
  HWND v23; // eax
  HWND v24; // eax
  HWND v25; // eax
  HWND v26; // eax
  HWND v27; // eax
  HWND v28; // eax
  HWND v29; // eax
  wchar_t *String; // eax
  HWND v31; // eax
  HWND v32; // eax
  HWND v33; // eax
  HWND v34; // eax
  HWND v35; // eax
  HWND v36; // eax
  HWND v37; // eax
  HWND v38; // eax
  HWND v39; // eax
  HWND v40; // eax
  HWND v41; // eax
  HWND v42; // eax
  HWND v43; // eax
  void *v44; // eax
  HWND *v45; // eax
  wchar_t *v46; // eax
  void *v47; // edi
  HWND v48; // eax
  HWND v49; // eax
  HWND v50; // eax
  unsigned __int8 v51; // si
  HWND v52; // eax
  HWND v53; // eax
  HWND v54; // eax
  HWND v55; // eax
  HWND v56; // eax
  HWND v57; // eax
  HWND DlgItem; // eax
  HWND v59; // eax
  HWND v60; // eax
  HWND v61; // eax
  HWND v62; // eax
  HWND v63; // [esp+20h] [ebp+10h]
  unsigned __int8 v64; // [esp+20h] [ebp+10h]
  unsigned __int8 v65; // [esp+20h] [ebp+10h]
  unsigned __int8 v66; // [esp+20h] [ebp+10h]

  result = BaseDialogProc(hWnd, a2, a3, (unsigned int)a4); /*0x59631a*/
  if ( result ) /*0x596321*/
    return result; /*0x596321*/
  WindowLongA = (_DWORD *)GetWindowLongA(hWnd, 8); /*0x596330*/
  v63 = (HWND)WindowLongA; /*0x596338*/
  if ( a2 > 0x114 ) /*0x59633c*/
  {
    if ( a2 == 1175 ) /*0x596b71*/
    {
      dword_82B02C = -1; /*0x596b83*/
      DlgItem = GetDlgItem(hWnd, 1568); /*0x596b8d*/
      EnableWindow(DlgItem, MEMORY[0xA8ED6B] == 0); /*0x596ba6*/
      if ( dword_ABE04C == -1 ) /*0x596baf*/
      {
        dword_ABE04C = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 0xFFFF); /*0x596bc8*/
        byte_ABE2D8 = 1; /*0x596bcd*/
      }
      byte_82B030 = 1; /*0x596bda*/
      RandomMap::SetupDialog(dword_ABDFD8, hWnd); /*0x596be1*/
      v66 = LoadOptions::Check((const char **)dword_ABDFD8); /*0x596bf6*/
      v59 = GetDlgItem(hWnd, 1730); /*0x596bfa*/
      if ( v59 ) /*0x596c02*/
        EnableWindow(v59, v66); /*0x596c0e*/
      v60 = GetDlgItem(hWnd, 1732); /*0x596c16*/
      if ( v60 ) /*0x596c1a*/
        EnableWindow(v60, v66); /*0x596c24*/
      v61 = GetDlgItem(hWnd, 1733); /*0x596c2c*/
      if ( v61 ) /*0x596c30*/
        EnableWindow(v61, 0); /*0x596c35*/
      v62 = GetDlgItem(hWnd, 1731); /*0x596c3d*/
      if ( v62 ) /*0x596c41*/
        EnableWindow(v62, 0); /*0x596c46*/
    }
    return 0; /*0x596c46*/
  }
  switch ( a2 ) /*0x596342*/
  {
    case 0x114u: /*0x596342*/
      if ( a4 && GetDlgCtrlID(a4) == 1003 ) /*0x596b18*/
      {
        v56 = GetDlgItem(hWnd, 1733); /*0x596b2a*/
        if ( v56 ) /*0x596b34*/
          EnableWindow(v56, 0); /*0x596b39*/
        v57 = GetDlgItem(hWnd, 1731); /*0x596b41*/
        if ( v57 ) /*0x596b45*/
          EnableWindow(v57, 0); /*0x596b4a*/
        goto LABEL_18; /*0x596b4a*/
      }
      return 0; /*0x596b18*/
    case 0xFu: /*0x596342*/
      if ( g_Map_TiberiumConfig ) /*0x596aad*/
      {
        v55 = GetDlgItem(hWnd, 1128); /*0x596ab5*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(v55) ) /*0x596abd*/
          Skirmish::RenderPreview(g_Map_TiberiumConfig, hWnd); /*0x596acd*/
      }
      if ( LoadScreen::IsActive(MEMORY[0xAC4F58]) ) /*0x596ad7*/
        LoadScreen::Render((int)MEMORY[0xAC4F58], a3, (int)hWnd, NAN); /*0x596aed*/
      ValidateRect(hWnd, 0); /*0x596af5*/
      return 0; /*0x596afe*/
    case 0x111u: /*0x596342*/
      if ( (unsigned __int16)a3 > 0x621u ) /*0x596369*/
      {
        switch ( (__int16)a3 ) /*0x5968c5*/
        {
          case 1730: /*0x5968c5*/
            Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x596945*/
            if ( (unsigned __int8)LoadOptions::Run(dword_ABDFD8) ) /*0x59694f*/
            {
              byte_82B030 = 0; /*0x596963*/
              v53 = GetDlgItem(hWnd, 1568); /*0x59696a*/
              PostMessageA(hWnd, 0x111u, 0x620u, (LPARAM)v53); /*0x59697c*/
            }
            while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x59698a*/
              (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x596999*/
            RandomMap::SetupDialog(dword_ABDFD8, hWnd); /*0x5969b1*/
            return 0; /*0x5969bc*/
          case 1731: /*0x5968c5*/
            Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x5968d2*/
            ShowSaveLoadDialog(&word_ABE050); /*0x5968e1*/
            v64 = LoadOptions::Check((const char **)dword_ABDFD8); /*0x5968fc*/
            v50 = GetDlgItem(hWnd, 1730); /*0x596900*/
            v51 = v64; /*0x596908*/
            if ( v50 ) /*0x59690e*/
              EnableWindow(v50, v64); /*0x59691a*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596922*/
            if ( !v52 ) /*0x596926*/
              return 0; /*0x596926*/
            goto LABEL_53; /*0x596926*/
          case 1732: /*0x5968c5*/
            Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x5969c5*/
            Options::PrepareSaveLoadDlg(dword_ABDFD8); /*0x5969cf*/
            v65 = LoadOptions::Check((const char **)dword_ABDFD8); /*0x5969ea*/
            v54 = GetDlgItem(hWnd, 1730); /*0x5969ee*/
            v51 = v65; /*0x5969f6*/
            if ( v54 ) /*0x5969fc*/
              EnableWindow(v54, v65); /*0x596a08*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596a10*/
            if ( !v52 ) /*0x596a14*/
              return 0; /*0x596a14*/
LABEL_53:
            EnableWindow(v52, v51); /*0x59692c*/
            return 0; /*0x59693c*/
          case 1733: /*0x5968c5*/
            Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x596a33*/
            if ( MEMORY[0xA8ED6B] ) /*0x596a3f*/
            {
              RandomMap::Generate((int *)dword_ABDFD8, 0, hWnd); /*0x596a49*/
            }
            else if ( g_Map_TiberiumConfig && *(_DWORD *)g_Map_TiberiumConfig /*0x596a72*/
                   || (RandomMap::Generate((int *)dword_ABDFD8, 1, hWnd), !MEMORY[0xA8ED6B]) )
            {
LABEL_69:
              *(_DWORD *)v63 = 1; /*0x596a90*/
              return 1; /*0x596aa3*/
            }
            ScenarioClass::SetFileName((char *)MEMORY[0xA8B230], MEMORY[0x82BB50]); /*0x596a7f*/
            SaveScenarioToINI(MEMORY[0x82BB44]); /*0x596a8b*/
            goto LABEL_69; /*0x596a8b*/
          default:
            return 0;
        }
      }
      if ( (unsigned __int16)a3 != 1569 ) /*0x59636f*/
      {
        if ( (unsigned __int16)a3 <= 0x5C0u ) /*0x59637a*/
        {
          if ( (unsigned __int16)a3 == 1472 ) /*0x596380*/
          {
            *WindowLongA = 2; /*0x5963fb*/
            return 1; /*0x596407*/
          }
          if ( ((unsigned __int16)a3 == 1002 || (unsigned __int16)a3 > 0x404u && (unsigned __int16)a3 <= 0x408u) /*0x5963a5*/
            && HIWORD(a3) == 1 )
          {
            v7 = GetDlgItem(hWnd, 1733); /*0x5963b7*/
            if ( v7 ) /*0x5963c1*/
              EnableWindow(v7, 0); /*0x5963c6*/
            v8 = GetDlgItem(hWnd, 1731); /*0x5963ce*/
            if ( v8 ) /*0x5963d2*/
              EnableWindow(v8, 0); /*0x5963d7*/
LABEL_18:
            Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x5963d9*/
            InvalidateRect(hWnd, 0, 0); /*0x5963e9*/
            return 0; /*0x5963f5*/
          }
          return 0; /*0x5963a5*/
        }
        if ( (unsigned __int16)a3 == 1568 ) /*0x59640f*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x59641d*/
          if ( byte_82B030 ) /*0x596427*/
          {
            byte_ABE2D8 = 1; /*0x596429*/
          }
          else
          {
            byte_ABE2D8 = 0; /*0x596432*/
            byte_82B030 = 1; /*0x596439*/
          }
          Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x596446*/
          dword_ABED0C = 0; /*0x59645c*/
          v9 = &dword_ABE328; /*0x596464*/
          memset32(dword_ABE304, dword_ABE300, 8u); /*0x596469*/
          do /*0x596479*/
          {
            *v9 = 0; /*0x59646b*/
            v9[1] = 0; /*0x59646d*/
            v9 += 2; /*0x596470*/
          }
          while ( (int)v9 < (int)&dbl_ABE368 ); /*0x596479*/
          v10 = 0; /*0x596480*/
          dword_ABDFD4 = 0; /*0x596484*/
          dword_ABDFD0 = 0; /*0x59648a*/
          dword_ABEC90 = 0; /*0x596490*/
          dword_ABECD0 = 0; /*0x596496*/
          if ( MEMORY[0xA8B230] ) /*0x59649c*/
          {
            *((_DWORD *)MEMORY[0xA8B230] + 1103) = 0; /*0x5964a2*/
            v11 = MEMORY[0xA8B230]; /*0x5964a8*/
            if ( *((int *)MEMORY[0xA8B230] + 1103) > 0 ) /*0x5964b4*/
            {
              v12 = 1104; /*0x5964b6*/
              v13 = 1136; /*0x5964c0*/
              for ( i = &dword_ABE328 - 1104; ; i = &dword_ABE328 - 1104 ) /*0x5964ca*/
              {
                if ( v12 < 1104 || v10 >= dword_ABED0C ) /*0x5964e9*/
                {
                  v15 = 0; /*0x5964f4*/
                  v16 = 0; /*0x5964f6*/
                }
                else
                {
                  v15 = i[v12]; /*0x5964eb*/
                  v16 = i[v12 + 1]; /*0x5964ee*/
                }
                v11[v12] = v15; /*0x5964f8*/
                ++v10; /*0x596501*/
                ++v13; /*0x596502*/
                *(_DWORD *)((char *)MEMORY[0xA8B230] + v12 * 4 + 4) = v16; /*0x596505*/
                v12 += 2; /*0x596513*/
                *(_DWORD *)((char *)MEMORY[0xA8B230] + v13 * 4 - 4) = dword_ABE304[v13 - 1137]; /*0x59651a*/
                v11 = MEMORY[0xA8B230]; /*0x59651e*/
                if ( v10 >= *((_DWORD *)MEMORY[0xA8B230] + 1103) ) /*0x59652a*/
                  break; /*0x59652a*/
              }
            }
            v11[1099] = dword_ABDFD4; /*0x596531*/
            *((_DWORD *)MEMORY[0xA8B230] + 1100) = dword_ABDFD0; /*0x596543*/
            *((_DWORD *)MEMORY[0xA8B230] + 1101) = dword_ABEC90; /*0x596554*/
            *((_DWORD *)MEMORY[0xA8B230] + 1102) = dword_ABECD0; /*0x596565*/
          }
          v17 = GetDlgItem(hWnd, 1029); /*0x596579*/
          EnableWindow(v17, 0); /*0x596582*/
          v18 = GetDlgItem(hWnd, 1002); /*0x59658c*/
          EnableWindow(v18, 0); /*0x59658f*/
          v19 = GetDlgItem(hWnd, 1031); /*0x596599*/
          EnableWindow(v19, 0); /*0x59659c*/
          v20 = GetDlgItem(hWnd, 1030); /*0x5965a6*/
          EnableWindow(v20, 0); /*0x5965a9*/
          v21 = GetDlgItem(hWnd, 1032); /*0x5965b3*/
          EnableWindow(v21, 0); /*0x5965b6*/
          v22 = GetDlgItem(hWnd, 1003); /*0x5965c0*/
          EnableWindow(v22, 0); /*0x5965c3*/
          v23 = GetDlgItem(hWnd, 1569); /*0x5965cd*/
          EnableWindow(v23, 0); /*0x5965d0*/
          v24 = GetDlgItem(hWnd, 1568); /*0x5965da*/
          EnableWindow(v24, 0); /*0x5965dd*/
          v25 = GetDlgItem(hWnd, 1730); /*0x5965e7*/
          EnableWindow(v25, 0); /*0x5965ea*/
          v26 = GetDlgItem(hWnd, 1731); /*0x5965f4*/
          EnableWindow(v26, 0); /*0x5965f7*/
          v27 = GetDlgItem(hWnd, 1732); /*0x596601*/
          EnableWindow(v27, 0); /*0x596604*/
          v28 = GetDlgItem(hWnd, 1733); /*0x59660e*/
          EnableWindow(v28, 0); /*0x596611*/
          v29 = GetDlgItem(hWnd, 1472); /*0x59661b*/
          EnableWindow(v29, 0); /*0x59661e*/
          String = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 3934); /*0x596631*/
          wcscpy(&word_ABE050, String); /*0x59663c*/
          RandomMap::Generate((int *)dword_ABDFD8, 1, hWnd); /*0x59664c*/
          MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x596657*/
          v31 = GetDlgItem(hWnd, 1029); /*0x596664*/
          EnableWindow(v31, 1); /*0x596667*/
          v32 = GetDlgItem(hWnd, 1002); /*0x596671*/
          EnableWindow(v32, 1); /*0x596674*/
          v33 = GetDlgItem(hWnd, 1031); /*0x59667e*/
          EnableWindow(v33, 1); /*0x596681*/
          v34 = GetDlgItem(hWnd, 1030); /*0x59668b*/
          EnableWindow(v34, 1); /*0x59668e*/
          v35 = GetDlgItem(hWnd, 1032); /*0x596698*/
          EnableWindow(v35, 1); /*0x59669b*/
          v36 = GetDlgItem(hWnd, 1003); /*0x5966a5*/
          EnableWindow(v36, 1); /*0x5966a8*/
          v37 = GetDlgItem(hWnd, 1569); /*0x5966b2*/
          EnableWindow(v37, 1); /*0x5966b5*/
          v38 = GetDlgItem(hWnd, 1568); /*0x5966bf*/
          EnableWindow(v38, 1); /*0x5966c2*/
          v39 = GetDlgItem(hWnd, 1730); /*0x5966cc*/
          EnableWindow(v39, 1); /*0x5966cf*/
          v40 = GetDlgItem(hWnd, 1731); /*0x5966d9*/
          EnableWindow(v40, 1); /*0x5966dc*/
          v41 = GetDlgItem(hWnd, 1732); /*0x5966e6*/
          EnableWindow(v41, 1); /*0x5966e9*/
          v42 = GetDlgItem(hWnd, 1733); /*0x5966f3*/
          EnableWindow(v42, 1); /*0x5966f6*/
          v43 = GetDlgItem(hWnd, 1472); /*0x596700*/
          EnableWindow(v43, 1); /*0x596703*/
          if ( dword_ABE150 ) /*0x59670d*/
            (**(void (__thiscall ***)(int, int))dword_ABE150)(dword_ABE150, 1); /*0x596713*/
          v44 = __2_YAPAXI_Z(0x178u); /*0x59671a*/
          if ( v44 ) /*0x596724*/
            v45 = (HWND *)MapSeedClass::Constructor(v44); /*0x596728*/
          else
            v45 = 0; /*0x59672f*/
          dword_ABE150 = (int)v45; /*0x59673d*/
          qmemcpy(v45, dword_ABDFD8, 0x178u); /*0x596742*/
          (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x59674c*/
          Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x596755*/
          PostMessageA(hWnd, 0xFu, 0, 0); /*0x596761*/
          return 0; /*0x59676d*/
        }
        return 0; /*0x596c48*/
      }
      Skirmish::ReadSettings(dword_ABDFD8, hWnd); /*0x596776*/
      RandomMap::SetupDialog(dword_ABDFD8, hWnd); /*0x596781*/
      dword_ABE010 = (unsigned int)Random::Range(MEMORY[0x886B88], 0, 100) >= 0x32; /*0x59679e*/
      dword_ABE014 = Random::Range(MEMORY[0x886B88], 1, 4); /*0x5967b7*/
      dword_ABE020 = Random::Range(MEMORY[0x886B88], 0, 3); /*0x5967ca*/
      dword_ABE018 = Random::Range(MEMORY[0x886B88], 0, 3); /*0x5967dd*/
      dword_ABE03C = Random::Range(MEMORY[0x886B88], 0, 3); /*0x5967f3*/
      dword_ABE040 = dword_ABE03C; /*0x5967f8*/
      Skirmish::RandomizeSettings(dword_ABDFD8, dword_ABE014); /*0x5967fd*/
      v46 = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 3934); /*0x596813*/
      wcscpy(&word_ABE050, v46); /*0x59681e*/
      dword_ABE04C = Random::Range(MEMORY[0x886B88], 0, 0xFFFF); /*0x59683c*/
      SettingsClass::ClampValues((int *)dword_ABDFD8); /*0x596841*/
      RandomMap::SetupDialog(dword_ABDFD8, hWnd); /*0x59684c*/
      v47 = g_Map_TiberiumConfig; /*0x596851*/
      if ( g_Map_TiberiumConfig ) /*0x596859*/
      {
        ComPtr::Dtor(g_Map_TiberiumConfig); /*0x59685d*/
        __3_YAXPAX_Z(v47); /*0x596863*/
      }
      g_Map_TiberiumConfig = 0; /*0x596877*/
      v48 = GetDlgItem(hWnd, 1733); /*0x596881*/
      if ( v48 ) /*0x59688b*/
        EnableWindow(v48, 0); /*0x596890*/
      v49 = GetDlgItem(hWnd, 1731); /*0x596898*/
      if ( v49 ) /*0x59689c*/
        EnableWindow(v49, 0); /*0x5968a1*/
      InvalidateRect(hWnd, 0, 0); /*0x5968a8*/
      return 0; /*0x5968b1*/
    default:
      return 0; /*0x596357*/
  }
}


// ==== 0x00596C70  Skirmish::ReadSettings  this=MapResourceClass  sig=csp ====
int __thiscall Skirmish::ReadSettings(HWND *this, HWND hDlg)
{
  LRESULT v4; // eax
  HWND v5; // eax
  LRESULT v6; // eax
  HWND v7; // eax
  LRESULT v8; // eax
  HWND v9; // eax
  LRESULT v10; // eax
  HWND v11; // eax
  LRESULT v12; // eax
  HWND v13; // eax
  HWND DlgItem; // eax
  HWND v15; // eax
  IUnknown *v16; // edi
  HWND v18; // [esp+10h] [ebp-4h]
  HWND v19; // [esp+10h] [ebp-4h]
  HWND v20; // [esp+10h] [ebp-4h]
  HWND v21; // [esp+10h] [ebp-4h]
  HWND v22; // [esp+10h] [ebp-4h]
  HWND hDlga; // [esp+18h] [ebp+4h]
  HWND hDlgb; // [esp+18h] [ebp+4h]
  HWND hDlgc; // [esp+18h] [ebp+4h]
  HWND hDlgd; // [esp+18h] [ebp+4h]
  HWND hDlge; // [esp+18h] [ebp+4h]
  HWND hDlgf; // [esp+18h] [ebp+4h]

  v18 = this->__pad_03C; /*0x596c8a*/
  hDlga = GetDlgItem(hDlg, 1029); /*0x596ca2*/
  v4 = SendMessageA(hDlga, 0x147u, 0, 0); /*0x596ca6*/
  v5 = (HWND)SendMessageA(hDlga, 0x150u, v4, 0); /*0x596cb3*/
  this->__pad_03C = v5; /*0x596cb9*/
  if ( v18 != v5 ) /*0x596cbe*/
    byte_ABE2D8 = 1; /*0x596cc0*/
  v19 = this->q038; /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v6 = SendMessageA(hDlgb, 0x147u, 0, 0); /*0x596ce6*/
  v7 = (HWND)SendMessageA(hDlgb, 0x150u, v6, 0); /*0x596cf3*/
  this->q038 = v7; /*0x596cf9*/
  if ( v19 != v7 ) /*0x596cfe*/
    byte_ABE2D8 = 1; /*0x596d00*/
  v20 = this->q004; /*0x596d10*/
  hDlgc = GetDlgItem(hDlg, 1032); /*0x596d22*/
  v8 = SendMessageA(hDlgc, 0x147u, 0, 0); /*0x596d26*/
  v9 = (HWND)SendMessageA(hDlgc, 0x150u, v8, 0); /*0x596d33*/
  this->q004 = v9; /*0x596d39*/
  if ( v20 != v9 ) /*0x596d3e*/
    byte_ABE2D8 = 1; /*0x596d40*/
  v21 = this->__pad_048; /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v10 = SendMessageA(hDlgd, 0x147u, 0, 0); /*0x596d66*/
  v11 = (HWND)SendMessageA(hDlgd, 0x150u, v10, 0); /*0x596d73*/
  this->__pad_048 = v11; /*0x596d79*/
  if ( v21 != v11 ) /*0x596d7e*/
    byte_ABE2D8 = 1; /*0x596d80*/
  v22 = *(this + 25); /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v12 = SendMessageA(hDlge, 0x147u, 0, 0); /*0x596da6*/
  v13 = (HWND)SendMessageA(hDlge, 0x150u, v12, 0); /*0x596db3*/
  *(this + 25) = v13; /*0x596db9*/
  this->q01A = v13; /*0x596dbe*/
  if ( v22 != v13 ) /*0x596dc1*/
    byte_ABE2D8 = 1; /*0x596dc3*/
  hDlgf = this->q014; /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v15 = (HWND)SendMessageA(DlgItem, 0x400u, 0, 0); /*0x596de3*/
  this->q014 = v15; /*0x596de9*/
  if ( hDlgf == v15 ) /*0x596dee*/
  {
    if ( !byte_ABE2D8 ) /*0x596e00*/
      return SettingsClass::ClampValues((int *)this); /*0x596e00*/
  }
  else
  {
    byte_ABE2D8 = 1; /*0x596df0*/
  }
  Skirmish::RandomizeSettings(this, (ObjectClass *)this->__pad_03C); /*0x596e08*/
  v16 = g_Map_TiberiumConfig; /*0x596e0d*/
  if ( g_Map_TiberiumConfig ) /*0x596e15*/
  {
    ComPtr::Dtor(g_Map_TiberiumConfig); /*0x596e19*/
    __3_YAXPAX_Z(v16); /*0x596e1f*/
  }
  g_Map_TiberiumConfig = 0; /*0x596e27*/
  byte_ABE2D8 = 0; /*0x596e31*/
  return SettingsClass::ClampValues((int *)this); /*0x596e3f*/
}


// ==== 0x00596E50  RandomMap::SetupDialog  this=MapResourceClass  sig=csp ====
LRESULT __thiscall RandomMap_SetupDialog(_DWORD *this, HWND hDlg)
{
  HWND i; // edi
  LPARAM v3; // ebp
  wchar_t **v4; // ebx
  wchar_t *String; // eax
  LRESULT v6; // eax
  wchar_t *v7; // eax
  LRESULT v8; // eax
  HWND j; // edi
  LPARAM v10; // ebp
  wchar_t **v11; // ebx
  wchar_t *v12; // eax
  LRESULT v13; // eax
  wchar_t *v14; // eax
  LRESULT v15; // eax
  HWND k; // edi
  LPARAM v17; // ebp
  wchar_t **v18; // ebx
  wchar_t *v19; // eax
  LRESULT v20; // eax
  wchar_t *v21; // eax
  LRESULT v22; // eax
  HWND m; // edi
  LPARAM v24; // ebp
  wchar_t *v25; // ebx
  wchar_t *v26; // eax
  LRESULT v27; // eax
  _DWORD *v28; // ebp
  wchar_t *v29; // eax
  LRESULT v30; // eax
  HWND n; // edi
  wchar_t **v32; // ebx
  wchar_t *v33; // eax
  LRESULT v34; // eax
  wchar_t *v35; // eax
  LRESULT v36; // eax
  HWND DlgItem; // edi
  HWND v38; // eax
  LPARAM v39; // ebx
  HWND v40; // edi
  LRESULT result; // eax
  LPARAM lParama; // [esp+10h] [ebp-4h]

  SettingsClass::ClampValues(this); /*0x596e59*/
  for ( i = GetDlgItem(hDlg, 1002); SendMessageA(i, 0x146u, 0, 0) > 0; SendMessageA(i, 0x144u, 0, 0) ) /*0x596e76*/
    ; /*0x596e90*/
  v3 = 0; /*0x596ea2*/
  v4 = &off_82B060; /*0x596ea4*/
  do /*0x596edb*/
  {
    String = GetStringCSF(*v4, 0, g_Str_File_MapGen_cpp, 4883); /*0x596eb7*/
    v6 = SendMessageA(i, 0x4C2u, 0, (LPARAM)String); /*0x596ec5*/
    SendMessageA(i, 0x151u, v6, v3); /*0x596ecf*/
    ++v4; /*0x596ed1*/
    ++v3; /*0x596ed4*/
  }
  while ( (int)v4 < (int)&off_82B070 ); /*0x596edb*/
  v7 = GetStringCSF((&off_82B060)[this->__pad_048], 0, g_Str_File_MapGen_cpp, 4887); /*0x596ef7*/
  v8 = SendMessageA(i, 0x4BEu, 0, (LPARAM)v7); /*0x596f05*/
  SendMessageA(i, 0x14Eu, v8, 0); /*0x596f10*/
  for ( j = GetDlgItem(hDlg, 1030); SendMessageA(j, 0x146u, 0, 0) > 0; SendMessageA(j, 0x144u, 0, 0) ) /*0x596f24*/
    ; /*0x596f3e*/
  v10 = 0; /*0x596f50*/
  v11 = &off_82B070; /*0x596f52*/
  do /*0x596f89*/
  {
    v12 = GetStringCSF(*v11, 0, g_Str_File_MapGen_cpp, 4898); /*0x596f65*/
    v13 = SendMessageA(j, 0x4C2u, 0, (LPARAM)v12); /*0x596f73*/
    SendMessageA(j, 0x151u, v13, v10); /*0x596f7d*/
    ++v11; /*0x596f7f*/
    ++v10; /*0x596f82*/
  }
  while ( (int)v11 < (int)&dword_82B080 ); /*0x596f89*/
  v14 = GetStringCSF((&off_82B070)[*(this + 25)], 0, g_Str_File_MapGen_cpp, 4902); /*0x596fa5*/
  v15 = SendMessageA(j, 0x4BEu, 0, (LPARAM)v14); /*0x596fb3*/
  SendMessageA(j, 0x14Eu, v15, 0); /*0x596fbe*/
  for ( k = GetDlgItem(hDlg, 1029); SendMessageA(k, 0x146u, 0, 0) > 0; SendMessageA(k, 0x144u, 0, 0) ) /*0x596fd2*/
    ; /*0x596fec*/
  v17 = 1; /*0x596ffe*/
  v18 = (wchar_t **)off_82B038; /*0x597003*/
  do /*0x59703a*/
  {
    v19 = GetStringCSF(*v18, 0, g_Str_File_MapGen_cpp, 4914); /*0x597016*/
    v20 = SendMessageA(k, 0x4C2u, 0, (LPARAM)v19); /*0x597024*/
    SendMessageA(k, 0x151u, v20, v17); /*0x59702e*/
    ++v18; /*0x597030*/
    ++v17; /*0x597033*/
  }
  while ( (int)v18 < (int)&off_82B048 ); /*0x59703a*/
  v21 = GetStringCSF((&off_82B034)[this->__pad_03C], 0, g_Str_File_MapGen_cpp, 4918); /*0x597056*/
  v22 = SendMessageA(k, 0x4BEu, 0, (LPARAM)v21); /*0x597064*/
  SendMessageA(k, 0x14Eu, v22, 0); /*0x59706f*/
  for ( m = GetDlgItem(hDlg, 1031); SendMessageA(m, 0x146u, 0, 0) > 0; SendMessageA(m, 0x144u, 0, 0) ) /*0x597083*/
    ; /*0x59709d*/
  v24 = 0; /*0x5970af*/
  v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
  do /*0x5970e8*/
  {
    v26 = GetStringCSF(v25, 0, g_Str_File_MapGen_cpp, 4930); /*0x5970c4*/
    v27 = SendMessageA(m, 0x4C2u, 0, (LPARAM)v26); /*0x5970d2*/
    SendMessageA(m, 0x151u, v27, v24); /*0x5970dc*/
    v25 += 56; /*0x5970de*/
    ++v24; /*0x5970e1*/
  }
  while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
  v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * this->q038], 0, g_Str_File_MapGen_cpp, 4934); /*0x59710f*/
  v30 = SendMessageA(m, 0x4BEu, 0, (LPARAM)v29); /*0x59711d*/
  SendMessageA(m, 0x14Eu, v30, 0); /*0x597128*/
  for ( n = GetDlgItem(hDlg, 1032); SendMessageA(n, 0x146u, 0, 0) > 0; SendMessageA(n, 0x144u, 0, 0) ) /*0x59713c*/
    ; /*0x597156*/
  lParama = 0; /*0x597168*/
  v32 = &off_82B048; /*0x597170*/
  do /*0x5971b3*/
  {
    v33 = GetStringCSF(*v32, 0, g_Str_File_MapGen_cpp, 4945); /*0x597183*/
    v34 = SendMessageA(n, 0x4C2u, 0, (LPARAM)v33); /*0x597191*/
    SendMessageA(n, 0x151u, v34, lParama); /*0x59719f*/
    ++v32; /*0x5971a5*/
    ++lParama; /*0x5971af*/
  }
  while ( (int)v32 < (int)off_82B058 ); /*0x5971b3*/
  v35 = GetStringCSF((&off_82B048)[v28[16]], 0, g_Str_File_MapGen_cpp, 4949); /*0x5971cb*/
  v36 = SendMessageA(n, 0x4BEu, 0, (LPARAM)v35); /*0x5971d9*/
  SendMessageA(n, 0x14Eu, v36, 0); /*0x5971e4*/
  DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
  sprintf(Buffer, MEMORY[0x817F6C], v28[29]); /*0x597206*/
  SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)Buffer); /*0x59721b*/
  v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
  v39 = v28[20]; /*0x597229*/
  v40 = v38; /*0x597231*/
  SendMessageA(v38, 0x406u, 1u, 524290); /*0x59723b*/
  result = SendMessageA(v40, 0x405u, 1u, v39); /*0x597246*/
  v28[20] = v39; /*0x597249*/
  return result; /*0x597248*/
}


// ==== 0x00597260  Skirmish::RandomizeSettings  this=MapResourceClass  sig=csp ====
int __thiscall Skirmish::RandomizeSettings(_DWORD *this, ObjectClass *aP1)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  this->q04C = Random::Range( /*0x597282*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B0A8 + (_DWORD)aP1),
                   *(&dword_82B0BC + (_DWORD)aP1));
  this->q044 = Random::Range( /*0x59729f*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B10C + (_DWORD)aP1),
                   *(&dword_82B120 + (_DWORD)aP1));
  this->q060 = Random::Range( /*0x5972bc*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_ABED40 + (_DWORD)aP1),
                   *(&dword_82B0F8 + (_DWORD)aP1));
  this->q06C = Random::Range( /*0x5972d9*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_ABED18 + (_DWORD)aP1),
                   *(&dword_82B0D0 + (_DWORD)aP1));
  this->q070 = Random::Range( /*0x5972f6*/
                   &MEMORY[0x87F8E4].__pad_5568[7484],
                   *(&dword_82B080 + (_DWORD)aP1),
                   *(&dword_82B094 + (_DWORD)aP1));
  this->q015 = 20 * this->q004; /*0x59730b*/
  this->q016 = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0x64); /*0x597313*/
  v3 = *(_DWORD *)(dword_ABE260 + 4 * (_DWORD)aP1); /*0x597322*/
  v4 = *(_DWORD *)(dword_ABE27C + 4 * (_DWORD)aP1); /*0x597325*/
  if ( v3 >= 0 ) /*0x59732a*/
  {
    if ( v3 > 100 ) /*0x597333*/
      v3 = 100; /*0x597335*/
  }
  else
  {
    v3 = 0; /*0x59732c*/
  }
  if ( v4 >= 0 ) /*0x59733c*/
  {
    if ( v4 > 100 ) /*0x597345*/
      v4 = 100; /*0x597347*/
  }
  else
  {
    v4 = 0; /*0x59733e*/
  }
  if ( v3 > v4 ) /*0x59734e*/
    v3 = v4; /*0x597350*/
  this->q05C = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], (IUnknown *)v3, (IUnknown *)v4); /*0x59736a*/
  result = Random::Range(&MEMORY[0x87F8E4].__pad_5568[7484], 0, (IUnknown *)0xFFFF); /*0x59736d*/
  this->q074 = result; /*0x597372*/
  return result; /*0x597375*/
}


// ==== 0x00597430  ObjectClass::Team_Start  this=MapResourceClass  sig=csp ====
_DWORD *__thiscall sub_597430(_DWORD *this)
{
  _DWORD *WDTTerritoryClass; // eax
  int v3; // ecx
  int v4; // eax
  void **v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch]
  _DWORD v8[2]; // [esp+14h] [ebp-8h] BYREF

  ComPtr::Constructor(&v6); /*0x59743c*/
  v6 = &vt_rc_ptr_WDTTerritory; /*0x59744e*/
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8B244] == 3 ) /*0x59745f*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass(v8, *(int *)MEMORY[0xA8B240]); /*0x59746b*/
    ComPtr::Set(&v6, WDTTerritoryClass[1]); /*0x597478*/
    v8[0] = &vt_rc_ptr_WDTTerritory; /*0x597481*/
    ComPtr::Release(v8); /*0x597485*/
  }
  v3 = v7; /*0x59748a*/
  if ( v7 ) /*0x597490*/
  {
    if ( *(_WORD *)(v7 + 12) ) /*0x597496*/
    {
      v4 = *(unsigned __int16 *)(v7 + 12); /*0x5974b6*/
    }
    else
    {
      v4 = Random::Range(MEMORY[0x886B88], 0, 0xFFFF); /*0x5974ab*/
      v3 = v7; /*0x5974b0*/
    }
    this->q074 = v4; /*0x5974bb*/
    switch ( *(_BYTE *)(v3 + 18) ) /*0x5974d1*/
    {
      case 0: /*0x5974d1*/
        *(this + 25) = 0; /*0x5974d8*/
        break; /*0x5974df*/
      case 2: /*0x5974d1*/
        *(this + 25) = 2; /*0x5974e1*/
        break; /*0x5974e4*/
      case 3: /*0x5974d1*/
        *(this + 25) = 3; /*0x5974e6*/
        break; /*0x5974e9*/
      default:
        *(this + 25) = 1; /*0x5974eb*/
        break; /*0x5974eb*/
    }
    switch ( *(_BYTE *)(v3 + 19) ) /*0x5974f7*/
    {
      case 0: /*0x5974f7*/
        this->q01A = 0; /*0x5974fe*/
        break; /*0x597505*/
      case 2: /*0x5974f7*/
        this->q01A = 2; /*0x597507*/
        break; /*0x59750a*/
      case 3: /*0x5974f7*/
        this->q01A = 3; /*0x59750c*/
        break; /*0x59750f*/
      default:
        this->q01A = 1; /*0x597511*/
        break; /*0x597511*/
    }
    this->__pad_050 = 4; /*0x597516*/
    switch ( *(_BYTE *)(v3 + 30) ) /*0x597524*/
    {
      case 1: /*0x597524*/
        this->__pad_048 = 2; /*0x597534*/
        break; /*0x597537*/
      case 2: /*0x597524*/
        this->__pad_048 = 0; /*0x59752b*/
        break; /*0x597532*/
      case 3: /*0x597524*/
        this->__pad_048 = 3; /*0x597539*/
        break; /*0x59753c*/
      default:
        this->__pad_048 = 1; /*0x59753e*/
        break; /*0x59753e*/
    }
    this->__pad_03C = *(unsigned __int8 *)(v3 + 28); /*0x59754d*/
    this->q038 = *(unsigned __int8 *)(v3 + 29); /*0x597555*/
    this->q070 = *(unsigned __int8 *)(v3 + 33); /*0x59755d*/
    this->q06C = *(unsigned __int8 *)(v3 + 36); /*0x597565*/
    this->q044 = *(unsigned __int8 *)(v3 + 39); /*0x59756d*/
    this->q04C = *(unsigned __int8 *)(v3 + 42); /*0x597575*/
    this->q015 = *(unsigned __int8 *)(v3 + 45); /*0x59757d*/
    this->q016 = *(unsigned __int8 *)(v3 + 48); /*0x597585*/
    this->q05C = *(unsigned __int8 *)(v3 + 51); /*0x59758d*/
    this->q060 = *(unsigned __int8 *)(v3 + 54); /*0x597593*/
    this->q004 = *(_DWORD *)(v3 + 24); /*0x597599*/
  }
  v6 = &vt_rc_ptr_WDTTerritory; /*0x5975a0*/
  return ComPtr::Release(&v6); /*0x5975a9*/
}


// ==== 0x005975E0  SettingsClass::ClampValues  this=MapResourceClass  sig=csp ====
int __thiscall SettingsClass_ClampValues(int *this)
{
  int v1; // eax
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
  int v13; // eax
  int v14; // eax
  int result; // eax

  v1 = this->q004; /*0x5975e0*/
  if ( v1 < 4 ) /*0x5975ef*/
  {
    if ( v1 < 0 ) /*0x5975f8*/
      this->q004 = 0; /*0x5975fa*/
  }
  else
  {
    this->q004 = 3; /*0x5975f1*/
  }
  v2 = this->__pad_03C; /*0x5975fd*/
  if ( v2 < 5 ) /*0x597603*/
  {
    if ( v2 < 0 ) /*0x597610*/
      this->__pad_03C = 0; /*0x597612*/
  }
  else
  {
    this->__pad_03C = 4; /*0x597605*/
  }
  v3 = this->__pad_048; /*0x597615*/
  if ( v3 < 4 ) /*0x59761b*/
  {
    if ( v3 < 0 ) /*0x597624*/
      this->__pad_048 = 0; /*0x597626*/
  }
  else
  {
    this->__pad_048 = 3; /*0x59761d*/
  }
  v4 = this->q044; /*0x597629*/
  if ( v4 <= 100 ) /*0x597633*/
  {
    if ( v4 < 0 ) /*0x59763c*/
      this->q044 = 0; /*0x59763e*/
  }
  else
  {
    this->q044 = 100; /*0x597635*/
  }
  v5 = this->q04C; /*0x597641*/
  if ( v5 <= 100 ) /*0x597646*/
  {
    if ( v5 < 0 ) /*0x59764f*/
      this->q04C = 0; /*0x597651*/
  }
  else
  {
    this->q04C = 100; /*0x597648*/
  }
  v6 = this->q014; /*0x597654*/
  if ( v6 <= 8 ) /*0x59765a*/
  {
    if ( v6 < 2 ) /*0x597668*/
      this->q014 = 2; /*0x59766a*/
  }
  else
  {
    this->q014 = 8; /*0x59765c*/
  }
  v7 = this->q015; /*0x597671*/
  if ( v7 <= 100 ) /*0x597676*/
  {
    if ( v7 < 1 ) /*0x597680*/
      this->q015 = 1; /*0x597682*/
  }
  else
  {
    this->q015 = 100; /*0x597678*/
  }
  v8 = this->q016; /*0x597689*/
  if ( v8 <= 100 ) /*0x59768e*/
  {
    if ( v8 < 0 ) /*0x597697*/
      this->q016 = 0; /*0x597699*/
  }
  else
  {
    this->q016 = 100; /*0x597690*/
  }
  v9 = this->q05C; /*0x59769c*/
  if ( v9 <= 100 ) /*0x5976a1*/
  {
    if ( v9 < 0 ) /*0x5976aa*/
      this->q05C = 0; /*0x5976ac*/
  }
  else
  {
    this->q05C = 100; /*0x5976a3*/
  }
  v10 = this->q060; /*0x5976af*/
  if ( v10 <= 100 ) /*0x5976b4*/
  {
    if ( v10 < 0 ) /*0x5976bd*/
      this->q060 = 0; /*0x5976bf*/
  }
  else
  {
    this->q060 = 100; /*0x5976b6*/
  }
  v11 = *(this + 25); /*0x5976c2*/
  if ( v11 < 4 ) /*0x5976c8*/
  {
    if ( v11 < 0 ) /*0x5976d1*/
      *(this + 25) = 0; /*0x5976d3*/
  }
  else
  {
    *(this + 25) = 3; /*0x5976ca*/
  }
  v12 = this->q01A; /*0x5976d6*/
  if ( v12 < 4 ) /*0x5976dc*/
  {
    if ( v12 < 0 ) /*0x5976e5*/
      this->q01A = 0; /*0x5976e7*/
  }
  else
  {
    this->q01A = 3; /*0x5976de*/
  }
  v13 = this->q06C; /*0x5976ea*/
  if ( v13 <= 100 ) /*0x5976ef*/
  {
    if ( v13 < 0 ) /*0x5976f8*/
      this->q06C = 0; /*0x5976fa*/
  }
  else
  {
    this->q06C = 100; /*0x5976f1*/
  }
  v14 = this->q070; /*0x5976fd*/
  if ( v14 <= 100 ) /*0x597702*/
  {
    if ( v14 < 0 ) /*0x59770b*/
      this->q070 = 0; /*0x59770d*/
  }
  else
  {
    this->q070 = 100; /*0x597704*/
  }
  result = this->q074; /*0x597710*/
  if ( result <= 0xFFFF ) /*0x597718*/
  {
    if ( result < 0 ) /*0x597726*/
      this->q074 = 0; /*0x597728*/
  }
  else
  {
    this->q074 = 0xFFFF; /*0x59771b*/
  }
  return result; /*0x59771a*/
}


// ==== 0x00597730  MapSeed::ValidateName  this=MapResourceClass  sig=csp ====
char __thiscall MapSeed::ValidateName(char *this, int a2)
{
  if ( a2 ) /*0x597736*/
    return (*(int (__stdcall **)(int, char *))(this->q008)(a2, this + 120); /*0x597740*/
  else
    return (unsigned __int8)ShowSaveLoadDialog(this + 120) != 0; /*0x597752*/
}


// ==== 0x00597760  MapSeedClass::Release  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::_vt02(int this, char *a2, wchar_t *Source)
{
  void *v5[4]; // [esp+Ch] [ebp-ACh] BYREF
  _DWORD v6[3]; // [esp+1Ch] [ebp-9Ch] BYREF
  _DWORD v7[6]; // [esp+28h] [ebp-90h] BYREF
  char v8; // [esp+40h] [ebp-78h]
  int v9; // [esp+44h] [ebp-74h]
  int v10; // [esp+48h] [ebp-70h]
  _DWORD v11[22]; // [esp+4Ch] [ebp-6Ch] BYREF
  _BYTE v12[12]; // [esp+A4h] [ebp-14h] BYREF
  int v13; // [esp+B0h] [ebp-8h]

  if ( !a2 ) /*0x597776*/
    return 0; /*0x5979f9*/
  Debug::Log(); /*0x59778b*/
  CCFileClass::Construct(v11, a2); /*0x597798*/
  v6[0] = &vt_GenericNode; /*0x5977a6*/
  v7[0] = &vt_GenericNode; /*0x5977aa*/
  v5[1] = 0; /*0x5977b2*/
  v5[2] = 0; /*0x5977b7*/
  v6[1] = 0; /*0x5977bb*/
  v6[2] = 0; /*0x5977bf*/
  v7[1] = 0; /*0x5977c3*/
  v7[2] = 0; /*0x5977c7*/
  LinkedList::Prepend(v6, (int)v7); /*0x5977d3*/
  v5[3] = &vt_List_INIClass_INISection; /*0x5977da*/
  memset(&v7[3], 0, 12); /*0x5977e2*/
  v8 = 0; /*0x5977ee*/
  v9 = 0; /*0x5977f2*/
  v10 = 0; /*0x5977f6*/
  v5[0] = &vt_INIClass; /*0x5977fa*/
  if ( Source ) /*0x597802*/
    wcscpy((wchar_t *)(this + 120), Source); /*0x597809*/
  INIClass::SetWideAsHex((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, stru_81B1A4, Source); /*0x597820*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBE4], *(_DWORD *)(this + 100), 0); /*0x597838*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, g_INI_Key_Height, *(_DWORD *)(this + 104), 0); /*0x597850*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBD8], *(_DWORD *)(this + 80), 0); /*0x597868*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, stru_82BBD0, *(_DWORD *)(this + 116), 0); /*0x597880*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBC8], *(_DWORD *)(this + 60), 0); /*0x597898*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, unk_818658, *(_DWORD *)(this + 56), 0); /*0x5978b0*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x81F11C], *(_DWORD *)(this + 72), 0); /*0x5978c8*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBBC], *(_DWORD *)(this + 112), 0); /*0x5978e0*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBB0], *(_DWORD *)(this + 68), 0); /*0x5978f8*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BBA0], *(_DWORD *)(this + 108), 0); /*0x597910*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BB94], *(_DWORD *)(this + 76), 0); /*0x597928*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x817278], *(_DWORD *)(this + 84), 0); /*0x597940*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BB84], *(_DWORD *)(this + 88), 0); /*0x597958*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BB78], *(_DWORD *)(this + 92), 0); /*0x597970*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BB68], *(_DWORD *)(this + 96), 0); /*0x597988*/
  INIClass::SetInt((char *)v5, (unsigned __int8 *)g_INI_Key_RandomMap, MEMORY[0x82BB5C], *(_DWORD *)(this + 64), 0); /*0x5979a0*/
  INIClass::SaveToPipe(v5, (int)v11); /*0x5979ae*/
  HashTable::DestroyHashTableINIClass(v5); /*0x5979b7*/
  v11[0] = &vt_CCFileClass; /*0x5979c3*/
  v13 = 0; /*0x5979cb*/
  Vector::Clear((int)v12); /*0x5979d2*/
  v11[0] = &off_7E1668; /*0x5979db*/
  BufferIOFileClass::Dtor(v11); /*0x5979e3*/
  return 1; /*0x5979e9*/
}


// ==== 0x00597A10  Scenario::LoadOrReloadOptions  this=MapResourceClass  sig=csp ====
char __thiscall Scenario::LoadOrReloadOptions(_DWORD *this, IUnknown *aP1)
{
  if ( aP1 ) /*0x597a16*/
    return (*(char (__thiscall **)(_DWORD *, IUnknown *))(*this + 4))(this, aP1); /*0x597a1b*/
  else
    return (unsigned __int8)LoadOptions::Run(this) != 0; /*0x597a28*/
}


// ==== 0x00597A30  MapSeedClass::AddRef  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::_vt01(int this, char *Source)
{
  wchar_t *StringCSF; // eax
  int Int_Overwrite; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v20; // [esp-4h] [ebp-BCh]
  int v21; // [esp-4h] [ebp-BCh]
  int v22; // [esp-4h] [ebp-BCh]
  int v23; // [esp-4h] [ebp-BCh]
  int v24; // [esp-4h] [ebp-BCh]
  void *v25[4]; // [esp+Ch] [ebp-ACh] BYREF
  _DWORD v26[3]; // [esp+1Ch] [ebp-9Ch] BYREF
  _DWORD v27[6]; // [esp+28h] [ebp-90h] BYREF
  char v28; // [esp+40h] [ebp-78h]
  int v29; // [esp+44h] [ebp-74h]
  int v30; // [esp+48h] [ebp-70h]
  _DWORD v31[22]; // [esp+4Ch] [ebp-6Ch] BYREF
  _BYTE v32[12]; // [esp+A4h] [ebp-14h] BYREF
  int v33; // [esp+B0h] [ebp-8h]

  if ( Source ) /*0x597a46*/
  {
    Debug::Log(); /*0x597a52*/
    CCFileClass::Construct(v31, Source); /*0x597a5f*/
    v26[0] = &vt_GenericNode; /*0x597a6d*/
    v27[0] = &vt_GenericNode; /*0x597a71*/
    v25[1] = 0; /*0x597a79*/
    v25[2] = 0; /*0x597a7e*/
    v26[1] = 0; /*0x597a82*/
    v26[2] = 0; /*0x597a86*/
    v27[1] = 0; /*0x597a8a*/
    v27[2] = 0; /*0x597a8e*/
    LinkedList::Prepend(v26, (int)v27); /*0x597a9a*/
    v25[3] = &vt_List_INIClass_INISection; /*0x597aa9*/
    memset(&v27[3], 0, 12); /*0x597ab1*/
    v28 = 0; /*0x597abd*/
    v29 = 0; /*0x597ac1*/
    v30 = 0; /*0x597ac5*/
    v25[0] = &vt_INIClass; /*0x597ac9*/
    if ( FileStraw::Open(v25, (int)v31, 0) ) /*0x597ad1*/
    {
      StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 5433); /*0x597af8*/
      INIClass::ParseValue_Wide( /*0x597b0c*/
        (char **)v25,
        (unsigned __int8 *)g_INI_Key_RandomMap,
        (unsigned __int8 *)stru_81B1A4,
        StringCSF,
        (wchar_t *)(this + 120),
        0x80u);
      Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x597b23*/
                        (int)v25,
                        (unsigned __int8 *)g_INI_Key_RandomMap,
                        (unsigned __int8 *)MEMORY[0x82BBE4],
                        *(_DWORD *)(this + 100));
      v5 = *(_DWORD *)(this + 104); /*0x597b28*/
      *(_DWORD *)(this + 100) = Int_Overwrite; /*0x597b2b*/
      v6 = INIClass::ReadInt_Overwrite( /*0x597b3d*/
             (int)v25,
             (unsigned __int8 *)g_INI_Key_RandomMap,
             (unsigned __int8 *)g_INI_Key_Height,
             v5);
      v20 = *(_DWORD *)(this + 80); /*0x597b49*/
      *(_DWORD *)(this + 104) = v6; /*0x597b54*/
      *(_DWORD *)(this + 80) = INIClass::ReadInt_Overwrite( /*0x597b5c*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)MEMORY[0x82BBD8],
                                 v20);
      v7 = INIClass::ReadInt_Overwrite( /*0x597b71*/
             (int)v25,
             (unsigned __int8 *)g_INI_Key_RandomMap,
             (unsigned __int8 *)stru_82BBD0,
             *(_DWORD *)(this + 116));
      v8 = *(_DWORD *)(this + 60); /*0x597b76*/
      *(_DWORD *)(this + 116) = v7; /*0x597b79*/
      v9 = INIClass::ReadInt_Overwrite( /*0x597b8b*/
             (int)v25,
             (unsigned __int8 *)g_INI_Key_RandomMap,
             (unsigned __int8 *)MEMORY[0x82BBC8],
             v8);
      v21 = *(_DWORD *)(this + 56); /*0x597b97*/
      *(_DWORD *)(this + 60) = v9; /*0x597ba2*/
      *(_DWORD *)(this + 56) = INIClass::ReadInt_Overwrite( /*0x597baa*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)unk_818658,
                                 v21);
      v10 = INIClass::ReadInt_Overwrite( /*0x597bbf*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x81F11C],
              *(_DWORD *)(this + 72));
      v11 = *(_DWORD *)(this + 112); /*0x597bc4*/
      *(_DWORD *)(this + 72) = v10; /*0x597bc7*/
      v12 = INIClass::ReadInt_Overwrite( /*0x597bd9*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x82BBBC],
              v11);
      v22 = *(_DWORD *)(this + 68); /*0x597be5*/
      *(_DWORD *)(this + 112) = v12; /*0x597bf0*/
      *(_DWORD *)(this + 68) = INIClass::ReadInt_Overwrite( /*0x597bf8*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)MEMORY[0x82BBB0],
                                 v22);
      v13 = INIClass::ReadInt_Overwrite( /*0x597c0d*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x82BBA0],
              *(_DWORD *)(this + 108));
      v14 = *(_DWORD *)(this + 76); /*0x597c12*/
      *(_DWORD *)(this + 108) = v13; /*0x597c15*/
      v15 = INIClass::ReadInt_Overwrite( /*0x597c27*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x82BB94],
              v14);
      v23 = *(_DWORD *)(this + 84); /*0x597c33*/
      *(_DWORD *)(this + 76) = v15; /*0x597c3e*/
      *(_DWORD *)(this + 84) = INIClass::ReadInt_Overwrite( /*0x597c46*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)MEMORY[0x817278],
                                 v23);
      v16 = INIClass::ReadInt_Overwrite( /*0x597c5b*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x82BB84],
              *(_DWORD *)(this + 88));
      v17 = *(_DWORD *)(this + 92); /*0x597c60*/
      *(_DWORD *)(this + 88) = v16; /*0x597c63*/
      v18 = INIClass::ReadInt_Overwrite( /*0x597c75*/
              (int)v25,
              (unsigned __int8 *)g_INI_Key_RandomMap,
              (unsigned __int8 *)MEMORY[0x82BB78],
              v17);
      v24 = *(_DWORD *)(this + 96); /*0x597c81*/
      *(_DWORD *)(this + 92) = v18; /*0x597c8c*/
      *(_DWORD *)(this + 96) = INIClass::ReadInt_Overwrite( /*0x597c94*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)MEMORY[0x82BB68],
                                 v24);
      *(_DWORD *)(this + 64) = INIClass::ReadInt_Overwrite( /*0x597cb2*/
                                 (int)v25,
                                 (unsigned __int8 *)g_INI_Key_RandomMap,
                                 (unsigned __int8 *)MEMORY[0x82BB5C],
                                 *(_DWORD *)(this + 64));
      HashTable::DestroyHashTableINIClass(v25); /*0x597cb5*/
      v31[0] = &vt_CCFileClass; /*0x597cc1*/
      v33 = 0; /*0x597cc9*/
      Vector::Clear((int)v32); /*0x597cd0*/
      v31[0] = &off_7E1668; /*0x597cd9*/
      BufferIOFileClass::Dtor(v31); /*0x597ce1*/
      return 1; /*0x597cf1*/
    }
    HashTable::DestroyHashTableINIClass(v25); /*0x597cf8*/
    v31[0] = &vt_CCFileClass; /*0x597d04*/
    v33 = 0; /*0x597d0c*/
    Vector::Clear((int)v32); /*0x597d13*/
    v31[0] = &off_7E1668; /*0x597d1c*/
    BufferIOFileClass::Dtor(v31); /*0x597d24*/
  }
  return 0; /*0x597ce6*/
}


// ==== 0x00597D40  j_Options::GetValue  this=j_Options  sig=csp ====
// attributes: thunk
bool __thiscall j_Options::GetValue(const char **dwNewLong)
{
  return Options::PrepareSaveLoadDlg(dwNewLong);
}


// ==== 0x00597D50  MapSeedClass::ddtor  this=MapSeedClass  sig=csp ====
bool __stdcall MapSeedClass::_vt03(LPCSTR lpFileName)
{
  return LoadOptions::ddtor(lpFileName); /*0x597d5a*/
}


// ==== 0x00597D60  MapSeedClass::LoadInfo  this=MapSeedClass  sig=csp ====
char __stdcall RandomMap_LoadInfo(wchar_t *Destination, int a2)
{
  void *v2; // edi
  void *v4[4]; // [esp+Ch] [ebp-1ACh] BYREF
  _DWORD v5[3]; // [esp+1Ch] [ebp-19Ch] BYREF
  _DWORD v6[6]; // [esp+28h] [ebp-190h] BYREF
  char v7; // [esp+40h] [ebp-178h]
  int v8; // [esp+44h] [ebp-174h]
  int v9; // [esp+48h] [ebp-170h]
  _DWORD v10[22]; // [esp+4Ch] [ebp-16Ch] BYREF
  _BYTE v11[12]; // [esp+A4h] [ebp-114h] BYREF
  int v12; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !Destination ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  v2 = (void *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((const void *)(a2 + 44), aRandmapSed) || !_strcmpi(v2, MEMORY[0x82BC24]) ) /*0x597da8*/
    return 0; /*0x597db2*/
  CCFileClass::Construct(v10, (char *)v2); /*0x597dbd*/
  v4[1] = 0; /*0x597dc6*/
  v4[2] = 0; /*0x597dca*/
  GenericNode::Constructor(v5); /*0x597dce*/
  GenericNode::Constructor(v6); /*0x597dd7*/
  LinkedList::Prepend(v5, (int)v6); /*0x597ded*/
  v4[3] = &vt_List_INIClass_INISection; /*0x597dfc*/
  memset(&v6[3], 0, 12); /*0x597e04*/
  v7 = 0; /*0x597e10*/
  v8 = 0; /*0x597e14*/
  v9 = 0; /*0x597e18*/
  v4[0] = &vt_INIClass; /*0x597e1c*/
  if ( !FileStraw::Open(v4, (int)v10, 0) ) /*0x597e2b*/
  {
    HashTable::DestroyHashTableINIClass(v4); /*0x597f38*/
    v10[0] = &vt_CCFileClass; /*0x597f44*/
    v12 = 0; /*0x597f4c*/
    Vector::Clear((int)v11); /*0x597f53*/
    v10[0] = &off_7E1668; /*0x597f5c*/
    BufferIOFileClass::Dtor(v10); /*0x597f64*/
    return 0; /*0x597f6b*/
  }
  if ( INIClass::ParseValue_Wide((int)g_INI_Key_RandomMap, (int)stru_81B1A4, &MEMORY[0x887734], Source, 0x80u) <= 0 ) /*0x597e58*/
  {
    *Destination = 0; /*0x597e7f*/
    *((_BYTE *)Destination + 437) = 1; /*0x597e82*/
    *((_BYTE *)Destination + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy(Destination, Source, 0x80u); /*0x597e68*/
    *((_BYTE *)Destination + 437) = 0; /*0x597e70*/
    *((_BYTE *)Destination + 436) = 1; /*0x597e76*/
  }
  *((_DWORD *)Destination + 72) = 0; /*0x597e9a*/
  *((_DWORD *)Destination + 73) = 0; /*0x597ea0*/
  strncpy((char *)Destination + 256, (const char *)v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)Destination + 256) ) /*0x597ead*/
    strncpy((char *)Destination + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((_DWORD *)Destination + 108) = *(_DWORD *)(a2 + 24); /*0x597ee5*/
  *((_DWORD *)Destination + 107) = *(_DWORD *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(v4); /*0x597ef4*/
  v10[0] = &vt_CCFileClass; /*0x597f00*/
  v12 = 0; /*0x597f08*/
  Vector::Clear((int)v11); /*0x597f0f*/
  v10[0] = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor(v10); /*0x597f20*/
  return 1; /*0x597f26*/
}


// ==== 0x00597F80  MapSeedClass::Generate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::_vt05()
{
  return GetStringCSF(aGuiLoadmapmenu, 0, g_Str_File_MapGen_cpp, 5572); /*0x597f96*/
}


// ==== 0x00597FA0  MapSeedClass::GetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::_vt06()
{
  return GetStringCSF(aGuiSavemapmenu, 0, g_Str_File_MapGen_cpp, 5578); /*0x597fb6*/
}


// ==== 0x00597FC0  MapSeedClass::SetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::_vt07()
{
  return GetStringCSF(aGuiDeletemapme, 0, g_Str_File_MapGen_cpp, 5584); /*0x597fd6*/
}


// ==== 0x00597FE0  MapSeedClass::Validate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::_vt08()
{
  return GetStringCSF(aGuiMapsaved, 0, g_Str_File_MapGen_cpp, 5590); /*0x597ff6*/
}


// ==== 0x00598000  sub_598000  this=-  sig=ida-proto ====
double sub_598000()
{
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10; /*0x598023*/
}


// ==== 0x00598030  Range_RandomInt  this=-  sig=csp ====
__int64 __fastcall Range_RandomInt(MouseClass *aP0, MapClass *aP1)
{
  double v3; // st7
  __int64 result; // rax
  __int64 v5; // [esp+8h] [ebp-18h]
  __int64 v6; // [esp+8h] [ebp-18h]
  double v7; // [esp+18h] [ebp-8h]

  v5 = (unsigned int)((char *)aP1 - (char *)aP0 + 1); /*0x59803e*/
  v3 = (double)v5; /*0x598046*/
  LODWORD(v5) = aP0; /*0x59804a*/
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    v6 = (unsigned int)Random::State(&g_Randomizer); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > (unsigned int)aP1 ); /*0x598089*/
  return result; /*0x59808b*/
}


// ==== 0x005980A0  ObjectClass::method_5980A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5980A0(_DWORD *this, int a2)
{
  this->vtable3 = 0; /*0x5980a4*/
  *(_BYTE *)this = 0; /*0x5980a7*/
  this->vtable4 = 0; /*0x5980a9*/
  this->uniqueId = a2; /*0x5980b0*/
  return this; /*0x5980b3*/
}


// ==== 0x005980C0  Random::Gaussian  this=Random  sig=csp ====
double __thiscall Random_Gaussian(double *this)
{
  double v3; // st7
  double v4; // st7
  long double v5; // st7
  long double v6; // st6
  double v7; // st7
  double v8; // [esp+10h] [ebp-10h]
  double v9; // [esp+18h] [ebp-8h]

  if ( *(_BYTE *)this ) /*0x5980cc*/
  {
    *(_BYTE *)this = 0; /*0x5980d1*/
    return this->Random_field_0x04; /*0x5980d4*/
  }
  else
  {
    do /*0x598122*/
    {
      do /*0x598115*/
      {
        v3 = ((double (*)(void))this->Random_field_0x04)(); /*0x5980de*/
        v8 = v3 + v3 - 1.0; /*0x5980e9*/
        v4 = ((double (*)(void))this->Random_field_0x04)(); /*0x5980ed*/
        v9 = v4 + v4 - 1.0; /*0x5980f8*/
        v5 = v9 * v9 + v8 * v8; /*0x598108*/
      }
      while ( v5 >= 1.0 ); /*0x598115*/
    }
    while ( v5 == 0.0 ); /*0x598122*/
    v6 = __FYL2X__(v5, 0.6931471805599453094); /*0x59812d*/
    v7 = Math::Sqrt((-v6 - v6) / v5); /*0x59813e*/
    *(_BYTE *)this = 1; /*0x59814c*/
    this->Random_field_0x04 = v7 * v9; /*0x59814f*/
    return v7 * v8; /*0x598153*/
  }
}


// ==== 0x005981F0  RandomMap::LoadConfig  this=MapResourceClass  sig=csp ====
int __thiscall RandomMap_LoadConfig(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // edx
  int Int_Overwrite; // eax
  int v7; // edx
  void ***v8; // eax
  void ***v9; // eax
  void ***v10; // eax
  void ***v11; // eax
  void ***v12; // eax
  void ***v13; // eax
  void ***v14; // eax
  void ***v15; // eax
  void ***v16; // eax
  void ***v17; // eax
  void ***v18; // eax
  char *i; // eax
  _DWORD *v20; // esi
  char *j; // eax
  _DWORD *v22; // esi
  void **v24; // [esp-1Ch] [ebp-15Ch] BYREF
  void *v25; // [esp-18h] [ebp-158h]
  int v26; // [esp-14h] [ebp-154h]
  __int16 v27; // [esp-10h] [ebp-150h]
  int v28; // [esp-Ch] [ebp-14Ch]
  int v29; // [esp-8h] [ebp-148h]
  int v30; // [esp-4h] [ebp-144h]
  void ***IntList; // [esp+10h] [ebp-130h] BYREF
  int v32; // [esp+14h] [ebp-12Ch] BYREF
  void *Block; // [esp+18h] [ebp-128h]
  char v34; // [esp+21h] [ebp-11Fh]
  _DWORD *v35; // [esp+30h] [ebp-110h]
  _DWORD *v36; // [esp+34h] [ebp-10Ch]
  _DWORD v37[6]; // [esp+38h] [ebp-108h] BYREF
  int v38; // [esp+50h] [ebp-F0h]
  _DWORD v39[27]; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(v39, MEMORY[0x82BDCC]); /*0x598205*/
  v2 = __2_YAPAXI_Z(0x58u); /*0x59820c*/
  v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    *((_BYTE *)v3 + 64) = 0; /*0x598221*/
    *v3 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load(v3, (int)v39, 0, 0); /*0x598241*/
  (*(void (__thiscall **)(_DWORD *))(this->q188 + 12))(this + 98); /*0x598254*/
  (*(void (__thiscall **)(_DWORD *))(this->q284 + 12))(this + 161); /*0x598265*/
  (*(void (__thiscall **)(_DWORD *))(this->q2A0 + 12))(this + 168); /*0x598274*/
  v4 = this->q2C4; /*0x598277*/
  v36 = this + 177; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  v5 = this->q2E0; /*0x59828a*/
  v35 = this + 184; /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (__thiscall **)(_DWORD *))(this->q1A4 + 12))(this + 105); /*0x5982a9*/
  (*(void (__thiscall **)(_DWORD *))(this->q1C0 + 12))(this + 112); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(off_82B134, MEMORY[0x82BDB8], this->q0AF); /*0x5982d0*/
  v7 = this->q02C; /*0x5982d5*/
  this->q0AF = Int_Overwrite; /*0x5982db*/
  this->q02C = INIClass::ReadInt_Overwrite(off_82B134, stru_82BDA4, v7); /*0x5982f7*/
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, this + 98); /*0x598304*/
  *IntList = &vt_TypeList_int; /*0x598316*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59832e*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmglevellights,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 98, IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *(this + 102) = IntList[4]; /*0x59833e*/
  *(this + 103) = v8[5]; /*0x598344*/
  this->q01A = v8[6]; /*0x59834a*/
  v32 = (int)&vt_VectorClass_int; /*0x598356*/
  VectorClass::Destroy((int)&v32); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, this + 161); /*0x598369*/
  *IntList = &vt_TypeList_int; /*0x59837b*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598393*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmgvegetationm,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 161, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  *(this + 165) = IntList[4]; /*0x5983a3*/
  *(this + 166) = v9[5]; /*0x5983a9*/
  *(this + 167) = v9[6]; /*0x5983b3*/
  v32 = (int)&vt_VectorClass_int; /*0x5983b6*/
  VectorClass::Destroy((int)&v32); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, this + 168); /*0x5983cf*/
  *IntList = &vt_TypeList_int; /*0x5983e1*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5983f9*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aRmgvegetationm_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 168, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  *(this + 172) = IntList[4]; /*0x598409*/
  *(this + 173) = v10[5]; /*0x59840f*/
  *(this + 174) = v10[6]; /*0x598419*/
  v32 = (int)&vt_VectorClass_int; /*0x59841c*/
  VectorClass::Destroy((int)&v32); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, this + 105); /*0x598435*/
  *IntList = &vt_TypeList_int; /*0x598447*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59845f*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 105, IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *(this + 109) = IntList[4]; /*0x59846f*/
  *(this + 110) = v11[5]; /*0x598475*/
  *(this + 111) = v11[6]; /*0x59847b*/
  v32 = (int)&vt_VectorClass_int; /*0x59847e*/
  VectorClass::Destroy((int)&v32); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, this + 112); /*0x59849b*/
  *IntList = &vt_TypeList_int; /*0x5984ad*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5984c5*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aSnowambientlig,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 112, IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  this->q074 = IntList[4]; /*0x5984d5*/
  *(this + 117) = v12[5]; /*0x5984db*/
  *(this + 118) = v12[6]; /*0x5984e5*/
  v32 = (int)&vt_VectorClass_int; /*0x5984e8*/
  VectorClass::Destroy((int)&v32); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, this + 119); /*0x598501*/
  *IntList = &vt_TypeList_int; /*0x598513*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59852b*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie_0,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 119, IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *(this + 123) = IntList[4]; /*0x59853b*/
  this->__pad_07C = v13[5]; /*0x598541*/
  *(this + 125) = v13[6]; /*0x59854b*/
  v32 = (int)&vt_VectorClass_int; /*0x59854e*/
  VectorClass::Destroy((int)&v32); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, this + 126); /*0x598567*/
  *IntList = &vt_TypeList_int; /*0x598579*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598591*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)aTemperateambie_1,
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 126, IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *(this + 130) = IntList[4]; /*0x5985a1*/
  *(this + 131) = v14[5]; /*0x5985a7*/
  *(this + 132) = v14[6]; /*0x5985b1*/
  v32 = (int)&vt_VectorClass_int; /*0x5985b4*/
  VectorClass::Destroy((int)&v32); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, this + 133); /*0x5985cd*/
  *IntList = &vt_TypeList_int; /*0x5985df*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5985f7*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)MEMORY[0x82BCEC],
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 133, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  *(this + 137) = IntList[4]; /*0x598607*/
  *(this + 138) = v15[5]; /*0x59860d*/
  *(this + 139) = v15[6]; /*0x598617*/
  v32 = (int)&vt_VectorClass_int; /*0x59861a*/
  VectorClass::Destroy((int)&v32); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, this + 140); /*0x598633*/
  *IntList = &vt_TypeList_int; /*0x598645*/
  IntList = (void ***)INIClass::ReadIntList( /*0x59865d*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)MEMORY[0x82BCDC],
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 140, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  *(this + 144) = IntList[4]; /*0x59866d*/
  *(this + 145) = v16[5]; /*0x598673*/
  *(this + 146) = v16[6]; /*0x59867d*/
  v32 = (int)&vt_VectorClass_int; /*0x598680*/
  VectorClass::Destroy((int)&v32); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, this + 147); /*0x598699*/
  *IntList = &vt_TypeList_int; /*0x5986ab*/
  IntList = (void ***)INIClass::ReadIntList( /*0x5986c3*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)MEMORY[0x82BCC8],
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 147, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  *(this + 151) = IntList[4]; /*0x5986d3*/
  *(this + 152) = v17[5]; /*0x5986d9*/
  *(this + 153) = v17[6]; /*0x5986df*/
  v32 = (int)&vt_VectorClass_int; /*0x5986e8*/
  if ( Block && v34 ) /*0x5986f4*/
    __3_YAXPAX_Z(Block); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, this + 154); /*0x59870f*/
  *IntList = &vt_TypeList_int; /*0x598721*/
  IntList = (void ***)INIClass::ReadIntList( /*0x598739*/
                        (unsigned __int8 ***)v3,
                        (int)&v32,
                        (unsigned __int8 *)off_82B134,
                        (unsigned __int8 *)MEMORY[0x82BCB8],
                        v24,
                        v25,
                        v26,
                        v27,
                        v28,
                        v29,
                        v30);
  TypeList::Copy(this + 154, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  *(this + 158) = IntList[4]; /*0x598749*/
  *(this + 159) = v18[5]; /*0x59874f*/
  this->q028 = v18[6]; /*0x598759*/
  v32 = (int)&vt_VectorClass_int; /*0x59875c*/
  VectorClass::Destroy((int)&v32); /*0x598760*/
  *(this + 191) = INIClass::ReadInt_Overwrite(off_82B134, stru_82BCAC, *(this + 191)); /*0x59877f*/
  if ( INIClass::GetString( /*0x5987a5*/
         (unsigned __int8 ***)v3,
         (unsigned __int8 *)off_82B134,
         (unsigned __int8 *)aTemperateorepa,
         &MEMORY[0x889F64],
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x5987b7*/
    for ( i = strtok(String, MEMORY[0x817F70]); i; i = strtok(0, MEMORY[0x817F70]) ) /*0x5987d3*/
    {
      if ( !*i ) /*0x5987d5*/
        break; /*0x5987d8*/
      IntList = (void ***)BuildingTypeClass::FindOrCreate(i); /*0x5987e3*/
      if ( IntList ) /*0x5987e7*/
        DynamicVector::Add_Alt3(&v32, &IntList); /*0x5987f2*/
    }
    TypeList::BuildingTypeCopy(v37, &v32); /*0x598813*/
    v32 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x59881c*/
    DynamicVectorClass::Destroy((int)&v32); /*0x598820*/
    v20 = v36; /*0x598825*/
  }
  else
  {
    v20 = v36; /*0x59882b*/
    TypeList::BuildingTypeCopy(v37, v36); /*0x598834*/
  }
  DynamicVector::Copy(v20, v37); /*0x598840*/
  v20[6] = v38; /*0x59884d*/
  v37[0] = &vt_VectorClass_BuildingTypeClass_const; /*0x598850*/
  DynamicVectorClass::Destroy((int)v37); /*0x598854*/
  if ( INIClass::GetString( /*0x598879*/
         (unsigned __int8 ***)v3,
         (unsigned __int8 *)off_82B134,
         (unsigned __int8 *)aSnoworepatchla,
         &MEMORY[0x889F64],
         String,
         128) )
  {
    TypeList::BuildingTypeConstructor(&v32); /*0x598886*/
    for ( j = strtok(String, MEMORY[0x817F70]); j; j = strtok(0, MEMORY[0x817F70]) ) /*0x5988a2*/
    {
      if ( !*j ) /*0x5988a4*/
        break; /*0x5988a7*/
      IntList = (void ***)BuildingTypeClass::FindOrCreate(j); /*0x5988b2*/
      if ( IntList ) /*0x5988b6*/
        DynamicVector::Add_Alt3(&v32, &IntList); /*0x5988c1*/
    }
    TypeList::BuildingTypeCopy(v37, &v32); /*0x5988e2*/
    v32 = (int)&vt_VectorClass_BuildingTypeClass_const; /*0x5988eb*/
    DynamicVectorClass::Destroy((int)&v32); /*0x5988ef*/
    v22 = v35; /*0x5988f4*/
  }
  else
  {
    v22 = v35; /*0x5988fa*/
    TypeList::BuildingTypeCopy(v37, v35); /*0x598903*/
  }
  DynamicVector::Copy(v22, v37); /*0x59890f*/
  v37[0] = &vt_VectorClass_BuildingTypeClass_const; /*0x598918*/
  v22[6] = v38; /*0x59891c*/
  DynamicVectorClass::Destroy((int)v37); /*0x598923*/
  if ( v3 ) /*0x59892a*/
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x598932*/
  CCFileClass::Reset(v39); /*0x598938*/
  return CCFileClass::Destruct(v39); /*0x598946*/
}


// ==== 0x00598960  RandomMap::Generate  this=MapResourceClass  sig=csp ====
char __thiscall RandomMap_Generate(int *this, char a2, HWND hDlg)
{
  HWND DlgItem; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int i; // esi
  void *v9; // ecx
  void *v10; // ecx
  int j; // edi
  int v12; // esi
  int v13; // eax
  bool v14; // al
  int v15; // eax
  int k; // eax
  int v17; // ecx
  int v18; // eax
  int m; // edi
  _DWORD *v20; // esi
  int v21; // eax
  void *v22; // eax
  int n; // eax
  void (__stdcall *v24)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  int *v26; // edi
  int jj; // eax
  _DWORD *v28; // eax
  int kk; // eax
  int mm; // edi
  _DWORD *v31; // esi
  int v32; // eax
  char result; // al
  HWND v34; // eax
  bool v35; // [esp+11h] [ebp-415h]
  _DWORD *v36; // [esp+12h] [ebp-414h] BYREF
  int *v37; // [esp+16h] [ebp-410h]
  _DWORD v38[6]; // [esp+1Ah] [ebp-40Ch] BYREF
  int v39[253]; // [esp+32h] [ebp-3F4h] BYREF

  v37 = this; /*0x598973*/
  if ( off_82AF14 ) /*0x598977*/
    off_82AF14(); /*0x598979*/
  qmemcpy(&g_Randomizer, SeedInitRNG(v39, this->q074), 0x3F4u); /*0x59899b*/
  LOBYTE(v38[0]) = 0; /*0x5989ab*/
  v38[2] = 0; /*0x5989af*/
  v38[3] = 0; /*0x5989b7*/
  v38[4] = sub_598000; /*0x5989bf*/
  qmemcpy(&g_TileSystemInit, v38, 0x18u); /*0x5989c9*/
  if ( off_82AF14 ) /*0x5989cb*/
    off_82AF14(); /*0x5989cd*/
  v35 = *((_BYTE *)MEMORY[0xA8B230] + 13720) == 0; /*0x5989e7*/
  if ( !*((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x5989dc*/
  {
    ProgressAnim::Init(0, 1079574528, 1, hDlg); /*0x5989fb*/
    SHPClass::Load(aProgbar2Shp, 0, 0); /*0x598a0c*/
    TextRenderer::MeasureBuilding(-1, -1, 0, 0, 1); /*0x598a22*/
    LoadScreen::Render((int)MEMORY[0xAC4F58], 0, (int)this, NAN); /*0x598a34*/
    DlgItem = GetDlgItem(hDlg, 1592); /*0x598a3f*/
    if ( DlgItem ) /*0x598a47*/
      ShowWindow(DlgItem, 5); /*0x598a4c*/
  }
  if ( off_82AF14 ) /*0x598a59*/
    off_82AF14(); /*0x598a5b*/
  Debug::Log(); /*0x598a62*/
  RandomMap::SetupTheater(a2); /*0x598a74*/
  if ( off_82AF14 ) /*0x598a80*/
    off_82AF14(); /*0x598a82*/
  ++MEMORY[0xA8E7AC]; /*0x598a9a*/
  if ( a2 ) /*0x598aa0*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598aa8*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598ab2*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x598ac4*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598acc*/
  }
  if ( off_82AF14 ) /*0x598ad8*/
    off_82AF14(); /*0x598ada*/
  RandomMap::LoadConfig(this); /*0x598ade*/
  Debug::Log(); /*0x598ae8*/
  v5 = this->__pad_03C; /*0x598aed*/
  if ( v5 == 3 || v5 == 4 ) /*0x598afb*/
  {
    if ( this->q04C ) /*0x598b06*/
      RandomMap::GrowTiberium(this); /*0x598b0d*/
  }
  else
  {
    RandomMap::FinalizeMapData(this); /*0x598aff*/
  }
  FindMapCell(this); /*0x598b14*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598b1e*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 154); /*0x598b30*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 55.0, NAN); /*0x598b4b*/
  if ( off_82AF14 ) /*0x598b57*/
    off_82AF14(); /*0x598b59*/
  if ( a2 ) /*0x598b62*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598b6a*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598b74*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x598b86*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598b8e*/
  }
  if ( off_82AF14 ) /*0x598b9a*/
    off_82AF14(); /*0x598b9c*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598ba4*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 159); /*0x598bb6*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 60.0, NAN); /*0x598bd1*/
  if ( off_82AF14 ) /*0x598bdd*/
    off_82AF14(); /*0x598bdf*/
  if ( a2 ) /*0x598be8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598bf0*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598bfa*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x598c0c*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598c14*/
  }
  if ( off_82AF14 ) /*0x598c20*/
    off_82AF14(); /*0x598c22*/
  Debug::Log(); /*0x598c29*/
  if ( g_MapTileArray ) /*0x598c38*/
  {
    v6 = unk_89C2DC * unk_89C2DC; /*0x598c40*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x598c45*/
    {
      v7 = 0; /*0x598c47*/
      do /*0x598c64*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v7 + 56) = -1; /*0x598c52*/
        *(_DWORD *)((char *)g_MapTileArray + v7 + 60) = -1; /*0x598c5c*/
        v7 += 80; /*0x598c60*/
        --v6; /*0x598c63*/
      }
      while ( v6 ); /*0x598c64*/
    }
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x598c71*/
  {
    v9 = (void *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x598c78*/
    if ( v9 ) /*0x598c7d*/
      RandomMap::Constructor_VectorClass_Cell_(v9, 1); /*0x598c81*/
  }
  g_MapTileArrayEnd = 0; /*0x598c89*/
  RandomMap::GenerateTerrainForAllCells(); /*0x598c8f*/
  for ( j = 0; j < g_RandomMap_TileData; ++j ) /*0x598c9d*/
  {
    v10 = g_RandomMap_TerrainState; /*0x598ca4*/
    v12 = *((_DWORD *)g_RandomMap_TerrainState + j); /*0x598caa*/
    if ( *(_BYTE *)(v12 + 20) ) /*0x598cad*/
    {
      v13 = v37[15]; /*0x598cb6*/
      v14 = v13 == 3 || v13 == 4; /*0x598cc7*/
      RandomMap::CollectTerrainCells((*(_DWORD *)(v12 + 12) > 8000) + !v14 + 4); /*0x598ce4*/
      RandomMap::PlaceRandomMapTerrain(v12); /*0x598ceb*/
    }
  }
  LOBYTE(v10) = 0; /*0x598cfa*/
  Map_Helper_58D010(v10); /*0x598cfc*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598d07*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 164); /*0x598d19*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 65.0, NAN); /*0x598d34*/
  if ( off_82AF14 ) /*0x598d40*/
    off_82AF14(); /*0x598d42*/
  Debug::Log(); /*0x598d49*/
  v15 = v37[15]; /*0x598d55*/
  if ( v15 == 4 || v15 == 3 ) /*0x598d60*/
  {
    BuildRandomMapTiles(); /*0x598d62*/
    ResetMapState(); /*0x598d67*/
    ProcessRandomMapCellAdjacency(v37); /*0x598d6e*/
    CreateMapObject(0, -1); /*0x598d7b*/
    MapClass::FindPassableNeighbor(v37); /*0x598d82*/
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598d8d*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 169); /*0x598d9f*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 70.0, NAN); /*0x598dba*/
  if ( off_82AF14 ) /*0x598dc6*/
    off_82AF14(); /*0x598dc8*/
  if ( a2 ) /*0x598dd1*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x598dd9*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x598dea*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x598e00*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x598e08*/
  }
  if ( off_82AF14 ) /*0x598e14*/
    off_82AF14(); /*0x598e16*/
  RandomMap::PlaceShoreObjects(v37); /*0x598e1a*/
  Debug::Log(); /*0x598e24*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x598e31*/
  for ( k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); k; k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x598e42*/
    House::AnnounceUpgrade(k, -1); /*0x598e48*/
  if ( off_82AF14 ) /*0x598e62*/
    off_82AF14(); /*0x598e64*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598e6c*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 174); /*0x598e7e*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 75.0, NAN); /*0x598e99*/
  Debug::Log(); /*0x598ea3*/
  do /*0x598ebd*/
  {
    while ( !(unsigned __int8)DistributeRandomMapTerrain() ) /*0x598eb2*/
      ; /*0x598eab*/
  }
  while ( !(unsigned __int8)SpreadMapSeedTerrainFromWaypoints(v37) ); /*0x598ebd*/
  Debug::Log(); /*0x598ec4*/
  if ( v37[15] ) /*0x598ec9*/
    PlaceRandomAIBuildings(v37); /*0x598ed5*/
  if ( off_82AF14 ) /*0x598ee1*/
    off_82AF14(); /*0x598ee3*/
  Debug::Log(); /*0x598eea*/
  RandomMap::PlaceRandomMapTiberium(v37); /*0x598ef4*/
  if ( off_82AF14 ) /*0x598f00*/
    off_82AF14(); /*0x598f02*/
  if ( g_MapTileArray ) /*0x598f0a*/
  {
    v17 = unk_89C2DC * unk_89C2DC; /*0x598f12*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x598f17*/
    {
      v18 = 0; /*0x598f19*/
      do /*0x598f36*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v18 + 56) = -1; /*0x598f24*/
        *(_DWORD *)((char *)g_MapTileArray + v18 + 60) = -1; /*0x598f2e*/
        v18 += 80; /*0x598f32*/
        --v17; /*0x598f35*/
      }
      while ( v17 ); /*0x598f36*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x598f48*/
  {
    v20 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + m); /*0x598f4f*/
    if ( v20 ) /*0x598f54*/
    {
      if ( *v20 ) /*0x598f56*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v20)(*v20, 1); /*0x598f60*/
        *v20 = 0; /*0x598f62*/
      }
      v36 = v20; /*0x598f74*/
      v21 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x598f78*/
      if ( v21 != -1 ) /*0x598f7e*/
        Vector4::EraseAt(v21); /*0x598f86*/
      v22 = (void *)v20[11]; /*0x598f8b*/
      v20[10] = &vt_VectorClass_Cell; /*0x598f8e*/
      if ( v22 && *((_BYTE *)v20 + 53) ) /*0x598f95*/
      {
        __3_YAXPAX_Z(v22); /*0x598f9b*/
        v20[11] = 0; /*0x598fa3*/
      }
      *((_BYTE *)v20 + 53) = 0; /*0x598fa7*/
      v20[12] = 0; /*0x598faa*/
      __3_YAXPAX_Z(v20); /*0x598fad*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x598fbd*/
  Debug::Log(); /*0x598fc3*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x598fd0*/
  for ( n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); n; n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x598fe1*/
    House::AnnounceUpgrade(n, -1); /*0x598fe7*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x598fff*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 179); /*0x599011*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 80.0, NAN); /*0x59902c*/
  if ( off_82AF14 ) /*0x599038*/
    off_82AF14(); /*0x59903a*/
  if ( a2 ) /*0x599043*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59904b*/
    v24 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599057*/
    SendMessageA(hDlg, 0xFu, 0, 0); /*0x599062*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x599079*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599081*/
  }
  else
  {
    v24 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x599088*/
  }
  if ( off_82AF14 ) /*0x59909a*/
    off_82AF14(); /*0x59909c*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x5990a4*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 184); /*0x5990b6*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 85.0, NAN); /*0x5990d1*/
  if ( off_82AF14 ) /*0x5990dd*/
    off_82AF14(); /*0x5990df*/
  if ( a2 ) /*0x5990e8*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5990f0*/
    v24(hDlg, 0xFu, 0, 0); /*0x599101*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x599112*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x59911a*/
  }
  if ( off_82AF14 ) /*0x599126*/
    off_82AF14(); /*0x599128*/
  Debug::Log(); /*0x59912f*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59913c*/
  for ( ii = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); ii; ii = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59914d*/
    House::AnnounceUpgrade(ii, -1); /*0x599153*/
  if ( off_82AF14 ) /*0x59916d*/
    off_82AF14(); /*0x59916f*/
  Debug::Log(); /*0x599176*/
  v26 = v37; /*0x59917b*/
  GenerateTerrainHeightMap(v37); /*0x599184*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x59918f*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 189); /*0x5991a1*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 90.0, NAN); /*0x5991bc*/
  if ( off_82AF14 ) /*0x5991c8*/
    off_82AF14(); /*0x5991ca*/
  if ( a2 ) /*0x5991d3*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x5991db*/
    v24(hDlg, 0xFu, 0, 0); /*0x5991ec*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x5991fd*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599205*/
  }
  if ( off_82AF14 ) /*0x599211*/
    off_82AF14(); /*0x599213*/
  Debug::Log(); /*0x59921a*/
  if ( v26[14] ) /*0x59921f*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59923e*/
    for ( jj = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); jj; jj = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59924f*/
    {
      v36 = *(_DWORD **)(jj + 36); /*0x59925a*/
      v28 = (char *)g_MapTileArray + 80 * (__int16)v36 + 80 * unk_89C2DC * SHIWORD(v36); /*0x59927b*/
      v28[10] = 1202590843; /*0x599283*/
      v28[11] = 1064598241; /*0x599286*/
      v28[8] = -755914244; /*0x599295*/
      v28[9] = 1062232653; /*0x599298*/
    }
    RandomMap::GenerateRandomMapTerrain(v26); /*0x5992ab*/
  }
  else
  {
    CellClass::Reset(v26); /*0x59922b*/
    RandomMap::PlaceResources(v26); /*0x599232*/
  }
  if ( off_82AF14 ) /*0x5992b7*/
    off_82AF14(); /*0x5992b9*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x5992c1*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 194); /*0x5992d3*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 95.0, NAN); /*0x5992ee*/
  if ( off_82AF14 ) /*0x5992fa*/
    off_82AF14(); /*0x5992fc*/
  if ( a2 ) /*0x599305*/
  {
    MiniMap::Render((char **)g_Map_TiberiumConfig); /*0x59930d*/
    v24(hDlg, 0xFu, 0, 0); /*0x59931e*/
    if ( MEMORY[0xA8B238] == 4 && MEMORY[0xA8B244] == 3 ) /*0x59932f*/
      MapPreview::Upload((int *)g_Map_TiberiumConfig); /*0x599337*/
  }
  --MEMORY[0xA8E7AC]; /*0x59934a*/
  if ( off_82AF14 ) /*0x599350*/
    off_82AF14(); /*0x599352*/
  Debug::Log(); /*0x599359*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x599366*/
  for ( kk = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); kk; kk = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x599377*/
    House::AnnounceUpgrade(kk, -1); /*0x59937d*/
  if ( off_82AF14 ) /*0x599397*/
    off_82AF14(); /*0x599399*/
  BuildingClass::ClearOccupancyData(); /*0x59939b*/
  BuildingClass::ClearFactoryData(); /*0x5993a0*/
  Debug::Log(); /*0x5993aa*/
  v26[193] = 0; /*0x5993af*/
  v26[194] = 0; /*0x5993b5*/
  if ( g_MapTileArray ) /*0x5993c5*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x5993c8*/
    g_MapTileArray = 0; /*0x5993d0*/
  }
  for ( mm = g_RandomMap_TileData - 1; mm >= 0; --mm ) /*0x5993e1*/
  {
    v31 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + mm); /*0x5993e9*/
    if ( v31 ) /*0x5993ee*/
    {
      if ( *v31 ) /*0x5993f0*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v31)(*v31, 1); /*0x5993fa*/
        *v31 = 0; /*0x5993fc*/
      }
      v36 = v31; /*0x59940e*/
      v32 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v36); /*0x599412*/
      if ( v32 != -1 ) /*0x599418*/
        Vector4::EraseAt(v32); /*0x599420*/
      v31[10] = &vt_VectorClass_Cell; /*0x599428*/
      Buffer::Cleanup((int)(v31 + 10)); /*0x59942e*/
      __3_YAXPAX_Z(v31); /*0x599434*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x599446*/
  MapClass::PostProcessReveal(1); /*0x59944c*/
  Debug::Log(); /*0x599456*/
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)&MEMORY[0x87F8E4]); /*0x599468*/
  RadarClass::RecreateSurface((int)&MEMORY[0x87F7E8], 0); /*0x599472*/
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x59947e*/
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 199); /*0x599490*/
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 100.0, NAN); /*0x5994ab*/
  Debug::Log(); /*0x5994b5*/
  result = v35; /*0x5994ba*/
  if ( v35 ) /*0x5994c3*/
  {
    v34 = GetDlgItem(hDlg, 1592); /*0x5994d2*/
    if ( v34 ) /*0x5994da*/
      ShowWindow(v34, 0); /*0x5994de*/
    if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) ) /*0x5994ea*/
      Multiplayer::ShowProgress(&MEMORY[0xA8B238], 99); /*0x5994f9*/
    else
      Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 0.0, NAN); /*0x599510*/
    return VtableStub::643E70(MEMORY[0xAC4F58]); /*0x59951a*/
  }
  return result; /*0x59951f*/
}


// ==== 0x00599530  MapClass::ProcessTile  this=MapClass  sig=csp ====
int __thiscall sub_599530(_DWORD *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  _DWORD *v6; // [esp+8h] [ebp-4h] BYREF

  this->MapClass_field_0x304 = 0; /*0x599534*/
  this->MapClass_field_0x308 = 0; /*0x59953a*/
  if ( g_MapTileArray ) /*0x599548*/
  {
    __3_YAXPAX_Z(g_MapTileArray); /*0x59954b*/
    g_MapTileArray = 0; /*0x599553*/
  }
  for ( i = g_RandomMap_TileData - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v6 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v6); /*0x59959d*/
      if ( v3 != -1 && v3 < g_RandomMap_TileData && v3 < --g_RandomMap_TileData ) /*0x5995b8*/
      {
        do /*0x5995d0*/
        {
          ++v3; /*0x5995c0*/
          *((_DWORD *)g_RandomMap_TerrainState + v3 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v3); /*0x5995c4*/
        }
        while ( v3 < g_RandomMap_TileData ); /*0x5995d0*/
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &vt_VectorClass_Cell; /*0x5995d5*/
      if ( v4 && *((_BYTE *)v2 + 53) ) /*0x5995e0*/
      {
        __3_YAXPAX_Z(v4); /*0x5995e6*/
        v2[11] = 0; /*0x5995ee*/
      }
      *((_BYTE *)v2 + 53) = 0; /*0x5995f2*/
      v2[12] = 0; /*0x5995f5*/
      __3_YAXPAX_Z(v2); /*0x5995f8*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59960f*/
  MapClass::PostProcessReveal(&MEMORY[0x87F7E8], 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)&MEMORY[0x87F8E4]); /*0x599631*/
  return RadarClass::RecreateSurface((int)&MEMORY[0x87F7E8], 0); /*0x599640*/
}


// ==== 0x00599650  RandomMap::SetupTheater  this=MapResourceClass  sig=csp ====
char *__thiscall RandomMap::SetupTheater(int *this, char a2)
{
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  double v9; // rdi
  double v10; // st7
  int *Waypoint_Location; // eax
  __int16 *v12; // eax
  _DWORD *v13; // eax
  _DWORD *WorldCoords; // eax
  MapResourceClass *v15; // esi
  _DWORD *v16; // eax
  ObjectClass *v17; // eax
  _DWORD *v18; // eax
  MapResourceClass v19; // ecx
  int v20; // edi
  IUnknown *v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // edi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  void *v28; // eax
  IPersistStream *v29; // eax
  int i; // eax
  int v31; // ecx
  ObjectClass *j; // eax
  int v33; // ecx
  int k; // eax
  int v35; // ecx
  int m; // eax
  int v37; // ecx
  int n; // eax
  int *v39; // eax
  __int16 *v40; // eax
  _DWORD *v41; // eax
  _DWORD *v42; // eax
  int v43; // esi
  MapResourceClass *v44; // edi
  IUnknown *v45; // eax
  int v46; // esi
  void *v47; // eax
  int v48; // eax
  int v49; // ecx
  MapResourceClass *v50; // edi
  int v51; // esi
  char *v52; // eax
  int v53; // esi
  char *v54; // ecx
  int v55; // edx
  int ii; // eax
  _DWORD *v57; // esi
  int v58; // eax
  void *v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  wchar_t *StringCSF; // eax
  #376 *v66; // [esp+18h] [ebp-B0h]
  bool v67; // [esp+27h] [ebp-A1h]
  float v68; // [esp+28h] [ebp-A0h]
  int v69; // [esp+28h] [ebp-A0h]
  int v70; // [esp+28h] [ebp-A0h]
  int jj; // [esp+28h] [ebp-A0h]
  MapResourceClass *v72; // [esp+2Ch] [ebp-9Ch] BYREF
  double v73[2]; // [esp+30h] [ebp-98h] BYREF
  MapResourceClass *v74; // [esp+40h] [ebp-88h]
  int v75[2]; // [esp+44h] [ebp-84h] BYREF
  int v76; // [esp+4Ch] [ebp-7Ch]
  int v77; // [esp+50h] [ebp-78h]
  int v78[4]; // [esp+54h] [ebp-74h] BYREF
  void *v79[3]; // [esp+64h] [ebp-64h] BYREF
  int v80[7]; // [esp+70h] [ebp-58h] BYREF
  _DWORD v81[6]; // [esp+8Ch] [ebp-3Ch] BYREF
  char v82; // [esp+A4h] [ebp-24h]
  int v83[3]; // [esp+BCh] [ebp-Ch] BYREF

  v74 = (MapResourceClass *)this;
  *(float *)&v72 = (double)*(this + 25) * 0.33333334;
  v68 = (double)this->q01A * 0.33333334;
  RandomMap::LoadConfig(this);
  v3 = this->__pad_03C;
  if ( v3 == 3 || v3 == 4 )
  {
    v5 = v68;
  }
  else
  {
    if ( *(float *)&v72 >= 1.2 )
      v4 = 1.2;
    else
      v4 = *(float *)&v72;
    *(float *)&v72 = v4;
    if ( v68 >= 1.2 )
      v5 = 1.2;
    else
      v5 = v68;
  }
  this->q060 = Math::RoundToInt(v5);
  v6 = Math::RoundToInt(v5);
  v76 = this->q060;
  v78[2] = v76 + 4;
  this->q061 = v6;
  v78[0] = 0;
  v78[1] = 0;
  v78[3] = v6 + 12;
  v75[0] = 2;
  v75[1] = 5;
  v77 = v6;
  this->q0C3 = 4;
  v79[1] = 0;
  v79[2] = 0;
  INISectionList::Constructor(v80);
  Node::Init(v81);
  v81[5] = 0;
  v82 = 0;
  v79[0] = &CCINIClass_Vtable;
  INIClass::ClearSection((int)v79, 0, 0);
  v7 = this->q038;
  this->q0C3 = 4;
  INIClass::SetString((char *)v79, (unsigned __int8 *)&MEMORY[0x81FFF0], unk_818658, &Theater_Array[112 * v7]);
  INIClass::SetRect((char *)v79, (unsigned __int8 *)&MEMORY[0x81FFF0], g_INI_Key_Size, v78);
  INIClass::SetRect((char *)v79, (unsigned __int8 *)&MEMORY[0x81FFF0], g_INI_Key_LocalSize, v75);
  INIClass::SetInt((char *)v79, (unsigned __int8 *)&MEMORY[0x81FFF0], aLevel, this->q0C3, 0);
  INIClass::SetString(
    (char *)v79,
    (unsigned __int8 *)(*(_DWORD *)g_SuperWeaponTypeCount + 36),
    aTechlevel,
    MEMORY[0x82BFAC]);
  INIClass::SetString(
    (char *)v79,
    (unsigned __int8 *)MEMORY[0x82BF9C],
    MEMORY[0x82BFA4],
    (char *)(*(_DWORD *)g_SuperWeaponTypeCount + 36));
  if ( this->q038 )
    v8 = this->__pad_1C4;
  else
    v8 = this->__pad_1A8;
  v73[0] = (double)*(int *)(v8 + 4 * this->__pad_048) * 0.01;
  v9 = v73[0];
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, MEMORY[0x82BF94], v73[0]);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aRedtint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aGreentint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aBluetint, 1.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_Ground, 0.0);
  LODWORD(v73[0]) = *(_DWORD *)(*(_DWORD *)&v74[99] + 4 * *(_DWORD *)&v74[18]) / 100;
  v10 = (double)SLODWORD(v73[0]);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, aLevel, v10);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonAmbient, v9);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonRed, 0.3);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonGreen, 0.4);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonBlue, 0.75);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonGround, 0.0);
  INIClass::SetDouble((char *)v79, (unsigned __int8 *)g_INI_Key_Lighting, g_INI_Key_IonLevel, 0.0);
  if ( !*((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 1.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  BuildingClass::FreeUpgradeQueue();
  BuildingClass::FreeUpgradeQueue2();
  if ( !a2 )
  {
    ++MEMORY[0xA8E7AC];
    ScenarioClass::SetFileName((char *)MEMORY[0xA8B230], &MEMORY[0x889F64]);
    if ( MEMORY[0xA8ED6B] )
      ResetScenario();
    ScenarioClass::LoadMap(1, (int)v79, v10);
    PostLoadInitScenario(SLODWORD(v9));
    HIWORD(v69) = MEMORY[0x87F8E0] / 2 + MEMORY[0x87F8DC] / 2;
    LOWORD(v69) = HIWORD(v69) + 1;
    ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], 700, v69);
    Waypoint_Location = ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], v73, 700);
    ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], *((_DWORD *)MEMORY[0xA8B230] + 131), *Waypoint_Location);
    v12 = (__int16 *)ScenarioClass::Get_Waypoint_Location(
                       (char *)MEMORY[0xA8B230],
                       v73,
                       *((_DWORD *)MEMORY[0xA8B230] + 131));
    v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v12);
    v13[80] |= 4u;
    WorldCoords = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v73, *((_DWORD *)MEMORY[0xA8B230] + 131));
    TacticalClass::SetPositionThunk((int)WorldCoords);
    goto LABEL_153;
  }
  ScenarioClass::InitTimer((int)MEMORY[0xA8B230]);
  v15 = v74;
  if ( !*(_DWORD *)&v74[95] )
  {
    v16 = __2_YAPAXI_Z(4u);
    if ( v16 )
      v17 = (ObjectClass *)unknown_libname_27(v16);
    else
      v17 = 0;
    v74[95] = (MapResourceClass)v17;
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 101);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 2.0, NAN);
  v18 = (_DWORD *)v15[94];
  v19 = v15[14];
  v20 = *((_DWORD *)MEMORY[0xA8B230] + 1174);
  LODWORD(v73[0]) = v19;
  v67 = 1;
  v70 = v20;
  if ( v18 )
  {
    v20 = v18[14];
    v70 = v20;
    if ( v18[25] == *(_DWORD *)&v15[25] && v18[26] == *(_DWORD *)&v15[26] && v20 == v19 )
      v67 = v18[20] != *(_DWORD *)&v15[20];
  }
  v21 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v21 = (IUnknown *)off_82AF14;
    v19 = (MapResourceClass)LODWORD(v73[0]);
  }
  if ( !*(_DWORD *)&v15[94] || v19 != v20 || v67 )
  {
    v22 = MEMORY[0xA8E978] - 1;
    if ( MEMORY[0xA8E978] - 1 >= 0 )
    {
      do
      {
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)(*((_DWORD *)MEMORY[0xA8E96C] + v22) + 4) + 12))(*((_DWORD *)MEMORY[0xA8E96C] + v22) + 4) == 18
          && v22 < MEMORY[0xA8E978] )
        {
          v23 = v22;
          if ( v22 < --MEMORY[0xA8E978] )
          {
            do
            {
              ++v23;
              *((_DWORD *)MEMORY[0xA8E96C] + v23 - 1) = *((_DWORD *)MEMORY[0xA8E96C] + v23);
            }
            while ( v23 < MEMORY[0xA8E978] );
          }
        }
        --v22;
      }
      while ( v22 >= 0 );
      v21 = (IUnknown *)off_82AF14;
    }
    if ( v21 )
      ((void (__stdcall *)())v21)();
    Game::DestroyAllObjects();
    if ( off_82AF14 )
      off_82AF14();
    v24 = 0;
    if ( MEMORY[0xA8ED38] > 0 )
    {
      v25 = MEMORY[0xA8E970];
      do
      {
        v26 = *((_DWORD *)MEMORY[0xA8ED2C] + v24);
        if ( MEMORY[0xA8E978] < v25 )
          goto LABEL_57;
        if ( !MEMORY[0xA8E975] && v25 || MEMORY[0xA8E97C] <= 0 )
          goto LABEL_59;
        if ( (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8E968] + 8))(
               &MEMORY[0xA8E968],
               MEMORY[0xA8E97C] + v25,
               0) )
        {
LABEL_57:
          v27 = MEMORY[0xA8E978]++;
          *((_DWORD *)MEMORY[0xA8E96C] + v27) = v26;
        }
        v25 = MEMORY[0xA8E970];
LABEL_59:
        ++v24;
      }
      while ( v24 < MEMORY[0xA8ED38] );
    }
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 104);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 5.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( v67 )
  {
    MouseClass::HandleClick((int)&MEMORY[0x87F7E8]);
    CellClass::DrawWrapper(&MEMORY[0x87F7E8].field_0, v78, 1, 0, 1);
    Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)v75);
    if ( MEMORY[0x887324] )
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)MEMORY[0x887324] + 32))(MEMORY[0x887324], 1);
    v28 = __2_YAPAXI_Z(0xE18u);
    if ( v28 )
      v29 = (IPersistStream *)TacticalMap::Construct((int)v28);
    else
      v29 = 0;
    MEMORY[0x887324] = v29;
    Map_Setup_6DA980();
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 109);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 10.0, NAN);
  for ( i = MEMORY[0x8B4118]; MEMORY[0x8B4118] > 0; i = MEMORY[0x8B4118] )
  {
    v31 = *((_DWORD *)MEMORY[0x8B410C] + i - 1);
    if ( v31 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1);
  }
  for ( j = (ObjectClass *)MEMORY[0xA83DF8]; MEMORY[0xA83DF8] > 0; j = (ObjectClass *)MEMORY[0xA83DF8] )
  {
    v33 = *((_DWORD *)MEMORY[0xA83DEC] + (_DWORD)j - 1);
    if ( v33 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 32))(v33, 1);
  }
  for ( k = MEMORY[0xA8EB50]; MEMORY[0xA8EB50] > 0; k = MEMORY[0xA8EB50] )
  {
    v35 = *((_DWORD *)MEMORY[0xA8EB44] + k - 1);
    if ( v35 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v35 + 32))(v35, 1);
  }
  for ( m = MEMORY[0xA8E998]; MEMORY[0xA8E998] > 0; m = MEMORY[0xA8E998] )
  {
    v37 = *((_DWORD *)MEMORY[0xA8E98C] + m - 1);
    if ( v37 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v37 + 32))(v37, 1);
  }
  if ( off_82AF14 )
    off_82AF14();
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  for ( n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); n; n = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    *(_BYTE *)(n + 284) = 0;
    *(_BYTE *)(n + 283) = 4;
    *(_DWORD *)(n + 56) = 0;
    *(_BYTE *)(n + 282) = 0;
    *(_DWORD *)(n + 68) = -1;
    *(_BYTE *)(n + 286) = 0;
  }
  if ( off_82AF14 )
    off_82AF14();
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 114);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 15.0, NAN);
  MapClass::ProcessRegion(&MEMORY[0x87F7E8]);
  Terrain::ConnectivityGraph(&MEMORY[0x87F7E8]);
  MapClass::BuildSubzones(&MEMORY[0x87F7E8]);
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 119);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 20.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  ScenarioClass::ClearAllWaypoints((char *)MEMORY[0xA8B230]);
  HIWORD(v72) = MEMORY[0x87F8E0] / 2 + MEMORY[0x87F8DC] / 2;
  LOWORD(v72) = HIWORD(v72) + 1;
  ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], 700, (int)v72);
  v39 = ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v72, 700);
  ScenarioClass::Set_Waypoint((char *)MEMORY[0xA8B230], 699, *v39);
  v40 = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)MEMORY[0xA8B230], &v72, 699);
  v41 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40);
  v41[80] |= 4u;
  v42 = Cell::GetWorldCoords((__int16 *)MEMORY[0xA8B230], v83, 699);
  TacticalClass::SetPositionThunk((int)v42);
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 124);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 25.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v43 = LODWORD(v73[0]);
  ++MEMORY[0xA8E7AC];
  if ( LODWORD(v73[0]) != *((_DWORD *)MEMORY[0xA8B230] + 1174) )
  {
    LoadTheaterClassMIX(SLODWORD(v73[0]));
    *((_DWORD *)MEMORY[0xA8B230] + 1174) = v43;
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 129);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 30.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  v44 = v74;
  if ( !*(_DWORD *)&v74[94] || v43 != v70 || v67 )
  {
    ResetRules(MEMORY[0x8871E0]);
    ScenarioClass::ReadGlobalVariables((char *)MEMORY[0xA8B230], (char *)MEMORY[0x887048]);
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 134);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 35.0, NAN);
  v45 = (IUnknown *)off_82AF14;
  if ( off_82AF14 )
  {
    off_82AF14();
    v45 = (IUnknown *)off_82AF14;
  }
  if ( !*(_DWORD *)&v44[94] || v43 != v70 || v67 )
  {
    if ( !HouseClass_Count )
    {
      v46 = 0;
      if ( g_SuperWeaponTypeArray > 0 )
      {
        do
        {
          v47 = __2_YAPAXI_Z(0x160B8u);
          if ( v47 )
            v48 = HouseClass::Construct((int)v47, *((_DWORD *)g_SuperWeaponTypeCount + v46));
          else
            v48 = 0;
          HouseClass::ReadFromINI(v48, (unsigned __int8 ***)v79);
          ++v46;
        }
        while ( v46 < g_SuperWeaponTypeArray );
        v45 = (IUnknown *)off_82AF14;
      }
    }
    if ( v45 )
      ((void (__stdcall *)())v45)();
    LoadObjectTypeClassTheaterSHP(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    v49 = *((_DWORD *)MEMORY[0xA8B230] + 1174);
    if ( v49 == dword_822CF8 )
      ResetAllTechnoField776();
    else
      LoadTerrainTypeClassTheatre(v49, 1);
    LoadBuildingTypeClassSHPs(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    if ( off_82AF14 )
    {
      off_82AF14();
      if ( off_82AF14 )
      {
        off_82AF14();
        if ( off_82AF14 )
          off_82AF14();
      }
    }
    BuildingTypeClass::LoadRepairAnimations(v66);
    if ( off_82AF14 )
      off_82AF14();
    LoadBuildingTypeClassTheatreSHP(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadFactoryClassTheaterSHP(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    if ( off_82AF14 )
      off_82AF14();
    LoadMapClassIsometricTiles(0, 1);
  }
  dword_822CF8 = *((_DWORD *)MEMORY[0xA8B230] + 1174);
LABEL_153:
  v50 = v74;
  --MEMORY[0xA8E7AC];
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 139);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 40.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  if ( g_MapTileArray )
    __3_YAXPAX_Z(g_MapTileArray);
  v51 = unk_89C2DC * unk_89C2DC;
  v52 = (char *)__2_YAPAXI_Z(80 * unk_89C2DC * unk_89C2DC);
  if ( v52 )
  {
    v53 = v51 - 1;
    if ( v53 >= 0 )
    {
      v54 = v52 + 8;
      v55 = v53 + 1;
      do
      {
        *((_WORD *)v54 - 4) = 0;
        *((_WORD *)v54 - 3) = 0;
        *(_DWORD *)v54 = 0;
        *((_DWORD *)v54 + 2) = 0;
        *((_DWORD *)v54 + 4) = 0;
        *((_DWORD *)v54 + 6) = 0;
        *((_DWORD *)v54 + 8) = 0;
        *((_DWORD *)v54 + 10) = 0;
        *((_DWORD *)v54 + 1) = 0;
        *((_DWORD *)v54 + 3) = 0;
        *((_DWORD *)v54 + 5) = 0;
        *((_DWORD *)v54 + 7) = 0;
        *((_DWORD *)v54 + 9) = 0;
        *((_DWORD *)v54 + 11) = 0;
        *((_DWORD *)v54 + 12) = 0;
        *((_DWORD *)v54 + 13) = 0;
        *((_DWORD *)v54 + 14) = -1;
        v54[60] = 0;
        v54[61] = 0;
        v54[62] = 0;
        v54[63] = 0;
        v54[64] = 0;
        v54[65] = 0;
        v54[66] = 1;
        v54[67] = 0;
        v54 += 80;
        --v55;
      }
      while ( v55 );
    }
    g_MapTileArray = v52;
  }
  else
  {
    g_MapTileArray = 0;
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  for ( ii = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); ii; ii = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    LODWORD(v73[0]) = *(_DWORD *)(ii + 36);
    *((_DWORD *)g_MapTileArray + 20 * SLOWORD(v73[0]) + 20 * unk_89C2DC * SWORD1(v73[0])) = LODWORD(v73[0]);
    *(_BYTE *)(ii + 283) = v50[195].__tail_0[0];
  }
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 144);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 45.0, NAN);
  if ( off_82AF14 )
    off_82AF14();
  g_MapTileArrayEnd = 0;
  for ( jj = g_RandomMap_TileData - 1; jj >= 0; --jj )
  {
    v57 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + jj);
    if ( v57 )
    {
      if ( *v57 )
      {
        (**(void (__thiscall ***)(_DWORD, int))*v57)(*v57, 1);
        *v57 = 0;
      }
      LODWORD(v73[0]) = v57;
      v58 = (*(int (__thiscall **)(int *, double *))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, v73);
      if ( v58 != -1 )
        Vector4::EraseAt(&g_RandomMap_BuildObject, v58);
      v59 = (void *)v57[11];
      v57[10] = &vt_VectorClass_Cell;
      if ( v59 && *((_BYTE *)v57 + 53) )
      {
        __3_YAXPAX_Z(v59);
        v57[11] = 0;
      }
      *((_BYTE *)v57 + 53) = 0;
      v57[12] = 0;
      __3_YAXPAX_Z(v57);
    }
  }
  v50[193] = 0;
  v50[194] = 0;
  *(_QWORD *)&v73[0] = (unsigned int)Random::State(&g_Randomizer);
  v50[196].__tail_0[0] = (double)*(__int64 *)&v73[0] * 2.328306437080797e-10 < 0.25;
  TacticalClass::FreeResources((int)&MEMORY[0x87F7E8]);
  Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (int)v75);
  RandomMap::PlaceTileSet(&MEMORY[0x87F7E8]);
  RadarClass::RecreateSurface((int)&MEMORY[0x87F7E8], 0);
  if ( v50[14] )
    v60 = *(_DWORD *)(*(_DWORD *)&v50[113] + 4 * *(_DWORD *)&v50[18]);
  else
    v60 = *(_DWORD *)(*(_DWORD *)&v50[106] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)MEMORY[0xA8B230] + 3402) = v60;
  *((_DWORD *)MEMORY[0xA8B230] + 3409) = *(_DWORD *)(*(_DWORD *)&v50[99] + 4 * *(_DWORD *)&v50[18]);
  if ( v50[14] )
    v61 = *(_DWORD *)(*(_DWORD *)&v50[141] + 4 * *(_DWORD *)&v50[18]);
  else
    v61 = *(_DWORD *)(*(_DWORD *)&v50[120] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)MEMORY[0xA8B230] + 3405) = v61;
  if ( v50[14] )
    v62 = *(_DWORD *)(*(_DWORD *)&v50[148] + 4 * *(_DWORD *)&v50[18]);
  else
    v62 = *(_DWORD *)(*(_DWORD *)&v50[127] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)MEMORY[0xA8B230] + 3406) = v62;
  if ( v50[14] )
    v63 = *(_DWORD *)(*(_DWORD *)&v50[155] + 4 * *(_DWORD *)&v50[18]);
  else
    v63 = *(_DWORD *)(*(_DWORD *)&v50[134] + 4 * *(_DWORD *)&v50[18]);
  *((_DWORD *)MEMORY[0xA8B230] + 3407) = v63;
  if ( *((_BYTE *)MEMORY[0xA8B230] + 13720) )
    Multiplayer::ShowProgress(MEMORY[0xA8B238], 149);
  else
    Network::UpdateLatencyDisplay((int)MEMORY[0xAC4F58], 0, 50.0, NAN);
  if ( !wcslen((const wchar_t *)&v50[30]) )
  {
    StringCSF = GetStringCSF(g_Str_TXT_RANDOM_MAP_DESCRIPTION, 0, g_Str_File_MapGen_cpp, 6746);
    wcscpy((wchar_t *)&v50[30], StringCSF);
  }
  return HashTable::DestroyHashTableINIClass(v79);
}


// ==== 0x0059A6C0  RandomMap::FinalizeMapData  this=MapResourceClass  sig=csp ====
int __thiscall RandomMap::FinalizeMapData(int *this)
{
  int i; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *j; // edi
  char v6; // bl
  signed int k; // esi
  _DWORD *NeighbourContent; // eax
  int v9; // ecx
  int v10; // eax
  int m; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  void *v14; // eax
  int result; // eax
  int *n; // ebp
  signed int ii; // esi
  _DWORD *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59a6dd*/
    *(_DWORD *)(i + 56) = dword_AA0738; /*0x59a6e5*/
  v3 = this->__pad_03C; /*0x59a6f6*/
  if ( v3 ) /*0x59a6fc*/
  {
    v4 = v3 - 1; /*0x59a6fe*/
    if ( v4 ) /*0x59a6ff*/
    {
      if ( v4 == 1 ) /*0x59a702*/
        RandomMap::PlaceTerrainFeatures(this); /*0x59a706*/
    }
    else
    {
      RandomMap::FillTerrainProgressively(this); /*0x59a70f*/
    }
  }
  else
  {
    RandomMap::ArrangeBuildingGrid(this); /*0x59a718*/
  }
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59a722*/
  for ( j = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59a735*/
        j;
        j = (_DWORD *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    if ( j[14] == dword_AA0738 ) /*0x59a741*/
    {
      v6 = 1; /*0x59a743*/
      for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
      {
        NeighbourContent = Cell::GetNeighbourContent(j, k); /*0x59a74a*/
        if ( !Cell::IsEmpty(NeighbourContent) ) /*0x59a751*/
          v6 = 0; /*0x59a75a*/
      }
      if ( v6 ) /*0x59a766*/
        j[14] = 0; /*0x59a768*/
    }
  }
  MapClass::InitTileData(0, 0); /*0x59a788*/
  if ( g_MapTileArray ) /*0x59a794*/
  {
    v9 = unk_89C2DC * unk_89C2DC; /*0x59a79c*/
    if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59a7a1*/
    {
      v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(_DWORD *)((char *)g_MapTileArray + v10 + 56) = -1; /*0x59a7ae*/
        *(_DWORD *)((char *)g_MapTileArray + v10 + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_RandomMap_TileData - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    v12 = (_DWORD *)*((_DWORD *)g_RandomMap_TerrainState + m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      v19 = v12; /*0x59a808*/
      v13 = (*(int (__thiscall **)(int *, _DWORD **))(g_RandomMap_BuildObject + 16))(&g_RandomMap_BuildObject, &v19); /*0x59a80c*/
      if ( v13 != -1 && v13 < g_RandomMap_TileData && v13 < --g_RandomMap_TileData ) /*0x59a827*/
      {
        do /*0x59a83f*/
        {
          ++v13; /*0x59a82f*/
          *((_DWORD *)g_RandomMap_TerrainState + v13 - 1) = *((_DWORD *)g_RandomMap_TerrainState + v13); /*0x59a833*/
        }
        while ( v13 < g_RandomMap_TileData ); /*0x59a83f*/
      }
      v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &vt_VectorClass_Cell; /*0x59a844*/
      if ( v14 && *((_BYTE *)v12 + 53) ) /*0x59a84b*/
      {
        __3_YAXPAX_Z(v14); /*0x59a853*/
        v12[11] = 0; /*0x59a85b*/
      }
      *((_BYTE *)v12 + 53) = 0; /*0x59a85f*/
      v12[12] = 0; /*0x59a863*/
      __3_YAXPAX_Z(v12); /*0x59a866*/
    }
  }
  g_MapTileArrayEnd = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59a884*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59a88e*/
  for ( n = (int *)result; result; n = (int *)result ) /*0x59a897*/
  {
    if ( CellClass::IsTerrainType(n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        v18 = Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18[14] = unk_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59a8d0*/
  }
  return result; /*0x59a8db*/
}


// ==== 0x0059A8F0  ArrangeBuildingPlacementGrid  this=MapResourceClass  sig=csp ====
void __stdcall ArrangeBuildingPlacementGrid(int a1, int a2, MapResourceClass *aP2)
{
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  MapResourceClass *v7; // ebp
  int v8; // esi
  int v9; // edi
  VectorClass *v10; // ecx
  int v11; // eax
  VectorClass *v12; // eax
  int v13; // edi
  char *v14; // esi
  int v15; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edx
  bool v22; // zf
  int v23; // [esp+18h] [ebp-74h]
  int v24; // [esp+1Ch] [ebp-70h]
  __int64 v25; // [esp+20h] [ebp-6Ch]
  int v26; // [esp+28h] [ebp-64h]
  int v27; // [esp+2Ch] [ebp-60h]
  int v28; // [esp+30h] [ebp-5Ch]
  int v29; // [esp+38h] [ebp-54h]
  int v30; // [esp+3Ch] [ebp-50h]
  int v31; // [esp+40h] [ebp-4Ch]
  int j; // [esp+40h] [ebp-4Ch]
  MapResourceClass v33; // [esp+44h] [ebp-48h]
  MapResourceClass v34; // [esp+48h] [ebp-44h]
  __int64 v35; // [esp+4Ch] [ebp-40h]
  double v36; // [esp+54h] [ebp-38h]
  void **v37; // [esp+5Ch] [ebp-30h] BYREF
  void *Block; // [esp+60h] [ebp-2Ch]
  int v39; // [esp+64h] [ebp-28h]
  int v40; // [esp+68h] [ebp-24h]
  VectorClass *i; // [esp+6Ch] [ebp-20h]
  CCINIClass *v42; // [esp+70h] [ebp-1Ch]
  void **v43; // [esp+74h] [ebp-18h] BYREF
  void *v44; // [esp+78h] [ebp-14h]
  int v45; // [esp+7Ch] [ebp-10h]
  char v46; // [esp+81h] [ebp-Bh]
  int v47; // [esp+84h] [ebp-8h]
  int v48; // [esp+88h] [ebp-4h]

  v3 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)a2)); /*0x59a901*/
  v4 = Math::RoundToInt(v3); /*0x59a909*/
  v31 = v4; /*0x59a91c*/
  if ( v4 * v4 == a2 ) /*0x59a920*/
  {
    v5 = v4; /*0x59a922*/
    v26 = v4; /*0x59a924*/
  }
  else
  {
    v26 = v4 + 1; /*0x59a92d*/
    v5 = v4 + 1; /*0x59a931*/
  }
  if ( v4 * v5 < a2 ) /*0x59a93a*/
  {
    v23 = v5; /*0x59a944*/
    v6 = v5; /*0x59a948*/
  }
  else
  {
    v6 = v4; /*0x59a93c*/
    v23 = v4; /*0x59a93e*/
  }
  v7 = aP2; /*0x59a94a*/
  v24 = *(_DWORD *)&aP2[2] / v5; /*0x59a95c*/
  v25 = (unsigned int)(*(_DWORD *)&aP2[3] / v5); /*0x59a966*/
  v29 = 0; /*0x59a96c*/
  v30 = 0; /*0x59a970*/
  v27 = 0; /*0x59a978*/
  if ( (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 >= 0.5 ) /*0x59a9a2*/
  {
    HIDWORD(v25) = v24; /*0x59a9c6*/
    LODWORD(v25) = *(_DWORD *)&aP2[3] / v6; /*0x59a9ca*/
    v30 = v25; /*0x59a9ce*/
  }
  else
  {
    v27 = v25; /*0x59a9ae*/
    v24 = *(_DWORD *)&aP2[2] / v6; /*0x59a9b2*/
    v29 = v24; /*0x59a9b6*/
  }
  v8 = v5 * v6 - a2; /*0x59a9db*/
  v9 = 0; /*0x59a9dd*/
  v34 = aP2[1]; /*0x59a9df*/
  v33 = *aP2; /*0x59a9e9*/
  VectorClass::Construct(&v43, 0, 0); /*0x59a9ed*/
  v43 = (void **)&vt_DynamicVectorClass_int; /*0x59a9f8*/
  v48 = 10; /*0x59aa00*/
  v47 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v37, 0, 0); /*0x59aa12*/
  v10 = 0; /*0x59aa1b*/
  v37 = (void **)&vt_DynamicVectorClass_int; /*0x59aa1f*/
  v42 = (CCINIClass *)10; /*0x59aa27*/
  i = 0; /*0x59aa2f*/
  if ( v23 > 0 ) /*0x59aa33*/
  {
    do /*0x59aacf*/
    {
      if ( v47 < v45 /*0x59aa69*/
        || (v46 || !v45)
        && v48 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v43[2])(&v43, v48 + v45, 0) )
      {
        v11 = v47++; /*0x59aa74*/
        *((_DWORD *)v44 + v11) = v5; /*0x59aa7f*/
      }
      if ( (int)i < v39 /*0x59aaaf*/
        || (BYTE1(v40) || !v39)
        && (int)v42 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, char *, _DWORD))v37[2])(&v37, &v42->__pad_0[v39], 0) )
      {
        v12 = i; /*0x59aaba*/
        i = (VectorClass *)((char *)i + 1); /*0x59aabd*/
        *((_DWORD *)Block + (_DWORD)v12) = v9; /*0x59aac5*/
      }
      ++v9; /*0x59aacc*/
    }
    while ( v9 < v23 ); /*0x59aacf*/
    v10 = i; /*0x59aad5*/
  }
  if ( v8 > 0 ) /*0x59aadb*/
  {
    v13 = v8; /*0x59aae1*/
    do /*0x59ab62*/
    {
      v14 = &v10[-1].__tail_E[1]; /*0x59aae3*/
      v36 = (double)(unsigned int)v10; /*0x59aaf9*/
      do /*0x59ab28*/
      {
        v35 = (unsigned int)Random::State(&g_Randomizer); /*0x59ab07*/
        v15 = Math::RoundToInt((double)v35 * v36 * 2.328306437080797e-10); /*0x59ab21*/
      }
      while ( v15 > (unsigned int)v14 ); /*0x59ab28*/
      *((_DWORD *)v44 + *((_DWORD *)Block + v15)) = v31; /*0x59ab39*/
      v10 = i; /*0x59ab3c*/
      if ( v15 < (int)i ) /*0x59ab42*/
      {
        v10 = (VectorClass *)((char *)i - 1); /*0x59ab44*/
        for ( i = v10; v15 < (int)i; v10 = i ) /*0x59ab4b*/
        {
          ++v15; /*0x59ab51*/
          *((_DWORD *)Block + v15 - 1) = *((_DWORD *)Block + v15); /*0x59ab55*/
        }
      }
      --v13; /*0x59ab61*/
    }
    while ( v13 ); /*0x59ab62*/
  }
  v16 = 0; /*0x59ab6c*/
  for ( j = 0; v16 < v23; j = v16 ) /*0x59ab74*/
  {
    v17 = *((_DWORD *)v44 + v16); /*0x59ab85*/
    if ( v17 < v5 ) /*0x59ab8a*/
    {
      if ( SHIDWORD(v25) <= 0 ) /*0x59ab92*/
        *(_DWORD *)&v34 += (int)v25 / 2; /*0x59abb8*/
      else
        *(_DWORD *)&v33 += v24 / 2; /*0x59aba3*/
    }
    if ( v17 > 0 ) /*0x59abbe*/
    {
      v28 = *((_DWORD *)v44 + v16); /*0x59abc8*/
      do /*0x59ac53*/
      {
        v18 = *(_DWORD *)(a1 + 8); /*0x59abda*/
        if ( *(_DWORD *)(a1 + 16) < v18 /*0x59ac02*/
          || (*(_BYTE *)(a1 + 13) || !v18)
          && (v19 = *(_DWORD *)(a1 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 8))(a1, v18 + v19, 0) )
        {
          v20 = *(_DWORD *)(a1 + 16); /*0x59ac09*/
          *(_DWORD *)(a1 + 16) = v20 + 1; /*0x59ac0f*/
          v21 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 16 * v20); /*0x59ac1a*/
          *v21 = *(_DWORD *)&v33 + 2; /*0x59ac23*/
          v21[1] = *(_DWORD *)&v34 + 2; /*0x59ac25*/
          v21[2] = v24 - 4; /*0x59ac28*/
          v21[3] = v25 - 4; /*0x59ac2b*/
        }
        *(_DWORD *)&v33 += HIDWORD(v25); /*0x59ac40*/
        v22 = v28 == 1; /*0x59ac4a*/
        *(_DWORD *)&v34 += v27; /*0x59ac4b*/
        --v28; /*0x59ac4f*/
      }
      while ( !v22 ); /*0x59ac53*/
      v5 = v26; /*0x59ac59*/
      v7 = aP2; /*0x59ac5d*/
      v16 = j; /*0x59ac64*/
    }
    *(_DWORD *)&v33 += v29; /*0x59ac7a*/
    *(_DWORD *)&v34 += v30; /*0x59ac86*/
    if ( SHIDWORD(v25) <= 0 ) /*0x59ac8a*/
      v34 = v7[1]; /*0x59ac98*/
    else
      v33 = *v7; /*0x59ac8f*/
    ++v16; /*0x59aca0*/
  }
  v37 = (void **)&vt_VectorClass_int; /*0x59acb8*/
  if ( Block && BYTE1(v40) ) /*0x59acc4*/
  {
    __3_YAXPAX_Z(Block); /*0x59acc7*/
    Block = 0; /*0x59accf*/
  }
  v43 = (void **)&vt_VectorClass_int; /*0x59acdb*/
  BYTE1(v40) = 0; /*0x59ace2*/
  v39 = 0; /*0x59ace9*/
  if ( v44 ) /*0x59acf2*/
  {
    if ( v46 ) /*0x59acfa*/
      __3_YAXPAX_Z(v44); /*0x59acfd*/
  }
}


// ==== 0x0059AD10  RandomMap::ArrangeBuildingGrid  this=MapResourceClass  sig=csp ====
void __thiscall RandomMap::ArrangeBuildingGrid(int *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  MapResourceClass *i; // eax
  int v8; // eax
  BuildingTypeClass *v9; // esi
  int v10; // edi
  int v11; // ebp
  int v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // edx
  MapResourceClass aP5; // [esp+10h] [ebp-50h] BYREF
  BuildingTypeClass *v19; // [esp+14h] [ebp-4Ch]
  MapResourceClass aP3[2]; // [esp+18h] [ebp-48h] BYREF
  double v21; // [esp+20h] [ebp-40h]
  MapResourceClass aP2; // [esp+28h] [ebp-38h] BYREF
  CCINIClass *v23; // [esp+2Ch] [ebp-34h]
  int v24; // [esp+30h] [ebp-30h]
  BuildingTypeClass *v25; // [esp+34h] [ebp-2Ch]
  int v26[4]; // [esp+38h] [ebp-28h] BYREF
  void **v27; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  char v29; // [esp+55h] [ebp-Bh]
  int v30; // [esp+58h] [ebp-8h]
  int v31; // [esp+5Ch] [ebp-4h]

  this->q308 = 1; /*0x59ad27*/
  RandomMap::Constructor_0(&v27, 0, 0); /*0x59ad31*/
  v2 = this->q014; /*0x59ad36*/
  v27 = &vt_DynamicVectorClass_TRect_int; /*0x59ad39*/
  v31 = 10; /*0x59ad44*/
  v3 = v2 / 2; /*0x59ad4c*/
  v30 = 0; /*0x59ad51*/
  v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(_QWORD *)aP3[0].__tail_0 = v4; /*0x59ad5e*/
  v21 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(_QWORD *)aP3[0].__tail_0 = (unsigned int)Random::State(&g_Randomizer); /*0x59ad78*/
    v5 = Math::RoundToInt((double)*(__int64 *)aP3[0].__tail_0 * v21 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v26[1] = (int)MEMORY[0x87F8E4].field_4; /*0x59ada9*/
  v26[0] = MEMORY[0x87F8E4].field_0; /*0x59adb3*/
  v26[3] = (int)MEMORY[0x87F8E4].field_C; /*0x59adbd*/
  v6 = this->q014; /*0x59adc1*/
  v26[2] = (int)MEMORY[0x87F8E4].field_8; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v27, v5 + v6, v26); /*0x59add7*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59ade1*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59adf2*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    aP5 = i[9]; /*0x59adf7*/
    *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)aP5.__tail_0 + 20 * unk_89C2DC * *(__int16 *)&aP5.__tail_0[2] + 15) = 0; /*0x59ae1c*/
  }
  while ( v30 > 0 ) /*0x59ae2d*/
  {
    aP2 = *(MapResourceClass *)Block; /*0x59ae3d*/
    v23 = (CCINIClass *)*((_DWORD *)Block + 1); /*0x59ae44*/
    v24 = *((_DWORD *)Block + 2); /*0x59ae4b*/
    v25 = (BuildingTypeClass *)*((_DWORD *)Block + 3); /*0x59ae57*/
    v8 = Random::State(&g_Randomizer); /*0x59ae5b*/
    v9 = v25; /*0x59ae60*/
    v10 = v24; /*0x59ae68*/
    *(_QWORD *)&v21 = (unsigned int)v8; /*0x59ae6e*/
    v19 = (BuildingTypeClass *)(2 * v24 * (_DWORD)v25); /*0x59ae8d*/
    v11 = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)(int)v19); /*0x59ae9c*/
    aP3[0] = (MapResourceClass)&v23->__pad_0[*(_DWORD *)&aP2 + 1 + v10 / 2 + (int)v9 / 2]; /*0x59aecd*/
    aP3[1] = (MapResourceClass)&v23->__pad_0[MEMORY[0x87F8DC] + (int)v9 / 2 - v10 / 2 - *(_DWORD *)&aP2]; /*0x59aed1*/
    v12 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v12 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      *(_WORD *)aP5.__tail_0 = *(_WORD *)aP3[0].__tail_0; /*0x59aef1*/
      *(_WORD *)&aP5.__tail_0[2] = *(_WORD *)aP3[1].__tail_0; /*0x59aef8*/
      v13 = RandomMap::PlaceTerrain(this, v11, &aP2, aP3, 1, &aP5, 0.25, 0); /*0x59af0d*/
      if ( !v13 ) /*0x59af14*/
        ++this->q308; /*0x59af16*/
      ++v12; /*0x59af1c*/
    }
    while ( !v13 ); /*0x59af1f*/
    if ( v30 <= 0 ) /*0x59af27*/
      break; /*0x59af27*/
    v14 = 0; /*0x59af2a*/
    if ( --v30 <= 0 ) /*0x59af32*/
      break; /*0x59af32*/
    v15 = 0; /*0x59af34*/
    do /*0x59af60*/
    {
      v16 = (char *)Block + v15 + 16; /*0x59af3a*/
      v17 = (char *)Block + v15; /*0x59af3e*/
      ++v14; /*0x59af40*/
      v15 += 16; /*0x59af41*/
      *v17 = *v16; /*0x59af46*/
      v17[1] = v16[1]; /*0x59af4b*/
      v17[2] = v16[2]; /*0x59af51*/
      v17[3] = v16[3]; /*0x59af57*/
    }
    while ( v14 < v30 ); /*0x59af60*/
  }
  v27 = &vt_VectorClass_TRect_int; /*0x59af70*/
  if ( Block ) /*0x59af7a*/
  {
    if ( v29 ) /*0x59af82*/
      __3_YAXPAX_Z(Block); /*0x59af85*/
  }
}


// ==== 0x0059AFA0  RandomMap::FillTerrainProgressively  this=MapResourceClass  sig=csp ====
void __thiscall RandomMap::FillTerrainProgressively(MapResourceClass *this)
{
  MapResourceClass *v1; // edi
  int v2; // eax
  double v3; // st7
  int v4; // ebx
  MapResourceClass *i; // eax
  int v6; // eax
  int v7; // edi
  int j; // ecx
  __int64 v9; // rax
  int v10; // esi
  int v11; // [esp+10h] [ebp-48h]
  int v12; // [esp+14h] [ebp-44h]
  int v13; // [esp+18h] [ebp-40h]
  MapResourceClass aP5; // [esp+1Ch] [ebp-3Ch] BYREF
  MapResourceClass *v15; // [esp+20h] [ebp-38h]
  int v16; // [esp+24h] [ebp-34h]
  MapResourceClass aP3; // [esp+28h] [ebp-30h] BYREF
  int v18; // [esp+2Ch] [ebp-2Ch]
  double v19; // [esp+30h] [ebp-28h]
  double v20; // [esp+38h] [ebp-20h]
  double v21; // [esp+40h] [ebp-18h]
  MapResourceClass aP2; // [esp+48h] [ebp-10h] BYREF
  char *v23; // [esp+4Ch] [ebp-Ch]
  char *v24; // [esp+50h] [ebp-8h]
  char *v25; // [esp+54h] [ebp-4h]

  v1 = this; /*0x59afad*/
  v15 = this; /*0x59afaf*/
  this->q308 = 1; /*0x59afb3*/
  v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  v3 = (double)(int)v1[19]; /*0x59afc2*/
  aP5 = (MapResourceClass)v2; /*0x59afc5*/
  v12 = 0; /*0x59afcb*/
  v13 = 0; /*0x59afcf*/
  v19 = 0.0; /*0x59afd9*/
  v20 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  v21 = (double)v2; /*0x59b003*/
  v16 = Math::RoundToInt(v21 * 0.03 * v20); /*0x59b016*/
  v4 = MEMORY[0x87F8E0] / 2 + MEMORY[0x87F8DC] / 2; /*0x59b030*/
  v18 = v4; /*0x59b038*/
  aP3 = (MapResourceClass)(v4 + 1); /*0x59b03f*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b043*/
  for ( i = (MapResourceClass *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b054*/
        i;
        i = (MapResourceClass *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    aP5 = i[9]; /*0x59b059*/
    *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)aP5.__tail_0 + 20 * unk_89C2DC * *(__int16 *)&aP5.__tail_0[2] + 15) = 0; /*0x59b07a*/
  }
  aP2 = (MapResourceClass)(MEMORY[0x87F8E4].field_0 + 1); /*0x59b0af*/
  v23 = (char *)MEMORY[0x87F8E4].field_4 + 1; /*0x59b0bb*/
  v24 = (char *)MEMORY[0x87F8E4].field_8 - 2; /*0x59b0c2*/
  v25 = (char *)MEMORY[0x87F8E4].field_C - 2; /*0x59b0c6*/
  if ( v20 > 0.0 ) /*0x59b0ca*/
  {
    while ( v13 < 100 ) /*0x59b0db*/
    {
      v6 = Math::RoundToInt((v20 - v19) * v21); /*0x59b0ed*/
      if ( v6 >= v16 ) /*0x59b0f8*/
        v6 = v16; /*0x59b0fa*/
      *(_WORD *)aP5.__tail_0 = v4 + 1; /*0x59b119*/
      *(_WORD *)&aP5.__tail_0[2] = v4; /*0x59b11e*/
      v12 += RandomMap::PlaceTerrain((int *)v1, v6, &aP2, &aP3, 1, &aP5, 0.75, 1); /*0x59b133*/
      ++v13; /*0x59b137*/
      v7 = 50000; /*0x59b144*/
      v11 = 0; /*0x59b149*/
      v19 = (double)v12 / v21; /*0x59b15b*/
      LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59b172*/
      {
        if ( !*((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(j + 36) + 20 * unk_89C2DC * *(__int16 *)(j + 38) + 15) ) /*0x59b191*/
        {
          v9 = *(__int16 *)(j + 36) - (v4 + 1); /*0x59b1ac*/
          v10 = (HIDWORD(v9) ^ v9) - HIDWORD(v9) + abs32(*(__int16 *)(j + 38) - v4); /*0x59b1b1*/
          if ( v10 < v7 ) /*0x59b1b5*/
          {
            v7 = v10; /*0x59b1ba*/
            v11 = *(_DWORD *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      aP3 = (MapResourceClass)(__int16)v11; /*0x59b1e2*/
      v18 = SHIWORD(v11); /*0x59b1e6*/
      if ( v19 >= v20 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = v15; /*0x59b0d2*/
    }
  }
}


// ==== 0x0059B200  RandomMap::PlaceTerrainFeatures  this=MapResourceClass  sig=csp ====
int __thiscall RandomMap_PlaceTerrainFeatures(int *this)
{
  int i; // eax
  int v3; // esi
  double v4; // st7
  int v5; // eax
  int v6; // edi
  int v7; // ebp
  int v8; // ebx
  __int16 *v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  bool v16; // zf
  int result; // eax
  int v18; // [esp+10h] [ebp-B8h]
  int v19; // [esp+10h] [ebp-B8h]
  int v20; // [esp+14h] [ebp-B4h]
  double v21; // [esp+18h] [ebp-B0h]
  int v22; // [esp+20h] [ebp-A8h]
  int v23; // [esp+24h] [ebp-A4h]
  int v24; // [esp+28h] [ebp-A0h]
  int *v25; // [esp+2Ch] [ebp-9Ch]
  int v26; // [esp+30h] [ebp-98h] BYREF
  int v27; // [esp+34h] [ebp-94h]
  int v28; // [esp+38h] [ebp-90h]
  int v29; // [esp+3Ch] [ebp-8Ch]
  double v30; // [esp+40h] [ebp-88h]
  int v31; // [esp+4Ch] [ebp-7Ch] BYREF
  int v32; // [esp+50h] [ebp-78h]
  int v33; // [esp+54h] [ebp-74h]
  int v34; // [esp+58h] [ebp-70h]
  int *v35; // [esp+5Ch] [ebp-6Ch]
  int v36; // [esp+60h] [ebp-68h] BYREF
  int v37; // [esp+64h] [ebp-64h]
  double v38; // [esp+68h] [ebp-60h]
  double v39; // [esp+70h] [ebp-58h]
  _DWORD v40[2]; // [esp+78h] [ebp-50h] BYREF
  int v41; // [esp+80h] [ebp-48h]
  int v42; // [esp+84h] [ebp-44h]
  int v43; // [esp+88h] [ebp-40h]
  int v44; // [esp+8Ch] [ebp-3Ch]
  int v45; // [esp+90h] [ebp-38h]
  int v46; // [esp+94h] [ebp-34h]
  int v47; // [esp+98h] [ebp-30h]
  int v48; // [esp+9Ch] [ebp-2Ch]
  double v49; // [esp+A0h] [ebp-28h]
  double v50; // [esp+A8h] [ebp-20h]
  int v51; // [esp+B4h] [ebp-14h]
  double v52; // [esp+B8h] [ebp-10h]
  double v53; // [esp+C0h] [ebp-8h]

  v35 = this; /*0x59b212*/
  this->q308 = 1; /*0x59b216*/
  v18 = Object::ComputeAllocationSize(); /*0x59b228*/
  v23 = 0; /*0x59b22e*/
  v38 = (1.0 - (double)this->q04C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v50 = (double)v18; /*0x59b25a*/
  v48 = Math::RoundToInt(v50 * 0.06 * v38); /*0x59b275*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59b28d*/
    *((_DWORD *)g_MapTileArray /*0x59b2b7*/
    + 20 * (__int16)*(_DWORD *)(i + 36)
    + 20 * unk_89C2DC * (__int16)HIWORD(*(_DWORD *)(i + 36))
    + 15) = 0;
  *(_QWORD *)&v30 = (unsigned int)Random::State(&g_Randomizer); /*0x59b2ce*/
  v40[0] = MEMORY[0x87F8E4]; /*0x59b2fe*/
  v40[1] = MEMORY[0x87F8E8]; /*0x59b30d*/
  if ( (double)*(__int64 *)&v30 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v41 = MEMORY[0x87F8EC]; /*0x59b35c*/
    v42 = MEMORY[0x87F8F0] / 2 - 1; /*0x59b36a*/
    v43 = MEMORY[0x87F8E4]; /*0x59b371*/
    v44 = MEMORY[0x87F8F0] / 2 + MEMORY[0x87F8E8] + 1; /*0x59b378*/
    v45 = MEMORY[0x87F8EC]; /*0x59b37f*/
    v46 = v42; /*0x59b386*/
  }
  else
  {
    v42 = MEMORY[0x87F8F0]; /*0x59b311*/
    v41 = MEMORY[0x87F8EC] / 2 - 1; /*0x59b31f*/
    v43 = MEMORY[0x87F8EC] / 2 + MEMORY[0x87F8E4] + 1; /*0x59b326*/
    v44 = MEMORY[0x87F8E8]; /*0x59b32d*/
    v45 = v41; /*0x59b334*/
    v46 = MEMORY[0x87F8F0]; /*0x59b33b*/
  }
  v19 = 2; /*0x59b391*/
  v25 = v40; /*0x59b399*/
  do /*0x59b6c1*/
  {
    v22 = 0; /*0x59b3a5*/
    v39 = 0.0; /*0x59b3a9*/
    v26 = *v25; /*0x59b3bb*/
    v27 = v25[1]; /*0x59b3c2*/
    v28 = v25[2]; /*0x59b3cb*/
    v29 = v25[3]; /*0x59b3d5*/
    v3 = v27 + MEMORY[0x87F8DC] + v29 / 2 - v28 / 2 - v26; /*0x59b3fd*/
    v32 = v26 + v29 / 2 + v28 / 2 + v27 + 1; /*0x59b3ff*/
    v33 = v3; /*0x59b403*/
    v36 = v32; /*0x59b407*/
    v37 = v3; /*0x59b40b*/
    if ( v29 <= v28 ) /*0x59b40f*/
    {
      v4 = (double)v28; /*0x59b445*/
      v30 = 1.0; /*0x59b44d*/
      v21 = (double)v29; /*0x59b45d*/
      v49 = v4 / v21 * 1.2; /*0x59b46d*/
    }
    else
    {
      v49 = 1.0; /*0x59b415*/
      v21 = (double)v29; /*0x59b42b*/
      v4 = (double)v28; /*0x59b42f*/
      v30 = v21 / v4 * 1.2; /*0x59b43f*/
    }
    v53 = 1.0 / (v4 * 0.5 * (v4 * 0.5)); /*0x59b484*/
    v52 = 1.0 / (v21 * 0.5 * (v21 * 0.5)); /*0x59b4a1*/
    if ( v38 > 0.0 ) /*0x59b4b9*/
    {
      do /*0x59b6a7*/
      {
        if ( v23 >= 100 ) /*0x59b4c4*/
          break; /*0x59b4c4*/
        v5 = Math::RoundToInt((v38 - v39) * v50); /*0x59b4d9*/
        if ( v5 >= v48 ) /*0x59b4e7*/
          v5 = v48; /*0x59b4e9*/
        LOWORD(v31) = v32; /*0x59b4fd*/
        HIWORD(v31) = v3; /*0x59b515*/
        v22 += RandomMap::PlaceTerrain(v35, v5, &v26, (int)&v36, 1, (int)&v31, 0.75, 1); /*0x59b52d*/
        v20 = 0; /*0x59b540*/
        ++v23; /*0x59b55a*/
        v6 = 2 * v26 - MEMORY[0x87F8DC] + 1; /*0x59b562*/
        v7 = 50000; /*0x59b563*/
        v47 = v6 + 2 * v28 + 2; /*0x59b572*/
        v8 = MEMORY[0x87F8DC] + 2 * v27 + 1; /*0x59b57d*/
        v51 = v8 + 2 * v29 + 2; /*0x59b585*/
        v39 = (double)v22 / v50; /*0x59b58c*/
        if ( unk_89C2DC * unk_89C2DC > 0 ) /*0x59b590*/
        {
          v24 = 0; /*0x59b596*/
          v34 = unk_89C2DC * unk_89C2DC; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v9 = (__int16 *)((char *)g_MapTileArray + v24); /*0x59b5ab*/
            v10 = *(__int16 *)((char *)g_MapTileArray + v24 + 2); /*0x59b5ae*/
            v11 = *(__int16 *)((char *)g_MapTileArray + v24); /*0x59b5b3*/
            v12 = v11 + v10; /*0x59b5b6*/
            v13 = v11 - v10; /*0x59b5b9*/
            if ( v12 >= v8 /*0x59b618*/
              && v12 <= v51
              && v13 >= v6
              && v13 <= v47
              && !*((_DWORD *)v9 + 15)
              && (unsigned __int8)Map_Helper_59BAB0((int)g_MapTileArray + v24, (int)&v26, 1, v53, v52) )
            {
              v14 = v9[1] - v33; /*0x59b629*/
              v15 = Math::RoundToInt((double)(int)((HIDWORD(v14) ^ v14) - HIDWORD(v14)) * v49 + (double)(int)abs32(*v9 - v32) /*0x59b659*/
                                                                                              * v30);
              if ( v15 < v7 ) /*0x59b660*/
              {
                v7 = v15; /*0x59b664*/
                v20 = *(_DWORD *)v9; /*0x59b666*/
              }
            }
            v16 = v34 == 1; /*0x59b675*/
            v24 += 80; /*0x59b676*/
            --v34; /*0x59b67a*/
          }
          while ( !v16 ); /*0x59b67e*/
          LOWORD(v3) = v33; /*0x59b684*/
        }
        v36 = (__int16)v20; /*0x59b69a*/
        v37 = SHIWORD(v20); /*0x59b69e*/
      }
      while ( v39 < v38 ); /*0x59b6a7*/
    }
    result = v19 - 1; /*0x59b6b8*/
    v16 = v19 == 1; /*0x59b6b8*/
    v25 += 4; /*0x59b6b9*/
    --v19; /*0x59b6bd*/
  }
  while ( !v16 ); /*0x59b6c1*/
  return result; /*0x59b6c7*/
}


// ==== 0x0059B6D0  SmallFunc_59B6D0  this=-  sig=ida-proto ====
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  _DWORD *NeighbourContent; // edi

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b6d6*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b702*/
        if ( Cell::IsEmpty(NeighbourContent) ) /*0x59b706*/
          NeighbourContent[14] = unk_AA0E18; /*0x59b714*/
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b724*/
  }
  return result; /*0x59b731*/
}


// ==== 0x0059B740  RandomMap::PlaceShoreObjects  this=RandomMap  sig=csp ====
void RandomMap::PlaceShoreObjects()
{
  int *i; // ebp
  signed int j; // edi
  _DWORD *NeighbourContent; // esi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // esi
  signed int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // ebp
  signed int v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // [esp+10h] [ebp-34h]
  __int64 v13; // [esp+1Ch] [ebp-28h]
  double v14; // [esp+24h] [ebp-20h]
  void **v15; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v17; // [esp+34h] [ebp-10h]
  char v18; // [esp+39h] [ebp-Bh]
  signed int v19; // [esp+3Ch] [ebp-8h]
  int v20; // [esp+40h] [ebp-4h]

  RandomMap::Constructor(0, 0); /*0x59b74f*/
  v15 = &vt_DynamicVectorClass_CellClass; /*0x59b759*/
  v19 = 0; /*0x59b761*/
  v20 = 10000; /*0x59b765*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59b76d*/
  for ( i = (int *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59b780*/
        i;
        i = (int *)LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    if ( Cell::IsShore(i) ) /*0x59b784*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b797*/
        if ( Cell::IsEmpty(NeighbourContent) /*0x59b7ce*/
          && (v19 < v17
           || (v18 || !v17)
           && v20 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v20 + v17, 0)) )
        {
          v3 = v19++; /*0x59b7d9*/
          *((_DWORD *)Block + v3) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  v4 = v19 / 3; /*0x59b80d*/
  if ( v19 / 3 > 1000 ) /*0x59b815*/
    v4 = 1000; /*0x59b817*/
  if ( v4 > 0 ) /*0x59b81e*/
  {
    v12 = v4; /*0x59b824*/
    do /*0x59b90c*/
    {
      v5 = v19 - 1; /*0x59b830*/
      v14 = (double)(unsigned int)v19; /*0x59b83e*/
      do /*0x59b869*/
      {
        v13 = (unsigned int)Random::State(&g_Randomizer); /*0x59b84c*/
        v6 = Math::RoundToInt((double)v13 * v14 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v6 > v5 ); /*0x59b869*/
      v7 = Block; /*0x59b86b*/
      v8 = (_DWORD *)*((_DWORD *)Block + v6); /*0x59b875*/
      if ( v6 < v19 && v6 < --v19 ) /*0x59b881*/
      {
        while ( 1 ) /*0x59b88d*/
        {
          v7[v6] = v7[v6 + 1]; /*0x59b88d*/
          if ( ++v6 >= v19 ) /*0x59b897*/
            break; /*0x59b897*/
          v7 = Block; /*0x59b885*/
        }
      }
      v9 = 0; /*0x59b89e*/
      v8[14] = unk_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        v10 = Cell::GetNeighbourContent(v8, v9); /*0x59b8ab*/
        if ( Cell::IsEmpty(v10) /*0x59b8e2*/
          && (v19 < v17
           || (v18 || !v17)
           && v20 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v20 + v17, 0)) )
        {
          v11 = v19++; /*0x59b8ed*/
          *((_DWORD *)Block + v11) = v10; /*0x59b8f8*/
        }
        v9 += 2; /*0x59b8fb*/
      }
      while ( v9 < 8 ); /*0x59b901*/
      --v12; /*0x59b908*/
    }
    while ( v12 ); /*0x59b90c*/
  }
  v15 = &vt_VectorClass_CellClass; /*0x59b916*/
  if ( Block ) /*0x59b920*/
  {
    if ( v18 ) /*0x59b926*/
      __3_YAXPAX_Z(Block); /*0x59b929*/
  }
}


// ==== 0x0059B940  Map_Helper_59B940  this=-  sig=csp ====
double __stdcall Map_Helper_59B940(
        MapResourceClass *aP0,
        __int16 *a1,
        MapResourceClass *aP2,
        MapResourceClass *aP3,
        float a5,
        MapResourceClass *aP5)
{
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // rax
  MapResourceClass *v12; // eax
  double v14; // st7
  signed int v15; // ecx
  __int64 v16; // rax
  double v17; // st7
  BuildingTypeClass *v18; // eax
  int v19; // edx
  double v20; // [esp+10h] [ebp-8h]
  MapResourceClass *aP0a; // [esp+1Ch] [ebp+4h]
  __int16 *a1a; // [esp+20h] [ebp+8h]
  MapResourceClass *aP2a; // [esp+24h] [ebp+Ch]
  MapResourceClass *aP3a; // [esp+28h] [ebp+10h]

  if ( *aP2 == dword_ABE2F0 /*0x59b979*/
    && *(_DWORD *)&aP2[1] == dword_ABE2F4
    && *(_DWORD *)&aP2[2] == dword_ABE2F8
    && *(_DWORD *)&aP2[3] == dword_ABE2FC )
  {
    v18 = (BuildingTypeClass *)(*(__int16 *)aP0->__tail_0 - *a1); /*0x59ba7b*/
    v19 = *(__int16 *)&aP0->__tail_0[2] - a1[1]; /*0x59ba7d*/
    return Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)((int)v18 * (int)v18 + v19 * v19))); /*0x59ba94*/
  }
  else
  {
    v7 = *(__int16 *)&aP3->__tail_0[2]; /*0x59b989*/
    v8 = *a1; /*0x59b990*/
    v9 = a1[1]; /*0x59b993*/
    a1a = (__int16 *)*(__int16 *)aP3->__tail_0; /*0x59b997*/
    v10 = abs32(((v8 - v9) >> 1) - (((int)a1a - v7) >> 1)); /*0x59b9b1*/
    aP2a = (MapResourceClass *)v10; /*0x59b9c0*/
    v11 = ((v8 + v9) >> 1) - (((int)a1a + v7) >> 1); /*0x59b9c4*/
    v12 = (MapResourceClass *)((HIDWORD(v11) ^ v11) - HIDWORD(v11)); /*0x59b9c8*/
    aP3a = v12; /*0x59b9cc*/
    if ( v10 || v12 ) /*0x59b9d4*/
    {
      v14 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)(v10 * v10 + (_DWORD)v12 * (_DWORD)v12))); /*0x59b9fe*/
      v15 = abs32(*(__int16 *)&aP0->__tail_0[2] - a1[1]); /*0x59ba29*/
      v16 = *(__int16 *)aP0->__tail_0 - *a1; /*0x59ba2b*/
      aP0a = (MapResourceClass *)((HIDWORD(v16) ^ v16) - HIDWORD(v16)); /*0x59ba32*/
      v20 = (double)(int)aP2a / v14; /*0x59ba36*/
      v17 = (double)(int)aP3a / v14; /*0x59ba3a*/
      if ( (int)aP0a <= v15 ) /*0x59ba3e*/
        aP0a = (MapResourceClass *)v15; /*0x59ba40*/
      return (v17 * *(float *)&aP5 + a5 * v20) * (double)(int)aP0a; /*0x59ba58*/
    }
    else
    {
      return 0.0; /*0x59b9d6*/
    }
  }
}


// ==== 0x0059BAB0  Map_Helper_59BAB0  this=-  sig=csp ====
// local variable allocation has failed, the output may be wrong!
char __stdcall Map_Helper_59BAB0(__int16 *a0, MapResourceClass *aP1, char a3, double a4, MapResourceClass *aP4)
{
  MapResourceClass v5; // esi
  int v7; // edx
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // edx
  MapResourceClass v12; // eax

  v5 = *aP1; /*0x59babb*/
  if ( *aP1 == dword_ABE2F0 /*0x59bae5*/
    && *(_DWORD *)&aP1[1] == dword_ABE2F4
    && *(_DWORD *)&aP1[2] == dword_ABE2F8
    && *(_DWORD *)&aP1[3] == dword_ABE2FC )
  {
    return 1; /*0x59baeb*/
  }
  if ( a3 ) /*0x59baf4*/
  {
    v7 = a0[1]; /*0x59bb00*/
    v8 = (double)(*a0 - 2 * *(_DWORD *)&v5 - v7 + *(_DWORD *)&stru_87C374.__pad_14B0[8376] - 1) * 0.5 /*0x59bb3f*/
       - (double)(int)aP1[2] * 0.5;
    v9 = (double)(*a0 - 2 * *(_DWORD *)&aP1[1] - *(_DWORD *)&stru_87C374.__pad_14B0[8376] + v7 - 1) * 0.5 /*0x59bb54*/
       - (double)(int)aP1[3] * 0.5;
    if ( v9 * v9 * *(double *)&aP4 + v8 * v8 * a4 < 1.0 ) /*0x59bb77*/
      return 1; /*0x59bb80*/
  }
  else
  {
    v10 = *a0; /*0x59bb87*/
    v11 = a0[1]; /*0x59bb8a*/
    if ( v10 >= *(_DWORD *)&v5 && v10 < *(_DWORD *)&v5 + *(_DWORD *)&aP1[2] ) /*0x59bb99*/
    {
      v12 = aP1[1]; /*0x59bb9b*/
      if ( v11 >= *(_DWORD *)&v12 && v11 < *(_DWORD *)&v12 + *(_DWORD *)&aP1[3] ) /*0x59bba9*/
        return 1; /*0x59bbb2*/
    }
  }
  return 0; /*0x59bae7*/
}


// ==== 0x0059BBC0  RandomMap::PlaceTerrain  this=MapResourceClass  sig=csp ====
int __thiscall RandomMap::PlaceTerrain(
        int *this,
        int a2,
        MapResourceClass *aP2,
        MapResourceClass *aP3,
        int a5,
        MapResourceClass *aP5,
        double a7,
        char a8)
{
  int v8; // eax
  int v9; // edi
  void *v10; // eax
  int v11; // eax
  AbstractClass *v12; // esi
  int v13; // eax
  MapResourceClass *v14; // ecx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int16 v18; // di
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int16 v21; // cx
  __int16 v22; // ax
  int *v23; // eax
  int result; // eax
  __int16 v25; // dx
  MapResourceClass *v26; // eax
  MapResourceClass *v27; // edx
  int v28; // eax
  MapResourceClass *v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // ebx
  MapResourceClass *v33; // eax
  __int16 *v34; // edi
  int v35; // eax
  double v36; // st6
  _DWORD *v37; // eax
  char *v38; // ecx
  int v39; // edx
  int v40; // ebx
  char v41; // al
  int v42; // eax
  __int16 v43; // cx
  int v44; // eax
  int v45; // ecx
  char *v46; // edi
  int *v47; // eax
  unsigned int v48; // ebx
  double v49; // st7
  __int16 v50; // ax
  double v51; // st7
  int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  MapResourceClass *v56; // edi
  unsigned int edx65; // edx
  int v57; // edi
  int v58; // ebx
  MapResourceClass *v60; // ecx
  double st7_76; // st7
  double v61; // st7
  MapResourceClass *v63; // ecx
  bool zf76; // zf
  int v64; // eax
  int v65; // eax
  MapResourceClass *v67; // edi
  Random *v68; // ebx
  char *edi82; // edi
  int v69; // eax
  int i; // eax
  Random *v72; // ecx
  Random *v73; // esi
  int edi97; // edi
  int j; // eax
  char *v75; // ecx
  char inited; // [esp+17h] [ebp-81h]
  MapResourceClass *v78; // [esp+1Ch] [ebp-7Ch] BYREF
  int v79; // [esp+20h] [ebp-78h] BYREF
  MapResourceClass *v81; // [esp+24h] [ebp-74h]
  int var70; // [esp+28h] [ebp-70h]
  int v82; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v84; // [esp+34h] [ebp-64h]
  float v85; // [esp+38h] [ebp-60h]
  MapResourceClass *v86; // [esp+3Ch] [ebp-5Ch]
  MapResourceClass *v88; // [esp+40h] [ebp-58h]
  int var54; // [esp+44h] [ebp-54h]
  __int64 v89; // [esp+48h] [ebp-50h]
  __int64 v90; // [esp+50h] [ebp-48h]
  int v91; // [esp+58h] [ebp-40h] BYREF
  float v92; // [esp+60h] [ebp-38h]
  double v93; // [esp+68h] [ebp-30h]
  double v94; // [esp+70h] [ebp-28h]
  double v95; // [esp+78h] [ebp-20h]
  double v96; // [esp+80h] [ebp-18h]
  double v97; // [esp+88h] [ebp-10h]
  double v98; // [esp+90h] [ebp-8h]

  v8 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v8 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  v9 = 8 * v8 + 2; /*0x59bbe5*/
  if ( v9 <= 100 ) /*0x59bbef*/
    v9 = 100; /*0x59bbf1*/
  var54 = v9; /*0x59bbfd*/
  v10 = (void *)__2_YAPAXI_Z(8 * v9); /*0x59bc02*/
  if ( v10 ) /*0x59bc0e*/
  {
    Block = v10; /*0x59bc13*/
    LODWORD(v93) = v9 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  v11 = __2_YAPAXI_Z(0x14u); /*0x59bc23*/
  v12 = (AbstractClass *)v11; /*0x59bc28*/
  if ( v11 ) /*0x59bc2f*/
  {
    *(_DWORD *)(v11 + 12) = 0; /*0x59bc38*/
    *(_DWORD *)(v11 + 16) = -1; /*0x59bc3c*/
    *(_DWORD *)v11 = 0; /*0x59bc43*/
    *(_DWORD *)(v11 + 4) = v9; /*0x59bc45*/
    v13 = __2_YAPAXI_Z(4 * v9 + 4); /*0x59bc48*/
    v14 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59bc4d*/
    *(_DWORD *)&v12->__pad_0[8] = v13; /*0x59bc50*/
    v15 = 0; /*0x59bc56*/
    if ( (int)v14 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v15; /*0x59bc5f*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v15 - 4) = 0; /*0x59bc60*/
      }
      while ( v15 <= *(_DWORD *)&v12->__pad_0[4] ); /*0x59bc69*/
    }
  }
  else
  {
    v12 = 0; /*0x59bc6d*/
  }
  if ( *(_DWORD *)aP3 || *(_DWORD *)&aP3[1] ) /*0x59bc7c*/
  {
    v25 = *(_WORD *)aP3[1].__tail_0; /*0x59bdec*/
    LOWORD(v86) = *aP3; /*0x59bdf0*/
    HIWORD(v86) = v25; /*0x59bdf5*/
    v78 = v86; /*0x59bdfe*/
LABEL_27:
    v85 = 0.0; /*0x59be02*/
    v84 = 0.0; /*0x59be13*/
    if ( *aP2 != dword_ABE2F0 /*0x59be46*/
      || *(_DWORD *)&aP2[1] != dword_ABE2F4
      || *(_DWORD *)&aP2[2] != dword_ABE2F8
      || *(_DWORD *)&aP2[3] != dword_ABE2FC )
    {
      v26 = (MapResourceClass *)aP2[3]; /*0x59be4b*/
      v82 = (int)aP2[2]; /*0x59be50*/
      v86 = v26; /*0x59be54*/
      if ( v82 <= (int)v26 ) /*0x59be58*/
      {
        v84 = 1.0; /*0x59be7a*/
        v85 = (double)(int)v86 / (double)v82 * 1.2; /*0x59be8c*/
      }
      else
      {
        v85 = 1.0; /*0x59be5e*/
        v84 = (double)v82 / (double)(int)v86 * 1.2; /*0x59be70*/
      }
    }
    LODWORD(v90) = (__int16)v78; /*0x59be9a*/
    v27 = *(MapResourceClass **)v12->__pad_0; /*0x59be9e*/
    LODWORD(v90) = SHIWORD(v78); /*0x59bea4*/
    v28 = 0; /*0x59beaa*/
    v94 = (double)(__int16)v78; /*0x59beae*/
    v81 = 0; /*0x59beb6*/
    v95 = (double)SHIWORD(v78); /*0x59beba*/
    if ( (int)v27 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v28; /*0x59bec3*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v28 - 4) = 0; /*0x59bec4*/
      }
      while ( v28 <= *(_DWORD *)v12->__pad_0 ); /*0x59becc*/
    }
    v29 = (MapResourceClass *)Block; /*0x59bece*/
    *(_DWORD *)v12->__pad_0 = 0; /*0x59bed2*/
    var70 = 1; /*0x59bed8*/
    *v29 = (MapResourceClass)v78; /*0x59bee0*/
    v29[1] = 0; /*0x59bee2*/
    *((_DWORD *)g_MapTileArray + 20 * (__int16)v78 + 20 * unk_89C2DC * SHIWORD(v78) + 15) = this->q308; /*0x59bf0d*/
    v30 = *(_DWORD *)v12->__pad_0 + 1; /*0x59bf16*/
    LODWORD(v90) = v29[1]; /*0x59bf19*/
    v31 = v30 >> 1; /*0x59bf20*/
    if ( v30 < *(_DWORD *)&v12->__pad_0[4] ) /*0x59bf24*/
    {
      for ( ; v30 > 1; v31 >>= 1 ) /*0x59bf29*/
      {
        v32 = *(_DWORD *)&v12->__pad_0[8]; /*0x59bf2b*/
        if ( *(float *)(*(_DWORD *)(v32 + 4 * v31) + 4) <= (double)*(float *)&v90 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(_DWORD *)(v32 + 4 * v30) = *(_DWORD *)(v32 + 4 * v31); /*0x59bf42*/
        v30 = v31; /*0x59bf45*/
      }
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v30) = v29; /*0x59bf51*/
      v33 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59bf56*/
      ++*(_DWORD *)v12->__pad_0; /*0x59bf5c*/
      if ( v29 > v33 ) /*0x59bf5e*/
        *(_DWORD *)&v12->__pad_0[12] = v29; /*0x59bf60*/
      if ( (unsigned int)v29 < v12->uniqueId ) /*0x59bf66*/
        v12->uniqueId = (int)v29; /*0x59bf68*/
    }
    if ( *(_DWORD *)v12->__pad_0 ) /*0x59bf6b*/
    {
      v35 = *(_DWORD *)&v12->__pad_0[8]; /*0x59bf75*/
      v34 = *(__int16 **)(v35 + 4); /*0x59bf7d*/
      *(_DWORD *)(v35 + 4) = *(_DWORD *)(v35 + 4 * *(_DWORD *)v12->__pad_0); /*0x59bf80*/
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59bf88*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59bf96*/
    }
    else
    {
      v34 = 0; /*0x59bf71*/
    }
    v82 = (int)v34; /*0x59bf9e*/
    v36 = (double)(int)aP2[2] * 0.5; /*0x59bfab*/
    v97 = 1.0 / (v36 * v36); /*0x59bfb5*/
    v96 = 1.0 / ((double)(int)aP2[3] * 0.5 * ((double)(int)aP2[3] * 0.5)); /*0x59bfd6*/
    do /*0x59c32c*/
    {
      if ( !v34 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MapTileArray ) /*0x59bff2*/
        *((_DWORD *)g_MapTileArray + 20 * *v34 + 20 * unk_89C2DC * v34[1] + 14) = this->q308; /*0x59c014*/
      v37 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v34); /*0x59c01e*/
      v38 = (char *)Block; /*0x59c023*/
      v39 = var70; /*0x59c027*/
      v37[14] = 0; /*0x59c02b*/
      v40 = g_MapCellHeight_Value; /*0x59c032*/
      v41 = 0; /*0x59c038*/
      LODWORD(v90) = 0; /*0x59c03d*/
      LODWORD(v89) = &v38[8 * v39]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        v42 = v41 & 7; /*0x59c04b*/
        v43 = v34[1] + *((_WORD *)&MEMORY[0x89F68A] + 2 * v42); /*0x59c064*/
        LOWORD(v88) = *v34 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v42); /*0x59c068*/
        HIWORD(v88) = v43; /*0x59c06d*/
        v79 = (int)v88; /*0x59c076*/
        v44 = v43; /*0x59c07d*/
        v45 = v43 + (__int16)v88; /*0x59c080*/
        if ( v45 > v40 && (__int16)v88 - v44 < v40 && v44 - (__int16)v88 < v40 && v45 <= g_MapCellCount ) /*0x59c0a9*/
        {
          v46 = (char *)g_MapTileArray + 80 * (__int16)v88 + 80 * unk_89C2DC * v44; /*0x59c0c4*/
          if ( !*((_DWORD *)v46 + 14) && *((_DWORD *)v46 + 15) != this->q308 ) /*0x59c0de*/
          {
            v47 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v79); /*0x59c0ee*/
            if ( Cell::IsGroundTypeRange(v47) /*0x59c13d*/
              && var70 < var54
              && Map_Helper_59BAB0((__int16 *)&v79, (int *)aP2, a5, v97, v96) )
            {
              v48 = v89; /*0x59c14e*/
              v49 = v94 + 0.5; /*0x59c156*/
              *(_DWORD *)v89 = v79; /*0x59c15c*/
              LOWORD(v86) = Math::RoundToInt(v49); /*0x59c16d*/
              v50 = Math::RoundToInt(v95 + 0.5); /*0x59c172*/
              HIWORD(v86) = v50; /*0x59c177*/
              v91 = (int)v86; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                v51 = Map_Helper_59B940((__int16 *)&v91, (__int16 *)&v79, aP2, (__int16 *)aP5, v85, v84); /*0x59c1ab*/
              }
              else
              {
                LODWORD(v89) = (SHIWORD(v79) - v50) * (SHIWORD(v79) - v50) /*0x59c1d7*/
                             + ((__int16)v79 - (__int16)v86) * ((__int16)v79 - (__int16)v86);
                v93 = Math::Sqrt((double)(int)v89); /*0x59c1e7*/
                *(_QWORD *)&v98 = (unsigned int)Random::State(&g_Randomizer); /*0x59c1f8*/
                v51 = (double)*(__int64 *)&v98 * 5.0 * 2.328306437080797e-10 + v93; /*0x59c21d*/
              }
              v52 = var70; /*0x59c225*/
              *(float *)(v48 + 4) = v51; /*0x59c229*/
              *((_DWORD *)v46 + 15) = this->q308; /*0x59c233*/
              v53 = v48; /*0x59c236*/
              var70 = v52 + 1; /*0x59c238*/
              v54 = *(_DWORD *)v12->__pad_0 + 1; /*0x59c244*/
              v92 = *(float *)(v48 + 4); /*0x59c245*/
              v56 = *(MapResourceClass **)&v12->__pad_0[4]; /*0x59c249*/
              edx65 = v54 >> 1; /*0x59c24e*/
              LODWORD(v93) = v48; /*0x59c252*/
              LODWORD(v89) = v48 + 8; /*0x59c256*/
              if ( v54 < (unsigned int)v56 ) /*0x59c25a*/
              {
                if ( v54 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    v57 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c261*/
                    v58 = *(_DWORD *)(v57 + 4 * edx65); /*0x59c264*/
                    if ( *(float *)(v58 + 4) <= (double)v92 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(_DWORD *)(v57 + 4 * v54) = v58; /*0x59c275*/
                    v54 = edx65; /*0x59c278*/
                    edx65 >>= 1; /*0x59c27a*/
                  }
                  while ( v54 > 1 ); /*0x59c27f*/
                  v53 = LODWORD(v93); /*0x59c281*/
                }
                *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * v54) = v53; /*0x59c288*/
                v60 = *(MapResourceClass **)&v12->__pad_0[12]; /*0x59c28d*/
                ++*(_DWORD *)v12->__pad_0; /*0x59c293*/
                if ( v53 > (unsigned int)v60 ) /*0x59c295*/
                  *(_DWORD *)&v12->__pad_0[12] = v53; /*0x59c297*/
                if ( v53 < v12->uniqueId ) /*0x59c29d*/
                  v12->uniqueId = v53; /*0x59c29f*/
              }
            }
            v40 = g_MapCellHeight_Value; /*0x59c2a2*/
          }
        }
        v41 = v90 + 2; /*0x59c2ac*/
        LODWORD(v90) = v90 + 2; /*0x59c2b2*/
        if ( (int)v90 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v34 = (__int16 *)v82; /*0x59c047*/
      }
      st7_76 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2c1*/
      v94 = st7_76 * a7 + v94; /*0x59c2d2*/
      v61 = Random::Gaussian((double *)&g_TileSystemInit); /*0x59c2d6*/
      v81 = (MapResourceClass *)((char *)v81 + 1); /*0x59c2e7*/
      v63 = *(MapResourceClass **)v12->__pad_0; /*0x59c2eb*/
      zf76 = *(_DWORD *)v12->__pad_0 == 0; /*0x59c2ed*/
      v95 = v61 * a7 + v95; /*0x59c2ef*/
      if ( zf76 ) /*0x59c2f3*/
      {
        v34 = 0; /*0x59c2f5*/
      }
      else
      {
        v64 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c2f9*/
        v34 = *(__int16 **)(v64 + 4); /*0x59c301*/
        *(_DWORD *)(v64 + 4) = *(_DWORD *)(v64 + 4 * (_DWORD)v63); /*0x59c304*/
        *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c30c*/
        Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c31a*/
      }
      v82 = (int)v34; /*0x59c328*/
    }
    while ( (int)v81 < a2 ); /*0x59c32c*/
    if ( *(_DWORD *)v12->__pad_0 ) /*0x59c332*/
    {
      v65 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c33c*/
      v67 = *(MapResourceClass **)(v65 + 4); /*0x59c344*/
      *(_DWORD *)(v65 + 4) = *(_DWORD *)(v65 + 4 * *(_DWORD *)v12->__pad_0); /*0x59c347*/
      *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c34f*/
      Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c35d*/
      for ( ; v67; v81 = (MapResourceClass *)((char *)v81 + 1) ) /*0x59c364*/
      {
        v68 = (Random *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v67); /*0x59c375*/
        edi82 = (char *)g_MapTileArray /*0x59c393*/
              + 80 * *(__int16 *)v67->__tail_0
              + 80 * unk_89C2DC * *(__int16 *)&v67->__tail_0[2];
        if ( !*((_DWORD *)edi82 + 14) && Cell::IsGroundTypeRange((int *)v68->__pad_0) ) /*0x59c39e*/
        {
          v68[3].Random_field_0x08 = 0; /*0x59c3ab*/
          *((_DWORD *)edi82 + 14) = this->q308; /*0x59c3b8*/
        }
        if ( *(_DWORD *)v12->__pad_0 ) /*0x59c3bb*/
        {
          v69 = *(_DWORD *)&v12->__pad_0[8]; /*0x59c3c5*/
          v67 = *(MapResourceClass **)(v69 + 4); /*0x59c3cd*/
          *(_DWORD *)(v69 + 4) = *(_DWORD *)(v69 + 4 * *(_DWORD *)v12->__pad_0); /*0x59c3d0*/
          *(_DWORD *)(*(_DWORD *)&v12->__pad_0[8] + 4 * (*(_DWORD *)v12->__pad_0)--) = 0; /*0x59c3d8*/
          Heap::SiftDown((int *)v12->__pad_0, 1); /*0x59c3e6*/
        }
        else
        {
          v67 = 0; /*0x59c3c1*/
        }
      }
    }
    __3_YAXPAX_Z(Block); /*0x59c405*/
    if ( v12 ) /*0x59c411*/
    {
      __3_YAXPAX_Z(*(void **)&v12->__pad_0[8]); /*0x59c417*/
      __3_YAXPAX_Z(v12); /*0x59c41d*/
    }
    inited = MapClass::InitTileData(this->q308, 1); /*0x59c43d*/
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59c452*/
    {
      v72 = *(Random **)(i + 56); /*0x59c454*/
      if ( (int)v72 >= dword_ABAD28 && (int)v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(_DWORD *)(i + 56) = 0; /*0x59c468*/
        *(_BYTE *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      result = (int)v81; /*0x59c51b*/
      ++this->q308; /*0x59c521*/
    }
    else
    {
      v73 = *(Random **)&MEMORY[0xA8D63C].__pad_579C[55648]; /*0x59c48c*/
      edi97 = this->q308; /*0x59c492*/
      LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x59c4ae*/
      {
        LODWORD(v93) = *(_DWORD *)(j + 36); /*0x59c4b3*/
        v75 = (char *)g_MapTileArray + 80 * SLOWORD(v93) + 80 * unk_89C2DC * SWORD1(v93); /*0x59c4d4*/
        if ( *((_DWORD *)v75 + 14) == edi97 ) /*0x59c4d9*/
        {
          *((_DWORD *)v75 + 14) = 0; /*0x59c4db*/
          v75[75] = 0; /*0x59c4e2*/
          *(_DWORD *)(j + 56) = v73; /*0x59c4e6*/
          *(_BYTE *)(j + 282) = 0; /*0x59c4e9*/
          *(_BYTE *)(j + 283) = this->q0C3; /*0x59c4f6*/
        }
      }
      return 0; /*0x59c50a*/
    }
  }
  else
  {
    v82 = 0; /*0x59bc85*/
    while ( 1 ) /*0x59bc97*/
    {
      v16 = MEMORY[0x87F8DC] - 1; /*0x59bc97*/
      *(_QWORD *)&v95 = (unsigned int)MEMORY[0x87F8DC]; /*0x59bc9d*/
      v98 = (double)(unsigned int)MEMORY[0x87F8DC]; /*0x59bca5*/
      do /*0x59bcdc*/
      {
        *(_QWORD *)&v94 = (unsigned int)Random::State(&g_Randomizer); /*0x59bcb6*/
        v17 = Math::RoundToInt((double)*(__int64 *)&v94 * v98 * 2.328306437080797e-10); /*0x59bcd3*/
        v18 = v17; /*0x59bcd8*/
      }
      while ( v17 > v16 ); /*0x59bcdc*/
      v19 = MEMORY[0x87F8E0] - 1; /*0x59bcec*/
      v90 = (unsigned int)MEMORY[0x87F8E0]; /*0x59bcf2*/
      v98 = (double)(unsigned int)MEMORY[0x87F8E0]; /*0x59bcfa*/
      do /*0x59bd2f*/
      {
        v89 = (unsigned int)Random::State(&g_Randomizer); /*0x59bd0b*/
        v20 = Math::RoundToInt((double)v89 * v98 * 2.328306437080797e-10); /*0x59bd28*/
      }
      while ( v20 > v19 ); /*0x59bd2f*/
      HIWORD(v91) = -v18; /*0x59bd3c*/
      HIWORD(v92) = MEMORY[0x87F8DC]; /*0x59bd41*/
      LOWORD(v93) = v18 + 1; /*0x59bd51*/
      WORD1(v93) = MEMORY[0x87F8DC] - v18; /*0x59bd56*/
      v21 = v20 + v18 + 1; /*0x59bd63*/
      v22 = MEMORY[0x87F8DC] - v18 + v20; /*0x59bd65*/
      LOWORD(v86) = v21; /*0x59bd67*/
      HIWORD(v86) = v22; /*0x59bd6c*/
      v78 = v86; /*0x59bd75*/
      if ( ++v82 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MapTileArray ) /*0x59bd92*/
      {
        if ( !*((_DWORD *)g_MapTileArray + 20 * v21 + 20 * unk_89C2DC * v22 + 14) ) /*0x59bdad*/
        {
          v23 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v78); /*0x59bdc3*/
          if ( Cell::IsGroundTypeRange(v23) ) /*0x59bdca*/
          {
            if ( v82 < 200 ) /*0x59bddf*/
              goto LABEL_27; /*0x59bddf*/
            return 0; /*0x59bddf*/
          }
        }
      }
    }
  }
  return result; /*0x59bde3*/
}


// ==== 0x0059C530  SmallFunc_59C530  this=-  sig=ida-proto ====
int sub_59C530()
{
  int result; // eax
  int v1; // ecx

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c536*/
  for ( result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c549*/
        result;
        result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    v1 = *(_DWORD *)(result + 56); /*0x59c54b*/
    if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x59c55d*/
    {
      *(_DWORD *)(result + 56) = 0; /*0x59c55f*/
      *(_BYTE *)(result + 282) = 0; /*0x59c562*/
    }
  }
  return result; /*0x59c576*/
}


// ==== 0x0059C580  RandomMap::GrowTiberium  this=MapResourceClass  sig=csp ====
char __thiscall RandomMap::GrowTiberium(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  char result; // al
  MapResourceClass aP1; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->__pad_03C; /*0x59c594*/
  ++this->q308; /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && this->q04C > 20 ) /*0x59c5ac*/
  {
    v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      *(_WORD *)aP1.__tail_0 = 0; /*0x59c5c1*/
      *(_WORD *)&aP1.__tail_0[2] = 0; /*0x59c5c6*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth(this, (int)&aP1, 0, 0) ) /*0x59c5cb*/
      {
        ++this->q308; /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    *(_WORD *)aP1.__tail_0 = 0; /*0x59c5ee*/
    *(_WORD *)&aP1.__tail_0[2] = 0; /*0x59c5f6*/
    result = TiberiumClass::Grow(this, &aP1); /*0x59c5fb*/
    ++v4; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++this->q308; /*0x59c605*/
      return result; /*0x59c605*/
    }
  }
  return result; /*0x59c60b*/
}


// ==== 0x0059C630  FindMapCell  this=MapResourceClass  sig=ida-proto ====
int sub_59C630()
{
  int result; // eax
  int i; // esi
  _DWORD *NeighbourContent; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // [esp+8h] [ebp-18h]
  __int64 v11; // [esp+10h] [ebp-10h]
  __int64 v12; // [esp+18h] [ebp-8h]

  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(_DWORD *)(i + 56) == dword_AA0738 && !*(_BYTE *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent[14] != dword_AA0738 /*0x59c6ce*/
        || *((_BYTE *)NeighbourContent + 282)
        || v3[14] != dword_AA0738
        || *((_BYTE *)v3 + 282)
        || v4[14] != dword_AA0738
        || *((_BYTE *)v4 + 282) )
      {
        goto LABEL_25; /*0x59c6ce*/
      }
      do /*0x59c704*/
      {
        v10 = (unsigned int)Random::State(&g_Randomizer); /*0x59c6e4*/
        v5 = Math::RoundToInt((double)v10 * 0.000000002328306437080797 + 1.0); /*0x59c6fc*/
      }
      while ( v5 > 0xA ); /*0x59c704*/
      if ( v5 == 1 ) /*0x59c709*/
      {
LABEL_25:
        do /*0x59c7c5*/
        {
          v12 = (unsigned int)Random::State(&g_Randomizer); /*0x59c7a6*/
          v9 = Math::RoundToInt((double)v12 * 0.00000004679895938532403); /*0x59c7bd*/
        }
        while ( v9 > 0xC8 ); /*0x59c7c5*/
        *(_DWORD *)(i + 56) = v9 / 0x28 + dword_AA0738 + 8; /*0x59c7da*/
      }
      else
      {
        do /*0x59c738*/
        {
          v11 = (unsigned int)Random::State(&g_Randomizer); /*0x59c719*/
          v6 = Math::RoundToInt((double)v11 * 0.0000000563450157773553); /*0x59c72b*/
        }
        while ( (unsigned int)v6 > 0xF1 ); /*0x59c738*/
        if ( v6 < 240 ) /*0x59c740*/
          v7 = v6 / 40; /*0x59c75c*/
        else
          v7 = 247 - v6; /*0x59c747*/
        if ( g_MapTileArray ) /*0x59c769*/
          v8 = *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + dword_AA0738, (_WORD *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x59c7e2*/
  }
  return result; /*0x59c7f3*/
}


// ==== 0x0059C920  TiberiumClass::Grow  this=MapResourceClass  sig=csp ====
char __thiscall TiberiumClass::Grow(int *this, _WORD *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // esi
  void *v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int i; // eax
  _WORD *v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int *v19; // ecx
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // ebx
  unsigned int v23; // eax
  __int16 v24; // di
  unsigned int v25; // ebx
  unsigned int v26; // eax
  __int16 v27; // cx
  __int16 v28; // ax
  _DWORD *v29; // eax
  int v31; // eax
  int v32; // ecx
  double v33; // st7
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // edi
  unsigned int v38; // ecx
  unsigned int v39; // edx
  int v40; // ebx
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int16 *v44; // edi
  int v45; // edx
  _DWORD *v46; // eax
  char *v47; // edx
  float *v48; // ebx
  int v49; // ecx
  __int16 v50; // ax
  int v51; // ecx
  int v52; // edi
  _DWORD *v53; // eax
  __int16 v54; // ax
  int v55; // edx
  float *v56; // edi
  unsigned int v57; // ecx
  unsigned int v58; // edx
  unsigned int v59; // eax
  int v60; // edi
  int v61; // eax
  int v62; // edi
  int v63; // eax
  __int16 *v64; // edi
  _DWORD *v65; // ebx
  int v66; // edi
  int v67; // eax
  int *v68; // edi
  int j; // eax
  int v70; // ecx
  int v71; // ecx
  int v72; // esi
  int k; // eax
  int v74; // ecx
  char inited; // [esp+1Bh] [ebp-5Dh]
  int v77; // [esp+20h] [ebp-58h] BYREF
  __int64 v78; // [esp+24h] [ebp-54h]
  int v79; // [esp+2Ch] [ebp-4Ch]
  void *Block; // [esp+30h] [ebp-48h]
  __int64 v81; // [esp+34h] [ebp-44h] BYREF
  __int64 v82; // [esp+3Ch] [ebp-3Ch]
  __int64 v83; // [esp+44h] [ebp-34h]
  int v84; // [esp+4Ch] [ebp-2Ch]
  double v85; // [esp+50h] [ebp-28h]
  double v86; // [esp+58h] [ebp-20h]
  double v87; // [esp+60h] [ebp-18h]
  double v88; // [esp+68h] [ebp-10h]
  double v89; // [esp+70h] [ebp-8h]

  v3 = this->q04C; /*0x59c92e*/
  inited = 1; /*0x59c937*/
  LODWORD(v86) = v3; /*0x59c93c*/
  if ( v3 ) /*0x59c940*/
    v3 = Math::RoundToInt((double)this->q061 * (double)this->q060 * (double)SLODWORD(v86) * 0.008 + 100.0); /*0x59c95e*/
  v4 = v3 - this->q0C1; /*0x59c963*/
  LODWORD(v85) = v4; /*0x59c96c*/
  if ( v4 <= 75 ) /*0x59c970*/
    return 0; /*0x59c970*/
  v5 = 2 * v4 + 2; /*0x59c976*/
  v6 = v5; /*0x59c97d*/
  if ( v5 <= 100 ) /*0x59c97f*/
    v6 = 100; /*0x59c981*/
  v7 = (void *)__2_YAPAXI_Z(8 * v6); /*0x59c98e*/
  if ( v7 ) /*0x59c998*/
  {
    Block = v7; /*0x59c99b*/
    LODWORD(v88) = v6 - 1; /*0x59c99f*/
  }
  else
  {
    Block = 0; /*0x59c9a5*/
  }
  v8 = __2_YAPAXI_Z(20); /*0x59c9b4*/
  if ( v8 ) /*0x59c9bb*/
  {
    v9 = v5; /*0x59c9c0*/
    if ( v5 <= 100 ) /*0x59c9c2*/
      v9 = 100; /*0x59c9c4*/
    *(_DWORD *)(v8 + 12) = 0; /*0x59c9d3*/
    *(_DWORD *)(v8 + 16) = -1; /*0x59c9d6*/
    *(_DWORD *)v8 = 0; /*0x59c9dd*/
    *(_DWORD *)(v8 + 4) = v9; /*0x59c9df*/
    v10 = __2_YAPAXI_Z(4 * v9 + 4); /*0x59c9e2*/
    v11 = *(_DWORD *)(v8 + 4); /*0x59c9e7*/
    *(_DWORD *)(v8 + 8) = v10; /*0x59c9ea*/
    v12 = 0; /*0x59c9f0*/
    if ( v11 >= 0 ) /*0x59c9f4*/
    {
      do /*0x59ca03*/
      {
        ++v12; /*0x59c9f9*/
        *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v12 - 4) = 0; /*0x59c9fa*/
      }
      while ( v12 <= *(_DWORD *)(v8 + 4) ); /*0x59ca03*/
    }
  }
  else
  {
    v8 = 0; /*0x59ca07*/
  }
  LayerClass::CellIteratorReset(MEMORY[0x87F7E8]); /*0x59ca10*/
  for ( i = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]) ) /*0x59ca21*/
  {
    LODWORD(v86) = *(_DWORD *)(i + 36); /*0x59ca26*/
    *(_DWORD *)(80 * (SLOWORD(v86) + MEMORY[0x87F7E8][29373] * SWORD1(v86)) + dword_A8ED54[49135] + 60) = 0; /*0x59ca4b*/
  }
  v14 = a2; /*0x59ca5e*/
  v15 = MEMORY[0x87F7E8][29373] * MEMORY[0x87F7E8][29373]; /*0x59ca61*/
  if ( *a2 || a2[1] ) /*0x59ca6e*/
  {
    if ( v15 > 0 ) /*0x59cc83*/
    {
      v31 = 0; /*0x59cc89*/
      do /*0x59cc9a*/
      {
        v31 += 80; /*0x59cc91*/
        --v15; /*0x59cc94*/
        *(_BYTE *)(v31 + dword_A8ED54[49135] - 12) = 1; /*0x59cc95*/
      }
      while ( v15 ); /*0x59cc9a*/
    }
  }
  else
  {
    if ( v15 > 0 ) /*0x59ca7b*/
    {
      v16 = 0; /*0x59ca7d*/
      v17 = MEMORY[0x87F7E8][29373] * MEMORY[0x87F7E8][29373]; /*0x59ca7f*/
      do /*0x59ca90*/
      {
        v16 += 80; /*0x59ca87*/
        --v17; /*0x59ca8a*/
        *(_BYTE *)(v16 + dword_A8ED54[49135] - 12) = 0; /*0x59ca8b*/
      }
      while ( v17 ); /*0x59ca90*/
    }
    MapClass::GrowLayer(this, 0, 2, -2); /*0x59ca9a*/
    if ( v15 > 0 ) /*0x59caa1*/
    {
      v18 = 0; /*0x59caa3*/
      do /*0x59cada*/
      {
        v19 = (int *)(v18 + dword_A8ED54[49135] + 56); /*0x59caaa*/
        v20 = *v19; /*0x59caae*/
        if ( !*v19 || v20 == this->q308 ) /*0x59cabc*/
        {
          *(_BYTE *)(v18 + dword_A8ED54[49135] + 68) = 1; /*0x59cad1*/
        }
        else if ( v20 == -2 ) /*0x59cac1*/
        {
          *v19 = 0; /*0x59cac3*/
        }
        v18 += 80; /*0x59cad6*/
        --v15; /*0x59cad9*/
      }
      while ( v15 ); /*0x59cada*/
    }
    v14 = a2; /*0x59cadc*/
  }
  v21 = *v14 == 0; /*0x59cadf*/
  v79 = 0; /*0x59cae3*/
  if ( v21 && !v14[1] ) /*0x59caf1*/
  {
    while ( 1 ) /*0x59cb09*/
    {
      v22 = MEMORY[0x87F7E8][61] - 1; /*0x59cb09*/
      v83 = MEMORY[0x87F7E8][61]; /*0x59cb0f*/
      v89 = (double)MEMORY[0x87F7E8][61]; /*0x59cb17*/
      do /*0x59cb48*/
      {
        v82 = (unsigned int)Random::State(&dword_A8ED54[48847]); /*0x59cb25*/
        v23 = Math::RoundToInt((double)v82 * v89 * 2.328306437080797e-10); /*0x59cb3f*/
        v24 = v23; /*0x59cb44*/
      }
      while ( v23 > v22 ); /*0x59cb48*/
      v25 = MEMORY[0x87F7E8][62] - 1; /*0x59cb58*/
      v81 = MEMORY[0x87F7E8][62]; /*0x59cb5e*/
      v89 = (double)MEMORY[0x87F7E8][62]; /*0x59cb66*/
      do /*0x59cb95*/
      {
        v78 = (unsigned int)Random::State(&dword_A8ED54[48847]); /*0x59cb74*/
        v26 = Math::RoundToInt((double)v78 * v89 * 2.328306437080797e-10); /*0x59cb8e*/
      }
      while ( v26 > v25 ); /*0x59cb95*/
      WORD1(v87) = -v24; /*0x59cba2*/
      WORD1(v86) = MEMORY[0x87F7E8][61]; /*0x59cbab*/
      LOWORD(v88) = v24 + 1; /*0x59cbb7*/
      WORD1(v88) = LOWORD(MEMORY[0x87F7E8][61]) - v24; /*0x59cbbc*/
      v27 = v26 + v24 + 1; /*0x59cbc9*/
      v28 = LOWORD(MEMORY[0x87F7E8][61]) - v24 + v26; /*0x59cbcb*/
      LOWORD(v84) = v27; /*0x59cbcd*/
      HIWORD(v84) = v28; /*0x59cbd2*/
      v77 = v84; /*0x59cbdb*/
      if ( ++v79 >= 200 ) /*0x59cbee*/
        return 0; /*0x59cbee*/
      if ( dword_A8ED54[49135] ) /*0x59cbfc*/
      {
        if ( !*(_DWORD *)(80 * (v27 + MEMORY[0x87F7E8][29373] * v28) + dword_A8ED54[49135] + 56) ) /*0x59cc17*/
        {
          v29 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v77); /*0x59cc2d*/
          if ( Cell::IsEmpty(v29) ) /*0x59cc34*/
          {
            if ( *(_BYTE *)(80 * ((__int16)v77 + MEMORY[0x87F7E8][29373] * SHIWORD(v77)) + dword_A8ED54[49135] + 68) ) /*0x59cc60*/
            {
              if ( v79 < 200 ) /*0x59cc74*/
                goto LABEL_50; /*0x59cc74*/
              return 0; /*0x59cc7e*/
            }
          }
        }
      }
    }
  }
  v77 = *(_DWORD *)v14; /*0x59cca3*/
LABEL_50:
  v32 = LODWORD(v85); /*0x59cca7*/
  LODWORD(v78) = 0; /*0x59ccb0*/
  v84 = 76; /*0x59ccb4*/
  if ( SLODWORD(v85) >= 76 ) /*0x59ccbc*/
    v84 = LODWORD(v85); /*0x59ccbe*/
  v85 = (double)v84; /*0x59cccd*/
  v88 = (double)(v32 / 6); /*0x59cce7*/
  LODWORD(v86) = v32 / 3; /*0x59ccf2*/
  v87 = (double)(v32 / 3); /*0x59ccfa*/
  if ( v87 - v88 > v85 || v87 + v88 < 75.0 ) /*0x59cd20*/
  {
    v88 = (v85 - 75.0) * 0.5; /*0x59cd32*/
    v87 = v88 + 75.0; /*0x59cd3c*/
  }
  do /*0x59cd70*/
  {
    do /*0x59cd61*/
    {
      v33 = Random::Gaussian((double *)&dword_A8ED54[48281]); /*0x59cd45*/
      v86 = v33 * v88 + v87; /*0x59cd52*/
    }
    while ( v86 < 75.0 ); /*0x59cd61*/
  }
  while ( v86 > v85 ); /*0x59cd70*/
  v34 = Math::RoundToInt(v86); /*0x59cd76*/
  v35 = *(_DWORD *)v8; /*0x59cd7b*/
  v84 = v34; /*0x59cd7d*/
  v36 = 0; /*0x59cd81*/
  if ( v35 >= 0 ) /*0x59cd85*/
  {
    do /*0x59cd93*/
    {
      ++v36; /*0x59cd8a*/
      *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v36 - 4) = 0; /*0x59cd8b*/
    }
    while ( v36 <= *(_DWORD *)v8 ); /*0x59cd93*/
  }
  v37 = Block; /*0x59cd95*/
  *(_DWORD *)v8 = 0; /*0x59cd99*/
  LODWORD(v82) = 1; /*0x59cd9f*/
  *v37 = v77; /*0x59cda7*/
  v37[1] = 0; /*0x59cda9*/
  *(_DWORD *)(80 * ((__int16)v77 + MEMORY[0x87F7E8][29373] * SHIWORD(v77)) + dword_A8ED54[49135] + 60) = this->q308; /*0x59cdd4*/
  v38 = *(_DWORD *)v8 + 1; /*0x59cddd*/
  LODWORD(v86) = v37[1]; /*0x59cde0*/
  v39 = v38 >> 1; /*0x59cde7*/
  if ( v38 < *(_DWORD *)(v8 + 4) ) /*0x59cdeb*/
  {
    for ( ; v38 > 1; v39 >>= 1 ) /*0x59cdf0*/
    {
      v40 = *(_DWORD *)(v8 + 8); /*0x59cdf2*/
      if ( *(float *)(*(_DWORD *)(v40 + 4 * v39) + 4) <= (double)*(float *)&v86 ) /*0x59ce04*/
        break; /*0x59ce04*/
      *(_DWORD *)(v40 + 4 * v38) = *(_DWORD *)(v40 + 4 * v39); /*0x59ce09*/
      v38 = v39; /*0x59ce0c*/
    }
    *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v38) = v37; /*0x59ce18*/
    v41 = *(_DWORD *)(v8 + 12); /*0x59ce1d*/
    ++*(_DWORD *)v8; /*0x59ce23*/
    if ( (unsigned int)v37 > v41 ) /*0x59ce25*/
      *(_DWORD *)(v8 + 12) = v37; /*0x59ce27*/
    if ( (unsigned int)v37 < *(_DWORD *)(v8 + 16) ) /*0x59ce2d*/
      *(_DWORD *)(v8 + 16) = v37; /*0x59ce2f*/
  }
  v42 = *(_DWORD *)v8; /*0x59ce32*/
  if ( *(_DWORD *)v8 ) /*0x59ce32*/
  {
    v43 = *(_DWORD *)(v8 + 8); /*0x59ce38*/
    v44 = *(__int16 **)(v43 + 4); /*0x59ce40*/
    *(_DWORD *)(v43 + 4) = *(_DWORD *)(v43 + 4 * v42); /*0x59ce43*/
    *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * (*(_DWORD *)v8)--) = 0; /*0x59ce4b*/
    Heap::SiftDown((int *)v8, 1); /*0x59ce59*/
    v42 = (int)v44; /*0x59ce5e*/
  }
  v79 = v42; /*0x59ce64*/
  if ( v84 > 0 ) /*0x59ce6a*/
  {
    v45 = dword_A8ED54[49135]; /*0x59ce70*/
    while ( v42 && inited ) /*0x59ce84*/
    {
      if ( v45 ) /*0x59ce98*/
        *(_DWORD *)(80 * (*(__int16 *)v42 + MEMORY[0x87F7E8][29373] * *(__int16 *)(v42 + 2)) + v45 + 56) = this->q308; /*0x59ceba*/
      v46 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)v42); /*0x59cec4*/
      v47 = (char *)Block; /*0x59cecf*/
      v46[14] = dword_A8ED54[18041]; /*0x59ced3*/
      *((_BYTE *)v46 + 282) = 0; /*0x59ced6*/
      LODWORD(v83) = 0; /*0x59cee1*/
      v48 = (float *)&v47[8 * v82]; /*0x59cee9*/
      do /*0x59d0f8*/
      {
        v49 = v83 & 7; /*0x59cef4*/
        v50 = LOWORD(MEMORY[0x87F7E8][v49 + 32680]) + *(_WORD *)v79; /*0x59cf00*/
        LOWORD(v49) = HIWORD(MEMORY[0x87F7E8][v49 + 32680]); /*0x59cf0f*/
        LOWORD(v85) = v50; /*0x59cf13*/
        WORD1(v85) = *(_WORD *)(v79 + 2) + v49; /*0x59cf1c*/
        LODWORD(v81) = LODWORD(v85); /*0x59cf25*/
        v51 = SWORD1(v85) + v50; /*0x59cf2f*/
        if ( v51 > dword_A8ED54[49132] /*0x59cf60*/
          && v50 - SWORD1(v85) < dword_A8ED54[49132]
          && SWORD1(v85) - v50 < dword_A8ED54[49132]
          && v51 <= dword_A8ED54[49133] )
        {
          v52 = dword_A8ED54[49135] + 80 * (v50 + MEMORY[0x87F7E8][29373] * SWORD1(v85)); /*0x59cf7b*/
          if ( *(_DWORD *)(v52 + 56) /*0x59cfb9*/
            || *(_DWORD *)(v52 + 60) == this->q308
            || (v53 = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&v81), !Cell::IsEmpty(v53))
            || !*(_BYTE *)(v52 + 68) )
          {
            v60 = *(_DWORD *)(v52 + 56); /*0x59d0d2*/
            if ( v60 && v60 != this->q308 ) /*0x59d0e3*/
              inited = 0; /*0x59d0e5*/
          }
          else
          {
            v54 = v81; /*0x59cfc4*/
            v55 = SWORD1(v81); /*0x59cfcb*/
            *(_DWORD *)v48 = v81; /*0x59cfd0*/
            LODWORD(v86) = ((__int16)v77 - v54) * ((__int16)v77 - v54) + (SHIWORD(v77) - v55) * (SHIWORD(v77) - v55); /*0x59cfef*/
            *(float *)&v86 = Math::Sqrt((double)SLODWORD(v86)); /*0x59cfff*/
            *(_QWORD *)&v89 = (unsigned int)Random::State(&dword_A8ED54[48847]); /*0x59d010*/
            LODWORD(v82) = v82 + 1; /*0x59d035*/
            v48[1] = 10.0 * ((double)*(__int64 *)&v89 * 2.328306437080797e-10) /*0x59d053*/
                   + *(float *)&v86 * 0.5
                   - (double)(int)v78 * 0.02;
            *(_DWORD *)(v52 + 60) = this->q308; /*0x59d05c*/
            v56 = v48; /*0x59d061*/
            v48 += 2; /*0x59d063*/
            v57 = *(_DWORD *)v8 + 1; /*0x59d066*/
            LODWORD(v86) = v48; /*0x59d067*/
            *(float *)&v87 = v56[1]; /*0x59d070*/
            v58 = v57 >> 1; /*0x59d077*/
            if ( v57 < *(_DWORD *)(v8 + 4) ) /*0x59d07d*/
            {
              for ( ; v57 > 1; v58 >>= 1 ) /*0x59d082*/
              {
                LODWORD(v88) = *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v58); /*0x59d08a*/
                if ( *(float *)(LODWORD(v88) + 4) <= (double)*(float *)&v87 ) /*0x59d09a*/
                  break; /*0x59d09a*/
                *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v57) = LODWORD(v88); /*0x59d0a3*/
                v48 = (float *)LODWORD(v86); /*0x59d0a6*/
                v57 = v58; /*0x59d0aa*/
              }
              *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * v57) = v56; /*0x59d0b6*/
              v59 = *(_DWORD *)(v8 + 12); /*0x59d0bb*/
              ++*(_DWORD *)v8; /*0x59d0c1*/
              if ( (unsigned int)v56 > v59 ) /*0x59d0c3*/
                *(_DWORD *)(v8 + 12) = v56; /*0x59d0c5*/
              if ( (unsigned int)v56 < *(_DWORD *)(v8 + 16) ) /*0x59d0cb*/
                *(_DWORD *)(v8 + 16) = v56; /*0x59d0cd*/
            }
          }
        }
        LODWORD(v83) = v83 + 2; /*0x59d0f4*/
      }
      while ( (int)v83 < 8 ); /*0x59d0f8*/
      LODWORD(v78) = v78 + 1; /*0x59d103*/
      if ( *(_DWORD *)v8 ) /*0x59d107*/
      {
        v61 = *(_DWORD *)(v8 + 8); /*0x59d113*/
        v62 = *(_DWORD *)(v61 + 4); /*0x59d11b*/
        *(_DWORD *)(v61 + 4) = *(_DWORD *)(v61 + 4 * *(_DWORD *)v8); /*0x59d11e*/
        *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * (*(_DWORD *)v8)--) = 0; /*0x59d126*/
        Heap::SiftDown((int *)v8, 1); /*0x59d134*/
        v79 = v62; /*0x59d139*/
      }
      else
      {
        v79 = 0; /*0x59d10d*/
      }
      if ( (int)v78 >= v84 ) /*0x59d147*/
        break; /*0x59d147*/
      v45 = dword_A8ED54[49135]; /*0x59ce78*/
      v42 = v79; /*0x59ce7e*/
    }
  }
  if ( *(_DWORD *)v8 ) /*0x59d14d*/
  {
    v63 = *(_DWORD *)(v8 + 8); /*0x59d157*/
    v64 = *(__int16 **)(v63 + 4); /*0x59d15f*/
    *(_DWORD *)(v63 + 4) = *(_DWORD *)(v63 + 4 * *(_DWORD *)v8); /*0x59d162*/
    *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * (*(_DWORD *)v8)--) = 0; /*0x59d16a*/
    Heap::SiftDown((int *)v8, 1); /*0x59d178*/
    if ( v64 ) /*0x59d17f*/
    {
      while ( inited ) /*0x59d18b*/
      {
        v65 = CellCoord::To_CellObj(MEMORY[0x87F7E8], v64); /*0x59d19c*/
        v66 = dword_A8ED54[49135] + 80 * (*v64 + MEMORY[0x87F7E8][29373] * v64[1]); /*0x59d1ba*/
        if ( !*(_DWORD *)(v66 + 56) && Cell::IsEmpty(v65) && *(_BYTE *)(v66 + 68) ) /*0x59d1ce*/
        {
          v65[14] = dword_A8ED54[18041]; /*0x59d1de*/
          *((_BYTE *)v65 + 282) = 0; /*0x59d1e1*/
          *(_DWORD *)(v66 + 56) = this->q308; /*0x59d1ee*/
        }
        else
        {
          inited = 0; /*0x59d1f3*/
        }
        if ( *(_DWORD *)v8 ) /*0x59d1f8*/
        {
          v67 = *(_DWORD *)(v8 + 8); /*0x59d202*/
          v64 = *(__int16 **)(v67 + 4); /*0x59d20a*/
          *(_DWORD *)(v67 + 4) = *(_DWORD *)(v67 + 4 * *(_DWORD *)v8); /*0x59d20d*/
          *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * (*(_DWORD *)v8)--) = 0; /*0x59d215*/
          Heap::SiftDown((int *)v8, 1); /*0x59d223*/
        }
        else
        {
          v64 = 0; /*0x59d1fe*/
        }
        LODWORD(v78) = v78 + 1; /*0x59d22f*/
        if ( !v64 ) /*0x59d233*/
          goto LABEL_113; /*0x59d233*/
      }
      goto LABEL_121; /*0x59d18b*/
    }
  }
LABEL_113:
  if ( !inited ) /*0x59d23f*/
  {
LABEL_121:
    v68 = this; /*0x59d296*/
    goto LABEL_122; /*0x59d296*/
  }
  if ( (int)v78 <= 75 || (int)v78 <= v84 / 4 ) /*0x59d259*/
  {
    inited = 0; /*0x59d291*/
    goto LABEL_121; /*0x59d291*/
  }
  inited = 1; /*0x59d25e*/
  if ( *a2 || a2[1] ) /*0x59d269*/
  {
    v68 = this; /*0x59d2e6*/
LABEL_127:
    if ( !*a2 && !a2[1] ) /*0x59d2f0*/
    {
      v68 = this; /*0x59d316*/
      inited = TiberiumClass::Spread(this->q308, 1, 0, 0, 512, 512, 0, 0); /*0x59d32a*/
      if ( inited ) /*0x59d32e*/
      {
        LODWORD(v88) = this->q308; /*0x59d33f*/
        LayerClass::CellIteratorReset(MEMORY[0x87F7E8]); /*0x59d343*/
        for ( j = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]) ) /*0x59d354*/
        {
          if ( dword_A8ED54[49135] ) /*0x59d35e*/
            v70 = *(_DWORD *)(80 * (*(__int16 *)(j + 36) + MEMORY[0x87F7E8][29373] * *(__int16 *)(j + 38)) /*0x59d37c*/
                            + dword_A8ED54[49135]
                            + 56);
          else
            v70 = -1; /*0x59d360*/
          if ( v70 == LODWORD(v88) ) /*0x59d384*/
          {
            v71 = *(_DWORD *)(j + 56); /*0x59d386*/
            if ( !v71 || v71 == 0xFFFF ) /*0x59d393*/
              *(_DWORD *)(j + 56) = dword_A8ED54[18481]; /*0x59d39b*/
          }
        }
        inited = 1; /*0x59d3ac*/
      }
    }
    goto LABEL_122; /*0x59d3b1*/
  }
  v68 = this; /*0x59d270*/
  inited = MapClass::InitTileData(MEMORY[0x87F7E8], this->q308, 0); /*0x59d289*/
  if ( inited ) /*0x59d28d*/
    goto LABEL_127; /*0x59d28d*/
LABEL_122:
  if ( v8 ) /*0x59d29c*/
  {
    __3_YAXPAX_Z(*(void **)(v8 + 8)); /*0x59d2a2*/
    __3_YAXPAX_Z((void *)v8); /*0x59d2a8*/
  }
  __3_YAXPAX_Z(Block); /*0x59d2b5*/
  if ( inited ) /*0x59d2c3*/
  {
    v68[193] += v78; /*0x59d2d5*/
    return 1; /*0x59d2e3*/
  }
  v72 = v68[194]; /*0x59d3b6*/
  LayerClass::CellIteratorReset(MEMORY[0x87F7E8]); /*0x59d3c1*/
  for ( k = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]); k; k = LayerClass::CellIteratorNext(MEMORY[0x87F7E8]) ) /*0x59d3d4*/
  {
    LODWORD(v88) = *(_DWORD *)(k + 36); /*0x59d3d9*/
    v74 = dword_A8ED54[49135] + 80 * (SLOWORD(v88) + MEMORY[0x87F7E8][29373] * SWORD1(v88)); /*0x59d3fa*/
    if ( *(_DWORD *)(v74 + 56) == v72 ) /*0x59d3ff*/
    {
      *(_DWORD *)(v74 + 56) = 0; /*0x59d401*/
      *(_BYTE *)(v74 + 75) = 0; /*0x59d404*/
      *(_DWORD *)(k + 56) = 0; /*0x59d408*/
      *(_BYTE *)(k + 282) = 0; /*0x59d40b*/
      *(_BYTE *)(k + 283) = v68[195]; /*0x59d418*/
    }
  }
  return 0; /*0x59cc78*/
}


// ==== 0x0059D480  sub_59D480  this=-  sig=csp ====
double __stdcall sub_59D480(__int16 *a1, __int16 *a2, int a3)
{
  int v3; // eax
  int v4; // edx
  float v6; // [esp+18h] [ebp+4h]

  v3 = *a1 - *a2; /*0x59d49c*/
  v4 = a1[1] - a2[1]; /*0x59d49e*/
  v6 = Math::Sqrt((double)(v3 * v3 + v4 * v4)); /*0x59d4bd*/
  return (double)(unsigned int)Random::State(&g_Randomizer) * 2.328306437080797e-10 * 10.0 /*0x59d503*/
       + 0.5 * v6
       - (double)a3 * 0.02;
}


// ==== 0x0059D510  Tiberium::ProcessGrowth  this=MapResourceClass  sig=csp ====
char __thiscall Tiberium::ProcessGrowth(int *this, int a2, MapResourceClass *aP2, char _140)
{
  bool v4; // zf
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int16 v7; // si
  unsigned int v8; // edi
  unsigned int v9; // eax
  double v10; // st7
  __int16 v11; // di
  __int16 v12; // bx
  MapResourceClass v13; // ebx
  double v14; // st7
  int v15; // esi
  double v16; // st7
  unsigned int v17; // esi
  unsigned int v18; // eax
  double v19; // st6
  MapResourceClass *v20; // ebx
  double v21; // st7
  __int16 v22; // si
  __int16 v23; // ax
  int v24; // ecx
  int v25; // esi
  int v26; // edx
  double v27; // rdi
  MapResourceClass *v28; // eax
  double v29; // st7
  _DWORD *v30; // esi
  __int16 v31; // di
  __int16 v32; // ax
  int v33; // edx
  __int16 v34; // bx
  __int16 v35; // ax
  _DWORD *v36; // eax
  bool IsEmpty; // al
  int v38; // eax
  _BYTE *v39; // eax
  Random *v40; // ecx
  double v41; // st7
  int v42; // edi
  double v43; // st6
  int v44; // edi
  int v45; // esi
  int v46; // eax
  double v47; // st7
  double v48; // st7
  double v49; // st7
  __int16 v50; // di
  __int16 v51; // ax
  int v52; // ecx
  int v53; // eax
  char v54; // al
  MouseClass *v55; // esi
  int i; // eax
  int v57; // ecx
  Random *v58; // ecx
  MouseClass *v59; // edx
  MouseClass *v60; // esi
  int m; // eax
  unsigned int v62; // edx
  int v63; // ecx
  bool v64; // cc
  char v65; // al
  MouseClass *v67; // esi
  int j; // eax
  char *v69; // ecx
  int v70; // esi
  int k; // eax
  char *v72; // ecx
  char inited; // [esp+Fh] [ebp-121h]
  __int16 v74; // [esp+10h] [ebp-120h] BYREF
  char v75; // [esp+13h] [ebp-11Dh]
  int v76; // [esp+14h] [ebp-11Ch]
  double v77; // [esp+18h] [ebp-118h]
  char v78; // [esp+27h] [ebp-109h]
  unsigned int v79; // [esp+28h] [ebp-108h]
  double v80; // [esp+30h] [ebp-100h]
  _DWORD *v81; // [esp+3Ch] [ebp-F4h]
  double v82; // [esp+40h] [ebp-F0h]
  int v83; // [esp+4Ch] [ebp-E4h]
  int v84; // [esp+50h] [ebp-E0h] BYREF
  double v85; // [esp+58h] [ebp-D8h] BYREF
  MapResourceClass aP1; // [esp+60h] [ebp-D0h] BYREF
  double v87; // [esp+68h] [ebp-C8h]
  __int16 a4[2]; // [esp+74h] [ebp-BCh] BYREF
  MapResourceClass *v89[2]; // [esp+78h] [ebp-B8h]
  double v90; // [esp+80h] [ebp-B0h]
  double v91; // [esp+88h] [ebp-A8h]
  double v92; // [esp+90h] [ebp-A0h]
  double v93; // [esp+98h] [ebp-98h]
  MapResourceClass v94; // [esp+A0h] [ebp-90h] BYREF
  double v95; // [esp+A8h] [ebp-88h]
  MapResourceClass aP6[2]; // [esp+B0h] [ebp-80h] BYREF
  double v97; // [esp+B8h] [ebp-78h]
  double a7; // [esp+C0h] [ebp-70h] BYREF
  __int16 v99[2]; // [esp+CCh] [ebp-64h] BYREF
  MapResourceClass aP3[2]; // [esp+D0h] [ebp-60h] BYREF
  int v101; // [esp+D8h] [ebp-58h]
  int v102; // [esp+DCh] [ebp-54h]
  __int16 a3[2]; // [esp+E0h] [ebp-50h] BYREF
  int v104; // [esp+E4h] [ebp-4Ch]
  double v105; // [esp+E8h] [ebp-48h]
  double v106; // [esp+F0h] [ebp-40h]
  double v107; // [esp+F8h] [ebp-38h]
  double v108; // [esp+100h] [ebp-30h]
  __int64 v109; // [esp+108h] [ebp-28h]
  double v110; // [esp+110h] [ebp-20h]
  double v111; // [esp+118h] [ebp-18h]
  double v112; // [esp+120h] [ebp-10h]
  double v113; // [esp+128h] [ebp-8h]
  char v114; // [esp+144h] [ebp+14h]

  v78 = v114;
  v4 = *(_WORD *)a2 == 0;
  v81 = this;
  inited = 1;
  v83 = 0;
  if ( !v4 || *(_WORD *)(a2 + 2) )
  {
    *(_DWORD *)a4 = *(_DWORD *)a2;
    v97 = COERCE_DOUBLE(__PAIR64__(_140, (unsigned int)aP2));
  }
  else
  {
    *(_WORD *)&v94.__tail_0[2] = MEMORY[0x87F8DC];
    LOWORD(v84) = MEMORY[0x87F8E0];
    HIWORD(v84) = MEMORY[0x87F8E0];
    *(_WORD *)&aP1.__tail_0[2] = 0;
    LOWORD(v79) = MEMORY[0x87F8E0] + MEMORY[0x87F8DC] + 1;
    HIWORD(v79) = MEMORY[0x87F8E0];
    *(_WORD *)aP1.__tail_0 = v79 - 2;
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      LODWORD(v85) = Math::RoundToInt((double)*(__int64 *)&v77 * 9.31322574832319e-10);
    }
    while ( LODWORD(v85) > 3 );
    v5 = MEMORY[0x87F8DC] - 1;
    *(_QWORD *)&v77 = (unsigned int)MEMORY[0x87F8DC];
    v92 = (double)(unsigned int)MEMORY[0x87F8DC];
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      v6 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10);
      v7 = v6;
    }
    while ( v6 > v5 );
    v8 = MEMORY[0x87F8E0] - 1;
    *(_QWORD *)&v77 = (unsigned int)MEMORY[0x87F8E0];
    v92 = (double)(unsigned int)MEMORY[0x87F8E0];
    do
    {
      *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
      v9 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10);
    }
    while ( v9 > v8 );
    HIWORD(v84) = -v7;
    LOWORD(v76) = v7 + 1;
    v10 = 5.497787143782138 - (double)SLODWORD(v85) * 1.570796326794897;
    v93 = 0.5235987755982988;
    HIWORD(v76) = *(_WORD *)&v94.__tail_0[2] - v7;
    aP3[0] = (MapResourceClass)v76;
    v95 = v10 + 0.7853981633974483;
    LOWORD(v76) = *(_WORD *)aP1.__tail_0 - v9;
    v11 = HIWORD(v79);
    v12 = HIWORD(v79);
    HIWORD(v79) = -v7;
    HIWORD(v76) = v12 - v9;
    v13 = (MapResourceClass)v76;
    v80 = v10 - 0.7853981633974483;
    LOWORD(v76) = *(_WORD *)aP1.__tail_0 - v7;
    v77 = v10;
    HIWORD(v76) = v11 + v7;
    v101 = v76;
    LOWORD(v76) = v9 + 1;
    HIWORD(v76) = *(_WORD *)&v94.__tail_0[2] + v9;
    aP3[1] = v13;
    v102 = v76;
    *(MapResourceClass *)a4 = aP3[LODWORD(v85)];
    if ( v10 - 0.5235987755982988 > v95 || v10 + 0.5235987755982988 < v80 )
    {
      v93 = (v95 - v80) * 0.5;
      v77 = v93 + v80;
    }
    do
    {
      do
        v14 = Random::Gaussian((double *)&g_TileSystemInit) * v93 + v77;
      while ( v14 < v80 );
    }
    while ( v14 > v95 );
    v97 = v14;
  }
  v15 = a4[1] + a4[0];
  if ( v15 <= g_MapCellHeight_Value
    || a4[0] - a4[1] >= g_MapCellHeight_Value
    || a4[1] - a4[0] >= g_MapCellHeight_Value
    || v15 > g_MapCellCount )
  {
    return 0;
  }
  v76 = 0;
  v16 = (double)(int)v81[19] * 0.07000000000000001;
  if ( v16 < 1.0 )
    v16 = 1.0;
  v17 = Math::RoundToInt(v16);
  *(_QWORD *)&v77 = v17;
  v92 = (double)v17;
  do
  {
    *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
    v18 = Math::RoundToInt((double)*(__int64 *)&v77 * v92 * 2.328306437080797e-10 + 1.0);
  }
  while ( v18 > v17 );
  *(_QWORD *)&v77 = v18;
  v93 = (double)v18;
  aP1 = (MapResourceClass)((int)Math::RoundToInt(v93) / 2);
  v19 = (double)*(int *)&aP1;
  v112 = v19 + v93;
  *(double *)aP3[0].__tail_0 = v93 - v19;
  do
  {
    *(_QWORD *)&v77 = (unsigned int)Random::State(&g_Randomizer);
    v79 = Math::RoundToInt((double)*(__int64 *)&v77 * 0.00000002118758857743526 + 35.0);
  }
  while ( v79 > 0x7D );
  v84 = a4[1];
  v20 = (MapResourceClass *)v81;
  v91 = v97;
  *(double *)aP6[0].__tail_0 = (double)a4[0] + 0.5;
  a7 = (double)a4[1] + 0.5;
  v113 = v97 + 1.570796326794897;
  v111 = v97 - 1.570796326794897;
  v21 = 1.0;
  do
  {
    v22 = Math::RoundToInt(v21);
    v23 = Math::RoundToInt(v21);
    v24 = v22;
    v25 = g_MapCellHeight_Value;
    v26 = v23 + v24;
    if ( v26 <= g_MapCellHeight_Value
      || v24 - v23 >= g_MapCellHeight_Value
      || v23 - v24 >= g_MapCellHeight_Value
      || v26 > g_MapCellCount
      || !inited )
    {
      goto LABEL_100;
    }
    v27 = v91;
    v90 = Math::ArcTan2(v91);
    v82 = Math::SinCos(v27);
    v28 = (MapResourceClass *)Math::RoundToInt(v93 + 0.5);
    v75 = 1;
    v89[0] = (MapResourceClass *)((char *)v28 - 1);
    LOBYTE(v74) = 1;
    v29 = (double)((int)&v28[-1] + 3);
    v108 = v29 * v82 * 0.5;
    v87 = *(double *)aP6[0].__tail_0 - v108;
    v110 = v29 * v90 * 0.5;
    v80 = a7 - v110;
    if ( (int)v28 > 0 )
    {
      v30 = g_MapTileArray;
      v89[0] = v28;
      while ( 1 )
      {
        v31 = Math::RoundToInt(v87);
        v32 = Math::RoundToInt(v80);
        LOWORD(v85) = v32;
        v33 = v32 + v31;
        if ( v33 > g_MapCellHeight_Value )
          break;
LABEL_50:
        v41 = v87 + v82;
        v42 = Math::RoundToInt(v87 + v82);
        if ( (unsigned int)Math::RoundToInt(v41) != v42 )
          v75 = 0;
        v43 = v80 + v90;
        v44 = Math::RoundToInt(v41);
        if ( (unsigned int)Math::RoundToInt(v41) != v44 )
          LOBYTE(v74) = 0;
        v87 = v41;
        v4 = v89[0] == (MapResourceClass *)1;
        v80 = v43;
        --v89[0];
        if ( v4 )
          goto LABEL_55;
      }
      if ( v31 - v32 < g_MapCellHeight_Value && v32 - v31 < g_MapCellHeight_Value && v33 <= g_MapCellCount )
      {
        v34 = LOWORD(v85);
        v35 = LOWORD(v85);
        LOWORD(v104) = v31;
        HIWORD(v104) = LOWORD(v85);
        LODWORD(v85) = v104;
        if ( !v30 )
          goto LABEL_42;
        if ( !v30[20 * v31 + 14 + 20 * unk_89C2DC * v35] )
        {
          v36 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v85);
          IsEmpty = Cell::IsEmpty(v36);
          v30 = g_MapTileArray;
          if ( IsEmpty )
            goto LABEL_45;
        }
        if ( v30 )
          v38 = v30[20 * SLOWORD(v85) + 14 + 20 * unk_89C2DC * SWORD1(v85)];
        else
LABEL_42:
          v38 = -1;
        if ( v38 == v81[194] )
        {
LABEL_45:
          if ( v30 )
            v30[20 * SLOWORD(v85) + 14 + 20 * unk_89C2DC * SWORD1(v85)] = v81[194];
          v99[0] = v31;
          v99[1] = v34;
          v39 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v99);
          v40 = *(Random **)&MEMORY[0xA8D63C].__pad_579C[55648];
          v39[282] = 0;
          *((_DWORD *)v39 + 14) = v40;
          v30 = g_MapTileArray;
          goto LABEL_49;
        }
        inited = 0;
      }
LABEL_49:
      v20 = (MapResourceClass *)v81;
      goto LABEL_50;
    }
LABEL_55:
    if ( fabs(v82) >= fabs(v90) )
      v75 = 0;
    else
      LOBYTE(v74) = 0;
    if ( !v114 && (v75 || (_BYTE)v74) && v83 < 1 )
    {
      v89[0] = (MapResourceClass *)abs32(Math::RoundToInt(v91 - v97));
      if ( (double)(int)v89[0] < 0.7853981633974483 && v20[196].__tail_0[0] && v76 > (int)v79 )
      {
        if ( v75 )
          v45 = v90 <= 0.0 ? 6 : 2;
        else
          v45 = v82 <= 0.0 ? 4 : 0;
        LOBYTE(v74) = 0;
        a3[0] = Math::RoundToInt(v87 - v82);
        a3[1] = Math::RoundToInt(v80 - v90);
        *(_WORD *)v94.__tail_0 = Math::RoundToInt(*(double *)aP6[0].__tail_0 - v108);
        *(_WORD *)&v94.__tail_0[2] = Math::RoundToInt(a7 - v110);
        Tiberium::CalculateSpread(v20, *(MouseClass **)&v20[194], &v94, a3, v45, (MouseClass *)&v74, aP6, &a7);
        if ( (_BYTE)v74 )
        {
          v46 = v83 + 1;
          ++*(_DWORD *)&v20[194];
          v83 = v46;
        }
      }
    }
    *(double *)aP6[0].__tail_0 = v90 + *(double *)aP6[0].__tail_0;
    a7 = a7 - v82;
    v109 = (unsigned int)Random::State(&g_Randomizer);
    if ( (double)v109 * 2.328306437080797e-10 < 0.01 && inited && !v114 && !v83 )
    {
      v114 = 1;
      v106 = 0.5235987755982988;
      v82 = v91 + 1.570796326794897;
      v90 = v91 + 0.5235987755982988;
      v85 = v91 + 2.617993877991494;
      if ( v82 - 0.5235987755982988 > v85 || v82 + 0.5235987755982988 < v90 )
      {
        v106 = (v85 - v90) * 0.5;
        v82 = v106 + v90;
      }
      do
      {
        do
        {
          v47 = Random::Gaussian((double *)&g_TileSystemInit);
          *(double *)v89 = v47 * v106 + v82;
        }
        while ( *(double *)v89 < v90 );
      }
      while ( *(double *)v89 > v85 );
      LOWORD(v84) = Math::RoundToInt(v87);
      HIWORD(v84) = Math::RoundToInt(v80);
      inited = Tiberium::ProcessGrowth((int *)v20, (int)&v84, v89[0], (char)v89[1]);
    }
    if ( v76 > 5 )
    {
      v105 = 0.3141592653589793;
      v107 = 0.0;
      v87 = v113 - v91;
      v80 = v111 - v91;
      if ( v87 < -0.3141592653589793 || v80 > 0.3141592653589793 )
      {
        v105 = (v87 - v80) * 0.5;
        v107 = v105 + v80;
      }
      do
      {
        do
        {
          v48 = Random::Gaussian((double *)&g_TileSystemInit);
          v82 = v48 * v105 + v107;
        }
        while ( v82 < v80 );
      }
      while ( v82 > v87 );
      v91 = v82 + v91;
    }
    if ( *(int *)&aP1 > 0 )
    {
      v95 = 0.5;
      v77 = 0.0;
      v87 = v112 - v93;
      v80 = *(double *)aP3[0].__tail_0 - v93;
      if ( v87 < -0.5 || v80 > 0.5 )
      {
        v95 = (v87 - v80) * 0.5;
        v77 = v95 + v80;
      }
      do
      {
        do
        {
          v49 = Random::Gaussian((double *)&g_TileSystemInit);
          v82 = v49 * v95 + v77;
        }
        while ( v82 < v80 );
      }
      while ( v82 > v87 );
      v93 = v82 + v93;
    }
    *(_QWORD *)&v92 = (unsigned int)Random::State(&g_Randomizer);
    v21 = (double)*(__int64 *)&v92 * 2.328306437080797e-10;
    ++v76;
  }
  while ( v21 >= 0.005 );
  v25 = g_MapCellHeight_Value;
LABEL_100:
  if ( v76 < 40 )
    inited = 0;
  if ( v21 < 0.005 )
  {
    v50 = Math::RoundToInt(*(double *)aP6[0].__tail_0);
    LOWORD(v85) = v50;
    v51 = Math::RoundToInt(a7);
    v52 = v51;
    v74 = v51;
    v53 = v51 + v50;
    if ( v53 > v25 && v50 - v52 < v25 && v52 - v50 < v25 && v53 <= g_MapCellCount )
    {
      if ( inited )
      {
        *(_WORD *)&aP1.__tail_0[2] = v74;
        *(_WORD *)aP1.__tail_0 = LOWORD(v85);
        if ( !TiberiumClass::Grow(v20, &aP1) )
          inited = 0;
      }
    }
  }
  if ( !v78 )
  {
    if ( inited )
    {
      inited = MapClass::InitTileData(*(_DWORD *)&v20[194], 0);
      if ( inited )
      {
        v54 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 1, 0, 0, 512, 512, 0, 0);
        v55 = (MouseClass *)v20[194];
        inited = v54;
        LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
        for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
        {
          if ( g_MapTileArray )
            v57 = *((_DWORD *)g_MapTileArray + 20 * *(__int16 *)(i + 36) + 20 * unk_89C2DC * *(__int16 *)(i + 38) + 14);
          else
            v57 = -1;
          if ( (MouseClass *)v57 == v55 )
          {
            v58 = *(Random **)(i + 56);
            if ( !v58 || v58 == (Random *)0xFFFF )
              *(_DWORD *)(i + 56) = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57408];
          }
        }
      }
    }
  }
  LOBYTE(v74) = 0;
  if ( v83 || !inited || *(_DWORD *)&v20[195] != 4 )
  {
    if ( !v78 )
      goto LABEL_138;
    goto LABEL_142;
  }
  if ( v78 )
    goto LABEL_147;
  *(_QWORD *)&v92 = (unsigned int)Random::State(&g_Randomizer);
  if ( (double)*(__int64 *)&v92 * 2.328306437080797e-10 >= 0.7 )
    goto LABEL_138;
  v59 = (MouseClass *)v20[194];
  aP3[0] = 0;
  aP3[1] = 0;
  v101 = 512;
  v102 = 512;
  if ( !RandomMap::SpreadArea(v20, v59, 0.0099999998, aP3, a4, 1)
    || (inited = TiberiumClass::Spread(*(_DWORD *)&v20[194], 6, 0, 0, 512, 512, 0, 0)) == 0 )
  {
LABEL_151:
    v67 = (MouseClass *)v20[194];
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
    for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
    {
      v79 = *(_DWORD *)(j + 36);
      v69 = (char *)g_MapTileArray + 80 * (__int16)v79 + 80 * unk_89C2DC * SHIWORD(v79);
      if ( *((MouseClass **)v69 + 14) == v67 )
      {
        *((_DWORD *)v69 + 14) = 0;
        v69[75] = 0;
        *(_DWORD *)(j + 56) = 0;
        *(_BYTE *)(j + 282) = 0;
        *(_BYTE *)(j + 283) = v20[195];
      }
    }
    if ( v83 > 0 )
    {
      v70 = *(_DWORD *)&v20[194] - 1;
      LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
      for ( k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); k; k = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
      {
        v79 = *(_DWORD *)(k + 36);
        v72 = (char *)g_MapTileArray + 80 * (__int16)v79 + 80 * unk_89C2DC * SHIWORD(v79);
        if ( *((_DWORD *)v72 + 14) == v70 )
        {
          *((_DWORD *)v72 + 14) = 0;
          v72[75] = 0;
          *(_DWORD *)(k + 56) = 0;
          *(_BYTE *)(k + 282) = 0;
          *(_BYTE *)(k + 283) = v20[195];
        }
      }
    }
    return 0;
  }
  v60 = (MouseClass *)v20[194];
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    v62 = *(_DWORD *)(m + 36);
    v79 = v62;
    if ( g_MapTileArray )
      v63 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v62 + 20 * unk_89C2DC * SHIWORD(v79) + 14);
    else
      v63 = -1;
    if ( (MouseClass *)v63 != v60 )
      *(_BYTE *)(m + 283) += 4;
  }
  LOBYTE(v74) = 1;
LABEL_138:
  if ( !inited )
  {
LABEL_142:
    v64 = v83 <= 0;
    goto LABEL_143;
  }
  v64 = v83 <= 0;
  if ( !v83 )
  {
    if ( !(_BYTE)v74 )
    {
      v65 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 2, 0, 0, 512, 512, 0, 0);
      goto LABEL_146;
    }
    goto LABEL_147;
  }
LABEL_143:
  if ( v64 )
    goto LABEL_147;
  if ( !inited )
    goto LABEL_151;
  v65 = TiberiumClass::Spread(*(_DWORD *)&v20[194], 2, 0, 0, 512, 512, 1, *(_DWORD *)&v20[195]);
LABEL_146:
  inited = v65;
LABEL_147:
  if ( !inited )
    goto LABEL_151;
  if ( (_BYTE)v74 )
    *(_DWORD *)&v20[195] += 4;
  *(_DWORD *)&v20[193] += v76;
  return 1;
}


// ==== 0x0059E740  Tiberium::CalculateSpread  this=MapResourceClass  sig=csp ====
char __thiscall Tiberium::CalculateSpread(
        _DWORD *this,
        MouseClass *aP1,
        MapResourceClass *aP2,
        __int16 *a3,
        int a5,
        MouseClass *aP5,
        MapResourceClass *aP6,
        double *a7)
{
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  MouseClass *v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // ebp
  int v15; // edx
  MouseClass *v16; // eax
  int v17; // ebp
  int v18; // edx
  int v19; // ebp
  int v20; // eax
  int v21; // edx
  MapResourceClass v22; // edx
  int v23; // eax
  int v24; // ebp
  int v25; // ebp
  __int16 v26; // dx
  int v27; // edi
  int v28; // eax
  int v29; // esi
  int v30; // ebx
  int v31; // edx
  _DWORD *v32; // eax
  MouseClass *i; // ebp
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // eax
  __int16 v39; // si
  char v40; // cl
  MouseClass *v41; // edi
  int j; // eax
  MouseClass *v43; // edx
  int v44; // ecx
  int v45; // ecx
  int k; // ebp
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // esi
  unsigned int v50; // eax
  __int16 v51; // si
  __int16 v52; // si
  char v53; // bl
  _DWORD *v54; // edi
  __int16 v55; // ax
  int v56; // edi
  MouseClass *v57; // ecx
  char *v58; // esi
  _BYTE *v59; // eax
  int v60; // esi
  _BYTE *v61; // eax
  int v62; // esi
  int v63; // edi
  int v64; // ebp
  int v65; // ebx
  MouseClass *v66; // edi
  IUnknown *v67; // eax
  _DWORD *v68; // esi
  _DWORD *v69; // eax
  __int16 v70; // dx
  int m; // esi
  _BYTE *v72; // eax
  __int16 v73; // ax
  int v74; // edx
  int v75; // ecx
  int v76; // esi
  _BYTE *v77; // eax
  int v78; // edi
  _BYTE *v79; // eax
  int v80; // esi
  int v81; // edi
  _DWORD *v82; // ebp
  int v83; // ebx
  char v84; // di
  _DWORD *v85; // ebx
  __int16 v86; // si
  MouseClass *v87; // ebp
  int v88; // esi
  int v89; // ecx
  int v90; // edx
  _BYTE *v91; // eax
  int v92; // edx
  _BYTE *v93; // eax
  int v94; // esi
  int v95; // ebx
  int v96; // ebp
  char v97; // bl
  _DWORD *v98; // ebp
  int v99; // edi
  __int16 v100; // si
  IUnknown *v101; // edx
  int v102; // edi
  int v103; // esi
  _BYTE *v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // edx
  _BYTE *v108; // eax
  int v109; // esi
  _BYTE *v110; // eax
  int v111; // esi
  int v112; // edi
  int v113; // ebp
  __int16 v114; // dx
  MouseClass *v115; // [esp+10h] [ebp-118h] BYREF
  char v116; // [esp+17h] [ebp-111h] BYREF
  __int16 v117[4]; // [esp+18h] [ebp-110h] BYREF
  int v118; // [esp+20h] [ebp-108h] BYREF
  __int16 v119[4]; // [esp+24h] [ebp-104h] BYREF
  MouseClass *v120; // [esp+2Ch] [ebp-FCh]
  MouseClass *v121; // [esp+34h] [ebp-F4h] BYREF
  char inited; // [esp+3Bh] [ebp-EDh]
  __int16 a4[2]; // [esp+3Ch] [ebp-ECh] BYREF
  _DWORD *v124; // [esp+40h] [ebp-E8h]
  __int16 v125; // [esp+48h] [ebp-E0h]
  __int16 v126; // [esp+4Ah] [ebp-DEh]
  MouseClass *v127; // [esp+50h] [ebp-D8h]
  int v128; // [esp+54h] [ebp-D4h]
  int v129; // [esp+58h] [ebp-D0h]
  int v130; // [esp+5Ch] [ebp-CCh]
  MouseClass *v131; // [esp+60h] [ebp-C8h]
  int v132; // [esp+64h] [ebp-C4h]
  MouseClass *v133; // [esp+68h] [ebp-C0h]
  int v134; // [esp+6Ch] [ebp-BCh]
  MapResourceClass aP3; // [esp+70h] [ebp-B8h] BYREF
  int v136; // [esp+74h] [ebp-B4h]
  int v137; // [esp+78h] [ebp-B0h]
  int v138; // [esp+7Ch] [ebp-ACh]
  __int64 v139; // [esp+80h] [ebp-A8h] BYREF
  __int64 v140; // [esp+88h] [ebp-A0h] BYREF
  MouseClass *v141; // [esp+98h] [ebp-90h] BYREF
  MouseClass *v142; // [esp+9Ch] [ebp-8Ch] BYREF
  MouseClass *v143; // [esp+A0h] [ebp-88h] BYREF
  MouseClass *v144; // [esp+A4h] [ebp-84h] BYREF
  MouseClass *v145; // [esp+A8h] [ebp-80h] BYREF
  MouseClass *v146; // [esp+ACh] [ebp-7Ch] BYREF
  MouseClass *v147; // [esp+B0h] [ebp-78h] BYREF
  MouseClass *v148; // [esp+B4h] [ebp-74h] BYREF
  MouseClass *v149; // [esp+B8h] [ebp-70h] BYREF
  Random *v150; // [esp+BCh] [ebp-6Ch] BYREF
  MouseClass *v151; // [esp+C0h] [ebp-68h] BYREF
  MouseClass *v152; // [esp+C4h] [ebp-64h] BYREF
  MouseClass *v153; // [esp+C8h] [ebp-60h] BYREF
  MouseClass *v154; // [esp+CCh] [ebp-5Ch] BYREF
  MouseClass *v155; // [esp+D0h] [ebp-58h] BYREF
  MouseClass *v156; // [esp+D4h] [ebp-54h] BYREF
  MouseClass *v157; // [esp+D8h] [ebp-50h] BYREF
  MouseClass *v158; // [esp+DCh] [ebp-4Ch] BYREF
  MouseClass *v159; // [esp+E0h] [ebp-48h] BYREF
  MouseClass *v160; // [esp+E4h] [ebp-44h] BYREF
  MouseClass *v161; // [esp+E8h] [ebp-40h] BYREF
  int v162; // [esp+ECh] [ebp-3Ch] BYREF
  int v163; // [esp+F0h] [ebp-38h] BYREF
  int v164; // [esp+F4h] [ebp-34h] BYREF
  MouseClass *v165; // [esp+F8h] [ebp-30h] BYREF
  MouseClass *v166; // [esp+FCh] [ebp-2Ch] BYREF
  MouseClass *v167; // [esp+100h] [ebp-28h] BYREF
  int v168; // [esp+104h] [ebp-24h] BYREF
  int v169; // [esp+108h] [ebp-20h] BYREF
  int v170; // [esp+10Ch] [ebp-1Ch] BYREF
  int v171; // [esp+110h] [ebp-18h] BYREF
  int v172; // [esp+114h] [ebp-14h] BYREF
  int v173; // [esp+118h] [ebp-10h] BYREF
  int v174; // [esp+11Ch] [ebp-Ch] BYREF
  int v175; // [esp+120h] [ebp-8h] BYREF
  int v176; // [esp+124h] [ebp-4h] BYREF

  v124 = this;
  LOBYTE(aP5->field_0) = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  LODWORD(v140) = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v127 = 0;
  v128 = 0;
  v129 = 0;
  v130 = 0;
  aP3 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  switch ( a5 )
  {
    case 0:
      v11 = (MouseClass *)*(__int16 *)aP2->__tail_0;
      v12 = *(__int16 *)&aP2->__tail_0[2];
      v13 = *a3 - (_DWORD)v11;
      v8 = v12 - 12;
      v12 -= 4;
      v9 = v13 + 5;
      LODWORD(v140) = (char *)v11 - 2;
      v133 = (MouseClass *)(v13 + 1);
      v134 = 4;
      v130 = 8;
      v129 = v13 + 1;
      aP3 = 0;
      v14 = 512 - v12;
      v132 = v12;
      v136 = v12;
      a4[0] = (__int16)v11;
      a4[1] = v12;
      v15 = *(_DWORD *)a4;
      v10 = 12;
      v131 = v11;
      v127 = v11;
      v128 = v8;
      v137 = 512;
      v138 = v14;
      goto LABEL_6;
    case 2:
      v9 = 12;
      v19 = *(__int16 *)aP2->__tail_0;
      v20 = *(__int16 *)&aP2->__tail_0[2];
      v21 = a3[1] - v20;
      LODWORD(v140) = v19 + 1;
      v8 = v20 - 2;
      v10 = v21 + 5;
      v134 = v21 + 1;
      v131 = (MouseClass *)(v19 + 1);
      v133 = (MouseClass *)4;
      v130 = v21 + 1;
      v132 = v20;
      v128 = v20;
      v129 = 8;
      aP3 = 0;
      v136 = 0;
      a4[0] = v19 + 5;
      a4[1] = v20;
      v127 = (MouseClass *)(v19 + 5);
      v137 = v19 + 4;
      v138 = 512;
      break;
    case 4:
      v10 = 12;
      v16 = (MouseClass *)*a3;
      v17 = a3[1];
      v18 = *(__int16 *)aP2->__tail_0 - (_DWORD)v16;
      v8 = v17 + 1;
      LODWORD(v140) = (char *)v16 - 2;
      v9 = v18 + 5;
      v133 = (MouseClass *)(v18 + 1);
      v129 = v18 + 1;
      v130 = 8;
      v131 = v16;
      v134 = 4;
      v127 = v16;
      v128 = v17 + 5;
      a4[0] = (__int16)v16;
      a4[1] = v17 + 1;
      v132 = v17 + 1;
      aP3 = 0;
      v136 = 0;
      v137 = 512;
      v138 = v17 + 4;
      break;
    case 6:
      v9 = 12;
      v22 = (MapResourceClass)*a3;
      v23 = a3[1];
      v24 = *(__int16 *)&aP2->__tail_0[2] - v23;
      v120 = (MouseClass *)(*(_DWORD *)&v22 - 12);
      LODWORD(v140) = *(_DWORD *)&v22 - 12;
      v10 = v24 + 5;
      *(_DWORD *)&v22 -= 4;
      v133 = (MouseClass *)4;
      v134 = v24 + 1;
      v127 = v120;
      v130 = v24 + 1;
      v129 = 8;
      v25 = 512 - *(_DWORD *)&v22;
      v136 = 0;
      v131 = (MouseClass *)v22;
      aP3 = v22;
      a4[0] = *(_WORD *)v22.__tail_0;
      a4[1] = v23;
      v15 = *(_DWORD *)a4;
      v8 = v23 - 2;
      v132 = v23;
      v128 = v23;
      v137 = v25;
      v138 = 512;
LABEL_6:
      *(_DWORD *)a4 = v15;
      break;
    default:
      break;
  }
  v26 = v8;
  *(_DWORD *)v117 = v8;
  v115 = (MouseClass *)(v8 + v10);
  if ( v8 >= v8 + v10 )
  {
    v28 = g_MapCellHeight_Value;
  }
  else
  {
    v27 = v140 + v9;
    v28 = g_MapCellHeight_Value;
    v120 = (MouseClass *)v27;
    do
    {
      v29 = v140;
      if ( (int)v140 < v27 )
      {
        v30 = v26;
        do
        {
          v31 = v30 + (__int16)v29;
          if ( v31 > v28 && (__int16)v29 - v30 < v28 && v30 - (__int16)v29 < v28 && v31 <= g_MapCellCount )
          {
            if ( !g_MapTileArray )
              return 1;
            if ( *((_DWORD *)g_MapTileArray + 20 * (__int16)v29 + 20 * unk_89C2DC * v30 + 14) )
              return 1;
            LOWORD(v121) = v29;
            HIWORD(v121) = v117[0];
            v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121);
            if ( !Cell::IsEmpty(v32) )
              return 1;
            v28 = g_MapCellHeight_Value;
          }
          v27 = (int)v120;
          ++v29;
        }
        while ( v29 < (int)v120 );
      }
      v26 = v117[0] + 1;
      ++*(_DWORD *)v117;
    }
    while ( *(int *)v117 < (int)v115 );
  }
  *(_DWORD *)v117 = v132;
  v120 = (MouseClass *)(v132 + v134);
  if ( v132 < v132 + v134 )
  {
    v115 = (MouseClass *)((char *)v133 + (_DWORD)v131);
    do
    {
      for ( i = v131; (int)i < (int)v115; i = (MouseClass *)((char *)i + 1) )
      {
        v35 = (__int16)i + v117[0];
        if ( v35 > v28 && (__int16)i - v117[0] < v28 && v117[0] - (__int16)i < v28 && v35 <= g_MapCellCount )
        {
          do
          {
            v140 = (unsigned int)Random::State(&g_Randomizer);
            v36 = Math::RoundToInt((double)v140 * 0.000000001396983862248478);
          }
          while ( v36 > 5 );
          HIWORD(v121) = v117[0];
          v37 = v36 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648];
          LOWORD(v121) = (_WORD)i;
          *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 14) = v37;
          do
          {
            v139 = (unsigned int)Random::State(&g_Randomizer);
            v38 = Math::RoundToInt((double)v139 * 9.31322574832319e-10);
          }
          while ( v38 > 3 );
          v39 = v117[0];
          LOWORD(v118) = (_WORD)i;
          HIWORD(v118) = v117[0];
          *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 282) = v38;
          if ( g_MapTileArray )
            *((_DWORD *)g_MapTileArray + 20 * (__int16)i + 20 * unk_89C2DC * v39 + 14) = aP1;
          v28 = g_MapCellHeight_Value;
        }
      }
      ++*(_DWORD *)v117;
    }
    while ( *(int *)v117 < (int)v120 );
  }
  v40 = RandomMap::SpreadArea(v124, (MouseClass *)v124[194], 0.003, &aP3, a4, 0);
  if ( v40 )
  {
    inited = MapClass::InitTileData(v124[194], 0);
    if ( inited )
    {
      inited = TiberiumClass::Spread(v124[194], 2, *(_DWORD *)&aP3, v136, v137, v138, 0, 0);
      if ( inited )
      {
        v41 = (MouseClass *)v124[194];
        LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
        for ( j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); j; j = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
        {
          v43 = *(MouseClass **)(j + 36);
          v120 = v43;
          if ( g_MapTileArray )
            v44 = *((_DWORD *)g_MapTileArray + 20 * (__int16)v43 + 20 * unk_89C2DC * SHIWORD(v120) + 14);
          else
            v44 = -1;
          if ( (MouseClass *)v44 == v41 )
            *(_BYTE *)(j + 283) += 4;
        }
        *(_DWORD *)v117 = v128;
        v120 = (MouseClass *)(v130 + v128);
        if ( v128 < v130 + v128 )
        {
          v45 = g_MapCellHeight_Value;
          v118 = (int)v127 + v129;
          do
          {
            for ( k = (int)v127; k < v118; ++k )
            {
              v47 = (__int16)k + v117[0];
              if ( v47 > v45 && (__int16)k - v117[0] < v45 && v117[0] - (__int16)k < v45 && v47 <= g_MapCellCount )
              {
                do
                {
                  v140 = (unsigned int)Random::State(&g_Randomizer);
                  v48 = Math::RoundToInt((double)v140 * 0.000000001396983862248478);
                }
                while ( v48 > 5 );
                HIWORD(v115) = v117[0];
                v49 = v48 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648];
                LOWORD(v115) = k;
                *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v115) + 14) = v49;
                do
                {
                  v139 = (unsigned int)Random::State(&g_Randomizer);
                  v50 = Math::RoundToInt((double)v139 * 9.31322574832319e-10);
                }
                while ( v50 > 3 );
                v51 = v117[0];
                LOWORD(v121) = k;
                HIWORD(v121) = v117[0];
                *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 282) = v50;
                if ( g_MapTileArray )
                  *((_DWORD *)g_MapTileArray + 20 * (__int16)k + 20 * unk_89C2DC * v51 + 14) = aP1;
                v45 = g_MapCellHeight_Value;
              }
            }
            ++*(_DWORD *)v117;
          }
          while ( *(int *)v117 < (int)v120 );
        }
        v116 = 1;
        switch ( a5 )
        {
          case 0:
            v117[1] = v132 - 2;
            v117[0] = (_WORD)v131 - 2;
            LOWORD(v120) = (_WORD)v131 - 2;
            HIWORD(v120) = v132 - 4;
            v157 = v120;
            v97 = *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v157) + 283);
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4
                                                                     * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056]);
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v164, (MouseClass *)v117);
            v98 = v124;
            GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v124[194], &v116, 0);
            v99 = v129;
            v100 = v129 + 2;
            v101 = *(IUnknown **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                + 4 * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056]
                                + 12);
            v119[0] = v129 + 2;
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = v101;
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + v129 + 2;
            v142 = v120;
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v166, (MouseClass *)&v142);
            GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v98[194], &v116, 0);
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + 1;
            v144 = v120;
            *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v144) + 14) = 0xFFFF;
            v119[0] = v100;
            HIWORD(v120) = v117[1];
            LOWORD(v120) = v117[0] + v100;
            v146 = v120;
            v102 = v99 + 2;
            v103 = 0;
            for ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v146) + 14) = 0xFFFF;
                  v103 < v102;
                  v104[283] -= 4 )
            {
              v119[0] = v103 + 1;
              LOWORD(v120) = v117[0] + v103 + 1;
              HIWORD(v120) = v117[1];
              v148 = v120;
              v104 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v148);
              ++v103;
            }
            HIWORD(v120) = v117[1] + 1;
            LOWORD(v120) = v117[0] - 1;
            v121 = v120;
            HIWORD(v120) = v117[1] + 1;
            v119[0] = v129 + 4;
            v105 = (__int16)(v117[0] - 1);
            v106 = (__int16)(v117[1] + 1);
            LOWORD(v120) = v117[0] + v129 + 4;
            v118 = (int)v120;
            v107 = g_MapCellHeight_Value;
            if ( v106 + v105 > g_MapCellHeight_Value
              && v105 - v106 < g_MapCellHeight_Value
              && v106 - v105 < g_MapCellHeight_Value
              && v106 + v105 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 14) = 0xFFFF;
              v108 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121);
              v108[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v121 + 20 * unk_89C2DC * SHIWORD(v121) + 14) = v98[194];
              v107 = g_MapCellHeight_Value;
            }
            v109 = SHIWORD(v118) + (__int16)v118;
            if ( v109 > v107
              && (__int16)v118 - SHIWORD(v118) < v107
              && SHIWORD(v118) - (__int16)v118 < v107
              && v109 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 14) = 0xFFFF;
              v110 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118);
              v110[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v98[194];
            }
            v111 = 0;
            if ( v129 > 0 )
            {
              v112 = v129;
              v113 = v129;
              do
              {
                v114 = v111 + 2;
                if ( v112 % 2 )
                {
                  v119[0] = v111 + 2;
                  LOWORD(v120) = v117[0] + v114;
                  HIWORD(v120) = v117[1] + 1;
                  v150 = (Random *)v120;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v139, (MouseClass *)&v150);
                  ++v111;
                  --v112;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056]
                                                                           + 4);
                }
                else
                {
                  v125 = v111 + 2;
                  LOWORD(v115) = v117[0] + v114;
                  HIWORD(v115) = v117[1] + 1;
                  v152 = v115;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v140, (MouseClass *)&v152);
                  v111 += 2;
                  v112 -= 2;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v97, (MapClass *)v124[194], &v116, 0);
              }
              while ( v111 < v113 );
            }
            break;
          case 2:
            v52 = v130;
            v119[0] = (__int16)v127;
            LOWORD(v115) = (_WORD)v127 + 2;
            v119[1] = v130 + v128;
            HIWORD(v115) = v130 + v128;
            v155 = v115;
            v53 = *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v155) + 283);
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4
                                                                     * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652]);
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v168, (MouseClass *)v119);
            v54 = v124;
            GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v124[194], &v116, 0);
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4
                                                                     * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652]
                                                                     + 12);
            v126 = v52 + 2;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] - (v52 + 2);
            v159 = v115;
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v163, (MouseClass *)&v159);
            GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v54[194], &v116, 0);
            v55 = v119[1];
            v126 = v52 + 3;
            v115 = (MouseClass *)(*(_DWORD *)v119 + 0x20000);
            v118 = *(_DWORD *)v119 + 0x20000;
            HIWORD(v115) = v119[1] - (v52 + 3);
            v56 = g_MapCellHeight_Value;
            v57 = (MouseClass *)(__int16)(v119[1] + 2);
            *(_DWORD *)v117 = v115;
            v58 = (char *)v57 + v119[0];
            if ( (int)v58 > g_MapCellHeight_Value
              && v119[0] - (int)v57 < g_MapCellHeight_Value
              && (int)v57 - v119[0] < g_MapCellHeight_Value
              && (int)v58 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 14) = 0xFFFF;
              v59 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118);
              v59[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v124[194];
              v56 = g_MapCellHeight_Value;
              v55 = v119[1];
            }
            v60 = v117[1] + v117[0];
            if ( v60 > v56 && v117[0] - v117[1] < v56 && v117[1] - v117[0] < v56 && v60 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117) + 14) = 0xFFFF;
              v61 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117);
              v61[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * v117[0] + 20 * unk_89C2DC * v117[1] + 14) = v124[194];
              v55 = v119[1];
            }
            v62 = 0;
            if ( v130 > 0 )
            {
              v63 = v130;
              v64 = v130;
              while ( 1 )
              {
                if ( v63 % 2 )
                {
                  v126 = v62 + 1;
                  LOWORD(v115) = v119[0];
                  HIWORD(v115) = v55 - (v62 + 1);
                  v151 = v115;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v170, (MouseClass *)&v151);
                  ++v62;
                  --v63;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652]
                                                                           + 4);
                }
                else
                {
                  HIWORD(v120) = v62 + 2;
                  LOWORD(v121) = v119[0];
                  HIWORD(v121) = v55 - (v62 + 2);
                  v156 = v121;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v172, (MouseClass *)&v156);
                  v62 += 2;
                  v63 -= 2;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v53, (MapClass *)v124[194], &v116, 0);
                if ( v62 >= v64 )
                  break;
                v55 = v119[1];
              }
            }
            break;
          case 4:
            v117[1] = v128;
            HIWORD(v115) = v128 + 2;
            v117[0] = (_WORD)v127 - 2;
            LOWORD(v115) = (_WORD)v127 - 2;
            v161 = v115;
            v84 = *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v161) + 283);
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4
                                                                     * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976]);
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v167, (MouseClass *)v117);
            v85 = v124;
            GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v124[194], &v116, 0);
            v86 = v129;
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4
                                                                     * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976]
                                                                     + 12);
            LOWORD(v120) = v129 + 2;
            LOWORD(v115) = v117[0] + v129 + 2;
            HIWORD(v115) = v117[1];
            v147 = v115;
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v175, (MouseClass *)&v147);
            GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v85[194], &v116, 0);
            HIWORD(v115) = v117[1];
            LOWORD(v120) = v86 + 4;
            LOWORD(v115) = v117[0] - 1;
            v87 = v115;
            LOWORD(v115) = v117[0] + v86 + 4;
            v121 = v87;
            v88 = g_MapCellHeight_Value;
            v118 = (int)v115;
            v89 = (__int16)(v117[0] - 1);
            v90 = v117[1] + v89;
            if ( v90 > g_MapCellHeight_Value
              && v89 - v117[1] < g_MapCellHeight_Value
              && v117[1] - v89 < g_MapCellHeight_Value
              && v90 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 14) = 0xFFFF;
              v91 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121);
              v91[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v121) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v121 + 20 * unk_89C2DC * SHIWORD(v121) + 14) = v85[194];
              v88 = g_MapCellHeight_Value;
            }
            v92 = SHIWORD(v118) + (__int16)v118;
            if ( v92 > v88
              && (__int16)v118 - SHIWORD(v118) < v88
              && SHIWORD(v118) - (__int16)v118 < v88
              && v92 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 14) = 0xFFFF;
              v93 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118);
              v93[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v85[194];
            }
            v94 = 0;
            if ( v129 > 0 )
            {
              v95 = v129;
              v96 = v129;
              do
              {
                if ( v95 % 2 )
                {
                  v125 = v94 + 2;
                  LOWORD(v115) = v94 + 2 + v117[0];
                  HIWORD(v115) = v117[1];
                  v149 = v115;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v169, (MouseClass *)&v149);
                  ++v94;
                  --v95;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976]
                                                                           + 4);
                }
                else
                {
                  v119[0] = v94 + 2;
                  LOWORD(v120) = v94 + 2 + v117[0];
                  HIWORD(v120) = v117[1];
                  v141 = v120;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v173, (MouseClass *)&v141);
                  v94 += 2;
                  v95 -= 2;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4
                                                                           * *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976]
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, v84, (MapClass *)v124[194], &v116, 0);
              }
              while ( v94 < v96 );
            }
            break;
          case 6:
            v65 = v130;
            v119[0] = (_WORD)v131 - 2;
            v119[1] = v130 + v128;
            HIWORD(v115) = v130 + v128;
            LOWORD(v115) = (_WORD)v131 - 4;
            v158 = v115;
            v66 = (MouseClass *)*((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v158) + 283);
            v67 = *(IUnknown **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * (_DWORD)dword_ABB110);
            v120 = v66;
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = v67;
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v174, (MouseClass *)v119);
            v68 = v124;
            GenerateTerrainMap(0, 0x10000, (char)v66, (MapClass *)v124[194], &v116, 0);
            *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                     + 4 * (_DWORD)dword_ABB110
                                                                     + 12);
            v126 = v65 + 2;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] - (v65 + 2);
            v160 = v115;
            Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v176, (MouseClass *)&v160);
            GenerateTerrainMap(0, 0x10000, (char)v66, (MapClass *)v68[194], &v116, 0);
            v115 = (MouseClass *)(*(_DWORD *)v119 - 0x10000);
            v162 = *(_DWORD *)v119 - 0x10000;
            v69 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v162);
            v70 = v129 + 2;
            v69[14] = 0xFFFF;
            v126 = v70;
            LOWORD(v115) = v119[0];
            HIWORD(v115) = v119[1] + v70;
            v143 = v115;
            *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v143) + 14) = 0xFFFF;
            for ( m = 0; m < v65 + 2; v72[283] -= 4 )
            {
              LOWORD(v115) = v119[0];
              HIWORD(v115) = v119[1] - m;
              v154 = v115;
              v72 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v154);
              ++m;
            }
            v73 = v119[1];
            LOWORD(v115) = v119[0] + 1;
            HIWORD(v115) = v119[1] + 2;
            v118 = (int)v115;
            v126 = v65 + 3;
            LOWORD(v115) = v119[0] + 1;
            HIWORD(v115) = v119[1] - (v65 + 3);
            *(_DWORD *)v117 = v115;
            v74 = (__int16)(v119[0] + 1);
            v75 = (__int16)(v119[1] + 2);
            v76 = g_MapCellHeight_Value;
            if ( v75 + v74 > g_MapCellHeight_Value
              && v74 - v75 < g_MapCellHeight_Value
              && v75 - v74 < g_MapCellHeight_Value
              && v75 + v74 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 14) = 0xFFFF;
              v77 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118);
              v77[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v118) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * (__int16)v118 + 20 * unk_89C2DC * SHIWORD(v118) + 14) = v124[194];
              v76 = g_MapCellHeight_Value;
              v73 = v119[1];
            }
            v78 = v117[1] + v117[0];
            if ( v78 > v76 && v117[0] - v117[1] < v76 && v117[1] - v117[0] < v76 && v78 <= g_MapCellCount )
            {
              *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117) + 14) = 0xFFFF;
              v79 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117);
              v79[283] += 4;
              *((_BYTE *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v117) + 282) = 0;
              if ( g_MapTileArray )
                *((_DWORD *)g_MapTileArray + 20 * v117[0] + 20 * unk_89C2DC * v117[1] + 14) = v124[194];
              v73 = v119[1];
            }
            v80 = 0;
            if ( v65 > 0 )
            {
              v81 = v130;
              v82 = v124;
              v83 = v130;
              while ( 1 )
              {
                if ( v81 % 2 )
                {
                  v126 = v80 + 1;
                  HIWORD(v115) = v73 - (v80 + 1);
                  LOWORD(v115) = v119[0] + 1;
                  v153 = v115;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v165, (MouseClass *)&v153);
                  ++v80;
                  --v81;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4 * (_DWORD)dword_ABB110
                                                                           + 4);
                }
                else
                {
                  HIWORD(v124) = v80 + 2;
                  HIWORD(v121) = v73 - (v80 + 2);
                  LOWORD(v121) = v119[0] + 1;
                  v145 = v121;
                  Tactical::MouseMove((int)&MEMORY[0x87F7E8], (MouseClass *)&v171, (MouseClass *)&v145);
                  v80 += 2;
                  v81 -= 2;
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3800] = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576]
                                                                           + 4 * (_DWORD)dword_ABB110
                                                                           + 8);
                }
                GenerateTerrainMap(0, 0x10000, (char)v120, (MapClass *)v82[194], &v116, 0);
                if ( v80 >= v83 )
                  break;
                v73 = v119[1];
              }
            }
            break;
          default:
            break;
        }
      }
    }
    v40 = inited;
  }
  aP3 = 0;
  v136 = 12;
  v137 = 0;
  v138 = -12;
  v131 = (MouseClass *)-12;
  v132 = 0;
  v133 = (MouseClass *)12;
  v134 = 0;
  if ( v40 )
  {
    *(double *)aP6->__tail_0 = (double)*((int *)&aP3 + a5 / 2) + *(double *)aP6->__tail_0;
    *a7 = (double)(int)*(&v131 + a5 / 2) + *a7;
  }
  LOBYTE(aP5->field_0) = v40;
  return v40;
}

