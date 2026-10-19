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
  v3 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (__int16)*v1; /*0x590301*/
  v15 = v4; /*0x590307*/
  a1 = (__int16)v4 + v6; /*0x590310*/
  if ( a1 > dword_ABED04 && v6 - (__int16)v4 < dword_ABED04 && (__int16)v4 - v6 < dword_ABED04 && a1 <= dword_ABED08 ) /*0x59033c*/
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (__int16)(v5 + v7 - 1); /*0x59034f*/
    if ( (__int16)v4 + a1 > dword_ABED04 /*0x590387*/
      && a1 - (__int16)v4 < dword_ABED04
      && (__int16)v4 - a1 < dword_ABED04
      && (__int16)v4 + a1 <= dword_ABED08 )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (__int16)v14 + (__int16)v5; /*0x5903a3*/
      if ( a1 > dword_ABED04 /*0x5903cf*/
        && (__int16)v5 - (__int16)v14 < dword_ABED04
        && (__int16)v14 - (__int16)v5 < dword_ABED04
        && a1 <= dword_ABED08 )
      {
        v8 = (__int16)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (__int16)v14 + v8; /*0x5903e6*/
        if ( a1 > dword_ABED04 /*0x590412*/
          && v8 - (__int16)v14 < dword_ABED04
          && (__int16)v14 - v8 < dword_ABED04
          && a1 <= dword_ABED08 )
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
            v11 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x590445*/
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
char __stdcall Map_PlaceCabhut(int *a1)
{
  int *v1; // ebp
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void *v7; // eax
  int Owner; // edi
  int IndexByName; // ebx
  void *v10; // eax
  int *v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = a1; /*0x5904b5*/
  v2 = a1[1]; /*0x5904bb*/
  if ( v2 >= a1[3] + v2 + 1 ) /*0x5904c7*/
    return 0; /*0x59052b*/
  while ( 1 ) /*0x5904c9*/
  {
    v3 = *v1; /*0x5904c9*/
    if ( *v1 < v1[2] + *v1 + 1 ) /*0x5904d5*/
      break; /*0x5904d5*/
LABEL_7:
    if ( ++v2 >= v1[3] + v1[1] + 1 ) /*0x590529*/
      return 0; /*0x590529*/
  }
  while ( 1 ) /*0x5904db*/
  {
    LOWORD(a1) = v3; /*0x5904db*/
    HIWORD(a1) = v2; /*0x5904e6*/
    v4 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x5904eb*/
    v5 = v4; /*0x5904f0*/
    if ( v4[17] == -1 && Cell::IsEmpty(v4) && !v5[57] ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= v1[2] + *v1 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x59053c*/
  Owner = HouseClass::FindOwner(v7); /*0x59054d*/
  IndexByName = BuildingTypeClass::FindIndexByName(stru_82BA00); /*0x590559*/
  v10 = __2_YAPAXI_Z(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = (int *)BuildingClass::Construct((int)v10, *((_DWORD *)dword_A83C6C + IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = *((__int16 *)v5 + 18) << 8; /*0x590588*/
  v14[1] = (*((__int16 *)v5 + 19) << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *v11; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v13 + 216))(v11, v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}



// ==== 0x005905D0  RandomMap::AllocateArea  this=RandomMap  sig=csp ====
char __thiscall RandomMap::AllocateArea(RandomMap *this)
{
  RandomMap *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  void *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  RandomMap *v23; // ebp
  int v24; // eax
  unsigned int v25; // eax
  void *RandomMap_field_0x10; // ecx
  int v27; // eax
  void *RandomMap_field_0x8; // edi
  int v29; // eax
  int v30; // ecx
  RandomMap *v31; // ebp
  _DWORD *v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // eax
  int v35; // edx
  float v37; // [esp+0h] [ebp-58h]
  _DWORD *v39; // [esp+18h] [ebp-40h]
  int v40; // [esp+18h] [ebp-40h]
  __int16 v41[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  void *v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  __int64 v46; // [esp+30h] [ebp-28h]
  __int64 v47; // [esp+38h] [ebp-20h]
  __int64 v48; // [esp+40h] [ebp-18h]
  __int64 v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]

  v1 = this; /*0x5905d6*/
  LOBYTE(v2) = this->RandomMap_field_0x14; /*0x5905dd*/
  if ( (_BYTE)v2 ) /*0x5905e2*/
  {
    v3 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x5905e8*/
    v4 = *(_DWORD *)(v3 + 16); /*0x5905eb*/
    LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
      v5 = g_MissionQueueFrame.briefing[339]; /*0x5905f9*/
      v6 = g_MissionQueueFrame.briefing[342]; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      *(_DWORD *)v41 = 0; /*0x59060d*/
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
          while ( *(_DWORD *)(*(_DWORD *)v8 + 8) != *(_DWORD *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            v8 += 4; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_MissionQueueFrame.briefing[339]; /*0x590636*/
              v1 = this; /*0x59063c*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_MissionQueueFrame.briefing[339]; /*0x59068e*/
          v1 = this; /*0x590694*/
          v39 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * v7); /*0x59069b*/
        }
        if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
          goto LABEL_28; /*0x590659*/
        v9 = v42; /*0x59065f*/
        v43 = (void *)v42; /*0x590665*/
        if ( v42 < v4 ) /*0x590669*/
          break; /*0x590669*/
LABEL_29:
        *(_DWORD *)v41 += 4; /*0x590701*/
        v3 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x59070d*/
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
          while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            v12 += 4; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = *(_DWORD *)(v5 + 4 * v10); /*0x5906a1*/
        }
        if ( (*(int *)(*(_DWORD *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(_BYTE *)(v13 + 20) ) /*0x5906b7*/
        {
          v14 = (void *)v39[4]; /*0x5906c5*/
          if ( *(void **)(v13 + 16) == v14 && v14 == v1->RandomMap_field_0x10 ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(v1, (int)v39, v13); /*0x5906d5*/
            v5 = g_MissionQueueFrame.briefing[339]; /*0x5906da*/
            v6 = g_MissionQueueFrame.briefing[342]; /*0x5906e0*/
          }
        }
        v3 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x5906e6*/
        v9 = (int)v43 + 1; /*0x5906ed*/
        v15 = *(_DWORD *)(v3 + 16); /*0x5906ee*/
        v43 = (void *)v9; /*0x5906f1*/
      }
      while ( v9 < v15 ); /*0x5906f7*/
LABEL_28:
      v9 = v42; /*0x5906fd*/
      goto LABEL_29; /*0x5906fd*/
    }
  }
  else
  {
    v16 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x59072b*/
    v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
      v18 = g_MissionQueueFrame.briefing[342]; /*0x59073d*/
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
          v21 = g_MissionQueueFrame.briefing[339]; /*0x590759*/
          while ( *(_DWORD *)(*(_DWORD *)v21 + 8) != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v19); /*0x5907ee*/
        }
        v23 = this; /*0x590770*/
        if ( *(_DWORD *)(v22 + 8) > (int)this->RandomMap_field_0x8 && *(void **)(v22 + 16) != this->RandomMap_field_0x10 ) /*0x590788*/
        {
          v40 = 0; /*0x59078e*/
          do /*0x5907b6*/
          {
            v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59079c*/
            LOWORD(v24) = Math::RoundToInt((double)v46 * 0.00000002351589501451605); /*0x5907ae*/
          }
          while ( (unsigned int)v24 > 0x64 ); /*0x5907b6*/
          if ( v24 >= g_MissionQueueFrame.briefing[383] ) /*0x5907be*/
          {
            v25 = 0; /*0x5907f6*/
          }
          else
          {
            do /*0x5907ea*/
            {
              v47 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5907ca*/
              LOWORD(v25) = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
            }
            while ( v25 > 2 ); /*0x5907ea*/
          }
          RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          v27 = *(_DWORD *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590809*/
            RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x590810*/
          else
            RandomMap_field_0x8 = *(void **)(v22 + 8); /*0x59080b*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590815*/
            v43 = *(void **)(v22 + 8); /*0x590823*/
          else
            v43 = this->RandomMap_field_0x8; /*0x59081a*/
          v29 = 0; /*0x59082d*/
          if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x590831*/
          {
LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            v30 = g_MissionQueueFrame.briefing[339]; /*0x590839*/
            while ( *(void **)(*(_DWORD *)v30 + 8) != RandomMap_field_0x8 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_MissionQueueFrame.briefing[342] ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v29); /*0x590960*/
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
              v49 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590893*/
              LOWORD(v34) = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            *(_DWORD *)v41 = *(_DWORD *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v41, 1) ) /*0x5908cc*/
            {
              v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += RandomMap::CheckCellPlacement(v31, v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
LABEL_66:
            HIBYTE(this->RandomMap_field_0x18) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (__thiscall **)(_DWORD *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_MissionQueueFrame.briefing[342]; /*0x590935*/
          v23 = this; /*0x59093b*/
          v17 = 0; /*0x59093f*/
        }
        v16 = *(_DWORD *)&v23->RandomMap_field_0x2[2]; /*0x590941*/
        v2 = v42 + 1; /*0x590948*/
        v35 = *(_DWORD *)(v16 + 16); /*0x590949*/
        v42 = v2; /*0x59094c*/
      }
      while ( v2 < v35 ); /*0x590952*/
    }
  }
  return v2; /*0x590723*/
}



// ==== 0x00590970  RandomMap::CheckCellPlacement  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CheckCellPlacement(RandomMap *this, __int16 *a2, void *a3, float a4)
{
  __int16 *v4; // esi
  void *v5; // edi
  int v7; // ebx
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

  v4 = a2; /*0x59097a*/
  v5 = a3; /*0x59097f*/
  v39[0] = 1; /*0x59098f*/
  v7 = RandomMap::CheckNeighborhoodCompatibility(this, a2, v39, (int)a3, a4); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  v9 = 0; /*0x5909af*/
  if ( v7 == 255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( (v7 & 0x82) != 0x82 || (v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(_WORD *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  LOWORD(a2) = v10 + 5; /*0x5909e9*/
  *(_WORD *)&v39[3] = v11 - 5; /*0x5909f5*/
  HIWORD(a2) = v11 + 1; /*0x5909fa*/
  if ( (v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(_WORD *)&v39[3]; /*0x590a01*/
  if ( (v7 & 4) != 0 ) /*0x590a09*/
    LOWORD(a2) = (_WORD)a2 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
LABEL_86:
    if ( (v7 & 0xA) != 0xA || (v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(_WORD *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    LOWORD(a2) = v12 - 1; /*0x590a4b*/
    *(_WORD *)&v39[3] = v13 - 1; /*0x590a59*/
    HIWORD(a2) = v13 + 5; /*0x590a5e*/
    if ( (v7 & 0x10) != 0 ) /*0x590a63*/
      --HIWORD(a2); /*0x590a65*/
    if ( (v7 & 1) != 0 ) /*0x590a6d*/
      --*(_WORD *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
LABEL_87:
      if ( (v7 & 0x28) != 0x28 || (v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(_WORD *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      LOWORD(a2) = v14 - 5; /*0x590ab1*/
      *(_WORD *)&v39[3] = v15 + 5; /*0x590abd*/
      HIWORD(a2) = v15 - 1; /*0x590ac2*/
      if ( (v7 & 0x40) != 0 ) /*0x590ac7*/
        LOWORD(a2) = (_WORD)a2 - 1; /*0x590ac9*/
      if ( (v7 & 4) != 0 ) /*0x590ad1*/
        --*(_WORD *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
LABEL_88:
        if ( (v7 & 0xA0) != 0xA0 || (v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(_WORD *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        LOWORD(a2) = v16 + 1; /*0x590b16*/
        *(_WORD *)&v39[3] = v17 + 1; /*0x590b24*/
        HIWORD(a2) = v17 - 5; /*0x590b29*/
        if ( (v7 & 1) != 0 ) /*0x590b2e*/
          ++HIWORD(a2); /*0x590b30*/
        if ( (v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(_WORD *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
LABEL_89:
          if ( (v7 & 0x70) != 0 || (v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(_WORD *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(_WORD *)&v39[3] = v18 - 4; /*0x590b84*/
          LOWORD(a2) = *(_WORD *)&v39[1]; /*0x590b89*/
          HIWORD(a2) = v18 + 4; /*0x590b8e*/
          if ( (v7 & 0x80u) != 0 ) /*0x590b93*/
          {
            ++*(_WORD *)&v39[3]; /*0x590b95*/
            ++HIWORD(a2); /*0x590b9a*/
          }
          if ( (v7 & 8) != 0 ) /*0x590ba2*/
          {
            --HIWORD(a2); /*0x590ba4*/
            --*(_WORD *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590bb8*/
            LOWORD(v19) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(_WORD *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590be7*/
            LOWORD(v20) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          LOWORD(a2) = v20 + (_WORD)a2; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
LABEL_90:
            if ( (v7 & 7) != 0 || (v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(_WORD *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(_WORD *)&v39[3] = v21 + 4; /*0x590c51*/
            LOWORD(a2) = *(_WORD *)&v39[1]; /*0x590c56*/
            HIWORD(a2) = v21 - 4; /*0x590c5b*/
            if ( (v7 & 0x80u) != 0 ) /*0x590c60*/
            {
              ++HIWORD(a2); /*0x590c62*/
              ++*(_WORD *)&v39[3]; /*0x590c67*/
            }
            if ( (v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(_WORD *)&v39[3]; /*0x590c71*/
              --HIWORD(a2); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590c85*/
              LOWORD(v22) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(_WORD *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590cb5*/
              LOWORD(v23) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            LOWORD(a2) = v23 - 1 + (_WORD)a2; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
LABEL_91:
              if ( (v7 & 0xC1) != 0 || (v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(_WORD *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(_WORD *)&v39[3] = v25; /*0x590d20*/
              LOWORD(a2) = v24 - 4; /*0x590d25*/
              HIWORD(a2) = v25; /*0x590d2a*/
              if ( (v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                LOWORD(a2) = (_WORD)a2 + 1; /*0x590d31*/
                ++*(_WORD *)&v39[1]; /*0x590d36*/
              }
              if ( (v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(_WORD *)&v39[1]; /*0x590d40*/
                LOWORD(a2) = (_WORD)a2 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d54*/
                LOWORD(v26) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(_WORD *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d83*/
                LOWORD(v27) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              HIWORD(a2) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
LABEL_64:
                if ( (v7 & 0x1C) == 0 && (v7 & 0x22) != 0 ) /*0x590dd0*/
                {
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(_WORD *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(_WORD *)&v39[3] = v29; /*0x590ded*/
                  LOWORD(a2) = v28 + 4; /*0x590df2*/
                  HIWORD(a2) = v29; /*0x590df7*/
                  if ( (v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(_WORD *)&v39[1]; /*0x590dfe*/
                    LOWORD(a2) = (_WORD)a2 + 1; /*0x590e03*/
                  }
                  if ( (v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    LOWORD(a2) = (_WORD)a2 - 1; /*0x590e0d*/
                    --*(_WORD *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e21*/
                    LOWORD(v30) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(_WORD *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e51*/
                    LOWORD(v31) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  HIWORD(a2) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590e89*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( a4 > 0.5 && !v9 ) /*0x590ea2*/
  {
    if ( (v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          HIWORD(a2) = v4[1] + 1,
          HIWORD(a4) = HIWORD(a2),
          LOWORD(a4) = v33,
          LOWORD(a2) = v32,
          (v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
    {
      if ( (v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            LOWORD(a2) = *v4 + 1,
            LOWORD(a4) = (_WORD)a2,
            HIWORD(a4) = v34 - 4,
            HIWORD(a2) = v34 + 4,
            (v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
      {
        if ( (v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              LOWORD(a2) = *v4 + 4,
              v36 = v4[1] - 1,
              LOWORD(a4) = v35,
              HIWORD(a2) = v36,
              HIWORD(a4) = v36,
              (v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
        {
          if ( (v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            LOWORD(a2) = v37 - 1; /*0x590f92*/
            LOWORD(a4) = v37 - 1; /*0x590f97*/
            HIWORD(a2) = v38 - 4; /*0x590f9c*/
            HIWORD(a4) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea(this, (__int16 *)&a2, (__int16 *)&a4, a3); /*0x590fbb*/
          }
        }
      }
    }
  }
  return v9; /*0x5909a3*/
}



// ==== 0x00590FD0  RandomMap::CheckNeighborhoodCompatibility  this=RandomMap  sig=csp ====
int __thiscall RandomMap::CheckNeighborhoodCompatibility(RandomMap *this, _WORD *a2, _BYTE *a3, int a4, float a5)
{
  int v6; // eax
  __int16 v7; // cx
  _WORD *v8; // ebx
  void *RandomMap_field_0x8; // edx
  int v11; // esi
  int v12; // edi
  char *v13; // ebx
  void *v14; // edx
  int v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+4h] [ebp-14h]
  _WORD *v17; // [esp+8h] [ebp-10h] BYREF
  int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]
  _WORD *v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+28h] [ebp+10h]

  LOWORD(v6) = Math::RoundToInt((15.0 - 5.0) * (1.0 - a5) + 5.0); /*0x590ff5*/
  v16 = v6; /*0x591000*/
  v7 = a2[1] - 2; /*0x591010*/
  v8 = (_WORD *)(__int16)(*a2 - 2); /*0x591014*/
  RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x59101a*/
  v15 = v7; /*0x59101d*/
  v18 = v7; /*0x591021*/
  v19 = 5; /*0x59102a*/
  v20 = 5; /*0x59102e*/
  v21 = v8; /*0x59103b*/
  v17 = v8; /*0x59103f*/
  if ( Map_Check((__int16 *)&v17, (int)RandomMap_field_0x8, a4, v6) ) /*0x591043*/
  {
    v11 = 0; /*0x59105d*/
    v22 = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      v12 = 0; /*0x59106a*/
      v13 = (char *)v8 - 5; /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v11 != 1 || v12 != 1 ) /*0x591076*/
        {
          v17 = v13; /*0x59107c*/
          v14 = this->RandomMap_field_0x8; /*0x591088*/
          v19 = 5; /*0x591094*/
          v20 = 5; /*0x591098*/
          v18 = v11 + v15 + 4 * v11 - 5; /*0x5910a0*/
          if ( Map_Check((__int16 *)&v17, (int)v14, a4, v16) ) /*0x5910a9*/
            v22 |= *(_DWORD *)&stru_82ADA8.?[8 * v11 + 35 + 4 * v12 + 4 * v11]; /*0x5910c6*/
        }
        ++v12; /*0x5910ca*/
        v13 += 5; /*0x5910cb*/
      }
      while ( v12 < 3 ); /*0x5910d1*/
      if ( ++v11 >= 3 ) /*0x5910d7*/
        break; /*0x5910d7*/
      v8 = v21; /*0x591066*/
    }
    return v22; /*0x5910d9*/
  }
  else
  {
    *a3 = 0; /*0x591052*/
    return 0; /*0x591054*/
  }
}



// ==== 0x005910F0  MapSeed::PlaceCityBlock  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBlock(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x14; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  int MapSeed_field_0x10; // ecx
  int v25; // eax
  int v26; // ebx
  _BYTE *v27; // ebp
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _BYTE *v36; // eax
  __int16 v37; // ax
  int v38; // eax
  int MapSeed_field_0x1C; // ebp
  unsigned int v40; // eax
  int MapSeed_field_0x08; // ecx
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
  __int16 MapSeed_field_0x14_high; // bp
  int i; // ebx
  __int16 v54; // cx
  __int16 v55; // cx
  _BYTE *v56; // eax
  char v57; // dl
  MapSeed v59; // [esp+14h] [ebp-58h] BYREF
  __int16 v60[4]; // [esp+3Ch] [ebp-30h]
  __int16 v61[4]; // [esp+44h] [ebp-28h]
  __int64 v62; // [esp+4Ch] [ebp-20h]
  int v63; // [esp+58h] [ebp-14h]
  int v64; // [esp+5Ch] [ebp-10h] BYREF
  int v65; // [esp+60h] [ebp-Ch]
  int v66; // [esp+64h] [ebp-8h]
  int v67; // [esp+68h] [ebp-4h]
  __int16 *v68; // [esp+70h] [ebp+4h]

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
  v64 = v10 - 5; /*0x591130*/
  v65 = v5 - 3; /*0x591134*/
  v66 = *a3 - v10 + 9; /*0x591148*/
  v67 = v8 - v9 + 11; /*0x59115d*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v64, (int)a4); /*0x591161*/
  if ( result )
  {
    v12 = a2[1]; /*0x591174*/
    v59.MapSeed_field_0x1C = a3[1] - v12; /*0x59117e*/
    v13 = *a3 - *a2; /*0x59118f*/
    v68 = (__int16 *)abs32(v59.MapSeed_field_0x1C); /*0x591191*/
    if ( (int)v68 <= v13 - 5 )
    {
      v14 = v67; /*0x5911a8*/
      v15 = v13 + 1; /*0x5911b2*/
      LODWORD(v62) = v64; /*0x5911b8*/
      MapSeed_field_0x14 = (v13 + 1) / 2 + 3; /*0x5911cb*/
      v59.MapSeed_field_0x14 = MapSeed_field_0x14; /*0x5911d0*/
      v59.MapSeed_field_0x04 = v12 + 1; /*0x5911d6*/
      v59.MapSeed_field_0x0C = v67 + v65 + 2; /*0x5911da*/
      if ( v12 + 1 < v59.MapSeed_field_0x0C ) /*0x5911de*/
      {
        v59.MapSeed_field_0x08 = v64 + MapSeed_field_0x14 + 2; /*0x5911ec*/
        do /*0x59126a*/
        {
          v17 = v62; /*0x5911f0*/
          if ( (int)v62 < v59.MapSeed_field_0x08 ) /*0x5911fa*/
          {
            do /*0x591255*/
            {
              *(_WORD *)v59.__pad_0 = v17; /*0x591205*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x59120a*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x59120f*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, (int)a4); /*0x591220*/
                v59.MapSeed_field_0x10 = (int)CellCoord::To_CellObj( /*0x591238*/
                                                (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                (__int16 *)v59.__pad_0);
                v18 = List::FindByValue((List *)a4); /*0x59123c*/
                *(_BYTE *)(v59.MapSeed_field_0x10 + 283) = *(_BYTE *)(v18 + 16); /*0x591248*/
              }
              ++v17; /*0x591252*/
            }
            while ( v17 < v59.MapSeed_field_0x08 ); /*0x591255*/
            v14 = v67; /*0x591257*/
          }
          ++v59.MapSeed_field_0x04; /*0x591266*/
        }
        while ( v59.MapSeed_field_0x04 < v59.MapSeed_field_0x0C ); /*0x59126a*/
      }
      v19 = a3[1]; /*0x59126c*/
      v20 = v19 + 1; /*0x591273*/
      v21 = v14 - v19; /*0x591276*/
      v22 = v65; /*0x591278*/
      v23 = *a3 - v15 / 2; /*0x59127e*/
      v59.MapSeed_field_0x04 = v20; /*0x591281*/
      v63 = v21 + v65 + 1; /*0x591289*/
      MapSeed_field_0x10 = v20 + v63; /*0x59128d*/
      v59.MapSeed_field_0x10 = v20 + v63; /*0x591291*/
      if ( v20 < v20 + v63 ) /*0x591295*/
      {
        v25 = v23 + MapSeed_field_0x14 + 2; /*0x591297*/
        do /*0x591309*/
        {
          v26 = v23; /*0x59129d*/
          if ( v23 < v25 ) /*0x59129f*/
          {
            do /*0x5912f8*/
            {
              *(_WORD *)v59.__pad_0 = v26; /*0x5912aa*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x5912af*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x5912b4*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, (int)a4); /*0x5912c5*/
                v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0); /*0x5912dd*/
                v27[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5912e7*/
                MapSeed_field_0x14 = v59.MapSeed_field_0x14; /*0x5912ed*/
              }
              ++v26; /*0x5912f1*/
              v25 = v23 + MapSeed_field_0x14 + 2; /*0x5912f2*/
            }
            while ( v26 < v25 ); /*0x5912f8*/
            MapSeed_field_0x10 = v59.MapSeed_field_0x10; /*0x5912fa*/
          }
          ++v59.MapSeed_field_0x04; /*0x591305*/
        }
        while ( v59.MapSeed_field_0x04 < MapSeed_field_0x10 ); /*0x591309*/
        v4 = a3; /*0x59130b*/
        v22 = v65; /*0x59130f*/
      }
      v59.MapSeed_field_0x04 = v22 + 2; /*0x59131a*/
      v28 = v64 + 4; /*0x59131e*/
      v29 = a2[1] - v22; /*0x591325*/
      LODWORD(v62) = v64 + 4; /*0x591327*/
      v30 = v22 + 2 + v29 - 1; /*0x59132c*/
      v59.MapSeed_field_0x14 = v30; /*0x591330*/
      if ( v22 + 2 < v30 ) /*0x591334*/
      {
        do /*0x5913a6*/
        {
          if ( v28 < v28 + MapSeed_field_0x14 - 2 ) /*0x59133c*/
          {
            do /*0x591391*/
            {
              *(_WORD *)v59.__pad_0 = v28; /*0x591343*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x591348*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x591351*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, this->MapSeed_field_0x08); /*0x591365*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0) + 283) = this->MapSeed_field_0x10; /*0x591380*/
              }
              ++v28; /*0x59138a*/
            }
            while ( v28 < (int)v62 + MapSeed_field_0x14 - 2 ); /*0x591391*/
            v30 = v59.MapSeed_field_0x14; /*0x591393*/
            v28 = v62; /*0x591397*/
          }
          ++v59.MapSeed_field_0x04; /*0x5913a2*/
        }
        while ( v59.MapSeed_field_0x04 < v30 ); /*0x5913a6*/
      }
      v31 = *v4 - MapSeed_field_0x14 + 2; /*0x5913bb*/
      v32 = v4[1] - v65 - 1; /*0x5913c1*/
      v59.MapSeed_field_0x04 = v65 + 2; /*0x5913c2*/
      v33 = v65 + 2 + v32; /*0x5913c6*/
      v59.MapSeed_field_0x10 = v33; /*0x5913ca*/
      if ( v65 + 2 < v33 ) /*0x5913ce*/
      {
        v34 = v31 + MapSeed_field_0x14 - 1; /*0x5913d0*/
        v59.MapSeed_field_0x14 = v34; /*0x5913d4*/
        do /*0x59143a*/
        {
          v35 = v31; /*0x5913da*/
          if ( v31 < v34 ) /*0x5913dc*/
          {
            do /*0x591429*/
            {
              *(_WORD *)v59.__pad_0 = v35; /*0x5913e7*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x5913ec*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x5913f1*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, this->MapSeed_field_0x08); /*0x591405*/
                v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0); /*0x591414*/
                v34 = v59.MapSeed_field_0x14; /*0x59141c*/
                v36[283] = this->MapSeed_field_0x10; /*0x591420*/
              }
              ++v35; /*0x591426*/
            }
            while ( v35 < v34 ); /*0x591429*/
            v33 = v59.MapSeed_field_0x10; /*0x59142b*/
          }
          ++v59.MapSeed_field_0x04; /*0x591436*/
        }
        while ( v59.MapSeed_field_0x04 < v33 ); /*0x59143a*/
        v4 = a3; /*0x59143c*/
      }
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2, a2, (int)a4, this->MapSeed_field_0x10); /*0x591455*/
      v37 = *v4 - 2; /*0x591461*/
      HIWORD(v59.MapSeed_field_0x08) = v4[1]; /*0x591465*/
      LOWORD(v59.MapSeed_field_0x08) = v37; /*0x591470*/
      v38 = this->MapSeed_field_0x10; /*0x591479*/
      v59.MapSeed_field_0x14 = v59.MapSeed_field_0x08; /*0x59147c*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &v59.MapSeed_field_0x14, (int)a4, v38); /*0x591487*/
      MapSeed_field_0x1C = v59.MapSeed_field_0x1C; /*0x59148c*/
      v59.MapSeed_field_0x14 = 0; /*0x591494*/
      if ( v59.MapSeed_field_0x1C )
      {
        do /*0x5914ce*/
        {
          v62 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5914ae*/
          LOWORD(v40) = Math::RoundToInt((double)v62 * 4.656612874161595e-10); /*0x5914c4*/
        }
        while ( v40 > 1 ); /*0x5914ce*/
        LOWORD(v59.MapSeed_field_0x20) = 0; /*0x5914d2*/
        MapSeed_field_0x08 = MapSeed_field_0x1C > 0; /*0x5914db*/
        v59.MapSeed_field_0x08 = MapSeed_field_0x08; /*0x5914e0*/
        HIWORD(v59.MapSeed_field_0x20) = (MapSeed_field_0x1C >= 0) - 1; /*0x5914ed*/
        if ( v40 == 1 ) /*0x5914f2*/
        {
          HIWORD(v59.MapSeed_field_0x14) = MapSeed_field_0x1C; /*0x5914f9*/
          LOWORD(v59.MapSeed_field_0x14) = (_WORD)v68; /*0x5914fe*/
        }
        else
        {
          LOWORD(v59.MapSeed_field_0x20) = *v4 - (_WORD)v68 - *a2 - 5; /*0x591513*/
        }
        v42 = 0; /*0x59151c*/
        *(_DWORD *)v59.__pad_0 = 0; /*0x591520*/
        if ( (int)v68 > 0 )
        {
          v59.MapSeed_field_0x04 = 0; /*0x59152a*/
          while ( 1 )
          {
            v43 = 0; /*0x59153b*/
            v44 = &stru_82ADA8.?[71]; /*0x59153d*/
            v45 = 20 * MapSeed_field_0x08 + 8564560; /*0x591542*/
            while ( 1 )
            {
              v59.MapSeed_field_0x0C = MapSeed_field_0x08 ? v42 : v59.MapSeed_field_0x04;
              v46 = *a2 + 3; /*0x591568*/
              v60[1] = a2[1]; /*0x59156c*/
              v60[0] = v46; /*0x591571*/
              v61[0] = v42 + v46; /*0x591582*/
              v61[1] = v43 + v60[1]; /*0x59158b*/
              LOWORD(v59.MapSeed_field_0x10) = v42 + v46 + LOWORD(v59.MapSeed_field_0x20); /*0x59159f*/
              WORD1(v62) = HIWORD(v59.MapSeed_field_0x20) + v43 + v60[1]; /*0x5915a6*/
              HIWORD(v59.MapSeed_field_0x10) = LOWORD(v59.MapSeed_field_0x0C) + WORD1(v62); /*0x5915ba*/
              v59.MapSeed_field_0x1C = v59.MapSeed_field_0x10; /*0x5915c7*/
              v47 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v59.MapSeed_field_0x1C); /*0x5915cc*/
              v48 = *v44; /*0x5915d5*/
              v44 += 4; /*0x5915d7*/
              v45 += 4; /*0x5915da*/
              v47[283] = LOBYTE(this->MapSeed_field_0x10) + v48 - 4; /*0x5915e3*/
              v49 = *(_BYTE *)(v45 - 4); /*0x5915e9*/
              v47[284] = v49; /*0x5915ec*/
              v50 = g_CellTileLookup; /*0x5915f2*/
              ++v43; /*0x5915fe*/
              v47[282] = 0; /*0x5915ff*/
              *((_DWORD *)v47 + 14) = v49 + v50 - 1; /*0x591610*/
              v42 = *(_DWORD *)v59.__pad_0; /*0x591613*/
              if ( (int)v44 >= (int)&stru_82ADA8.?[91] ) /*0x591617*/
                break; /*0x591617*/
              MapSeed_field_0x08 = v59.MapSeed_field_0x08; /*0x59154b*/
            }
            ++*(_DWORD *)v59.__pad_0; /*0x591629*/
            --v59.MapSeed_field_0x04; /*0x59162d*/
            if ( *(int *)v59.__pad_0 >= (int)v68 ) /*0x591631*/
              break; /*0x591631*/
            v42 = *(_DWORD *)v59.__pad_0; /*0x591530*/
            MapSeed_field_0x08 = v59.MapSeed_field_0x08; /*0x591534*/
          }
          v4 = a3; /*0x591637*/
        }
      }
      v51 = 0; /*0x591649*/
      if ( *v4 - *a2 - (int)v68 - 5 > 0 ) /*0x591650*/
      {
        MapSeed_field_0x14_high = HIWORD(v59.MapSeed_field_0x14); /*0x591656*/
        do /*0x59172e*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59165a*/
          {
            v54 = *a2 + 3; /*0x591663*/
            v61[1] = a2[1]; /*0x591667*/
            v61[0] = v54; /*0x59166c*/
            v60[0] = v51 + v54; /*0x59167d*/
            v60[1] = i + v61[1]; /*0x591686*/
            v55 = v51 + v54 + LOWORD(v59.MapSeed_field_0x14); /*0x59168f*/
            LOWORD(v59.MapSeed_field_0x10) = v60[0] + LOWORD(v59.MapSeed_field_0x14); /*0x591696*/
            HIWORD(v59.MapSeed_field_0x10) = i + v61[1] + MapSeed_field_0x14_high; /*0x59169e*/
            v59.MapSeed_field_0x1C = v59.MapSeed_field_0x10; /*0x5916a7*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x5916b3*/
              *(_DWORD *)(80 * (v55 + g_MapCellWidth * (__int16)(i + v61[1] + MapSeed_field_0x14_high)) /*0x5916ce*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v59.MapSeed_field_0x1C); /*0x5916dc*/
            v57 = this->MapSeed_field_0x10; /*0x5916e5*/
            v56[284] = 4; /*0x5916e8*/
            v56[283] = v57 - i - 1; /*0x5916f3*/
            *((_DWORD *)v56 + 14) = g_CellTileLookup + 3; /*0x591706*/
            v56[282] = 0; /*0x591709*/
          }
          ++v51; /*0x591726*/
        }
        while ( v51 < *a3 - *a2 - (int)v68 - 5 ); /*0x59172e*/
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
char __thiscall PlaceMapSeedCityArea(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x10; // edx
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
  int MapSeed_field_0x08; // ebp
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
  int uniqueId; // edx
  __int16 *v43; // ebp
  int MapSeed_field_0x0C; // esi
  int v45; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  __int16 v48; // ax
  __int16 v49; // bp
  char *v50; // esi
  int v51; // ebx
  bool v52; // zf
  __int16 MapSeed_field_0x04; // cx
  __int16 v54; // dx
  _BYTE *v55; // eax
  char v56; // dl
  unsigned __int8 v57; // cl
  int v58; // edx
  bool v59; // cc
  int v60; // edx
  __int16 MapSeed_field_0x20_high; // bp
  __int16 v62; // si
  __int16 v63; // ax
  __int16 v64; // ax
  _BYTE *v65; // eax
  char v66; // dl
  int v67; // edx
  MapSeed v69; // [esp+14h] [ebp-58h] BYREF
  __int16 v70; // [esp+3Ch] [ebp-30h]
  __int16 v71; // [esp+3Eh] [ebp-2Eh]
  __int16 v72[4]; // [esp+44h] [ebp-28h]
  __int64 v73; // [esp+4Ch] [ebp-20h]
  int v74; // [esp+5Ch] [ebp-10h] BYREF
  int v75; // [esp+60h] [ebp-Ch]
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  __int16 *v78; // [esp+70h] [ebp+4h]

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
    v78 = (__int16 *)abs32(v69.MapSeed_field_0x0C); /*0x5917e1*/
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
              *(_WORD *)v69.__pad_0 = v19; /*0x59182f*/
              *(_WORD *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x591834*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x591839*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)a4); /*0x59184a*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x591862*/
                v20[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x59186c*/
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
              *(_WORD *)v69.__pad_0 = v24; /*0x5918c2*/
              *(_WORD *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x5918c7*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x5918cc*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)a4); /*0x5918dd*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x5918f5*/
                v25[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5918ff*/
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
              *(_WORD *)v69.__pad_0 = v31; /*0x591962*/
              *(_WORD *)&v69.__pad_0[2] = MapSeed_field_0x08; /*0x591967*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x59196c*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)this->?); /*0x591980*/
                v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x59198f*/
                MapSeed_field_0x08 = v69.MapSeed_field_0x08; /*0x591997*/
                v32[283] = this->?; /*0x59199b*/
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
              *(_WORD *)v69.__pad_0 = v39; /*0x5919f6*/
              *(_WORD *)&v69.__pad_0[2] = v38; /*0x5919fb*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x591a00*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)this->?); /*0x591a14*/
                v40 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x591a23*/
                v33 = v73; /*0x591a2b*/
                v40[283] = this->?; /*0x591a2f*/
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
      uniqueId = this->?; /*0x591a5f*/
      HIWORD(v69.MapSeed_field_0x08) = v41; /*0x591a62*/
      v69.MapSeed_field_0x10 = v69.MapSeed_field_0x08; /*0x591a70*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &v69.MapSeed_field_0x10, (int)a4, uniqueId); /*0x591a7d*/
      v43 = a3; /*0x591a8a*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, a3, (int)a4, this->?); /*0x591a95*/
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
        v69.MapSeed_field_0x18 = (unsigned __int16)((MapSeed_field_0x0C >= 0) - 1); /*0x591aee*/
        if ( v46 == 1 ) /*0x591af8*/
        {
          LOWORD(v69.MapSeed_field_0x20) = MapSeed_field_0x0C; /*0x591afe*/
          HIWORD(v69.MapSeed_field_0x20) = -(__int16)v78; /*0x591b05*/
        }
        else
        {
          v48 = a2[1]; /*0x591b0c*/
          LOWORD(v69.MapSeed_field_0x18) = (MapSeed_field_0x0C >= 0) - 1; /*0x591b10*/
          v72[1] = v48 - (_WORD)v78 - a3[1] - 5; /*0x591b21*/
          HIWORD(v69.MapSeed_field_0x18) = -v72[1]; /*0x591b2c*/
        }
        *(_DWORD *)v69.__pad_0 = 0; /*0x591b35*/
        if ( (int)v78 > 0 ) /*0x591b3b*/
        {
          v69.MapSeed_field_0x04 = 0; /*0x591b41*/
          while ( 1 ) /*0x591b51*/
          {
            v49 = 0; /*0x591b51*/
            v50 = &stru_82ADA8.?[131]; /*0x591b56*/
            WORD1(v73) = -*(_WORD *)v69.__pad_0; /*0x591b5d*/
            v51 = 20 * v47 + 8564620; /*0x591b62*/
            while ( 1 ) /*0x591b6f*/
            {
              v52 = v47 == 0; /*0x591b6f*/
              MapSeed_field_0x04 = *(_WORD *)v69.__pad_0; /*0x591b71*/
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
              v55 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v69.MapSeed_field_0x14); /*0x591bea*/
              v56 = *v50; /*0x591bf3*/
              v50 += 4; /*0x591bf5*/
              v51 += 4; /*0x591bf8*/
              v55[283] = LOBYTE(this->?) + v56 - 4; /*0x591c01*/
              v57 = *(_BYTE *)(v51 - 4); /*0x591c07*/
              v55[284] = v57; /*0x591c0a*/
              v58 = g_CellTileLookup; /*0x591c10*/
              ++v49; /*0x591c1c*/
              v55[282] = 0; /*0x591c23*/
              *((_DWORD *)v55 + 14) = v57 + v58 - 1; /*0x591c2e*/
              if ( (int)v50 >= (int)&stru_82ADA8.?[151] ) /*0x591c31*/
                break; /*0x591c31*/
              v47 = v69.MapSeed_field_0x08; /*0x591b6b*/
            }
            v59 = ++*(_DWORD *)v69.__pad_0 < (int)v78; /*0x591c45*/
            --v69.MapSeed_field_0x04; /*0x591c4b*/
            if ( !v59 ) /*0x591c4f*/
              break; /*0x591c4f*/
            v47 = v69.MapSeed_field_0x08; /*0x591b47*/
          }
          v43 = a3; /*0x591c55*/
          v45 = 0; /*0x591c59*/
        }
      }
      v60 = a2[1] - v43[1] - (_DWORD)v78; /*0x591c69*/
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
              *(_DWORD *)(80 * ((__int16)(v45 + v72[0] + LOWORD(v69.MapSeed_field_0x20)) + g_MapCellWidth * v64) /*0x591d02*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v65 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v69.MapSeed_field_0x14); /*0x591d10*/
            v66 = this->?; /*0x591d19*/
            v65[284] = 3; /*0x591d1c*/
            v65[283] = v66 - v45++ - 1; /*0x591d27*/
            *((_DWORD *)v65 + 14) = g_CellTileLookup + 2; /*0x591d3a*/
            v65[282] = 0; /*0x591d3d*/
          }
          while ( v45 < 4 ); /*0x591d44*/
          v67 = a2[1] - a3[1] - (_DWORD)v78 - 5; /*0x591d63*/
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



// ==== 0x00591D80  MapSeed::PlaceCityBuildings  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBuildings(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x14; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  int MapSeed_field_0x10; // edx
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
  int MapSeed_field_0x1C; // esi
  unsigned int v43; // eax
  int MapSeed_field_0x08; // ecx
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
  __int16 MapSeed_field_0x14_high; // bp
  int i; // ebx
  __int16 v57; // ax
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // dl
  MapSeed v63; // [esp+14h] [ebp-60h] BYREF
  __int16 v64[4]; // [esp+3Ch] [ebp-38h]
  __int16 v65; // [esp+44h] [ebp-30h]
  __int16 v66; // [esp+46h] [ebp-2Eh]
  int v67; // [esp+4Eh] [ebp-26h]
  __int64 v68; // [esp+54h] [ebp-20h]
  int v69; // [esp+64h] [ebp-10h] BYREF
  int v70; // [esp+68h] [ebp-Ch]
  int v71; // [esp+6Ch] [ebp-8h]
  int v72; // [esp+70h] [ebp-4h]
  __int16 *v73; // [esp+7Ch] [ebp+8h]

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
  v69 = v10 - 4; /*0x591dc0*/
  v70 = v8 - 7; /*0x591dc4*/
  v71 = *a2 - v10 + 8; /*0x591dd8*/
  v72 = v7 - v9 + 11; /*0x591df0*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v69, (int)a4); /*0x591df4*/
  if ( result )
  {
    v12 = a3[1]; /*0x591e07*/
    v63.MapSeed_field_0x1C = v12 - a2[1]; /*0x591e13*/
    v13 = *a2 - *a3; /*0x591e24*/
    v73 = (__int16 *)abs32(v63.MapSeed_field_0x1C); /*0x591e26*/
    if ( (int)v73 <= v13 - 5 )
    {
      v14 = v69; /*0x591e3e*/
      LODWORD(v68) = v69; /*0x591e45*/
      v15 = v13 + 1; /*0x591e49*/
      v16 = v70; /*0x591e4b*/
      v63.MapSeed_field_0x04 = v70; /*0x591e51*/
      MapSeed_field_0x14 = v15 / 2 + 3; /*0x591e59*/
      v63.MapSeed_field_0x14 = MapSeed_field_0x14; /*0x591e5e*/
      v63.MapSeed_field_0x0C = v12; /*0x591e62*/
      if ( v70 < v12 ) /*0x591e66*/
      {
        v63.MapSeed_field_0x08 = v69 + MapSeed_field_0x14 + 2; /*0x591e70*/
        do /*0x591ef2*/
        {
          if ( v14 < v63.MapSeed_field_0x08 ) /*0x591e78*/
          {
            do /*0x591ed9*/
            {
              *(_WORD *)v63.__pad_0 = v14; /*0x591e83*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591e88*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591e8d*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, (int)a4); /*0x591ea1*/
                v63.MapSeed_field_0x10 = (int)CellCoord::To_CellObj( /*0x591ebc*/
                                                (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                (__int16 *)v63.__pad_0);
                v18 = List::FindByValue((List *)a4); /*0x591ec0*/
                *(_BYTE *)(v63.MapSeed_field_0x10 + 283) = *(_BYTE *)(v18 + 16); /*0x591ecc*/
              }
              ++v14; /*0x591ed6*/
            }
            while ( v14 < v63.MapSeed_field_0x08 ); /*0x591ed9*/
            v16 = v70; /*0x591edb*/
            v14 = v68; /*0x591edf*/
          }
          ++v63.MapSeed_field_0x04; /*0x591eee*/
        }
        while ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x0C ); /*0x591ef2*/
      }
      v19 = a2[1] - v16; /*0x591efb*/
      v20 = *a2 - MapSeed_field_0x14 + 2; /*0x591eff*/
      v63.MapSeed_field_0x04 = v16; /*0x591f02*/
      MapSeed_field_0x10 = v19 + v16; /*0x591f06*/
      v63.MapSeed_field_0x10 = v19 + v16; /*0x591f0b*/
      if ( v16 < v19 + v16 ) /*0x591f0f*/
      {
        v22 = v20 + MapSeed_field_0x14 + 3; /*0x591f15*/
        do /*0x591f91*/
        {
          v23 = v20; /*0x591f1b*/
          if ( v20 < v22 ) /*0x591f1d*/
          {
            do /*0x591f7c*/
            {
              *(_WORD *)v63.__pad_0 = v23; /*0x591f28*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591f2d*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591f32*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, (int)a4); /*0x591f46*/
                v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x591f61*/
                v24[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x591f6b*/
                MapSeed_field_0x14 = v63.MapSeed_field_0x14; /*0x591f71*/
              }
              ++v23; /*0x591f75*/
              v22 = v20 + MapSeed_field_0x14 + 3; /*0x591f76*/
            }
            while ( v23 < v22 ); /*0x591f7c*/
            v16 = v70; /*0x591f7e*/
            MapSeed_field_0x10 = v63.MapSeed_field_0x10; /*0x591f82*/
          }
          ++v63.MapSeed_field_0x04; /*0x591f8d*/
        }
        while ( v63.MapSeed_field_0x04 < MapSeed_field_0x10 ); /*0x591f91*/
        v4 = a2; /*0x591f93*/
      }
      v25 = v72; /*0x591f9a*/
      LODWORD(v68) = *a3; /*0x591f9e*/
      v63.MapSeed_field_0x04 = a3[1]; /*0x591fa8*/
      v63.MapSeed_field_0x14 = v72 + v16 - 2; /*0x591fb6*/
      if ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x14 ) /*0x591fba*/
      {
        v26 = v68; /*0x591fbc*/
        v27 = v68 + MapSeed_field_0x14 - 2; /*0x591fc0*/
        do /*0x592030*/
        {
          v28 = v26; /*0x591fc6*/
          if ( v26 < v27 ) /*0x591fc8*/
          {
            do /*0x592019*/
            {
              *(_WORD *)v63.__pad_0 = v28; /*0x591fd3*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591fd8*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591fdd*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, this->MapSeed_field_0x08); /*0x591ff1*/
                v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x592000*/
                v26 = v68; /*0x592008*/
                v29[283] = this->MapSeed_field_0x10; /*0x59200c*/
              }
              ++v28; /*0x592012*/
              v27 = v26 + MapSeed_field_0x14 - 2; /*0x592013*/
            }
            while ( v28 < v27 ); /*0x592019*/
            v25 = v72; /*0x59201b*/
            v16 = v70; /*0x59201f*/
          }
          ++v63.MapSeed_field_0x04; /*0x59202c*/
        }
        while ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x14 ); /*0x592030*/
        v4 = a2; /*0x592032*/
      }
      v30 = v4[1]; /*0x592036*/
      v31 = *v4 - MapSeed_field_0x14 + 2; /*0x592041*/
      v63.MapSeed_field_0x04 = v30; /*0x592044*/
      v32 = v25 + v16 - 2; /*0x59204c*/
      v63.MapSeed_field_0x10 = v32; /*0x592050*/
      if ( v30 < v32 ) /*0x592054*/
      {
        v33 = v31 + MapSeed_field_0x14 - 1; /*0x592056*/
        v63.MapSeed_field_0x14 = v33; /*0x59205a*/
        do /*0x5920c0*/
        {
          v34 = v31; /*0x592060*/
          if ( v31 < v33 ) /*0x592062*/
          {
            do /*0x5920af*/
            {
              *(_WORD *)v63.__pad_0 = v34; /*0x59206d*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x592072*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x592077*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, this->MapSeed_field_0x08); /*0x59208b*/
                v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x59209a*/
                v33 = v63.MapSeed_field_0x14; /*0x5920a2*/
                v35[283] = this->MapSeed_field_0x10; /*0x5920a6*/
              }
              ++v34; /*0x5920ac*/
            }
            while ( v34 < v33 ); /*0x5920af*/
            v32 = v63.MapSeed_field_0x10; /*0x5920b1*/
          }
          ++v63.MapSeed_field_0x04; /*0x5920bc*/
        }
        while ( v63.MapSeed_field_0x04 < v32 ); /*0x5920c0*/
        v4 = a2; /*0x5920c2*/
      }
      v36 = a3[1] - 3; /*0x5920d8*/
      LOWORD(v63.MapSeed_field_0x08) = *a3; /*0x5920dc*/
      v37 = this->MapSeed_field_0x10; /*0x5920e1*/
      HIWORD(v63.MapSeed_field_0x08) = v36; /*0x5920e4*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x5920f2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &v63.MapSeed_field_0x14, (int)a4, v37); /*0x5920ff*/
      v38 = v4[1] - 3; /*0x59210f*/
      LOWORD(v63.MapSeed_field_0x08) = *v4 - 2; /*0x592113*/
      v39 = this->MapSeed_field_0x10; /*0x592118*/
      HIWORD(v63.MapSeed_field_0x08) = v38; /*0x59211b*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x592124*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 5, &v63.MapSeed_field_0x14, (int)a4, v39); /*0x592136*/
      v40 = v4[1] - 1; /*0x592144*/
      LOWORD(v63.MapSeed_field_0x08) = *v4 - 1; /*0x592146*/
      v41 = this->MapSeed_field_0x10; /*0x59214b*/
      HIWORD(v63.MapSeed_field_0x08) = v40; /*0x59214e*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x592157*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 6, &v63.MapSeed_field_0x14, (int)a4, v41); /*0x592169*/
      MapSeed_field_0x1C = v63.MapSeed_field_0x1C; /*0x59216e*/
      v63.MapSeed_field_0x14 = 0; /*0x592176*/
      if ( v63.MapSeed_field_0x1C )
      {
        do /*0x5921b0*/
        {
          v68 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592190*/
          LOWORD(v43) = Math::RoundToInt((double)v68 * 4.656612874161595e-10); /*0x5921a6*/
        }
        while ( v43 > 1 ); /*0x5921b0*/
        LOWORD(v63.MapSeed_field_0x20) = 0; /*0x5921b4*/
        MapSeed_field_0x08 = MapSeed_field_0x1C > 0; /*0x5921bd*/
        v63.MapSeed_field_0x08 = MapSeed_field_0x08; /*0x5921c2*/
        HIWORD(v63.MapSeed_field_0x20) = MapSeed_field_0x1C < 0; /*0x5921ce*/
        if ( v43 == 1 ) /*0x5921d3*/
        {
          LOWORD(v63.MapSeed_field_0x14) = (_WORD)v73; /*0x5921dc*/
          HIWORD(v63.MapSeed_field_0x14) = -(__int16)MapSeed_field_0x1C; /*0x5921e1*/
        }
        else
        {
          LOWORD(v63.MapSeed_field_0x20) = *v4 - (_WORD)v73 - *a3 - 5; /*0x5921f6*/
        }
        v45 = 0; /*0x5921ff*/
        *(_DWORD *)v63.__pad_0 = 0; /*0x592203*/
        if ( (int)v73 > 0 )
        {
          v63.MapSeed_field_0x04 = 0; /*0x59220d*/
          while ( 1 )
          {
            v46 = 0; /*0x59221e*/
            v47 = &stru_82ADA8.?[20]; /*0x592220*/
            v48 = 20 * MapSeed_field_0x08 + 8564680; /*0x592225*/
            while ( 1 )
            {
              v63.MapSeed_field_0x0C = MapSeed_field_0x08 ? v63.MapSeed_field_0x04 : v45;
              v49 = *a3; /*0x592244*/
              LOWORD(v67) = -v46; /*0x59224b*/
              v64[1] = a3[1]; /*0x592258*/
              v64[0] = v49 + 3; /*0x592261*/
              v65 = v45 + v49 + 3; /*0x592272*/
              v66 = v64[1] - v46; /*0x592277*/
              LOWORD(v63.MapSeed_field_0x10) = v65 + LOWORD(v63.MapSeed_field_0x20); /*0x59228f*/
              WORD1(v68) = HIWORD(v63.MapSeed_field_0x20) + v64[1] - v46; /*0x592296*/
              HIWORD(v63.MapSeed_field_0x10) = LOWORD(v63.MapSeed_field_0x0C) + WORD1(v68); /*0x5922aa*/
              v63.MapSeed_field_0x1C = v63.MapSeed_field_0x10; /*0x5922b7*/
              v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v63.MapSeed_field_0x1C); /*0x5922bc*/
              v51 = *v47; /*0x5922c5*/
              v47 += 4; /*0x5922c7*/
              v48 += 4; /*0x5922ca*/
              v50[283] = LOBYTE(this->MapSeed_field_0x10) + v51 - 4; /*0x5922d3*/
              v52 = *(_BYTE *)(v48 - 4); /*0x5922d9*/
              v50[284] = v52; /*0x5922dc*/
              v53 = g_CellTileLookup; /*0x5922e2*/
              ++v46; /*0x5922ee*/
              v50[282] = 0; /*0x5922ef*/
              *((_DWORD *)v50 + 14) = v52 + v53 - 1; /*0x592300*/
              v45 = *(_DWORD *)v63.__pad_0; /*0x592303*/
              if ( (int)v47 >= (int)&stru_82ADA8.?[13] ) /*0x592307*/
                break; /*0x592307*/
              MapSeed_field_0x08 = v63.MapSeed_field_0x08; /*0x59222e*/
            }
            ++*(_DWORD *)v63.__pad_0; /*0x592319*/
            --v63.MapSeed_field_0x04; /*0x59231d*/
            if ( *(int *)v63.__pad_0 >= (int)v73 ) /*0x592321*/
              break; /*0x592321*/
            v45 = *(_DWORD *)v63.__pad_0; /*0x592213*/
            MapSeed_field_0x08 = v63.MapSeed_field_0x08; /*0x592217*/
          }
          v4 = a2; /*0x592327*/
        }
      }
      v54 = 0; /*0x592339*/
      if ( *v4 - *a3 - (int)v73 - 5 > 0 ) /*0x592340*/
      {
        MapSeed_field_0x14_high = HIWORD(v63.MapSeed_field_0x14); /*0x592346*/
        do /*0x59242a*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59234a*/
          {
            v57 = a3[1]; /*0x59234f*/
            v58 = *a3 + 3; /*0x592355*/
            WORD1(v68) = -(__int16)i; /*0x59235b*/
            v65 = v58; /*0x592360*/
            v66 = v57; /*0x592365*/
            v64[0] = v54 + v58; /*0x59237a*/
            v64[1] = v57 - i; /*0x59237f*/
            v59 = MapSeed_field_0x14_high + v57 - i; /*0x592392*/
            LOWORD(v63.MapSeed_field_0x10) = LOWORD(v63.MapSeed_field_0x14) + v54 + v58; /*0x592394*/
            HIWORD(v63.MapSeed_field_0x10) = MapSeed_field_0x14_high + v64[1]; /*0x592399*/
            v63.MapSeed_field_0x1C = v63.MapSeed_field_0x10; /*0x5923a2*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x5923ae*/
              *(_DWORD *)(80 * ((__int16)(LOWORD(v63.MapSeed_field_0x14) + v54 + v58) + g_MapCellWidth * v59) /*0x5923cc*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v60 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v63.MapSeed_field_0x1C); /*0x5923da*/
            v61 = this->MapSeed_field_0x10; /*0x5923e3*/
            v60[284] = 2; /*0x5923e6*/
            v60[283] = v61 - i - 1; /*0x5923f1*/
            *((_DWORD *)v60 + 14) = g_CellTileLookup + 1; /*0x592402*/
            v60[282] = 0; /*0x592405*/
          }
          ++v54; /*0x592422*/
        }
        while ( v54 < *a2 - *a3 - (int)v73 - 5 ); /*0x59242a*/
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
char __thiscall RandomMap::CheckPlacementArea(RandomMap *this, __int16 *a2, __int16 *a3, void *a4)
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
  int v14; // ecx
  int v15; // esi
  int v16; // kr00_4
  int v17; // ebx
  int MapSeed_field_0x08; // ebp
  int v19; // esi
  _BYTE *v20; // ebp
  int v21; // edx
  int MapSeed_field_0x04; // ebp
  int v23; // esi
  int v24; // esi
  _BYTE *v25; // ebp
  int MapSeed_field_0x10; // ebp
  int v27; // edx
  int v28; // esi
  _BYTE *v29; // eax
  __int16 *v30; // ebp
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // ebx
  __int16 v35; // dx
  void *RandomMap_field_0x10; // edx
  __int16 v37; // dx
  void *v38; // ecx
  __int16 v39; // dx
  void *v40; // ecx
  int MapSeed_field_0x14; // esi
  int v42; // ebx
  unsigned int v43; // eax
  int v44; // ecx
  __int16 v45; // bp
  int *v46; // esi
  int v47; // ebx
  bool v48; // zf
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // ax
  _BYTE *v52; // eax
  char v53; // dl
  unsigned __int8 v54; // cl
  int v55; // edx
  bool v56; // cc
  int v57; // esi
  __int16 MapSeed_field_0x1C_high; // bp
  __int16 v59; // dx
  __int16 v60; // ax
  __int16 v61; // ax
  _BYTE *v62; // eax
  char v63; // dl
  char v64; // dl
  MapSeed v66; // [esp+14h] [ebp-54h] BYREF
  int v67; // [esp+38h] [ebp-30h]
  __int16 v68; // [esp+40h] [ebp-28h]
  __int16 v69; // [esp+42h] [ebp-26h]
  __int64 v70; // [esp+48h] [ebp-20h]
  int v71; // [esp+50h] [ebp-18h]
  int v72; // [esp+58h] [ebp-10h] BYREF
  int v73; // [esp+5Ch] [ebp-Ch]
  int v74; // [esp+60h] [ebp-8h]
  int v75; // [esp+64h] [ebp-4h]
  __int16 *v76; // [esp+6Ch] [ebp+4h]

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
  v72 = v5 - 7; /*0x592478*/
  v8 = a2[1]; /*0x59247c*/
  v73 = v8 - 4; /*0x592483*/
  v75 = a3[1] - v8 + 9; /*0x59249f*/
  v74 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v72, (int)a4); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    v10 = *a2; /*0x5924c0*/
    v11 = a3[1]; /*0x5924c8*/
    v66.MapSeed_field_0x14 = *a3 - v10; /*0x5924cc*/
    v12 = v11 - a2[1]; /*0x5924d9*/
    v76 = (__int16 *)abs32(v66.MapSeed_field_0x14); /*0x5924db*/
    if ( (int)v76 <= v12 - 5 ) /*0x5924e4*/
    {
      v13 = v12 + 1; /*0x5924f2*/
      v14 = v72; /*0x5924f5*/
      v15 = v10 - v72; /*0x5924fc*/
      v16 = v13; /*0x5924fe*/
      v17 = v13 / 2 + 2; /*0x592506*/
      MapSeed_field_0x08 = v73; /*0x592509*/
      LODWORD(v70) = v72; /*0x59250b*/
      v66.MapSeed_field_0x08 = v73; /*0x59250f*/
      v66.MapSeed_field_0x10 = v17 + v73 + 2; /*0x592519*/
      if ( v73 < v66.MapSeed_field_0x10 ) /*0x59251d*/
      {
        v66.MapSeed_field_0x04 = v72 + v15; /*0x592521*/
        do /*0x592596*/
        {
          v19 = v70; /*0x592525*/
          if ( (int)v70 < v66.MapSeed_field_0x04 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              *(_WORD *)v66.__pad_0 = v19; /*0x592537*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x08; /*0x59253c*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592541*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x592552*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x59256a*/
                v20[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592574*/
                MapSeed_field_0x08 = v66.MapSeed_field_0x08; /*0x59257a*/
              }
              ++v19; /*0x592582*/
            }
            while ( v19 < v66.MapSeed_field_0x04 ); /*0x592585*/
            v14 = v72; /*0x592587*/
          }
          v66.MapSeed_field_0x08 = ++MapSeed_field_0x08; /*0x592592*/
        }
        while ( MapSeed_field_0x08 < v66.MapSeed_field_0x10 ); /*0x592596*/
      }
      LODWORD(v70) = v14; /*0x59259c*/
      v21 = *a3 - v14; /*0x5925a9*/
      v23 = a3[1] + 5; /*0x5925b0*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5925b4*/
      MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x5925ae*/
      v66.MapSeed_field_0x10 = v23; /*0x5925ba*/
      if ( v66.MapSeed_field_0x04 < v23 ) /*0x5925be*/
      {
        v66.MapSeed_field_0x08 = v14 + v21; /*0x5925c2*/
        do /*0x592635*/
        {
          v24 = v70; /*0x5925c6*/
          if ( (int)v70 < v66.MapSeed_field_0x08 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              *(_WORD *)v66.__pad_0 = v24; /*0x5925d6*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x04; /*0x5925db*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x5925f1*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x592609*/
                v25[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592613*/
                MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x592619*/
              }
              ++v24; /*0x592621*/
            }
            while ( v24 < v66.MapSeed_field_0x08 ); /*0x592624*/
            v14 = v72; /*0x592626*/
          }
          v66.MapSeed_field_0x04 = ++MapSeed_field_0x04; /*0x592631*/
        }
        while ( MapSeed_field_0x04 < v66.MapSeed_field_0x10 ); /*0x592635*/
      }
      MapSeed_field_0x10 = *a2; /*0x592637*/
      v27 = v74; /*0x59263a*/
      v66.MapSeed_field_0x10 = MapSeed_field_0x10; /*0x59263e*/
      v66.MapSeed_field_0x04 = a2[1]; /*0x592648*/
      v71 = v74 - MapSeed_field_0x10 + v14 - 1; /*0x592652*/
      v66.MapSeed_field_0x0C = v17 + v66.MapSeed_field_0x04 - 1; /*0x59265c*/
      if ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ) /*0x592660*/
      {
        v66.MapSeed_field_0x08 = MapSeed_field_0x10 + v71; /*0x592668*/
        do /*0x5926de*/
        {
          v28 = MapSeed_field_0x10; /*0x592670*/
          if ( MapSeed_field_0x10 < v66.MapSeed_field_0x08 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              *(_WORD *)v66.__pad_0 = v28; /*0x59267b*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592680*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592689*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59269d*/
                v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x5926ac*/
                MapSeed_field_0x10 = v66.MapSeed_field_0x10; /*0x5926b4*/
                v29[283] = this->RandomMap_field_0x10; /*0x5926b8*/
              }
              ++v28; /*0x5926c2*/
            }
            while ( v28 < v66.MapSeed_field_0x08 ); /*0x5926c5*/
            v27 = v74; /*0x5926c7*/
            v14 = v72; /*0x5926cb*/
          }
          ++v66.MapSeed_field_0x04; /*0x5926da*/
        }
        while ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ); /*0x5926de*/
      }
      v30 = a3; /*0x5926e0*/
      v31 = *a3; /*0x5926e8*/
      v32 = v27 - v31 + v14 - 1; /*0x5926f3*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5926f7*/
      v33 = v16 / 2 + v66.MapSeed_field_0x04; /*0x5926fb*/
      v66.MapSeed_field_0x10 = v33; /*0x592701*/
      if ( v66.MapSeed_field_0x04 < v33 ) /*0x592705*/
      {
        v66.MapSeed_field_0x08 = v31 + v32; /*0x592709*/
        do /*0x592777*/
        {
          v34 = v31; /*0x592711*/
          if ( v31 < v66.MapSeed_field_0x08 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              *(_WORD *)v66.__pad_0 = v34; /*0x592720*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592725*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59273e*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0) + 283) = this->RandomMap_field_0x10; /*0x592759*/
              }
              ++v34; /*0x592763*/
            }
            while ( v34 < v66.MapSeed_field_0x08 ); /*0x592766*/
            v33 = v66.MapSeed_field_0x10; /*0x592768*/
          }
          ++v66.MapSeed_field_0x04; /*0x592773*/
        }
        while ( v66.MapSeed_field_0x04 < v33 ); /*0x592777*/
      }
      v35 = *a2 - 3; /*0x592788*/
      HIWORD(v66.MapSeed_field_0x08) = a2[1]; /*0x59278c*/
      LOWORD(v66.MapSeed_field_0x08) = v35; /*0x592796*/
      RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x59279f*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927a2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &v66.MapSeed_field_0x10, (int)a4, (int)RandomMap_field_0x10); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      LOWORD(v66.MapSeed_field_0x08) = *a3 - 3; /*0x5927c4*/
      v38 = this->RandomMap_field_0x10; /*0x5927c9*/
      HIWORD(v66.MapSeed_field_0x08) = v37; /*0x5927cc*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927d5*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 8, &v66.MapSeed_field_0x10, (int)a4, (int)v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      LOWORD(v66.MapSeed_field_0x08) = *a3 - 1; /*0x5927f8*/
      v40 = this->RandomMap_field_0x10; /*0x5927fd*/
      HIWORD(v66.MapSeed_field_0x08) = v39; /*0x592800*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x592809*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 9, &v66.MapSeed_field_0x10, (int)a4, (int)v40); /*0x59281b*/
      MapSeed_field_0x14 = v66.MapSeed_field_0x14; /*0x592820*/
      v42 = 0; /*0x592824*/
      v66.MapSeed_field_0x1C = 0; /*0x592828*/
      if ( v66.MapSeed_field_0x14 ) /*0x592832*/
      {
        do /*0x59285c*/
        {
          v70 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592842*/
          LOWORD(v43) = Math::RoundToInt((double)v70 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        v44 = MapSeed_field_0x14 > 0; /*0x592862*/
        v66.MapSeed_field_0x08 = v44; /*0x59286f*/
        v67 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          LOWORD(v66.MapSeed_field_0x1C) = MapSeed_field_0x14; /*0x592884*/
          HIWORD(v66.MapSeed_field_0x1C) = (_WORD)v76; /*0x592889*/
        }
        else
        {
          HIWORD(v67) = a3[1] - (_WORD)v76 - a2[1] - 5; /*0x5928a0*/
        }
        *(_DWORD *)v66.__pad_0 = 0; /*0x5928a9*/
        if ( (int)v76 > 0 ) /*0x5928af*/
        {
          v66.MapSeed_field_0x04 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            v46 = &stru_82ADA8.?[1]; /*0x5928c6*/
            v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              v48 = v44 == 0; /*0x5928d8*/
              v49 = *(_WORD *)v66.__pad_0; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v66.MapSeed_field_0x04; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              LOWORD(v66.MapSeed_field_0x14) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v68 = v50; /*0x5928f8*/
              v69 = v51; /*0x5928fd*/
              LOWORD(v70) = v50 - v45; /*0x592910*/
              WORD1(v70) = *(_WORD *)v66.__pad_0 + v51; /*0x59291f*/
              LOWORD(v66.MapSeed_field_0x0C) = v67 + v50 - v45; /*0x59292e*/
              HIWORD(v66.MapSeed_field_0x0C) = *(_WORD *)v66.__pad_0 + v51 + HIWORD(v67); /*0x592939*/
              LOWORD(v66.MapSeed_field_0x10) = v49 + LOWORD(v66.MapSeed_field_0x0C); /*0x592948*/
              HIWORD(v66.MapSeed_field_0x10) = HIWORD(v66.MapSeed_field_0x0C); /*0x59294d*/
              v66.MapSeed_field_0x18 = v66.MapSeed_field_0x10; /*0x59295c*/
              v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x18); /*0x592960*/
              v53 = *(_BYTE *)v46++; /*0x592969*/
              v47 += 4; /*0x59296e*/
              v52[283] = LOBYTE(this->RandomMap_field_0x10) + v53 - 4; /*0x592977*/
              v54 = *(_BYTE *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((_DWORD *)v52 + 14) = v54 + v55 - 1; /*0x5929a4*/
              if ( (int)v46 >= (int)&stru_82ADA8.?[6] ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = v66.MapSeed_field_0x08; /*0x5928d4*/
            }
            v56 = ++*(_DWORD *)v66.__pad_0 < (int)v76; /*0x5929bb*/
            --v66.MapSeed_field_0x04; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = v66.MapSeed_field_0x08; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v76 - 5 > 0 ) /*0x5929e8*/
      {
        MapSeed_field_0x1C_high = HIWORD(v66.MapSeed_field_0x1C); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            LOWORD(v66.MapSeed_field_0x18) = -(__int16)v42; /*0x592a05*/
            LOWORD(v70) = v59; /*0x592a0a*/
            WORD1(v70) = v60; /*0x592a13*/
            v68 = v59 - v42; /*0x592a28*/
            v69 = v57 + v60; /*0x592a2d*/
            v61 = MapSeed_field_0x1C_high + v57 + v60; /*0x592a3c*/
            LOWORD(v66.MapSeed_field_0x10) = LOWORD(v66.MapSeed_field_0x1C) + v59 - v42; /*0x592a3e*/
            HIWORD(v66.MapSeed_field_0x10) = MapSeed_field_0x1C_high + v69; /*0x592a43*/
            v66.MapSeed_field_0x14 = v66.MapSeed_field_0x10; /*0x592a4c*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592a58*/
              *(_DWORD *)(80 * ((__int16)(LOWORD(v66.MapSeed_field_0x1C) + v59 - v42) + g_MapCellWidth * v61) /*0x592a73*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v62 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x14); /*0x592a81*/
            v63 = (char)this->RandomMap_field_0x10; /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((_DWORD *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
            v62[282] = 0; /*0x592aab*/
          }
          while ( v42 < 4 ); /*0x592ab2*/
          if ( ++v57 >= a3[1] - a2[1] - (int)v76 - 5 ) /*0x592ad2*/
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
char __thiscall PlaceMapSeedCityBlockVariant(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  void *v32; // ebx
  int i; // ebx
  __int16 v34; // ax
  _BYTE *v35; // eax
  char uniqueId; // dl
  int j; // ebx
  __int16 v38; // ax
  int k; // esi
  __int16 v40; // cx
  _BYTE *v41; // eax
  char v42; // dl
  int v43; // ecx
  int m; // ebx
  __int16 v45; // ax
  int n; // esi
  _BYTE *v47; // eax
  char v48; // cl
  int v49; // edx
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
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v56, (int)a4) ) /*0x592b52*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592ba1*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592bb2*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592bd1*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x592be8*/
            v15[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592bf2*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592c5e*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592c6f*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592c8e*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x592ca5*/
            v19[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592caf*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d08*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592d19*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592d3b*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = this->?;
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592d55*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d9d*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x592db1*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592dcc*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592e38*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x592e4c*/
            v28 = v53; /*0x592e63*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592e67*/
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
  v32 = a4; /*0x592e8b*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2, v5, (int)a4, this->?); /*0x592e9c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, v4, (int)v32, this->?); /*0x592eb1*/
  for ( i = 0; i < 4; ++i ) /*0x592eb6*/
  {
    v34 = v5[1] + i; /*0x592ebf*/
    LOWORD(a4) = i + *v4; /*0x592ed0*/
    HIWORD(a4) = v34; /*0x592ed5*/
    v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592eda*/
    uniqueId = this->?; /*0x592edf*/
    v35[284] = 7; /*0x592ee2*/
    v35[283] = uniqueId - i - 1; /*0x592eed*/
    *((_DWORD *)v35 + 14) = g_CellTileLookup + 6; /*0x592f00*/
    v35[282] = 0; /*0x592f03*/
  }
  for ( j = 0; j < 4; ++j ) /*0x592f0c*/
  {
    v38 = *v5; /*0x592f0e*/
    for ( k = 0; k < *v4 - *v5 + j - 3; ++k ) /*0x592f22*/
    {
      v40 = v5[1] + j; /*0x592f2b*/
      LOWORD(a4) = v38 + k + 3; /*0x592f34*/
      HIWORD(a4) = v40; /*0x592f39*/
      v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592f43*/
      v42 = this->?; /*0x592f4c*/
      v41[284] = 4; /*0x592f4f*/
      v41[283] = v42 - j - 1; /*0x592f5a*/
      v43 = g_CellTileLookup + 3; /*0x592f66*/
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
      LOWORD(a4) = m + *v4; /*0x592fbc*/
      HIWORD(a4) = v45 + n + 3; /*0x592fc1*/
      v47 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592fc6*/
      v48 = this->?; /*0x592fcf*/
      v47[284] = 3; /*0x592fd2*/
      v47[283] = v48 - m - 1; /*0x592fdd*/
      v49 = g_CellTileLookup + 2; /*0x592fe9*/
      v47[282] = 0; /*0x592fec*/
      *((_DWORD *)v47 + 14) = v49; /*0x592ff3*/
      v45 = v4[1]; /*0x592ff6*/
    }
  }
  return 1; /*0x593016*/
}



// ==== 0x00593030  ObjectClass::PlaceMapSeedCityBlockDiagonal  this=ObjectClass  sig=csp ====
char __thiscall PlaceMapSeedCityBlockDiagonal(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  __int16 *v10; // eax
  int v11; // esi
  __int16 *v12; // ebx
  _BYTE *v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  _BYTE *v17; // esi
  __int16 *v18; // ecx
  int v19; // esi
  __int16 *v20; // edx
  int v21; // eax
  int v22; // ebx
  _BYTE *v23; // eax
  __int16 *v24; // ecx
  __int16 *v25; // edx
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
  void *v39; // ebx
  __int16 v40; // ax
  int uniqueId; // edx
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
  int v54; // ecx
  int m; // ebx
  __int16 v56; // ax
  int n; // esi
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // cl
  int v62; // edx
  __int16 *v65; // [esp+14h] [ebp-28h]
  int v66; // [esp+14h] [ebp-28h]
  int v67; // [esp+18h] [ebp-24h]
  __int16 *v68; // [esp+18h] [ebp-24h]
  char *v69; // [esp+18h] [ebp-24h]
  int v70; // [esp+18h] [ebp-24h]
  int v71; // [esp+1Ch] [ebp-20h] BYREF
  __int16 *v72; // [esp+20h] [ebp-1Ch]
  int v73; // [esp+24h] [ebp-18h]
  int v74; // [esp+28h] [ebp-14h]
  int v75; // [esp+2Ch] [ebp-10h]
  __int16 *v76; // [esp+30h] [ebp-Ch]
  int v77; // [esp+38h] [ebp-4h]
  __int16 *v78; // [esp+40h] [ebp+4h]
  __int16 *v79; // [esp+40h] [ebp+4h]
  __int16 *v80; // [esp+40h] [ebp+4h]
  __int16 *v81; // [esp+40h] [ebp+4h]
  __int16 *v82; // [esp+40h] [ebp+4h]

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
  v72 = (__int16 *)(v8 - 7); /*0x59308a*/
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v71, (int)a4) ) /*0x59308e*/
    return 0; /*0x59353e*/
  v10 = v72; /*0x59309b*/
  v11 = v71; /*0x59309f*/
  v12 = v72; /*0x5930a3*/
  v75 = v71; /*0x5930a5*/
  v65 = v72; /*0x5930ac*/
  v67 = (int)v72 + 7; /*0x5930b2*/
  if ( !__OFSUB__(v72, (char *)v72 + 7) ) /*0x5930b6*/
  {
    v78 = (__int16 *)(v71 + v73); /*0x5930be*/
    do /*0x59312f*/
    {
      if ( v11 < (int)v78 ) /*0x5930c6*/
      {
        do /*0x59311a*/
        {
          LOWORD(a3) = v11; /*0x5930cc*/
          HIWORD(a3) = (_WORD)v12; /*0x5930d1*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5930d6*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x5930e7*/
            v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5930ff*/
            v13[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593109*/
            v12 = v65; /*0x59310f*/
          }
          ++v11; /*0x593117*/
        }
        while ( v11 < (int)v78 ); /*0x59311a*/
        v10 = v72; /*0x59311c*/
        v11 = v75; /*0x593120*/
      }
      v12 = (__int16 *)((char *)v12 + 1); /*0x593128*/
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
          HIWORD(a3) = (_WORD)v79; /*0x593162*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x59316b*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x59317c*/
            v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x593194*/
            v17[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x59319e*/
            v14 = v75; /*0x5931a4*/
          }
          ++v16; /*0x5931a8*/
          v15 = v14 + 7; /*0x5931a9*/
        }
        while ( v16 < v14 + 7 ); /*0x5931ae*/
      }
      v79 = (__int16 *)((char *)v79 + 1); /*0x5931bf*/
    }
    while ( (int)v79 < (int)((char *)v76 + v77) ); /*0x5931c5*/
  }
  v18 = (__int16 *)v4[1]; /*0x5931c7*/
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
          HIWORD(a3) = (_WORD)v18; /*0x5931eb*/
          LOWORD(a3) = v22; /*0x5931f4*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5931f9*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x59320d*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59321c*/
            v19 = v75; /*0x593224*/
            v23[283] = this->?; /*0x593228*/
          }
          v18 = v80; /*0x59322e*/
          ++v22; /*0x593232*/
          v21 = v19 + 1; /*0x593233*/
        }
        while ( v22 < v19 + 1 ); /*0x593238*/
        v20 = v68; /*0x59323a*/
      }
      v18 = (__int16 *)((char *)v18 + 1); /*0x59323e*/
      v80 = v18; /*0x593241*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593245*/
  }
  v24 = (__int16 *)a2[1]; /*0x593247*/
  v25 = (__int16 *)((char *)v24 + 1); /*0x59324e*/
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
          HIWORD(a3) = (_WORD)v24; /*0x59326b*/
          LOWORD(a3) = v28; /*0x593274*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593279*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x59328d*/
            v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59329c*/
            v26 = v75; /*0x5932a4*/
            v29[283] = this->?; /*0x5932a8*/
          }
          v24 = v81; /*0x5932ae*/
          ++v28; /*0x5932b2*/
          v27 = v26 + 2; /*0x5932b3*/
        }
        while ( v28 < v26 + 2 ); /*0x5932b8*/
        v25 = (__int16 *)v69; /*0x5932ba*/
      }
      v24 = (__int16 *)((char *)v24 + 1); /*0x5932be*/
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
    v82 = (__int16 *)(v75 + v35); /*0x5932fc*/
    do /*0x593361*/
    {
      if ( v38 < (int)v82 ) /*0x593304*/
      {
        do /*0x593350*/
        {
          LOWORD(a3) = v38; /*0x59330a*/
          HIWORD(a3) = v36; /*0x59330f*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593314*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x593328*/
            v36 = v66; /*0x59333f*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 283) = this->?; /*0x593343*/
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
  v39 = a4; /*0x59336e*/
  v40 = a2[1] - 2; /*0x593372*/
  LOWORD(a3) = *a2; /*0x593376*/
  uniqueId = this->?; /*0x59337b*/
  HIWORD(a3) = v40; /*0x59337e*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &a3, (int)a4, uniqueId); /*0x593399*/
  v42 = v4[1] - 3; /*0x5933a6*/
  LOWORD(a4) = *v4; /*0x5933aa*/
  v43 = this->?; /*0x5933af*/
  HIWORD(a4) = v42; /*0x5933b2*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &a4, (int)v39, v43); /*0x5933cd*/
  for ( i = 0; i < 4; ++i ) /*0x5933d2*/
  {
    v45 = v4[1]; /*0x5933d7*/
    LOWORD(a4) = i + *a2; /*0x5933e2*/
    HIWORD(a4) = v45 - i; /*0x5933f0*/
    v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5933f5*/
    v47 = this->?; /*0x5933fa*/
    v46[284] = 6; /*0x5933fd*/
    v46[283] = v47 - i - 1; /*0x593408*/
    *((_DWORD *)v46 + 14) = g_CellTileLookup + 5; /*0x59341b*/
    v46[282] = 0; /*0x59341e*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593427*/
  {
    v49 = a2[1]; /*0x593429*/
    for ( k = 0; k < v49 - v4[1] + j - 3; ++k ) /*0x59343e*/
    {
      v51 = j + *a2; /*0x593448*/
      HIWORD(a4) = v49 - k - 3; /*0x59344b*/
      LOWORD(a4) = v51; /*0x59345a*/
      v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x59345f*/
      v53 = this->?; /*0x593468*/
      v52[284] = 3; /*0x59346b*/
      v52[283] = v53 - j - 1; /*0x593476*/
      v54 = g_CellTileLookup + 2; /*0x593482*/
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
      LOWORD(a4) = v58; /*0x5934dc*/
      HIWORD(a4) = v59; /*0x5934e1*/
      v60 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5934e6*/
      v61 = this->?; /*0x5934ef*/
      v60[284] = 2; /*0x5934f2*/
      v60[283] = v61 - m - 1; /*0x5934fd*/
      v62 = g_CellTileLookup + 1; /*0x593509*/
      v60[282] = 0; /*0x59350a*/
      *((_DWORD *)v60 + 14) = v62; /*0x593511*/
      v56 = *v4; /*0x593514*/
    }
  }
  return 1; /*0x59352f*/
}



// ==== 0x00593550  MapSeed::PlaceCityBlock2  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBlock2(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebp
  int v6; // esi
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  __int16 *v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ebx
  _BYTE *v15; // esi
  int v16; // ebx
  __int16 *v17; // esi
  _BYTE *v18; // esi
  __int16 *v19; // ecx
  int v20; // esi
  __int16 *v21; // edx
  int v22; // eax
  int v23; // ebx
  _BYTE *v24; // eax
  __int16 *v25; // ecx
  int v26; // esi
  __int16 *v27; // edx
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
  void *v40; // ebx
  __int16 v41; // ax
  int MapSeed_field_0x10; // edx
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
  int v59; // ecx
  int m; // ebx
  __int16 v61; // ax
  int n; // esi
  __int16 v63; // dx
  _BYTE *v64; // eax
  char v65; // dl
  int v68; // [esp+14h] [ebp-28h]
  __int16 *v69; // [esp+14h] [ebp-28h]
  int v70; // [esp+14h] [ebp-28h]
  int v71; // [esp+18h] [ebp-24h]
  __int16 *v72; // [esp+18h] [ebp-24h]
  char *v73; // [esp+18h] [ebp-24h]
  int v74; // [esp+18h] [ebp-24h]
  int v75; // [esp+1Ch] [ebp-20h] BYREF
  __int16 *v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+24h] [ebp-18h]
  int v78; // [esp+28h] [ebp-14h]
  __int16 v79[2]; // [esp+2Ch] [ebp-10h]
  __int16 *v80; // [esp+30h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-4h]
  __int16 *v82; // [esp+40h] [ebp+4h]
  __int16 *v83; // [esp+40h] [ebp+4h]
  __int16 *v84; // [esp+40h] [ebp+4h]
  __int16 *v85; // [esp+40h] [ebp+4h]
  __int16 *v86; // [esp+40h] [ebp+4h]

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
  v76 = (__int16 *)(v9 - 7); /*0x5935ae*/
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v75, (int)a4) ) /*0x5935b2*/
    return 0; /*0x593ad9*/
  v11 = v76; /*0x5935bf*/
  v12 = v75; /*0x5935c3*/
  *(_DWORD *)v79 = v75; /*0x5935c7*/
  v82 = v76; /*0x5935cb*/
  v71 = (int)v76 + 7; /*0x5935d4*/
  if ( !__OFSUB__(v76, (char *)v76 + 7) ) /*0x5935d8*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593606*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x593617*/
            v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59362f*/
            v15[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593639*/
            v13 = v68; /*0x59363f*/
          }
          ++v14; /*0x593643*/
        }
        while ( v14 < v13 ); /*0x593646*/
        v11 = v76; /*0x593648*/
        v12 = v75; /*0x59364c*/
      }
      v82 = (__int16 *)((char *)v82 + 1); /*0x59365b*/
    }
    while ( (int)v82 < v71 ); /*0x59365f*/
  }
  v16 = v12; /*0x593665*/
  v81 = v78; /*0x593667*/
  v17 = v11; /*0x59366d*/
  *(_DWORD *)v79 = v12; /*0x593671*/
  v80 = v11; /*0x593675*/
  v69 = v11; /*0x593679*/
  if ( (int)v11 < (int)((char *)v11 + v78) ) /*0x59367d*/
  {
    v83 = (__int16 *)(v12 + 7); /*0x593682*/
    do /*0x5936f5*/
    {
      if ( v16 < (int)v83 ) /*0x59368a*/
      {
        do /*0x5936de*/
        {
          LOWORD(a3) = v16; /*0x593690*/
          HIWORD(a3) = (_WORD)v17; /*0x593695*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x59369a*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x5936ab*/
            v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5936c3*/
            v18[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5936cd*/
            v17 = v69; /*0x5936d3*/
          }
          ++v16; /*0x5936db*/
        }
        while ( v16 < (int)v83 ); /*0x5936de*/
        v16 = *(_DWORD *)v79; /*0x5936e0*/
      }
      v17 = (__int16 *)((char *)v17 + 1); /*0x5936ec*/
      v69 = v17; /*0x5936f1*/
    }
    while ( (int)v17 < (int)((char *)v80 + v81) ); /*0x5936f5*/
  }
  v19 = (__int16 *)a2[1]; /*0x5936f7*/
  v20 = *a2; /*0x5936fb*/
  v21 = v19 + 1; /*0x5936fe*/
  *(_DWORD *)v79 = v20; /*0x593701*/
  v84 = v19; /*0x593707*/
  v72 = v19 + 1; /*0x59370b*/
  if ( !__OFSUB__(v19, v19 + 1) ) /*0x59370f*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593728*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x59373c*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59374b*/
            v20 = *(_DWORD *)v79; /*0x593753*/
            v24[283] = this->MapSeed_field_0x10; /*0x593757*/
          }
          v19 = v84; /*0x59375d*/
          ++v23; /*0x593761*/
          v22 = v20 + 1; /*0x593762*/
        }
        while ( v23 < v20 + 1 ); /*0x593767*/
        v21 = v72; /*0x593769*/
      }
      v19 = (__int16 *)((char *)v19 + 1); /*0x59376d*/
      v84 = v19; /*0x593770*/
    }
    while ( (int)v19 < (int)v21 ); /*0x593774*/
  }
  v25 = (__int16 *)v4[1]; /*0x593776*/
  v26 = *v4; /*0x59377a*/
  v27 = (__int16 *)((char *)v25 + 1); /*0x59377e*/
  *(_DWORD *)v79 = v26; /*0x593781*/
  v85 = v25; /*0x593787*/
  v73 = (char *)v25 + 1; /*0x59378b*/
  if ( !__OFSUB__(v25, (char *)v25 + 1) ) /*0x59378f*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5937a8*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x5937bc*/
            v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5937cb*/
            v26 = *(_DWORD *)v79; /*0x5937d3*/
            v30[283] = this->MapSeed_field_0x10; /*0x5937d7*/
          }
          v25 = v85; /*0x5937dd*/
          ++v29; /*0x5937e1*/
          v28 = v26 + 2; /*0x5937e2*/
        }
        while ( v29 < v26 + 2 ); /*0x5937e7*/
        v27 = (__int16 *)v73; /*0x5937e9*/
      }
      v25 = (__int16 *)((char *)v25 + 1); /*0x5937ed*/
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
    v86 = (__int16 *)(*(_DWORD *)v79 + v36); /*0x59382b*/
    do /*0x593891*/
    {
      if ( v39 < (int)v86 ) /*0x593833*/
      {
        do /*0x593880*/
        {
          CellStruct::Set((CellStruct *)&a3, v39, v37); /*0x59383b*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593844*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x593858*/
            v37 = v70; /*0x59386f*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 283) = this->MapSeed_field_0x10; /*0x593873*/
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
  v40 = a4; /*0x59389e*/
  v41 = a2[1] - 3; /*0x5938a6*/
  LOWORD(a3) = *a2 - 2; /*0x5938aa*/
  MapSeed_field_0x10 = this->MapSeed_field_0x10; /*0x5938af*/
  HIWORD(a3) = v41; /*0x5938b2*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 5, &a3, (int)a4, MapSeed_field_0x10); /*0x5938cd*/
  v43 = a2[1] - 1; /*0x5938db*/
  LOWORD(a4) = *a2 - 1; /*0x5938dd*/
  v44 = this->MapSeed_field_0x10; /*0x5938e2*/
  HIWORD(a4) = v43; /*0x5938e5*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 6, &a4, (int)v40, v44); /*0x593900*/
  v45 = v4[1] - 2; /*0x593911*/
  LOWORD(a4) = *v4 - 3; /*0x593915*/
  v46 = this->MapSeed_field_0x10; /*0x59391a*/
  HIWORD(a4) = v45; /*0x59391d*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 8, &a4, (int)v40, v46); /*0x593938*/
  v47 = v4[1] - 1; /*0x593947*/
  LOWORD(a4) = *v4 - 1; /*0x593949*/
  v48 = this->MapSeed_field_0x10; /*0x59394e*/
  HIWORD(a4) = v47; /*0x593951*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 9, &a4, (int)v40, v48); /*0x59396c*/
  for ( i = 0; i < 4; ++i ) /*0x593971*/
  {
    v50 = a2[1]; /*0x593977*/
    LOWORD(a4) = *v4 - i; /*0x593982*/
    HIWORD(a4) = v50 - i; /*0x593990*/
    v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593995*/
    v52 = this->MapSeed_field_0x10; /*0x59399a*/
    v51[284] = 5; /*0x59399d*/
    v51[283] = v52 - i - 1; /*0x5939a8*/
    *((_DWORD *)v51 + 14) = g_CellTileLookup + 4; /*0x5939bb*/
    v51[282] = 0; /*0x5939be*/
  }
  for ( j = 0; j < 4; ++j ) /*0x5939c7*/
  {
    v54 = *a2; /*0x5939c9*/
    for ( k = 0; k < *a2 - *v4 + j - 3; ++k ) /*0x5939dd*/
    {
      v56 = a2[1] - j; /*0x5939e8*/
      LOWORD(a4) = v54 - k - 3; /*0x5939eb*/
      HIWORD(a4) = v56; /*0x5939fa*/
      v57 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5939ff*/
      v58 = this->MapSeed_field_0x10; /*0x593a08*/
      v57[284] = 2; /*0x593a0b*/
      v57[283] = v58 - j - 1; /*0x593a16*/
      v59 = g_CellTileLookup + 1; /*0x593a22*/
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
      HIWORD(a4) = v61 - n - 3; /*0x593a6d*/
      LOWORD(a4) = v63; /*0x593a7c*/
      v64 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593a81*/
      v65 = this->MapSeed_field_0x10; /*0x593a8a*/
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
char __thiscall PlaceMapSeedCityBlockVariant2(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  void *v33; // ebx
  __int16 v34; // dx
  __int16 v35; // cx
  int i; // ebx
  __int16 v37; // dx
  _BYTE *v38; // eax
  char uniqueId; // cl
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
  int v50; // edx
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
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v59, (int)a4) ) /*0x593b52*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593ba0*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)a4); /*0x593bb1*/
            v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593bc9*/
            v14[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593bd3*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593c35*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)a4); /*0x593c46*/
            v54 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593c5e*/
            v54[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593c6e*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593cbc*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593cd0*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593cdf*/
            v19 = v63; /*0x593ce7*/
            v23[283] = this->?; /*0x593ceb*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593d36*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593d4a*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x593d65*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593dcf*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593de3*/
            v29 = v55; /*0x593dfa*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x593dfe*/
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
  v33 = a4; /*0x593e2a*/
  v34 = *v4 - 3; /*0x593e2e*/
  HIWORD(a2) = v4[1]; /*0x593e32*/
  LOWORD(a2) = v34; /*0x593e3c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &a2, (int)a4, this->?); /*0x593e55*/
  v35 = *v5 - 2; /*0x593e61*/
  HIWORD(a4) = v5[1]; /*0x593e65*/
  LOWORD(a4) = v35; /*0x593e6a*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &a4, (int)v33, this->?); /*0x593e88*/
  for ( i = 0; i < 4; ++i ) /*0x593e8d*/
  {
    v37 = v5[1] + i; /*0x593e96*/
    LOWORD(a4) = *v4 - i; /*0x593ea1*/
    HIWORD(a4) = v37; /*0x593eac*/
    v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593eb1*/
    uniqueId = this->?; /*0x593eb6*/
    v38[284] = 8; /*0x593eb9*/
    v38[283] = uniqueId - i - 1; /*0x593ec4*/
    *((_DWORD *)v38 + 14) = g_CellTileLookup + 7; /*0x593ed7*/
    v38[282] = 0; /*0x593eda*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593ee3*/
  {
    v41 = v4[1]; /*0x593ee5*/
    for ( k = 0; k < v5[1] - v41 + j - 3; v41 = v4[1] ) /*0x593efa*/
    {
      LOWORD(a4) = *v4 - j; /*0x593f11*/
      HIWORD(a4) = v41 + k + 3; /*0x593f16*/
      v43 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593f1b*/
      v44 = this->?; /*0x593f24*/
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
      LOWORD(a4) = v46 - n - 3; /*0x593f86*/
      HIWORD(a4) = v5[1] + m; /*0x593f97*/
      v48 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593f9c*/
      v49 = this->?; /*0x593fa5*/
      v48[284] = 4; /*0x593fa8*/
      v48[283] = v49 - m - 1; /*0x593fb3*/
      v50 = g_CellTileLookup + 3; /*0x593fbf*/
      v48[282] = 0; /*0x593fc2*/
      *((_DWORD *)v48 + 14) = v50; /*0x593fc9*/
      v46 = *v5; /*0x593fcc*/
    }
  }
  return 1; /*0x593feb*/
}



// ==== 0x00594010  BuildingTypeClass::CheckPlacementArea  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::CheckPlacementArea(BuildingTypeClass *this, _WORD *a2, int a3)
{
  _WORD *v3; // edi
  __int16 v4; // ax
  int result; // eax
  __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = a2; /*0x594015*/
  v4 = *a2; /*0x594027*/
  HIWORD(a2) = a2[2]; /*0x59402a*/
  LOWORD(a2) = v4; /*0x594035*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59403a*/
  if ( (_BYTE)result )
  {
    v6 = v3[2]; /*0x594052*/
    LOWORD(a2) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x59405a*/
    HIWORD(a2) = v6; /*0x594065*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59406a*/
    if ( (_BYTE)result )
    {
      v7 = *((_DWORD *)v3 + 1); /*0x59407a*/
      v8 = *((_DWORD *)v3 + 3); /*0x59407d*/
      LOWORD(a2) = *v3; /*0x594080*/
      HIWORD(a2) = v7 + v8 - 1; /*0x594095*/
      result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59409a*/
      if ( (_BYTE)result )
      {
        v9 = *((_DWORD *)v3 + 1); /*0x5940b2*/
        v10 = *((_DWORD *)v3 + 3); /*0x5940b5*/
        LOWORD(a2) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x5940b8*/
        HIWORD(a2) = v9 + v10 - 1; /*0x5940cb*/
        result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x5940d0*/
        if ( (_BYTE)result )
        {
          v11 = *((_DWORD *)v3 + 1); /*0x5940dd*/
          if ( v11 >= *((_DWORD *)v3 + 3) + v11 ) /*0x5940e9*/
          {
LABEL_16:
            LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = a3; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(_DWORD *)v3; /*0x5940f3*/
            result = *(_DWORD *)v3 + *((_DWORD *)v3 + 2); /*0x5940f8*/
            if ( *(_DWORD *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v11 >= *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 1) ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(a2) = v13; /*0x594104*/
            HIWORD(a2) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
                   ? *(_DWORD *)(80 * ((__int16)v13 + g_MapCellWidth * (__int16)v11)
                               + g_MissionQueueFrame.localVariables[163]
                               + 56)
                   : -1;
            if ( (void *)result != this->? && result != v12 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x594147*/
            result = Cell::IsEmpty(v14); /*0x59414e*/
            if ( !(_BYTE)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(_DWORD *)v3 + *((_DWORD *)v3 + 2); /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/
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
    v5 = dword_ABED04; /*0x5941ad*/
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
            if ( (__int16)v6 - v7 >= v5 || v7 - (__int16)v6 >= v5 || v8 > dword_ABED08 ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( dword_ABED10 ) /*0x594210*/
              {
                v7 = (__int16)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((_DWORD *)dword_ABED10 + 20 * (__int16)v6 + 20 * g_MapCellWidth * (__int16)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = CellCoord::To_CellObj(&dword_87F7E8, v15); /*0x59423e*/
              v11 = 0; /*0x594249*/
              if ( dword_ABDFA0 <= 0 ) /*0x59424d*/
              {
                v2 = a1; /*0x594298*/
LABEL_19:
                v10[283] = MEMORY[0x10]; /*0x59429c*/
                v5 = dword_ABED04; /*0x5942a7*/
              }
              else
              {
                v12 = (char *)dword_ABDF94; /*0x59424f*/
                while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v9 ) /*0x59425a*/
                {
                  ++v11; /*0x59425c*/
                  v12 += 4; /*0x59425d*/
                  if ( v11 >= dword_ABDFA0 ) /*0x594262*/
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
                v10[283] = *(_BYTE *)(*((_DWORD *)dword_ABDF94 + v11) + 16); /*0x59428a*/
                v5 = dword_ABED04; /*0x594290*/
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
int __thiscall sub_5942F0(ObjectClass *this, int *a2)
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
  ObjectClass *v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x5942f5*/
  v12 = this; /*0x5942f9*/
  v3 = a2[1]; /*0x5942fd*/
  result = v3 + a2[3]; /*0x594303*/
  v10 = v3; /*0x594305*/
  if ( v3 < result ) /*0x59430b*/
  {
    v5 = g_MissionQueueFrame.localVariables[160]; /*0x594311*/
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
            if ( (__int16)v6 - v7 < v5 && v7 - (__int16)v6 < v5 && v8 <= g_MissionQueueFrame.localVariables[161] ) /*0x594356*/
            {
              if ( g_MissionQueueFrame.localVariables[163] ) /*0x594360*/
                *(_DWORD *)(80 * ((__int16)v6 + g_MapCellWidth * v7) + g_MissionQueueFrame.localVariables[163] + 56) = v12->?; /*0x59437a*/
              v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x594388*/
              v9[283] = v12->?; /*0x594394*/
              v5 = g_MissionQueueFrame.localVariables[160]; /*0x59439a*/
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
int __thiscall List::FindByValue(List *this)
{
  int v1; // eax
  int i; // edx

  v1 = 0; /*0x5943e8*/
  if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x5943ed*/
    return 0; /*0x594406*/
  for ( i = g_MissionQueueFrame.briefing[339]; *(List **)(*(_DWORD *)i + 8) != this; i += 4 ) /*0x5943f5*/
  {
    if ( ++v1 >= g_MissionQueueFrame.briefing[342] ) /*0x594404*/
      return 0; /*0x594404*/
  }
  return *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x594406*/
}



// ==== 0x00594420  FloodFillRandomMapTerrain  this=-  sig=csp ====
void __fastcall FloodFillRandomMapTerrain(int a1, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  __int16 *v20; // eax
  int v21; // edx
  int v22; // ecx
  __int16 *v23; // esi
  char *v24; // edi
  int v25; // eax
  int v26; // [esp+10h] [ebp-30h]
  _DWORD *v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h] BYREF
  int v31; // [esp+24h] [ebp-1Ch]
  void **v32; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  char v35; // [esp+35h] [ebp-Bh]
  int v36; // [esp+38h] [ebp-8h]
  int v37; // [esp+3Ch] [ebp-4h]

  v31 = a2; /*0x594426*/
  v4 = __2_YAPAXI_Z(0x50u); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = RandomMap::TerrainTileDataConstructor(v4, *(_DWORD *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = v5[2]; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(__int16 *)(a1 + 36) + g_MapCellWidth * *(__int16 *)(a1 + 38); /*0x594478*/
  v32 = &DynamicVectorClass<Cell>::`vftable'; /*0x59447a*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((_DWORD *)dword_ABED10 + 20 * v7 + 15) = v6; /*0x594498*/
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
      *((_DWORD *)dword_ABED10 + 20 * (__int16)v13 + 20 * g_MapCellWidth * SHIWORD(v13) + 14) = v6; /*0x59454a*/
      ++v5[3]; /*0x594552*/
      v14 = v5[12]; /*0x594555*/
      if ( v5[14] < v14 /*0x594578*/
        || (*((_BYTE *)v5 + 53) || !v14)
        && (v15 = v5[15], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(v5[10] + 8))(v5 + 10, v14 + v15, 0) )
      {
        v16 = v5[14]; /*0x59457f*/
        v17 = v5[11]; /*0x594582*/
        v5[14] = v16 + 1; /*0x594588*/
        *(_DWORD *)(v17 + 4 * v16) = v13; /*0x59458b*/
      }
      v18 = 0; /*0x59458e*/
      while ( 1 ) /*0x594598*/
      {
        v19 = v18 & 7; /*0x594598*/
        LOWORD(v28) = v13 + LOWORD(dword_89F688[v19]); /*0x5945ba*/
        HIWORD(v28) = HIWORD(v26) + HIWORD(dword_89F688[v19]); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = v20 + 18; /*0x5945e3*/
        if ( v21 + v22 > dword_ABED04 /*0x59461d*/
          && v21 - v22 < dword_ABED04
          && v22 - v21 < dword_ABED04
          && v21 + v22 <= dword_ABED08 )
        {
          v24 = (char *)dword_ABED10 + 80 * v20[18] + 80 * g_MapCellWidth * v20[19]; /*0x594642*/
          if ( !*((_DWORD *)v20 + 19) /*0x594664*/
            && MapClass::GetTileIndex(&dword_87F7E8, v23, v31, 0) == a3
            && *((_DWORD *)v24 + 15) == -1 )
          {
            *((_DWORD *)v24 + 15) = v29; /*0x59466a*/
            if ( v36 < v34 /*0x594698*/
              || (v35 || !v34)
              && v37 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
            {
              v25 = v36++; /*0x5946a7*/
              *((_DWORD *)Block + v25) = *(_DWORD *)v23; /*0x5946b0*/
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
  v32 = &VectorClass<Cell>::`vftable'; /*0x5946d2*/
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
  if ( dword_ABED10 ) /*0x594718*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x594720*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 24) = -1; /*0x594733*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = dword_ABDFA0 - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_ABDF94 + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, _DWORD **))(dword_ABDF90 + 16))(&dword_ABDF90, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&dword_ABDF90, v6); /*0x59478f*/
      v5[10] = &VectorClass<Cell>::`vftable'; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      __3_YAXPAX_Z(v5); /*0x5947a3*/
    }
  }
  dword_ABED14 = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(__int16 *)(j + 36); /*0x5947d7*/
    v10 = *(__int16 *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > dword_ABED04 /*0x594828*/
      && v9 - v10 < dword_ABED04
      && v10 - v9 < dword_ABED04
      && v10 + v9 <= dword_ABED08
      && *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(j + 36) + 20 * g_MapCellWidth * *(__int16 *)(j + 38) + 14) == -1
      && !*(_DWORD *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x594858*/
  }
  return result; /*0x594868*/
}



// ==== 0x00594870  ObjectClass::PlaceRandomWaypoints  this=ObjectClass  sig=csp ====
void __thiscall PlaceRandomWaypoints(ObjectClass *this, int a2)
{
  unsigned int v3; // eax
  void *NeedsSaveOrLink; // ecx
  int i; // edi
  char *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int j; // eax
  int v11; // esi
  int v12; // ebp
  __int16 *Waypoint_Location; // eax
  _DWORD *v14; // eax
  int k; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  void *Items; // eax
  __int16 v20[2]; // [esp+10h] [ebp-5Ch] BYREF
  __int64 v21; // [esp+14h] [ebp-58h]
  __int64 attachedBomb; // [esp+1Ch] [ebp-50h]
  __int64 v23; // [esp+24h] [ebp-48h]
  double v24; // [esp+2Ch] [ebp-40h]
  int v25[4]; // [esp+34h] [ebp-38h] BYREF
  _DWORD v26[4]; // [esp+44h] [ebp-28h] BYREF
  VectorClass v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+64h] [ebp-8h]
  int v29; // [esp+68h] [ebp-4h]

  v26[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672] + 4; /*0x594898*/
  v26[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668] + 4; /*0x5948a8*/
  v26[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676] - 8; /*0x5948ac*/
  v26[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680] - 8; /*0x5948b0*/
  VectorClass::CellConstructor(&v27, 0, 0); /*0x5948b4*/
  v27.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5948b9*/
  v29 = 10; /*0x5948c1*/
  v28 = 0; /*0x5948c9*/
  do /*0x5948f1*/
  {
    v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5948d7*/
    LOWORD(v3) = Math::RoundToInt((double)v21 * 6.984919311242392e-10); /*0x5948e9*/
  }
  while ( v3 > 2 ); /*0x5948f1*/
  NeedsSaveOrLink = this->?; /*0x5948f3*/
  LODWORD(v21) = 0; /*0x5948f6*/
  for ( i = v3 + 12 * (_DWORD)NeedsSaveOrLink + 3 * (_DWORD)NeedsSaveOrLink; v28 < i; LODWORD(v21) = v21 + 1 ) /*0x59490a*/
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
    *(_DWORD *)v20 = *(_DWORD *)(this->fallRate + 4 * v7); /*0x594967*/
    v25[0] = v20[0] - 3; /*0x594979*/
    v25[1] = v20[1] - 3; /*0x59497d*/
    v25[2] = 6; /*0x59498a*/
    v25[3] = 6; /*0x59498e*/
    if ( (unsigned __int8)IsAreaClearMap(v25, 0, 0) /*0x5949e1*/
      && Math_Helper((ObjectClass *)&stru_87F5F0.__pad_58[416], v26, v20, 1)
      && (v28 < v27.Capacity
       || (v27.IsAllocated || !v27.Capacity)
       && v29 > 0
       && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.ptr_0 + 2))(&v27, v29 + v27.Capacity, 0)) )
    {
      v8 = v28++; /*0x5949f0*/
      *((_DWORD *)v27.Items + v8) = *(_DWORD *)v20; /*0x5949fb*/
    }
  }
  v9 = BuildingPlacement::SelectBuildingPlacementCells((BuildingPlacement *)this, (int)&v27); /*0x594a1f*/
  if ( v9 ) /*0x594a23*/
  {
    for ( j = 4544; j < 4576; j += 4 ) /*0x594a58*/
      *(void **)((char *)&dword_A8B230->ptr_0 + j) = *(void **)&g_MissionQueueFrame.globalVariables[128]; /*0x594a69*/
    v11 = 0; /*0x594a79*/
    if ( (int)this->? > 0 ) /*0x594a7d*/
    {
      v12 = a2; /*0x594a7f*/
      do /*0x594add*/
      {
        ScenarioClass::Set_Waypoint((char *)dword_A8B230, v12, *(_DWORD *)(v9[1] + 4 * v11)); /*0x594a91*/
        Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, v12); /*0x594aa2*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x594aad*/
        ++v11; /*0x594ac0*/
        v14[80] |= 4u; /*0x594ac1*/
        ++v12; /*0x594acc*/
        *((_DWORD *)&dword_A8B230[126].ptr_4 + v11) = *(_DWORD *)(v9[1] + 4 * v11 - 4); /*0x594ad1*/
      }
      while ( v11 < (int)this->? ); /*0x594add*/
    }
    for ( k = 0; k < (int)this->?; ++k ) /*0x594ae8*/
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
    if ( this->AbstractClass ) /*0x594b17*/
      (**(void (__thiscall ***)(void *, int))this->AbstractClass)(this->AbstractClass, 1); /*0x594b21*/
    Items = v27.Items; /*0x594b23*/
    this->AbstractClass = v9; /*0x594b27*/
    v27.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x594b2b*/
    if ( Items && v27.IsAllocated ) /*0x594b3b*/
      __3_YAXPAX_Z(Items); /*0x594b3e*/
  }
  else
  {
    v27.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x594a29*/
    if ( v27.Items ) /*0x594a33*/
    {
      if ( v27.IsAllocated ) /*0x594a3f*/
        __3_YAXPAX_Z(v27.Items); /*0x594a46*/
    }
  }
}



// ==== 0x00594B50  ObjectClass::DistributeRandomMapTerrain  this=ObjectClass  sig=csp ====
char DistributeRandomMapTerrain(ObjectClass *this)
{
  double v1; // st7
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // ebp
  int i; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  TileNode *v10; // ecx
  void *v11; // esi
  int j; // edi
  int v13; // esi
  _DWORD *v14; // ebp
  int v15; // eax
  size_t v16; // eax
  signed int k; // edi
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int *v22; // ecx
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // ebp
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int n; // esi
  int ii; // esi
  ObjectClass *v34; // [esp+0h] [ebp-64h]
  ObjectClass *v35; // [esp+0h] [ebp-64h]
  int v36; // [esp+10h] [ebp-54h]
  __int64 m; // [esp+14h] [ebp-50h]
  int v38; // [esp+18h] [ebp-4Ch]
  void *Base; // [esp+24h] [ebp-40h] BYREF
  size_t NumOfElements; // [esp+28h] [ebp-3Ch]
  signed int v41; // [esp+2Ch] [ebp-38h]
  char v42; // [esp+30h] [ebp-34h]
  int v43; // [esp+34h] [ebp-30h]
  int v44[5]; // [esp+38h] [ebp-2Ch]
  _VectorClass_PAVMapRegionClass v45; // [esp+4Ch] [ebp-18h] BYREF
  int v46; // [esp+60h] [ebp-4h]

  v44[0] = 5; /*0x594b60*/
  v44[1] = 5; /*0x594b6a*/
  v44[2] = 5; /*0x594b6e*/
  v44[3] = 0; /*0x594b76*/
  v44[4] = 0; /*0x594b7a*/
  v1 = (double)g_MissionQueueFrame.briefing[453] * (double)g_MissionQueueFrame.briefing[452] * 0.03; /*0x594b7e*/
  if ( v1 < 400.0 ) /*0x594b91*/
    v1 = 400.0; /*0x594b95*/
  LOWORD(v2) = Math::RoundToInt(v1); /*0x594b9b*/
  v38 = v2; /*0x594ba5*/
  v3 = Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x594ba9*/
  HIWORD(v5) = 0; /*0x594bb4*/
  v4 = v44[g_MissionQueueFrame.briefing[371]]; /*0x594bb6*/
  LOWORD(v5) = *(_WORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[4 * v4 + 440] + 2 * v3); /*0x594bc1*/
  Map_Helper_58CE90(v34); /*0x594bc5*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x594be2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)(i + 36)) /*0x594c2b*/
      && *(_DWORD *)(80 * (*(__int16 *)(i + 36) + g_MapCellWidth * *(__int16 *)(i + 38))
                   + g_MissionQueueFrame.localVariables[163]
                   + 56) == -1
      && !*(_DWORD *)(i + 76)
      && MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(i + 36), v4, 0) == v5 )
    {
      FloodFillRandomMapTerrain(i, v4, v5); /*0x594c32*/
    }
  }
  v7 = g_MissionQueueFrame.briefing[342]; /*0x594c4f*/
  v8 = g_MissionQueueFrame.briefing[342] - 1; /*0x594c51*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x594c54*/
  {
    v9 = g_MissionQueueFrame.briefing[339]; /*0x594c56*/
    do /*0x594c81*/
    {
      v10 = *(TileNode **)(v9 + 4 * v8); /*0x594c5b*/
      if ( *(_DWORD *)&v10[3] < v38 ) /*0x594c65*/
      {
        v11 = *(void **)(v9 + 4 * v8); /*0x594c67*/
        if ( v10 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v10); /*0x594c6d*/
          __3_YAXPAX_Z(v11); /*0x594c73*/
          v9 = g_MissionQueueFrame.briefing[339]; /*0x594c78*/
        }
      }
      --v8; /*0x594c80*/
    }
    while ( v8 >= 0 ); /*0x594c81*/
  }
  TileSystem::Constructor((TileSystem *)&v45, 0, 0); /*0x594c89*/
  *(_DWORD *)v45.__pad_0 = &off_7ED858; /*0x594c92*/
  v46 = 10; /*0x594c9a*/
  Base = 0; /*0x594ca2*/
  NumOfElements = 0; /*0x594ca6*/
  v41 = 0; /*0x594caa*/
  v42 = 0; /*0x594cae*/
  v43 = 0; /*0x594cb3*/
  *(_DWORD *)v45.__tail_10 = 0; /*0x594cb7*/
  VectorClass_ptr_MapRegionClass::Remove(&v45); /*0x594cbb*/
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x594cc9*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j) + 8) /*0x594ce8*/
        + v7 * (500000 - *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j) + 12));
    v14 = (_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x594cea*/
    v15 = v41; /*0x594cf0*/
    if ( (int)(NumOfElements + 1) > v41 ) /*0x594cf6*/
    {
      if ( !v41 ) /*0x594cfa*/
        v15 = 10; /*0x594cfc*/
      if ( !Map_Helper_5AD930((int)&Base, v15) ) /*0x594d06*/
        continue; /*0x594d06*/
    }
    *((_DWORD *)Base + 2 * NumOfElements) = v13; /*0x594d17*/
    *((_DWORD *)Base + 2 * NumOfElements + 1) = *v14; /*0x594d25*/
    v42 = 0; /*0x594d2e*/
    ++NumOfElements; /*0x594d33*/
  }
  v16 = NumOfElements; /*0x594d43*/
  for ( k = 0; k < (int)NumOfElements; ++k ) /*0x594d4b*/
  {
    if ( !v42 ) /*0x594d53*/
    {
      qsort(Base, v16, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_5AD9C0); /*0x594d62*/
      v43 = 0; /*0x594d6a*/
      v42 = 1; /*0x594d6e*/
    }
    v18 = (char *)Base + 8 * k + 4; /*0x594d81*/
    if ( *(int *)v45.__tail_10 < v45.m_8 /*0x594da7*/
      || (BYTE1(v45.m_C) || !v45.m_8)
      && v46 > 0
      && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVMapRegionClass *, int, _DWORD))(*(_DWORD *)v45.__pad_0 + 8))(
           &v45,
           v46 + v45.m_8,
           0) )
    {
      v19 = (*(_DWORD *)v45.__tail_10)++; /*0x594db6*/
      *(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * v19) = *v18; /*0x594dbf*/
    }
    v16 = NumOfElements; /*0x594dc2*/
  }
  v20 = *(_DWORD *)v45.__tail_10; /*0x594dcb*/
  v21 = 0; /*0x594dcf*/
  v36 = 0; /*0x594dd3*/
  if ( *(int *)v45.__tail_10 > 0 ) /*0x594dd7*/
  {
    v22 = *(int **)&v45.m_1[3]; /*0x594dd9*/
    v23 = *(_DWORD *)v45.__tail_10; /*0x594ddd*/
    do /*0x594dea*/
    {
      v24 = *v22++; /*0x594ddf*/
      v21 += *(_DWORD *)(v24 + 12); /*0x594de7*/
      --v23; /*0x594de9*/
    }
    while ( v23 ); /*0x594dea*/
    v36 = v21; /*0x594dec*/
  }
  v25 = 0; /*0x594df6*/
  v26 = 0; /*0x594df8*/
  v27 = 0; /*0x594dfa*/
  for ( m = (unsigned int)g_MissionQueueFrame.briefing[376]; v27 < *(int *)v45.__tail_10; HIDWORD(m) = v26 ) /*0x594e06*/
  {
    v28 = *(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * v27); /*0x594e0c*/
    v25 += *(_DWORD *)(v28 + 12); /*0x594e12*/
    if ( v27 == v20 - 1 ) /*0x594e1b*/
      v29 = m - v26; /*0x594e21*/
    else
      LOWORD(v29) = Math::RoundToInt((double)v25 / (double)v36 * (double)(int)m + 0.5 - (double)SHIDWORD(m)); /*0x594e3b*/
    *(_DWORD *)(v28 + 32) = v29; /*0x594e40*/
    v26 += v29; /*0x594e43*/
    v20 = *(_DWORD *)v45.__tail_10; /*0x594e45*/
    ++v27; /*0x594e49*/
  }
  v30 = 0; /*0x594e56*/
  for ( n = 0; n < *(int *)v45.__tail_10; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(*(ObjectClass **)(*(_DWORD *)&v45.m_1[3] + 4 * n), v30); /*0x594e66*/
    v30 += *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * n) + 32); /*0x594e79*/
  }
  if ( !g_MissionQueueFrame.briefing[371] ) /*0x594e87*/
  {
    for ( ii = 0; ii < *(int *)v45.__tail_10; ++ii ) /*0x594e91*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552])
         * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*(ObjectClass **)(*(_DWORD *)&v45.m_1[3] + 4 * ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(v35); /*0x594ee3*/
  __3_YAXPAX_Z(Base); /*0x594eed*/
  *(_DWORD *)v45.__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x594efb*/
  Base = 0; /*0x594f08*/
  NumOfElements = 0; /*0x594f0c*/
  v41 = 0; /*0x594f10*/
  v42 = 0; /*0x594f14*/
  v43 = 0; /*0x594f18*/
  if ( *(_DWORD *)&v45.m_1[3] && BYTE1(v45.m_C) ) /*0x594f25*/
    __3_YAXPAX_Z(*(void **)&v45.m_1[3]); /*0x594f28*/
  return 1; /*0x594f03*/
}



// ==== 0x00594F40  BuildingPlacement::SelectBuildingPlacementCells  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BuildingPlacement::SelectBuildingPlacementCells(BuildingPlacement *this, int a2)
{
  double v2; // st7
  int BuildingPlacement_field_0x20; // esi
  int v4; // eax
  int v5; // ebx
  VectorClass *v7; // eax
  VectorClass *v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // esi
  _DWORD *v15; // ebx
  int Capacity; // eax
  int Items; // ecx
  void *ptr_0; // eax
  _DWORD *v19; // edx
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // ebx
  int v23; // ecx
  void *v24; // eax
  _DWORD *v25; // edx
  int v26; // ecx
  int v27; // ebx
  int v28; // esi
  int v31; // eax
  int v32; // ecx
  void *v33; // eax
  _DWORD *v34; // edx
  double v35; // [esp+0h] [ebp-48h]
  double v36; // [esp+0h] [ebp-48h]
  int v37; // [esp+14h] [ebp-34h]
  int v38; // [esp+14h] [ebp-34h]
  VectorClass *v39; // [esp+18h] [ebp-30h]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+20h] [ebp-28h]
  double v44; // [esp+20h] [ebp-28h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  int v46; // [esp+2Ch] [ebp-1Ch]
  int v47; // [esp+2Ch] [ebp-1Ch]
  int v48; // [esp+30h] [ebp-18h]
  int v49; // [esp+30h] [ebp-18h]
  int v50; // [esp+34h] [ebp-14h]
  int v51; // [esp+34h] [ebp-14h]
  int v52; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+38h] [ebp-10h]
  int v55; // [esp+38h] [ebp-10h]
  int v56; // [esp+3Ch] [ebp-Ch]
  _DWORD *v57; // [esp+3Ch] [ebp-Ch]
  double v58; // [esp+40h] [ebp-8h]
  unsigned __int64 v59; // [esp+40h] [ebp-8h]

  __asm { fild dword_ABE030 } /*0x594f49*/
  BuildingPlacement_field_0x20 = this->BuildingPlacement_field_0x20; /*0x594f51*/
  __asm { fmul ds:dbl_7E3808 } /*0x594f55*/
  v45 = BuildingPlacement_field_0x20; /*0x594f5b*/
  v58 = -1.0; /*0x594f5f*/
  v48 = -1; /*0x594f6f*/
  __asm /*0x594f77*/
  {
    fmul ds:dbl_7ED8D8
    fidiv dword_ABE028
    fadd ds:dbl_7E1708
    fimul [esp+40h+var_1C]
  }
  LOWORD(v4) = Math::RoundToInt(v2); /*0x594f8d*/
  v5 = a2; /*0x594f92*/
  v40 = v4; /*0x594f99*/
  if ( !BuildingPlacement_field_0x20 && *(int *)(a2 + 16) > 0 ) /*0x594fa4*/
  {
    v40 = *(_DWORD *)(a2 + 16); /*0x594fa6*/
    v4 = v40; /*0x594faa*/
  }
  if ( v4 > *(_DWORD *)(a2 + 16) || !v4 ) /*0x594fb5*/
  {
    if ( !BuildingPlacement_field_0x20 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v40 = *(_DWORD *)(a2 + 16); /*0x594fc6*/
  }
  v7 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x594fcc*/
  v8 = v7; /*0x594fd1*/
  if ( v7 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v7, 0, 0); /*0x594fde*/
    v8->ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x594fe3*/
    v8[1].Items = (void *)10; /*0x594fe9*/
    v8[1].ptr_0 = 0; /*0x594ff0*/
    v39 = v8; /*0x594ff3*/
  }
  else
  {
    v39 = 0; /*0x594ff9*/
    v8 = 0; /*0x594ffd*/
  }
  v9 = *(_DWORD *)(a2 + 16); /*0x594fff*/
  v37 = 0; /*0x595002*/
  v10 = g_MissionQueueFrame.localVariables[163]; /*0x595006*/
  if ( v9 - 1 > 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v37); /*0x595025*/
      if ( v10 ) /*0x59502c*/
        v46 = *(_DWORD *)(80 * ((__int16)v11 + g_MapCellWidth * SHIWORD(v11)) + v10 + 56); /*0x595053*/
      else
        v46 = -1; /*0x59502e*/
      v12 = v37 + 1; /*0x59505b*/
      if ( v37 + 1 < v9 )
      {
        v50 = (__int16)v11; /*0x595072*/
        v52 = SHIWORD(v11); /*0x595076*/
        do
        {
          v41 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v12); /*0x59508b*/
          if ( v10 ) /*0x59509d*/
            v13 = *(_DWORD *)(80 * ((__int16)v41 + g_MapCellWidth * SHIWORD(v41)) + v10 + 56); /*0x5950b3*/
          else
            v13 = -1; /*0x59509f*/
          v42 = (v50 - (__int16)v41) * (v50 - (__int16)v41) + (v52 - SHIWORD(v41)) * (v52 - SHIWORD(v41)); /*0x5950c6*/
          __asm /*0x5950ca*/
          {
            fild [esp+48h+var_28]
            fstp [esp+48h+var_48]; double
          }
          Math::Sqrt(v35); /*0x5950d1*/
          v43 = v46 != v13 ? 0x14 : 0;
          __asm { fild [esp+40h+var_28] } /*0x5950ea*/
          __asm { faddp st(1), st }
          if ( !v12 ) /*0x5950f2*/
            goto LABEL_26; /*0x5950f2*/
          __asm /*0x5950f4*/
          {
            fcom [esp+40h+var_C+4]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5950fd*/
          {
LABEL_26:
            __asm { fstp st } /*0x59510d*/
          }
          else
          {
            __asm { fstp [esp+40h+var_C+4] } /*0x595103*/
            v48 = v37; /*0x595107*/
          }
          v10 = g_MissionQueueFrame.localVariables[163]; /*0x595112*/
          ++v12; /*0x595118*/
        }
        while ( v12 < *(_DWORD *)(a2 + 16) );
        v12 = v37 + 1; /*0x595122*/
        v8 = v39; /*0x595126*/
      }
      v37 = v12; /*0x59512d*/
      v9 = *(_DWORD *)(a2 + 16); /*0x595131*/
      if ( v12 >= v9 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v5 = a2; /*0x595019*/
    }
    if ( v48 != -1 ) /*0x595146*/
    {
      v15 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v48); /*0x595155*/
      Capacity = v8->Capacity; /*0x595158*/
      if ( (int)v8[1].ptr_0 < Capacity ) /*0x59515d*/
        goto LABEL_36; /*0x59515d*/
      if ( !v8->IsAllocated && Capacity ) /*0x595168*/
        goto LABEL_38; /*0x595168*/
      Items = (int)v8[1].Items; /*0x59516a*/
      if ( Items <= 0 ) /*0x59516f*/
        goto LABEL_38; /*0x59516f*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, Capacity + Items, 0) ) /*0x59517a*/
      {
LABEL_36:
        ptr_0 = v8[1].ptr_0; /*0x595181*/
        v19 = v8->Items; /*0x595184*/
        v8[1].ptr_0 = (char *)ptr_0 + 1; /*0x59518a*/
        v19[(_DWORD)ptr_0] = *v15; /*0x59518f*/
      }
      v10 = g_MissionQueueFrame.localVariables[163]; /*0x595192*/
LABEL_38:
      v5 = a2; /*0x595198*/
      goto LABEL_39; /*0x595198*/
    }
    v5 = a2; /*0x5951d7*/
  }
  if ( !*(_DWORD *)(v5 + 16) )
  {
LABEL_39:
    v20 = (int)v8[1].ptr_0; /*0x59519b*/
    if ( v20 < v40 )
    {
      while ( 1 )
      {
        v59 = 0xBFF0000000000000uLL; /*0x5951ad*/
        v47 = -1; /*0x5951bf*/
        v38 = 0; /*0x5951c7*/
        if ( *(int *)(v5 + 16) > 0 )
        {
          while ( 1 )
          {
            v26 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v38); /*0x595244*/
            if ( v10 ) /*0x595250*/
              v49 = *(_DWORD *)(80 * ((__int16)v26 + g_MapCellWidth * SHIWORD(v26)) + v10 + 56); /*0x595275*/
            else
              v49 = -1; /*0x595252*/
            v27 = 0; /*0x595279*/
            v44 = 9999999.0; /*0x59527b*/
            if ( v20 > 0 )
            {
              v56 = (__int16)v26; /*0x595299*/
              v51 = SHIWORD(v26); /*0x59529d*/
              do
              {
                v53 = *((_DWORD *)v39->Items + v27); /*0x5952b3*/
                if ( v10 ) /*0x5952c5*/
                  v28 = *(_DWORD *)(80 * ((__int16)v53 + g_MapCellWidth * SHIWORD(v53)) + v10 + 56); /*0x5952db*/
                else
                  v28 = -1; /*0x5952c7*/
                v54 = (v56 - (__int16)v53) * (v56 - (__int16)v53) + (v51 - SHIWORD(v53)) * (v51 - SHIWORD(v53)); /*0x5952ee*/
                __asm /*0x5952f2*/
                {
                  fild [esp+48h+var_10]
                  fstp [esp+48h+var_48]; double
                }
                Math::Sqrt(v36); /*0x5952f9*/
                v55 = v49 != v28 ? 0x14 : 0;
                __asm /*0x595312*/
                {
                  fild [esp+40h+var_10]
                  faddp st(1), st
                  fcom qword ptr [esp+40h+var_28]
                  fnstsw ax
                }
                if ( (_AX & 0x100) != 0 ) /*0x595321*/
                  __asm { fstp qword ptr [esp+40h+var_28] } /*0x595323*/
                else
                  __asm { fstp st } /*0x595329*/
                v10 = g_MissionQueueFrame.localVariables[163]; /*0x59532f*/
                ++v27; /*0x595335*/
                v20 = (int)v39[1].ptr_0; /*0x595336*/
              }
              while ( v27 < v20 );
            }
            __asm /*0x595341*/
            {
              fld qword ptr [esp+40h+var_28]
              fcomp [esp+40h+var_C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) == 0 ) /*0x59534e*/
            {
              v59 = *(_QWORD *)&v44; /*0x595358*/
              v47 = v38; /*0x595364*/
            }
            if ( ++v38 >= *(_DWORD *)(a2 + 16) ) /*0x595379*/
              break; /*0x595379*/
            v5 = a2; /*0x595238*/
          }
          v8 = v39; /*0x59537f*/
          v5 = a2; /*0x595383*/
        }
        v31 = v8->Capacity; /*0x59538f*/
        v57 = (_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v47); /*0x595392*/
        if ( (int)v8[1].ptr_0 < v31 ) /*0x59539b*/
          goto LABEL_72; /*0x59539b*/
        if ( !v8->IsAllocated && v31 ) /*0x5953a6*/
          goto LABEL_74; /*0x5953a6*/
        v32 = (int)v8[1].Items; /*0x5953a8*/
        if ( v32 <= 0 ) /*0x5953ad*/
          goto LABEL_74; /*0x5953ad*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, v31 + v32, 0) ) /*0x5953b8*/
        {
LABEL_72:
          v33 = v8[1].ptr_0; /*0x5953bf*/
          v34 = v8->Items; /*0x5953c2*/
          v8[1].ptr_0 = (char *)v33 + 1; /*0x5953c8*/
          v34[(_DWORD)v33] = *v57; /*0x5953d1*/
        }
        v10 = g_MissionQueueFrame.localVariables[163]; /*0x5953d4*/
LABEL_74:
        v20 = (int)v8[1].ptr_0; /*0x5953da*/
        if ( v20 >= v40 ) /*0x5953e3*/
          return &v8->ptr_0; /*0x5953e3*/
      }
    }
    return &v8->ptr_0; /*0x5951a4*/
  }
  v21 = v8->Capacity; /*0x5951e1*/
  v22 = *(_DWORD **)(v5 + 4); /*0x5951e7*/
  if ( (int)v8[1].ptr_0 < v21 /*0x595211*/
    || (v8->IsAllocated || !v21)
    && (v23 = (int)v8[1].Items, v23 > 0)
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, v21 + v23, 0) )
  {
    v24 = v8[1].ptr_0; /*0x59521c*/
    v25 = v8->Items; /*0x59521f*/
    v8[1].ptr_0 = (char *)v24 + 1; /*0x595225*/
    v25[(_DWORD)v24] = *v22; /*0x59522a*/
    return &v8->ptr_0; /*0x595235*/
  }
  return &v8->ptr_0; /*0x594fbd*/
}



// ==== 0x00595400  ObjectClass::PlaceNeutralBuilding  this=ObjectClass  sig=csp ====
char __thiscall PlaceNeutralBuilding(TechnoClass *this)
{
  TechnoClass *v1; // ebx
  HouseClass *v2; // eax
  int Owner; // ebp
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ebp
  _WORD *v10; // edi
  char v11; // bl
  __int16 v12; // dx
  Cell *v13; // esi
  int v14; // eax
  char result; // al
  char v16; // [esp+13h] [ebp-39h]
  __int16 v17[2]; // [esp+14h] [ebp-38h] BYREF
  int *v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  int v20; // [esp+20h] [ebp-2Ch]
  TechnoClass *v21; // [esp+24h] [ebp-28h]
  __int16 v22[4]; // [esp+28h] [ebp-24h] BYREF
  __int64 attachedBomb; // [esp+30h] [ebp-1Ch]
  __int64 v24; // [esp+38h] [ebp-14h]
  _DWORD v25[3]; // [esp+40h] [ebp-Ch] BYREF

  v1 = this; /*0x595405*/
  v21 = this; /*0x59540e*/
  v2 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x595412*/
  Owner = HouseClass::FindOwner(v2); /*0x595425*/
  v16 = 0; /*0x595427*/
  v19 = 0; /*0x59542c*/
  v4 = __2_YAPAXI_Z(0x720u); /*0x595435*/
  if ( v4 ) /*0x59543c*/
  {
    *(_DWORD *)&v22[2] = 0; /*0x595443*/
    v5 = dword_8871E0->MessageDelay[0] - 1; /*0x595451*/
    *(double *)&v24 = (double)(unsigned int)dword_8871E0->MessageDelay[0]; /*0x59545d*/
    do /*0x59548c*/
    {
      *(_QWORD *)v22 = (unsigned int)Random::State((Random *)&unk_ABE890); /*0x59546b*/
      LOWORD(v6) = Math::RoundToInt((double)*(__int64 *)v22 * *(double *)&v24 * 2.328306437080797e-10); /*0x595485*/
    }
    while ( v6 > v5 ); /*0x59548c*/
    v18 = (int *)BuildingClass::Construct(v4, *(_DWORD *)(*(_DWORD *)dword_8871E0->MultiEngineer + 4 * v6), Owner); /*0x5954a6*/
  }
  else
  {
    v18 = 0; /*0x5954ac*/
  }
  while ( v19 < 100 ) /*0x5954bb*/
  {
    v7 = v1->attachedBomb - 1; /*0x5954c4*/
    attachedBomb = (unsigned int)v1->attachedBomb; /*0x5954ce*/
    *(double *)v22 = (double)attachedBomb; /*0x5954d6*/
    do /*0x595501*/
    {
      v24 = (unsigned int)Random::State((Random *)&unk_ABE890); /*0x5954e4*/
      LOWORD(v8) = Math::RoundToInt((double)v24 * *(double *)v22 * 2.328306437080797e-10); /*0x5954fa*/
    }
    while ( v8 > v7 ); /*0x595501*/
    *(_DWORD *)v17 = *(_DWORD *)(v1->fallRate + 4 * v8); /*0x595513*/
    v9 = *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x595522*/
    v10 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v18[328] + 144))(v18[328], 1); /*0x595537*/
    v11 = 1; /*0x595539*/
    while ( *v10 != 0x7FFF || v10[1] != 0x7FFF ) /*0x595548*/
    {
      v12 = v17[1] + v10[1]; /*0x595556*/
      LOWORD(v20) = v17[0] + *v10; /*0x595561*/
      HIWORD(v20) = v12; /*0x595566*/
      *(_DWORD *)v22 = v20; /*0x595575*/
      v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v22); /*0x59557e*/
      if ( v13->Cell_field_0xE4 /*0x5955d6*/
        || !(unsigned __int8)Cell::IsEmpty(v13)
        || v13->Cell_field_0x11B[0] != v9
        || *(_DWORD *)&v13->__pad_E8[4] == 3
        || !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, (int)v13, 1)
        || *((_BYTE *)dword_ABED10
           + 80 * *(__int16 *)&v13->__pad_1C[8]
           + 80 * g_MapCellWidth * *(__int16 *)&v13->__pad_1C[10]
           + 69) )
      {
        v11 = 0; /*0x5955de*/
      }
      v10 += 2; /*0x5955e0*/
      if ( !v11 ) /*0x5955e5*/
        goto LABEL_24; /*0x5955e5*/
    }
    v25[0] = (v17[0] << 8) + 128; /*0x595608*/
    v25[2] = 0; /*0x595616*/
    v14 = *v18; /*0x59561e*/
    v25[1] = (v17[1] << 8) + 128; /*0x595620*/
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
    return (*(char (__thiscall **)(int *, int))(*v18 + 32))(v18, 1); /*0x595669*/
  return result; /*0x59564d*/
}



// ==== 0x00595680  MapSeedClass::Constructor  this=MapSeedClass  sig=csp ====
int __thiscall MapSeedClass::Constructor(int this)
{
  wchar_t *StringCSF; // eax

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
  *(_DWORD *)(this + 8) = &unk_82BA60; /*0x5956d1*/
  *(_WORD *)(this + 120) = 0; /*0x5956d8*/
  *(_DWORD *)(this + 12) = this + 120; /*0x5956db*/
  if ( Map_Create_734FD0() ) /*0x5956de*/
  {
    StringCSF = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x5956f8*/
    wcscpy((wchar_t *)(this + 120), StringCSF); /*0x5956ff*/
  }
  return this; /*0x595709*/
}



// ==== 0x00595710  CSFClass::CopyString  this=CSFClass  sig=csp ====
wchar_t *__thiscall CSFClass::CopyString(CSFClass *this)
{
  wchar_t *StringCSF; // eax

  StringCSF = GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.?[11], 3934); /*0x595724*/
  return wcscpy((wchar_t *)this + 60, StringCSF); /*0x595736*/
}



// ==== 0x00595740  MapResourceClass::Constructor  this=MapResourceClass  sig=csp ====
int __thiscall MapResourceClass::Constructor(MapResourceClass *this)
{
  MapSeedClass::Constructor((int)this); /*0x595745*/
  *((_DWORD *)this + 94) = 0; /*0x595756*/
  *((_DWORD *)this + 95) = 0; /*0x59575c*/
  *((_DWORD *)this + 96) = 0; /*0x595762*/
  *((_DWORD *)this + 97) = 0; /*0x595768*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 98), 0, 0); /*0x59576e*/
  *((_DWORD *)this + 98) = &TypeList<int>::`vftable'; /*0x595773*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 105), 0, 0); /*0x595783*/
  *((_DWORD *)this + 105) = &TypeList<int>::`vftable'; /*0x595788*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 112), 0, 0); /*0x595798*/
  *((_DWORD *)this + 112) = &TypeList<int>::`vftable'; /*0x59579d*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 119), 0, 0); /*0x5957ad*/
  *((_DWORD *)this + 119) = &TypeList<int>::`vftable'; /*0x5957b2*/
  VectorClass::Construct((VectorClass *)(this + 126), 0, 0); /*0x5957c2*/
  *((_DWORD *)this + 131) = 10; /*0x5957c7*/
  *((_DWORD *)this + 130) = 0; /*0x5957ce*/
  *((_DWORD *)this + 126) = &TypeList<int>::`vftable'; /*0x5957d1*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 133), 0, 0); /*0x5957e1*/
  *((_DWORD *)this + 133) = &TypeList<int>::`vftable'; /*0x5957e6*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 140), 0, 0); /*0x5957f6*/
  *((_DWORD *)this + 140) = &TypeList<int>::`vftable'; /*0x5957fb*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 147), 0, 0); /*0x59580b*/
  *((_DWORD *)this + 147) = &TypeList<int>::`vftable'; /*0x595810*/
  VectorClass::Construct((VectorClass *)(this + 154), 0, 0); /*0x595820*/
  *((_DWORD *)this + 159) = 10; /*0x595825*/
  *((_DWORD *)this + 158) = 0; /*0x59582c*/
  *((_DWORD *)this + 154) = &TypeList<int>::`vftable'; /*0x59582f*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 161), 0, 0); /*0x59583f*/
  *((_DWORD *)this + 161) = &TypeList<int>::`vftable'; /*0x595844*/
  DynamicVectorClass::Construct((DynamicVectorClass *)this + 28, 0, 0); /*0x595854*/
  *((_DWORD *)this + 168) = &TypeList<int>::`vftable'; /*0x595859*/
  *((_DWORD *)this + 175) = 2500; /*0x59585f*/
  *((_DWORD *)this + 176) = 5500; /*0x595873*/
  DynamicVectorClass::BuildingTypeConstructor((DynamicVectorClass *)(this + 177), 0, 0); /*0x59587d*/
  *((_DWORD *)this + 177) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x595882*/
  VectorClass::BuildingTypeConstructor((VectorClass *)this + 46, 0, 0); /*0x595892*/
  *((_DWORD *)this + 189) = 10; /*0x595897*/
  *((_DWORD *)this + 188) = 0; /*0x59589e*/
  *((_DWORD *)this + 184) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5958a1*/
  *((_DWORD *)this + 191) = 500; /*0x5958a7*/
  *((_BYTE *)this + 768) = 1; /*0x5958b1*/
  *((_DWORD *)this + 193) = 0; /*0x5958b8*/
  *((_DWORD *)this + 195) = 4; /*0x5958be*/
  *((_BYTE *)this + 784) = 0; /*0x5958c8*/
  return (int)this; /*0x5958d0*/
}



// ==== 0x005958E0  RandomMap::CleanupRandomMapData  this=RandomMap  sig=csp ====
void __thiscall RandomMap::CleanupRandomMapData(RandomMap *this)
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

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x5958ee*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x5958f6*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5958fb*/
    {
      v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x59590c*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x595927*/
  {
    v5 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i)); /*0x595938*/
      __3_YAXPAX_Z(v5); /*0x59593e*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59594e*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x595957*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x59595a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x595962*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))&this->__pad_4C[300]; /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *(_DWORD *)&this->__pad_4C[300] = 0; /*0x595978*/
  }
  v7 = *(void **)&this->__pad_4C[304]; /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(*(ComPtr **)&this->__pad_4C[304]); /*0x59598a*/
    __3_YAXPAX_Z(v7); /*0x595990*/
    *(_DWORD *)&this->__pad_4C[304] = 0; /*0x595998*/
  }
  this->u32_B8 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5959a4*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)this + 736)); /*0x5959aa*/
  *((_DWORD *)this + 177) = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5959b5*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)this + 708)); /*0x5959bb*/
  *((_DWORD *)this + 168) = &VectorClass<int>::`vftable'; /*0x5959cb*/
  VectorClass::Destroy((int)this + 672); /*0x5959cd*/
  *((_DWORD *)this + 161) = &VectorClass<int>::`vftable'; /*0x5959d8*/
  VectorClass::Destroy((int)this + 644); /*0x5959da*/
  v8 = (void *)*((_DWORD *)this + 155); /*0x5959df*/
  *((_DWORD *)this + 154) = &VectorClass<int>::`vftable'; /*0x5959e5*/
  if ( v8 && *((_BYTE *)this + 629) ) /*0x5959ef*/
  {
    __3_YAXPAX_Z(v8); /*0x5959f8*/
    *((_DWORD *)this + 155) = 0; /*0x595a00*/
  }
  *((_BYTE *)this + 629) = 0; /*0x595a06*/
  this->u32_9C = 0; /*0x595a0c*/
  v9 = (void *)this->u32_94; /*0x595a12*/
  *((_DWORD *)this + 147) = &VectorClass<int>::`vftable'; /*0x595a18*/
  if ( v9 && *((_BYTE *)this + 601) ) /*0x595a22*/
  {
    __3_YAXPAX_Z(v9); /*0x595a2b*/
    this->u32_94 = 0; /*0x595a33*/
  }
  *((_BYTE *)this + 601) = 0; /*0x595a39*/
  *((_DWORD *)this + 149) = 0; /*0x595a3f*/
  v10 = (void *)*((_DWORD *)this + 141); /*0x595a45*/
  *((_DWORD *)this + 140) = &VectorClass<int>::`vftable'; /*0x595a4b*/
  if ( v10 && *((_BYTE *)this + 573) ) /*0x595a55*/
  {
    __3_YAXPAX_Z(v10); /*0x595a5e*/
    *((_DWORD *)this + 141) = 0; /*0x595a66*/
  }
  *((_BYTE *)this + 573) = 0; /*0x595a6c*/
  *((_DWORD *)this + 142) = 0; /*0x595a72*/
  v11 = (void *)*((_DWORD *)this + 134); /*0x595a78*/
  *((_DWORD *)this + 133) = &VectorClass<int>::`vftable'; /*0x595a7e*/
  if ( v11 && *((_BYTE *)this + 545) ) /*0x595a88*/
  {
    __3_YAXPAX_Z(v11); /*0x595a91*/
    *((_DWORD *)this + 134) = 0; /*0x595a99*/
  }
  *((_BYTE *)this + 545) = 0; /*0x595a9f*/
  *((_DWORD *)this + 135) = 0; /*0x595aa5*/
  v12 = *(void **)&this->__pad_4C[432]; /*0x595aab*/
  *(_DWORD *)&this->__pad_4C[428] = &VectorClass<int>::`vftable'; /*0x595ab1*/
  if ( v12 && this->__pad_4C[441] ) /*0x595abb*/
  {
    __3_YAXPAX_Z(v12); /*0x595ac4*/
    *(_DWORD *)&this->__pad_4C[432] = 0; /*0x595acc*/
  }
  this->__pad_4C[441] = 0; /*0x595ad2*/
  *(_DWORD *)&this->__pad_4C[436] = 0; /*0x595ad8*/
  v13 = *(void **)&this->__pad_4C[404]; /*0x595ade*/
  *(_DWORD *)&this->__pad_4C[400] = &VectorClass<int>::`vftable'; /*0x595ae4*/
  if ( v13 && this->__pad_4C[413] ) /*0x595aee*/
  {
    __3_YAXPAX_Z(v13); /*0x595af7*/
    *(_DWORD *)&this->__pad_4C[404] = 0; /*0x595aff*/
  }
  this->__pad_4C[413] = 0; /*0x595b05*/
  *(_DWORD *)&this->__pad_4C[408] = 0; /*0x595b0b*/
  v14 = *(void **)&this->__pad_4C[376]; /*0x595b11*/
  *(_DWORD *)&this->__pad_4C[372] = &VectorClass<int>::`vftable'; /*0x595b17*/
  if ( v14 && this->__pad_4C[385] ) /*0x595b21*/
  {
    __3_YAXPAX_Z(v14); /*0x595b2a*/
    *(_DWORD *)&this->__pad_4C[376] = 0; /*0x595b32*/
  }
  this->__pad_4C[385] = 0; /*0x595b38*/
  *(_DWORD *)&this->__pad_4C[380] = 0; /*0x595b3e*/
  v15 = *(void **)&this->__pad_4C[348]; /*0x595b44*/
  *(_DWORD *)&this->__pad_4C[344] = &VectorClass<int>::`vftable'; /*0x595b4a*/
  if ( v15 && this->__pad_4C[357] ) /*0x595b54*/
  {
    __3_YAXPAX_Z(v15); /*0x595b5d*/
    *(_DWORD *)&this->__pad_4C[348] = 0; /*0x595b65*/
  }
  this->__pad_4C[357] = 0; /*0x595b6b*/
  *(_DWORD *)&this->__pad_4C[352] = 0; /*0x595b71*/
  v16 = *(void **)&this->__pad_4C[320]; /*0x595b77*/
  *(_DWORD *)&this->__pad_4C[316] = &VectorClass<int>::`vftable'; /*0x595b7d*/
  if ( v16 && this->__pad_4C[329] ) /*0x595b87*/
  {
    __3_YAXPAX_Z(v16); /*0x595b90*/
    *(_DWORD *)&this->__pad_4C[320] = 0; /*0x595b98*/
  }
  this->__pad_4C[329] = 0; /*0x595ba0*/
  *(_DWORD *)&this->__pad_4C[324] = 0; /*0x595ba6*/
  LoadOptions::Cleanup((LoadOptions *)this); /*0x595bac*/
}



// ==== 0x00595BC0  CCFileClass::Load  this=CCFileClass  sig=csp ====
LONG __thiscall CCFileClass::Load(CCFileClass *this)
{
  Dialog *Dialog; // edi
  TechnoTypeClass *v3; // ecx
  ComPtr *v4; // esi
  int v6; // [esp+0h] [ebp-34h]
  LONG dwNewLong; // [esp+Ch] [ebp-28h] BYREF
  RawFileClass v8; // [esp+10h] [ebp-24h] BYREF

  dwNewLong = 0; /*0x595bcf*/
  RandomMap::LoadConfig((RandomMap *)&g_MissionQueueFrame.briefing[356]); /*0x595bd3*/
  Dialog = (Dialog *)CreateDialog(0x105u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SkirmishMapGen::DlgProc, 0); /*0x595be8*/
  if ( Dialog ) /*0x595bec*/
  {
    *(_DWORD *)&stru_82ADA8.?[31] = this; /*0x595bf2*/
    g_MissionQueueFrame.briefing[361] = (int)this; /*0x595bfc*/
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x595c02*/
    SendMessageA((HWND)Dialog, 0x4A9u, 0, 1); /*0x595c11*/
    Dialog::Show(Dialog); /*0x595c19*/
    while ( !dwNewLong ) /*0x595c22*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x595c2b*/
        break; /*0x595c2b*/
      if ( this ) /*0x595c2f*/
        ((void (*)(void))this)(); /*0x595c31*/
      LOBYTE(v3) = 0; /*0x595c33*/
      ScreenSaver::Process(v3, v6); /*0x595c35*/
    }
    Dialog::Destroy(Dialog); /*0x595c42*/
  }
  v4 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x595c47*/
  *(_DWORD *)&stru_82ADA8.?[31] = Event_Dispatch::Return0; /*0x595c4d*/
  g_MissionQueueFrame.briefing[361] = 0; /*0x595c59*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x595c5f*/
  {
    if ( *(_DWORD *)g_MissionQueueFrame.briefing[451] ) /*0x595c61*/
    {
      RawFileClass::Construct(&v8, (int)ExistingFileName); /*0x595c6e*/
      CompressScreenshot((int *)v8.FileClass, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x595c84*/
      RawFileClass::Dtor(&v8); /*0x595c8d*/
      v4 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x595c92*/
    }
    if ( v4 ) /*0x595c9a*/
    {
      ComPtr::Dtor(v4); /*0x595c9e*/
      __3_YAXPAX_Z(v4); /*0x595ca4*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x595cac*/
  }
  if ( g_MissionQueueFrame.briefing[450] ) /*0x595cba*/
  {
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x595cc0*/
    g_MissionQueueFrame.briefing[450] = 0; /*0x595cc2*/
  }
  return dwNewLong; /*0x595ccc*/
}



// ==== 0x00595CE0  ObjectClass::CleanupRandomMapCache  this=ObjectClass  sig=csp ====
void CleanupRandomMapCache(ObjectClass *this)
{
  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  void **Items; // eax
  char *v9; // ecx
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  FILETIME FileTime2; // [esp+10h] [ebp-20h] BYREF
  VectorClass v15; // [esp+18h] [ebp-18h] BYREF
  int j; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(&v15, 0, 0); /*0x595cef*/
  v15.ptr_0 = &DynamicVectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x595cf4*/
  v17 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA((LPCSTR)&stru_82BA00.?[2], i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v15.Capacity /*0x595d5f*/
      || (v15.IsAllocated || !v15.Capacity)
      && v17 > 0
      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v15.ptr_0 + 2))(&v15, v17 + v15.Capacity, 0) )
    {
      v3 = j++; /*0x595d6a*/
      *((_DWORD *)v15.Items + v3) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u) )
    {
      if ( j < v15.Capacity /*0x595dc2*/
        || (v15.IsAllocated || !v15.Capacity)
        && v17 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v15.ptr_0 + 2))(
             &v15,
             v17 + v15.Capacity,
             0) )
      {
        v4 = j++; /*0x595dcd*/
        *((_DWORD *)v15.Items + v4) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  __3_YAXPAX_Z(i); /*0x595dfa*/
  v5 = j; /*0x595dff*/
  if ( j <= 70 ) /*0x595e09*/
  {
LABEL_37:
    Items = (void **)v15.Items; /*0x595f3d*/
    goto LABEL_38; /*0x595f3d*/
  }
  while ( 2 ) /*0x595e1b*/
  {
    v6 = -1; /*0x595e1b*/
    v7 = 0; /*0x595e1e*/
    FileTime2.dwLowDateTime = -1; /*0x595e22*/
    FileTime2.dwHighDateTime = 0x7FFFFFFF; /*0x595e26*/
    if ( v5 <= 0 ) /*0x595e2e*/
      goto LABEL_37; /*0x595e2e*/
    Items = (void **)v15.Items; /*0x595e34*/
    do /*0x595ee3*/
    {
      v9 = (char *)Items[v7]; /*0x595e38*/
      if ( *((_DWORD *)v9 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          Items = (void **)v15.Items; /*0x595e56*/
          v6 = v7; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 12); /*0x595e62*/
          goto LABEL_30; /*0x595e70*/
        }
      }
      else if ( *((_DWORD *)v9 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          Items = (void **)v15.Items; /*0x595e89*/
          v6 = v7; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 4); /*0x595e95*/
          goto LABEL_30; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((_DWORD *)v9 + 6) ) /*0x595eaa*/
          goto LABEL_30; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v9 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          Items = (void **)v15.Items; /*0x595ebc*/
          v6 = v7; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 20); /*0x595ec8*/
          goto LABEL_30; /*0x595ed6*/
        }
      }
      Items = (void **)v15.Items; /*0x595ed8*/
LABEL_30:
      ++v7; /*0x595edc*/
    }
    while ( v7 < j ); /*0x595ee3*/
    if ( v6 != -1 ) /*0x595eec*/
    {
      if ( !DeleteFileA((LPCSTR)Items[v6] + 44) ) /*0x595ef5*/
        goto LABEL_37; /*0x595ef5*/
      __3_YAXPAX_Z(*((void **)v15.Items + v6)); /*0x595f03*/
      v10 = j; /*0x595f08*/
      if ( v6 < j ) /*0x595f11*/
      {
        v10 = j - 1; /*0x595f13*/
        v11 = v6; /*0x595f14*/
        for ( j = v10; v11 < j; v10 = j ) /*0x595f1c*/
        {
          ++v11; /*0x595f22*/
          *((_DWORD *)v15.Items + v11 - 1) = *((_DWORD *)v15.Items + v11); /*0x595f26*/
        }
      }
      v5 = v10; /*0x595f32*/
      if ( v10 <= 70 ) /*0x595f37*/
        goto LABEL_37; /*0x595f37*/
      continue; /*0x595f37*/
    }
    break;
  }
LABEL_38:
  if ( j ) /*0x595f4b*/
  {
    do /*0x595f85*/
    {
      __3_YAXPAX_Z(*Items); /*0x595f50*/
      v12 = j == 0; /*0x595f5c*/
      if ( j > 0 ) /*0x595f5e*/
      {
        v13 = 0; /*0x595f61*/
        v12 = j-- == 1; /*0x595f63*/
        if ( j > 0 ) /*0x595f69*/
        {
          do /*0x595f7d*/
          {
            ++v13; /*0x595f6f*/
            *((_DWORD *)v15.Items + v13 - 1) = *((_DWORD *)v15.Items + v13); /*0x595f73*/
          }
          while ( v13 < j ); /*0x595f7d*/
          v12 = j == 0; /*0x595f7f*/
        }
      }
      Items = (void **)v15.Items; /*0x595f81*/
    }
    while ( !v12 ); /*0x595f85*/
  }
  v15.ptr_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x595f89*/
  if ( Items ) /*0x595f91*/
  {
    if ( v15.IsAllocated ) /*0x595f99*/
      __3_YAXPAX_Z(Items); /*0x595f9c*/
  }
}



// ==== 0x00595FB0  GenerateRandomMapAndMinimap  this=-  sig=csp ====
_DWORD *__fastcall GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)())
{
  _DWORD *WDTTerritoryClass; // eax
  char *v5; // esi
  Surface *v6; // eax
  ObjectClass *v7; // eax
  void *v8; // esi
  void *v9; // esi
  int v10; // eax
  int *v11; // eax
  TechnoTypeClass *v12; // ecx
  ComPtr *v13; // esi
  int v15; // [esp+0h] [ebp-270h]
  ObjectClass *v16; // [esp+0h] [ebp-270h]
  ComPtr v17; // [esp+10h] [ebp-260h] BYREF
  CCFileClass v18; // [esp+44h] [ebp-22Ch] BYREF
  int v19[3]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(&v17); /*0x595fc2*/
  *(_DWORD *)v17.__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x595fd8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x595fe5*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass((rc_ptr *)&v17.ComPtr_field_0x08, *(int *)dword_A8B240); /*0x595ff1*/
    ComPtr::Set(&v17, WDTTerritoryClass[1]); /*0x595ffe*/
    v17.ComPtr_field_0x08 = (int)&rc_ptr<WDTTerritory>::`vftable'; /*0x596007*/
    ComPtr::Release((ComPtr *)&v17.ComPtr_field_0x08); /*0x59600b*/
  }
  if ( v17.ComPtr_field_0x04 ) /*0x596016*/
    g_MissionQueueFrame.briefing[376] = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, (const char *)&stru_82BA00.?[13], 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  __3_YAXPAX_Z(v5); /*0x596060*/
  strncat(Destination, (const char *)&stru_82BA00.?[11], 0x80u); /*0x596077*/
  CCFileClass::Construct(&v18, Destination); /*0x59608b*/
  if ( (unsigned __int8)CCFileClass::Open(&v18, 0) ) /*0x596097*/
  {
    v6 = (Surface *)g_MissionQueueFrame.briefing[451]; /*0x5960a4*/
    if ( !g_MissionQueueFrame.briefing[451] ) /*0x5960ab*/
    {
      v7 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (Surface *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      g_MissionQueueFrame.briefing[451] = (int)v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP(v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct((RawFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x5960e7*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x5960fc*/
      v8 = (void *)g_MissionQueueFrame.briefing[451]; /*0x596101*/
      if ( g_MissionQueueFrame.briefing[451] ) /*0x596109*/
      {
        ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x59610d*/
        __3_YAXPAX_Z(v8); /*0x596113*/
      }
      g_MissionQueueFrame.briefing[451] = 0; /*0x59611f*/
      RawFileClass::Dtor((RawFileClass *)&v17.ComPtr_field_0x10); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = (void *)g_MissionQueueFrame.briefing[451]; /*0x59612f*/
    if ( g_MissionQueueFrame.briefing[451] ) /*0x596137*/
    {
      ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x59613b*/
      __3_YAXPAX_Z(v9); /*0x596141*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x596149*/
  }
  *(_DWORD *)&stru_82ADA8.?[31] = a2; /*0x596154*/
  g_MissionQueueFrame.briefing[361] = (int)a2; /*0x59615d*/
  if ( g_MissionQueueFrame.briefing[385] == -1 ) /*0x596163*/
    g_MissionQueueFrame.briefing[385] = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((RandomMap *)&g_MissionQueueFrame.briefing[356], 1, hDlg); /*0x596182*/
  MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x59618d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5961a2*/
    MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x5961aa*/
  if ( g_MissionQueueFrame.briefing[450] ) /*0x5961b7*/
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x5961bd*/
  v10 = __2_YAPAXI_Z(0x178u); /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (int *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  g_MissionQueueFrame.briefing[450] = (int)v11; /*0x5961e7*/
  qmemcpy(v11, &g_MissionQueueFrame.briefing[356], 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)dword_A8B230, (char *)&stru_82BA00.?[8]); /*0x5961f9*/
  LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12, v15); /*0x596200*/
  v13 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x596205*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x59620f*/
  {
    if ( *(_DWORD *)g_MissionQueueFrame.briefing[451] ) /*0x596215*/
    {
      RawFileClass::Construct((RawFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x596222*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x596237*/
      if ( FindFirstFileA((LPCSTR)&stru_82BA00.?[6], &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA((LPCSTR)&stru_82BA00.?[6], 0); /*0x59625a*/
      CopyFileA(ExistingFileName, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(v16); /*0x596274*/
      RawFileClass::Dtor((RawFileClass *)&v17.ComPtr_field_0x10); /*0x59627d*/
      v13 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      __3_YAXPAX_Z(v13); /*0x596294*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x59629c*/
  }
  if ( g_MissionQueueFrame.briefing[450] ) /*0x5962aa*/
  {
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x5962b0*/
    g_MissionQueueFrame.briefing[450] = 0; /*0x5962b2*/
  }
LABEL_39:
  *(_DWORD *)v18.CDFileClass = &CCFileClass::`vftable'; /*0x5962b8*/
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  *(_DWORD *)v18.CDFileClass = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v18); /*0x5962df*/
  *(_DWORD *)v17.__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x5962e8*/
  return ComPtr::Release(&v17); /*0x5962f5*/
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
      EnableWindow(DlgItem, byte_A8ED6B == 0); /*0x596ba6*/
      if ( dword_ABE04C == -1 ) /*0x596baf*/
      {
        dword_ABE04C = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 0xFFFF); /*0x596bc8*/
        byte_ABE2D8 = 1; /*0x596bcd*/
      }
      byte_82B030 = 1; /*0x596bda*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x596be1*/
      v66 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x596bf6*/
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
      if ( dword_ABE154 ) /*0x596aad*/
      {
        v55 = GetDlgItem(hWnd, 1128); /*0x596ab5*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(v55) ) /*0x596abd*/
          Skirmish::RenderPreview(dword_ABE154, hWnd); /*0x596acd*/
      }
      if ( LoadScreen::IsActive(dword_AC4F58) ) /*0x596ad7*/
        LoadScreen::Render((int)dword_AC4F58, a3, (int)hWnd, NAN); /*0x596aed*/
      ValidateRect(hWnd, 0); /*0x596af5*/
      return 0; /*0x596afe*/
    case 0x111u: /*0x596342*/
      if ( (unsigned __int16)a3 > 0x621u ) /*0x596369*/
      {
        switch ( (__int16)a3 ) /*0x5968c5*/
        {
          case 1730: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596945*/
            if ( (unsigned __int8)LoadOptions::Run(byte_ABDFD8) ) /*0x59694f*/
            {
              byte_82B030 = 0; /*0x596963*/
              v53 = GetDlgItem(hWnd, 1568); /*0x59696a*/
              PostMessageA(hWnd, 0x111u, 0x620u, (LPARAM)v53); /*0x59697c*/
            }
            while ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x59698a*/
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x596999*/
            RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x5969b1*/
            return 0; /*0x5969bc*/
          case 1731: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5968d2*/
            ShowSaveLoadDialog(&unk_ABE050); /*0x5968e1*/
            v64 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x5968fc*/
            v50 = GetDlgItem(hWnd, 1730); /*0x596900*/
            v51 = v64; /*0x596908*/
            if ( v50 ) /*0x59690e*/
              EnableWindow(v50, v64); /*0x59691a*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596922*/
            if ( !v52 ) /*0x596926*/
              return 0; /*0x596926*/
            goto LABEL_53; /*0x596926*/
          case 1732: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5969c5*/
            Options::PrepareSaveLoadDlg(byte_ABDFD8); /*0x5969cf*/
            v65 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x5969ea*/
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
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596a33*/
            if ( byte_A8ED6B ) /*0x596a3f*/
            {
              RandomMap::Generate((int *)byte_ABDFD8, 0, hWnd); /*0x596a49*/
            }
            else if ( dword_ABE154 && *(_DWORD *)dword_ABE154 /*0x596a72*/
                   || (RandomMap::Generate((int *)byte_ABDFD8, 1, hWnd), !byte_A8ED6B) )
            {
LABEL_69:
              *(_DWORD *)v63 = 1; /*0x596a90*/
              return 1; /*0x596aa3*/
            }
            ScenarioClass::SetFileName((char *)dword_A8B230, aRandomMap); /*0x596a7f*/
            SaveScenarioToINI(aRandmapMap); /*0x596a8b*/
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
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5963d9*/
            InvalidateRect(hWnd, 0, 0); /*0x5963e9*/
            return 0; /*0x5963f5*/
          }
          return 0; /*0x5963a5*/
        }
        if ( (unsigned __int16)a3 == 1568 ) /*0x59640f*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x59641d*/
          if ( byte_82B030 ) /*0x596427*/
          {
            byte_ABE2D8 = 1; /*0x596429*/
          }
          else
          {
            byte_ABE2D8 = 0; /*0x596432*/
            byte_82B030 = 1; /*0x596439*/
          }
          Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596446*/
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
          if ( dword_A8B230 ) /*0x59649c*/
          {
            *((_DWORD *)dword_A8B230 + 1103) = 0; /*0x5964a2*/
            v11 = dword_A8B230; /*0x5964a8*/
            if ( *((int *)dword_A8B230 + 1103) > 0 ) /*0x5964b4*/
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
                *(_DWORD *)((char *)dword_A8B230 + v12 * 4 + 4) = v16; /*0x596505*/
                v12 += 2; /*0x596513*/
                *(_DWORD *)((char *)dword_A8B230 + v13 * 4 - 4) = dword_ABE304[v13 - 1137]; /*0x59651a*/
                v11 = dword_A8B230; /*0x59651e*/
                if ( v10 >= *((_DWORD *)dword_A8B230 + 1103) ) /*0x59652a*/
                  break; /*0x59652a*/
              }
            }
            v11[1099] = dword_ABDFD4; /*0x596531*/
            *((_DWORD *)dword_A8B230 + 1100) = dword_ABDFD0; /*0x596543*/
            *((_DWORD *)dword_A8B230 + 1101) = dword_ABEC90; /*0x596554*/
            *((_DWORD *)dword_A8B230 + 1102) = dword_ABECD0; /*0x596565*/
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
          String = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596631*/
          wcscpy(&unk_ABE050, String); /*0x59663c*/
          RandomMap::Generate((int *)byte_ABDFD8, 1, hWnd); /*0x59664c*/
          MiniMap::Render((char **)dword_ABE154); /*0x596657*/
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
          qmemcpy(v45, byte_ABDFD8, 0x178u); /*0x596742*/
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x59674c*/
          Timer::PumpMessages((HWND *)dword_87F770); /*0x596755*/
          PostMessageA(hWnd, 0xFu, 0, 0); /*0x596761*/
          return 0; /*0x59676d*/
        }
        return 0; /*0x596c48*/
      }
      Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596776*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x596781*/
      dword_ABE010 = (unsigned int)Random::Range(Randomizer_Global, 0, 100) >= 0x32; /*0x59679e*/
      dword_ABE014 = Random::Range(Randomizer_Global, 1, 4); /*0x5967b7*/
      dword_ABE020 = Random::Range(Randomizer_Global, 0, 3); /*0x5967ca*/
      dword_ABE018 = Random::Range(Randomizer_Global, 0, 3); /*0x5967dd*/
      dword_ABE03C = Random::Range(Randomizer_Global, 0, 3); /*0x5967f3*/
      dword_ABE040 = dword_ABE03C; /*0x5967f8*/
      Skirmish::RandomizeSettings(byte_ABDFD8, dword_ABE014); /*0x5967fd*/
      v46 = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596813*/
      wcscpy(&unk_ABE050, v46); /*0x59681e*/
      dword_ABE04C = Random::Range(Randomizer_Global, 0, 0xFFFF); /*0x59683c*/
      SettingsClass::ClampValues((int *)byte_ABDFD8); /*0x596841*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x59684c*/
      v47 = dword_ABE154; /*0x596851*/
      if ( dword_ABE154 ) /*0x596859*/
      {
        ComPtr::Dtor(dword_ABE154); /*0x59685d*/
        __3_YAXPAX_Z(v47); /*0x596863*/
      }
      dword_ABE154 = 0; /*0x596877*/
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



// ==== 0x00596C70  Skirmish::ReadSettings  this=Skirmish  sig=csp ====
int __thiscall Skirmish::ReadSettings(Skirmish *this, HWND hDlg)
{
  LRESULT v4; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  LRESULT v9; // eax
  LRESULT v10; // eax
  LRESULT v11; // eax
  HWND DlgItem; // eax
  LRESULT v13; // eax
  void *v14; // edi
  LRESULT v16; // [esp-8h] [ebp-1Ch]
  LRESULT v17; // [esp-8h] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+10h] [ebp-4h]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]
  HWND hDlga; // [esp+18h] [ebp+4h]
  HWND hDlgb; // [esp+18h] [ebp+4h]
  HWND hDlgc; // [esp+18h] [ebp+4h]
  HWND hDlgd; // [esp+18h] [ebp+4h]
  HWND hDlge; // [esp+18h] [ebp+4h]
  HWND hDlgf; // [esp+18h] [ebp+4h]

  v18 = this->q03C; /*0x596c8a*/
  hDlga = GetDlgItem(hDlg, 1029); /*0x596ca2*/
  v4 = SendMessageA(hDlga, 0x147u, 0, 0); /*0x596ca6*/
  v5 = SendMessageA(hDlga, 0x150u, v4, 0); /*0x596cb3*/
  this->q03C = v5; /*0x596cb9*/
  if ( v18 != v5 ) /*0x596cbe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596cc0*/
  v19 = this->u32_38; /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v16 = SendMessageA(hDlgb, 0x147u, 0, 0); /*0x596ce8*/
  v6 = SendMessageA(hDlgb, 0x150u, v16, 0); /*0x596cf3*/
  this->u32_38 = v6; /*0x596cf9*/
  if ( v19 != v6 ) /*0x596cfe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d00*/
  v20 = this->u32_40; /*0x596d10*/
  hDlgc = GetDlgItem(hDlg, 1032); /*0x596d22*/
  v7 = SendMessageA(hDlgc, 0x147u, 0, 0); /*0x596d26*/
  v8 = SendMessageA(hDlgc, 0x150u, v7, 0); /*0x596d33*/
  this->u32_40 = v8; /*0x596d39*/
  if ( v20 != v8 ) /*0x596d3e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d40*/
  v21 = this->u32_48; /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v9 = SendMessageA(hDlgd, 0x147u, 0, 0); /*0x596d66*/
  v10 = SendMessageA(hDlgd, 0x150u, v9, 0); /*0x596d73*/
  this->u32_48 = v10; /*0x596d79*/
  if ( v21 != v10 ) /*0x596d7e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d80*/
  v22 = this->u32_64; /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v17 = SendMessageA(hDlge, 0x147u, 0, 0); /*0x596da8*/
  v11 = SendMessageA(hDlge, 0x150u, v17, 0); /*0x596db3*/
  this->u32_64 = v11; /*0x596db9*/
  this->u32_68 = v11; /*0x596dbe*/
  if ( v22 != v11 ) /*0x596dc1*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596dc3*/
  hDlgf = (HWND)this->u32_50; /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v13 = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x596de3*/
  this->u32_50 = v13; /*0x596de9*/
  if ( hDlgf == (HWND)v13 ) /*0x596dee*/
  {
    if ( !g_MissionQueueFrame.globalVariables[88] ) /*0x596e00*/
      return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e00*/
  }
  else
  {
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596df0*/
  }
  Skirmish::RandomizeSettings(this, this->q03C); /*0x596e08*/
  v14 = (void *)g_MissionQueueFrame.briefing[451]; /*0x596e0d*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x596e15*/
  {
    ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x596e19*/
    __3_YAXPAX_Z(v14); /*0x596e1f*/
  }
  g_MissionQueueFrame.briefing[451] = 0; /*0x596e27*/
  g_MissionQueueFrame.globalVariables[88] = 0; /*0x596e31*/
  return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e3f*/
}



// ==== 0x00596E50  RandomMap::SetupDialog  this=RandomMap  sig=csp ====
int __thiscall RandomMap::SetupDialog(RandomMap *this, HWND hDlg)
{
  HWND i; // edi
  LPARAM v3; // ebp
  int *p_LoopStart; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  wchar_t *v7; // eax
  LRESULT v8; // eax
  HWND j; // edi
  LPARAM v10; // ebp
  wchar_t **p_Next; // ebx
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
  RandomMap *v28; // ebp
  wchar_t *v29; // eax
  LRESULT v30; // eax
  HWND n; // edi
  char *pad_2A0; // ebx
  wchar_t *v33; // eax
  LRESULT v34; // eax
  wchar_t *v35; // eax
  LRESULT v36; // eax
  HWND DlgItem; // edi
  HWND v38; // eax
  LPARAM v39; // ebx
  HWND v40; // edi
  int result; // eax
  LPARAM lParama; // [esp+10h] [ebp-4h]

  SettingsClass::ClampValues((SettingsClass *)this); /*0x596e59*/
  for ( i = GetDlgItem(hDlg, 1002); SendMessageA(i, 0x146u, 0, 0) > 0; SendMessageA(i, 0x144u, 0, 0) ) /*0x596e76*/
    ; /*0x596e90*/
  v3 = 0; /*0x596ea2*/
  p_LoopStart = &stru_82ADA8.LoopStart; /*0x596ea4*/
  do /*0x596edb*/
  {
    StringCSF = GetStringCSF((wchar_t *)*p_LoopStart, 0, &stru_82BA00.?[11], 4883); /*0x596eb7*/
    v6 = SendMessageA(i, 0x4C2u, 0, (LPARAM)StringCSF); /*0x596ec5*/
    SendMessageA(i, 0x151u, v6, v3); /*0x596ecf*/
    ++p_LoopStart; /*0x596ed1*/
    ++v3; /*0x596ed4*/
  }
  while ( (int)p_LoopStart < (int)&stru_82ADA8.Next ); /*0x596edb*/
  v7 = GetStringCSF( /*0x596ef7*/
         *((wchar_t **)&stru_82ADA8.LoopStart + (int)this->RandomMap_field_0x48),
         0,
         &stru_82BA00.?[11],
         4887);
  v8 = SendMessageA(i, 0x4BEu, 0, (LPARAM)v7); /*0x596f05*/
  SendMessageA(i, 0x14Eu, v8, 0); /*0x596f10*/
  for ( j = GetDlgItem(hDlg, 1030); SendMessageA(j, 0x146u, 0, 0) > 0; SendMessageA(j, 0x144u, 0, 0) ) /*0x596f24*/
    ; /*0x596f3e*/
  v10 = 0; /*0x596f50*/
  p_Next = (wchar_t **)&stru_82ADA8.Next; /*0x596f52*/
  do /*0x596f89*/
  {
    v12 = GetStringCSF(*p_Next, 0, &stru_82BA00.?[11], 4898); /*0x596f65*/
    v13 = SendMessageA(j, 0x4C2u, 0, (LPARAM)v12); /*0x596f73*/
    SendMessageA(j, 0x151u, v13, v10); /*0x596f7d*/
    ++p_Next; /*0x596f7f*/
    ++v10; /*0x596f82*/
  }
  while ( (int)p_Next < (int)&stru_82ADA8.TranslucencyDetailLevel ); /*0x596f89*/
  v14 = GetStringCSF(*((wchar_t **)&stru_82ADA8.Next + *(_DWORD *)&this->__pad_4C[24]), 0, &stru_82BA00.?[11], 4902); /*0x596fa5*/
  v15 = SendMessageA(j, 0x4BEu, 0, (LPARAM)v14); /*0x596fb3*/
  SendMessageA(j, 0x14Eu, v15, 0); /*0x596fbe*/
  for ( k = GetDlgItem(hDlg, 1029); SendMessageA(k, 0x146u, 0, 0) > 0; SendMessageA(k, 0x144u, 0, 0) ) /*0x596fd2*/
    ; /*0x596fec*/
  v17 = 1; /*0x596ffe*/
  v18 = (wchar_t **)&stru_82ADA8.?[19]; /*0x597003*/
  do /*0x59703a*/
  {
    v19 = GetStringCSF(*v18, 0, &stru_82BA00.?[11], 4914); /*0x597016*/
    v20 = SendMessageA(k, 0x4C2u, 0, (LPARAM)v19); /*0x597024*/
    SendMessageA(k, 0x151u, v20, v17); /*0x59702e*/
    ++v18; /*0x597030*/
    ++v17; /*0x597033*/
  }
  while ( (int)v18 < (int)stru_82ADA8.__pad_2A0 ); /*0x59703a*/
  v21 = GetStringCSF((wchar_t *)stru_82ADA8.?[this->RandomMap_field_0x3C[0] + 18], 0, &stru_82BA00.?[11], 4918); /*0x597056*/
  v22 = SendMessageA(k, 0x4BEu, 0, (LPARAM)v21); /*0x597064*/
  SendMessageA(k, 0x14Eu, v22, 0); /*0x59706f*/
  for ( m = GetDlgItem(hDlg, 1031); SendMessageA(m, 0x146u, 0, 0) > 0; SendMessageA(m, 0x144u, 0, 0) ) /*0x597083*/
    ; /*0x59709d*/
  v24 = 0; /*0x5970af*/
  v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
  do /*0x5970e8*/
  {
    v26 = GetStringCSF(v25, 0, &stru_82BA00.?[11], 4930); /*0x5970c4*/
    v27 = SendMessageA(m, 0x4C2u, 0, (LPARAM)v26); /*0x5970d2*/
    SendMessageA(m, 0x151u, v27, v24); /*0x5970dc*/
    v25 += 56; /*0x5970de*/
    ++v24; /*0x5970e1*/
  }
  while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
  v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * this->RandomMap_field_0x38[0]], 0, &stru_82BA00.?[11], 4934); /*0x59710f*/
  v30 = SendMessageA(m, 0x4BEu, 0, (LPARAM)v29); /*0x59711d*/
  SendMessageA(m, 0x14Eu, v30, 0); /*0x597128*/
  for ( n = GetDlgItem(hDlg, 1032); SendMessageA(n, 0x146u, 0, 0) > 0; SendMessageA(n, 0x144u, 0, 0) ) /*0x59713c*/
    ; /*0x597156*/
  lParama = 0; /*0x597168*/
  pad_2A0 = stru_82ADA8.__pad_2A0; /*0x597170*/
  do /*0x5971b3*/
  {
    v33 = GetStringCSF(*(wchar_t **)pad_2A0, 0, &stru_82BA00.?[11], 4945); /*0x597183*/
    v34 = SendMessageA(n, 0x4C2u, 0, (LPARAM)v33); /*0x597191*/
    SendMessageA(n, 0x151u, v34, lParama); /*0x59719f*/
    pad_2A0 += 4; /*0x5971a5*/
    ++lParama; /*0x5971af*/
  }
  while ( (int)pad_2A0 < (int)&stru_82ADA8.Rate ); /*0x5971b3*/
  v35 = GetStringCSF(*(wchar_t **)&stru_82ADA8.__pad_2A0[4 * v28->RandomMap_field_0x40[0]], 0, &stru_82BA00.?[11], 4949); /*0x5971cb*/
  v36 = SendMessageA(n, 0x4BEu, 0, (LPARAM)v35); /*0x5971d9*/
  SendMessageA(n, 0x14Eu, v36, 0); /*0x5971e4*/
  DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
  sprintf((char *const)&g_MissionQueueFrame.localVariables[135], "%d", *(_DWORD *)&v28->__pad_4C[40]); /*0x597206*/
  SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_MissionQueueFrame.localVariables[135]); /*0x59721b*/
  v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
  v39 = *(_DWORD *)&v28->__pad_4C[4]; /*0x597229*/
  v40 = v38; /*0x597231*/
  SendMessageA(v38, 0x406u, 1u, 524290); /*0x59723b*/
  result = SendMessageA(v40, 0x405u, 1u, v39); /*0x597246*/
  *(_DWORD *)&v28->__pad_4C[4] = v39; /*0x597249*/
  return result; /*0x597248*/
}



// ==== 0x00597260  Skirmish::RandomizeSettings  this=Skirmish  sig=csp ====
int __thiscall Skirmish::RandomizeSettings(Skirmish *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  this->u32_4C = Random::Range( /*0x597282*/
                             &Randomizer_Global,
                             *((_DWORD *)&stru_82ADA8.BounceAnim + a2),
                             stru_82ADA8.Elasticity[a2 + 1]);
  this->ptr_44 = Random::Range(&Randomizer_Global, stru_82ADA8.Layer[a2], dword_82B120[a2]); /*0x59729f*/
  this->ptr_60 = Random::Range( /*0x5972bc*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[a2 + 175],
                             *(&stru_82ADA8.RunningFrames + a2));
  this->u32_6C = Random::Range( /*0x5972d9*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[a2 + 165],
                             stru_82ADA8.MaxXYVel[a2]);
  this->ptr_70 = Random::Range( /*0x5972f6*/
                             &Randomizer_Global,
                             *(&stru_82ADA8.TranslucencyDetailLevel + a2),
                             stru_82ADA8.RandomRate[a2 + 2]);
  this->u32_54 = 20 * this->u32_40; /*0x59730b*/
  this->u32_58 = Random::Range(&Randomizer_Global, 0, 100); /*0x597313*/
  v3 = *(_DWORD *)(g_MissionQueueFrame.briefingCsf[6] + 4 * a2); /*0x597322*/
  v4 = *(_DWORD *)(g_MissionQueueFrame.percent + 4 * a2); /*0x597325*/
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
  this->u32_5C = Random::Range(&Randomizer_Global, v3, v4); /*0x59736a*/
  result = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x59736d*/
  this->ptr_74 = result; /*0x597372*/
  return result; /*0x597375*/
}



// ==== 0x00597430  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Start_597430(ObjectClass *this)
{
  _DWORD *WDTTerritoryClass; // eax
  int v3; // ecx
  int v4; // eax
  void **v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch]
  rc_ptr v8[4]; // [esp+14h] [ebp-8h] BYREF

  ComPtr::Constructor((ComPtr *)&v6); /*0x59743c*/
  v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x59744e*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x59745f*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass(v8, *(int *)dword_A8B240); /*0x59746b*/
    ComPtr::Set((ComPtr *)&v6, WDTTerritoryClass[1]); /*0x597478*/
    *(_DWORD *)v8 = &rc_ptr<WDTTerritory>::`vftable'; /*0x597481*/
    ComPtr::Release((ComPtr *)v8); /*0x597485*/
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
      v4 = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x5974ab*/
      v3 = v7; /*0x5974b0*/
    }
    *(_DWORD *)&this->isOnMap = v4; /*0x5974bb*/
    switch ( *(_BYTE *)(v3 + 18) ) /*0x5974d1*/
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
    switch ( *(_BYTE *)(v3 + 19) ) /*0x5974f7*/
    {
      case 0: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 0; /*0x5974fe*/
        break; /*0x597505*/
      case 2: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 2; /*0x597507*/
        break; /*0x59750a*/
      case 3: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 3; /*0x59750c*/
        break; /*0x59750f*/
      default:
        *(_DWORD *)&this->bombVisible = 1; /*0x597511*/
        break; /*0x597511*/
    }
    this->customSound_controller[0] = 4; /*0x597516*/
    switch ( *(_BYTE *)(v3 + 30) ) /*0x597524*/
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
    this->ambientSoundController[0] = *(unsigned __int8 *)(v3 + 28); /*0x59754d*/
    this->attachedBomb = (BombClass *)*(unsigned __int8 *)(v3 + 29); /*0x597555*/
    this->estimatedHealth = *(unsigned __int8 *)(v3 + 33); /*0x59755d*/
    this->health = *(unsigned __int8 *)(v3 + 36); /*0x597565*/
    this->ambientSoundController[2] = *(unsigned __int8 *)(v3 + 39); /*0x59756d*/
    this->ambientSoundController[4] = *(unsigned __int8 *)(v3 + 42); /*0x597575*/
    this->customSound_controller[1] = *(unsigned __int8 *)(v3 + 45); /*0x59757d*/
    this->customSound_controller[2] = *(unsigned __int8 *)(v3 + 48); /*0x597585*/
    this->customSound_controller[3] = *(unsigned __int8 *)(v3 + 51); /*0x59758d*/
    this->customSound_controller[4] = *(unsigned __int8 *)(v3 + 54); /*0x597593*/
    this->ambientSoundController[1] = *(_DWORD *)(v3 + 24); /*0x597599*/
  }
  v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x5975a0*/
  return ComPtr::Release((ComPtr *)&v6); /*0x5975a9*/
}



// ==== 0x005975E0  SettingsClass::ClampValues  this=SettingsClass  sig=csp ====
int __thiscall SettingsClass::ClampValues(SettingsClass *this)
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

  v1 = *((_DWORD *)this + 16); /*0x5975e0*/
  if ( v1 < 4 ) /*0x5975ef*/
  {
    if ( v1 < 0 ) /*0x5975f8*/
      *((_DWORD *)this + 16) = 0; /*0x5975fa*/
  }
  else
  {
    *((_DWORD *)this + 16) = 3; /*0x5975f1*/
  }
  v2 = *((_DWORD *)this + 15); /*0x5975fd*/
  if ( v2 < 5 ) /*0x597603*/
  {
    if ( v2 < 0 ) /*0x597610*/
      *((_DWORD *)this + 15) = 0; /*0x597612*/
  }
  else
  {
    *((_DWORD *)this + 15) = 4; /*0x597605*/
  }
  v3 = *((_DWORD *)this + 18); /*0x597615*/
  if ( v3 < 4 ) /*0x59761b*/
  {
    if ( v3 < 0 ) /*0x597624*/
      *((_DWORD *)this + 18) = 0; /*0x597626*/
  }
  else
  {
    *((_DWORD *)this + 18) = 3; /*0x59761d*/
  }
  v4 = *((_DWORD *)this + 17); /*0x597629*/
  if ( v4 <= 100 ) /*0x597633*/
  {
    if ( v4 < 0 ) /*0x59763c*/
      *((_DWORD *)this + 17) = 0; /*0x59763e*/
  }
  else
  {
    *((_DWORD *)this + 17) = 100; /*0x597635*/
  }
  v5 = *((_DWORD *)this + 19); /*0x597641*/
  if ( v5 <= 100 ) /*0x597646*/
  {
    if ( v5 < 0 ) /*0x59764f*/
      *((_DWORD *)this + 19) = 0; /*0x597651*/
  }
  else
  {
    *((_DWORD *)this + 19) = 100; /*0x597648*/
  }
  v6 = *((_DWORD *)this + 20); /*0x597654*/
  if ( v6 <= 8 ) /*0x59765a*/
  {
    if ( v6 < 2 ) /*0x597668*/
      *((_DWORD *)this + 20) = 2; /*0x59766a*/
  }
  else
  {
    *((_DWORD *)this + 20) = 8; /*0x59765c*/
  }
  v7 = *((_DWORD *)this + 21); /*0x597671*/
  if ( v7 <= 100 ) /*0x597676*/
  {
    if ( v7 < 1 ) /*0x597680*/
      *((_DWORD *)this + 21) = 1; /*0x597682*/
  }
  else
  {
    *((_DWORD *)this + 21) = 100; /*0x597678*/
  }
  v8 = *((_DWORD *)this + 22); /*0x597689*/
  if ( v8 <= 100 ) /*0x59768e*/
  {
    if ( v8 < 0 ) /*0x597697*/
      *((_DWORD *)this + 22) = 0; /*0x597699*/
  }
  else
  {
    *((_DWORD *)this + 22) = 100; /*0x597690*/
  }
  v9 = *((_DWORD *)this + 23); /*0x59769c*/
  if ( v9 <= 100 ) /*0x5976a1*/
  {
    if ( v9 < 0 ) /*0x5976aa*/
      *((_DWORD *)this + 23) = 0; /*0x5976ac*/
  }
  else
  {
    *((_DWORD *)this + 23) = 100; /*0x5976a3*/
  }
  v10 = *((_DWORD *)this + 24); /*0x5976af*/
  if ( v10 <= 100 ) /*0x5976b4*/
  {
    if ( v10 < 0 ) /*0x5976bd*/
      *((_DWORD *)this + 24) = 0; /*0x5976bf*/
  }
  else
  {
    *((_DWORD *)this + 24) = 100; /*0x5976b6*/
  }
  v11 = *((_DWORD *)this + 25); /*0x5976c2*/
  if ( v11 < 4 ) /*0x5976c8*/
  {
    if ( v11 < 0 ) /*0x5976d1*/
      *((_DWORD *)this + 25) = 0; /*0x5976d3*/
  }
  else
  {
    *((_DWORD *)this + 25) = 3; /*0x5976ca*/
  }
  v12 = *((_DWORD *)this + 26); /*0x5976d6*/
  if ( v12 < 4 ) /*0x5976dc*/
  {
    if ( v12 < 0 ) /*0x5976e5*/
      *((_DWORD *)this + 26) = 0; /*0x5976e7*/
  }
  else
  {
    *((_DWORD *)this + 26) = 3; /*0x5976de*/
  }
  v13 = *((_DWORD *)this + 27); /*0x5976ea*/
  if ( v13 <= 100 ) /*0x5976ef*/
  {
    if ( v13 < 0 ) /*0x5976f8*/
      *((_DWORD *)this + 27) = 0; /*0x5976fa*/
  }
  else
  {
    *((_DWORD *)this + 27) = 100; /*0x5976f1*/
  }
  v14 = *((_DWORD *)this + 28); /*0x5976fd*/
  if ( v14 <= 100 ) /*0x597702*/
  {
    if ( v14 < 0 ) /*0x59770b*/
      *((_DWORD *)this + 28) = 0; /*0x59770d*/
  }
  else
  {
    *((_DWORD *)this + 28) = 100; /*0x597704*/
  }
  result = *((_DWORD *)this + 29); /*0x597710*/
  if ( result <= 0xFFFF ) /*0x597718*/
  {
    if ( result < 0 ) /*0x597726*/
      *((_DWORD *)this + 29) = 0; /*0x597728*/
  }
  else
  {
    *((_DWORD *)this + 29) = 0xFFFF; /*0x59771b*/
  }
  return result; /*0x59771a*/
}



// ==== 0x00597730  MapSeed::ValidateName  this=MapSeed  sig=csp ====
int __thiscall MapSeed::ValidateName(char *this, int a2)
{
  int result; // eax

  if ( a2 ) /*0x597736*/
    return (*(int (__stdcall **)(int, char *))(this->q008)(a2, this + 120); /*0x597740*/
  LOBYTE(result) = ShowSaveLoadDialog((int)this, this + 120); /*0x597752*/
  return result; /*0x597744*/
}



// ==== 0x00597760  MapSeedClass::Release  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::Release(MapSeedClass *this, char *a2, wchar_t *Source)
{
  INIClass v5; // [esp+Ch] [ebp-ACh] BYREF
  CCFileClass v6; // [esp+4Ch] [ebp-6Ch] BYREF
  int v7[3]; // [esp+A4h] [ebp-14h] BYREF
  int v8; // [esp+B0h] [ebp-8h]

  if ( !a2 ) /*0x597776*/
    return 0; /*0x5979f9*/
  Debug::Log(); /*0x59778b*/
  CCFileClass::Construct(&v6, a2); /*0x597798*/
  v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x5977a6*/
  v5.sectionCount = (int)&GenericNode::`vftable'; /*0x5977aa*/
  v5.headNode[0] = 0; /*0x5977b2*/
  v5.headNode[1] = 0; /*0x5977b7*/
  v5.sectionHead[1] = 0; /*0x5977bb*/
  v5.sectionHead[2] = 0; /*0x5977bf*/
  *(_DWORD *)v5.__pad_20 = 0; /*0x5977c3*/
  *(_DWORD *)&v5.__pad_20[4] = 0; /*0x5977c7*/
  LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x5977d3*/
  v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x5977da*/
  memset(&v5.__pad_20[8], 0, 13); /*0x5977e2*/
  v5.unknown38 = 0; /*0x5977f2*/
  v5.INIClass_field_3C = 0; /*0x5977f6*/
  *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x5977fa*/
  if ( Source ) /*0x597802*/
    wcscpy((wchar_t *)this + 60, Source); /*0x597809*/
  INIClass::SetWideAsHex(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_81AF8C.?[5], Source); /*0x597820*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[151], *((_DWORD *)this + 25), 0); /*0x597838*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Height, *((_DWORD *)this + 26), 0); /*0x597850*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[139], this->q014, 0); /*0x597868*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[131], *((_DWORD *)this + 29), 0); /*0x597880*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[123], *((_DWORD *)this + 15), 0); /*0x597898*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Theater, *((_DWORD *)this + 14), 0); /*0x5978b0*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Time, *((_DWORD *)this + 18), 0); /*0x5978c8*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[111], this->q01C, 0); /*0x5978e0*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[99], *((_DWORD *)this + 17), 0); /*0x5978f8*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[83], *((_DWORD *)this + 27), 0); /*0x597910*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[71], *((_DWORD *)this + 19), 0); /*0x597928*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Tiberium, *((_DWORD *)this + 21), 0); /*0x597940*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[55], this->M16, 0); /*0x597958*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[43], *((_DWORD *)this + 23), 0); /*0x597970*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[27], this->q018, 0); /*0x597988*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[15], this->q010, 0); /*0x5979a0*/
  INIClass::SaveToPipe(&v5, (int)&v6); /*0x5979ae*/
  HashTable::DestroyHashTableINIClass(&v5); /*0x5979b7*/
  *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x5979c3*/
  v8 = 0; /*0x5979cb*/
  Vector::Clear((int)v7); /*0x5979d2*/
  *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x5979db*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x5979e3*/
  return 1; /*0x5979e9*/
}



// ==== 0x00597A10  Scenario::LoadOrReloadOptions  this=Scenario  sig=csp ====
char __thiscall Scenario::LoadOrReloadOptions(Scenario *this, int a2)
{
  if ( a2 ) /*0x597a16*/
    return (*(char (__thiscall **)(Scenario *, int))(this->Scenario_field_0x0 + 4))(this, a2); /*0x597a1b*/
  else
    return (unsigned __int8)LoadOptions::Run((LoadOptions *)this) != 0; /*0x597a28*/
}



// ==== 0x00597A30  MapSeedClass::AddRef  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::AddRef(MapSeedClass *this, char *Source)
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
  INIClass v25; // [esp+Ch] [ebp-ACh] BYREF
  CCFileClass v26; // [esp+4Ch] [ebp-6Ch] BYREF
  int v27[3]; // [esp+A4h] [ebp-14h] BYREF
  int v28; // [esp+B0h] [ebp-8h]

  if ( Source ) /*0x597a46*/
  {
    Debug::Log(); /*0x597a52*/
    CCFileClass::Construct(&v26, Source); /*0x597a5f*/
    v25.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x597a6d*/
    v25.sectionCount = (int)&GenericNode::`vftable'; /*0x597a71*/
    v25.headNode[0] = 0; /*0x597a79*/
    v25.headNode[1] = 0; /*0x597a7e*/
    v25.sectionHead[1] = 0; /*0x597a82*/
    v25.sectionHead[2] = 0; /*0x597a86*/
    *(_DWORD *)v25.__pad_20 = 0; /*0x597a8a*/
    *(_DWORD *)&v25.__pad_20[4] = 0; /*0x597a8e*/
    LinkedList::Prepend((LinkedList *)v25.sectionHead, (int)&v25.sectionCount); /*0x597a9a*/
    v25.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x597aa9*/
    memset(&v25.__pad_20[8], 0, 13); /*0x597ab1*/
    v25.unknown38 = 0; /*0x597ac1*/
    v25.INIClass_field_3C = 0; /*0x597ac5*/
    *(_DWORD *)v25.__pad_0 = &INIClass::`vftable'; /*0x597ac9*/
    if ( FileStraw::Open((FileStraw *)&v25, (int)&v26, 0) ) /*0x597ad1*/
    {
      StringCSF = GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.?[11], 5433); /*0x597af8*/
      INIClass::ParseValue_Wide( /*0x597b0c*/
        &v25,
        (unsigned __int8 *)&stru_82BA00.?[8],
        (unsigned __int8 *)&stru_81AF8C.?[5],
        StringCSF,
        (wchar_t *)this + 60,
        0x80u);
      Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x597b23*/
                        (bool *)v25.__pad_0,
                        (unsigned __int8 *)&stru_82BA00.?[8],
                        (unsigned __int8 *)&stru_82BA00.?[151],
                        *((_DWORD *)this + 25));
      v5 = *((_DWORD *)this + 26); /*0x597b28*/
      *((_DWORD *)this + 25) = Int_Overwrite; /*0x597b2b*/
      v6 = INIClass::ReadInt_Overwrite( /*0x597b3d*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)g_INI_Key_Height,
             v5);
      v20 = this->q014; /*0x597b49*/
      *((_DWORD *)this + 26) = v6; /*0x597b54*/
      this->q014 = INIClass::ReadInt_Overwrite( /*0x597b5c*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[139],
                                 v20);
      v7 = INIClass::ReadInt_Overwrite( /*0x597b71*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)&stru_82BA00.?[131],
             *((_DWORD *)this + 29));
      v8 = *((_DWORD *)this + 15); /*0x597b76*/
      *((_DWORD *)this + 29) = v7; /*0x597b79*/
      v9 = INIClass::ReadInt_Overwrite( /*0x597b8b*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)&stru_82BA00.?[123],
             v8);
      v21 = *((_DWORD *)this + 14); /*0x597b97*/
      *((_DWORD *)this + 15) = v9; /*0x597ba2*/
      *((_DWORD *)this + 14) = INIClass::ReadInt_Overwrite( /*0x597baa*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)g_INI_Key_Theater,
                                 v21);
      v10 = INIClass::ReadInt_Overwrite( /*0x597bbf*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)g_INI_Key_Time,
              *((_DWORD *)this + 18));
      v11 = this->q01C; /*0x597bc4*/
      *((_DWORD *)this + 18) = v10; /*0x597bc7*/
      v12 = INIClass::ReadInt_Overwrite( /*0x597bd9*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[111],
              v11);
      v22 = *((_DWORD *)this + 17); /*0x597be5*/
      this->q01C = v12; /*0x597bf0*/
      *((_DWORD *)this + 17) = INIClass::ReadInt_Overwrite( /*0x597bf8*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[99],
                                 v22);
      v13 = INIClass::ReadInt_Overwrite( /*0x597c0d*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[83],
              *((_DWORD *)this + 27));
      v14 = *((_DWORD *)this + 19); /*0x597c12*/
      *((_DWORD *)this + 27) = v13; /*0x597c15*/
      v15 = INIClass::ReadInt_Overwrite( /*0x597c27*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[71],
              v14);
      v23 = *((_DWORD *)this + 21); /*0x597c33*/
      *((_DWORD *)this + 19) = v15; /*0x597c3e*/
      *((_DWORD *)this + 21) = INIClass::ReadInt_Overwrite( /*0x597c46*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)g_INI_Key_Tiberium,
                                 v23);
      v16 = INIClass::ReadInt_Overwrite( /*0x597c5b*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[55],
              this->M16);
      v17 = *((_DWORD *)this + 23); /*0x597c60*/
      this->M16 = v16; /*0x597c63*/
      v18 = INIClass::ReadInt_Overwrite( /*0x597c75*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[43],
              v17);
      v24 = this->q018; /*0x597c81*/
      *((_DWORD *)this + 23) = v18; /*0x597c8c*/
      this->q018 = INIClass::ReadInt_Overwrite( /*0x597c94*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[27],
                                 v24);
      this->q010 = INIClass::ReadInt_Overwrite( /*0x597cb2*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[15],
                                 this->q010);
      HashTable::DestroyHashTableINIClass(&v25); /*0x597cb5*/
      *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597cc1*/
      v28 = 0; /*0x597cc9*/
      Vector::Clear((int)v27); /*0x597cd0*/
      *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x597cd9*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597ce1*/
      return 1; /*0x597cf1*/
    }
    HashTable::DestroyHashTableINIClass(&v25); /*0x597cf8*/
    *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597d04*/
    v28 = 0; /*0x597d0c*/
    Vector::Clear((int)v27); /*0x597d13*/
    *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x597d1c*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597d24*/
  }
  return 0; /*0x597ce6*/
}



// ==== 0x00597D40  j_Options::GetValue  this=j_Options  sig=csp ====
// attributes: thunk
bool __thiscall j_Options::GetValue(j_Options *this)
{
  return Options::PrepareSaveLoadDlg((Options *)this);
}



// ==== 0x00597D50  MapSeedClass::ddtor  this=MapSeedClass  sig=csp ====
bool __stdcall MapSeedClass::ddtor(MapSeedClass *this)
{
  return LoadOptions::ddtor(this->__pad_0); /*0x597d5a*/
}



// ==== 0x00597D60  MapSeedClass::LoadInfo  this=MapSeedClass  sig=csp ====
char __stdcall RandomMap::LoadInfo(MapSeedClass *this, int a2)
{
  char *v2; // edi
  INIClass v4; // [esp+Ch] [ebp-1ACh] BYREF
  CCFileClass v5; // [esp+4Ch] [ebp-16Ch] BYREF
  int v6[3]; // [esp+A4h] [ebp-114h] BYREF
  int v7; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !this ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  v2 = (char *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((char *)(a2 + 44), &stru_82BA00.?) || !_strcmpi(v2, &stru_82BA00.?[17]) ) /*0x597da8*/
    return 0; /*0x597db2*/
  CCFileClass::Construct(&v5, v2); /*0x597dbd*/
  v4.headNode[0] = 0; /*0x597dc6*/
  v4.headNode[1] = 0; /*0x597dca*/
  GenericNode::Constructor((GenericNode *)v4.sectionHead); /*0x597dce*/
  GenericNode::Constructor((GenericNode *)&v4.sectionCount); /*0x597dd7*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x597ded*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x597dfc*/
  memset(&v4.__pad_20[8], 0, 13); /*0x597e04*/
  v4.unknown38 = 0; /*0x597e14*/
  v4.INIClass_field_3C = 0; /*0x597e18*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x597e1c*/
  if ( !FileStraw::Open((FileStraw *)&v4, (int)&v5, 0) ) /*0x597e2b*/
  {
    HashTable::DestroyHashTableINIClass(&v4); /*0x597f38*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x597f44*/
    v7 = 0; /*0x597f4c*/
    Vector::Clear((int)v6); /*0x597f53*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f5c*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f64*/
    return 0; /*0x597f6b*/
  }
  if ( INIClass::ParseValue_Wide( /*0x597e58*/
         &v4,
         (unsigned __int8 *)&stru_82BA00.?[8],
         (unsigned __int8 *)&stru_81AF8C.?[5],
         &g_TypeClass_DefaultString,
         Source,
         0x80u) <= 0 )
  {
    *(_WORD *)this->__pad_0 = 0; /*0x597e7f*/
    *((_BYTE *)this + 437) = 1; /*0x597e82*/
    *((_BYTE *)this + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy((wchar_t *)this, Source, 0x80u); /*0x597e68*/
    *((_BYTE *)this + 437) = 0; /*0x597e70*/
    *((_BYTE *)this + 436) = 1; /*0x597e76*/
  }
  *((_DWORD *)this + 72) = 0; /*0x597e9a*/
  *((_DWORD *)this + 73) = 0; /*0x597ea0*/
  strncpy((char *)this + 256, v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)this + 256) ) /*0x597ead*/
    strncpy((char *)this + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((_DWORD *)this + 108) = *(_DWORD *)(a2 + 24); /*0x597ee5*/
  *((_DWORD *)this + 107) = *(_DWORD *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(&v4); /*0x597ef4*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x597f00*/
  v7 = 0; /*0x597f08*/
  Vector::Clear((int)v6); /*0x597f0f*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f20*/
  return 1; /*0x597f26*/
}



// ==== 0x00597F80  MapSeedClass::Generate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::Generate(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[1], 0, &stru_82BA00.?[11], 5572); /*0x597f96*/
}



// ==== 0x00597FA0  MapSeedClass::GetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::GetCell(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, &stru_82BA00.?[11], 5578); /*0x597fb6*/
}



// ==== 0x00597FC0  MapSeedClass::SetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::SetCell(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[6], 0, &stru_82BA00.?[11], 5584); /*0x597fd6*/
}



// ==== 0x00597FE0  MapSeedClass::Validate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::Validate(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[11], 0, &stru_82BA00.?[11], 5590); /*0x597ff6*/
}



// ==== 0x00598000  sub_598000  this=-  sig=ida-proto ====
double sub_598000()
{
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10; /*0x598023*/
}



// ==== 0x00598030  Range_RandomInt  this=-  sig=csp ====
__int64 __fastcall Random_Range_Int(int a1, unsigned int a2)
{
  double v3; // st7
  __int64 result; // rax
  __int64 v5; // [esp+8h] [ebp-18h]
  __int64 v6; // [esp+8h] [ebp-18h]
  double v7; // [esp+18h] [ebp-8h]

  v5 = a2 - a1 + 1; /*0x59803e*/
  v3 = (double)v5; /*0x598046*/
  LODWORD(v5) = a1; /*0x59804a*/
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    v6 = (unsigned int)Random::State(&unk_ABE890); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > a2 ); /*0x598089*/
  return result; /*0x59808b*/
}



// ==== 0x005980A0  ObjectClass::method_5980A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5980A0(_DWORD *this, int a2)
{
  this->ptr_C = 0; /*0x5980a4*/
  *(_BYTE *)this = 0; /*0x5980a7*/
  this->ptr_10 = 0; /*0x5980a9*/
  this->uniqueId = a2; /*0x5980b0*/
  return this; /*0x5980b3*/
}



// ==== 0x005980C0  Random::Gaussian  this=Random  sig=csp ====
int __thiscall Random::Gaussian(int *this)
{
  int result; // eax
  double v6; // [esp+0h] [ebp-20h]

  _ESI = this; /*0x5980ca*/
  if ( *(_BYTE *)this ) /*0x5980cc*/
  {
    *(_BYTE *)this = 0; /*0x5980d1*/
    __asm { fld qword ptr [esi+8] } /*0x5980d4*/
  }
  else
  {
    while ( 1 ) /*0x5980de*/
    {
      ((void (*)(void))_ESI[4])(); /*0x5980de*/
      __asm /*0x5980e1*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fstp [esp+18h+var_10]
      }
      ((void (*)(void))_ESI[4])(); /*0x5980ed*/
      __asm /*0x5980f0*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fst [esp+18h+var_8]
        fld st
        fmulp st(1), st
        fld [esp+18h+var_10]
        fmul [esp+18h+var_10]
        faddp st(1), st
        fcom ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x598115*/
      {
        __asm /*0x598117*/
        {
          fcom ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x598122*/
          break; /*0x598122*/
      }
      __asm { fstp st } /*0x5980dc*/
    }
    __asm /*0x598124*/
    {
      fld st
      fldln2
    }
    __asm
    {
      fxch st(1)
      fyl2x
      fld st
      fchs
      fsub st, st(1)
      fdiv st, st(2)
      fstp [esp+20h+var_20]; double
      fstp st
      fstp st
    }
    result = Math::Sqrt(v6); /*0x59813e*/
    __asm /*0x598143*/
    {
      fld st
      fmul [esp+20h+var_8]
    }
    *(_BYTE *)_ESI = 1; /*0x59814c*/
    __asm { fstp qword ptr [esi+8] } /*0x59814f*/
    *((double *)_ESI + 1) = _RT1; /*0x59814f*/
    __asm { fmul [esp+14h+var_10] } /*0x598153*/
  }
  return result; /*0x5980d7*/
}



// ==== 0x005981F0  RandomMap::LoadConfig  this=RandomMap  sig=csp ====
int __thiscall RandomMap::LoadConfig(RandomMap *this)
{
  INIClass *v2; // eax
  INIClass *v3; // edi
  int v4; // eax
  int v5; // edx
  int Int_Overwrite; // eax
  int v7; // edx
  DynamicVectorClass *v8; // eax
  DynamicVectorClass *v9; // eax
  DynamicVectorClass *v10; // eax
  DynamicVectorClass *v11; // eax
  DynamicVectorClass *v12; // eax
  DynamicVectorClass *v13; // eax
  DynamicVectorClass *v14; // eax
  DynamicVectorClass *v15; // eax
  DynamicVectorClass *v16; // eax
  DynamicVectorClass *v17; // eax
  DynamicVectorClass *v18; // eax
  char *i; // eax
  int v20; // esi
  char *j; // eax
  AbstractClass *DynamicVector_field_0x1C; // esi
  DynamicVectorClass v24; // [esp-1Ch] [ebp-15Ch] BYREF
  int v25; // [esp-4h] [ebp-144h]
  DynamicVectorClass *IntList; // [esp+10h] [ebp-130h] BYREF
  DynamicVector v27; // [esp+14h] [ebp-12Ch] BYREF
  int v28; // [esp+50h] [ebp-F0h]
  CCFileClass v29; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(&v29, (char *)&stru_82BA00.?[1]); /*0x598205*/
  v2 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x59820c*/
  v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    v3[1].__pad_0[0] = 0; /*0x598221*/
    *(_DWORD *)v3->__pad_0 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load((CCINIClass *)v3, (int)&v29, 0, 0); /*0x598241*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[316] + 12))(&this->__pad_4C[316]); /*0x598254*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 161) + 12))((char *)this + 644); /*0x598265*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 168) + 12))((char *)this + 672); /*0x598274*/
  v4 = *((_DWORD *)this + 177); /*0x598277*/
  *(_DWORD *)v27.__pad_20 = (char *)this + 708; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  v5 = this->u32_B8; /*0x59828a*/
  v27.DynamicVector_field_0x1C = (AbstractClass *)((char *)this + 736); /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[344] + 12))(&this->__pad_4C[344]); /*0x5982a9*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[372] + 12))(&this->__pad_4C[372]); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5982d0*/
                    (bool *)v3->__pad_0,
                    off_82B134,
                    (unsigned __int8 *)&stru_82BA00.?,
                    *((_DWORD *)this + 175));
  v7 = this->u32_2C; /*0x5982d5*/
  *((_DWORD *)this + 175) = Int_Overwrite; /*0x5982db*/
  this->u32_2C = INIClass::ReadInt_Overwrite( /*0x5982f7*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[1],
                              v7);
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[316]); /*0x598304*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598316*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59832e*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[316], IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *(_DWORD *)&this->__pad_4C[332] = IntList->Count; /*0x59833e*/
  *(_DWORD *)&this->__pad_4C[336] = v8->CapacityIncrement; /*0x598344*/
  *(_DWORD *)&this->__pad_4C[340] = *(_DWORD *)v8[1].VectorClass; /*0x59834a*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x598356*/
  VectorClass::Destroy((int)&v27); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 161); /*0x598369*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x59837b*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598393*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 23, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  *((_DWORD *)this + 165) = IntList->Count; /*0x5983a3*/
  *((_DWORD *)this + 166) = v9->CapacityIncrement; /*0x5983a9*/
  *((_DWORD *)this + 167) = *(_DWORD *)v9[1].VectorClass; /*0x5983b3*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5983b6*/
  VectorClass::Destroy((int)&v27); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 168); /*0x5983cf*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5983e1*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5983f9*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 24, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  this->u32_AC = IntList->Count; /*0x598409*/
  *((_DWORD *)this + 173) = v10->CapacityIncrement; /*0x59840f*/
  *((_DWORD *)this + 174) = *(_DWORD *)v10[1].VectorClass; /*0x598419*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59841c*/
  VectorClass::Destroy((int)&v27); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[344]); /*0x598435*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598447*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59845f*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[5],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[344], IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *(_DWORD *)&this->__pad_4C[360] = IntList->Count; /*0x59846f*/
  *(_DWORD *)&this->__pad_4C[364] = v11->CapacityIncrement; /*0x598475*/
  *(_DWORD *)&this->__pad_4C[368] = *(_DWORD *)v11[1].VectorClass; /*0x59847b*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59847e*/
  VectorClass::Destroy((int)&v27); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[372]); /*0x59849b*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5984ad*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5984c5*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[372], IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  *(_DWORD *)&this->__pad_4C[388] = IntList->Count; /*0x5984d5*/
  *(_DWORD *)&this->__pad_4C[392] = v12->CapacityIncrement; /*0x5984db*/
  *(_DWORD *)&this->__pad_4C[396] = *(_DWORD *)v12[1].VectorClass; /*0x5984e5*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5984e8*/
  VectorClass::Destroy((int)&v27); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[400]); /*0x598501*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598513*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59852b*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[2],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[400], IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *(_DWORD *)&this->__pad_4C[416] = IntList->Count; /*0x59853b*/
  *(_DWORD *)&this->__pad_4C[420] = v13->CapacityIncrement; /*0x598541*/
  *(_DWORD *)&this->__pad_4C[424] = *(_DWORD *)v13[1].VectorClass; /*0x59854b*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59854e*/
  VectorClass::Destroy((int)&v27); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[428]); /*0x598567*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598579*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598591*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[428], IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *(_DWORD *)&this->__pad_4C[444] = IntList->Count; /*0x5985a1*/
  this->RandomMap_field_0x20C = (void *)v14->CapacityIncrement; /*0x5985a7*/
  this->q084 = *(_DWORD *)v14[1].VectorClass; /*0x5985b1*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5985b4*/
  VectorClass::Destroy((int)&v27); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 133); /*0x5985cd*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5985df*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5985f7*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 19, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  *((_DWORD *)this + 137) = IntList->Count; /*0x598607*/
  *((_DWORD *)this + 138) = v15->CapacityIncrement; /*0x59860d*/
  *((_DWORD *)this + 139) = *(_DWORD *)v15[1].VectorClass; /*0x598617*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59861a*/
  VectorClass::Destroy((int)&v27); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 140); /*0x598633*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598645*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59865d*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 20, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  this->u32_24 = IntList->Count; /*0x59866d*/
  *((_DWORD *)this + 145) = v16->CapacityIncrement; /*0x598673*/
  *((_DWORD *)this + 146) = *(_DWORD *)v16[1].VectorClass; /*0x59867d*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x598680*/
  VectorClass::Destroy((int)&v27); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 147); /*0x598699*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5986ab*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5986c3*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 21, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  *((_DWORD *)this + 151) = IntList->Count; /*0x5986d3*/
  this->u32_98 = v17->CapacityIncrement; /*0x5986d9*/
  *((_DWORD *)this + 153) = *(_DWORD *)v17[1].VectorClass; /*0x5986df*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5986e8*/
  if ( *(_DWORD *)&v27.DynamicVector_field_0x1[3] && v27.__pad_C[1] ) /*0x5986f4*/
    __3_YAXPAX_Z(*(void **)&v27.DynamicVector_field_0x1[3]); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 154); /*0x59870f*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598721*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598739*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[10],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 22, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  *((_DWORD *)this + 158) = IntList->Count; /*0x598749*/
  *((_DWORD *)this + 159) = v18->CapacityIncrement; /*0x59874f*/
  this->u32_A0 = *(_DWORD *)v18[1].VectorClass; /*0x598759*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59875c*/
  VectorClass::Destroy((int)&v27); /*0x598760*/
  *((_DWORD *)this + 191) = INIClass::ReadInt_Overwrite( /*0x59877f*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[16],
                              *((_DWORD *)this + 191));
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?, &g_INI_DefaultBuffer, String, 128) ) /*0x5987a5*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x5987b7*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x5987d3*/
    {
      if ( !*i ) /*0x5987d5*/
        break; /*0x5987d8*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(i); /*0x5987e3*/
      if ( IntList ) /*0x5987e7*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5987f2*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x598813*/
    *(_DWORD *)v27.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x59881c*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x598820*/
    v20 = *(_DWORD *)v27.__pad_20; /*0x598825*/
  }
  else
  {
    v20 = *(_DWORD *)v27.__pad_20; /*0x59882b*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], *(_DWORD **)v27.__pad_20); /*0x598834*/
  }
  DynamicVector::Copy((DynamicVector *)v20, &v27.__pad_20[4]); /*0x598840*/
  *(_DWORD *)(v20 + 24) = v28; /*0x59884d*/
  *(_DWORD *)&v27.__pad_20[4] = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x598850*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598854*/
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?[15], &g_INI_DefaultBuffer, String, 128) ) /*0x598879*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x598886*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x5988a2*/
    {
      if ( !*j ) /*0x5988a4*/
        break; /*0x5988a7*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(j); /*0x5988b2*/
      if ( IntList ) /*0x5988b6*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5988c1*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x5988e2*/
    *(_DWORD *)v27.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5988eb*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x5988ef*/
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988f4*/
  }
  else
  {
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988fa*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27.DynamicVector_field_0x1C->ptr_0); /*0x598903*/
  }
  DynamicVector::Copy((DynamicVector *)DynamicVector_field_0x1C, &v27.__pad_20[4]); /*0x59890f*/
  *(_DWORD *)&v27.__pad_20[4] = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x598918*/
  DynamicVector_field_0x1C->nextArrayIndex = v28; /*0x59891c*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598923*/
  if ( v3 ) /*0x59892a*/
    (**(void (__thiscall ***)(INIClass *, int))v3->__pad_0)(v3, 1); /*0x598932*/
  CCFileClass::Reset(&v29); /*0x598938*/
  return CCFileClass::Destruct(&v29); /*0x598946*/
}



// ==== 0x00598960  RandomMap::Generate  this=RandomMap  sig=csp ====
void __thiscall RandomMap::Generate(RandomMap *this, char a2, HWND hDlg)
{
  ObjectClass *v3; // edi
  HWND DlgItem; // eax
  int v6; // eax
  RandomMap *v7; // ecx
  int v8; // eax
  int i; // esi
  int j; // edi
  int v11; // esi
  int v12; // eax
  bool v13; // al
  int v14; // eax
  int k; // eax
  int v16; // ecx
  int v17; // eax
  int m; // edi
  _VectorClass_VCell *v19; // esi
  int v20; // eax
  void *v21; // eax
  int n; // eax
  void (__stdcall *v23)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  ObjectClass *v25; // edi
  int jj; // eax
  _DWORD *v27; // eax
  int kk; // eax
  int mm; // edi
  _VectorClass_VCell *v30; // esi
  int v31; // eax
  HWND v32; // eax
  ObjectClass *v33; // [esp-2h] [ebp-428h]
  ObjectClass *v34; // [esp-2h] [ebp-428h]
  ObjectClass *v35; // [esp-2h] [ebp-428h]
  BuildingClass *v36; // [esp-2h] [ebp-428h]
  RadarClass *v37; // [esp-2h] [ebp-428h]
  bool v38; // [esp+11h] [ebp-415h]
  _VectorClass_VCell *v39; // [esp+12h] [ebp-414h] BYREF
 ... [19709 chars total]



// ==== 0x00599530  MapClass::ProcessTile  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessTile(MapClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  RadarClass *v6; // [esp+0h] [ebp-Ch]
  _DWORD *v7; // [esp+8h] [ebp-4h] BYREF

  this->MapClass_field_0x304 = 0; /*0x599534*/
  this->MapClass_field_0x308 = 0; /*0x59953a*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x599548*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x59954b*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x599553*/
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v7 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59959d*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x5995ad*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x5995b2*/
        for ( ; /*0x5995b8*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x5995c0*/
        }
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &VectorClass<Cell>::`vftable'; /*0x5995d5*/
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
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59960f*/
  MapClass::PostProcessReveal((MapClass *)&stru_87F5F0.__pad_58[416], 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x599631*/
  return RadarClass::RecreateSurface(v6, 0); /*0x599640*/
}



// ==== 0x00599650  RandomMap::SetupTheater  this=RandomMap  sig=csp ====
char *__thiscall RandomMap::SetupTheater(RandomMap *this, char a2)
{
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  double v10; // rdi
  double v11; // st7
  int *Waypoint_Location; // eax
  __int16 *v13; // eax
  _DWORD *v14; // eax
  RadarClass *WorldCoords; // eax
  RandomMap *v16; // esi
  ObjectClass *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int uniqueId; // edi
  void (__stdcall *v22)(); // eax
  int v23; // esi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  Tactical *v29; // eax
  IPersistStream *v30; // eax
  int i; // eax
  int v32; // ecx
  int j; // eax
  int v34; // ecx
  int k; // eax
  int v36; // ecx
  int m; // eax
  int v38; // ecx
  int n; // eax
  int *v40; // eax
  __int16 *v41; // eax
  _DWORD *v42; // eax
  RadarClass *v43; // eax
  int v44; // esi
  RandomMap *v45; // edi
  void (__stdcall *v46)(); // eax
... [27439 chars total]



// ==== 0x0059A6C0  RandomMap::FinalizeMapData  this=RandomMap  sig=csp ====
int __thiscall RandomMap::FinalizeMapData(RandomMap *this)
{
  int i; // eax
  int v3; // eax
  int v4; // eax
  Cell *j; // edi
  char v6; // bl
  signed int k; // esi
  Cell *NeighbourContent; // eax
  int v9; // ecx
  int v10; // eax
  int m; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  void *v14; // eax
  int result; // eax
  Cell *n; // ebp
  signed int ii; // esi
  Cell *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6dd*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(i + 56) = g_CellPassabilityLUT; /*0x59a6e5*/
  }
  v3 = this->RandomMap_field_0x3C[0]; /*0x59a6f6*/
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
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a722*/
  for ( j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a735*/
        j;
        j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( j->Cell_field_0x38 == g_CellPassabilityLUT ) /*0x59a741*/
    {
      v6 = 1; /*0x59a743*/
      for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(j, k); /*0x59a74a*/
        if ( !(unsigned __int8)Cell::IsEmpty(NeighbourContent) ) /*0x59a751*/
          v6 = 0; /*0x59a75a*/
      }
      if ( v6 ) /*0x59a766*/
        j->Cell_field_0x38 = 0; /*0x59a768*/
    }
  }
  MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x59a788*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x59a794*/
  {
    v9 = g_MapCellWidth * g_MapCellWidth; /*0x59a79c*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59a7a1*/
    {
      v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x59a7ae*/
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_MissionQueueFrame.briefing[342] - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    v12 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      v19 = v12; /*0x59a808*/
      v13 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59a80c*/
              &g_MissionQueueFrame.briefing[338],
              &v19);
      if ( v13 != -1 && v13 < g_MissionQueueFrame.briefing[342] ) /*0x59a81c*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x59a821*/
        for ( ; /*0x59a827*/
              v13 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                       + 4 * v13) )
        {
          ++v13; /*0x59a82f*/
        }
      }
      v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &VectorClass<Cell>::`vftable'; /*0x59a844*/
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
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a884*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a88e*/
  for ( n = (Cell *)result; result; n = (Cell *)result ) /*0x59a897*/
  {
    if ( (unsigned __int8)CellClass::IsTerrainType((CellClass *)n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        v18 = (Cell *)Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18->Cell_field_0x38 = dword_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a8d0*/
  }
  return result; /*0x59a8db*/
}



// ==== 0x0059A8F0  ArrangeBuildingPlacementGrid  this=RandomMap  sig=csp ====
void __stdcall BuildingPlacement_ArrangeGrid(int a1, int a2, int *a3)
{
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // ebp
  int v8; // esi
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // esi
  signed int v15; // eax
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
  int v33; // [esp+44h] [ebp-48h]
  int v34; // [esp+48h] [ebp-44h]
  __int64 v35; // [esp+4Ch] [ebp-40h]
  double v36; // [esp+54h] [ebp-38h]
  void **v37; // [esp+5Ch] [ebp-30h] BYREF
  void *Block; // [esp+60h] [ebp-2Ch]
  int v39; // [esp+64h] [ebp-28h]
  int v40; // [esp+68h] [ebp-24h]
  int i; // [esp+6Ch] [ebp-20h]
  int v42; // [esp+70h] [ebp-1Ch]
  void **v43; // [esp+74h] [ebp-18h] BYREF
  void *v44; // [esp+78h] [ebp-14h]
  int v45; // [esp+7Ch] [ebp-10h]
  char v46; // [esp+81h] [ebp-Bh]
  int v47; // [esp+84h] [ebp-8h]
  int v48; // [esp+88h] [ebp-4h]

  v3 = Math::Sqrt((double)a2); /*0x59a901*/
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
  v7 = a3; /*0x59a94a*/
  v24 = a3[2] / v5; /*0x59a95c*/
  v25 = (unsigned int)(a3[3] / v5); /*0x59a966*/
  v29 = 0; /*0x59a96c*/
  v30 = 0; /*0x59a970*/
  v27 = 0; /*0x59a978*/
  if ( (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 >= 0.5 ) /*0x59a9a2*/
  {
    HIDWORD(v25) = v24; /*0x59a9c6*/
    LODWORD(v25) = a3[3] / v6; /*0x59a9ca*/
    v30 = v25; /*0x59a9ce*/
  }
  else
  {
    v27 = v25; /*0x59a9ae*/
    v24 = a3[2] / v6; /*0x59a9b2*/
    v29 = v24; /*0x59a9b6*/
  }
  v8 = v5 * v6 - a2; /*0x59a9db*/
  v9 = 0; /*0x59a9dd*/
  v34 = a3[1]; /*0x59a9df*/
  v33 = *a3; /*0x59a9e9*/
  VectorClass::Construct(&v43, 0, 0); /*0x59a9ed*/
  v43 = &DynamicVectorClass<int>::`vftable'; /*0x59a9f8*/
  v48 = 10; /*0x59aa00*/
  v47 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v37, 0, 0); /*0x59aa12*/
  v10 = 0; /*0x59aa1b*/
  v37 = &DynamicVectorClass<int>::`vftable'; /*0x59aa1f*/
  v42 = 10; /*0x59aa27*/
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
      if ( i < v39 /*0x59aaaf*/
        || (BYTE1(v40) || !v39)
        && v42 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v37[2])(&v37, v42 + v39, 0) )
      {
        v12 = i++; /*0x59aaba*/
        *((_DWORD *)Block + v12) = v9; /*0x59aac5*/
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
      v14 = v10 - 1; /*0x59aae3*/
      v36 = (double)v10; /*0x59aaf9*/
      do /*0x59ab28*/
      {
        v35 = (unsigned int)Random::State(&unk_ABE890); /*0x59ab07*/
        v15 = Math::RoundToInt((double)v35 * v36 * 2.328306437080797e-10); /*0x59ab21*/
      }
      while ( v15 > v14 ); /*0x59ab28*/
      *((_DWORD *)v44 + *((_DWORD *)Block + v15)) = v31; /*0x59ab39*/
      v10 = i; /*0x59ab3c*/
      if ( v15 < i ) /*0x59ab42*/
      {
        v10 = i - 1; /*0x59ab44*/
        for ( i = v10; v15 < i; v10 = i ) /*0x59ab4b*/
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
        v34 += (int)v25 / 2; /*0x59abb8*/
      else
        v33 += v24 / 2; /*0x59aba3*/
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
          *v21 = v33 + 2; /*0x59ac23*/
          v21[1] = v34 + 2; /*0x59ac25*/
          v21[2] = v24 - 4; /*0x59ac28*/
          v21[3] = v25 - 4; /*0x59ac2b*/
        }
        v33 += HIDWORD(v25); /*0x59ac40*/
        v22 = v28 == 1; /*0x59ac4a*/
        v34 += v27; /*0x59ac4b*/
        --v28; /*0x59ac4f*/
      }
      while ( !v22 ); /*0x59ac53*/
      v5 = v26; /*0x59ac59*/
      v7 = a3; /*0x59ac5d*/
      v16 = j; /*0x59ac64*/
    }
    v33 += v29; /*0x59ac7a*/
    v34 += v30; /*0x59ac86*/
    if ( SHIDWORD(v25) <= 0 ) /*0x59ac8a*/
      v34 = v7[1]; /*0x59ac98*/
    else
      v33 = *v7; /*0x59ac8f*/
    ++v16; /*0x59aca0*/
  }
  v37 = &VectorClass<int>::`vftable'; /*0x59acb8*/
  if ( Block && BYTE1(v40) ) /*0x59acc4*/
  {
    __3_YAXPAX_Z(Block); /*0x59acc7*/
    Block = 0; /*0x59accf*/
  }
  v43 = &VectorClass<int>::`vftable'; /*0x59acdb*/
  BYTE1(v40) = 0; /*0x59ace2*/
  v39 = 0; /*0x59ace9*/
  if ( v44 ) /*0x59acf2*/
  {
    if ( v46 ) /*0x59acfa*/
      __3_YAXPAX_Z(v44); /*0x59acfd*/
  }
}



// ==== 0x0059AD10  RandomMap::ArrangeBuildingGrid  this=RandomMap  sig=csp ====
void __thiscall RandomMap::ArrangeBuildingGrid(RandomMap *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  int i; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // edx
  int v19; // [esp+10h] [ebp-50h] BYREF
  int v20; // [esp+14h] [ebp-4Ch]
  int v21[2]; // [esp+18h] [ebp-48h] BYREF
  double v22; // [esp+20h] [ebp-40h]
  int v23; // [esp+28h] [ebp-38h] BYREF
  int v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  int v26; // [esp+34h] [ebp-2Ch]
  int v27[4]; // [esp+38h] [ebp-28h] BYREF
  void **v28; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  char v30; // [esp+55h] [ebp-Bh]
  int v31; // [esp+58h] [ebp-8h]
  int v32; // [esp+5Ch] [ebp-4h]

  *((_DWORD *)this + 194) = 1; /*0x59ad27*/
  RandomMap::Constructor_0((RandomMap *)&v28, 0, 0); /*0x59ad31*/
  v2 = *(_DWORD *)&this->__pad_4C[4]; /*0x59ad36*/
  v28 = &DynamicVectorClass<TRect<int>>::`vftable'; /*0x59ad39*/
  v32 = 10; /*0x59ad44*/
  v3 = v2 / 2; /*0x59ad4c*/
  v31 = 0; /*0x59ad51*/
  v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(_QWORD *)v21 = v4; /*0x59ad5e*/
  v22 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(_QWORD *)v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ad78*/
    LOWORD(v5) = Math::RoundToInt((double)*(__int64 *)v21 * v22 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v27[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59ada9*/
  v27[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59adb3*/
  v27[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59adbd*/
  v6 = *(_DWORD *)&this->__pad_4C[4]; /*0x59adc1*/
  v27[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v28, v5 + v6, v27); /*0x59add7*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ade1*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59adf2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v19 = *(_DWORD *)(i + 36); /*0x59adf7*/
    *(_DWORD *)(80 * ((__int16)v19 + g_MapCellWidth * SHIWORD(v19)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ae1c*/
  }
  while ( v31 > 0 ) /*0x59ae2d*/
  {
    v23 = *(_DWORD *)Block; /*0x59ae3d*/
    v24 = *((_DWORD *)Block + 1); /*0x59ae44*/
    v25 = *((_DWORD *)Block + 2); /*0x59ae4b*/
    v26 = *((_DWORD *)Block + 3); /*0x59ae57*/
    v8 = Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ae5b*/
    v9 = v26; /*0x59ae60*/
    v10 = v25; /*0x59ae68*/
    *(_QWORD *)&v22 = (unsigned int)v8; /*0x59ae6e*/
    v20 = 2 * v25 * v26; /*0x59ae8d*/
    LOWORD(v11) = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)v20); /*0x59ae97*/
    v12 = v11; /*0x59ae9c*/
    v21[0] = v23 + v10 / 2 + v9 / 2 + v24 + 1; /*0x59aecd*/
    v21[1] = v24 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v9 / 2 - v10 / 2 - v23; /*0x59aed1*/
    v13 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v13 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      LOWORD(v19) = v21[0]; /*0x59aef1*/
      HIWORD(v19) = v21[1]; /*0x59aef8*/
      v14 = RandomMap::PlaceTerrain(this, v12, &v23, (int)v21, 1, (int)&v19, 0.25, 0); /*0x59af0d*/
      if ( !v14 ) /*0x59af14*/
        ++*((_DWORD *)this + 194); /*0x59af16*/
      ++v13; /*0x59af1c*/
    }
    while ( !v14 ); /*0x59af1f*/
    if ( v31 <= 0 ) /*0x59af27*/
      break; /*0x59af27*/
    v15 = 0; /*0x59af2a*/
    if ( --v31 <= 0 ) /*0x59af32*/
      break; /*0x59af32*/
    v16 = 0; /*0x59af34*/
    do /*0x59af60*/
    {
      v17 = (char *)Block + v16 + 16; /*0x59af3a*/
      v18 = (char *)Block + v16; /*0x59af3e*/
      ++v15; /*0x59af40*/
      v16 += 16; /*0x59af41*/
      *v18 = *v17; /*0x59af46*/
      v18[1] = v17[1]; /*0x59af4b*/
      v18[2] = v17[2]; /*0x59af51*/
      v18[3] = v17[3]; /*0x59af57*/
    }
    while ( v15 < v31 ); /*0x59af60*/
  }
  v28 = &VectorClass<TRect<int>>::`vftable'; /*0x59af70*/
  if ( Block ) /*0x59af7a*/
  {
    if ( v30 ) /*0x59af82*/
      __3_YAXPAX_Z(Block); /*0x59af85*/
  }
}



// ==== 0x0059AFA0  RandomMap::FillTerrainProgressively  this=RandomMap  sig=csp ====
void __thiscall RandomMap::FillTerrainProgressively(RandomMap *this)
{
  RandomMap *v1; // edi
  int v2; // eax
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int i; // eax
  int v7; // eax
  int v8; // edi
  int j; // ecx
  __int64 v10; // rax
  int v11; // esi
  int v12; // [esp+10h] [ebp-48h]
  int v13; // [esp+14h] [ebp-44h]
  int v14; // [esp+18h] [ebp-40h]
  int v15; // [esp+1Ch] [ebp-3Ch] BYREF
  RandomMap *v16; // [esp+20h] [ebp-38h]
  int v17; // [esp+24h] [ebp-34h]
  int v18; // [esp+28h] [ebp-30h] BYREF
  int v19; // [esp+2Ch] [ebp-2Ch]
  double v20; // [esp+30h] [ebp-28h]
  double v21; // [esp+38h] [ebp-20h]
  double v22; // [esp+40h] [ebp-18h]
  _DWORD v23[4]; // [esp+48h] [ebp-10h] BYREF

  v1 = this; /*0x59afad*/
  v16 = this; /*0x59afaf*/
  *((_DWORD *)this + 194) = 1; /*0x59afb3*/
  v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  v3 = (double)*(int *)v1->__pad_4C; /*0x59afc2*/
  v15 = v2; /*0x59afc5*/
  v13 = 0; /*0x59afcb*/
  v14 = 0; /*0x59afcf*/
  v20 = 0.0; /*0x59afd9*/
  v21 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  v22 = (double)v2; /*0x59b003*/
  LOWORD(v4) = Math::RoundToInt(v22 * 0.03 * v21); /*0x59b011*/
  v17 = v4; /*0x59b016*/
  v5 = *(_DWORD *)&stru_87F5F0.__pad_58[664] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[660] / 2; /*0x59b030*/
  v19 = v5; /*0x59b038*/
  v18 = v5 + 1; /*0x59b03f*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b043*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b054*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v15 = *(_DWORD *)(i + 36); /*0x59b059*/
    *(_DWORD *)(80 * ((__int16)v15 + g_MapCellWidth * SHIWORD(v15)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59b07a*/
  }
  v23[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b0af*/
  v23[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b0bb*/
  v23[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676] - 2; /*0x59b0c2*/
  v23[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680] - 2; /*0x59b0c6*/
  if ( v21 > 0.0 ) /*0x59b0ca*/
  {
    while ( v14 < 100 ) /*0x59b0db*/
    {
      LOWORD(v7) = Math::RoundToInt((v21 - v20) * v22); /*0x59b0ed*/
      if ( v7 >= v17 ) /*0x59b0f8*/
        v7 = v17; /*0x59b0fa*/
      LOWORD(v15) = v5 + 1; /*0x59b119*/
      HIWORD(v15) = v5; /*0x59b11e*/
      v13 += RandomMap::PlaceTerrain(v1, v7, v23, (int)&v18, 1, (int)&v15, 0.75, 1); /*0x59b133*/
      ++v14; /*0x59b137*/
      v8 = 50000; /*0x59b144*/
      v12 = 0; /*0x59b149*/
      v20 = (double)v13 / v22; /*0x59b15b*/
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b172*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        if ( !*(_DWORD *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59b191*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 60) )
        {
          v10 = *(__int16 *)(j + 36) - (v5 + 1); /*0x59b1ac*/
          v11 = (HIDWORD(v10) ^ v10) - HIDWORD(v10) + abs32(*(__int16 *)(j + 38) - v5); /*0x59b1b1*/
          if ( v11 < v8 ) /*0x59b1b5*/
          {
            v8 = v11; /*0x59b1ba*/
            v12 = *(_DWORD *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      v18 = (__int16)v12; /*0x59b1e2*/
      v19 = SHIWORD(v12); /*0x59b1e6*/
      if ( v20 >= v21 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = v16; /*0x59b0d2*/
    }
  }
}



// ==== 0x0059B200  RandomMap::PlaceTerrainFeatures  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceTerrainFeatures(RandomMap *this)
{
  int v2; // eax
  int i; // eax
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  __int16 *v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  int result; // eax
  int v19; // [esp+10h] [ebp-B8h]
  int v20; // [esp+10h] [ebp-B8h]
  int v21; // [esp+14h] [ebp-B4h]
  double v22; // [esp+18h] [ebp-B0h]
  int v23; // [esp+20h] [ebp-A8h]
  int v24; // [esp+24h] [ebp-A4h]
  int v25; // [esp+28h] [ebp-A0h]
  int *v26; // [esp+2Ch] [ebp-9Ch]
  int v27; // [esp+30h] [ebp-98h] BYREF
  int v28; // [esp+34h] [ebp-94h]
  int v29; // [esp+38h] [ebp-90h]
  int v30; // [esp+3Ch] [ebp-8Ch]
  double v31; // [esp+40h] [ebp-88h]
  int v32; // [esp+4Ch] [ebp-7Ch] BYREF
  int v33; // [esp+50h] [ebp-78h]
  int v34; // [esp+54h] [ebp-74h]
  int v35; // [esp+58h] [ebp-70h]
  RandomMap *v36; // [esp+5Ch] [ebp-6Ch]
  int v37; // [esp+60h] [ebp-68h] BYREF
  int v38; // [esp+64h] [ebp-64h]
  double v39; // [esp+68h] [ebp-60h]
  double v40; // [esp+70h] [ebp-58h]
  _DWORD v41[2]; // [esp+78h] [ebp-50h] BYREF
  int v42; // [esp+80h] [ebp-48h]
  int v43; // [esp+84h] [ebp-44h]
  int v44; // [esp+88h] [ebp-40h]
  int v45; // [esp+8Ch] [ebp-3Ch]
  int v46; // [esp+90h] [ebp-38h]
  int v47; // [esp+94h] [ebp-34h]
  int v48; // [esp+98h] [ebp-30h]
  int v49; // [esp+9Ch] [ebp-2Ch]
  double v50; // [esp+A0h] [ebp-28h]
  double v51; // [esp+A8h] [ebp-20h]
  int v52; // [esp+B4h] [ebp-14h]
  double v53; // [esp+B8h] [ebp-10h]
  double v54; // [esp+C0h] [ebp-8h]

  v36 = this; /*0x59b212*/
  *((_DWORD *)this + 194) = 1; /*0x59b216*/
  v19 = Object::ComputeAllocationSize(); /*0x59b228*/
  v24 = 0; /*0x59b22e*/
  v39 = (1.0 - (double)*(int *)this->__pad_4C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v51 = (double)v19; /*0x59b25a*/
  LOWORD(v2) = Math::RoundToInt(v51 * 0.06 * v39); /*0x59b26b*/
  v49 = v2; /*0x59b275*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b28d*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(80 * ((__int16)*(_DWORD *)(i + 36) + g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(i + 36))) /*0x59b2b7*/
              + g_MissionQueueFrame.localVariables[163]
              + 60) = 0;
  }
  *(_QWORD *)&v31 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b2ce*/
  v41[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b2fe*/
  v41[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b30d*/
  if ( (double)*(__int64 *)&v31 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b35c*/
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 - 1; /*0x59b36a*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b371*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b378*/
    v46 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b37f*/
    v47 = v43; /*0x59b386*/
  }
  else
  {
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b311*/
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 - 1; /*0x59b31f*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b326*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b32d*/
    v46 = v42; /*0x59b334*/
    v47 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b33b*/
  }
  v20 = 2; /*0x59b391*/
  v26 = v41; /*0x59b399*/
  do /*0x59b6c1*/
  {
    v23 = 0; /*0x59b3a5*/
    v40 = 0.0; /*0x59b3a9*/
    v27 = *v26; /*0x59b3bb*/
    v28 = v26[1]; /*0x59b3c2*/
    v29 = v26[2]; /*0x59b3cb*/
    v30 = v26[3]; /*0x59b3d5*/
    v4 = v28 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v30 / 2 - v29 / 2 - v27; /*0x59b3fd*/
    v33 = v27 + v30 / 2 + v29 / 2 + v28 + 1; /*0x59b3ff*/
    v34 = v4; /*0x59b403*/
    v37 = v33; /*0x59b407*/
    v38 = v4; /*0x59b40b*/
    if ( v30 <= v29 ) /*0x59b40f*/
    {
      v5 = (double)v29; /*0x59b445*/
      v31 = 1.0; /*0x59b44d*/
      v22 = (double)v30; /*0x59b45d*/
      v50 = v5 / v22 * 1.2; /*0x59b46d*/
    }
    else
    {
      v50 = 1.0; /*0x59b415*/
      v22 = (double)v30; /*0x59b42b*/
      v5 = (double)v29; /*0x59b42f*/
      v31 = v22 / v5 * 1.2; /*0x59b43f*/
    }
    v54 = 1.0 / (v5 * 0.5 * (v5 * 0.5)); /*0x59b484*/
    v53 = 1.0 / (v22 * 0.5 * (v22 * 0.5)); /*0x59b4a1*/
    if ( v39 > 0.0 ) /*0x59b4b9*/
    {
      do /*0x59b6a7*/
      {
        if ( v24 >= 100 ) /*0x59b4c4*/
          break; /*0x59b4c4*/
        LOWORD(v6) = Math::RoundToInt((v39 - v40) * v51); /*0x59b4d9*/
        if ( v6 >= v49 ) /*0x59b4e7*/
          v6 = v49; /*0x59b4e9*/
        LOWORD(v32) = v33; /*0x59b4fd*/
        HIWORD(v32) = v4; /*0x59b515*/
        v23 += RandomMap::PlaceTerrain(v36, v6, &v27, (int)&v37, 1, (int)&v32, 0.75, 1); /*0x59b52d*/
        v21 = 0; /*0x59b540*/
        ++v24; /*0x59b55a*/
        v7 = 2 * v27 - *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x59b562*/
        v8 = 50000; /*0x59b563*/
        v48 = v7 + 2 * v29 + 2; /*0x59b572*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * v28 + 1; /*0x59b57d*/
        v52 = v9 + 2 * v30 + 2; /*0x59b585*/
        v40 = (double)v23 / v51; /*0x59b58c*/
        if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59b590*/
        {
          v25 = 0; /*0x59b596*/
          v35 = g_MapCellWidth * g_MapCellWidth; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v10 = (__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5ab*/
            v11 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163] + 2); /*0x59b5ae*/
            v12 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5b3*/
            v13 = v12 + v11; /*0x59b5b6*/
            v14 = v12 - v11; /*0x59b5b9*/
            if ( v13 >= v9 /*0x59b618*/
              && v13 <= v52
              && v14 >= v7
              && v14 <= v48
              && !*((_DWORD *)v10 + 15)
              && Map_Helper_59BAB0((__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]), &v27, 1, v54, v53) )
            {
              v15 = v10[1] - v34; /*0x59b629*/
              LOWORD(v16) = Math::RoundToInt( /*0x59b659*/
                              (double)(int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) * v50
                            + (double)(int)abs32(*v10 - v33) * v31);
              if ( v16 < v8 ) /*0x59b660*/
              {
                v8 = v16; /*0x59b664*/
                v21 = *(_DWORD *)v10; /*0x59b666*/
              }
            }
            v17 = v35 == 1; /*0x59b675*/
            v25 += 80; /*0x59b676*/
            --v35; /*0x59b67a*/
          }
          while ( !v17 ); /*0x59b67e*/
          LOWORD(v4) = v34; /*0x59b684*/
        }
        v37 = (__int16)v21; /*0x59b69a*/
        v38 = SHIWORD(v21); /*0x59b69e*/
      }
      while ( v40 < v39 ); /*0x59b6a7*/
    }
    result = v20 - 1; /*0x59b6b8*/
    v17 = v20 == 1; /*0x59b6b8*/
    v26 += 4; /*0x59b6b9*/
    --v20; /*0x59b6bd*/
  }
  while ( !v17 ); /*0x59b6c1*/
  return result; /*0x59b6c7*/
}



// ==== 0x0059B6D0  SmallFunc_59B6D0  this=-  sig=ida-proto ====
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  _DWORD *NeighbourContent; // edi

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59b6d6*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b702*/
        if ( Cell::IsEmpty(NeighbourContent) ) /*0x59b706*/
          NeighbourContent[14] = dword_AA0E18; /*0x59b714*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b724*/
  }
  return result; /*0x59b731*/
}



// ==== 0x0059B740  RandomMap::PlaceShoreObjects  this=RandomMap  sig=csp ====
void RandomMap::PlaceShoreObjects(RandomMap *this)
{
  Cell *i; // ebp
  signed int j; // edi
  Cell *NeighbourContent; // esi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // esi
  signed int v7; // eax
  _DWORD *v8; // ecx
  Cell *v9; // ebp
  signed int v10; // edi
  Cell *v11; // esi
  int v12; // eax
  int v13; // [esp+10h] [ebp-34h]
  __int64 v14; // [esp+1Ch] [ebp-28h]
  double v15; // [esp+24h] [ebp-20h]
  void **v16; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v18; // [esp+34h] [ebp-10h]
  char v19; // [esp+39h] [ebp-Bh]
  signed int v20; // [esp+3Ch] [ebp-8h]
  int v21; // [esp+40h] [ebp-4h]

  RandomMap::Constructor((RandomMap *)&v16, 0, 0); /*0x59b74f*/
  v16 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x59b759*/
  v20 = 0; /*0x59b761*/
  v21 = 10000; /*0x59b765*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b76d*/
  for ( i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b780*/
        i;
        i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)Cell::IsShore(i) ) /*0x59b784*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(i, j); /*0x59b797*/
        if ( (unsigned __int8)Cell::IsEmpty(NeighbourContent) /*0x59b7ce*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v4 = v20++; /*0x59b7d9*/
          *((_DWORD *)Block + v4) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  v5 = v20 / 3; /*0x59b80d*/
  if ( v20 / 3 > 1000 ) /*0x59b815*/
    v5 = 1000; /*0x59b817*/
  if ( v5 > 0 ) /*0x59b81e*/
  {
    v13 = v5; /*0x59b824*/
    do /*0x59b90c*/
    {
      v6 = v20 - 1; /*0x59b830*/
      v15 = (double)(unsigned int)v20; /*0x59b83e*/
      do /*0x59b869*/
      {
        v14 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b84c*/
        LOWORD(v7) = Math::RoundToInt((double)v14 * v15 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v7 > v6 ); /*0x59b869*/
      v8 = Block; /*0x59b86b*/
      v9 = (Cell *)*((_DWORD *)Block + v7); /*0x59b875*/
      if ( v7 < v20 && v7 < --v20 ) /*0x59b881*/
      {
        while ( 1 ) /*0x59b88d*/
        {
          v8[v7] = v8[v7 + 1]; /*0x59b88d*/
          if ( ++v7 >= v20 ) /*0x59b897*/
            break; /*0x59b897*/
          v8 = Block; /*0x59b885*/
        }
      }
      v10 = 0; /*0x59b89e*/
      v9->Cell_field_0x38 = dword_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        v11 = (Cell *)Cell::GetNeighbourContent(v9, v10); /*0x59b8ab*/
        if ( (unsigned __int8)Cell::IsEmpty(v11) /*0x59b8e2*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v12 = v20++; /*0x59b8ed*/
          *((_DWORD *)Block + v12) = v11; /*0x59b8f8*/
        }
        v10 += 2; /*0x59b8fb*/
      }
      while ( v10 < 8 ); /*0x59b901*/
      --v13; /*0x59b908*/
    }
    while ( v13 ); /*0x59b90c*/
  }
  v16 = &VectorClass<CellClass *>::`vftable'; /*0x59b916*/
  if ( Block ) /*0x59b920*/
  {
    if ( v19 ) /*0x59b926*/
      __3_YAXPAX_Z(Block); /*0x59b929*/
  }
}



// ==== 0x0059B940  Map_Helper_59B940  this=RandomMap  sig=csp ====
double __stdcall sub_59B940(__int16 *a1, __int16 *a2, _DWORD *a3, __int16 *a4, float a5, float a6)
{
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  double v14; // st7
  signed int v15; // ecx
  __int64 v16; // rax
  double v17; // st7
  int v18; // eax
  int v19; // edx
  double v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+20h] [ebp+8h]
  int v23; // [esp+24h] [ebp+Ch]
  int v24; // [esp+28h] [ebp+10h]

  if ( *a3 == dword_ABE2F0 && a3[1] == dword_ABE2F4 && a3[2] == dword_ABE2F8 && a3[3] == dword_ABE2FC ) /*0x59b979*/
  {
    v18 = *a1 - *a2; /*0x59ba7b*/
    v19 = a1[1] - a2[1]; /*0x59ba7d*/
    return Math::Sqrt((double)(v18 * v18 + v19 * v19)); /*0x59ba94*/
  }
  else
  {
    v7 = a4[1]; /*0x59b989*/
    v8 = *a2; /*0x59b990*/
    v9 = a2[1]; /*0x59b993*/
    v22 = *a4; /*0x59b997*/
    v10 = abs32(((v8 - v9) >> 1) - ((v22 - v7) >> 1)); /*0x59b9b1*/
    v23 = v10; /*0x59b9c0*/
    v11 = ((v8 + v9) >> 1) - ((v7 + v22) >> 1); /*0x59b9c4*/
    v12 = (HIDWORD(v11) ^ v11) - HIDWORD(v11); /*0x59b9c8*/
    v24 = v12; /*0x59b9cc*/
    if ( v10 || v12 ) /*0x59b9d4*/
    {
      v14 = Math::Sqrt((double)(int)(v10 * v10 + v12 * v12)); /*0x59b9fe*/
      v15 = abs32(a1[1] - a2[1]); /*0x59ba29*/
      v16 = *a1 - *a2; /*0x59ba2b*/
      v21 = (HIDWORD(v16) ^ v16) - HIDWORD(v16); /*0x59ba32*/
      v20 = (double)v23 / v14; /*0x59ba36*/
      v17 = (double)v24 / v14; /*0x59ba3a*/
      if ( v21 <= v15 ) /*0x59ba3e*/
        v21 = v15; /*0x59ba40*/
      return (v17 * a6 + a5 * v20) * (double)v21; /*0x59ba58*/
    }
    else
    {
      return 0.0; /*0x59b9d6*/
    }
  }
}



// ==== 0x0059BAB0  Map_Helper_59BAB0  this=-  sig=csp ====
char __stdcall sub_59BAB0(__int16 *a1, int *a2, char a3, double a4, double a5)
{
  int v5; // esi
  int v7; // edx
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // edx
  int v12; // eax

  v5 = *a2; /*0x59babb*/
  if ( *a2 == dword_ABE2F0 && a2[1] == dword_ABE2F4 && a2[2] == dword_ABE2F8 && a2[3] == dword_ABE2FC ) /*0x59bae5*/
    return 1; /*0x59baeb*/
  if ( a3 ) /*0x59baf4*/
  {
    v7 = a1[1]; /*0x59bb00*/
    v8 = (double)(*a1 - 2 * v5 - v7 + dword_87F8DC - 1) * 0.5 - (double)a2[2] * 0.5; /*0x59bb3f*/
    v9 = (double)(*a1 - 2 * a2[1] - dword_87F8DC + v7 - 1) * 0.5 - (double)a2[3] * 0.5; /*0x59bb54*/
    if ( v9 * v9 * a5 + v8 * v8 * a4 < 1.0 ) /*0x59bb77*/
      return 1; /*0x59bb80*/
  }
  else
  {
    v10 = *a1; /*0x59bb87*/
    v11 = a1[1]; /*0x59bb8a*/
    if ( v10 >= v5 && v10 < v5 + a2[2] ) /*0x59bb99*/
    {
      v12 = a2[1]; /*0x59bb9b*/
      if ( v11 >= v12 && v11 < v12 + a2[3] ) /*0x59bba9*/
        return 1; /*0x59bbb2*/
    }
  }
  return 0; /*0x59bae7*/
}



// ==== 0x0059BBC0  RandomMap::PlaceTerrain  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceTerrain(RandomMap *this, int a2, _DWORD *a3, int a4, int a5, int a6, double a7, char a8)
{
  double v8; // st7
  int v9; // eax
  int v10; // edi
  void *v11; // eax
  Heap *v12; // eax
  Heap *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int16 v19; // di
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int16 v22; // cx
  __int16 v23; // ax
  Cell *v24; // eax
  int result; // eax
  __int16 v26; // dx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // edi
  unsigned int v31; // ecx
  unsigned int v32; // edx
  Heap v33; // ebx
  unsigned int v35; // eax
  __int16 *v36; // edi
  Heap v37; // eax
  _DWORD *v39; // eax
  char *v40; // ecx
  int v41; // edx
  int v42; // ebx
  char v43; // al
  int v44; // eax
  __int16 v45; // cx
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  Cell *v49; // eax
  Heap v50; // ebx
  __int16 v51; // ax
  __int16 v52; // ax
  int v53; // ecx
  Heap v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // edi
  unsigned int v58; // edx
  Heap v59; // edi
  Heap v62; // ecx
  Heap v63; // ecx
  bool v64; // zf
  Heap v65; // eax
  Heap v66; // eax
  __int16 *v67; // edi
  Cell *v68; // ebx
  int v69; // edi
  Heap v70; // eax
  int i; // eax
  int v72; // ecx
  int v73; // esi
  int v74; // edi
  int j; // eax
  int v76; // ecx
  double v77; // [esp+0h] [ebp-98h]
  char inited; // [esp+17h] [ebp-81h]
  __int16 v80[2]; // [esp+1Ch] [ebp-7Ch] BYREF
  __int16 v81[2]; // [esp+20h] [ebp-78h] BYREF
  int v82; // [esp+24h] [ebp-74h]
  int v83; // [esp+28h] [ebp-70h]
  int v84; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v86; // [esp+34h] [ebp-64h]
  float v87; // [esp+38h] [ebp-60h]
  int v88; // [esp+3Ch] [ebp-5Ch]
  int v89; // [esp+40h] [ebp-58h]
  int v90; // [esp+44h] [ebp-54h]
  __int64 v91; // [esp+48h] [ebp-50h]
  __int64 v92; // [esp+50h] [ebp-48h]
  int v93; // [esp+58h] [ebp-40h] BYREF
  int v94; // [esp+60h] [ebp-38h]
  double v95; // [esp+68h] [ebp-30h]
  double v96; // [esp+70h] [ebp-28h]
  double v97; // [esp+78h] [ebp-20h]
  double v98; // [esp+80h] [ebp-18h]
  double v99; // [esp+88h] [ebp-10h]
  double v100; // [esp+90h] [ebp-8h]

  v9 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v9 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  v10 = 8 * v9 + 2; /*0x59bbe5*/
  if ( v10 <= 100 ) /*0x59bbef*/
    v10 = 100; /*0x59bbf1*/
  v90 = v10; /*0x59bbfd*/
  v11 = (void *)__2_YAPAXI_Z(8 * v10); /*0x59bc02*/
  if ( v11 ) /*0x59bc0e*/
  {
    Block = v11; /*0x59bc13*/
    LODWORD(v95) = v10 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  v12 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x59bc23*/
  v13 = v12; /*0x59bc28*/
  if ( v12 ) /*0x59bc2f*/
  {
    v12[3] = 0; /*0x59bc38*/
    v12[4] = (Heap)-1; /*0x59bc3c*/
    *v12 = 0; /*0x59bc43*/
    v12[1] = (Heap)v10; /*0x59bc45*/
    v14 = __2_YAPAXI_Z(4 * v10 + 4); /*0x59bc48*/
    v15 = (int)v13[1]; /*0x59bc4d*/
    v13[2] = (Heap)v14; /*0x59bc50*/
    v16 = 0; /*0x59bc56*/
    if ( v15 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v16; /*0x59bc5f*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v16 - 4) = 0; /*0x59bc60*/
      }
      while ( v16 <= *(_DWORD *)&v13[1] ); /*0x59bc69*/
    }
  }
  else
  {
    v13 = 0; /*0x59bc6d*/
  }
  if ( *(_DWORD *)a4 || *(_DWORD *)(a4 + 4) ) /*0x59bc7c*/
  {
    v26 = *(_WORD *)(a4 + 4); /*0x59bdec*/
    LOWORD(v88) = *(_DWORD *)a4; /*0x59bdf0*/
    HIWORD(v88) = v26; /*0x59bdf5*/
    *(_DWORD *)v80 = v88; /*0x59bdfe*/
LABEL_27:
    v87 = 0.0; /*0x59be02*/
    v86 = 0.0; /*0x59be13*/
    if ( *a3 != *(_DWORD *)&g_MissionQueueFrame.globalVariables[112] /*0x59be46*/
      || a3[1] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[116]
      || a3[2] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[120]
      || a3[3] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[124] )
    {
      v27 = a3[3]; /*0x59be4b*/
      v84 = a3[2]; /*0x59be50*/
      v88 = v27; /*0x59be54*/
      if ( v84 <= v27 ) /*0x59be58*/
      {
        __asm { fild [esp+90h+var_5C] } /*0x59be76*/
        v86 = 1.0; /*0x59be7a*/
        __asm /*0x59be82*/
        {
          fidiv [esp+90h+var_6C]
          fmul ds:dbl_7E5190
          fstp [esp+90h+var_60]
        }
      }
      else
      {
        __asm { fild [esp+90h+var_6C] } /*0x59be5a*/
        v87 = 1.0; /*0x59be5e*/
        __asm /*0x59be66*/
        {
          fidiv [esp+90h+var_5C]
          fmul ds:dbl_7E5190
          fstp [esp+90h+var_64]
        }
      }
    }
    LODWORD(v92) = v80[0]; /*0x59be9a*/
    v28 = (int)*v13; /*0x59be9e*/
    __asm { fild dword ptr [esp+90h+var_48] } /*0x59bea0*/
    LODWORD(v92) = v80[1]; /*0x59bea4*/
    v29 = 0; /*0x59beaa*/
    __asm /*0x59beae*/
    {
      fstp [esp+90h+var_28]
      fild dword ptr [esp+90h+var_48]
    }
    v82 = 0; /*0x59beb6*/
    __asm { fstp [esp+90h+var_20] } /*0x59beba*/
    if ( v28 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v29; /*0x59bec3*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v29 - 4) = 0; /*0x59bec4*/
      }
      while ( v29 <= *(_DWORD *)v13 ); /*0x59becc*/
    }
    v30 = Block; /*0x59bece*/
    *v13 = 0; /*0x59bed2*/
    v83 = 1; /*0x59bed8*/
    *v30 = *(_DWORD *)v80; /*0x59bee0*/
    v30[1] = 0; /*0x59bee2*/
    *(_DWORD *)(80 * (v80[0] + g_MapCellWidth * v80[1]) + g_MissionQueueFrame.localVariables[163] + 60) = *((_DWORD *)this + 194); /*0x59bf0d*/
    v31 = *(_DWORD *)v13 + 1; /*0x59bf16*/
    LODWORD(v92) = v30[1]; /*0x59bf19*/
    v32 = v31 >> 1; /*0x59bf20*/
    if ( v31 < *(_DWORD *)&v13[1] ) /*0x59bf24*/
    {
      for ( ; v31 > 1; v32 >>= 1 ) /*0x59bf29*/
      {
        v33 = v13[2]; /*0x59bf2b*/
        _EAX = *(_DWORD *)(*(_DWORD *)&v33 + 4 * v32); /*0x59bf2e*/
        __asm /*0x59bf31*/
        {
          fld dword ptr [eax+4]
          fcomp dword ptr [esp+90h+var_48]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(_DWORD *)(*(_DWORD *)&v33 + 4 * v31) = *(_DWORD *)(*(_DWORD *)&v33 + 4 * v32); /*0x59bf42*/
        v31 = v32; /*0x59bf45*/
      }
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v31) = v30; /*0x59bf51*/
      v35 = (unsigned int)v13[3]; /*0x59bf56*/
      ++*(_DWORD *)v13; /*0x59bf5c*/
      if ( (unsigned int)v30 > v35 ) /*0x59bf5e*/
        v13[3] = (Heap)v30; /*0x59bf60*/
      if ( (unsigned int)v30 < *(_DWORD *)&v13[4] ) /*0x59bf66*/
        v13[4] = (Heap)v30; /*0x59bf68*/
    }
    if ( *v13 ) /*0x59bf6b*/
    {
      v37 = v13[2]; /*0x59bf75*/
      v36 = *(__int16 **)(*(_DWORD *)&v37 + 4); /*0x59bf7d*/
      *(_DWORD *)(*(_DWORD *)&v37 + 4) = *(_DWORD *)(*(_DWORD *)&v37 + 4 * *(_DWORD *)v13); /*0x59bf80*/
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59bf88*/
      Heap::SiftDown(v13, 1); /*0x59bf96*/
    }
    else
    {
      v36 = 0; /*0x59bf71*/
    }
    _EAX = a3; /*0x59bf9b*/
    v84 = (int)v36; /*0x59bf9e*/
    __asm /*0x59bfa2*/
    {
      fild dword ptr [eax+8]
      fmul ds:dbl_7E1738
      fld st
      fmul st, st(1)
      fdivr ds:dbl_7E1718
      fstp [esp+90h+var_10]
      fstp st
      fild dword ptr [eax+0Ch]
    }
    __asm
    {
      fmul ds:dbl_7E1738
      fld st
      fmul st, st(1)
      fdivr ds:dbl_7E1718
      fstp [esp+90h+var_18]
      fstp st
    }
    do /*0x59c32c*/
    {
      if ( !v36 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bff2*/
        *(_DWORD *)(80 * (*v36 + g_MapCellWidth * v36[1]) + g_MissionQueueFrame.localVariables[163] + 56) = *((_DWORD *)this + 194); /*0x59c014*/
      v39 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x59c01e*/
      v40 = (char *)Block; /*0x59c023*/
      v41 = v83; /*0x59c027*/
      v39[14] = 0; /*0x59c02b*/
      v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c032*/
      v43 = 0; /*0x59c038*/
      LODWORD(v92) = 0; /*0x59c03d*/
      LODWORD(v91) = &v40[8 * v41]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        v44 = v43 & 7; /*0x59c04b*/
        v45 = v36[1] + HIWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c064*/
        LOWORD(v89) = *v36 + LOWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c068*/
        HIWORD(v89) = v45; /*0x59c06d*/
        *(_DWORD *)v81 = v89; /*0x59c076*/
        v46 = v45; /*0x59c07d*/
        v47 = v45 + (__int16)v89; /*0x59c080*/
        if ( v47 > v42 /*0x59c0a9*/
          && (__int16)v89 - v46 < v42
          && v46 - (__int16)v89 < v42
          && v47 <= g_MissionQueueFrame.localVariables[161] )
        {
          v48 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v89 + g_MapCellWidth * v46); /*0x59c0c4*/
          if ( !*(_DWORD *)(v48 + 56) && *(_DWORD *)(v48 + 60) != *((_DWORD *)this + 194) ) /*0x59c0de*/
          {
            v49 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x59c0ee*/
            if ( (unsigned __int8)Cell::IsGroundTypeRange(v49) && v83 < v90 && Map_Helper_59BAB0(v81, a3, a5, v99, v98) ) /*0x59c13d*/
            {
              __asm { fld [esp+90h+var_28] } /*0x59c14a*/
              v50 = (Heap)v91; /*0x59c14e*/
              __asm { fadd ds:dbl_7E1738 } /*0x59c156*/
              *(_DWORD *)v91 = *(_DWORD *)v81; /*0x59c15c*/
              v51 = Math::RoundToInt(v8); /*0x59c15e*/
              __asm /*0x59c163*/
              {
                fld [esp+90h+var_20]
                fadd ds:dbl_7E1738
              }
              LOWORD(v88) = v51; /*0x59c16d*/
              v52 = Math::RoundToInt(v8); /*0x59c172*/
              HIWORD(v88) = v52; /*0x59c177*/
              v93 = v88; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                v8 = Map_Helper_59B940((__int16 *)&v93, v81, a3, (__int16 *)a6, v87, v86); /*0x59c1ab*/
              }
              else
              {
                LODWORD(v91) = (v81[1] - v52) * (v81[1] - v52) + (v81[0] - (__int16)v88) * (v81[0] - (__int16)v88); /*0x59c1d7*/
                __asm /*0x59c1db*/
                {
                  fild dword ptr [esp+98h+var_50]
                  fstp [esp+98h+var_98]; double
                }
                Math::Sqrt(v77); /*0x59c1e2*/
                __asm { fstp [esp+98h+var_30] } /*0x59c1e7*/
                *(_QWORD *)&v100 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59c1f8*/
                __asm /*0x59c20a*/
                {
                  fild [esp+90h+var_8]
                  fmul ds:dbl_7ED808
                  fmul ds:dbl_7ED898
                  fadd [esp+90h+var_30]
                }
              }
              v53 = v83; /*0x59c225*/
              __asm { fstp dword ptr [ebx+4] } /*0x59c229*/
              *(float *)(*(_DWORD *)&v50 + 4) = _ET1; /*0x59c229*/
              *(_DWORD *)(v48 + 60) = *((_DWORD *)this + 194); /*0x59c233*/
              v55 = v50; /*0x59c236*/
              v83 = v53 + 1; /*0x59c238*/
              v56 = *(_DWORD *)v13 + 1; /*0x59c244*/
              v94 = *(_DWORD *)(*(_DWORD *)&v50 + 4); /*0x59c245*/
              v57 = (unsigned int)v13[1]; /*0x59c249*/
              v58 = v56 >> 1; /*0x59c24e*/
              LODWORD(v95) = v50; /*0x59c252*/
              LODWORD(v91) = *(_DWORD *)&v50 + 8; /*0x59c256*/
              if ( v56 < v57 ) /*0x59c25a*/
              {
                if ( v56 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    v59 = v13[2]; /*0x59c261*/
                    _EBX = *(_DWORD *)(*(_DWORD *)&v59 + 4 * v58); /*0x59c264*/
                    __asm /*0x59c267*/
                    {
                      fld dword ptr [ebx+4]
                      fcomp dword ptr [esp+58h]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(_DWORD *)(*(_DWORD *)&v59 + 4 * v56) = _EBX; /*0x59c275*/
                    v56 = v58; /*0x59c278*/
                    v58 >>= 1; /*0x59c27a*/
                  }
                  while ( v56 > 1 ); /*0x59c27f*/
                  v55 = (Heap)LODWORD(v95); /*0x59c281*/
                }
                *(Heap *)(*(_DWORD *)&v13[2] + 4 * v56) = v55; /*0x59c288*/
                v62 = v13[3]; /*0x59c28d*/
                ++*(_DWORD *)v13; /*0x59c293*/
                if ( *(_DWORD *)&v55 > *(unsigned int *)&v62 ) /*0x59c295*/
                  v13[3] = v55; /*0x59c297*/
                if ( *(unsigned int *)&v55 < *(_DWORD *)&v13[4] ) /*0x59c29d*/
                  v13[4] = v55; /*0x59c29f*/
              }
            }
            v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c2a2*/
          }
        }
        v43 = v92 + 2; /*0x59c2ac*/
        LODWORD(v92) = v92 + 2; /*0x59c2b2*/
        if ( (int)v92 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v36 = (__int16 *)v84; /*0x59c047*/
      }
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59c2c1*/
      __asm { fmul [ebp+arg_14] } /*0x59c2c6*/
      __asm
      {
        fadd [esp+90h+var_28]
        fstp [esp+90h+var_28]
      }
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59c2d6*/
      __asm { fmul [ebp+arg_14] } /*0x59c2db*/
      __asm { fadd [esp+90h+var_20] }
      ++v82; /*0x59c2e7*/
      v63 = *v13; /*0x59c2eb*/
      v64 = *v13 == 0; /*0x59c2ed*/
      __asm { fstp [esp+90h+var_20] } /*0x59c2ef*/
      if ( v64 ) /*0x59c2f3*/
      {
        v36 = 0; /*0x59c2f5*/
      }
      else
      {
        v65 = v13[2]; /*0x59c2f9*/
        v36 = *(__int16 **)(*(_DWORD *)&v65 + 4); /*0x59c301*/
        *(_DWORD *)(*(_DWORD *)&v65 + 4) = *(_DWORD *)(*(_DWORD *)&v65 + 4 * *(_DWORD *)&v63); /*0x59c304*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c30c*/
        Heap::SiftDown(v13, 1); /*0x59c31a*/
      }
      v84 = (int)v36; /*0x59c328*/
    }
    while ( v82 < a2 ); /*0x59c32c*/
    if ( *v13 ) /*0x59c332*/
    {
      v66 = v13[2]; /*0x59c33c*/
      v67 = *(__int16 **)(*(_DWORD *)&v66 + 4); /*0x59c344*/
      *(_DWORD *)(*(_DWORD *)&v66 + 4) = *(_DWORD *)(*(_DWORD *)&v66 + 4 * *(_DWORD *)v13); /*0x59c347*/
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c34f*/
      Heap::SiftDown(v13, 1); /*0x59c35d*/
      for ( ; v67; ++v82 ) /*0x59c364*/
      {
        v68 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x59c375*/
        v69 = g_MissionQueueFrame.localVariables[163] + 80 * (*v67 + g_MapCellWidth * v67[1]); /*0x59c393*/
        if ( !*(_DWORD *)(v69 + 56) && (unsigned __int8)Cell::IsGroundTypeRange(v68) ) /*0x59c39e*/
        {
          v68->Cell_field_0x38 = 0; /*0x59c3ab*/
          *(_DWORD *)(v69 + 56) = *((_DWORD *)this + 194); /*0x59c3b8*/
        }
        if ( *v13 ) /*0x59c3bb*/
        {
          v70 = v13[2]; /*0x59c3c5*/
          v67 = *(__int16 **)(*(_DWORD *)&v70 + 4); /*0x59c3cd*/
          *(_DWORD *)(*(_DWORD *)&v70 + 4) = *(_DWORD *)(*(_DWORD *)&v70 + 4 * *(_DWORD *)v13); /*0x59c3d0*/
          *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c3d8*/
          Heap::SiftDown(v13, 1); /*0x59c3e6*/
        }
        else
        {
          v67 = 0; /*0x59c3c1*/
        }
      }
    }
    __3_YAXPAX_Z(Block); /*0x59c405*/
    if ( v13 ) /*0x59c411*/
    {
      __3_YAXPAX_Z(*(void **)&v13[2]); /*0x59c417*/
      __3_YAXPAX_Z(v13); /*0x59c41d*/
    }
    inited = MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], *((_DWORD *)this + 194), 1); /*0x59c43d*/
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c452*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v72 = *(_DWORD *)(i + 56); /*0x59c454*/
      if ( v72 >= dword_ABAD28 && v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(_DWORD *)(i + 56) = 0; /*0x59c468*/
        *(_BYTE *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      result = v82; /*0x59c51b*/
      ++*((_DWORD *)this + 194); /*0x59c521*/
    }
    else
    {
      v73 = g_CellPassabilityLUT; /*0x59c48c*/
      v74 = *((_DWORD *)this + 194); /*0x59c492*/
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c4ae*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        LODWORD(v95) = *(_DWORD *)(j + 36); /*0x59c4b3*/
        v76 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v95) + g_MapCellWidth * SWORD1(v95)); /*0x59c4d4*/
        if ( *(_DWORD *)(v76 + 56) == v74 ) /*0x59c4d9*/
        {
          *(_DWORD *)(v76 + 56) = 0; /*0x59c4db*/
          *(_BYTE *)(v76 + 75) = 0; /*0x59c4e2*/
          *(_DWORD *)(j + 56) = v73; /*0x59c4e6*/
          *(_BYTE *)(j + 282) = 0; /*0x59c4e9*/
          *(_BYTE *)(j + 283) = *((_DWORD *)this + 195); /*0x59c4f6*/
        }
      }
      return 0; /*0x59c50a*/
    }
  }
  else
  {
    v84 = 0; /*0x59bc85*/
    while ( 1 ) /*0x59bc97*/
    {
      v17 = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x59bc97*/
      *(_QWORD *)&v97 = *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x59bc9d*/
      __asm /*0x59bca1*/
      {
        fild [esp+90h+var_20]
        fstp [esp+90h+var_8]
      }
      do /*0x59bcdc*/
      {
        *(_QWORD *)&v96 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bcb6*/
        __asm /*0x59bcc2*/
        {
          fild [esp+90h+var_28]
          fmul [esp+90h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v18) = Math::RoundToInt(v8); /*0x59bcd3*/
        v19 = v18; /*0x59bcd8*/
      }
      while ( v18 > v17 ); /*0x59bcdc*/
      v20 = *(_DWORD *)&stru_87F5F0.__pad_58[664] - 1; /*0x59bcec*/
      v92 = *(unsigned int *)&stru_87F5F0.__pad_58[664]; /*0x59bcf2*/
      __asm /*0x59bcf6*/
      {
        fild [esp+90h+var_48]
        fstp [esp+90h+var_8]
      }
      do /*0x59bd2f*/
      {
        v91 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bd0b*/
        __asm /*0x59bd17*/
        {
          fild [esp+90h+var_50]
          fmul [esp+90h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v21) = Math::RoundToInt(v8); /*0x59bd28*/
      }
      while ( v21 > v20 ); /*0x59bd2f*/
      HIWORD(v93) = -v19; /*0x59bd3c*/
      HIWORD(v94) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x59bd41*/
      LOWORD(v95) = v19 + 1; /*0x59bd51*/
      WORD1(v95) = *(_WORD *)&stru_87F5F0.__pad_58[660] - v19; /*0x59bd56*/
      v22 = v21 + v19 + 1; /*0x59bd63*/
      v23 = *(_WORD *)&stru_87F5F0.__pad_58[660] - v19 + v21; /*0x59bd65*/
      LOWORD(v88) = v22; /*0x59bd67*/
      HIWORD(v88) = v23; /*0x59bd6c*/
      *(_DWORD *)v80 = v88; /*0x59bd75*/
      if ( ++v84 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bd92*/
      {
        if ( !*(_DWORD *)(80 * (v22 + g_MapCellWidth * v23) + g_MissionQueueFrame.localVariables[163] + 56) ) /*0x59bdad*/
        {
          v24 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80); /*0x59bdc3*/
          if ( (unsigned __int8)Cell::IsGroundTypeRange(v24) ) /*0x59bdca*/
          {
            if ( v84 < 200 ) /*0x59bddf*/
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c536*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x59c549*/
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



// ==== 0x0059C580  RandomMap::GrowTiberium  this=RandomMap  sig=csp ====
char __thiscall RandomMap::GrowTiberium(RandomMap *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  char result; // al
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->RandomMap_field_0x3C[0]; /*0x59c594*/
  ++*((_DWORD *)this + 194); /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && *(int *)this->__pad_4C > 20 ) /*0x59c5ac*/
  {
    v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      v6 = 0; /*0x59c5c1*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth((Tiberium *)this, (int)&v6, 0.0, 0) ) /*0x59c5cb*/
      {
        ++*((_DWORD *)this + 194); /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    v6 = 0; /*0x59c5ee*/
    result = TiberiumClass::Grow((TiberiumClass *)this, &v6); /*0x59c5fb*/
    ++v4; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++*((_DWORD *)this + 194); /*0x59c605*/
      return result; /*0x59c605*/
    }
  }
  return result; /*0x59c60b*/
}



// ==== 0x0059C630  FindMapCell  this=RandomMap  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(_DWORD *)(i + 56) == g_CellPassabilityLUT && !*(_BYTE *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent[14] != g_CellPassabilityLUT /*0x59c6ce*/
        || *((_BYTE *)NeighbourContent + 282)
        || v3[14] != g_CellPassabilityLUT
        || *((_BYTE *)v3 + 282)
        || v4[14] != g_CellPassabilityLUT
        || *((_BYTE *)v4 + 282) )
      {
        goto LABEL_25; /*0x59c6ce*/
      }
      do /*0x59c704*/
      {
        v10 = (unsigned int)Random::State(&unk_ABE890); /*0x59c6e4*/
        v5 = Math::RoundToInt((double)v10 * 0.000000002328306437080797 + 1.0); /*0x59c6fc*/
      }
      while ( v5 > 0xA ); /*0x59c704*/
      if ( v5 == 1 ) /*0x59c709*/
      {
LABEL_25:
        do /*0x59c7c5*/
        {
          v12 = (unsigned int)Random::State(&unk_ABE890); /*0x59c7a6*/
          v9 = Math::RoundToInt((double)v12 * 0.00000004679895938532403); /*0x59c7bd*/
        }
        while ( v9 > 0xC8 ); /*0x59c7c5*/
        *(_DWORD *)(i + 56) = v9 / 0x28 + g_CellPassabilityLUT + 8; /*0x59c7da*/
      }
      else
      {
        do /*0x59c738*/
        {
          v11 = (unsigned int)Random::State(&unk_ABE890); /*0x59c719*/
          v6 = Math::RoundToInt((double)v11 * 0.0000000563450157773553); /*0x59c72b*/
        }
        while ( (unsigned int)v6 > 0xF1 ); /*0x59c738*/
        if ( v6 < 240 ) /*0x59c740*/
          v7 = v6 / 40; /*0x59c75c*/
        else
          v7 = 247 - v6; /*0x59c747*/
        if ( dword_ABED10 ) /*0x59c769*/
          v8 = *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + g_CellPassabilityLUT, (_WORD *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c7e2*/
  }
  return result; /*0x59c7f3*/
}



// ==== 0x0059C920  TiberiumClass::Grow  this=TiberiumClass  sig=csp ====
char __thiscall TiberiumClass::Grow(TiberiumClass *this, _WORD *a2)
{
  double v2; // st7
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  void *v8; // eax
  Heap *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int i; // eax
  _WORD *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  void **v20; // ecx
  void *v21; // eax
  bool v22; // zf
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int16 v25; // di
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int16 v28; // cx
  __int16 v29; // ax
  Cell *v30; // eax
  int v32; // eax
  int v33; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // edx
  Heap v44; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  Heap v48; // eax
  __int16 *v49; // edi
  int v50; // edx
  _DWORD *v51; // eax
  char *v52; // edx
  float *v53; // ebx
  int v54; // ecx
  __int16 v55; // ax
  int v56; // ecx
  int v57; // edi
  Cell *v58; // eax
  __int16 v59; // ax
  int v60; // edx
  Heap v62; // edi
  unsigned int v63; // ecx
  unsigned int v64; // edx
  Heap v66; // eax
  int v67; // edi
  Heap v68; // eax
  int v69; // edi
  Heap v70; // eax
  __int16 *v71; // edi
  Cell *v72; // ebx
  int v73; // edi
  Heap v74; // eax
  TiberiumClass *v75; // edi
  int j; // eax
  int v77; // ecx
  int v78; // ecx
  int v79; // esi
  int k; // eax
  int v81; // ecx
  double v82; // [esp+0h] [ebp-78h]
  char inited; // [esp+1Bh] [ebp-5Dh]
  __int16 v85[2]; // [esp+20h] [ebp-58h] BYREF
  __int64 v86; // [esp+24h] [ebp-54h]
  int v87; // [esp+2Ch] [ebp-4Ch]
  void *Block; // [esp+30h] [ebp-48h]
  __int16 v89[4]; // [esp+34h] [ebp-44h] BYREF
  __int64 v90; // [esp+3Ch] [ebp-3Ch]
  __int64 v91; // [esp+44h] [ebp-34h]
  int v92; // [esp+4Ch] [ebp-2Ch]
  double v93; // [esp+50h] [ebp-28h]
  double v94; // [esp+58h] [ebp-20h]
  double v95; // [esp+60h] [ebp-18h]
  double v96; // [esp+68h] [ebp-10h]
  double v97; // [esp+70h] [ebp-8h]

  _EBX = (MapClass *)this; /*0x59c92a*/
  v4 = this->?[4]; /*0x59c92e*/
  inited = 1; /*0x59c937*/
  LODWORD(v94) = v4; /*0x59c93c*/
  if ( v4 ) /*0x59c940*/
  {
    __asm /*0x59c942*/
    {
      fild dword ptr [ebx+184h]
      fimul dword ptr [ebx+180h]
      fimul dword ptr [esp+70h+var_20]
      fmul ds:dbl_7ED9F8
      fadd ds:dbl_7E2AC0
    }
    LOWORD(v4) = Math::RoundToInt(v2); /*0x59c95e*/
  }
  v5 = v4 - (unsigned int)_EBX->MapClass_field_0x304; /*0x59c963*/
  LODWORD(v93) = v5; /*0x59c96c*/
  if ( v5 <= 75 ) /*0x59c970*/
    return 0; /*0x59c970*/
  v6 = 2 * v5 + 2; /*0x59c976*/
  v7 = v6; /*0x59c97d*/
  if ( v6 <= 100 ) /*0x59c97f*/
    v7 = 100; /*0x59c981*/
  v8 = (void *)__2_YAPAXI_Z(8 * v7); /*0x59c98e*/
  if ( v8 ) /*0x59c998*/
  {
    Block = v8; /*0x59c99b*/
    LODWORD(v96) = v7 - 1; /*0x59c99f*/
  }
  else
  {
    Block = 0; /*0x59c9a5*/
  }
  v9 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x59c9b4*/
  if ( v9 ) /*0x59c9bb*/
  {
    v10 = v6; /*0x59c9c0*/
    if ( v6 <= 100 ) /*0x59c9c2*/
      v10 = 100; /*0x59c9c4*/
    v9[3] = 0; /*0x59c9d3*/
    v9[4] = (Heap)-1; /*0x59c9d6*/
    *v9 = 0; /*0x59c9dd*/
    v9[1] = (Heap)v10; /*0x59c9df*/
    v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x59c9e2*/
    v12 = (int)v9[1]; /*0x59c9e7*/
    v9[2] = (Heap)v11; /*0x59c9ea*/
    v13 = 0; /*0x59c9f0*/
    if ( v12 >= 0 ) /*0x59c9f4*/
    {
      do /*0x59ca03*/
      {
        ++v13; /*0x59c9f9*/
        *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v13 - 4) = 0; /*0x59c9fa*/
      }
      while ( v13 <= *(_DWORD *)&v9[1] ); /*0x59ca03*/
    }
  }
  else
  {
    v9 = 0; /*0x59ca07*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ca10*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ca21*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v94) = *(_DWORD *)(i + 36); /*0x59ca26*/
    *(_DWORD *)(80 * (SLOWORD(v94) + g_MapCellWidth * SWORD1(v94)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ca4b*/
  }
  v15 = a2; /*0x59ca5e*/
  v16 = g_MapCellWidth * g_MapCellWidth; /*0x59ca61*/
  if ( *a2 || a2[1] ) /*0x59ca6e*/
  {
    if ( v16 > 0 ) /*0x59cc83*/
    {
      v32 = 0; /*0x59cc89*/
      do /*0x59cc9a*/
      {
        v32 += 80; /*0x59cc91*/
        --v16; /*0x59cc94*/
        *(_BYTE *)(v32 + g_MissionQueueFrame.localVariables[163] - 12) = 1; /*0x59cc95*/
      }
      while ( v16 ); /*0x59cc9a*/
    }
  }
  else
  {
    if ( v16 > 0 ) /*0x59ca7b*/
    {
      v17 = 0; /*0x59ca7d*/
      v18 = g_MapCellWidth * g_MapCellWidth; /*0x59ca7f*/
      do /*0x59ca90*/
      {
        v17 += 80; /*0x59ca87*/
        --v18; /*0x59ca8a*/
        *(_BYTE *)(v17 + g_MissionQueueFrame.localVariables[163] - 12) = 0; /*0x59ca8b*/
      }
      while ( v18 ); /*0x59ca90*/
    }
    MapClass::GrowLayer(_EBX, 0, 2, -2); /*0x59ca9a*/
    if ( v16 > 0 ) /*0x59caa1*/
    {
      v19 = 0; /*0x59caa3*/
      do /*0x59cada*/
      {
        v20 = (void **)(v19 + g_MissionQueueFrame.localVariables[163] + 56); /*0x59caaa*/
        v21 = *v20; /*0x59caae*/
        if ( !*v20 || v21 == _EBX->MapClass_field_0x308 ) /*0x59cabc*/
        {
          *(_BYTE *)(v19 + g_MissionQueueFrame.localVariables[163] + 68) = 1; /*0x59cad1*/
        }
        else if ( v21 == (void *)-2 ) /*0x59cac1*/
        {
          *v20 = 0; /*0x59cac3*/
        }
        v19 += 80; /*0x59cad6*/
        --v16; /*0x59cad9*/
      }
      while ( v16 ); /*0x59cada*/
    }
    v15 = a2; /*0x59cadc*/
  }
  v22 = *v15 == 0; /*0x59cadf*/
  v87 = 0; /*0x59cae3*/
  if ( v22 && !v15[1] ) /*0x59caf1*/
  {
    while ( 1 ) /*0x59cb09*/
    {
      v23 = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x59cb09*/
      v91 = *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x59cb0f*/
      __asm /*0x59cb13*/
      {
        fild [esp+70h+var_34]
        fstp [esp+70h+var_8]
      }
      do /*0x59cb48*/
      {
        v90 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59cb25*/
        __asm /*0x59cb31*/
        {
          fild [esp+70h+var_3C]
          fmul [esp+70h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v24) = Math::RoundToInt(v2); /*0x59cb3f*/
        v25 = v24; /*0x59cb44*/
      }
      while ( v24 > v23 ); /*0x59cb48*/
      v26 = *(_DWORD *)&stru_87F5F0.__pad_58[664] - 1; /*0x59cb58*/
      *(_QWORD *)v89 = *(unsigned int *)&stru_87F5F0.__pad_58[664]; /*0x59cb5e*/
      __asm /*0x59cb62*/
      {
        fild qword ptr [esp+70h+var_44]
        fstp [esp+70h+var_8]
      }
      do /*0x59cb95*/
      {
        v86 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59cb74*/
        __asm /*0x59cb80*/
        {
          fild [esp+70h+var_54]
          fmul [esp+70h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v27) = Math::RoundToInt(v2); /*0x59cb8e*/
      }
      while ( v27 > v26 ); /*0x59cb95*/
      WORD1(v95) = -v25; /*0x59cba2*/
      WORD1(v94) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x59cbab*/
      LOWORD(v96) = v25 + 1; /*0x59cbb7*/
      WORD1(v96) = *(_WORD *)&stru_87F5F0.__pad_58[660] - v25; /*0x59cbbc*/
      v28 = v27 + v25 + 1; /*0x59cbc9*/
      v29 = *(_WORD *)&stru_87F5F0.__pad_58[660] - v25 + v27; /*0x59cbcb*/
      LOWORD(v92) = v28; /*0x59cbcd*/
      HIWORD(v92) = v29; /*0x59cbd2*/
      *(_DWORD *)v85 = v92; /*0x59cbdb*/
      if ( ++v87 >= 200 ) /*0x59cbee*/
        return 0; /*0x59cbee*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59cbfc*/
      {
        if ( !*(_DWORD *)(80 * (v28 + g_MapCellWidth * v29) + g_MissionQueueFrame.localVariables[163] + 56) ) /*0x59cc17*/
        {
          v30 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v85); /*0x59cc2d*/
          if ( (unsigned __int8)Cell::IsEmpty(v30) ) /*0x59cc34*/
          {
            if ( *(_BYTE *)(80 * (v85[0] + g_MapCellWidth * v85[1]) + g_MissionQueueFrame.localVariables[163] + 68) ) /*0x59cc60*/
            {
              if ( v87 < 200 ) /*0x59cc74*/
                goto LABEL_50; /*0x59cc74*/
              return 0; /*0x59cc7e*/
            }
          }
        }
      }
    }
  }
  *(_DWORD *)v85 = *(_DWORD *)v15; /*0x59cca3*/
LABEL_50:
  v33 = LODWORD(v93); /*0x59cca7*/
  LODWORD(v86) = 0; /*0x59ccb0*/
  v92 = 76; /*0x59ccb4*/
  if ( SLODWORD(v93) >= 76 ) /*0x59ccbc*/
    v92 = LODWORD(v93); /*0x59ccbe*/
  __asm /*0x59ccc9*/
  {
    fild [esp+70h+var_2C]
    fstp [esp+70h+var_28]
  }
  LODWORD(v94) = v33 / 6; /*0x59ccdd*/
  __asm /*0x59cce3*/
  {
    fild dword ptr [esp+70h+var_20]
    fstp [esp+70h+var_10]
  }
  LODWORD(v94) = v33 / 3; /*0x59ccf2*/
  __asm /*0x59ccf6*/
  {
    fild dword ptr [esp+70h+var_20]
    fst qword ptr [esp+58h]
    fsub [esp+70h+var_10]
    fcomp [esp+70h+var_28]
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x59cd0b*/
    goto LABEL_54; /*0x59cd0b*/
  __asm /*0x59cd0d*/
  {
    fld qword ptr [esp+58h]
    fadd [esp+70h+var_10]
    fcomp ds:dbl_7ED9F0
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x59cd20*/
  {
LABEL_54:
    __asm /*0x59cd22*/
    {
      fld [esp+70h+var_28]
      fsub ds:dbl_7ED9F0
      fmul ds:dbl_7E1738
      fst [esp+70h+var_10]
      fadd ds:dbl_7ED9F0
      fstp qword ptr [esp+58h]
    }
  }
  do /*0x59cd70*/
  {
    do /*0x59cd61*/
    {
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59cd45*/
      __asm /*0x59cd4a*/
      {
        fmul [esp+70h+var_10]
        fadd qword ptr [esp+58h]
        fst [esp+70h+var_20]
        fcomp ds:dbl_7ED9F0
        fnstsw ax
      }
    }
    while ( (_AX & 0x100) != 0 ); /*0x59cd61*/
    __asm /*0x59cd63*/
    {
      fld [esp+70h+var_20]
      fcomp [esp+70h+var_28]
      fnstsw ax
    }
  }
  while ( (_AX & 0x4100) == 0 ); /*0x59cd70*/
  __asm { fld [esp+70h+var_20] } /*0x59cd72*/
  LOWORD(v38) = Math::RoundToInt(v2); /*0x59cd76*/
  v39 = (int)*v9; /*0x59cd7b*/
  v92 = v38; /*0x59cd7d*/
  v40 = 0; /*0x59cd81*/
  if ( v39 >= 0 ) /*0x59cd85*/
  {
    do /*0x59cd93*/
    {
      ++v40; /*0x59cd8a*/
      *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v40 - 4) = 0; /*0x59cd8b*/
    }
    while ( v40 <= *(_DWORD *)v9 ); /*0x59cd93*/
  }
  v41 = Block; /*0x59cd95*/
  *v9 = 0; /*0x59cd99*/
  LODWORD(v90) = 1; /*0x59cd9f*/
  *v41 = *(_DWORD *)v85; /*0x59cda7*/
  v41[1] = 0; /*0x59cda9*/
  *(_DWORD *)(80 * (v85[0] + g_MapCellWidth * v85[1]) + g_MissionQueueFrame.localVariables[163] + 60) = *((_DWORD *)this + 194); /*0x59cdd4*/
  v42 = *(_DWORD *)v9 + 1; /*0x59cddd*/
  LODWORD(v94) = v41[1]; /*0x59cde0*/
  v43 = v42 >> 1; /*0x59cde7*/
  if ( v42 < *(_DWORD *)&v9[1] ) /*0x59cdeb*/
  {
    for ( ; v42 > 1; v43 >>= 1 ) /*0x59cdf0*/
    {
      v44 = v9[2]; /*0x59cdf2*/
      _EAX = *(_DWORD *)(*(_DWORD *)&v44 + 4 * v43); /*0x59cdf5*/
      __asm /*0x59cdf8*/
      {
        fld dword ptr [eax+4]
        fcomp dword ptr [esp+70h+var_20]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x59ce04*/
        break; /*0x59ce04*/
      *(_DWORD *)(*(_DWORD *)&v44 + 4 * v42) = *(_DWORD *)(*(_DWORD *)&v44 + 4 * v43); /*0x59ce09*/
      v42 = v43; /*0x59ce0c*/
    }
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v42) = v41; /*0x59ce18*/
    v46 = (unsigned int)v9[3]; /*0x59ce1d*/
    ++*(_DWORD *)v9; /*0x59ce23*/
    if ( (unsigned int)v41 > v46 ) /*0x59ce25*/
      v9[3] = (Heap)v41; /*0x59ce27*/
    if ( (unsigned int)v41 < *(_DWORD *)&v9[4] ) /*0x59ce2d*/
      v9[4] = (Heap)v41; /*0x59ce2f*/
  }
  v47 = (int)*v9; /*0x59ce32*/
  if ( *v9 ) /*0x59ce32*/
  {
    v48 = v9[2]; /*0x59ce38*/
    v49 = *(__int16 **)(*(_DWORD *)&v48 + 4); /*0x59ce40*/
    *(_DWORD *)(*(_DWORD *)&v48 + 4) = *(_DWORD *)(*(_DWORD *)&v48 + 4 * v47); /*0x59ce43*/
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59ce4b*/
    Heap::SiftDown(v9, 1); /*0x59ce59*/
    v47 = (int)v49; /*0x59ce5e*/
  }
  v87 = v47; /*0x59ce64*/
  if ( v92 > 0 ) /*0x59ce6a*/
  {
    v50 = g_MissionQueueFrame.localVariables[163]; /*0x59ce70*/
    while ( v47 && inited ) /*0x59ce84*/
    {
      if ( v50 ) /*0x59ce98*/
        *(_DWORD *)(80 * (*(__int16 *)v47 + g_MapCellWidth * *(__int16 *)(v47 + 2)) + v50 + 56) = *((_DWORD *)this + 194); /*0x59ceba*/
      v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v47); /*0x59cec4*/
      v52 = (char *)Block; /*0x59cecf*/
      v51[14] = g_CellPassabilityLUT; /*0x59ced3*/
      *((_BYTE *)v51 + 282) = 0; /*0x59ced6*/
      LODWORD(v91) = 0; /*0x59cee1*/
      v53 = (float *)&v52[8 * v90]; /*0x59cee9*/
      do /*0x59d0f8*/
      {
        v54 = v91 & 7; /*0x59cef4*/
        v55 = LOWORD(g_DDrawSurfaceManager.scenario[v54 + 82]) + *(_WORD *)v87; /*0x59cf00*/
        LOWORD(v54) = HIWORD(g_DDrawSurfaceManager.scenario[v54 + 82]); /*0x59cf0f*/
        LOWORD(v93) = v55; /*0x59cf13*/
        WORD1(v93) = *(_WORD *)(v87 + 2) + v54; /*0x59cf1c*/
        *(_DWORD *)v89 = LODWORD(v93); /*0x59cf25*/
        v56 = SWORD1(v93) + v55; /*0x59cf2f*/
        if ( v56 > g_MissionQueueFrame.localVariables[160] /*0x59cf60*/
          && v55 - SWORD1(v93) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v93) - v55 < g_MissionQueueFrame.localVariables[160]
          && v56 <= g_MissionQueueFrame.localVariables[161] )
        {
          v57 = g_MissionQueueFrame.localVariables[163] + 80 * (v55 + g_MapCellWidth * SWORD1(v93)); /*0x59cf7b*/
          if ( *(_DWORD *)(v57 + 56) /*0x59cfb9*/
            || *(_DWORD *)(v57 + 60) == *((_DWORD *)this + 194)
            || (v58 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v89),
                !(unsigned __int8)Cell::IsEmpty(v58))
            || !*(_BYTE *)(v57 + 68) )
          {
            v67 = *(_DWORD *)(v57 + 56); /*0x59d0d2*/
            if ( v67 && v67 != *((_DWORD *)this + 194) ) /*0x59d0e3*/
              inited = 0; /*0x59d0e5*/
          }
          else
          {
            v59 = v89[0]; /*0x59cfc4*/
            v60 = v89[1]; /*0x59cfcb*/
            *v53 = *(float *)v89; /*0x59cfd0*/
            LODWORD(v94) = (v85[0] - v59) * (v85[0] - v59) + (v85[1] - v60) * (v85[1] - v60); /*0x59cfef*/
            __asm /*0x59cff3*/
            {
              fild dword ptr [esp+78h+var_20]
              fstp [esp+78h+var_78]; double
            }
            Math::Sqrt(v82); /*0x59cffa*/
            __asm { fstp dword ptr [esp+78h+var_20] } /*0x59cfff*/
            *(_QWORD *)&v97 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59d010*/
            __asm { fild [esp+70h+var_8] } /*0x59d01c*/
            __asm
            {
              fmul ds:dbl_7ED898
              fld ds:flt_7ED768
            }
            LODWORD(v90) = v90 + 1; /*0x59d035*/
            __asm /*0x59d039*/
            {
              fmul st, st(1)
              fld dword ptr [esp+70h+var_20]
              fmul ds:flt_7ED764
              faddp st(1), st
              fild dword ptr [esp+70h+var_54]
              fmul ds:flt_7ED76C
              fsubp st(1), st
              fstp dword ptr [ebx+4]
            }
            v53[1] = _ET1; /*0x59d053*/
            *(_DWORD *)(v57 + 60) = *((_DWORD *)this + 194); /*0x59d05c*/
            v62 = (Heap)v53; /*0x59d061*/
            v53 += 2; /*0x59d063*/
            v63 = *(_DWORD *)v9 + 1; /*0x59d066*/
            LODWORD(v94) = v53; /*0x59d067*/
            LODWORD(v95) = *(_DWORD *)(*(_DWORD *)&v62 + 4); /*0x59d070*/
            v64 = v63 >> 1; /*0x59d077*/
            __asm { fstp st } /*0x59d07b*/
            if ( v63 < *(_DWORD *)&v9[1] ) /*0x59d07d*/
            {
              for ( ; v63 > 1; v64 >>= 1 ) /*0x59d082*/
              {
                LODWORD(v96) = *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v64); /*0x59d08a*/
                __asm /*0x59d08e*/
                {
                  fld dword ptr [eax+4]
                  fcomp dword ptr [esp+58h]
                  fnstsw ax
                }
                if ( (_AX & 0x4100) != 0 ) /*0x59d09a*/
                  break; /*0x59d09a*/
                *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v63) = LODWORD(v96); /*0x59d0a3*/
                v53 = (float *)LODWORD(v94); /*0x59d0a6*/
                v63 = v64; /*0x59d0aa*/
              }
              *(Heap *)(*(_DWORD *)&v9[2] + 4 * v63) = v62; /*0x59d0b6*/
              v66 = v9[3]; /*0x59d0bb*/
              ++*(_DWORD *)v9; /*0x59d0c1*/
              if ( *(_DWORD *)&v62 > *(unsigned int *)&v66 ) /*0x59d0c3*/
                v9[3] = v62; /*0x59d0c5*/
              if ( *(unsigned int *)&v62 < *(_DWORD *)&v9[4] ) /*0x59d0cb*/
                v9[4] = v62; /*0x59d0cd*/
            }
          }
        }
        LODWORD(v91) = v91 + 2; /*0x59d0f4*/
      }
      while ( (int)v91 < 8 ); /*0x59d0f8*/
      LODWORD(v86) = v86 + 1; /*0x59d103*/
      if ( *v9 ) /*0x59d107*/
      {
        v68 = v9[2]; /*0x59d113*/
        v69 = *(_DWORD *)(*(_DWORD *)&v68 + 4); /*0x59d11b*/
        *(_DWORD *)(*(_DWORD *)&v68 + 4) = *(_DWORD *)(*(_DWORD *)&v68 + 4 * *(_DWORD *)v9); /*0x59d11e*/
        *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d126*/
        Heap::SiftDown(v9, 1); /*0x59d134*/
        v87 = v69; /*0x59d139*/
      }
      else
      {
        v87 = 0; /*0x59d10d*/
      }
      if ( (int)v86 >= v92 ) /*0x59d147*/
        break; /*0x59d147*/
      v50 = g_MissionQueueFrame.localVariables[163]; /*0x59ce78*/
      v47 = v87; /*0x59ce7e*/
    }
  }
  if ( *v9 ) /*0x59d14d*/
  {
    v70 = v9[2]; /*0x59d157*/
    v71 = *(__int16 **)(*(_DWORD *)&v70 + 4); /*0x59d15f*/
    *(_DWORD *)(*(_DWORD *)&v70 + 4) = *(_DWORD *)(*(_DWORD *)&v70 + 4 * *(_DWORD *)v9); /*0x59d162*/
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d16a*/
    Heap::SiftDown(v9, 1); /*0x59d178*/
    if ( v71 ) /*0x59d17f*/
    {
      while ( inited ) /*0x59d18b*/
      {
        v72 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v71); /*0x59d19c*/
        v73 = g_MissionQueueFrame.localVariables[163] + 80 * (*v71 + g_MapCellWidth * v71[1]); /*0x59d1ba*/
        if ( !*(_DWORD *)(v73 + 56) && (unsigned __int8)Cell::IsEmpty(v72) && *(_BYTE *)(v73 + 68) ) /*0x59d1ce*/
        {
          v72->Cell_field_0x38 = g_CellPassabilityLUT; /*0x59d1de*/
          v72->__pad_FC[30] = 0; /*0x59d1e1*/
          *(_DWORD *)(v73 + 56) = *((_DWORD *)this + 194); /*0x59d1ee*/
        }
        else
        {
          inited = 0; /*0x59d1f3*/
        }
        if ( *v9 ) /*0x59d1f8*/
        {
          v74 = v9[2]; /*0x59d202*/
          v71 = *(__int16 **)(*(_DWORD *)&v74 + 4); /*0x59d20a*/
          *(_DWORD *)(*(_DWORD *)&v74 + 4) = *(_DWORD *)(*(_DWORD *)&v74 + 4 * *(_DWORD *)v9); /*0x59d20d*/
          *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d215*/
          Heap::SiftDown(v9, 1); /*0x59d223*/
        }
        else
        {
          v71 = 0; /*0x59d1fe*/
        }
        LODWORD(v86) = v86 + 1; /*0x59d22f*/
        if ( !v71 ) /*0x59d233*/
          goto LABEL_113; /*0x59d233*/
      }
      goto LABEL_121; /*0x59d18b*/
    }
  }
LABEL_113:
  if ( !inited ) /*0x59d23f*/
  {
LABEL_121:
    v75 = this; /*0x59d296*/
    goto LABEL_122; /*0x59d296*/
  }
  if ( (int)v86 <= 75 || (int)v86 <= v92 / 4 ) /*0x59d259*/
  {
    inited = 0; /*0x59d291*/
    goto LABEL_121; /*0x59d291*/
  }
  inited = 1; /*0x59d25e*/
  if ( *a2 || a2[1] ) /*0x59d269*/
  {
    v75 = this; /*0x59d2e6*/
LABEL_127:
    if ( !*a2 && !a2[1] ) /*0x59d2f0*/
    {
      v75 = this; /*0x59d316*/
      inited = TiberiumClass::Spread(*((_DWORD *)this + 194), 1, 0, 0, 512, 512, 0, 0); /*0x59d32a*/
      if ( inited ) /*0x59d32e*/
      {
        LODWORD(v96) = *((_DWORD *)this + 194); /*0x59d33f*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d343*/
        for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d354*/
              j;
              j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x59d35e*/
            v77 = *(_DWORD *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59d37c*/
                            + g_MissionQueueFrame.localVariables[163]
                            + 56);
          else
            v77 = -1; /*0x59d360*/
          if ( v77 == LODWORD(v96) ) /*0x59d384*/
          {
            v78 = *(_DWORD *)(j + 56); /*0x59d386*/
            if ( !v78 || v78 == 0xFFFF ) /*0x59d393*/
              *(_DWORD *)(j + 56) = dword_AA0E18; /*0x59d39b*/
          }
        }
        inited = 1; /*0x59d3ac*/
      }
    }
    goto LABEL_122; /*0x59d3b1*/
  }
  v75 = this; /*0x59d270*/
  inited = MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], *((_DWORD *)this + 194), 0); /*0x59d289*/
  if ( inited ) /*0x59d28d*/
    goto LABEL_127; /*0x59d28d*/
LABEL_122:
  if ( v9 ) /*0x59d29c*/
  {
    __3_YAXPAX_Z(*(void **)&v9[2]); /*0x59d2a2*/
    __3_YAXPAX_Z(v9); /*0x59d2a8*/
  }
  __3_YAXPAX_Z(Block); /*0x59d2b5*/
  if ( inited ) /*0x59d2c3*/
  {
    v75[2].SpreadPercentage[0] += v86; /*0x59d2d5*/
    return 1; /*0x59d2e3*/
  }
  v79 = v75[2].SpreadPercentage[1]; /*0x59d3b6*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d3c1*/
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d3d4*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v96) = *(_DWORD *)(k + 36); /*0x59d3d9*/
    v81 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v96) + g_MapCellWidth * SWORD1(v96)); /*0x59d3fa*/
    if ( *(_DWORD *)(v81 + 56) == v79 ) /*0x59d3ff*/
    {
      *(_DWORD *)(v81 + 56) = 0; /*0x59d401*/
      *(_BYTE *)(v81 + 75) = 0; /*0x59d404*/
      *(_DWORD *)(k + 56) = 0; /*0x59d408*/
      *(_BYTE *)(k + 282) = 0; /*0x59d40b*/
      *(_BYTE *)(k + 283) = v75[2].Growth; /*0x59d418*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 10.0 + 0.5 * v6 - (double)a3 * 0.02; /*0x59d503*/
}



// ==== 0x0059D510  Tiberium::ProcessGrowth  this=RandomMap  sig=csp ====
char __thiscall Tiberium::ProcessGrowth(Tiberium *this, int a2, double a3, char a4)
{
  double v4; // st7
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int16 v9; // si
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int16 v12; // di
  __int16 v13; // bx
  int v14; // ebx
  int v19; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  Tiberium *v27; // ebx
  __int16 v28; // ax
  __int16 v29; // si
  __int16 v30; // ax
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  double v34; // rdi
  int v35; // eax
  int v36; // esi
  __int16 v37; // ax
  __int16 v38; // di
  __int16 v39; // ax
  int v40; // edx
  __int16 v41; // bx
  __int16 v42; // ax
  Cell *v43; // eax
  char IsEmpty; // al
  int v45; // eax
  _BYTE *v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; ... [30568 chars total]



// ==== 0x0059E740  Tiberium::CalculateSpread  this=Tiberium  sig=csp ====
char __thiscall Tiberium::CalculateSpread(
        Tiberium *this,
        int a2,
        __int16 *a3,
        __int16 *a4,
        int a5,
        char *a6,
        double *a7,
        double *a8)
{
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v17; // ebp
  int v18; // edx
  int v19; // ebp
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // ebp
  int v25; // ebp
  __int16 v26; // dx
  int v27; // edi
  int v28; // eax
  int v29; // esi
  int v30; // ebx
  int v31; // edx
  Cell *v32; // eax
  int i; // ebp
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // eax
  __int16 v39; // si
  char v40; // cl
  int v41; // edi
  int j; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // ecx
  int k; // ebp
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // esi
  unsigned int v... [42281 chars total]



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
  v3 = (char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x5902e6*/
  v4 = v1[1]; /*0x5902f2*/
  v16 = v3[283]; /*0x5902f5*/
  v5 = *v1; /*0x5902f9*/
  v6 = (__int16)*v1; /*0x590301*/
  v15 = v4; /*0x590307*/
  a1 = (__int16)v4 + v6; /*0x590310*/
  if ( a1 > dword_ABED04 && v6 - (__int16)v4 < dword_ABED04 && (__int16)v4 - v6 < dword_ABED04 && a1 <= dword_ABED08 ) /*0x59033c*/
  {
    v7 = v1[2]; /*0x590342*/
    a1 = (__int16)(v5 + v7 - 1); /*0x59034f*/
    if ( (__int16)v4 + a1 > dword_ABED04 /*0x590387*/
      && a1 - (__int16)v4 < dword_ABED04
      && (__int16)v4 - a1 < dword_ABED04
      && (__int16)v4 + a1 <= dword_ABED08 )
    {
      v14 = v1[3] + v4 - 1; /*0x590394*/
      a1 = (__int16)v14 + (__int16)v5; /*0x5903a3*/
      if ( a1 > dword_ABED04 /*0x5903cf*/
        && (__int16)v5 - (__int16)v14 < dword_ABED04
        && (__int16)v14 - (__int16)v5 < dword_ABED04
        && a1 <= dword_ABED08 )
      {
        v8 = (__int16)(v5 + v7 - 1); /*0x5903d9*/
        a1 = (__int16)v14 + v8; /*0x5903e6*/
        if ( a1 > dword_ABED04 /*0x590412*/
          && v8 - (__int16)v14 < dword_ABED04
          && (__int16)v14 - v8 < dword_ABED04
          && a1 <= dword_ABED08 )
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
            v11 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x590445*/
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
char __stdcall Map_PlaceCabhut(int *a1)
{
  int *v1; // ebp
  int v2; // ebx
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  void *v7; // eax
  int Owner; // edi
  int IndexByName; // ebx
  void *v10; // eax
  int *v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD v14[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = a1; /*0x5904b5*/
  v2 = a1[1]; /*0x5904bb*/
  if ( v2 >= a1[3] + v2 + 1 ) /*0x5904c7*/
    return 0; /*0x59052b*/
  while ( 1 ) /*0x5904c9*/
  {
    v3 = *v1; /*0x5904c9*/
    if ( *v1 < v1[2] + *v1 + 1 ) /*0x5904d5*/
      break; /*0x5904d5*/
LABEL_7:
    if ( ++v2 >= v1[3] + v1[1] + 1 ) /*0x590529*/
      return 0; /*0x590529*/
  }
  while ( 1 ) /*0x5904db*/
  {
    LOWORD(a1) = v3; /*0x5904db*/
    HIWORD(a1) = v2; /*0x5904e6*/
    v4 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a1); /*0x5904eb*/
    v5 = v4; /*0x5904f0*/
    if ( v4[17] == -1 && Cell::IsEmpty(v4) && !v5[57] ) /*0x590503*/
      break; /*0x590503*/
    if ( ++v3 >= v1[2] + *v1 + 1 ) /*0x59051a*/
      goto LABEL_7; /*0x59051a*/
  }
  v7 = (void *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x59053c*/
  Owner = HouseClass::FindOwner(v7); /*0x59054d*/
  IndexByName = BuildingTypeClass::FindIndexByName(stru_82BA00); /*0x590559*/
  v10 = __2_YAPAXI_Z(0x720u); /*0x59055b*/
  if ( v10 ) /*0x590565*/
    v11 = (int *)BuildingClass::Construct((int)v10, *((_DWORD *)dword_A83C6C + IndexByName), Owner); /*0x590574*/
  else
    v11 = 0; /*0x59057b*/
  v12 = *((__int16 *)v5 + 18) << 8; /*0x590588*/
  v14[1] = (*((__int16 *)v5 + 19) << 8) + 128; /*0x590597*/
  v14[0] = v12 + 128; /*0x59059f*/
  v13 = *v11; /*0x5905a3*/
  v14[2] = 0; /*0x5905aa*/
  (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v13 + 216))(v11, v14, 0); /*0x5905b2*/
  return 1; /*0x59052b*/
}



// ==== 0x005905D0  RandomMap::AllocateArea  this=RandomMap  sig=csp ====
char __thiscall RandomMap::AllocateArea(RandomMap *this)
{
  RandomMap *v1; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  void *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // esi
  RandomMap *v23; // ebp
  int v24; // eax
  unsigned int v25; // eax
  void *RandomMap_field_0x10; // ecx
  int v27; // eax
  void *RandomMap_field_0x8; // edi
  int v29; // eax
  int v30; // ecx
  RandomMap *v31; // ebp
  _DWORD *v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // eax
  int v35; // edx
  float v37; // [esp+0h] [ebp-58h]
  _DWORD *v39; // [esp+18h] [ebp-40h]
  int v40; // [esp+18h] [ebp-40h]
  __int16 v41[2]; // [esp+1Ch] [ebp-3Ch] BYREF
  int v42; // [esp+20h] [ebp-38h]
  void *v43; // [esp+24h] [ebp-34h]
  int v44; // [esp+28h] [ebp-30h]
  int v45; // [esp+2Ch] [ebp-2Ch]
  __int64 v46; // [esp+30h] [ebp-28h]
  __int64 v47; // [esp+38h] [ebp-20h]
  __int64 v48; // [esp+40h] [ebp-18h]
  __int64 v49; // [esp+48h] [ebp-10h]
  double v50; // [esp+50h] [ebp-8h]

  v1 = this; /*0x5905d6*/
  LOBYTE(v2) = this->RandomMap_field_0x14; /*0x5905dd*/
  if ( (_BYTE)v2 ) /*0x5905e2*/
  {
    v3 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x5905e8*/
    v4 = *(_DWORD *)(v3 + 16); /*0x5905eb*/
    LOBYTE(v2) = v4 - 1; /*0x5905ee*/
    if ( v4 - 1 > 0 ) /*0x5905f3*/
    {
      v5 = g_MissionQueueFrame.briefing[339]; /*0x5905f9*/
      v6 = g_MissionQueueFrame.briefing[342]; /*0x5905ff*/
      v42 = 1; /*0x590605*/
      *(_DWORD *)v41 = 0; /*0x59060d*/
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
          while ( *(_DWORD *)(*(_DWORD *)v8 + 8) != *(_DWORD *)(*(_DWORD *)(v3 + 4) + *(_DWORD *)v41) ) /*0x59062c*/
          {
            ++v7; /*0x59062e*/
            v8 += 4; /*0x59062f*/
            if ( v7 >= v6 ) /*0x590634*/
            {
              v5 = g_MissionQueueFrame.briefing[339]; /*0x590636*/
              v1 = this; /*0x59063c*/
              goto LABEL_9; /*0x59063c*/
            }
          }
          v5 = g_MissionQueueFrame.briefing[339]; /*0x59068e*/
          v1 = this; /*0x590694*/
          v39 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * v7); /*0x59069b*/
        }
        if ( *(int *)(v39[1] + 16) <= 1 && (int)v39[3] <= 50 ) /*0x590659*/
          goto LABEL_28; /*0x590659*/
        v9 = v42; /*0x59065f*/
        v43 = (void *)v42; /*0x590665*/
        if ( v42 < v4 ) /*0x590669*/
          break; /*0x590669*/
LABEL_29:
        *(_DWORD *)v41 += 4; /*0x590701*/
        v3 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x59070d*/
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
          while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v11 ) /*0x590682*/
          {
            ++v10; /*0x590684*/
            v12 += 4; /*0x590685*/
            if ( v10 >= v6 ) /*0x59068a*/
              goto LABEL_20; /*0x59068a*/
          }
          v13 = *(_DWORD *)(v5 + 4 * v10); /*0x5906a1*/
        }
        if ( (*(int *)(*(_DWORD *)(v13 + 4) + 16) > 1 || *(int *)(v13 + 12) > 50) && !*(_BYTE *)(v13 + 20) ) /*0x5906b7*/
        {
          v14 = (void *)v39[4]; /*0x5906c5*/
          if ( *(void **)(v13 + 16) == v14 && v14 == v1->RandomMap_field_0x10 ) /*0x5906cf*/
          {
            RandomMap::PlaceBuildings(v1, (int)v39, v13); /*0x5906d5*/
            v5 = g_MissionQueueFrame.briefing[339]; /*0x5906da*/
            v6 = g_MissionQueueFrame.briefing[342]; /*0x5906e0*/
          }
        }
        v3 = *(_DWORD *)&v1->RandomMap_field_0x2[2]; /*0x5906e6*/
        v9 = (int)v43 + 1; /*0x5906ed*/
        v15 = *(_DWORD *)(v3 + 16); /*0x5906ee*/
        v43 = (void *)v9; /*0x5906f1*/
      }
      while ( v9 < v15 ); /*0x5906f7*/
LABEL_28:
      v9 = v42; /*0x5906fd*/
      goto LABEL_29; /*0x5906fd*/
    }
  }
  else
  {
    v16 = *(_DWORD *)&this->RandomMap_field_0x2[2]; /*0x59072b*/
    v17 = 0; /*0x59072e*/
    v42 = 0; /*0x590730*/
    if ( *(int *)(v16 + 16) > 0 ) /*0x590737*/
    {
      v18 = g_MissionQueueFrame.briefing[342]; /*0x59073d*/
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
          v21 = g_MissionQueueFrame.briefing[339]; /*0x590759*/
          while ( *(_DWORD *)(*(_DWORD *)v21 + 8) != v20 ) /*0x590760*/
          {
            ++v19; /*0x590766*/
            v21 += 4; /*0x590767*/
            if ( v19 >= v18 ) /*0x59076c*/
              goto LABEL_37; /*0x59076c*/
          }
          v22 = *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v19); /*0x5907ee*/
        }
        v23 = this; /*0x590770*/
        if ( *(_DWORD *)(v22 + 8) > (int)this->RandomMap_field_0x8 && *(void **)(v22 + 16) != this->RandomMap_field_0x10 ) /*0x590788*/
        {
          v40 = 0; /*0x59078e*/
          do /*0x5907b6*/
          {
            v46 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59079c*/
            LOWORD(v24) = Math::RoundToInt((double)v46 * 0.00000002351589501451605); /*0x5907ae*/
          }
          while ( (unsigned int)v24 > 0x64 ); /*0x5907b6*/
          if ( v24 >= g_MissionQueueFrame.briefing[383] ) /*0x5907be*/
          {
            v25 = 0; /*0x5907f6*/
          }
          else
          {
            do /*0x5907ea*/
            {
              v47 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5907ca*/
              LOWORD(v25) = Math::RoundToInt((double)v47 * 4.656612874161595e-10 + 1.0); /*0x5907e2*/
            }
            while ( v25 > 2 ); /*0x5907ea*/
          }
          RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x5907f8*/
          v45 = v25 + 1; /*0x5907fc*/
          v27 = *(_DWORD *)(v22 + 16); /*0x590800*/
          v44 = 0; /*0x590805*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590809*/
            RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x590810*/
          else
            RandomMap_field_0x8 = *(void **)(v22 + 8); /*0x59080b*/
          if ( v27 <= (int)RandomMap_field_0x10 ) /*0x590815*/
            v43 = *(void **)(v22 + 8); /*0x590823*/
          else
            v43 = this->RandomMap_field_0x8; /*0x59081a*/
          v29 = 0; /*0x59082d*/
          if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x590831*/
          {
LABEL_57:
            v31 = 0; /*0x59084e*/
          }
          else
          {
            v30 = g_MissionQueueFrame.briefing[339]; /*0x590839*/
            while ( *(void **)(*(_DWORD *)v30 + 8) != RandomMap_field_0x8 ) /*0x590840*/
            {
              ++v29; /*0x590846*/
              v30 += 4; /*0x590847*/
              if ( v29 >= g_MissionQueueFrame.briefing[342] ) /*0x59084c*/
                goto LABEL_57; /*0x59084c*/
            }
            v31 = *(RandomMap **)(g_MissionQueueFrame.briefing[339] + 4 * v29); /*0x590960*/
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
              v49 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590893*/
              LOWORD(v34) = Math::RoundToInt((double)v49 * v50 * 2.328306437080797e-10); /*0x5908ad*/
            }
            while ( v34 > v33 ); /*0x5908b4*/
            *(_DWORD *)v41 = *(_DWORD *)(v32[1] + 4 * v34); /*0x5908c8*/
            if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v41, 1) ) /*0x5908cc*/
            {
              v37 = (double)v44 * 0.0099999998; /*0x5908ea*/
              v40 += RandomMap::CheckCellPlacement(v31, v41, v43, v37) != 0; /*0x590900*/
            }
            v44 = ++v17; /*0x59090f*/
          }
          while ( v40 < v45 ); /*0x590913*/
          if ( !v40 ) /*0x59091f*/
LABEL_66:
            HIBYTE(this->RandomMap_field_0x18) = 0; /*0x590925*/
          if ( v32 ) /*0x59092b*/
            (*(void (__thiscall **)(_DWORD *, int))*v32)(v32, 1); /*0x590933*/
          v18 = g_MissionQueueFrame.briefing[342]; /*0x590935*/
          v23 = this; /*0x59093b*/
          v17 = 0; /*0x59093f*/
        }
        v16 = *(_DWORD *)&v23->RandomMap_field_0x2[2]; /*0x590941*/
        v2 = v42 + 1; /*0x590948*/
        v35 = *(_DWORD *)(v16 + 16); /*0x590949*/
        v42 = v2; /*0x59094c*/
      }
      while ( v2 < v35 ); /*0x590952*/
    }
  }
  return v2; /*0x590723*/
}



// ==== 0x00590970  RandomMap::CheckCellPlacement  this=RandomMap  sig=csp ====
char __thiscall RandomMap::CheckCellPlacement(RandomMap *this, __int16 *a2, void *a3, float a4)
{
  __int16 *v4; // esi
  void *v5; // edi
  int v7; // ebx
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

  v4 = a2; /*0x59097a*/
  v5 = a3; /*0x59097f*/
  v39[0] = 1; /*0x59098f*/
  v7 = RandomMap::CheckNeighborhoodCompatibility(this, a2, v39, (int)a3, a4); /*0x590999*/
  if ( !v39[0] ) /*0x5909a1*/
    return 0; /*0x5909a6*/
  v9 = 0; /*0x5909af*/
  if ( v7 == 255 ) /*0x5909b7*/
    return 0; /*0x5909bc*/
  if ( (v7 & 0x82) != 0x82 || (v7 & 0x38) != 0 ) /*0x5909d5*/
    goto LABEL_86; /*0x5909d5*/
  v10 = *v4; /*0x5909d7*/
  *(_WORD *)&v39[1] = *v4 - 1; /*0x5909e0*/
  v11 = v4[1]; /*0x5909e5*/
  LOWORD(a2) = v10 + 5; /*0x5909e9*/
  *(_WORD *)&v39[3] = v11 - 5; /*0x5909f5*/
  HIWORD(a2) = v11 + 1; /*0x5909fa*/
  if ( (v7 & 0x40) != 0 ) /*0x5909ff*/
    ++*(_WORD *)&v39[3]; /*0x590a01*/
  if ( (v7 & 4) != 0 ) /*0x590a09*/
    LOWORD(a2) = (_WORD)a2 - 1; /*0x590a0b*/
  v9 = PlaceMapSeedCityBlockVariant2((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a22*/
  if ( !v9 ) /*0x590a26*/
  {
LABEL_86:
    if ( (v7 & 0xA) != 0xA || (v7 & 0x11) != 0 ) /*0x590a39*/
      goto LABEL_87; /*0x590a39*/
    v12 = *v4; /*0x590a3b*/
    *(_WORD *)&v39[1] = *v4 + 5; /*0x590a42*/
    v13 = v4[1]; /*0x590a47*/
    LOWORD(a2) = v12 - 1; /*0x590a4b*/
    *(_WORD *)&v39[3] = v13 - 1; /*0x590a59*/
    HIWORD(a2) = v13 + 5; /*0x590a5e*/
    if ( (v7 & 0x10) != 0 ) /*0x590a63*/
      --HIWORD(a2); /*0x590a65*/
    if ( (v7 & 1) != 0 ) /*0x590a6d*/
      --*(_WORD *)&v39[1]; /*0x590a6f*/
    v9 = MapSeed::PlaceCityBlock2((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590a86*/
    if ( !v9 ) /*0x590a8a*/
    {
LABEL_87:
      if ( (v7 & 0x28) != 0x28 || (v7 & 0x83) != 0 ) /*0x590a9d*/
        goto LABEL_88; /*0x590a9d*/
      v14 = *v4; /*0x590a9f*/
      *(_WORD *)&v39[1] = *v4 + 1; /*0x590aa8*/
      v15 = v4[1]; /*0x590aad*/
      LOWORD(a2) = v14 - 5; /*0x590ab1*/
      *(_WORD *)&v39[3] = v15 + 5; /*0x590abd*/
      HIWORD(a2) = v15 - 1; /*0x590ac2*/
      if ( (v7 & 0x40) != 0 ) /*0x590ac7*/
        LOWORD(a2) = (_WORD)a2 - 1; /*0x590ac9*/
      if ( (v7 & 4) != 0 ) /*0x590ad1*/
        --*(_WORD *)&v39[3]; /*0x590ad3*/
      v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590aea*/
      if ( !v9 ) /*0x590aee*/
      {
LABEL_88:
        if ( (v7 & 0xA0) != 0xA0 || (v7 & 0xE) != 0 ) /*0x590b04*/
          goto LABEL_89; /*0x590b04*/
        v16 = *v4; /*0x590b06*/
        *(_WORD *)&v39[1] = *v4 - 5; /*0x590b0d*/
        v17 = v4[1]; /*0x590b12*/
        LOWORD(a2) = v16 + 1; /*0x590b16*/
        *(_WORD *)&v39[3] = v17 + 1; /*0x590b24*/
        HIWORD(a2) = v17 - 5; /*0x590b29*/
        if ( (v7 & 1) != 0 ) /*0x590b2e*/
          ++HIWORD(a2); /*0x590b30*/
        if ( (v7 & 0x10) != 0 ) /*0x590b38*/
          ++*(_WORD *)&v39[1]; /*0x590b3a*/
        v9 = PlaceMapSeedCityBlockDiagonal((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590b51*/
        if ( !v9 ) /*0x590b55*/
        {
LABEL_89:
          if ( (v7 & 0x70) != 0 || (v7 & 0x88) == 0 ) /*0x590b67*/
            goto LABEL_90; /*0x590b67*/
          v18 = v4[1]; /*0x590b6d*/
          *(_WORD *)&v39[1] = *v4 - 1; /*0x590b7f*/
          *(_WORD *)&v39[3] = v18 - 4; /*0x590b84*/
          LOWORD(a2) = *(_WORD *)&v39[1]; /*0x590b89*/
          HIWORD(a2) = v18 + 4; /*0x590b8e*/
          if ( (v7 & 0x80u) != 0 ) /*0x590b93*/
          {
            ++*(_WORD *)&v39[3]; /*0x590b95*/
            ++HIWORD(a2); /*0x590b9a*/
          }
          if ( (v7 & 8) != 0 ) /*0x590ba2*/
          {
            --HIWORD(a2); /*0x590ba4*/
            --*(_WORD *)&v39[3]; /*0x590ba9*/
          }
          do /*0x590bd6*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590bb8*/
            LOWORD(v19) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bce*/
          }
          while ( v19 > 1 ); /*0x590bd6*/
          *(_WORD *)&v39[1] += v19; /*0x590bd8*/
          do /*0x590c05*/
          {
            v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590be7*/
            LOWORD(v20) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590bfd*/
          }
          while ( v20 > 1 ); /*0x590c05*/
          LOWORD(a2) = v20 + (_WORD)a2; /*0x590c07*/
          v9 = RandomMap::CheckPlacementArea(this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590c1e*/
          if ( !v9 ) /*0x590c22*/
          {
LABEL_90:
            if ( (v7 & 7) != 0 || (v7 & 0x88) == 0 ) /*0x590c34*/
              goto LABEL_91; /*0x590c34*/
            v21 = v4[1]; /*0x590c3a*/
            *(_WORD *)&v39[1] = *v4 + 1; /*0x590c4c*/
            *(_WORD *)&v39[3] = v21 + 4; /*0x590c51*/
            LOWORD(a2) = *(_WORD *)&v39[1]; /*0x590c56*/
            HIWORD(a2) = v21 - 4; /*0x590c5b*/
            if ( (v7 & 0x80u) != 0 ) /*0x590c60*/
            {
              ++HIWORD(a2); /*0x590c62*/
              ++*(_WORD *)&v39[3]; /*0x590c67*/
            }
            if ( (v7 & 8) != 0 ) /*0x590c6f*/
            {
              --*(_WORD *)&v39[3]; /*0x590c71*/
              --HIWORD(a2); /*0x590c76*/
            }
            do /*0x590ca3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590c85*/
              LOWORD(v22) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590c9b*/
            }
            while ( v22 > 1 ); /*0x590ca3*/
            *(_WORD *)&v39[1] += v22 - 1; /*0x590ca6*/
            do /*0x590cd3*/
            {
              v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590cb5*/
              LOWORD(v23) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590ccb*/
            }
            while ( v23 > 1 ); /*0x590cd3*/
            LOWORD(a2) = v23 - 1 + (_WORD)a2; /*0x590cd7*/
            v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590ced*/
            if ( !v9 ) /*0x590cf1*/
            {
LABEL_91:
              if ( (v7 & 0xC1) != 0 || (v7 & 0x22) == 0 ) /*0x590d03*/
                goto LABEL_64; /*0x590d03*/
              v24 = *v4; /*0x590d09*/
              v25 = v4[1] - 1; /*0x590d10*/
              *(_WORD *)&v39[1] = *v4 + 4; /*0x590d1b*/
              *(_WORD *)&v39[3] = v25; /*0x590d20*/
              LOWORD(a2) = v24 - 4; /*0x590d25*/
              HIWORD(a2) = v25; /*0x590d2a*/
              if ( (v7 & 0x20) != 0 ) /*0x590d2f*/
              {
                LOWORD(a2) = (_WORD)a2 + 1; /*0x590d31*/
                ++*(_WORD *)&v39[1]; /*0x590d36*/
              }
              if ( (v7 & 2) != 0 ) /*0x590d3e*/
              {
                --*(_WORD *)&v39[1]; /*0x590d40*/
                LOWORD(a2) = (_WORD)a2 - 1; /*0x590d45*/
              }
              do /*0x590d72*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d54*/
                LOWORD(v26) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d6a*/
              }
              while ( v26 > 1 ); /*0x590d72*/
              *(_WORD *)&v39[3] += v26; /*0x590d74*/
              do /*0x590da1*/
              {
                v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590d83*/
                LOWORD(v27) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590d99*/
              }
              while ( v27 > 1 ); /*0x590da1*/
              HIWORD(a2) += v27; /*0x590da3*/
              v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590dba*/
              if ( !v9 ) /*0x590dbe*/
              {
LABEL_64:
                if ( (v7 & 0x1C) == 0 && (v7 & 0x22) != 0 ) /*0x590dd0*/
                {
                  v28 = *v4; /*0x590dd6*/
                  v29 = v4[1] + 1; /*0x590ddd*/
                  *(_WORD *)&v39[1] = *v4 - 4; /*0x590de8*/
                  *(_WORD *)&v39[3] = v29; /*0x590ded*/
                  LOWORD(a2) = v28 + 4; /*0x590df2*/
                  HIWORD(a2) = v29; /*0x590df7*/
                  if ( (v7 & 0x20) != 0 ) /*0x590dfc*/
                  {
                    ++*(_WORD *)&v39[1]; /*0x590dfe*/
                    LOWORD(a2) = (_WORD)a2 + 1; /*0x590e03*/
                  }
                  if ( (v7 & 2) != 0 ) /*0x590e0b*/
                  {
                    LOWORD(a2) = (_WORD)a2 - 1; /*0x590e0d*/
                    --*(_WORD *)&v39[1]; /*0x590e12*/
                  }
                  do /*0x590e3f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e21*/
                    LOWORD(v30) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e37*/
                  }
                  while ( v30 > 1 ); /*0x590e3f*/
                  *(_WORD *)&v39[3] += v30 - 1; /*0x590e42*/
                  do /*0x590e6f*/
                  {
                    v40 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x590e51*/
                    LOWORD(v31) = Math::RoundToInt((double)v40 * 4.656612874161595e-10); /*0x590e67*/
                  }
                  while ( v31 > 1 ); /*0x590e6f*/
                  HIWORD(a2) += v31 - 1; /*0x590e73*/
                  v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&v39[1], (__int16 *)&a2, v5); /*0x590e89*/
                }
              }
            }
          }
        }
      }
    }
  }
  if ( a4 > 0.5 && !v9 ) /*0x590ea2*/
  {
    if ( (v7 & 8) != 0 /*0x590eec*/
      || (v32 = *v4 - 4,
          v33 = *v4 + 4,
          HIWORD(a2) = v4[1] + 1,
          HIWORD(a4) = HIWORD(a2),
          LOWORD(a4) = v33,
          LOWORD(a2) = v32,
          (v9 = MapSeed::PlaceCityBlock((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
    {
      if ( (v7 & 2) != 0 /*0x590f34*/
        || (v34 = v4[1],
            LOWORD(a2) = *v4 + 1,
            LOWORD(a4) = (_WORD)a2,
            HIWORD(a4) = v34 - 4,
            HIWORD(a2) = v34 + 4,
            (v9 = PlaceMapSeedCityArea((ObjectClass *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
      {
        if ( (v7 & 8) != 0 /*0x590f7b*/
          || (v35 = *v4 - 4,
              LOWORD(a2) = *v4 + 4,
              v36 = v4[1] - 1,
              LOWORD(a4) = v35,
              HIWORD(a2) = v36,
              HIWORD(a4) = v36,
              (v9 = MapSeed::PlaceCityBuildings((MapSeed *)this, (__int16 *)&a2, (__int16 *)&a4, a3)) == 0) )
        {
          if ( (v7 & 0x20) == 0 ) /*0x590f80*/
          {
            v37 = *v4; /*0x590f82*/
            v38 = v4[1]; /*0x590f85*/
            LOWORD(a2) = v37 - 1; /*0x590f92*/
            LOWORD(a4) = v37 - 1; /*0x590f97*/
            HIWORD(a2) = v38 - 4; /*0x590f9c*/
            HIWORD(a4) = v38 + 4; /*0x590fb1*/
            return RandomMap::CheckPlacementArea(this, (__int16 *)&a2, (__int16 *)&a4, a3); /*0x590fbb*/
          }
        }
      }
    }
  }
  return v9; /*0x5909a3*/
}



// ==== 0x00590FD0  RandomMap::CheckNeighborhoodCompatibility  this=RandomMap  sig=csp ====
int __thiscall RandomMap::CheckNeighborhoodCompatibility(RandomMap *this, _WORD *a2, _BYTE *a3, int a4, float a5)
{
  int v6; // eax
  __int16 v7; // cx
  _WORD *v8; // ebx
  void *RandomMap_field_0x8; // edx
  int v11; // esi
  int v12; // edi
  char *v13; // ebx
  void *v14; // edx
  int v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+4h] [ebp-14h]
  _WORD *v17; // [esp+8h] [ebp-10h] BYREF
  int v18; // [esp+Ch] [ebp-Ch]
  int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]
  _WORD *v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+28h] [ebp+10h]

  LOWORD(v6) = Math::RoundToInt((15.0 - 5.0) * (1.0 - a5) + 5.0); /*0x590ff5*/
  v16 = v6; /*0x591000*/
  v7 = a2[1] - 2; /*0x591010*/
  v8 = (_WORD *)(__int16)(*a2 - 2); /*0x591014*/
  RandomMap_field_0x8 = this->RandomMap_field_0x8; /*0x59101a*/
  v15 = v7; /*0x59101d*/
  v18 = v7; /*0x591021*/
  v19 = 5; /*0x59102a*/
  v20 = 5; /*0x59102e*/
  v21 = v8; /*0x59103b*/
  v17 = v8; /*0x59103f*/
  if ( Map_Check((__int16 *)&v17, (int)RandomMap_field_0x8, a4, v6) ) /*0x591043*/
  {
    v11 = 0; /*0x59105d*/
    v22 = 0; /*0x591060*/
    while ( 1 ) /*0x59106a*/
    {
      v12 = 0; /*0x59106a*/
      v13 = (char *)v8 - 5; /*0x59106c*/
      do /*0x5910d1*/
      {
        if ( v11 != 1 || v12 != 1 ) /*0x591076*/
        {
          v17 = v13; /*0x59107c*/
          v14 = this->RandomMap_field_0x8; /*0x591088*/
          v19 = 5; /*0x591094*/
          v20 = 5; /*0x591098*/
          v18 = v11 + v15 + 4 * v11 - 5; /*0x5910a0*/
          if ( Map_Check((__int16 *)&v17, (int)v14, a4, v16) ) /*0x5910a9*/
            v22 |= *(_DWORD *)&stru_82ADA8.?[8 * v11 + 35 + 4 * v12 + 4 * v11]; /*0x5910c6*/
        }
        ++v12; /*0x5910ca*/
        v13 += 5; /*0x5910cb*/
      }
      while ( v12 < 3 ); /*0x5910d1*/
      if ( ++v11 >= 3 ) /*0x5910d7*/
        break; /*0x5910d7*/
      v8 = v21; /*0x591066*/
    }
    return v22; /*0x5910d9*/
  }
  else
  {
    *a3 = 0; /*0x591052*/
    return 0; /*0x591054*/
  }
}



// ==== 0x005910F0  MapSeed::PlaceCityBlock  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBlock(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x14; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  int MapSeed_field_0x10; // ecx
  int v25; // eax
  int v26; // ebx
  _BYTE *v27; // ebp
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // ebp
  int v35; // ebx
  _BYTE *v36; // eax
  __int16 v37; // ax
  int v38; // eax
  int MapSeed_field_0x1C; // ebp
  unsigned int v40; // eax
  int MapSeed_field_0x08; // ecx
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
  __int16 MapSeed_field_0x14_high; // bp
  int i; // ebx
  __int16 v54; // cx
  __int16 v55; // cx
  _BYTE *v56; // eax
  char v57; // dl
  MapSeed v59; // [esp+14h] [ebp-58h] BYREF
  __int16 v60[4]; // [esp+3Ch] [ebp-30h]
  __int16 v61[4]; // [esp+44h] [ebp-28h]
  __int64 v62; // [esp+4Ch] [ebp-20h]
  int v63; // [esp+58h] [ebp-14h]
  int v64; // [esp+5Ch] [ebp-10h] BYREF
  int v65; // [esp+60h] [ebp-Ch]
  int v66; // [esp+64h] [ebp-8h]
  int v67; // [esp+68h] [ebp-4h]
  __int16 *v68; // [esp+70h] [ebp+4h]

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
  v64 = v10 - 5; /*0x591130*/
  v65 = v5 - 3; /*0x591134*/
  v66 = *a3 - v10 + 9; /*0x591148*/
  v67 = v8 - v9 + 11; /*0x59115d*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v64, (int)a4); /*0x591161*/
  if ( result )
  {
    v12 = a2[1]; /*0x591174*/
    v59.MapSeed_field_0x1C = a3[1] - v12; /*0x59117e*/
    v13 = *a3 - *a2; /*0x59118f*/
    v68 = (__int16 *)abs32(v59.MapSeed_field_0x1C); /*0x591191*/
    if ( (int)v68 <= v13 - 5 )
    {
      v14 = v67; /*0x5911a8*/
      v15 = v13 + 1; /*0x5911b2*/
      LODWORD(v62) = v64; /*0x5911b8*/
      MapSeed_field_0x14 = (v13 + 1) / 2 + 3; /*0x5911cb*/
      v59.MapSeed_field_0x14 = MapSeed_field_0x14; /*0x5911d0*/
      v59.MapSeed_field_0x04 = v12 + 1; /*0x5911d6*/
      v59.MapSeed_field_0x0C = v67 + v65 + 2; /*0x5911da*/
      if ( v12 + 1 < v59.MapSeed_field_0x0C ) /*0x5911de*/
      {
        v59.MapSeed_field_0x08 = v64 + MapSeed_field_0x14 + 2; /*0x5911ec*/
        do /*0x59126a*/
        {
          v17 = v62; /*0x5911f0*/
          if ( (int)v62 < v59.MapSeed_field_0x08 ) /*0x5911fa*/
          {
            do /*0x591255*/
            {
              *(_WORD *)v59.__pad_0 = v17; /*0x591205*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x59120a*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x59120f*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, (int)a4); /*0x591220*/
                v59.MapSeed_field_0x10 = (int)CellCoord::To_CellObj( /*0x591238*/
                                                (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                (__int16 *)v59.__pad_0);
                v18 = List::FindByValue((List *)a4); /*0x59123c*/
                *(_BYTE *)(v59.MapSeed_field_0x10 + 283) = *(_BYTE *)(v18 + 16); /*0x591248*/
              }
              ++v17; /*0x591252*/
            }
            while ( v17 < v59.MapSeed_field_0x08 ); /*0x591255*/
            v14 = v67; /*0x591257*/
          }
          ++v59.MapSeed_field_0x04; /*0x591266*/
        }
        while ( v59.MapSeed_field_0x04 < v59.MapSeed_field_0x0C ); /*0x59126a*/
      }
      v19 = a3[1]; /*0x59126c*/
      v20 = v19 + 1; /*0x591273*/
      v21 = v14 - v19; /*0x591276*/
      v22 = v65; /*0x591278*/
      v23 = *a3 - v15 / 2; /*0x59127e*/
      v59.MapSeed_field_0x04 = v20; /*0x591281*/
      v63 = v21 + v65 + 1; /*0x591289*/
      MapSeed_field_0x10 = v20 + v63; /*0x59128d*/
      v59.MapSeed_field_0x10 = v20 + v63; /*0x591291*/
      if ( v20 < v20 + v63 ) /*0x591295*/
      {
        v25 = v23 + MapSeed_field_0x14 + 2; /*0x591297*/
        do /*0x591309*/
        {
          v26 = v23; /*0x59129d*/
          if ( v23 < v25 ) /*0x59129f*/
          {
            do /*0x5912f8*/
            {
              *(_WORD *)v59.__pad_0 = v26; /*0x5912aa*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x5912af*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x5912b4*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, (int)a4); /*0x5912c5*/
                v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0); /*0x5912dd*/
                v27[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5912e7*/
                MapSeed_field_0x14 = v59.MapSeed_field_0x14; /*0x5912ed*/
              }
              ++v26; /*0x5912f1*/
              v25 = v23 + MapSeed_field_0x14 + 2; /*0x5912f2*/
            }
            while ( v26 < v25 ); /*0x5912f8*/
            MapSeed_field_0x10 = v59.MapSeed_field_0x10; /*0x5912fa*/
          }
          ++v59.MapSeed_field_0x04; /*0x591305*/
        }
        while ( v59.MapSeed_field_0x04 < MapSeed_field_0x10 ); /*0x591309*/
        v4 = a3; /*0x59130b*/
        v22 = v65; /*0x59130f*/
      }
      v59.MapSeed_field_0x04 = v22 + 2; /*0x59131a*/
      v28 = v64 + 4; /*0x59131e*/
      v29 = a2[1] - v22; /*0x591325*/
      LODWORD(v62) = v64 + 4; /*0x591327*/
      v30 = v22 + 2 + v29 - 1; /*0x59132c*/
      v59.MapSeed_field_0x14 = v30; /*0x591330*/
      if ( v22 + 2 < v30 ) /*0x591334*/
      {
        do /*0x5913a6*/
        {
          if ( v28 < v28 + MapSeed_field_0x14 - 2 ) /*0x59133c*/
          {
            do /*0x591391*/
            {
              *(_WORD *)v59.__pad_0 = v28; /*0x591343*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x591348*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x591351*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, this->MapSeed_field_0x08); /*0x591365*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0) + 283) = this->MapSeed_field_0x10; /*0x591380*/
              }
              ++v28; /*0x59138a*/
            }
            while ( v28 < (int)v62 + MapSeed_field_0x14 - 2 ); /*0x591391*/
            v30 = v59.MapSeed_field_0x14; /*0x591393*/
            v28 = v62; /*0x591397*/
          }
          ++v59.MapSeed_field_0x04; /*0x5913a2*/
        }
        while ( v59.MapSeed_field_0x04 < v30 ); /*0x5913a6*/
      }
      v31 = *v4 - MapSeed_field_0x14 + 2; /*0x5913bb*/
      v32 = v4[1] - v65 - 1; /*0x5913c1*/
      v59.MapSeed_field_0x04 = v65 + 2; /*0x5913c2*/
      v33 = v65 + 2 + v32; /*0x5913c6*/
      v59.MapSeed_field_0x10 = v33; /*0x5913ca*/
      if ( v65 + 2 < v33 ) /*0x5913ce*/
      {
        v34 = v31 + MapSeed_field_0x14 - 1; /*0x5913d0*/
        v59.MapSeed_field_0x14 = v34; /*0x5913d4*/
        do /*0x59143a*/
        {
          v35 = v31; /*0x5913da*/
          if ( v31 < v34 ) /*0x5913dc*/
          {
            do /*0x591429*/
            {
              *(_WORD *)v59.__pad_0 = v35; /*0x5913e7*/
              *(_WORD *)&v59.__pad_0[2] = v59.MapSeed_field_0x04; /*0x5913ec*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v59) ) /*0x5913f1*/
              {
                SetLayerDataMap((__int16 *)v59.__pad_0, this->MapSeed_field_0x08); /*0x591405*/
                v36 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v59.__pad_0); /*0x591414*/
                v34 = v59.MapSeed_field_0x14; /*0x59141c*/
                v36[283] = this->MapSeed_field_0x10; /*0x591420*/
              }
              ++v35; /*0x591426*/
            }
            while ( v35 < v34 ); /*0x591429*/
            v33 = v59.MapSeed_field_0x10; /*0x59142b*/
          }
          ++v59.MapSeed_field_0x04; /*0x591436*/
        }
        while ( v59.MapSeed_field_0x04 < v33 ); /*0x59143a*/
        v4 = a3; /*0x59143c*/
      }
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2, a2, (int)a4, this->MapSeed_field_0x10); /*0x591455*/
      v37 = *v4 - 2; /*0x591461*/
      HIWORD(v59.MapSeed_field_0x08) = v4[1]; /*0x591465*/
      LOWORD(v59.MapSeed_field_0x08) = v37; /*0x591470*/
      v38 = this->MapSeed_field_0x10; /*0x591479*/
      v59.MapSeed_field_0x14 = v59.MapSeed_field_0x08; /*0x59147c*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &v59.MapSeed_field_0x14, (int)a4, v38); /*0x591487*/
      MapSeed_field_0x1C = v59.MapSeed_field_0x1C; /*0x59148c*/
      v59.MapSeed_field_0x14 = 0; /*0x591494*/
      if ( v59.MapSeed_field_0x1C )
      {
        do /*0x5914ce*/
        {
          v62 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5914ae*/
          LOWORD(v40) = Math::RoundToInt((double)v62 * 4.656612874161595e-10); /*0x5914c4*/
        }
        while ( v40 > 1 ); /*0x5914ce*/
        LOWORD(v59.MapSeed_field_0x20) = 0; /*0x5914d2*/
        MapSeed_field_0x08 = MapSeed_field_0x1C > 0; /*0x5914db*/
        v59.MapSeed_field_0x08 = MapSeed_field_0x08; /*0x5914e0*/
        HIWORD(v59.MapSeed_field_0x20) = (MapSeed_field_0x1C >= 0) - 1; /*0x5914ed*/
        if ( v40 == 1 ) /*0x5914f2*/
        {
          HIWORD(v59.MapSeed_field_0x14) = MapSeed_field_0x1C; /*0x5914f9*/
          LOWORD(v59.MapSeed_field_0x14) = (_WORD)v68; /*0x5914fe*/
        }
        else
        {
          LOWORD(v59.MapSeed_field_0x20) = *v4 - (_WORD)v68 - *a2 - 5; /*0x591513*/
        }
        v42 = 0; /*0x59151c*/
        *(_DWORD *)v59.__pad_0 = 0; /*0x591520*/
        if ( (int)v68 > 0 )
        {
          v59.MapSeed_field_0x04 = 0; /*0x59152a*/
          while ( 1 )
          {
            v43 = 0; /*0x59153b*/
            v44 = &stru_82ADA8.?[71]; /*0x59153d*/
            v45 = 20 * MapSeed_field_0x08 + 8564560; /*0x591542*/
            while ( 1 )
            {
              v59.MapSeed_field_0x0C = MapSeed_field_0x08 ? v42 : v59.MapSeed_field_0x04;
              v46 = *a2 + 3; /*0x591568*/
              v60[1] = a2[1]; /*0x59156c*/
              v60[0] = v46; /*0x591571*/
              v61[0] = v42 + v46; /*0x591582*/
              v61[1] = v43 + v60[1]; /*0x59158b*/
              LOWORD(v59.MapSeed_field_0x10) = v42 + v46 + LOWORD(v59.MapSeed_field_0x20); /*0x59159f*/
              WORD1(v62) = HIWORD(v59.MapSeed_field_0x20) + v43 + v60[1]; /*0x5915a6*/
              HIWORD(v59.MapSeed_field_0x10) = LOWORD(v59.MapSeed_field_0x0C) + WORD1(v62); /*0x5915ba*/
              v59.MapSeed_field_0x1C = v59.MapSeed_field_0x10; /*0x5915c7*/
              v47 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v59.MapSeed_field_0x1C); /*0x5915cc*/
              v48 = *v44; /*0x5915d5*/
              v44 += 4; /*0x5915d7*/
              v45 += 4; /*0x5915da*/
              v47[283] = LOBYTE(this->MapSeed_field_0x10) + v48 - 4; /*0x5915e3*/
              v49 = *(_BYTE *)(v45 - 4); /*0x5915e9*/
              v47[284] = v49; /*0x5915ec*/
              v50 = g_CellTileLookup; /*0x5915f2*/
              ++v43; /*0x5915fe*/
              v47[282] = 0; /*0x5915ff*/
              *((_DWORD *)v47 + 14) = v49 + v50 - 1; /*0x591610*/
              v42 = *(_DWORD *)v59.__pad_0; /*0x591613*/
              if ( (int)v44 >= (int)&stru_82ADA8.?[91] ) /*0x591617*/
                break; /*0x591617*/
              MapSeed_field_0x08 = v59.MapSeed_field_0x08; /*0x59154b*/
            }
            ++*(_DWORD *)v59.__pad_0; /*0x591629*/
            --v59.MapSeed_field_0x04; /*0x59162d*/
            if ( *(int *)v59.__pad_0 >= (int)v68 ) /*0x591631*/
              break; /*0x591631*/
            v42 = *(_DWORD *)v59.__pad_0; /*0x591530*/
            MapSeed_field_0x08 = v59.MapSeed_field_0x08; /*0x591534*/
          }
          v4 = a3; /*0x591637*/
        }
      }
      v51 = 0; /*0x591649*/
      if ( *v4 - *a2 - (int)v68 - 5 > 0 ) /*0x591650*/
      {
        MapSeed_field_0x14_high = HIWORD(v59.MapSeed_field_0x14); /*0x591656*/
        do /*0x59172e*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59165a*/
          {
            v54 = *a2 + 3; /*0x591663*/
            v61[1] = a2[1]; /*0x591667*/
            v61[0] = v54; /*0x59166c*/
            v60[0] = v51 + v54; /*0x59167d*/
            v60[1] = i + v61[1]; /*0x591686*/
            v55 = v51 + v54 + LOWORD(v59.MapSeed_field_0x14); /*0x59168f*/
            LOWORD(v59.MapSeed_field_0x10) = v60[0] + LOWORD(v59.MapSeed_field_0x14); /*0x591696*/
            HIWORD(v59.MapSeed_field_0x10) = i + v61[1] + MapSeed_field_0x14_high; /*0x59169e*/
            v59.MapSeed_field_0x1C = v59.MapSeed_field_0x10; /*0x5916a7*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x5916b3*/
              *(_DWORD *)(80 * (v55 + g_MapCellWidth * (__int16)(i + v61[1] + MapSeed_field_0x14_high)) /*0x5916ce*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v59.MapSeed_field_0x1C); /*0x5916dc*/
            v57 = this->MapSeed_field_0x10; /*0x5916e5*/
            v56[284] = 4; /*0x5916e8*/
            v56[283] = v57 - i - 1; /*0x5916f3*/
            *((_DWORD *)v56 + 14) = g_CellTileLookup + 3; /*0x591706*/
            v56[282] = 0; /*0x591709*/
          }
          ++v51; /*0x591726*/
        }
        while ( v51 < *a3 - *a2 - (int)v68 - 5 ); /*0x59172e*/
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
char __thiscall PlaceMapSeedCityArea(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x10; // edx
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
  int MapSeed_field_0x08; // ebp
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
  int uniqueId; // edx
  __int16 *v43; // ebp
  int MapSeed_field_0x0C; // esi
  int v45; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  __int16 v48; // ax
  __int16 v49; // bp
  char *v50; // esi
  int v51; // ebx
  bool v52; // zf
  __int16 MapSeed_field_0x04; // cx
  __int16 v54; // dx
  _BYTE *v55; // eax
  char v56; // dl
  unsigned __int8 v57; // cl
  int v58; // edx
  bool v59; // cc
  int v60; // edx
  __int16 MapSeed_field_0x20_high; // bp
  __int16 v62; // si
  __int16 v63; // ax
  __int16 v64; // ax
  _BYTE *v65; // eax
  char v66; // dl
  int v67; // edx
  MapSeed v69; // [esp+14h] [ebp-58h] BYREF
  __int16 v70; // [esp+3Ch] [ebp-30h]
  __int16 v71; // [esp+3Eh] [ebp-2Eh]
  __int16 v72[4]; // [esp+44h] [ebp-28h]
  __int64 v73; // [esp+4Ch] [ebp-20h]
  int v74; // [esp+5Ch] [ebp-10h] BYREF
  int v75; // [esp+60h] [ebp-Ch]
  int v76; // [esp+64h] [ebp-8h]
  int v77; // [esp+68h] [ebp-4h]
  __int16 *v78; // [esp+70h] [ebp+4h]

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
    v78 = (__int16 *)abs32(v69.MapSeed_field_0x0C); /*0x5917e1*/
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
              *(_WORD *)v69.__pad_0 = v19; /*0x59182f*/
              *(_WORD *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x591834*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x591839*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)a4); /*0x59184a*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x591862*/
                v20[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x59186c*/
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
              *(_WORD *)v69.__pad_0 = v24; /*0x5918c2*/
              *(_WORD *)&v69.__pad_0[2] = v69.MapSeed_field_0x04; /*0x5918c7*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x5918cc*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)a4); /*0x5918dd*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x5918f5*/
                v25[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5918ff*/
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
              *(_WORD *)v69.__pad_0 = v31; /*0x591962*/
              *(_WORD *)&v69.__pad_0[2] = MapSeed_field_0x08; /*0x591967*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x59196c*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)this->?); /*0x591980*/
                v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x59198f*/
                MapSeed_field_0x08 = v69.MapSeed_field_0x08; /*0x591997*/
                v32[283] = this->?; /*0x59199b*/
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
              *(_WORD *)v69.__pad_0 = v39; /*0x5919f6*/
              *(_WORD *)&v69.__pad_0[2] = v38; /*0x5919fb*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v69) ) /*0x591a00*/
              {
                SetLayerDataMap((__int16 *)v69.__pad_0, (int)this->?); /*0x591a14*/
                v40 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v69.__pad_0); /*0x591a23*/
                v33 = v73; /*0x591a2b*/
                v40[283] = this->?; /*0x591a2f*/
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
      uniqueId = this->?; /*0x591a5f*/
      HIWORD(v69.MapSeed_field_0x08) = v41; /*0x591a62*/
      v69.MapSeed_field_0x10 = v69.MapSeed_field_0x08; /*0x591a70*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &v69.MapSeed_field_0x10, (int)a4, uniqueId); /*0x591a7d*/
      v43 = a3; /*0x591a8a*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, a3, (int)a4, this->?); /*0x591a95*/
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
        v69.MapSeed_field_0x18 = (unsigned __int16)((MapSeed_field_0x0C >= 0) - 1); /*0x591aee*/
        if ( v46 == 1 ) /*0x591af8*/
        {
          LOWORD(v69.MapSeed_field_0x20) = MapSeed_field_0x0C; /*0x591afe*/
          HIWORD(v69.MapSeed_field_0x20) = -(__int16)v78; /*0x591b05*/
        }
        else
        {
          v48 = a2[1]; /*0x591b0c*/
          LOWORD(v69.MapSeed_field_0x18) = (MapSeed_field_0x0C >= 0) - 1; /*0x591b10*/
          v72[1] = v48 - (_WORD)v78 - a3[1] - 5; /*0x591b21*/
          HIWORD(v69.MapSeed_field_0x18) = -v72[1]; /*0x591b2c*/
        }
        *(_DWORD *)v69.__pad_0 = 0; /*0x591b35*/
        if ( (int)v78 > 0 ) /*0x591b3b*/
        {
          v69.MapSeed_field_0x04 = 0; /*0x591b41*/
          while ( 1 ) /*0x591b51*/
          {
            v49 = 0; /*0x591b51*/
            v50 = &stru_82ADA8.?[131]; /*0x591b56*/
            WORD1(v73) = -*(_WORD *)v69.__pad_0; /*0x591b5d*/
            v51 = 20 * v47 + 8564620; /*0x591b62*/
            while ( 1 ) /*0x591b6f*/
            {
              v52 = v47 == 0; /*0x591b6f*/
              MapSeed_field_0x04 = *(_WORD *)v69.__pad_0; /*0x591b71*/
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
              v55 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v69.MapSeed_field_0x14); /*0x591bea*/
              v56 = *v50; /*0x591bf3*/
              v50 += 4; /*0x591bf5*/
              v51 += 4; /*0x591bf8*/
              v55[283] = LOBYTE(this->?) + v56 - 4; /*0x591c01*/
              v57 = *(_BYTE *)(v51 - 4); /*0x591c07*/
              v55[284] = v57; /*0x591c0a*/
              v58 = g_CellTileLookup; /*0x591c10*/
              ++v49; /*0x591c1c*/
              v55[282] = 0; /*0x591c23*/
              *((_DWORD *)v55 + 14) = v57 + v58 - 1; /*0x591c2e*/
              if ( (int)v50 >= (int)&stru_82ADA8.?[151] ) /*0x591c31*/
                break; /*0x591c31*/
              v47 = v69.MapSeed_field_0x08; /*0x591b6b*/
            }
            v59 = ++*(_DWORD *)v69.__pad_0 < (int)v78; /*0x591c45*/
            --v69.MapSeed_field_0x04; /*0x591c4b*/
            if ( !v59 ) /*0x591c4f*/
              break; /*0x591c4f*/
            v47 = v69.MapSeed_field_0x08; /*0x591b47*/
          }
          v43 = a3; /*0x591c55*/
          v45 = 0; /*0x591c59*/
        }
      }
      v60 = a2[1] - v43[1] - (_DWORD)v78; /*0x591c69*/
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
              *(_DWORD *)(80 * ((__int16)(v45 + v72[0] + LOWORD(v69.MapSeed_field_0x20)) + g_MapCellWidth * v64) /*0x591d02*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v65 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v69.MapSeed_field_0x14); /*0x591d10*/
            v66 = this->?; /*0x591d19*/
            v65[284] = 3; /*0x591d1c*/
            v65[283] = v66 - v45++ - 1; /*0x591d27*/
            *((_DWORD *)v65 + 14) = g_CellTileLookup + 2; /*0x591d3a*/
            v65[282] = 0; /*0x591d3d*/
          }
          while ( v45 < 4 ); /*0x591d44*/
          v67 = a2[1] - a3[1] - (_DWORD)v78 - 5; /*0x591d63*/
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



// ==== 0x00591D80  MapSeed::PlaceCityBuildings  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBuildings(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
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
  int MapSeed_field_0x14; // ebp
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  int MapSeed_field_0x10; // edx
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
  int MapSeed_field_0x1C; // esi
  unsigned int v43; // eax
  int MapSeed_field_0x08; // ecx
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
  __int16 MapSeed_field_0x14_high; // bp
  int i; // ebx
  __int16 v57; // ax
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // dl
  MapSeed v63; // [esp+14h] [ebp-60h] BYREF
  __int16 v64[4]; // [esp+3Ch] [ebp-38h]
  __int16 v65; // [esp+44h] [ebp-30h]
  __int16 v66; // [esp+46h] [ebp-2Eh]
  int v67; // [esp+4Eh] [ebp-26h]
  __int64 v68; // [esp+54h] [ebp-20h]
  int v69; // [esp+64h] [ebp-10h] BYREF
  int v70; // [esp+68h] [ebp-Ch]
  int v71; // [esp+6Ch] [ebp-8h]
  int v72; // [esp+70h] [ebp-4h]
  __int16 *v73; // [esp+7Ch] [ebp+8h]

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
  v69 = v10 - 4; /*0x591dc0*/
  v70 = v8 - 7; /*0x591dc4*/
  v71 = *a2 - v10 + 8; /*0x591dd8*/
  v72 = v7 - v9 + 11; /*0x591df0*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v69, (int)a4); /*0x591df4*/
  if ( result )
  {
    v12 = a3[1]; /*0x591e07*/
    v63.MapSeed_field_0x1C = v12 - a2[1]; /*0x591e13*/
    v13 = *a2 - *a3; /*0x591e24*/
    v73 = (__int16 *)abs32(v63.MapSeed_field_0x1C); /*0x591e26*/
    if ( (int)v73 <= v13 - 5 )
    {
      v14 = v69; /*0x591e3e*/
      LODWORD(v68) = v69; /*0x591e45*/
      v15 = v13 + 1; /*0x591e49*/
      v16 = v70; /*0x591e4b*/
      v63.MapSeed_field_0x04 = v70; /*0x591e51*/
      MapSeed_field_0x14 = v15 / 2 + 3; /*0x591e59*/
      v63.MapSeed_field_0x14 = MapSeed_field_0x14; /*0x591e5e*/
      v63.MapSeed_field_0x0C = v12; /*0x591e62*/
      if ( v70 < v12 ) /*0x591e66*/
      {
        v63.MapSeed_field_0x08 = v69 + MapSeed_field_0x14 + 2; /*0x591e70*/
        do /*0x591ef2*/
        {
          if ( v14 < v63.MapSeed_field_0x08 ) /*0x591e78*/
          {
            do /*0x591ed9*/
            {
              *(_WORD *)v63.__pad_0 = v14; /*0x591e83*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591e88*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591e8d*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, (int)a4); /*0x591ea1*/
                v63.MapSeed_field_0x10 = (int)CellCoord::To_CellObj( /*0x591ebc*/
                                                (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                (__int16 *)v63.__pad_0);
                v18 = List::FindByValue((List *)a4); /*0x591ec0*/
                *(_BYTE *)(v63.MapSeed_field_0x10 + 283) = *(_BYTE *)(v18 + 16); /*0x591ecc*/
              }
              ++v14; /*0x591ed6*/
            }
            while ( v14 < v63.MapSeed_field_0x08 ); /*0x591ed9*/
            v16 = v70; /*0x591edb*/
            v14 = v68; /*0x591edf*/
          }
          ++v63.MapSeed_field_0x04; /*0x591eee*/
        }
        while ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x0C ); /*0x591ef2*/
      }
      v19 = a2[1] - v16; /*0x591efb*/
      v20 = *a2 - MapSeed_field_0x14 + 2; /*0x591eff*/
      v63.MapSeed_field_0x04 = v16; /*0x591f02*/
      MapSeed_field_0x10 = v19 + v16; /*0x591f06*/
      v63.MapSeed_field_0x10 = v19 + v16; /*0x591f0b*/
      if ( v16 < v19 + v16 ) /*0x591f0f*/
      {
        v22 = v20 + MapSeed_field_0x14 + 3; /*0x591f15*/
        do /*0x591f91*/
        {
          v23 = v20; /*0x591f1b*/
          if ( v20 < v22 ) /*0x591f1d*/
          {
            do /*0x591f7c*/
            {
              *(_WORD *)v63.__pad_0 = v23; /*0x591f28*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591f2d*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591f32*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, (int)a4); /*0x591f46*/
                v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x591f61*/
                v24[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x591f6b*/
                MapSeed_field_0x14 = v63.MapSeed_field_0x14; /*0x591f71*/
              }
              ++v23; /*0x591f75*/
              v22 = v20 + MapSeed_field_0x14 + 3; /*0x591f76*/
            }
            while ( v23 < v22 ); /*0x591f7c*/
            v16 = v70; /*0x591f7e*/
            MapSeed_field_0x10 = v63.MapSeed_field_0x10; /*0x591f82*/
          }
          ++v63.MapSeed_field_0x04; /*0x591f8d*/
        }
        while ( v63.MapSeed_field_0x04 < MapSeed_field_0x10 ); /*0x591f91*/
        v4 = a2; /*0x591f93*/
      }
      v25 = v72; /*0x591f9a*/
      LODWORD(v68) = *a3; /*0x591f9e*/
      v63.MapSeed_field_0x04 = a3[1]; /*0x591fa8*/
      v63.MapSeed_field_0x14 = v72 + v16 - 2; /*0x591fb6*/
      if ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x14 ) /*0x591fba*/
      {
        v26 = v68; /*0x591fbc*/
        v27 = v68 + MapSeed_field_0x14 - 2; /*0x591fc0*/
        do /*0x592030*/
        {
          v28 = v26; /*0x591fc6*/
          if ( v26 < v27 ) /*0x591fc8*/
          {
            do /*0x592019*/
            {
              *(_WORD *)v63.__pad_0 = v28; /*0x591fd3*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x591fd8*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x591fdd*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, this->MapSeed_field_0x08); /*0x591ff1*/
                v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x592000*/
                v26 = v68; /*0x592008*/
                v29[283] = this->MapSeed_field_0x10; /*0x59200c*/
              }
              ++v28; /*0x592012*/
              v27 = v26 + MapSeed_field_0x14 - 2; /*0x592013*/
            }
            while ( v28 < v27 ); /*0x592019*/
            v25 = v72; /*0x59201b*/
            v16 = v70; /*0x59201f*/
          }
          ++v63.MapSeed_field_0x04; /*0x59202c*/
        }
        while ( v63.MapSeed_field_0x04 < v63.MapSeed_field_0x14 ); /*0x592030*/
        v4 = a2; /*0x592032*/
      }
      v30 = v4[1]; /*0x592036*/
      v31 = *v4 - MapSeed_field_0x14 + 2; /*0x592041*/
      v63.MapSeed_field_0x04 = v30; /*0x592044*/
      v32 = v25 + v16 - 2; /*0x59204c*/
      v63.MapSeed_field_0x10 = v32; /*0x592050*/
      if ( v30 < v32 ) /*0x592054*/
      {
        v33 = v31 + MapSeed_field_0x14 - 1; /*0x592056*/
        v63.MapSeed_field_0x14 = v33; /*0x59205a*/
        do /*0x5920c0*/
        {
          v34 = v31; /*0x592060*/
          if ( v31 < v33 ) /*0x592062*/
          {
            do /*0x5920af*/
            {
              *(_WORD *)v63.__pad_0 = v34; /*0x59206d*/
              *(_WORD *)&v63.__pad_0[2] = v63.MapSeed_field_0x04; /*0x592072*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v63) ) /*0x592077*/
              {
                SetLayerDataMap((__int16 *)v63.__pad_0, this->MapSeed_field_0x08); /*0x59208b*/
                v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v63.__pad_0); /*0x59209a*/
                v33 = v63.MapSeed_field_0x14; /*0x5920a2*/
                v35[283] = this->MapSeed_field_0x10; /*0x5920a6*/
              }
              ++v34; /*0x5920ac*/
            }
            while ( v34 < v33 ); /*0x5920af*/
            v32 = v63.MapSeed_field_0x10; /*0x5920b1*/
          }
          ++v63.MapSeed_field_0x04; /*0x5920bc*/
        }
        while ( v63.MapSeed_field_0x04 < v32 ); /*0x5920c0*/
        v4 = a2; /*0x5920c2*/
      }
      v36 = a3[1] - 3; /*0x5920d8*/
      LOWORD(v63.MapSeed_field_0x08) = *a3; /*0x5920dc*/
      v37 = this->MapSeed_field_0x10; /*0x5920e1*/
      HIWORD(v63.MapSeed_field_0x08) = v36; /*0x5920e4*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x5920f2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &v63.MapSeed_field_0x14, (int)a4, v37); /*0x5920ff*/
      v38 = v4[1] - 3; /*0x59210f*/
      LOWORD(v63.MapSeed_field_0x08) = *v4 - 2; /*0x592113*/
      v39 = this->MapSeed_field_0x10; /*0x592118*/
      HIWORD(v63.MapSeed_field_0x08) = v38; /*0x59211b*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x592124*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 5, &v63.MapSeed_field_0x14, (int)a4, v39); /*0x592136*/
      v40 = v4[1] - 1; /*0x592144*/
      LOWORD(v63.MapSeed_field_0x08) = *v4 - 1; /*0x592146*/
      v41 = this->MapSeed_field_0x10; /*0x59214b*/
      HIWORD(v63.MapSeed_field_0x08) = v40; /*0x59214e*/
      v63.MapSeed_field_0x14 = v63.MapSeed_field_0x08; /*0x592157*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 6, &v63.MapSeed_field_0x14, (int)a4, v41); /*0x592169*/
      MapSeed_field_0x1C = v63.MapSeed_field_0x1C; /*0x59216e*/
      v63.MapSeed_field_0x14 = 0; /*0x592176*/
      if ( v63.MapSeed_field_0x1C )
      {
        do /*0x5921b0*/
        {
          v68 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592190*/
          LOWORD(v43) = Math::RoundToInt((double)v68 * 4.656612874161595e-10); /*0x5921a6*/
        }
        while ( v43 > 1 ); /*0x5921b0*/
        LOWORD(v63.MapSeed_field_0x20) = 0; /*0x5921b4*/
        MapSeed_field_0x08 = MapSeed_field_0x1C > 0; /*0x5921bd*/
        v63.MapSeed_field_0x08 = MapSeed_field_0x08; /*0x5921c2*/
        HIWORD(v63.MapSeed_field_0x20) = MapSeed_field_0x1C < 0; /*0x5921ce*/
        if ( v43 == 1 ) /*0x5921d3*/
        {
          LOWORD(v63.MapSeed_field_0x14) = (_WORD)v73; /*0x5921dc*/
          HIWORD(v63.MapSeed_field_0x14) = -(__int16)MapSeed_field_0x1C; /*0x5921e1*/
        }
        else
        {
          LOWORD(v63.MapSeed_field_0x20) = *v4 - (_WORD)v73 - *a3 - 5; /*0x5921f6*/
        }
        v45 = 0; /*0x5921ff*/
        *(_DWORD *)v63.__pad_0 = 0; /*0x592203*/
        if ( (int)v73 > 0 )
        {
          v63.MapSeed_field_0x04 = 0; /*0x59220d*/
          while ( 1 )
          {
            v46 = 0; /*0x59221e*/
            v47 = &stru_82ADA8.?[20]; /*0x592220*/
            v48 = 20 * MapSeed_field_0x08 + 8564680; /*0x592225*/
            while ( 1 )
            {
              v63.MapSeed_field_0x0C = MapSeed_field_0x08 ? v63.MapSeed_field_0x04 : v45;
              v49 = *a3; /*0x592244*/
              LOWORD(v67) = -v46; /*0x59224b*/
              v64[1] = a3[1]; /*0x592258*/
              v64[0] = v49 + 3; /*0x592261*/
              v65 = v45 + v49 + 3; /*0x592272*/
              v66 = v64[1] - v46; /*0x592277*/
              LOWORD(v63.MapSeed_field_0x10) = v65 + LOWORD(v63.MapSeed_field_0x20); /*0x59228f*/
              WORD1(v68) = HIWORD(v63.MapSeed_field_0x20) + v64[1] - v46; /*0x592296*/
              HIWORD(v63.MapSeed_field_0x10) = LOWORD(v63.MapSeed_field_0x0C) + WORD1(v68); /*0x5922aa*/
              v63.MapSeed_field_0x1C = v63.MapSeed_field_0x10; /*0x5922b7*/
              v50 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v63.MapSeed_field_0x1C); /*0x5922bc*/
              v51 = *v47; /*0x5922c5*/
              v47 += 4; /*0x5922c7*/
              v48 += 4; /*0x5922ca*/
              v50[283] = LOBYTE(this->MapSeed_field_0x10) + v51 - 4; /*0x5922d3*/
              v52 = *(_BYTE *)(v48 - 4); /*0x5922d9*/
              v50[284] = v52; /*0x5922dc*/
              v53 = g_CellTileLookup; /*0x5922e2*/
              ++v46; /*0x5922ee*/
              v50[282] = 0; /*0x5922ef*/
              *((_DWORD *)v50 + 14) = v52 + v53 - 1; /*0x592300*/
              v45 = *(_DWORD *)v63.__pad_0; /*0x592303*/
              if ( (int)v47 >= (int)&stru_82ADA8.?[13] ) /*0x592307*/
                break; /*0x592307*/
              MapSeed_field_0x08 = v63.MapSeed_field_0x08; /*0x59222e*/
            }
            ++*(_DWORD *)v63.__pad_0; /*0x592319*/
            --v63.MapSeed_field_0x04; /*0x59231d*/
            if ( *(int *)v63.__pad_0 >= (int)v73 ) /*0x592321*/
              break; /*0x592321*/
            v45 = *(_DWORD *)v63.__pad_0; /*0x592213*/
            MapSeed_field_0x08 = v63.MapSeed_field_0x08; /*0x592217*/
          }
          v4 = a2; /*0x592327*/
        }
      }
      v54 = 0; /*0x592339*/
      if ( *v4 - *a3 - (int)v73 - 5 > 0 ) /*0x592340*/
      {
        MapSeed_field_0x14_high = HIWORD(v63.MapSeed_field_0x14); /*0x592346*/
        do /*0x59242a*/
        {
          for ( i = 0; i < 4; ++i ) /*0x59234a*/
          {
            v57 = a3[1]; /*0x59234f*/
            v58 = *a3 + 3; /*0x592355*/
            WORD1(v68) = -(__int16)i; /*0x59235b*/
            v65 = v58; /*0x592360*/
            v66 = v57; /*0x592365*/
            v64[0] = v54 + v58; /*0x59237a*/
            v64[1] = v57 - i; /*0x59237f*/
            v59 = MapSeed_field_0x14_high + v57 - i; /*0x592392*/
            LOWORD(v63.MapSeed_field_0x10) = LOWORD(v63.MapSeed_field_0x14) + v54 + v58; /*0x592394*/
            HIWORD(v63.MapSeed_field_0x10) = MapSeed_field_0x14_high + v64[1]; /*0x592399*/
            v63.MapSeed_field_0x1C = v63.MapSeed_field_0x10; /*0x5923a2*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x5923ae*/
              *(_DWORD *)(80 * ((__int16)(LOWORD(v63.MapSeed_field_0x14) + v54 + v58) + g_MapCellWidth * v59) /*0x5923cc*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v60 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v63.MapSeed_field_0x1C); /*0x5923da*/
            v61 = this->MapSeed_field_0x10; /*0x5923e3*/
            v60[284] = 2; /*0x5923e6*/
            v60[283] = v61 - i - 1; /*0x5923f1*/
            *((_DWORD *)v60 + 14) = g_CellTileLookup + 1; /*0x592402*/
            v60[282] = 0; /*0x592405*/
          }
          ++v54; /*0x592422*/
        }
        while ( v54 < *a2 - *a3 - (int)v73 - 5 ); /*0x59242a*/
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
char __thiscall RandomMap::CheckPlacementArea(RandomMap *this, __int16 *a2, __int16 *a3, void *a4)
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
  int v14; // ecx
  int v15; // esi
  int v16; // kr00_4
  int v17; // ebx
  int MapSeed_field_0x08; // ebp
  int v19; // esi
  _BYTE *v20; // ebp
  int v21; // edx
  int MapSeed_field_0x04; // ebp
  int v23; // esi
  int v24; // esi
  _BYTE *v25; // ebp
  int MapSeed_field_0x10; // ebp
  int v27; // edx
  int v28; // esi
  _BYTE *v29; // eax
  __int16 *v30; // ebp
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // ebx
  __int16 v35; // dx
  void *RandomMap_field_0x10; // edx
  __int16 v37; // dx
  void *v38; // ecx
  __int16 v39; // dx
  void *v40; // ecx
  int MapSeed_field_0x14; // esi
  int v42; // ebx
  unsigned int v43; // eax
  int v44; // ecx
  __int16 v45; // bp
  int *v46; // esi
  int v47; // ebx
  bool v48; // zf
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // ax
  _BYTE *v52; // eax
  char v53; // dl
  unsigned __int8 v54; // cl
  int v55; // edx
  bool v56; // cc
  int v57; // esi
  __int16 MapSeed_field_0x1C_high; // bp
  __int16 v59; // dx
  __int16 v60; // ax
  __int16 v61; // ax
  _BYTE *v62; // eax
  char v63; // dl
  char v64; // dl
  MapSeed v66; // [esp+14h] [ebp-54h] BYREF
  int v67; // [esp+38h] [ebp-30h]
  __int16 v68; // [esp+40h] [ebp-28h]
  __int16 v69; // [esp+42h] [ebp-26h]
  __int64 v70; // [esp+48h] [ebp-20h]
  int v71; // [esp+50h] [ebp-18h]
  int v72; // [esp+58h] [ebp-10h] BYREF
  int v73; // [esp+5Ch] [ebp-Ch]
  int v74; // [esp+60h] [ebp-8h]
  int v75; // [esp+64h] [ebp-4h]
  __int16 *v76; // [esp+6Ch] [ebp+4h]

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
  v72 = v5 - 7; /*0x592478*/
  v8 = a2[1]; /*0x59247c*/
  v73 = v8 - 4; /*0x592483*/
  v75 = a3[1] - v8 + 9; /*0x59249f*/
  v74 = v6 - v7 + 11; /*0x5924a9*/
  result = BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v72, (int)a4); /*0x5924ad*/
  if ( result ) /*0x5924b4*/
  {
    v10 = *a2; /*0x5924c0*/
    v11 = a3[1]; /*0x5924c8*/
    v66.MapSeed_field_0x14 = *a3 - v10; /*0x5924cc*/
    v12 = v11 - a2[1]; /*0x5924d9*/
    v76 = (__int16 *)abs32(v66.MapSeed_field_0x14); /*0x5924db*/
    if ( (int)v76 <= v12 - 5 ) /*0x5924e4*/
    {
      v13 = v12 + 1; /*0x5924f2*/
      v14 = v72; /*0x5924f5*/
      v15 = v10 - v72; /*0x5924fc*/
      v16 = v13; /*0x5924fe*/
      v17 = v13 / 2 + 2; /*0x592506*/
      MapSeed_field_0x08 = v73; /*0x592509*/
      LODWORD(v70) = v72; /*0x59250b*/
      v66.MapSeed_field_0x08 = v73; /*0x59250f*/
      v66.MapSeed_field_0x10 = v17 + v73 + 2; /*0x592519*/
      if ( v73 < v66.MapSeed_field_0x10 ) /*0x59251d*/
      {
        v66.MapSeed_field_0x04 = v72 + v15; /*0x592521*/
        do /*0x592596*/
        {
          v19 = v70; /*0x592525*/
          if ( (int)v70 < v66.MapSeed_field_0x04 ) /*0x592531*/
          {
            do /*0x592585*/
            {
              *(_WORD *)v66.__pad_0 = v19; /*0x592537*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x08; /*0x59253c*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592541*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x592552*/
                v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x59256a*/
                v20[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592574*/
                MapSeed_field_0x08 = v66.MapSeed_field_0x08; /*0x59257a*/
              }
              ++v19; /*0x592582*/
            }
            while ( v19 < v66.MapSeed_field_0x04 ); /*0x592585*/
            v14 = v72; /*0x592587*/
          }
          v66.MapSeed_field_0x08 = ++MapSeed_field_0x08; /*0x592592*/
        }
        while ( MapSeed_field_0x08 < v66.MapSeed_field_0x10 ); /*0x592596*/
      }
      LODWORD(v70) = v14; /*0x59259c*/
      v21 = *a3 - v14; /*0x5925a9*/
      v23 = a3[1] + 5; /*0x5925b0*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5925b4*/
      MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x5925ae*/
      v66.MapSeed_field_0x10 = v23; /*0x5925ba*/
      if ( v66.MapSeed_field_0x04 < v23 ) /*0x5925be*/
      {
        v66.MapSeed_field_0x08 = v14 + v21; /*0x5925c2*/
        do /*0x592635*/
        {
          v24 = v70; /*0x5925c6*/
          if ( (int)v70 < v66.MapSeed_field_0x08 ) /*0x5925d0*/
          {
            do /*0x592624*/
            {
              *(_WORD *)v66.__pad_0 = v24; /*0x5925d6*/
              *(_WORD *)&v66.__pad_0[2] = MapSeed_field_0x04; /*0x5925db*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x5925e0*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)a4); /*0x5925f1*/
                v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x592609*/
                v25[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592613*/
                MapSeed_field_0x04 = v66.MapSeed_field_0x04; /*0x592619*/
              }
              ++v24; /*0x592621*/
            }
            while ( v24 < v66.MapSeed_field_0x08 ); /*0x592624*/
            v14 = v72; /*0x592626*/
          }
          v66.MapSeed_field_0x04 = ++MapSeed_field_0x04; /*0x592631*/
        }
        while ( MapSeed_field_0x04 < v66.MapSeed_field_0x10 ); /*0x592635*/
      }
      MapSeed_field_0x10 = *a2; /*0x592637*/
      v27 = v74; /*0x59263a*/
      v66.MapSeed_field_0x10 = MapSeed_field_0x10; /*0x59263e*/
      v66.MapSeed_field_0x04 = a2[1]; /*0x592648*/
      v71 = v74 - MapSeed_field_0x10 + v14 - 1; /*0x592652*/
      v66.MapSeed_field_0x0C = v17 + v66.MapSeed_field_0x04 - 1; /*0x59265c*/
      if ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ) /*0x592660*/
      {
        v66.MapSeed_field_0x08 = MapSeed_field_0x10 + v71; /*0x592668*/
        do /*0x5926de*/
        {
          v28 = MapSeed_field_0x10; /*0x592670*/
          if ( MapSeed_field_0x10 < v66.MapSeed_field_0x08 ) /*0x592674*/
          {
            do /*0x5926c5*/
            {
              *(_WORD *)v66.__pad_0 = v28; /*0x59267b*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592680*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x592689*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59269d*/
                v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0); /*0x5926ac*/
                MapSeed_field_0x10 = v66.MapSeed_field_0x10; /*0x5926b4*/
                v29[283] = this->RandomMap_field_0x10; /*0x5926b8*/
              }
              ++v28; /*0x5926c2*/
            }
            while ( v28 < v66.MapSeed_field_0x08 ); /*0x5926c5*/
            v27 = v74; /*0x5926c7*/
            v14 = v72; /*0x5926cb*/
          }
          ++v66.MapSeed_field_0x04; /*0x5926da*/
        }
        while ( v66.MapSeed_field_0x04 < v66.MapSeed_field_0x0C ); /*0x5926de*/
      }
      v30 = a3; /*0x5926e0*/
      v31 = *a3; /*0x5926e8*/
      v32 = v27 - v31 + v14 - 1; /*0x5926f3*/
      v66.MapSeed_field_0x04 = a3[1] - v17 + 3; /*0x5926f7*/
      v33 = v16 / 2 + v66.MapSeed_field_0x04; /*0x5926fb*/
      v66.MapSeed_field_0x10 = v33; /*0x592701*/
      if ( v66.MapSeed_field_0x04 < v33 ) /*0x592705*/
      {
        v66.MapSeed_field_0x08 = v31 + v32; /*0x592709*/
        do /*0x592777*/
        {
          v34 = v31; /*0x592711*/
          if ( v31 < v66.MapSeed_field_0x08 ) /*0x592715*/
          {
            do /*0x592766*/
            {
              *(_WORD *)v66.__pad_0 = v34; /*0x592720*/
              *(_WORD *)&v66.__pad_0[2] = v66.MapSeed_field_0x04; /*0x592725*/
              if ( (unsigned __int8)MapSeed::IsCellInBounds(&v66) ) /*0x59272a*/
              {
                SetLayerDataMap((__int16 *)v66.__pad_0, (int)this->RandomMap_field_0x8); /*0x59273e*/
                *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v66.__pad_0) + 283) = this->RandomMap_field_0x10; /*0x592759*/
              }
              ++v34; /*0x592763*/
            }
            while ( v34 < v66.MapSeed_field_0x08 ); /*0x592766*/
            v33 = v66.MapSeed_field_0x10; /*0x592768*/
          }
          ++v66.MapSeed_field_0x04; /*0x592773*/
        }
        while ( v66.MapSeed_field_0x04 < v33 ); /*0x592777*/
      }
      v35 = *a2 - 3; /*0x592788*/
      HIWORD(v66.MapSeed_field_0x08) = a2[1]; /*0x59278c*/
      LOWORD(v66.MapSeed_field_0x08) = v35; /*0x592796*/
      RandomMap_field_0x10 = this->RandomMap_field_0x10; /*0x59279f*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927a2*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &v66.MapSeed_field_0x10, (int)a4, (int)RandomMap_field_0x10); /*0x5927af*/
      v37 = a3[1] - 2; /*0x5927c0*/
      LOWORD(v66.MapSeed_field_0x08) = *a3 - 3; /*0x5927c4*/
      v38 = this->RandomMap_field_0x10; /*0x5927c9*/
      HIWORD(v66.MapSeed_field_0x08) = v37; /*0x5927cc*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x5927d5*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 8, &v66.MapSeed_field_0x10, (int)a4, (int)v38); /*0x5927e7*/
      v39 = a3[1] - 1; /*0x5927f6*/
      LOWORD(v66.MapSeed_field_0x08) = *a3 - 1; /*0x5927f8*/
      v40 = this->RandomMap_field_0x10; /*0x5927fd*/
      HIWORD(v66.MapSeed_field_0x08) = v39; /*0x592800*/
      v66.MapSeed_field_0x10 = v66.MapSeed_field_0x08; /*0x592809*/
      PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 9, &v66.MapSeed_field_0x10, (int)a4, (int)v40); /*0x59281b*/
      MapSeed_field_0x14 = v66.MapSeed_field_0x14; /*0x592820*/
      v42 = 0; /*0x592824*/
      v66.MapSeed_field_0x1C = 0; /*0x592828*/
      if ( v66.MapSeed_field_0x14 ) /*0x592832*/
      {
        do /*0x59285c*/
        {
          v70 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x592842*/
          LOWORD(v43) = Math::RoundToInt((double)v70 * 4.656612874161595e-10); /*0x592854*/
        }
        while ( v43 > 1 ); /*0x59285c*/
        v44 = MapSeed_field_0x14 > 0; /*0x592862*/
        v66.MapSeed_field_0x08 = v44; /*0x59286f*/
        v67 = v44; /*0x592873*/
        if ( v43 == 1 ) /*0x59287d*/
        {
          LOWORD(v66.MapSeed_field_0x1C) = MapSeed_field_0x14; /*0x592884*/
          HIWORD(v66.MapSeed_field_0x1C) = (_WORD)v76; /*0x592889*/
        }
        else
        {
          HIWORD(v67) = a3[1] - (_WORD)v76 - a2[1] - 5; /*0x5928a0*/
        }
        *(_DWORD *)v66.__pad_0 = 0; /*0x5928a9*/
        if ( (int)v76 > 0 ) /*0x5928af*/
        {
          v66.MapSeed_field_0x04 = 0; /*0x5928b5*/
          while ( 1 ) /*0x5928c4*/
          {
            v45 = 0; /*0x5928c4*/
            v46 = &stru_82ADA8.?[1]; /*0x5928c6*/
            v47 = 20 * v44 + 8564740; /*0x5928cb*/
            while ( 1 ) /*0x5928d8*/
            {
              v48 = v44 == 0; /*0x5928d8*/
              v49 = *(_WORD *)v66.__pad_0; /*0x5928da*/
              if ( v48 ) /*0x5928de*/
                v49 = v66.MapSeed_field_0x04; /*0x5928e0*/
              v50 = *a2; /*0x5928e4*/
              LOWORD(v66.MapSeed_field_0x14) = -v45; /*0x5928eb*/
              v51 = a2[1] + 3; /*0x5928f4*/
              v68 = v50; /*0x5928f8*/
              v69 = v51; /*0x5928fd*/
              LOWORD(v70) = v50 - v45; /*0x592910*/
              WORD1(v70) = *(_WORD *)v66.__pad_0 + v51; /*0x59291f*/
              LOWORD(v66.MapSeed_field_0x0C) = v67 + v50 - v45; /*0x59292e*/
              HIWORD(v66.MapSeed_field_0x0C) = *(_WORD *)v66.__pad_0 + v51 + HIWORD(v67); /*0x592939*/
              LOWORD(v66.MapSeed_field_0x10) = v49 + LOWORD(v66.MapSeed_field_0x0C); /*0x592948*/
              HIWORD(v66.MapSeed_field_0x10) = HIWORD(v66.MapSeed_field_0x0C); /*0x59294d*/
              v66.MapSeed_field_0x18 = v66.MapSeed_field_0x10; /*0x59295c*/
              v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x18); /*0x592960*/
              v53 = *(_BYTE *)v46++; /*0x592969*/
              v47 += 4; /*0x59296e*/
              v52[283] = LOBYTE(this->RandomMap_field_0x10) + v53 - 4; /*0x592977*/
              v54 = *(_BYTE *)(v47 - 4); /*0x59297d*/
              v52[284] = v54; /*0x592980*/
              v55 = g_CellTileLookup; /*0x592986*/
              ++v45; /*0x592992*/
              v52[282] = 0; /*0x592999*/
              *((_DWORD *)v52 + 14) = v54 + v55 - 1; /*0x5929a4*/
              if ( (int)v46 >= (int)&stru_82ADA8.?[6] ) /*0x5929a7*/
                break; /*0x5929a7*/
              v44 = v66.MapSeed_field_0x08; /*0x5928d4*/
            }
            v56 = ++*(_DWORD *)v66.__pad_0 < (int)v76; /*0x5929bb*/
            --v66.MapSeed_field_0x04; /*0x5929c1*/
            if ( !v56 ) /*0x5929c5*/
              break; /*0x5929c5*/
            v44 = v66.MapSeed_field_0x08; /*0x5928bb*/
          }
          v30 = a3; /*0x5929cb*/
          v42 = 0; /*0x5929cf*/
        }
      }
      v57 = 0; /*0x5929e1*/
      if ( v30[1] - a2[1] - (int)v76 - 5 > 0 ) /*0x5929e8*/
      {
        MapSeed_field_0x1C_high = HIWORD(v66.MapSeed_field_0x1C); /*0x5929ee*/
        while ( 1 ) /*0x592ab2*/
        {
          do /*0x592ab2*/
          {
            v59 = *a2; /*0x5929fa*/
            v60 = a2[1] + 3; /*0x5929ff*/
            LOWORD(v66.MapSeed_field_0x18) = -(__int16)v42; /*0x592a05*/
            LOWORD(v70) = v59; /*0x592a0a*/
            WORD1(v70) = v60; /*0x592a13*/
            v68 = v59 - v42; /*0x592a28*/
            v69 = v57 + v60; /*0x592a2d*/
            v61 = MapSeed_field_0x1C_high + v57 + v60; /*0x592a3c*/
            LOWORD(v66.MapSeed_field_0x10) = LOWORD(v66.MapSeed_field_0x1C) + v59 - v42; /*0x592a3e*/
            HIWORD(v66.MapSeed_field_0x10) = MapSeed_field_0x1C_high + v69; /*0x592a43*/
            v66.MapSeed_field_0x14 = v66.MapSeed_field_0x10; /*0x592a4c*/
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592a58*/
              *(_DWORD *)(80 * ((__int16)(LOWORD(v66.MapSeed_field_0x1C) + v59 - v42) + g_MapCellWidth * v61) /*0x592a73*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v62 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&v66.MapSeed_field_0x14); /*0x592a81*/
            v63 = (char)this->RandomMap_field_0x10; /*0x592a8a*/
            v62[284] = 1; /*0x592a8d*/
            v64 = v63 - v42++ - 1; /*0x592a96*/
            v62[283] = v64; /*0x592a99*/
            *((_DWORD *)v62 + 14) = g_CellTileLookup; /*0x592aa8*/
            v62[282] = 0; /*0x592aab*/
          }
          while ( v42 < 4 ); /*0x592ab2*/
          if ( ++v57 >= a3[1] - a2[1] - (int)v76 - 5 ) /*0x592ad2*/
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
char __thiscall PlaceMapSeedCityBlockVariant(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  void *v32; // ebx
  int i; // ebx
  __int16 v34; // ax
  _BYTE *v35; // eax
  char uniqueId; // dl
  int j; // ebx
  __int16 v38; // ax
  int k; // esi
  __int16 v40; // cx
  _BYTE *v41; // eax
  char v42; // dl
  int v43; // ecx
  int m; // ebx
  __int16 v45; // ax
  int n; // esi
  _BYTE *v47; // eax
  char v48; // cl
  int v49; // edx
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
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v56, (int)a4) ) /*0x592b52*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592ba1*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592bb2*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592bd1*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x592be8*/
            v15[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592bf2*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592c5e*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592c6f*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592c8e*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = a4;
            v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x592ca5*/
            v19[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x592caf*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d08*/
          {
            if ( g_MissionQueueFrame.localVariables[163] ) /*0x592d19*/
              *(_DWORD *)(80 * ((__int16)a2 + g_MapCellWidth * SHIWORD(a2)) /*0x592d3b*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 56) = this->?;
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592d55*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592d9d*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x592db1*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592dcc*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x592e38*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x592e4c*/
            v28 = v53; /*0x592e63*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x592e67*/
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
  v32 = a4; /*0x592e8b*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2, v5, (int)a4, this->?); /*0x592e9c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 3, v4, (int)v32, this->?); /*0x592eb1*/
  for ( i = 0; i < 4; ++i ) /*0x592eb6*/
  {
    v34 = v5[1] + i; /*0x592ebf*/
    LOWORD(a4) = i + *v4; /*0x592ed0*/
    HIWORD(a4) = v34; /*0x592ed5*/
    v35 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592eda*/
    uniqueId = this->?; /*0x592edf*/
    v35[284] = 7; /*0x592ee2*/
    v35[283] = uniqueId - i - 1; /*0x592eed*/
    *((_DWORD *)v35 + 14) = g_CellTileLookup + 6; /*0x592f00*/
    v35[282] = 0; /*0x592f03*/
  }
  for ( j = 0; j < 4; ++j ) /*0x592f0c*/
  {
    v38 = *v5; /*0x592f0e*/
    for ( k = 0; k < *v4 - *v5 + j - 3; ++k ) /*0x592f22*/
    {
      v40 = v5[1] + j; /*0x592f2b*/
      LOWORD(a4) = v38 + k + 3; /*0x592f34*/
      HIWORD(a4) = v40; /*0x592f39*/
      v41 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592f43*/
      v42 = this->?; /*0x592f4c*/
      v41[284] = 4; /*0x592f4f*/
      v41[283] = v42 - j - 1; /*0x592f5a*/
      v43 = g_CellTileLookup + 3; /*0x592f66*/
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
      LOWORD(a4) = m + *v4; /*0x592fbc*/
      HIWORD(a4) = v45 + n + 3; /*0x592fc1*/
      v47 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x592fc6*/
      v48 = this->?; /*0x592fcf*/
      v47[284] = 3; /*0x592fd2*/
      v47[283] = v48 - m - 1; /*0x592fdd*/
      v49 = g_CellTileLookup + 2; /*0x592fe9*/
      v47[282] = 0; /*0x592fec*/
      *((_DWORD *)v47 + 14) = v49; /*0x592ff3*/
      v45 = v4[1]; /*0x592ff6*/
    }
  }
  return 1; /*0x593016*/
}



// ==== 0x00593030  ObjectClass::PlaceMapSeedCityBlockDiagonal  this=ObjectClass  sig=csp ====
char __thiscall PlaceMapSeedCityBlockDiagonal(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  __int16 *v10; // eax
  int v11; // esi
  __int16 *v12; // ebx
  _BYTE *v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  _BYTE *v17; // esi
  __int16 *v18; // ecx
  int v19; // esi
  __int16 *v20; // edx
  int v21; // eax
  int v22; // ebx
  _BYTE *v23; // eax
  __int16 *v24; // ecx
  __int16 *v25; // edx
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
  void *v39; // ebx
  __int16 v40; // ax
  int uniqueId; // edx
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
  int v54; // ecx
  int m; // ebx
  __int16 v56; // ax
  int n; // esi
  __int16 v58; // dx
  __int16 v59; // ax
  _BYTE *v60; // eax
  char v61; // cl
  int v62; // edx
  __int16 *v65; // [esp+14h] [ebp-28h]
  int v66; // [esp+14h] [ebp-28h]
  int v67; // [esp+18h] [ebp-24h]
  __int16 *v68; // [esp+18h] [ebp-24h]
  char *v69; // [esp+18h] [ebp-24h]
  int v70; // [esp+18h] [ebp-24h]
  int v71; // [esp+1Ch] [ebp-20h] BYREF
  __int16 *v72; // [esp+20h] [ebp-1Ch]
  int v73; // [esp+24h] [ebp-18h]
  int v74; // [esp+28h] [ebp-14h]
  int v75; // [esp+2Ch] [ebp-10h]
  __int16 *v76; // [esp+30h] [ebp-Ch]
  int v77; // [esp+38h] [ebp-4h]
  __int16 *v78; // [esp+40h] [ebp+4h]
  __int16 *v79; // [esp+40h] [ebp+4h]
  __int16 *v80; // [esp+40h] [ebp+4h]
  __int16 *v81; // [esp+40h] [ebp+4h]
  __int16 *v82; // [esp+40h] [ebp+4h]

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
  v72 = (__int16 *)(v8 - 7); /*0x59308a*/
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v71, (int)a4) ) /*0x59308e*/
    return 0; /*0x59353e*/
  v10 = v72; /*0x59309b*/
  v11 = v71; /*0x59309f*/
  v12 = v72; /*0x5930a3*/
  v75 = v71; /*0x5930a5*/
  v65 = v72; /*0x5930ac*/
  v67 = (int)v72 + 7; /*0x5930b2*/
  if ( !__OFSUB__(v72, (char *)v72 + 7) ) /*0x5930b6*/
  {
    v78 = (__int16 *)(v71 + v73); /*0x5930be*/
    do /*0x59312f*/
    {
      if ( v11 < (int)v78 ) /*0x5930c6*/
      {
        do /*0x59311a*/
        {
          LOWORD(a3) = v11; /*0x5930cc*/
          HIWORD(a3) = (_WORD)v12; /*0x5930d1*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5930d6*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x5930e7*/
            v13 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5930ff*/
            v13[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593109*/
            v12 = v65; /*0x59310f*/
          }
          ++v11; /*0x593117*/
        }
        while ( v11 < (int)v78 ); /*0x59311a*/
        v10 = v72; /*0x59311c*/
        v11 = v75; /*0x593120*/
      }
      v12 = (__int16 *)((char *)v12 + 1); /*0x593128*/
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
          HIWORD(a3) = (_WORD)v79; /*0x593162*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x59316b*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x59317c*/
            v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x593194*/
            v17[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x59319e*/
            v14 = v75; /*0x5931a4*/
          }
          ++v16; /*0x5931a8*/
          v15 = v14 + 7; /*0x5931a9*/
        }
        while ( v16 < v14 + 7 ); /*0x5931ae*/
      }
      v79 = (__int16 *)((char *)v79 + 1); /*0x5931bf*/
    }
    while ( (int)v79 < (int)((char *)v76 + v77) ); /*0x5931c5*/
  }
  v18 = (__int16 *)v4[1]; /*0x5931c7*/
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
          HIWORD(a3) = (_WORD)v18; /*0x5931eb*/
          LOWORD(a3) = v22; /*0x5931f4*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5931f9*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x59320d*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59321c*/
            v19 = v75; /*0x593224*/
            v23[283] = this->?; /*0x593228*/
          }
          v18 = v80; /*0x59322e*/
          ++v22; /*0x593232*/
          v21 = v19 + 1; /*0x593233*/
        }
        while ( v22 < v19 + 1 ); /*0x593238*/
        v20 = v68; /*0x59323a*/
      }
      v18 = (__int16 *)((char *)v18 + 1); /*0x59323e*/
      v80 = v18; /*0x593241*/
    }
    while ( (int)v18 < (int)v20 ); /*0x593245*/
  }
  v24 = (__int16 *)a2[1]; /*0x593247*/
  v25 = (__int16 *)((char *)v24 + 1); /*0x59324e*/
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
          HIWORD(a3) = (_WORD)v24; /*0x59326b*/
          LOWORD(a3) = v28; /*0x593274*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593279*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x59328d*/
            v29 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59329c*/
            v26 = v75; /*0x5932a4*/
            v29[283] = this->?; /*0x5932a8*/
          }
          v24 = v81; /*0x5932ae*/
          ++v28; /*0x5932b2*/
          v27 = v26 + 2; /*0x5932b3*/
        }
        while ( v28 < v26 + 2 ); /*0x5932b8*/
        v25 = (__int16 *)v69; /*0x5932ba*/
      }
      v24 = (__int16 *)((char *)v24 + 1); /*0x5932be*/
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
    v82 = (__int16 *)(v75 + v35); /*0x5932fc*/
    do /*0x593361*/
    {
      if ( v38 < (int)v82 ) /*0x593304*/
      {
        do /*0x593350*/
        {
          LOWORD(a3) = v38; /*0x59330a*/
          HIWORD(a3) = v36; /*0x59330f*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593314*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)this->?); /*0x593328*/
            v36 = v66; /*0x59333f*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 283) = this->?; /*0x593343*/
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
  v39 = a4; /*0x59336e*/
  v40 = a2[1] - 2; /*0x593372*/
  LOWORD(a3) = *a2; /*0x593376*/
  uniqueId = this->?; /*0x59337b*/
  HIWORD(a3) = v40; /*0x59337e*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 2, &a3, (int)a4, uniqueId); /*0x593399*/
  v42 = v4[1] - 3; /*0x5933a6*/
  LOWORD(a4) = *v4; /*0x5933aa*/
  v43 = this->?; /*0x5933af*/
  HIWORD(a4) = v42; /*0x5933b2*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 4, &a4, (int)v39, v43); /*0x5933cd*/
  for ( i = 0; i < 4; ++i ) /*0x5933d2*/
  {
    v45 = v4[1]; /*0x5933d7*/
    LOWORD(a4) = i + *a2; /*0x5933e2*/
    HIWORD(a4) = v45 - i; /*0x5933f0*/
    v46 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5933f5*/
    v47 = this->?; /*0x5933fa*/
    v46[284] = 6; /*0x5933fd*/
    v46[283] = v47 - i - 1; /*0x593408*/
    *((_DWORD *)v46 + 14) = g_CellTileLookup + 5; /*0x59341b*/
    v46[282] = 0; /*0x59341e*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593427*/
  {
    v49 = a2[1]; /*0x593429*/
    for ( k = 0; k < v49 - v4[1] + j - 3; ++k ) /*0x59343e*/
    {
      v51 = j + *a2; /*0x593448*/
      HIWORD(a4) = v49 - k - 3; /*0x59344b*/
      LOWORD(a4) = v51; /*0x59345a*/
      v52 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x59345f*/
      v53 = this->?; /*0x593468*/
      v52[284] = 3; /*0x59346b*/
      v52[283] = v53 - j - 1; /*0x593476*/
      v54 = g_CellTileLookup + 2; /*0x593482*/
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
      LOWORD(a4) = v58; /*0x5934dc*/
      HIWORD(a4) = v59; /*0x5934e1*/
      v60 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5934e6*/
      v61 = this->?; /*0x5934ef*/
      v60[284] = 2; /*0x5934f2*/
      v60[283] = v61 - m - 1; /*0x5934fd*/
      v62 = g_CellTileLookup + 1; /*0x593509*/
      v60[282] = 0; /*0x59350a*/
      *((_DWORD *)v60 + 14) = v62; /*0x593511*/
      v56 = *v4; /*0x593514*/
    }
  }
  return 1; /*0x59352f*/
}



// ==== 0x00593550  MapSeed::PlaceCityBlock2  this=MapSeed  sig=csp ====
char __thiscall MapSeed::PlaceCityBlock2(MapSeed *this, __int16 *a2, __int16 *a3, void *a4)
{
  __int16 *v4; // ebp
  int v6; // esi
  int v7; // eax
  int v9; // edx
  int v10; // ecx
  __int16 *v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // ebx
  _BYTE *v15; // esi
  int v16; // ebx
  __int16 *v17; // esi
  _BYTE *v18; // esi
  __int16 *v19; // ecx
  int v20; // esi
  __int16 *v21; // edx
  int v22; // eax
  int v23; // ebx
  _BYTE *v24; // eax
  __int16 *v25; // ecx
  int v26; // esi
  __int16 *v27; // edx
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
  void *v40; // ebx
  __int16 v41; // ax
  int MapSeed_field_0x10; // edx
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
  int v59; // ecx
  int m; // ebx
  __int16 v61; // ax
  int n; // esi
  __int16 v63; // dx
  _BYTE *v64; // eax
  char v65; // dl
  int v68; // [esp+14h] [ebp-28h]
  __int16 *v69; // [esp+14h] [ebp-28h]
  int v70; // [esp+14h] [ebp-28h]
  int v71; // [esp+18h] [ebp-24h]
  __int16 *v72; // [esp+18h] [ebp-24h]
  char *v73; // [esp+18h] [ebp-24h]
  int v74; // [esp+18h] [ebp-24h]
  int v75; // [esp+1Ch] [ebp-20h] BYREF
  __int16 *v76; // [esp+20h] [ebp-1Ch]
  int v77; // [esp+24h] [ebp-18h]
  int v78; // [esp+28h] [ebp-14h]
  __int16 v79[2]; // [esp+2Ch] [ebp-10h]
  __int16 *v80; // [esp+30h] [ebp-Ch]
  int v81; // [esp+38h] [ebp-4h]
  __int16 *v82; // [esp+40h] [ebp+4h]
  __int16 *v83; // [esp+40h] [ebp+4h]
  __int16 *v84; // [esp+40h] [ebp+4h]
  __int16 *v85; // [esp+40h] [ebp+4h]
  __int16 *v86; // [esp+40h] [ebp+4h]

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
  v76 = (__int16 *)(v9 - 7); /*0x5935ae*/
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v75, (int)a4) ) /*0x5935b2*/
    return 0; /*0x593ad9*/
  v11 = v76; /*0x5935bf*/
  v12 = v75; /*0x5935c3*/
  *(_DWORD *)v79 = v75; /*0x5935c7*/
  v82 = v76; /*0x5935cb*/
  v71 = (int)v76 + 7; /*0x5935d4*/
  if ( !__OFSUB__(v76, (char *)v76 + 7) ) /*0x5935d8*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593606*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x593617*/
            v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59362f*/
            v15[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593639*/
            v13 = v68; /*0x59363f*/
          }
          ++v14; /*0x593643*/
        }
        while ( v14 < v13 ); /*0x593646*/
        v11 = v76; /*0x593648*/
        v12 = v75; /*0x59364c*/
      }
      v82 = (__int16 *)((char *)v82 + 1); /*0x59365b*/
    }
    while ( (int)v82 < v71 ); /*0x59365f*/
  }
  v16 = v12; /*0x593665*/
  v81 = v78; /*0x593667*/
  v17 = v11; /*0x59366d*/
  *(_DWORD *)v79 = v12; /*0x593671*/
  v80 = v11; /*0x593675*/
  v69 = v11; /*0x593679*/
  if ( (int)v11 < (int)((char *)v11 + v78) ) /*0x59367d*/
  {
    v83 = (__int16 *)(v12 + 7); /*0x593682*/
    do /*0x5936f5*/
    {
      if ( v16 < (int)v83 ) /*0x59368a*/
      {
        do /*0x5936de*/
        {
          LOWORD(a3) = v16; /*0x593690*/
          HIWORD(a3) = (_WORD)v17; /*0x593695*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x59369a*/
          {
            SetLayerDataMap((__int16 *)&a3, (int)a4); /*0x5936ab*/
            v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5936c3*/
            v18[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x5936cd*/
            v17 = v69; /*0x5936d3*/
          }
          ++v16; /*0x5936db*/
        }
        while ( v16 < (int)v83 ); /*0x5936de*/
        v16 = *(_DWORD *)v79; /*0x5936e0*/
      }
      v17 = (__int16 *)((char *)v17 + 1); /*0x5936ec*/
      v69 = v17; /*0x5936f1*/
    }
    while ( (int)v17 < (int)((char *)v80 + v81) ); /*0x5936f5*/
  }
  v19 = (__int16 *)a2[1]; /*0x5936f7*/
  v20 = *a2; /*0x5936fb*/
  v21 = v19 + 1; /*0x5936fe*/
  *(_DWORD *)v79 = v20; /*0x593701*/
  v84 = v19; /*0x593707*/
  v72 = v19 + 1; /*0x59370b*/
  if ( !__OFSUB__(v19, v19 + 1) ) /*0x59370f*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593728*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x59373c*/
            v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x59374b*/
            v20 = *(_DWORD *)v79; /*0x593753*/
            v24[283] = this->MapSeed_field_0x10; /*0x593757*/
          }
          v19 = v84; /*0x59375d*/
          ++v23; /*0x593761*/
          v22 = v20 + 1; /*0x593762*/
        }
        while ( v23 < v20 + 1 ); /*0x593767*/
        v21 = v72; /*0x593769*/
      }
      v19 = (__int16 *)((char *)v19 + 1); /*0x59376d*/
      v84 = v19; /*0x593770*/
    }
    while ( (int)v19 < (int)v21 ); /*0x593774*/
  }
  v25 = (__int16 *)v4[1]; /*0x593776*/
  v26 = *v4; /*0x59377a*/
  v27 = (__int16 *)((char *)v25 + 1); /*0x59377e*/
  *(_DWORD *)v79 = v26; /*0x593781*/
  v85 = v25; /*0x593787*/
  v73 = (char *)v25 + 1; /*0x59378b*/
  if ( !__OFSUB__(v25, (char *)v25 + 1) ) /*0x59378f*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x5937a8*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x5937bc*/
            v30 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3); /*0x5937cb*/
            v26 = *(_DWORD *)v79; /*0x5937d3*/
            v30[283] = this->MapSeed_field_0x10; /*0x5937d7*/
          }
          v25 = v85; /*0x5937dd*/
          ++v29; /*0x5937e1*/
          v28 = v26 + 2; /*0x5937e2*/
        }
        while ( v29 < v26 + 2 ); /*0x5937e7*/
        v27 = (__int16 *)v73; /*0x5937e9*/
      }
      v25 = (__int16 *)((char *)v25 + 1); /*0x5937ed*/
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
    v86 = (__int16 *)(*(_DWORD *)v79 + v36); /*0x59382b*/
    do /*0x593891*/
    {
      if ( v39 < (int)v86 ) /*0x593833*/
      {
        do /*0x593880*/
        {
          CellStruct::Set((CellStruct *)&a3, v39, v37); /*0x59383b*/
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a3) ) /*0x593844*/
          {
            SetLayerDataMap((__int16 *)&a3, this->MapSeed_field_0x08); /*0x593858*/
            v37 = v70; /*0x59386f*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a3) + 283) = this->MapSeed_field_0x10; /*0x593873*/
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
  v40 = a4; /*0x59389e*/
  v41 = a2[1] - 3; /*0x5938a6*/
  LOWORD(a3) = *a2 - 2; /*0x5938aa*/
  MapSeed_field_0x10 = this->MapSeed_field_0x10; /*0x5938af*/
  HIWORD(a3) = v41; /*0x5938b2*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 5, &a3, (int)a4, MapSeed_field_0x10); /*0x5938cd*/
  v43 = a2[1] - 1; /*0x5938db*/
  LOWORD(a4) = *a2 - 1; /*0x5938dd*/
  v44 = this->MapSeed_field_0x10; /*0x5938e2*/
  HIWORD(a4) = v43; /*0x5938e5*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 6, &a4, (int)v40, v44); /*0x593900*/
  v45 = v4[1] - 2; /*0x593911*/
  LOWORD(a4) = *v4 - 3; /*0x593915*/
  v46 = this->MapSeed_field_0x10; /*0x59391a*/
  HIWORD(a4) = v45; /*0x59391d*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 8, &a4, (int)v40, v46); /*0x593938*/
  v47 = v4[1] - 1; /*0x593947*/
  LOWORD(a4) = *v4 - 1; /*0x593949*/
  v48 = this->MapSeed_field_0x10; /*0x59394e*/
  HIWORD(a4) = v47; /*0x593951*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 9, &a4, (int)v40, v48); /*0x59396c*/
  for ( i = 0; i < 4; ++i ) /*0x593971*/
  {
    v50 = a2[1]; /*0x593977*/
    LOWORD(a4) = *v4 - i; /*0x593982*/
    HIWORD(a4) = v50 - i; /*0x593990*/
    v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593995*/
    v52 = this->MapSeed_field_0x10; /*0x59399a*/
    v51[284] = 5; /*0x59399d*/
    v51[283] = v52 - i - 1; /*0x5939a8*/
    *((_DWORD *)v51 + 14) = g_CellTileLookup + 4; /*0x5939bb*/
    v51[282] = 0; /*0x5939be*/
  }
  for ( j = 0; j < 4; ++j ) /*0x5939c7*/
  {
    v54 = *a2; /*0x5939c9*/
    for ( k = 0; k < *a2 - *v4 + j - 3; ++k ) /*0x5939dd*/
    {
      v56 = a2[1] - j; /*0x5939e8*/
      LOWORD(a4) = v54 - k - 3; /*0x5939eb*/
      HIWORD(a4) = v56; /*0x5939fa*/
      v57 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x5939ff*/
      v58 = this->MapSeed_field_0x10; /*0x593a08*/
      v57[284] = 2; /*0x593a0b*/
      v57[283] = v58 - j - 1; /*0x593a16*/
      v59 = g_CellTileLookup + 1; /*0x593a22*/
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
      HIWORD(a4) = v61 - n - 3; /*0x593a6d*/
      LOWORD(a4) = v63; /*0x593a7c*/
      v64 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593a81*/
      v65 = this->MapSeed_field_0x10; /*0x593a8a*/
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
char __thiscall PlaceMapSeedCityBlockVariant2(ObjectClass *this, __int16 *a2, __int16 *a3, void *a4)
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
  void *v33; // ebx
  __int16 v34; // dx
  __int16 v35; // cx
  int i; // ebx
  __int16 v37; // dx
  _BYTE *v38; // eax
  char uniqueId; // cl
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
  int v50; // edx
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
  if ( !(unsigned __int8)BuildingTypeClass::CheckPlacementArea((BuildingTypeClass *)this, &v59, (int)a4) ) /*0x593b52*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593ba0*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)a4); /*0x593bb1*/
            v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593bc9*/
            v14[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593bd3*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593c35*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)a4); /*0x593c46*/
            v54 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593c5e*/
            v54[283] = *(_BYTE *)(List::FindByValue((List *)a4) + 16); /*0x593c6e*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593cbc*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593cd0*/
            v23 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x593cdf*/
            v19 = v63; /*0x593ce7*/
            v23[283] = this->?; /*0x593ceb*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593d36*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593d4a*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x593d65*/
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
          if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)&a2) ) /*0x593dcf*/
          {
            SetLayerDataMap((__int16 *)&a2, (int)this->?); /*0x593de3*/
            v29 = v55; /*0x593dfa*/
            *((_BYTE *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2) + 283) = this->?; /*0x593dfe*/
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
  v33 = a4; /*0x593e2a*/
  v34 = *v4 - 3; /*0x593e2e*/
  HIWORD(a2) = v4[1]; /*0x593e32*/
  LOWORD(a2) = v34; /*0x593e3c*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 7, &a2, (int)a4, this->?); /*0x593e55*/
  v35 = *v5 - 2; /*0x593e61*/
  HIWORD(a4) = v5[1]; /*0x593e65*/
  LOWORD(a4) = v35; /*0x593e6a*/
  PlaceMapSeedClassBuildings(g_TerrainTypeTable2 + 1, &a4, (int)v33, this->?); /*0x593e88*/
  for ( i = 0; i < 4; ++i ) /*0x593e8d*/
  {
    v37 = v5[1] + i; /*0x593e96*/
    LOWORD(a4) = *v4 - i; /*0x593ea1*/
    HIWORD(a4) = v37; /*0x593eac*/
    v38 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593eb1*/
    uniqueId = this->?; /*0x593eb6*/
    v38[284] = 8; /*0x593eb9*/
    v38[283] = uniqueId - i - 1; /*0x593ec4*/
    *((_DWORD *)v38 + 14) = g_CellTileLookup + 7; /*0x593ed7*/
    v38[282] = 0; /*0x593eda*/
  }
  for ( j = 0; j < 4; ++j ) /*0x593ee3*/
  {
    v41 = v4[1]; /*0x593ee5*/
    for ( k = 0; k < v5[1] - v41 + j - 3; v41 = v4[1] ) /*0x593efa*/
    {
      LOWORD(a4) = *v4 - j; /*0x593f11*/
      HIWORD(a4) = v41 + k + 3; /*0x593f16*/
      v43 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593f1b*/
      v44 = this->?; /*0x593f24*/
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
      LOWORD(a4) = v46 - n - 3; /*0x593f86*/
      HIWORD(a4) = v5[1] + m; /*0x593f97*/
      v48 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a4); /*0x593f9c*/
      v49 = this->?; /*0x593fa5*/
      v48[284] = 4; /*0x593fa8*/
      v48[283] = v49 - m - 1; /*0x593fb3*/
      v50 = g_CellTileLookup + 3; /*0x593fbf*/
      v48[282] = 0; /*0x593fc2*/
      *((_DWORD *)v48 + 14) = v50; /*0x593fc9*/
      v46 = *v5; /*0x593fcc*/
    }
  }
  return 1; /*0x593feb*/
}



// ==== 0x00594010  BuildingTypeClass::CheckPlacementArea  this=BuildingTypeClass  sig=csp ====
int __thiscall BuildingTypeClass::CheckPlacementArea(BuildingTypeClass *this, _WORD *a2, int a3)
{
  _WORD *v3; // edi
  __int16 v4; // ax
  int result; // eax
  __int16 v6; // ax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  int v12; // ebp
  int v13; // esi
  Cell *v14; // eax

  v3 = a2; /*0x594015*/
  v4 = *a2; /*0x594027*/
  HIWORD(a2) = a2[2]; /*0x59402a*/
  LOWORD(a2) = v4; /*0x594035*/
  result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59403a*/
  if ( (_BYTE)result )
  {
    v6 = v3[2]; /*0x594052*/
    LOWORD(a2) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x59405a*/
    HIWORD(a2) = v6; /*0x594065*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59406a*/
    if ( (_BYTE)result )
    {
      v7 = *((_DWORD *)v3 + 1); /*0x59407a*/
      v8 = *((_DWORD *)v3 + 3); /*0x59407d*/
      LOWORD(a2) = *v3; /*0x594080*/
      HIWORD(a2) = v7 + v8 - 1; /*0x594095*/
      result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x59409a*/
      if ( (_BYTE)result )
      {
        v9 = *((_DWORD *)v3 + 1); /*0x5940b2*/
        v10 = *((_DWORD *)v3 + 3); /*0x5940b5*/
        LOWORD(a2) = *((_DWORD *)v3 + 2) + *(_DWORD *)v3 - 1; /*0x5940b8*/
        HIWORD(a2) = v9 + v10 - 1; /*0x5940cb*/
        result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2, 1); /*0x5940d0*/
        if ( (_BYTE)result )
        {
          v11 = *((_DWORD *)v3 + 1); /*0x5940dd*/
          if ( v11 >= *((_DWORD *)v3 + 3) + v11 ) /*0x5940e9*/
          {
LABEL_16:
            LOBYTE(result) = 1; /*0x594170*/
            return result; /*0x594177*/
          }
          v12 = a3; /*0x5940ef*/
          while ( 1 ) /*0x5940f3*/
          {
            v13 = *(_DWORD *)v3; /*0x5940f3*/
            result = *(_DWORD *)v3 + *((_DWORD *)v3 + 2); /*0x5940f8*/
            if ( *(_DWORD *)v3 < result ) /*0x5940fc*/
              break; /*0x5940fc*/
LABEL_15:
            if ( ++v11 >= *((_DWORD *)v3 + 3) + *((_DWORD *)v3 + 1) ) /*0x59416e*/
              goto LABEL_16; /*0x59416e*/
          }
          while ( 1 )
          {
            LOWORD(a2) = v13; /*0x594104*/
            HIWORD(a2) = v11; /*0x59410b*/
            result = g_MissionQueueFrame.localVariables[163]
                   ? *(_DWORD *)(80 * ((__int16)v13 + g_MapCellWidth * (__int16)v11)
                               + g_MissionQueueFrame.localVariables[163]
                               + 56)
                   : -1;
            if ( (void *)result != this->? && result != v12 ) /*0x59413b*/
              break; /*0x59413b*/
            v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)&a2); /*0x594147*/
            result = Cell::IsEmpty(v14); /*0x59414e*/
            if ( !(_BYTE)result ) /*0x594155*/
              break; /*0x594155*/
            ++v13; /*0x59415c*/
            result = *(_DWORD *)v3 + *((_DWORD *)v3 + 2); /*0x59415d*/
            if ( v13 >= result ) /*0x594161*/
              goto LABEL_15; /*0x594161*/
          }
        }
      }
    }
  }
  LOBYTE(result) = 0; /*0x59417d*/
  return result; /*0x594170*/
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
    v5 = dword_ABED04; /*0x5941ad*/
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
            if ( (__int16)v6 - v7 >= v5 || v7 - (__int16)v6 >= v5 || v8 > dword_ABED08 ) /*0x594202*/
            {
              v2 = a1; /*0x5942af*/
            }
            else
            {
              if ( dword_ABED10 ) /*0x594210*/
              {
                v7 = (__int16)v3; /*0x594215*/
                v9 = a2; /*0x59421e*/
                *((_DWORD *)dword_ABED10 + 20 * (__int16)v6 + 20 * g_MapCellWidth * (__int16)v3 + 14) = a2; /*0x59422a*/
              }
              else
              {
                v9 = a2; /*0x594230*/
              }
              v10 = CellCoord::To_CellObj(&dword_87F7E8, v15); /*0x59423e*/
              v11 = 0; /*0x594249*/
              if ( dword_ABDFA0 <= 0 ) /*0x59424d*/
              {
                v2 = a1; /*0x594298*/
LABEL_19:
                v10[283] = MEMORY[0x10]; /*0x59429c*/
                v5 = dword_ABED04; /*0x5942a7*/
              }
              else
              {
                v12 = (char *)dword_ABDF94; /*0x59424f*/
                while ( *(_DWORD *)(*(_DWORD *)v12 + 8) != v9 ) /*0x59425a*/
                {
                  ++v11; /*0x59425c*/
                  v12 += 4; /*0x59425d*/
                  if ( v11 >= dword_ABDFA0 ) /*0x594262*/
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
                v10[283] = *(_BYTE *)(*((_DWORD *)dword_ABDF94 + v11) + 16); /*0x59428a*/
                v5 = dword_ABED04; /*0x594290*/
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
int __thiscall sub_5942F0(ObjectClass *this, int *a2)
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
  ObjectClass *v12; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x5942f5*/
  v12 = this; /*0x5942f9*/
  v3 = a2[1]; /*0x5942fd*/
  result = v3 + a2[3]; /*0x594303*/
  v10 = v3; /*0x594305*/
  if ( v3 < result ) /*0x59430b*/
  {
    v5 = g_MissionQueueFrame.localVariables[160]; /*0x594311*/
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
            if ( (__int16)v6 - v7 < v5 && v7 - (__int16)v6 < v5 && v8 <= g_MissionQueueFrame.localVariables[161] ) /*0x594356*/
            {
              if ( g_MissionQueueFrame.localVariables[163] ) /*0x594360*/
                *(_DWORD *)(80 * ((__int16)v6 + g_MapCellWidth * v7) + g_MissionQueueFrame.localVariables[163] + 56) = v12->?; /*0x59437a*/
              v9 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11); /*0x594388*/
              v9[283] = v12->?; /*0x594394*/
              v5 = g_MissionQueueFrame.localVariables[160]; /*0x59439a*/
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
int __thiscall List::FindByValue(List *this)
{
  int v1; // eax
  int i; // edx

  v1 = 0; /*0x5943e8*/
  if ( g_MissionQueueFrame.briefing[342] <= 0 ) /*0x5943ed*/
    return 0; /*0x594406*/
  for ( i = g_MissionQueueFrame.briefing[339]; *(List **)(*(_DWORD *)i + 8) != this; i += 4 ) /*0x5943f5*/
  {
    if ( ++v1 >= g_MissionQueueFrame.briefing[342] ) /*0x594404*/
      return 0; /*0x594404*/
  }
  return *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v1); /*0x594406*/
}



// ==== 0x00594420  FloodFillRandomMapTerrain  this=-  sig=csp ====
void __fastcall FloodFillRandomMapTerrain(int a1, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // ebx
  int v19; // eax
  __int16 *v20; // eax
  int v21; // edx
  int v22; // ecx
  __int16 *v23; // esi
  char *v24; // edi
  int v25; // eax
  int v26; // [esp+10h] [ebp-30h]
  _DWORD *v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+18h] [ebp-28h]
  int v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h] BYREF
  int v31; // [esp+24h] [ebp-1Ch]
  void **v32; // [esp+28h] [ebp-18h] BYREF
  void *Block; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  char v35; // [esp+35h] [ebp-Bh]
  int v36; // [esp+38h] [ebp-8h]
  int v37; // [esp+3Ch] [ebp-4h]

  v31 = a2; /*0x594426*/
  v4 = __2_YAPAXI_Z(0x50u); /*0x59442e*/
  if ( v4 ) /*0x594438*/
    v5 = RandomMap::TerrainTileDataConstructor(v4, *(_DWORD *)(a1 + 36)); /*0x594445*/
  else
    v5 = 0; /*0x594449*/
  v6 = v5[2]; /*0x59444b*/
  v27 = v5; /*0x594456*/
  v29 = v6; /*0x59445a*/
  VectorClass::CellConstructor(&v32, 0, 0); /*0x59445e*/
  v7 = *(__int16 *)(a1 + 36) + g_MapCellWidth * *(__int16 *)(a1 + 38); /*0x594478*/
  v32 = &DynamicVectorClass<Cell>::`vftable'; /*0x59447a*/
  v36 = 0; /*0x594482*/
  v37 = 20000; /*0x59448d*/
  *((_DWORD *)dword_ABED10 + 20 * v7 + 15) = v6; /*0x594498*/
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
      *((_DWORD *)dword_ABED10 + 20 * (__int16)v13 + 20 * g_MapCellWidth * SHIWORD(v13) + 14) = v6; /*0x59454a*/
      ++v5[3]; /*0x594552*/
      v14 = v5[12]; /*0x594555*/
      if ( v5[14] < v14 /*0x594578*/
        || (*((_BYTE *)v5 + 53) || !v14)
        && (v15 = v5[15], v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(v5[10] + 8))(v5 + 10, v14 + v15, 0) )
      {
        v16 = v5[14]; /*0x59457f*/
        v17 = v5[11]; /*0x594582*/
        v5[14] = v16 + 1; /*0x594588*/
        *(_DWORD *)(v17 + 4 * v16) = v13; /*0x59458b*/
      }
      v18 = 0; /*0x59458e*/
      while ( 1 ) /*0x594598*/
      {
        v19 = v18 & 7; /*0x594598*/
        LOWORD(v28) = v13 + LOWORD(dword_89F688[v19]); /*0x5945ba*/
        HIWORD(v28) = HIWORD(v26) + HIWORD(dword_89F688[v19]); /*0x5945c3*/
        v30 = v28; /*0x5945d2*/
        v20 = (__int16 *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30); /*0x5945d6*/
        v21 = v20[18]; /*0x5945db*/
        v22 = v20[19]; /*0x5945df*/
        v23 = v20 + 18; /*0x5945e3*/
        if ( v21 + v22 > dword_ABED04 /*0x59461d*/
          && v21 - v22 < dword_ABED04
          && v22 - v21 < dword_ABED04
          && v21 + v22 <= dword_ABED08 )
        {
          v24 = (char *)dword_ABED10 + 80 * v20[18] + 80 * g_MapCellWidth * v20[19]; /*0x594642*/
          if ( !*((_DWORD *)v20 + 19) /*0x594664*/
            && MapClass::GetTileIndex(&dword_87F7E8, v23, v31, 0) == a3
            && *((_DWORD *)v24 + 15) == -1 )
          {
            *((_DWORD *)v24 + 15) = v29; /*0x59466a*/
            if ( v36 < v34 /*0x594698*/
              || (v35 || !v34)
              && v37 > 0
              && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v32[2])(&v32, v37 + v34, 0) )
            {
              v25 = v36++; /*0x5946a7*/
              *((_DWORD *)Block + v25) = *(_DWORD *)v23; /*0x5946b0*/
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
  v32 = &VectorClass<Cell>::`vftable'; /*0x5946d2*/
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
  if ( dword_ABED10 ) /*0x594718*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x594720*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x594725*/
    {
      v3 = 0; /*0x594727*/
      do /*0x594741*/
      {
        v3 += 80; /*0x59472f*/
        --v2; /*0x594732*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 24) = -1; /*0x594733*/
        *(_DWORD *)((char *)dword_ABED10 + v3 - 20) = -1; /*0x59473d*/
      }
      while ( v2 ); /*0x594741*/
    }
  }
  for ( i = dword_ABDFA0 - 1; i >= 0; --i ) /*0x59474d*/
  {
    v5 = (_DWORD *)*((_DWORD *)dword_ABDF94 + i); /*0x594755*/
    if ( v5 ) /*0x59475a*/
    {
      if ( *v5 ) /*0x59475c*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v5)(*v5, 1); /*0x594766*/
        *v5 = 0; /*0x594768*/
      }
      v13 = v5; /*0x59477e*/
      v6 = (*(int (__thiscall **)(int *, _DWORD **))(dword_ABDF90 + 16))(&dword_ABDF90, &v13); /*0x594782*/
      if ( v6 != -1 ) /*0x594787*/
        Vector4::EraseAt(&dword_ABDF90, v6); /*0x59478f*/
      v5[10] = &VectorClass<Cell>::`vftable'; /*0x594797*/
      Buffer::Cleanup((int)(v5 + 10)); /*0x59479d*/
      __3_YAXPAX_Z(v5); /*0x5947a3*/
    }
  }
  dword_ABED14 = 0; /*0x5947b3*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x5947bd*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x5947c7*/
  for ( j = result; result; j = result ) /*0x5947d0*/
  {
    v9 = *(__int16 *)(j + 36); /*0x5947d7*/
    v10 = *(__int16 *)(j + 38); /*0x5947db*/
    if ( v10 + v9 > dword_ABED04 /*0x594828*/
      && v9 - v10 < dword_ABED04
      && v10 - v9 < dword_ABED04
      && v10 + v9 <= dword_ABED08
      && *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(j + 36) + 20 * g_MapCellWidth * *(__int16 *)(j + 38) + 14) == -1
      && !*(_DWORD *)(j + 76) )
    {
      v11 = v14; /*0x59482f*/
      TileIndex = MapClass::GetTileIndex(&dword_87F7E8, (__int16 *)(j + 36), v14, 0); /*0x59483c*/
      if ( TileIndex == v15 ) /*0x594847*/
        FloodFillRandomMapTerrain(j, v11, v15); /*0x59484e*/
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x594858*/
  }
  return result; /*0x594868*/
}



// ==== 0x00594870  ObjectClass::PlaceRandomWaypoints  this=ObjectClass  sig=csp ====
void __thiscall PlaceRandomWaypoints(ObjectClass *this, int a2)
{
  unsigned int v3; // eax
  void *NeedsSaveOrLink; // ecx
  int i; // edi
  char *v6; // esi
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int j; // eax
  int v11; // esi
  int v12; // ebp
  __int16 *Waypoint_Location; // eax
  _DWORD *v14; // eax
  int k; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  void *Items; // eax
  __int16 v20[2]; // [esp+10h] [ebp-5Ch] BYREF
  __int64 v21; // [esp+14h] [ebp-58h]
  __int64 attachedBomb; // [esp+1Ch] [ebp-50h]
  __int64 v23; // [esp+24h] [ebp-48h]
  double v24; // [esp+2Ch] [ebp-40h]
  int v25[4]; // [esp+34h] [ebp-38h] BYREF
  _DWORD v26[4]; // [esp+44h] [ebp-28h] BYREF
  VectorClass v27; // [esp+54h] [ebp-18h] BYREF
  int v28; // [esp+64h] [ebp-8h]
  int v29; // [esp+68h] [ebp-4h]

  v26[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672] + 4; /*0x594898*/
  v26[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668] + 4; /*0x5948a8*/
  v26[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676] - 8; /*0x5948ac*/
  v26[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680] - 8; /*0x5948b0*/
  VectorClass::CellConstructor(&v27, 0, 0); /*0x5948b4*/
  v27.ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x5948b9*/
  v29 = 10; /*0x5948c1*/
  v28 = 0; /*0x5948c9*/
  do /*0x5948f1*/
  {
    v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x5948d7*/
    LOWORD(v3) = Math::RoundToInt((double)v21 * 6.984919311242392e-10); /*0x5948e9*/
  }
  while ( v3 > 2 ); /*0x5948f1*/
  NeedsSaveOrLink = this->?; /*0x5948f3*/
  LODWORD(v21) = 0; /*0x5948f6*/
  for ( i = v3 + 12 * (_DWORD)NeedsSaveOrLink + 3 * (_DWORD)NeedsSaveOrLink; v28 < i; LODWORD(v21) = v21 + 1 ) /*0x59490a*/
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
    *(_DWORD *)v20 = *(_DWORD *)(this->fallRate + 4 * v7); /*0x594967*/
    v25[0] = v20[0] - 3; /*0x594979*/
    v25[1] = v20[1] - 3; /*0x59497d*/
    v25[2] = 6; /*0x59498a*/
    v25[3] = 6; /*0x59498e*/
    if ( (unsigned __int8)IsAreaClearMap(v25, 0, 0) /*0x5949e1*/
      && Math_Helper((ObjectClass *)&stru_87F5F0.__pad_58[416], v26, v20, 1)
      && (v28 < v27.Capacity
       || (v27.IsAllocated || !v27.Capacity)
       && v29 > 0
       && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v27.ptr_0 + 2))(&v27, v29 + v27.Capacity, 0)) )
    {
      v8 = v28++; /*0x5949f0*/
      *((_DWORD *)v27.Items + v8) = *(_DWORD *)v20; /*0x5949fb*/
    }
  }
  v9 = BuildingPlacement::SelectBuildingPlacementCells((BuildingPlacement *)this, (int)&v27); /*0x594a1f*/
  if ( v9 ) /*0x594a23*/
  {
    for ( j = 4544; j < 4576; j += 4 ) /*0x594a58*/
      *(void **)((char *)&dword_A8B230->ptr_0 + j) = *(void **)&g_MissionQueueFrame.globalVariables[128]; /*0x594a69*/
    v11 = 0; /*0x594a79*/
    if ( (int)this->? > 0 ) /*0x594a7d*/
    {
      v12 = a2; /*0x594a7f*/
      do /*0x594add*/
      {
        ScenarioClass::Set_Waypoint((char *)dword_A8B230, v12, *(_DWORD *)(v9[1] + 4 * v11)); /*0x594a91*/
        Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &a2, v12); /*0x594aa2*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x594aad*/
        ++v11; /*0x594ac0*/
        v14[80] |= 4u; /*0x594ac1*/
        ++v12; /*0x594acc*/
        *((_DWORD *)&dword_A8B230[126].ptr_4 + v11) = *(_DWORD *)(v9[1] + 4 * v11 - 4); /*0x594ad1*/
      }
      while ( v11 < (int)this->? ); /*0x594add*/
    }
    for ( k = 0; k < (int)this->?; ++k ) /*0x594ae8*/
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
    if ( this->AbstractClass ) /*0x594b17*/
      (**(void (__thiscall ***)(void *, int))this->AbstractClass)(this->AbstractClass, 1); /*0x594b21*/
    Items = v27.Items; /*0x594b23*/
    this->AbstractClass = v9; /*0x594b27*/
    v27.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x594b2b*/
    if ( Items && v27.IsAllocated ) /*0x594b3b*/
      __3_YAXPAX_Z(Items); /*0x594b3e*/
  }
  else
  {
    v27.ptr_0 = &VectorClass<Cell>::`vftable'; /*0x594a29*/
    if ( v27.Items ) /*0x594a33*/
    {
      if ( v27.IsAllocated ) /*0x594a3f*/
        __3_YAXPAX_Z(v27.Items); /*0x594a46*/
    }
  }
}



// ==== 0x00594B50  ObjectClass::DistributeRandomMapTerrain  this=ObjectClass  sig=csp ====
char DistributeRandomMapTerrain(ObjectClass *this)
{
  double v1; // st7
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // ebp
  int i; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  TileNode *v10; // ecx
  void *v11; // esi
  int j; // edi
  int v13; // esi
  _DWORD *v14; // ebp
  int v15; // eax
  size_t v16; // eax
  signed int k; // edi
  _DWORD *v18; // esi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int *v22; // ecx
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // ebp
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int n; // esi
  int ii; // esi
  ObjectClass *v34; // [esp+0h] [ebp-64h]
  ObjectClass *v35; // [esp+0h] [ebp-64h]
  int v36; // [esp+10h] [ebp-54h]
  __int64 m; // [esp+14h] [ebp-50h]
  int v38; // [esp+18h] [ebp-4Ch]
  void *Base; // [esp+24h] [ebp-40h] BYREF
  size_t NumOfElements; // [esp+28h] [ebp-3Ch]
  signed int v41; // [esp+2Ch] [ebp-38h]
  char v42; // [esp+30h] [ebp-34h]
  int v43; // [esp+34h] [ebp-30h]
  int v44[5]; // [esp+38h] [ebp-2Ch]
  _VectorClass_PAVMapRegionClass v45; // [esp+4Ch] [ebp-18h] BYREF
  int v46; // [esp+60h] [ebp-4h]

  v44[0] = 5; /*0x594b60*/
  v44[1] = 5; /*0x594b6a*/
  v44[2] = 5; /*0x594b6e*/
  v44[3] = 0; /*0x594b76*/
  v44[4] = 0; /*0x594b7a*/
  v1 = (double)g_MissionQueueFrame.briefing[453] * (double)g_MissionQueueFrame.briefing[452] * 0.03; /*0x594b7e*/
  if ( v1 < 400.0 ) /*0x594b91*/
    v1 = 400.0; /*0x594b95*/
  LOWORD(v2) = Math::RoundToInt(v1); /*0x594b9b*/
  v38 = v2; /*0x594ba5*/
  v3 = Terrain::ConnectivityGraph((Terrain *)&stru_87F5F0.__pad_58[416]); /*0x594ba9*/
  HIWORD(v5) = 0; /*0x594bb4*/
  v4 = v44[g_MissionQueueFrame.briefing[371]]; /*0x594bb6*/
  LOWORD(v5) = *(_WORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[4 * v4 + 440] + 2 * v3); /*0x594bc1*/
  Map_Helper_58CE90(v34); /*0x594bc5*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x594bcf*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x594be2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)MapSeed::IsCellInBounds((MapSeed *)(i + 36)) /*0x594c2b*/
      && *(_DWORD *)(80 * (*(__int16 *)(i + 36) + g_MapCellWidth * *(__int16 *)(i + 38))
                   + g_MissionQueueFrame.localVariables[163]
                   + 56) == -1
      && !*(_DWORD *)(i + 76)
      && MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], (__int16 *)(i + 36), v4, 0) == v5 )
    {
      FloodFillRandomMapTerrain(i, v4, v5); /*0x594c32*/
    }
  }
  v7 = g_MissionQueueFrame.briefing[342]; /*0x594c4f*/
  v8 = g_MissionQueueFrame.briefing[342] - 1; /*0x594c51*/
  if ( g_MissionQueueFrame.briefing[342] - 1 >= 0 ) /*0x594c54*/
  {
    v9 = g_MissionQueueFrame.briefing[339]; /*0x594c56*/
    do /*0x594c81*/
    {
      v10 = *(TileNode **)(v9 + 4 * v8); /*0x594c5b*/
      if ( *(_DWORD *)&v10[3] < v38 ) /*0x594c65*/
      {
        v11 = *(void **)(v9 + 4 * v8); /*0x594c67*/
        if ( v10 ) /*0x594c6b*/
        {
          TileNode::Cleanup(v10); /*0x594c6d*/
          __3_YAXPAX_Z(v11); /*0x594c73*/
          v9 = g_MissionQueueFrame.briefing[339]; /*0x594c78*/
        }
      }
      --v8; /*0x594c80*/
    }
    while ( v8 >= 0 ); /*0x594c81*/
  }
  TileSystem::Constructor((TileSystem *)&v45, 0, 0); /*0x594c89*/
  *(_DWORD *)v45.__pad_0 = &off_7ED858; /*0x594c92*/
  v46 = 10; /*0x594c9a*/
  Base = 0; /*0x594ca2*/
  NumOfElements = 0; /*0x594ca6*/
  v41 = 0; /*0x594caa*/
  v42 = 0; /*0x594cae*/
  v43 = 0; /*0x594cb3*/
  *(_DWORD *)v45.__tail_10 = 0; /*0x594cb7*/
  VectorClass_ptr_MapRegionClass::Remove(&v45); /*0x594cbb*/
  for ( j = 0; j < g_MissionQueueFrame.briefing[342]; ++j ) /*0x594cc9*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j) + 8) /*0x594ce8*/
        + v7 * (500000 - *(_DWORD *)(*(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j) + 12));
    v14 = (_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * j); /*0x594cea*/
    v15 = v41; /*0x594cf0*/
    if ( (int)(NumOfElements + 1) > v41 ) /*0x594cf6*/
    {
      if ( !v41 ) /*0x594cfa*/
        v15 = 10; /*0x594cfc*/
      if ( !Map_Helper_5AD930((int)&Base, v15) ) /*0x594d06*/
        continue; /*0x594d06*/
    }
    *((_DWORD *)Base + 2 * NumOfElements) = v13; /*0x594d17*/
    *((_DWORD *)Base + 2 * NumOfElements + 1) = *v14; /*0x594d25*/
    v42 = 0; /*0x594d2e*/
    ++NumOfElements; /*0x594d33*/
  }
  v16 = NumOfElements; /*0x594d43*/
  for ( k = 0; k < (int)NumOfElements; ++k ) /*0x594d4b*/
  {
    if ( !v42 ) /*0x594d53*/
    {
      qsort(Base, v16, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_5AD9C0); /*0x594d62*/
      v43 = 0; /*0x594d6a*/
      v42 = 1; /*0x594d6e*/
    }
    v18 = (char *)Base + 8 * k + 4; /*0x594d81*/
    if ( *(int *)v45.__tail_10 < v45.m_8 /*0x594da7*/
      || (BYTE1(v45.m_C) || !v45.m_8)
      && v46 > 0
      && (*(unsigned __int8 (__thiscall **)(_VectorClass_PAVMapRegionClass *, int, _DWORD))(*(_DWORD *)v45.__pad_0 + 8))(
           &v45,
           v46 + v45.m_8,
           0) )
    {
      v19 = (*(_DWORD *)v45.__tail_10)++; /*0x594db6*/
      *(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * v19) = *v18; /*0x594dbf*/
    }
    v16 = NumOfElements; /*0x594dc2*/
  }
  v20 = *(_DWORD *)v45.__tail_10; /*0x594dcb*/
  v21 = 0; /*0x594dcf*/
  v36 = 0; /*0x594dd3*/
  if ( *(int *)v45.__tail_10 > 0 ) /*0x594dd7*/
  {
    v22 = *(int **)&v45.m_1[3]; /*0x594dd9*/
    v23 = *(_DWORD *)v45.__tail_10; /*0x594ddd*/
    do /*0x594dea*/
    {
      v24 = *v22++; /*0x594ddf*/
      v21 += *(_DWORD *)(v24 + 12); /*0x594de7*/
      --v23; /*0x594de9*/
    }
    while ( v23 ); /*0x594dea*/
    v36 = v21; /*0x594dec*/
  }
  v25 = 0; /*0x594df6*/
  v26 = 0; /*0x594df8*/
  v27 = 0; /*0x594dfa*/
  for ( m = (unsigned int)g_MissionQueueFrame.briefing[376]; v27 < *(int *)v45.__tail_10; HIDWORD(m) = v26 ) /*0x594e06*/
  {
    v28 = *(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * v27); /*0x594e0c*/
    v25 += *(_DWORD *)(v28 + 12); /*0x594e12*/
    if ( v27 == v20 - 1 ) /*0x594e1b*/
      v29 = m - v26; /*0x594e21*/
    else
      LOWORD(v29) = Math::RoundToInt((double)v25 / (double)v36 * (double)(int)m + 0.5 - (double)SHIDWORD(m)); /*0x594e3b*/
    *(_DWORD *)(v28 + 32) = v29; /*0x594e40*/
    v26 += v29; /*0x594e43*/
    v20 = *(_DWORD *)v45.__tail_10; /*0x594e45*/
    ++v27; /*0x594e49*/
  }
  v30 = 0; /*0x594e56*/
  for ( n = 0; n < *(int *)v45.__tail_10; ++n ) /*0x594e5c*/
  {
    PlaceRandomWaypoints(*(ObjectClass **)(*(_DWORD *)&v45.m_1[3] + 4 * n), v30); /*0x594e66*/
    v30 += *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * n) + 32); /*0x594e79*/
  }
  if ( !g_MissionQueueFrame.briefing[371] ) /*0x594e87*/
  {
    for ( ii = 0; ii < *(int *)v45.__tail_10; ++ii ) /*0x594e91*/
    {
      if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v45.m_1[3] + 4 * ii) + 32) /*0x594ecc*/
        && (double)(unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552])
         * 2.328306437080797e-10 < 0.5 )
      {
        PlaceNeutralBuilding(*(ObjectClass **)(*(_DWORD *)&v45.m_1[3] + 4 * ii)); /*0x594ed5*/
      }
    }
  }
  ComputeMapCameraBounds(v35); /*0x594ee3*/
  __3_YAXPAX_Z(Base); /*0x594eed*/
  *(_DWORD *)v45.__pad_0 = &VectorClass<MapRegionClass *>::`vftable'; /*0x594efb*/
  Base = 0; /*0x594f08*/
  NumOfElements = 0; /*0x594f0c*/
  v41 = 0; /*0x594f10*/
  v42 = 0; /*0x594f14*/
  v43 = 0; /*0x594f18*/
  if ( *(_DWORD *)&v45.m_1[3] && BYTE1(v45.m_C) ) /*0x594f25*/
    __3_YAXPAX_Z(*(void **)&v45.m_1[3]); /*0x594f28*/
  return 1; /*0x594f03*/
}



// ==== 0x00594F40  BuildingPlacement::SelectBuildingPlacementCells  this=DynamicVector  sig=csp ====
_DWORD *__thiscall BuildingPlacement::SelectBuildingPlacementCells(BuildingPlacement *this, int a2)
{
  double v2; // st7
  int BuildingPlacement_field_0x20; // esi
  int v4; // eax
  int v5; // ebx
  VectorClass *v7; // eax
  VectorClass *v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // esi
  _DWORD *v15; // ebx
  int Capacity; // eax
  int Items; // ecx
  void *ptr_0; // eax
  _DWORD *v19; // edx
  int v20; // edx
  int v21; // eax
  _DWORD *v22; // ebx
  int v23; // ecx
  void *v24; // eax
  _DWORD *v25; // edx
  int v26; // ecx
  int v27; // ebx
  int v28; // esi
  int v31; // eax
  int v32; // ecx
  void *v33; // eax
  _DWORD *v34; // edx
  double v35; // [esp+0h] [ebp-48h]
  double v36; // [esp+0h] [ebp-48h]
  int v37; // [esp+14h] [ebp-34h]
  int v38; // [esp+14h] [ebp-34h]
  VectorClass *v39; // [esp+18h] [ebp-30h]
  int v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+20h] [ebp-28h]
  int v43; // [esp+20h] [ebp-28h]
  double v44; // [esp+20h] [ebp-28h]
  int v45; // [esp+2Ch] [ebp-1Ch]
  int v46; // [esp+2Ch] [ebp-1Ch]
  int v47; // [esp+2Ch] [ebp-1Ch]
  int v48; // [esp+30h] [ebp-18h]
  int v49; // [esp+30h] [ebp-18h]
  int v50; // [esp+34h] [ebp-14h]
  int v51; // [esp+34h] [ebp-14h]
  int v52; // [esp+38h] [ebp-10h]
  int v53; // [esp+38h] [ebp-10h]
  int v54; // [esp+38h] [ebp-10h]
  int v55; // [esp+38h] [ebp-10h]
  int v56; // [esp+3Ch] [ebp-Ch]
  _DWORD *v57; // [esp+3Ch] [ebp-Ch]
  double v58; // [esp+40h] [ebp-8h]
  unsigned __int64 v59; // [esp+40h] [ebp-8h]

  __asm { fild dword_ABE030 } /*0x594f49*/
  BuildingPlacement_field_0x20 = this->BuildingPlacement_field_0x20; /*0x594f51*/
  __asm { fmul ds:dbl_7E3808 } /*0x594f55*/
  v45 = BuildingPlacement_field_0x20; /*0x594f5b*/
  v58 = -1.0; /*0x594f5f*/
  v48 = -1; /*0x594f6f*/
  __asm /*0x594f77*/
  {
    fmul ds:dbl_7ED8D8
    fidiv dword_ABE028
    fadd ds:dbl_7E1708
    fimul [esp+40h+var_1C]
  }
  LOWORD(v4) = Math::RoundToInt(v2); /*0x594f8d*/
  v5 = a2; /*0x594f92*/
  v40 = v4; /*0x594f99*/
  if ( !BuildingPlacement_field_0x20 && *(int *)(a2 + 16) > 0 ) /*0x594fa4*/
  {
    v40 = *(_DWORD *)(a2 + 16); /*0x594fa6*/
    v4 = v40; /*0x594faa*/
  }
  if ( v4 > *(_DWORD *)(a2 + 16) || !v4 ) /*0x594fb5*/
  {
    if ( !BuildingPlacement_field_0x20 ) /*0x594fb9*/
      return 0; /*0x594fc3*/
    v40 = *(_DWORD *)(a2 + 16); /*0x594fc6*/
  }
  v7 = (VectorClass *)__2_YAPAXI_Z(0x18u); /*0x594fcc*/
  v8 = v7; /*0x594fd1*/
  if ( v7 ) /*0x594fd8*/
  {
    VectorClass::CellConstructor(v7, 0, 0); /*0x594fde*/
    v8->ptr_0 = &DynamicVectorClass<Cell>::`vftable'; /*0x594fe3*/
    v8[1].Items = (void *)10; /*0x594fe9*/
    v8[1].ptr_0 = 0; /*0x594ff0*/
    v39 = v8; /*0x594ff3*/
  }
  else
  {
    v39 = 0; /*0x594ff9*/
    v8 = 0; /*0x594ffd*/
  }
  v9 = *(_DWORD *)(a2 + 16); /*0x594fff*/
  v37 = 0; /*0x595002*/
  v10 = g_MissionQueueFrame.localVariables[163]; /*0x595006*/
  if ( v9 - 1 > 0 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v37); /*0x595025*/
      if ( v10 ) /*0x59502c*/
        v46 = *(_DWORD *)(80 * ((__int16)v11 + g_MapCellWidth * SHIWORD(v11)) + v10 + 56); /*0x595053*/
      else
        v46 = -1; /*0x59502e*/
      v12 = v37 + 1; /*0x59505b*/
      if ( v37 + 1 < v9 )
      {
        v50 = (__int16)v11; /*0x595072*/
        v52 = SHIWORD(v11); /*0x595076*/
        do
        {
          v41 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v12); /*0x59508b*/
          if ( v10 ) /*0x59509d*/
            v13 = *(_DWORD *)(80 * ((__int16)v41 + g_MapCellWidth * SHIWORD(v41)) + v10 + 56); /*0x5950b3*/
          else
            v13 = -1; /*0x59509f*/
          v42 = (v50 - (__int16)v41) * (v50 - (__int16)v41) + (v52 - SHIWORD(v41)) * (v52 - SHIWORD(v41)); /*0x5950c6*/
          __asm /*0x5950ca*/
          {
            fild [esp+48h+var_28]
            fstp [esp+48h+var_48]; double
          }
          Math::Sqrt(v35); /*0x5950d1*/
          v43 = v46 != v13 ? 0x14 : 0;
          __asm { fild [esp+40h+var_28] } /*0x5950ea*/
          __asm { faddp st(1), st }
          if ( !v12 ) /*0x5950f2*/
            goto LABEL_26; /*0x5950f2*/
          __asm /*0x5950f4*/
          {
            fcom [esp+40h+var_C+4]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x5950fd*/
          {
LABEL_26:
            __asm { fstp st } /*0x59510d*/
          }
          else
          {
            __asm { fstp [esp+40h+var_C+4] } /*0x595103*/
            v48 = v37; /*0x595107*/
          }
          v10 = g_MissionQueueFrame.localVariables[163]; /*0x595112*/
          ++v12; /*0x595118*/
        }
        while ( v12 < *(_DWORD *)(a2 + 16) );
        v12 = v37 + 1; /*0x595122*/
        v8 = v39; /*0x595126*/
      }
      v37 = v12; /*0x59512d*/
      v9 = *(_DWORD *)(a2 + 16); /*0x595131*/
      if ( v12 >= v9 - 1 ) /*0x595139*/
        break; /*0x595139*/
      v5 = a2; /*0x595019*/
    }
    if ( v48 != -1 ) /*0x595146*/
    {
      v15 = (_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * v48); /*0x595155*/
      Capacity = v8->Capacity; /*0x595158*/
      if ( (int)v8[1].ptr_0 < Capacity ) /*0x59515d*/
        goto LABEL_36; /*0x59515d*/
      if ( !v8->IsAllocated && Capacity ) /*0x595168*/
        goto LABEL_38; /*0x595168*/
      Items = (int)v8[1].Items; /*0x59516a*/
      if ( Items <= 0 ) /*0x59516f*/
        goto LABEL_38; /*0x59516f*/
      if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, Capacity + Items, 0) ) /*0x59517a*/
      {
LABEL_36:
        ptr_0 = v8[1].ptr_0; /*0x595181*/
        v19 = v8->Items; /*0x595184*/
        v8[1].ptr_0 = (char *)ptr_0 + 1; /*0x59518a*/
        v19[(_DWORD)ptr_0] = *v15; /*0x59518f*/
      }
      v10 = g_MissionQueueFrame.localVariables[163]; /*0x595192*/
LABEL_38:
      v5 = a2; /*0x595198*/
      goto LABEL_39; /*0x595198*/
    }
    v5 = a2; /*0x5951d7*/
  }
  if ( !*(_DWORD *)(v5 + 16) )
  {
LABEL_39:
    v20 = (int)v8[1].ptr_0; /*0x59519b*/
    if ( v20 < v40 )
    {
      while ( 1 )
      {
        v59 = 0xBFF0000000000000uLL; /*0x5951ad*/
        v47 = -1; /*0x5951bf*/
        v38 = 0; /*0x5951c7*/
        if ( *(int *)(v5 + 16) > 0 )
        {
          while ( 1 )
          {
            v26 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v38); /*0x595244*/
            if ( v10 ) /*0x595250*/
              v49 = *(_DWORD *)(80 * ((__int16)v26 + g_MapCellWidth * SHIWORD(v26)) + v10 + 56); /*0x595275*/
            else
              v49 = -1; /*0x595252*/
            v27 = 0; /*0x595279*/
            v44 = 9999999.0; /*0x59527b*/
            if ( v20 > 0 )
            {
              v56 = (__int16)v26; /*0x595299*/
              v51 = SHIWORD(v26); /*0x59529d*/
              do
              {
                v53 = *((_DWORD *)v39->Items + v27); /*0x5952b3*/
                if ( v10 ) /*0x5952c5*/
                  v28 = *(_DWORD *)(80 * ((__int16)v53 + g_MapCellWidth * SHIWORD(v53)) + v10 + 56); /*0x5952db*/
                else
                  v28 = -1; /*0x5952c7*/
                v54 = (v56 - (__int16)v53) * (v56 - (__int16)v53) + (v51 - SHIWORD(v53)) * (v51 - SHIWORD(v53)); /*0x5952ee*/
                __asm /*0x5952f2*/
                {
                  fild [esp+48h+var_10]
                  fstp [esp+48h+var_48]; double
                }
                Math::Sqrt(v36); /*0x5952f9*/
                v55 = v49 != v28 ? 0x14 : 0;
                __asm /*0x595312*/
                {
                  fild [esp+40h+var_10]
                  faddp st(1), st
                  fcom qword ptr [esp+40h+var_28]
                  fnstsw ax
                }
                if ( (_AX & 0x100) != 0 ) /*0x595321*/
                  __asm { fstp qword ptr [esp+40h+var_28] } /*0x595323*/
                else
                  __asm { fstp st } /*0x595329*/
                v10 = g_MissionQueueFrame.localVariables[163]; /*0x59532f*/
                ++v27; /*0x595335*/
                v20 = (int)v39[1].ptr_0; /*0x595336*/
              }
              while ( v27 < v20 );
            }
            __asm /*0x595341*/
            {
              fld qword ptr [esp+40h+var_28]
              fcomp [esp+40h+var_C+4]
              fnstsw ax
            }
            if ( (_AX & 0x4100) == 0 ) /*0x59534e*/
            {
              v59 = *(_QWORD *)&v44; /*0x595358*/
              v47 = v38; /*0x595364*/
            }
            if ( ++v38 >= *(_DWORD *)(a2 + 16) ) /*0x595379*/
              break; /*0x595379*/
            v5 = a2; /*0x595238*/
          }
          v8 = v39; /*0x59537f*/
          v5 = a2; /*0x595383*/
        }
        v31 = v8->Capacity; /*0x59538f*/
        v57 = (_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v47); /*0x595392*/
        if ( (int)v8[1].ptr_0 < v31 ) /*0x59539b*/
          goto LABEL_72; /*0x59539b*/
        if ( !v8->IsAllocated && v31 ) /*0x5953a6*/
          goto LABEL_74; /*0x5953a6*/
        v32 = (int)v8[1].Items; /*0x5953a8*/
        if ( v32 <= 0 ) /*0x5953ad*/
          goto LABEL_74; /*0x5953ad*/
        if ( (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, v31 + v32, 0) ) /*0x5953b8*/
        {
LABEL_72:
          v33 = v8[1].ptr_0; /*0x5953bf*/
          v34 = v8->Items; /*0x5953c2*/
          v8[1].ptr_0 = (char *)v33 + 1; /*0x5953c8*/
          v34[(_DWORD)v33] = *v57; /*0x5953d1*/
        }
        v10 = g_MissionQueueFrame.localVariables[163]; /*0x5953d4*/
LABEL_74:
        v20 = (int)v8[1].ptr_0; /*0x5953da*/
        if ( v20 >= v40 ) /*0x5953e3*/
          return &v8->ptr_0; /*0x5953e3*/
      }
    }
    return &v8->ptr_0; /*0x5951a4*/
  }
  v21 = v8->Capacity; /*0x5951e1*/
  v22 = *(_DWORD **)(v5 + 4); /*0x5951e7*/
  if ( (int)v8[1].ptr_0 < v21 /*0x595211*/
    || (v8->IsAllocated || !v21)
    && (v23 = (int)v8[1].Items, v23 > 0)
    && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v8->ptr_0 + 2))(v8, v21 + v23, 0) )
  {
    v24 = v8[1].ptr_0; /*0x59521c*/
    v25 = v8->Items; /*0x59521f*/
    v8[1].ptr_0 = (char *)v24 + 1; /*0x595225*/
    v25[(_DWORD)v24] = *v22; /*0x59522a*/
    return &v8->ptr_0; /*0x595235*/
  }
  return &v8->ptr_0; /*0x594fbd*/
}



// ==== 0x00595400  ObjectClass::PlaceNeutralBuilding  this=ObjectClass  sig=csp ====
char __thiscall PlaceNeutralBuilding(TechnoClass *this)
{
  TechnoClass *v1; // ebx
  HouseClass *v2; // eax
  int Owner; // ebp
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ebp
  _WORD *v10; // edi
  char v11; // bl
  __int16 v12; // dx
  Cell *v13; // esi
  int v14; // eax
  char result; // al
  char v16; // [esp+13h] [ebp-39h]
  __int16 v17[2]; // [esp+14h] [ebp-38h] BYREF
  int *v18; // [esp+18h] [ebp-34h]
  int v19; // [esp+1Ch] [ebp-30h]
  int v20; // [esp+20h] [ebp-2Ch]
  TechnoClass *v21; // [esp+24h] [ebp-28h]
  __int16 v22[4]; // [esp+28h] [ebp-24h] BYREF
  __int64 attachedBomb; // [esp+30h] [ebp-1Ch]
  __int64 v24; // [esp+38h] [ebp-14h]
  _DWORD v25[3]; // [esp+40h] [ebp-Ch] BYREF

  v1 = this; /*0x595405*/
  v21 = this; /*0x59540e*/
  v2 = (HouseClass *)SuperWeaponTypeClass::FindByName(aNeutral); /*0x595412*/
  Owner = HouseClass::FindOwner(v2); /*0x595425*/
  v16 = 0; /*0x595427*/
  v19 = 0; /*0x59542c*/
  v4 = __2_YAPAXI_Z(0x720u); /*0x595435*/
  if ( v4 ) /*0x59543c*/
  {
    *(_DWORD *)&v22[2] = 0; /*0x595443*/
    v5 = dword_8871E0->MessageDelay[0] - 1; /*0x595451*/
    *(double *)&v24 = (double)(unsigned int)dword_8871E0->MessageDelay[0]; /*0x59545d*/
    do /*0x59548c*/
    {
      *(_QWORD *)v22 = (unsigned int)Random::State((Random *)&unk_ABE890); /*0x59546b*/
      LOWORD(v6) = Math::RoundToInt((double)*(__int64 *)v22 * *(double *)&v24 * 2.328306437080797e-10); /*0x595485*/
    }
    while ( v6 > v5 ); /*0x59548c*/
    v18 = (int *)BuildingClass::Construct(v4, *(_DWORD *)(*(_DWORD *)dword_8871E0->MultiEngineer + 4 * v6), Owner); /*0x5954a6*/
  }
  else
  {
    v18 = 0; /*0x5954ac*/
  }
  while ( v19 < 100 ) /*0x5954bb*/
  {
    v7 = v1->attachedBomb - 1; /*0x5954c4*/
    attachedBomb = (unsigned int)v1->attachedBomb; /*0x5954ce*/
    *(double *)v22 = (double)attachedBomb; /*0x5954d6*/
    do /*0x595501*/
    {
      v24 = (unsigned int)Random::State((Random *)&unk_ABE890); /*0x5954e4*/
      LOWORD(v8) = Math::RoundToInt((double)v24 * *(double *)v22 * 2.328306437080797e-10); /*0x5954fa*/
    }
    while ( v8 > v7 ); /*0x595501*/
    *(_DWORD *)v17 = *(_DWORD *)(v1->fallRate + 4 * v8); /*0x595513*/
    v9 = *((char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17) + 283); /*0x595522*/
    v10 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v18[328] + 144))(v18[328], 1); /*0x595537*/
    v11 = 1; /*0x595539*/
    while ( *v10 != 0x7FFF || v10[1] != 0x7FFF ) /*0x595548*/
    {
      v12 = v17[1] + v10[1]; /*0x595556*/
      LOWORD(v20) = v17[0] + *v10; /*0x595561*/
      HIWORD(v20) = v12; /*0x595566*/
      *(_DWORD *)v22 = v20; /*0x595575*/
      v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v22); /*0x59557e*/
      if ( v13->Cell_field_0xE4 /*0x5955d6*/
        || !(unsigned __int8)Cell::IsEmpty(v13)
        || v13->Cell_field_0x11B[0] != v9
        || *(_DWORD *)&v13->__pad_E8[4] == 3
        || !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, (int)v13, 1)
        || *((_BYTE *)dword_ABED10
           + 80 * *(__int16 *)&v13->__pad_1C[8]
           + 80 * g_MapCellWidth * *(__int16 *)&v13->__pad_1C[10]
           + 69) )
      {
        v11 = 0; /*0x5955de*/
      }
      v10 += 2; /*0x5955e0*/
      if ( !v11 ) /*0x5955e5*/
        goto LABEL_24; /*0x5955e5*/
    }
    v25[0] = (v17[0] << 8) + 128; /*0x595608*/
    v25[2] = 0; /*0x595616*/
    v14 = *v18; /*0x59561e*/
    v25[1] = (v17[1] << 8) + 128; /*0x595620*/
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
    return (*(char (__thiscall **)(int *, int))(*v18 + 32))(v18, 1); /*0x595669*/
  return result; /*0x59564d*/
}



// ==== 0x00595680  MapSeedClass::Constructor  this=MapSeedClass  sig=csp ====
int __thiscall MapSeedClass::Constructor(int this)
{
  wchar_t *StringCSF; // eax

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
  *(_DWORD *)(this + 8) = &unk_82BA60; /*0x5956d1*/
  *(_WORD *)(this + 120) = 0; /*0x5956d8*/
  *(_DWORD *)(this + 12) = this + 120; /*0x5956db*/
  if ( Map_Create_734FD0() ) /*0x5956de*/
  {
    StringCSF = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x5956f8*/
    wcscpy((wchar_t *)(this + 120), StringCSF); /*0x5956ff*/
  }
  return this; /*0x595709*/
}



// ==== 0x00595710  CSFClass::CopyString  this=CSFClass  sig=csp ====
wchar_t *__thiscall CSFClass::CopyString(CSFClass *this)
{
  wchar_t *StringCSF; // eax

  StringCSF = GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.?[11], 3934); /*0x595724*/
  return wcscpy((wchar_t *)this + 60, StringCSF); /*0x595736*/
}



// ==== 0x00595740  MapResourceClass::Constructor  this=MapResourceClass  sig=csp ====
int __thiscall MapResourceClass::Constructor(MapResourceClass *this)
{
  MapSeedClass::Constructor((int)this); /*0x595745*/
  *((_DWORD *)this + 94) = 0; /*0x595756*/
  *((_DWORD *)this + 95) = 0; /*0x59575c*/
  *((_DWORD *)this + 96) = 0; /*0x595762*/
  *((_DWORD *)this + 97) = 0; /*0x595768*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 98), 0, 0); /*0x59576e*/
  *((_DWORD *)this + 98) = &TypeList<int>::`vftable'; /*0x595773*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 105), 0, 0); /*0x595783*/
  *((_DWORD *)this + 105) = &TypeList<int>::`vftable'; /*0x595788*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 112), 0, 0); /*0x595798*/
  *((_DWORD *)this + 112) = &TypeList<int>::`vftable'; /*0x59579d*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 119), 0, 0); /*0x5957ad*/
  *((_DWORD *)this + 119) = &TypeList<int>::`vftable'; /*0x5957b2*/
  VectorClass::Construct((VectorClass *)(this + 126), 0, 0); /*0x5957c2*/
  *((_DWORD *)this + 131) = 10; /*0x5957c7*/
  *((_DWORD *)this + 130) = 0; /*0x5957ce*/
  *((_DWORD *)this + 126) = &TypeList<int>::`vftable'; /*0x5957d1*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 133), 0, 0); /*0x5957e1*/
  *((_DWORD *)this + 133) = &TypeList<int>::`vftable'; /*0x5957e6*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 140), 0, 0); /*0x5957f6*/
  *((_DWORD *)this + 140) = &TypeList<int>::`vftable'; /*0x5957fb*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 147), 0, 0); /*0x59580b*/
  *((_DWORD *)this + 147) = &TypeList<int>::`vftable'; /*0x595810*/
  VectorClass::Construct((VectorClass *)(this + 154), 0, 0); /*0x595820*/
  *((_DWORD *)this + 159) = 10; /*0x595825*/
  *((_DWORD *)this + 158) = 0; /*0x59582c*/
  *((_DWORD *)this + 154) = &TypeList<int>::`vftable'; /*0x59582f*/
  DynamicVectorClass::Construct((DynamicVectorClass *)(this + 161), 0, 0); /*0x59583f*/
  *((_DWORD *)this + 161) = &TypeList<int>::`vftable'; /*0x595844*/
  DynamicVectorClass::Construct((DynamicVectorClass *)this + 28, 0, 0); /*0x595854*/
  *((_DWORD *)this + 168) = &TypeList<int>::`vftable'; /*0x595859*/
  *((_DWORD *)this + 175) = 2500; /*0x59585f*/
  *((_DWORD *)this + 176) = 5500; /*0x595873*/
  DynamicVectorClass::BuildingTypeConstructor((DynamicVectorClass *)(this + 177), 0, 0); /*0x59587d*/
  *((_DWORD *)this + 177) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x595882*/
  VectorClass::BuildingTypeConstructor((VectorClass *)this + 46, 0, 0); /*0x595892*/
  *((_DWORD *)this + 189) = 10; /*0x595897*/
  *((_DWORD *)this + 188) = 0; /*0x59589e*/
  *((_DWORD *)this + 184) = &TypeList<BuildingTypeClass const *>::`vftable'; /*0x5958a1*/
  *((_DWORD *)this + 191) = 500; /*0x5958a7*/
  *((_BYTE *)this + 768) = 1; /*0x5958b1*/
  *((_DWORD *)this + 193) = 0; /*0x5958b8*/
  *((_DWORD *)this + 195) = 4; /*0x5958be*/
  *((_BYTE *)this + 784) = 0; /*0x5958c8*/
  return (int)this; /*0x5958d0*/
}



// ==== 0x005958E0  RandomMap::CleanupRandomMapData  this=RandomMap  sig=csp ====
void __thiscall RandomMap::CleanupRandomMapData(RandomMap *this)
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

  if ( g_MissionQueueFrame.localVariables[163] ) /*0x5958ee*/
  {
    v2 = g_MapCellWidth * g_MapCellWidth; /*0x5958f6*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x5958fb*/
    {
      v3 = 0; /*0x5958fd*/
      do /*0x59591a*/
      {
        v3 += 80; /*0x595908*/
        --v2; /*0x59590b*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 24) = -1; /*0x59590c*/
        *(_DWORD *)(v3 + g_MissionQueueFrame.localVariables[163] - 20) = -1; /*0x595916*/
      }
      while ( v2 ); /*0x59591a*/
    }
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x595927*/
  {
    v5 = *(void **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x59592f*/
    if ( v5 ) /*0x595934*/
    {
      TileNode::Cleanup(*(TileNode **)(g_MissionQueueFrame.briefing[339] + 4 * i)); /*0x595938*/
      __3_YAXPAX_Z(v5); /*0x59593e*/
    }
  }
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59594e*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x595957*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x59595a*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x595962*/
  }
  v6 = *(void (__thiscall ****)(_DWORD, int))&this->__pad_4C[300]; /*0x595968*/
  if ( v6 ) /*0x595970*/
  {
    (**v6)(v6, 1); /*0x595976*/
    *(_DWORD *)&this->__pad_4C[300] = 0; /*0x595978*/
  }
  v7 = *(void **)&this->__pad_4C[304]; /*0x59597e*/
  if ( v7 ) /*0x595986*/
  {
    ComPtr::Dtor(*(ComPtr **)&this->__pad_4C[304]); /*0x59598a*/
    __3_YAXPAX_Z(v7); /*0x595990*/
    *(_DWORD *)&this->__pad_4C[304] = 0; /*0x595998*/
  }
  this->u32_B8 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5959a4*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)this + 736)); /*0x5959aa*/
  *((_DWORD *)this + 177) = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5959b5*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)((char *)this + 708)); /*0x5959bb*/
  *((_DWORD *)this + 168) = &VectorClass<int>::`vftable'; /*0x5959cb*/
  VectorClass::Destroy((int)this + 672); /*0x5959cd*/
  *((_DWORD *)this + 161) = &VectorClass<int>::`vftable'; /*0x5959d8*/
  VectorClass::Destroy((int)this + 644); /*0x5959da*/
  v8 = (void *)*((_DWORD *)this + 155); /*0x5959df*/
  *((_DWORD *)this + 154) = &VectorClass<int>::`vftable'; /*0x5959e5*/
  if ( v8 && *((_BYTE *)this + 629) ) /*0x5959ef*/
  {
    __3_YAXPAX_Z(v8); /*0x5959f8*/
    *((_DWORD *)this + 155) = 0; /*0x595a00*/
  }
  *((_BYTE *)this + 629) = 0; /*0x595a06*/
  this->u32_9C = 0; /*0x595a0c*/
  v9 = (void *)this->u32_94; /*0x595a12*/
  *((_DWORD *)this + 147) = &VectorClass<int>::`vftable'; /*0x595a18*/
  if ( v9 && *((_BYTE *)this + 601) ) /*0x595a22*/
  {
    __3_YAXPAX_Z(v9); /*0x595a2b*/
    this->u32_94 = 0; /*0x595a33*/
  }
  *((_BYTE *)this + 601) = 0; /*0x595a39*/
  *((_DWORD *)this + 149) = 0; /*0x595a3f*/
  v10 = (void *)*((_DWORD *)this + 141); /*0x595a45*/
  *((_DWORD *)this + 140) = &VectorClass<int>::`vftable'; /*0x595a4b*/
  if ( v10 && *((_BYTE *)this + 573) ) /*0x595a55*/
  {
    __3_YAXPAX_Z(v10); /*0x595a5e*/
    *((_DWORD *)this + 141) = 0; /*0x595a66*/
  }
  *((_BYTE *)this + 573) = 0; /*0x595a6c*/
  *((_DWORD *)this + 142) = 0; /*0x595a72*/
  v11 = (void *)*((_DWORD *)this + 134); /*0x595a78*/
  *((_DWORD *)this + 133) = &VectorClass<int>::`vftable'; /*0x595a7e*/
  if ( v11 && *((_BYTE *)this + 545) ) /*0x595a88*/
  {
    __3_YAXPAX_Z(v11); /*0x595a91*/
    *((_DWORD *)this + 134) = 0; /*0x595a99*/
  }
  *((_BYTE *)this + 545) = 0; /*0x595a9f*/
  *((_DWORD *)this + 135) = 0; /*0x595aa5*/
  v12 = *(void **)&this->__pad_4C[432]; /*0x595aab*/
  *(_DWORD *)&this->__pad_4C[428] = &VectorClass<int>::`vftable'; /*0x595ab1*/
  if ( v12 && this->__pad_4C[441] ) /*0x595abb*/
  {
    __3_YAXPAX_Z(v12); /*0x595ac4*/
    *(_DWORD *)&this->__pad_4C[432] = 0; /*0x595acc*/
  }
  this->__pad_4C[441] = 0; /*0x595ad2*/
  *(_DWORD *)&this->__pad_4C[436] = 0; /*0x595ad8*/
  v13 = *(void **)&this->__pad_4C[404]; /*0x595ade*/
  *(_DWORD *)&this->__pad_4C[400] = &VectorClass<int>::`vftable'; /*0x595ae4*/
  if ( v13 && this->__pad_4C[413] ) /*0x595aee*/
  {
    __3_YAXPAX_Z(v13); /*0x595af7*/
    *(_DWORD *)&this->__pad_4C[404] = 0; /*0x595aff*/
  }
  this->__pad_4C[413] = 0; /*0x595b05*/
  *(_DWORD *)&this->__pad_4C[408] = 0; /*0x595b0b*/
  v14 = *(void **)&this->__pad_4C[376]; /*0x595b11*/
  *(_DWORD *)&this->__pad_4C[372] = &VectorClass<int>::`vftable'; /*0x595b17*/
  if ( v14 && this->__pad_4C[385] ) /*0x595b21*/
  {
    __3_YAXPAX_Z(v14); /*0x595b2a*/
    *(_DWORD *)&this->__pad_4C[376] = 0; /*0x595b32*/
  }
  this->__pad_4C[385] = 0; /*0x595b38*/
  *(_DWORD *)&this->__pad_4C[380] = 0; /*0x595b3e*/
  v15 = *(void **)&this->__pad_4C[348]; /*0x595b44*/
  *(_DWORD *)&this->__pad_4C[344] = &VectorClass<int>::`vftable'; /*0x595b4a*/
  if ( v15 && this->__pad_4C[357] ) /*0x595b54*/
  {
    __3_YAXPAX_Z(v15); /*0x595b5d*/
    *(_DWORD *)&this->__pad_4C[348] = 0; /*0x595b65*/
  }
  this->__pad_4C[357] = 0; /*0x595b6b*/
  *(_DWORD *)&this->__pad_4C[352] = 0; /*0x595b71*/
  v16 = *(void **)&this->__pad_4C[320]; /*0x595b77*/
  *(_DWORD *)&this->__pad_4C[316] = &VectorClass<int>::`vftable'; /*0x595b7d*/
  if ( v16 && this->__pad_4C[329] ) /*0x595b87*/
  {
    __3_YAXPAX_Z(v16); /*0x595b90*/
    *(_DWORD *)&this->__pad_4C[320] = 0; /*0x595b98*/
  }
  this->__pad_4C[329] = 0; /*0x595ba0*/
  *(_DWORD *)&this->__pad_4C[324] = 0; /*0x595ba6*/
  LoadOptions::Cleanup((LoadOptions *)this); /*0x595bac*/
}



// ==== 0x00595BC0  CCFileClass::Load  this=CCFileClass  sig=csp ====
LONG __thiscall CCFileClass::Load(CCFileClass *this)
{
  Dialog *Dialog; // edi
  TechnoTypeClass *v3; // ecx
  ComPtr *v4; // esi
  int v6; // [esp+0h] [ebp-34h]
  LONG dwNewLong; // [esp+Ch] [ebp-28h] BYREF
  RawFileClass v8; // [esp+10h] [ebp-24h] BYREF

  dwNewLong = 0; /*0x595bcf*/
  RandomMap::LoadConfig((RandomMap *)&g_MissionQueueFrame.briefing[356]); /*0x595bd3*/
  Dialog = (Dialog *)CreateDialog(0x105u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SkirmishMapGen::DlgProc, 0); /*0x595be8*/
  if ( Dialog ) /*0x595bec*/
  {
    *(_DWORD *)&stru_82ADA8.?[31] = this; /*0x595bf2*/
    g_MissionQueueFrame.briefing[361] = (int)this; /*0x595bfc*/
    SetWindowLongA((HWND)Dialog, 8, (LONG)&dwNewLong); /*0x595c02*/
    SendMessageA((HWND)Dialog, 0x4A9u, 0, 1); /*0x595c11*/
    Dialog::Show(Dialog); /*0x595c19*/
    while ( !dwNewLong ) /*0x595c22*/
    {
      if ( (unsigned __int8)Dialog::PumpMessages() == 1 ) /*0x595c2b*/
        break; /*0x595c2b*/
      if ( this ) /*0x595c2f*/
        ((void (*)(void))this)(); /*0x595c31*/
      LOBYTE(v3) = 0; /*0x595c33*/
      ScreenSaver::Process(v3, v6); /*0x595c35*/
    }
    Dialog::Destroy(Dialog); /*0x595c42*/
  }
  v4 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x595c47*/
  *(_DWORD *)&stru_82ADA8.?[31] = Event_Dispatch::Return0; /*0x595c4d*/
  g_MissionQueueFrame.briefing[361] = 0; /*0x595c59*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x595c5f*/
  {
    if ( *(_DWORD *)g_MissionQueueFrame.briefing[451] ) /*0x595c61*/
    {
      RawFileClass::Construct(&v8, (int)ExistingFileName); /*0x595c6e*/
      CompressScreenshot((int *)v8.FileClass, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x595c84*/
      RawFileClass::Dtor(&v8); /*0x595c8d*/
      v4 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x595c92*/
    }
    if ( v4 ) /*0x595c9a*/
    {
      ComPtr::Dtor(v4); /*0x595c9e*/
      __3_YAXPAX_Z(v4); /*0x595ca4*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x595cac*/
  }
  if ( g_MissionQueueFrame.briefing[450] ) /*0x595cba*/
  {
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x595cc0*/
    g_MissionQueueFrame.briefing[450] = 0; /*0x595cc2*/
  }
  return dwNewLong; /*0x595ccc*/
}



// ==== 0x00595CE0  ObjectClass::CleanupRandomMapCache  this=ObjectClass  sig=csp ====
void CleanupRandomMapCache(ObjectClass *this)
{
  struct _WIN32_FIND_DATAA *i; // esi
  HANDLE FirstFileA; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  void **Items; // eax
  char *v9; // ecx
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  FILETIME FileTime2; // [esp+10h] [ebp-20h] BYREF
  VectorClass v15; // [esp+18h] [ebp-18h] BYREF
  int j; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  Map_Cleanup(&v15, 0, 0); /*0x595cef*/
  v15.ptr_0 = &DynamicVectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x595cf4*/
  v17 = 10; /*0x595cfc*/
  j = 0; /*0x595d09*/
  i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d19*/
  FirstFileA = FindFirstFileA((LPCSTR)&stru_82BA00.?[2], i); /*0x595d27*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x595d2c*/
  {
    if ( j < v15.Capacity /*0x595d5f*/
      || (v15.IsAllocated || !v15.Capacity)
      && v17 > 0
      && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v15.ptr_0 + 2))(&v15, v17 + v15.Capacity, 0) )
    {
      v3 = j++; /*0x595d6a*/
      *((_DWORD *)v15.Items + v3) = i; /*0x595d75*/
    }
    for ( i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u); /*0x595d8f*/
          FindNextFileA(FirstFileA, i);
          i = (struct _WIN32_FIND_DATAA *)__2_YAPAXI_Z(0x140u) )
    {
      if ( j < v15.Capacity /*0x595dc2*/
        || (v15.IsAllocated || !v15.Capacity)
        && v17 > 0
        && (*((unsigned __int8 (__thiscall **)(VectorClass *, int, _DWORD))v15.ptr_0 + 2))(
             &v15,
             v17 + v15.Capacity,
             0) )
      {
        v4 = j++; /*0x595dcd*/
        *((_DWORD *)v15.Items + v4) = i; /*0x595dd8*/
      }
    }
    FindClose(FirstFileA); /*0x595df3*/
  }
  __3_YAXPAX_Z(i); /*0x595dfa*/
  v5 = j; /*0x595dff*/
  if ( j <= 70 ) /*0x595e09*/
  {
LABEL_37:
    Items = (void **)v15.Items; /*0x595f3d*/
    goto LABEL_38; /*0x595f3d*/
  }
  while ( 2 ) /*0x595e1b*/
  {
    v6 = -1; /*0x595e1b*/
    v7 = 0; /*0x595e1e*/
    FileTime2.dwLowDateTime = -1; /*0x595e22*/
    FileTime2.dwHighDateTime = 0x7FFFFFFF; /*0x595e26*/
    if ( v5 <= 0 ) /*0x595e2e*/
      goto LABEL_37; /*0x595e2e*/
    Items = (void **)v15.Items; /*0x595e34*/
    do /*0x595ee3*/
    {
      v9 = (char *)Items[v7]; /*0x595e38*/
      if ( *((_DWORD *)v9 + 4) ) /*0x595e3b*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 12), &FileTime2) == -1 ) /*0x595e50*/
        {
          Items = (void **)v15.Items; /*0x595e56*/
          v6 = v7; /*0x595e5a*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 12); /*0x595e62*/
          goto LABEL_30; /*0x595e70*/
        }
      }
      else if ( *((_DWORD *)v9 + 2) ) /*0x595e72*/
      {
        if ( CompareFileTime((const FILETIME *)(v9 + 4), &FileTime2) == -1 ) /*0x595e87*/
        {
          Items = (void **)v15.Items; /*0x595e89*/
          v6 = v7; /*0x595e8d*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 4); /*0x595e95*/
          goto LABEL_30; /*0x595ea3*/
        }
      }
      else
      {
        if ( !*((_DWORD *)v9 + 6) ) /*0x595eaa*/
          goto LABEL_30; /*0x595eaa*/
        if ( CompareFileTime((const FILETIME *)(v9 + 20), &FileTime2) == -1 ) /*0x595eba*/
        {
          Items = (void **)v15.Items; /*0x595ebc*/
          v6 = v7; /*0x595ec0*/
          FileTime2 = *(FILETIME *)(*((_DWORD *)v15.Items + v7) + 20); /*0x595ec8*/
          goto LABEL_30; /*0x595ed6*/
        }
      }
      Items = (void **)v15.Items; /*0x595ed8*/
LABEL_30:
      ++v7; /*0x595edc*/
    }
    while ( v7 < j ); /*0x595ee3*/
    if ( v6 != -1 ) /*0x595eec*/
    {
      if ( !DeleteFileA((LPCSTR)Items[v6] + 44) ) /*0x595ef5*/
        goto LABEL_37; /*0x595ef5*/
      __3_YAXPAX_Z(*((void **)v15.Items + v6)); /*0x595f03*/
      v10 = j; /*0x595f08*/
      if ( v6 < j ) /*0x595f11*/
      {
        v10 = j - 1; /*0x595f13*/
        v11 = v6; /*0x595f14*/
        for ( j = v10; v11 < j; v10 = j ) /*0x595f1c*/
        {
          ++v11; /*0x595f22*/
          *((_DWORD *)v15.Items + v11 - 1) = *((_DWORD *)v15.Items + v11); /*0x595f26*/
        }
      }
      v5 = v10; /*0x595f32*/
      if ( v10 <= 70 ) /*0x595f37*/
        goto LABEL_37; /*0x595f37*/
      continue; /*0x595f37*/
    }
    break;
  }
LABEL_38:
  if ( j ) /*0x595f4b*/
  {
    do /*0x595f85*/
    {
      __3_YAXPAX_Z(*Items); /*0x595f50*/
      v12 = j == 0; /*0x595f5c*/
      if ( j > 0 ) /*0x595f5e*/
      {
        v13 = 0; /*0x595f61*/
        v12 = j-- == 1; /*0x595f63*/
        if ( j > 0 ) /*0x595f69*/
        {
          do /*0x595f7d*/
          {
            ++v13; /*0x595f6f*/
            *((_DWORD *)v15.Items + v13 - 1) = *((_DWORD *)v15.Items + v13); /*0x595f73*/
          }
          while ( v13 < j ); /*0x595f7d*/
          v12 = j == 0; /*0x595f7f*/
        }
      }
      Items = (void **)v15.Items; /*0x595f81*/
    }
    while ( !v12 ); /*0x595f85*/
  }
  v15.ptr_0 = &VectorClass<_WIN32_FIND_DATAA *>::`vftable'; /*0x595f89*/
  if ( Items ) /*0x595f91*/
  {
    if ( v15.IsAllocated ) /*0x595f99*/
      __3_YAXPAX_Z(Items); /*0x595f9c*/
  }
}



// ==== 0x00595FB0  GenerateRandomMapAndMinimap  this=-  sig=csp ====
_DWORD *__fastcall GenerateRandomMapAndMinimap(HWND hDlg, char (*a2)())
{
  _DWORD *WDTTerritoryClass; // eax
  char *v5; // esi
  Surface *v6; // eax
  ObjectClass *v7; // eax
  void *v8; // esi
  void *v9; // esi
  int v10; // eax
  int *v11; // eax
  TechnoTypeClass *v12; // ecx
  ComPtr *v13; // esi
  int v15; // [esp+0h] [ebp-270h]
  ObjectClass *v16; // [esp+0h] [ebp-270h]
  ComPtr v17; // [esp+10h] [ebp-260h] BYREF
  CCFileClass v18; // [esp+44h] [ebp-22Ch] BYREF
  int v19[3]; // [esp+9Ch] [ebp-1D4h] BYREF
  int v20; // [esp+A8h] [ebp-1C8h]
  char Destination[128]; // [esp+B0h] [ebp-1C0h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+130h] [ebp-140h] BYREF

  ComPtr::Constructor(&v17); /*0x595fc2*/
  *(_DWORD *)v17.__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x595fd8*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x595fe5*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass((rc_ptr *)&v17.ComPtr_field_0x08, *(int *)dword_A8B240); /*0x595ff1*/
    ComPtr::Set(&v17, WDTTerritoryClass[1]); /*0x595ffe*/
    v17.ComPtr_field_0x08 = (int)&rc_ptr<WDTTerritory>::`vftable'; /*0x596007*/
    ComPtr::Release((ComPtr *)&v17.ComPtr_field_0x08); /*0x59600b*/
  }
  if ( v17.ComPtr_field_0x04 ) /*0x596016*/
    g_MissionQueueFrame.briefing[376] = 4; /*0x596018*/
  v5 = GameConfig::ComputeCRC(); /*0x596023*/
  memset(Destination, 0, sizeof(Destination)); /*0x596033*/
  strncpy(Destination, (const char *)&stru_82BA00.?[13], 0x80u); /*0x596047*/
  strncat(Destination, v5, 0x80u); /*0x59605a*/
  __3_YAXPAX_Z(v5); /*0x596060*/
  strncat(Destination, (const char *)&stru_82BA00.?[11], 0x80u); /*0x596077*/
  CCFileClass::Construct(&v18, Destination); /*0x59608b*/
  if ( (unsigned __int8)CCFileClass::Open(&v18, 0) ) /*0x596097*/
  {
    v6 = (Surface *)g_MissionQueueFrame.briefing[451]; /*0x5960a4*/
    if ( !g_MissionQueueFrame.briefing[451] ) /*0x5960ab*/
    {
      v7 = (ObjectClass *)__2_YAPAXI_Z(4u); /*0x5960af*/
      if ( v7 ) /*0x5960b9*/
        v6 = (Surface *)unknown_libname_27(v7); /*0x5960bd*/
      else
        v6 = 0; /*0x5960c4*/
      g_MissionQueueFrame.briefing[451] = (int)v6; /*0x5960c6*/
    }
    if ( Surface::LoadToSurfaceSHP(v6, Destination) ) /*0x5960d5*/
    {
      RawFileClass::Construct((RawFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x5960e7*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x5960fc*/
      v8 = (void *)g_MissionQueueFrame.briefing[451]; /*0x596101*/
      if ( g_MissionQueueFrame.briefing[451] ) /*0x596109*/
      {
        ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x59610d*/
        __3_YAXPAX_Z(v8); /*0x596113*/
      }
      g_MissionQueueFrame.briefing[451] = 0; /*0x59611f*/
      RawFileClass::Dtor((RawFileClass *)&v17.ComPtr_field_0x10); /*0x596125*/
      goto LABEL_39; /*0x59612a*/
    }
    v9 = (void *)g_MissionQueueFrame.briefing[451]; /*0x59612f*/
    if ( g_MissionQueueFrame.briefing[451] ) /*0x596137*/
    {
      ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x59613b*/
      __3_YAXPAX_Z(v9); /*0x596141*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x596149*/
  }
  *(_DWORD *)&stru_82ADA8.?[31] = a2; /*0x596154*/
  g_MissionQueueFrame.briefing[361] = (int)a2; /*0x59615d*/
  if ( g_MissionQueueFrame.briefing[385] == -1 ) /*0x596163*/
    g_MissionQueueFrame.briefing[385] = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x596175*/
  RandomMap::Generate((RandomMap *)&g_MissionQueueFrame.briefing[356], 1, hDlg); /*0x596182*/
  MiniMap::Render((MiniMap *)g_MissionQueueFrame.briefing[451]); /*0x59618d*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x5961a2*/
    MapPreview::Upload((MapPreview *)g_MissionQueueFrame.briefing[451]); /*0x5961aa*/
  if ( g_MissionQueueFrame.briefing[450] ) /*0x5961b7*/
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x5961bd*/
  v10 = __2_YAPAXI_Z(0x178u); /*0x5961c4*/
  if ( v10 ) /*0x5961ce*/
    v11 = (int *)MapSeedClass::Constructor(v10); /*0x5961d2*/
  else
    v11 = 0; /*0x5961d9*/
  g_MissionQueueFrame.briefing[450] = (int)v11; /*0x5961e7*/
  qmemcpy(v11, &g_MissionQueueFrame.briefing[356], 0x178u); /*0x5961ec*/
  ScenarioClass::SetFileName((char *)dword_A8B230, (char *)&stru_82BA00.?[8]); /*0x5961f9*/
  LOBYTE(v12) = 0; /*0x5961fe*/
  ScreenSaver::Process(v12, v15); /*0x596200*/
  v13 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x596205*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x59620f*/
  {
    if ( *(_DWORD *)g_MissionQueueFrame.briefing[451] ) /*0x596215*/
    {
      RawFileClass::Construct((RawFileClass *)&v17.ComPtr_field_0x10, (int)ExistingFileName); /*0x596222*/
      CompressScreenshot(&v17.ComPtr_field_0x10, *(int **)g_MissionQueueFrame.briefing[451], &FileSystem_TEMPERAT_PAL); /*0x596237*/
      if ( FindFirstFileA((LPCSTR)&stru_82BA00.?[6], &FindFileData) == (HANDLE)-1 ) /*0x596252*/
        CreateDirectoryA((LPCSTR)&stru_82BA00.?[6], 0); /*0x59625a*/
      CopyFileA(ExistingFileName, Destination, 0); /*0x59626e*/
      CleanupRandomMapCache(v16); /*0x596274*/
      RawFileClass::Dtor((RawFileClass *)&v17.ComPtr_field_0x10); /*0x59627d*/
      v13 = (ComPtr *)g_MissionQueueFrame.briefing[451]; /*0x596282*/
    }
    if ( v13 ) /*0x59628a*/
    {
      ComPtr::Dtor(v13); /*0x59628e*/
      __3_YAXPAX_Z(v13); /*0x596294*/
    }
    g_MissionQueueFrame.briefing[451] = 0; /*0x59629c*/
  }
  if ( g_MissionQueueFrame.briefing[450] ) /*0x5962aa*/
  {
    (**(void (__thiscall ***)(int, int))g_MissionQueueFrame.briefing[450])(g_MissionQueueFrame.briefing[450], 1); /*0x5962b0*/
    g_MissionQueueFrame.briefing[450] = 0; /*0x5962b2*/
  }
LABEL_39:
  *(_DWORD *)v18.CDFileClass = &CCFileClass::`vftable'; /*0x5962b8*/
  v20 = 0; /*0x5962c7*/
  Vector::Clear((int)v19); /*0x5962ce*/
  *(_DWORD *)v18.CDFileClass = &off_7E1668; /*0x5962d7*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v18); /*0x5962df*/
  *(_DWORD *)v17.__pad_0 = &rc_ptr<WDTTerritory>::`vftable'; /*0x5962e8*/
  return ComPtr::Release(&v17); /*0x5962f5*/
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
      EnableWindow(DlgItem, byte_A8ED6B == 0); /*0x596ba6*/
      if ( dword_ABE04C == -1 ) /*0x596baf*/
      {
        dword_ABE04C = Random::Range((_DWORD *)dword_A8B230 + 134, 0, 0xFFFF); /*0x596bc8*/
        byte_ABE2D8 = 1; /*0x596bcd*/
      }
      byte_82B030 = 1; /*0x596bda*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x596be1*/
      v66 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x596bf6*/
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
      if ( dword_ABE154 ) /*0x596aad*/
      {
        v55 = GetDlgItem(hWnd, 1128); /*0x596ab5*/
        if ( !(unsigned __int8)SkirmishMapGen::LookupDialogHash(v55) ) /*0x596abd*/
          Skirmish::RenderPreview(dword_ABE154, hWnd); /*0x596acd*/
      }
      if ( LoadScreen::IsActive(dword_AC4F58) ) /*0x596ad7*/
        LoadScreen::Render((int)dword_AC4F58, a3, (int)hWnd, NAN); /*0x596aed*/
      ValidateRect(hWnd, 0); /*0x596af5*/
      return 0; /*0x596afe*/
    case 0x111u: /*0x596342*/
      if ( (unsigned __int16)a3 > 0x621u ) /*0x596369*/
      {
        switch ( (__int16)a3 ) /*0x5968c5*/
        {
          case 1730: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596945*/
            if ( (unsigned __int8)LoadOptions::Run(byte_ABDFD8) ) /*0x59694f*/
            {
              byte_82B030 = 0; /*0x596963*/
              v53 = GetDlgItem(hWnd, 1568); /*0x59696a*/
              PostMessageA(hWnd, 0x111u, 0x620u, (LPARAM)v53); /*0x59697c*/
            }
            while ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_887640 + 40))(dword_887640) ) /*0x59698a*/
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x596999*/
            RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x5969b1*/
            return 0; /*0x5969bc*/
          case 1731: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5968d2*/
            ShowSaveLoadDialog(&unk_ABE050); /*0x5968e1*/
            v64 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x5968fc*/
            v50 = GetDlgItem(hWnd, 1730); /*0x596900*/
            v51 = v64; /*0x596908*/
            if ( v50 ) /*0x59690e*/
              EnableWindow(v50, v64); /*0x59691a*/
            v52 = GetDlgItem(hWnd, 1732); /*0x596922*/
            if ( !v52 ) /*0x596926*/
              return 0; /*0x596926*/
            goto LABEL_53; /*0x596926*/
          case 1732: /*0x5968c5*/
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5969c5*/
            Options::PrepareSaveLoadDlg(byte_ABDFD8); /*0x5969cf*/
            v65 = LoadOptions::Check((const char **)byte_ABDFD8); /*0x5969ea*/
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
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596a33*/
            if ( byte_A8ED6B ) /*0x596a3f*/
            {
              RandomMap::Generate((int *)byte_ABDFD8, 0, hWnd); /*0x596a49*/
            }
            else if ( dword_ABE154 && *(_DWORD *)dword_ABE154 /*0x596a72*/
                   || (RandomMap::Generate((int *)byte_ABDFD8, 1, hWnd), !byte_A8ED6B) )
            {
LABEL_69:
              *(_DWORD *)v63 = 1; /*0x596a90*/
              return 1; /*0x596aa3*/
            }
            ScenarioClass::SetFileName((char *)dword_A8B230, aRandomMap); /*0x596a7f*/
            SaveScenarioToINI(aRandmapMap); /*0x596a8b*/
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
            Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x5963d9*/
            InvalidateRect(hWnd, 0, 0); /*0x5963e9*/
            return 0; /*0x5963f5*/
          }
          return 0; /*0x5963a5*/
        }
        if ( (unsigned __int16)a3 == 1568 ) /*0x59640f*/
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 12))(dword_887640); /*0x59641d*/
          if ( byte_82B030 ) /*0x596427*/
          {
            byte_ABE2D8 = 1; /*0x596429*/
          }
          else
          {
            byte_ABE2D8 = 0; /*0x596432*/
            byte_82B030 = 1; /*0x596439*/
          }
          Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596446*/
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
          if ( dword_A8B230 ) /*0x59649c*/
          {
            *((_DWORD *)dword_A8B230 + 1103) = 0; /*0x5964a2*/
            v11 = dword_A8B230; /*0x5964a8*/
            if ( *((int *)dword_A8B230 + 1103) > 0 ) /*0x5964b4*/
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
                *(_DWORD *)((char *)dword_A8B230 + v12 * 4 + 4) = v16; /*0x596505*/
                v12 += 2; /*0x596513*/
                *(_DWORD *)((char *)dword_A8B230 + v13 * 4 - 4) = dword_ABE304[v13 - 1137]; /*0x59651a*/
                v11 = dword_A8B230; /*0x59651e*/
                if ( v10 >= *((_DWORD *)dword_A8B230 + 1103) ) /*0x59652a*/
                  break; /*0x59652a*/
              }
            }
            v11[1099] = dword_ABDFD4; /*0x596531*/
            *((_DWORD *)dword_A8B230 + 1100) = dword_ABDFD0; /*0x596543*/
            *((_DWORD *)dword_A8B230 + 1101) = dword_ABEC90; /*0x596554*/
            *((_DWORD *)dword_A8B230 + 1102) = dword_ABECD0; /*0x596565*/
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
          String = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596631*/
          wcscpy(&unk_ABE050, String); /*0x59663c*/
          RandomMap::Generate((int *)byte_ABDFD8, 1, hWnd); /*0x59664c*/
          MiniMap::Render((char **)dword_ABE154); /*0x596657*/
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
          qmemcpy(v45, byte_ABDFD8, 0x178u); /*0x596742*/
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_887640 + 16))(dword_887640); /*0x59674c*/
          Timer::PumpMessages((HWND *)dword_87F770); /*0x596755*/
          PostMessageA(hWnd, 0xFu, 0, 0); /*0x596761*/
          return 0; /*0x59676d*/
        }
        return 0; /*0x596c48*/
      }
      Skirmish::ReadSettings(byte_ABDFD8, hWnd); /*0x596776*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x596781*/
      dword_ABE010 = (unsigned int)Random::Range(Randomizer_Global, 0, 100) >= 0x32; /*0x59679e*/
      dword_ABE014 = Random::Range(Randomizer_Global, 1, 4); /*0x5967b7*/
      dword_ABE020 = Random::Range(Randomizer_Global, 0, 3); /*0x5967ca*/
      dword_ABE018 = Random::Range(Randomizer_Global, 0, 3); /*0x5967dd*/
      dword_ABE03C = Random::Range(Randomizer_Global, 0, 3); /*0x5967f3*/
      dword_ABE040 = dword_ABE03C; /*0x5967f8*/
      Skirmish::RandomizeSettings(byte_ABDFD8, dword_ABE014); /*0x5967fd*/
      v46 = GetStringCSF(aTxtRandomMapDe, 0, aDRa2mdpostMapg, 3934); /*0x596813*/
      wcscpy(&unk_ABE050, v46); /*0x59681e*/
      dword_ABE04C = Random::Range(Randomizer_Global, 0, 0xFFFF); /*0x59683c*/
      SettingsClass::ClampValues((int *)byte_ABDFD8); /*0x596841*/
      RandomMap::SetupDialog(byte_ABDFD8, hWnd); /*0x59684c*/
      v47 = dword_ABE154; /*0x596851*/
      if ( dword_ABE154 ) /*0x596859*/
      {
        ComPtr::Dtor(dword_ABE154); /*0x59685d*/
        __3_YAXPAX_Z(v47); /*0x596863*/
      }
      dword_ABE154 = 0; /*0x596877*/
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



// ==== 0x00596C70  Skirmish::ReadSettings  this=Skirmish  sig=csp ====
int __thiscall Skirmish::ReadSettings(Skirmish *this, HWND hDlg)
{
  LRESULT v4; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  LRESULT v7; // eax
  LRESULT v8; // eax
  LRESULT v9; // eax
  LRESULT v10; // eax
  LRESULT v11; // eax
  HWND DlgItem; // eax
  LRESULT v13; // eax
  void *v14; // edi
  LRESULT v16; // [esp-8h] [ebp-1Ch]
  LRESULT v17; // [esp-8h] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-4h]
  int v19; // [esp+10h] [ebp-4h]
  int v20; // [esp+10h] [ebp-4h]
  int v21; // [esp+10h] [ebp-4h]
  int v22; // [esp+10h] [ebp-4h]
  HWND hDlga; // [esp+18h] [ebp+4h]
  HWND hDlgb; // [esp+18h] [ebp+4h]
  HWND hDlgc; // [esp+18h] [ebp+4h]
  HWND hDlgd; // [esp+18h] [ebp+4h]
  HWND hDlge; // [esp+18h] [ebp+4h]
  HWND hDlgf; // [esp+18h] [ebp+4h]

  v18 = this->q03C; /*0x596c8a*/
  hDlga = GetDlgItem(hDlg, 1029); /*0x596ca2*/
  v4 = SendMessageA(hDlga, 0x147u, 0, 0); /*0x596ca6*/
  v5 = SendMessageA(hDlga, 0x150u, v4, 0); /*0x596cb3*/
  this->q03C = v5; /*0x596cb9*/
  if ( v18 != v5 ) /*0x596cbe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596cc0*/
  v19 = this->u32_38; /*0x596cd0*/
  hDlgb = GetDlgItem(hDlg, 1031); /*0x596ce2*/
  v16 = SendMessageA(hDlgb, 0x147u, 0, 0); /*0x596ce8*/
  v6 = SendMessageA(hDlgb, 0x150u, v16, 0); /*0x596cf3*/
  this->u32_38 = v6; /*0x596cf9*/
  if ( v19 != v6 ) /*0x596cfe*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d00*/
  v20 = this->u32_40; /*0x596d10*/
  hDlgc = GetDlgItem(hDlg, 1032); /*0x596d22*/
  v7 = SendMessageA(hDlgc, 0x147u, 0, 0); /*0x596d26*/
  v8 = SendMessageA(hDlgc, 0x150u, v7, 0); /*0x596d33*/
  this->u32_40 = v8; /*0x596d39*/
  if ( v20 != v8 ) /*0x596d3e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d40*/
  v21 = this->u32_48; /*0x596d50*/
  hDlgd = GetDlgItem(hDlg, 1002); /*0x596d62*/
  v9 = SendMessageA(hDlgd, 0x147u, 0, 0); /*0x596d66*/
  v10 = SendMessageA(hDlgd, 0x150u, v9, 0); /*0x596d73*/
  this->u32_48 = v10; /*0x596d79*/
  if ( v21 != v10 ) /*0x596d7e*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596d80*/
  v22 = this->u32_64; /*0x596d90*/
  hDlge = GetDlgItem(hDlg, 1030); /*0x596da2*/
  v17 = SendMessageA(hDlge, 0x147u, 0, 0); /*0x596da8*/
  v11 = SendMessageA(hDlge, 0x150u, v17, 0); /*0x596db3*/
  this->u32_64 = v11; /*0x596db9*/
  this->u32_68 = v11; /*0x596dbe*/
  if ( v22 != v11 ) /*0x596dc1*/
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596dc3*/
  hDlgf = (HWND)this->u32_50; /*0x596dd3*/
  DlgItem = GetDlgItem(hDlg, 1003); /*0x596dd7*/
  v13 = SendMessageA(DlgItem, 0x400u, 0, 0); /*0x596de3*/
  this->u32_50 = v13; /*0x596de9*/
  if ( hDlgf == (HWND)v13 ) /*0x596dee*/
  {
    if ( !g_MissionQueueFrame.globalVariables[88] ) /*0x596e00*/
      return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e00*/
  }
  else
  {
    g_MissionQueueFrame.globalVariables[88] = 1; /*0x596df0*/
  }
  Skirmish::RandomizeSettings(this, this->q03C); /*0x596e08*/
  v14 = (void *)g_MissionQueueFrame.briefing[451]; /*0x596e0d*/
  if ( g_MissionQueueFrame.briefing[451] ) /*0x596e15*/
  {
    ComPtr::Dtor((ComPtr *)g_MissionQueueFrame.briefing[451]); /*0x596e19*/
    __3_YAXPAX_Z(v14); /*0x596e1f*/
  }
  g_MissionQueueFrame.briefing[451] = 0; /*0x596e27*/
  g_MissionQueueFrame.globalVariables[88] = 0; /*0x596e31*/
  return SettingsClass::ClampValues((SettingsClass *)this); /*0x596e3f*/
}



// ==== 0x00596E50  RandomMap::SetupDialog  this=RandomMap  sig=csp ====
int __thiscall RandomMap::SetupDialog(RandomMap *this, HWND hDlg)
{
  HWND i; // edi
  LPARAM v3; // ebp
  int *p_LoopStart; // ebx
  wchar_t *StringCSF; // eax
  LRESULT v6; // eax
  wchar_t *v7; // eax
  LRESULT v8; // eax
  HWND j; // edi
  LPARAM v10; // ebp
  wchar_t **p_Next; // ebx
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
  RandomMap *v28; // ebp
  wchar_t *v29; // eax
  LRESULT v30; // eax
  HWND n; // edi
  char *pad_2A0; // ebx
  wchar_t *v33; // eax
  LRESULT v34; // eax
  wchar_t *v35; // eax
  LRESULT v36; // eax
  HWND DlgItem; // edi
  HWND v38; // eax
  LPARAM v39; // ebx
  HWND v40; // edi
  int result; // eax
  LPARAM lParama; // [esp+10h] [ebp-4h]

  SettingsClass::ClampValues((SettingsClass *)this); /*0x596e59*/
  for ( i = GetDlgItem(hDlg, 1002); SendMessageA(i, 0x146u, 0, 0) > 0; SendMessageA(i, 0x144u, 0, 0) ) /*0x596e76*/
    ; /*0x596e90*/
  v3 = 0; /*0x596ea2*/
  p_LoopStart = &stru_82ADA8.LoopStart; /*0x596ea4*/
  do /*0x596edb*/
  {
    StringCSF = GetStringCSF((wchar_t *)*p_LoopStart, 0, &stru_82BA00.?[11], 4883); /*0x596eb7*/
    v6 = SendMessageA(i, 0x4C2u, 0, (LPARAM)StringCSF); /*0x596ec5*/
    SendMessageA(i, 0x151u, v6, v3); /*0x596ecf*/
    ++p_LoopStart; /*0x596ed1*/
    ++v3; /*0x596ed4*/
  }
  while ( (int)p_LoopStart < (int)&stru_82ADA8.Next ); /*0x596edb*/
  v7 = GetStringCSF( /*0x596ef7*/
         *((wchar_t **)&stru_82ADA8.LoopStart + (int)this->RandomMap_field_0x48),
         0,
         &stru_82BA00.?[11],
         4887);
  v8 = SendMessageA(i, 0x4BEu, 0, (LPARAM)v7); /*0x596f05*/
  SendMessageA(i, 0x14Eu, v8, 0); /*0x596f10*/
  for ( j = GetDlgItem(hDlg, 1030); SendMessageA(j, 0x146u, 0, 0) > 0; SendMessageA(j, 0x144u, 0, 0) ) /*0x596f24*/
    ; /*0x596f3e*/
  v10 = 0; /*0x596f50*/
  p_Next = (wchar_t **)&stru_82ADA8.Next; /*0x596f52*/
  do /*0x596f89*/
  {
    v12 = GetStringCSF(*p_Next, 0, &stru_82BA00.?[11], 4898); /*0x596f65*/
    v13 = SendMessageA(j, 0x4C2u, 0, (LPARAM)v12); /*0x596f73*/
    SendMessageA(j, 0x151u, v13, v10); /*0x596f7d*/
    ++p_Next; /*0x596f7f*/
    ++v10; /*0x596f82*/
  }
  while ( (int)p_Next < (int)&stru_82ADA8.TranslucencyDetailLevel ); /*0x596f89*/
  v14 = GetStringCSF(*((wchar_t **)&stru_82ADA8.Next + *(_DWORD *)&this->__pad_4C[24]), 0, &stru_82BA00.?[11], 4902); /*0x596fa5*/
  v15 = SendMessageA(j, 0x4BEu, 0, (LPARAM)v14); /*0x596fb3*/
  SendMessageA(j, 0x14Eu, v15, 0); /*0x596fbe*/
  for ( k = GetDlgItem(hDlg, 1029); SendMessageA(k, 0x146u, 0, 0) > 0; SendMessageA(k, 0x144u, 0, 0) ) /*0x596fd2*/
    ; /*0x596fec*/
  v17 = 1; /*0x596ffe*/
  v18 = (wchar_t **)&stru_82ADA8.?[19]; /*0x597003*/
  do /*0x59703a*/
  {
    v19 = GetStringCSF(*v18, 0, &stru_82BA00.?[11], 4914); /*0x597016*/
    v20 = SendMessageA(k, 0x4C2u, 0, (LPARAM)v19); /*0x597024*/
    SendMessageA(k, 0x151u, v20, v17); /*0x59702e*/
    ++v18; /*0x597030*/
    ++v17; /*0x597033*/
  }
  while ( (int)v18 < (int)stru_82ADA8.__pad_2A0 ); /*0x59703a*/
  v21 = GetStringCSF((wchar_t *)stru_82ADA8.?[this->RandomMap_field_0x3C[0] + 18], 0, &stru_82BA00.?[11], 4918); /*0x597056*/
  v22 = SendMessageA(k, 0x4BEu, 0, (LPARAM)v21); /*0x597064*/
  SendMessageA(k, 0x14Eu, v22, 0); /*0x59706f*/
  for ( m = GetDlgItem(hDlg, 1031); SendMessageA(m, 0x146u, 0, 0) > 0; SendMessageA(m, 0x144u, 0, 0) ) /*0x597083*/
    ; /*0x59709d*/
  v24 = 0; /*0x5970af*/
  v25 = (wchar_t *)"Name:Temperate"; /*0x5970b1*/
  do /*0x5970e8*/
  {
    v26 = GetStringCSF(v25, 0, &stru_82BA00.?[11], 4930); /*0x5970c4*/
    v27 = SendMessageA(m, 0x4C2u, 0, (LPARAM)v26); /*0x5970d2*/
    SendMessageA(m, 0x151u, v27, v24); /*0x5970dc*/
    v25 += 56; /*0x5970de*/
    ++v24; /*0x5970e1*/
  }
  while ( (int)v25 < (int)"Name:Urban" ); /*0x5970e8*/
  v28 = this; /*0x5970ea*/
  v29 = GetStringCSF((wchar_t *)&aNameTemperate[56 * this->RandomMap_field_0x38[0]], 0, &stru_82BA00.?[11], 4934); /*0x59710f*/
  v30 = SendMessageA(m, 0x4BEu, 0, (LPARAM)v29); /*0x59711d*/
  SendMessageA(m, 0x14Eu, v30, 0); /*0x597128*/
  for ( n = GetDlgItem(hDlg, 1032); SendMessageA(n, 0x146u, 0, 0) > 0; SendMessageA(n, 0x144u, 0, 0) ) /*0x59713c*/
    ; /*0x597156*/
  lParama = 0; /*0x597168*/
  pad_2A0 = stru_82ADA8.__pad_2A0; /*0x597170*/
  do /*0x5971b3*/
  {
    v33 = GetStringCSF(*(wchar_t **)pad_2A0, 0, &stru_82BA00.?[11], 4945); /*0x597183*/
    v34 = SendMessageA(n, 0x4C2u, 0, (LPARAM)v33); /*0x597191*/
    SendMessageA(n, 0x151u, v34, lParama); /*0x59719f*/
    pad_2A0 += 4; /*0x5971a5*/
    ++lParama; /*0x5971af*/
  }
  while ( (int)pad_2A0 < (int)&stru_82ADA8.Rate ); /*0x5971b3*/
  v35 = GetStringCSF(*(wchar_t **)&stru_82ADA8.__pad_2A0[4 * v28->RandomMap_field_0x40[0]], 0, &stru_82BA00.?[11], 4949); /*0x5971cb*/
  v36 = SendMessageA(n, 0x4BEu, 0, (LPARAM)v35); /*0x5971d9*/
  SendMessageA(n, 0x14Eu, v36, 0); /*0x5971e4*/
  DlgItem = GetDlgItem(hDlg, 1019); /*0x5971f9*/
  sprintf((char *const)&g_MissionQueueFrame.localVariables[135], "%d", *(_DWORD *)&v28->__pad_4C[40]); /*0x597206*/
  SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&g_MissionQueueFrame.localVariables[135]); /*0x59721b*/
  v38 = GetDlgItem(hDlg, 1003); /*0x597223*/
  v39 = *(_DWORD *)&v28->__pad_4C[4]; /*0x597229*/
  v40 = v38; /*0x597231*/
  SendMessageA(v38, 0x406u, 1u, 524290); /*0x59723b*/
  result = SendMessageA(v40, 0x405u, 1u, v39); /*0x597246*/
  *(_DWORD *)&v28->__pad_4C[4] = v39; /*0x597249*/
  return result; /*0x597248*/
}



// ==== 0x00597260  Skirmish::RandomizeSettings  this=Skirmish  sig=csp ====
int __thiscall Skirmish::RandomizeSettings(Skirmish *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax

  this->u32_4C = Random::Range( /*0x597282*/
                             &Randomizer_Global,
                             *((_DWORD *)&stru_82ADA8.BounceAnim + a2),
                             stru_82ADA8.Elasticity[a2 + 1]);
  this->ptr_44 = Random::Range(&Randomizer_Global, stru_82ADA8.Layer[a2], dword_82B120[a2]); /*0x59729f*/
  this->ptr_60 = Random::Range( /*0x5972bc*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[a2 + 175],
                             *(&stru_82ADA8.RunningFrames + a2));
  this->u32_6C = Random::Range( /*0x5972d9*/
                             &Randomizer_Global,
                             g_MissionQueueFrame.localVariables[a2 + 165],
                             stru_82ADA8.MaxXYVel[a2]);
  this->ptr_70 = Random::Range( /*0x5972f6*/
                             &Randomizer_Global,
                             *(&stru_82ADA8.TranslucencyDetailLevel + a2),
                             stru_82ADA8.RandomRate[a2 + 2]);
  this->u32_54 = 20 * this->u32_40; /*0x59730b*/
  this->u32_58 = Random::Range(&Randomizer_Global, 0, 100); /*0x597313*/
  v3 = *(_DWORD *)(g_MissionQueueFrame.briefingCsf[6] + 4 * a2); /*0x597322*/
  v4 = *(_DWORD *)(g_MissionQueueFrame.percent + 4 * a2); /*0x597325*/
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
  this->u32_5C = Random::Range(&Randomizer_Global, v3, v4); /*0x59736a*/
  result = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x59736d*/
  this->ptr_74 = result; /*0x597372*/
  return result; /*0x597375*/
}



// ==== 0x00597430  ObjectClass::Team_Start  this=ObjectClass  sig=csp ====
_DWORD *__thiscall Team_Start_597430(ObjectClass *this)
{
  _DWORD *WDTTerritoryClass; // eax
  int v3; // ecx
  int v4; // eax
  void **v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+10h] [ebp-Ch]
  rc_ptr v8[4]; // [esp+14h] [ebp-8h] BYREF

  ComPtr::Constructor((ComPtr *)&v6); /*0x59743c*/
  v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x59744e*/
  if ( *(_DWORD *)&dword_A8B238 == 4 && dword_A8B244 == 3 ) /*0x59745f*/
  {
    WDTTerritoryClass = FindWDTTerritoryClass(v8, *(int *)dword_A8B240); /*0x59746b*/
    ComPtr::Set((ComPtr *)&v6, WDTTerritoryClass[1]); /*0x597478*/
    *(_DWORD *)v8 = &rc_ptr<WDTTerritory>::`vftable'; /*0x597481*/
    ComPtr::Release((ComPtr *)v8); /*0x597485*/
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
      v4 = Random::Range(&Randomizer_Global, 0, 0xFFFF); /*0x5974ab*/
      v3 = v7; /*0x5974b0*/
    }
    *(_DWORD *)&this->isOnMap = v4; /*0x5974bb*/
    switch ( *(_BYTE *)(v3 + 18) ) /*0x5974d1*/
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
    switch ( *(_BYTE *)(v3 + 19) ) /*0x5974f7*/
    {
      case 0: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 0; /*0x5974fe*/
        break; /*0x597505*/
      case 2: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 2; /*0x597507*/
        break; /*0x59750a*/
      case 3: /*0x5974f7*/
        *(_DWORD *)&this->bombVisible = 3; /*0x59750c*/
        break; /*0x59750f*/
      default:
        *(_DWORD *)&this->bombVisible = 1; /*0x597511*/
        break; /*0x597511*/
    }
    this->customSound_controller[0] = 4; /*0x597516*/
    switch ( *(_BYTE *)(v3 + 30) ) /*0x597524*/
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
    this->ambientSoundController[0] = *(unsigned __int8 *)(v3 + 28); /*0x59754d*/
    this->attachedBomb = (BombClass *)*(unsigned __int8 *)(v3 + 29); /*0x597555*/
    this->estimatedHealth = *(unsigned __int8 *)(v3 + 33); /*0x59755d*/
    this->health = *(unsigned __int8 *)(v3 + 36); /*0x597565*/
    this->ambientSoundController[2] = *(unsigned __int8 *)(v3 + 39); /*0x59756d*/
    this->ambientSoundController[4] = *(unsigned __int8 *)(v3 + 42); /*0x597575*/
    this->customSound_controller[1] = *(unsigned __int8 *)(v3 + 45); /*0x59757d*/
    this->customSound_controller[2] = *(unsigned __int8 *)(v3 + 48); /*0x597585*/
    this->customSound_controller[3] = *(unsigned __int8 *)(v3 + 51); /*0x59758d*/
    this->customSound_controller[4] = *(unsigned __int8 *)(v3 + 54); /*0x597593*/
    this->ambientSoundController[1] = *(_DWORD *)(v3 + 24); /*0x597599*/
  }
  v6 = &rc_ptr<WDTTerritory>::`vftable'; /*0x5975a0*/
  return ComPtr::Release((ComPtr *)&v6); /*0x5975a9*/
}



// ==== 0x005975E0  SettingsClass::ClampValues  this=SettingsClass  sig=csp ====
int __thiscall SettingsClass::ClampValues(SettingsClass *this)
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

  v1 = *((_DWORD *)this + 16); /*0x5975e0*/
  if ( v1 < 4 ) /*0x5975ef*/
  {
    if ( v1 < 0 ) /*0x5975f8*/
      *((_DWORD *)this + 16) = 0; /*0x5975fa*/
  }
  else
  {
    *((_DWORD *)this + 16) = 3; /*0x5975f1*/
  }
  v2 = *((_DWORD *)this + 15); /*0x5975fd*/
  if ( v2 < 5 ) /*0x597603*/
  {
    if ( v2 < 0 ) /*0x597610*/
      *((_DWORD *)this + 15) = 0; /*0x597612*/
  }
  else
  {
    *((_DWORD *)this + 15) = 4; /*0x597605*/
  }
  v3 = *((_DWORD *)this + 18); /*0x597615*/
  if ( v3 < 4 ) /*0x59761b*/
  {
    if ( v3 < 0 ) /*0x597624*/
      *((_DWORD *)this + 18) = 0; /*0x597626*/
  }
  else
  {
    *((_DWORD *)this + 18) = 3; /*0x59761d*/
  }
  v4 = *((_DWORD *)this + 17); /*0x597629*/
  if ( v4 <= 100 ) /*0x597633*/
  {
    if ( v4 < 0 ) /*0x59763c*/
      *((_DWORD *)this + 17) = 0; /*0x59763e*/
  }
  else
  {
    *((_DWORD *)this + 17) = 100; /*0x597635*/
  }
  v5 = *((_DWORD *)this + 19); /*0x597641*/
  if ( v5 <= 100 ) /*0x597646*/
  {
    if ( v5 < 0 ) /*0x59764f*/
      *((_DWORD *)this + 19) = 0; /*0x597651*/
  }
  else
  {
    *((_DWORD *)this + 19) = 100; /*0x597648*/
  }
  v6 = *((_DWORD *)this + 20); /*0x597654*/
  if ( v6 <= 8 ) /*0x59765a*/
  {
    if ( v6 < 2 ) /*0x597668*/
      *((_DWORD *)this + 20) = 2; /*0x59766a*/
  }
  else
  {
    *((_DWORD *)this + 20) = 8; /*0x59765c*/
  }
  v7 = *((_DWORD *)this + 21); /*0x597671*/
  if ( v7 <= 100 ) /*0x597676*/
  {
    if ( v7 < 1 ) /*0x597680*/
      *((_DWORD *)this + 21) = 1; /*0x597682*/
  }
  else
  {
    *((_DWORD *)this + 21) = 100; /*0x597678*/
  }
  v8 = *((_DWORD *)this + 22); /*0x597689*/
  if ( v8 <= 100 ) /*0x59768e*/
  {
    if ( v8 < 0 ) /*0x597697*/
      *((_DWORD *)this + 22) = 0; /*0x597699*/
  }
  else
  {
    *((_DWORD *)this + 22) = 100; /*0x597690*/
  }
  v9 = *((_DWORD *)this + 23); /*0x59769c*/
  if ( v9 <= 100 ) /*0x5976a1*/
  {
    if ( v9 < 0 ) /*0x5976aa*/
      *((_DWORD *)this + 23) = 0; /*0x5976ac*/
  }
  else
  {
    *((_DWORD *)this + 23) = 100; /*0x5976a3*/
  }
  v10 = *((_DWORD *)this + 24); /*0x5976af*/
  if ( v10 <= 100 ) /*0x5976b4*/
  {
    if ( v10 < 0 ) /*0x5976bd*/
      *((_DWORD *)this + 24) = 0; /*0x5976bf*/
  }
  else
  {
    *((_DWORD *)this + 24) = 100; /*0x5976b6*/
  }
  v11 = *((_DWORD *)this + 25); /*0x5976c2*/
  if ( v11 < 4 ) /*0x5976c8*/
  {
    if ( v11 < 0 ) /*0x5976d1*/
      *((_DWORD *)this + 25) = 0; /*0x5976d3*/
  }
  else
  {
    *((_DWORD *)this + 25) = 3; /*0x5976ca*/
  }
  v12 = *((_DWORD *)this + 26); /*0x5976d6*/
  if ( v12 < 4 ) /*0x5976dc*/
  {
    if ( v12 < 0 ) /*0x5976e5*/
      *((_DWORD *)this + 26) = 0; /*0x5976e7*/
  }
  else
  {
    *((_DWORD *)this + 26) = 3; /*0x5976de*/
  }
  v13 = *((_DWORD *)this + 27); /*0x5976ea*/
  if ( v13 <= 100 ) /*0x5976ef*/
  {
    if ( v13 < 0 ) /*0x5976f8*/
      *((_DWORD *)this + 27) = 0; /*0x5976fa*/
  }
  else
  {
    *((_DWORD *)this + 27) = 100; /*0x5976f1*/
  }
  v14 = *((_DWORD *)this + 28); /*0x5976fd*/
  if ( v14 <= 100 ) /*0x597702*/
  {
    if ( v14 < 0 ) /*0x59770b*/
      *((_DWORD *)this + 28) = 0; /*0x59770d*/
  }
  else
  {
    *((_DWORD *)this + 28) = 100; /*0x597704*/
  }
  result = *((_DWORD *)this + 29); /*0x597710*/
  if ( result <= 0xFFFF ) /*0x597718*/
  {
    if ( result < 0 ) /*0x597726*/
      *((_DWORD *)this + 29) = 0; /*0x597728*/
  }
  else
  {
    *((_DWORD *)this + 29) = 0xFFFF; /*0x59771b*/
  }
  return result; /*0x59771a*/
}



// ==== 0x00597730  MapSeed::ValidateName  this=MapSeed  sig=csp ====
int __thiscall MapSeed::ValidateName(char *this, int a2)
{
  int result; // eax

  if ( a2 ) /*0x597736*/
    return (*(int (__stdcall **)(int, char *))(this->q008)(a2, this + 120); /*0x597740*/
  LOBYTE(result) = ShowSaveLoadDialog((int)this, this + 120); /*0x597752*/
  return result; /*0x597744*/
}



// ==== 0x00597760  MapSeedClass::Release  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::Release(MapSeedClass *this, char *a2, wchar_t *Source)
{
  INIClass v5; // [esp+Ch] [ebp-ACh] BYREF
  CCFileClass v6; // [esp+4Ch] [ebp-6Ch] BYREF
  int v7[3]; // [esp+A4h] [ebp-14h] BYREF
  int v8; // [esp+B0h] [ebp-8h]

  if ( !a2 ) /*0x597776*/
    return 0; /*0x5979f9*/
  Debug::Log(); /*0x59778b*/
  CCFileClass::Construct(&v6, a2); /*0x597798*/
  v5.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x5977a6*/
  v5.sectionCount = (int)&GenericNode::`vftable'; /*0x5977aa*/
  v5.headNode[0] = 0; /*0x5977b2*/
  v5.headNode[1] = 0; /*0x5977b7*/
  v5.sectionHead[1] = 0; /*0x5977bb*/
  v5.sectionHead[2] = 0; /*0x5977bf*/
  *(_DWORD *)v5.__pad_20 = 0; /*0x5977c3*/
  *(_DWORD *)&v5.__pad_20[4] = 0; /*0x5977c7*/
  LinkedList::Prepend((LinkedList *)v5.sectionHead, (int)&v5.sectionCount); /*0x5977d3*/
  v5.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x5977da*/
  memset(&v5.__pad_20[8], 0, 13); /*0x5977e2*/
  v5.unknown38 = 0; /*0x5977f2*/
  v5.INIClass_field_3C = 0; /*0x5977f6*/
  *(_DWORD *)v5.__pad_0 = &INIClass::`vftable'; /*0x5977fa*/
  if ( Source ) /*0x597802*/
    wcscpy((wchar_t *)this + 60, Source); /*0x597809*/
  INIClass::SetWideAsHex(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_81AF8C.?[5], Source); /*0x597820*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[151], *((_DWORD *)this + 25), 0); /*0x597838*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Height, *((_DWORD *)this + 26), 0); /*0x597850*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[139], this->q014, 0); /*0x597868*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[131], *((_DWORD *)this + 29), 0); /*0x597880*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[123], *((_DWORD *)this + 15), 0); /*0x597898*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Theater, *((_DWORD *)this + 14), 0); /*0x5978b0*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Time, *((_DWORD *)this + 18), 0); /*0x5978c8*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[111], this->q01C, 0); /*0x5978e0*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[99], *((_DWORD *)this + 17), 0); /*0x5978f8*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[83], *((_DWORD *)this + 27), 0); /*0x597910*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[71], *((_DWORD *)this + 19), 0); /*0x597928*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], g_INI_Key_Tiberium, *((_DWORD *)this + 21), 0); /*0x597940*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[55], this->M16, 0); /*0x597958*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[43], *((_DWORD *)this + 23), 0); /*0x597970*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[27], this->q018, 0); /*0x597988*/
  INIClass::SetInt(v5.__pad_0, (unsigned __int8 *)&stru_82BA00.?[8], &stru_82BA00.?[15], this->q010, 0); /*0x5979a0*/
  INIClass::SaveToPipe(&v5, (int)&v6); /*0x5979ae*/
  HashTable::DestroyHashTableINIClass(&v5); /*0x5979b7*/
  *(_DWORD *)v6.CDFileClass = &CCFileClass::`vftable'; /*0x5979c3*/
  v8 = 0; /*0x5979cb*/
  Vector::Clear((int)v7); /*0x5979d2*/
  *(_DWORD *)v6.CDFileClass = &off_7E1668; /*0x5979db*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x5979e3*/
  return 1; /*0x5979e9*/
}



// ==== 0x00597A10  Scenario::LoadOrReloadOptions  this=Scenario  sig=csp ====
char __thiscall Scenario::LoadOrReloadOptions(Scenario *this, int a2)
{
  if ( a2 ) /*0x597a16*/
    return (*(char (__thiscall **)(Scenario *, int))(this->Scenario_field_0x0 + 4))(this, a2); /*0x597a1b*/
  else
    return (unsigned __int8)LoadOptions::Run((LoadOptions *)this) != 0; /*0x597a28*/
}



// ==== 0x00597A30  MapSeedClass::AddRef  this=MapSeedClass  sig=csp ====
char __thiscall MapSeedClass::AddRef(MapSeedClass *this, char *Source)
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
  INIClass v25; // [esp+Ch] [ebp-ACh] BYREF
  CCFileClass v26; // [esp+4Ch] [ebp-6Ch] BYREF
  int v27[3]; // [esp+A4h] [ebp-14h] BYREF
  int v28; // [esp+B0h] [ebp-8h]

  if ( Source ) /*0x597a46*/
  {
    Debug::Log(); /*0x597a52*/
    CCFileClass::Construct(&v26, Source); /*0x597a5f*/
    v25.sectionHead[0] = (int)&GenericNode::`vftable'; /*0x597a6d*/
    v25.sectionCount = (int)&GenericNode::`vftable'; /*0x597a71*/
    v25.headNode[0] = 0; /*0x597a79*/
    v25.headNode[1] = 0; /*0x597a7e*/
    v25.sectionHead[1] = 0; /*0x597a82*/
    v25.sectionHead[2] = 0; /*0x597a86*/
    *(_DWORD *)v25.__pad_20 = 0; /*0x597a8a*/
    *(_DWORD *)&v25.__pad_20[4] = 0; /*0x597a8e*/
    LinkedList::Prepend((LinkedList *)v25.sectionHead, (int)&v25.sectionCount); /*0x597a9a*/
    v25.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x597aa9*/
    memset(&v25.__pad_20[8], 0, 13); /*0x597ab1*/
    v25.unknown38 = 0; /*0x597ac1*/
    v25.INIClass_field_3C = 0; /*0x597ac5*/
    *(_DWORD *)v25.__pad_0 = &INIClass::`vftable'; /*0x597ac9*/
    if ( FileStraw::Open((FileStraw *)&v25, (int)&v26, 0) ) /*0x597ad1*/
    {
      StringCSF = GetStringCSF((wchar_t *)stru_82BA00.?, 0, &stru_82BA00.?[11], 5433); /*0x597af8*/
      INIClass::ParseValue_Wide( /*0x597b0c*/
        &v25,
        (unsigned __int8 *)&stru_82BA00.?[8],
        (unsigned __int8 *)&stru_81AF8C.?[5],
        StringCSF,
        (wchar_t *)this + 60,
        0x80u);
      Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x597b23*/
                        (bool *)v25.__pad_0,
                        (unsigned __int8 *)&stru_82BA00.?[8],
                        (unsigned __int8 *)&stru_82BA00.?[151],
                        *((_DWORD *)this + 25));
      v5 = *((_DWORD *)this + 26); /*0x597b28*/
      *((_DWORD *)this + 25) = Int_Overwrite; /*0x597b2b*/
      v6 = INIClass::ReadInt_Overwrite( /*0x597b3d*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)g_INI_Key_Height,
             v5);
      v20 = this->q014; /*0x597b49*/
      *((_DWORD *)this + 26) = v6; /*0x597b54*/
      this->q014 = INIClass::ReadInt_Overwrite( /*0x597b5c*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[139],
                                 v20);
      v7 = INIClass::ReadInt_Overwrite( /*0x597b71*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)&stru_82BA00.?[131],
             *((_DWORD *)this + 29));
      v8 = *((_DWORD *)this + 15); /*0x597b76*/
      *((_DWORD *)this + 29) = v7; /*0x597b79*/
      v9 = INIClass::ReadInt_Overwrite( /*0x597b8b*/
             (bool *)v25.__pad_0,
             (unsigned __int8 *)&stru_82BA00.?[8],
             (unsigned __int8 *)&stru_82BA00.?[123],
             v8);
      v21 = *((_DWORD *)this + 14); /*0x597b97*/
      *((_DWORD *)this + 15) = v9; /*0x597ba2*/
      *((_DWORD *)this + 14) = INIClass::ReadInt_Overwrite( /*0x597baa*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)g_INI_Key_Theater,
                                 v21);
      v10 = INIClass::ReadInt_Overwrite( /*0x597bbf*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)g_INI_Key_Time,
              *((_DWORD *)this + 18));
      v11 = this->q01C; /*0x597bc4*/
      *((_DWORD *)this + 18) = v10; /*0x597bc7*/
      v12 = INIClass::ReadInt_Overwrite( /*0x597bd9*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[111],
              v11);
      v22 = *((_DWORD *)this + 17); /*0x597be5*/
      this->q01C = v12; /*0x597bf0*/
      *((_DWORD *)this + 17) = INIClass::ReadInt_Overwrite( /*0x597bf8*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[99],
                                 v22);
      v13 = INIClass::ReadInt_Overwrite( /*0x597c0d*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[83],
              *((_DWORD *)this + 27));
      v14 = *((_DWORD *)this + 19); /*0x597c12*/
      *((_DWORD *)this + 27) = v13; /*0x597c15*/
      v15 = INIClass::ReadInt_Overwrite( /*0x597c27*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[71],
              v14);
      v23 = *((_DWORD *)this + 21); /*0x597c33*/
      *((_DWORD *)this + 19) = v15; /*0x597c3e*/
      *((_DWORD *)this + 21) = INIClass::ReadInt_Overwrite( /*0x597c46*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)g_INI_Key_Tiberium,
                                 v23);
      v16 = INIClass::ReadInt_Overwrite( /*0x597c5b*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[55],
              this->M16);
      v17 = *((_DWORD *)this + 23); /*0x597c60*/
      this->M16 = v16; /*0x597c63*/
      v18 = INIClass::ReadInt_Overwrite( /*0x597c75*/
              (bool *)v25.__pad_0,
              (unsigned __int8 *)&stru_82BA00.?[8],
              (unsigned __int8 *)&stru_82BA00.?[43],
              v17);
      v24 = this->q018; /*0x597c81*/
      *((_DWORD *)this + 23) = v18; /*0x597c8c*/
      this->q018 = INIClass::ReadInt_Overwrite( /*0x597c94*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[27],
                                 v24);
      this->q010 = INIClass::ReadInt_Overwrite( /*0x597cb2*/
                                 (bool *)v25.__pad_0,
                                 (unsigned __int8 *)&stru_82BA00.?[8],
                                 (unsigned __int8 *)&stru_82BA00.?[15],
                                 this->q010);
      HashTable::DestroyHashTableINIClass(&v25); /*0x597cb5*/
      *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597cc1*/
      v28 = 0; /*0x597cc9*/
      Vector::Clear((int)v27); /*0x597cd0*/
      *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x597cd9*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597ce1*/
      return 1; /*0x597cf1*/
    }
    HashTable::DestroyHashTableINIClass(&v25); /*0x597cf8*/
    *(_DWORD *)v26.CDFileClass = &CCFileClass::`vftable'; /*0x597d04*/
    v28 = 0; /*0x597d0c*/
    Vector::Clear((int)v27); /*0x597d13*/
    *(_DWORD *)v26.CDFileClass = &off_7E1668; /*0x597d1c*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v26); /*0x597d24*/
  }
  return 0; /*0x597ce6*/
}



// ==== 0x00597D40  j_Options::GetValue  this=j_Options  sig=csp ====
// attributes: thunk
bool __thiscall j_Options::GetValue(j_Options *this)
{
  return Options::PrepareSaveLoadDlg((Options *)this);
}



// ==== 0x00597D50  MapSeedClass::ddtor  this=MapSeedClass  sig=csp ====
bool __stdcall MapSeedClass::ddtor(MapSeedClass *this)
{
  return LoadOptions::ddtor(this->__pad_0); /*0x597d5a*/
}



// ==== 0x00597D60  MapSeedClass::LoadInfo  this=MapSeedClass  sig=csp ====
char __stdcall RandomMap::LoadInfo(MapSeedClass *this, int a2)
{
  char *v2; // edi
  INIClass v4; // [esp+Ch] [ebp-1ACh] BYREF
  CCFileClass v5; // [esp+4Ch] [ebp-16Ch] BYREF
  int v6[3]; // [esp+A4h] [ebp-114h] BYREF
  int v7; // [esp+B0h] [ebp-108h]
  wchar_t Source[128]; // [esp+B8h] [ebp-100h] BYREF

  if ( !this ) /*0x597d74*/
    return 0; /*0x597d74*/
  if ( !a2 ) /*0x597d83*/
    return 0; /*0x597d83*/
  v2 = (char *)(a2 + 44); /*0x597d89*/
  if ( !_strcmpi((char *)(a2 + 44), &stru_82BA00.?) || !_strcmpi(v2, &stru_82BA00.?[17]) ) /*0x597da8*/
    return 0; /*0x597db2*/
  CCFileClass::Construct(&v5, v2); /*0x597dbd*/
  v4.headNode[0] = 0; /*0x597dc6*/
  v4.headNode[1] = 0; /*0x597dca*/
  GenericNode::Constructor((GenericNode *)v4.sectionHead); /*0x597dce*/
  GenericNode::Constructor((GenericNode *)&v4.sectionCount); /*0x597dd7*/
  LinkedList::Prepend((LinkedList *)v4.sectionHead, (int)&v4.sectionCount); /*0x597ded*/
  v4.headNode[2] = (int)&List<INIClass::INISection *>::`vftable'; /*0x597dfc*/
  memset(&v4.__pad_20[8], 0, 13); /*0x597e04*/
  v4.unknown38 = 0; /*0x597e14*/
  v4.INIClass_field_3C = 0; /*0x597e18*/
  *(_DWORD *)v4.__pad_0 = &INIClass::`vftable'; /*0x597e1c*/
  if ( !FileStraw::Open((FileStraw *)&v4, (int)&v5, 0) ) /*0x597e2b*/
  {
    HashTable::DestroyHashTableINIClass(&v4); /*0x597f38*/
    *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x597f44*/
    v7 = 0; /*0x597f4c*/
    Vector::Clear((int)v6); /*0x597f53*/
    *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f5c*/
    BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f64*/
    return 0; /*0x597f6b*/
  }
  if ( INIClass::ParseValue_Wide( /*0x597e58*/
         &v4,
         (unsigned __int8 *)&stru_82BA00.?[8],
         (unsigned __int8 *)&stru_81AF8C.?[5],
         &g_TypeClass_DefaultString,
         Source,
         0x80u) <= 0 )
  {
    *(_WORD *)this->__pad_0 = 0; /*0x597e7f*/
    *((_BYTE *)this + 437) = 1; /*0x597e82*/
    *((_BYTE *)this + 436) = 0; /*0x597e89*/
  }
  else
  {
    wcsncpy((wchar_t *)this, Source, 0x80u); /*0x597e68*/
    *((_BYTE *)this + 437) = 0; /*0x597e70*/
    *((_BYTE *)this + 436) = 1; /*0x597e76*/
  }
  *((_DWORD *)this + 72) = 0; /*0x597e9a*/
  *((_DWORD *)this + 73) = 0; /*0x597ea0*/
  strncpy((char *)this + 256, v2, 0x20u); /*0x597ea6*/
  if ( !strlen((const char *)this + 256) ) /*0x597ead*/
    strncpy((char *)this + 256, (const char *)(a2 + 304), 0x20u); /*0x597ecd*/
  *((_DWORD *)this + 108) = *(_DWORD *)(a2 + 24); /*0x597ee5*/
  *((_DWORD *)this + 107) = *(_DWORD *)(a2 + 20); /*0x597eee*/
  HashTable::DestroyHashTableINIClass(&v4); /*0x597ef4*/
  *(_DWORD *)v5.CDFileClass = &CCFileClass::`vftable'; /*0x597f00*/
  v7 = 0; /*0x597f08*/
  Vector::Clear((int)v6); /*0x597f0f*/
  *(_DWORD *)v5.CDFileClass = &off_7E1668; /*0x597f18*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v5); /*0x597f20*/
  return 1; /*0x597f26*/
}



// ==== 0x00597F80  MapSeedClass::Generate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::Generate(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[1], 0, &stru_82BA00.?[11], 5572); /*0x597f96*/
}



// ==== 0x00597FA0  MapSeedClass::GetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::GetCell(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[2], 0, &stru_82BA00.?[11], 5578); /*0x597fb6*/
}



// ==== 0x00597FC0  MapSeedClass::SetCell  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::SetCell(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[6], 0, &stru_82BA00.?[11], 5584); /*0x597fd6*/
}



// ==== 0x00597FE0  MapSeedClass::Validate  this=MapSeedClass  sig=csp ====
wchar_t *MapSeedClass::Validate(MapSeedClass *this)
{
  return GetStringCSF((wchar_t *)&stru_82BA00.?[11], 0, &stru_82BA00.?[11], 5590); /*0x597ff6*/
}



// ==== 0x00598000  sub_598000  this=-  sig=ida-proto ====
double sub_598000()
{
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10; /*0x598023*/
}



// ==== 0x00598030  Range_RandomInt  this=-  sig=csp ====
__int64 __fastcall Random_Range_Int(int a1, unsigned int a2)
{
  double v3; // st7
  __int64 result; // rax
  __int64 v5; // [esp+8h] [ebp-18h]
  __int64 v6; // [esp+8h] [ebp-18h]
  double v7; // [esp+18h] [ebp-8h]

  v5 = a2 - a1 + 1; /*0x59803e*/
  v3 = (double)v5; /*0x598046*/
  LODWORD(v5) = a1; /*0x59804a*/
  v7 = (double)v5; /*0x59805a*/
  do /*0x598089*/
  {
    v6 = (unsigned int)Random::State(&unk_ABE890); /*0x598068*/
    result = Math::RoundToInt((double)v6 * v3 * 2.328306437080797e-10 + v7); /*0x598082*/
  }
  while ( (unsigned int)result > a2 ); /*0x598089*/
  return result; /*0x59808b*/
}



// ==== 0x005980A0  ObjectClass::method_5980A0  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_5980A0(_DWORD *this, int a2)
{
  this->ptr_C = 0; /*0x5980a4*/
  *(_BYTE *)this = 0; /*0x5980a7*/
  this->ptr_10 = 0; /*0x5980a9*/
  this->uniqueId = a2; /*0x5980b0*/
  return this; /*0x5980b3*/
}



// ==== 0x005980C0  Random::Gaussian  this=Random  sig=csp ====
int __thiscall Random::Gaussian(int *this)
{
  int result; // eax
  double v6; // [esp+0h] [ebp-20h]

  _ESI = this; /*0x5980ca*/
  if ( *(_BYTE *)this ) /*0x5980cc*/
  {
    *(_BYTE *)this = 0; /*0x5980d1*/
    __asm { fld qword ptr [esi+8] } /*0x5980d4*/
  }
  else
  {
    while ( 1 ) /*0x5980de*/
    {
      ((void (*)(void))_ESI[4])(); /*0x5980de*/
      __asm /*0x5980e1*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fstp [esp+18h+var_10]
      }
      ((void (*)(void))_ESI[4])(); /*0x5980ed*/
      __asm /*0x5980f0*/
      {
        fadd st, st
        fsub ds:dbl_7E1718
        fst [esp+18h+var_8]
        fld st
        fmulp st(1), st
        fld [esp+18h+var_10]
        fmul [esp+18h+var_10]
        faddp st(1), st
        fcom ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x598115*/
      {
        __asm /*0x598117*/
        {
          fcom ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x4000) == 0 ) /*0x598122*/
          break; /*0x598122*/
      }
      __asm { fstp st } /*0x5980dc*/
    }
    __asm /*0x598124*/
    {
      fld st
      fldln2
    }
    __asm
    {
      fxch st(1)
      fyl2x
      fld st
      fchs
      fsub st, st(1)
      fdiv st, st(2)
      fstp [esp+20h+var_20]; double
      fstp st
      fstp st
    }
    result = Math::Sqrt(v6); /*0x59813e*/
    __asm /*0x598143*/
    {
      fld st
      fmul [esp+20h+var_8]
    }
    *(_BYTE *)_ESI = 1; /*0x59814c*/
    __asm { fstp qword ptr [esi+8] } /*0x59814f*/
    *((double *)_ESI + 1) = _RT1; /*0x59814f*/
    __asm { fmul [esp+14h+var_10] } /*0x598153*/
  }
  return result; /*0x5980d7*/
}



// ==== 0x005981F0  RandomMap::LoadConfig  this=RandomMap  sig=csp ====
int __thiscall RandomMap::LoadConfig(RandomMap *this)
{
  INIClass *v2; // eax
  INIClass *v3; // edi
  int v4; // eax
  int v5; // edx
  int Int_Overwrite; // eax
  int v7; // edx
  DynamicVectorClass *v8; // eax
  DynamicVectorClass *v9; // eax
  DynamicVectorClass *v10; // eax
  DynamicVectorClass *v11; // eax
  DynamicVectorClass *v12; // eax
  DynamicVectorClass *v13; // eax
  DynamicVectorClass *v14; // eax
  DynamicVectorClass *v15; // eax
  DynamicVectorClass *v16; // eax
  DynamicVectorClass *v17; // eax
  DynamicVectorClass *v18; // eax
  char *i; // eax
  int v20; // esi
  char *j; // eax
  AbstractClass *DynamicVector_field_0x1C; // esi
  DynamicVectorClass v24; // [esp-1Ch] [ebp-15Ch] BYREF
  int v25; // [esp-4h] [ebp-144h]
  DynamicVectorClass *IntList; // [esp+10h] [ebp-130h] BYREF
  DynamicVector v27; // [esp+14h] [ebp-12Ch] BYREF
  int v28; // [esp+50h] [ebp-F0h]
  CCFileClass v29; // [esp+54h] [ebp-ECh] BYREF
  char String[128]; // [esp+C0h] [ebp-80h] BYREF

  CCFileClass::Construct(&v29, (char *)&stru_82BA00.?[1]); /*0x598205*/
  v2 = (INIClass *)__2_YAPAXI_Z(0x58u); /*0x59820c*/
  v3 = v2; /*0x598211*/
  if ( v2 ) /*0x598218*/
  {
    INIClass::INIClass(v2); /*0x59821c*/
    v3[1].__pad_0[0] = 0; /*0x598221*/
    *(_DWORD *)v3->__pad_0 = &CCINIClass_Vtable; /*0x598225*/
  }
  else
  {
    v3 = 0; /*0x59822d*/
  }
  INIClass::ResetSection(v3); /*0x598231*/
  CCINIClass::Load((CCINIClass *)v3, (int)&v29, 0, 0); /*0x598241*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[316] + 12))(&this->__pad_4C[316]); /*0x598254*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 161) + 12))((char *)this + 644); /*0x598265*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 168) + 12))((char *)this + 672); /*0x598274*/
  v4 = *((_DWORD *)this + 177); /*0x598277*/
  *(_DWORD *)v27.__pad_20 = (char *)this + 708; /*0x598283*/
  (*(void (**)(void))(v4 + 12))(); /*0x598287*/
  v5 = this->u32_B8; /*0x59828a*/
  v27.DynamicVector_field_0x1C = (AbstractClass *)((char *)this + 736); /*0x598296*/
  (*(void (**)(void))(v5 + 12))(); /*0x59829a*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[344] + 12))(&this->__pad_4C[344]); /*0x5982a9*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)&this->__pad_4C[372] + 12))(&this->__pad_4C[372]); /*0x5982b8*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x5982d0*/
                    (bool *)v3->__pad_0,
                    off_82B134,
                    (unsigned __int8 *)&stru_82BA00.?,
                    *((_DWORD *)this + 175));
  v7 = this->u32_2C; /*0x5982d5*/
  *((_DWORD *)this + 175) = Int_Overwrite; /*0x5982db*/
  this->u32_2C = INIClass::ReadInt_Overwrite( /*0x5982f7*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[1],
                              v7);
  IntList = &v24; /*0x598300*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[316]); /*0x598304*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598316*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59832e*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[316], IntList); /*0x598332*/
  v8 = IntList; /*0x598337*/
  *(_DWORD *)&this->__pad_4C[332] = IntList->Count; /*0x59833e*/
  *(_DWORD *)&this->__pad_4C[336] = v8->CapacityIncrement; /*0x598344*/
  *(_DWORD *)&this->__pad_4C[340] = *(_DWORD *)v8[1].VectorClass; /*0x59834a*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x598356*/
  VectorClass::Destroy((int)&v27); /*0x59835a*/
  IntList = &v24; /*0x598364*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 161); /*0x598369*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x59837b*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598393*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 23, IntList); /*0x598397*/
  v9 = IntList; /*0x59839c*/
  *((_DWORD *)this + 165) = IntList->Count; /*0x5983a3*/
  *((_DWORD *)this + 166) = v9->CapacityIncrement; /*0x5983a9*/
  *((_DWORD *)this + 167) = *(_DWORD *)v9[1].VectorClass; /*0x5983b3*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5983b6*/
  VectorClass::Destroy((int)&v27); /*0x5983ba*/
  IntList = &v24; /*0x5983cb*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 168); /*0x5983cf*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5983e1*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5983f9*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 24, IntList); /*0x5983fd*/
  v10 = IntList; /*0x598402*/
  this->u32_AC = IntList->Count; /*0x598409*/
  *((_DWORD *)this + 173) = v10->CapacityIncrement; /*0x59840f*/
  *((_DWORD *)this + 174) = *(_DWORD *)v10[1].VectorClass; /*0x598419*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59841c*/
  VectorClass::Destroy((int)&v27); /*0x598420*/
  IntList = &v24; /*0x598431*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[344]); /*0x598435*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598447*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59845f*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[5],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[344], IntList); /*0x598463*/
  v11 = IntList; /*0x598468*/
  *(_DWORD *)&this->__pad_4C[360] = IntList->Count; /*0x59846f*/
  *(_DWORD *)&this->__pad_4C[364] = v11->CapacityIncrement; /*0x598475*/
  *(_DWORD *)&this->__pad_4C[368] = *(_DWORD *)v11[1].VectorClass; /*0x59847b*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59847e*/
  VectorClass::Destroy((int)&v27); /*0x598486*/
  IntList = &v24; /*0x598497*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[372]); /*0x59849b*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5984ad*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5984c5*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[372], IntList); /*0x5984c9*/
  v12 = IntList; /*0x5984ce*/
  *(_DWORD *)&this->__pad_4C[388] = IntList->Count; /*0x5984d5*/
  *(_DWORD *)&this->__pad_4C[392] = v12->CapacityIncrement; /*0x5984db*/
  *(_DWORD *)&this->__pad_4C[396] = *(_DWORD *)v12[1].VectorClass; /*0x5984e5*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5984e8*/
  VectorClass::Destroy((int)&v27); /*0x5984ec*/
  IntList = &v24; /*0x5984fd*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[400]); /*0x598501*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598513*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59852b*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[2],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[400], IntList); /*0x59852f*/
  v13 = IntList; /*0x598534*/
  *(_DWORD *)&this->__pad_4C[416] = IntList->Count; /*0x59853b*/
  *(_DWORD *)&this->__pad_4C[420] = v13->CapacityIncrement; /*0x598541*/
  *(_DWORD *)&this->__pad_4C[424] = *(_DWORD *)v13[1].VectorClass; /*0x59854b*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59854e*/
  VectorClass::Destroy((int)&v27); /*0x598552*/
  IntList = &v24; /*0x598563*/
  DynamicVectorClass::Copy(&v24, &this->__pad_4C[428]); /*0x598567*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598579*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598591*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)&this->__pad_4C[428], IntList); /*0x598595*/
  v14 = IntList; /*0x59859a*/
  *(_DWORD *)&this->__pad_4C[444] = IntList->Count; /*0x5985a1*/
  this->RandomMap_field_0x20C = (void *)v14->CapacityIncrement; /*0x5985a7*/
  this->q084 = *(_DWORD *)v14[1].VectorClass; /*0x5985b1*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5985b4*/
  VectorClass::Destroy((int)&v27); /*0x5985b8*/
  IntList = &v24; /*0x5985c9*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 133); /*0x5985cd*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5985df*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5985f7*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 19, IntList); /*0x5985fb*/
  v15 = IntList; /*0x598600*/
  *((_DWORD *)this + 137) = IntList->Count; /*0x598607*/
  *((_DWORD *)this + 138) = v15->CapacityIncrement; /*0x59860d*/
  *((_DWORD *)this + 139) = *(_DWORD *)v15[1].VectorClass; /*0x598617*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59861a*/
  VectorClass::Destroy((int)&v27); /*0x59861e*/
  IntList = &v24; /*0x59862f*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 140); /*0x598633*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598645*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x59865d*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[1],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 20, IntList); /*0x598661*/
  v16 = IntList; /*0x598666*/
  this->u32_24 = IntList->Count; /*0x59866d*/
  *((_DWORD *)this + 145) = v16->CapacityIncrement; /*0x598673*/
  *((_DWORD *)this + 146) = *(_DWORD *)v16[1].VectorClass; /*0x59867d*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x598680*/
  VectorClass::Destroy((int)&v27); /*0x598684*/
  IntList = &v24; /*0x598695*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 147); /*0x598699*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x5986ab*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x5986c3*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)stru_82BA00.?,
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 21, IntList); /*0x5986c7*/
  v17 = IntList; /*0x5986cc*/
  *((_DWORD *)this + 151) = IntList->Count; /*0x5986d3*/
  this->u32_98 = v17->CapacityIncrement; /*0x5986d9*/
  *((_DWORD *)this + 153) = *(_DWORD *)v17[1].VectorClass; /*0x5986df*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x5986e8*/
  if ( *(_DWORD *)&v27.DynamicVector_field_0x1[3] && v27.__pad_C[1] ) /*0x5986f4*/
    __3_YAXPAX_Z(*(void **)&v27.DynamicVector_field_0x1[3]); /*0x5986f7*/
  IntList = &v24; /*0x59870b*/
  DynamicVectorClass::Copy(&v24, (_DWORD *)this + 154); /*0x59870f*/
  *(_DWORD *)IntList->VectorClass = &TypeList<int>::`vftable'; /*0x598721*/
  IntList = (DynamicVectorClass *)INIClass::ReadIntList( /*0x598739*/
                                    v3,
                                    (int)&v27,
                                    off_82B134,
                                    (unsigned __int8 *)&stru_82BA00.?[10],
                                    *(void ***)v24.VectorClass,
                                    *(void **)&v24.?[3],
                                    *(int *)&v24.?[3],
                                    v24.?,
                                    v24.Count,
                                    v24.CapacityIncrement,
                                    v25);
  TypeList::Copy((TypeList *)this + 22, IntList); /*0x59873d*/
  v18 = IntList; /*0x598742*/
  *((_DWORD *)this + 158) = IntList->Count; /*0x598749*/
  *((_DWORD *)this + 159) = v18->CapacityIncrement; /*0x59874f*/
  this->u32_A0 = *(_DWORD *)v18[1].VectorClass; /*0x598759*/
  *(_DWORD *)v27.__pad_0 = &VectorClass<int>::`vftable'; /*0x59875c*/
  VectorClass::Destroy((int)&v27); /*0x598760*/
  *((_DWORD *)this + 191) = INIClass::ReadInt_Overwrite( /*0x59877f*/
                              (bool *)v3->__pad_0,
                              off_82B134,
                              (unsigned __int8 *)&stru_82BA00.?[16],
                              *((_DWORD *)this + 191));
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?, &g_INI_DefaultBuffer, String, 128) ) /*0x5987a5*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x5987b7*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x5987d3*/
    {
      if ( !*i ) /*0x5987d5*/
        break; /*0x5987d8*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(i); /*0x5987e3*/
      if ( IntList ) /*0x5987e7*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5987f2*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x598813*/
    *(_DWORD *)v27.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x59881c*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x598820*/
    v20 = *(_DWORD *)v27.__pad_20; /*0x598825*/
  }
  else
  {
    v20 = *(_DWORD *)v27.__pad_20; /*0x59882b*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], *(_DWORD **)v27.__pad_20); /*0x598834*/
  }
  DynamicVector::Copy((DynamicVector *)v20, &v27.__pad_20[4]); /*0x598840*/
  *(_DWORD *)(v20 + 24) = v28; /*0x59884d*/
  *(_DWORD *)&v27.__pad_20[4] = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x598850*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598854*/
  if ( INIClass::GetString(v3, off_82B134, (unsigned __int8 *)&stru_82BA00.?[15], &g_INI_DefaultBuffer, String, 128) ) /*0x598879*/
  {
    TypeList::BuildingTypeConstructor((TypeList *)&v27); /*0x598886*/
    for ( j = strtok(String, Str); j; j = strtok(0, Str) ) /*0x5988a2*/
    {
      if ( !*j ) /*0x5988a4*/
        break; /*0x5988a7*/
      IntList = (DynamicVectorClass *)BuildingTypeClass::FindOrCreate(j); /*0x5988b2*/
      if ( IntList ) /*0x5988b6*/
        DynamicVector::Add_Alt3(&v27, &IntList); /*0x5988c1*/
    }
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27); /*0x5988e2*/
    *(_DWORD *)v27.__pad_0 = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x5988eb*/
    DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27); /*0x5988ef*/
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988f4*/
  }
  else
  {
    DynamicVector_field_0x1C = v27.DynamicVector_field_0x1C; /*0x5988fa*/
    TypeList::BuildingTypeCopy((TypeList *)&v27.__pad_20[4], &v27.DynamicVector_field_0x1C->ptr_0); /*0x598903*/
  }
  DynamicVector::Copy((DynamicVector *)DynamicVector_field_0x1C, &v27.__pad_20[4]); /*0x59890f*/
  *(_DWORD *)&v27.__pad_20[4] = &VectorClass<BuildingTypeClass const *>::`vftable'; /*0x598918*/
  DynamicVector_field_0x1C->nextArrayIndex = v28; /*0x59891c*/
  DynamicVectorClass::Destroy((_VectorClass_PBVBuildingTypeClass *)&v27.__pad_20[4]); /*0x598923*/
  if ( v3 ) /*0x59892a*/
    (**(void (__thiscall ***)(INIClass *, int))v3->__pad_0)(v3, 1); /*0x598932*/
  CCFileClass::Reset(&v29); /*0x598938*/
  return CCFileClass::Destruct(&v29); /*0x598946*/
}



// ==== 0x00598960  RandomMap::Generate  this=RandomMap  sig=csp ====
void __thiscall RandomMap::Generate(RandomMap *this, char a2, HWND hDlg)
{
  ObjectClass *v3; // edi
  HWND DlgItem; // eax
  int v6; // eax
  RandomMap *v7; // ecx
  int v8; // eax
  int i; // esi
  int j; // edi
  int v11; // esi
  int v12; // eax
  bool v13; // al
  int v14; // eax
  int k; // eax
  int v16; // ecx
  int v17; // eax
  int m; // edi
  _VectorClass_VCell *v19; // esi
  int v20; // eax
  void *v21; // eax
  int n; // eax
  void (__stdcall *v23)(HWND, UINT, WPARAM, LPARAM); // esi
  int ii; // eax
  ObjectClass *v25; // edi
  int jj; // eax
  _DWORD *v27; // eax
  int kk; // eax
  int mm; // edi
  _VectorClass_VCell *v30; // esi
  int v31; // eax
  HWND v32; // eax
  ObjectClass *v33; // [esp-2h] [ebp-428h]
  ObjectClass *v34; // [esp-2h] [ebp-428h]
  ObjectClass *v35; // [esp-2h] [ebp-428h]
  BuildingClass *v36; // [esp-2h] [ebp-428h]
  RadarClass *v37; // [esp-2h] [ebp-428h]
  bool v38; // [esp+11h] [ebp-415h]
  _VectorClass_VCell *v39; // [esp+12h] [ebp-414h] BYREF
 ... [19709 chars total]



// ==== 0x00599530  MapClass::ProcessTile  this=MapClass  sig=csp ====
int __thiscall MapClass::ProcessTile(MapClass *this)
{
  int i; // edi
  _DWORD *v2; // esi
  int v3; // eax
  void *v4; // eax
  RadarClass *v6; // [esp+0h] [ebp-Ch]
  _DWORD *v7; // [esp+8h] [ebp-4h] BYREF

  this->MapClass_field_0x304 = 0; /*0x599534*/
  this->MapClass_field_0x308 = 0; /*0x59953a*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x599548*/
  {
    __3_YAXPAX_Z((void *)g_MissionQueueFrame.localVariables[163]); /*0x59954b*/
    g_MissionQueueFrame.localVariables[163] = 0; /*0x599553*/
  }
  for ( i = g_MissionQueueFrame.briefing[342] - 1; i >= 0; --i ) /*0x599563*/
  {
    v2 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * i); /*0x599570*/
    if ( v2 ) /*0x599575*/
    {
      if ( *v2 ) /*0x59957b*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v2)(*v2, 1); /*0x599585*/
        *v2 = 0; /*0x599587*/
      }
      v7 = v2; /*0x599599*/
      v3 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59959d*/
             &g_MissionQueueFrame.briefing[338],
             &v7);
      if ( v3 != -1 && v3 < g_MissionQueueFrame.briefing[342] ) /*0x5995ad*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x5995b2*/
        for ( ; /*0x5995b8*/
              v3 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v3 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                      + 4 * v3) )
        {
          ++v3; /*0x5995c0*/
        }
      }
      v4 = (void *)v2[11]; /*0x5995d2*/
      v2[10] = &VectorClass<Cell>::`vftable'; /*0x5995d5*/
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
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59960f*/
  MapClass::PostProcessReveal((MapClass *)&stru_87F5F0.__pad_58[416], 1); /*0x599615*/
  Debug::Log(); /*0x59961f*/
  Shroud::ProcessCellVisibility((RadarClass *)&stru_87F5F0.__pad_58[416], (int *)&stru_87F5F0.__pad_58[668]); /*0x599631*/
  return RadarClass::RecreateSurface(v6, 0); /*0x599640*/
}



// ==== 0x00599650  RandomMap::SetupTheater  this=RandomMap  sig=csp ====
char *__thiscall RandomMap::SetupTheater(RandomMap *this, char a2)
{
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  double v10; // rdi
  double v11; // st7
  int *Waypoint_Location; // eax
  __int16 *v13; // eax
  _DWORD *v14; // eax
  RadarClass *WorldCoords; // eax
  RandomMap *v16; // esi
  ObjectClass *v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int uniqueId; // edi
  void (__stdcall *v22)(); // eax
  int v23; // esi
  int v24; // eax
  int v25; // edi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  Tactical *v29; // eax
  IPersistStream *v30; // eax
  int i; // eax
  int v32; // ecx
  int j; // eax
  int v34; // ecx
  int k; // eax
  int v36; // ecx
  int m; // eax
  int v38; // ecx
  int n; // eax
  int *v40; // eax
  __int16 *v41; // eax
  _DWORD *v42; // eax
  RadarClass *v43; // eax
  int v44; // esi
  RandomMap *v45; // edi
  void (__stdcall *v46)(); // eax
... [27439 chars total]



// ==== 0x0059A6C0  RandomMap::FinalizeMapData  this=RandomMap  sig=csp ====
int __thiscall RandomMap::FinalizeMapData(RandomMap *this)
{
  int i; // eax
  int v3; // eax
  int v4; // eax
  Cell *j; // edi
  char v6; // bl
  signed int k; // esi
  Cell *NeighbourContent; // eax
  int v9; // ecx
  int v10; // eax
  int m; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  void *v14; // eax
  int result; // eax
  Cell *n; // ebp
  signed int ii; // esi
  Cell *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-4h] BYREF

  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6cc*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a6dd*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(i + 56) = g_CellPassabilityLUT; /*0x59a6e5*/
  }
  v3 = this->RandomMap_field_0x3C[0]; /*0x59a6f6*/
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
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a722*/
  for ( j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a735*/
        j;
        j = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( j->Cell_field_0x38 == g_CellPassabilityLUT ) /*0x59a741*/
    {
      v6 = 1; /*0x59a743*/
      for ( k = 0; k < 8; k += 2 ) /*0x59a745*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(j, k); /*0x59a74a*/
        if ( !(unsigned __int8)Cell::IsEmpty(NeighbourContent) ) /*0x59a751*/
          v6 = 0; /*0x59a75a*/
      }
      if ( v6 ) /*0x59a766*/
        j->Cell_field_0x38 = 0; /*0x59a768*/
    }
  }
  MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], 0, 0); /*0x59a788*/
  if ( g_MissionQueueFrame.localVariables[163] ) /*0x59a794*/
  {
    v9 = g_MapCellWidth * g_MapCellWidth; /*0x59a79c*/
    if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59a7a1*/
    {
      v10 = 0; /*0x59a7a3*/
      do /*0x59a7c0*/
      {
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 56) = -1; /*0x59a7ae*/
        *(_DWORD *)(v10 + g_MissionQueueFrame.localVariables[163] + 60) = -1; /*0x59a7b8*/
        v10 += 80; /*0x59a7bc*/
        --v9; /*0x59a7bf*/
      }
      while ( v9 ); /*0x59a7c0*/
    }
  }
  for ( m = g_MissionQueueFrame.briefing[342] - 1; m >= 0; --m ) /*0x59a7cc*/
  {
    v12 = *(_DWORD **)(g_MissionQueueFrame.briefing[339] + 4 * m); /*0x59a7df*/
    if ( v12 ) /*0x59a7e4*/
    {
      if ( *v12 ) /*0x59a7ea*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v12)(*v12, 1); /*0x59a7f4*/
        *v12 = 0; /*0x59a7f6*/
      }
      v19 = v12; /*0x59a808*/
      v13 = (*(int (__thiscall **)(int *, _DWORD **))(g_MissionQueueFrame.briefing[338] + 16))( /*0x59a80c*/
              &g_MissionQueueFrame.briefing[338],
              &v19);
      if ( v13 != -1 && v13 < g_MissionQueueFrame.briefing[342] ) /*0x59a81c*/
      {
        --g_MissionQueueFrame.briefing[342]; /*0x59a821*/
        for ( ; /*0x59a827*/
              v13 < g_MissionQueueFrame.briefing[342];
              *(_DWORD *)(g_MissionQueueFrame.briefing[339] + 4 * v13 - 4) = *(_DWORD *)(g_MissionQueueFrame.briefing[339]
                                                                                       + 4 * v13) )
        {
          ++v13; /*0x59a82f*/
        }
      }
      v14 = (void *)v12[11]; /*0x59a841*/
      v12[10] = &VectorClass<Cell>::`vftable'; /*0x59a844*/
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
  g_MissionQueueFrame.localVariables[164] = 0; /*0x59a87a*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a884*/
  result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a88e*/
  for ( n = (Cell *)result; result; n = (Cell *)result ) /*0x59a897*/
  {
    if ( (unsigned __int8)CellClass::IsTerrainType((CellClass *)n) ) /*0x59a89b*/
    {
      for ( ii = 0; ii < 8; ii += 2 ) /*0x59a8a4*/
      {
        v18 = (Cell *)Cell::GetNeighbourContent(n, ii); /*0x59a8ae*/
        if ( (unsigned __int8)Cell::IsEmpty(v18) ) /*0x59a8b2*/
          v18->Cell_field_0x38 = dword_AA0E18; /*0x59a8c0*/
      }
    }
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59a8d0*/
  }
  return result; /*0x59a8db*/
}



// ==== 0x0059A8F0  ArrangeBuildingPlacementGrid  this=RandomMap  sig=csp ====
void __stdcall BuildingPlacement_ArrangeGrid(int a1, int a2, int *a3)
{
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int v6; // esi
  int *v7; // ebp
  int v8; // esi
  int v9; // edi
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // esi
  signed int v15; // eax
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
  int v33; // [esp+44h] [ebp-48h]
  int v34; // [esp+48h] [ebp-44h]
  __int64 v35; // [esp+4Ch] [ebp-40h]
  double v36; // [esp+54h] [ebp-38h]
  void **v37; // [esp+5Ch] [ebp-30h] BYREF
  void *Block; // [esp+60h] [ebp-2Ch]
  int v39; // [esp+64h] [ebp-28h]
  int v40; // [esp+68h] [ebp-24h]
  int i; // [esp+6Ch] [ebp-20h]
  int v42; // [esp+70h] [ebp-1Ch]
  void **v43; // [esp+74h] [ebp-18h] BYREF
  void *v44; // [esp+78h] [ebp-14h]
  int v45; // [esp+7Ch] [ebp-10h]
  char v46; // [esp+81h] [ebp-Bh]
  int v47; // [esp+84h] [ebp-8h]
  int v48; // [esp+88h] [ebp-4h]

  v3 = Math::Sqrt((double)a2); /*0x59a901*/
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
  v7 = a3; /*0x59a94a*/
  v24 = a3[2] / v5; /*0x59a95c*/
  v25 = (unsigned int)(a3[3] / v5); /*0x59a966*/
  v29 = 0; /*0x59a96c*/
  v30 = 0; /*0x59a970*/
  v27 = 0; /*0x59a978*/
  if ( (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 >= 0.5 ) /*0x59a9a2*/
  {
    HIDWORD(v25) = v24; /*0x59a9c6*/
    LODWORD(v25) = a3[3] / v6; /*0x59a9ca*/
    v30 = v25; /*0x59a9ce*/
  }
  else
  {
    v27 = v25; /*0x59a9ae*/
    v24 = a3[2] / v6; /*0x59a9b2*/
    v29 = v24; /*0x59a9b6*/
  }
  v8 = v5 * v6 - a2; /*0x59a9db*/
  v9 = 0; /*0x59a9dd*/
  v34 = a3[1]; /*0x59a9df*/
  v33 = *a3; /*0x59a9e9*/
  VectorClass::Construct(&v43, 0, 0); /*0x59a9ed*/
  v43 = &DynamicVectorClass<int>::`vftable'; /*0x59a9f8*/
  v48 = 10; /*0x59aa00*/
  v47 = 0; /*0x59aa0b*/
  VectorClass::Construct(&v37, 0, 0); /*0x59aa12*/
  v10 = 0; /*0x59aa1b*/
  v37 = &DynamicVectorClass<int>::`vftable'; /*0x59aa1f*/
  v42 = 10; /*0x59aa27*/
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
      if ( i < v39 /*0x59aaaf*/
        || (BYTE1(v40) || !v39)
        && v42 > 0
        && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v37[2])(&v37, v42 + v39, 0) )
      {
        v12 = i++; /*0x59aaba*/
        *((_DWORD *)Block + v12) = v9; /*0x59aac5*/
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
      v14 = v10 - 1; /*0x59aae3*/
      v36 = (double)v10; /*0x59aaf9*/
      do /*0x59ab28*/
      {
        v35 = (unsigned int)Random::State(&unk_ABE890); /*0x59ab07*/
        v15 = Math::RoundToInt((double)v35 * v36 * 2.328306437080797e-10); /*0x59ab21*/
      }
      while ( v15 > v14 ); /*0x59ab28*/
      *((_DWORD *)v44 + *((_DWORD *)Block + v15)) = v31; /*0x59ab39*/
      v10 = i; /*0x59ab3c*/
      if ( v15 < i ) /*0x59ab42*/
      {
        v10 = i - 1; /*0x59ab44*/
        for ( i = v10; v15 < i; v10 = i ) /*0x59ab4b*/
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
        v34 += (int)v25 / 2; /*0x59abb8*/
      else
        v33 += v24 / 2; /*0x59aba3*/
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
          *v21 = v33 + 2; /*0x59ac23*/
          v21[1] = v34 + 2; /*0x59ac25*/
          v21[2] = v24 - 4; /*0x59ac28*/
          v21[3] = v25 - 4; /*0x59ac2b*/
        }
        v33 += HIDWORD(v25); /*0x59ac40*/
        v22 = v28 == 1; /*0x59ac4a*/
        v34 += v27; /*0x59ac4b*/
        --v28; /*0x59ac4f*/
      }
      while ( !v22 ); /*0x59ac53*/
      v5 = v26; /*0x59ac59*/
      v7 = a3; /*0x59ac5d*/
      v16 = j; /*0x59ac64*/
    }
    v33 += v29; /*0x59ac7a*/
    v34 += v30; /*0x59ac86*/
    if ( SHIDWORD(v25) <= 0 ) /*0x59ac8a*/
      v34 = v7[1]; /*0x59ac98*/
    else
      v33 = *v7; /*0x59ac8f*/
    ++v16; /*0x59aca0*/
  }
  v37 = &VectorClass<int>::`vftable'; /*0x59acb8*/
  if ( Block && BYTE1(v40) ) /*0x59acc4*/
  {
    __3_YAXPAX_Z(Block); /*0x59acc7*/
    Block = 0; /*0x59accf*/
  }
  v43 = &VectorClass<int>::`vftable'; /*0x59acdb*/
  BYTE1(v40) = 0; /*0x59ace2*/
  v39 = 0; /*0x59ace9*/
  if ( v44 ) /*0x59acf2*/
  {
    if ( v46 ) /*0x59acfa*/
      __3_YAXPAX_Z(v44); /*0x59acfd*/
  }
}



// ==== 0x0059AD10  RandomMap::ArrangeBuildingGrid  this=RandomMap  sig=csp ====
void __thiscall RandomMap::ArrangeBuildingGrid(RandomMap *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edx
  int i; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD *v17; // esi
  _DWORD *v18; // edx
  int v19; // [esp+10h] [ebp-50h] BYREF
  int v20; // [esp+14h] [ebp-4Ch]
  int v21[2]; // [esp+18h] [ebp-48h] BYREF
  double v22; // [esp+20h] [ebp-40h]
  int v23; // [esp+28h] [ebp-38h] BYREF
  int v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  int v26; // [esp+34h] [ebp-2Ch]
  int v27[4]; // [esp+38h] [ebp-28h] BYREF
  void **v28; // [esp+48h] [ebp-18h] BYREF
  void *Block; // [esp+4Ch] [ebp-14h]
  char v30; // [esp+55h] [ebp-Bh]
  int v31; // [esp+58h] [ebp-8h]
  int v32; // [esp+5Ch] [ebp-4h]

  *((_DWORD *)this + 194) = 1; /*0x59ad27*/
  RandomMap::Constructor_0((RandomMap *)&v28, 0, 0); /*0x59ad31*/
  v2 = *(_DWORD *)&this->__pad_4C[4]; /*0x59ad36*/
  v28 = &DynamicVectorClass<TRect<int>>::`vftable'; /*0x59ad39*/
  v32 = 10; /*0x59ad44*/
  v3 = v2 / 2; /*0x59ad4c*/
  v31 = 0; /*0x59ad51*/
  v4 = 2; /*0x59ad55*/
  if ( v3 >= 2 ) /*0x59ad5a*/
    v4 = v3; /*0x59ad5c*/
  *(_QWORD *)v21 = v4; /*0x59ad5e*/
  v22 = (double)v4; /*0x59ad6a*/
  do /*0x59ad9b*/
  {
    *(_QWORD *)v21 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ad78*/
    LOWORD(v5) = Math::RoundToInt((double)*(__int64 *)v21 * v22 * 2.328306437080797e-10 + 1.0); /*0x59ad94*/
  }
  while ( v5 > v4 ); /*0x59ad9b*/
  v27[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59ada9*/
  v27[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59adb3*/
  v27[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59adbd*/
  v6 = *(_DWORD *)&this->__pad_4C[4]; /*0x59adc1*/
  v27[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59adc4*/
  ArrangeBuildingPlacementGrid((int)&v28, v5 + v6, v27); /*0x59add7*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ade1*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59adf2*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v19 = *(_DWORD *)(i + 36); /*0x59adf7*/
    *(_DWORD *)(80 * ((__int16)v19 + g_MapCellWidth * SHIWORD(v19)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ae1c*/
  }
  while ( v31 > 0 ) /*0x59ae2d*/
  {
    v23 = *(_DWORD *)Block; /*0x59ae3d*/
    v24 = *((_DWORD *)Block + 1); /*0x59ae44*/
    v25 = *((_DWORD *)Block + 2); /*0x59ae4b*/
    v26 = *((_DWORD *)Block + 3); /*0x59ae57*/
    v8 = Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59ae5b*/
    v9 = v26; /*0x59ae60*/
    v10 = v25; /*0x59ae68*/
    *(_QWORD *)&v22 = (unsigned int)v8; /*0x59ae6e*/
    v20 = 2 * v25 * v26; /*0x59ae8d*/
    LOWORD(v11) = Math::RoundToInt(((double)(unsigned int)v8 * 2.328306437080797e-10 * 0.05 + 0.45) * (double)v20); /*0x59ae97*/
    v12 = v11; /*0x59ae9c*/
    v21[0] = v23 + v10 / 2 + v9 / 2 + v24 + 1; /*0x59aecd*/
    v21[1] = v24 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v9 / 2 - v10 / 2 - v23; /*0x59aed1*/
    v13 = 0; /*0x59aed5*/
    do /*0x59af1f*/
    {
      if ( v13 >= 10 ) /*0x59aeda*/
        break; /*0x59aeda*/
      LOWORD(v19) = v21[0]; /*0x59aef1*/
      HIWORD(v19) = v21[1]; /*0x59aef8*/
      v14 = RandomMap::PlaceTerrain(this, v12, &v23, (int)v21, 1, (int)&v19, 0.25, 0); /*0x59af0d*/
      if ( !v14 ) /*0x59af14*/
        ++*((_DWORD *)this + 194); /*0x59af16*/
      ++v13; /*0x59af1c*/
    }
    while ( !v14 ); /*0x59af1f*/
    if ( v31 <= 0 ) /*0x59af27*/
      break; /*0x59af27*/
    v15 = 0; /*0x59af2a*/
    if ( --v31 <= 0 ) /*0x59af32*/
      break; /*0x59af32*/
    v16 = 0; /*0x59af34*/
    do /*0x59af60*/
    {
      v17 = (char *)Block + v16 + 16; /*0x59af3a*/
      v18 = (char *)Block + v16; /*0x59af3e*/
      ++v15; /*0x59af40*/
      v16 += 16; /*0x59af41*/
      *v18 = *v17; /*0x59af46*/
      v18[1] = v17[1]; /*0x59af4b*/
      v18[2] = v17[2]; /*0x59af51*/
      v18[3] = v17[3]; /*0x59af57*/
    }
    while ( v15 < v31 ); /*0x59af60*/
  }
  v28 = &VectorClass<TRect<int>>::`vftable'; /*0x59af70*/
  if ( Block ) /*0x59af7a*/
  {
    if ( v30 ) /*0x59af82*/
      __3_YAXPAX_Z(Block); /*0x59af85*/
  }
}



// ==== 0x0059AFA0  RandomMap::FillTerrainProgressively  this=RandomMap  sig=csp ====
void __thiscall RandomMap::FillTerrainProgressively(RandomMap *this)
{
  RandomMap *v1; // edi
  int v2; // eax
  double v3; // st7
  int v4; // eax
  int v5; // ebx
  int i; // eax
  int v7; // eax
  int v8; // edi
  int j; // ecx
  __int64 v10; // rax
  int v11; // esi
  int v12; // [esp+10h] [ebp-48h]
  int v13; // [esp+14h] [ebp-44h]
  int v14; // [esp+18h] [ebp-40h]
  int v15; // [esp+1Ch] [ebp-3Ch] BYREF
  RandomMap *v16; // [esp+20h] [ebp-38h]
  int v17; // [esp+24h] [ebp-34h]
  int v18; // [esp+28h] [ebp-30h] BYREF
  int v19; // [esp+2Ch] [ebp-2Ch]
  double v20; // [esp+30h] [ebp-28h]
  double v21; // [esp+38h] [ebp-20h]
  double v22; // [esp+40h] [ebp-18h]
  _DWORD v23[4]; // [esp+48h] [ebp-10h] BYREF

  v1 = this; /*0x59afad*/
  v16 = this; /*0x59afaf*/
  *((_DWORD *)this + 194) = 1; /*0x59afb3*/
  v2 = Object::ComputeAllocationSize(); /*0x59afbd*/
  v3 = (double)*(int *)v1->__pad_4C; /*0x59afc2*/
  v15 = v2; /*0x59afc5*/
  v13 = 0; /*0x59afcb*/
  v14 = 0; /*0x59afcf*/
  v20 = 0.0; /*0x59afd9*/
  v21 = (1.0 - v3 * 0.01) * (0.5 - 0.45) + 0.45; /*0x59affb*/
  v22 = (double)v2; /*0x59b003*/
  LOWORD(v4) = Math::RoundToInt(v22 * 0.03 * v21); /*0x59b011*/
  v17 = v4; /*0x59b016*/
  v5 = *(_DWORD *)&stru_87F5F0.__pad_58[664] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[660] / 2; /*0x59b030*/
  v19 = v5; /*0x59b038*/
  v18 = v5 + 1; /*0x59b03f*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b043*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b054*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    v15 = *(_DWORD *)(i + 36); /*0x59b059*/
    *(_DWORD *)(80 * ((__int16)v15 + g_MapCellWidth * SHIWORD(v15)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59b07a*/
  }
  v23[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b0af*/
  v23[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b0bb*/
  v23[2] = *(_DWORD *)&stru_87F5F0.__pad_58[676] - 2; /*0x59b0c2*/
  v23[3] = *(_DWORD *)&stru_87F5F0.__pad_58[680] - 2; /*0x59b0c6*/
  if ( v21 > 0.0 ) /*0x59b0ca*/
  {
    while ( v14 < 100 ) /*0x59b0db*/
    {
      LOWORD(v7) = Math::RoundToInt((v21 - v20) * v22); /*0x59b0ed*/
      if ( v7 >= v17 ) /*0x59b0f8*/
        v7 = v17; /*0x59b0fa*/
      LOWORD(v15) = v5 + 1; /*0x59b119*/
      HIWORD(v15) = v5; /*0x59b11e*/
      v13 += RandomMap::PlaceTerrain(v1, v7, v23, (int)&v18, 1, (int)&v15, 0.75, 1); /*0x59b133*/
      ++v14; /*0x59b137*/
      v8 = 50000; /*0x59b144*/
      v12 = 0; /*0x59b149*/
      v20 = (double)v13 / v22; /*0x59b15b*/
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b15f*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b172*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        if ( !*(_DWORD *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59b191*/
                        + g_MissionQueueFrame.localVariables[163]
                        + 60) )
        {
          v10 = *(__int16 *)(j + 36) - (v5 + 1); /*0x59b1ac*/
          v11 = (HIDWORD(v10) ^ v10) - HIDWORD(v10) + abs32(*(__int16 *)(j + 38) - v5); /*0x59b1b1*/
          if ( v11 < v8 ) /*0x59b1b5*/
          {
            v8 = v11; /*0x59b1ba*/
            v12 = *(_DWORD *)(j + 36); /*0x59b1bc*/
          }
        }
      }
      v18 = (__int16)v12; /*0x59b1e2*/
      v19 = SHIWORD(v12); /*0x59b1e6*/
      if ( v20 >= v21 ) /*0x59b1ef*/
        break; /*0x59b1ef*/
      v1 = v16; /*0x59b0d2*/
    }
  }
}



// ==== 0x0059B200  RandomMap::PlaceTerrainFeatures  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceTerrainFeatures(RandomMap *this)
{
  int v2; // eax
  int i; // eax
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  __int16 *v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  bool v17; // zf
  int result; // eax
  int v19; // [esp+10h] [ebp-B8h]
  int v20; // [esp+10h] [ebp-B8h]
  int v21; // [esp+14h] [ebp-B4h]
  double v22; // [esp+18h] [ebp-B0h]
  int v23; // [esp+20h] [ebp-A8h]
  int v24; // [esp+24h] [ebp-A4h]
  int v25; // [esp+28h] [ebp-A0h]
  int *v26; // [esp+2Ch] [ebp-9Ch]
  int v27; // [esp+30h] [ebp-98h] BYREF
  int v28; // [esp+34h] [ebp-94h]
  int v29; // [esp+38h] [ebp-90h]
  int v30; // [esp+3Ch] [ebp-8Ch]
  double v31; // [esp+40h] [ebp-88h]
  int v32; // [esp+4Ch] [ebp-7Ch] BYREF
  int v33; // [esp+50h] [ebp-78h]
  int v34; // [esp+54h] [ebp-74h]
  int v35; // [esp+58h] [ebp-70h]
  RandomMap *v36; // [esp+5Ch] [ebp-6Ch]
  int v37; // [esp+60h] [ebp-68h] BYREF
  int v38; // [esp+64h] [ebp-64h]
  double v39; // [esp+68h] [ebp-60h]
  double v40; // [esp+70h] [ebp-58h]
  _DWORD v41[2]; // [esp+78h] [ebp-50h] BYREF
  int v42; // [esp+80h] [ebp-48h]
  int v43; // [esp+84h] [ebp-44h]
  int v44; // [esp+88h] [ebp-40h]
  int v45; // [esp+8Ch] [ebp-3Ch]
  int v46; // [esp+90h] [ebp-38h]
  int v47; // [esp+94h] [ebp-34h]
  int v48; // [esp+98h] [ebp-30h]
  int v49; // [esp+9Ch] [ebp-2Ch]
  double v50; // [esp+A0h] [ebp-28h]
  double v51; // [esp+A8h] [ebp-20h]
  int v52; // [esp+B4h] [ebp-14h]
  double v53; // [esp+B8h] [ebp-10h]
  double v54; // [esp+C0h] [ebp-8h]

  v36 = this; /*0x59b212*/
  *((_DWORD *)this + 194) = 1; /*0x59b216*/
  v19 = Object::ComputeAllocationSize(); /*0x59b228*/
  v24 = 0; /*0x59b22e*/
  v39 = (1.0 - (double)*(int *)this->__pad_4C * 0.01) * (0.2 - 0.15) + 0.15; /*0x59b252*/
  v51 = (double)v19; /*0x59b25a*/
  LOWORD(v2) = Math::RoundToInt(v51 * 0.06 * v39); /*0x59b26b*/
  v49 = v2; /*0x59b275*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b27c*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b28d*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    *(_DWORD *)(80 * ((__int16)*(_DWORD *)(i + 36) + g_MapCellWidth * (__int16)HIWORD(*(_DWORD *)(i + 36))) /*0x59b2b7*/
              + g_MissionQueueFrame.localVariables[163]
              + 60) = 0;
  }
  *(_QWORD *)&v31 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b2ce*/
  v41[0] = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b2fe*/
  v41[1] = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b30d*/
  if ( (double)*(__int64 *)&v31 * 2.328306437080797e-10 >= 0.5 ) /*0x59b2f7*/
  {
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b35c*/
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 - 1; /*0x59b36a*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[668]; /*0x59b371*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[680] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[672] + 1; /*0x59b378*/
    v46 = *(_DWORD *)&stru_87F5F0.__pad_58[676]; /*0x59b37f*/
    v47 = v43; /*0x59b386*/
  }
  else
  {
    v43 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b311*/
    v42 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 - 1; /*0x59b31f*/
    v44 = *(_DWORD *)&stru_87F5F0.__pad_58[676] / 2 + *(_DWORD *)&stru_87F5F0.__pad_58[668] + 1; /*0x59b326*/
    v45 = *(_DWORD *)&stru_87F5F0.__pad_58[672]; /*0x59b32d*/
    v46 = v42; /*0x59b334*/
    v47 = *(_DWORD *)&stru_87F5F0.__pad_58[680]; /*0x59b33b*/
  }
  v20 = 2; /*0x59b391*/
  v26 = v41; /*0x59b399*/
  do /*0x59b6c1*/
  {
    v23 = 0; /*0x59b3a5*/
    v40 = 0.0; /*0x59b3a9*/
    v27 = *v26; /*0x59b3bb*/
    v28 = v26[1]; /*0x59b3c2*/
    v29 = v26[2]; /*0x59b3cb*/
    v30 = v26[3]; /*0x59b3d5*/
    v4 = v28 + *(_DWORD *)&stru_87F5F0.__pad_58[660] + v30 / 2 - v29 / 2 - v27; /*0x59b3fd*/
    v33 = v27 + v30 / 2 + v29 / 2 + v28 + 1; /*0x59b3ff*/
    v34 = v4; /*0x59b403*/
    v37 = v33; /*0x59b407*/
    v38 = v4; /*0x59b40b*/
    if ( v30 <= v29 ) /*0x59b40f*/
    {
      v5 = (double)v29; /*0x59b445*/
      v31 = 1.0; /*0x59b44d*/
      v22 = (double)v30; /*0x59b45d*/
      v50 = v5 / v22 * 1.2; /*0x59b46d*/
    }
    else
    {
      v50 = 1.0; /*0x59b415*/
      v22 = (double)v30; /*0x59b42b*/
      v5 = (double)v29; /*0x59b42f*/
      v31 = v22 / v5 * 1.2; /*0x59b43f*/
    }
    v54 = 1.0 / (v5 * 0.5 * (v5 * 0.5)); /*0x59b484*/
    v53 = 1.0 / (v22 * 0.5 * (v22 * 0.5)); /*0x59b4a1*/
    if ( v39 > 0.0 ) /*0x59b4b9*/
    {
      do /*0x59b6a7*/
      {
        if ( v24 >= 100 ) /*0x59b4c4*/
          break; /*0x59b4c4*/
        LOWORD(v6) = Math::RoundToInt((v39 - v40) * v51); /*0x59b4d9*/
        if ( v6 >= v49 ) /*0x59b4e7*/
          v6 = v49; /*0x59b4e9*/
        LOWORD(v32) = v33; /*0x59b4fd*/
        HIWORD(v32) = v4; /*0x59b515*/
        v23 += RandomMap::PlaceTerrain(v36, v6, &v27, (int)&v37, 1, (int)&v32, 0.75, 1); /*0x59b52d*/
        v21 = 0; /*0x59b540*/
        ++v24; /*0x59b55a*/
        v7 = 2 * v27 - *(_DWORD *)&stru_87F5F0.__pad_58[660] + 1; /*0x59b562*/
        v8 = 50000; /*0x59b563*/
        v48 = v7 + 2 * v29 + 2; /*0x59b572*/
        v9 = *(_DWORD *)&stru_87F5F0.__pad_58[660] + 2 * v28 + 1; /*0x59b57d*/
        v52 = v9 + 2 * v30 + 2; /*0x59b585*/
        v40 = (double)v23 / v51; /*0x59b58c*/
        if ( g_MapCellWidth * g_MapCellWidth > 0 ) /*0x59b590*/
        {
          v25 = 0; /*0x59b596*/
          v35 = g_MapCellWidth * g_MapCellWidth; /*0x59b59e*/
          do /*0x59b67e*/
          {
            v10 = (__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5ab*/
            v11 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163] + 2); /*0x59b5ae*/
            v12 = *(__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]); /*0x59b5b3*/
            v13 = v12 + v11; /*0x59b5b6*/
            v14 = v12 - v11; /*0x59b5b9*/
            if ( v13 >= v9 /*0x59b618*/
              && v13 <= v52
              && v14 >= v7
              && v14 <= v48
              && !*((_DWORD *)v10 + 15)
              && Map_Helper_59BAB0((__int16 *)(v25 + g_MissionQueueFrame.localVariables[163]), &v27, 1, v54, v53) )
            {
              v15 = v10[1] - v34; /*0x59b629*/
              LOWORD(v16) = Math::RoundToInt( /*0x59b659*/
                              (double)(int)((HIDWORD(v15) ^ v15) - HIDWORD(v15)) * v50
                            + (double)(int)abs32(*v10 - v33) * v31);
              if ( v16 < v8 ) /*0x59b660*/
              {
                v8 = v16; /*0x59b664*/
                v21 = *(_DWORD *)v10; /*0x59b666*/
              }
            }
            v17 = v35 == 1; /*0x59b675*/
            v25 += 80; /*0x59b676*/
            --v35; /*0x59b67a*/
          }
          while ( !v17 ); /*0x59b67e*/
          LOWORD(v4) = v34; /*0x59b684*/
        }
        v37 = (__int16)v21; /*0x59b69a*/
        v38 = SHIWORD(v21); /*0x59b69e*/
      }
      while ( v40 < v39 ); /*0x59b6a7*/
    }
    result = v20 - 1; /*0x59b6b8*/
    v17 = v20 == 1; /*0x59b6b8*/
    v26 += 4; /*0x59b6b9*/
    --v20; /*0x59b6bd*/
  }
  while ( !v17 ); /*0x59b6c1*/
  return result; /*0x59b6c7*/
}



// ==== 0x0059B6D0  SmallFunc_59B6D0  this=-  sig=ida-proto ====
int sub_59B6D0()
{
  int result; // eax
  int *i; // ebx
  signed int j; // esi
  _DWORD *NeighbourContent; // edi

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59b6d6*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b6e0*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x59b6e9*/
  {
    if ( CellClass::IsTerrainType(i) ) /*0x59b6ef*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b6f8*/
      {
        NeighbourContent = Cell::GetNeighbourContent(i, j); /*0x59b702*/
        if ( Cell::IsEmpty(NeighbourContent) ) /*0x59b706*/
          NeighbourContent[14] = dword_AA0E18; /*0x59b714*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59b724*/
  }
  return result; /*0x59b731*/
}



// ==== 0x0059B740  RandomMap::PlaceShoreObjects  this=RandomMap  sig=csp ====
void RandomMap::PlaceShoreObjects(RandomMap *this)
{
  Cell *i; // ebp
  signed int j; // edi
  Cell *NeighbourContent; // esi
  int v4; // eax
  int v5; // edx
  unsigned int v6; // esi
  signed int v7; // eax
  _DWORD *v8; // ecx
  Cell *v9; // ebp
  signed int v10; // edi
  Cell *v11; // esi
  int v12; // eax
  int v13; // [esp+10h] [ebp-34h]
  __int64 v14; // [esp+1Ch] [ebp-28h]
  double v15; // [esp+24h] [ebp-20h]
  void **v16; // [esp+2Ch] [ebp-18h] BYREF
  void *Block; // [esp+30h] [ebp-14h]
  int v18; // [esp+34h] [ebp-10h]
  char v19; // [esp+39h] [ebp-Bh]
  signed int v20; // [esp+3Ch] [ebp-8h]
  int v21; // [esp+40h] [ebp-4h]

  RandomMap::Constructor((RandomMap *)&v16, 0, 0); /*0x59b74f*/
  v16 = &DynamicVectorClass<CellClass *>::`vftable'; /*0x59b759*/
  v20 = 0; /*0x59b761*/
  v21 = 10000; /*0x59b765*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b76d*/
  for ( i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59b780*/
        i;
        i = (Cell *)LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    if ( (unsigned __int8)Cell::IsShore(i) ) /*0x59b784*/
    {
      for ( j = 0; j < 8; j += 2 ) /*0x59b78d*/
      {
        NeighbourContent = (Cell *)Cell::GetNeighbourContent(i, j); /*0x59b797*/
        if ( (unsigned __int8)Cell::IsEmpty(NeighbourContent) /*0x59b7ce*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v4 = v20++; /*0x59b7d9*/
          *((_DWORD *)Block + v4) = NeighbourContent; /*0x59b7e4*/
        }
      }
    }
  }
  v5 = v20 / 3; /*0x59b80d*/
  if ( v20 / 3 > 1000 ) /*0x59b815*/
    v5 = 1000; /*0x59b817*/
  if ( v5 > 0 ) /*0x59b81e*/
  {
    v13 = v5; /*0x59b824*/
    do /*0x59b90c*/
    {
      v6 = v20 - 1; /*0x59b830*/
      v15 = (double)(unsigned int)v20; /*0x59b83e*/
      do /*0x59b869*/
      {
        v14 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59b84c*/
        LOWORD(v7) = Math::RoundToInt((double)v14 * v15 * 2.328306437080797e-10); /*0x59b862*/
      }
      while ( v7 > v6 ); /*0x59b869*/
      v8 = Block; /*0x59b86b*/
      v9 = (Cell *)*((_DWORD *)Block + v7); /*0x59b875*/
      if ( v7 < v20 && v7 < --v20 ) /*0x59b881*/
      {
        while ( 1 ) /*0x59b88d*/
        {
          v8[v7] = v8[v7 + 1]; /*0x59b88d*/
          if ( ++v7 >= v20 ) /*0x59b897*/
            break; /*0x59b897*/
          v8 = Block; /*0x59b885*/
        }
      }
      v10 = 0; /*0x59b89e*/
      v9->Cell_field_0x38 = dword_AA0E18; /*0x59b8a0*/
      do /*0x59b901*/
      {
        v11 = (Cell *)Cell::GetNeighbourContent(v9, v10); /*0x59b8ab*/
        if ( (unsigned __int8)Cell::IsEmpty(v11) /*0x59b8e2*/
          && (v20 < v18
           || (v19 || !v18)
           && v21 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v16[2])(&v16, v21 + v18, 0)) )
        {
          v12 = v20++; /*0x59b8ed*/
          *((_DWORD *)Block + v12) = v11; /*0x59b8f8*/
        }
        v10 += 2; /*0x59b8fb*/
      }
      while ( v10 < 8 ); /*0x59b901*/
      --v13; /*0x59b908*/
    }
    while ( v13 ); /*0x59b90c*/
  }
  v16 = &VectorClass<CellClass *>::`vftable'; /*0x59b916*/
  if ( Block ) /*0x59b920*/
  {
    if ( v19 ) /*0x59b926*/
      __3_YAXPAX_Z(Block); /*0x59b929*/
  }
}



// ==== 0x0059B940  Map_Helper_59B940  this=RandomMap  sig=csp ====
double __stdcall sub_59B940(__int16 *a1, __int16 *a2, _DWORD *a3, __int16 *a4, float a5, float a6)
{
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  double v14; // st7
  signed int v15; // ecx
  __int64 v16; // rax
  double v17; // st7
  int v18; // eax
  int v19; // edx
  double v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp+4h]
  int v22; // [esp+20h] [ebp+8h]
  int v23; // [esp+24h] [ebp+Ch]
  int v24; // [esp+28h] [ebp+10h]

  if ( *a3 == dword_ABE2F0 && a3[1] == dword_ABE2F4 && a3[2] == dword_ABE2F8 && a3[3] == dword_ABE2FC ) /*0x59b979*/
  {
    v18 = *a1 - *a2; /*0x59ba7b*/
    v19 = a1[1] - a2[1]; /*0x59ba7d*/
    return Math::Sqrt((double)(v18 * v18 + v19 * v19)); /*0x59ba94*/
  }
  else
  {
    v7 = a4[1]; /*0x59b989*/
    v8 = *a2; /*0x59b990*/
    v9 = a2[1]; /*0x59b993*/
    v22 = *a4; /*0x59b997*/
    v10 = abs32(((v8 - v9) >> 1) - ((v22 - v7) >> 1)); /*0x59b9b1*/
    v23 = v10; /*0x59b9c0*/
    v11 = ((v8 + v9) >> 1) - ((v7 + v22) >> 1); /*0x59b9c4*/
    v12 = (HIDWORD(v11) ^ v11) - HIDWORD(v11); /*0x59b9c8*/
    v24 = v12; /*0x59b9cc*/
    if ( v10 || v12 ) /*0x59b9d4*/
    {
      v14 = Math::Sqrt((double)(int)(v10 * v10 + v12 * v12)); /*0x59b9fe*/
      v15 = abs32(a1[1] - a2[1]); /*0x59ba29*/
      v16 = *a1 - *a2; /*0x59ba2b*/
      v21 = (HIDWORD(v16) ^ v16) - HIDWORD(v16); /*0x59ba32*/
      v20 = (double)v23 / v14; /*0x59ba36*/
      v17 = (double)v24 / v14; /*0x59ba3a*/
      if ( v21 <= v15 ) /*0x59ba3e*/
        v21 = v15; /*0x59ba40*/
      return (v17 * a6 + a5 * v20) * (double)v21; /*0x59ba58*/
    }
    else
    {
      return 0.0; /*0x59b9d6*/
    }
  }
}



// ==== 0x0059BAB0  Map_Helper_59BAB0  this=-  sig=csp ====
char __stdcall sub_59BAB0(__int16 *a1, int *a2, char a3, double a4, double a5)
{
  int v5; // esi
  int v7; // edx
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // edx
  int v12; // eax

  v5 = *a2; /*0x59babb*/
  if ( *a2 == dword_ABE2F0 && a2[1] == dword_ABE2F4 && a2[2] == dword_ABE2F8 && a2[3] == dword_ABE2FC ) /*0x59bae5*/
    return 1; /*0x59baeb*/
  if ( a3 ) /*0x59baf4*/
  {
    v7 = a1[1]; /*0x59bb00*/
    v8 = (double)(*a1 - 2 * v5 - v7 + dword_87F8DC - 1) * 0.5 - (double)a2[2] * 0.5; /*0x59bb3f*/
    v9 = (double)(*a1 - 2 * a2[1] - dword_87F8DC + v7 - 1) * 0.5 - (double)a2[3] * 0.5; /*0x59bb54*/
    if ( v9 * v9 * a5 + v8 * v8 * a4 < 1.0 ) /*0x59bb77*/
      return 1; /*0x59bb80*/
  }
  else
  {
    v10 = *a1; /*0x59bb87*/
    v11 = a1[1]; /*0x59bb8a*/
    if ( v10 >= v5 && v10 < v5 + a2[2] ) /*0x59bb99*/
    {
      v12 = a2[1]; /*0x59bb9b*/
      if ( v11 >= v12 && v11 < v12 + a2[3] ) /*0x59bba9*/
        return 1; /*0x59bbb2*/
    }
  }
  return 0; /*0x59bae7*/
}



// ==== 0x0059BBC0  RandomMap::PlaceTerrain  this=RandomMap  sig=csp ====
int __thiscall RandomMap::PlaceTerrain(RandomMap *this, int a2, _DWORD *a3, int a4, int a5, int a6, double a7, char a8)
{
  double v8; // st7
  int v9; // eax
  int v10; // edi
  void *v11; // eax
  Heap *v12; // eax
  Heap *v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int16 v19; // di
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int16 v22; // cx
  __int16 v23; // ax
  Cell *v24; // eax
  int result; // eax
  __int16 v26; // dx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  _DWORD *v30; // edi
  unsigned int v31; // ecx
  unsigned int v32; // edx
  Heap v33; // ebx
  unsigned int v35; // eax
  __int16 *v36; // edi
  Heap v37; // eax
  _DWORD *v39; // eax
  char *v40; // ecx
  int v41; // edx
  int v42; // ebx
  char v43; // al
  int v44; // eax
  __int16 v45; // cx
  int v46; // eax
  int v47; // ecx
  int v48; // edi
  Cell *v49; // eax
  Heap v50; // ebx
  __int16 v51; // ax
  __int16 v52; // ax
  int v53; // ecx
  Heap v55; // eax
  unsigned int v56; // ecx
  unsigned int v57; // edi
  unsigned int v58; // edx
  Heap v59; // edi
  Heap v62; // ecx
  Heap v63; // ecx
  bool v64; // zf
  Heap v65; // eax
  Heap v66; // eax
  __int16 *v67; // edi
  Cell *v68; // ebx
  int v69; // edi
  Heap v70; // eax
  int i; // eax
  int v72; // ecx
  int v73; // esi
  int v74; // edi
  int j; // eax
  int v76; // ecx
  double v77; // [esp+0h] [ebp-98h]
  char inited; // [esp+17h] [ebp-81h]
  __int16 v80[2]; // [esp+1Ch] [ebp-7Ch] BYREF
  __int16 v81[2]; // [esp+20h] [ebp-78h] BYREF
  int v82; // [esp+24h] [ebp-74h]
  int v83; // [esp+28h] [ebp-70h]
  int v84; // [esp+2Ch] [ebp-6Ch]
  void *Block; // [esp+30h] [ebp-68h]
  float v86; // [esp+34h] [ebp-64h]
  float v87; // [esp+38h] [ebp-60h]
  int v88; // [esp+3Ch] [ebp-5Ch]
  int v89; // [esp+40h] [ebp-58h]
  int v90; // [esp+44h] [ebp-54h]
  __int64 v91; // [esp+48h] [ebp-50h]
  __int64 v92; // [esp+50h] [ebp-48h]
  int v93; // [esp+58h] [ebp-40h] BYREF
  int v94; // [esp+60h] [ebp-38h]
  double v95; // [esp+68h] [ebp-30h]
  double v96; // [esp+70h] [ebp-28h]
  double v97; // [esp+78h] [ebp-20h]
  double v98; // [esp+80h] [ebp-18h]
  double v99; // [esp+88h] [ebp-10h]
  double v100; // [esp+90h] [ebp-8h]

  v9 = a2; /*0x59bbcc*/
  if ( a2 <= 400 ) /*0x59bbdb*/
  {
    v9 = 400; /*0x59bbdd*/
    a2 = 400; /*0x59bbe2*/
  }
  v10 = 8 * v9 + 2; /*0x59bbe5*/
  if ( v10 <= 100 ) /*0x59bbef*/
    v10 = 100; /*0x59bbf1*/
  v90 = v10; /*0x59bbfd*/
  v11 = (void *)__2_YAPAXI_Z(8 * v10); /*0x59bc02*/
  if ( v11 ) /*0x59bc0e*/
  {
    Block = v11; /*0x59bc13*/
    LODWORD(v95) = v10 - 1; /*0x59bc17*/
  }
  else
  {
    Block = 0; /*0x59bc1d*/
  }
  v12 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x59bc23*/
  v13 = v12; /*0x59bc28*/
  if ( v12 ) /*0x59bc2f*/
  {
    v12[3] = 0; /*0x59bc38*/
    v12[4] = (Heap)-1; /*0x59bc3c*/
    *v12 = 0; /*0x59bc43*/
    v12[1] = (Heap)v10; /*0x59bc45*/
    v14 = __2_YAPAXI_Z(4 * v10 + 4); /*0x59bc48*/
    v15 = (int)v13[1]; /*0x59bc4d*/
    v13[2] = (Heap)v14; /*0x59bc50*/
    v16 = 0; /*0x59bc56*/
    if ( v15 >= 0 ) /*0x59bc5a*/
    {
      do /*0x59bc69*/
      {
        ++v16; /*0x59bc5f*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v16 - 4) = 0; /*0x59bc60*/
      }
      while ( v16 <= *(_DWORD *)&v13[1] ); /*0x59bc69*/
    }
  }
  else
  {
    v13 = 0; /*0x59bc6d*/
  }
  if ( *(_DWORD *)a4 || *(_DWORD *)(a4 + 4) ) /*0x59bc7c*/
  {
    v26 = *(_WORD *)(a4 + 4); /*0x59bdec*/
    LOWORD(v88) = *(_DWORD *)a4; /*0x59bdf0*/
    HIWORD(v88) = v26; /*0x59bdf5*/
    *(_DWORD *)v80 = v88; /*0x59bdfe*/
LABEL_27:
    v87 = 0.0; /*0x59be02*/
    v86 = 0.0; /*0x59be13*/
    if ( *a3 != *(_DWORD *)&g_MissionQueueFrame.globalVariables[112] /*0x59be46*/
      || a3[1] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[116]
      || a3[2] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[120]
      || a3[3] != *(_DWORD *)&g_MissionQueueFrame.globalVariables[124] )
    {
      v27 = a3[3]; /*0x59be4b*/
      v84 = a3[2]; /*0x59be50*/
      v88 = v27; /*0x59be54*/
      if ( v84 <= v27 ) /*0x59be58*/
      {
        __asm { fild [esp+90h+var_5C] } /*0x59be76*/
        v86 = 1.0; /*0x59be7a*/
        __asm /*0x59be82*/
        {
          fidiv [esp+90h+var_6C]
          fmul ds:dbl_7E5190
          fstp [esp+90h+var_60]
        }
      }
      else
      {
        __asm { fild [esp+90h+var_6C] } /*0x59be5a*/
        v87 = 1.0; /*0x59be5e*/
        __asm /*0x59be66*/
        {
          fidiv [esp+90h+var_5C]
          fmul ds:dbl_7E5190
          fstp [esp+90h+var_64]
        }
      }
    }
    LODWORD(v92) = v80[0]; /*0x59be9a*/
    v28 = (int)*v13; /*0x59be9e*/
    __asm { fild dword ptr [esp+90h+var_48] } /*0x59bea0*/
    LODWORD(v92) = v80[1]; /*0x59bea4*/
    v29 = 0; /*0x59beaa*/
    __asm /*0x59beae*/
    {
      fstp [esp+90h+var_28]
      fild dword ptr [esp+90h+var_48]
    }
    v82 = 0; /*0x59beb6*/
    __asm { fstp [esp+90h+var_20] } /*0x59beba*/
    if ( v28 >= 0 ) /*0x59bebe*/
    {
      do /*0x59becc*/
      {
        ++v29; /*0x59bec3*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v29 - 4) = 0; /*0x59bec4*/
      }
      while ( v29 <= *(_DWORD *)v13 ); /*0x59becc*/
    }
    v30 = Block; /*0x59bece*/
    *v13 = 0; /*0x59bed2*/
    v83 = 1; /*0x59bed8*/
    *v30 = *(_DWORD *)v80; /*0x59bee0*/
    v30[1] = 0; /*0x59bee2*/
    *(_DWORD *)(80 * (v80[0] + g_MapCellWidth * v80[1]) + g_MissionQueueFrame.localVariables[163] + 60) = *((_DWORD *)this + 194); /*0x59bf0d*/
    v31 = *(_DWORD *)v13 + 1; /*0x59bf16*/
    LODWORD(v92) = v30[1]; /*0x59bf19*/
    v32 = v31 >> 1; /*0x59bf20*/
    if ( v31 < *(_DWORD *)&v13[1] ) /*0x59bf24*/
    {
      for ( ; v31 > 1; v32 >>= 1 ) /*0x59bf29*/
      {
        v33 = v13[2]; /*0x59bf2b*/
        _EAX = *(_DWORD *)(*(_DWORD *)&v33 + 4 * v32); /*0x59bf2e*/
        __asm /*0x59bf31*/
        {
          fld dword ptr [eax+4]
          fcomp dword ptr [esp+90h+var_48]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x59bf3d*/
          break; /*0x59bf3d*/
        *(_DWORD *)(*(_DWORD *)&v33 + 4 * v31) = *(_DWORD *)(*(_DWORD *)&v33 + 4 * v32); /*0x59bf42*/
        v31 = v32; /*0x59bf45*/
      }
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * v31) = v30; /*0x59bf51*/
      v35 = (unsigned int)v13[3]; /*0x59bf56*/
      ++*(_DWORD *)v13; /*0x59bf5c*/
      if ( (unsigned int)v30 > v35 ) /*0x59bf5e*/
        v13[3] = (Heap)v30; /*0x59bf60*/
      if ( (unsigned int)v30 < *(_DWORD *)&v13[4] ) /*0x59bf66*/
        v13[4] = (Heap)v30; /*0x59bf68*/
    }
    if ( *v13 ) /*0x59bf6b*/
    {
      v37 = v13[2]; /*0x59bf75*/
      v36 = *(__int16 **)(*(_DWORD *)&v37 + 4); /*0x59bf7d*/
      *(_DWORD *)(*(_DWORD *)&v37 + 4) = *(_DWORD *)(*(_DWORD *)&v37 + 4 * *(_DWORD *)v13); /*0x59bf80*/
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59bf88*/
      Heap::SiftDown(v13, 1); /*0x59bf96*/
    }
    else
    {
      v36 = 0; /*0x59bf71*/
    }
    _EAX = a3; /*0x59bf9b*/
    v84 = (int)v36; /*0x59bf9e*/
    __asm /*0x59bfa2*/
    {
      fild dword ptr [eax+8]
      fmul ds:dbl_7E1738
      fld st
      fmul st, st(1)
      fdivr ds:dbl_7E1718
      fstp [esp+90h+var_10]
      fstp st
      fild dword ptr [eax+0Ch]
    }
    __asm
    {
      fmul ds:dbl_7E1738
      fld st
      fmul st, st(1)
      fdivr ds:dbl_7E1718
      fstp [esp+90h+var_18]
      fstp st
    }
    do /*0x59c32c*/
    {
      if ( !v36 ) /*0x59bfe4*/
        break; /*0x59bfe4*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bff2*/
        *(_DWORD *)(80 * (*v36 + g_MapCellWidth * v36[1]) + g_MissionQueueFrame.localVariables[163] + 56) = *((_DWORD *)this + 194); /*0x59c014*/
      v39 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v36); /*0x59c01e*/
      v40 = (char *)Block; /*0x59c023*/
      v41 = v83; /*0x59c027*/
      v39[14] = 0; /*0x59c02b*/
      v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c032*/
      v43 = 0; /*0x59c038*/
      LODWORD(v92) = 0; /*0x59c03d*/
      LODWORD(v91) = &v40[8 * v41]; /*0x59c041*/
      while ( 1 ) /*0x59c04b*/
      {
        v44 = v43 & 7; /*0x59c04b*/
        v45 = v36[1] + HIWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c064*/
        LOWORD(v89) = *v36 + LOWORD(g_DDrawSurfaceManager.scenario[v44 + 82]); /*0x59c068*/
        HIWORD(v89) = v45; /*0x59c06d*/
        *(_DWORD *)v81 = v89; /*0x59c076*/
        v46 = v45; /*0x59c07d*/
        v47 = v45 + (__int16)v89; /*0x59c080*/
        if ( v47 > v42 /*0x59c0a9*/
          && (__int16)v89 - v46 < v42
          && v46 - (__int16)v89 < v42
          && v47 <= g_MissionQueueFrame.localVariables[161] )
        {
          v48 = g_MissionQueueFrame.localVariables[163] + 80 * ((__int16)v89 + g_MapCellWidth * v46); /*0x59c0c4*/
          if ( !*(_DWORD *)(v48 + 56) && *(_DWORD *)(v48 + 60) != *((_DWORD *)this + 194) ) /*0x59c0de*/
          {
            v49 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v81); /*0x59c0ee*/
            if ( (unsigned __int8)Cell::IsGroundTypeRange(v49) && v83 < v90 && Map_Helper_59BAB0(v81, a3, a5, v99, v98) ) /*0x59c13d*/
            {
              __asm { fld [esp+90h+var_28] } /*0x59c14a*/
              v50 = (Heap)v91; /*0x59c14e*/
              __asm { fadd ds:dbl_7E1738 } /*0x59c156*/
              *(_DWORD *)v91 = *(_DWORD *)v81; /*0x59c15c*/
              v51 = Math::RoundToInt(v8); /*0x59c15e*/
              __asm /*0x59c163*/
              {
                fld [esp+90h+var_20]
                fadd ds:dbl_7E1738
              }
              LOWORD(v88) = v51; /*0x59c16d*/
              v52 = Math::RoundToInt(v8); /*0x59c172*/
              HIWORD(v88) = v52; /*0x59c177*/
              v93 = v88; /*0x59c180*/
              if ( a8 ) /*0x59c189*/
              {
                v8 = Map_Helper_59B940((__int16 *)&v93, v81, a3, (__int16 *)a6, v87, v86); /*0x59c1ab*/
              }
              else
              {
                LODWORD(v91) = (v81[1] - v52) * (v81[1] - v52) + (v81[0] - (__int16)v88) * (v81[0] - (__int16)v88); /*0x59c1d7*/
                __asm /*0x59c1db*/
                {
                  fild dword ptr [esp+98h+var_50]
                  fstp [esp+98h+var_98]; double
                }
                Math::Sqrt(v77); /*0x59c1e2*/
                __asm { fstp [esp+98h+var_30] } /*0x59c1e7*/
                *(_QWORD *)&v100 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59c1f8*/
                __asm /*0x59c20a*/
                {
                  fild [esp+90h+var_8]
                  fmul ds:dbl_7ED808
                  fmul ds:dbl_7ED898
                  fadd [esp+90h+var_30]
                }
              }
              v53 = v83; /*0x59c225*/
              __asm { fstp dword ptr [ebx+4] } /*0x59c229*/
              *(float *)(*(_DWORD *)&v50 + 4) = _ET1; /*0x59c229*/
              *(_DWORD *)(v48 + 60) = *((_DWORD *)this + 194); /*0x59c233*/
              v55 = v50; /*0x59c236*/
              v83 = v53 + 1; /*0x59c238*/
              v56 = *(_DWORD *)v13 + 1; /*0x59c244*/
              v94 = *(_DWORD *)(*(_DWORD *)&v50 + 4); /*0x59c245*/
              v57 = (unsigned int)v13[1]; /*0x59c249*/
              v58 = v56 >> 1; /*0x59c24e*/
              LODWORD(v95) = v50; /*0x59c252*/
              LODWORD(v91) = *(_DWORD *)&v50 + 8; /*0x59c256*/
              if ( v56 < v57 ) /*0x59c25a*/
              {
                if ( v56 > 1 ) /*0x59c25f*/
                {
                  do /*0x59c27f*/
                  {
                    v59 = v13[2]; /*0x59c261*/
                    _EBX = *(_DWORD *)(*(_DWORD *)&v59 + 4 * v58); /*0x59c264*/
                    __asm /*0x59c267*/
                    {
                      fld dword ptr [ebx+4]
                      fcomp dword ptr [esp+58h]
                      fnstsw ax
                    }
                    if ( (_AX & 0x4100) != 0 ) /*0x59c273*/
                      break; /*0x59c273*/
                    *(_DWORD *)(*(_DWORD *)&v59 + 4 * v56) = _EBX; /*0x59c275*/
                    v56 = v58; /*0x59c278*/
                    v58 >>= 1; /*0x59c27a*/
                  }
                  while ( v56 > 1 ); /*0x59c27f*/
                  v55 = (Heap)LODWORD(v95); /*0x59c281*/
                }
                *(Heap *)(*(_DWORD *)&v13[2] + 4 * v56) = v55; /*0x59c288*/
                v62 = v13[3]; /*0x59c28d*/
                ++*(_DWORD *)v13; /*0x59c293*/
                if ( *(_DWORD *)&v55 > *(unsigned int *)&v62 ) /*0x59c295*/
                  v13[3] = v55; /*0x59c297*/
                if ( *(unsigned int *)&v55 < *(_DWORD *)&v13[4] ) /*0x59c29d*/
                  v13[4] = v55; /*0x59c29f*/
              }
            }
            v42 = g_MissionQueueFrame.localVariables[160]; /*0x59c2a2*/
          }
        }
        v43 = v92 + 2; /*0x59c2ac*/
        LODWORD(v92) = v92 + 2; /*0x59c2b2*/
        if ( (int)v92 >= 8 ) /*0x59c2b6*/
          break; /*0x59c2b6*/
        v36 = (__int16 *)v84; /*0x59c047*/
      }
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59c2c1*/
      __asm { fmul [ebp+arg_14] } /*0x59c2c6*/
      __asm
      {
        fadd [esp+90h+var_28]
        fstp [esp+90h+var_28]
      }
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59c2d6*/
      __asm { fmul [ebp+arg_14] } /*0x59c2db*/
      __asm { fadd [esp+90h+var_20] }
      ++v82; /*0x59c2e7*/
      v63 = *v13; /*0x59c2eb*/
      v64 = *v13 == 0; /*0x59c2ed*/
      __asm { fstp [esp+90h+var_20] } /*0x59c2ef*/
      if ( v64 ) /*0x59c2f3*/
      {
        v36 = 0; /*0x59c2f5*/
      }
      else
      {
        v65 = v13[2]; /*0x59c2f9*/
        v36 = *(__int16 **)(*(_DWORD *)&v65 + 4); /*0x59c301*/
        *(_DWORD *)(*(_DWORD *)&v65 + 4) = *(_DWORD *)(*(_DWORD *)&v65 + 4 * *(_DWORD *)&v63); /*0x59c304*/
        *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c30c*/
        Heap::SiftDown(v13, 1); /*0x59c31a*/
      }
      v84 = (int)v36; /*0x59c328*/
    }
    while ( v82 < a2 ); /*0x59c32c*/
    if ( *v13 ) /*0x59c332*/
    {
      v66 = v13[2]; /*0x59c33c*/
      v67 = *(__int16 **)(*(_DWORD *)&v66 + 4); /*0x59c344*/
      *(_DWORD *)(*(_DWORD *)&v66 + 4) = *(_DWORD *)(*(_DWORD *)&v66 + 4 * *(_DWORD *)v13); /*0x59c347*/
      *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c34f*/
      Heap::SiftDown(v13, 1); /*0x59c35d*/
      for ( ; v67; ++v82 ) /*0x59c364*/
      {
        v68 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v67); /*0x59c375*/
        v69 = g_MissionQueueFrame.localVariables[163] + 80 * (*v67 + g_MapCellWidth * v67[1]); /*0x59c393*/
        if ( !*(_DWORD *)(v69 + 56) && (unsigned __int8)Cell::IsGroundTypeRange(v68) ) /*0x59c39e*/
        {
          v68->Cell_field_0x38 = 0; /*0x59c3ab*/
          *(_DWORD *)(v69 + 56) = *((_DWORD *)this + 194); /*0x59c3b8*/
        }
        if ( *v13 ) /*0x59c3bb*/
        {
          v70 = v13[2]; /*0x59c3c5*/
          v67 = *(__int16 **)(*(_DWORD *)&v70 + 4); /*0x59c3cd*/
          *(_DWORD *)(*(_DWORD *)&v70 + 4) = *(_DWORD *)(*(_DWORD *)&v70 + 4 * *(_DWORD *)v13); /*0x59c3d0*/
          *(_DWORD *)(*(_DWORD *)&v13[2] + 4 * (*(_DWORD *)v13)--) = 0; /*0x59c3d8*/
          Heap::SiftDown(v13, 1); /*0x59c3e6*/
        }
        else
        {
          v67 = 0; /*0x59c3c1*/
        }
      }
    }
    __3_YAXPAX_Z(Block); /*0x59c405*/
    if ( v13 ) /*0x59c411*/
    {
      __3_YAXPAX_Z(*(void **)&v13[2]); /*0x59c417*/
      __3_YAXPAX_Z(v13); /*0x59c41d*/
    }
    inited = MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], *((_DWORD *)this + 194), 1); /*0x59c43d*/
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c441*/
    for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c452*/
          i;
          i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
    {
      v72 = *(_DWORD *)(i + 56); /*0x59c454*/
      if ( v72 >= dword_ABAD28 && v72 < dword_ABAD28 + 42 ) /*0x59c466*/
      {
        *(_DWORD *)(i + 56) = 0; /*0x59c468*/
        *(_BYTE *)(i + 282) = 0; /*0x59c46b*/
      }
    }
    if ( inited ) /*0x59c486*/
    {
      result = v82; /*0x59c51b*/
      ++*((_DWORD *)this + 194); /*0x59c521*/
    }
    else
    {
      v73 = g_CellPassabilityLUT; /*0x59c48c*/
      v74 = *((_DWORD *)this + 194); /*0x59c492*/
      LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c49d*/
      for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59c4ae*/
            j;
            j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
      {
        LODWORD(v95) = *(_DWORD *)(j + 36); /*0x59c4b3*/
        v76 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v95) + g_MapCellWidth * SWORD1(v95)); /*0x59c4d4*/
        if ( *(_DWORD *)(v76 + 56) == v74 ) /*0x59c4d9*/
        {
          *(_DWORD *)(v76 + 56) = 0; /*0x59c4db*/
          *(_BYTE *)(v76 + 75) = 0; /*0x59c4e2*/
          *(_DWORD *)(j + 56) = v73; /*0x59c4e6*/
          *(_BYTE *)(j + 282) = 0; /*0x59c4e9*/
          *(_BYTE *)(j + 283) = *((_DWORD *)this + 195); /*0x59c4f6*/
        }
      }
      return 0; /*0x59c50a*/
    }
  }
  else
  {
    v84 = 0; /*0x59bc85*/
    while ( 1 ) /*0x59bc97*/
    {
      v17 = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x59bc97*/
      *(_QWORD *)&v97 = *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x59bc9d*/
      __asm /*0x59bca1*/
      {
        fild [esp+90h+var_20]
        fstp [esp+90h+var_8]
      }
      do /*0x59bcdc*/
      {
        *(_QWORD *)&v96 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bcb6*/
        __asm /*0x59bcc2*/
        {
          fild [esp+90h+var_28]
          fmul [esp+90h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v18) = Math::RoundToInt(v8); /*0x59bcd3*/
        v19 = v18; /*0x59bcd8*/
      }
      while ( v18 > v17 ); /*0x59bcdc*/
      v20 = *(_DWORD *)&stru_87F5F0.__pad_58[664] - 1; /*0x59bcec*/
      v92 = *(unsigned int *)&stru_87F5F0.__pad_58[664]; /*0x59bcf2*/
      __asm /*0x59bcf6*/
      {
        fild [esp+90h+var_48]
        fstp [esp+90h+var_8]
      }
      do /*0x59bd2f*/
      {
        v91 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59bd0b*/
        __asm /*0x59bd17*/
        {
          fild [esp+90h+var_50]
          fmul [esp+90h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v21) = Math::RoundToInt(v8); /*0x59bd28*/
      }
      while ( v21 > v20 ); /*0x59bd2f*/
      HIWORD(v93) = -v19; /*0x59bd3c*/
      HIWORD(v94) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x59bd41*/
      LOWORD(v95) = v19 + 1; /*0x59bd51*/
      WORD1(v95) = *(_WORD *)&stru_87F5F0.__pad_58[660] - v19; /*0x59bd56*/
      v22 = v21 + v19 + 1; /*0x59bd63*/
      v23 = *(_WORD *)&stru_87F5F0.__pad_58[660] - v19 + v21; /*0x59bd65*/
      LOWORD(v88) = v22; /*0x59bd67*/
      HIWORD(v88) = v23; /*0x59bd6c*/
      *(_DWORD *)v80 = v88; /*0x59bd75*/
      if ( ++v84 >= 200 ) /*0x59bd88*/
        return 0; /*0x59bde1*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59bd92*/
      {
        if ( !*(_DWORD *)(80 * (v22 + g_MapCellWidth * v23) + g_MissionQueueFrame.localVariables[163] + 56) ) /*0x59bdad*/
        {
          v24 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v80); /*0x59bdc3*/
          if ( (unsigned __int8)Cell::IsGroundTypeRange(v24) ) /*0x59bdca*/
          {
            if ( v84 < 200 ) /*0x59bddf*/
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c536*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x59c549*/
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



// ==== 0x0059C580  RandomMap::GrowTiberium  this=RandomMap  sig=csp ====
char __thiscall RandomMap::GrowTiberium(RandomMap *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // edi
  char result; // al
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = this->RandomMap_field_0x3C[0]; /*0x59c594*/
  ++*((_DWORD *)this + 194); /*0x59c59b*/
  if ( (v2 == 3 || v2 == 4) && *(int *)this->__pad_4C > 20 ) /*0x59c5ac*/
  {
    v3 = 0; /*0x59c5ae*/
    while ( v3 < 10 ) /*0x59c5b5*/
    {
      v6 = 0; /*0x59c5c1*/
      ++v3; /*0x59c5d0*/
      if ( Tiberium::ProcessGrowth((Tiberium *)this, (int)&v6, 0.0, 0) ) /*0x59c5cb*/
      {
        ++*((_DWORD *)this + 194); /*0x59c5db*/
        break; /*0x59c5db*/
      }
    }
  }
  v4 = 0; /*0x59c5e1*/
  result = 0; /*0x59c5e3*/
  while ( v4 < 10 ) /*0x59c5e8*/
  {
    v6 = 0; /*0x59c5ee*/
    result = TiberiumClass::Grow((TiberiumClass *)this, &v6); /*0x59c5fb*/
    ++v4; /*0x59c600*/
    if ( result ) /*0x59c603*/
    {
      ++*((_DWORD *)this + 194); /*0x59c605*/
      return result; /*0x59c605*/
    }
  }
  return result; /*0x59c60b*/
}



// ==== 0x0059C630  FindMapCell  this=RandomMap  sig=ida-proto ====
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

  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x59c63a*/
  result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c644*/
  for ( i = result; result; i = result ) /*0x59c64f*/
  {
    if ( *(_DWORD *)(i + 56) == g_CellPassabilityLUT && !*(_BYTE *)(i + 282) ) /*0x59c668*/
    {
      NeighbourContent = Cell::GetNeighbourContent((_DWORD *)i, 2u); /*0x59c681*/
      v3 = Cell::GetNeighbourContent((_DWORD *)i, 4u); /*0x59c68c*/
      v4 = Cell::GetNeighbourContent((_DWORD *)i, 3u); /*0x59c68e*/
      if ( NeighbourContent[14] != g_CellPassabilityLUT /*0x59c6ce*/
        || *((_BYTE *)NeighbourContent + 282)
        || v3[14] != g_CellPassabilityLUT
        || *((_BYTE *)v3 + 282)
        || v4[14] != g_CellPassabilityLUT
        || *((_BYTE *)v4 + 282) )
      {
        goto LABEL_25; /*0x59c6ce*/
      }
      do /*0x59c704*/
      {
        v10 = (unsigned int)Random::State(&unk_ABE890); /*0x59c6e4*/
        v5 = Math::RoundToInt((double)v10 * 0.000000002328306437080797 + 1.0); /*0x59c6fc*/
      }
      while ( v5 > 0xA ); /*0x59c704*/
      if ( v5 == 1 ) /*0x59c709*/
      {
LABEL_25:
        do /*0x59c7c5*/
        {
          v12 = (unsigned int)Random::State(&unk_ABE890); /*0x59c7a6*/
          v9 = Math::RoundToInt((double)v12 * 0.00000004679895938532403); /*0x59c7bd*/
        }
        while ( v9 > 0xC8 ); /*0x59c7c5*/
        *(_DWORD *)(i + 56) = v9 / 0x28 + g_CellPassabilityLUT + 8; /*0x59c7da*/
      }
      else
      {
        do /*0x59c738*/
        {
          v11 = (unsigned int)Random::State(&unk_ABE890); /*0x59c719*/
          v6 = Math::RoundToInt((double)v11 * 0.0000000563450157773553); /*0x59c72b*/
        }
        while ( (unsigned int)v6 > 0xF1 ); /*0x59c738*/
        if ( v6 < 240 ) /*0x59c740*/
          v7 = v6 / 40; /*0x59c75c*/
        else
          v7 = 247 - v6; /*0x59c747*/
        if ( dword_ABED10 ) /*0x59c769*/
          v8 = *((_DWORD *)dword_ABED10 + 20 * *(__int16 *)(i + 36) + 20 * g_MapCellWidth * *(__int16 *)(i + 38) + 14); /*0x59c786*/
        else
          v8 = -1; /*0x59c76b*/
        PlaceMapSeedClassBuildings(v7 + g_CellPassabilityLUT, (_WORD *)(i + 36), v8, -1); /*0x59c795*/
      }
    }
    result = LayerClass::CellIteratorNext(&dword_87F7E8); /*0x59c7e2*/
  }
  return result; /*0x59c7f3*/
}



// ==== 0x0059C920  TiberiumClass::Grow  this=TiberiumClass  sig=csp ====
char __thiscall TiberiumClass::Grow(TiberiumClass *this, _WORD *a2)
{
  double v2; // st7
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // esi
  void *v8; // eax
  Heap *v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int i; // eax
  _WORD *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  void **v20; // ecx
  void *v21; // eax
  bool v22; // zf
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int16 v25; // di
  unsigned int v26; // ebx
  unsigned int v27; // eax
  __int16 v28; // cx
  __int16 v29; // ax
  Cell *v30; // eax
  int v32; // eax
  int v33; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  _DWORD *v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // edx
  Heap v44; // ebx
  unsigned int v46; // eax
  int v47; // ecx
  Heap v48; // eax
  __int16 *v49; // edi
  int v50; // edx
  _DWORD *v51; // eax
  char *v52; // edx
  float *v53; // ebx
  int v54; // ecx
  __int16 v55; // ax
  int v56; // ecx
  int v57; // edi
  Cell *v58; // eax
  __int16 v59; // ax
  int v60; // edx
  Heap v62; // edi
  unsigned int v63; // ecx
  unsigned int v64; // edx
  Heap v66; // eax
  int v67; // edi
  Heap v68; // eax
  int v69; // edi
  Heap v70; // eax
  __int16 *v71; // edi
  Cell *v72; // ebx
  int v73; // edi
  Heap v74; // eax
  TiberiumClass *v75; // edi
  int j; // eax
  int v77; // ecx
  int v78; // ecx
  int v79; // esi
  int k; // eax
  int v81; // ecx
  double v82; // [esp+0h] [ebp-78h]
  char inited; // [esp+1Bh] [ebp-5Dh]
  __int16 v85[2]; // [esp+20h] [ebp-58h] BYREF
  __int64 v86; // [esp+24h] [ebp-54h]
  int v87; // [esp+2Ch] [ebp-4Ch]
  void *Block; // [esp+30h] [ebp-48h]
  __int16 v89[4]; // [esp+34h] [ebp-44h] BYREF
  __int64 v90; // [esp+3Ch] [ebp-3Ch]
  __int64 v91; // [esp+44h] [ebp-34h]
  int v92; // [esp+4Ch] [ebp-2Ch]
  double v93; // [esp+50h] [ebp-28h]
  double v94; // [esp+58h] [ebp-20h]
  double v95; // [esp+60h] [ebp-18h]
  double v96; // [esp+68h] [ebp-10h]
  double v97; // [esp+70h] [ebp-8h]

  _EBX = (MapClass *)this; /*0x59c92a*/
  v4 = this->?[4]; /*0x59c92e*/
  inited = 1; /*0x59c937*/
  LODWORD(v94) = v4; /*0x59c93c*/
  if ( v4 ) /*0x59c940*/
  {
    __asm /*0x59c942*/
    {
      fild dword ptr [ebx+184h]
      fimul dword ptr [ebx+180h]
      fimul dword ptr [esp+70h+var_20]
      fmul ds:dbl_7ED9F8
      fadd ds:dbl_7E2AC0
    }
    LOWORD(v4) = Math::RoundToInt(v2); /*0x59c95e*/
  }
  v5 = v4 - (unsigned int)_EBX->MapClass_field_0x304; /*0x59c963*/
  LODWORD(v93) = v5; /*0x59c96c*/
  if ( v5 <= 75 ) /*0x59c970*/
    return 0; /*0x59c970*/
  v6 = 2 * v5 + 2; /*0x59c976*/
  v7 = v6; /*0x59c97d*/
  if ( v6 <= 100 ) /*0x59c97f*/
    v7 = 100; /*0x59c981*/
  v8 = (void *)__2_YAPAXI_Z(8 * v7); /*0x59c98e*/
  if ( v8 ) /*0x59c998*/
  {
    Block = v8; /*0x59c99b*/
    LODWORD(v96) = v7 - 1; /*0x59c99f*/
  }
  else
  {
    Block = 0; /*0x59c9a5*/
  }
  v9 = (Heap *)__2_YAPAXI_Z(0x14u); /*0x59c9b4*/
  if ( v9 ) /*0x59c9bb*/
  {
    v10 = v6; /*0x59c9c0*/
    if ( v6 <= 100 ) /*0x59c9c2*/
      v10 = 100; /*0x59c9c4*/
    v9[3] = 0; /*0x59c9d3*/
    v9[4] = (Heap)-1; /*0x59c9d6*/
    *v9 = 0; /*0x59c9dd*/
    v9[1] = (Heap)v10; /*0x59c9df*/
    v11 = __2_YAPAXI_Z(4 * v10 + 4); /*0x59c9e2*/
    v12 = (int)v9[1]; /*0x59c9e7*/
    v9[2] = (Heap)v11; /*0x59c9ea*/
    v13 = 0; /*0x59c9f0*/
    if ( v12 >= 0 ) /*0x59c9f4*/
    {
      do /*0x59ca03*/
      {
        ++v13; /*0x59c9f9*/
        *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v13 - 4) = 0; /*0x59c9fa*/
      }
      while ( v13 <= *(_DWORD *)&v9[1] ); /*0x59ca03*/
    }
  }
  else
  {
    v9 = 0; /*0x59ca07*/
  }
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ca10*/
  for ( i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59ca21*/
        i;
        i = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v94) = *(_DWORD *)(i + 36); /*0x59ca26*/
    *(_DWORD *)(80 * (SLOWORD(v94) + g_MapCellWidth * SWORD1(v94)) + g_MissionQueueFrame.localVariables[163] + 60) = 0; /*0x59ca4b*/
  }
  v15 = a2; /*0x59ca5e*/
  v16 = g_MapCellWidth * g_MapCellWidth; /*0x59ca61*/
  if ( *a2 || a2[1] ) /*0x59ca6e*/
  {
    if ( v16 > 0 ) /*0x59cc83*/
    {
      v32 = 0; /*0x59cc89*/
      do /*0x59cc9a*/
      {
        v32 += 80; /*0x59cc91*/
        --v16; /*0x59cc94*/
        *(_BYTE *)(v32 + g_MissionQueueFrame.localVariables[163] - 12) = 1; /*0x59cc95*/
      }
      while ( v16 ); /*0x59cc9a*/
    }
  }
  else
  {
    if ( v16 > 0 ) /*0x59ca7b*/
    {
      v17 = 0; /*0x59ca7d*/
      v18 = g_MapCellWidth * g_MapCellWidth; /*0x59ca7f*/
      do /*0x59ca90*/
      {
        v17 += 80; /*0x59ca87*/
        --v18; /*0x59ca8a*/
        *(_BYTE *)(v17 + g_MissionQueueFrame.localVariables[163] - 12) = 0; /*0x59ca8b*/
      }
      while ( v18 ); /*0x59ca90*/
    }
    MapClass::GrowLayer(_EBX, 0, 2, -2); /*0x59ca9a*/
    if ( v16 > 0 ) /*0x59caa1*/
    {
      v19 = 0; /*0x59caa3*/
      do /*0x59cada*/
      {
        v20 = (void **)(v19 + g_MissionQueueFrame.localVariables[163] + 56); /*0x59caaa*/
        v21 = *v20; /*0x59caae*/
        if ( !*v20 || v21 == _EBX->MapClass_field_0x308 ) /*0x59cabc*/
        {
          *(_BYTE *)(v19 + g_MissionQueueFrame.localVariables[163] + 68) = 1; /*0x59cad1*/
        }
        else if ( v21 == (void *)-2 ) /*0x59cac1*/
        {
          *v20 = 0; /*0x59cac3*/
        }
        v19 += 80; /*0x59cad6*/
        --v16; /*0x59cad9*/
      }
      while ( v16 ); /*0x59cada*/
    }
    v15 = a2; /*0x59cadc*/
  }
  v22 = *v15 == 0; /*0x59cadf*/
  v87 = 0; /*0x59cae3*/
  if ( v22 && !v15[1] ) /*0x59caf1*/
  {
    while ( 1 ) /*0x59cb09*/
    {
      v23 = *(_DWORD *)&stru_87F5F0.__pad_58[660] - 1; /*0x59cb09*/
      v91 = *(unsigned int *)&stru_87F5F0.__pad_58[660]; /*0x59cb0f*/
      __asm /*0x59cb13*/
      {
        fild [esp+70h+var_34]
        fstp [esp+70h+var_8]
      }
      do /*0x59cb48*/
      {
        v90 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59cb25*/
        __asm /*0x59cb31*/
        {
          fild [esp+70h+var_3C]
          fmul [esp+70h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v24) = Math::RoundToInt(v2); /*0x59cb3f*/
        v25 = v24; /*0x59cb44*/
      }
      while ( v24 > v23 ); /*0x59cb48*/
      v26 = *(_DWORD *)&stru_87F5F0.__pad_58[664] - 1; /*0x59cb58*/
      *(_QWORD *)v89 = *(unsigned int *)&stru_87F5F0.__pad_58[664]; /*0x59cb5e*/
      __asm /*0x59cb62*/
      {
        fild qword ptr [esp+70h+var_44]
        fstp [esp+70h+var_8]
      }
      do /*0x59cb95*/
      {
        v86 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59cb74*/
        __asm /*0x59cb80*/
        {
          fild [esp+70h+var_54]
          fmul [esp+70h+var_8]
          fmul ds:dbl_7ED898
        }
        LOWORD(v27) = Math::RoundToInt(v2); /*0x59cb8e*/
      }
      while ( v27 > v26 ); /*0x59cb95*/
      WORD1(v95) = -v25; /*0x59cba2*/
      WORD1(v94) = *(_WORD *)&stru_87F5F0.__pad_58[660]; /*0x59cbab*/
      LOWORD(v96) = v25 + 1; /*0x59cbb7*/
      WORD1(v96) = *(_WORD *)&stru_87F5F0.__pad_58[660] - v25; /*0x59cbbc*/
      v28 = v27 + v25 + 1; /*0x59cbc9*/
      v29 = *(_WORD *)&stru_87F5F0.__pad_58[660] - v25 + v27; /*0x59cbcb*/
      LOWORD(v92) = v28; /*0x59cbcd*/
      HIWORD(v92) = v29; /*0x59cbd2*/
      *(_DWORD *)v85 = v92; /*0x59cbdb*/
      if ( ++v87 >= 200 ) /*0x59cbee*/
        return 0; /*0x59cbee*/
      if ( g_MissionQueueFrame.localVariables[163] ) /*0x59cbfc*/
      {
        if ( !*(_DWORD *)(80 * (v28 + g_MapCellWidth * v29) + g_MissionQueueFrame.localVariables[163] + 56) ) /*0x59cc17*/
        {
          v30 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v85); /*0x59cc2d*/
          if ( (unsigned __int8)Cell::IsEmpty(v30) ) /*0x59cc34*/
          {
            if ( *(_BYTE *)(80 * (v85[0] + g_MapCellWidth * v85[1]) + g_MissionQueueFrame.localVariables[163] + 68) ) /*0x59cc60*/
            {
              if ( v87 < 200 ) /*0x59cc74*/
                goto LABEL_50; /*0x59cc74*/
              return 0; /*0x59cc7e*/
            }
          }
        }
      }
    }
  }
  *(_DWORD *)v85 = *(_DWORD *)v15; /*0x59cca3*/
LABEL_50:
  v33 = LODWORD(v93); /*0x59cca7*/
  LODWORD(v86) = 0; /*0x59ccb0*/
  v92 = 76; /*0x59ccb4*/
  if ( SLODWORD(v93) >= 76 ) /*0x59ccbc*/
    v92 = LODWORD(v93); /*0x59ccbe*/
  __asm /*0x59ccc9*/
  {
    fild [esp+70h+var_2C]
    fstp [esp+70h+var_28]
  }
  LODWORD(v94) = v33 / 6; /*0x59ccdd*/
  __asm /*0x59cce3*/
  {
    fild dword ptr [esp+70h+var_20]
    fstp [esp+70h+var_10]
  }
  LODWORD(v94) = v33 / 3; /*0x59ccf2*/
  __asm /*0x59ccf6*/
  {
    fild dword ptr [esp+70h+var_20]
    fst qword ptr [esp+58h]
    fsub [esp+70h+var_10]
    fcomp [esp+70h+var_28]
    fnstsw ax
  }
  if ( (_AX & 0x4100) == 0 ) /*0x59cd0b*/
    goto LABEL_54; /*0x59cd0b*/
  __asm /*0x59cd0d*/
  {
    fld qword ptr [esp+58h]
    fadd [esp+70h+var_10]
    fcomp ds:dbl_7ED9F0
    fnstsw ax
  }
  if ( (_AX & 0x100) != 0 ) /*0x59cd20*/
  {
LABEL_54:
    __asm /*0x59cd22*/
    {
      fld [esp+70h+var_28]
      fsub ds:dbl_7ED9F0
      fmul ds:dbl_7E1738
      fst [esp+70h+var_10]
      fadd ds:dbl_7ED9F0
      fstp qword ptr [esp+58h]
    }
  }
  do /*0x59cd70*/
  {
    do /*0x59cd61*/
    {
      Random::Gaussian(&g_MissionQueueFrame.briefing[348]); /*0x59cd45*/
      __asm /*0x59cd4a*/
      {
        fmul [esp+70h+var_10]
        fadd qword ptr [esp+58h]
        fst [esp+70h+var_20]
        fcomp ds:dbl_7ED9F0
        fnstsw ax
      }
    }
    while ( (_AX & 0x100) != 0 ); /*0x59cd61*/
    __asm /*0x59cd63*/
    {
      fld [esp+70h+var_20]
      fcomp [esp+70h+var_28]
      fnstsw ax
    }
  }
  while ( (_AX & 0x4100) == 0 ); /*0x59cd70*/
  __asm { fld [esp+70h+var_20] } /*0x59cd72*/
  LOWORD(v38) = Math::RoundToInt(v2); /*0x59cd76*/
  v39 = (int)*v9; /*0x59cd7b*/
  v92 = v38; /*0x59cd7d*/
  v40 = 0; /*0x59cd81*/
  if ( v39 >= 0 ) /*0x59cd85*/
  {
    do /*0x59cd93*/
    {
      ++v40; /*0x59cd8a*/
      *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v40 - 4) = 0; /*0x59cd8b*/
    }
    while ( v40 <= *(_DWORD *)v9 ); /*0x59cd93*/
  }
  v41 = Block; /*0x59cd95*/
  *v9 = 0; /*0x59cd99*/
  LODWORD(v90) = 1; /*0x59cd9f*/
  *v41 = *(_DWORD *)v85; /*0x59cda7*/
  v41[1] = 0; /*0x59cda9*/
  *(_DWORD *)(80 * (v85[0] + g_MapCellWidth * v85[1]) + g_MissionQueueFrame.localVariables[163] + 60) = *((_DWORD *)this + 194); /*0x59cdd4*/
  v42 = *(_DWORD *)v9 + 1; /*0x59cddd*/
  LODWORD(v94) = v41[1]; /*0x59cde0*/
  v43 = v42 >> 1; /*0x59cde7*/
  if ( v42 < *(_DWORD *)&v9[1] ) /*0x59cdeb*/
  {
    for ( ; v42 > 1; v43 >>= 1 ) /*0x59cdf0*/
    {
      v44 = v9[2]; /*0x59cdf2*/
      _EAX = *(_DWORD *)(*(_DWORD *)&v44 + 4 * v43); /*0x59cdf5*/
      __asm /*0x59cdf8*/
      {
        fld dword ptr [eax+4]
        fcomp dword ptr [esp+70h+var_20]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x59ce04*/
        break; /*0x59ce04*/
      *(_DWORD *)(*(_DWORD *)&v44 + 4 * v42) = *(_DWORD *)(*(_DWORD *)&v44 + 4 * v43); /*0x59ce09*/
      v42 = v43; /*0x59ce0c*/
    }
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v42) = v41; /*0x59ce18*/
    v46 = (unsigned int)v9[3]; /*0x59ce1d*/
    ++*(_DWORD *)v9; /*0x59ce23*/
    if ( (unsigned int)v41 > v46 ) /*0x59ce25*/
      v9[3] = (Heap)v41; /*0x59ce27*/
    if ( (unsigned int)v41 < *(_DWORD *)&v9[4] ) /*0x59ce2d*/
      v9[4] = (Heap)v41; /*0x59ce2f*/
  }
  v47 = (int)*v9; /*0x59ce32*/
  if ( *v9 ) /*0x59ce32*/
  {
    v48 = v9[2]; /*0x59ce38*/
    v49 = *(__int16 **)(*(_DWORD *)&v48 + 4); /*0x59ce40*/
    *(_DWORD *)(*(_DWORD *)&v48 + 4) = *(_DWORD *)(*(_DWORD *)&v48 + 4 * v47); /*0x59ce43*/
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59ce4b*/
    Heap::SiftDown(v9, 1); /*0x59ce59*/
    v47 = (int)v49; /*0x59ce5e*/
  }
  v87 = v47; /*0x59ce64*/
  if ( v92 > 0 ) /*0x59ce6a*/
  {
    v50 = g_MissionQueueFrame.localVariables[163]; /*0x59ce70*/
    while ( v47 && inited ) /*0x59ce84*/
    {
      if ( v50 ) /*0x59ce98*/
        *(_DWORD *)(80 * (*(__int16 *)v47 + g_MapCellWidth * *(__int16 *)(v47 + 2)) + v50 + 56) = *((_DWORD *)this + 194); /*0x59ceba*/
      v51 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)v47); /*0x59cec4*/
      v52 = (char *)Block; /*0x59cecf*/
      v51[14] = g_CellPassabilityLUT; /*0x59ced3*/
      *((_BYTE *)v51 + 282) = 0; /*0x59ced6*/
      LODWORD(v91) = 0; /*0x59cee1*/
      v53 = (float *)&v52[8 * v90]; /*0x59cee9*/
      do /*0x59d0f8*/
      {
        v54 = v91 & 7; /*0x59cef4*/
        v55 = LOWORD(g_DDrawSurfaceManager.scenario[v54 + 82]) + *(_WORD *)v87; /*0x59cf00*/
        LOWORD(v54) = HIWORD(g_DDrawSurfaceManager.scenario[v54 + 82]); /*0x59cf0f*/
        LOWORD(v93) = v55; /*0x59cf13*/
        WORD1(v93) = *(_WORD *)(v87 + 2) + v54; /*0x59cf1c*/
        *(_DWORD *)v89 = LODWORD(v93); /*0x59cf25*/
        v56 = SWORD1(v93) + v55; /*0x59cf2f*/
        if ( v56 > g_MissionQueueFrame.localVariables[160] /*0x59cf60*/
          && v55 - SWORD1(v93) < g_MissionQueueFrame.localVariables[160]
          && SWORD1(v93) - v55 < g_MissionQueueFrame.localVariables[160]
          && v56 <= g_MissionQueueFrame.localVariables[161] )
        {
          v57 = g_MissionQueueFrame.localVariables[163] + 80 * (v55 + g_MapCellWidth * SWORD1(v93)); /*0x59cf7b*/
          if ( *(_DWORD *)(v57 + 56) /*0x59cfb9*/
            || *(_DWORD *)(v57 + 60) == *((_DWORD *)this + 194)
            || (v58 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v89),
                !(unsigned __int8)Cell::IsEmpty(v58))
            || !*(_BYTE *)(v57 + 68) )
          {
            v67 = *(_DWORD *)(v57 + 56); /*0x59d0d2*/
            if ( v67 && v67 != *((_DWORD *)this + 194) ) /*0x59d0e3*/
              inited = 0; /*0x59d0e5*/
          }
          else
          {
            v59 = v89[0]; /*0x59cfc4*/
            v60 = v89[1]; /*0x59cfcb*/
            *v53 = *(float *)v89; /*0x59cfd0*/
            LODWORD(v94) = (v85[0] - v59) * (v85[0] - v59) + (v85[1] - v60) * (v85[1] - v60); /*0x59cfef*/
            __asm /*0x59cff3*/
            {
              fild dword ptr [esp+78h+var_20]
              fstp [esp+78h+var_78]; double
            }
            Math::Sqrt(v82); /*0x59cffa*/
            __asm { fstp dword ptr [esp+78h+var_20] } /*0x59cfff*/
            *(_QWORD *)&v97 = (unsigned int)Random::State((Random *)&g_MissionQueueFrame.globalVariables[1552]); /*0x59d010*/
            __asm { fild [esp+70h+var_8] } /*0x59d01c*/
            __asm
            {
              fmul ds:dbl_7ED898
              fld ds:flt_7ED768
            }
            LODWORD(v90) = v90 + 1; /*0x59d035*/
            __asm /*0x59d039*/
            {
              fmul st, st(1)
              fld dword ptr [esp+70h+var_20]
              fmul ds:flt_7ED764
              faddp st(1), st
              fild dword ptr [esp+70h+var_54]
              fmul ds:flt_7ED76C
              fsubp st(1), st
              fstp dword ptr [ebx+4]
            }
            v53[1] = _ET1; /*0x59d053*/
            *(_DWORD *)(v57 + 60) = *((_DWORD *)this + 194); /*0x59d05c*/
            v62 = (Heap)v53; /*0x59d061*/
            v53 += 2; /*0x59d063*/
            v63 = *(_DWORD *)v9 + 1; /*0x59d066*/
            LODWORD(v94) = v53; /*0x59d067*/
            LODWORD(v95) = *(_DWORD *)(*(_DWORD *)&v62 + 4); /*0x59d070*/
            v64 = v63 >> 1; /*0x59d077*/
            __asm { fstp st } /*0x59d07b*/
            if ( v63 < *(_DWORD *)&v9[1] ) /*0x59d07d*/
            {
              for ( ; v63 > 1; v64 >>= 1 ) /*0x59d082*/
              {
                LODWORD(v96) = *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v64); /*0x59d08a*/
                __asm /*0x59d08e*/
                {
                  fld dword ptr [eax+4]
                  fcomp dword ptr [esp+58h]
                  fnstsw ax
                }
                if ( (_AX & 0x4100) != 0 ) /*0x59d09a*/
                  break; /*0x59d09a*/
                *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * v63) = LODWORD(v96); /*0x59d0a3*/
                v53 = (float *)LODWORD(v94); /*0x59d0a6*/
                v63 = v64; /*0x59d0aa*/
              }
              *(Heap *)(*(_DWORD *)&v9[2] + 4 * v63) = v62; /*0x59d0b6*/
              v66 = v9[3]; /*0x59d0bb*/
              ++*(_DWORD *)v9; /*0x59d0c1*/
              if ( *(_DWORD *)&v62 > *(unsigned int *)&v66 ) /*0x59d0c3*/
                v9[3] = v62; /*0x59d0c5*/
              if ( *(unsigned int *)&v62 < *(_DWORD *)&v9[4] ) /*0x59d0cb*/
                v9[4] = v62; /*0x59d0cd*/
            }
          }
        }
        LODWORD(v91) = v91 + 2; /*0x59d0f4*/
      }
      while ( (int)v91 < 8 ); /*0x59d0f8*/
      LODWORD(v86) = v86 + 1; /*0x59d103*/
      if ( *v9 ) /*0x59d107*/
      {
        v68 = v9[2]; /*0x59d113*/
        v69 = *(_DWORD *)(*(_DWORD *)&v68 + 4); /*0x59d11b*/
        *(_DWORD *)(*(_DWORD *)&v68 + 4) = *(_DWORD *)(*(_DWORD *)&v68 + 4 * *(_DWORD *)v9); /*0x59d11e*/
        *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d126*/
        Heap::SiftDown(v9, 1); /*0x59d134*/
        v87 = v69; /*0x59d139*/
      }
      else
      {
        v87 = 0; /*0x59d10d*/
      }
      if ( (int)v86 >= v92 ) /*0x59d147*/
        break; /*0x59d147*/
      v50 = g_MissionQueueFrame.localVariables[163]; /*0x59ce78*/
      v47 = v87; /*0x59ce7e*/
    }
  }
  if ( *v9 ) /*0x59d14d*/
  {
    v70 = v9[2]; /*0x59d157*/
    v71 = *(__int16 **)(*(_DWORD *)&v70 + 4); /*0x59d15f*/
    *(_DWORD *)(*(_DWORD *)&v70 + 4) = *(_DWORD *)(*(_DWORD *)&v70 + 4 * *(_DWORD *)v9); /*0x59d162*/
    *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d16a*/
    Heap::SiftDown(v9, 1); /*0x59d178*/
    if ( v71 ) /*0x59d17f*/
    {
      while ( inited ) /*0x59d18b*/
      {
        v72 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v71); /*0x59d19c*/
        v73 = g_MissionQueueFrame.localVariables[163] + 80 * (*v71 + g_MapCellWidth * v71[1]); /*0x59d1ba*/
        if ( !*(_DWORD *)(v73 + 56) && (unsigned __int8)Cell::IsEmpty(v72) && *(_BYTE *)(v73 + 68) ) /*0x59d1ce*/
        {
          v72->Cell_field_0x38 = g_CellPassabilityLUT; /*0x59d1de*/
          v72->__pad_FC[30] = 0; /*0x59d1e1*/
          *(_DWORD *)(v73 + 56) = *((_DWORD *)this + 194); /*0x59d1ee*/
        }
        else
        {
          inited = 0; /*0x59d1f3*/
        }
        if ( *v9 ) /*0x59d1f8*/
        {
          v74 = v9[2]; /*0x59d202*/
          v71 = *(__int16 **)(*(_DWORD *)&v74 + 4); /*0x59d20a*/
          *(_DWORD *)(*(_DWORD *)&v74 + 4) = *(_DWORD *)(*(_DWORD *)&v74 + 4 * *(_DWORD *)v9); /*0x59d20d*/
          *(_DWORD *)(*(_DWORD *)&v9[2] + 4 * (*(_DWORD *)v9)--) = 0; /*0x59d215*/
          Heap::SiftDown(v9, 1); /*0x59d223*/
        }
        else
        {
          v71 = 0; /*0x59d1fe*/
        }
        LODWORD(v86) = v86 + 1; /*0x59d22f*/
        if ( !v71 ) /*0x59d233*/
          goto LABEL_113; /*0x59d233*/
      }
      goto LABEL_121; /*0x59d18b*/
    }
  }
LABEL_113:
  if ( !inited ) /*0x59d23f*/
  {
LABEL_121:
    v75 = this; /*0x59d296*/
    goto LABEL_122; /*0x59d296*/
  }
  if ( (int)v86 <= 75 || (int)v86 <= v92 / 4 ) /*0x59d259*/
  {
    inited = 0; /*0x59d291*/
    goto LABEL_121; /*0x59d291*/
  }
  inited = 1; /*0x59d25e*/
  if ( *a2 || a2[1] ) /*0x59d269*/
  {
    v75 = this; /*0x59d2e6*/
LABEL_127:
    if ( !*a2 && !a2[1] ) /*0x59d2f0*/
    {
      v75 = this; /*0x59d316*/
      inited = TiberiumClass::Spread(*((_DWORD *)this + 194), 1, 0, 0, 512, 512, 0, 0); /*0x59d32a*/
      if ( inited ) /*0x59d32e*/
      {
        LODWORD(v96) = *((_DWORD *)this + 194); /*0x59d33f*/
        LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d343*/
        for ( j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d354*/
              j;
              j = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
        {
          if ( g_MissionQueueFrame.localVariables[163] ) /*0x59d35e*/
            v77 = *(_DWORD *)(80 * (*(__int16 *)(j + 36) + g_MapCellWidth * *(__int16 *)(j + 38)) /*0x59d37c*/
                            + g_MissionQueueFrame.localVariables[163]
                            + 56);
          else
            v77 = -1; /*0x59d360*/
          if ( v77 == LODWORD(v96) ) /*0x59d384*/
          {
            v78 = *(_DWORD *)(j + 56); /*0x59d386*/
            if ( !v78 || v78 == 0xFFFF ) /*0x59d393*/
              *(_DWORD *)(j + 56) = dword_AA0E18; /*0x59d39b*/
          }
        }
        inited = 1; /*0x59d3ac*/
      }
    }
    goto LABEL_122; /*0x59d3b1*/
  }
  v75 = this; /*0x59d270*/
  inited = MapClass::InitTileData((MapClass *)&stru_87F5F0.__pad_58[416], *((_DWORD *)this + 194), 0); /*0x59d289*/
  if ( inited ) /*0x59d28d*/
    goto LABEL_127; /*0x59d28d*/
LABEL_122:
  if ( v9 ) /*0x59d29c*/
  {
    __3_YAXPAX_Z(*(void **)&v9[2]); /*0x59d2a2*/
    __3_YAXPAX_Z(v9); /*0x59d2a8*/
  }
  __3_YAXPAX_Z(Block); /*0x59d2b5*/
  if ( inited ) /*0x59d2c3*/
  {
    v75[2].SpreadPercentage[0] += v86; /*0x59d2d5*/
    return 1; /*0x59d2e3*/
  }
  v79 = v75[2].SpreadPercentage[1]; /*0x59d3b6*/
  LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d3c1*/
  for ( k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x59d3d4*/
        k;
        k = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]) )
  {
    LODWORD(v96) = *(_DWORD *)(k + 36); /*0x59d3d9*/
    v81 = g_MissionQueueFrame.localVariables[163] + 80 * (SLOWORD(v96) + g_MapCellWidth * SWORD1(v96)); /*0x59d3fa*/
    if ( *(_DWORD *)(v81 + 56) == v79 ) /*0x59d3ff*/
    {
      *(_DWORD *)(v81 + 56) = 0; /*0x59d401*/
      *(_BYTE *)(v81 + 75) = 0; /*0x59d404*/
      *(_DWORD *)(k + 56) = 0; /*0x59d408*/
      *(_BYTE *)(k + 282) = 0; /*0x59d40b*/
      *(_BYTE *)(k + 283) = v75[2].Growth; /*0x59d418*/
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
  return (double)(unsigned int)Random::State(&unk_ABE890) * 2.328306437080797e-10 * 10.0 + 0.5 * v6 - (double)a3 * 0.02; /*0x59d503*/
}



// ==== 0x0059D510  Tiberium::ProcessGrowth  this=RandomMap  sig=csp ====
char __thiscall Tiberium::ProcessGrowth(Tiberium *this, int a2, double a3, char a4)
{
  double v4; // st7
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int16 v9; // si
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int16 v12; // di
  __int16 v13; // bx
  int v14; // ebx
  int v19; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  Tiberium *v27; // ebx
  __int16 v28; // ax
  __int16 v29; // si
  __int16 v30; // ax
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  double v34; // rdi
  int v35; // eax
  int v36; // esi
  __int16 v37; // ax
  __int16 v38; // di
  __int16 v39; // ax
  int v40; // edx
  __int16 v41; // bx
  __int16 v42; // ax
  Cell *v43; // eax
  char IsEmpty; // al
  int v45; // eax
  _BYTE *v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; ... [30568 chars total]



// ==== 0x0059E740  Tiberium::CalculateSpread  this=Tiberium  sig=csp ====
char __thiscall Tiberium::CalculateSpread(
        Tiberium *this,
        int a2,
        __int16 *a3,
        __int16 *a4,
        int a5,
        char *a6,
        double *a7,
        double *a8)
{
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v17; // ebp
  int v18; // edx
  int v19; // ebp
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // ebp
  int v25; // ebp
  __int16 v26; // dx
  int v27; // edi
  int v28; // eax
  int v29; // esi
  int v30; // ebx
  int v31; // edx
  Cell *v32; // eax
  int i; // ebp
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // eax
  __int16 v39; // si
  char v40; // cl
  int v41; // edi
  int j; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // ecx
  int k; // ebp
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // esi
  unsigned int v... [42281 chars total]


