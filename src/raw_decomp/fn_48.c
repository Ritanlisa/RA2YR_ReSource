// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00480110  BuildingClass::CalcDrawPos  this=IUnknown  sig=csp ====
_DWORD *__thiscall BuildingClass_CalcDrawPos(int this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  int v8; // ecx
  _BYTE v9[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (int *)globalHelper_0FDCC0(v9, *(_DWORD *)(this + 68)); /*0x48011d*/
  v4 = *v3; /*0x480122*/
  v5 = v3[1]; /*0x480124*/
  if ( *(char *)(this + 320) >= 0 ) /*0x48012f*/
  {
    if ( *(_DWORD *)(this + 68) == 239 ) /*0x48014b*/
LABEL_6:
      v5 -= 15; /*0x48014d*/
  }
  else
  {
    v6 = *(_BYTE *)(this + 286); /*0x480131*/
    v5 -= 16; /*0x480137*/
    if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
      goto LABEL_6; /*0x480140*/
  }
  v8 = g_Map_VisibleRect - 15 * *(char *)(this + 283) + v5; /*0x480150*/
  *a2 = v4 + 30; /*0x480172*/
  a2[1] = v8 + 15; /*0x480174*/
  return a2; /*0x48016e*/
}



// ==== 0x00480180  DSurface::Process  this=ObjectClass  sig=csp ====
void __thiscall sub_480180(int this, int *a2, int *a3)
{
  TerrainClass::GenerateTexture( /*0x4801de*/
    *(_DWORD **)g_FrameCounter,
    *(_DWORD *)dword_87F69C,
    0,
    g_DSurface_Hidden_2,
    *a2,
    a2[1],
    *a3,
    a3[1],
    a3[2],
    a3[3],
    *(char *)(this + 283),
    *(__int16 *)(this + 268),
    1,
    0,
    0,
    1,
    0,
    0);
}



// ==== 0x004801F0  TacticalClass::RenderCellFogOfWar  this=IUnknown  sig=csp ====
unsigned int __thiscall sub_4801F0(int this, unsigned int *a2, int *a3)
{
  unsigned int v4; // eax
  unsigned int result; // eax

  LOBYTE(v4) = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 0); /*0x480202*/
  *(_BYTE *)(this + 288) = v4; /*0x480207*/
  v4 = (char)v4; /*0x48020d*/
  if ( (char)v4 == -2 ) /*0x480213*/
  {
    v4 = 15; /*0x480215*/
  }
  else if ( (char)v4 == -1 ) /*0x48021f*/
  {
    v4 = 0; /*0x480221*/
  }
  RenderFogOfWar(a2, a3, v4); /*0x480230*/
  result = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 1); /*0x48023e*/
  *(_BYTE *)(this + 289) = result; /*0x480243*/
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 && !*((_BYTE *)HouseClass_Player + 501) ) /*0x48025c*/
  {
    result = (char)result; /*0x480266*/
    if ( (char)result == -2 ) /*0x48026c*/
    {
      return (unsigned int)RenderFogOfWarOverlay((int)a2, a3, 0xFu); /*0x480278*/
    }
    else
    {
      if ( (char)result == -1 ) /*0x480287*/
        result = 0; /*0x480289*/
      return (unsigned int)RenderFogOfWarOverlay((int)a2, a3, result); /*0x480290*/
    }
  }
  return result; /*0x48027d*/
}



// ==== 0x004802A0  TacticalClass::DrawCellTerrainOverlay  this=TacticalClass  sig=csp ====
void __thiscall sub_4802A0(int this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // esi

  v4 = *(_DWORD *)(this + 56); /*0x4802a6*/
  if ( v4 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *((_DWORD *)g_FrameCounter + dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = *(unsigned __int8 *)(this + 282); /*0x4802b8*/
    v6 = *((_DWORD *)g_FrameCounter + v4); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((void *)v6, *(unsigned __int8 *)(this + 282)); /*0x4802cd*/
  }
  if ( *(_BYTE *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      g_DSurface_Hidden_2,
      *a2,
      a2[1] - 15 * *(char *)(this + 283),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * *(char *)(this + 283));
}



// ==== 0x00480350  TacticalClass::CheckCellVisibility  this=IUnknown  sig=csp ====
char __thiscall sub_480350(int this, _DWORD *a2, _DWORD *a3, char a4)
{
  int v4; // eax
  int v6; // eax
  int *v7; // edi
  int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+28h] [ebp+Ch]

  LOBYTE(v4) = a4; /*0x480350*/
  if ( a4 ) /*0x48035f*/
    return v4; /*0x48035f*/
  if ( !*(_DWORD *)(this + 52) ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = *(_DWORD *)(this + 56); /*0x480389*/
  v17 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v15 = 0; /*0x4803e9*/
    v7 = (int *)*((_DWORD *)g_FrameCounter + dword_AA10B0); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, dword_AA10B0, v7[188]); /*0x4803fa*/
LABEL_10:
    v17 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((_DWORD *)g_FrameCounter + v6); /*0x48039d*/
  v15 = *(unsigned __int8 *)(this + 282); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( CellClass::GetTerrainFlag(v7, *(unsigned __int8 *)(this + 282)) ) /*0x4803ba*/
      inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, *(_DWORD *)(this + 56), v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
LABEL_11:
  ++dword_A83ECC; /*0x480403*/
  v9 = *(char *)(this + 283); /*0x480416*/
  v10 = a2[1]; /*0x48041d*/
  v16[0] = *a2; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  v4 = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( v4 ) /*0x48043c*/
    LOBYTE(v4) = TerrainClass::GenerateTexture( /*0x480499*/
                   *(_DWORD *)(this + 52),
                   v15,
                   g_DSurface_Hidden_2,
                   v16[0],
                   v11 + g_Map_VisibleRect,
                   *a3,
                   a3[1],
                   a3[2],
                   a3[3],
                   *(char *)(this + 283),
                   *(__int16 *)(this + 268),
                   1,
                   v17,
                   0,
                   0,
                   0,
                   0);
  if ( *(_DWORD *)(this + 72) != -1 ) /*0x4804a2*/
  {
    v12 = a3[1]; /*0x4804b1*/
    v16[0] = v16[0] + 30 - *a3; /*0x4804bd*/
    v13 = *(_DWORD *)(this + 72); /*0x4804c1*/
    v16[1] = v11 + g_Map_VisibleRect - v12; /*0x4804c4*/
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *, _DWORD, int, int))(**((_DWORD **)FactoryClass_Array /*0x4804f5*/
                                                                                        + v13)
                                                                                     + 160))(
                   *((_DWORD *)FactoryClass_Array + v13),
                   v16,
                   a3,
                   *(unsigned __int8 *)(this + 287),
                   dword_89E7C0 * *(char *)(this + 283),
                   this + 36);
  }
  return v4; /*0x4804fb*/
}



// ==== 0x00480510  BuildingPlacement::ValidateType  this=IUnknown  sig=csp ====
char __thiscall BuildingPlacement_ValidateType(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *i; // esi
  int v7; // eax
  _DWORD *v8; // esi
  int v9; // eax

  v4 = this->q044; /*0x48051a*/
  if ( v4 == a2 && v4 != -1 ) /*0x480524*/
    return 1; /*0x48052c*/
  if ( a2 == -1 ) /*0x480532*/
  {
    if ( v4 == 2 || v4 == 26 || v4 == 243 ) /*0x480543*/
      return 1; /*0x48054f*/
  }
  else
  {
    if ( a2 == 2 || !a2 ) /*0x48055d*/
    {
      for ( i = (_DWORD *)this->q0E4; i; i = (_DWORD *)i[12] ) /*0x480567*/
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*i + 44))(i) == 6 ) /*0x480573*/
        {
          v7 = i[328]; /*0x480578*/
          if ( (int)i[27] > 0 /*0x4805b1*/
            && (v7 == *((_DWORD *)g_RulesClass_Instance + 539) && (a3 == 2 || a3 == 6)
             || v7 == *((_DWORD *)g_RulesClass_Instance + 540) && (!a3 || a3 == 4)
             || v7 == *((_DWORD *)g_RulesClass_Instance + 543)) )
          {
            return 1; /*0x4805b1*/
          }
        }
      }
    }
    if ( a2 == 26 ) /*0x4805bd*/
    {
      v8 = (_DWORD *)this->q0E4; /*0x4805bf*/
      if ( v8 ) /*0x4805c7*/
      {
        while ( 1 ) /*0x4805c9*/
        {
          if ( (*(int (__thiscall **)(_DWORD *))(*v8 + 44))(v8) == 6 ) /*0x4805d3*/
          {
            v9 = v8[328]; /*0x4805d8*/
            if ( (int)v8[27] > 0 /*0x480615*/
              && (v9 == *((_DWORD *)g_RulesClass_Instance + 541) && (a3 == 2 || a3 == 6)
               || v9 == *((_DWORD *)g_RulesClass_Instance + 542) && (!a3 || a3 == 4)) )
            {
              break; /*0x480615*/
            }
          }
          v8 = (_DWORD *)v8[12]; /*0x48061b*/
          if ( !v8 ) /*0x480620*/
            return 0; /*0x480620*/
        }
        return 1; /*0x480615*/
      }
    }
  }
  return 0; /*0x480526*/
}



// ==== 0x00480630  BuildingClass::ValidatePlacement  this=IUnknown  sig=csp ====
void __thiscall BuildingClass_ValidatePlacement(void **this, char a2)
{
  int *v2; // edi
  int v3; // eax
  void **v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // eax
  char v13; // bl
  int v14; // ecx
  _DWORD *v15; // eax
  int *v16; // eax
  void **v17; // edi
  void *v18; // eax
  _DWORD *v19; // ebp
  int v20; // eax
  __int16 v21; // dx
  char v22; // bl
  char v23; // al
  void *v24; // ecx
  char v25; // al
  char v26; // bl
  char v27; // al
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  _DWORD *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  int *v36; // [esp-4h] [ebp-E0h]
  __int16 *v37; // [esp-4h] [ebp-E0h]
  unsigned int v38; // [esp+10h] [ebp-CCh] BYREF
  void *v39; // [esp+14h] [ebp-C8h] BYREF
  char *v40; // [esp+18h] [ebp-C4h]
  unsigned int v41; // [esp+1Ch] [ebp-C0h]
  void *v42; // [esp+20h] [ebp-BCh]
  int v43; // [esp+24h] [ebp-B8h] BYREF
  int v44; // [esp+28h] [ebp-B4h] BYREF
  void **v45; // [esp+2Ch] [ebp-B0h]
  int v46; // [esp+30h] [ebp-ACh]
  int v47; // [esp+34h] [ebp-A8h]
  _DWORD v48[2]; // [esp+38h] [ebp-A4h] BYREF
  int v49; // [esp+40h] [ebp-9Ch] BYREF
  char v50[8]; // [esp+44h] [ebp-98h] BYREF
  int v51; // [esp+4Ch] [ebp-90h]
  int v52; // [esp+50h] [ebp-8Ch]
  int v53[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v54[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v55[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v56[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v57[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v58[4]; // [esp+ACh] [ebp-30h] BYREF
  int v59[4]; // [esp+BCh] [ebp-20h] BYREF
  int v60[4]; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v45 = this; /*0x48063f*/
  v40 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      v43 = (int)this->ptr_24; /*0x48065e*/
      v44 = *CellStruct::Add(&v43, &v49, (_WORD *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v44); /*0x48068d*/
    }
    else
    {
      v4 = this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((int)v4, v55); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, v53); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v51 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v52 = v8; /*0x4806f7*/
      }
    }
    v36 = BuildingClass::GetPlacementRect((int)v4, v59); /*0x480713*/
    v34 = House::GetStartCoords((int)v4, v57); /*0x48071c*/
    v9 = (_DWORD *)CellClass::GetScreenRect(v54); /*0x480724*/
    v10 = Rect::Union(v56, v9, v34); /*0x480732*/
    v11 = Rect::Union(v58, v10, v36); /*0x480745*/
    v48[1] = g_Map_VisibleRect; /*0x480753*/
    v12 = *v11; /*0x480757*/
    v13 = 0; /*0x480759*/
    v48[0] = DSurface_ViewBounds; /*0x48075c*/
    v14 = v11[1]; /*0x480760*/
    v46 = v12; /*0x480763*/
    v47 = v14; /*0x480767*/
    v35 = v11[3]; /*0x480775*/
    v33 = v11[2]; /*0x480776*/
    v15 = (_DWORD *)Coord2D::Sub(v50, v48); /*0x480781*/
    v16 = Rect::Construct(v60, v15, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v16, v16[1], v16[2], v16[3], 0); /*0x4807b4*/
    v17 = v4 + 9; /*0x4807b9*/
    BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v4 + 9)); /*0x4807c2*/
    v18 = v4[17]; /*0x4807c7*/
    if ( v18 != (void *)-1 && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + (_DWORD)v18) + 680) ) /*0x4807dc*/
    {
      v38 = 0; /*0x4807ea*/
      v19 = &unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( *v19 < 8u ) /*0x4807f9*/
        {
          v20 = *v19 & 7; /*0x480801*/
          v39 = *v17; /*0x480804*/
          v21 = Direction_X_Offsets[v20]; /*0x480808*/
          LOWORD(v20) = HIWORD(Direction_X_Offsets[v20]); /*0x48081a*/
          LOWORD(v42) = (_WORD)v39 + v21; /*0x48081e*/
          HIWORD(v42) = HIWORD(v39) + v20; /*0x48082d*/
          v39 = v42; /*0x480836*/
          CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39); /*0x48083f*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v4[17], *v19) ) /*0x48084e*/
          v38 |= 1 << v13; /*0x480860*/
        ++v19; /*0x480864*/
        ++v13; /*0x480867*/
      }
      while ( v19 < &dword_81CC80 ); /*0x48086e*/
      v22 = v38; /*0x480879*/
      v23 = *((_BYTE *)v4 + 286) & 0xF0; /*0x48087d*/
      v38 = (unsigned int)v4[19]; /*0x48087f*/
      v24 = v4[17]; /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      *((_BYTE *)v4 + 286) = v25; /*0x48088d*/
      if ( (v24 == (void *)2 || v24 == (void *)26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        v4[17] = (void *)-1; /*0x4808a9*/
        *((_BYTE *)v4 + 286) = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !v4[17] ) /*0x4808bf*/
      {
        v27 = *((_BYTE *)v4 + 286); /*0x4808c6*/
        if ( v27 == 16 || v27 == 32 ) /*0x4808d2*/
        {
          v4[17] = (void *)-1; /*0x4808d8*/
          *((_BYTE *)v4 + 286) = 0; /*0x4808db*/
          v4[20] = (void *)-1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( v4[17] == (void *)1 && *((_BYTE *)v4 + 286) == 32 ) /*0x4808f9*/
      {
        v4[17] = (void *)-1; /*0x4808ff*/
        *((_BYTE *)v4 + 286) = 0; /*0x480902*/
        v4[20] = (void *)-1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( v4[17] == (void *)22 ) /*0x480917*/
      {
        v28 = *((_BYTE *)v4 + 286); /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          v4[17] = (void *)-1; /*0x48092b*/
          *((_BYTE *)v4 + 286) = 0; /*0x48092e*/
          v4[20] = (void *)-1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( v4[17] == (void *)3 && *((_BYTE *)v4 + 286) == 16 ) /*0x48094c*/
      {
        v4[17] = (void *)-1; /*0x480952*/
        *((_BYTE *)v4 + 286) = 0; /*0x480955*/
        v4[20] = (void *)-1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( v4[19] != (void *)v38 ) /*0x480977*/
      {
        v37 = (__int16 *)(v4 + 9); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((int *)&MapClass_Instance, v37); /*0x480987*/
          Radar::Update(&MapClass_Instance, (__int16 *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((_WORD *)v17 + 1) + HIWORD(Direction_X_Offsets[v30]); /*0x4809b1*/
            LOWORD(v41) = LOWORD(Direction_X_Offsets[v30]) + *(_WORD *)v17; /*0x4809bc*/
            HIWORD(v41) = v31; /*0x4809c5*/
            v38 = v41; /*0x4809d4*/
            v32 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v38); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity(v37); /*0x4809f3*/
          Radar::Update(&MapClass_Instance, (__int16 *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v40 + 4); /*0x480a07*/
    v40 += 4; /*0x480a10*/
    if ( v40 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = v45; /*0x480649*/
  }
}



// ==== 0x00480A30  CellClass::GetCoords  this=CellClass  sig=csp ====
int *__thiscall CellClass_GetCoords(_DWORD *this, int *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = this->smudgeTypeIndex; /*0x480a33*/
  v3 = ((__int16)v2 << 8) + 128; /*0x480a4f*/
  v4 = (SHIWORD(v2) << 8) + 128; /*0x480a51*/
  v7[0] = 128; /*0x480a53*/
  v7[1] = 128; /*0x480a57*/
  v5 = Isometric::InitTables(v7); /*0x480a60*/
  *a2 = v3; /*0x480a6b*/
  a2[1] = v4; /*0x480a6d*/
  a2[2] = v5; /*0x480a72*/
  return a2; /*0x480a70*/
}



// ==== 0x00480A80  CellClass::ReduceTiberium  this=IUnknown  sig=csp ====
int __thiscall EVA_Announce(int this, int a2)
{
  int *v3; // edi
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // ebx
  int v17; // ebp
  _WORD *v18; // esi
  int i; // edi
  int v20; // eax
  int v22; // [esp+10h] [ebp-3Ch]
  int v23; // [esp+10h] [ebp-3Ch]
  int v24; // [esp+14h] [ebp-38h]
  int v25; // [esp+18h] [ebp-34h]
  int v26; // [esp+1Ch] [ebp-30h]
  int v27; // [esp+20h] [ebp-2Ch]
  int v28; // [esp+24h] [ebp-28h]
  int v29; // [esp+24h] [ebp-28h]
  int v30; // [esp+28h] [ebp-24h]
  char v31[16]; // [esp+2Ch] [ebp-20h] BYREF
  char v32[16]; // [esp+3Ch] [ebp-10h] BYREF

  v3 = (int *)BuildingClass::GetPlacementRect(v31); /*0x480a97*/
  v4 = (int *)House::GetStartCoords(v32); /*0x480a9c*/
  if ( v4[2] <= 0 || v4[3] <= 0 ) /*0x480ab1*/
  {
    v12 = *v3; /*0x480b44*/
    v13 = v3[1]; /*0x480b46*/
    v14 = v3[2]; /*0x480b49*/
    v9 = v3[3]; /*0x480b4c*/
  }
  else
  {
    v22 = v3[2]; /*0x480abc*/
    if ( v22 <= 0 || (v25 = v3[3], v25 <= 0) ) /*0x480acb*/
    {
      v12 = *v4; /*0x480b37*/
      v13 = v4[1]; /*0x480b39*/
      v14 = v4[2]; /*0x480b3c*/
      v9 = v4[3]; /*0x480b3f*/
    }
    else
    {
      v5 = *v4; /*0x480acd*/
      v6 = *v3; /*0x480acf*/
      v7 = v4[2]; /*0x480ad1*/
      v8 = v4[1]; /*0x480ad4*/
      v9 = v4[3]; /*0x480ad7*/
      v28 = v7; /*0x480adc*/
      if ( v5 > *v3 ) /*0x480ae0*/
      {
        v7 += v5 - v6; /*0x480ae4*/
        v5 = *v3; /*0x480ae6*/
        v28 = v7; /*0x480ae8*/
      }
      v10 = v3[1]; /*0x480aec*/
      v24 = v10; /*0x480af1*/
      if ( v8 > v10 ) /*0x480af5*/
      {
        v9 += v8 - v10; /*0x480af9*/
        v8 = v10; /*0x480afb*/
      }
      if ( v5 + v7 >= v6 + v22 ) /*0x480b07*/
        v11 = v28; /*0x480b15*/
      else
        v11 = v6 - v5 + v22 + 1; /*0x480b0f*/
      if ( v9 + v8 < v25 + v24 ) /*0x480b28*/
        v9 = v25 + v24 - v8 + 1; /*0x480b2d*/
      v12 = v5; /*0x480b2f*/
      v13 = v8; /*0x480b31*/
      v14 = v11; /*0x480b33*/
    }
  }
  v26 = v12; /*0x480b4f*/
  v27 = v13 - g_Map_VisibleRect; /*0x480b5f*/
  v29 = v14; /*0x480b66*/
  v30 = v9; /*0x480b6a*/
  v15 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x480b6e*/
  v16 = a2; /*0x480b73*/
  if ( a2 <= 0 || v15 == -1 ) /*0x480b82*/
    return 0; /*0x480ca3*/
  v17 = *((_DWORD *)BuildingClass_InstanceArray + v15); /*0x480b8e*/
  if ( *(_BYTE *)(this + 286) == 11 ) /*0x480b99*/
    CellClass::RegisterForRedraw(this + 36); /*0x480ba1*/
  if ( *(unsigned __int8 *)(this + 286) + 1 <= v16 ) /*0x480bb9*/
  {
    v16 = *(unsigned __int8 *)(this + 286); /*0x480bc8*/
    *(_DWORD *)(this + 68) = -1; /*0x480bce*/
    *(_BYTE *)(this + 286) = 0; /*0x480bd5*/
    House::AnnounceUpgrade(this, -1); /*0x480bdc*/
    v18 = (_WORD *)(this + 36); /*0x480be1*/
    BuildingClass::AddUpgrade(v18); /*0x480bea*/
    CellClass::ClearCrateStateForAll(v18); /*0x480bf1*/
    for ( i = 0; i < 8; ++i ) /*0x480bf6*/
    {
      v20 = i & 7; /*0x480bfa*/
      LOWORD(v23) = *v18 + LOWORD(Direction_X_Offsets[v20]); /*0x480c1b*/
      HIWORD(v23) = v18[1] + HIWORD(Direction_X_Offsets[v20]); /*0x480c24*/
      a2 = v23; /*0x480c33*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal(&a2) ) /*0x480c37*/
      {
        if ( !*(_BYTE *)(Cell::PosToIndex(&a2) + *(_DWORD *)(v17 + 248)) ) /*0x480c4f*/
          BuildingClass::AddOccupancy(&a2); /*0x480c5c*/
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 286) -= v16; /*0x480bbd*/
  }
  Cell::CreateCrater(v26, v27, v29, v30, 0); /*0x480c8f*/
  return v16; /*0x480c96*/
}



// ==== 0x00480CB0  BuildingClass::SellEffects  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass_SellEffects(int this, int a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  bool v14; // cc
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // esi
  bool v22; // cf
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  void **v27; // eax
  void **v28; // eax
  void **v29; // eax
  void **v30; // eax
  int v31; // ebx
  bool v32; // cf
  _BYTE *v33; // eax
  int v34; // edx
  __int16 v35; // ax
  int v37; // [esp+10h] [ebp-40h]
  int v38; // [esp+14h] [ebp-3Ch] BYREF
  int v39; // [esp+18h] [ebp-38h] BYREF
  __int16 v40[6]; // [esp+1Ch] [ebp-34h] BYREF
  int v41; // [esp+28h] [ebp-28h]
  int v42[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v43[4]; // [esp+40h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 68); /*0x480cb9*/
  if ( v3 == -1 ) /*0x480cbf*/
    return 0; /*0x480cbf*/
  v4 = *((_DWORD *)g_BuildingTypeClass_Array + v3); /*0x480ccb*/
  *(_DWORD *)v40 = v4; /*0x480cce*/
  if ( !*(_BYTE *)(v4 + 680) ) /*0x480cd2*/
    return 0; /*0x480cd2*/
  v5 = a2; /*0x480ce0*/
  if ( a2 != -1 ) /*0x480ce7*/
  {
    v6 = *(_DWORD *)(v4 + 676); /*0x480ce9*/
    if ( a2 < v6 && !g_IKnowWhatImDoing && Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v6) >= v5 ) /*0x480d18*/
      return 0; /*0x480d18*/
  }
  PlacementRect = BuildingClass::GetPlacementRect(this, v42); /*0x480d2e*/
  StartCoords = House::GetStartCoords(this, v43); /*0x480d33*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480d48*/
  {
    v9 = *PlacementRect; /*0x480ddd*/
    v17 = PlacementRect[1]; /*0x480ddf*/
    v18 = PlacementRect[2]; /*0x480de2*/
    v13 = PlacementRect[3]; /*0x480de5*/
  }
  else
  {
    v37 = PlacementRect[2]; /*0x480d53*/
    if ( v37 <= 0 || (v39 = PlacementRect[3], v39 <= 0) ) /*0x480d62*/
    {
      v9 = *StartCoords; /*0x480dd0*/
      v17 = StartCoords[1]; /*0x480dd2*/
      v18 = StartCoords[2]; /*0x480dd5*/
      v13 = StartCoords[3]; /*0x480dd8*/
    }
    else
    {
      v9 = *StartCoords; /*0x480d64*/
      v10 = *PlacementRect; /*0x480d66*/
      v11 = StartCoords[2]; /*0x480d68*/
      v12 = StartCoords[1]; /*0x480d6b*/
      v13 = StartCoords[3]; /*0x480d6e*/
      v14 = v9 <= *PlacementRect; /*0x480d71*/
      v41 = v11; /*0x480d73*/
      if ( !v14 ) /*0x480d77*/
      {
        v11 += v9 - v10; /*0x480d7b*/
        v9 = v10; /*0x480d7d*/
        v41 = v11; /*0x480d7f*/
      }
      v15 = PlacementRect[1]; /*0x480d83*/
      v38 = v15; /*0x480d88*/
      if ( v12 > v15 ) /*0x480d8c*/
      {
        v13 += v12 - v15; /*0x480d90*/
        v12 = v15; /*0x480d92*/
      }
      if ( v9 + v11 >= v10 + v37 ) /*0x480d9e*/
        v16 = v41; /*0x480dac*/
      else
        v16 = v10 - v9 + v37 + 1; /*0x480da6*/
      if ( v13 + v12 < v39 + v38 ) /*0x480dbf*/
        v13 = v39 + v38 - v12 + 1; /*0x480dc4*/
      v4 = *(_DWORD *)v40; /*0x480dc6*/
      v17 = v12; /*0x480dca*/
      v18 = v16; /*0x480dcc*/
    }
  }
  v43[1] = v17; /*0x480df0*/
  Cell::CreateCrater(v9, v17 - g_Map_VisibleRect, v18, v13, 0); /*0x480e0c*/
  v19 = *(_BYTE *)(this + 286) + 16; /*0x480e19*/
  *(_BYTE *)(this + 286) = v19; /*0x480e1b*/
  v20 = *(_DWORD *)(v4 + 672); /*0x480e21*/
  if ( v19 >> 4 == v20 - 1 && v20 > 2 ) /*0x480e3d*/
  {
    v21 = 0; /*0x480e3f*/
    v22 = 1; /*0x480e41*/
    do /*0x480eba*/
    {
      if ( v22 ) /*0x480e44*/
      {
        *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480e52*/
        v39 = *CellStruct::Add(v40, &v38, (_WORD *)(4 * (v21 & 7) + 9041544)); /*0x480e78*/
        v23 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v39); /*0x480e7c*/
      }
      else
      {
        v23 = (_DWORD *)this; /*0x480e46*/
      }
      v24 = v23[17]; /*0x480e81*/
      if ( v24 != -1 /*0x480ea6*/
        && *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v24) + 680)
        && v24 == *(_DWORD *)(this + 68)
        && *((_BYTE *)v23 + 286) < 0x10u )
      {
        BuildingClass::SellEffects(200); /*0x480eaf*/
      }
      v21 += 2; /*0x480eb4*/
      v22 = (unsigned int)v21 < 8; /*0x480eb7*/
    }
    while ( v21 < 8 ); /*0x480eba*/
  }
  if ( a2 != -1 ) /*0x480ec5*/
  {
    v25 = *(_DWORD *)(v4 + 672); /*0x480ecd*/
    v26 = *(unsigned __int8 *)(this + 286) >> 4; /*0x480eda*/
    if ( v26 < v25 && (v26 != v25 - 1 || (*(_BYTE *)(this + 286) & 0xF) != 0) ) /*0x480eed*/
      return 0; /*0x481096*/
  }
  *(_DWORD *)(this + 80) = -1; /*0x480ef6*/
  *(_DWORD *)(this + 68) = -1; /*0x480ef9*/
  *(_BYTE *)(this + 286) = 0; /*0x480efc*/
  House::AnnounceUpgrade(this, -1); /*0x480f03*/
  Cell::SetRadar((int *)&MapClass_Instance, (__int16 *)(this + 36)); /*0x480f11*/
  Radar::Update(&MapClass_Instance, (__int16 *)(this + 36)); /*0x480f1c*/
  BuildingClass::AddUpgrade((int)&MapClass_Instance, this + 36); /*0x480f27*/
  a2 = *(_DWORD *)(this + 36); /*0x480f3c*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, Direction_X_Offsets); /*0x480f51*/
  v27 = (void **)CellCoord::To_CellObj(&MapClass_Instance, v40); /*0x480f55*/
  BuildingClass::ValidatePlacement(v27, 0); /*0x480f5e*/
  a2 = *(_DWORD *)(this + 36); /*0x480f73*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &Direction_Y_Offsets); /*0x480f88*/
  v28 = (void **)CellCoord::To_CellObj(&MapClass_Instance, v40); /*0x480f8c*/
  BuildingClass::ValidatePlacement(v28, 0); /*0x480f95*/
  a2 = *(_DWORD *)(this + 36); /*0x480faa*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &g_DirectionOffsetPool); /*0x480fbf*/
  v29 = (void **)CellCoord::To_CellObj(&MapClass_Instance, v40); /*0x480fc3*/
  BuildingClass::ValidatePlacement(v29, 0); /*0x480fcc*/
  *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480fd9*/
  LOWORD(a2) = g_CellDirectionOffsets + v40[0]; /*0x480fef*/
  HIWORD(a2) = HIWORD(g_CellDirectionOffsets) + v40[1]; /*0x480ff4*/
  v30 = (void **)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x481007*/
  BuildingClass::ValidatePlacement(v30, 0); /*0x481010*/
  AbstractClass::AnnounceExpiredPointer((void **)this); /*0x481019*/
  v31 = 0; /*0x48101e*/
  v32 = 1; /*0x481020*/
  do /*0x481082*/
  {
    if ( v32 ) /*0x481023*/
    {
      v34 = v31 & 7; /*0x48102d*/
      *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x481030*/
      v35 = v40[1] + HIWORD(Direction_X_Offsets[v34]); /*0x481047*/
      LOWORD(a2) = v40[0] + LOWORD(Direction_X_Offsets[v34]); /*0x48104f*/
      HIWORD(a2) = v35; /*0x481058*/
      *(_DWORD *)v40 = a2; /*0x481061*/
      v33 = CellCoord::To_CellObj(&MapClass_Instance, v40); /*0x48106b*/
    }
    else
    {
      v33 = (_BYTE *)this; /*0x481025*/
    }
    v32 = (unsigned int)++v31 < 8; /*0x481079*/
    --v33[290]; /*0x48107c*/
  }
  while ( v31 < 8 ); /*0x481082*/
  return 1; /*0x481089*/
}



// ==== 0x004810A0  Input::OffsetToDirection  this=Coord  sig=csp ====
char __thiscall Input_OffsetToDirection(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  double v3; // st7
  int v4; // eax

  v1 = (unsigned __int8)this->q004; /*0x4810aa*/
  v2 = (unsigned __int8)*this; /*0x4810b0*/
  v3 = Math::Sqrt((double)(v2 - 128) * (double)(v2 - 128) + (double)(v1 - 128) * (double)(v1 - 128)); /*0x4810e0*/
  if ( (int)Math::RoundToInt(v3) >= 60 ) /*0x4810f0*/
  {
    v4 = v2 > 128; /*0x481104*/
    if ( v1 > 128 ) /*0x48110f*/
      LOBYTE(v4) = v4 | 2; /*0x481111*/
    if ( v4 ) /*0x481115*/
      LOBYTE(v4) = v4 + 1; /*0x48111e*/
  }
  else
  {
    LOBYTE(v4) = 0; /*0x4810f3*/
  }
  return v4; /*0x4810f2*/
}



// ==== 0x00481130  BuildingPlacement::IsPlacementFlagSet  this=BuildingPlacement  sig=csp ====
bool __thiscall sub_481130(unsigned __int8 *this, unsigned int a2, char a3)
{
  unsigned __int8 v3; // al

  if ( a2 < 2 ) /*0x481137*/
    return 0; /*0x48117a*/
  if ( a3 ) /*0x481144*/
    v3 = this->q128; /*0x481146*/
  else
    v3 = this->q124; /*0x481160*/
  return ((unsigned __int8)(1 << a2) & v3) == 0; /*0x481153*/
}



// ==== 0x00481180  ObjectPlacement::CalcPosition  this=ObjectPlacement  sig=csp ====
int *__thiscall ObjectPlacement_CalcPosition(_DWORD *this, int *a2, _DWORD *a3, char a4, char a5, char a6)
{
  int *v7; // eax
  double v8; // st7
  int v9; // edi
  _DWORD *v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  bool v17; // al
  int v18; // eax
  int v19; // eax
  bool v21; // zf
  unsigned __int8 *v22; // edi
  unsigned int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // esi
  int v28; // edi
  int GroundHeight; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // [esp+18h] [ebp-1Ch]
  int v33; // [esp+1Ch] [ebp-18h]
  _DWORD v34[2]; // [esp+20h] [ebp-14h] BYREF
  char v35[4]; // [esp+28h] [ebp-Ch] BYREF
  int v36; // [esp+2Ch] [ebp-8h]
  int v37; // [esp+30h] [ebp-4h]
  int v38; // [esp+48h] [ebp+14h]

  v32 = (unsigned __int8)*a3; /*0x4811a1*/
  v33 = (unsigned __int8)a3[1]; /*0x4811aa*/
  v34[0] = 128; /*0x4811b9*/
  v34[1] = 128; /*0x4811bd*/
  v7 = (int *)Coord2D::Sub(v35, v34); /*0x4811c1*/
  v8 = Math::Sqrt((double)*v7 * (double)*v7 + (double)v7[1] * (double)v7[1]); /*0x4811df*/
  if ( (int)Math::RoundToInt(v8) >= 60 ) /*0x4811ef*/
  {
    v9 = v32 > 128; /*0x4811ff*/
    if ( v33 > 128 ) /*0x481208*/
      v9 |= 2u; /*0x48120a*/
    if ( v9 ) /*0x48120f*/
      ++v9; /*0x481211*/
  }
  else
  {
    v9 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v10 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 72))(this, v35); /*0x481226*/
    v11 = v10[1]; /*0x48122c*/
    v12 = *v10 - (unsigned __int8)*v10; /*0x481235*/
    v13 = v10[2]; /*0x481239*/
    v14 = v11 - (unsigned __int8)v11; /*0x481242*/
  }
  else
  {
    v12 = *a3 - (unsigned __int8)*a3; /*0x481251*/
    v14 = a3[1] - (unsigned __int8)a3[1]; /*0x48125e*/
    v13 = a3[2]; /*0x481260*/
  }
  v15 = v12; /*0x481263*/
  v36 = v14; /*0x48126b*/
  v37 = v13; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v16 = *(this + 74); /*0x481275*/
  else
    v16 = *(this + 73); /*0x48127d*/
  v17 = (v16 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v17 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*(_BYTE *)(this + 73) & 0x40) != 0 ) /*0x48129f*/
    {
      v18 = PlacementList::FindByID(6, 0); /*0x4812a7*/
      if ( !v18 || !*(_BYTE *)(*(_DWORD *)(v18 + 1312) + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v19 = PlacementList::FindByID(6, 0); /*0x4812c6*/
      if ( v19 && !*(_BYTE *)(*(_DWORD *)(v19 + 1312) + 5815) ) /*0x4812d5*/
        v19 = 0; /*0x4812df*/
      if ( !(unsigned __int8)BuildingClass::IsPoweredOn(v19) ) /*0x4812e3*/
      {
LABEL_22:
        *a2 = dword_89E778; /*0x4812fb*/
        a2[1] = dword_89E77C; /*0x481304*/
        a2[2] = dword_89E780; /*0x48130d*/
        return a2; /*0x481313*/
      }
    }
    if ( !v9 ) /*0x481318*/
    {
      v22 = (unsigned __int8 *)(4 * Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v9 == 1
      || (!a5
        ? (v21 = ((unsigned __int8)(1 << v9) & *(_BYTE *)(this + 73)) == 0)
        : (v21 = (*(_BYTE *)(this + 74) & (unsigned __int8)(1 << v9)) == 0),
          !v21) )
    {
      v22 = (unsigned __int8 *)(4 * v9 + 8506500); /*0x481356*/
LABEL_30:
      v38 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v23 = *v22++; /*0x481367*/
        if ( v23 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v24) = *((_BYTE *)this + 296); /*0x48137b*/
            v25 = 1 << v23; /*0x481386*/
          }
          else
          {
            LOBYTE(v25) = *((_BYTE *)this + 292); /*0x4813a8*/
            v24 = 1 << v23; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v24 & (unsigned __int8)v25) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v38 >= 4 ) /*0x4813ca*/
        {
          *a2 = dword_89E778; /*0x4813db*/
          a2[1] = dword_89E77C; /*0x4813e4*/
          a2[2] = dword_89E780; /*0x4813ed*/
          return a2; /*0x4813f3*/
        }
      }
      v26 = 3 * v23; /*0x4813fa*/
      v27 = v15 + dword_89E9F0[v26]; /*0x48141b*/
      v28 = v36 + dword_89E9F4[v26]; /*0x481422*/
      v37 += dword_89E9F8[v26]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(a3); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v30 = dword_89E9F0[3 * v9]; /*0x481443*/
  v31 = dword_89E9F8[3 * v9]; /*0x48145c*/
  v28 = v36 + dword_89E9F4[3 * v9]; /*0x48145f*/
  v27 = v15 + v30; /*0x481463*/
  v37 += v31; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(a3); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += dword_89E7B4; /*0x48147b*/
LABEL_43:
  *a2 = v27; /*0x481481*/
  a2[1] = v28; /*0x481489*/
  a2[2] = GroundHeight; /*0x48148f*/
  return a2; /*0x4812f8*/
}



// ==== 0x004814F0  CellClass::InitRandomOffsets  this=IUnknown  sig=csp ====
int __thiscall CellClass_InitRandomOffsets(int this, int a2, int a3)
{
  int v4; // esi
  int *v5; // edi
  int i; // ebx
  int v7; // eax
  _DWORD *v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ebx
  char v12; // al
  int v13; // esi
  int result; // eax
  int v15; // edi
  __int16 v16; // [esp+12h] [ebp-16h]

  if ( !byte_89E7C7 )
  {
    byte_89E7C7 = 1; /*0x48150f*/
    memset(dword_89E620, 0xFFu, sizeof(dword_89E620)); /*0x481516*/
    v4 = 0; /*0x481518*/
    v5 = dword_89E620; /*0x48151a*/
    do
    {
      for ( i = 0; i < 64; ++i )
      {
        v7 = Random::State(Randomizer_Global) & 7; /*0x48152b*/
        v8 = &unk_81CCE8; /*0x48152e*/
        while ( 1 )
        {
          v9 = *v8 + v4 + 8 * v8[1]; /*0x481539*/
          v10 = v9 + (v9 < 0 ? 0x40 : 0);
          if ( v10 >= 64 ) /*0x481543*/
            v10 -= 64; /*0x481545*/
          if ( dword_89E620[v10] == v7 ) /*0x48154f*/
            break; /*0x48154f*/
          v8 += 2; /*0x481551*/
          if ( (int)v8 >= (int)&byte_81CD28 ) /*0x48155a*/
            goto LABEL_11; /*0x48155a*/
        }
      }
LABEL_11:
      *v5++ = v7; /*0x481564*/
      ++v4; /*0x481569*/
    }
    while ( (int)v5 < (int)&dbl_89E720 );
  }
  v11 = *(_DWORD *)(this + 36); /*0x481572*/
  v12 = v11; /*0x48157b*/
  LOBYTE(v16) = BYTE2(v11); /*0x481583*/
  if ( *(_BYTE *)(this + 282) ) /*0x481575*/
  {
    v13 = *((_DWORD *)g_FrameCounter + a2); /*0x481596*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x48159d*/
    if ( !result ) /*0x4815a5*/
      return result; /*0x4815a5*/
    v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x4815bd*/
    v16 = (__int16)(HIWORD(v11) - *(unsigned __int8 *)(this + 282) / v15) /*0x48161b*/
        / *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13) + 4);
    v12 = (__int16)v11 / v15; /*0x481620*/
  }
  if ( a3 > 4 ) /*0x481629*/
    return dword_89E620[8 * (v16 & 7) + (v12 & 7)]; /*0x48165c*/
  else
    return dword_81CCA8[v12 & 3 | (4 * (v16 & 3))]; /*0x48163e*/
}



// ==== 0x00481670  Cell::ApplyDamage  this=Cell  sig=csp ====
void __thiscall Cell_ApplyDamage(_DWORD *this, int a2, int a3, int a4, char a5)
{
  _DWORD *v6; // esi
  float *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  float *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( a5 ) /*0x48167e*/
    v6 = (_DWORD *)this->q0E8; /*0x481680*/
  else
    v6 = (_DWORD *)this->q0E4; /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(_BYTE)a4 && v6 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (float *)AbstractClass::IsTechnoType(v6); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( Audio::IsLoud(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      v6 = (_DWORD *)v6[12]; /*0x4816bb*/
      if ( !v6 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( a5 ) /*0x4816ce*/
    v8 = this->q0E8; /*0x4816d0*/
  else
    v8 = this->q0E4; /*0x4816d8*/
  v9 = 0; /*0x4816de*/
  v10 = 0; /*0x4816e0*/
  v11 = 10; /*0x4816e2*/
  Block = 0; /*0x4816e9*/
  v17 = 0; /*0x4816ed*/
  v18 = 1; /*0x4816f1*/
  v19 = 0; /*0x4816f5*/
  v15 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x4816f9*/
  v21 = 10; /*0x481701*/
  v20 = 0; /*0x481705*/
  if ( v8 ) /*0x481709*/
  {
    while ( 1 ) /*0x481711*/
    {
      if ( v20 < v10 ) /*0x481715*/
        goto LABEL_22; /*0x481715*/
      if ( (v19 || !v10) && v11 > 0 ) /*0x481725*/
        break; /*0x481725*/
LABEL_24:
      v8 = *(_DWORD *)(v8 + 48); /*0x481750*/
      if ( !v8 ) /*0x481755*/
        goto LABEL_25; /*0x481755*/
      v11 = v21; /*0x48170d*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v11 + v10, 0) ) /*0x481733*/
    {
LABEL_22:
      v12 = v20++; /*0x48173a*/
      *((_DWORD *)Block + v12) = v8; /*0x481749*/
    }
    v10 = v17; /*0x48174c*/
    goto LABEL_24; /*0x48174c*/
  }
LABEL_25:
  if ( v20 > 0 ) /*0x48175b*/
  {
    do /*0x4817e0*/
    {
      v13 = (float *)AbstractClass::IsTechnoType(*((void **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (_BYTE)a4
        || *((_BYTE *)g_RulesClass_Instance + 6125)
        || v13
        && (TechnoTypeClass::HasVoiceResponse(v13, 3)
         || *(_DWORD *)(*((_DWORD *)v13 + 135) + 588) >= *((_DWORD *)g_RulesClass_Instance + 1299)) )
      {
        (*(void (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)Block + v9) + 372))( /*0x4817d3*/
          *((_DWORD *)Block + v9),
          a2,
          a3,
          a4);
      }
      ++v9; /*0x4817dd*/
    }
    while ( v9 < v20 ); /*0x4817e0*/
  }
  v15 = &VectorClass<ObjectClass *>::`vftable'; /*0x4817e9*/
  if ( Block ) /*0x4817f4*/
  {
    if ( v19 ) /*0x4817fc*/
      __3_YAXPAX_Z(Block); /*0x4817ff*/
  }
}



// ==== 0x00481810  Cell::GetNeighbourContent  this=Cell  sig=csp ====
void *__thiscall Cell_GetNeighbourContent(_DWORD *this, unsigned int a2)
{
  void *result; // eax
  __int16 v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = this->q024; /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(Direction_X_Offsets[a2 & 7]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(Direction_X_Offsets[a2 & 7]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x48185d*/
  }
  return result; /*0x481863*/
}



// ==== 0x00481870  CellClass::SetThreatBounds  this=IUnknown  sig=csp ====
int __thiscall CellClass_SetThreatBounds(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  int i; // edi
  _DWORD *v6; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = this->ptr_24; /*0x481880*/
  v3 = Cell::PosToLinearIndex(&v7); /*0x481889*/
  result = HouseClass_Count; /*0x48188b*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x481894*/
  {
    v6 = (_DWORD *)*((_DWORD *)HouseClass_Array + i); /*0x4818a2*/
    if ( v6 && v6[12] != a2 && !HouseClass::IsAllied(v6, a2) ) /*0x4818b7*/
      HouseClass::SetThreat_Bounds(v3, a3); /*0x4818c4*/
    result = HouseClass_Count; /*0x4818c9*/
  }
  return result; /*0x4818d5*/
}



// ==== 0x004818E0  ObjectClass::UpdateTiberiumGrowth  this=ObjectClass  sig=csp ====
int __thiscall sub_4818E0(int this, char a2)
{
  int v3; // ecx
  int BuildingByTiberiumType; // eax
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // cf
  _DWORD *v10; // eax
  int v11; // edx
  unsigned __int8 v12; // al
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+14h] [ebp+4h]

  v3 = *(_DWORD *)(this + 68); /*0x4818e7*/
  if ( v3 == -1 ) /*0x4818ed*/
    return 0; /*0x4818ed*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x4818f3*/
  v5 = BuildingByTiberiumType; /*0x4818f8*/
  if ( BuildingByTiberiumType == -1 ) /*0x4818fd*/
    return 0; /*0x4819f2*/
  v6 = 0; /*0x481909*/
  v7 = *(_DWORD **)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType]; /*0x48190c*/
  v15 = v7[46]; /*0x481915*/
  if ( a2 ) /*0x48191f*/
    *(_DWORD *)(this + 68) = Random::Range( /*0x481955*/
                               (_DWORD *)g_ScenarioClass_Instance + 134,
                               v7[56],
                               v7[56] + 700 * v7[58] - 700);
  v8 = 0; /*0x481958*/
  v9 = 1; /*0x48195a*/
  do /*0x4819bc*/
  {
    if ( v9 ) /*0x48195d*/
    {
      v11 = v8 & 7; /*0x481968*/
      v14 = *(_DWORD *)(this + 36); /*0x48196b*/
      LOWORD(v16) = v14 + LOWORD(Direction_X_Offsets[v11]); /*0x48198a*/
      HIWORD(v16) = HIWORD(v14) + HIWORD(Direction_X_Offsets[v11]); /*0x481993*/
      v14 = v16; /*0x48199c*/
      v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14); /*0x4819a6*/
    }
    else
    {
      v10 = (_DWORD *)this; /*0x48195f*/
    }
    if ( FindBuildingByTiberiumType(v10[17]) == v5 ) /*0x4819b5*/
      ++v6; /*0x4819b7*/
    v9 = (unsigned int)++v8 < 8; /*0x4819b9*/
  }
  while ( v8 < 8 ); /*0x4819bc*/
  v12 = byte_81CD28[4 * (v6 % *(_DWORD *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * v5] + 228))]; /*0x4819d1*/
  *(_BYTE *)(this + 286) = v12; /*0x4819d8*/
  return v15 * (v12 + 1); /*0x4819e4*/
}



// ==== 0x00481A00  CrateClass::ProcessPickup  this=CrateClass  sig=csp ====
char __thiscall Crate_Process(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int v12; // ecx
  _DWORD *v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // ebx
  _DWORD *v17; // eax
  int v18; // edi
  bool v19; // cf
  void *v20; // eax
  _DWORD *v21; // eax
  int v22; // edi
  int v23; // ecx
  int v24; // ebx
  int *v25; // eax
  _BYTE *v26; // edi
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  _DWORD *v30; // edx
  char v31; // bl
  char IsCurrentPlayer; // al
  _DWORD *v33; // edi
  int inited; // eax
  int v35; // eax
  int v36; // eax
  int v37; // edi
  int v38; // ebx
  int v39; // eax
  int v41; // edi
  int v42; // eax
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  int *v46; // eax
  void *v47; // ebx
  void **v48; // edi
  void *v49; // eax
  int v50; // eax
  int v51; // edi
  int v52; // ebx
  _DWORD *v53; // ea... [46751 chars total]



// ==== 0x00483410  HouseClass::MarkCellBuildable  this=HouseClass  sig=csp ====
char __thiscall sub_483410(int this, int a2)
{
  int v3; // eax

  if ( (*(_BYTE *)(this + 320) & 0x10) != 0 || !Cell::IsBuildable(this, 1, 0, 0, -1, 0, -1, 1) ) /*0x48342a*/
    return 0; /*0x48344e*/
  v3 = *(_DWORD *)(this + 320); /*0x483433*/
  LOBYTE(v3) = v3 | 0x10; /*0x483439*/
  *(_DWORD *)(this + 320) = v3; /*0x48343b*/
  *(_DWORD *)(this + 80) = a2; /*0x483445*/
  return 1; /*0x48344a*/
}



// ==== 0x00483460  HouseClass::checkAutoProduction  this=HouseClass  sig=csp ====
char __thiscall sub_483460(_DWORD *this)
{
  int v1; // eax

  v1 = this->q140; /*0x483460*/
  if ( (v1 & 0x10) == 0 ) /*0x483468*/
    return 0; /*0x48347c*/
  LOBYTE(v1) = v1 & 0xEF; /*0x48346a*/
  this->unitRepairStations = -1; /*0x48346c*/
  this->q140 = v1; /*0x483473*/
  return 1; /*0x48347b*/
}



// ==== 0x00483480  CellClass::DamageAllObjects  this=AbstractClass  sig=csp ====
int __thiscall CellClass_DamageAllObjects(_DWORD *this)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = (_DWORD *)this->q0E4; i; i = (_DWORD *)i[12] ) /*0x483489*/
    result = (*(int (__thiscall **)(_DWORD *))(*i + 252))(i); /*0x48348f*/
  return result; /*0x48349c*/
}



// ==== 0x004834A0  Cell::IsBuildable  this=Cell  sig=csp ====
bool __thiscall Cell_IsBuildable(int this, int a2, char a3, char a4, int a5, int a6, int a7, char a8)
{
  int v10; // ecx
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // esi

  if ( a2 == 4 ) /*0x4834ad*/
    return 1; /*0x4834ad*/
  if ( a5 != -1 && a5 != MapClass::GetTileIndex(&MapClass_Instance, (__int16 *)(this + 36), a6, a8) ) /*0x4834d6*/
    return 0; /*0x4834de*/
  if ( a7 != -1 ) /*0x4834ed*/
  {
    v10 = *(char *)(this + 283); /*0x4834ef*/
    if ( a7 == v10 ) /*0x4834f8*/
    {
      if ( (*(_DWORD *)(this + 320) & 0x100) != 0 && !a8 ) /*0x48351c*/
        return 0; /*0x483524*/
    }
    else if ( (*(_DWORD *)(this + 320) & 0x100) == 0 || a7 != v10 + 4 ) /*0x483507*/
    {
      return 0; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (a7 == -1 || a7 == *(char *)(this + 283) + 4) && (*(_DWORD *)(this + 320) & 0x100) != 0 ) /*0x483542*/
  {
    v11 = 1; /*0x483546*/
    v12 = *(unsigned __int8 *)(this + 296); /*0x483548*/
  }
  else
  {
    v12 = *(unsigned __int8 *)(this + 292); /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    v12 &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    v12 &= 0x5Fu; /*0x48356d*/
  if ( v12 ) /*0x483572*/
    return 0; /*0x48357a*/
  v13 = *(_DWORD *)(this + 236); /*0x48357d*/
  v14 = *(_DWORD *)(this + 68); /*0x483583*/
  if ( v14 != -1 ) /*0x483589*/
  {
    v15 = *((_DWORD *)g_BuildingTypeClass_Array + v14); /*0x483591*/
    if ( v15 ) /*0x483596*/
    {
      if ( *(_BYTE *)(v15 + 680) ) /*0x483598*/
      {
        if ( a6 != 2 && a6 != 3 && a6 != 8 && (a6 != 1 && a6 != 4 || !*(_BYTE *)(v15 + 557)) && a6 != 12 ) /*0x4835c8*/
          return 0; /*0x4835d0*/
        v13 = 0; /*0x4835d3*/
      }
    }
  }
  return flt_89EA40[8 * v13 + a2 + v13] != 0.0 || v11; /*0x483602*/
}



// ==== 0x00483610  ObjectClass::processPointerInvalid  this=ObjectClass  sig=csp ====
int __thiscall sub_483610(_DWORD *this)
{
  return (this->q140 >> 8) & 1; /*0x48361c*/
}



// ==== 0x00483620  BuildingClass::IsTiberiumCollectorEligible  this=BuildingClass  sig=csp ====
bool __thiscall sub_483620(int this)
{
  int BuildingByTiberiumType; // eax
  int v4; // eax

  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13478) ) /*0x483628*/
    return 0; /*0x483632*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x483639*/
  if ( BuildingByTiberiumType == -1 ) /*0x483641*/
    return 0; /*0x483643*/
  v4 = *(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType]; /*0x48364d*/
  if ( *(_BYTE *)(this + 284) ) /*0x483650*/
    return 0; /*0x48365a*/
  if ( *(unsigned __int8 *)(this + 286) < *(_DWORD *)(v4 + 228) - 1 ) /*0x48366f*/
    return *(double *)(v4 + 176) >= 0.00001; /*0x483686*/
  return 0; /*0x483634*/
}



// ==== 0x00483690  BuildingClass::IsTiberiumSiloEligible  this=BuildingClass  sig=csp ====
bool __thiscall sub_483690(int this)
{
  int BuildingByTiberiumType; // edi

  if ( *(char *)g_ScenarioClass_Instance >= 0 ) /*0x48369c*/
    return 0; /*0x48369f*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x4836ab*/
  if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
    return 0; /*0x4836b3*/
  if ( *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
    return 0; /*0x4836cb*/
  if ( *(_BYTE *)(this + 284) ) /*0x4836cf*/
    return 0; /*0x4836da*/
  if ( *(double *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType] + 160) >= 0.00001 ) /*0x4836f8*/
    return *(_DWORD *)(this + 228) == 0; /*0x483708*/
  return 0; /*0x48369e*/
}



// ==== 0x00483710  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_483710(int this)
{
  int BuildingByTiberiumType; // eax
  int v3; // eax
  int v4; // eax

  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13478) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType]; /*0x483735*/
  if ( *(_BYTE *)(this + 284) /*0x483766*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x48376b*/
  return Crate::FindPlacement(this, v4, 1); /*0x48377a*/
}



// ==== 0x00483780  CellClass::SpawnTiberiumTree  this=CellClass  sig=csp ====
char __thiscall sub_483780(int this, char a2)
{
  int BuildingByTiberiumType; // eax
  int v5; // eax
  char v7; // bp
  int v8; // ebx
  unsigned int v9; // eax
  void *v10; // esi
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h] BYREF
  int v13; // [esp+18h] [ebp-4h]
  int v14; // [esp+20h] [ebp+4h]

  if ( !a2 ) /*0x48378f*/
  {
    if ( *(char *)g_ScenarioClass_Instance >= 0 ) /*0x483799*/
      return 0; /*0x483799*/
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x48379e*/
    if ( BuildingByTiberiumType == -1 /*0x4837e1*/
      || *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2
      || *(_BYTE *)(this + 284)
      || *(double *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType] + 160) < 0.00001
      || *(_DWORD *)(this + 228) )
    {
      return 0; /*0x4837e9*/
    }
  }
  v5 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x4837ee*/
  v14 = v5; /*0x4837f5*/
  if ( a2 ) /*0x4837f9*/
  {
    if ( v5 == -1 ) /*0x48380f*/
    {
      v14 = 0; /*0x483811*/
      v5 = 0; /*0x483819*/
    }
  }
  else if ( v5 == -1 ) /*0x4837fe*/
  {
    return 0; /*0x483809*/
  }
  v13 = *(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * v5]; /*0x48382f*/
  v7 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 7); /*0x48383e*/
  v8 = 0; /*0x483840*/
  while ( 1 ) /*0x483845*/
  {
    v9 = ((_BYTE)v8 + v7) & 7; /*0x483845*/
    if ( v9 < 8 ) /*0x48384b*/
    {
      v12 = *(_DWORD *)(this + 36); /*0x483857*/
      LOWORD(v11) = LOWORD(Direction_X_Offsets[v9]) + v12; /*0x48386a*/
      HIWORD(v11) = HIWORD(v12) + HIWORD(Direction_X_Offsets[v9]); /*0x48387d*/
      v12 = v11; /*0x48388b*/
      v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v12); /*0x483894*/
    }
    else
    {
      v10 = (void *)this; /*0x48384d*/
    }
    if ( v10 && IsCoordValidMap((int)v10, v13) ) /*0x4838a1*/
      break; /*0x4838a1*/
    if ( ++v8 >= 8 ) /*0x4838ae*/
      return 0; /*0x4838b9*/
  }
  return Crate::FindPlacement((int)v10, v14, 3); /*0x483800*/
}



// ==== 0x004838E0  ObjectClass::IsCoordValidMap  this=IUnknown  sig=csp ====
char __thiscall Map_IsCoordValid(int this, int a2)
{
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // esi
  int v6; // eax

  if ( (unsigned __int8)LayerClass::IsWithinUsableArea(this + 36, 1) && (*(_DWORD *)(this + 320) & 0x500) == 0 ) /*0x483905*/
  {
    if ( !g_WTFMode ) /*0x483912*/
      goto LABEL_17; /*0x483912*/
    v3 = *(_DWORD **)(this + 228); /*0x483918*/
    if ( v3 ) /*0x483920*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 6 ) /*0x48392c*/
      {
        v3 = (_DWORD *)v3[12]; /*0x48392e*/
        if ( !v3 ) /*0x483933*/
          goto LABEL_11; /*0x483933*/
      }
      if ( (int)v3[27] > 0 ) /*0x483940*/
      {
        v4 = v3[328]; /*0x483942*/
        if ( !*(_BYTE *)(v4 + 3226) && !*(_BYTE *)(v4 + 5889) ) /*0x48395a*/
          return 0; /*0x48395a*/
      }
    }
LABEL_11:
    if ( !g_WTFMode ) /*0x483967*/
      goto LABEL_17; /*0x483967*/
    v5 = *(_DWORD **)(this + 228); /*0x483969*/
    if ( !v5 ) /*0x483971*/
      goto LABEL_17; /*0x483971*/
    while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 36 ) /*0x48397d*/
    {
      v5 = (_DWORD *)v5[12]; /*0x48397f*/
      if ( !v5 ) /*0x483984*/
        goto LABEL_17; /*0x483984*/
    }
    if ( !*(_BYTE *)(v5[50] + 689) ) /*0x483992*/
    {
LABEL_17:
      if ( byte_89EA60[36 * *(_DWORD *)(this + 236)] ) /*0x4839a5*/
      {
        if ( *(_DWORD *)(this + 68) == -1 && !*(_BYTE *)(this + 284) ) /*0x4839b6*/
        {
          v6 = *(_DWORD *)(this + 56); /*0x4839c0*/
          if ( v6 < 0 || v6 >= g_TechnoClassCount || *(_BYTE *)(*((_DWORD *)g_FrameCounter + v6) + 774) ) /*0x4839d8*/
            return 1; /*0x4839e6*/
        }
      }
    }
  }
  return 0; /*0x4839e2*/
}



// ==== 0x004839F0  CellClass::SaveLoad_Prefix  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix(#378 *this)
{
  int v1; // ebp
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int i; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // [esp+28h] [ebp-4h] BYREF
  _DWORD *v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+34h] [ebp+8h] BYREF

  v1 = v23; /*0x4839f3*/
  v2 = v21; /*0x4839f8*/
  result = AbstractClass::SaveLoad_Prefix_0(v21, v23); /*0x4839ff*/
  if ( result >= 0 ) /*0x483a08*/
  {
    if ( v21 ) /*0x483a10*/
    {
      AbstractClass::InitVtables(v21, (int)&v23); /*0x483a19*/
      v21[13] = 0; /*0x483a1e*/
      v21[19] = 0; /*0x483a21*/
      *v21 = &CellClass::`vftable'; /*0x483a24*/
      v21[1] = &CellClass::`vftable'; /*0x483a2a*/
      v21[2] = &CellClass::`vftable'; /*0x483a31*/
      v21[3] = &CellClass::`vftable'; /*0x483a38*/
    }
    if ( !v21[10] ) /*0x483a42*/
      goto LABEL_20; /*0x483a42*/
    v4 = __2_YAPAXI_Z(0x18u); /*0x483a4a*/
    v5 = v4; /*0x483a4f*/
    if ( v4 ) /*0x483a56*/
    {
      CellClass::clearOccupationFlags(v4, 0, 0); /*0x483a5c*/
      *v5 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x483a61*/
      v5[5] = 10; /*0x483a67*/
      v5[4] = 0; /*0x483a6e*/
    }
    else
    {
      v5 = 0; /*0x483a73*/
    }
    v21[10] = v5; /*0x483a7a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v20, 4, 0); /*0x483a84*/
    if ( result >= 0 ) /*0x483a89*/
    {
      v22 = 0; /*0x483a93*/
      if ( v20 > 0 ) /*0x483a99*/
      {
        do /*0x483a9b*/
        {
          v6 = *(_DWORD *)v1; /*0x483a9b*/
          v23 = 0; /*0x483aa7*/
          if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v1, &v23, 4, 0) < 0 ) /*0x483ab0*/
            return 0; /*0x483ab0*/
          v7 = v2[10]; /*0x483ab6*/
          v8 = *(_DWORD *)(v7 + 8); /*0x483ab9*/
          if ( *(_DWORD *)(v7 + 16) >= v8 ) /*0x483ac1*/
          {
            if ( !*(_BYTE *)(v7 + 13) && v8 ) /*0x483aca*/
              continue; /*0x483aca*/
            v9 = *(_DWORD *)(v7 + 20); /*0x483acc*/
            if ( v9 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, v8 + v9, 0) ) /*0x483adb*/
              continue; /*0x483adb*/
          }
          v10 = *(_DWORD *)(v7 + 16); /*0x483ae2*/
          v11 = *(_DWORD *)(v7 + 4); /*0x483ae5*/
          *(_DWORD *)(v7 + 16) = v10 + 1; /*0x483aeb*/
          *(_DWORD *)(v11 + 4 * v10) = v23; /*0x483af2*/
        }
        while ( ++v22 < v20 ); /*0x483a9b*/
      }
      v12 = v2[10]; /*0x483b06*/
      for ( i = 0; i < *(_DWORD *)(v12 + 16); ++i ) /*0x483b0e*/
      {
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v12 + 4) + 4 * i)); /*0x483b1c*/
        v12 = v2[10]; /*0x483b21*/
      }
LABEL_20:
      v14 = *((__int16 *)v2 + 18); /*0x483b2a*/
      v15 = *((__int16 *)v2 + 19) << 9; /*0x483b32*/
      v2[63] = 0; /*0x483b35*/
      v16 = g_Shroud_CellArray; /*0x483b3b*/
      v17 = v14 + v15; /*0x483b40*/
      v18 = *(_DWORD *)(g_Shroud_CellArray + 4 * v17); /*0x483b42*/
      if ( v18 ) /*0x483b47*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x483b51*/
        *(_DWORD *)(g_Shroud_CellArray + 4 * v17) = 0; /*0x483b59*/
        v16 = g_Shroud_CellArray; /*0x483b5c*/
      }
      *(_DWORD *)(v16 + 4 * v17) = v2; /*0x483b61*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 11); /*0x483b6d*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 12); /*0x483b7b*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 15); /*0x483b89*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 56); /*0x483b9a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 57); /*0x483bab*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 58); /*0x483bbc*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 62); /*0x483bcd*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v2 + 16); /*0x483bdb*/
      v19 = v2[17]; /*0x483be0*/
      if ( v19 == 179 || v19 == 242 ) /*0x483bef*/
      {
        v2[17] = -1; /*0x483bf1*/
        *((_BYTE *)v2 + 286) = 0; /*0x483bf8*/
      }
      return 0; /*0x483bfe*/
    }
  }
  return result; /*0x483c00*/
}



// ==== 0x00483C10  CellClass::SaveLoad_Prefix_0  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix_0(#378 *this)
{
  int result; // eax
  int v2; // eax
  int v3; // edx
  int i; // edi
  int *v5; // [esp+18h] [ebp+4h]
  int *v6; // [esp+1Ch] [ebp+8h]
  int v7; // [esp+20h] [ebp+Ch] BYREF

  result = AbstractClass::SaveLoad_Prefix(v5, v6, v7); /*0x483c22*/
  if ( result >= 0 ) /*0x483c29*/
  {
    v2 = v5[10]; /*0x483c2b*/
    if ( v2 ) /*0x483c30*/
    {
      v3 = *v6; /*0x483c35*/
      v7 = *(_DWORD *)(v2 + 16); /*0x483c41*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(v6, &v7, 4, 0); /*0x483c45*/
      if ( result < 0 ) /*0x483c4a*/
        return result; /*0x483c4a*/
      for ( i = 0; i < v7; ++i ) /*0x483c54*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*v6 + 16))(v6, *(_DWORD *)(v5[10] + 4) + 4 * i, 4, 0) < 0 ) /*0x483c6c*/
          break; /*0x483c6c*/
      }
    }
    return 0; /*0x483c77*/
  }
  return result; /*0x483c79*/
}



// ==== 0x00483C80  BuildingClass::DetermineVisualState  this=BuildingClass  sig=csp ====
void __thiscall sub_483C80(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( !LayerClass::IsWithinUsableArea(&MapClass_Instance, (__int16 *)(this + 36), 1) ) /*0x483c90*/
  {
    *(_DWORD *)(this + 76) = 7; /*0x483c99*/
    return; /*0x483ca3*/
  }
  v2 = *(_DWORD *)(this + 68); /*0x483ca4*/
  if ( v2 != -1 ) /*0x483caa*/
  {
    v3 = *((_DWORD *)g_BuildingTypeClass_Array + v2); /*0x483cb2*/
    if ( *(_BYTE *)(v3 + 557) ) /*0x483cb5*/
    {
      *(_DWORD *)(this + 76) = 1; /*0x483cbf*/
      return; /*0x483cc9*/
    }
    if ( *(_BYTE *)(v3 + 680) ) /*0x483cca*/
      goto LABEL_7; /*0x483cd2*/
    if ( flt_89EA48[9 * *(_DWORD *)(v3 + 664)] == 0.0 ) /*0x483cfa*/
    {
      *(_DWORD *)(this + 76) = 6; /*0x483cfc*/
      return; /*0x483d06*/
    }
    if ( *(_BYTE *)(v3 + 693) ) /*0x483d07*/
    {
      *(_DWORD *)(this + 76) = 6; /*0x483d11*/
      return; /*0x483d1b*/
    }
    if ( *(_BYTE *)(v3 + 692) ) /*0x483d1c*/
      goto LABEL_31; /*0x483d1c*/
  }
  v4 = *(_DWORD *)(this + 236); /*0x483d2a*/
  if ( v4 == 2 ) /*0x483d33*/
  {
    *(_DWORD *)(this + 76) = 4; /*0x483d35*/
    return; /*0x483d3f*/
  }
  if ( v4 == 6 ) /*0x483d47*/
  {
    *(_DWORD *)(this + 76) = 3; /*0x483d49*/
    return; /*0x483d53*/
  }
  if ( flt_89EA48[9 * v4] <= 0.01 ) /*0x483d69*/
  {
LABEL_18:
    *(_DWORD *)(this + 76) = 6; /*0x483d6b*/
    return; /*0x483d71*/
  }
  v5 = *(_DWORD **)(this + 228); /*0x483d72*/
  if ( !v5 ) /*0x483d7a*/
  {
LABEL_31:
    *(_DWORD *)(this + 76) = 0; /*0x483dd4*/
    return; /*0x483dde*/
  }
  while ( 1 ) /*0x483d80*/
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5); /*0x483d80*/
    if ( v6 == 6 ) /*0x483d85*/
    {
      v7 = v5[328]; /*0x483d8e*/
      if ( *(_BYTE *)(v7 + 5824) ) /*0x483d94*/
      {
        if ( *(_BYTE *)(v5[135] + 506) ) /*0x483da4*/
          goto LABEL_18; /*0x483dac*/
      }
      else if ( *(_BYTE *)(v7 + 5823) ) /*0x483db0*/
      {
        v8 = v5[390]; /*0x483dba*/
        if ( v8 != 12 && v8 != 8 ) /*0x483dc8*/
          *(_DWORD *)(this + 76) = 6; /*0x483dca*/
      }
      goto LABEL_30; /*0x483dac*/
    }
    if ( v6 == 36 ) /*0x483d8a*/
      break; /*0x483d8a*/
LABEL_30:
    v5 = (_DWORD *)v5[12]; /*0x483dcd*/
    if ( !v5 ) /*0x483dd2*/
      goto LABEL_31; /*0x483dd2*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1174) == 1 ) /*0x483df3*/
  {
    if ( *(_DWORD *)(v5[50] + 684) == 7 ) /*0x483e18*/
      goto LABEL_7; /*0x483e18*/
  }
  else if ( *(_DWORD *)(v5[50] + 680) == 7 ) /*0x483e01*/
  {
LABEL_7:
    *(_DWORD *)(this + 76) = 2; /*0x483cd4*/
    return; /*0x483cde*/
  }
  *(_DWORD *)(this + 76) = 5; /*0x483e1e*/
}



// ==== 0x00483E30  TacticalClass::SetView  this=IUnknown  sig=csp ====
__int16 __thiscall TacticalClass_SetView(int this, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  int v7; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // dx
  int v18; // eax
  __int16 v19; // cx
  int v21; // [esp+4h] [ebp-14h] BYREF
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = *(_DWORD *)(this + 52); /*0x483e3e*/
    if ( v9 && g_WTFMode ) /*0x483e4d*/
      --*(_DWORD *)(v9 + 404); /*0x483e4f*/
    *(_DWORD *)(this + 52) = v7; /*0x483e55*/
    ++*(_DWORD *)(v7 + 404); /*0x483e5f*/
    v10 = *(_DWORD **)(this + 52); /*0x483e65*/
    a2 = v10[102]; /*0x483e6e*/
    v21 = v10[103]; /*0x483e78*/
    v22 = v10[104]; /*0x483e82*/
LABEL_20:
    v13 = a4; /*0x483f7a*/
    v14 = a5; /*0x483f83*/
    *(_DWORD *)(this + 260) = a3; /*0x483f88*/
    v15 = a6; /*0x483f8e*/
    *(_WORD *)(this + 264) = v13; /*0x483f93*/
    v16 = a7; /*0x483f9a*/
    *(_WORD *)(this + 266) = v14; /*0x483f9f*/
    v17 = a2; /*0x483fa6*/
    *(_WORD *)(this + 268) = v15; /*0x483fab*/
    LOWORD(v18) = v21; /*0x483fb2*/
    *(_WORD *)(this + 270) = v16; /*0x483fb7*/
    v19 = v22; /*0x483fbe*/
    *(_WORD *)(this + 272) = v17; /*0x483fc3*/
    *(_WORD *)(this + 274) = v18; /*0x483fca*/
    *(_WORD *)(this + 276) = v19; /*0x483fd1*/
    return v18; /*0x483fdc*/
  }
  if ( (*(_WORD *)(this + 36) || *(_WORD *)(this + 38)) /*0x483eaa*/
    && (*(_WORD *)(this + 36) != 0xFFFF || *(_WORD *)(this + 38) != 0xFFFF) )
  {
    Tactical::CalculateTacticalLighting(&a3, &a4, &a5, &a6, &a7, &a2, &v21, &v22); /*0x483eda*/
    if ( !*(_DWORD *)(this + 52) ) /*0x483edf*/
      goto LABEL_18; /*0x483edf*/
    v23 = a2; /*0x483ef2*/
    v24 = v21; /*0x483efa*/
    v25 = v22; /*0x483efe*/
    QuantizeColorRGB(&v25); /*0x483f0b*/
    v11 = *(_DWORD **)(this + 52); /*0x483f10*/
    if ( v11[102] != v23 || v11[103] != v24 || v11[104] != v25 ) /*0x483f3b*/
    {
      if ( g_WTFMode ) /*0x483f45*/
        --v11[101]; /*0x483f47*/
      *(_DWORD *)(this + 52) = 0; /*0x483f4d*/
    }
    if ( !*(_DWORD *)(this + 52) ) /*0x483f54*/
    {
LABEL_18:
      v12 = CreateSurfaceClassPrimary(v22); /*0x483f68*/
      *(_DWORD *)(this + 52) = v12; /*0x483f6f*/
      if ( v12 ) /*0x483f72*/
        ++*(_DWORD *)(v12 + 404); /*0x483f74*/
    }
    goto LABEL_20; /*0x483f74*/
  }
  v18 = CreateSurfaceClassPrimary(1000); /*0x483fea*/
  *(_DWORD *)(this + 52) = v18; /*0x483ff1*/
  if ( v18 ) /*0x483ff4*/
    ++*(_DWORD *)(v18 + 404); /*0x483ff6*/
  *(_WORD *)(this + 266) = 1000; /*0x483ffc*/
  *(_WORD *)(this + 268) = 1000; /*0x484003*/
  *(_WORD *)(this + 270) = 1000; /*0x48400a*/
  *(_WORD *)(this + 272) = 1000; /*0x484011*/
  *(_WORD *)(this + 274) = 1000; /*0x484018*/
  *(_WORD *)(this + 276) = 1000; /*0x48401f*/
  *(_DWORD *)(this + 260) = 0x10000; /*0x484026*/
  *(_WORD *)(this + 264) = 0; /*0x484030*/
  return v18; /*0x483fd8*/
}



// ==== 0x00484050  Tactical::CreateTacticalLightSurface  this=Tactical  sig=csp ====
int __thiscall CreateTacticalLightSurface(int this, int *a2, _DWORD *a3, _DWORD *a4, int *a5, int a6, int a7)
{
  _DWORD *v7; // eax
  int *v8; // edx
  int *v9; // ebx
  _DWORD *v11; // ecx
  int *v12; // edi
  _DWORD *v13; // esi
  int result; // eax
  __int64 v15; // [esp-8h] [ebp-1Ch]
  _DWORD *v16; // [esp+10h] [ebp-4h] BYREF

  v7 = a3; /*0x484051*/
  v8 = a5; /*0x484055*/
  v9 = (int *)a7; /*0x48405a*/
  v11 = a4; /*0x484063*/
  v12 = (int *)a6; /*0x484067*/
  *a3 = 0x10000; /*0x48406b*/
  *v11 = 0; /*0x484071*/
  *v8 = 1000; /*0x484077*/
  *v12 = 1000; /*0x48407d*/
  *v9 = 1000; /*0x484083*/
  if ( !*(_WORD *)(this + 36) && !*(_WORD *)(this + 38) /*0x4840a8*/
    || *(_WORD *)(this + 36) == 0xFFFF && *(_WORD *)(this + 38) == 0xFFFF )
  {
    result = CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = &a6; /*0x4840b2*/
    LODWORD(v15) = &a7; /*0x4840b7*/
    Tactical::CalculateTacticalLighting((_WORD *)this, v7, v11, v8, v12, v9, (int *)&v16, v15); /*0x4840c4*/
    if ( *(_DWORD *)(this + 52) /*0x484125*/
      && (a3 = v16,
          a4 = (_DWORD *)a7,
          a5 = (int *)a6,
          QuantizeColorRGB((int *)&a3, (int *)&a4, (int *)&a5),
          v13 = *(_DWORD **)(this + 52),
          (_DWORD *)v13[102] == a3)
      && (_DWORD *)v13[103] == a4
      && (result = v13[104], (int *)result == a5) )
    {
      *a2 = (int)v13; /*0x48412c*/
    }
    else
    {
      result = CreateSurfaceClassPrimary((int)v16, a7, a6); /*0x484142*/
      *a2 = result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}



// ==== 0x00484180  Tactical::CalculateTacticalLighting  this=IUnknown  sig=csp ====
int __thiscall CalculateTacticalLighting(
        _WORD *this,
        _DWORD *a2,
        _DWORD *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        __int64 a8)
{
  int v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // ebp
  int *v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  double v18; // st7
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  int v28; // [esp+18h] [ebp-2Ch]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-24h]
  _DWORD v33[2]; // [esp+24h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-18h]
  int v35; // [esp+30h] [ebp-14h]
  int v36; // [esp+34h] [ebp-10h]
  int v37; // [esp+38h] [ebp-Ch]
  int v38; // [esp+3Ch] [ebp-8h]
  int v39; // [esp+40h] [ebp-4h]

  v8 = (int)this; /*0x484184*/
  if ( !this->q012 && !this->q04C || this->q012 == 0xFFFF && this->q04C == 0xFFFF ) /*0x4841a9*/
  {
    *a2 = 0x10000; /*0x48462e*/
    *a3 = 0; /*0x484638*/
    *a4 = 1000; /*0x484642*/
    *a5 = 1000; /*0x48464c*/
    *a6 = 1000; /*0x484656*/
    *a7 = 1000; /*0x484660*/
    *(_DWORD *)a8 = 1000; /*0x484666*/
    *(_DWORD *)HIDWORD(a8) = 1000; /*0x48466c*/
    return HIDWORD(a8); /*0x48465c*/
  }
  v9 = a4; /*0x4841b5*/
  *a4 = 1000 * *((_DWORD *)g_ScenarioClass_Instance + 3403) / 100; /*0x4841de*/
  *a7 = 1000 * *((_DWORD *)g_ScenarioClass_Instance + 3405) / 100; /*0x48420d*/
  *(_DWORD *)a8 = 1000 * *((_DWORD *)g_ScenarioClass_Instance + 3406) / 100; /*0x48423c*/
  v10 = 0; /*0x48426b*/
  *(_DWORD *)HIDWORD(a8) = 1000 * *((_DWORD *)g_ScenarioClass_Instance + 3407) / 100; /*0x48426d*/
  v32 = 0; /*0x484273*/
  for ( *a3 = 0; v32 < g_BridgeCellPool; ++v32 ) /*0x484285*/
  {
    v11 = *((_DWORD *)dword_ABCA14 + v10); /*0x484291*/
    if ( *(_BYTE *)(v11 + 72) && g_lParam >= *(_DWORD *)(v11 + 52) ) /*0x4842aa*/
    {
      v28 = *(_DWORD *)(v8 + 36); /*0x4842b5*/
      v12 = ((__int16)v28 << 8) + 128; /*0x4842cc*/
      v13 = (SHIWORD(v28) << 8) + 128; /*0x4842ce*/
      v33[0] = 128; /*0x4842d0*/
      v33[1] = 128; /*0x4842d4*/
      Isometric::InitTables(v8, v33); /*0x4842dd*/
      v14 = (int *)(v11 + 56); /*0x4842e2*/
      v15 = *(_DWORD *)(v11 + 56); /*0x4842e7*/
      v38 = *(_DWORD *)(v11 + 60); /*0x4842ec*/
      v16 = *(_DWORD *)(v11 + 68); /*0x4842f0*/
      v39 = *(_DWORD *)(v11 + 64); /*0x4842f6*/
      v29 = v12 - v15; /*0x4842fe*/
      v37 = *(_DWORD *)(v11 + 56); /*0x484306*/
      v17 = *(_DWORD *)(v11 + 60); /*0x48430a*/
      v39 = *(_DWORD *)(v11 + 64); /*0x484310*/
      if ( v29 * v29 + (v13 - v17) * (v13 - v17) <= v16 * v16 ) /*0x48432d*/
      {
        v34 = *v14; /*0x48433a*/
        v35 = *(_DWORD *)(v11 + 60); /*0x484341*/
        v37 = *v14; /*0x48434d*/
        v30 = v13 - *(_DWORD *)(v11 + 60); /*0x48435e*/
        v36 = *(_DWORD *)(v11 + 64); /*0x484369*/
        v39 = *(_DWORD *)(v11 + 64); /*0x484370*/
        v18 = Math::Sqrt((double)v30 * (double)v30 + (double)(v12 - v34) * (double)(v12 - v34)); /*0x484385*/
        v19 = Math::RoundToInt(v18); /*0x48438d*/
        if ( v19 <= v16 ) /*0x484394*/
        {
          v20 = (1000 * v16 - 1000 * v19) / v16; /*0x4843bd*/
          *a3 += (int)(v20 * *(_DWORD *)(v11 + 36)) / 1000; /*0x4843db*/
          *a7 += (int)(v20 * *(_DWORD *)(v11 + 40)) / 1000; /*0x4843fc*/
          *(_DWORD *)a8 += (int)(v20 * *(_DWORD *)(v11 + 44)) / 1000; /*0x48441d*/
          *(_DWORD *)HIDWORD(a8) += (int)(v20 * *(_DWORD *)(v11 + 48)) / 1000; /*0x48443e*/
        }
      }
      v8 = (int)this; /*0x484440*/
      v9 = a4; /*0x484444*/
    }
    v10 = v32 + 1; /*0x484452*/
  }
  v21 = *a3 + *v9; /*0x48446b*/
  *v9 = v21; /*0x48446f*/
  *a6 = v21; /*0x484471*/
  if ( !LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v9 += *(char *)(v8 + 283) * *((_DWORD *)g_ScenarioClass_Instance + 3421) /*0x4844ec*/
           - *((_DWORD *)g_ScenarioClass_Instance + 3427);
      v23 = *((_DWORD *)g_ScenarioClass_Instance + 3427); /*0x4844fa*/
      v24 = *((_DWORD *)g_ScenarioClass_Instance + 3428) * (*(char *)(v8 + 283) + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v9 += *(char *)(v8 + 283) * *((_DWORD *)g_ScenarioClass_Instance + 3421) /*0x484537*/
             - *((_DWORD *)g_ScenarioClass_Instance + 3420);
        v22 = *((_DWORD *)g_ScenarioClass_Instance + 3421) * (*(char *)(v8 + 283) + 4) /*0x484559*/
            - *((_DWORD *)g_ScenarioClass_Instance + 3420)
            + *a6;
        goto LABEL_21; /*0x48455b*/
      }
      *v9 += *(char *)(v8 + 283) * *((_DWORD *)g_ScenarioClass_Instance + 3409) /*0x48457c*/
           - *((_DWORD *)g_ScenarioClass_Instance + 3408);
      v23 = *((_DWORD *)g_ScenarioClass_Instance + 3408); /*0x48458a*/
      v24 = *((_DWORD *)g_ScenarioClass_Instance + 3409) * (*(char *)(v8 + 283) + 4); /*0x484593*/
    }
    v22 = v24 - v23 + *a6; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v9 += *(char *)(v8 + 283) * *((_DWORD *)g_ScenarioClass_Instance + 3415) /*0x48449b*/
       - *((_DWORD *)g_ScenarioClass_Instance + 3414);
  v22 = *((_DWORD *)g_ScenarioClass_Instance + 3415) * (*(char *)(v8 + 283) + 4) /*0x4844bd*/
      - *((_DWORD *)g_ScenarioClass_Instance + 3414)
      + *a6;
LABEL_21:
  *a6 = v22; /*0x4845a0*/
  v25 = *v9; /*0x4845a2*/
  if ( *v9 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v9 = v25; /*0x4845c0*/
  *a5 = v25; /*0x4845c2*/
  Map_Calc(a7, a8, HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a2 * *a6) >> 16; /*0x4845da*/
  *a6 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  *a6 = v26; /*0x4845eb*/
  *v9 = *v9 <= 0 ? 0 : *v9;
  *a5 = *a5 <= 0 ? 0 : *a5;
  result = *a6 <= 0 ? 0 : *a6;
  *a6 = result; /*0x484615*/
  return result; /*0x48461a*/
}



// ==== 0x00484680  TacticalMap::ComputeScreenTint  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::ComputeScreenTint(int this)
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx
  __int16 v5; // ax
  bool v6; // zf
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // dx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // ax

  v2 = *(_WORD *)(this + 264) + (__int16)(1000 * *((_WORD *)g_ScenarioClass_Instance + 6806)) / 100; /*0x4846ab*/
  *(_WORD *)(this + 266) = v2; /*0x4846b2*/
  *(_WORD *)(this + 270) = v2; /*0x4846b9*/
  if ( LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = *(char *)(this + 283); /*0x4846cf*/
    *(_WORD *)(this + 266) += v3 * *((_WORD *)g_ScenarioClass_Instance + 6830) /*0x4846ec*/
                            - *((_WORD *)g_ScenarioClass_Instance + 6828);
    v4 = (v3 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6830) - *((_WORD *)g_ScenarioClass_Instance + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = *(char *)(this + 283); /*0x48471e*/
    *(_WORD *)(this + 266) += v5 * *((_WORD *)g_ScenarioClass_Instance + 6856) /*0x48473b*/
                            - *((_WORD *)g_ScenarioClass_Instance + 6854);
    v4 = (v5 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6856) - *((_WORD *)g_ScenarioClass_Instance + 6854); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *(char *)(this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)g_ScenarioClass_Instance + 6818) /*0x4847bc*/
                              - *((_WORD *)g_ScenarioClass_Instance + 6816);
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6818) - *((_WORD *)g_ScenarioClass_Instance + 6816); /*0x4847d3*/
    }
    else
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)g_ScenarioClass_Instance + 6842) /*0x484787*/
                              - *((_WORD *)g_ScenarioClass_Instance + 6840);
      v4 = (v7 + 4) * *((_WORD *)g_ScenarioClass_Instance + 6842) - *((_WORD *)g_ScenarioClass_Instance + 6840); /*0x48479e*/
    }
  }
  v8 = *(__int16 *)(this + 266); /*0x4847da*/
  v9 = *(_DWORD *)(this + 260); /*0x4847e1*/
  *(_WORD *)(this + 270) += v4; /*0x4847e7*/
  *(_WORD *)(this + 268) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *(__int16 *)(this + 270); /*0x484802*/
  v11 = *(_WORD *)(this + 266); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *(_WORD *)(this + 270) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *(_WORD *)(this + 266) = v11; /*0x484825*/
  v13 = *(_WORD *)(this + 268); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *(_WORD *)(this + 268) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *(_WORD *)(this + 266); /*0x484857*/
  *(_WORD *)(this + 270) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *(_WORD *)(this + 266) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *(_WORD *)(this + 268) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *(_WORD *)(this + 270) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *(_WORD *)(this + 270) = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}



// ==== 0x004848B0  JumpjetLocomotionClass::AdjustClimbFacing  this=IUnknown  sig=csp ====
int __thiscall sub_4848B0(__int16 *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  bool v14; // sf
  bool v15; // of
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // [esp+10h] [ebp-10h]
  __int16 v20; // [esp+14h] [ebp-Ch] BYREF
  __int16 v21; // [esp+16h] [ebp-Ah]
  int v22; // [esp+18h] [ebp-8h]

  v2 = a2; /*0x4848b4*/
  v4 = *((_DWORD *)Coord::To_Cell(&MapClass_Instance, a2) + 9); /*0x4848c8*/
  v5 = this->q012; /*0x4848cb*/
  v6 = this->q04C; /*0x4848cf*/
  v22 = v4; /*0x4848d3*/
  v7 = v6 - SHIWORD(v4); /*0x4848de*/
  v8 = v5 - (__int16)v4; /*0x4848e6*/
  v9 = v5 == (__int16)v4; /*0x4848ec*/
  result = dword_81CD5C[v5 + 3 * v7 - (__int16)v4]; /*0x4848ee*/
  v19 = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      LOWORD(a2) = v4 + v8; /*0x484916*/
      HIWORD(a2) = HIWORD(v22); /*0x48491b*/
      v11 = *((char *)Coord::To_Cell(&MapClass_Instance, v2) + 283) + 2; /*0x484944*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) >= v11; /*0x484959*/
      v20 = v4; /*0x484960*/
      v21 = HIWORD(v22) + v7; /*0x484965*/
      v12 = *((char *)Coord::To_Cell(&MapClass_Instance, v2) + 283) + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj(&MapClass_Instance, &v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      LOWORD(a2) = v4 + v7; /*0x4849ab*/
      HIWORD(a2) = HIWORD(v22); /*0x4849b0*/
      v16 = *((char *)Coord::To_Cell(&MapClass_Instance, v2) + 283) + 2; /*0x4849d3*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2) + 283) >= v16; /*0x4849ee*/
      v20 = v4; /*0x4849f5*/
      v21 = HIWORD(v22) + v8; /*0x4849fa*/
      v17 = *((char *)Coord::To_Cell(&MapClass_Instance, v2) + 283) + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj(&MapClass_Instance, &v20) + 283); /*0x484a2b*/
      v15 = __OFSUB__(v18, v17); /*0x484a32*/
      v14 = v18 - v17 < 0; /*0x484a32*/
    }
    if ( (_BYTE)a2 ) /*0x484a3d*/
    {
      if ( v14 != v15 ) /*0x484a38*/
        return ((_BYTE)v19 - 1) & 7; /*0x484a4e*/
      else
        return v19; /*0x484a6a*/
    }
    else
    {
      result = v19; /*0x484a59*/
      if ( v14 == v15 ) /*0x484a38*/
        return v19 + 1; /*0x484a62*/
    }
  }
  return result; /*0x484a47*/
}



// ==== 0x00484A80  sub_484A80  this=-  sig=csp ====
int __stdcall sub_484A80(int a1)
{
  ++*(_DWORD *)(a1 + 404); /*0x484a84*/
  return a1; /*0x484a8a*/
}



// ==== 0x00484AB0  InfantryClass::IsInBounds  this=InfantryClass  sig=csp ====
BOOL __thiscall InfantryClass_IsInBounds(int this)
{
  __int16 v1; // ax

  v1 = *(_WORD *)(this + 278); /*0x484ab0*/
  return v1 >= 0 && v1 < g_UnitTypeCount && *(_DWORD *)(this + 236) == 10; /*0x484ad7*/
}



// ==== 0x00484AE0  InfantryClass::ValidateAttackPosition  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass_ValidateAttackPosition(int this)
{
  __int16 v2; // ax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _WORD *v6; // edi
  __int16 v7; // ax
  __int16 v8; // ax
  _WORD *v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _WORD *v14; // edi
  __int16 v15; // ax
  __int16 v16; // ax
  void *v17; // esi
  int v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_WORD *)(this + 278); /*0x484ae8*/
  if ( v2 >= 0 && v2 < g_UnitTypeCount && *(_DWORD *)(this + 236) == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  v18 = *(_DWORD *)(this + 36); /*0x484b20*/
  v19 = *CellStruct::Add(&v18, &v21, Direction_X_Offsets); /*0x484b3a*/
  v4 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    v18 = v4[9]; /*0x484b59*/
    v20 = *CellStruct::Add(&v18, &v21, Direction_X_Offsets); /*0x484b73*/
    v6 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = *((_WORD *)v5 + 139); /*0x484b8b*/
      if ( v7 >= 0 && v7 < g_UnitTypeCount && v5[59] == 10 ) /*0x484baa*/
      {
        v8 = v6[139]; /*0x484bac*/
        if ( v8 < 0 || v8 >= g_UnitTypeCount || *((_DWORD *)v6 + 59) != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      v18 = *((_DWORD *)v6 + 9); /*0x484bd6*/
      v21 = *NeighborCoord(&v22, &v18, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = v6[139]; /*0x484c00*/
        if ( v10 >= 0 && v10 < g_UnitTypeCount && *((_DWORD *)v6 + 59) == 10 ) /*0x484c1f*/
        {
          v11 = v9[139]; /*0x484c21*/
          if ( v11 < 0 || v11 >= g_UnitTypeCount || *((_DWORD *)v9 + 59) != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  v21 = *(_DWORD *)(this + 36); /*0x484c4b*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484c6c*/
  v13 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  v21 = v12[9]; /*0x484c80*/
  v19 = *NeighborCoord(&v22, &v21, 6); /*0x484c9d*/
  v14 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = *((_WORD *)v13 + 139); /*0x484cb0*/
  if ( v15 >= 0 && v15 < g_UnitTypeCount && v13[59] == 10 ) /*0x484ccf*/
  {
    v16 = v14[139]; /*0x484cd1*/
    if ( v16 < 0 || v16 >= g_UnitTypeCount || *((_DWORD *)v14 + 59) != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  v21 = *((_DWORD *)v14 + 9); /*0x484cfb*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484d18*/
  v17 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v20); /*0x484d21*/
  return v17 && InfantryClass::IsInBounds((int)v14) && !InfantryClass::IsInBounds((int)v17); /*0x484d40*/
}



// ==== 0x00484D60  InfantryClass::CanMoveThroughCell  this=InfantryClass  sig=csp ====
bool __thiscall sub_484D60(int this)
{
  __int16 v1; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _WORD *v5; // eax
  __int16 v6; // cx
  __int16 v7; // cx
  int v8; // eax
  _WORD *v9; // edi
  _WORD *v10; // eax
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = *(_WORD *)(this + 278); /*0x484d60*/
  if ( v1 >= 0 && v1 < g_UnitTypeCount && *(_DWORD *)(this + 236) == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  v13 = *(_DWORD *)(this + 36); /*0x484d9c*/
  v14 = *CellStruct::Add(&v13, &v16, &dword_89F694); /*0x484db6*/
  v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14); /*0x484dbf*/
  v4 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  v13 = v3[9]; /*0x484dd5*/
  v15 = *CellStruct::Add(&v13, &v16, &dword_89F694); /*0x484def*/
  v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = *((_WORD *)v4 + 139); /*0x484e05*/
  if ( v6 >= 0 && v6 < g_UnitTypeCount && v4[59] == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5[139]; /*0x484e2a*/
  if ( v7 >= 0 && v7 < g_UnitTypeCount && *((_DWORD *)v5 + 59) == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v4[9]; /*0x484e49*/
  LOWORD(v13) = g_DirectionOffsetPool + v8; /*0x484e58*/
  HIWORD(v13) = HIWORD(v8) + HIWORD(g_DirectionOffsetPool); /*0x484e6d*/
  v15 = v13; /*0x484e76*/
  v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v15); /*0x484e88*/
  v13 = v4[9]; /*0x484e97*/
  v16 = *CellStruct::Add(&v13, &v17, &g_CellDirectionOffsets); /*0x484eac*/
  v10 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9[139]; /*0x484ebd*/
  if ( v11 >= 0 && v11 < g_UnitTypeCount && *((_DWORD *)v9 + 59) == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10[139]; /*0x484ede*/
  return v12 >= 0 && v12 < g_UnitTypeCount && *((_DWORD *)v10 + 59) == 10; /*0x484efb*/
}



// ==== 0x00484F10  globalHelper_084F10  this=InfantryClass  sig=csp ====
char __stdcall sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}



// ==== 0x00484F20  InfantryClass::GetType  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass_GetType(__int16 *this)
{
  __int16 v1; // ax

  v1 = this->q08B; /*0x484f20*/
  if ( v1 < 0 || v1 >= g_UnitTypeCount ) /*0x484f37*/
    return 0; /*0x484f43*/
  else
    return *((_DWORD *)g_PathClass_State + v1); /*0x484f3f*/
}



// ==== 0x00484F50  ObjectClass::method_484F50  this=ObjectClass  sig=csp ====
int __thiscall sub_484F50(int this)
{
  int v2; // ecx
  int result; // eax
  int *v4; // edx
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = *(_DWORD *)(this + 228); /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = (int *)v8; /*0x484f62*/
    do /*0x484f76*/
    {
      if ( v2 >= 10 ) /*0x484f69*/
        break; /*0x484f69*/
      *v4 = result; /*0x484f6b*/
      result = *(_DWORD *)(result + 48); /*0x484f6d*/
      ++v2; /*0x484f70*/
      ++v4; /*0x484f71*/
    }
    while ( result ); /*0x484f76*/
  }
  if ( v2 > 0 ) /*0x484f7a*/
  {
    v5 = v8; /*0x484f7f*/
    v6 = v2; /*0x484f83*/
    do /*0x484fd8*/
    {
      v7 = (_DWORD *)*v5; /*0x484f85*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v5 + 460))(*v5, 0); /*0x484f8d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 1 /*0x484fa9*/
        || (result = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7), result == 2) )
      {
        if ( !v7[413] ) /*0x484fab*/
          WinAPI::Wrapper(-2147467261); /*0x484fba*/
        result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7[413] + 124))( /*0x484fd1*/
                   v7[413],
                   *(unsigned __int8 *)(this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/
}



// ==== 0x00484FF0  CellClass::GetUIName  this=CellClass  sig=csp ====
int __thiscall CellClass::GetUIName(int *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(this->q044); /*0x484ff3*/
  if ( BuildingByTiberiumType == -1 ) /*0x484ffb*/
    return 0; /*0x48500a*/
  else
    return *(_DWORD *)(*(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType] + 96); /*0x485006*/
}



// ==== 0x00485010  BuildingClass::FindByCellHash  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_FindByCellHash(_DWORD *this)
{
  return FindBuildingByTiberiumType(this->q044);
}



// ==== 0x00485020  Building::GetNthOfType  this=Building  sig=csp ====
int __thiscall Building_GetNthOfType(int this)
{
  int v2; // eax

  v2 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x485026*/
  if ( v2 == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return (*(unsigned __int8 *)(this + 286) + 1) * *(_DWORD *)(*((_DWORD *)BuildingClass_InstanceArray + v2) + 184); /*0x48504f*/
}



// ==== 0x00485060  Cell::IsValidHeight  this=Cell  sig=csp ====
BOOL __thiscall Cell_IsValidHeight(int *this)
{
  int v1; // eax

  v1 = this->q038; /*0x485060*/
  return v1 >= g_CellPassabilityLUT && v1 < g_CellPassabilityLUT + 14; /*0x485079*/
}



// ==== 0x00485080  JumpjetLocomotionClass::FindClosestOccupiableCell  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall sub_485080(_DWORD *this)
{
  int inited; // ebp
  int v3; // esi
  int *v5; // eax
  int v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  _BYTE v8[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = 128; /*0x48508f*/
  v7 = 128; /*0x485097*/
  inited = Isometric::InitTables((int)this, &v6); /*0x4850a3*/
  if ( g_WTFMode && (v3 = this->q0E4) != 0 ) /*0x4850b6*/
  {
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) != 6 ) /*0x4850c2*/
    {
      v3 = *(_DWORD *)(v3 + 48); /*0x4850c4*/
      if ( !v3 ) /*0x4850c9*/
        goto LABEL_5; /*0x4850c9*/
    }
    v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v3 + 1312) + 124))(*(_DWORD *)(v3 + 1312), v8); /*0x48510c*/
    v6 = *v5; /*0x485112*/
    v7 = v5[1]; /*0x48511a*/
    return v5[2] + inited; /*0x485121*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4850cb*/
    v7 = 0; /*0x4850de*/
    if ( Object::FindClosestObjectCell(this, &v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}



// ==== 0x00485130  MapClass::RemoveCellReference  this=MapClass  sig=csp ====
int __thiscall sub_485130(int *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = a2; /*0x485134*/
  v4 = this->q03C; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    this->q03C = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(int *, int *))(dword_880944 + 16))(&dword_880944, this + 9); /*0x48515c*/
    if ( v5 != -1 && v5 < dword_880954 && v5 < --dword_880954 ) /*0x485177*/
    {
      do /*0x48518f*/
      {
        ++v5; /*0x48517f*/
        *(_DWORD *)(dword_880948 + 4 * v5 - 4) = *(_DWORD *)(dword_880948 + 4 * v5); /*0x485183*/
      }
      while ( v5 < dword_880954 ); /*0x48518f*/
    }
  }
  if ( this->q02C == v3 ) /*0x485194*/
    this->q02C = 0; /*0x485196*/
  if ( this->q00C == v3 ) /*0x4851a0*/
    this->q00C = 0; /*0x4851a2*/
  result = this->q028; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      v7 = (_DWORD *)this->q028; /*0x4851bc*/
      a2 = v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*v7 + 16))(v7, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = v7[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( v7[4] = v9; result < v7[4]; *(_DWORD *)(v7[1] + 4 * result - 4) = *(_DWORD *)(v7[1] + 4 * result) ) /*0x4851e1*/
            ++result; /*0x4851e6*/
        }
      }
    }
  }
  return result; /*0x4851f5*/
}



// ==== 0x00485200  CellClass::ddtor  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt03(#378 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x485206*/
    return -2147467261; /*0x485208*/
  *v2 = -1044407858; /*0x485216*/
  v2[1] = 298982028; /*0x48521e*/
  v2[2] = 1610642817; /*0x485227*/
  v2[3] = -1252326136; /*0x485230*/
  return 0; /*0x48520d*/
}



// ==== 0x00485240  ObjectClass::SetMember09  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass_SetMember09(_DWORD *this, _DWORD *a2)
{
  this->objectTypeFlags = *a2; /*0x485246*/
  return a2; /*0x485249*/
}



// ==== 0x00485250  ObjectClass::SetTriggerTarget  this=AbstractClass  sig=csp ====
int __thiscall ObjectClass::SetTriggerTarget(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = this->q03C; /*0x485253*/
  if ( v3 ) /*0x485258*/
    --*(_DWORD *)(v3 + 44); /*0x48525a*/
  result = a2; /*0x48525d*/
  this->q03C = a2; /*0x485263*/
  if ( a2 ) /*0x485266*/
  {
    result = dword_88094C; /*0x485268*/
    if ( dword_880954 < dword_88094C /*0x4852a3*/
      || (byte_880951 || !dword_88094C)
      && dword_880958 > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(dword_880944 + 8))(
                     &dword_880944,
                     dword_88094C + dword_880958,
                     0),
          (_BYTE)result) )
    {
      result = dword_880954++; /*0x4852b1*/
      *(_DWORD *)(dword_880948 + 4 * result) = this->q024; /*0x4852bd*/
    }
    ++*(_DWORD *)(this->q03C + 44); /*0x4852c3*/
  }
  return result; /*0x4852c6*/
}



// ==== 0x004852D0  BuildingClass::CreateDestructionCrater  this=BuildingClass  sig=csp ====
char __thiscall sub_4852D0(int this)
{
  int v2; // kr04_4
  int v3; // kr00_4
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (*(__int16 *)(this + 36) << 8) + 128; /*0x4852f9*/
  v3 = (*(__int16 *)(this + 38) << 8) + 128; /*0x485306*/
  v6[2] = 0; /*0x485308*/
  v6[1] = (v3 / 256) << 8; /*0x485312*/
  v6[0] = (v2 / 256) << 8; /*0x48532c*/
  Coord::To_Screen(g_TacticalClass_Instance, v6, v5); /*0x485330*/
  return Cell::CreateCrater(v5[0] - 30, g_Map_VisibleRect - 15 * *(char *)(this + 283) + v5[1] - 15, 60, 30, 0); /*0x485389*/
}



// ==== 0x00485390  CellClass::GetBridgeBitfield  this=VectorClass  sig=csp ====
int __thiscall CellClass_GetBridgeBitfield(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ebp
  int i; // edi
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF

  v1 = g_BuildingTypeClass_Array; /*0x485390*/
  v2 = 0; /*0x48539d*/
  for ( i = 0; i < 4; ++i ) /*0x4853a1*/
  {
    if ( (unsigned int)(2 * i) < 8 ) /*0x4853a9*/
    {
      v6 = (2 * (_BYTE)i) & 7; /*0x4853b2*/
      v10 = this->q024; /*0x4853b5*/
      LOWORD(v9) = v10 + LOWORD(Direction_X_Offsets[v6]); /*0x4853cf*/
      HIWORD(v9) = HIWORD(v10) + HIWORD(Direction_X_Offsets[v6]); /*0x4853de*/
      v10 = v9; /*0x4853e7*/
      v5 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10); /*0x4853f0*/
      v1 = g_BuildingTypeClass_Array; /*0x4853f5*/
    }
    else
    {
      v5 = this; /*0x4853ab*/
    }
    v7 = v5[17]; /*0x4853fb*/
    if ( v7 != -1 && (!*((_BYTE *)v5 + 284) || *(_BYTE *)(v1[v7] + 686)) ) /*0x485410*/
    {
      if ( v7 == 126 ) /*0x48541c*/
      {
        if ( *((_BYTE *)v5 + 286) < 0x30u ) /*0x485436*/
          continue; /*0x485436*/
LABEL_12:
        v2 |= 1 << i; /*0x485441*/
        continue; /*0x485441*/
      }
      if ( *(_BYTE *)(v1[v7] + 686) ) /*0x485421*/
        goto LABEL_12; /*0x485428*/
    }
  }
  return v2; /*0x48544d*/
}



// ==== 0x00485460  BuildingClass::CheckAdjacentCells  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_CheckAdjacentCells(int this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // esi
  bool v6; // cf
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 284) <= 4u ) /*0x48546e*/
  {
    v2 = *(_DWORD *)(this + 236); /*0x485474*/
    if ( v2 != 2 && v2 != 3 && v2 != 8 && v2 != 6 ) /*0x485498*/
    {
      v3 = *(_DWORD *)(this + 68); /*0x48549e*/
      v4 = g_BuildingTypeClass_Array; /*0x4854a1*/
      if ( v3 == -1 || *(_BYTE *)(*((_DWORD *)g_BuildingTypeClass_Array + v3) + 686) ) /*0x4854af*/
      {
        v5 = 0; /*0x4854bd*/
        v6 = 1; /*0x4854bf*/
        while ( 1 ) /*0x4854c2*/
        {
          if ( v6 ) /*0x4854c2*/
          {
            v8 = v5 & 7; /*0x4854cd*/
            v14 = *(_DWORD *)(this + 36); /*0x4854d0*/
            LOWORD(v13) = v14 + LOWORD(Direction_X_Offsets[v8]); /*0x4854ef*/
            HIWORD(v13) = HIWORD(v14) + HIWORD(Direction_X_Offsets[v8]); /*0x4854f8*/
            v14 = v13; /*0x485501*/
            v7 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v14); /*0x48550b*/
            v4 = g_BuildingTypeClass_Array; /*0x485510*/
          }
          else
          {
            v7 = (_DWORD *)this; /*0x4854c4*/
          }
          if ( *((_BYTE *)v7 + 284) > 4u && !*(_BYTE *)(this + 284) ) /*0x48551f*/
          {
            v9 = v7[17]; /*0x485529*/
            if ( v9 == -1 || !*(_BYTE *)(v4[v9] + 686) ) /*0x485534*/
              break; /*0x485534*/
          }
          v10 = v7[59]; /*0x48553d*/
          if ( v10 == 2 ) /*0x485546*/
            break; /*0x485546*/
          if ( v10 == 3 ) /*0x48554b*/
            break; /*0x48554b*/
          if ( v10 == 8 ) /*0x485550*/
            break; /*0x485550*/
          if ( v10 == 6 ) /*0x485555*/
            break; /*0x485555*/
          v11 = v7[17]; /*0x485557*/
          if ( v11 != -1 && !*(_BYTE *)(v4[v11] + 686) ) /*0x485562*/
            break; /*0x485562*/
          v5 += 2; /*0x48556c*/
          v6 = (unsigned int)v5 < 8; /*0x48556f*/
          if ( v5 >= 8 ) /*0x485572*/
            return 1; /*0x48557f*/
        }
      }
    }
  }
  return 0; /*0x485578*/
}



// ==== 0x00485590  CellClass::ProcessBridgeRepair  this=VectorClass  sig=csp ====
void __thiscall CellClass::ProcessBridgeRepair(_DWORD *this)
{
  _DWORD *v1; // ebp
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  LONG right; // edx
  int v11; // eax
  int v12; // ebp
  LONG bottom; // esi
  int v14; // edi
  int BridgeBitfield; // eax
  signed int v16; // edi
  _BYTE *NeighbourContent; // esi
  int v18; // ebx
  struct tagRECT *v19; // ebp
  struct tagRECT *v20; // eax
  LONG left; // edx
  LONG v22; // ecx
  LONG v23; // ebx
  LONG top; // edi
  LONG v25; // eax
  bool v26; // cc
  LONG v27; // ebp
  LONG v28; // ebx
  int *v29; // eax
  struct tagRECT *v30; // eax
  int *v31; // eax
  _DWORD *v32; // eax
  int *v33; // eax
  int *v34; // eax
  struct tagRECT *v35; // eax
  int *v36; // eax
  int *v37; // eax
  struct tagRECT *v38; // [esp-Ch] [ebp-10Ch]
  int v39; // [esp-8h] [ebp-108h]
  const RECT *v40; // [esp-8h] [ebp-108h]
  _DWORD *v41; // [esp-8h] [ebp-108h]
  struct tagRECT *v42; // [esp-4h] [ebp-104h]
  int v43; // [esp-4h] [ebp-104h]
  const RECT *v44; // [esp-4h] [ebp-104h]
  const RECT *v45; // [esp-4h] [ebp-104h]
  _DWORD *v46; // [esp-4h] [ebp-104h]
  const RECT *v47; // [esp+0h] [ebp-100h]
  const RECT *v48; // [esp+0h] [ebp-100h]
  const RECT *v49; // [esp+0h] [ebp-100h]
  const RECT *v50; // [esp+4h] [ebp-FCh]
  const RECT *v51; // [esp+4h] [ebp-FCh]
  const RECT *v52; // [esp+4h] [ebp-FCh]
  int v53; // [esp+10h] [ebp-F0h]
  int v54; // [esp+10h] [ebp-F0h]
  struct tagRECT rcDst; // [esp+14h] [ebp-ECh] BYREF
  int v56; // [esp+24h] [ebp-DCh]
  int v57; // [esp+28h] [ebp-D8h]
  LONG v58; // [esp+2Ch] [ebp-D4h]
  LONG v59; // [esp+30h] [ebp-D0h]
  signed int v60; // [esp+34h] [ebp-CCh]
  int v61; // [esp+38h] [ebp-C8h]
  int v62; // [esp+3Ch] [ebp-C4h]
  int v63; // [esp+40h] [ebp-C0h]
  int v64; // [esp+44h] [ebp-BCh]
  int v65; // [esp+48h] [ebp-B8h]
  _DWORD *v66; // [esp+4Ch] [ebp-B4h]
  int v67; // [esp+50h] [ebp-B0h]
  int v68; // [esp+54h] [ebp-ACh]
  _DWORD v69[2]; // [esp+58h] [ebp-A8h] BYREF
  int v70; // [esp+60h] [ebp-A0h] BYREF
  LONG v71; // [esp+68h] [ebp-98h]
  int v72[2]; // [esp+70h] [ebp-90h] BYREF
  int v73[4]; // [esp+78h] [ebp-88h] BYREF
  _DWORD v74[4]; // [esp+88h] [ebp-78h] BYREF
  int v75; // [esp+98h] [ebp-68h] BYREF
  _DWORD v76[4]; // [esp+A0h] [ebp-60h] BYREF
  RECT rcSrc1; // [esp+B0h] [ebp-50h] BYREF
  int v78[4]; // [esp+C0h] [ebp-40h] BYREF
  int v79[4]; // [esp+E0h] [ebp-20h] BYREF
  int v80[4]; // [esp+F0h] [ebp-10h] BYREF

  v1 = this; /*0x48559e*/
  v66 = this; /*0x4855a3*/
  v56 = 0; /*0x4855a7*/
  v57 = 0; /*0x4855ab*/
  v58 = 0; /*0x4855af*/
  v59 = 0; /*0x4855b3*/
  PlacementRect = BuildingClass::GetPlacementRect((int)this, &v70); /*0x4855c0*/
  StartCoords = House::GetStartCoords((int)v1, &rcDst); /*0x4855c5*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4855d6*/
  {
    v4 = *PlacementRect; /*0x48565e*/
    v6 = PlacementRect[1]; /*0x485660*/
    v7 = PlacementRect[2]; /*0x485663*/
    v8 = PlacementRect[3]; /*0x485666*/
    goto LABEL_16; /*0x485666*/
  }
  v53 = PlacementRect[2]; /*0x4855e1*/
  if ( v53 <= 0 || (v65 = PlacementRect[3], v65 <= 0) ) /*0x4855f0*/
  {
    v4 = *StartCoords; /*0x485651*/
    v6 = StartCoords[1]; /*0x485653*/
    v7 = StartCoords[2]; /*0x485656*/
    v8 = StartCoords[3]; /*0x485659*/
LABEL_16:
    v64 = v8; /*0x485669*/
    goto LABEL_17; /*0x485669*/
  }
  v4 = *StartCoords; /*0x4855f2*/
  v5 = *PlacementRect; /*0x4855f4*/
  v6 = StartCoords[1]; /*0x4855f6*/
  v7 = StartCoords[2]; /*0x4855f9*/
  v8 = StartCoords[3]; /*0x4855fc*/
  if ( v4 > *PlacementRect ) /*0x485601*/
  {
    v7 += v4 - v5; /*0x485605*/
    v4 = *PlacementRect; /*0x485607*/
  }
  v9 = PlacementRect[1]; /*0x485609*/
  v60 = v9; /*0x48560e*/
  if ( v6 > v9 ) /*0x485612*/
  {
    v8 += v6 - v9; /*0x485616*/
    v6 = v9; /*0x485618*/
  }
  if ( v7 + v4 < v5 + v53 ) /*0x485625*/
    v7 = v5 - v4 + v53 + 1; /*0x48562d*/
  if ( v8 + v6 < v65 + v60 ) /*0x485640*/
    v8 = v65 + v60 - v6 + 1; /*0x485645*/
  v1 = v66; /*0x485647*/
  v64 = v8; /*0x48564b*/
LABEL_17:
  right = v58; /*0x48566d*/
  if ( v58 <= 0 || v59 <= 0 ) /*0x48567f*/
  {
    right = v7; /*0x485706*/
  }
  else if ( v7 <= 0 || v8 <= 0 ) /*0x48568b*/
  {
    v4 = v56; /*0x4856fa*/
    v6 = v57; /*0x4856fe*/
    v8 = v59; /*0x485702*/
  }
  else
  {
    v11 = v56; /*0x48568d*/
    v12 = v57; /*0x485691*/
    rcDst.bottom = v59; /*0x485695*/
    rcDst.right = v58; /*0x48569d*/
    if ( v56 > v4 ) /*0x4856a1*/
    {
      v11 = v4; /*0x4856a5*/
      rcDst.right = v56 + v58 - v4; /*0x4856a9*/
    }
    if ( v57 > v6 ) /*0x4856af*/
    {
      v12 = v6; /*0x4856b9*/
      rcDst.bottom += v57 - v6; /*0x4856bb*/
    }
    if ( v11 + rcDst.right >= v4 + v7 ) /*0x4856ca*/
      right = rcDst.right; /*0x4856d4*/
    else
      right = v4 - v11 + v7 + 1; /*0x4856ce*/
    bottom = rcDst.bottom; /*0x4856dc*/
    v14 = v64 + v6; /*0x4856e0*/
    if ( rcDst.bottom + v12 < v14 ) /*0x4856e7*/
      bottom = v14 - v12 + 1; /*0x4856ec*/
    v4 = v11; /*0x4856ee*/
    v6 = v12; /*0x4856f0*/
    v1 = v66; /*0x4856f2*/
    v8 = bottom; /*0x4856f6*/
  }
  v56 = v4; /*0x485708*/
  v57 = v6; /*0x48570e*/
  v58 = right; /*0x485712*/
  v59 = v8; /*0x485716*/
  *((_BYTE *)v1 + 286) = 0; /*0x48571a*/
  BridgeBitfield = CellClass::GetBridgeBitfield(v1); /*0x485721*/
  if ( !BridgeBitfield || *((_BYTE *)v1 + 284) ) /*0x48572c*/
    v1[17] = -1; /*0x485768*/
  else
    *((_BYTE *)v1 + 286) = 3 * BridgeBitfield + abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134) % 3); /*0x485760*/
  BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v1 + 9)); /*0x485778*/
  v16 = 0; /*0x48577d*/
  v60 = 0; /*0x48577f*/
  do /*0x485a30*/
  {
    NeighbourContent = Cell::GetNeighbourContent(v1, v16); /*0x48578b*/
    if ( !NeighbourContent[284] && *((_DWORD *)NeighbourContent + 17) == 126 && NeighbourContent[286] < 0x30u ) /*0x4857ac*/
    {
      v18 = CellClass::GetBridgeBitfield(NeighbourContent); /*0x4857c0*/
      v67 = v18; /*0x4857c7*/
      v61 = 0; /*0x4857cb*/
      v62 = 0; /*0x4857cf*/
      v63 = 0; /*0x4857d3*/
      v64 = 0; /*0x4857d7*/
      v19 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v79); /*0x4857ea*/
      v20 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, v80); /*0x4857ec*/
      if ( v20->right <= 0 || v20->bottom <= 0 ) /*0x485801*/
      {
        rcDst = *v19; /*0x4858be*/
      }
      else
      {
        v54 = v19->right; /*0x48580c*/
        if ( v54 <= 0 || (v68 = v19->bottom, v68 <= 0) ) /*0x48581f*/
        {
          rcDst = *v20; /*0x4858a0*/
        }
        else
        {
          left = v20->left; /*0x485821*/
          v22 = v19->left; /*0x485823*/
          v23 = v20->right; /*0x485826*/
          top = v20->top; /*0x485829*/
          v25 = v20->bottom; /*0x48582c*/
          v26 = left <= v19->left; /*0x48582f*/
          v71 = v23; /*0x485831*/
          if ( !v26 ) /*0x485835*/
          {
            v23 += left - v22; /*0x485839*/
            left = v22; /*0x48583b*/
            v71 = v23; /*0x48583d*/
          }
          v27 = v19->top; /*0x485841*/
          v65 = v27; /*0x485846*/
          if ( top > v27 ) /*0x48584a*/
          {
            v25 += top - v27; /*0x48584e*/
            top = v27; /*0x485850*/
          }
          if ( left + v23 >= v22 + v54 ) /*0x48585c*/
            v28 = v71; /*0x48586a*/
          else
            v28 = v22 - left + v54 + 1; /*0x485864*/
          if ( v25 + top < v68 + v65 ) /*0x48587d*/
            v25 = v68 + v65 - top + 1; /*0x485882*/
          rcDst.top = top; /*0x485884*/
          v16 = v60; /*0x485888*/
          rcDst.right = v28; /*0x48588c*/
          v18 = v67; /*0x485890*/
          rcDst.left = left; /*0x485894*/
          rcDst.bottom = v25; /*0x485898*/
        }
      }
      v29 = (int *)Rect::Union(&rcDst, v47, v50); /*0x4858e7*/
      v61 = *v29; /*0x4858ee*/
      v62 = v29[1]; /*0x4858f5*/
      v63 = v29[2]; /*0x4858fc*/
      v64 = v29[3]; /*0x485905*/
      if ( v18 ) /*0x485909*/
        NeighbourContent[286] = 3 * v18 + abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134) % 3); /*0x48593d*/
      else
        *((_DWORD *)NeighbourContent + 17) = -1; /*0x48590b*/
      House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485947*/
      v69[0] = DSurface_ViewBounds; /*0x485957*/
      v69[1] = g_Map_VisibleRect; /*0x48595f*/
      v42 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v73); /*0x485972*/
      House::GetStartCoords((int)NeighbourContent, v74); /*0x485976*/
      v30 = (struct tagRECT *)Rect::Union(v42, v48, v51); /*0x485984*/
      v31 = (int *)Rect::Union(v30, v49, v52); /*0x485995*/
      v43 = v31[3]; /*0x4859a0*/
      v39 = v31[2]; /*0x4859a5*/
      v32 = CellStruct::Copy(v31, v72); /*0x4859b6*/
      v33 = Coord2D::Sub(v32, &v75, v69); /*0x4859bd*/
      v34 = Rect::Construct(&rcSrc1, v33, v39, v43); /*0x4859ca*/
      v61 = *v34; /*0x4859d8*/
      v62 = v34[1]; /*0x4859df*/
      v63 = v34[2]; /*0x4859e6*/
      v64 = v34[3]; /*0x4859ef*/
      Cell::CreateCrater(*v34, v34[1], v34[2], v34[3], 0); /*0x485a0f*/
      BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(NeighbourContent + 36)); /*0x485a1d*/
      v1 = v66; /*0x485a22*/
    }
    v16 += 2; /*0x485a26*/
    v60 = v16; /*0x485a2c*/
  }
  while ( v16 < 8 ); /*0x485a30*/
  v44 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v72); /*0x485a45*/
  v38 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v1, v78); /*0x485a64*/
  House::GetStartCoords((int)v1, v76); /*0x485a68*/
  v35 = (struct tagRECT *)Rect::Union(v38, &rcSrc1, v44); /*0x485a76*/
  v36 = (int *)Rect::Union(v35, v40, v45); /*0x485a87*/
  v37 = Bounds::Subtract(v36, v41, v46); /*0x485a8e*/
  v56 = *v37; /*0x485a9c*/
  v57 = v37[1]; /*0x485aa3*/
  v58 = v37[2]; /*0x485aaa*/
  v59 = v37[3]; /*0x485ab3*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x485ad3*/
  House::AnnounceUpgrade((int)v1, -1); /*0x485adc*/
}



// ==== 0x00485AF0  BuildingClass::VisualizePlacement  this=AbstractClass  sig=csp ====
void __thiscall BuildingClass::VisualizePlacement(_BYTE *this)
{
  _BYTE *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char v8; // al
  signed int v9; // ebx
  _DWORD *NeighbourContent; // esi
  int v11; // eax
  int BridgeBitfield; // edi
  int v13; // eax
  int *v14; // ebp
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  bool v21; // cc
  int v22; // ebp
  int v23; // edx
  int v24; // eax
  struct tagRECT *v25; // edi
  struct tagRECT *v26; // eax
  LONG left; // edx
  LONG v28; // ecx
  LONG v29; // ebp
  LONG top; // ebx
  LONG bottom; // edi
  LONG v32; // eax
  LONG v33; // ecx
  int *v34; // eax
  _DWORD *v35; // eax
  int *v36; // eax
  int *v37; // eax
  struct tagRECT *v38; // eax
  int *v39; // eax
  int v40; // edx
  struct tagRECT *v41; // eax
  int *v42; // eax
  int *v43; // eax
  struct tagRECT *v44; // eax
  int *v45; // eax
  int *v46; // eax
  struct tagRECT *v47; // [esp-Ch] [ebp-1C4h]
  struct tagRECT *v48; // [esp-Ch] [ebp-1C4h]
  int v49; // [esp-8h] [ebp-1C0h]
  const RECT *v50; // [esp-8h] [ebp-1C0h]
  _DWORD *v51; // [esp-8h] [ebp-1C0h]
  const RECT *v52; // [esp-8h] [ebp-1C0h]
  _DWORD *v53; // [esp-8h] [ebp-1C0h]
  int v54; // [esp-4h] [ebp-1BCh]
  struct tagRECT *v55; // [esp-4h] [ebp-1BCh]
  const RECT *v56; // [esp-4h] [ebp-1BCh]
  const RECT *v57; // [esp-4h] [ebp-1BCh]
  _DWORD *v58; // [esp-4h] [ebp-1BCh]
  const RECT *v59; // [esp-4h] [ebp-1BCh]
  const RECT *v60; // [esp-4h] [ebp-1BCh]
  _DWORD *v61; // [esp-4h] [ebp-1BCh]
  const RECT *v62; // [esp+0h] [ebp-1B8h]
  const RECT *v63; // [esp+0h] [ebp-1B8h]
  const RECT *v64; // [esp+4h] [ebp-1B4h]
  const RECT *v65; // [esp+4h] [ebp-1B4h]
  int v66; // [esp+10h] [ebp-1A8h]
  int right; // [esp+10h] [ebp-1A8h]
  signed int v68; // [esp+34h] [ebp-184h]
  int v69; // [esp+38h] [ebp-180h] BYREF
  int v70; // [esp+3Ch] [ebp-17Ch]
  int v71; // [esp+40h] [ebp-178h]
  int v72; // [esp+44h] [ebp-174h]
  int v73; // [esp+48h] [ebp-170h]
  int v74; // [esp+4Ch] [ebp-16Ch]
  int v75; // [esp+50h] [ebp-168h]
  _BYTE *v76; // [esp+54h] [ebp-164h]
  struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
  int v78; // [esp+74h] [ebp-144h]
  int v79; // [esp+80h] [ebp-138h]
  int v80; // [esp+84h] [ebp-134h]
  _DWORD v81[2]; // [esp+88h] [ebp-130h] BYREF
  int v82; // [esp+90h] [ebp-128h] BYREF
  int v83; // [esp+98h] [ebp-120h]
  int v84; // [esp+A0h] [ebp-118h] BYREF
  LONG v85; // [esp+A8h] [ebp-110h]
  _DWORD v86[2]; // [esp+B0h] [ebp-108h] BYREF
  int v87; // [esp+B8h] [ebp-100h] BYREF
  RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v89[4]; // [esp+D0h] [ebp-E8h] BYREF
  RECT v90; // [esp+E0h] [ebp-D8h] BYREF
  _DWORD v91[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v92; // [esp+100h] [ebp-B8h] BYREF
  int v93[4]; // [esp+108h] [ebp-B0h] BYREF
  int v94[4]; // [esp+118h] [ebp-A0h] BYREF
  int v95[4]; // [esp+128h] [ebp-90h] BYREF
  int v96[4]; // [esp+138h] [ebp-80h] BYREF
  int v97[4]; // [esp+148h] [ebp-70h] BYREF
  int v98[4]; // [esp+168h] [ebp-50h] BYREF
  int v99[4]; // [esp+178h] [ebp-40h] BYREF
  int v100[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this; /*0x485afa*/
  v76 = this; /*0x485afe*/
  if ( !BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
    return; /*0x485b19*/
  PlacementRect = BuildingClass::GetPlacementRect((int)v1, &v84); /*0x485b35*/
  StartCoords = House::GetStartCoords((int)v1, &v82); /*0x485b3a*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
  {
    v7 = PlacementRect[3]; /*0x485bdb*/
  }
  else
  {
    if ( PlacementRect[2] > 0 ) /*0x485b5a*/
    {
      v75 = PlacementRect[3]; /*0x485b61*/
      if ( v75 > 0 ) /*0x485b65*/
      {
        v4 = StartCoords[1]; /*0x485b6b*/
        v5 = StartCoords[3]; /*0x485b71*/
        v6 = PlacementRect[1]; /*0x485b7e*/
        if ( v4 > v6 ) /*0x485b87*/
        {
          v5 += v4 - v6; /*0x485b8b*/
          v4 = v6; /*0x485b8d*/
        }
        if ( v5 + v4 < v75 + v6 ) /*0x485bb5*/
          v5 = v75 + v6 - v4 + 1; /*0x485bba*/
        v1 = v76; /*0x485bbc*/
        v78 = v5; /*0x485bc0*/
        goto LABEL_14; /*0x485bc4*/
      }
    }
    v7 = StartCoords[3]; /*0x485bce*/
  }
  v78 = v7; /*0x485bde*/
LABEL_14:
  BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(v1 + 36)); /*0x485c7d*/
  v8 = v1[284]; /*0x485c9b*/
  *((_DWORD *)v1 + 17) = 126; /*0x485ca1*/
  if ( !v8 ) /*0x485caa*/
  {
    v9 = 0; /*0x485cd0*/
    v1[286] = (int)abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) % 3 + 48; /*0x485cd2*/
    v68 = 0; /*0x485cd8*/
    while ( 1 ) /*0x485ce4*/
    {
      NeighbourContent = Cell::GetNeighbourContent(v1, v9); /*0x485ce4*/
      v11 = NeighbourContent[17]; /*0x485ce6*/
      if ( v11 == 126 ) /*0x485cec*/
      {
        if ( *((_BYTE *)NeighbourContent + 286) < 0x30u ) /*0x485cf5*/
          goto LABEL_21; /*0x485cf5*/
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * v11] + 686) ) /*0x485d0d*/
      {
LABEL_21:
        if ( *((_BYTE *)NeighbourContent + 284) ) /*0x485d1b*/
        {
          Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
          v55 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v96); /*0x48615d*/
          House::GetStartCoords((int)NeighbourContent, v99); /*0x486161*/
          v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
          v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
          v69 = *v39; /*0x486187*/
          v70 = v39[1]; /*0x48618e*/
          v71 = v39[2]; /*0x486195*/
          v40 = v39[3]; /*0x486199*/
          NeighbourContent[17] = 126; /*0x48619c*/
          v72 = v40; /*0x4861a8*/
          *((_BYTE *)NeighbourContent + 286) = 2 * *((_BYTE *)NeighbourContent + 284) /*0x4861d7*/
                                             + (abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 1)
                                             + 51;
          v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86); /*0x4861e2*/
          v47 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v89); /*0x486201*/
          House::GetStartCoords((int)NeighbourContent, v91); /*0x486205*/
          v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
          v42 = (int *)Rect::Union(v41, v50, v57); /*0x486224*/
          v43 = Bounds::Subtract(v42, v51, v58); /*0x48622b*/
          v69 = *v43; /*0x486239*/
          v70 = v43[1]; /*0x486240*/
          v71 = v43[2]; /*0x486247*/
          v72 = v43[3]; /*0x486250*/
          Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x486270*/
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield(NeighbourContent); /*0x485d30*/
          v13 = NeighbourContent[17]; /*0x485d32*/
          v73 = BridgeBitfield; /*0x485d38*/
          if ( v13 == -1 || BridgeBitfield <= 15 && *((unsigned __int8 *)NeighbourContent + 286) / 3 != BridgeBitfield ) /*0x485d5f*/
          {
            v14 = BuildingClass::GetPlacementRect((int)NeighbourContent, v100); /*0x485d86*/
            v15 = House::GetStartCoords((int)NeighbourContent, v95); /*0x485d92*/
            if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
            {
              v79 = v14[2]; /*0x485e60*/
              v20 = v14[3]; /*0x485e67*/
            }
            else
            {
              v66 = v14[2]; /*0x485db2*/
              if ( v66 <= 0 || (v74 = v14[3], v74 <= 0) ) /*0x485dc5*/
              {
                v23 = v15[2]; /*0x485e43*/
                v20 = v15[3]; /*0x485e4b*/
                v79 = v23; /*0x485e4e*/
              }
              else
              {
                v16 = *v15; /*0x485dc7*/
                v17 = *v14; /*0x485dc9*/
                v18 = v15[2]; /*0x485dcc*/
                v19 = v15[1]; /*0x485dcf*/
                v20 = v15[3]; /*0x485dd2*/
                v21 = v16 <= *v14; /*0x485dd5*/
                v83 = v18; /*0x485dd7*/
                if ( !v21 ) /*0x485dde*/
                {
                  v18 += v16 - v17; /*0x485de2*/
                  v16 = v17; /*0x485de4*/
                  v83 = v18; /*0x485de6*/
                }
                v22 = v14[1]; /*0x485ded*/
                v75 = v22; /*0x485df2*/
                if ( v19 > v22 ) /*0x485df6*/
                {
                  v20 += v19 - v22; /*0x485dfa*/
                  v19 = v22; /*0x485dfc*/
                }
                if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
                  v83 = v17 - v16 + v66 + 1; /*0x485e14*/
                if ( v20 + v19 < v74 + v75 ) /*0x485e2a*/
                  v20 = v74 + v75 - v19 + 1; /*0x485e2f*/
                v79 = v83; /*0x485e3a*/
              }
            }
            v80 = v20; /*0x485e6e*/
            NeighbourContent[17] = 126; /*0x485f28*/
            v24 = Random::State((_DWORD *)g_ScenarioClass_Instance + 134); /*0x485f47*/
            *((_BYTE *)NeighbourContent + 286) = 3 * v73 + abs32(v24 % 3); /*0x485f69*/
            House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485f71*/
            v81[0] = DSurface_ViewBounds; /*0x485f81*/
            v81[1] = g_Map_VisibleRect; /*0x485f8f*/
            v25 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, v97); /*0x485fa5*/
            v26 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, v98); /*0x485faa*/
            if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
            {
              rcDst = *v26; /*0x48607b*/
            }
            else
            {
              right = v26->right; /*0x485fca*/
              if ( right <= 0 || (v73 = v26->bottom, v73 <= 0) ) /*0x485fdd*/
              {
                rcDst = *v25; /*0x48605e*/
              }
              else
              {
                left = v25->left; /*0x485fdf*/
                v28 = v26->left; /*0x485fe1*/
                v29 = v25->right; /*0x485fe3*/
                top = v25->top; /*0x485fe6*/
                bottom = v25->bottom; /*0x485fe9*/
                v21 = left <= v26->left; /*0x485fec*/
                v85 = v29; /*0x485fee*/
                if ( !v21 ) /*0x485ff5*/
                {
                  v29 += left - v28; /*0x485ff9*/
                  left = v28; /*0x485ffb*/
                  v85 = v29; /*0x485ffd*/
                }
                v32 = v26->top; /*0x486004*/
                v74 = v32; /*0x486009*/
                if ( top > v32 ) /*0x48600d*/
                {
                  bottom += top - v32; /*0x486011*/
                  top = v32; /*0x486013*/
                }
                if ( left + v29 >= v28 + right ) /*0x48601f*/
                  v33 = v85; /*0x48602d*/
                else
                  v33 = v28 - left + right + 1; /*0x486027*/
                if ( bottom + top < v74 + v73 ) /*0x486043*/
                  bottom = v74 + v73 - top + 1; /*0x486048*/
                rcDst.left = left; /*0x48604a*/
                rcDst.top = top; /*0x48604e*/
                rcDst.right = v33; /*0x486052*/
                rcDst.bottom = bottom; /*0x486056*/
              }
            }
            v34 = (int *)Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
            v54 = v34[3]; /*0x4860af*/
            v49 = v34[2]; /*0x4860b7*/
            v35 = CellStruct::Copy(v34, &v87); /*0x4860cb*/
            v36 = Coord2D::Sub(v35, &v92, v81); /*0x4860d2*/
            v37 = Rect::Construct(v94, v36, v49, v54); /*0x4860df*/
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
            v9 = v68; /*0x486129*/
            v1 = v76; /*0x48612d*/
          }
        }
        BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)(NeighbourContent + 9)); /*0x48627e*/
      }
      v9 += 2; /*0x486283*/
      v68 = v9; /*0x486289*/
      if ( v9 >= 8 ) /*0x48628d*/
      {
        BuildingClass::CreateIdleAnim((int)v1); /*0x486295*/
        goto LABEL_62; /*0x48629a*/
      }
    }
  }
  v1[286] = 2 * v1[284] + (abs32(Random::State((_DWORD *)g_ScenarioClass_Instance + 134)) & 1) + 51; /*0x4862c0*/
LABEL_62:
  v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v86); /*0x4862c6*/
  v48 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)v1, v93); /*0x4862f0*/
  House::GetStartCoords((int)v1, v91); /*0x4862fb*/
  v44 = (struct tagRECT *)Rect::Union(v48, &v90, v59); /*0x486309*/
  v45 = (int *)Rect::Union(v44, v52, v60); /*0x48631a*/
  v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
  House::AnnounceUpgrade((int)v1, -1); /*0x48636f*/
}



// ==== 0x00486380  Cell::IsEmpty  this=VectorClass  sig=csp ====
bool __thiscall Cell_IsEmpty(_DWORD *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x486380*/
  return v1 == 0xFFFF || !v1; /*0x486390*/
}



// ==== 0x004863A0  ObjectClass::method_4863A0  this=VectorClass  sig=csp ====
bool __thiscall sub_4863A0(int *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x4863a0*/
  return v1 >= g_CellTileLookup && v1 < g_CellTileLookup + 20 || v1 >= dword_AA1058 && v1 < dword_AA1058 + 12; /*0x4863c7*/
}



// ==== 0x004863D0  CellLand::IsBuildable  this=CellLand  sig=csp ====
bool __thiscall CellLand_IsBuildable(int this)
{
  int v1; // eax
  int v3; // eax
  char v4; // cl
  int v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char v9; // cl
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx

  if ( g_TerrainBuildConfig != -1 ) /*0x4863da*/
  {
    v1 = *(_DWORD *)(this + 56); /*0x4863dc*/
    if ( v1 >= g_TerrainBuildConfig && v1 < g_TerrainBuildConfig + 40 ) /*0x4863e8*/
      return 1; /*0x4863ed*/
  }
  if ( dword_AA073C == -1 || (v3 = *(_DWORD *)(this + 56), v3 < dword_AA073C) || v3 >= dword_AA073C + 4 ) /*0x486405*/
  {
    if ( dword_ABB110 == -1 || (v5 = *(_DWORD *)(this + 56), v5 < dword_ABB110) || v5 >= dword_ABB110 + 4 ) /*0x486448*/
    {
      if ( dword_AA1050 == -1 || (v7 = *(_DWORD *)(this + 56), v7 < dword_AA1050) || v7 >= dword_AA1050 + 4 ) /*0x48648c*/
      {
        if ( dword_AA10A0 == -1 || (v8 = *(_DWORD *)(this + 56), v8 < dword_AA10A0) || v8 >= dword_AA10A0 + 4 ) /*0x4864cf*/
        {
          if ( dword_ABBEBC != -1 ) /*0x486505*/
          {
            v10 = *(_DWORD *)(this + 56); /*0x486507*/
            if ( v10 >= dword_ABBEBC && v10 < dword_ABBEBC + 20 ) /*0x486513*/
              return 1; /*0x486518*/
          }
          if ( dword_ABAD24 != -1 ) /*0x486522*/
          {
            v11 = *(_DWORD *)(this + 56); /*0x486524*/
            if ( v11 >= dword_ABAD24 && v11 < dword_ABAD24 + 4 ) /*0x486530*/
              return 1; /*0x486535*/
          }
          if ( g_Cell_BuildabilityLUT != -1 ) /*0x48653f*/
          {
            v12 = *(_DWORD *)(this + 56); /*0x486541*/
            if ( v12 >= g_Cell_BuildabilityLUT && v12 < g_Cell_BuildabilityLUT + 16 ) /*0x48654d*/
              return 1; /*0x486552*/
          }
          if ( g_TerrainBridgeIndex != -1 ) /*0x48655c*/
          {
            v13 = *(_DWORD *)(this + 56); /*0x48655e*/
            if ( v13 >= g_TerrainBridgeIndex && v13 < g_TerrainBridgeIndex + 16 ) /*0x48656a*/
              return 1; /*0x48656f*/
          }
          if ( dword_ABC2C8 != -1 ) /*0x486579*/
          {
            v14 = *(_DWORD *)(this + 56); /*0x48657b*/
            if ( v14 >= dword_ABC2C8 && v14 < dword_ABC2C8 + 2 ) /*0x486587*/
              return 1; /*0x48658c*/
          }
          if ( dword_AA101C == -1 ) /*0x486595*/
            return 0; /*0x486595*/
          v15 = *(_DWORD *)(this + 56); /*0x486597*/
          if ( v15 < dword_AA101C || v15 >= dword_AA101C + 28 ) /*0x4865a3*/
            return 0; /*0x4865a3*/
        }
        else if ( v8 == dword_AA10A0 || v8 == dword_AA10A0 + 3 ) /*0x4864da*/
        {
          v9 = *(_BYTE *)(this + 282); /*0x4864e0*/
          return v9 != 2 && v9 != 3; /*0x4864f2*/
        }
      }
      else if ( v7 == dword_AA1050 || v7 == dword_AA1050 + 3 ) /*0x486497*/
      {
        return *(_BYTE *)(this + 282) >= 2u; /*0x4864a5*/
      }
    }
    else if ( v5 == dword_ABB110 || v5 == dword_ABB110 + 3 ) /*0x486453*/
    {
      v6 = *(_BYTE *)(this + 282); /*0x486459*/
      return v6 != 1 && v6 != 3; /*0x48646b*/
    }
    return 1; /*0x4865a8*/
  }
  if ( v3 != dword_AA073C && v3 != dword_AA073C + 3 ) /*0x486410*/
    return 1; /*0x486410*/
  v4 = *(_BYTE *)(this + 282); /*0x486416*/
  return v4 && v4 != 4; /*0x4863ec*/
}



// ==== 0x004865B0  CellClass::IsTerrainType  this=CellClass  sig=csp ====
bool __thiscall CellClass_IsTerrainType(int *this)
{
  int v1; // eax

  v1 = this->q038; /*0x4865b0*/
  return v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42; /*0x4865c6*/
}



// ==== 0x004865D0  Cell::IsGroundTypeRange  this=RandomMap  sig=csp ====
bool __thiscall sub_4865D0(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x4865d0*/
  if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x4865e2*/
    return 1; /*0x4865e4*/
  return v1 >= g_CellPassabilityLUT && v1 < g_CellPassabilityLUT + 14 /*0x48663a*/
      || v1 >= dword_AA073C && v1 < dword_AA073C + 4
      || v1 >= dword_ABB110 && v1 < dword_ABB110 + 4
      || v1 >= dword_AA1050 && v1 < dword_AA1050 + 4
      || v1 >= dword_AA10A0 && v1 < dword_AA10A0 + 4;
}



// ==== 0x00486650  CellClass::InMapDataRange  this=CellStruct  sig=csp ====
bool __thiscall CellClass_InMapDataRange(int *this)
{
  int v1; // eax

  v1 = this->q00E; /*0x486650*/
  return v1 >= dword_AA10A4 && v1 < dword_AA10A4 + 14; /*0x486666*/
}



// ==== 0x00486670  CellClass::InBounds  this=CellStruct  sig=csp ====
bool __thiscall CellClass_InBounds(int *this)
{
  int v1; // eax

  v1 = this->q00E; /*0x486670*/
  return v1 >= dword_ABC2B0 && v1 < dword_ABC2B0 + 16; /*0x486686*/
}



// ==== 0x004866D0  ObjectClass::method_4866D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866D0(int *this)
{
  int v1; // eax

  v1 = this->attachedBomb; /*0x4866d0*/
  return v1 >= g_CellTileTypeCache && v1 < g_CellTileTypeCache + 15; /*0x4866e6*/
}



// ==== 0x004866F0  ObjectClass::method_4866F0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866F0(int *this)
{
  int v1; // eax

  v1 = this->attachedBomb; /*0x4866f0*/
  return v1 >= dword_ABBEC4 && v1 < dword_ABBEC4 + 4; /*0x486706*/
}



// ==== 0x00486730  Value::InRange  this=VectorClass  sig=csp ====
bool __thiscall Value_InRange(int *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x486730*/
  return v1 >= dword_AA0E20 && v1 < dword_AA0E20 + 14; /*0x486746*/
}



// ==== 0x00486750  Cell::IsInRange  this=Cell  sig=csp ====
bool __thiscall Cell_IsInRange(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48676c*/
  if ( g_Cell_BuildabilityLUT != -1 ) /*0x486759*/
  {
    v1 = this->q038; /*0x48675b*/
    if ( v1 >= g_Cell_BuildabilityLUT && v1 < g_Cell_BuildabilityLUT + 16 ) /*0x486767*/
      return 1; /*0x486759*/
  }
  return result; /*0x48676b*/
}



// ==== 0x00486770  Cell::IsInRange2  this=Cell  sig=csp ====
bool __thiscall Cell_IsInRange2(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48678c*/
  if ( g_TerrainBridgeIndex != -1 ) /*0x486779*/
  {
    v1 = this->q038; /*0x48677b*/
    if ( v1 >= g_TerrainBridgeIndex && v1 < g_TerrainBridgeIndex + 16 ) /*0x486787*/
      return 1; /*0x486779*/
  }
  return result; /*0x48678b*/
}



// ==== 0x00486790  RandomMap::Check  this=RandomMap  sig=csp ====
bool __thiscall sub_486790(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x486790*/
  return v1 >= dword_AA0E24 && v1 < dword_AA0E24 + 16; /*0x4867a6*/
}



// ==== 0x004867B0  Cell::IsShore  this=RandomMap  sig=csp ====
bool __thiscall Cell_IsShore(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x4867b0*/
  return v1 == dword_AA0E18 || v1 >= dword_AA0748 && v1 < dword_AA0748 + 16; /*0x4867d0*/
}



// ==== 0x004867E0  CellClass::GetCellType  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt20(#378 *this)
{
  int result; // eax

  result = this->q038; /*0x4867e0*/
  LOBYTE(result) = result < g_CellPassabilityLUT || result >= g_CellPassabilityLUT + 14; /*0x4867f7*/
  return result; /*0x4867f6*/
}



// ==== 0x00486840  CellClass::GetOccupier  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt18(#378 *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]

  v2 = (*((__int16 *)this + 19) << 8) + 128; /*0x48685d*/
  v5[0] = (*((__int16 *)this + 18) << 8) + 128; /*0x486864*/
  v1 = v5[0]; /*0x486857*/
  v5[1] = v2; /*0x486868*/
  inited = Isometric::InitTables((int)this, v5); /*0x48686c*/
  *v6 = v1; /*0x486877*/
  v6[1] = v2; /*0x486879*/
  v6[2] = inited; /*0x48687e*/
  return (int)v6; /*0x48687c*/
}



// ==== 0x00486890  CellClass::CheckProperty  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt22(#378 *this)
{
  int v1; // esi
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v7; // ecx
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp+4h]

  if ( (this->wallOwnerIndex & 0x100) != 0 ) /*0x48689d*/
  {
    v1 = dword_89E7B4; /*0x4868a1*/
    v2 = (int *)(*(int (__thiscall **)(#378 *, _BYTE *))(this->q048)(this, v8); /*0x4868ad*/
    v3 = *v2; /*0x4868b0*/
    v4 = v2[1]; /*0x4868b2*/
    v5 = v1 + v2[2]; /*0x4868b8*/
    *v9 = v3; /*0x4868c0*/
    v9[1] = v4; /*0x4868c2*/
    v9[2] = v5; /*0x4868c5*/
    return (int)v9; /*0x4868c8*/
  }
  else
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(#378 *, _BYTE *))(this->q048)(this, v8); /*0x4868dc*/
    *v9 = *v7; /*0x4868e6*/
    v9[1] = v7[1]; /*0x4868eb*/
    v9[2] = v7[2]; /*0x4868f2*/
    return (int)v9; /*0x4868de*/
  }
}



// ==== 0x00486900  CellClass::IsActiveOrNext  this=AbstractClass  sig=csp ====
bool __thiscall CellClass_IsActiveOrNext(_DWORD *this)
{
  int v1; // eax

  v1 = this->q038; /*0x486900*/
  return v1 == dword_ABC2C8 || v1 == dword_ABC2C8 + 1; /*0x48690f*/
}



// ==== 0x00486920  BuildingClass::CreateIdleAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass_CreateIdleAnim(int this)
{
  float *v2; // esi
  void **v3; // ebp
  int inited; // eax
  float *v5; // [esp+Ch] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-18h]
  _DWORD v7[2]; // [esp+14h] [ebp-14h] BYREF
  int v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 68) == 126 /*0x486956*/
    && *(_BYTE *)(this + 286) >= 0x30u
    && !*(_BYTE *)(this + 284)
    && (*(_DWORD *)(this + 320) & 0x20000) == 0 )
  {
    v2 = *(float **)(this + 228); /*0x48695c*/
    v5 = v2; /*0x486964*/
    if ( v2 ) /*0x486968*/
    {
      while ( 1 ) /*0x486976*/
      {
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 456))(v2) <= 5 /*0x4869bd*/
          && ((_BYTE)v2[5] & 1) != 0
          && !*(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 132))(v2) + 3217)
          && !TechnoTypeClass::HasVoiceResponse(v2, 8) )
        {
          v3 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4869d4*/
          if ( v3 ) /*0x4869db*/
          {
            v6 = *(_DWORD *)(this + 36); /*0x4869e2*/
            v7[0] = 128; /*0x4869fd*/
            v7[1] = 128; /*0x486a01*/
            inited = Isometric::InitTables(this, v7); /*0x486a0a*/
            v8[1] = SHIWORD(v6) << 8; /*0x486a15*/
            v8[0] = (__int16)v6 << 8; /*0x486a23*/
            v8[2] = inited; /*0x486a2c*/
            AnimClass::ctor(v3, *((void **)g_RulesClass_Instance + 58), v8, 0, 1, (void *)0x600, 0, 0); /*0x486a42*/
            v2 = v5; /*0x486a47*/
          }
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x486a4b*/
        }
        v5 = (float *)*((_DWORD *)v2 + 12); /*0x486a5a*/
        if ( !v5 ) /*0x486a5e*/
          break; /*0x486a5e*/
        v2 = (float *)*((_DWORD *)v2 + 12); /*0x486972*/
      }
    }
  }
}



// ==== 0x00486A70  CellClass::CreateFoggedObjects  this=CellClass  sig=csp ====
char __thiscall sub_486A70(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  int *v5; // edi
  _DWORD *v6; // esi
  char v7; // al
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  _BYTE v12[4]; // [esp+1Ch] [ebp-4h] BYREF

  LOBYTE(v1) = (_BYTE)g_ScenarioClass_Instance; /*0x486a70*/
  if ( (*(_DWORD *)g_ScenarioClass_Instance & 0x1000) != 0 ) /*0x486a7d*/
  {
    v2 = 1; /*0x486a89*/
    v9 = this->smudgeTypeIndex; /*0x486a8f*/
    for ( i = 1; i <= 15; i += 2 ) /*0x486a93*/
    {
      v3 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v9); /*0x486aa8*/
      v1 = *((char *)v3 + 283); /*0x486aad*/
      if ( v1 >= v2 - 2 && v1 <= v2 ) /*0x486abe*/
      {
        v1 = v3[80]; /*0x486ac4*/
        if ( (v1 & 0x400000) == 0 ) /*0x486ad1*/
        {
          v4 = __2_YAPAXI_Z(0x18u); /*0x486ad9*/
          if ( v4 ) /*0x486ae3*/
          {
            v4[1] = 0; /*0x486ae5*/
            v4[2] = 0; /*0x486ae8*/
            *((_BYTE *)v4 + 12) = 1; /*0x486aeb*/
            *((_BYTE *)v4 + 13) = 0; /*0x486aef*/
            *v4 = &DynamicVectorClass<FoggedObjectClass *>::`vftable'; /*0x486af2*/
            v4[5] = 10; /*0x486af8*/
            v4[4] = 0; /*0x486aff*/
            v5 = v4; /*0x486b02*/
          }
          else
          {
            v5 = 0; /*0x486b06*/
          }
          LOBYTE(v1) = (*(int (__thiscall **)(int *, int, _DWORD))(*v5 + 8))(v5, 1, 0); /*0x486b0f*/
          v5[5] = 1; /*0x486b12*/
          v6 = (_DWORD *)v3[57]; /*0x486b21*/
          for ( v3[80] |= 0x400000u; v6; v6 = (_DWORD *)v6[12] ) /*0x486b2f*/
          {
            v1 = (*(int (__stdcall **)(_DWORD *))(v6[1] + 12))(v6 + 1); /*0x486b38*/
            if ( v1 == 6 ) /*0x486b3e*/
            {
              (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 440))(v6, v12); /*0x486b49*/
              LOBYTE(v1) = sub_457A10((_DWORD **)v6); /*0x486b51*/
              if ( (_BYTE)v1 ) /*0x486b58*/
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 128))(v6) /*0x486b75*/
                  || (v7 = *((_BYTE *)v6 + 1773), LOBYTE(v10) = 1, v7 == 15) )
                {
                  LOBYTE(v10) = 0; /*0x486b77*/
                }
                LOBYTE(v1) = BuildingClass::CreateFoggedObjects(v6, (int)v5, v3, v10); /*0x486b84*/
              }
            }
            else if ( v1 == 1 || v1 == 2 || v1 == 15 ) /*0x486b98*/
            {
              LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *))(*v6 + 336))(v6); /*0x486b9e*/
            }
          }
          if ( v5[4] <= 0 ) /*0x486bae*/
          {
            if ( v5 ) /*0x486bb7*/
              LOBYTE(v1) = (*(int (__thiscall **)(int *, int))*v5)(v5, 1); /*0x486bbf*/
          }
          else
          {
            v3[10] = v5; /*0x486bb0*/
          }
        }
      }
      LOWORD(v9) = v9 + 1; /*0x486bc5*/
      ++HIWORD(v9); /*0x486bca*/
      v2 = i + 2; /*0x486bcf*/
    }
  }
  return v1; /*0x486be3*/
}



// ==== 0x00486BF0  CellClass::UpdateZone  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellClass_UpdateZone(_DWORD *this)
{
  int i; // esi
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = this->ptr_24; /*0x486bf5*/
  for ( i = 1; i < 15; i += 2 ) /*0x486bf9*/
  {
    result = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v4); /*0x486c08*/
    v3 = *((char *)result + 283); /*0x486c0d*/
    if ( v3 >= i - 2 && v3 <= i ) /*0x486c1d*/
    {
      result[80] &= ~0x400000u; /*0x486c2b*/
      result = (_DWORD *)CellClass::ClearCellContents(result); /*0x486c33*/
    }
    LOWORD(v4) = v4 + 1; /*0x486c38*/
    ++HIWORD(v4); /*0x486c3d*/
  }
  return result; /*0x486c4a*/
}



// ==== 0x00486C50  CellClass::ClearCellContents  this=AbstractClass  sig=csp ====
int __thiscall sub_486C50(int *this)
{
  int result; // eax
  int i; // ebp
  __int16 *j; // edi
  __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  __int16 v8; // dx
  int *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+8h] [ebp-18h]
  __int16 v17; // [esp+Ah] [ebp-16h]
  int v18; // [esp+Ch] [ebp-14h]
  _DWORD v19[4]; // [esp+10h] [ebp-10h] BYREF

  result = this->q028; /*0x486c56*/
  if ( result ) /*0x486c5b*/
  {
    for ( i = *(_DWORD *)(result + 16) - 1; i >= 0; --i ) /*0x486c66*/
    {
      v15 = *(_DWORD **)(*(_DWORD *)(this->q028 + 4) + 4 * i); /*0x486c77*/
      if ( CellClass::recalcPassability((int)v15) ) /*0x486c7b*/
      {
        for ( j = (__int16 *)CellClass::recalcPassability((int)v15); ; j += 2 ) /*0x486c91*/
        {
          v5 = *j; /*0x486c93*/
          if ( *j == 0x7FFF && j[1] == 0x7FFF ) /*0x486ca1*/
            break; /*0x486ca1*/
          v6 = v15[13]; /*0x486cae*/
          v7 = v15[14]; /*0x486cb0*/
          v19[3] = v15[15]; /*0x486cb6*/
          v16 = v6 / 256; /*0x486cc6*/
          v8 = j[1]; /*0x486cd6*/
          v17 = v7 / 256; /*0x486cdd*/
          LOWORD(v18) = v16 + v5; /*0x486cef*/
          HIWORD(v18) = v17 + v8; /*0x486cf4*/
          v19[0] = v18; /*0x486d03*/
          v9 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)v19); /*0x486d07*/
          if ( v9 != this ) /*0x486d0e*/
          {
            v10 = (_DWORD *)v9[10]; /*0x486d10*/
            if ( v10 ) /*0x486d15*/
            {
              v11 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*v10 + 16))(v10, &v15); /*0x486d20*/
              if ( v11 != -1 ) /*0x486d26*/
              {
                v12 = v10[4]; /*0x486d28*/
                if ( v11 < v12 ) /*0x486d2d*/
                {
                  v13 = v12 - 1; /*0x486d2f*/
                  for ( v10[4] = v13; v11 < v10[4]; *(_DWORD *)(v10[1] + 4 * v11 - 4) = *(_DWORD *)(v10[1] + 4 * v11) ) /*0x486d35*/
                    ++v11; /*0x486d3a*/
                }
              }
            }
          }
        }
      }
      if ( v15 ) /*0x486d57*/
        (*(void (__thiscall **)(_DWORD *, int))(*v15 + 32))(v15, 1); /*0x486d5d*/
    }
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 12))(this->q028); /*0x486d6e*/
    v14 = (int (__thiscall ***)(_DWORD, int))this->q028; /*0x486d71*/
    if ( v14 ) /*0x486d77*/
      result = (**v14)(v14, 1); /*0x486d7d*/
    this->q028 = 0; /*0x486d7f*/
  }
  return result; /*0x486d86*/
}



// ==== 0x00486D90  ObjectClass::method_486D90  this=SpeedType  sig=csp ====
int __thiscall sub_486D90(_DWORD *this, char a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*(this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      v10 = *(this + 9); /*0x486dca*/
      LOWORD(v11) = LOWORD(Direction_X_Offsets[v9]) + v10; /*0x486dee*/
      HIWORD(v11) = HIWORD(v10) + HIWORD(Direction_X_Offsets[v9]); /*0x486df3*/
      v10 = v11; /*0x486e02*/
      v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v10); /*0x486e06*/
    }
    else
    {
      v8 = this; /*0x486dbe*/
    }
    if ( (v3 & v8[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/
}



// ==== 0x00486E30  ObjectClass::Helper_486E30  this=ObjectClass  sig=csp ====
int __thiscall sub_486E30(__int16 *this)
{
  __int16 *v2; // edi
  void *v3; // eax
  _DWORD *v5; // eax

  v2 = this + 18; /*0x486e34*/
  v3 = (void *)Helper_486E30_Helper(this + 18); /*0x486e39*/
  if ( v3 ) /*0x486e40*/
  {
    RandomMap::RemoveMatching(v3, (int)this); /*0x486e45*/
  }
  else
  {
    v5 = CellCoord::To_CellObj(&MapClass_Instance, v2); /*0x486e55*/
    CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
  }
  return 0; /*0x486e4a*/
}



// ==== 0x00486E70  BuildingClass::CreatePlacementCrater  this=AbstractClass  sig=csp ====
char __thiscall BuildingClass_CreatePlacementCrater(void *this)
{
  int *ScreenRect; // edi
  int *StartCoords; // eax
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int *PlacementRect; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v19; // [esp+14h] [ebp-3Ch]
  int v20; // [esp+1Ch] [ebp-34h]
  int v21[4]; // [esp+20h] [ebp-30h] BYREF
  int v22[4]; // [esp+30h] [ebp-20h] BYREF
  int v23[4]; // [esp+40h] [ebp-10h] BYREF

  ScreenRect = CellClass::GetScreenRect((int)this, v21); /*0x486e8b*/
  StartCoords = House::GetStartCoords((int)this, v22); /*0x486e90*/
  if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 ) /*0x486ea1*/
  {
    v5 = *StartCoords; /*0x486f19*/
    v7 = StartCoords[1]; /*0x486f1b*/
    v8 = StartCoords[2]; /*0x486f1e*/
    v9 = StartCoords[3]; /*0x486f21*/
  }
  else
  {
    v4 = StartCoords[2]; /*0x486ea3*/
    if ( v4 <= 0 || (v20 = StartCoords[3], v20 <= 0) ) /*0x486eb7*/
    {
      v5 = *ScreenRect; /*0x486f0c*/
      v7 = ScreenRect[1]; /*0x486f0e*/
      v8 = ScreenRect[2]; /*0x486f11*/
      v9 = ScreenRect[3]; /*0x486f14*/
    }
    else
    {
      v5 = *ScreenRect; /*0x486eb9*/
      v6 = *StartCoords; /*0x486ebb*/
      v7 = ScreenRect[1]; /*0x486ebd*/
      v8 = ScreenRect[2]; /*0x486ec0*/
      v9 = ScreenRect[3]; /*0x486ec3*/
      if ( v5 > *StartCoords ) /*0x486ec8*/
      {
        v8 += v5 - v6; /*0x486ecc*/
        v5 = *StartCoords; /*0x486ece*/
      }
      v10 = StartCoords[1]; /*0x486ed0*/
      if ( v7 > v10 ) /*0x486ed9*/
      {
        v9 += v7 - v10; /*0x486edd*/
        v7 = v10; /*0x486edf*/
      }
      if ( v8 + v5 < v6 + v4 ) /*0x486ee8*/
        v8 = v6 - v5 + v4 + 1; /*0x486ef0*/
      if ( v9 + v7 < v20 + v10 ) /*0x486f03*/
        v9 = v20 + v10 - v7 + 1; /*0x486f08*/
    }
  }
  PlacementRect = BuildingClass::GetPlacementRect((int)this, v23); /*0x486f2d*/
  if ( v8 <= 0 || v9 <= 0 ) /*0x486f38*/
  {
    v5 = *PlacementRect; /*0x486f9e*/
    v15 = PlacementRect[1]; /*0x486fa0*/
    v8 = PlacementRect[2]; /*0x486fa3*/
    v16 = PlacementRect[3]; /*0x486fa6*/
  }
  else
  {
    v12 = PlacementRect[2]; /*0x486f3a*/
    if ( v12 > 0 ) /*0x486f43*/
    {
      v19 = PlacementRect[3]; /*0x486f4a*/
      if ( v19 > 0 ) /*0x486f4e*/
      {
        v13 = *PlacementRect; /*0x486f50*/
        if ( v5 > *PlacementRect ) /*0x486f54*/
        {
          v8 += v5 - v13; /*0x486f5a*/
          v5 = *PlacementRect; /*0x486f5c*/
        }
        v14 = PlacementRect[1]; /*0x486f5e*/
        if ( v7 > v14 ) /*0x486f67*/
        {
          v9 += v7 - v14; /*0x486f6b*/
          v7 = v14; /*0x486f6d*/
        }
        if ( v8 + v5 < v13 + v12 ) /*0x486f76*/
          v8 = v13 - v5 + v12 + 1; /*0x486f7e*/
        if ( v9 + v7 < v14 + v19 ) /*0x486f91*/
          v9 = v14 + v19 - v7 + 1; /*0x486f96*/
      }
    }
    v15 = v7; /*0x486f98*/
    v16 = v9; /*0x486f9a*/
  }
  Cell::CreateCrater(v5 - DSurface_ViewBounds, v15 - g_Map_VisibleRect, v8, v16, 0); /*0x486fd1*/
  return BuildingClass::AddUpgrade((int)&MapClass_Instance, (int)this + 36); /*0x486fe8*/
}



// ==== 0x00486FF0  Cell::IsBuildableAdvanced  this=Cell  sig=csp ====
char __thiscall Cell_IsBuildableAdvanced(int this)
{
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi

  if ( !Type::CheckAmbiguity(&MapClass_Instance, this, 1) ) /*0x486ffc*/
    return 1; /*0x487009*/
  v3 = *(_DWORD *)(this + 56); /*0x48700a*/
  if ( v3 >= 0 && v3 < g_TechnoClassCount && !*(_BYTE *)(*((_DWORD *)g_FrameCounter + v3) + 773) /*0x48703f*/
    || *(_BYTE *)(this + 284)
    || (*(_DWORD *)(this + 320) & 0x500) != 0 )
  {
    return 0; /*0x48703f*/
  }
  if ( !g_WTFMode ) /*0x487048*/
    return 1; /*0x487048*/
  v4 = *(_DWORD **)(this + 228); /*0x48704a*/
  if ( v4 ) /*0x487052*/
  {
    while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 6 ) /*0x48705e*/
    {
      v4 = (_DWORD *)v4[12]; /*0x487060*/
      if ( !v4 ) /*0x487065*/
        goto LABEL_14; /*0x487065*/
    }
    return 0; /*0x48705e*/
  }
LABEL_14:
  if ( !g_WTFMode ) /*0x487074*/
    return 1; /*0x487074*/
  v5 = *(_DWORD **)(this + 228); /*0x487076*/
  if ( !v5 ) /*0x48707e*/
    return 1; /*0x4870a0*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 36 ) /*0x48708a*/
  {
    v5 = (_DWORD *)v5[12]; /*0x48708c*/
    if ( !v5 ) /*0x487091*/
      return 1; /*0x487097*/
  }
  return 0; /*0x487005*/
}



// ==== 0x004870B0  Cell::HasOccupierBit  this=IUnknown  sig=csp ====
BOOL __thiscall Cell_HasOccupierBit(_DWORD *this, char a2)
{
  return ((1 << a2) & this->q1E0) != 0; /*0x4870c8*/
}



// ==== 0x004870D0  Cell::IsPassableOffset  this=IUnknown  sig=csp ====
BOOL __thiscall Cell_IsPassableOffset(_WORD *this, int a2)
{
  return *(this + a2 + 62) > 0; /*0x4870de*/
}



// ==== 0x004870F0  HouseClass::HasType  this=HouseClass  sig=csp ====
BOOL __thiscall HouseClass_HasType(_WORD *this, int a2)
{
  return *(this + a2 + 86) > 0; /*0x487101*/
}



// ==== 0x00487110  BuildingClass::checkOccupant  this=IUnknown  sig=csp ====
_DWORD *__thiscall sub_487110(_DWORD *this, char a2)
{
  this->q1E0 |= 1 << a2; /*0x48711d*/
  return this; /*0x487120*/
}



// ==== 0x00487130  BuildingClass::updateOccupiedState  this=IUnknown  sig=csp ====
_DWORD *__thiscall sub_487130(_DWORD *this, char a2)
{
  this->q1E0 &= ~(1 << a2); /*0x487144*/
  return this; /*0x487147*/
}



// ==== 0x00487150  FootClass::checkTerrainSpeed  this=IUnknown  sig=csp ====
int __thiscall sub_487150(_WORD *this, int a2)
{
  ++*(this + a2 + 62); /*0x487154*/
  return a2; /*0x487159*/
}



// ==== 0x00487160  FootClass::updateLocomotion  this=IUnknown  sig=csp ====
int __thiscall sub_487160(_WORD *this, int a2)
{
  --*(this + a2 + 62); /*0x487164*/
  return a2; /*0x487169*/
}



// ==== 0x00487170  BuildingClass::processGarrison  this=BuildingClass  sig=csp ====
int __thiscall sub_487170(_WORD *this, int a2)
{
  ++*(this + a2 + 86); /*0x487174*/
  return a2; /*0x48717c*/
}



// ==== 0x00487180  BuildingClass::evaulateDefense  this=BuildingClass  sig=csp ====
int __thiscall sub_487180(_WORD *this, int a2)
{
  --*(this + a2 + 86); /*0x487184*/
  return a2; /*0x48718c*/
}



// ==== 0x00487190  Crate::FindPlacement  this=IUnknown  sig=csp ====
char __thiscall Crate::FindPlacement(int this, int a2, int a3)
{
  _DWORD *v4; // edi
  #374 *v5; // ebp
  int v6; // eax
  #374 *v7; // ebp
  int v8; // eax
  int *v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  int *v12; // eax
  int *v13; // eax
  int BuildingByTiberiumType; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  int v18; // edi
  int *ScreenRect; // ebx
  int *v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // ebp
  int v24; // edx
  int v25; // ebx
  bool v26; // cc
  int v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // ecx
  int *v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int *v37; // eax
  int v38; // [esp-Ch] [ebp-A0h]
  struct tagRECT *StartCoords; // [esp-8h] [ebp-9Ch]
  int v40; // [esp-8h] [ebp-9Ch]
  const RECT *PlacementRect; // [esp-4h] [ebp-98h]
  LPRECT v42; // [esp-4h] [ebp-98h]
  const RECT *v43; // [esp+0h] [ebp-94h]
  const RECT *v44; // [esp+0h] [ebp-94h]
  const RECT *v45; // [esp+4h] [ebp-90h]
  int v46; // [esp+10h] [ebp-84h] BYREF
  int v47[2]; // [esp+14h] [ebp-80h] BYREF
  int v48; // [esp+1Ch] [ebp-78h]
  int v49; // [esp+20h] [ebp-74h]
  int v50; // [esp+24h] [ebp-70h] BYREF
  int v51; // [esp+28h] [ebp-6Ch]
  int v52[4]; // [esp+34h] [ebp-60h] BYREF
  int v53[4]; // [esp+44h] [ebp-50h] BYREF
  int v54[4]; // [esp+54h] [ebp-40h] BYREF
  int v55[4]; // [esp+64h] [ebp-30h] BYREF
  int v56[4]; // [esp+74h] [ebp-20h] BYREF
  int v57[4]; // [esp+84h] [ebp-10h] BYREF

  v4 = *(_DWORD **)&BuildingClass_InstanceArray->gap0[4 * a2]; /*0x4871af*/
  v54[0] = (int)v4; /*0x4871b2*/
  if ( a3 >= v4[57] ) /*0x4871bc*/
    return 0; /*0x4871bc*/
  if ( IsCoordValidMap(this, (int)v4) ) /*0x4871c3*/
  {
    if ( *(_BYTE *)(this + 284) ) /*0x4871d0*/
    {
      v5 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x4871e4*/
      if ( v5 ) /*0x4871eb*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x4871fa*/
        v6 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 1); /*0x487208*/
        Object::SpawnAtCell( /*0x48723f*/
          v5,
          *(_DWORD *)&g_BuildingTypeClass_Array->gap0[8 * *(unsigned __int8 *)(this + 284)
                                                    - 8
                                                    + 4 * v6
                                                    + 4 * v4[58]
                                                    + 4 * *(_DWORD *)(v4[56] + 660)],
          (__int16 *)&v46,
          -1);
      }
    }
    else
    {
      v7 = (#374 *)__2_YAPAXI_Z(0xB0u); /*0x487246*/
      if ( v7 ) /*0x48724d*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x487258*/
        v8 = Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 11); /*0x487266*/
        Object::SpawnAtCell( /*0x48728c*/
          v7,
          *(_DWORD *)&g_BuildingTypeClass_Array->gap0[4 * v8 + 4 * *(_DWORD *)(v4[56] + 660)],
          (__int16 *)&v46,
          -1);
      }
    }
    CellClass::RegisterForRedraw((int)v4, (__int16 *)(this + 36)); /*0x487297*/
    *(_BYTE *)(this + 286) = a3; /*0x4872a0*/
    PlacementRect = (const RECT *)BuildingClass::GetPlacementRect(this, v53); /*0x4872b2*/
    StartCoords = (struct tagRECT *)House::GetStartCoords(this, v54); /*0x4872bb*/
    CellClass::GetScreenRect(this, v52); /*0x4872c3*/
    Rect::Union(StartCoords, PlacementRect, v43); /*0x4872ce*/
    v9 = (int *)Rect::Union(v42, v44, v45); /*0x4872d9*/
    v47[0] = *v9; /*0x4872ea*/
    v47[1] = v9[1]; /*0x4872f7*/
    v48 = v9[2]; /*0x4872fe*/
    v10 = v9[3]; /*0x487302*/
    v54[0] = DSurface_ViewBounds; /*0x487305*/
    v49 = v10; /*0x487309*/
    v40 = v10; /*0x48730d*/
    v38 = v48; /*0x487312*/
    v54[1] = g_Map_VisibleRect; /*0x487322*/
    v11 = CellStruct::Copy(v47, &v50); /*0x487326*/
    v12 = Coord2D::Sub(v11, v52, v54); /*0x48732d*/
    v13 = Rect::Construct(v55, v12, v38, v40); /*0x487337*/
    Cell::CreateCrater(*v13, v13[1], v13[2], v13[3], 0); /*0x48735d*/
    BuildingClass::AddUpgrade((int)&MapClass_Instance, this + 36); /*0x487368*/
    return 1; /*0x487379*/
  }
  if ( !*((_BYTE *)g_ScenarioClass_Instance + 13478) ) /*0x487382*/
    return 0; /*0x487382*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x487393*/
  if ( BuildingByTiberiumType == -1 ) /*0x48739b*/
    return 0; /*0x48739b*/
  v16 = *(_DWORD *)&BuildingClass_InstanceArray->gap0[4 * BuildingByTiberiumType]; /*0x4873af*/
  if ( *(_BYTE *)(this + 284) /*0x4873f0*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v16 + 228) - 1
    || *(double *)(v16 + 176) < 0.00001
    || FindBuildingByTiberiumType(*(_DWORD *)(this + 68)) != a2 )
  {
    return 0; /*0x487621*/
  }
  v17 = a3 + *(_BYTE *)(this + 286); /*0x4873fc*/
  *(_BYTE *)(this + 286) = v17; /*0x4873fe*/
  v18 = v4[57]; /*0x487404*/
  if ( v17 >= v18 - 1 ) /*0x487414*/
    v17 = v18 - 1; /*0x487416*/
  *(_BYTE *)(this + 286) = v17; /*0x487418*/
  ScreenRect = CellClass::GetScreenRect(this, v55); /*0x487431*/
  v20 = House::GetStartCoords(this, v57); /*0x487436*/
  if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 ) /*0x48744b*/
  {
    v21 = *v20; /*0x4874e5*/
    v29 = v20[2]; /*0x4874e7*/
    v25 = v20[3]; /*0x4874ea*/
    v51 = v20[1]; /*0x4874ed*/
  }
  else
  {
    v46 = v20[2]; /*0x487456*/
    if ( v46 <= 0 || (v52[0] = v20[3], v52[0] <= 0) ) /*0x487465*/
    {
      v30 = ScreenRect[1]; /*0x4874d1*/
      v21 = *ScreenRect; /*0x4874d4*/
      v29 = ScreenRect[2]; /*0x4874d6*/
      v25 = ScreenRect[3]; /*0x4874d9*/
      v51 = v30; /*0x4874dc*/
    }
    else
    {
      v21 = *ScreenRect; /*0x487467*/
      v22 = *v20; /*0x487469*/
      v23 = ScreenRect[2]; /*0x48746b*/
      v24 = ScreenRect[1]; /*0x48746e*/
      v25 = ScreenRect[3]; /*0x487471*/
      v26 = v21 <= *v20; /*0x487474*/
      v48 = v23; /*0x487476*/
      if ( !v26 ) /*0x48747a*/
      {
        v23 += v21 - v22; /*0x48747e*/
        v21 = v22; /*0x487480*/
        v48 = v23; /*0x487482*/
      }
      v27 = v20[1]; /*0x487486*/
      v50 = v27; /*0x48748b*/
      if ( v24 > v27 ) /*0x48748f*/
      {
        v25 += v24 - v27; /*0x487493*/
        v24 = v27; /*0x487495*/
      }
      if ( v21 + v23 >= v22 + v46 ) /*0x4874a1*/
        v28 = v48; /*0x4874af*/
      else
        v28 = v22 - v21 + v46 + 1; /*0x4874a9*/
      if ( v25 + v24 < v52[0] + v50 ) /*0x4874c2*/
        v25 = v52[0] + v50 - v24 + 1; /*0x4874c7*/
      v51 = v24; /*0x4874c9*/
      v29 = v28; /*0x4874cd*/
    }
  }
  v31 = BuildingClass::GetPlacementRect(this, v56); /*0x4874f8*/
  if ( v29 <= 0 || v25 <= 0 ) /*0x487507*/
  {
    v21 = *v31; /*0x487599*/
    v36 = v31[1]; /*0x48759b*/
    v29 = v31[2]; /*0x48759e*/
    v35 = v31[3]; /*0x4875a1*/
  }
  else
  {
    v46 = v31[2]; /*0x487512*/
    if ( v46 <= 0 || (v52[0] = v31[3], v52[0] <= 0) ) /*0x487521*/
    {
      v36 = v51; /*0x487591*/
      v35 = v25; /*0x487595*/
    }
    else
    {
      v32 = *v31; /*0x487523*/
      v33 = v51; /*0x487525*/
      v26 = v21 <= *v31; /*0x487529*/
      v47[0] = v21; /*0x48752b*/
      v49 = v25; /*0x48752f*/
      if ( v26 ) /*0x487533*/
      {
        v21 = v47[0]; /*0x48753f*/
      }
      else
      {
        v29 += v21 - v32; /*0x487539*/
        v21 = v32; /*0x48753b*/
      }
      v34 = v31[1]; /*0x487543*/
      v50 = v34; /*0x487548*/
      if ( v51 > v34 ) /*0x48754c*/
      {
        v33 = v34; /*0x487556*/
        v49 += v51 - v34; /*0x487558*/
      }
      if ( v21 + v29 < v32 + v46 ) /*0x487567*/
        v29 = v32 - v21 + v46 + 1; /*0x48756f*/
      v35 = v49; /*0x48757d*/
      if ( v49 + v33 < v50 + v52[0] ) /*0x487586*/
        v35 = v50 + v52[0] - v33 + 1; /*0x48758b*/
      v36 = v33; /*0x48758d*/
    }
  }
  v53[1] = v36; /*0x4875a4*/
  v52[1] = g_Map_VisibleRect; /*0x4875ae*/
  v53[3] = v35; /*0x4875b6*/
  v53[0] = v21; /*0x4875cb*/
  v53[2] = v29; /*0x4875cf*/
  v52[0] = DSurface_ViewBounds; /*0x4875d3*/
  v37 = Bounds::Subtract(v53, v56, v52); /*0x4875d7*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x4875fd*/
  BuildingClass::AddOccupancy(v54[0], (__int16 *)(this + 36)); /*0x48760a*/
  return 1; /*0x48736f*/
}



// ==== 0x00487630  DisplayClass::UpdateDisplayTimer  this=DisplayClass  sig=csp ====
char __thiscall sub_487630(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax

  if ( this->q130 == 1 ) /*0x487637*/
    this->q130 = 0; /*0x487639*/
  v1 = this->q130 - 1; /*0x487649*/
  this->q130 = v1; /*0x48764a*/
  v2 = v1; /*0x487650*/
  v3 = this->q12C; /*0x487652*/
  if ( (v3 & 8) != 0 && (v3 & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      v3 = this->q140; /*0x487671*/
      if ( (*(_BYTE *)(this + 80) & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(v3) = v3 & 0xDF; /*0x487681*/
        this->q140 = v3; /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(v3) = v3 | 0x18; /*0x487664*/
    this->q12C = v3; /*0x487666*/
  }
  return v3; /*0x48766c*/
}



// ==== 0x00487690  DisplayClass::AdvanceFrameCounter  this=DisplayClass  sig=csp ====
int __thiscall sub_487690(int *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edx
  int result; // eax

  v1 = this->q04C; /*0x487691*/
  if ( v1 == -1 ) /*0x48769a*/
    this->q04C = 0; /*0x48769c*/
  v2 = this->q04C + 1; /*0x4876ac*/
  this->q04C = v2; /*0x4876ad*/
  v3 = v2; /*0x4876b3*/
  result = this->q134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->q04C = result; /*0x4876bf*/
  if ( v1 <= 0 ) /*0x4876c8*/
  {
    result = this->q04C; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = this->q050; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->q050 = result; /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/
}



// ==== 0x004876F0  CellClass::Unshroud  this=CellClass  sig=csp ====
int __thiscall CellClass::Unshroud(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = this->copyFlags; /*0x4876f0*/
  LOBYTE(v1) = v1 | 0x18; /*0x4876f6*/
  this->copyFlags = v1; /*0x4876f8*/
  result = this->CellClass_field_4C; /*0x4876fe*/
  if ( result > 0 ) /*0x487706*/
  {
    result = this->wallOwnerIndex; /*0x487708*/
    LOBYTE(result) = result | 0x20; /*0x48770e*/
    this->wallOwnerIndex = result; /*0x487710*/
  }
  return result; /*0x487716*/
}



// ==== 0x00487720  TechnoClass::ApplySplashDamageToNeighbors  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ApplySplashDamageToNeighbors(int this)
{
  __int16 *v1; // edi
  char result; // al
  int v3; // ecx
  __int16 v4; // ax
  __int16 *v5; // eax
  int *v6; // esi
  int v7; // edx
  int *v8; // esi
  int v9; // edx
  int *v10; // [esp+58h] [ebp-2Ch]
  int *v11; // [esp+58h] [ebp-2Ch]
  int v12; // [esp+5Ch] [ebp-28h]
  int v13; // [esp+60h] [ebp-24h]
  int v15; // [esp+68h] [ebp-1Ch]
  int v16; // [esp+6Ch] [ebp-18h] BYREF
  int v17; // [esp+70h] [ebp-14h] BYREF
  __int16 *v18; // [esp+74h] [ebp-10h] BYREF
  int v19; // [esp+78h] [ebp-Ch] BYREF
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v1 = (__int16 *)this; /*0x487727*/
  result = *(_BYTE *)(this + 296); /*0x48772d*/
  if ( result ) /*0x487735*/
  {
    v3 = *(__int16 *)(this + 38) << 8; /*0x48774d*/
    v19 = (v1[18] << 8) + 128; /*0x487756*/
    v20 = v3 + 128; /*0x48775e*/
    v21 = 0; /*0x487768*/
    v12 = -2; /*0x487777*/
    v21 = dword_89E7B4 + Cell::GetGroundHeight(&v19); /*0x487781*/
    do /*0x487934*/
    {
      v4 = -2; /*0x487785*/
      v15 = -2; /*0x48778a*/
      do /*0x487922*/
      {
        HIWORD(v13) = v4 + v1[19]; /*0x48779e*/
        LOWORD(v13) = v12 + v1[18]; /*0x4877a3*/
        v16 = v13; /*0x4877b0*/
        v5 = (__int16 *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v16); /*0x4877ba*/
        v18 = v5; /*0x4877c1*/
        if ( v5 != v1 ) /*0x4877c5*/
        {
          v6 = (int *)*((_DWORD *)v5 + 58); /*0x4877cb*/
          if ( v6 ) /*0x4877d3*/
          {
            do /*0x487864*/
            {
              v10 = (int *)v6[12]; /*0x4877de*/
              if ( v6 && (v6[5] & 4) != 0 ) /*0x4877f0*/
              {
                if ( !v6[413] ) /*0x4877f2*/
                  WinAPI::Wrapper(-2147467261); /*0x48780d*/
                if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(_DWORD *)v6[413] + 160))( /*0x487828*/
                       v6[413],
                       v19,
                       v20,
                       v21) )
                {
                  v7 = *v6; /*0x487835*/
                  v17 = v6[27]; /*0x487837*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, int, _DWORD))(v7 + 364))( /*0x487858*/
                    v6,
                    &v17,
                    0,
                    g_RulesClass_Instance->SilverCrate[5],
                    0,
                    1,
                    1,
                    0);
                }
              }
              v6 = v10; /*0x48785e*/
            }
            while ( v10 ); /*0x487864*/
            v5 = v18; /*0x48786a*/
            v1 = (__int16 *)this; /*0x48786e*/
          }
          v8 = (int *)*((_DWORD *)v5 + 57); /*0x487872*/
          if ( v8 ) /*0x48787a*/
          {
            do /*0x48790c*/
            {
              v11 = (int *)v8[12]; /*0x487885*/
              if ( v8 && (v8[5] & 4) != 0 ) /*0x487898*/
              {
                if ( !v8[413] ) /*0x48789a*/
                  WinAPI::Wrapper(-2147467261); /*0x4878b5*/
                if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(_DWORD *)v8[413] + 160))( /*0x4878d0*/
                       v8[413],
                       v19,
                       v20,
                       v21) )
                {
                  v9 = *v8; /*0x4878dd*/
                  v18 = (__int16 *)v8[27]; /*0x4878df*/
                  (*(void (__thiscall **)(int *, __int16 **, _DWORD, int, _DWORD, int, int, _DWORD))(v9 + 364))( /*0x487900*/
                    v8,
                    &v18,
                    0,
                    g_RulesClass_Instance->SilverCrate[5],
                    0,
                    1,
                    1,
                    0);
                }
              }
              v8 = v11; /*0x487906*/
            }
            while ( v11 ); /*0x48790c*/
            v1 = (__int16 *)this; /*0x487912*/
          }
        }
        v4 = ++v15; /*0x48791a*/
      }
      while ( v15 < 3 ); /*0x487922*/
      result = ++v12; /*0x48792c*/
    }
    while ( v12 < 3 ); /*0x487934*/
  }
  return result; /*0x48793a*/
}



// ==== 0x00487950  CellClass::QuickPassable  this=IUnknown  sig=csp ====
bool __thiscall CellClass_QuickPassable(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->ptr_24 << 8) + 128; /*0x48796f*/
  v2 = ((__int16)HIWORD(this->ptr_24) << 8) + 128; /*0x487971*/
  v5[0] = 128; /*0x487973*/
  v5[1] = 128; /*0x487977*/
  inited = Isometric::InitTables((int)this, v5); /*0x487980*/
  v6[0] = v1; /*0x487989*/
  v6[1] = v2; /*0x487993*/
  v6[2] = inited; /*0x487997*/
  return Cell::IsPassable(v6); /*0x4879a0*/
}



// ==== 0x004879B0  ObjectClass::method_4879B0  this=ObjectClass  sig=csp ====
char __thiscall sub_4879B0(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->objectTypeFlags << 8) + 128; /*0x4879cf*/
  v2 = ((__int16)HIWORD(this->objectTypeFlags) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/
}



// ==== 0x00487A10  Cell::SearchEnemies  this=AbstractClass  sig=csp ====
int __thiscall Cell_SearchEnemies(int this, int a2)
{
  _DWORD *v3; // esi
  char v4; // bl
  _DWORD *v5; // ebp
  int v6; // edx
  int v7; // ebx
  int v8; // ebp
  _DWORD *v9; // eax
  int *v10; // esi
  bool v11; // zf
  int v12; // edx
  int result; // eax
  int v14; // [esp+70h] [ebp-1Ch]
  int v15; // [esp+74h] [ebp-18h]
  _DWORD v16[2]; // [esp+78h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+80h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)(this + 228); /*0x487a19*/
  if ( v3 ) /*0x487a21*/
  {
    v4 = a2; /*0x487a27*/
    while ( 1 ) /*0x487a2d*/
    {
      v5 = (_DWORD *)v3[12]; /*0x487a2d*/
      if ( (*(int (__thiscall **)(_DWORD *, int, int, int, _DWORD, int))(*v3 + 428))(v3, this, -1, -1, 0, 1) == 7 ) /*0x487a44*/
        goto LABEL_10; /*0x487a44*/
      if ( !v4 ) /*0x487a48*/
        goto LABEL_8; /*0x487a48*/
      if ( v3 ) /*0x487a4c*/
        break; /*0x487a4c*/
LABEL_11:
      v3 = v5; /*0x487aa4*/
      if ( !v5 ) /*0x487aa8*/
        goto LABEL_12; /*0x487aa8*/
    }
    if ( (v3[5] & 1) == 0 || !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3) + 3476) ) /*0x487a5e*/
    {
LABEL_8:
      if ( !v3 || (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 2 ) /*0x487a76*/
        goto LABEL_11; /*0x487a76*/
    }
LABEL_10:
    v6 = *v3; /*0x487a78*/
    a2 = v3[27]; /*0x487a84*/
    (*(void (__thiscall **)(_DWORD *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v6 + 364))( /*0x487a9e*/
      v3,
      &a2,
      0,
      *((_DWORD *)g_RulesClass_Instance + 1002),
      0,
      1,
      1,
      0);
    goto LABEL_11; /*0x487a9e*/
  }
LABEL_12:
  a2 = *(_DWORD *)(this + 36); /*0x487aaa*/
  Coord::Subtract(v17, ((__int16)a2 << 8) + 128, (SHIWORD(a2) << 8) + 128, 0); /*0x487ad0*/
  v16[0] = 128; /*0x487adc*/
  v16[1] = 128; /*0x487ae0*/
  v7 = Isometric::InitTables(v16); /*0x487ae9*/
  v14 = -2; /*0x487aeb*/
  do /*0x487bff*/
  {
    v8 = -2; /*0x487af3*/
    v16[0] = -2; /*0x487af8*/
    do /*0x487bed*/
    {
      HIWORD(v15) = v8 + *(_WORD *)(this + 38); /*0x487b0c*/
      LOWORD(v15) = v14 + *(_WORD *)(this + 36); /*0x487b11*/
      a2 = v15; /*0x487b1e*/
      v9 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&a2); /*0x487b28*/
      if ( v9 != (_DWORD *)this ) /*0x487b2f*/
      {
        v10 = (int *)v9[57]; /*0x487b35*/
        if ( v10 ) /*0x487b3d*/
        {
          do /*0x487bdb*/
          {
            v11 = (v10[5] & 4) == 0; /*0x487b49*/
            LOBYTE(a2) = (v10[5] & 4) != 0; /*0x487b4c*/
            if ( !v11 ) /*0x487b50*/
            {
              if ( !v10[413] ) /*0x487b56*/
                WinAPI::Wrapper(-2147467261); /*0x487b65*/
              if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v10[413] + 160))( /*0x487b88*/
                     v10[413],
                     v17[0],
                     v17[1],
                     v7) )
              {
                if ( (*(int (__thiscall **)(int *, int, int, int, _DWORD, int))(*v10 + 428))(v10, this, -1, -1, 0, 1) == 7 ) /*0x487ba8*/
                {
                  v12 = *v10; /*0x487bb2*/
                  a2 = v10[27]; /*0x487bb6*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v12 + 364))( /*0x487bd0*/
                    v10,
                    &a2,
                    0,
                    *((_DWORD *)g_RulesClass_Instance + 1002),
                    0,
                    1,
                    1,
                    0);
                }
              }
            }
            v10 = (int *)v10[12]; /*0x487bd6*/
          }
          while ( v10 ); /*0x487bdb*/
          v8 = v16[0]; /*0x487be1*/
        }
      }
      v16[0] = ++v8; /*0x487be9*/
    }
    while ( v8 < 3 ); /*0x487bed*/
    result = ++v14; /*0x487bf7*/
  }
  while ( v14 < 3 ); /*0x487bff*/
  return result; /*0x487c05*/
}



// ==== 0x00487C10  BuildingClass::CheckC4Active  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_CheckC4Active(int this)
{
  _DWORD *v3; // esi

  if ( *(_BYTE *)(this + 284) ) /*0x487c14*/
    return 0; /*0x487c1f*/
  if ( !g_WTFMode ) /*0x487c2a*/
    return byte_89EA60[36 * *(_DWORD *)(this + 236)]; /*0x487c2a*/
  v3 = *(_DWORD **)(this + 228); /*0x487c2c*/
  if ( !v3 ) /*0x487c34*/
    return byte_89EA60[36 * *(_DWORD *)(this + 236)]; /*0x487c49*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 6 ) /*0x487c40*/
  {
    v3 = (_DWORD *)v3[12]; /*0x487c42*/
    if ( !v3 ) /*0x487c47*/
      return byte_89EA60[36 * *(_DWORD *)(this + 236)]; /*0x487c47*/
  }
  return 0; /*0x487c1e*/
}



// ==== 0x00487C70  TerrainClass::SetFieldF8  this=CellStruct  sig=csp ====
int __thiscall TerrainClass::SetFieldF8(_DWORD *this, int a2)
{
  this->q0F8 = a2; /*0x487c74*/
  return a2; /*0x487c7a*/
}



// ==== 0x00487C80  ObjectClass::?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(
        Concurrency::details::SchedulerBase *this)
{
  return this->q0F8; /*0x487c86*/
}



// ==== 0x00487CB0  Cell::GetTraversability  this=Cell  sig=csp ====
__int64 __thiscall Cell_GetTraversability(double *this)
{
  double v1; // st7

  v1 = (double)*((int *)g_RulesClass_Instance + 1539); /*0x487cb5*/
  if ( this->q01E < v1 ) /*0x487cc8*/
    v1 = this->q01E; /*0x487ccc*/
  return Math::RoundToInt(v1);
}



// ==== 0x00487CE0  CellClass::RadLevel_Increase  this=CellStruct  sig=csp ====
void __thiscall CellClass::RadLevel_Increase(double *this, double a2)
{
  this->q01E = a2 + this->q01E; /*0x487cea*/
}



// ==== 0x00487D00  CellClass::RadLevel_Decrease  this=CellStruct  sig=csp ====
void __thiscall CellClass::RadLevel_Decrease(int this, double a2)
{
  double v2; // st7

  v2 = *(double *)(this + 240) - a2; /*0x487d06*/
  *(double *)(this + 240) = v2; /*0x487d0a*/
  if ( v2 >= 0.0 ) /*0x487d1d*/
  {
    *(double *)(this + 240) = v2; /*0x487d38*/
  }
  else
  {
    *(_DWORD *)(this + 240) = 0; /*0x487d1f*/
    *(_DWORD *)(this + 244) = 0; /*0x487d29*/
  }
}



// ==== 0x00487D50  Cell::GetSlopeIndex  this=IUnknown  sig=csp ====
int __thiscall Cell_GetSlopeIndex(int this)
{
  return *(char *)(this + 283) + 4 * ((*(_DWORD *)(this + 320) >> 7) & 1); /*0x487d66*/
}



// ==== 0x00487D70  CellClass::AttachObject  this=AbstractClass  sig=csp ====
char __thiscall CellClass_AttachObject(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = this->q0E0; /*0x487d77*/
  if ( a2 ) /*0x487d7f*/
  {
    if ( !v3 || v3 == a2 ) /*0x487dc0*/
    {
      this->q0E0 = a2; /*0x487dc8*/
      if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x487dd3*/
        FootClass::Jumpjet_OccupyCell(this->q024); /*0x487dd9*/
      return 1; /*0x487dde*/
    }
    else
    {
      return 0; /*0x487dc2*/
    }
  }
  else
  {
    if ( v3 ) /*0x487d83*/
    {
      if ( (*(_BYTE *)(v3 + 20) & 4) != 0 ) /*0x487d89*/
        FootClass::Jumpjet_OccupyCell(dword_89E748); /*0x487da5*/
    }
    this->q0E0 = 0; /*0x487daa*/
    return 1; /*0x487db4*/
  }
}



// ==== 0x00487DF0  Cell::IsBridge2  this=Building  sig=csp ====
bool __thiscall Cell_IsBridge2(_DWORD *this)
{
  return *(this + 59) == 5; /*0x487dfa*/
}



// ==== 0x00487E00  MovementAI::IsPathMovementAllowed  this=MovementAI  sig=csp ====
bool __thiscall sub_487E00(_DWORD *this)
{
  _DWORD *v2; // esi

  if ( !g_WTFMode ) /*0x487e0b*/
    return this->q100 != 0; /*0x487e0b*/
  v2 = (_DWORD *)this->u32_E4; /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return this->q100 != 0; /*0x487e15*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (_DWORD *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->q100 != 0; /*0x487e28*/
  }
  return this->q100 != 1 && this->q100 != 0; /*0x487e48*/
}



// ==== 0x00487E50  AbstractClass::compareType  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_487E50(int a1)
{
  return 11; /*0x487e55*/
}



// ==== 0x00487E60  CellClass::StubReturn11  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt11(#378 *this)
{
  return 11; /*0x487e65*/
}



// ==== 0x00487E70  CellClass::StubReturn328  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt12(#378 *this)
{
  return 328; /*0x487e75*/
}



// ==== 0x00487E80  CellClass::CopyTo  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt08(#378 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  CellClass::DTOR(this); /*0x487e83*/
  if ( (v3 & 1) != 0 ) /*0x487e8d*/
    __3_YAXPAX_Z(this); /*0x487e90*/
  return (int)this; /*0x487e9a*/
}



// ==== 0x00487EA0  NeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall Coord_Neighbor(_DWORD *a1, _WORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  LOWORD(v5) = *a2 + LOWORD(Direction_X_Offsets[v4]); /*0x487ec4*/
  HIWORD(v5) = a2[1] + HIWORD(Direction_X_Offsets[v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}



// ==== 0x00487EE0  Bounds::Subtract  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Bounds_Subtract(int *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = this->vtable2; /*0x487ee0*/
  v4 = *this; /*0x487ee3*/
  v5 = this->vtable3; /*0x487ef1*/
  v6 = this->vtable4; /*0x487ef4*/
  v7 = v3 - a3[1]; /*0x487ef7*/
  *a2 = v4 - *a3; /*0x487f01*/
  a2[1] = v7; /*0x487f06*/
  a2[2] = v5; /*0x487f09*/
  a2[3] = v6; /*0x487f0d*/
  return a2; /*0x487f05*/
}



// ==== 0x00487F20  Coord2D::Sub  this=IUnknown  sig=csp ====
int *__thiscall Coord2D_Sub(_DWORD *this, int *a2, _DWORD *a3)
{
  int v3; // edx
  int v5; // ecx

  v3 = *this - *a3; /*0x487f2c*/
  v5 = this->ptr_4 - a3[1]; /*0x487f35*/
  *a2 = v3; /*0x487f38*/
  a2[1] = v5; /*0x487f3a*/
  return a2; /*0x487f37*/
}



// ==== 0x00487F40  Rect::Union  this=IUnknown  sig=csp ====
BOOL __stdcall Rect::Union(LPRECT lprcDst, const RECT *lprcSrc1, const RECT *lprcSrc2)
{
  LONG *v3; // edx
  struct tagRECT *v4; // ecx
  struct tagRECT *v5; // edi
  LONG v7; // edi
  LONG left; // esi
  LONG v9; // ebx
  int v10; // ebp
  int v11; // edx
  LONG top; // ecx
  LONG bottom; // [esp+Ch] [ebp-8h]
  struct tagRECT *v15; // [esp+10h] [ebp-4h]
  LPRECT lprcDsta; // [esp+18h] [ebp+4h]

  v5 = v4; /*0x487f48*/
  v15 = v4; /*0x487f4c*/
  if ( v3[2] <= 0 || v3[3] <= 0 ) /*0x487f5b*/
  {
    *v4 = *lprcDst; /*0x488012*/
    return (BOOL)v4; /*0x488026*/
  }
  else
  {
    lprcDsta = (LPRECT)lprcDst->right; /*0x487f6a*/
    if ( (int)lprcDsta <= 0 || (bottom = lprcDst->bottom, bottom <= 0) ) /*0x487f79*/
    {
      v5->left = *v3; /*0x487ff0*/
      v5->top = v3[1]; /*0x487ff5*/
      v5->right = v3[2]; /*0x487ffb*/
      v5->bottom = v3[3]; /*0x488001*/
      return (BOOL)v5; /*0x487fec*/
    }
    else
    {
      v7 = *v3; /*0x487f7b*/
      left = lprcDst->left; /*0x487f7d*/
      v9 = v3[1]; /*0x487f80*/
      v10 = v3[2]; /*0x487f84*/
      v11 = v3[3]; /*0x487f87*/
      if ( v7 > lprcDst->left ) /*0x487f8c*/
      {
        v10 += v7 - left; /*0x487f90*/
        v7 = lprcDst->left; /*0x487f92*/
      }
      top = lprcDst->top; /*0x487f94*/
      if ( v9 > top ) /*0x487f9d*/
      {
        v11 += v9 - top; /*0x487fa1*/
        v9 = top; /*0x487fa3*/
      }
      if ( v7 + v10 < (int)lprcDsta + left ) /*0x487fac*/
        v10 = (int)&lprcDsta->left + left - v7 + 1; /*0x487fb4*/
      if ( v11 + v9 < top + bottom ) /*0x487fc8*/
        v11 = top + bottom - v9 + 1; /*0x487fcd*/
      v15->left = v7; /*0x487fd5*/
      v15->top = v9; /*0x487fd7*/
      v15->right = v10; /*0x487fda*/
      v15->bottom = v11; /*0x487fe0*/
      return (BOOL)v15; /*0x487fcf*/
    }
  }
}



// ==== 0x00488030  _DynamicVectorClass_PAVObjectClass::Constructor_VectorClass_ObjectClass___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall Buffer::sub_488030(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x488033*/
  *Block = &VectorClass<ObjectClass *>::`vftable'; /*0x488036*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x488040*/
  {
    __3_YAXPAX_Z(v3); /*0x488048*/
    *(Block + 1) = 0; /*0x488050*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48805b*/
  *(Block + 2) = 0; /*0x488061*/
  if ( (a2 & 1) != 0 ) /*0x488068*/
    __3_YAXPAX_Z(Block); /*0x48806b*/
  return Block; /*0x488075*/
}



// ==== 0x00488080  CellClass::clearOccupationFlags  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_488080(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x48808b*/
  this->Capacity = a2; /*0x48808e*/
  this->q030 = 1; /*0x488091*/
  this->q034 = 0; /*0x488095*/
  *this = &VectorClass<FoggedObjectClass *>::`vftable'; /*0x488098*/
  if ( a2 ) /*0x48809e*/
  {
    if ( a3 ) /*0x4880a6*/
    {
      this->Items = a3; /*0x4880a8*/
      return this; /*0x4880ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4880bd*/
    this->q034 = 1; /*0x4880c0*/
  }
  return this; /*0x4880ad*/
}



// ==== 0x004880D0  sub_4880D0  this=-  sig=ida-proto ====
int sub_4880D0()
{
  dword_89E7C8 = 0; /*0x4880d2*/
  dword_89E7CC = 0; /*0x4880d7*/
  dword_89E7D0 = 0; /*0x4880dc*/
  dword_89E7D4 = 0; /*0x4880e1*/
  return 0; /*0x4880e6*/
}



// ==== 0x004880F0  ObjectClass::method_4880F0  this=ObjectClass  sig=csp ====
int __thiscall sub_4880F0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v15; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((_DWORD *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x488110*/
  v3 = *(_DWORD *)(this + 16); /*0x488116*/
  v4 = *(_DWORD *)(this + 20); /*0x488119*/
  v15 = *(_DWORD *)(this + 12); /*0x48811c*/
  v5 = *(_DWORD *)(this + 24); /*0x488120*/
  v16 = v3; /*0x488123*/
  v17 = v4; /*0x488127*/
  v18 = v5; /*0x488133*/
  DrawBuildingTilesSHP(&v15, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 26); /*0x48815c*/
  v7 = *(_DWORD *)(this + 16) + 1; /*0x488167*/
  v15 = *(_DWORD *)(this + 12) + 1; /*0x488168*/
  v8 = *(_DWORD *)(this + 20); /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = *(_DWORD *)(this + 24) - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, &v15, v6); /*0x48818e*/
  if ( *(_BYTE *)(this + 45) ) /*0x488191*/
  {
    if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 8); /*0x4881b8*/
    v11 = *(_DWORD *)(this + 16) + 1; /*0x4881c3*/
    v15 = *(_DWORD *)(this + 12) + 1; /*0x4881c4*/
    v12 = *(_DWORD *)(this + 20); /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = *(_DWORD *)(this + 24) - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))(g_DSurface_Hidden_2, &v15, v10); /*0x4881ea*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x4881f5*/
  return 1; /*0x4881fd*/
}



// ==== 0x00488210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_488210(_BYTE *this, unsigned int a2, _DWORD *a3, int a4)
{
  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( this->q0B4 ) /*0x48821d*/
    {
      GadgetClass::Hide(this); /*0x488224*/
      return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x48823a*/
    }
    GadgetClass::Show(this); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x488238*/
}



// ==== 0x00488260  sub_488260  this=-  sig=ida-proto ====
int sub_488260()
{
  dword_89E7D8 = 0; /*0x488262*/
  dword_89E7DC = 0; /*0x488267*/
  dword_89E7E0 = 0; /*0x48826c*/
  dword_89E7E4 = 0; /*0x488271*/
  return 0; /*0x488276*/
}



// ==== 0x00488280  CheckListClass::method  this=CheckListClass  sig=csp ====
_BYTE *__thiscall sub_488280(_BYTE *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x4882ad*/
  this->q174 = 0; /*0x4882b2*/
  *(_DWORD *)this = &CheckListClass::`vftable'; /*0x4882b9*/
  return this; /*0x4882c1*/
}



// ==== 0x00488310  CheckListClass::?  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt34(_DWORD *this, int a2)
{
  _BYTE *v3; // eax

  v3 = __2_YAPAXI_Z(8u); /*0x488315*/
  if ( !v3 ) /*0x48831f*/
    return ListClass::AddItem(this, 0); /*0x48833c*/
  *(_DWORD *)v3 = a2; /*0x488326*/
  v3[4] = 0; /*0x48832a*/
  return ListClass::AddItem(this, (int)v3); /*0x488333*/
}



// ==== 0x00488350  CheckListClass::Clear  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt39(_DWORD *this)
{
  int v1; // eax

  v1 = ColorListClass::SetColor(this); /*0x488350*/
  if ( v1 ) /*0x488357*/
    return *(_DWORD *)v1; /*0x488359*/
  else
    return 0; /*0x48835c*/
}



// ==== 0x00488360  CheckListClass::ScrollUp  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt40(_DWORD *this, int a2)
{
  int Clamped; // eax

  Clamped = Array::GetClamped(this, a2); /*0x488365*/
  if ( Clamped ) /*0x48836c*/
    return *(_DWORD *)Clamped; /*0x48836e*/
  else
    return 0; /*0x488373*/
}



// ==== 0x00488380  CheckListClass::GetSelected  this=CheckListClass  sig=csp ====
void __thiscall CheckListClass::_vt43(unsigned int *this, wchar_t *String2)
{
  int v3; // ebx
  const wchar_t **Clamped; // eax
  const wchar_t **v5; // edi

  v3 = 0; /*0x488386*/
  if ( (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) > 0 ) /*0x488392*/
  {
    while ( 1 ) /*0x48839b*/
    {
      Clamped = (const wchar_t **)Array::GetClamped(this, v3); /*0x48839b*/
      v5 = Clamped; /*0x4883a0*/
      if ( Clamped ) /*0x4883a4*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x4883aa*/
          break; /*0x4883aa*/
      }
      if ( ++v3 >= (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) ) /*0x4883c3*/
        return; /*0x4883c3*/
    }
    ListClass::RemoveItem(this, v3); /*0x4883cf*/
    __3_YAXPAX_Z(v5); /*0x4883d5*/
  }
}



// ==== 0x004883F0  CheckListClass::SetItemData  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt45(_DWORD *this, wchar_t *String2)
{
  int v3; // edi
  int result; // eax
  const wchar_t **Clamped; // eax

  v3 = 0; /*0x4883f5*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this); /*0x4883f9*/
  if ( result > 0 ) /*0x488401*/
  {
    while ( 1 ) /*0x48840a*/
    {
      Clamped = (const wchar_t **)Array::GetClamped(this, v3); /*0x48840a*/
      if ( Clamped ) /*0x488411*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x488417*/
          break; /*0x488417*/
      }
      ++v3; /*0x488427*/
      result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this); /*0x488428*/
      if ( v3 >= result ) /*0x488430*/
        return result; /*0x488430*/
    }
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 184))(this, v3); /*0x48843d*/
  }
  return result; /*0x488432*/
}



// ==== 0x004884A0  CheckListClass::GetItem  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt31(int this, int a2, _DWORD *a3, int a4)
{
  int v6; // edi
  int Clamped; // eax
  char v8; // al
  char v9; // bl
  int v10; // eax

  if ( *(_BYTE *)(this + 372) ) /*0x4884a3*/
    return 0; /*0x4884ad*/
  v6 = CellClass::DrawWithFlags((_DWORD *)this, a2, a3, 0); /*0x4884cb*/
  if ( (a2 & 1) != 0 ) /*0x4884cd*/
  {
    Clamped = Array::GetClamped((_DWORD *)this, *(_DWORD *)(this + 364)); /*0x4884d8*/
    if ( Clamped ) /*0x4884df*/
      v8 = *(_BYTE *)(Clamped + 4); /*0x4884e1*/
    else
      v8 = 0; /*0x4884e6*/
    v9 = v8 == 0; /*0x4884f3*/
    v10 = Array::GetClamped((_DWORD *)this, *(_DWORD *)(this + 364)); /*0x4884f6*/
    if ( v10 ) /*0x4884fd*/
    {
      if ( *(_BYTE *)(v10 + 4) != v9 ) /*0x488502*/
      {
        *(_BYTE *)(v10 + 4) = v9; /*0x488504*/
        (*(void (__thiscall **)(int))(this->u32_48)(this); /*0x48850b*/
      }
    }
  }
  return v6; /*0x4884af*/
}



// ==== 0x00488520  CheckListClass::OnClick  this=CheckListClass  sig=csp ====
size_t *__userpurge CheckListClass::_vt50@<eax>(
        _DWORD *a1@<ecx>,
        const wchar_t *a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  size_t *result; // eax
  int v9; // edi
  int Type; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [esp-20h] [ebp-114h]
  size_t v16; // [esp-10h] [ebp-104h]
  int v17; // [esp-10h] [ebp-104h]
  _DWORD v18[4]; // [esp+4h] [ebp-F0h] BYREF
  _DWORD v19[2]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v20[16]; // [esp+1Ch] [ebp-D8h] BYREF
  _WORD v21[100]; // [esp+2Ch] [ebp-C8h] BYREF

  result = (size_t *)(*(int (__thiscall **)(_DWORD *))(*a1 + 148))(a1); /*0x48852b*/
  if ( a3 < (int)result )
  {
    result = (size_t *)Array::GetClamped(a1, a3); /*0x488543*/
    if ( result )
    {
      memset(&v21[1], 0, 198); /*0x488560*/
      v16 = *result; /*0x48856b*/
      v21[0] = *((_BYTE *)result + 4) != 0 ? 3 : 32;
      v21[1] = 32; /*0x48857e*/
      swprintf(&v21[2], v16, a2); /*0x488585*/
      v9 = a1[11]; /*0x48858a*/
      Type = BuildingAnim::GetType(); /*0x48859c*/
      if ( a7 ) /*0x4885a7*/
      {
        v9 |= 0x2000u; /*0x4885b4*/
        v11 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x4885c9*/
          v12 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + v11); /*0x4885d6*/
        else
          v12 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 2 * v11); /*0x4885e2*/
        v18[0] = a4; /*0x4885f4*/
        v18[3] = a1[19]; /*0x4885fb*/
        v18[1] = a5; /*0x488606*/
        v18[2] = a6; /*0x48860a*/
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))( /*0x488615*/
          g_DSurface_Hidden_2,
          v18,
          v12);
      }
      else if ( (v9 & 0x4000) == 0 ) /*0x488620*/
      {
        v9 |= 0x1000u; /*0x488622*/
      }
      v13 = a1[12]; /*0x48862f*/
      v19[0] = a4; /*0x488639*/
      v17 = v13; /*0x488643*/
      v19[1] = a5; /*0x488644*/
      v15 = *((_DWORD *)BuildingTypeClass_AnimTable + Type); /*0x488659*/
      v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v20); /*0x488662*/
      return FillRectangle(v18, (int)v21, g_DSurface_Hidden_2, v14, (int)v19, v15, 0, v9, a6, v17); /*0x488675*/
    }
  }
  return result; /*0x48867d*/
}



// ==== 0x00488690  GadgetClass::DetachPrimary  this=GadgetClass  sig=csp ====
void COMObject_DetachPrimary()
{
  dword_8B3E8C = 0; /*0x488690*/
}



// ==== 0x004886A0  GadgetClass::GetStateFlag  this=GadgetClass  sig=csp ====
char __thiscall ObjectClass_GetStateFlag(_BYTE *this)
{
  return this->q01C; /*0x4886a3*/
}



// ==== 0x004886B0  ListClass::COMStub  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt37(_DWORD *this)
{
  return this->q044; /*0x4886b3*/
}



// ==== 0x004886C0  CheckListClass::SelectItem  this=CheckListClass  sig=csp ====
char __thiscall CheckListClass::_vt42(unsigned int *this, signed int a2)
{
  return ListClass::RemoveItem(this, a2); /*0x4886ca*/
}



// ==== 0x004886D0  CheckListClass::SetFocus  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt46(int *this, unsigned int a2)
{
  return ColorListClass::Clear(this, a2); /*0x4886da*/
}



// ==== 0x004886E0  CheckListClass::QueryInterface  this=CheckListClass  sig=csp ====
unsigned int *__thiscall CheckListClass::_vt00(unsigned int *Block, char a2)
{
  void *Clamped; // edi

  *Block = (unsigned int)&CheckListClass::`vftable'; /*0x4886e3*/
  while ( *(Block + 17) ) /*0x4886e9*/
  {
    Clamped = (void *)Array::GetClamped(Block, 0); /*0x4886fe*/
    ListClass::RemoveItem(Block, 0); /*0x488700*/
    __3_YAXPAX_Z(Clamped); /*0x488706*/
  }
  ListClass::Destruct(Block); /*0x488718*/
  if ( (a2 & 1) != 0 ) /*0x488722*/
    __3_YAXPAX_Z(Block); /*0x488725*/
  return Block; /*0x48872f*/
}



// ==== 0x00488740  sub_488740  this=-  sig=ida-proto ====
int sub_488740()
{
  dword_89E7E8 = 0; /*0x488742*/
  dword_89E7EC = 0; /*0x488747*/
  dword_89E7F0 = 0; /*0x48874c*/
  dword_89E7F4 = 0; /*0x488751*/
  return 0; /*0x488756*/
}



// ==== 0x00488760  ColorListClass::method  this=ColorListClass  sig=csp ====
_DWORD *__thiscall sub_488760(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  ListClass::Construct((int)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x48878d*/
  this->q178 = 0; /*0x488799*/
  this->q17C = 0; /*0x48879f*/
  this->q600 = 1; /*0x4887a5*/
  this->q604 = 0; /*0x4887ab*/
  this->q174 = &DynamicVectorClass<int>::`vftable'; /*0x4887b1*/
  this->q188 = 10; /*0x4887bb*/
  this->q184 = 0; /*0x4887c5*/
  this->q190 = 0; /*0x4887cb*/
  this->q18C = 1; /*0x4887d1*/
  *this = &ColorListClass::`vftable'; /*0x4887d7*/
  return this; /*0x4887df*/
}



// ==== 0x004887F0  ColorListClass::method_4887F0  this=ColorListClass  sig=csp ====
int __thiscall sub_4887F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  void *v4; // eax

  v2 = this->q174; /*0x4887f5*/
  v3 = this + 93; /*0x4887fb*/
  *this = &ColorListClass::`vftable'; /*0x488803*/
  (*(void (__thiscall **)(_DWORD *))(v2 + 12))(this + 93); /*0x488809*/
  this->q190 = 0; /*0x48880e*/
  v4 = (void *)v3[1]; /*0x488814*/
  *v3 = &VectorClass<int>::`vftable'; /*0x488819*/
  if ( v4 && *((_BYTE *)v3 + 13) ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    v3[1] = 0; /*0x48882f*/
  }
  *((_BYTE *)v3 + 13) = 0; /*0x488834*/
  v3[2] = 0; /*0x488837*/
  return ListClass::Destruct(this); /*0x48883f*/
}



// ==== 0x00488850  ColorListClass::GetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt51(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  v4 = *(_DWORD *)(this + 380); /*0x488854*/
  if ( *(_DWORD *)(this + 388) < v4 /*0x488885*/
    || (*(_BYTE *)(this + 385) || !v4)
    && (v5 = *(_DWORD *)(this + 392), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 372) + 8))(this + 372, v4 + v5, 0) )
  {
    v6 = *(_DWORD *)(this + 388); /*0x48888c*/
    v7 = *(_DWORD *)(this + 376); /*0x48888f*/
    *(_DWORD *)(this + 388) = v6 + 1; /*0x488895*/
    *(_DWORD *)(v7 + 4 * v6) = a3; /*0x48889c*/
  }
  return ListClass::AddItem((_DWORD *)this, a2); /*0x4888ab*/
}



// ==== 0x004888B0  ColorListClass::AddColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt43(int *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(int *, int *))(this->q034 + 16))(this + 13, &a2); /*0x4888be*/
  if ( result != -1 ) /*0x4888c4*/
  {
    v4 = this->q184; /*0x4888c6*/
    if ( result < v4 ) /*0x4888ce*/
    {
      v5 = v4 - 1; /*0x4888d0*/
      for ( this->q184 = v5; /*0x4888d9*/
            result < this->q184;
            *(_DWORD *)(this->q178 + 4 * result - 4) = *(_DWORD *)(this->q178 + 4 * result) )
      {
        ++result; /*0x4888e1*/
      }
    }
    return ListClass::Destru_vt43(this, a2); /*0x4888fa*/
  }
  return result; /*0x4888ff*/
}



// ==== 0x00488910  ColorListClass::GetCount  this=ColorListClass  sig=csp ====
void __thiscall ColorListClass::_vt42(unsigned int *this, signed int a2)
{
  signed int v2; // eax
  unsigned int v3; // edx
  signed int v4; // eax

  if ( a2 != -1 ) /*0x488918*/
  {
    v2 = this->q184; /*0x48891a*/
    if ( a2 < v2 ) /*0x488922*/
    {
      v3 = v2 - 1; /*0x488924*/
      v4 = a2; /*0x488927*/
      for ( this->q184 = v3; /*0x488931*/
            v4 < (int)this->q184;
            *(_DWORD *)(this->q178 + 4 * v4 - 4) = *(_DWORD *)(this->q178 + 4 * v4) )
      {
        ++v4; /*0x48893a*/
      }
    }
    ListClass::RemoveItem(this, a2); /*0x48894e*/
  }
}



// ==== 0x00488960  ColorListClass::SetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt52(_DWORD *this, int a2, int a3)
{
  this->q18C = a2; /*0x488968*/
  this->q190 = a3; /*0x48896e*/
  return a2; /*0x488974*/
}



// ==== 0x00488980  ColorListClass::DrawColorRect  this=ColorListClass  sig=csp ====
_DWORD *__thiscall ColorListClass::DrawColorRect(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  int v8; // eax
  _DWORD *result; // eax
  int v10; // ecx
  int v11; // ecx
  int *v12; // ebx
  int v13; // eax
  int v14; // eax
  int *v15; // edi
  int v16; // eax
  int *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // edi
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  bool v29; // zf
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // edi
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // [esp-14h] [ebp-124h]
  int v48; // [esp-14h] [ebp-124h]
  int v49; // [esp-14h] [ebp-124h]
  int v50; // [esp-14h] [ebp-124h]
  int v51; // [esp-10h] [ebp-120h]
  int v52; // [esp-10h] [ebp-120h]
  int v53; // [esp-10h] [ebp-120h]
  int v54; // [esp-Ch] [ebp-11Ch]
  int v55; // [esp-Ch] [ebp-11Ch]
  int v56; // [esp-Ch] [ebp-11Ch]
  int v57; // [esp-Ch] [ebp-11Ch]
  int v58; // [esp-8h] [ebp-118h]
  int v59; // [esp-8h] [ebp-118h]
  int v60; // [esp-8h] [ebp-118h]
  int v61; // [esp-4h] [ebp-114h]
  int v62; // [esp-4h] [ebp-114h]
  int v63; // [esp-4h] [ebp-114h]
  int v64; // [esp-4h] [ebp-114h]
  int v65; // [esp+10h] [ebp-100h] BYREF
  int v66; // [esp+14h] [ebp-FCh]
  int v67; // [esp+18h] [ebp-F8h] BYREF
  _DWORD v68[2]; // [esp+1Ch] [ebp-F4h] BYREF
  int v69; // [esp+24h] [ebp-ECh] BYREF
  _DWORD v70[3]; // [esp+28h] [ebp-E8h] BYREF
  int v71; // [esp+34h] [ebp-DCh] BYREF
  _DWORD v72[2]; // [esp+38h] [ebp-D8h] BYREF
  _DWORD v73[4]; // [esp+40h] [ebp-D0h] BYREF
  _DWORD v74[4]; // [esp+50h] [ebp-C0h] BYREF
  _DWORD v75[4]; // [esp+60h] [ebp-B0h] BYREF
  _DWORD v76[4]; // [esp+70h] [ebp-A0h] BYREF
  int v77; // [esp+80h] [ebp-90h] BYREF
  int v78; // [esp+88h] [ebp-88h] BYREF
  int v79; // [esp+90h] [ebp-80h] BYREF
  int v80; // [esp+98h] [ebp-78h] BYREF
  int v81; // [esp+A0h] [ebp-70h] BYREF
  int v82; // [esp+A8h] [ebp-68h] BYREF
  _BYTE v83[20]; // [esp+B0h] [ebp-60h] BYREF
  _BYTE v84[12]; // [esp+C4h] [ebp-4Ch] BYREF
  _BYTE v85[20]; // [esp+D0h] [ebp-40h] BYREF
  _BYTE v86[12]; // [esp+E4h] [ebp-2Ch] BYREF
  _BYTE v87[20]; // [esp+F0h] [ebp-20h] BYREF
  _BYTE v88[12]; // [esp+104h] [ebp-Ch] BYREF

  if ( a6 ) /*0x488992*/
  {
    v10 = this->q064; /*0x488a1b*/
    if ( !v10 ) /*0x488a2a*/
      v10 = a2; /*0x488a2c*/
    result = (_DWORD *)this->q18C; /*0x488a2e*/
    switch ( (unsigned int)result ) /*0x488a3d*/
    {
      case 0u: /*0x488a3d*/
        v11 = this->q00C; /*0x488a52*/
        v65 = a3; /*0x488a55*/
        v66 = a4; /*0x488a60*/
        v62 = v11; /*0x488a67*/
        v55 = this->q02C; /*0x488a72*/
        v12 = (int *)(4 * a2 + this->q038); /*0x488a80*/
        v48 = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(this->q178 + 4 * a2)); /*0x488a89*/
        v13 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v83); /*0x488a9b*/
        result = FillRectangle(&v82, *v12, g_DSurface_Hidden_2, v13, (int)&v65, v48, 0, v55, a5, v62); /*0x488aae*/
        break; /*0x488abd*/
      case 1u: /*0x488a3d*/
        v14 = this->q02C; /*0x488ac0*/
        if ( (v14 & 6) != 0 ) /*0x488acc*/
        {
          v72[0] = a3; /*0x488ace*/
          v72[1] = a4; /*0x488ad9*/
          BYTE1(v14) |= 0x20u; /*0x488ae0*/
          v15 = (int *)(this->q038 + 4 * a2); /*0x488ae3*/
          v63 = this->q00C; /*0x488ae9*/
          v56 = v14; /*0x488af2*/
          v49 = *((_DWORD *)BuildingTypeClass_AnimTable + v10); /*0x488b01*/
          v16 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v85); /*0x488b13*/
          result = FillRectangle(&v81, *v15, g_DSurface_Hidden_2, v16, (int)v72, v49, 0, v56, a5, v63); /*0x488b26*/
        }
        else
        {
          v70[0] = a3; /*0x488b38*/
          v70[1] = a4; /*0x488b43*/
          v17 = (int *)(this->q038 + 4 * a2); /*0x488b4a*/
          v64 = this->q00C; /*0x488b50*/
          v57 = v14; /*0x488b59*/
          v50 = *((_DWORD *)BuildingTypeClass_AnimTable + v10); /*0x488b68*/
          v18 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v87); /*0x488b7a*/
          result = FillRectangle(&v78, *v17, g_DSurface_Hidden_2, v18, (int)v70, v50, 0, v57, a5, v64); /*0x488b8d*/
        }
        break; /*0x488b35*/
      case 2u: /*0x488a3d*/
        v19 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v10) + 788); /*0x488ba8*/
        v20 = *(_DWORD *)(g_FileSystem_THEATER_PAL + 372); /*0x488bb9*/
        if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x488bbf*/
          v21 = *(unsigned __int8 *)(v20 + v19); /*0x488bc3*/
        else
          v21 = *(unsigned __int16 *)(v20 + 2 * v19); /*0x488bca*/
        v22 = this->q04C; /*0x488be8*/
        v74[2] = a3 + a5 - 2; /*0x488beb*/
        v74[0] = a3; /*0x488bef*/
        v74[1] = a4; /*0x488bfd*/
        v74[3] = v22 + a4 - 2; /*0x488c01*/
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 88))( /*0x488c0c*/
          g_DSurface_Hidden_2,
          v74,
          v21);
        v23 = this->q02C; /*0x488c1a*/
        v24 = this->q038; /*0x488c24*/
        v25 = this->q178; /*0x488c28*/
        v71 = a3; /*0x488c2e*/
        v72[0] = a4; /*0x488c32*/
        v58 = v23; /*0x488c3b*/
        v51 = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v25 + 4 * a2)); /*0x488c51*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x488c5d*/
        result = FillRectangle( /*0x488c71*/
                   &v80,
                   *(_DWORD *)(4 * a2 + v24),
                   g_DSurface_Hidden_2,
                   v26,
                   (int)v84,
                   (int)&v71,
                   v51,
                   0,
                   v58,
                   a6);
        break; /*0x488c80*/
      case 3u: /*0x488a3d*/
        v27 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + v10) + 788); /*0x488c91*/
        v28 = *(_DWORD *)(g_FileSystem_THEATER_PAL + 4); /*0x488c9c*/
        if ( (*(_BYTE *)(this + 11) & 6) != 0 ) /*0x488c9f*/
        {
          v29 = v28 == 1; /*0x488ca5*/
          v30 = *(_DWORD *)(g_FileSystem_THEATER_PAL + 372); /*0x488ca8*/
          if ( v29 ) /*0x488cae*/
            v31 = *(unsigned __int8 *)(v30 + v27); /*0x488cb2*/
          else
            v31 = *(unsigned __int16 *)(v30 + 2 * v27); /*0x488cb9*/
          v32 = this->q04C; /*0x488cd2*/
          v75[2] = a5; /*0x488cd5*/
          v75[0] = a3; /*0x488ce0*/
          v75[1] = a4; /*0x488ce4*/
          v75[3] = v32; /*0x488ce8*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))( /*0x488cf3*/
            g_DSurface_Hidden_2,
            v75,
            v31);
          v33 = this->q02C; /*0x488d01*/
          v34 = this->q038; /*0x488d0b*/
          v35 = this->q178; /*0x488d0f*/
          BYTE1(v33) |= 0x20u; /*0x488d15*/
          v69 = a3; /*0x488d18*/
          v70[0] = a4; /*0x488d1c*/
          v59 = v33; /*0x488d25*/
          v52 = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v35 + 4 * a2)); /*0x488d3b*/
          v36 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x488d47*/
          result = FillRectangle( /*0x488d5b*/
                     &v77,
                     *(_DWORD *)(4 * a2 + v34),
                     g_DSurface_Hidden_2,
                     v36,
                     (int)v86,
                     (int)&v69,
                     v52,
                     0,
                     v59,
                     a6);
        }
        else
        {
          v29 = v28 == 1; /*0x488d6d*/
          v37 = *(_DWORD *)(g_FileSystem_THEATER_PAL + 372); /*0x488d70*/
          if ( v29 ) /*0x488d76*/
            v38 = *(unsigned __int8 *)(v37 + v27); /*0x488d7a*/
          else
            v38 = *(unsigned __int16 *)(v37 + 2 * v27); /*0x488d81*/
          v39 = this->q04C - 1; /*0x488d9e*/
          v76[2] = a5 - 1; /*0x488d9f*/
          v76[0] = a3; /*0x488daa*/
          v76[1] = a4; /*0x488dae*/
          v76[3] = v39; /*0x488db2*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))( /*0x488dc0*/
            g_DSurface_Hidden_2,
            v76,
            v38);
          v40 = this->q02C; /*0x488dce*/
          v41 = this->q038; /*0x488dd8*/
          v42 = this->q178; /*0x488ddc*/
          v68[0] = a3; /*0x488de2*/
          v68[1] = a4; /*0x488de6*/
          v60 = v40; /*0x488def*/
          v53 = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(v42 + 4 * a2)); /*0x488e05*/
          v43 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2); /*0x488e11*/
          result = FillRectangle( /*0x488e25*/
                     &v79,
                     *(_DWORD *)(4 * a2 + v41),
                     g_DSurface_Hidden_2,
                     v43,
                     (int)v88,
                     (int)v68,
                     v53,
                     0,
                     v60,
                     a6);
        }
        break; /*0x488d6a*/
      case 4u: /*0x488a3d*/
        v44 = *(_DWORD *)(*((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(this->q178 + 4 * a2)) + 788); /*0x488e4e*/
        if ( *(_DWORD *)(g_FileSystem_THEATER_PAL + 4) == 1 ) /*0x488e5a*/
          v45 = *(unsigned __int8 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + v44); /*0x488e67*/
        else
          v45 = *(unsigned __int16 *)(*(_DWORD *)(g_FileSystem_THEATER_PAL + 372) + 2 * v44); /*0x488e73*/
        v73[0] = a3; /*0x488e85*/
        v73[1] = a4; /*0x488e90*/
        v46 = this->q04C; /*0x488e94*/
        v73[2] = a5; /*0x488e97*/
        v73[3] = v46; /*0x488ea2*/
        result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)g_DSurface_Hidden_2 + 20))( /*0x488ead*/
                             g_DSurface_Hidden_2,
                             v73,
                             v45);
        break; /*0x488ead*/
      default:
        return result;
    }
  }
  else
  {
    v7 = this->q038; /*0x4889ad*/
    v65 = a3; /*0x4889b0*/
    v66 = a4; /*0x4889b4*/
    v61 = this->q00C; /*0x4889c9*/
    v54 = this->q02C; /*0x4889d6*/
    v47 = *((_DWORD *)BuildingTypeClass_AnimTable + *(_DWORD *)(this->q178 + 4 * a2)); /*0x4889ef*/
    v8 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)g_DSurface_Hidden_2 + 120))(g_DSurface_Hidden_2, v73); /*0x4889f8*/
    return FillRectangle(&v67, *(_DWORD *)(4 * a2 + v7), g_DSurface_Hidden_2, v8, (int)&v65, v47, 0, v54, a5, v61); /*0x488a09*/
  }
  return result; /*0x488a0e*/
}



// ==== 0x00488EE0  ColorListClass::GetColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt34(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int, _DWORD))(this->q0CC)(this, a2, 0); /*0x488eef*/
}



// ==== 0x00488F00  ColorListClass::QueryInterface  this=ColorListClass  sig=csp ====
char *__thiscall ColorListClass::_vt00(char *Block, char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = *((_DWORD *)Block + 93); /*0x488f05*/
  v4 = Block + 372; /*0x488f0b*/
  *(_DWORD *)Block = &ColorListClass::`vftable'; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))(Block + 372); /*0x488f19*/
  *((_DWORD *)Block + 100) = 0; /*0x488f1e*/
  v5 = (void *)*((_DWORD *)v4 + 1); /*0x488f24*/
  *(_DWORD *)v4 = &VectorClass<int>::`vftable'; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    __3_YAXPAX_Z(v5); /*0x488f37*/
    *((_DWORD *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((_DWORD *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct(Block); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    __3_YAXPAX_Z(Block); /*0x488f57*/
  return Block; /*0x488f61*/
}



// ==== 0x00488F70  sub_488F70  this=-  sig=ida-proto ====
int sub_488F70()
{
  dword_89E800 = 0; /*0x488f72*/
  dword_89E804 = 0; /*0x488f77*/
  dword_89E808 = 0; /*0x488f7c*/
  dword_89E80C = 0; /*0x488f81*/
  return 0; /*0x488f86*/
}



// ==== 0x00488F90  sub_488F90  this=-  sig=ida-proto ====
void sub_488F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x488f9c*/
  dbl_89E818 = Math::Sqrt(v0 + v0); /*0x488fae*/
}



// ==== 0x00488FC0  sub_488FC0  this=-  sig=ida-proto ====
void sub_488FC0()
{
  dbl_89E868 = dbl_89E818 / 60.0; /*0x488fcc*/
}



// ==== 0x00488FE0  sub_488FE0  this=-  sig=ida-proto ====
void sub_488FE0()
{
  dbl_89E850 = 1.0 / dbl_89E868; /*0x488fec*/
}



// ==== 0x00489000  sub_489000  this=-  sig=ida-proto ====
void sub_489000()
{
  dbl_89E848 = 0.0174532925199433 * 45.0; /*0x48900c*/
}



// ==== 0x00489020  sub_489020  this=-  sig=ida-proto ====
void sub_489020()
{
  dbl_89E820 = 0.0174532925199433 * 60.0; /*0x48902c*/
}



// ==== 0x00489040  sub_489040  this=-  sig=ida-proto ====
void sub_489040()
{
  dbl_89E7F8 = 0.0174532925199433 * 90.0; /*0x48904c*/
}



// ==== 0x00489060  sub_489060  this=-  sig=ida-proto ====
__int64 sub_489060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E7F8 - dbl_89E820); /*0x489072*/
  result = Math::RoundToInt(v0 * dbl_89E818 * 0.5); /*0x489086*/
  dword_89E870 = result; /*0x48908b*/
  return result; /*0x489090*/
}



// ==== 0x004890A0  sub_4890A0  this=-  sig=ida-proto ====
void sub_4890A0()
{
  dbl_89E828 = Math::ArcTan((double)dword_89E870 * 0.00390625); /*0x4890b7*/
}



// ==== 0x004890D0  sub_4890D0  this=-  sig=ida-proto ====
void sub_4890D0()
{
  dbl_89E840 = Math::ArcTan((double)(2 * dword_89E870) / dbl_89E818); /*0x4890f2*/
}



// ==== 0x00489100  sub_489100  this=-  sig=ida-proto ====
__int64 sub_489100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E870) + 0.5); /*0x48911b*/
  dword_89E864 = result; /*0x489120*/
  return result; /*0x489126*/
}



// ==== 0x00489130  sub_489130  this=-  sig=ida-proto ====
int sub_489130()
{
  word_89E810 = 0; /*0x489132*/
  word_89E812 = 0; /*0x489138*/
  return 0; /*0x48913e*/
}



// ==== 0x00489140  sub_489140  this=-  sig=ida-proto ====
int sub_489140()
{
  dword_89E830 = 0; /*0x489142*/
  dword_89E834 = 0; /*0x489147*/
  dword_89E838 = 0; /*0x48914c*/
  return 0; /*0x489151*/
}



// ==== 0x00489160  sub_489160  this=-  sig=ida-proto ====
int sub_489160()
{
  dword_89E860 = 0; /*0x489165*/
  dword_89E858 = 128; /*0x48916f*/
  dword_89E85C = 128; /*0x489174*/
  return 128; /*0x489179*/
}



// ==== 0x00489180  ComputeTechnoClassDamageFalloff  this=-  sig=csp ====
int __fastcall Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // ecx
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (*(_BYTE *)g_ScenarioClass_Instance & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v9 = v7; /*0x4891ca*/
  v10 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  v8 = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891f1*/
  if ( v10 != v9 && v8 ) /*0x489200*/
    v4 = Math::RoundToInt((v9 - v10) * (double)(v8 - a4) / (double)v8 + v10); /*0x489225*/
  result = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= *((_DWORD *)g_RulesClass_Instance + 1458) ) /*0x489257*/
    return *((_DWORD *)g_RulesClass_Instance + 1458); /*0x48925a*/
  return result; /*0x4891b8*/
}



// ==== 0x00489270  ObjectClass::CellChainReact  this=ObjectClass  sig=csp ====
void CellChainReact()
{
  ; /*0x489270*/
}



// ==== 0x00489280  PlaySoundEffectAt  this=AbstractClass  sig=csp ====
int __fastcall PlaySoundEffectAt(_DWORD *a1, int a2, _DWORD *a3, int a4, char a5, int a6)
{
  int v8; // esi
  _DWORD *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  __int16 v21; // ax
  _DWORD *v22; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  _DWORD *v29; // ebx
  _DWORD *v30; // ebx
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  double v33; // st7
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  double v38; // st7
  int v39; // edx
  double v40; // st6
  double v41; // st5
  _DWORD *v42; // eax
  int *v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int **v48; // eax
  int *v49; // esi
  int v50; // edi
  int v51; // edx
  int v52; // esi
  int v53; // esi
  double v55; // st7
  i... [26838 chars total]



// ==== 0x0048A4F0  GetWarheadVersusMultiplier  this=Coord  sig=csp ====
int __fastcall Warhead_GetVersusMultiplier(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // eax

  v4 = a1; /*0x48a4f3*/
  if ( !a1 || !a2 ) /*0x48a501*/
    return 0; /*0x48a501*/
  if ( a3 == 2 /*0x48a54f*/
    && *(_BYTE *)(a2 + 333)
    && (*((_DWORD *)Coord::To_Cell(&MapClass_Instance, a4) + 80) & 0x100) == 0
    && a4[2] < Cell::GetGroundHeight(a4) + 2 * dword_89E870 )
  {
    v6 = *((_DWORD *)g_RulesClass_Instance + 756); /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      v7 = 35 * v6 - 1; /*0x48a56e*/
      if ( v4 < v7 ) /*0x48a574*/
        v7 = v4; /*0x48a576*/
      return *(_DWORD *)(*((_DWORD *)g_RulesClass_Instance + 753) + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( a2 == *((_DWORD *)g_RulesClass_Instance + 1517) ) /*0x48a5a5*/
    return *((_DWORD *)g_RulesClass_Instance + 189); /*0x48a5b0*/
  v9 = *(_DWORD *)(a2 + 276); /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( *(_BYTE *)(a2 + 340) ) /*0x48a5bd*/
    return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, v9 - 1)); /*0x48a5e4*/
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( v4 >= v10 ) /*0x48a5f4*/
    v4 = v10; /*0x48a5f6*/
  return *(_DWORD *)(*(_DWORD *)(a2 + 264) + 4 * (v4 / 25)); /*0x48a57d*/
}



// ==== 0x0048A620  CreateSmokeEffectAt  this=BulletClass  sig=csp ====
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int v7; // eax
  double v10; // st7
  int v11; // esi

  LOBYTE(v7) = g_lParam; /*0x48a620*/
  if ( g_lParam && (v7 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v11 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v11 < 63 ) /*0x48a6aa*/
        {
          if ( v11 <= 21 ) /*0x48a6b6*/
            v11 = 21; /*0x48a6b8*/
        }
        else
        {
          v11 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        v11 = Math::RoundToInt(v10 * 63.0); /*0x48a69b*/
      }
      if ( __2_YAPAXI_Z(0x18u) ) /*0x48a6bf*/
      {
        v7 = ObjectClass::RegisterInArray(a3, a4, a5, v11); /*0x48a6e7*/
        *(_DWORD *)(v7 + 20) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return v7; /*0x48a6ef*/
}



// ==== 0x0048A8D0  ComputeMathFacingAngle  this=-  sig=csp ====
char __fastcall Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, _DWORD *a6)
{
  double v6; // kr00_8
  char v10; // c0
  int v11[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( !(unsigned __int8)SolveMathTrajectory(a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
    return 0; /*0x48a9c4*/
  if ( a1 ) /*0x48a907*/
  {
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
    *a6 = a4; /*0x48a92d*/
    return 1; /*0x48a930*/
  }
  else
  {
    SolveMathTrajectory(a3 + 1, a4, v6, (int)v11); /*0x48a94f*/
    if ( v10 ) /*0x48a965*/
      LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
    else
      LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9aa*/
    *a6 = a4; /*0x48a989*/
    return 1; /*0x48a98c*/
  }
}



// ==== 0x0048A9D0  SolveMathTrajectory  this=-  sig=csp ====
char __fastcall Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // [esp+8h] [ebp-20h]
  double v12; // [esp+8h] [ebp-20h]
  double v13; // [esp+10h] [ebp-18h]
  double v14; // [esp+10h] [ebp-18h]
  double v15; // [esp+18h] [ebp-10h]
  double v16; // [esp+20h] [ebp-8h]

  if ( a4 <= 0 )
  {
    if ( (double)a3 == 0.0 ) /*0x48aa0a*/
      a3 = 0; /*0x48aa0c*/
    v7 = (double)a4; /*0x48aa1a*/
    v16 = (double)a2; /*0x48aa25*/
    v15 = v16 * v16 - v7 * a5; /*0x48aa38*/
    v13 = (double)a3 * (double)a3; /*0x48aa44*/
    v11 = v16 * v16 * v16 * v16 - (v16 * v16 * v7 * a5 + v16 * v16 * v7 * a5) - a5 * a5 * v13; /*0x48aa64*/
    v8 = v7 * v7 / v13 + 1.0 + v7 * v7 / v13 + 1.0; /*0x48aa7a*/
    v14 = v8; /*0x48aa7c*/
    if ( v11 < 0.0 || v8 == 0.0 ) /*0x48aa9c*/
      return 0; /*0x48aa9c*/
    v9 = a1 ? v15 - Math::Sqrt(v11) : Math::Sqrt(v11) + v15;
    v12 = v9 / v14; /*0x48aad4*/
    if ( v12 < 0.0 ) /*0x48aae3*/
    {
      return 0; /*0x48ab12*/
    }
    else
    {
      v10 = Math::Sqrt(v12); /*0x48aaef*/
      *(double *)a6 = Math::ArcTan2_Table(v10 / v16); /*0x48ab06*/
      return 1; /*0x48ab08*/
    }
  }
  else
  {
    *(_DWORD *)a6 = -187466734; /*0x48a9e7*/
    *(_DWORD *)(a6 + 4) = 1072243161; /*0x48a9ed*/
    return 1; /*0x48a9f4*/
  }
}



// ==== 0x0048AB90  TechnoClass::ComputeScanRange  this=TechnoClass  sig=csp ====
__int64 __thiscall TechnoClass_ComputeScanRange(void *this, double a2)
{
  double v2; // st7

  v2 = Math::Sqrt((double)(int)this * a2 * 1.2); /*0x48aba9*/
  return Math::RoundToInt(v2); /*0x48abb6*/
}



// ==== 0x0048ABC0  globalHelper_08ABC0  this=-  sig=csp ====
bool __fastcall sub_48ABC0(int a1, int a2, int a3, double a4)
{
  double v4; // st7
  double v5; // st6
  double v7; // [esp+0h] [ebp-28h]
  double v8; // [esp+8h] [ebp-20h]
  double v9; // [esp+10h] [ebp-18h]
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  v4 = (double)a1; /*0x48abd1*/
  v5 = (double)a2; /*0x48abd5*/
  if ( v5 == 0.0 ) /*0x48abe6*/
    v5 = 0.001; /*0x48abea*/
  v8 = (double)a3; /*0x48abf3*/
  v7 = v4 * v4; /*0x48abfb*/
  v9 = v5 * v5; /*0x48ac03*/
  v11 = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9; /*0x48ac2c*/
  if ( v11 < 0.0 ) /*0x48ac3b*/
    return 0; /*0x48ac3d*/
  v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0; /*0x48ac5b*/
  if ( v12 == 0.0 ) /*0x48ac6a*/
    return 0; /*0x48ac6c*/
  v10 = v7 - v8 * a4; /*0x48ac8b*/
  return (Math::Sqrt(v11) + v10) / v12 >= 0.0 || (v10 - Math::Sqrt(v11)) / v12 >= 0.0; /*0x48ac41*/
}



// ==== 0x0048ACE0  Return::HRESULT_Fail  this=RecoilData  sig=csp ====
int __stdcall Return_HRESULT_Fail(int a1, int a2, int a3)
{
  return -15; /*0x48ace5*/
}



// ==== 0x0048ACF0  RulesClass::GetFiringDistance  this=RulesClass  sig=ida-proto ====
double RulesClass_GetFiringDistance()
{
  return (double)*((int *)g_RulesClass_Instance + 1454) * 0.5; /*0x48ad01*/
}



// ==== 0x0048AD10  _DynamicVectorClass_PAUDamageGroup::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::sub_48AD10(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x48ad16*/
  *(_DWORD *)(this + 16) = 0; /*0x48ad19*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x48ad20*/
  {
    __3_YAXPAX_Z(v2); /*0x48ad26*/
    *(_DWORD *)(this + 4) = 0; /*0x48ad2e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x48ad31*/
  *(_DWORD *)(this + 8) = 0; /*0x48ad34*/
}



// ==== 0x0048AD40  _DynamicVectorClass_PAUDamageGroup::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::sub_48AD40(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x48ad40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x48ad55*/
  else
    return 0; /*0x48ad47*/
}



// ==== 0x0048AD60  _VectorClass_PAUDamageGroup::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x48ad6a*/
}



// ==== 0x0048AD70  _VectorClass_PAUDamageGroup::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x48ad72*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( v2 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
    v4 = (_DWORD *)this->Items; /*0x48ad85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x48ad8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x48ad94*/
    {
      ++v3; /*0x48ad96*/
      ++v4; /*0x48ad97*/
      if ( v3 >= v2 ) /*0x48ad9c*/
        return 1; /*0x48ad9c*/
    }
  }
  return 0; /*0x48ad9e*/
}



// ==== 0x0048ADB0  _VectorClass_PAUDamageGroup::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x48adbc*/
  {
    this->IsInitialized = 0; /*0x48adc6*/
    if ( a3 ) /*0x48adcc*/
      v4 = a3; /*0x48ade2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x48adde*/
    this->IsInitialized = 1; /*0x48ade6*/
    if ( v4 ) /*0x48adea*/
    {
      if ( this->Items ) /*0x48adf5*/
      {
        v6 = this->Capacity; /*0x48adfc*/
        if ( a2 < v6 ) /*0x48ae01*/
          v6 = a2; /*0x48ae03*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x48ae09*/
          ++i; /*0x48ae0e*/
        if ( this->IsAllocated ) /*0x48ae1b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x48ae26*/
          this->Items = 0; /*0x48ae2e*/
        }
      }
      this->Items = v4; /*0x48ae37*/
      this->Capacity = a2; /*0x48ae3f*/
      this->IsAllocated = a3 == 0; /*0x48ae42*/
      return 1; /*0x48ae48*/
    }
    else
    {
      return 0; /*0x48adef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x48ae52*/
    return 1; /*0x48ae58*/
  }
}



// ==== 0x0048AE60  _VectorClass_PAUDamageGroup::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x48ae6d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x48ae73*/
    *(_DWORD *)(this + 4) = 0; /*0x48ae7b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x48ae7e*/
  *(_DWORD *)(this + 8) = 0; /*0x48ae81*/
}



// ==== 0x0048AE90  _VectorClass_PAUDamageGroup::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x48ae90*/
    return 0; /*0x48ae98*/
  v3 = *(_DWORD *)(this + 8); /*0x48ae9e*/
  result = 0; /*0x48aea1*/
  if ( v3 <= 0 ) /*0x48aea5*/
    return -1; /*0x48aebc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x48aeab*/
  {
    if ( ++result >= v3 ) /*0x48aeba*/
      return -1; /*0x48aeba*/
  }
  return result; /*0x48ae9a*/
}



// ==== 0x0048AED0  _VectorClass_PAUDamageGroup::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x48aed0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x48aee5*/
  else
    return 0; /*0x48aed7*/
}



// ==== 0x0048AEF0  _DynamicVectorClass_PAUDamageGroup::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::sub_48AEF0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x48aefc*/
  {
    this->IsInitialized = 0; /*0x48af02*/
    if ( a3 ) /*0x48af08*/
      v4 = a3; /*0x48af1e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x48af1a*/
    this->IsInitialized = 1; /*0x48af22*/
    if ( !v4 ) /*0x48af26*/
      return 0; /*0x48af9a*/
    if ( this->Items ) /*0x48af28*/
    {
      v5 = this->q008; /*0x48af2f*/
      if ( a2 < v5 ) /*0x48af34*/
        v5 = a2; /*0x48af36*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x48af3c*/
        ++i; /*0x48af41*/
      if ( this->IsAllocated ) /*0x48af4e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x48af59*/
        this->Items = 0; /*0x48af61*/
      }
    }
    this->Items = v4; /*0x48af6a*/
    this->q008 = a2; /*0x48af72*/
    this->IsAllocated = a3 == 0; /*0x48af75*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x48af7e*/
  }
  v7 = this->q008; /*0x48af81*/
  if ( v7 < this->Items ) /*0x48af89*/
    this->Items = v7; /*0x48af8b*/
  return 1; /*0x48af8e*/
}



// ==== 0x0048AFA0  _DynamicVectorClass_PAUDamageGroup::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::sub_48AFA0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x48afa0*/
  result = 0; /*0x48afa3*/
  if ( v2 <= 0 ) /*0x48afa8*/
    return -1; /*0x48afbf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x48afae*/
  {
    if ( ++result >= v2 ) /*0x48afbd*/
      return -1; /*0x48afbd*/
  }
  return result; /*0x48afc2*/
}



// ==== 0x0048AFD0  _VectorClass_PAUDamageGroup::Add  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x48afd3*/
  *Block = &VectorClass<DamageGroup *>::`vftable'; /*0x48afd6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x48afe0*/
  {
    __3_YAXPAX_Z(v3); /*0x48afe8*/
    *(Block + 1) = 0; /*0x48aff0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48affb*/
  *(Block + 2) = 0; /*0x48b001*/
  if ( (a2 & 1) != 0 ) /*0x48b008*/
    __3_YAXPAX_Z(Block); /*0x48b00b*/
  return Block; /*0x48b015*/
}



// ==== 0x0048B020  _DynamicVectorClass_PAUDamageGroup::Constructor_VectorClass_DamageGroup___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_DamageGroup::sub_48B020(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x48b023*/
  *Block = &VectorClass<DamageGroup *>::`vftable'; /*0x48b026*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x48b030*/
  {
    __3_YAXPAX_Z(v3); /*0x48b038*/
    *(Block + 1) = 0; /*0x48b040*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48b04b*/
  *(Block + 2) = 0; /*0x48b051*/
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    __3_YAXPAX_Z(Block); /*0x48b05b*/
  return Block; /*0x48b065*/
}



// ==== 0x0048B070  VectorClass::sub_48B070  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_48B070(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x48b07b*/
  this->Capacity = a2; /*0x48b07e*/
  this->q030 = 1; /*0x48b081*/
  this->q034 = 0; /*0x48b085*/
  *this = &VectorClass<DamageGroup *>::`vftable'; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = a3; /*0x48b098*/
      return this; /*0x48b09e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->q034 = 1; /*0x48b0b0*/
  }
  return this; /*0x48b09d*/
}



// ==== 0x0048B0C0  sub_48B0C0  this=-  sig=ida-proto ====
int sub_48B0C0()
{
  dword_89E878 = 0; /*0x48b0c2*/
  dword_89E87C = 0; /*0x48b0c7*/
  dword_89E880 = 0; /*0x48b0cc*/
  dword_89E884 = 0; /*0x48b0d1*/
  return 0; /*0x48b0d6*/
}



// ==== 0x0048B0E0  CommBufferClass::method_48B0E0  this=CommBufferClass  sig=csp ====
_DWORD *__thiscall sub_48B0E0(_DWORD *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *this = &CommBufferClass::`vftable'; /*0x48b0fd*/
  this->q004 = a2; /*0x48b103*/
  this->q008 = a3; /*0x48b106*/
  this->q00C = Size; /*0x48b109*/
  this->q010 = a5; /*0x48b10c*/
  this->q024 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->q034 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  this->ptr_30 = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->q040 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( (int)this->q004 > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->q024 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( (int)this->q010 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->q024 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->q024 + v7 + 28) = __2_YAPAXI_Z(this->q010); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < this->q004 ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( (int)this->q008 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->q034 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( (int)this->q010 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->q034 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->q034 + 20) = __2_YAPAXI_Z(this->q010); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->q008 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags(this); /*0x48b1df*/
  return this; /*0x48b1e6*/
}



// ==== 0x0048B1F0  CommBufferClass::method_48B1F0  this=CommBufferClass  sig=csp ====
void __thiscall sub_48B1F0(void *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // edi
  int v8; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = this->q004; /*0x48b1f7*/
  *(_DWORD *)this = &CommBufferClass::`vftable'; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->q024 + v4 + 20)); /*0x48b20e*/
      v5 = this->q024; /*0x48b213*/
      if ( *(_DWORD *)(v5 + v4 + 28) ) /*0x48b219*/
        __3_YAXPAX_Z(*(void **)(v5 + v4 + 28)); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 36; /*0x48b22e*/
    }
    while ( v2 < this->q004 ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( *((int *)this + 2) > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->q034 + v7 + 12)); /*0x48b248*/
      v8 = this->q034; /*0x48b24d*/
      if ( *(_DWORD *)(v8 + v7 + 20) ) /*0x48b253*/
        __3_YAXPAX_Z(*(void **)(v8 + v7 + 20)); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 24; /*0x48b268*/
    }
    while ( v6 < this->q008 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z(*((void **)this + 9)); /*0x48b273*/
  __3_YAXPAX_Z(*((void **)this + 13)); /*0x48b27c*/
  __3_YAXPAX_Z(*((void **)this + 12)); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/
}



// ==== 0x0048B2A0  Struct::ClearAllMemberFlags  this=CommBufferClass  sig=csp ====
int __thiscall sub_48B2A0(int *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = this->q004; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *(this + 11) = 0; /*0x48b2ac*/
  *(this + 15) = 0; /*0x48b2af*/
  this->q014 = 0; /*0x48b2b2*/
  this->q018 = 0; /*0x48b2b5*/
  this->q070 = 0; /*0x48b2b8*/
  this->q008 = 0; /*0x48b2bb*/
  this->q028 = 0; /*0x48b2be*/
  *(this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + this->q024) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + this->q024) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + this->q024); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + this->q024 - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + this->q024 - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + this->q024 - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + this->q024 - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + this->q024 - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + this->q024 - 4) = 0; /*0x48b316*/
      *(_DWORD *)(this->q00C + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < this->q004 ); /*0x48b327*/
  }
  result = this->q008; /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + this->q034) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + this->q034) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + this->q034); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(this->q034 + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(this->q034 + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(this->q034 + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(this->q010 + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->q008 ); /*0x48b37d*/
  }
  this->q110 = 0; /*0x48b381*/
  this->q012 = 0; /*0x48b384*/
  this->q04C = 0; /*0x48b387*/
  this->q054 = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}



// ==== 0x0048B390  EventClass::serializeEvent  this=EventClass  sig=csp ====
int __thiscall sub_48B390(int *this)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edx

  result = this->q004; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->q028 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)(result + this->q024) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)(result + this->q024) &= ~2u; /*0x48b3b9*/
      v3 = (_DWORD *)(result + this->q024); /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)(this->q024 + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)(this->q024 + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)(this->q024 + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)(this->q024 + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)(this->q024 + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)(this->q024 + result - 4) = 0; /*0x48b3f1*/
      *(_DWORD *)(this->q00C + 4 * v2 - 4) = 0; /*0x48b3f9*/
    }
    while ( v2 < this->q004 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}



// ==== 0x0048B410  ConnectionClass::queueSendPacket  this=ConnectionClass  sig=csp ====
int __thiscall sub_48B410(int *this, const void *a2, signed int a3, const void *a4, signed int a5, __int16 a6)
{
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  _BYTE *i; // edi
  int v12; // eax
  int v13; // ecx

  v7 = this->PlayerIndex; /*0x48b418*/
  v8 = this->q028; /*0x48b41c*/
  if ( v8 == v7 || a3 > this->LastPacketTime ) /*0x48b42b*/
  {
    if ( v8 == v7 ) /*0x48b52f*/
    {
      Debug::Log(); /*0x48b536*/
      return 0; /*0x48b544*/
    }
    Debug::Log(); /*0x48b552*/
    return 0; /*0x48b552*/
  }
  v9 = 0; /*0x48b433*/
  if ( v7 <= 0 ) /*0x48b437*/
    return 0; /*0x48b437*/
  for ( i = (_BYTE *)this->q009; (*i & 1) != 0; i += 36 ) /*0x48b440*/
  {
    if ( ++v9 >= v7 ) /*0x48b44d*/
      return 0; /*0x48b455*/
  }
  if ( v9 == -1 ) /*0x48b45b*/
    return 0; /*0x48b55d*/
  v12 = 36 * v9; /*0x48b464*/
  *(_DWORD *)(this->q009 + v12) = *(_DWORD *)(this->q009 + 36 * v9) | 1; /*0x48b46d*/
  *(_DWORD *)(36 * v9 + this->q009) &= ~2u; /*0x48b47a*/
  *(_DWORD *)(36 * v9 + this->q009) &= ~4u; /*0x48b486*/
  *(_DWORD *)(v12 + this->q009 + 4) = 0; /*0x48b490*/
  *(_DWORD *)(v12 + this->q009 + 8) = 0; /*0x48b497*/
  *(_DWORD *)(v12 + this->q009 + 12) = 0; /*0x48b49e*/
  *(_DWORD *)(v12 + this->q009 + 16) = a3; /*0x48b4a5*/
  *(_WORD *)(v12 + this->q009 + 32) = a6; /*0x48b4ae*/
  qmemcpy(*(void **)(36 * v9 + this->q009 + 20), a2, a3); /*0x48b4c1*/
  if ( a4 && a5 > 0 && a5 <= this->PlayerIndex ) /*0x48b4dd*/
  {
    qmemcpy(*(void **)(v12 + this->q009 + 28), a4, a5); /*0x48b4eb*/
    *(_DWORD *)(v12 + this->q009 + 24) = a5; /*0x48b4f9*/
  }
  else
  {
    *(_DWORD *)(v12 + this->q009 + 24) = 0; /*0x48b502*/
  }
  *(_DWORD *)(this->LastPacketTime + 4 * this->q028) = v9; /*0x48b512*/
  v13 = this->q028 + 1; /*0x48b51b*/
  ++this->q02C; /*0x48b51e*/
  this->q028 = v13; /*0x48b521*/
  return 1; /*0x48b44f*/
}



// ==== 0x0048B570  PacketQueue::ExtractEntry  this=PacketQueue  sig=csp ====
int __thiscall sub_48B570(_DWORD *this, void *a2, _DWORD *a3, int a4, void *a5, _DWORD *a6, _WORD *a7)
{
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // ecx
  int i; // ecx

  if ( !this->q00A ) /*0x48b576*/
    return 0; /*0x48b576*/
  v8 = this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4); /*0x48b58f*/
  if ( (*(_BYTE *)v8 & 1) == 0 ) /*0x48b595*/
    return 0; /*0x48b712*/
  if ( a2 ) /*0x48b5a3*/
  {
    qmemcpy(a2, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b5b0*/
    *a3 = *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 16); /*0x48b5cd*/
  }
  if ( a5 && a6 ) /*0x48b5db*/
  {
    v9 = this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4); /*0x48b5e9*/
    qmemcpy(a5, *(const void **)(v9 + 28), *(_DWORD *)(v9 + 24)); /*0x48b5f7*/
    *a6 = *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 24); /*0x48b614*/
  }
  if ( a7 ) /*0x48b61c*/
    *a7 = *(_WORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 32); /*0x48b62f*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)) &= ~1u; /*0x48b647*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)) &= ~2u; /*0x48b65e*/
  v10 = (_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)); /*0x48b66e*/
  *v10 &= ~4u; /*0x48b676*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 4) = 0; /*0x48b684*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 8) = 0; /*0x48b694*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 12) = 0; /*0x48b6a4*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 16) = 0; /*0x48b6b4*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 24) = 0; /*0x48b6c4*/
  *(_WORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 32) = 0; /*0x48b6d4*/
  for ( i = a4; i < this->q00A - 1; *(_DWORD *)(this->q030 + 4 * i - 4) = *(_DWORD *)(this->q030 + 4 * i) ) /*0x48b6e1*/
    ++i; /*0x48b6e6*/
  *(_DWORD *)(this->q030 + 4 * (this->q00A)-- - 4) = 0; /*0x48b6fd*/
  return 1; /*0x48b6fc*/
}



// ==== 0x0048B720  Terrain::GetTileIndex  this=Terrain  sig=csp ====
int __thiscall Terrain_GetTileIndex(_DWORD *this, int a2)
{
  return (*(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)) & 1) != 0
       ? this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)
       : 0;
}



// ==== 0x0048B750  ConnectionClass::allocPacketSlot  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_AllocPacketSlot(int *this, const void *a2, signed int a3, const void *a4, signed int a5)
{
  int v6; // edx
  int v8; // ebx
  _BYTE *v9; // eax
  _BYTE *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // [esp+14h] [ebp+8h]

  v6 = this->Active; /*0x48b755*/
  if ( this->q038 == v6 || a3 > this->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = (_BYTE *)this->q034; /*0x48b774*/
  v10 = v9; /*0x48b777*/
  while ( (*v10 & 1) != 0 ) /*0x48b77c*/
  {
    ++v8; /*0x48b77e*/
    v10 += 24; /*0x48b77f*/
    if ( v8 >= v6 ) /*0x48b784*/
      goto LABEL_9; /*0x48b784*/
  }
  v15 = v8; /*0x48b78f*/
  if ( v8 == -1 ) /*0x48b793*/
  {
LABEL_9:
    Debug::Log(); /*0x48b795*/
    return 0; /*0x48b7a7*/
  }
  v12 = 24 * v8; /*0x48b7ae*/
  *(_DWORD *)&v9[v12] |= 1u; /*0x48b7b7*/
  *(_DWORD *)(v12 + this->q034) &= ~2u; /*0x48b7c4*/
  *(_DWORD *)(this->q034 + v12) &= ~4u; /*0x48b7d2*/
  v13 = g_PerformanceTickOffset; /*0x48b7d9*/
  if ( g_LastPerformanceTick != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - g_LastPerformanceTick; /*0x48b7f4*/
  *(_DWORD *)(this->q034 + v12 + 4) = v13; /*0x48b7fb*/
  *(_DWORD *)(this->q034 + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(this->q034 + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= this->PlayerIndex ) /*0x48b832*/
  {
    qmemcpy(*(void **)(this->q034 + v12 + 20), a4, a5); /*0x48b842*/
    *(_DWORD *)(this->q034 + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(_DWORD *)(this->q034 + v12 + 16) = 0; /*0x48b857*/
  }
  *(_DWORD *)(this->PacketsSent + 4 * this->q038) = v15; /*0x48b86a*/
  v14 = this->q03C + 1; /*0x48b874*/
  ++this->q038; /*0x48b875*/
  this->q03C = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}



// ==== 0x0048B890  PacketQueue::ReleaseEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue_ReleaseEntry(_DWORD *this, void *a2, _DWORD *a3, int a4, void *a5, _DWORD *a6)
{
  int v7; // esi
  int v8; // esi
  _DWORD *v9; // ecx
  int i; // ecx

  if ( !this->u32_38 ) /*0x48b896*/
    return 0; /*0x48b896*/
  v7 = this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4); /*0x48b8af*/
  if ( (*(_BYTE *)v7 & 1) == 0 ) /*0x48b8b5*/
    return 0; /*0x48b9d5*/
  if ( a2 ) /*0x48b8c3*/
  {
    qmemcpy(a2, *(const void **)(v7 + 12), *(_DWORD *)(v7 + 8)); /*0x48b8d0*/
    *a3 = *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4) + 8); /*0x48b8ed*/
  }
  if ( a5 && a6 ) /*0x48b8fd*/
  {
    v8 = this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4); /*0x48b90b*/
    qmemcpy(a5, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b919*/
    *a6 = *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4) + 16); /*0x48b934*/
  }
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4)) &= ~1u; /*0x48b94b*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4)) &= ~2u; /*0x48b962*/
  v9 = (_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4)); /*0x48b972*/
  *v9 &= ~4u; /*0x48b97a*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4) + 8) = 0; /*0x48b988*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * a4) + 16) = 0; /*0x48b998*/
  for ( i = a4; i < this->u32_38 - 1; *(_DWORD *)(this->u32_40 + 4 * i - 4) = *(_DWORD *)(this->u32_40 + 4 * i) ) /*0x48b9a4*/
    ++i; /*0x48b9a9*/
  *(_DWORD *)(this->u32_40 + 4 * (this->u32_38)-- - 4) = 0; /*0x48b9c0*/
  return 1; /*0x48b9bf*/
}



// ==== 0x0048B9E0  Terrain::GetTileType  this=Terrain  sig=csp ====
int __thiscall Terrain_GetTileType(_DWORD *this, int a2)
{
  return (*(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * a2)) & 1) != 0
       ? this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * a2)
       : 0;
}



// ==== 0x0048BA10  ConnectionClass::initQueue  this=ConnectionClass  sig=csp ====
unsigned int __thiscall sub_48BA10(unsigned int *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = this->q018; /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - this->q01C + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    this->q018 = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  this->q01C = v4; /*0x48ba60*/
  result = this->Active; /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    this->Active = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}



// ==== 0x0048BA80  CellClass::GetBridgeIndex  this=CellClass  sig=csp ====
int __thiscall CellClass_GetBridgeIndex(_DWORD *this)
{
  return this->rubble; /*0x48ba83*/
}



// ==== 0x0048BA90  IPXManagerClass::init  this=IPXManagerClass  sig=csp ====
int __thiscall sub_48BA90(_DWORD *this)
{
  return this->q020; /*0x48ba93*/
}



// ==== 0x0048BAA0  Rect::SetRedraw  this=Rect  sig=csp ====
int __thiscall Rect_SetRedraw(_DWORD *this, char a2)
{
  int result; // eax

  result = 0; /*0x48baa4*/
  if ( a2 ) /*0x48baa8*/
  {
    this->q014 = 0; /*0x48baaa*/
    this->q018 = 0; /*0x48baad*/
    this->q01C = 0; /*0x48bab0*/
  }
  else
  {
    result = this->q01C; /*0x48bab9*/
    this->q018 = 1; /*0x48babc*/
    this->q014 = result; /*0x48bac3*/
  }
  this->q020 = result; /*0x48bab3*/
  return result; /*0x48bab6*/
}



// ==== 0x0048BAD0  EventClass::SetData  this=EventClass  sig=csp ====
int __thiscall EventClass::SetData(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  this->q044 = a2; /*0x48bad8*/
  this->q048 = a3; /*0x48badf*/
  this->u32_4C = a4; /*0x48bae6*/
  this->q050 = a5; /*0x48baed*/
  this->q054 = a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}



// ==== 0x0048BB00  ObjectClass::method_48BB00  this=ObjectClass  sig=csp ====
void *__thiscall sub_48BB00(void *Block, char a2)
{
  sub_48B1F0(Block); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(Block); /*0x48bb10*/
  return Block; /*0x48bb1a*/
}



// ==== 0x0048BB20  sub_48BB20  this=-  sig=ida-proto ====
int sub_48BB20()
{
  dword_89E888 = 0; /*0x48bb22*/
  dword_89E88C = 0; /*0x48bb27*/
  dword_89E890 = 0; /*0x48bb2c*/
  dword_89E894 = 0; /*0x48bb31*/
  return 0; /*0x48bb36*/
}



// ==== 0x0048BB40  sub_48BB40  this=-  sig=ida-proto ====
bool __fastcall sub_48BB40(int a1, int a2)
{
  int v2; // eax

  BYTE1(a2) &= ~8u; /*0x48bb40*/
  v2 = a2; /*0x48bb43*/
  BYTE1(v2) = BYTE1(a2) & 0xE8; /*0x48bb45*/
  return a2 == v2 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2) == 0; /*0x48bb57*/
}



// ==== 0x0048BB60  sub_48BB60  this=-  sig=ida-proto ====
bool __fastcall sub_48BB60(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = NumOfElements; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !NumOfElements ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = g_FileSystemPool; /*0x48bb78*/
  if ( g_FileSystemPool && *(_DWORD *)g_FileSystemPool == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !g_FileSystemInitFlag ) /*0x48bb91*/
  {
    qsort(Base, NumOfElements, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = NumOfElements; /*0x48bba6*/
    g_FileSystemPool = 0; /*0x48bbaf*/
    g_FileSystemInitFlag = 1; /*0x48bbb9*/
  }
  v5 = Base; /*0x48bbc0*/
  if ( v2 <= 0 ) /*0x48bbc8*/
    goto LABEL_12; /*0x48bbc8*/
  while ( 1 ) /*0x48bbd1*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x48bbd1*/
    v4 = (int)&v5[2 * (v2 / 2)]; /*0x48bbd4*/
    if ( v6 <= v3 ) /*0x48bbd9*/
      break; /*0x48bbd9*/
    v2 /= 2; /*0x48bbdb*/
LABEL_11:
    if ( v2 <= 0 ) /*0x48bbed*/
      goto LABEL_12; /*0x48bbed*/
  }
  if ( v6 != v3 ) /*0x48bbdf*/
  {
    v5 = (_DWORD *)(v4 + 8); /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    g_FileSystemPool = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
LABEL_12:
  v7 = &unk_B7883C; /*0x48bbef*/
  return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc1d*/
}



// ==== 0x0048BC20  CompareFuncInt  this=-  sig=ida-proto ====
int __cdecl Int_CompareFunc(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
}



// ==== 0x0048BC50  sub_48BC50  this=-  sig=ida-proto ====
int sub_48BC50()
{
  dword_89E8A0 = 0; /*0x48bc52*/
  dword_89E8A4 = 0; /*0x48bc57*/
  dword_89E8A8 = 0; /*0x48bc5c*/
  dword_89E8AC = 0; /*0x48bc61*/
  return 0; /*0x48bc66*/
}



// ==== 0x0048BC70  sub_48BC70  this=-  sig=ida-proto ====
void sub_48BC70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48bc7c*/
  dbl_89E8B8 = Math::Sqrt(v0 + v0); /*0x48bc8e*/
}



// ==== 0x0048BCA0  sub_48BCA0  this=-  sig=ida-proto ====
void sub_48BCA0()
{
  dbl_89E908 = dbl_89E8B8 / 60.0; /*0x48bcac*/
}



// ==== 0x0048BCC0  sub_48BCC0  this=-  sig=ida-proto ====
void sub_48BCC0()
{
  dbl_89E8F0 = 1.0 / dbl_89E908; /*0x48bccc*/
}



// ==== 0x0048BCE0  sub_48BCE0  this=-  sig=ida-proto ====
void sub_48BCE0()
{
  dbl_89E8E8 = 0.0174532925199433 * 45.0; /*0x48bcec*/
}



// ==== 0x0048BD00  sub_48BD00  this=-  sig=ida-proto ====
void sub_48BD00()
{
  dbl_89E8C0 = 0.0174532925199433 * 60.0; /*0x48bd0c*/
}



// ==== 0x0048BD20  sub_48BD20  this=-  sig=ida-proto ====
void sub_48BD20()
{
  dbl_89E898 = 0.0174532925199433 * 90.0; /*0x48bd2c*/
}



// ==== 0x0048BD40  sub_48BD40  this=-  sig=ida-proto ====
__int64 sub_48BD40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E898 - dbl_89E8C0); /*0x48bd52*/
  result = Math::RoundToInt(v0 * dbl_89E8B8 * 0.5); /*0x48bd66*/
  dword_89E910 = result; /*0x48bd6b*/
  return result; /*0x48bd70*/
}



// ==== 0x0048BD80  sub_48BD80  this=-  sig=ida-proto ====
void sub_48BD80()
{
  dbl_89E8C8 = Math::ArcTan((double)dword_89E910 * 0.00390625); /*0x48bd97*/
}



// ==== 0x0048BDB0  sub_48BDB0  this=-  sig=ida-proto ====
void sub_48BDB0()
{
  dbl_89E8E0 = Math::ArcTan((double)(2 * dword_89E910) / dbl_89E8B8); /*0x48bdd2*/
}



// ==== 0x0048BDE0  sub_48BDE0  this=-  sig=ida-proto ====
__int64 sub_48BDE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E910) + 0.5); /*0x48bdfb*/
  dword_89E904 = result; /*0x48be00*/
  return result; /*0x48be06*/
}



// ==== 0x0048BE10  sub_48BE10  this=-  sig=ida-proto ====
int sub_48BE10()
{
  word_89E8B0 = 0; /*0x48be12*/
  word_89E8B2 = 0; /*0x48be18*/
  return 0; /*0x48be1e*/
}



// ==== 0x0048BE20  sub_48BE20  this=-  sig=ida-proto ====
int sub_48BE20()
{
  dword_89E8D0 = 0; /*0x48be22*/
  dword_89E8D4 = 0; /*0x48be27*/
  dword_89E8D8 = 0; /*0x48be2c*/
  return 0; /*0x48be31*/
}



// ==== 0x0048BE40  sub_48BE40  this=-  sig=ida-proto ====
int sub_48BE40()
{
  dword_89E900 = 0; /*0x48be45*/
  dword_89E8F8 = 128; /*0x48be4f*/
  dword_89E8FC = 128; /*0x48be54*/
  return 128; /*0x48be59*/
}



// ==== 0x0048BE60  ConnectionClass::initConnection  this=ConnectionClass  sig=csp ====
void *__thiscall sub_48BE60(void *this, int a2, int a3, int a4, __int16 a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // eax

  this->q012 = a5; /*0x48be73*/
  this->q028 = a6; /*0x48be7b*/
  *(_DWORD *)this = &ConnectionClass::`vftable'; /*0x48be83*/
  this->q01C = a4 + 14; /*0x48be89*/
  this->q02C = a7; /*0x48be8c*/
  this->LastPacketTime = a8; /*0x48be8f*/
  this->Active = __2_YAPAXI_Z(a4 + 14); /*0x48be99*/
  v10 = __2_YAPAXI_Z(0x58u); /*0x48be9c*/
  if ( v10 ) /*0x48bea6*/
    this->PlayerIndex = sub_48B0E0(v10, a2, a3, this->q01C, a9); /*0x48bec2*/
  else
    this->PlayerIndex = 0; /*0x48becd*/
  return this; /*0x48bec7*/
}



// ==== 0x0048BEE0  ConnectionClass::dtor  this=ConnectionClass  sig=csp ====
void __thiscall ConnectionClass_Dtor(_DWORD *this)
{
  void *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void *)this->q020; /*0x48bee3*/
  *this = &ConnectionClass::`vftable'; /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  v3 = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48bef2*/
  if ( v3 ) /*0x48befb*/
    (**v3)(v3, 1); /*0x48bf01*/
}



// ==== 0x0048BF10  ConnectionClass::ZeroInitAndSetup  this=ConnectionClass  sig=csp ====
int __thiscall Struct_ZeroInitAndSetup(_DWORD *this)
{
  this->q034 = 0; /*0x48bf12*/
  this->q038 = 0; /*0x48bf15*/
  this->q03C = 0; /*0x48bf18*/
  this->q040 = 0; /*0x48bf1b*/
  this->Active = 0; /*0x48bf1e*/
  this->LastPacketTime = 0; /*0x48bf21*/
  this->PacketsSent = 0; /*0x48bf24*/
  this->PacketsReceived = 0; /*0x48bf27*/
  this->q018 = 0; /*0x48bf2a*/
  this->q044 = -1; /*0x48bf30*/
  this->q048 = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(this->PlayerIndex);
}



// ==== 0x0048BF40  ConnectionClass::sendAck  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_SendAck(int this, const void *a2, signed int a3, int a4, char a5)
{
  **(_WORD **)(this + 32) = *(_WORD *)(this + 36); /*0x48bf4b*/
  if ( a4 ) /*0x48bf54*/
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 0; /*0x48bf59*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 64); /*0x48bf63*/
    Debug::Log(); /*0x48bf6f*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 1; /*0x48bf7c*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 60); /*0x48bf86*/
  }
  if ( g_GameMode_Current[0] == 4 && g_Network_IsHosting ) /*0x48bf99*/
    *(_BYTE *)(*(_DWORD *)(this + 32) + 3) = a5; /*0x48bfa2*/
  if ( *(_DWORD *)(this + 28) < a3 ) /*0x48bfae*/
  {
    Debug::Log(); /*0x48bfb6*/
    Debug::Log(); /*0x48bfc1*/
    return 0; /*0x48bfcd*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 14), a2, a3); /*0x48bfe5*/
  if ( !ConnectionClass::queueSendPacket(*(_DWORD *)(this + 32), a3 + 14, 0, 0, 0) ) /*0x48c006*/
    return 0; /*0x48c006*/
  if ( a4 ) /*0x48c00e*/
    ++*(_DWORD *)(this + 64); /*0x48c015*/
  else
    ++*(_DWORD *)(this + 60); /*0x48c026*/
  return 1; /*0x48bfc9*/
}



// ==== 0x0048C040  ConnectionClass::receivePacket  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ReceivePacket(_DWORD *this, int a2, int a3)
{
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *TileIndex; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edi
  int TileType; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // [esp+10h] [ebp-10h] BYREF
  char v26; // [esp+12h] [ebp-Eh]
  _BYTE v27[13]; // [esp+13h] [ebp-Dh]

  if ( *(_WORD *)a2 != this->q048 ) /*0x48c054*/
  {
    ++this->q018; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(_BYTE *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      if ( *(_DWORD *)(this->PlayerIndex + 8) - *(_DWORD *)(this->PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot(a2, a3, 0, 0) ) /*0x48c115*/
        {
          v10 = this->q034 + 1; /*0x48c14b*/
          this->q034 = v10; /*0x48c14c*/
          this->LastPacketTime = *(_DWORD *)(a2 + 4) - v10 + 1; /*0x48c155*/
          v11 = *(_DWORD *)(a2 + 4); /*0x48c158*/
          if ( v11 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v10 / (unsigned int)(v11 + 1); /*0x48c174*/
          return 1; /*0x48c17a*/
        }
        else
        {
          Debug::Log(); /*0x48c12d*/
          ++this->PacketsReceived; /*0x48c139*/
          return 0; /*0x48c13f*/
        }
      }
      else
      {
        ++this->PacketsReceived; /*0x48c0f4*/
        Debug::Log(); /*0x48c0f7*/
        return 0; /*0x48c0ff*/
      }
    }
    if ( !v5 ) /*0x48c188*/
    {
      v12 = this->q044; /*0x48c18e*/
      if ( *(_DWORD *)(a2 + 4) <= v12 && v12 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v23 = *(_DWORD *)(a2 + 4); /*0x48c288*/
        v25 = this->q048; /*0x48c28f*/
        v26 = 2; /*0x48c29c*/
        *(_DWORD *)&v27[1] = v23; /*0x48c2a1*/
        if ( g_Network_IsHosting ) /*0x48c2a5*/
          v27[0] = *(_BYTE *)(a2 + 3); /*0x48c2aa*/
        else
          v27[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v24 = dword_A8EA0C; /*0x48c2cb*/
        LOBYTE(v24) = this == (_DWORD *)dword_A8EA0C; /*0x48c2d7*/
        (*(void (__thiscall **)(_DWORD *, __int16 *, int, _DWORD, _DWORD, int, _DWORD))(*this + 36))( /*0x48c2ea*/
          this,
          &v25,
          14,
          0,
          0,
          v24,
          0);
        return 1; /*0x48c2f9*/
      }
      v13 = (_DWORD *)this->PlayerIndex; /*0x48c1a1*/
      v14 = 0; /*0x48c1a4*/
      if ( (int)v13[14] > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v13, v14); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v16 = *(_DWORD *)(TileType + 12); /*0x48c1b7*/
            if ( !*(_BYTE *)(v16 + 2) && *(_DWORD *)(v16 + 4) == *(_DWORD *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v13 = (_DWORD *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v14 < v13[14] ); /*0x48c1ae*/
      }
      if ( (*(_DWORD *)(this->PlayerIndex + 8) - *(_DWORD *)(this->PlayerIndex + 56) > 1 || *(_DWORD *)(a2 + 4) == this->q044 + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot(a2, a3, 0, 0) )
      {
        v17 = this->q044 + 1; /*0x48c23f*/
        ++this->q038; /*0x48c240*/
        v18 = *(_DWORD *)(a2 + 4); /*0x48c243*/
        if ( v18 == v17 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v19 = (_DWORD *)this->PlayerIndex; /*0x48c24a*/
            this->q044 = v18; /*0x48c24d*/
            v20 = 0; /*0x48c250*/
            if ( (int)v19[14] <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v21 = Terrain::GetTileType(v19, v20); /*0x48c25a*/
              if ( v21 ) /*0x48c261*/
              {
                v22 = *(_DWORD *)(v21 + 12); /*0x48c263*/
                if ( !*(_BYTE *)(v22 + 2) && *(_DWORD *)(v22 + 4) == this->q044 + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v19 = (_DWORD *)this->PlayerIndex; /*0x48c278*/
              if ( ++v20 >= v19[14] ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v18 = *(_DWORD *)(v22 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = (_DWORD *)this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( (int)v6[10] > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (_DWORD *)Terrain::GetTileIndex(v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v9 + 4) && !*(_BYTE *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = (_DWORD *)this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= v6[10] ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}



// ==== 0x0048C320  ConnectionClass::processTileUpdate  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ProcessTileUpdate(_DWORD *this, void *a2, signed int *a3)
{
  int v4; // esi
  _DWORD *v5; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  signed int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  v5 = (_DWORD *)this->PlayerIndex; /*0x48c328*/
  if ( (int)v5[14] <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(v5, v4); /*0x48c333*/
    if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(_DWORD *)(TileType + 12); /*0x48c341*/
    v8 = *(_BYTE *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(_DWORD *)(v7 + 4) == this->q048 + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    v5 = (_DWORD *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= v5[14] ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this->q048 = *(_DWORD *)(v7 + 4); /*0x48c370*/
LABEL_10:
  v10 = *(_DWORD *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(_DWORD *)(TileType + 8) == 14; /*0x48c37e*/
  *(_DWORD *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(_DWORD *)(TileType + 12) + 14), v10); /*0x48c395*/
  *a3 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/
}



// ==== 0x0048C3B0  ConnectionClass::IsValid  this=ConnectionClass  sig=csp ====
BOOL __thiscall COMObject_IsValid(void *this)
{
  return (*(int (__thiscall **)(void *))(this->q01C)(this) /*0x48c3cc*/
      && (*(int (__thiscall **)(void *))(this->q020)(this);
}



// ==== 0x0048C3E0  ConnectionClass::serviceSendQueue  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ServiceSendQueue(unsigned int *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int TileIndex; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x48c3e9*/
  v21 = 0; /*0x48c3eb*/
  v3 = (_DWORD *)this->PlayerIndex; /*0x48c3f3*/
  if ( (int)v3[10] > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex(v3, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(_BYTE *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = g_PerformanceTickOffset; /*0x48c419*/
          if ( g_LastPerformanceTick != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - g_LastPerformanceTick; /*0x48c434*/
          ConnectionClass::initQueue(v6 - *(_DWORD *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry(0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      v3 = (_DWORD *)this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < v3[10] ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(_DWORD *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((_DWORD *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(_BYTE *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = g_PerformanceTickOffset; /*0x48c48e*/
      if ( g_LastPerformanceTick != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - g_LastPerformanceTick; /*0x48c4a9*/
      v10 = *(_DWORD *)(v8 + 8); /*0x48c4ab*/
      if ( v9 - v10 > this->q028 ) /*0x48c4b7*/
      {
        v11 = dword_A8EA0C; /*0x48c4bd*/
        LOWORD(v10) = *(_WORD *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (unsigned int *)dword_A8EA0C; /*0x48c4cb*/
        (*(void (__thiscall **)(unsigned int *, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*this + 36))( /*0x48c4e2*/
          this,
          *(_DWORD *)(v8 + 20),
          *(_DWORD *)(v8 + 16),
          *(_DWORD *)(v8 + 28),
          *(_DWORD *)(v8 + 24),
          v11,
          v10);
        v12 = *(_DWORD *)(v8 + 12); /*0x48c4e5*/
        *(_DWORD *)(v8 + 8) = v9; /*0x48c4e8*/
        if ( v12 ) /*0x48c4ed*/
        {
          ++this->Active; /*0x48c503*/
        }
        else
        {
          v13 = *(_DWORD *)(v8 + 20); /*0x48c4ef*/
          *(_DWORD *)(v8 + 4) = v9; /*0x48c4f2*/
          if ( *(_BYTE *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(_DWORD *)v8; /*0x48c4fb*/
            LOBYTE(v14) = *(_DWORD *)v8 | 2; /*0x48c4fd*/
            *(_DWORD *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(_DWORD *)(v8 + 12) + 1; /*0x48c509*/
        *(_DWORD *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = this->q02C; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(_DWORD *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(_DWORD *)v8 | 4; /*0x48c525*/
          *(_DWORD *)v8 = v17; /*0x48c527*/
        }
        v18 = this->LastPacketTime; /*0x48c529*/
        if ( v18 != -1 && *(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 4) > v18 ) /*0x48c53b*/
        {
          v19 = *(_DWORD *)v8; /*0x48c53d*/
          v21 = 1; /*0x48c53f*/
          LOBYTE(v19) = *(_DWORD *)v8 | 4; /*0x48c547*/
          *(_DWORD *)v8 = v19; /*0x48c549*/
        }
      }
    }
    ++v7; /*0x48c54f*/
  }
  while ( v7 < v22 ); /*0x48c552*/
  if ( !v21 ) /*0x48c55e*/
    return 1; /*0x48c57a*/
  Debug::Log(); /*0x48c565*/
  return 0; /*0x48c56f*/
}



// ==== 0x0048C590  ConnectionClass::StubReturnFalse  this=ConnectionClass  sig=csp ====
int ConnectionClass::_vt06()
{
  return 0; /*0x48c592*/
}



// ==== 0x0048C5A0  ConnectionClass::connect  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::_vt08(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int TileType; // eax
  int v5; // eax

  v2 = 0; /*0x48c5a4*/
  v3 = (_DWORD *)this->PlayerIndex; /*0x48c5a6*/
  if ( (int)v3[14] > 0 ) /*0x48c5ae*/
  {
    do /*0x48c5e7*/
    {
      TileType = Terrain::GetTileType(v3, v2); /*0x48c5b1*/
      if ( (*(_BYTE *)TileType & 2) != 0 ) /*0x48c5b9*/
      {
        v5 = *(_DWORD *)(TileType + 12); /*0x48c5bb*/
        if ( *(_BYTE *)(v5 + 2) == 1 || *(_DWORD *)(v5 + 4) < this->q044 ) /*0x48c5cc*/
          PacketQueue::ReleaseEntry((_DWORD *)this->PlayerIndex, 0, 0, v2--, 0, 0); /*0x48c5da*/
      }
      v3 = (_DWORD *)this->PlayerIndex; /*0x48c5e0*/
      ++v2; /*0x48c5e3*/
    }
    while ( v2 < v3[14] ); /*0x48c5e7*/
  }
  return 1; /*0x48c5e9*/
}



// ==== 0x0048C650  ConnectionClass::QueryInterface  this=ConnectionClass  sig=csp ====
_DWORD *__thiscall ConnectionClass::_vt00(_DWORD *Block, char a2)
{
  void *v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = (void *)*(Block + 8); /*0x48c653*/
  *Block = &ConnectionClass::`vftable'; /*0x48c656*/
  __3_YAXPAX_Z(v3); /*0x48c65d*/
  v4 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x48c662*/
  if ( v4 ) /*0x48c66a*/
    (**v4)(v4, 1); /*0x48c670*/
  if ( (a2 & 1) != 0 ) /*0x48c677*/
    __3_YAXPAX_Z(Block); /*0x48c67a*/
  return Block; /*0x48c684*/
}



// ==== 0x0048C690  sub_48C690  this=-  sig=ida-proto ====
int sub_48C690()
{
  dword_89E930 = 0; /*0x48c692*/
  dword_89E934 = 0; /*0x48c697*/
  dword_89E938 = 0; /*0x48c69c*/
  dword_89E93C = 0; /*0x48c6a1*/
  return 0; /*0x48c6a6*/
}



// ==== 0x0048C6B0  sub_48C6B0  this=-  sig=ida-proto ====
void sub_48C6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48c6bc*/
  dbl_89E948 = Math::Sqrt(v0 + v0); /*0x48c6ce*/
}



// ==== 0x0048C6E0  sub_48C6E0  this=-  sig=ida-proto ====
void sub_48C6E0()
{
  dbl_89E9A0 = dbl_89E948 / 60.0; /*0x48c6ec*/
}



// ==== 0x0048C700  sub_48C700  this=-  sig=ida-proto ====
void sub_48C700()
{
  dbl_89E988 = 1.0 / dbl_89E9A0; /*0x48c70c*/
}



// ==== 0x0048C720  sub_48C720  this=-  sig=ida-proto ====
void sub_48C720()
{
  dbl_89E980 = 0.0174532925199433 * 45.0; /*0x48c72c*/
}



// ==== 0x0048C740  sub_48C740  this=-  sig=ida-proto ====
void sub_48C740()
{
  dbl_89E958 = 0.0174532925199433 * 60.0; /*0x48c74c*/
}



// ==== 0x0048C760  sub_48C760  this=-  sig=ida-proto ====
void sub_48C760()
{
  dbl_89E918 = 0.0174532925199433 * 90.0; /*0x48c76c*/
}



// ==== 0x0048C780  sub_48C780  this=-  sig=ida-proto ====
__int64 sub_48C780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E918 - dbl_89E958); /*0x48c792*/
  result = Math::RoundToInt(v0 * dbl_89E948 * 0.5); /*0x48c7a6*/
  dword_89E9A8 = result; /*0x48c7ab*/
  return result; /*0x48c7b0*/
}



// ==== 0x0048C7C0  sub_48C7C0  this=-  sig=ida-proto ====
void sub_48C7C0()
{
  dbl_89E960 = Math::ArcTan((double)dword_89E9A8 * 0.00390625); /*0x48c7d7*/
}



// ==== 0x0048C7F0  sub_48C7F0  this=-  sig=ida-proto ====
void sub_48C7F0()
{
  dbl_89E978 = Math::ArcTan((double)(2 * dword_89E9A8) / dbl_89E948); /*0x48c812*/
}



// ==== 0x0048C820  sub_48C820  this=-  sig=ida-proto ====
__int64 sub_48C820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89E9A8) + 0.5); /*0x48c83b*/
  dword_89E99C = result; /*0x48c840*/
  return result; /*0x48c846*/
}



// ==== 0x0048C850  sub_48C850  this=-  sig=ida-proto ====
int sub_48C850()
{
  word_89E940 = 0; /*0x48c852*/
  word_89E942 = 0; /*0x48c858*/
  return 0; /*0x48c85e*/
}



// ==== 0x0048C860  sub_48C860  this=-  sig=ida-proto ====
int sub_48C860()
{
  dword_89E968 = 0; /*0x48c862*/
  dword_89E96C = 0; /*0x48c867*/
  dword_89E970 = 0; /*0x48c86c*/
  return 0; /*0x48c871*/
}



// ==== 0x0048C880  sub_48C880  this=-  sig=ida-proto ====
int sub_48C880()
{
  dword_89E998 = 0; /*0x48c885*/
  dword_89E990 = 128; /*0x48c88f*/
  dword_89E994 = 128; /*0x48c894*/
  return 128; /*0x48c899*/
}



// ==== 0x0048C8A0  nullsub_112  this=-  sig=ida-proto ====
void nullsub_112()
{
  ; /*0x48c8a0*/
}



// ==== 0x0048C8B0  ObjectClass::MainGameFrame  this=ObjectClass  sig=csp ====
int Main_Game_Frame()
{
  int result; // eax
  int v1; // eax
  bool v2; // zf
  const void *v3; // eax
  const void *v4; // eax
  LPARAM v5; // eax
  const void *v6; // eax
  char v7; // [esp+7h] [ebp-155h] BYREF
  _BYTE v8[4]; // [esp+8h] [ebp-154h] BYREF

  result = g_MainGameState; /*0x48c8b0*/
  if ( !g_MainGameState ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( g_GameMode_Current ) /*0x48c8cc*/
  {
    result = HouseClass_Player; /*0x48c8ce*/
    if ( *(_BYTE *)(HouseClass_Player + 504) /*0x48c8ef*/
      || *(_BYTE *)(HouseClass_Player + 503)
      || *(_BYTE *)(HouseClass_Player + 502) )
    {
      goto LABEL_15; /*0x48c8f7*/
    }
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( *(_BYTE *)(HouseClass_Player + 501) ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      g_MainGameState = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(); /*0x48c918*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x48c925*/
  while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x48c930*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x48c93f*/
  v1 = g_MainGameState; /*0x48c951*/
  if ( g_MainGameState ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v1 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v1 = g_MainGameState; /*0x48c9bf*/
          v2 = g_MainGameState == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( g_MenuStateFlags ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(); /*0x48cb42*/
          }
          else if ( !*(_BYTE *)(HouseClass_Player + 501) /*0x48cb7b*/
                 && !*(_BYTE *)(HouseClass_Player + 503)
                 && !*(_BYTE *)(HouseClass_Player + 504)
                 && !*(_BYTE *)(HouseClass_Player + 502) )
          {
            v5 = GetStringCSF(aTxtSurrender, (int)g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(v5) ) /*0x48cba1*/
            {
              v6 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cbc0*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cbcf*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v6, 0x6Fu); /*0x48cbeb*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cbfc*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cc13*/
                ++Networking_LastEventIndex; /*0x48cc19*/
              }
              Network::AddFrameEvent(); /*0x48cc1e*/
              g_GameLoopActive = 0; /*0x48cc23*/
            }
          }
          goto LABEL_44; /*0x48cb47*/
        case 3: /*0x48c968*/
          switch ( ShowGameDialog() ) /*0x48ca2d*/
          {
            case 2: /*0x48ca2d*/
              goto LABEL_34;
            case 3: /*0x48ca2d*/
              v3 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48ca43*/
              if ( Networking_LastEventIndex < 128 ) /*0x48ca52*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v3, 0x6Fu); /*0x48ca6e*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48ca7f*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48ca96*/
                ++Networking_LastEventIndex; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v4 = (const void *)EventClass::AddEvent(*(_DWORD *)(HouseClass_Player + 48), 8); /*0x48cac4*/
              if ( Networking_LastEventIndex < 128 ) /*0x48cad3*/
              {
                qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v4, 0x6Fu); /*0x48caef*/
                g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x48cb00*/
                Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x48cb17*/
                ++Networking_LastEventIndex; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              byte_8B41C0 = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(g_GameModeOptions); /*0x48ca08*/
          v1 = 5; /*0x48ca0d*/
          g_MainGameState = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog(v8); /*0x48c9cd*/
          v1 = g_MainGameState; /*0x48c9d2*/
          if ( g_MainGameState != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v1 = 1; /*0x48c9dc*/
          g_MainGameState = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(&v7); /*0x48c9ef*/
          v1 = 5; /*0x48c9f4*/
          g_MainGameState = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog(&MapClass_Instance); /*0x48c99d*/
          v1 = g_MainGameState; /*0x48c9a2*/
          v2 = g_MainGameState == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v2 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing(g_ScenarioClass_Instance); /*0x48c975*/
          v1 = g_MainGameState; /*0x48c97a*/
          if ( g_MainGameState != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          g_MainGameState = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v1 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  UpdateWindow(g_hWnd); /*0x48cc37*/
  if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) ) /*0x48cc4b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x48cc5d*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 24))(g_WWMouseClass_Instance); /*0x48cc68*/
  WTFMode::Init(&g_GameMode_Current); /*0x48cc70*/
  return PostFrameCleanup(); /*0x48c990*/
}



// ==== 0x0048CCC0  ObjectClass::MainGame  this=ObjectClass  sig=csp ====
int Main_Game()
{
  int result; // eax
  const WCHAR *v1; // eax
  const WCHAR *v2; // eax
  int v3; // ecx
  char v4; // cl
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  _BYTE v10[8]; // [esp+0h] [ebp-1C30h] BYREF
  CHAR MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  CHAR v12[2048]; // [esp+1408h] [ebp-828h] BYREF
  MSGBOXPARAMSA mbp; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  result = InitGame(); /*0x48cccf*/
  if ( result ) /*0x48ccd8*/
  {
    if ( result < 0 ) /*0x48ccde*/
    {
      v1 = (const WCHAR *)GetStringCSF(aTxtInitgameFai, (int)g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      WideCharToMultiByte(0, 0, v1, -1, MultiByteStr, 5120, 0, 0); /*0x48cd13*/
      v2 = (const WCHAR *)GetStringCSF(g_Str_TXT_SHORT_TITLE, (int)g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      WideCharToMultiByte(0, 0, v2, -1, v12, 2048, 0, 0); /*0x48cd3e*/
      mbp.hInstance = g_hInstance; /*0x48cd4b*/
      mbp.hwndOwner = g_hWnd; /*0x48cd4e*/
      mbp.cbSize = 40; /*0x48cd61*/
      mbp.lpszText = MultiByteStr; /*0x48cd68*/
      mbp.lpszCaption = v12; /*0x48cd6b*/
      mbp.dwStyle = 327696; /*0x48cd6e*/
      memset(&mbp.lpszIcon, 0, 12); /*0x48cd75*/
      mbp.dwLanguageId = 1024; /*0x48cd7e*/
      return MessageBoxIndirectA(&mbp); /*0x48cd85*/
    }
    return result; /*0x48cd90*/
  }
  g_ExceptionReturnStack = (int)v10; /*0x48cd91*/
  g_ExceptionReturnFrame = (int)&savedregs; /*0x48cd97*/
  g_ExceptionReturnAddr = (int)&loc_48CDA8; /*0x48cda3*/
  Debug::Log("ExceptionReturnStack = %08X\n", v10); /*0x48cdb4*/
  Debug::Log("ExceptionReturnAddress = %08X\n", g_ExceptionReturnAddr); /*0x48cdc5*/
  LOBYTE(v3) = g_MenuReturnState; /*0x48cdca*/
  for ( result = MenuSelect(v3); (_BYTE)result; result = MenuSelect(v7) ) /*0x48cdd3*/
  {
    g_IKnowWhatImDoing = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(0); /*0x48cdfd*/
    Timer::PumpMessages(g_BinkMoviePlayer); /*0x48ce08*/
    if ( (g_NetworkEventPending & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x48ce1e*/
      dword_ABCDFC = 0; /*0x48ce21*/
      dword_ABCE00 = 0; /*0x48ce27*/
    }
    if ( g_GameMode_Current == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      g_SkirmishInitFlag = 0; /*0x48ce3a*/
      g_SkirmishSettings = 0; /*0x48ce40*/
      g_SkirmishFlag = 0; /*0x48ce46*/
    }
    if ( g_TacticalRender ) /*0x48ce54*/
      Tooltip::Enable(byte_A8EB80); /*0x48ce5d*/
    v4 = *((_BYTE *)g_ScenarioClass_Instance + 13730); /*0x48ce67*/
    g_MainGameState = 0; /*0x48ce6d*/
    g_GameActive = v4; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&g_GameMode_Current); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( (unsigned __int8)GameFrameLoop() && (unsigned __int8)GameFrameCheck() ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(); /*0x48ce9c*/
    }
    while ( !(unsigned __int8)GameFrameCheck() ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&g_GameMode_Current); /*0x48ceb4*/
    g_BounceClassInit = 0; /*0x48cebf*/
    g_FramePresent_State = 0; /*0x48cec7*/
    if ( g_FrameCounter_Samples ) /*0x48cecd*/
      v5 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x48ced6*/
    else
      v5 = 0; /*0x48ceda*/
    Debug::Log("Game loop finished. Average FPS = %d\n", v5); /*0x48cee2*/
    DumpNetworkStats(); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(0); /*0x48cf02*/
    LOBYTE(v6) = 1; /*0x48cf07*/
    ScreenSaver::Process(v6); /*0x48cf09*/
    if ( (g_NetworkEventPending & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&g_MainLoopObject); /*0x48cf1c*/
    v8 = g_GameMode_Current; /*0x48cf21*/
    if ( g_GameMode_Current == 2 || g_GameMode_Current == 1 ) /*0x48cf2e*/
    {
      if ( (g_NetworkEventPending & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_30; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( g_GameMode_Current != 3 ) /*0x48cf33*/
        goto LABEL_31; /*0x48cf33*/
      if ( (g_NetworkEventPending & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_37; /*0x48cf3c*/
      Network::ShutdownInterface(); /*0x48cf3e*/
    }
    v8 = g_GameMode_Current; /*0x48cf53*/
LABEL_30:
    if ( v8 == 3 ) /*0x48cf5b*/
      goto LABEL_34; /*0x48cf5b*/
LABEL_31:
    if ( v8 == 4 || v8 == 2 || v8 == 1 ) /*0x48cf69*/
    {
LABEL_34:
      if ( (g_NetworkEventPending & 2) != 0 ) /*0x48cf72*/
        goto LABEL_37; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings(&g_GameMode_Current); /*0x48cf79*/
    }
    if ( (g_NetworkEventPending & 2) != 0 ) /*0x48cf85*/
    {
LABEL_37:
      v9 = g_NetworkEventPending; /*0x48cf87*/
      LOBYTE(v9) = g_NetworkEventPending & 0xFD; /*0x48cf92*/
      g_GameMode_Current = 0; /*0x48cf94*/
      g_NetworkEventPending = v9; /*0x48cf9a*/
      (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x48cfa1*/
    }
    LOBYTE(v7) = g_MenuReturnState; /*0x48cfa4*/
  }
  if ( g_WWMouseClass_Instance ) /*0x48cfbf*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 20))(g_WWMouseClass_Instance); /*0x48cfc3*/
  return result; /*0x48cd8b*/
}



// ==== 0x0048D080  Event::Dispatch  this=Event  sig=csp ====
char Event_Dispatch()
{
  __time32_t v0; // eax
  _BYTE v2[4]; // [esp+10h] [ebp-100h] BYREF
  _DWORD v3[6]; // [esp+14h] [ebp-FCh] BYREF
  _BYTE v4[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( g_AsyncIOState > 0 && *(_DWORD *)AsyncIO_Instance ) /*0x48d09f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)AsyncIO_Instance + 8))(*(_DWORD *)AsyncIO_Instance); /*0x48d0a7*/
  v0 = g_GameMode_Current; /*0x48d0aa*/
  if ( g_GameMode_Current == 3 || g_GameMode_Current == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    v0 = g_GameMode_Current; /*0x48d0be*/
  }
  if ( v0 == 1 ) /*0x48d0c6*/
  {
    if ( (GameFlags_Campaign & 1) == 0 ) /*0x48d0da*/
      return v0; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( v0 == 2 ) /*0x48d0cb*/
  {
LABEL_11:
    Stream::ReadPacket(&g_EventManager); /*0x48d0e0*/
    if ( *((_BYTE *)g_ScenarioClass_Instance + 13720) && (int)ObjectTypeClass::CreateInstance(v3, v2) > 0 ) /*0x48d10f*/
    {
      do /*0x48d15f*/
      {
        if ( v3[0] == 108 && v4[0] != g_EventDispatchState ) /*0x48d129*/
          Network::UpdateLatencyDisplay(1, (double)*(int *)&v4[1], NAN); /*0x48d144*/
      }
      while ( (int)ObjectTypeClass::CreateInstance(v3, v2) > 0 ); /*0x48d15f*/
    }
    v0 = g_GameMode_Current; /*0x48d161*/
  }
  if ( v0 == 4 ) /*0x48d169*/
  {
    LOBYTE(v0) = byte_B77DC2; /*0x48d16b*/
    if ( !byte_B77DC2 ) /*0x48d172*/
    {
      v0 = time(0); /*0x48d176*/
      if ( v0 != dword_89E9B0 ) /*0x48d186*/
      {
        if ( ppv && !dword_B77DCC ) /*0x48d199*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 12))(ppv); /*0x48d19e*/
        if ( g_UIPointerTable ) /*0x48d1a8*/
          (*(void (__stdcall **)(LPVOID))(*(_DWORD *)g_UIPointerTable + 28))(g_UIPointerTable); /*0x48d1ad*/
        v0 = time(0); /*0x48d1b2*/
        dword_89E9B0 = v0; /*0x48d1ba*/
      }
    }
  }
  return v0; /*0x48d1bf*/
}



// ==== 0x0048D1D0  Event_Dispatch::Return0  this=Event_Dispatch  sig=ida-proto ====
char Event_Dispatch_Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}



// ==== 0x0048D1E0  Network::Dispatch  this=Network  sig=csp ====
char Network_Dispatch()
{
  int v0; // esi
  int i; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  const char *v7; // eax
  LPARAM *v8; // edi
  int v9; // ebx
  const void *v10; // ebp
  const void *v11; // eax
  int v12; // edi
  const char *v13; // eax
  int v14; // ecx
  unsigned __int16 v15; // ax
  const char *v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  const char *v25; // eax
  int v26; // ebx
  const void *v27; // eax
  LPARAM *v28; // esi
  int v29; // edi
  const void *v30; // ebp
  const void *v31; // eax
  int v32; // esi
  unsigned __int16 v33; // si
  int v34; // edi
  int j; // esi
  int v36; // edi
  int v37; // eax
  wchar_t *v38; // esi
  int v39; // eax
  int v40; // esi
  const void *v41; // eax
  char v43; // [esp+8h] [ebp-208h]
  int v44; // [esp+20h] [ebp-1F0h]
  int *v45; // [esp+20h] [ebp-1F0h]
  _WORD *v46; // [esp+24h] [ebp-1ECh]
  int v47; // [esp+24h] [ebp-1ECh]
  int v48; // [esp+28h] [ebp-1E8h] BYREF
  int v49; // [esp+2Ch] [ebp-1E4h] BYREF
  char v50[4]; // [esp+30h] [ebp-1E0h] BYREF
  int v51; // [esp+34h] [ebp-1DCh]
  char v52[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v53; // [esp+40h] [ebp-1D0h] BYREF
  _DWORD v54[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v55; // [esp+A0h] [ebp-170h]
  char v56; // [esp+A2h] [ebp-16Eh]

  if ( (byte_89E950 & 1) == 0 ) /*0x48d1fc*/
  {
    v0 = dword_81D4E4; /*0x48d1fe*/
    byte_89E950 |= 1u; /*0x48d20d*/
    dword_89E920 = Timer::GetTicks(&dword_89E924); /*0x48d218*/
    dword_89E928 = v0; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  Network::ReceiveLoop(&g_NetworkManager); /*0x48d23a*/
  if ( g_GameMode_Current == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = g_NetworkQuitFlag; /*0x48d251*/
    if ( g_NetworkQuitFlag ) /*0x48d258*/
      return i; /*0x48d258*/
    v2 = dword_89E928; /*0x48d263*/
    if ( dword_89E920 != -1 ) /*0x48d26c*/
    {
      v3 = Timer::GetTicks(&dword_89E924) - dword_89E920; /*0x48d278*/
      if ( v3 >= v2 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v2 -= v3; /*0x48d282*/
    }
    if ( !v2 || byte_A8E2A4 ) /*0x48d28f*/
    {
LABEL_10:
      if ( Game_PlayerCount ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        Network::ReceiveLoop(&g_NetworkManager); /*0x48d2ac*/
        if ( !Network::GetQueueCount(&g_NetworkManager) ) /*0x48d2b6*/
        {
          memset(v54, 0, sizeof(v54)); /*0x48d2cc*/
          v55 = 0; /*0x48d2ce*/
          v56 = 0; /*0x48d2d0*/
          v54[0] = 41; /*0x48d2d6*/
          CopyWideToChar(-1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(aSendingNetPort); /*0x48d2f5*/
          HIWORD(v4) = HIWORD(Game_PlayerCount); /*0x48d2fa*/
          v5 = 1; /*0x48d304*/
          if ( Game_PlayerCount > 1 ) /*0x48d306*/
          {
            v46 = (_WORD *)&Network_PlayerPorts + 1; /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v4) = *v46; /*0x48d318*/
              v6 = *v46 == 0; /*0x48d31b*/
              v48 = v4; /*0x48d31e*/
              if ( !v6 ) /*0x48d322*/
              {
                v7 = (const char *)ToWideStringChar(*(_DWORD *)(Game_PlayerInfoArray + 4 * v5)); /*0x48d331*/
                Debug::Log("Sending to %s\n", v7); /*0x48d33c*/
                Network::SendMessage(v54, 91, 0, *(_DWORD *)(Game_PlayerInfoArray + 4 * v5) + 40, v48, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                Network::ReceiveLoop(&g_NetworkManager); /*0x48d375*/
                v44 = 0; /*0x48d37a*/
                v8 = &g_NetworkPlayerName; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v5); /*0x48d38d*/
                  v10 = (const void *)ToWideStringChar(*v8); /*0x48d399*/
                  v11 = (const void *)ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v44; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&g_PlayerNameListEnd ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = g_PerformanceTickOffset; /*0x48d3cc*/
                if ( g_LastPerformanceTick != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks(&unk_88733C) - g_LastPerformanceTick; /*0x48d3e7*/
                if ( v12 - Network_LastPacketTime[v44] > 2400 ) /*0x48d3fa*/
                {
                  v13 = (const char *)ToWideStringChar(*(_DWORD *)(Game_PlayerInfoArray + 4 * v5)); /*0x48d404*/
                  Debug::Log("No PORT_PROBE from %s in the last 40 seconds\n", v13); /*0x48d40f*/
                  v14 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v5); /*0x48d41d*/
                  v15 = *(_WORD *)(v14 + 131); /*0x48d420*/
                  if ( v15 != (_WORD)v48 && v15 >= 0x400u ) /*0x48d432*/
                  {
                    v16 = (const char *)ToWideStringChar(v14); /*0x48d434*/
                    Debug::Log("Sending to %s on mangled port from pserver\n", v16); /*0x48d43f*/
                    v17 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v5); /*0x48d44d*/
                    LOWORD(v18) = *(_WORD *)(v17 + 131); /*0x48d456*/
                    Network::SendMessage(v54, 91, 0, v17 + 40, v18, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v4) = HIWORD(Game_PlayerCount); /*0x48d471*/
              ++v5; /*0x48d47a*/
              ++v46; /*0x48d480*/
            }
            while ( v5 < Game_PlayerCount ); /*0x48d484*/
          }
          v49 = Timer::GetTicks(v50); /*0x48d49d*/
          v51 = 120; /*0x48d4a1*/
          while ( Network::GetQueueCount(&g_NetworkManager) > 0 ) /*0x48d4b0*/
          {
            v19 = v51; /*0x48d4b6*/
            if ( v49 != -1 ) /*0x48d4bd*/
            {
              v20 = Timer::GetTicks(v50) - v49; /*0x48d4c8*/
              if ( v20 >= v19 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v19 -= v20; /*0x48d4d0*/
            }
            if ( v19 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            Network::ReceiveLoop(&g_NetworkManager); /*0x48d4e0*/
          }
          v21 = dword_81D4E4; /*0x48d4f3*/
          dword_89E920 = Timer::GetTicks(&v53); /*0x48d502*/
          dword_89E924 = v53; /*0x48d510*/
          dword_89E928 = v21; /*0x48d515*/
          byte_A8E2A4 = 0; /*0x48d51b*/
          Connection::Close(&g_NetworkManager); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = g_NetworkQuitFlag; /*0x48d527*/
  if ( !g_NetworkQuitFlag ) /*0x48d52e*/
  {
    for ( i = Network::Send(&Network_EventType, &unk_A8D800, &Network_EventValue, &Network_EventHeader); /*0x48d554*/
          i;
          i = Network::Send(&Network_EventType, &unk_A8D800, &Network_EventValue, &Network_EventHeader) )
    {
      if ( Network_EventHeader == -22012 ) /*0x48d563*/
      {
        v22 = Network_EventType; /*0x48d569*/
        switch ( Network_EventType ) /*0x48d583*/
        {
          case 10: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount(&g_NetworkManager); ++j ) /*0x48d828*/
            {
              v36 = Network::GetConnectionSpeed(j); /*0x48d839*/
              v37 = Network::FindPlayerByID(v36); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(v37) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(v36, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 12: /*0x48d583*/
            if ( (!byte_A8D60D || dword_A8D74C == WideString::Hash(&g_CurrentPlayerName)) /*0x48d925*/
              && (!g_Network_IsHosting
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 111))
                 & (unsigned __int8)qword_A8D667) != 0) )
            {
              v38 = (wchar_t *)CharToWideString(g_NetworkPlayerBuffer); /*0x48d935*/
              v43 = Math::RoundToInt(*((double *)g_RulesClass_Instance + 664) * 900.0); /*0x48d955*/
              v39 = SessionClass::GetPlayerColorScheme(dword_A8D748); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                v38,
                dword_A8D748,
                (wchar_t *)((char *)&qword_A8D667 + 1),
                v39,
                16454,
                v43,
                0);
              PlayVocClass(1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw(2); /*0x48d9a1*/
              wcscpy((wchar_t *)&dword_A8D110 + 1, (wchar_t *)((char *)&qword_A8D667 + 1)); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 15: /*0x48d583*/
            Debug::Log(aProcessingNetP); /*0x48da4a*/
            v40 = 0; /*0x48da57*/
            if ( Game_PlayerCount > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&Network_EventValue) ) /*0x48da6e*/
                {
                  v41 = (const void *)ToWideStringChar(*(_DWORD *)(Game_PlayerInfoArray + 4 * v40)); /*0x48da85*/
                  if ( !_strcmpi(v41, g_NetworkPlayerBuffer) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v40 >= Game_PlayerCount ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay(v40, (double)*(int *)&qword_A8D667, NAN); /*0x48dabd*/
            }
            break; /*0x48dac2*/
          case 16: /*0x48d583*/
          case 19: /*0x48d583*/
            break;
          case 28: /*0x48d583*/
            Network::syncGameState(&Network_EventType, &Network_EventValue); /*0x48d594*/
            break; /*0x48d599*/
          case 29: /*0x48d583*/
            if ( (!byte_A8D60D || *(_DWORD *)(&qword_A8D667 + 3) == WideString::Hash(&g_CurrentPlayerName)) /*0x48da2f*/
              && (!g_Network_IsHosting
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)Game_PlayerInfoArray + 111))
                 & (unsigned __int8)qword_A8D667) != 0)
              && ((_BYTE)dword_A8D110 && g_GameMode_Current == 3 || BYTE1(dword_A8D110) && g_GameMode_Current == 4) )
            {
              LOBYTE(v22) = HIBYTE(qword_A8D667); /*0x48da35*/
              PlayTauntClass(v22); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 32: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              SBYTE1(dword_A8D673),
              *(_DWORD *)&qword_A8D667,
              *((_DWORD *)&qword_A8D667 + 1),
              dword_A8D66F,
              (char)dword_A8D673);
            break; /*0x48d7d0*/
          case 33: /*0x48d583*/
            Network::SendBeaconDelete(SBYTE1(dword_A8D673), (char)dword_A8D673); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 34: /*0x48d583*/
            Network::SendBeacon(&qword_A8D667 + 1, SHIBYTE(qword_A8D667), (char)qword_A8D667, 0); /*0x48d810*/
            break; /*0x48d815*/
          case 39: /*0x48d583*/
            if ( g_GameMode_Current == 4 ) /*0x48d5a4*/
            {
              if ( g_Network_IsHosting ) /*0x48d5b1*/
              {
                v23 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount(&g_NetworkManager) > 0 ) /*0x48d5c5*/
                {
                  while ( Network::GetConnectionSpeed(v23) != *(_DWORD *)&qword_A8D667 ) /*0x48d5de*/
                  {
                    if ( ++v23 >= Network::GetSendCount(&g_NetworkManager) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  v24 = Network::GetClass(*(_DWORD *)&qword_A8D667); /*0x48d5fa*/
                  v25 = (const char *)ToWideStringChar(v24); /*0x48d601*/
                  Debug::Log("Got NET_IM_STILL_HERE packet from %s.\n", v25); /*0x48d60c*/
                  Network_Helper_646DF0(v23); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 41: /*0x48d583*/
            Debug::Log( /*0x48d635*/
              "Got NET_PORT_PROBE packet from %s - port = %d\n",
              g_NetworkPlayerBuffer,
              (unsigned __int16)Network_EventValue);
            v26 = 0; /*0x48d642*/
            if ( Game_PlayerCount > 0 ) /*0x48d646*/
            {
              v45 = &Network_PlayerPorts; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&Network_EventValue) ) /*0x48d665*/
                {
                  v27 = (const void *)ToWideStringChar(*(_DWORD *)(Game_PlayerInfoArray + 4 * v26)); /*0x48d680*/
                  if ( !_strcmpi(v27, g_NetworkPlayerBuffer) ) /*0x48d686*/
                  {
                    v47 = 0; /*0x48d696*/
                    v28 = &g_NetworkPlayerName; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v29 = *(_DWORD *)(Game_PlayerInfoArray + 4 * v26); /*0x48d6a6*/
                      v30 = (const void *)ToWideStringChar(*v28); /*0x48d6b0*/
                      v31 = (const void *)ToWideStringChar(v29); /*0x48d6b2*/
                      if ( !_strcmpi(v30, v31) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v28; /*0x48d6c9*/
                      ++v47; /*0x48d6d3*/
                      if ( (int)v28 >= (int)&g_PlayerNameListEnd ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v32 = g_PerformanceTickOffset; /*0x48d6e0*/
                    if ( g_LastPerformanceTick != -1 ) /*0x48d6e9*/
                      v32 += Timer::GetTicks(&unk_88733C) - g_LastPerformanceTick; /*0x48d6fb*/
                    Network_LastPacketTime[v47] = v32; /*0x48d701*/
LABEL_56:
                    v33 = Network_EventValue; /*0x48d708*/
                    if ( (_WORD)Network_EventValue != *(_WORD *)(*(_DWORD *)(Game_PlayerInfoArray + 4 * v26) + 40) /*0x48d724*/
                      || (_WORD)Network_EventValue != *(_WORD *)v45 )
                    {
                      Debug::Log(aStrangePortNum); /*0x48d72b*/
                      v34 = *(unsigned __int16 *)v45; /*0x48d739*/
                      if ( !v33 ) /*0x48d73f*/
                        v33 = 1234; /*0x48d741*/
                      *(_WORD *)v45 = v33; /*0x48d746*/
                      Network::SetPort(v33); /*0x48d756*/
                      Debug::Log("Adjusting port number for player %s from %d to %d\n", g_NetworkPlayerBuffer, v34, v33); /*0x48d76d*/
                    }
                  }
                }
                ++v26; /*0x48d77e*/
                v45 = (int *)((char *)v45 + 2); /*0x48d784*/
              }
              while ( v26 < Game_PlayerCount ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 47: /*0x48d583*/
            Debug::Log("Got NET_PORT_UNREACHABLE message from %s\n", g_NetworkPlayerBuffer); /*0x48d87c*/
            if ( g_GameMode_Current == 4 && g_NetworkInterface ) /*0x48d898*/
            {
              Network::processAcknowledgment(g_NetworkPlayerBuffer); /*0x48d8a8*/
              Network::GetAddress(v52, &v49, &v48); /*0x48d8be*/
              (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)g_NetworkInterface + 120))( /*0x48d8d5*/
                g_NetworkInterface,
                &v49,
                v48);
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&Network_EventType, &Network_EventValue); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      Network::ReceiveLoop(&g_NetworkManager); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/
}



// ==== 0x0048DB70  nullsub_8  this=-  sig=ida-proto ====
void __cdecl nullsub_8()
{
  ; /*0x48db70*/
}



// ==== 0x0048DB80  HouseClass::FindHouseIndexByName  this=ObjectClass  sig=csp ====
int __thiscall sub_48DB80(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48db87*/
    return -1; /*0x48dbac*/
  v2 = 0; /*0x48db89*/
  v3 = (const void **)&off_7E1B60; /*0x48db8b*/
  while ( _strcmpi(*v3, this) ) /*0x48db9e*/
  {
    ++v3; /*0x48dba0*/
    ++v2; /*0x48dba3*/
    if ( (int)v3 >= (int)&dword_7E1B74 ) /*0x48dbaa*/
      return -1; /*0x48dbaa*/
  }
  return v2; /*0x48dbac*/
}



// ==== 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  this=ObjectClass  sig=csp ====
int __thiscall sub_48DBE0(void *this)
{
  int v2; // edi
  const char *v3; // esi

  v2 = 0; /*0x48dbe5*/
  v3 = "TEMPERATE"; /*0x48dbe7*/
  while ( _strcmpi(this, v3) ) /*0x48dbf8*/
  {
    v3 += 112; /*0x48dbfa*/
    ++v2; /*0x48dbfd*/
    if ( (int)v3 >= (int)&dbl_7E1E18 ) /*0x48dc04*/
      return -1; /*0x48dc0c*/
  }
  return v2; /*0x48dc06*/
}



// ==== 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  this=MapClass  sig=csp ====
int MapClass_UnselectAll_ClearLimboLaunchers()
{
  int result; // eax
  int v1; // esi
  int v2; // edx
  int *v3; // ecx

  while ( g_SelectionManager ) /*0x48dc97*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)g_ObjectClass_CurrentCount + 336))(*(_DWORD *)g_ObjectClass_CurrentCount); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v3 = g_VisibilitySystem; /*0x48dcb8*/
  result = dword_89C410; /*0x431060*/
  if ( dword_89C410 ) /*0x431065*/
  {
    v1 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v2 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v3; /*0x431075*/
        if ( *v3 ) /*0x431075*/
          *(_BYTE *)(result + 12) &= ~2u; /*0x43107b*/
        ++v3; /*0x43107e*/
        --v2; /*0x431081*/
      }
      while ( v2 ); /*0x431082*/
      --v1; /*0x431084*/
    }
    while ( v1 ); /*0x431085*/
  }
  return result; /*0x431089*/
}



// ==== 0x0048DCD0  TechnoTypeClass::GetByTypeAndIndex  this=TechnoTypeClass  sig=csp ====
int __fastcall FactoryClass_LookupType(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)g_UnitTypeCount2 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)g_AircraftTypeCount + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)g_TriggerTypeCount + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)Factory_ExitCellTable + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return result; /*0x48dcef*/
}



// ==== 0x0048DD50  DiskSpace::CheckAvailable  this=DiskSpace  sig=ida-proto ====
DWORD DiskSpace_CheckAvailable()
{
  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // esi
  int v2; // esi
  DWORD v4; // esi
  DWORD SectorsPerCluster; // [esp+4h] [ebp-28h] BYREF
  DWORD BytesPerSector; // [esp+8h] [ebp-24h] BYREF
  DWORD NumberOfFreeClusters; // [esp+Ch] [ebp-20h] BYREF
  DWORD TotalNumberOfClusters; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v9[2]; // [esp+14h] [ebp-18h] BYREF
  _BYTE v10[8]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v11[8]; // [esp+24h] [ebp-8h] BYREF

  Debug::Log(); /*0x48dd59*/
  ModuleHandleA = GetModuleHandleA(ModuleName); /*0x48dd66*/
  if ( ModuleHandleA ) /*0x48dd6e*/
  {
    ProcAddress = GetProcAddress(ModuleHandleA, ProcName); /*0x48dd80*/
    if ( ProcAddress ) /*0x48dd84*/
    {
      Debug::Log(); /*0x48dd8b*/
      if ( ((unsigned __int8 (__stdcall *)(_DWORD, _DWORD *, _BYTE *, _BYTE *))ProcAddress)(0, v9, v11, v10) ) /*0x48dda4*/
      {
        v2 = Math::RoundToInt(((double)v9[1] * 4294967296.0 + (double)v9[0]) * 0.0009765625); /*0x48dddb*/
        Debug::Log(); /*0x48dde6*/
        return v2; /*0x48ddf4*/
      }
      GetLastError(); /*0x48ddac*/
      Debug::Log(); /*0x48ddb8*/
    }
    else
    {
      GetLastError(); /*0x48ddf7*/
      Debug::Log(); /*0x48de03*/
    }
  }
  else
  {
    Debug::Log(); /*0x48de12*/
  }
  if ( !GetDiskFreeSpaceA(0, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters) ) /*0x48de30*/
    return 0; /*0x48de65*/
  v4 = NumberOfFreeClusters * ((BytesPerSector * SectorsPerCluster) >> 10); /*0x48de46*/
  Debug::Log(); /*0x48de56*/
  return v4; /*0x48ddf0*/
}



// ==== 0x0048DE70  INIClass::readSection  this=INIClass  sig=csp ====
int __thiscall sub_48DE70(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48de77*/
    return 0; /*0x48de9c*/
  v2 = 0; /*0x48de79*/
  v3 = (const void **)&off_7E523C; /*0x48de7b*/
  while ( _strcmpi(this, *v3) ) /*0x48de8e*/
  {
    ++v3; /*0x48de90*/
    ++v2; /*0x48de93*/
    if ( (int)v3 >= (int)&off_7E5288 ) /*0x48de9a*/
      return 0; /*0x48de9a*/
  }
  return v2; /*0x48de9c*/
}



// ==== 0x0048DEB0  ObjectClass::COMStub_48DEB0  this=IUnknown  sig=csp ====
int __thiscall sub_48DEB0(void *this)
{
  int v1; // eax

  v1 = SuperWeaponTypeClass::FindByName(this); /*0x48deb3*/
  if ( v1 == -1 ) /*0x48debd*/
    return 0; /*0x48dec8*/
  else
    return 1 << v1; /*0x48dec5*/
}



// ==== 0x0048DED0  ObjectClass::nullsub_51  this=ObjectClass  sig=csp ====
void nullsub_51()
{
  ; /*0x48ded0*/
}



// ==== 0x0048DEE0  sub_48DEE0  this=-  sig=csp ====
void __fastcall sub_48DEE0(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf

  if ( a1 ) /*0x48dee4*/
  {
    v3 = a3; /*0x48dee6*/
    if ( a3 ) /*0x48deec*/
    {
      if ( a2 <= 0 ) /*0x48def5*/
      {
LABEL_7:
        *(_DWORD *)(v3 - 4) = 2147450879; /*0x48df11*/
      }
      else
      {
        while ( 1 ) /*0x48def9*/
        {
          v4 = (unsigned __int16)*a1 == 0x7FFF; /*0x48def9*/
          *(_DWORD *)v3 = *a1; /*0x48defc*/
          if ( v4 && *(_WORD *)(v3 + 2) == 0x7FFF ) /*0x48df04*/
            break; /*0x48df04*/
          v3 += 4; /*0x48df06*/
          ++a1; /*0x48df09*/
          if ( --a2 <= 0 ) /*0x48df0f*/
            goto LABEL_7; /*0x48df0f*/
        }
      }
    }
  }
}



// ==== 0x0048DF30  ObjectClass::LookupNameIndex  this=ObjectClass  sig=csp ====
int __thiscall LookupNameIndex(void *this)
{
  int v2; // esi

  if ( !this ) /*0x48df36*/
    return -1; /*0x48df36*/
  if ( !_strcmpi(g_Str__none_, this) ) /*0x48df3e*/
    return -1; /*0x48df3e*/
  v2 = 0; /*0x48df4f*/
  if ( dword_ABF3A0 <= 0 ) /*0x48df53*/
    return -1; /*0x48df75*/
  while ( _strcmpi(this, *((const void **)dword_ABF394 + v2)) ) /*0x48df69*/
  {
    if ( ++v2 >= dword_ABF3A0 ) /*0x48df73*/
      return -1; /*0x48df73*/
  }
  return v2; /*0x48df75*/
}



// ==== 0x0048DF80  OverlayTypeClass::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall sub_48DF80(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !_strcmpi(g_Str__none_, this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = (const void **)off_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)off_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/
}



// ==== 0x0048DFD0  sub_48DFD0  this=-  sig=csp ====
char *__fastcall sub_48DFD0(unsigned int a1)
{
  if ( a1 >= 0xC ) /*0x48dfd3*/
    return g_Str__none_; /*0x48dfdd*/
  else
    return off_81DA28[a1]; /*0x48dfd5*/
}



// ==== 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  this=ObjectClass  sig=csp ====
int __thiscall sub_48DFF0(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = (const void **)off_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, this) ) /*0x48e00e*/
  {
    ++v3; /*0x48e010*/
    ++v2; /*0x48e013*/
    if ( (int)v3 >= (int)off_81DA78 ) /*0x48e01a*/
      return -1; /*0x48e01a*/
  }
  return v2; /*0x48e01c*/
}



// ==== 0x0048E030  sub_48E030  this=-  sig=csp ====
char *__fastcall sub_48E030(unsigned int a1)
{
  if ( a1 >= 8 ) /*0x48e033*/
    return g_Str__none_; /*0x48e03d*/
  else
    return off_81DA58[a1]; /*0x48e035*/
}



// ==== 0x0048E050  AnimTypeClass::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall sub_48E050(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = (const void **)off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, this) ) /*0x48e06e*/
  {
    ++v3; /*0x48e070*/
    ++v2; /*0x48e073*/
    if ( (int)v3 >= (int)&dword_81DA8C ) /*0x48e07a*/
      return -1; /*0x48e07a*/
  }
  return v2; /*0x48e07c*/
}



// ==== 0x0048E090  globalHelper_08E090  this=-  sig=csp ====
char *__fastcall sub_48E090(unsigned int a1)
{
  if ( a1 >= 5 ) /*0x48e093*/
    return g_Str__none_; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}



// ==== 0x0048E0B0  ObjectClass::DumpNetworkStats  this=ObjectClass  sig=csp ====
FILE *sub_48E0B0()
{
  FILE *result; // eax
  FILE *v1; // esi
  unsigned int v2; // eax
  int i; // edi
  _DWORD *v4; // eax
  unsigned __int16 *v5; // edi
  char *v6; // eax

  result = (FILE *)g_GameMode_Current[0]; /*0x48e0b1*/
  if ( g_GameMode_Current[0] == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v1 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", g_CurrentFrame);
      if ( g_FrameCounter_Samples ) /*0x48e0f8*/
        v2 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x48e101*/
      else
        v2 = 0; /*0x48e105*/
      fprintf(v1, "Average FPS: %d\n", v2);
      fprintf(v1, "Max MaxAhead: %d\n", dword_A8B568);
      fprintf(v1, "Latency setting: %d\n", g_NetworkHostState);
      fprintf(v1, "Game speed setting: %d\n", *(_DWORD *)g_GameModeOptions);
      if ( g_NetworkInterface )
      {
        for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)g_NetworkInterface + 72))(g_NetworkInterface); ++i )
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)g_NetworkInterface + 76))(g_NetworkInterface, i); /*0x48e16a*/
          if ( v4 )
            fprintf(
              v1,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v4,
              BYTE1(*v4),
              (unsigned __int8)BYTE2(*v4),
              HIBYTE(*v4));
        }
      }
      v5 = (unsigned __int16 *)&unk_A8B5C4; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v5 - 80) )
        {
          fprintf(v1, "\nName: %s\n", (const char *)v5 - 80);
          v6 = Network::FormatAddress(v5 + 6, 0); /*0x48e1d4*/
          fprintf(v1, "Address: %s\n", v6);
          fprintf(v1, "Max avg round trip: %d\n", *(_DWORD *)v5);
          fprintf(v1, "Max round trip: %d\n", *((_DWORD *)v5 - 4));
          fprintf(v1, "Resends: %d\n", *((_DWORD *)v5 - 3));
          fprintf(v1, "Frame sync stalls: %d\n", *((_DWORD *)v5 + 1));
          fprintf(v1, "Command cound stalls: %d\n", *((_DWORD *)v5 + 2));
          fprintf(v1, "Lost: %d\n", *((_DWORD *)v5 - 2));
          fprintf(v1, "Percent lost: %d\n", *((_DWORD *)v5 - 1));
        }
        v5 += 52; /*0x48e253*/
      }
      while ( (int)v5 < (int)byte_A8B904 );
      return (FILE *)fclose(v1); /*0x48e263*/
    }
  }
  return result; /*0x48e26c*/
}



// ==== 0x0048E270  sub_48E270  this=-  sig=ida-proto ====
int sub_48E270()
{
  dword_89E9C0 = 0; /*0x48e272*/
  dword_89E9C4 = 0; /*0x48e277*/
  dword_89E9C8 = 0; /*0x48e27c*/
  dword_89E9CC = 0; /*0x48e281*/
  return 0; /*0x48e286*/
}



// ==== 0x0048E290  sub_48E290  this=-  sig=ida-proto ====
void sub_48E290()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48e29c*/
  dbl_89E9D8 = Math::Sqrt(v0 + v0); /*0x48e2ae*/
}



// ==== 0x0048E2C0  sub_48E2C0  this=-  sig=ida-proto ====
void sub_48E2C0()
{
  dbl_89EC18 = dbl_89E9D8 / 60.0; /*0x48e2cc*/
}



// ==== 0x0048E2E0  sub_48E2E0  this=-  sig=ida-proto ====
void sub_48E2E0()
{
  dbl_89EC00 = 1.0 / dbl_89EC18; /*0x48e2ec*/
}



// ==== 0x0048E300  sub_48E300  this=-  sig=ida-proto ====
void sub_48E300()
{
  dbl_89EBF8 = 0.0174532925199433 * 45.0; /*0x48e30c*/
}



// ==== 0x0048E320  sub_48E320  this=-  sig=ida-proto ====
void sub_48E320()
{
  dbl_89E9E0 = 0.0174532925199433 * 60.0; /*0x48e32c*/
}



// ==== 0x0048E340  sub_48E340  this=-  sig=ida-proto ====
void sub_48E340()
{
  dbl_89E9B8 = 0.0174532925199433 * 90.0; /*0x48e34c*/
}



// ==== 0x0048E360  sub_48E360  this=-  sig=ida-proto ====
__int64 sub_48E360()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_89E9B8 - dbl_89E9E0); /*0x48e372*/
  result = Math::RoundToInt(v0 * dbl_89E9D8 * 0.5); /*0x48e386*/
  dword_89EC20 = result; /*0x48e38b*/
  return result; /*0x48e390*/
}



// ==== 0x0048E3A0  sub_48E3A0  this=-  sig=ida-proto ====
void sub_48E3A0()
{
  dbl_89E9E8 = Math::ArcTan((double)dword_89EC20 * 0.00390625); /*0x48e3b7*/
}



// ==== 0x0048E3D0  sub_48E3D0  this=-  sig=ida-proto ====
void sub_48E3D0()
{
  dbl_89EBF0 = Math::ArcTan((double)(2 * dword_89EC20) / dbl_89E9D8); /*0x48e3f2*/
}



// ==== 0x0048E400  sub_48E400  this=-  sig=ida-proto ====
__int64 sub_48E400()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_89EC20) + 0.5); /*0x48e41b*/
  dword_89EC14 = result; /*0x48e420*/
  return result; /*0x48e426*/
}



// ==== 0x0048E430  sub_48E430  this=-  sig=ida-proto ====
int sub_48E430()
{
  word_89E9D0 = 0; /*0x48e432*/
  word_89E9D2 = 0; /*0x48e438*/
  return 0; /*0x48e43e*/
}



// ==== 0x0048E440  sub_48E440  this=-  sig=ida-proto ====
int sub_48E440()
{
  dword_89EA30 = 0; /*0x48e442*/
  dword_89EA34 = 0; /*0x48e447*/
  dword_89EA38 = 0; /*0x48e44c*/
  return 0; /*0x48e451*/
}



// ==== 0x0048E460  sub_48E460  this=-  sig=ida-proto ====
int sub_48E460()
{
  dword_89EC10 = 0; /*0x48e465*/
  dword_89EC08 = 128; /*0x48e46f*/
  dword_89EC0C = 128; /*0x48e474*/
  return 128; /*0x48e479*/
}



// ==== 0x0048E480  sub_48E480  this=-  sig=ida-proto ====
int sub_48E480()
{
  dword_89E9F0[0] = 128; /*0x48e489*/
  dword_89E9F4[0] = 128; /*0x48e493*/
  dword_89E9FC = 64; /*0x48e49b*/
  dword_89EA00 = 64; /*0x48e4a5*/
  dword_89EA08 = 192; /*0x48e4ab*/
  dword_89EA0C = 64; /*0x48e4b0*/
  dword_89EA14 = 64; /*0x48e4bd*/
  dword_89E9F8[0] = 0; /*0x48e4c4*/
  dword_89EA04 = 0; /*0x48e4ca*/
  dword_89EA10 = 0; /*0x48e4d0*/
  dword_89EA18 = 192; /*0x48e4d6*/
  dword_89EA1C = 0; /*0x48e4dc*/
  dword_89EA20 = 192; /*0x48e4e2*/
  dword_89EA24 = 192; /*0x48e4e7*/
  dword_89EA28 = 0; /*0x48e4ed*/
  return 192; /*0x48e4f3*/
}



// ==== 0x0048E500  sub_48E500  this=-  sig=ida-proto ====
int sub_48E500()
{
  dword_89ECD8 = 0; /*0x48e502*/
  dword_89ECDC = 0; /*0x48e507*/
  dword_89ECE0 = 0; /*0x48e50c*/
  dword_89ECE4 = 0; /*0x48e511*/
  return 0; /*0x48e516*/
}



// ==== 0x0048E520  ControlClass::Construct  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass_Constructor(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  GadgetClass::Construct(this, a3, a4, a5, a6, a7, a8); /*0x48e543*/
  this->q028 = 0; /*0x48e54c*/
  this->q024 = a2; /*0x48e553*/
  *this = &ControlClass::`vftable'; /*0x48e556*/
  return this; /*0x48e55e*/
}



// ==== 0x0048E570  ControlClass::CtorFromData  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass_CtorFromData(_DWORD *this, int a2)
{
  ControlClass::Constructor(a2); /*0x48e579*/
  this->q024 = *(_DWORD *)(a2 + 36); /*0x48e581*/
  this->q028 = *(_DWORD *)(a2 + 40); /*0x48e587*/
  *this = &ControlClass::`vftable'; /*0x48e58a*/
  return this; /*0x48e592*/
}



// ==== 0x0048E5A0  ControlClass::Draw  this=ControlClass  sig=csp ====
int __thiscall CellClass_Draw(int this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx

  if ( a2 ) /*0x48e5af*/
  {
    v5 = *(_DWORD *)(this + 36); /*0x48e5b1*/
    if ( v5 ) /*0x48e5b6*/
    {
      BYTE1(v5) |= 0x80u; /*0x48e5b8*/
      *a3 = v5; /*0x48e5be*/
      if ( (a2 & 0x40) != 0 && (*(_BYTE *)(this + 32) & 0x10) != 0 ) /*0x48e5c6*/
      {
        BYTE1(v5) |= 0x40u; /*0x48e5c8*/
        *a3 = v5; /*0x48e5cb*/
      }
    }
    else
    {
      *a3 = 0; /*0x48e5cf*/
    }
  }
  v6 = *(_DWORD *)(this + 40); /*0x48e5d5*/
  if ( v6 ) /*0x48e5da*/
    (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v6 + 76))(v6, a2, a3, this); /*0x48e5e1*/
  return COMObject::ActivateThunk(a2, a3, 0); /*0x48e5ef*/
}



// ==== 0x0048E600  ControlClass::SetMember10  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e600(_DWORD *this, int a2)
{
  this->q028 = a2; /*0x48e604*/
  return a2; /*0x48e607*/
}



// ==== 0x0048E610  ControlClass::GetMember09  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e610(_DWORD *this)
{
  return this->q024; /*0x48e613*/
}



// ==== 0x0048E620  ControlClass::DispatchClick  this=ControlClass  sig=csp ====
int __thiscall Control_DispatchClick(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = this->q028; /*0x48e623*/
  if ( v2 ) /*0x48e628*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 108))(v2, 0); /*0x48e62e*/
  return GadgetClass::ClearState(a2); /*0x48e63d*/
}



// ==== 0x0048E650  GadgetClass::StubReturnFalse  this=GadgetClass  sig=csp ====
void __stdcall CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{
  ; /*0x48e650*/
}



// ==== 0x0048E660  ControlClass::QueryInterface  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::_vt00(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x48e663*/
  if ( (a2 & 1) != 0 ) /*0x48e66d*/
    __3_YAXPAX_Z(Block); /*0x48e670*/
  return Block; /*0x48e67a*/
}



// ==== 0x0048E680  sub_48E680  this=-  sig=ida-proto ====
int sub_48E680()
{
  dword_89ECE8 = 0; /*0x48e682*/
  dword_89ECEC = 0; /*0x48e687*/
  dword_89ECF0 = 0; /*0x48e68c*/
  dword_89ECF4 = 0; /*0x48e691*/
  return 0; /*0x48e696*/
}



// ==== 0x0048E6A0  sub_48E6A0  this=-  sig=ida-proto ====
int sub_48E6A0()
{
  dword_89ECFC = 0; /*0x48e6a7*/
  dword_89ED00 = 0; /*0x48e6ac*/
  byte_89ED04 = 1; /*0x48e6b1*/
  byte_89ED05 = 0; /*0x48e6b8*/
  dword_89ECF8 = (int)&DynamicVectorClass<ConvertClass *>::`vftable'; /*0x48e6bd*/
  dword_89ED0C = 10; /*0x48e6c7*/
  dword_89ED08 = 0; /*0x48e6d1*/
  return atexit(sub_48E6E0); /*0x48e6dc*/
}



// ==== 0x0048E6E0  sub_48E6E0  this=-  sig=ida-proto ====
void __cdecl sub_48E6E0()
{
  if ( (byte_89ED10 & 1) == 0 ) /*0x48e6ea*/
  {
    dword_89ECF8 = (int)&VectorClass<ConvertClass *>::`vftable'; /*0x48e6ee*/
    byte_89ED10 |= 1u; /*0x48e701*/
    if ( dword_89ECFC ) /*0x48e707*/
    {
      if ( byte_89ED05 ) /*0x48e711*/
      {
        __3_YAXPAX_Z(dword_89ECFC); /*0x48e714*/
        dword_89ECFC = 0; /*0x48e71c*/
      }
    }
    byte_89ED05 = 0; /*0x48e726*/
    dword_89ED00 = 0; /*0x48e72d*/
  }
}



// ==== 0x0048E740  ConvertClass::Construct  this=ConvertClass  sig=csp ====
_DWORD *__thiscall ConvertClass_Constructor(_DWORD *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  _BYTE *v10; // eax
  __int16 *v11; // eax
  __int16 v12; // cx
  int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  __int16 *v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  char *v24; // eax
  int v25; // edi
  int v26; // eax
  _BYTE v28[4]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v29; // [esp+10h] [ebp-10h] BYREF
  char v30; // [esp+12h] [ebp-Eh]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ah] [ebp-6h]

  this->q004 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 112))(a4); /*0x48e753*/
  this->q008 = 0; /*0x48e756*/
  this->q00C = 0; /*0x48e759*/
  this->q010 = 0; /*0x48e75c*/
  this->q014 = 0; /*0x48e75f*/
  this->q018 = 0; /*0x48e762*/
  this->q01C = 0; /*0x48e765*/
  this->q020 = 0; /*0x48e768*/
  this->q024 = 0; /*0x48e76b*/
  this->q028 = 0; /*0x48e76e*/
  this->q02C = 0; /*0x48e771*/
  this->q030 = 0; /*0x48e774*/
  this->q034 = 0; /*0x48e777*/
  this->q038 = 0; /*0x48e77a*/
  this->q03C = 0; /*0x48e77d*/
  this->q040 = 0; /*0x48e780*/
  this->q044 = 0; /*0x48e783*/
  this->q048 = 0; /*0x48e786*/
  this->q04C = 0; /*0x48e789*/
  this->q050 = 0; /*0x48e78c*/
  this->q054 = 0; /*0x48e78f*/
  this->q058 = 0; /*0x48e792*/
  this->q05C = 0; /*0x48e795*/
  this->q060 = 0; /*0x48e798*/
  this->q064 = 0; /*0x48e79b*/
  this->q068 = 0; /*0x48e79e*/
  this->q06C = 0; /*0x48e7a1*/
  this->q070 = 0; /*0x48e7a4*/
  this->q074 = 0; /*0x48e7a7*/
  this->q078 = 0; /*0x48e7aa*/
  this->q07C = 0; /*0x48e7ad*/
  this->q080 = 0; /*0x48e7b0*/
  this->q084 = 0; /*0x48e7b6*/
  this->q088 = 0; /*0x48e7bc*/
  this->q08C = 0; /*0x48e7c2*/
  this->q090 = 0; /*0x48e7c8*/
  this->q094 = 0; /*0x48e7ce*/
  this->q098 = 0; /*0x48e7d4*/
  this->q09C = 0; /*0x48e7da*/
  this->q0A0 = 0; /*0x48e7e0*/
  this->q0A4 = 0; /*0x48e7e6*/
  this->q0A8 = 0; /*0x48e7ec*/
  this->q0AC = 0; /*0x48e7f2*/
  this->q0B0 = 0; /*0x48e7f8*/
  this->q0B4 = 0; /*0x48e7fe*/
  this->q0B8 = 0; /*0x48e804*/
  this->q0BC = 0; /*0x48e80a*/
  this->q0C0 = 0; /*0x48e810*/
  this->q0C4 = 0; /*0x48e816*/
  this->q0C8 = 0; /*0x48e81c*/
  this->q0CC = 0; /*0x48e822*/
  this->q0D0 = 0; /*0x48e828*/
  this->q0D4 = 0; /*0x48e82e*/
  this->q0D8 = 0; /*0x48e834*/
  this->q0DC = 0; /*0x48e83a*/
  this->q0E0 = 0; /*0x48e840*/
  this->q0E4 = 0; /*0x48e846*/
  this->q0E8 = 0; /*0x48e84c*/
  this->q0EC = 0; /*0x48e852*/
  this->q0F0 = 0; /*0x48e858*/
  this->q0F4 = 0; /*0x48e85e*/
  this->q0F8 = 0; /*0x48e864*/
  this->q0FC = 0; /*0x48e86a*/
  this->q100 = 0; /*0x48e870*/
  this->q104 = 0; /*0x48e876*/
  this->q108 = 0; /*0x48e87c*/
  this->q10C = 0; /*0x48e882*/
  this->q110 = 0; /*0x48e888*/
  this->q114 = 0; /*0x48e88e*/
  this->q118 = 0; /*0x48e894*/
  this->q11C = 0; /*0x48e89a*/
  this->q120 = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  this->q124 = 0; /*0x48e8b1*/
  this->q128 = 0; /*0x48e8b7*/
  this->q12C = 0; /*0x48e8bd*/
  this->q130 = 0; /*0x48e8c3*/
  this->q134 = 0; /*0x48e8c9*/
  this->q138 = 0; /*0x48e8cf*/
  this->q13C = 0; /*0x48e8d5*/
  this->q140 = 0; /*0x48e8db*/
  this->q144 = 0; /*0x48e8e1*/
  this->q148 = 0; /*0x48e8e7*/
  this->q14C = 0; /*0x48e8ed*/
  this->q150 = 0; /*0x48e8f3*/
  this->q154 = 0; /*0x48e8f9*/
  this->q158 = 0; /*0x48e8ff*/
  this->q15C = 0; /*0x48e905*/
  this->q160 = 0; /*0x48e90b*/
  this->q164 = 0; /*0x48e911*/
  this->q168 = 0; /*0x48e917*/
  this->q16C = v7; /*0x48e91d*/
  this->q170 = 0; /*0x48e923*/
  this->q174 = 0; /*0x48e929*/
  this->q178 = 0; /*0x48e92f*/
  this->q17C = 0; /*0x48e935*/
  *this = &ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    this->q16C = 1; /*0x48e943*/
  if ( this->q004 == 1 ) /*0x48e94f*/
  {
    v10 = __2_YAPAXI_Z(0x100u); /*0x48e95a*/
    this->q178 = v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = (__int16 *)ComputeColorSaturation(&a5); /*0x48e98b*/
      v12 = *v11; /*0x48e990*/
      LOBYTE(v11) = *((_BYTE *)v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48e9ae*/
      LOWORD(a4) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(a4) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(_BYTE *)(this->q178 + v8 - 1) = Palette::FindClosestColor(&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = __2_YAPAXI_Z(this->q16C << 8); /*0x48e9eb*/
    this->q170 = v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = this->q16C; /*0x48e9f8*/
    this->q174 = &v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
      v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor(a2 + 2 * (i % 256) + i % 256); /*0x48ea40*/
    }
    else
    {
      v31 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          *v15++ = 0; /*0x48ea5d*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = (__int16 *)ComputeColorSaturation(&a5); /*0x48ea85*/
            v21 = *((_BYTE *)v20 + 2); /*0x48ea8f*/
            v29 = *v20; /*0x48ea92*/
            LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * v31 * v21 / (this->q16C - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48eac6*/
            LOWORD(a4) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(a4) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor(&a4); /*0x48eae8*/
          }
          v23 = this->q16C - 1; /*0x48eb03*/
          ++v31; /*0x48eb06*/
        }
        while ( v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = (char *)__2_YAPAXI_Z(this->q16C << 9); /*0x48eb1c*/
    v25 = this->q16C; /*0x48eb21*/
    this->q170 = v24; /*0x48eb2a*/
    this->q174 = &v24[512 * ((v25 - 1) >> 1)]; /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch(a2); /*0x48eb51*/
    this->q180 = (unsigned __int16)g_DDraw_Gray127; /*0x48eb60*/
    this->q184 = HIWORD(g_DDraw_Gray127); /*0x48eb6d*/
  }
  if ( !a6 ) /*0x48eb7a*/
    ConvertClass::InitTables(this); /*0x48eb7e*/
  if ( dword_89ED08 < dword_89ED00 /*0x48ebb7*/
    || (byte_89ED05 || !dword_89ED00)
    && dword_89ED0C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_89ECF8 + 8))(
         &dword_89ECF8,
         dword_89ED0C + dword_89ED00,
         0) )
  {
    v26 = dword_89ED08++; /*0x48ebc4*/
    *((_DWORD *)dword_89ECFC + v26) = this; /*0x48ebd3*/
  }
  return this; /*0x48ebd8*/
}



// ==== 0x0048EBF0  ConvertClass::InitTables  this=ConvertClass  sig=csp ====
_DWORD *__thiscall ConvertClass_InitTables(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // ecx
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // eax
  int v41; // ecx
  _DWORD *v42; // eax
  int v43; // ecx
  _DWORD *v44; // eax
  int v45; // ecx
  _DWORD *v46; // eax
  int v47; // ecx
  _DWORD *v48; // eax
  int v49; ... [54563 chars total]



// ==== 0x00480110  BuildingClass::CalcDrawPos  this=IUnknown  sig=csp ====
_DWORD *__thiscall BuildingClass_CalcDrawPos(int this, _DWORD *a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  unsigned __int8 v6; // al
  int v8; // ecx
  _BYTE v9[8]; // [esp+4h] [ebp-8h] BYREF

  v3 = (int *)globalHelper_0FDCC0(v9, *(_DWORD *)(this + 68)); /*0x48011d*/
  v4 = *v3; /*0x480122*/
  v5 = v3[1]; /*0x480124*/
  if ( *(char *)(this + 320) >= 0 ) /*0x48012f*/
  {
    if ( *(_DWORD *)(this + 68) == 239 ) /*0x48014b*/
LABEL_6:
      v5 -= 15; /*0x48014d*/
  }
  else
  {
    v6 = *(_BYTE *)(this + 286); /*0x480131*/
    v5 -= 16; /*0x480137*/
    if ( v6 >= 9u && v6 <= 0x11u ) /*0x480140*/
      goto LABEL_6; /*0x480140*/
  }
  v8 = MEMORY[0x886FA4] - 15 * *(char *)(this + 283) + v5; /*0x480150*/
  *a2 = v4 + 30; /*0x480172*/
  a2[1] = v8 + 15; /*0x480174*/
  return a2; /*0x48016e*/
}


// ==== 0x00480180  DSurface::Process  this=ObjectClass  sig=csp ====
void __thiscall DSurface::Process(int this, IUnknown *aP1, int *a2)
{
  TerrainClass::GenerateTexture( /*0x4801de*/
    **(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[576],
    *(_DWORD *)MEMORY[0x87F69C]->__pad_0,
    0,
    *(int *)&MEMORY[0x87F8E4].__pad_5568[9416],
    aP1->field_0,
    aP1->field_4,
    *a2,
    (CCINIClass *)a2[1],
    a2[2],
    (IUnknown *)a2[3],
    *(char *)(this + 283),
    *(__int16 *)(this + 268),
    1,
    0,
    0,
    1,
    0,
    0);
}


// ==== 0x004801F0  TacticalClass::RenderCellFogOfWar  this=IUnknown  sig=csp ====
unsigned int __thiscall TacticalClass::RenderCellFogOfWar(int this, IUnknown *aP1, Tactical *aP2)
{
  unsigned int v4; // eax
  unsigned int result; // eax

  LOBYTE(v4) = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 0); /*0x480202*/
  *(_BYTE *)(this + 288) = v4; /*0x480207*/
  v4 = (char)v4; /*0x48020d*/
  if ( (char)v4 == -2 ) /*0x480213*/
  {
    v4 = 15; /*0x480215*/
  }
  else if ( (char)v4 == -1 ) /*0x48021f*/
  {
    v4 = 0; /*0x480221*/
  }
  RenderFogOfWar((unsigned int *)aP1, (int *)aP2->__pad_0, v4); /*0x480230*/
  result = Cell::GetAdjacentPassableMask((__int16 *)(this + 36), 1); /*0x48023e*/
  *(_BYTE *)(this + 289) = result; /*0x480243*/
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 && !HouseClass_Player->__pad_1D8[29] ) /*0x48025c*/
  {
    result = (char)result; /*0x480266*/
    if ( (char)result == -2 ) /*0x48026c*/
    {
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, (int *)aP2->__pad_0, 0xFu); /*0x480278*/
    }
    else
    {
      if ( (char)result == -1 ) /*0x480287*/
        result = 0; /*0x480289*/
      return (unsigned int)RenderFogOfWarOverlay((int)aP1, (int *)aP2->__pad_0, result); /*0x480290*/
    }
  }
  return result; /*0x48027d*/
}


// ==== 0x004802A0  TacticalClass::DrawCellTerrainOverlay  this=TacticalClass  sig=csp ====
void __thiscall sub_4802A0(int this, int *a2, int *a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // esi

  v4 = *(_DWORD *)(this + 56); /*0x4802a6*/
  if ( v4 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *((_DWORD *)MEMORY[0xA8ED2C] + unk_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = *(unsigned __int8 *)(this + 282); /*0x4802b8*/
    v6 = *((_DWORD *)MEMORY[0xA8ED2C] + v4); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      CellClass::GetTerrainFlag((void *)v6, *(unsigned __int8 *)(this + 282)); /*0x4802cd*/
  }
  if ( *(_BYTE *)(v6 + 737) ) /*0x4802e4*/
    TacticalClass::DrawCellOverlay( /*0x480339*/
      v6,
      v5,
      MEMORY[0x887314],
      *a2,
      a2[1] - 15 * *(char *)(this + 283),
      *a3,
      a3[1],
      a3[2],
      a3[3],
      58 - 15 * *(char *)(this + 283));
}


// ==== 0x00480350  TacticalClass::CheckCellVisibility  this=IUnknown  sig=csp ====
char __thiscall sub_480350(int this, _DWORD *a2, _DWORD *a3, char a4)
{
  int v4; // eax
  int v6; // eax
  int *v7; // edi
  int inited; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v15; // [esp+10h] [ebp-Ch]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+28h] [ebp+Ch]

  LOBYTE(v4) = a4; /*0x480350*/
  if ( a4 ) /*0x48035f*/
    return v4; /*0x48035f*/
  if ( !*(_DWORD *)(this + 52) ) /*0x480365*/
    TacticalClass::SetView(this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x480384*/
  v6 = *(_DWORD *)(this + 56); /*0x480389*/
  v17 = 0; /*0x48038c*/
  if ( v6 == 0xFFFF ) /*0x480395*/
  {
    v15 = 0; /*0x4803e9*/
    v7 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + MEMORY[0xAA10B0]); /*0x4803ed*/
    inited = CellClass::InitRandomOffsets(this, MEMORY[0xAA10B0], v7[188]); /*0x4803fa*/
LABEL_10:
    v17 = inited; /*0x4803ff*/
    goto LABEL_11; /*0x4803ff*/
  }
  v7 = (int *)*((_DWORD *)MEMORY[0xA8ED2C] + v6); /*0x48039d*/
  v15 = *(unsigned __int8 *)(this + 282); /*0x4803ae*/
  if ( v7[188] > 1 ) /*0x4803b5*/
  {
    if ( CellClass::GetTerrainFlag(v7, *(unsigned __int8 *)(this + 282)) ) /*0x4803ba*/
      inited = (*(_DWORD *)(this + 320) >> 13) & 1; /*0x4803cc*/
    else
      inited = CellClass::InitRandomOffsets(this, *(_DWORD *)(this + 56), v7[188]); /*0x4803dc*/
    goto LABEL_10; /*0x4803cf*/
  }
LABEL_11:
  ++MEMORY[0xA83ECC]; /*0x480403*/
  v9 = *(char *)(this + 283); /*0x480416*/
  v10 = a2[1]; /*0x48041d*/
  v16[0] = *a2; /*0x480420*/
  v11 = v10 - 15 * v9; /*0x48042e*/
  v4 = (*(int (__thiscall **)(int *))(*v7 + 156))(v7); /*0x480430*/
  if ( v4 ) /*0x48043c*/
    LOBYTE(v4) = TerrainClass::GenerateTexture( /*0x480499*/
                   *(_DWORD *)(this + 52),
                   v15,
                   MEMORY[0x887314],
                   v16[0],
                   v11 + MEMORY[0x886FA4],
                   *a3,
                   a3[1],
                   a3[2],
                   a3[3],
                   *(char *)(this + 283),
                   *(__int16 *)(this + 268),
                   1,
                   v17,
                   0,
                   0,
                   0,
                   0);
  if ( *(_DWORD *)(this + 72) != -1 ) /*0x4804a2*/
  {
    v12 = a3[1]; /*0x4804b1*/
    v16[0] = v16[0] + 30 - *a3; /*0x4804bd*/
    v13 = *(_DWORD *)(this + 72); /*0x4804c1*/
    v16[1] = v11 + MEMORY[0x886FA4] - v12; /*0x4804c4*/
    LOBYTE(v4) = (*(int (__thiscall **)(_DWORD, _DWORD *, _DWORD *, _DWORD, int, int))(**((_DWORD **)MEMORY[0xA8EC1C] /*0x4804f5*/
                                                                                        + v13)
                                                                                     + 160))(
                   *((_DWORD *)MEMORY[0xA8EC1C] + v13),
                   v16,
                   a3,
                   *(unsigned __int8 *)(this + 287),
                   MEMORY[0x89E7C0] * *(char *)(this + 283),
                   this + 36);
  }
  return v4; /*0x4804fb*/
}


// ==== 0x00480510  BuildingPlacement::ValidateType  this=IUnknown  sig=csp ====
char __thiscall BuildingPlacement::ValidateType(_DWORD *this, AbstractClass *aP1, IUnknown *aP2)
{
  AbstractClass *v4; // eax
  ObjectClass *i; // esi
  int health; // eax
  ObjectClass *v8; // esi
  int v9; // eax

  v4 = (AbstractClass *)this->q044; /*0x48051a*/
  if ( v4 == aP1 && v4 != (AbstractClass *)-1 ) /*0x480524*/
    return 1; /*0x48052c*/
  if ( aP1 == (AbstractClass *)-1 ) /*0x480532*/
  {
    if ( v4 == (AbstractClass *)2 || v4 == (AbstractClass *)26 || v4 == (AbstractClass *)243 ) /*0x480543*/
      return 1; /*0x48054f*/
  }
  else
  {
    if ( aP1 == (AbstractClass *)2 || !aP1 ) /*0x48055d*/
    {
      for ( i = (ObjectClass *)this->q0E4; i; i = (ObjectClass *)i->nextObject ) /*0x480567*/
      {
        if ( (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)i->__pad_0 + 44))(i) == 6 ) /*0x480573*/
        {
          health = i[7].health; /*0x480578*/
          if ( i->health > 0 /*0x4805b1*/
            && (health == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2156)
             && (aP2 == (IUnknown *)2 || aP2 == (IUnknown *)6)
             || health == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2160)
             && (!aP2 || aP2 == (IUnknown *)4)
             || health == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2172)) )
          {
            return 1; /*0x4805b1*/
          }
        }
      }
    }
    if ( aP1 == (AbstractClass *)26 ) /*0x4805bd*/
    {
      v8 = (ObjectClass *)this->q0E4; /*0x4805bf*/
      if ( v8 ) /*0x4805c7*/
      {
        while ( 1 ) /*0x4805c9*/
        {
          if ( (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v8->__pad_0 + 44))(v8) == 6 ) /*0x4805d3*/
          {
            v9 = v8[7].health; /*0x4805d8*/
            if ( v8->health > 0 /*0x480615*/
              && (v9 == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2164)
               && (aP2 == (IUnknown *)2 || aP2 == (IUnknown *)6)
               || v9 == *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2168)
               && (!aP2 || aP2 == (IUnknown *)4)) )
            {
              break; /*0x480615*/
            }
          }
          v8 = (ObjectClass *)v8->nextObject; /*0x48061b*/
          if ( !v8 ) /*0x480620*/
            return 0; /*0x480620*/
        }
        return 1; /*0x480615*/
      }
    }
  }
  return 0; /*0x480526*/
}


// ==== 0x00480630  BuildingClass::ValidatePlacement  this=IUnknown  sig=csp ====
void __thiscall BuildingClass_ValidatePlacement(void **this, char a2)
{
  int *v2; // edi
  int v3; // eax
  void **v4; // esi
  int *StartCoords; // edi
  int *PlacementRect; // eax
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // eax
  char v13; // bl
  int v14; // ecx
  _DWORD *v15; // eax
  int *v16; // eax
  void **v17; // edi
  void *v18; // eax
  _DWORD *v19; // ebp
  int v20; // eax
  __int16 v21; // dx
  char v22; // bl
  char v23; // al
  void *v24; // ecx
  char v25; // al
  char v26; // bl
  char v27; // al
  char v28; // al
  unsigned int i; // esi
  int v30; // eax
  __int16 v31; // dx
  _BYTE *v32; // eax
  int v33; // [esp-Ch] [ebp-E8h]
  _DWORD *v34; // [esp-8h] [ebp-E4h]
  int v35; // [esp-8h] [ebp-E4h]
  int *v36; // [esp-4h] [ebp-E0h]
  __int16 *v37; // [esp-4h] [ebp-E0h]
  unsigned int v38; // [esp+10h] [ebp-CCh] BYREF
  void *v39; // [esp+14h] [ebp-C8h] BYREF
  char *v40; // [esp+18h] [ebp-C4h]
  unsigned int v41; // [esp+1Ch] [ebp-C0h]
  void *v42; // [esp+20h] [ebp-BCh]
  int v43; // [esp+24h] [ebp-B8h] BYREF
  int v44; // [esp+28h] [ebp-B4h] BYREF
  void **v45; // [esp+2Ch] [ebp-B0h]
  int v46; // [esp+30h] [ebp-ACh]
  int v47; // [esp+34h] [ebp-A8h]
  _DWORD v48[2]; // [esp+38h] [ebp-A4h] BYREF
  int v49; // [esp+40h] [ebp-9Ch] BYREF
  char v50[8]; // [esp+44h] [ebp-98h] BYREF
  int v51; // [esp+4Ch] [ebp-90h]
  int v52; // [esp+50h] [ebp-8Ch]
  int v53[4]; // [esp+5Ch] [ebp-80h] BYREF
  char v54[16]; // [esp+6Ch] [ebp-70h] BYREF
  int v55[4]; // [esp+7Ch] [ebp-60h] BYREF
  int v56[4]; // [esp+8Ch] [ebp-50h] BYREF
  int v57[4]; // [esp+9Ch] [ebp-40h] BYREF
  int v58[4]; // [esp+ACh] [ebp-30h] BYREF
  int v59[4]; // [esp+BCh] [ebp-20h] BYREF
  int v60[4]; // [esp+CCh] [ebp-10h] BYREF

  v2 = (int *)&unk_81CC70; /*0x48063a*/
  v45 = this; /*0x48063f*/
  v40 = (char *)&unk_81CC70; /*0x480643*/
  while ( 1 ) /*0x48064d*/
  {
    v3 = *v2; /*0x48064d*/
    if ( (unsigned int)*v2 < 8 ) /*0x480652*/
    {
      v43 = (int)this->ptr_24; /*0x48065e*/
      v44 = *CellStruct::Add(&v43, &v49, (_WORD *)(4 * (v3 & 7) + 9041544)); /*0x480684*/
      v4 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v44); /*0x48068d*/
    }
    else
    {
      v4 = this; /*0x480654*/
    }
    if ( !a2 || *v2 != -1 ) /*0x48069d*/
    {
      StartCoords = House::GetStartCoords((int)v4, v55); /*0x4806ab*/
      PlacementRect = BuildingClass::GetPlacementRect((int)v4, v53); /*0x4806b4*/
      if ( StartCoords[2] > 0 && StartCoords[3] > 0 && PlacementRect[2] > 0 && PlacementRect[3] > 0 ) /*0x4806d3*/
      {
        v7 = StartCoords[1]; /*0x4806d9*/
        if ( *StartCoords > *PlacementRect ) /*0x4806e4*/
          v51 = *PlacementRect; /*0x4806e8*/
        v8 = PlacementRect[1]; /*0x4806ee*/
        if ( v7 > v8 ) /*0x4806f3*/
          v52 = v8; /*0x4806f7*/
      }
    }
    v36 = BuildingClass::GetPlacementRect((int)v4, v59); /*0x480713*/
    v34 = House::GetStartCoords((int)v4, v57); /*0x48071c*/
    v9 = (_DWORD *)CellClass::GetScreenRect(v54); /*0x480724*/
    v10 = Rect::Union(v56, v9, v34); /*0x480732*/
    v11 = Rect::Union(v58, v10, v36); /*0x480745*/
    v48[1] = MEMORY[0x886FA4]; /*0x480753*/
    v12 = *v11; /*0x480757*/
    v13 = 0; /*0x480759*/
    v48[0] = MEMORY[0x886FA0]; /*0x48075c*/
    v14 = v11[1]; /*0x480760*/
    v46 = v12; /*0x480763*/
    v47 = v14; /*0x480767*/
    v35 = v11[3]; /*0x480775*/
    v33 = v11[2]; /*0x480776*/
    v15 = (_DWORD *)Coord2D::Sub(v50, v48); /*0x480781*/
    v16 = Rect::Construct(v60, v15, v33, v35); /*0x48078e*/
    Cell::CreateCrater(*v16, v16[1], v16[2], v16[3], 0); /*0x4807b4*/
    v17 = v4 + 9; /*0x4807b9*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (int)(v4 + 9)); /*0x4807c2*/
    v18 = v4[17]; /*0x4807c7*/
    if ( v18 != (void *)-1 && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + (_DWORD)v18) + 680) ) /*0x4807dc*/
    {
      v38 = 0; /*0x4807ea*/
      v19 = &unk_81CC70; /*0x4807ee*/
      do /*0x48086e*/
      {
        if ( *v19 < 8u ) /*0x4807f9*/
        {
          v20 = *v19 & 7; /*0x480801*/
          v39 = *v17; /*0x480804*/
          v21 = MEMORY[0x89F688][v20]; /*0x480808*/
          LOWORD(v20) = HIWORD(MEMORY[0x89F688][v20]); /*0x48081a*/
          LOWORD(v42) = (_WORD)v39 + v21; /*0x48081e*/
          HIWORD(v42) = HIWORD(v39) + v20; /*0x48082d*/
          v39 = v42; /*0x480836*/
          CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v39); /*0x48083f*/
        }
        if ( (unsigned __int8)BuildingPlacement::ValidateType(v4[17], *v19) ) /*0x48084e*/
          v38 |= 1 << v13; /*0x480860*/
        ++v19; /*0x480864*/
        ++v13; /*0x480867*/
      }
      while ( v19 < &dword_81CC80 ); /*0x48086e*/
      v22 = v38; /*0x480879*/
      v23 = *((_BYTE *)v4 + 286) & 0xF0; /*0x48087d*/
      v38 = (unsigned int)v4[19]; /*0x48087f*/
      v24 = v4[17]; /*0x480883*/
      v25 = v22 | v23; /*0x480886*/
      v26 = 0; /*0x480888*/
      *((_BYTE *)v4 + 286) = v25; /*0x48088d*/
      if ( (v24 == (void *)2 || v24 == (void *)26) && (v25 == 48 || v25 == 32) ) /*0x4808a0*/
      {
        v4[17] = (void *)-1; /*0x4808a9*/
        *((_BYTE *)v4 + 286) = 0; /*0x4808ac*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x4808b3*/
        v26 = 1; /*0x4808b8*/
      }
      if ( !v4[17] ) /*0x4808bf*/
      {
        v27 = *((_BYTE *)v4 + 286); /*0x4808c6*/
        if ( v27 == 16 || v27 == 32 ) /*0x4808d2*/
        {
          v4[17] = (void *)-1; /*0x4808d8*/
          *((_BYTE *)v4 + 286) = 0; /*0x4808db*/
          v4[20] = (void *)-1; /*0x4808e2*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x4808e5*/
          v26 = 1; /*0x4808ea*/
        }
      }
      if ( v4[17] == (void *)1 && *((_BYTE *)v4 + 286) == 32 ) /*0x4808f9*/
      {
        v4[17] = (void *)-1; /*0x4808ff*/
        *((_BYTE *)v4 + 286) = 0; /*0x480902*/
        v4[20] = (void *)-1; /*0x480909*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48090c*/
        v26 = 1; /*0x480911*/
      }
      if ( v4[17] == (void *)22 ) /*0x480917*/
      {
        v28 = *((_BYTE *)v4 + 286); /*0x480919*/
        if ( v28 == 16 || v28 == 32 ) /*0x480925*/
        {
          v4[17] = (void *)-1; /*0x48092b*/
          *((_BYTE *)v4 + 286) = 0; /*0x48092e*/
          v4[20] = (void *)-1; /*0x480935*/
          AbstractClass::AnnounceExpiredPointer(v4); /*0x480938*/
          v26 = 1; /*0x48093d*/
        }
      }
      if ( v4[17] == (void *)3 && *((_BYTE *)v4 + 286) == 16 ) /*0x48094c*/
      {
        v4[17] = (void *)-1; /*0x480952*/
        *((_BYTE *)v4 + 286) = 0; /*0x480955*/
        v4[20] = (void *)-1; /*0x48095c*/
        AbstractClass::AnnounceExpiredPointer(v4); /*0x48095f*/
        v26 = 1; /*0x480964*/
      }
      House::AnnounceUpgrade((int)v4, -1); /*0x480969*/
      if ( v4[19] != (void *)v38 ) /*0x480977*/
      {
        v37 = (__int16 *)(v4 + 9); /*0x48097f*/
        if ( v26 ) /*0x480985*/
        {
          Cell::SetRadar((int *)&MEMORY[0x87F7E8], v37); /*0x480987*/
          Radar::Update(&MEMORY[0x87F7E8], (__int16 *)v4 + 18); /*0x480992*/
          for ( i = 0; i < 8; ++i ) /*0x480997*/
          {
            v30 = i & 7; /*0x48099e*/
            v31 = *((_WORD *)v17 + 1) + HIWORD(MEMORY[0x89F688][v30]); /*0x4809b1*/
            LOWORD(v41) = LOWORD(MEMORY[0x89F688][v30]) + *(_WORD *)v17; /*0x4809bc*/
            HIWORD(v41) = v31; /*0x4809c5*/
            v38 = v41; /*0x4809d4*/
            v32 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v38); /*0x4809d8*/
            --v32[290]; /*0x4809e9*/
          }
        }
        else
        {
          CellClass::DetermineTileConnectivity(v37); /*0x4809f3*/
          Radar::Update(&MEMORY[0x87F7E8], (__int16 *)v4 + 18); /*0x4809fe*/
        }
      }
    }
    v2 = (int *)(v40 + 4); /*0x480a07*/
    v40 += 4; /*0x480a10*/
    if ( v40 >= byte_81CC84 ) /*0x480a14*/
      break; /*0x480a14*/
    this = v45; /*0x480649*/
  }
}


// ==== 0x00480A30  CellClass::GetCoords  this=CellClass  sig=csp ====
int *__thiscall CellClass::GetCoords(_DWORD *this, IUnknown *aP1)
{
  ObjectClass *v2; // eax
  int v3; // esi
  AbstractClass *v4; // edi
  int inited; // eax
  _DWORD v7[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = (ObjectClass *)this->smudgeTypeIndex; /*0x480a33*/
  v3 = ((__int16)v2 << 8) + 128; /*0x480a4f*/
  v4 = (AbstractClass *)((SHIWORD(v2) << 8) + 128); /*0x480a51*/
  v7[0] = 128; /*0x480a53*/
  v7[1] = 128; /*0x480a57*/
  inited = Isometric::InitTables((int)this, (IUnknown *)v7); /*0x480a60*/
  aP1->field_0 = v3; /*0x480a6b*/
  aP1->field_4 = (int)v4; /*0x480a6d*/
  aP1->field_8 = inited; /*0x480a72*/
  return &aP1->field_0; /*0x480a70*/
}


// ==== 0x00480A80  CellClass::ReduceTiberium  this=IUnknown  sig=csp ====
int __thiscall CellClass::ReduceTiberium(int this, InfantryTypeClass *aP1)
{
  IUnknown *v3; // edi
  int *StartCoords; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // ebx
  int BuildingByTiberiumType; // eax
  int v16; // ebx
  int v17; // ebp
  MouseClass *v18; // esi
  int i; // edi
  int v20; // eax
  int v22; // [esp+10h] [ebp-3Ch]
  InfantryTypeClass *v23; // [esp+10h] [ebp-3Ch]
  int v24; // [esp+14h] [ebp-38h]
  int v25; // [esp+18h] [ebp-34h]
  int v26; // [esp+1Ch] [ebp-30h]
  int v27; // [esp+20h] [ebp-2Ch]
  int v28; // [esp+24h] [ebp-28h]
  int v29; // [esp+24h] [ebp-28h]
  int v30; // [esp+28h] [ebp-24h]
  char v31[16]; // [esp+2Ch] [ebp-20h] BYREF
  char v32[16]; // [esp+3Ch] [ebp-10h] BYREF

  v3 = (IUnknown *)BuildingClass::GetPlacementRect(this, (IUnknown *)v31); /*0x480a97*/
  StartCoords = House::GetStartCoords(this, (IUnknown *)v32); /*0x480a9c*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480ab1*/
  {
    v12 = v3->field_0; /*0x480b44*/
    v13 = v3->field_4; /*0x480b46*/
    v14 = v3->field_8; /*0x480b49*/
    v9 = v3->field_C; /*0x480b4c*/
  }
  else
  {
    v22 = v3->field_8; /*0x480abc*/
    if ( v22 <= 0 || (v25 = v3->field_C, v25 <= 0) ) /*0x480acb*/
    {
      v12 = *StartCoords; /*0x480b37*/
      v13 = StartCoords[1]; /*0x480b39*/
      v14 = StartCoords[2]; /*0x480b3c*/
      v9 = StartCoords[3]; /*0x480b3f*/
    }
    else
    {
      v5 = *StartCoords; /*0x480acd*/
      v6 = v3->field_0; /*0x480acf*/
      v7 = StartCoords[2]; /*0x480ad1*/
      v8 = StartCoords[1]; /*0x480ad4*/
      v9 = StartCoords[3]; /*0x480ad7*/
      v28 = v7; /*0x480adc*/
      if ( v5 > v3->field_0 ) /*0x480ae0*/
      {
        v7 += v5 - v6; /*0x480ae4*/
        v5 = v3->field_0; /*0x480ae6*/
        v28 = v7; /*0x480ae8*/
      }
      v10 = v3->field_4; /*0x480aec*/
      v24 = v10; /*0x480af1*/
      if ( v8 > v10 ) /*0x480af5*/
      {
        v9 += v8 - v10; /*0x480af9*/
        v8 = v10; /*0x480afb*/
      }
      if ( v5 + v7 >= v6 + v22 ) /*0x480b07*/
        v11 = v28; /*0x480b15*/
      else
        v11 = v6 - v5 + v22 + 1; /*0x480b0f*/
      if ( v9 + v8 < v25 + v24 ) /*0x480b28*/
        v9 = v25 + v24 - v8 + 1; /*0x480b2d*/
      v12 = v5; /*0x480b2f*/
      v13 = v8; /*0x480b31*/
      v14 = v11; /*0x480b33*/
    }
  }
  v26 = v12; /*0x480b4f*/
  v27 = v13 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536]; /*0x480b5f*/
  v29 = v14; /*0x480b66*/
  v30 = v9; /*0x480b6a*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x480b6e*/
  v16 = (int)aP1; /*0x480b73*/
  if ( (int)aP1 <= 0 || BuildingByTiberiumType == -1 ) /*0x480b82*/
    return 0; /*0x480ca3*/
  v17 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9560] + 4 * BuildingByTiberiumType); /*0x480b8e*/
  if ( *(_BYTE *)(this + 286) == 11 ) /*0x480b99*/
    CellClass::RegisterForRedraw(v17, (MouseClass *)(this + 36)); /*0x480ba1*/
  if ( *(unsigned __int8 *)(this + 286) + 1 <= v16 ) /*0x480bb9*/
  {
    v16 = *(unsigned __int8 *)(this + 286); /*0x480bc8*/
    *(_DWORD *)(this + 68) = -1; /*0x480bce*/
    *(_BYTE *)(this + 286) = 0; /*0x480bd5*/
    House::AnnounceUpgrade(this, (IUnknown *)0xFFFFFFFF); /*0x480bdc*/
    v18 = (MouseClass *)(this + 36); /*0x480be1*/
    BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)v18); /*0x480bea*/
    CellClass::ClearCrateStateForAll((__int16 *)v18); /*0x480bf1*/
    for ( i = 0; i < 8; ++i ) /*0x480bf6*/
    {
      v20 = i & 7; /*0x480bfa*/
      LOWORD(v23) = LOWORD(v18->field_0) + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v20); /*0x480c1b*/
      HIWORD(v23) = HIWORD(v18->field_0) + *((_WORD *)&MEMORY[0x89F68A] + 2 * v20); /*0x480c24*/
      aP1 = v23; /*0x480c33*/
      if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (IUnknown *)&aP1) /*0x480c4f*/
        && !*(_BYTE *)(Cell::PosToIndex((__int16 *)&aP1) + *(_DWORD *)(v17 + 248)) )
      {
        BuildingClass::AddOccupancy(v17, (__int16 *)&aP1); /*0x480c5c*/
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 286) -= v16; /*0x480bbd*/
  }
  Cell::CreateCrater(v26, v27, v29, v30, 0); /*0x480c8f*/
  return v16; /*0x480c96*/
}


// ==== 0x00480CB0  BuildingClass::SellEffects  this=AbstractClass  sig=csp ====
int __thiscall BuildingClass_SellEffects(int this, int a2)
{
  int v3; // eax
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  int *PlacementRect; // esi
  int *StartCoords; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  bool v14; // cc
  int v15; // esi
  int v16; // esi
  int v17; // ecx
  int v18; // ebx
  unsigned __int8 v19; // al
  int v20; // ecx
  int v21; // esi
  bool v22; // cf
  _DWORD *v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  void **v27; // eax
  void **v28; // eax
  void **v29; // eax
  void **v30; // eax
  int v31; // ebx
  bool v32; // cf
  _BYTE *v33; // eax
  int v34; // edx
  __int16 v35; // ax
  int v37; // [esp+10h] [ebp-40h]
  int v38; // [esp+14h] [ebp-3Ch] BYREF
  int v39; // [esp+18h] [ebp-38h] BYREF
  __int16 v40[6]; // [esp+1Ch] [ebp-34h] BYREF
  int v41; // [esp+28h] [ebp-28h]
  int v42[4]; // [esp+30h] [ebp-20h] BYREF
  _DWORD v43[4]; // [esp+40h] [ebp-10h] BYREF

  v3 = *(_DWORD *)(this + 68); /*0x480cb9*/
  if ( v3 == -1 ) /*0x480cbf*/
    return 0; /*0x480cbf*/
  v4 = *((_DWORD *)MEMORY[0xA83D84] + v3); /*0x480ccb*/
  *(_DWORD *)v40 = v4; /*0x480cce*/
  if ( !*(_BYTE *)(v4 + 680) ) /*0x480cd2*/
    return 0; /*0x480cd2*/
  v5 = a2; /*0x480ce0*/
  if ( a2 != -1 ) /*0x480ce7*/
  {
    v6 = *(_DWORD *)(v4 + 676); /*0x480ce9*/
    if ( a2 < v6 && !MEMORY[0xA8E7AC] && Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, v6) >= v5 ) /*0x480d18*/
      return 0; /*0x480d18*/
  }
  PlacementRect = BuildingClass::GetPlacementRect(this, v42); /*0x480d2e*/
  StartCoords = House::GetStartCoords(this, v43); /*0x480d33*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x480d48*/
  {
    v9 = *PlacementRect; /*0x480ddd*/
    v17 = PlacementRect[1]; /*0x480ddf*/
    v18 = PlacementRect[2]; /*0x480de2*/
    v13 = PlacementRect[3]; /*0x480de5*/
  }
  else
  {
    v37 = PlacementRect[2]; /*0x480d53*/
    if ( v37 <= 0 || (v39 = PlacementRect[3], v39 <= 0) ) /*0x480d62*/
    {
      v9 = *StartCoords; /*0x480dd0*/
      v17 = StartCoords[1]; /*0x480dd2*/
      v18 = StartCoords[2]; /*0x480dd5*/
      v13 = StartCoords[3]; /*0x480dd8*/
    }
    else
    {
      v9 = *StartCoords; /*0x480d64*/
      v10 = *PlacementRect; /*0x480d66*/
      v11 = StartCoords[2]; /*0x480d68*/
      v12 = StartCoords[1]; /*0x480d6b*/
      v13 = StartCoords[3]; /*0x480d6e*/
      v14 = v9 <= *PlacementRect; /*0x480d71*/
      v41 = v11; /*0x480d73*/
      if ( !v14 ) /*0x480d77*/
      {
        v11 += v9 - v10; /*0x480d7b*/
        v9 = v10; /*0x480d7d*/
        v41 = v11; /*0x480d7f*/
      }
      v15 = PlacementRect[1]; /*0x480d83*/
      v38 = v15; /*0x480d88*/
      if ( v12 > v15 ) /*0x480d8c*/
      {
        v13 += v12 - v15; /*0x480d90*/
        v12 = v15; /*0x480d92*/
      }
      if ( v9 + v11 >= v10 + v37 ) /*0x480d9e*/
        v16 = v41; /*0x480dac*/
      else
        v16 = v10 - v9 + v37 + 1; /*0x480da6*/
      if ( v13 + v12 < v39 + v38 ) /*0x480dbf*/
        v13 = v39 + v38 - v12 + 1; /*0x480dc4*/
      v4 = *(_DWORD *)v40; /*0x480dc6*/
      v17 = v12; /*0x480dca*/
      v18 = v16; /*0x480dcc*/
    }
  }
  v43[1] = v17; /*0x480df0*/
  Cell::CreateCrater(v9, v17 - MEMORY[0x886FA4], v18, v13, 0); /*0x480e0c*/
  v19 = *(_BYTE *)(this + 286) + 16; /*0x480e19*/
  *(_BYTE *)(this + 286) = v19; /*0x480e1b*/
  v20 = *(_DWORD *)(v4 + 672); /*0x480e21*/
  if ( v19 >> 4 == v20 - 1 && v20 > 2 ) /*0x480e3d*/
  {
    v21 = 0; /*0x480e3f*/
    v22 = 1; /*0x480e41*/
    do /*0x480eba*/
    {
      if ( v22 ) /*0x480e44*/
      {
        *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480e52*/
        v39 = *CellStruct::Add(v40, &v38, (_WORD *)(4 * (v21 & 7) + 9041544)); /*0x480e78*/
        v23 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v39); /*0x480e7c*/
      }
      else
      {
        v23 = (_DWORD *)this; /*0x480e46*/
      }
      v24 = v23[17]; /*0x480e81*/
      if ( v24 != -1 /*0x480ea6*/
        && *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v24) + 680)
        && v24 == *(_DWORD *)(this + 68)
        && *((_BYTE *)v23 + 286) < 0x10u )
      {
        BuildingClass::SellEffects(200); /*0x480eaf*/
      }
      v21 += 2; /*0x480eb4*/
      v22 = (unsigned int)v21 < 8; /*0x480eb7*/
    }
    while ( v21 < 8 ); /*0x480eba*/
  }
  if ( a2 != -1 ) /*0x480ec5*/
  {
    v25 = *(_DWORD *)(v4 + 672); /*0x480ecd*/
    v26 = *(unsigned __int8 *)(this + 286) >> 4; /*0x480eda*/
    if ( v26 < v25 && (v26 != v25 - 1 || (*(_BYTE *)(this + 286) & 0xF) != 0) ) /*0x480eed*/
      return 0; /*0x481096*/
  }
  *(_DWORD *)(this + 80) = -1; /*0x480ef6*/
  *(_DWORD *)(this + 68) = -1; /*0x480ef9*/
  *(_BYTE *)(this + 286) = 0; /*0x480efc*/
  House::AnnounceUpgrade(this, -1); /*0x480f03*/
  Cell::SetRadar((int *)&MEMORY[0x87F7E8], (__int16 *)(this + 36)); /*0x480f11*/
  Radar::Update(&MEMORY[0x87F7E8], (__int16 *)(this + 36)); /*0x480f1c*/
  BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], this + 36); /*0x480f27*/
  a2 = *(_DWORD *)(this + 36); /*0x480f3c*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, MEMORY[0x89F688]); /*0x480f51*/
  v27 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40); /*0x480f55*/
  BuildingClass::ValidatePlacement(v27, 0); /*0x480f5e*/
  a2 = *(_DWORD *)(this + 36); /*0x480f73*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &MEMORY[0x89F6A0]); /*0x480f88*/
  v28 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40); /*0x480f8c*/
  BuildingClass::ValidatePlacement(v28, 0); /*0x480f95*/
  a2 = *(_DWORD *)(this + 36); /*0x480faa*/
  *(_DWORD *)v40 = *CellStruct::Add(&a2, &v39, &MEMORY[0x89F698]); /*0x480fbf*/
  v29 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40); /*0x480fc3*/
  BuildingClass::ValidatePlacement(v29, 0); /*0x480fcc*/
  *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x480fd9*/
  LOWORD(a2) = MEMORY[0x89F690] + v40[0]; /*0x480fef*/
  HIWORD(a2) = HIWORD(MEMORY[0x89F690]) + v40[1]; /*0x480ff4*/
  v30 = (void **)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x481007*/
  BuildingClass::ValidatePlacement(v30, 0); /*0x481010*/
  AbstractClass::AnnounceExpiredPointer((void **)this); /*0x481019*/
  v31 = 0; /*0x48101e*/
  v32 = 1; /*0x481020*/
  do /*0x481082*/
  {
    if ( v32 ) /*0x481023*/
    {
      v34 = v31 & 7; /*0x48102d*/
      *(_DWORD *)v40 = *(_DWORD *)(this + 36); /*0x481030*/
      v35 = v40[1] + HIWORD(MEMORY[0x89F688][v34]); /*0x481047*/
      LOWORD(a2) = v40[0] + LOWORD(MEMORY[0x89F688][v34]); /*0x48104f*/
      HIWORD(a2) = v35; /*0x481058*/
      *(_DWORD *)v40 = a2; /*0x481061*/
      v33 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], v40); /*0x48106b*/
    }
    else
    {
      v33 = (_BYTE *)this; /*0x481025*/
    }
    v32 = (unsigned int)++v31 < 8; /*0x481079*/
    --v33[290]; /*0x48107c*/
  }
  while ( v31 < 8 ); /*0x481082*/
  return 1; /*0x481089*/
}


// ==== 0x004810A0  Input::OffsetToDirection  this=Coord  sig=csp ====
char __thiscall Input_OffsetToDirection(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  double v3; // st7
  int v4; // eax

  v1 = (unsigned __int8)this->q004; /*0x4810aa*/
  v2 = (unsigned __int8)*this; /*0x4810b0*/
  v3 = Math::Sqrt((double)(v2 - 128) * (double)(v2 - 128) + (double)(v1 - 128) * (double)(v1 - 128)); /*0x4810e0*/
  if ( (int)Math::RoundToInt(v3) >= 60 ) /*0x4810f0*/
  {
    v4 = v2 > 128; /*0x481104*/
    if ( v1 > 128 ) /*0x48110f*/
      LOBYTE(v4) = v4 | 2; /*0x481111*/
    if ( v4 ) /*0x481115*/
      LOBYTE(v4) = v4 + 1; /*0x48111e*/
  }
  else
  {
    LOBYTE(v4) = 0; /*0x4810f3*/
  }
  return v4; /*0x4810f2*/
}


// ==== 0x00481130  BuildingPlacement::IsPlacementFlagSet  this=BuildingPlacement  sig=csp ====
bool __thiscall BuildingPlacement::IsPlacementFlagSet(unsigned __int8 *this, VectorClass *aP1, char a3)
{
  unsigned __int8 v3; // al

  if ( (unsigned int)aP1 < 2 ) /*0x481137*/
    return 0; /*0x48117a*/
  if ( a3 ) /*0x481144*/
    v3 = this->q128; /*0x481146*/
  else
    v3 = this->q124; /*0x481160*/
  return ((unsigned __int8)(1 << (char)aP1) & v3) == 0; /*0x481153*/
}


// ==== 0x00481180  ObjectPlacement::CalcPosition  this=ObjectPlacement  sig=csp ====
int *__thiscall ObjectPlacement::CalcPosition(_DWORD *this, int *a1, IUnknown *aP2, char a4, char a5, char a6)
{
  int v7; // ecx
  int *v8; // eax
  double v9; // st7
  int v10; // edi
  _DWORD *v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  bool v18; // al
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  bool v22; // zf
  unsigned __int8 *v23; // edi
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // edi
  int GroundHeight; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // [esp+18h] [ebp-1Ch] BYREF
  int v34; // [esp+1Ch] [ebp-18h]
  _DWORD v35[2]; // [esp+20h] [ebp-14h] BYREF
  char v36[4]; // [esp+28h] [ebp-Ch] BYREF
  int v37; // [esp+2Ch] [ebp-8h]
  int v38; // [esp+30h] [ebp-4h]
  int v39; // [esp+48h] [ebp+14h]

  v7 = (unsigned __int8)aP2->field_4; /*0x48119b*/
  v33 = (unsigned __int8)aP2->field_0; /*0x4811a1*/
  v34 = v7; /*0x4811aa*/
  v35[0] = 128; /*0x4811b9*/
  v35[1] = 128; /*0x4811bd*/
  v8 = Coord2D::Sub(&v33, (AbstractClass *)v36, (IUnknown *)v35); /*0x4811c1*/
  v9 = Math::Sqrt((double)*v8 * (double)*v8 + (double)v8[1] * (double)v8[1]); /*0x4811df*/
  if ( (int)Math::RoundToInt(v9) >= 60 ) /*0x4811ef*/
  {
    v10 = v33 > 128; /*0x4811ff*/
    if ( v34 > 128 ) /*0x481208*/
      v10 |= 2u; /*0x48120a*/
    if ( v10 ) /*0x48120f*/
      ++v10; /*0x481211*/
  }
  else
  {
    v10 = 0; /*0x4811f1*/
  }
  if ( a6 ) /*0x481218*/
  {
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 72))(this, v36); /*0x481226*/
    v12 = v11[1]; /*0x48122c*/
    v13 = *v11 - (unsigned __int8)*v11; /*0x481235*/
    v14 = v11[2]; /*0x481239*/
    v15 = v12 - (unsigned __int8)v12; /*0x481242*/
  }
  else
  {
    v13 = aP2->field_0 - (unsigned __int8)aP2->field_0; /*0x481251*/
    v15 = aP2->field_4 - (unsigned __int8)aP2->field_4; /*0x48125e*/
    v14 = aP2->field_8; /*0x481260*/
  }
  v16 = v13; /*0x481263*/
  v37 = v15; /*0x48126b*/
  v38 = v14; /*0x48126f*/
  if ( a5 ) /*0x481273*/
    v17 = *(this + 74); /*0x481275*/
  else
    v17 = *(this + 73); /*0x48127d*/
  v18 = (v17 & 0x20) != 0; /*0x48128a*/
  if ( !a4 )
  {
    if ( v18 ) /*0x481296*/
      goto LABEL_22; /*0x481296*/
    if ( (*(_BYTE *)(this + 73) & 0x40) != 0 ) /*0x48129f*/
    {
      v19 = PlacementList::FindByID(this, 6, 0); /*0x4812a7*/
      if ( !v19 || !*(_BYTE *)(v19[328] + 5815) ) /*0x4812b6*/
        goto LABEL_22; /*0x4812b6*/
      v20 = PlacementList::FindByID(this, 6, 0); /*0x4812c6*/
      if ( v20 && !*(_BYTE *)(v20[328] + 5815) ) /*0x4812d5*/
        v20 = 0; /*0x4812df*/
      if ( !BuildingClass::IsPoweredOn(v20) ) /*0x4812e3*/
      {
LABEL_22:
        *a1 = MEMORY[0x89E778]; /*0x4812fb*/
        a1[1] = MEMORY[0x89E77C]; /*0x481304*/
        a1[2] = MEMORY[0x89E780]; /*0x48130d*/
        return a1; /*0x481313*/
      }
    }
    if ( !v10 ) /*0x481318*/
    {
      v23 = (unsigned __int8 *)(4 * Random::Range(&MEMORY[0xA8B230]->random[1], 0, (IUnknown *)3) + 8506520); /*0x48139f*/
      goto LABEL_30; /*0x4813a6*/
    }
    if ( v10 == 1
      || (!a5
        ? (v22 = ((unsigned __int8)(1 << v10) & *(_BYTE *)(this + 73)) == 0)
        : (v22 = (*(_BYTE *)(this + 74) & (unsigned __int8)(1 << v10)) == 0),
          !v22) )
    {
      v23 = (unsigned __int8 *)(4 * v10 + 8506500); /*0x481356*/
LABEL_30:
      v39 = 0; /*0x48135d*/
      while ( 1 ) /*0x481367*/
      {
        v24 = *v23++; /*0x481367*/
        if ( v24 >= 2 ) /*0x48136c*/
        {
          if ( a5 ) /*0x481379*/
          {
            LOBYTE(v25) = *((_BYTE *)this + 296); /*0x48137b*/
            v26 = 1 << v24; /*0x481386*/
          }
          else
          {
            LOBYTE(v26) = *((_BYTE *)this + 292); /*0x4813a8*/
            v25 = 1 << v24; /*0x4813b3*/
          }
          if ( ((unsigned __int8)v25 & (unsigned __int8)v26) == 0 ) /*0x4813bc*/
            break; /*0x4813bc*/
        }
        if ( ++v39 >= 4 ) /*0x4813ca*/
        {
          *a1 = MEMORY[0x89E778]; /*0x4813db*/
          a1[1] = MEMORY[0x89E77C]; /*0x4813e4*/
          a1[2] = MEMORY[0x89E780]; /*0x4813ed*/
          return a1; /*0x4813f3*/
        }
      }
      v27 = 3 * v24; /*0x4813fa*/
      v28 = v16 + MEMORY[0x89E9F0][v27]; /*0x48141b*/
      v29 = v37 + MEMORY[0x89E9F4][v27]; /*0x481422*/
      v38 += MEMORY[0x89E9F8][v27]; /*0x481424*/
      GroundHeight = Cell::GetGroundHeight(aP2); /*0x481428*/
      if ( !a5 ) /*0x481433*/
        goto LABEL_43; /*0x481433*/
      goto LABEL_42; /*0x481433*/
    }
  }
  v31 = MEMORY[0x89E9F0][3 * v10]; /*0x481443*/
  v32 = MEMORY[0x89E9F8][3 * v10]; /*0x48145c*/
  v29 = v37 + MEMORY[0x89E9F4][3 * v10]; /*0x48145f*/
  v28 = v16 + v31; /*0x481463*/
  v38 += v32; /*0x48146a*/
  GroundHeight = Cell::GetGroundHeight(aP2); /*0x48146e*/
  if ( a5 ) /*0x481479*/
LABEL_42:
    GroundHeight += MEMORY[0x89E7B4]; /*0x48147b*/
LABEL_43:
  *a1 = v28; /*0x481481*/
  a1[1] = v29; /*0x481489*/
  a1[2] = GroundHeight; /*0x48148f*/
  return a1; /*0x4812f8*/
}


// ==== 0x004814F0  CellClass::InitRandomOffsets  this=IUnknown  sig=csp ====
int __thiscall CellClass::InitRandomOffsets(int this, BombClass *aP1, IUnknown *aP2)
{
  int v4; // esi
  int *v5; // edi
  int i; // ebx
  int v7; // eax
  _DWORD *v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ebx
  char v12; // al
  int v13; // esi
  int result; // eax
  int v15; // edi
  __int16 v16; // [esp+12h] [ebp-16h]

  if ( !MEMORY[0x89E7C7] )
  {
    MEMORY[0x89E7C7] = 1; /*0x48150f*/
    memset(MEMORY[0x89E620], 0xFFu, sizeof(MEMORY[0x89E620])); /*0x481516*/
    v4 = 0; /*0x481518*/
    v5 = MEMORY[0x89E620]; /*0x48151a*/
    do
    {
      for ( i = 0; i < 64; ++i )
      {
        v7 = Random::State(&MEMORY[0x87F8E4].__pad_5568[7484]) & 7; /*0x48152b*/
        v8 = &unk_81CCE8; /*0x48152e*/
        while ( 1 )
        {
          v9 = *v8 + v4 + 8 * v8[1]; /*0x481539*/
          v10 = v9 + (v9 < 0 ? 0x40 : 0);
          if ( v10 >= 64 ) /*0x481543*/
            v10 -= 64; /*0x481545*/
          if ( MEMORY[0x89E620][v10] == v7 ) /*0x48154f*/
            break; /*0x48154f*/
          v8 += 2; /*0x481551*/
          if ( (int)v8 >= (int)byte_81CD28 ) /*0x48155a*/
            goto LABEL_11; /*0x48155a*/
        }
      }
LABEL_11:
      *v5++ = v7; /*0x481564*/
      ++v4; /*0x481569*/
    }
    while ( (int)v5 < (int)&MEMORY[0x89E720] );
  }
  v11 = *(_DWORD *)(this + 36); /*0x481572*/
  v12 = v11; /*0x48157b*/
  LOBYTE(v16) = BYTE2(v11); /*0x481583*/
  if ( *(_BYTE *)(this + 282) ) /*0x481575*/
  {
    v13 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * (_DWORD)aP1); /*0x481596*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x48159d*/
    if ( !result ) /*0x4815a5*/
      return result; /*0x4815a5*/
    v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13); /*0x4815bd*/
    v16 = (__int16)(HIWORD(v11) - *(unsigned __int8 *)(this + 282) / v15) /*0x48161b*/
        / *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v13 + 156))(v13) + 4);
    v12 = (__int16)v11 / v15; /*0x481620*/
  }
  if ( (int)aP2 > 4 ) /*0x481629*/
    return MEMORY[0x89E620][8 * (v16 & 7) + (v12 & 7)]; /*0x48165c*/
  else
    return dword_81CCA8[v12 & 3 | (4 * (v16 & 3))]; /*0x48163e*/
}


// ==== 0x00481670  Cell::ApplyDamage  this=Cell  sig=csp ====
void __thiscall Cell::ApplyDamage(_DWORD *this, IUnknown *aP1, int a3, int a4, IUnknown *aP4)
{
  _DWORD *v6; // esi
  float *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  ObjectClass *v13; // esi
  char v14; // [esp+13h] [ebp-19h]
  void **v15; // [esp+14h] [ebp-18h] BYREF
  void *Block; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  char v19; // [esp+21h] [ebp-Bh]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]

  if ( (_BYTE)aP4 ) /*0x48167e*/
    v6 = (_DWORD *)this->q0E8; /*0x481680*/
  else
    v6 = (_DWORD *)this->q0E4; /*0x481688*/
  v14 = 0; /*0x481692*/
  if ( !(_BYTE)a4 && v6 ) /*0x48169f*/
  {
    while ( 1 ) /*0x4816a3*/
    {
      v7 = (float *)AbstractClass::IsTechnoType(v6); /*0x4816a3*/
      if ( v7 ) /*0x4816aa*/
      {
        if ( VeterancyStruct::IsElite(v7 + 84) ) /*0x4816b2*/
          break; /*0x4816b2*/
      }
      v6 = (_DWORD *)v6[12]; /*0x4816bb*/
      if ( !v6 ) /*0x4816c0*/
        goto LABEL_11; /*0x4816c0*/
    }
    v14 = 1; /*0x4816c4*/
  }
LABEL_11:
  if ( (_BYTE)aP4 ) /*0x4816ce*/
    v8 = this->q0E8; /*0x4816d0*/
  else
    v8 = this->q0E4; /*0x4816d8*/
  v9 = 0; /*0x4816de*/
  v10 = 0; /*0x4816e0*/
  v11 = 10; /*0x4816e2*/
  Block = 0; /*0x4816e9*/
  v17 = 0; /*0x4816ed*/
  v18 = 1; /*0x4816f1*/
  v19 = 0; /*0x4816f5*/
  v15 = &vt_DynamicVectorClass_ObjectClass; /*0x4816f9*/
  v21 = 10; /*0x481701*/
  v20 = 0; /*0x481705*/
  if ( v8 ) /*0x481709*/
  {
    while ( 1 ) /*0x481711*/
    {
      if ( v20 < v10 ) /*0x481715*/
        goto LABEL_22; /*0x481715*/
      if ( (v19 || !v10) && v11 > 0 ) /*0x481725*/
        break; /*0x481725*/
LABEL_24:
      v8 = *(_DWORD *)(v8 + 48); /*0x481750*/
      if ( !v8 ) /*0x481755*/
        goto LABEL_25; /*0x481755*/
      v11 = v21; /*0x48170d*/
    }
    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v15[2])(&v15, v11 + v10, 0) ) /*0x481733*/
    {
LABEL_22:
      v12 = v20++; /*0x48173a*/
      *((_DWORD *)Block + v12) = v8; /*0x481749*/
    }
    v10 = v17; /*0x48174c*/
    goto LABEL_24; /*0x48174c*/
  }
LABEL_25:
  if ( v20 > 0 ) /*0x48175b*/
  {
    do /*0x4817e0*/
    {
      v13 = (ObjectClass *)AbstractClass::IsTechnoType(*((void **)Block + v9)); /*0x481776*/
      if ( v14 /*0x4817c1*/
        || (_BYTE)a4
        || *(_BYTE *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 6125)
        || v13
        && (TechnoClass::HasVoiceResponse((float *)v13->__pad_0, 3)
         || *(_DWORD *)(v13[3].nextArrayIndex + 588) >= *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 5196)) )
      {
        (*(void (__thiscall **)(_DWORD, IUnknown *, int, int))(**((_DWORD **)Block + v9) + 372))( /*0x4817d3*/
          *((_DWORD *)Block + v9),
          aP1,
          a3,
          a4);
      }
      ++v9; /*0x4817dd*/
    }
    while ( v9 < v20 ); /*0x4817e0*/
  }
  v15 = &vt_VectorClass_ObjectClass; /*0x4817e9*/
  if ( Block ) /*0x4817f4*/
  {
    if ( v19 ) /*0x4817fc*/
      __3_YAXPAX_Z(Block); /*0x4817ff*/
  }
}


// ==== 0x00481810  Cell::GetNeighbourContent  this=Cell  sig=csp ====
void *__thiscall Cell_GetNeighbourContent(_DWORD *this, unsigned int a2)
{
  void *result; // eax
  __int16 v3; // ax
  int v4; // [esp+0h] [ebp-4h]

  result = this; /*0x481815*/
  if ( a2 < 8 ) /*0x48181a*/
  {
    v4 = this->q024; /*0x481822*/
    v3 = HIWORD(v4) + HIWORD(MEMORY[0x89F688][a2 & 7]); /*0x481839*/
    LOWORD(a2) = v4 + LOWORD(MEMORY[0x89F688][a2 & 7]); /*0x481841*/
    HIWORD(a2) = v3; /*0x48184a*/
    return CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2); /*0x48185d*/
  }
  return result; /*0x481863*/
}


// ==== 0x00481870  CellClass::SetThreatBounds  this=IUnknown  sig=csp ====
int __thiscall CellClass::SetThreatBounds(_DWORD *this, BuildingTypeClass *aP1, int a3)
{
  int v3; // ebx
  IUnknown *result; // eax
  int i; // edi
  int v6; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = this->ptr_24; /*0x481880*/
  v3 = Cell::PosToLinearIndex((__int16 *)&v7); /*0x481889*/
  result = HouseClass_Count; /*0x48188b*/
  for ( i = 0; i < (int)HouseClass_Count; ++i ) /*0x481894*/
  {
    v6 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * i]; /*0x4818a2*/
    if ( v6 && *(BuildingTypeClass **)(v6 + 48) != aP1 && !HouseClass::IsAllied((_DWORD *)v6, (IUnknown *)aP1) ) /*0x4818b7*/
      HouseClass::SetThreat_Bounds((char *)v6, v3, a3); /*0x4818c4*/
    result = HouseClass_Count; /*0x4818c9*/
  }
  return (int)result; /*0x4818d5*/
}


// ==== 0x004818E0  ObjectClass::UpdateTiberiumGrowth  this=ObjectClass  sig=csp ====
int __thiscall sub_4818E0(int this, char a2)
{
  int v3; // ecx
  int BuildingByTiberiumType; // eax
  int v5; // ebx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // cf
  _DWORD *v10; // eax
  int v11; // edx
  unsigned __int8 v12; // al
  int v14; // [esp+8h] [ebp-8h] BYREF
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+14h] [ebp+4h]

  v3 = *(_DWORD *)(this + 68); /*0x4818e7*/
  if ( v3 == -1 ) /*0x4818ed*/
    return 0; /*0x4818ed*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(v3); /*0x4818f3*/
  v5 = BuildingByTiberiumType; /*0x4818f8*/
  if ( BuildingByTiberiumType == -1 ) /*0x4818fd*/
    return 0; /*0x4819f2*/
  v6 = 0; /*0x481909*/
  v7 = *(_DWORD **)&MEMORY[0xB0F4EC]->__pad_0[4 * BuildingByTiberiumType]; /*0x48190c*/
  v15 = v7[46]; /*0x481915*/
  if ( a2 ) /*0x48191f*/
    *(_DWORD *)(this + 68) = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, v7[56], v7[56] + 700 * v7[58] - 700); /*0x481955*/
  v8 = 0; /*0x481958*/
  v9 = 1; /*0x48195a*/
  do /*0x4819bc*/
  {
    if ( v9 ) /*0x48195d*/
    {
      v11 = v8 & 7; /*0x481968*/
      v14 = *(_DWORD *)(this + 36); /*0x48196b*/
      LOWORD(v16) = v14 + LOWORD(MEMORY[0x89F688][v11]); /*0x48198a*/
      HIWORD(v16) = HIWORD(v14) + HIWORD(MEMORY[0x89F688][v11]); /*0x481993*/
      v14 = v16; /*0x48199c*/
      v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x4819a6*/
    }
    else
    {
      v10 = (_DWORD *)this; /*0x48195f*/
    }
    if ( FindBuildingByTiberiumType(v10[17]) == v5 ) /*0x4819b5*/
      ++v6; /*0x4819b7*/
    v9 = (unsigned int)++v8 < 8; /*0x4819b9*/
  }
  while ( v8 < 8 ); /*0x4819bc*/
  v12 = byte_81CD28[4 * (v6 % *(_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * v5] + 228))]; /*0x4819d1*/
  *(_BYTE *)(this + 286) = v12; /*0x4819d8*/
  return v15 * (v12 + 1); /*0x4819e4*/
}


// ==== 0x00481A00  CrateClass::ProcessPickup  this=CrateClass  sig=csp ====
char __thiscall CrateClass::ProcessPickup(_DWORD *this, AbstractClass *aP1)
{
  int v3; // eax
  IUnknown *v4; // eax
  int *v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int v12; // edx
  int ecx20; // ecx
  ObjectClass *v13; // edi
  AbstractClass *v14; // edi
  int v16; // eax
  __int64 v17; // st7
  ObjectClass *v18; // ebx
  IUnknown *v19; // eax
  int edx70; // edx
  IUnknown *v21; // edi
  TechnoClass *eax70a; // eax
  int edi70; // edi
  bool v24; // cf
  IUnknown *v20; // eax
  TechnoClass *v26; // eax
  TechnoTypeClass *v22; // edi
  ObjectClass *v23; // ecx
  ObjectClass *v29; // ebx
  IUnknown *v30; // eax
  int *v31; // eax
  void *v32; // eax
  _BYTE *edi84; // edi
  AbstractClass *v27; // ebx
  int v35; // eax
  int ecx96; // ecx
  _DWORD *v37; // edx
  char v38; // bl
  char IsCurrentPlayer; // al
  ObjectClass *v33; // edi
  char *inited; // eax
  char *v42; // eax
  BuildingTypeClass *v36; // eax
  int v44; // edi
  int v45; // ebx
  int v46; // eax
  AbstractClass *v41; // edi
  int v49; // eax
  int v50; // edi
  int v51; // ebx
  int v52; // eax
  int *v53; // eax
  CoordStruct *WarheadVersusMultiplier; // ebx
  AnimClass *v48; // edi
  void *eax131; // eax
  int v57; // eax
  int edi134; // edi
  int v59; // ebx
  _DWORD *v60; // eax
  int v61; // edi
  int v62; // ecx
  AnimClass *v56; // eax
  void **v64; // eax
  AnimClass *v58; // edi
  int v66; // edx
  int v67; // edi
  int v68; // ebx
  _DWORD *v69; // eax
  int v70; // edx
  double st7_141; // st7
  _DWORD *v72; // eax
  int v73; // edx
  double v74; // st7
  int v75; // ebx
  HouseClass *v71; // edi
  int v77; // edi
  int v78; // ebx
  int edi164; // edi
  int v80; // ebx
  int i; // ebx
  int v82; // edi
  int v83; // eax
  BuildingTypeClass *v79; // edx
  int FirstOfAction; // ebx
  int v86; // eax
  int v87; // edx
  int v88; // ecx
  int v89; // edi
  _DWORD *v90; // eax
  int v91; // edx
  double v92; // st7
  int v93; // edx
  #375 *v94; // eax
  int v95; // edi
  int v96; // ebx
  _DWORD *eax197; // eax
  int v98; // edx
  double v99; // st7
  ObjectClass *v97; // eax
  int v101; // edi
  int v102; // ebx
  _DWORD *v103; // eax
  int v104; // edx
  double v105; // st7
  int v106; // edx
  #375 *v107; // eax
  int v108; // edi
  int v109; // ebx
  int v110; // edi
  int v111; // ebx
  int eax222a; // eax
  void **v113; // eax
  int v114; // [esp-4h] [ebp-19Ch]
  BuildingTypeClass *v112; // [esp+8h] [ebp-190h]
  char v116; // [esp+23h] [ebp-175h]
  BuildingTypeClass *v121; // [esp+24h] [ebp-174h] BYREF
  IUnknown *v118[2]; // [esp+28h] [ebp-170h]
  __int64 v119; // [esp+30h] [ebp-168h] BYREF
  int v120; // [esp+3Ch] [ebp-15Ch]
  BuildingTypeClass *v132; // [esp+40h] [ebp-158h] BYREF
  int aP2_4; // [esp+44h] [ebp-154h]
  char *aP2_8; // [esp+48h] [ebp-150h]
  int v124; // [esp+4Ch] [ebp-14Ch] BYREF
  int v125; // [esp+50h] [ebp-148h]
  int v126; // [esp+54h] [ebp-144h] BYREF
  int v127; // [esp+58h] [ebp-140h]
  AbstractClass *v139; // [esp+5Ch] [ebp-13Ch]
  int v129; // [esp+60h] [ebp-138h] BYREF
  CoordStruct v130; // [esp+64h] [ebp-134h] BYREF
  int v131; // [esp+78h] [ebp-120h]
  int var11C; // [esp+7Ch] [ebp-11Ch] BYREF
  CoordStruct v133; // [esp+80h] [ebp-118h] BYREF
  _DWORD v134[3]; // [esp+8Ch] [ebp-10Ch] BYREF
  _DWORD v135[3]; // [esp+98h] [ebp-100h] BYREF
  _DWORD v136[3]; // [esp+A4h] [ebp-F4h] BYREF
  int v137[3]; // [esp+B0h] [ebp-E8h] BYREF
  int v138[3]; // [esp+BCh] [ebp-DCh] BYREF
  _DWORD varD0[3]; // [esp+C8h] [ebp-D0h] BYREF
  _DWORD v140[3]; // [esp+D4h] [ebp-C4h] BYREF
  _DWORD v141[3]; // [esp+E0h] [ebp-B8h] BYREF
  _DWORD v142[3]; // [esp+ECh] [ebp-ACh] BYREF
  _DWORD v143[3]; // [esp+F8h] [ebp-A0h] BYREF
  _DWORD v144[3]; // [esp+104h] [ebp-94h] BYREF
  int v145; // [esp+110h] [ebp-88h] BYREF
  char v146[12]; // [esp+114h] [ebp-84h] BYREF
  char v147[12]; // [esp+120h] [ebp-78h] BYREF
  char v148[12]; // [esp+12Ch] [ebp-6Ch] BYREF
  char v149[12]; // [esp+138h] [ebp-60h] BYREF
  char v150[12]; // [esp+144h] [ebp-54h] BYREF
  int v151[3]; // [esp+150h] [ebp-48h] BYREF
  char v152[12]; // [esp+15Ch] [ebp-3Ch] BYREF
  int a0[3]; // [esp+168h] [ebp-30h] BYREF
  char v154[12]; // [esp+174h] [ebp-24h] BYREF
  char v155[12]; // [esp+180h] [ebp-18h] BYREF
  char v156[12]; // [esp+18Ch] [ebp-Ch] BYREF

  if ( aP1 )
  {
    v3 = *(this + 17);
    if ( v3 != -1 )
    {
      if ( *(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * v3) + 682) )
      {
        v116 = 0;
        v121 = 0;
        if ( !*(_DWORD *)&HouseClass_Player.__pad_5568[8068]
          || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)aP1[15].__pad_0 + 52) + 422) )
        {
          if ( *(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * v3) + 683) )
          {
            if ( aP1[1].uniqueId )
            {
              Debug::Log();
              TeamClass::Update_0((void **)aP1[1].uniqueId, 49, aP1, *(IUnknown **)&stru_89E138.__pad_524[236], 0, 0);
              if ( !aP1[4].__pad_0[0] )
                return 0;
            }
            *(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13502) = 1;
          }
          if ( *((_BYTE *)this + 286) < 0x13u )
          {
            v11 = *((unsigned __int8 *)this + 286);
          }
          else
          {
            v4 = 0;
            v5 = dword_81DA8C;
            do
            {
              v6 = *v5++;
              v4 = (IUnknown *)((char *)v4 + v6);
            }
            while ( (int)v5 < (int)dword_81DAD8 );
            v7 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), (IUnknown *)1, v4);
            v8 = 0;
            v9 = 0;
            v10 = dword_81DA8C;
            do
            {
              v8 += *v10;
              if ( v7 <= v8 )
                break;
              ++v10;
              ++v9;
            }
            while ( (int)v10 < (int)dword_81DAD8 );
            v11 = v9;
          }
          v120 = v11;
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
          {
            v13 = *(ObjectClass **)aP1[15].__pad_0;
            v129 = BuildingClass::FindBySWType(v13, (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2848));
            if ( !v13[4].ambientSoundController[1]
              && (*(int (__stdcall **)(int *))(v13->objectTypeFlags + 24))(&v13->objectTypeFlags) > 1500
              && !DynamicVector::GetOrGrow(&v13[126].health, *(DynamicVector **)(v129 + 3576))
              && HouseClass_Player.__pad_5568[8100] )
            {
              v11 = 1;
              v120 = 1;
              v116 = 1;
            }
            switch ( v11 )
            {
              case 1:
                v14 = aP1;
                if ( *(int *)(*(_DWORD *)aP1[15].__pad_0 + 744) <= 50 )
                  goto LABEL_36;
                goto LABEL_35;
              case 3:
                v14 = aP1;
                if ( aP1[27].__pad_0[6] )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 6:
                v14 = aP1;
                if ( *(int *)(*(_DWORD *)aP1[15].__pad_0 + 756) > 100 )
                {
LABEL_35:
                  v11 = 0;
                  v120 = 0;
                }
LABEL_36:
                v16 = *(this + 59);
                if ( v16 == 2 || v16 == 6 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 9:
                v14 = aP1;
                if ( aP1[9].abstractFlags || aP1[9].nextArrayIndex != 1072693248 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 10:
                v14 = aP1;
                if ( *(_DWORD *)&aP1[39].__pad_0[4]
                  || *(_DWORD *)&aP1[39].__pad_0[8] != 1072693248
                  || (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 44))(aP1) == 2 )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 11:
                v14 = aP1;
                if ( aP1[9].referenceCount
                  || aP1[9].NeedsSaveOrLink != (void *)1072693248
                  || !(*(unsigned __int8 (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 684))(aP1) )
                {
                  v11 = 0;
                  v120 = 0;
                }
                break;
              case 14:
                v14 = aP1;
                if ( (aP1->abstractFlags & 1) != 0 )
                {
                  if ( *(_BYTE *)((*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)aP1->__pad_0 + 132))(aP1) + 3214) )
                  {
                    if ( (aP1->abstractFlags & 1) != 0 && VeterancyStruct::IsElite((float *)&aP1[9].__pad_0[12]) )
                    {
                      v11 = 0;
                      v120 = 0;
                    }
                  }
                  else
                  {
                    v11 = 0;
                    v120 = 0;
                  }
                }
                break;
              default:
                v14 = aP1;
                break;
            }
            if ( *(this + 59) == 2 && !stru_89E138.__pad_71C[v11 + 1132] )
            {
              v11 = 0;
              v120 = 0;
            }
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 )
              HouseClass::IncrementStat((_DWORD *)(*(_DWORD *)v14[15].__pad_0 + 19312), v11);
          }
          else if ( !*((_BYTE *)this + 286) )
          {
            v12 = *(this + 17);
            v121 = *(BuildingTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4416);
            ecx20 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * v12);
            if ( ecx20 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 252) )
            {
              v11 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5220);
              v120 = v11;
            }
            if ( ecx20 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 248) )
            {
              v11 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5224);
              v120 = v11;
            }
            if ( ecx20 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 256) )
            {
              v11 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5228);
              v120 = v11;
            }
          }
          v129 = this->q024;
          CellClass::CreateBuildingCrater((__int16 *)&stru_87C374.__pad_14B0[8132], (MouseClass *)&v129);
          if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] && HouseClass_Player.__pad_5568[8109] )
            CrateClass::FindPlacement(&stru_87C374.__pad_14B0[8132]);
          if ( v11 == 6 )
          {
            v11 = 0;
            v120 = 0;
          }
          v17 = *(__int64 *)&stru_89E138.__pad_71C[8 * v11 + 980];
          HIBYTE(v118[0]) = 0;
          v119 = v17;
          switch ( v11 )
          {
            case 0:
              goto LABEL_121;
            case 1:
              Debug::Log();
              edi84 = 0;
              if ( v116 )
              {
                v27 = aP1;
                edi84 = (_BYTE *)BuildingClass::FindBySWType(
                                   *(_DWORD **)aP1[15].__pad_0,
                                   (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2848));
                if ( edi84 )
                  goto LABEL_93;
              }
              else
              {
                v27 = aP1;
              }
              if ( (DynamicVector::GetOrGrow(
                      (_DWORD *)(*(_DWORD *)v27[15].__pad_0 + 21760),
                      *(DynamicVector **)(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2280) + 3576)) > 0
                 || DynamicVector::GetOrGrow(
                      (_DWORD *)(*(_DWORD *)v27[15].__pad_0 + 21760),
                      *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2280) + 4)
                                        + 3576)) > 0)
                && !DynamicVector::GetOrGrow(
                      (_DWORD *)(*(_DWORD *)v27[15].__pad_0 + 21780),
                      *(DynamicVector **)(**(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2880) + 3576))
                && !DynamicVector::GetOrGrow(
                      (_DWORD *)(*(_DWORD *)v27[15].__pad_0 + 21780),
                      *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2880) + 4)
                                        + 3576)) )
              {
                edi84 = (_BYTE *)BuildingClass::FindBySWType(
                                   *(_DWORD **)v27[15].__pad_0,
                                   (AbstractClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2876));
              }
LABEL_93:
              if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4424) )
                edi84 = *(_BYTE **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4424);
              if ( edi84 )
                goto LABEL_111;
              do
              {
                while ( 1 )
                {
                  do
                  {
                    edi84 = *(_BYTE **)&g_UnitTypeCount2->__pad_0[4
                                                                * Random::Range(
                                                                    (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060]
                                                                             + 536),
                                                                    0,
                                                                    (IUnknown *)((char *)&g_CrateCount[-1].NeedsSaveOrLink
                                                                               + 3))];
                    v35 = 0;
                    ecx96 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2864);
                    if ( ecx96 <= 0 )
                    {
LABEL_100:
                      v38 = 0;
                    }
                    else
                    {
                      v37 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2852);
                      while ( (_BYTE *)*v37 != edi84 )
                      {
                        ++v35;
                        ++v37;
                        if ( v35 >= ecx96 )
                          goto LABEL_100;
                      }
                      v38 = 1;
                    }
                    IsCurrentPlayer = House::IsCurrentPlayer(*(#375 **)aP1[15].__pad_0);
                  }
                  while ( !edi84[3597] );
                  if ( HouseClass_Player.__pad_5568[8100] )
                    break;
                  if ( !v38 )
                    goto LABEL_109;
                }
              }
              while ( v38 && !IsCurrentPlayer && !v116 );
LABEL_109:
              if ( !edi84 )
                goto LABEL_221;
              v27 = aP1;
LABEL_111:
              v33 = (ObjectClass *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)edi84 + 140))(
                                     edi84,
                                     *(_DWORD *)v27[15].__pad_0);
              if ( !v33 )
                goto LABEL_221;
              v126 = this->q024;
              Coord::Subtract(
                &v132,
                (IUnknown *)(((__int16)v126 << 8) + 128),
                (IUnknown *)((SHIWORD(v126) << 8) + 128),
                0);
              v124 = 128;
              v125 = 128;
              inited = (char *)Isometric::InitTables((int)this, (IUnknown *)&v124);
              v135[0] = v132;
              aP2_8 = inited;
              v135[1] = aP2_4;
              v135[2] = inited;
              if ( (*(unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD *, _DWORD))(*(_DWORD *)v33->__pad_0 + 216))(
                     v33,
                     v135,
                     0) )
              {
                if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
                {
                  v126 = this->q024;
                  Coord::Subtract(
                    &v132,
                    (IUnknown *)(((__int16)v126 << 8) + 128),
                    (IUnknown *)((SHIWORD(v126) << 8) + 128),
                    0);
                  v119 = 0x8000000080LL;
                  v42 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                  v143[1] = aP2_4;
                  aP2_8 = v42;
                  v143[0] = v132;
                  v143[2] = v42;
                  StartAudioControllerAt(
                    *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 504),
                    (int)v143,
                    0);
                }
                return 0;
              }
              var11C = this->q024;
              v129 = 0;
              v36 = (BuildingTypeClass *)*LayerClass::Pathfinding_Find(
                                            (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                            (IUnknown *)&var11C,
                                            (IUnknown *)&v145,
                                            (IUnknown *)&var11C,
                                            *(IUnknown **)(*(_DWORD *)&v33[10].__pad_0[12] + 1660),
                                            (IUnknown *)0xFFFFFFFF,
                                            0,
                                            0,
                                            (IUnknown *)1,
                                            (IUnknown *)1,
                                            0,
                                            0,
                                            0,
                                            (IUnknown *)1,
                                            (IUnknown *)&v129,
                                            0,
                                            0);
              v126 = (int)v36;
              if ( v36 != *(BuildingTypeClass **)&stru_89E138.__pad_524[236] )
              {
                v142[1] = (SHIWORD(v36) << 8) + 128;
                v142[0] = ((__int16)v36 << 8) + 128;
                v142[2] = 0;
                if ( (*(unsigned __int8 (__thiscall **)(ObjectClass *, _DWORD *, _DWORD))(*(_DWORD *)v33->__pad_0 + 216))(
                       v33,
                       v142,
                       0) )
                {
                  if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
                  {
                    v126 = this->q024;
                    v44 = ((__int16)v126 << 8) + 128;
                    v45 = (SHIWORD(v126) << 8) + 128;
                    v119 = 0x8000000080LL;
                    v46 = Isometric::InitTables((int)this, (IUnknown *)&v119);
                    v138[0] = v44;
                    v138[1] = v45;
                    v138[2] = v46;
                    StartAudioControllerAt(
                      *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 504),
                      (int)v138,
                      0);
                  }
                  return 0;
                }
              }
              (*(void (__thiscall **)(ObjectClass *, int))(*(_DWORD *)v33->__pad_0 + 32))(v33, 1);
              v120 = 0;
LABEL_121:
              Debug::Log();
              v41 = (AbstractClass *)v121;
              if ( !v121 )
              {
                v49 = Math::RoundToInt(*(double *)&v119);
                v41 = (AbstractClass *)Random::Range(
                                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                         (IUnknown *)v49,
                                         (IUnknown *)(v49 + 900));
              }
              if ( !(unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0)
                || *(_DWORD *)&HouseClass_Player.__pad_5568[8068] )
              {
                HouseClass::AddPower(*(_DWORD **)aP1[15].__pad_0, (IUnknown *)v41);
              }
              else
              {
                HouseClass::AddPower(HouseClass_Player.field_0, (IUnknown *)v41);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v126 = this->q024;
                Coord::Subtract(
                  &v132,
                  (IUnknown *)(((__int16)v126 << 8) + 128),
                  (IUnknown *)((SHIWORD(v126) << 8) + 128),
                  0);
                v119 = 0x8000000080LL;
                aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                v134[2] = aP2_8;
                v134[0] = v132;
                v134[1] = aP2_4;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 484),
                  (int)v134,
                  0);
              }
              goto LABEL_221;
            case 2:
              Debug::Log();
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = this->q024;
                edi164 = ((__int16)v124 << 8) + 128;
                v80 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v137[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v137[0] = edi164;
                v137[1] = v80;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1816),
                  (int)v137,
                  0);
              }
              for ( i = 0; i < *(int *)&stru_87C374.__pad_14B0[8036]; ++i )
              {
                v82 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[8024] + 4 * i);
                if ( v82
                  && (aP1->abstractFlags & 1) != 0
                  && *(_DWORD *)aP1[15].__pad_0 == (*(int (__thiscall **)(int))(*(_DWORD *)v82 + 60))(v82) )
                {
                  v83 = (*(int (__thiscall **)(int))(*(_DWORD *)v82 + 136))(v82);
                  v79 = *(BuildingTypeClass **)v82;
                  v124 = *(_DWORD *)(v82 + 108) - *(_DWORD *)(v83 + 160);
                  (*(void (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))&v79->__pad_14D[31])(
                    v82,
                    &v124,
                    0,
                    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
              goto LABEL_221;
            case 3:
              Debug::Log();
              for ( v121 = 0;
                    (int)v121 < *(int *)&stru_89E138.__pad_14B0[3512];
                    v121 = (BuildingTypeClass *)((char *)v121 + 1) )
              {
                v118[1] = *(IUnknown **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * (_DWORD)v121);
                if ( v118[1] )
                {
                  if ( v118[1]->__pad_68[12] )
                  {
                    if ( (v118[1]->__pad_10[4] & 1) != 0 )
                    {
                      v124 = this->q024;
                      v67 = ((__int16)v124 << 8) + 128;
                      v68 = (SHIWORD(v124) << 8) + 128;
                      v119 = 0x8000000080LL;
                      v139 = (AbstractClass *)Isometric::InitTables((int)this, (IUnknown *)&v119);
                      v69 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(v118[1]->field_0 + 72))(v118[1], v148);
                      v70 = v69[2];
                      v132 = (BuildingTypeClass *)(v67 - *v69);
                      aP2_4 = v68 - v69[1];
                      aP2_8 = &v139->__pad_0[-v70];
                      st7_141 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                              (double)(int)&v139->__pad_0[-v70]
                                                            * (double)(int)&v139->__pad_0[-v70]
                                                            + (double)aP2_4 * (double)aP2_4
                                                            + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(st7_141) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5932) )
                        v118[1]->__pad_3BC[22] = 1;
                    }
                  }
                }
              }
              goto LABEL_221;
            case 4:
              Debug::Log();
              v126 = Math::RoundToInt(*(double *)&v119);
              v114 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008);
              v118[1] = (IUnknown *)v126;
              (*(void (__thiscall **)(AbstractClass *, int *, _DWORD, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 364))(
                aP1,
                &v126,
                0,
                v114,
                0,
                1,
                0,
                0);
              v121 = (BuildingTypeClass *)5;
              do
              {
                v124 = Random::Range(
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)0x200);
                v126 = this->q024;
                v50 = ((__int16)v126 << 8) + 128;
                v51 = (SHIWORD(v126) << 8) + 128;
                v119 = 0x8000000080LL;
                v52 = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v140[0] = v50;
                v140[1] = v51;
                v140[2] = v52;
                v53 = RandomCoordScatter(v151, (IUnknown *)v140, v124, 0);
                v132 = (BuildingTypeClass *)*v53;
                aP2_4 = v53[1];
                aP2_8 = (char *)v53[2];
                PlaySoundEffectAt(
                  (TechnoClass *)&v132,
                  v118[1],
                  0,
                  *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                  1,
                  0);
                WarheadVersusMultiplier = (CoordStruct *)GetWarheadVersusMultiplier(
                                                           (CoordStruct *)v118[1],
                                                           *(BuildingTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224]
                                                                                 + 4008),
                                                           0,
                                                           (BulletClass *)&v132);
                v48 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
                if ( v48 )
                {
                  eax131 = (void *)Return::HRESULT_Fail((BulletClass *)v132, aP2_4, (int)aP2_8);
                  AnimClass::ctor(
                    (void **)v48,
                    WarheadVersusMultiplier,
                    (CoordStruct *)&v132,
                    0,
                    (CoordStruct *)1,
                    (void *)0x2600,
                    eax131,
                    0);
                }
                CreateSmokeEffectAt(
                  (int)v118[1],
                  *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
                  (int)v132,
                  aP2_4,
                  (int)aP2_8,
                  0,
                  0);
                v121 = (BuildingTypeClass *)((char *)v121 - 1);
              }
              while ( v121 );
              goto LABEL_221;
            case 5:
              Debug::Log();
              v57 = this->q024;
              edi134 = ((__int16)v57 << 8) + 128;
              v59 = (SHIWORD(v57) << 8) + 128;
              v124 = 128;
              v125 = 128;
              aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v124);
              v60 = (_DWORD *)(*(int (__thiscall **)(AbstractClass *, char *))(*(_DWORD *)aP1->__pad_0 + 72))(aP1, v147);
              v61 = *v60 + edi134;
              v62 = v59 + v60[1];
              v56 = (AnimClass *)((int)&aP2_8[v60[2]] / 2);
              v133.X = v61 / 2;
              v133.Y = v62 / 2;
              v133.Z = (int)v56;
              v64 = (void **)__2_YAPAXI_Z(0x1C8u);
              if ( v64 )
                AnimClass::ctor(
                  v64,
                  **(CoordStruct ***)&stru_89E138.__pad_1600D[15],
                  &v133,
                  0,
                  (CoordStruct *)1,
                  (void *)0x600,
                  0,
                  0);
              v58 = (AnimClass *)Math::RoundToInt(*(double *)&v119);
              v66 = *(_DWORD *)aP1->__pad_0;
              v124 = (int)v58;
              (*(void (__thiscall **)(AbstractClass *, int *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(v66 + 364))(
                aP1,
                &v124,
                0,
                *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3972),
                0,
                1,
                0,
                0);
              PlaySoundEffectAt(
                (TechnoClass *)&v133,
                (IUnknown *)v58,
                0,
                *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3972),
                1,
                0);
              goto LABEL_221;
            case 7:
              Debug::Log();
              ShroudClass::Reset(&stru_87C374.__pad_14B0[8132], *(IUnknown **)aP1[15].__pad_0);
              goto LABEL_221;
            case 8:
              Debug::Log();
              LayerClass::Reveal(&stru_87C374.__pad_14B0[8132], *(_DWORD *)aP1[15].__pad_0);
              v126 = this->q024;
              Coord::Subtract(
                &v132,
                (IUnknown *)(((__int16)v126 << 8) + 128),
                (IUnknown *)((SHIWORD(v126) << 8) + 128),
                0);
              v119 = 0x8000000080LL;
              aP2_8 = (char *)Isometric::InitTables((int)this, (IUnknown *)&v119);
              v144[2] = aP2_8;
              v144[0] = v132;
              v144[1] = aP2_4;
              StartAudioControllerAt(
                *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 488),
                (int)v144,
                0);
              goto LABEL_221;
            case 9:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 1) != 0 )
                    {
                      v124 = this->q024;
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v90 = (_DWORD *)(*(int (__thiscall **)(BuildingTypeClass *, char *))(*(_DWORD *)v121->vtable0 + 72))(
                                        v121,
                                        v152);
                      v91 = v90[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v90);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v90[1];
                      aP2_8 = (char *)(v131 - v91);
                      v92 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v91) * (double)(v131 - v91)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v92) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(_DWORD *)&v121->__pad_14D[11]
                        && *(_DWORD *)&v121->__pad_14D[15] == 1072693248 )
                      {
                        v93 = *(_DWORD *)v121->vtable0;
                        *(double *)&v121->__pad_14D[11] = *(double *)&v119 * *(double *)&v121->__pad_14D[11];
                        v94 = (#375 *)(*(int (**)(void))(v93 + 60))();
                        if ( (unsigned __int8)House::IsHumanPlayer(v94) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitarmorup, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = this->q024;
                v95 = ((__int16)v124 << 8) + 128;
                v96 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                varD0[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                varD0[0] = v95;
                varD0[1] = v96;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 496),
                  (int)varD0,
                  0);
              }
              goto LABEL_221;
            case 10:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 4) != 0 )
                    {
                      v124 = this->q024;
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      eax197 = (_DWORD *)(*(int (__thiscall **)(BuildingTypeClass *, char *))(*(_DWORD *)v121->vtable0
                                                                                            + 72))(
                                           v121,
                                           v154);
                      v98 = eax197[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *eax197);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - eax197[1];
                      aP2_8 = (char *)(v131 - v98);
                      v99 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v98) * (double)(v131 - v98)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v99) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(_DWORD *)&v121->DebrisTypes[620]
                        && *(_DWORD *)&v121->DebrisTypes[624] == 1072693248
                        && (*(int (__thiscall **)(BuildingTypeClass *))(*(_DWORD *)v121->vtable0 + 44))(v121) != 2 )
                      {
                        v97 = *(ObjectClass **)&v121->AlphaImageFile[9];
                        *(double *)&v121->DebrisTypes[620] = *(double *)&v119 * *(double *)&v121->DebrisTypes[620];
                        if ( BYTE1(v97[2].lastLayer) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitspeedup, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = this->q024;
                v101 = ((__int16)v124 << 8) + 128;
                v102 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v141[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v141[0] = v101;
                v141[1] = v102;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 500),
                  (int)v141,
                  0);
              }
              goto LABEL_221;
            case 11:
              Debug::Log();
              v118[1] = 0;
              if ( *(int *)&stru_89E138.__pad_14B0[3512] > 0 )
              {
                do
                {
                  v121 = *(BuildingTypeClass **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * (int)v118[1]);
                  if ( v121 )
                  {
                    if ( (v121->abstractFlags & 1) != 0 )
                    {
                      v124 = this->q024;
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v103 = (_DWORD *)(*(int (__thiscall **)(BuildingTypeClass *, char *))(*(_DWORD *)v121->vtable0 + 72))(
                                         v121,
                                         v156);
                      v104 = v103[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v103);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v103[1];
                      aP2_8 = (char *)(v131 - v104);
                      v105 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                           (double)(int)v132 * (double)(int)v132
                                                         + (double)(v131 - v104) * (double)(v131 - v104)
                                                         + (double)aP2_4 * (double)aP2_4));
                      if ( (int)Math::RoundToInt(v105) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5932)
                        && !*(_DWORD *)&v121->__pad_14D[19]
                        && *(_DWORD *)&v121->__pad_14D[23] == 1072693248 )
                      {
                        v106 = *(_DWORD *)v121->vtable0;
                        *(double *)&v121->__pad_14D[19] = *(double *)&v119 * *(double *)&v121->__pad_14D[19];
                        v107 = (#375 *)(*(int (**)(void))(v106 + 60))();
                        if ( (unsigned __int8)House::IsHumanPlayer(v107) )
                          HIBYTE(v118[0]) = 1;
                      }
                    }
                  }
                  ++v118[1];
                }
                while ( (int)v118[1] < *(int *)&stru_89E138.__pad_14B0[3512] );
                if ( HIBYTE(v118[0]) )
                  VoxClass::FindAndPlay(aEvaUnitfirepow, -1, -1);
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = this->q024;
                v108 = ((__int16)v124 << 8) + 128;
                v109 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v130.Z = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v130.X = v108;
                v130.Y = v109;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 492),
                  (int)&v130,
                  0);
              }
              goto LABEL_221;
            case 12:
              Debug::Log();
              FirstOfAction = SuperWeaponTypeClass::FindFirstOfAction((void *)0x14);
              v86 = 0;
              v87 = *(_DWORD *)aP1[15].__pad_0;
              v88 = *(_DWORD *)(v87 + 612);
              if ( v88 <= 0 )
                goto LABEL_221;
              v124 = *(_DWORD *)(v87 + 600);
              v89 = v124;
              break;
            case 14:
              Debug::Log();
              for ( v121 = 0;
                    (int)v121 < *(int *)&stru_89E138.__pad_14B0[3512];
                    v121 = (BuildingTypeClass *)((char *)v121 + 1) )
              {
                v118[1] = *(IUnknown **)(*(_DWORD *)&stru_89E138.__pad_14B0[3500] + 4 * (_DWORD)v121);
                if ( v118[1] )
                {
                  if ( v118[1]->__pad_68[12] )
                  {
                    if ( (v118[1]->__pad_10[4] & 1) != 0 )
                    {
                      v124 = this->q024;
                      v126 = 128;
                      v127 = 128;
                      v131 = Isometric::InitTables((int)this, (IUnknown *)&v126);
                      v72 = (_DWORD *)(*(int (__thiscall **)(IUnknown *, char *))(v118[1]->field_0 + 72))(v118[1], v150);
                      v73 = v72[2];
                      v132 = (BuildingTypeClass *)(((__int16)v124 << 8) + 128 - *v72);
                      aP2_4 = (SHIWORD(v124) << 8) + 128 - v72[1];
                      aP2_8 = (char *)(v131 - v73);
                      v74 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                          (double)(v131 - v73) * (double)(v131 - v73)
                                                        + (double)aP2_4 * (double)aP2_4
                                                        + (double)(int)v132 * (double)(int)v132));
                      if ( (int)Math::RoundToInt(v74) < *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5932) )
                      {
                        if ( *(_BYTE *)((*(int (__thiscall **)(IUnknown *))(v118[1]->field_0 + 132))(v118[1]) + 3214) )
                        {
                          v75 = 0;
                          if ( *(double *)&v119 > 0.0 )
                          {
                            v71 = (HouseClass *)&v118[1]->field_150;
                            do
                            {
                              if ( VeterancyStruct::IsVeteran((float *)v71->__pad_0) )
                                Timer::SetFlag(v71, 1);
                              if ( VeterancyStruct::IsRookie((float *)v71->__pad_0) )
                                Power::ChangedHouse(v71, 1);
                              if ( VeinholeClass::GetState((float *)v71->__pad_0) )
                                Crate::processCratePickup(v71, 1);
                              v124 = ++v75;
                            }
                            while ( (double)v75 < *(double *)&v119 );
                          }
                        }
                      }
                    }
                  }
                }
              }
              if ( (unsigned __int8)House::IsHumanPlayer(*(#375 **)aP1[15].__pad_0) )
              {
                v124 = this->q024;
                v77 = ((__int16)v124 << 8) + 128;
                v78 = (SHIWORD(v124) << 8) + 128;
                v119 = 0x8000000080LL;
                v136[2] = Isometric::InitTables((int)this, (IUnknown *)&v119);
                v136[0] = v77;
                v136[1] = v78;
                StartAudioControllerAt(
                  *(AudioController **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 508),
                  (int)v136,
                  0);
              }
              goto LABEL_221;
            case 16:
              Debug::Log();
              v18 = (ObjectClass *)Crate::applyCrateEffect(&off_81D07C);
              v19 = (IUnknown *)Math::RoundToInt(*(double *)&v119);
              edx70 = *this;
              v21 = v19;
              v118[1] = v19;
              eax70a = (TechnoClass *)(*(int (__thiscall **)(_DWORD *, char *))(edx70 + 72))(this, v146);
              PlaySoundEffectAt(eax70a, v21, 0, v18, 0, 0);
              edi70 = 0;
              v24 = 1;
              do
              {
                if ( v24 )
                {
                  v121 = (BuildingTypeClass *)this->q024;
                  v126 = *NeighborCoord(&v124, &v121, edi70);
                  v20 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v126);
                }
                else
                {
                  v20 = (IUnknown *)this;
                }
                v26 = (TechnoClass *)(*(int (__thiscall **)(IUnknown *, char *))(v20->field_0 + 72))(v20, v155);
                PlaySoundEffectAt(v26, v118[1], 0, v18, 0, 0);
                v24 = (unsigned int)++edi70 < 8;
              }
              while ( edi70 < 8 );
              goto LABEL_221;
            case 17:
              Debug::Log();
              v22 = (TechnoTypeClass *)Random::Range(
                                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                         0,
                                         (IUnknown *)(*(_DWORD *)&stru_B05488.__pad_579C[18644] - 1));
              if ( v22 == (TechnoTypeClass *)1 )
                v22 = 0;
              Crate::FindPlacement((int)this, (IUnknown *)v22, 1);
              v23 = (ObjectClass *)Random::Range(
                                     (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                     (IUnknown *)0xA,
                                     (IUnknown *)0x14);
              if ( v23 )
              {
                v29 = v23;
                do
                {
                  v112 = (BuildingTypeClass *)Random::Range(
                                                (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                                                0,
                                                (IUnknown *)0x300);
                  v30 = (IUnknown *)(*(int (__thiscall **)(_DWORD *, char *))(*this + 72))(this, v149);
                  v31 = RandomCoordScatter(a0, v30, (int)v112, (ScenarioClass *)1);
                  v132 = (BuildingTypeClass *)*v31;
                  aP2_4 = v31[1];
                  aP2_8 = (char *)v31[2];
                  v32 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v132);
                  Crate::FindPlacement((int)v32, (IUnknown *)v22, 1);
                  v29 = (ObjectClass *)((char *)v29 - 1);
                }
                while ( v29 );
              }
              goto LABEL_221;
            default:
              goto LABEL_221;
          }
          while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v89 + 40) + 180) )
          {
            ++v86;
            v89 += 4;
            if ( v86 >= v88 )
              goto LABEL_221;
          }
          if ( v86 != -1
            && SuperClass::StartTimer(*(_DWORD *)(v124 + 4 * *(_DWORD *)(FirstOfAction + 152)), (IUnknown *)1, 0, 0)
            && aP1[29].__pad_0[6] )
          {
            SidebarClass::AddCameo((int *)&stru_87C374.__pad_14B0[8132], 31, *(AnimClass **)(FirstOfAction + 152));
          }
LABEL_221:
          if ( dword_81DAD8[v120] != -1 )
          {
            v124 = this->q024;
            v110 = ((__int16)v124 << 8) + 128;
            v111 = (SHIWORD(v124) << 8) + 128;
            v119 = 0x8000000080LL;
            eax222a = Isometric::InitTables((int)this, (IUnknown *)&v119);
            v130.X = v110;
            v130.Y = v111;
            v130.Z = eax222a + 200;
            v113 = (void **)__2_YAPAXI_Z(0x1C8u);
            if ( v113 )
              AnimClass::ctor(
                v113,
                *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * dword_81DAD8[v120]),
                &v130,
                0,
                (CoordStruct *)1,
                (void *)0x600,
                0,
                0);
          }
        }
      }
    }
  }
  return 1;
}



// ==== 0x00483410  HouseClass::MarkCellBuildable  this=HouseClass  sig=csp ====
char __thiscall sub_483410(int this, int a2)
{
  int v3; // eax

  if ( (*(_BYTE *)(this + 320) & 0x10) != 0 || !Cell::IsBuildable(this, 1, 0, 0, -1, 0, -1, 1) ) /*0x48342a*/
    return 0; /*0x48344e*/
  v3 = *(_DWORD *)(this + 320); /*0x483433*/
  LOBYTE(v3) = v3 | 0x10; /*0x483439*/
  *(_DWORD *)(this + 320) = v3; /*0x48343b*/
  *(_DWORD *)(this + 80) = a2; /*0x483445*/
  return 1; /*0x48344a*/
}


// ==== 0x00483460  HouseClass::checkAutoProduction  this=HouseClass  sig=csp ====
char __thiscall sub_483460(_DWORD *this)
{
  int v1; // eax

  v1 = this->q140; /*0x483460*/
  if ( (v1 & 0x10) == 0 ) /*0x483468*/
    return 0; /*0x48347c*/
  LOBYTE(v1) = v1 & 0xEF; /*0x48346a*/
  this->unitRepairStations = -1; /*0x48346c*/
  this->q140 = v1; /*0x483473*/
  return 1; /*0x48347b*/
}


// ==== 0x00483480  CellClass::DamageAllObjects  this=AbstractClass  sig=csp ====
int __thiscall CellClass_DamageAllObjects(_DWORD *this)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = (_DWORD *)this->q0E4; i; i = (_DWORD *)i[12] ) /*0x483489*/
    result = (*(int (__thiscall **)(_DWORD *))(*i + 252))(i); /*0x48348f*/
  return result; /*0x48349c*/
}


// ==== 0x004834A0  Cell::IsBuildable  this=Cell  sig=csp ====
bool __thiscall Cell::IsBuildable(
        int this,
        int a2,
        char a3,
        char a4,
        IUnknown *aP4,
        IUnknown *aP5,
        IUnknown *aP6,
        IUnknown *aP7)
{
  int v10; // ecx
  char v11; // cl
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // esi

  if ( a2 == 4 ) /*0x4834ad*/
    return 1; /*0x4834ad*/
  if ( aP4 != (IUnknown *)-1 /*0x4834d6*/
    && aP4 != (IUnknown *)MapClass::GetTileIndex(&MEMORY[0x87F7E8], (IUnknown *)(this + 36), aP5, aP7) )
  {
    return 0; /*0x4834de*/
  }
  if ( aP6 != (IUnknown *)-1 ) /*0x4834ed*/
  {
    v10 = *(char *)(this + 283); /*0x4834ef*/
    if ( aP6 == (IUnknown *)v10 ) /*0x4834f8*/
    {
      if ( (*(_DWORD *)(this + 320) & 0x100) != 0 && !(_BYTE)aP7 ) /*0x48351c*/
        return 0; /*0x483524*/
    }
    else if ( (*(_DWORD *)(this + 320) & 0x100) == 0 || aP6 != (IUnknown *)(v10 + 4) ) /*0x483507*/
    {
      return 0; /*0x48350f*/
    }
  }
  v11 = 0; /*0x483527*/
  if ( (aP6 == (IUnknown *)-1 || aP6 == (IUnknown *)(*(char *)(this + 283) + 4)) /*0x483542*/
    && (*(_DWORD *)(this + 320) & 0x100) != 0 )
  {
    v11 = 1; /*0x483546*/
    v12 = *(unsigned __int8 *)(this + 296); /*0x483548*/
  }
  else
  {
    v12 = *(unsigned __int8 *)(this + 292); /*0x483552*/
  }
  if ( a3 ) /*0x48355e*/
    v12 &= 0xE0u; /*0x483560*/
  if ( a4 ) /*0x48356b*/
    v12 &= 0x5Fu; /*0x48356d*/
  if ( v12 ) /*0x483572*/
    return 0; /*0x48357a*/
  v13 = *(_DWORD *)(this + 236); /*0x48357d*/
  v14 = *(_DWORD *)(this + 68); /*0x483583*/
  if ( v14 != -1 ) /*0x483589*/
  {
    v15 = *(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * v14]; /*0x483591*/
    if ( v15 ) /*0x483596*/
    {
      if ( *(_BYTE *)(v15 + 680) ) /*0x483598*/
      {
        if ( aP5 != (IUnknown *)2 /*0x4835c8*/
          && aP5 != (IUnknown *)3
          && aP5 != (IUnknown *)8
          && (aP5 != (IUnknown *)1 && aP5 != (IUnknown *)4 || !*(_BYTE *)(v15 + 557))
          && aP5 != (IUnknown *)12 )
        {
          return 0; /*0x4835d0*/
        }
        v13 = 0; /*0x4835d3*/
      }
    }
  }
  return MEMORY[0x89EA40][8 * v13 + a2 + v13] != 0.0 || v11; /*0x483602*/
}


// ==== 0x00483610  ObjectClass::processPointerInvalid  this=ObjectClass  sig=csp ====
int __thiscall sub_483610(_DWORD *this)
{
  return (this->q140 >> 8) & 1; /*0x48361c*/
}


// ==== 0x00483620  BuildingClass::IsTiberiumCollectorEligible  this=BuildingClass  sig=csp ====
bool __thiscall sub_483620(int this)
{
  int BuildingByTiberiumType; // eax
  int v4; // eax

  if ( !*(_BYTE *)(MEMORY[0x87F7E8][536210] + 13478) ) /*0x483628*/
    return 0; /*0x483632*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x483639*/
  if ( BuildingByTiberiumType == -1 ) /*0x483641*/
    return 0; /*0x483643*/
  v4 = *(_DWORD *)(dword_A8ED54[131558] + 4 * BuildingByTiberiumType); /*0x48364d*/
  if ( *(_BYTE *)(this + 284) ) /*0x483650*/
    return 0; /*0x48365a*/
  if ( *(unsigned __int8 *)(this + 286) < *(_DWORD *)(v4 + 228) - 1 ) /*0x48366f*/
    return *(double *)(v4 + 176) >= 0.00001; /*0x483686*/
  return 0; /*0x483634*/
}


// ==== 0x00483690  BuildingClass::IsTiberiumSiloEligible  this=BuildingClass  sig=csp ====
bool __thiscall sub_483690(int this)
{
  int BuildingByTiberiumType; // edi

  if ( *(char *)MEMORY[0x87F7E8][536210] >= 0 ) /*0x48369c*/
    return 0; /*0x48369f*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x4836ab*/
  if ( BuildingByTiberiumType == -1 ) /*0x4836b0*/
    return 0; /*0x4836b3*/
  if ( *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2 ) /*0x4836c8*/
    return 0; /*0x4836cb*/
  if ( *(_BYTE *)(this + 284) ) /*0x4836cf*/
    return 0; /*0x4836da*/
  if ( *(double *)(*(_DWORD *)(dword_A8ED54[131558] + 4 * BuildingByTiberiumType) + 160) >= 0.00001 ) /*0x4836f8*/
    return *(_DWORD *)(this + 228) == 0; /*0x483708*/
  return 0; /*0x48369e*/
}


// ==== 0x00483710  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_483710(int this)
{
  int BuildingByTiberiumType; // eax
  int v3; // eax
  IUnknown *v4; // eax

  if ( !*(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) ) /*0x483718*/
    return 0; /*0x483718*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x483725*/
  if ( BuildingByTiberiumType == -1 ) /*0x48372d*/
    return 0; /*0x48372d*/
  v3 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType); /*0x483735*/
  if ( *(_BYTE *)(this + 284) /*0x483766*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v3 + 228) - 1
    || *(double *)(v3 + 176) < 0.00001 )
  {
    return 0; /*0x48377c*/
  }
  v4 = (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x48376b*/
  return Crate::FindPlacement(this, v4, 1); /*0x48377a*/
}


// ==== 0x00483780  CellClass::SpawnTiberiumTree  this=CellClass  sig=csp ====
char __thiscall CellClass::SpawnTiberiumTree(int this, char a2)
{
  int BuildingByTiberiumType; // eax
  int v5; // eax
  char v7; // bp
  int v8; // ebx
  unsigned int v9; // eax
  void *v10; // esi
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h] BYREF
  ObjectClass *aP1; // [esp+18h] [ebp-4h]
  IUnknown *v14; // [esp+20h] [ebp+4h]

  if ( !a2 ) /*0x48378f*/
  {
    if ( (char)**(_BYTE **)&HouseClass_Player.__pad_5568[8060] >= 0 ) /*0x483799*/
      return 0; /*0x483799*/
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x48379e*/
    if ( BuildingByTiberiumType == -1 /*0x4837e1*/
      || *(unsigned __int8 *)(this + 286) <= BuildingByTiberiumType / 2
      || *(_BYTE *)(this + 284)
      || *(double *)(*(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType) + 160) < 0.00001
      || *(_DWORD *)(this + 228) )
    {
      return 0; /*0x4837e9*/
    }
  }
  v5 = FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x4837ee*/
  v14 = (IUnknown *)v5; /*0x4837f5*/
  if ( a2 ) /*0x4837f9*/
  {
    if ( v5 == -1 ) /*0x48380f*/
    {
      v14 = 0; /*0x483811*/
      v5 = 0; /*0x483819*/
    }
  }
  else if ( v5 == -1 ) /*0x4837fe*/
  {
    return 0; /*0x483809*/
  }
  aP1 = *(ObjectClass **)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * v5); /*0x48382f*/
  v7 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)7); /*0x48383e*/
  v8 = 0; /*0x483840*/
  while ( 1 ) /*0x483845*/
  {
    v9 = ((_BYTE)v8 + v7) & 7; /*0x483845*/
    if ( v9 < 8 ) /*0x48384b*/
    {
      v12 = *(_DWORD *)(this + 36); /*0x483857*/
      LOWORD(v11) = *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 160] + v12; /*0x48386a*/
      HIWORD(v11) = HIWORD(v12) + *(_WORD *)&stru_89E138.__pad_14B0[4 * v9 + 162]; /*0x48387d*/
      v12 = v11; /*0x48388b*/
      v10 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v12); /*0x483894*/
    }
    else
    {
      v10 = (void *)this; /*0x48384d*/
    }
    if ( v10 && IsCoordValidMap((int)v10, aP1) ) /*0x4838a1*/
      break; /*0x4838a1*/
    if ( ++v8 >= 8 ) /*0x4838ae*/
      return 0; /*0x4838b9*/
  }
  return Crate::FindPlacement((int)v10, v14, 3); /*0x483800*/
}


// ==== 0x004838E0  ObjectClass::IsCoordValidMap  this=IUnknown  sig=csp ====
char __thiscall IsCoordValidMap(int this, ObjectClass *aP1)
{
  _DWORD *v3; // esi
  int v4; // esi
  _DWORD *v5; // esi
  int v6; // eax

  if ( LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (IUnknown *)(this + 36), (TechnoClass *)1) /*0x483905*/
    && (*(_DWORD *)(this + 320) & 0x500) == 0 )
  {
    if ( !MEMORY[0xA8D63C].__pad_1258[268] ) /*0x483912*/
      goto LABEL_17; /*0x483912*/
    v3 = *(_DWORD **)(this + 228); /*0x483918*/
    if ( v3 ) /*0x483920*/
    {
      while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 6 ) /*0x48392c*/
      {
        v3 = (_DWORD *)v3[12]; /*0x48392e*/
        if ( !v3 ) /*0x483933*/
          goto LABEL_11; /*0x483933*/
      }
      if ( (int)v3[27] > 0 ) /*0x483940*/
      {
        v4 = v3[328]; /*0x483942*/
        if ( !*(_BYTE *)(v4 + 3226) && !*(_BYTE *)(v4 + 5889) ) /*0x48395a*/
          return 0; /*0x48395a*/
      }
    }
LABEL_11:
    if ( !MEMORY[0xA8D63C].__pad_1258[268] ) /*0x483967*/
      goto LABEL_17; /*0x483967*/
    v5 = *(_DWORD **)(this + 228); /*0x483969*/
    if ( !v5 ) /*0x483971*/
      goto LABEL_17; /*0x483971*/
    while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 36 ) /*0x48397d*/
    {
      v5 = (_DWORD *)v5[12]; /*0x48397f*/
      if ( !v5 ) /*0x483984*/
        goto LABEL_17; /*0x483984*/
    }
    if ( !*(_BYTE *)(v5[50] + 689) ) /*0x483992*/
    {
LABEL_17:
      if ( MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)] ) /*0x4839a5*/
      {
        if ( *(_DWORD *)(this + 68) == -1 && !*(_BYTE *)(this + 284) ) /*0x4839b6*/
        {
          v6 = *(_DWORD *)(this + 56); /*0x4839c0*/
          if ( v6 < 0 /*0x4839d8*/
            || v6 >= *(int *)&MEMORY[0xA8D63C].__pad_14B0[588]
            || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v6) + 774) )
          {
            return 1; /*0x4839e6*/
          }
        }
      }
    }
  }
  return 0; /*0x4839e2*/
}


// ==== 0x004839F0  CellClass::SaveLoad_Prefix  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix(#378 *this)
{
  int v1; // ebp
  _DWORD *v2; // esi
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int i; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  int v19; // eax
  int v20; // [esp+28h] [ebp-4h] BYREF
  _DWORD *v21; // [esp+30h] [ebp+4h]
  int v22; // [esp+30h] [ebp+4h]
  int v23; // [esp+34h] [ebp+8h] BYREF

  v1 = v23; /*0x4839f3*/
  v2 = v21; /*0x4839f8*/
  result = AbstractClass::SaveLoad_Prefix_0(v21, v23); /*0x4839ff*/
  if ( result >= 0 ) /*0x483a08*/
  {
    if ( v21 ) /*0x483a10*/
    {
      AbstractClass::InitVtables(v21, (int)&v23); /*0x483a19*/
      v21[13] = 0; /*0x483a1e*/
      v21[19] = 0; /*0x483a21*/
      *v21 = &CellClass::`vftable'; /*0x483a24*/
      v21[1] = &CellClass::`vftable'; /*0x483a2a*/
      v21[2] = &CellClass::`vftable'; /*0x483a31*/
      v21[3] = &CellClass::`vftable'; /*0x483a38*/
    }
    if ( !v21[10] ) /*0x483a42*/
      goto LABEL_20; /*0x483a42*/
    v4 = __2_YAPAXI_Z(0x18u); /*0x483a4a*/
    v5 = v4; /*0x483a4f*/
    if ( v4 ) /*0x483a56*/
    {
      CellClass::clearOccupationFlags(v4, 0, 0); /*0x483a5c*/
      *v5 = &vt_DynamicVectorClass_FoggedObjectClass; /*0x483a61*/
      v5[5] = 10; /*0x483a67*/
      v5[4] = 0; /*0x483a6e*/
    }
    else
    {
      v5 = 0; /*0x483a73*/
    }
    v21[10] = v5; /*0x483a7a*/
    result = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v20, 4, 0); /*0x483a84*/
    if ( result >= 0 ) /*0x483a89*/
    {
      v22 = 0; /*0x483a93*/
      if ( v20 > 0 ) /*0x483a99*/
      {
        do /*0x483a9b*/
        {
          v6 = *(_DWORD *)v1; /*0x483a9b*/
          v23 = 0; /*0x483aa7*/
          if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(v6 + 12))(v1, &v23, 4, 0) < 0 ) /*0x483ab0*/
            return 0; /*0x483ab0*/
          v7 = v2[10]; /*0x483ab6*/
          v8 = *(_DWORD *)(v7 + 8); /*0x483ab9*/
          if ( *(_DWORD *)(v7 + 16) >= v8 ) /*0x483ac1*/
          {
            if ( !*(_BYTE *)(v7 + 13) && v8 ) /*0x483aca*/
              continue; /*0x483aca*/
            v9 = *(_DWORD *)(v7 + 20); /*0x483acc*/
            if ( v9 <= 0 || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 8))(v7, v8 + v9, 0) ) /*0x483adb*/
              continue; /*0x483adb*/
          }
          v10 = *(_DWORD *)(v7 + 16); /*0x483ae2*/
          v11 = *(_DWORD *)(v7 + 4); /*0x483ae5*/
          *(_DWORD *)(v7 + 16) = v10 + 1; /*0x483aeb*/
          *(_DWORD *)(v11 + 4 * v10) = v23; /*0x483af2*/
        }
        while ( ++v22 < v20 ); /*0x483a9b*/
      }
      v12 = v2[10]; /*0x483b06*/
      for ( i = 0; i < *(_DWORD *)(v12 + 16); ++i ) /*0x483b0e*/
      {
        ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)(*(_DWORD *)(v12 + 4) + 4 * i)); /*0x483b1c*/
        v12 = v2[10]; /*0x483b21*/
      }
LABEL_20:
      v14 = *((__int16 *)v2 + 18); /*0x483b2a*/
      v15 = *((__int16 *)v2 + 19) << 9; /*0x483b32*/
      v2[63] = 0; /*0x483b35*/
      v16 = MEMORY[0x87F924]; /*0x483b3b*/
      v17 = v14 + v15; /*0x483b40*/
      v18 = *(_DWORD *)(MEMORY[0x87F924] + 4 * v17); /*0x483b42*/
      if ( v18 ) /*0x483b47*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 32))(v18, 1); /*0x483b51*/
        *(_DWORD *)(MEMORY[0x87F924] + 4 * v17) = 0; /*0x483b59*/
        v16 = MEMORY[0x87F924]; /*0x483b5c*/
      }
      *(_DWORD *)(v16 + 4 * v17) = v2; /*0x483b61*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 11); /*0x483b6d*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 12); /*0x483b7b*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 15); /*0x483b89*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 56); /*0x483b9a*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 57); /*0x483bab*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 58); /*0x483bbc*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 62); /*0x483bcd*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 16); /*0x483bdb*/
      v19 = v2[17]; /*0x483be0*/
      if ( v19 == 179 || v19 == 242 ) /*0x483bef*/
      {
        v2[17] = -1; /*0x483bf1*/
        *((_BYTE *)v2 + 286) = 0; /*0x483bf8*/
      }
      return 0; /*0x483bfe*/
    }
  }
  return result; /*0x483c00*/
}


// ==== 0x00483C10  CellClass::SaveLoad_Prefix_0  this=CellClass  sig=csp ====
int __thiscall CellClass::SaveLoad_Prefix_0(#378 *this)
{
  int result; // eax
  int v2; // eax
  int v3; // edx
  int i; // edi
  int *v5; // [esp+18h] [ebp+4h]
  int *v6; // [esp+1Ch] [ebp+8h]
  int v7; // [esp+20h] [ebp+Ch] BYREF

  result = AbstractClass::SaveLoad_Prefix(v5, v6, v7); /*0x483c22*/
  if ( result >= 0 ) /*0x483c29*/
  {
    v2 = v5[10]; /*0x483c2b*/
    if ( v2 ) /*0x483c30*/
    {
      v3 = *v6; /*0x483c35*/
      v7 = *(_DWORD *)(v2 + 16); /*0x483c41*/
      result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(v6, &v7, 4, 0); /*0x483c45*/
      if ( result < 0 ) /*0x483c4a*/
        return result; /*0x483c4a*/
      for ( i = 0; i < v7; ++i ) /*0x483c54*/
      {
        if ( (*(int (__stdcall **)(int *, int, int, _DWORD))(*v6 + 16))(v6, *(_DWORD *)(v5[10] + 4) + 4 * i, 4, 0) < 0 ) /*0x483c6c*/
          break; /*0x483c6c*/
      }
    }
    return 0; /*0x483c77*/
  }
  return result; /*0x483c79*/
}


// ==== 0x00483C80  BuildingClass::DetermineVisualState  this=BuildingClass  sig=csp ====
void __thiscall sub_483C80(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax

  if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)(this + 36), 1) ) /*0x483c90*/
  {
    *(_DWORD *)(this + 76) = 7; /*0x483c99*/
    return; /*0x483ca3*/
  }
  v2 = *(_DWORD *)(this + 68); /*0x483ca4*/
  if ( v2 != -1 ) /*0x483caa*/
  {
    v3 = *((_DWORD *)MEMORY[0xA83D84] + v2); /*0x483cb2*/
    if ( *(_BYTE *)(v3 + 557) ) /*0x483cb5*/
    {
      *(_DWORD *)(this + 76) = 1; /*0x483cbf*/
      return; /*0x483cc9*/
    }
    if ( *(_BYTE *)(v3 + 680) ) /*0x483cca*/
      goto LABEL_7; /*0x483cd2*/
    if ( MEMORY[0x89EA48][9 * *(_DWORD *)(v3 + 664)] == 0.0 ) /*0x483cfa*/
    {
      *(_DWORD *)(this + 76) = 6; /*0x483cfc*/
      return; /*0x483d06*/
    }
    if ( *(_BYTE *)(v3 + 693) ) /*0x483d07*/
    {
      *(_DWORD *)(this + 76) = 6; /*0x483d11*/
      return; /*0x483d1b*/
    }
    if ( *(_BYTE *)(v3 + 692) ) /*0x483d1c*/
      goto LABEL_31; /*0x483d1c*/
  }
  v4 = *(_DWORD *)(this + 236); /*0x483d2a*/
  if ( v4 == 2 ) /*0x483d33*/
  {
    *(_DWORD *)(this + 76) = 4; /*0x483d35*/
    return; /*0x483d3f*/
  }
  if ( v4 == 6 ) /*0x483d47*/
  {
    *(_DWORD *)(this + 76) = 3; /*0x483d49*/
    return; /*0x483d53*/
  }
  if ( MEMORY[0x89EA48][9 * v4] <= 0.01 ) /*0x483d69*/
  {
LABEL_18:
    *(_DWORD *)(this + 76) = 6; /*0x483d6b*/
    return; /*0x483d71*/
  }
  v5 = *(_DWORD **)(this + 228); /*0x483d72*/
  if ( !v5 ) /*0x483d7a*/
  {
LABEL_31:
    *(_DWORD *)(this + 76) = 0; /*0x483dd4*/
    return; /*0x483dde*/
  }
  while ( 1 ) /*0x483d80*/
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5); /*0x483d80*/
    if ( v6 == 6 ) /*0x483d85*/
    {
      v7 = v5[328]; /*0x483d8e*/
      if ( *(_BYTE *)(v7 + 5824) ) /*0x483d94*/
      {
        if ( *(_BYTE *)(v5[135] + 506) ) /*0x483da4*/
          goto LABEL_18; /*0x483dac*/
      }
      else if ( *(_BYTE *)(v7 + 5823) ) /*0x483db0*/
      {
        v8 = v5[390]; /*0x483dba*/
        if ( v8 != 12 && v8 != 8 ) /*0x483dc8*/
          *(_DWORD *)(this + 76) = 6; /*0x483dca*/
      }
      goto LABEL_30; /*0x483dac*/
    }
    if ( v6 == 36 ) /*0x483d8a*/
      break; /*0x483d8a*/
LABEL_30:
    v5 = (_DWORD *)v5[12]; /*0x483dcd*/
    if ( !v5 ) /*0x483dd2*/
      goto LABEL_31; /*0x483dd2*/
  }
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1174) == 1 ) /*0x483df3*/
  {
    if ( *(_DWORD *)(v5[50] + 684) == 7 ) /*0x483e18*/
      goto LABEL_7; /*0x483e18*/
  }
  else if ( *(_DWORD *)(v5[50] + 680) == 7 ) /*0x483e01*/
  {
LABEL_7:
    *(_DWORD *)(this + 76) = 2; /*0x483cd4*/
    return; /*0x483cde*/
  }
  *(_DWORD *)(this + 76) = 5; /*0x483e1e*/
}


// ==== 0x00483E30  TacticalClass::SetView  this=IUnknown  sig=csp ====
__int16 __thiscall TacticalClass_SetView(int this, int a2, int a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7)
{
  int v7; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  __int16 v13; // cx
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // dx
  int v18; // eax
  __int16 v19; // cx
  int v21; // [esp+4h] [ebp-14h] BYREF
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h] BYREF

  v7 = a2; /*0x483e30*/
  if ( a2 ) /*0x483e3c*/
  {
    v9 = *(_DWORD *)(this + 52); /*0x483e3e*/
    if ( v9 && MEMORY[0xA8E9A0] ) /*0x483e4d*/
      --*(_DWORD *)(v9 + 404); /*0x483e4f*/
    *(_DWORD *)(this + 52) = v7; /*0x483e55*/
    ++*(_DWORD *)(v7 + 404); /*0x483e5f*/
    v10 = *(_DWORD **)(this + 52); /*0x483e65*/
    a2 = v10[102]; /*0x483e6e*/
    v21 = v10[103]; /*0x483e78*/
    v22 = v10[104]; /*0x483e82*/
LABEL_20:
    v13 = a4; /*0x483f7a*/
    v14 = a5; /*0x483f83*/
    *(_DWORD *)(this + 260) = a3; /*0x483f88*/
    v15 = a6; /*0x483f8e*/
    *(_WORD *)(this + 264) = v13; /*0x483f93*/
    v16 = a7; /*0x483f9a*/
    *(_WORD *)(this + 266) = v14; /*0x483f9f*/
    v17 = a2; /*0x483fa6*/
    *(_WORD *)(this + 268) = v15; /*0x483fab*/
    LOWORD(v18) = v21; /*0x483fb2*/
    *(_WORD *)(this + 270) = v16; /*0x483fb7*/
    v19 = v22; /*0x483fbe*/
    *(_WORD *)(this + 272) = v17; /*0x483fc3*/
    *(_WORD *)(this + 274) = v18; /*0x483fca*/
    *(_WORD *)(this + 276) = v19; /*0x483fd1*/
    return v18; /*0x483fdc*/
  }
  if ( (*(_WORD *)(this + 36) || *(_WORD *)(this + 38)) /*0x483eaa*/
    && (*(_WORD *)(this + 36) != 0xFFFF || *(_WORD *)(this + 38) != 0xFFFF) )
  {
    Tactical::CalculateTacticalLighting(&a3, &a4, &a5, &a6, &a7, &a2, &v21, &v22); /*0x483eda*/
    if ( !*(_DWORD *)(this + 52) ) /*0x483edf*/
      goto LABEL_18; /*0x483edf*/
    v23 = a2; /*0x483ef2*/
    v24 = v21; /*0x483efa*/
    v25 = v22; /*0x483efe*/
    QuantizeColorRGB(&v25); /*0x483f0b*/
    v11 = *(_DWORD **)(this + 52); /*0x483f10*/
    if ( v11[102] != v23 || v11[103] != v24 || v11[104] != v25 ) /*0x483f3b*/
    {
      if ( MEMORY[0xA8E9A0] ) /*0x483f45*/
        --v11[101]; /*0x483f47*/
      *(_DWORD *)(this + 52) = 0; /*0x483f4d*/
    }
    if ( !*(_DWORD *)(this + 52) ) /*0x483f54*/
    {
LABEL_18:
      v12 = CreateSurfaceClassPrimary(v22); /*0x483f68*/
      *(_DWORD *)(this + 52) = v12; /*0x483f6f*/
      if ( v12 ) /*0x483f72*/
        ++*(_DWORD *)(v12 + 404); /*0x483f74*/
    }
    goto LABEL_20; /*0x483f74*/
  }
  v18 = CreateSurfaceClassPrimary(1000); /*0x483fea*/
  *(_DWORD *)(this + 52) = v18; /*0x483ff1*/
  if ( v18 ) /*0x483ff4*/
    ++*(_DWORD *)(v18 + 404); /*0x483ff6*/
  *(_WORD *)(this + 266) = 1000; /*0x483ffc*/
  *(_WORD *)(this + 268) = 1000; /*0x484003*/
  *(_WORD *)(this + 270) = 1000; /*0x48400a*/
  *(_WORD *)(this + 272) = 1000; /*0x484011*/
  *(_WORD *)(this + 274) = 1000; /*0x484018*/
  *(_WORD *)(this + 276) = 1000; /*0x48401f*/
  *(_DWORD *)(this + 260) = 0x10000; /*0x484026*/
  *(_WORD *)(this + 264) = 0; /*0x484030*/
  return v18; /*0x483fd8*/
}


// ==== 0x00484050  Tactical::CreateTacticalLightSurface  this=Tactical  sig=csp ====
int *__thiscall Tactical::CreateTacticalLightSurface(
        int this,
        int *a2,
        int *a1,
        IUnknown *aP2,
        int *a3,
        int *a4,
        IUnknown *aP5)
{
  int *v7; // eax
  int *v8; // edx
  IUnknown *v9; // ebx
  IUnknown *v11; // ecx
  int *v12; // edi
  int v13; // esi
  int *result; // eax
  __int64 v15; // [esp-8h] [ebp-1Ch]
  int a6; // [esp+10h] [ebp-4h] BYREF

  v7 = a1; /*0x484051*/
  v8 = a3; /*0x484055*/
  v9 = aP5; /*0x48405a*/
  v11 = aP2; /*0x484063*/
  v12 = a4; /*0x484067*/
  *a1 = 0x10000; /*0x48406b*/
  v11->field_0 = 0; /*0x484071*/
  *v8 = 1000; /*0x484077*/
  *v12 = 1000; /*0x48407d*/
  v9->field_0 = 1000; /*0x484083*/
  if ( !*(_WORD *)(this + 36) && !*(_WORD *)(this + 38) /*0x4840a8*/
    || *(_WORD *)(this + 36) == 0xFFFF && *(_WORD *)(this + 38) == 0xFFFF )
  {
    result = (int *)CreateSurfaceClassPrimary(1000, 1000, 1000); /*0x484161*/
    *a2 = (int)result; /*0x48416d*/
  }
  else
  {
    HIDWORD(v15) = &a4; /*0x4840b2*/
    LODWORD(v15) = &aP5; /*0x4840b7*/
    Tactical::CalculateTacticalLighting((IUnknown *)this, v7, v11, v8, v12, v9, &a6, v15); /*0x4840c4*/
    if ( *(_DWORD *)(this + 52) /*0x484125*/
      && (a1 = (int *)a6,
          aP2 = aP5,
          a3 = a4,
          QuantizeColorRGB((int *)&a1, (int *)&aP2, (int *)&a3),
          v13 = *(_DWORD *)(this + 52),
          *(int **)(v13 + 408) == a1)
      && *(IUnknown **)(v13 + 412) == aP2
      && (result = *(int **)(v13 + 416), result == a3) )
    {
      *a2 = v13; /*0x48412c*/
    }
    else
    {
      result = (int *)CreateSurfaceClassPrimary(a6, (int)aP5, (int)a4); /*0x484142*/
      *a2 = (int)result; /*0x48414e*/
    }
  }
  return result; /*0x48412b*/
}


// ==== 0x00484180  Tactical::CalculateTacticalLighting  this=IUnknown  sig=csp ====
int __thiscall Tactical::CalculateTacticalLighting(
        IUnknown *this,
        int *a1,
        IUnknown *aP2,
        int *a3,
        int *a4,
        IUnknown *aP5,
        int *a6,
        __int64 a8)
{
  IUnknown *v8; // edi
  int *v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // ebx
  int v13; // ebp
  int *v14; // eax
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  double v18; // st7
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int result; // eax
  int v28; // [esp+18h] [ebp-2Ch]
  int v29; // [esp+18h] [ebp-2Ch]
  int v30; // [esp+18h] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-24h]
  _DWORD v33[2]; // [esp+24h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-18h]
  int v35; // [esp+30h] [ebp-14h]
  int v36; // [esp+34h] [ebp-10h]
  int v37; // [esp+38h] [ebp-Ch]
  int v38; // [esp+3Ch] [ebp-8h]
  int v39; // [esp+40h] [ebp-4h]

  v8 = this; /*0x484184*/
  if ( !LOWORD(this->field_24) && !HIWORD(this->field_24) /*0x4841a9*/
    || LOWORD(this->field_24) == 0xFFFF && HIWORD(this->field_24) == 0xFFFF )
  {
    *a1 = 0x10000; /*0x48462e*/
    aP2->field_0 = 0; /*0x484638*/
    *a3 = 1000; /*0x484642*/
    *a4 = 1000; /*0x48464c*/
    aP5->field_0 = 1000; /*0x484656*/
    *a6 = 1000; /*0x484660*/
    *(_DWORD *)a8 = 1000; /*0x484666*/
    *(_DWORD *)HIDWORD(a8) = 1000; /*0x48466c*/
    return HIDWORD(a8); /*0x48465c*/
  }
  v9 = a3; /*0x4841b5*/
  *a3 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13612) / 100; /*0x4841de*/
  *a6 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13620) / 100; /*0x48420d*/
  *(_DWORD *)a8 = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13624) / 100; /*0x48423c*/
  v10 = 0; /*0x48426b*/
  *(_DWORD *)HIDWORD(a8) = 1000 * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13628) / 100; /*0x48426d*/
  v32 = 0; /*0x484273*/
  for ( aP2->field_0 = 0; v32 < g_BridgeCellPool; ++v32 ) /*0x484285*/
  {
    v11 = *(_DWORD *)&dword_ABCA14->__pad_0[4 * v10]; /*0x484291*/
    if ( *(_BYTE *)(v11 + 72) && *(int *)&HouseClass_Player.__pad_5568[22724] >= *(_DWORD *)(v11 + 52) ) /*0x4842aa*/
    {
      v28 = v8->field_24; /*0x4842b5*/
      v12 = ((__int16)v28 << 8) + 128; /*0x4842cc*/
      v13 = (SHIWORD(v28) << 8) + 128; /*0x4842ce*/
      v33[0] = 128; /*0x4842d0*/
      v33[1] = 128; /*0x4842d4*/
      Isometric::InitTables((int)v8, (IUnknown *)v33); /*0x4842dd*/
      v14 = (int *)(v11 + 56); /*0x4842e2*/
      v15 = *(_DWORD *)(v11 + 56); /*0x4842e7*/
      v38 = *(_DWORD *)(v11 + 60); /*0x4842ec*/
      v16 = *(_DWORD *)(v11 + 68); /*0x4842f0*/
      v39 = *(_DWORD *)(v11 + 64); /*0x4842f6*/
      v29 = v12 - v15; /*0x4842fe*/
      v37 = *(_DWORD *)(v11 + 56); /*0x484306*/
      v17 = *(_DWORD *)(v11 + 60); /*0x48430a*/
      v39 = *(_DWORD *)(v11 + 64); /*0x484310*/
      if ( v29 * v29 + (v13 - v17) * (v13 - v17) <= v16 * v16 ) /*0x48432d*/
      {
        v34 = *v14; /*0x48433a*/
        v35 = *(_DWORD *)(v11 + 60); /*0x484341*/
        v37 = *v14; /*0x48434d*/
        v30 = v13 - *(_DWORD *)(v11 + 60); /*0x48435e*/
        v36 = *(_DWORD *)(v11 + 64); /*0x484369*/
        v39 = *(_DWORD *)(v11 + 64); /*0x484370*/
        v18 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)v30 * (double)v30 + (double)(v12 - v34) /*0x484385*/
                                                                                          * (double)(v12 - v34)));
        v19 = Math::RoundToInt(v18); /*0x48438d*/
        if ( v19 <= v16 ) /*0x484394*/
        {
          v20 = (1000 * v16 - 1000 * v19) / v16; /*0x4843bd*/
          aP2->field_0 += (int)(v20 * *(_DWORD *)(v11 + 36)) / 1000; /*0x4843db*/
          *a6 += (int)(v20 * *(_DWORD *)(v11 + 40)) / 1000; /*0x4843fc*/
          *(_DWORD *)a8 += (int)(v20 * *(_DWORD *)(v11 + 44)) / 1000; /*0x48441d*/
          *(_DWORD *)HIDWORD(a8) += (int)(v20 * *(_DWORD *)(v11 + 48)) / 1000; /*0x48443e*/
        }
      }
      v8 = this; /*0x484440*/
      v9 = a3; /*0x484444*/
    }
    v10 = v32 + 1; /*0x484452*/
  }
  v21 = aP2->field_0 + *v9; /*0x48446b*/
  *v9 = v21; /*0x48446f*/
  aP5->field_0 = v21; /*0x484471*/
  if ( !LightningStorm::IsActive() ) /*0x48447a*/
  {
    if ( PsyDom::IsActive() ) /*0x4844c4*/
    {
      *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x4844ec*/
           - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13708);
      v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13708); /*0x4844fa*/
      v24 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13712) * (SHIBYTE(v8->field_118) + 4); /*0x484503*/
    }
    else
    {
      if ( NukeFlash::IsActive() ) /*0x48450f*/
      {
        *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) /*0x484537*/
             - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13680);
        v22 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13684) * (SHIBYTE(v8->field_118) + 4) /*0x484559*/
            - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13680)
            + aP5->field_0;
        goto LABEL_21; /*0x48455b*/
      }
      *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13636) /*0x48457c*/
           - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13632);
      v23 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13632); /*0x48458a*/
      v24 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13636) * (SHIBYTE(v8->field_118) + 4); /*0x484593*/
    }
    v22 = v24 - v23 + aP5->field_0; /*0x48459e*/
    goto LABEL_21; /*0x48459e*/
  }
  *v9 += SHIBYTE(v8->field_118) * *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13660) /*0x48449b*/
       - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13656);
  v22 = *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13660) * (SHIBYTE(v8->field_118) + 4) /*0x4844bd*/
      - *(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13656)
      + aP5->field_0;
LABEL_21:
  aP5->field_0 = v22; /*0x4845a0*/
  v25 = *v9; /*0x4845a2*/
  if ( *v9 >= 2000 ) /*0x4845a9*/
    v25 = 2000; /*0x4845ab*/
  *v9 = v25; /*0x4845c0*/
  *a4 = v25; /*0x4845c2*/
  Map_Calc(a1, a4, a6, (int *)a8, (int *)HIDWORD(a8)); /*0x4845cf*/
  v26 = (*a1 * aP5->field_0) >> 16; /*0x4845da*/
  aP5->field_0 = v26; /*0x4845e2*/
  if ( v26 >= 2000 ) /*0x4845e4*/
    v26 = 2000; /*0x4845e6*/
  aP5->field_0 = v26; /*0x4845eb*/
  *v9 = *v9 <= 0 ? 0 : *v9;
  *a4 = *a4 <= 0 ? 0 : *a4;
  result = aP5->field_0 <= 0 ? 0 : aP5->field_0;
  aP5->field_0 = result; /*0x484615*/
  return result; /*0x48461a*/
}


// ==== 0x00484680  TacticalMap::ComputeScreenTint  this=TacticalMap  sig=csp ====
int __thiscall TacticalMap::ComputeScreenTint(int this)
{
  __int16 v2; // dx
  __int16 v3; // ax
  __int16 v4; // dx
  __int16 v5; // ax
  bool v6; // zf
  __int16 v7; // ax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // dx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // ax

  v2 = *(_WORD *)(this + 264) + (__int16)(1000 * *((_WORD *)MEMORY[0xA8B230] + 6806)) / 100; /*0x4846ab*/
  *(_WORD *)(this + 266) = v2; /*0x4846b2*/
  *(_WORD *)(this + 270) = v2; /*0x4846b9*/
  if ( LightningStorm::IsActive() ) /*0x4846c0*/
  {
    v3 = *(char *)(this + 283); /*0x4846cf*/
    *(_WORD *)(this + 266) += v3 * *((_WORD *)MEMORY[0xA8B230] + 6830) - *((_WORD *)MEMORY[0xA8B230] + 6828); /*0x4846ec*/
    v4 = (v3 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6830) - *((_WORD *)MEMORY[0xA8B230] + 6828); /*0x484703*/
  }
  else if ( PsyDom::IsActive() ) /*0x48470f*/
  {
    v5 = *(char *)(this + 283); /*0x48471e*/
    *(_WORD *)(this + 266) += v5 * *((_WORD *)MEMORY[0xA8B230] + 6856) - *((_WORD *)MEMORY[0xA8B230] + 6854); /*0x48473b*/
    v4 = (v5 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6856) - *((_WORD *)MEMORY[0xA8B230] + 6854); /*0x484752*/
  }
  else
  {
    v6 = !NukeFlash::IsActive(); /*0x484766*/
    v7 = *(char *)(this + 283); /*0x484768*/
    if ( v6 ) /*0x484770*/
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)MEMORY[0xA8B230] + 6818) - *((_WORD *)MEMORY[0xA8B230] + 6816); /*0x4847bc*/
      v4 = (v7 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6818) - *((_WORD *)MEMORY[0xA8B230] + 6816); /*0x4847d3*/
    }
    else
    {
      *(_WORD *)(this + 266) += v7 * *((_WORD *)MEMORY[0xA8B230] + 6842) - *((_WORD *)MEMORY[0xA8B230] + 6840); /*0x484787*/
      v4 = (v7 + 4) * *((_WORD *)MEMORY[0xA8B230] + 6842) - *((_WORD *)MEMORY[0xA8B230] + 6840); /*0x48479e*/
    }
  }
  v8 = *(__int16 *)(this + 266); /*0x4847da*/
  v9 = *(_DWORD *)(this + 260); /*0x4847e1*/
  *(_WORD *)(this + 270) += v4; /*0x4847e7*/
  *(_WORD *)(this + 268) = (unsigned int)(v9 * v8) >> 16; /*0x4847f4*/
  v10 = v9 * *(__int16 *)(this + 270); /*0x484802*/
  v11 = *(_WORD *)(this + 266); /*0x484805*/
  v12 = v10 >> 16; /*0x48480c*/
  *(_WORD *)(this + 270) = v12; /*0x484814*/
  if ( v11 >= 2000 ) /*0x48481e*/
    v11 = 2000; /*0x484820*/
  *(_WORD *)(this + 266) = v11; /*0x484825*/
  v13 = *(_WORD *)(this + 268); /*0x484838*/
  if ( v13 >= 2000 ) /*0x48483b*/
    v13 = 2000; /*0x48483d*/
  *(_WORD *)(this + 268) = v13; /*0x484846*/
  v14 = v12; /*0x48484d*/
  if ( (__int16)v12 >= 2000 ) /*0x484850*/
    v14 = 2000; /*0x484852*/
  v15 = *(_WORD *)(this + 266); /*0x484857*/
  *(_WORD *)(this + 270) = v14; /*0x48485e*/
  if ( v15 <= 0 ) /*0x484868*/
    v15 = 0; /*0x48486f*/
  *(_WORD *)(this + 266) = v15; /*0x484874*/
  if ( v13 <= 0 ) /*0x48487b*/
    v16 = 0; /*0x484882*/
  else
    v16 = v13; /*0x48487d*/
  *(_WORD *)(this + 268) = v16; /*0x484887*/
  if ( v14 <= 0 ) /*0x48488e*/
  {
    *(_WORD *)(this + 270) = 0; /*0x48489e*/
    return 0; /*0x48489c*/
  }
  else
  {
    *(_WORD *)(this + 270) = v14; /*0x484893*/
    return v14; /*0x484890*/
  }
}


// ==== 0x004848B0  JumpjetLocomotionClass::AdjustClimbFacing  this=IUnknown  sig=csp ====
int __thiscall sub_4848B0(__int16 *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // edi
  bool v9; // zf
  int result; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  bool v14; // sf
  bool v15; // of
  int v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // [esp+10h] [ebp-10h]
  __int16 v20; // [esp+14h] [ebp-Ch] BYREF
  __int16 v21; // [esp+16h] [ebp-Ah]
  int v22; // [esp+18h] [ebp-8h]

  v2 = a2; /*0x4848b4*/
  v4 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], a2) + 9); /*0x4848c8*/
  v5 = this->q012; /*0x4848cb*/
  v6 = this->q04C; /*0x4848cf*/
  v22 = v4; /*0x4848d3*/
  v7 = v6 - SHIWORD(v4); /*0x4848de*/
  v8 = v5 - (__int16)v4; /*0x4848e6*/
  v9 = v5 == (__int16)v4; /*0x4848ec*/
  result = dword_81CD5C[v5 + 3 * v7 - (__int16)v4]; /*0x4848ee*/
  v19 = result; /*0x4848f5*/
  if ( !v9 && v7 ) /*0x484901*/
  {
    if ( v8 == v7 ) /*0x484909*/
    {
      LOWORD(a2) = v4 + v8; /*0x484916*/
      HIWORD(a2) = HIWORD(v22); /*0x48491b*/
      v11 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x484944*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) >= v11; /*0x484959*/
      v20 = v4; /*0x484960*/
      v21 = HIWORD(v22) + v7; /*0x484965*/
      v12 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x48498e*/
      v13 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v20) + 283); /*0x484996*/
      v15 = __OFSUB__(v13, v12); /*0x48499d*/
      v14 = v13 - v12 < 0; /*0x48499d*/
    }
    else
    {
      LOWORD(a2) = v4 + v7; /*0x4849ab*/
      HIWORD(a2) = HIWORD(v22); /*0x4849b0*/
      v16 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x4849d3*/
      LOBYTE(a2) = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a2) + 283) >= v16; /*0x4849ee*/
      v20 = v4; /*0x4849f5*/
      v21 = HIWORD(v22) + v8; /*0x4849fa*/
      v17 = *((char *)Coord::To_Cell(&MEMORY[0x87F7E8], v2) + 283) + 2; /*0x484a23*/
      v18 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], &v20) + 283); /*0x484a2b*/
      v15 = __OFSUB__(v18, v17); /*0x484a32*/
      v14 = v18 - v17 < 0; /*0x484a32*/
    }
    if ( (_BYTE)a2 ) /*0x484a3d*/
    {
      if ( v14 != v15 ) /*0x484a38*/
        return ((_BYTE)v19 - 1) & 7; /*0x484a4e*/
      else
        return v19; /*0x484a6a*/
    }
    else
    {
      result = v19; /*0x484a59*/
      if ( v14 == v15 ) /*0x484a38*/
        return v19 + 1; /*0x484a62*/
    }
  }
  return result; /*0x484a47*/
}


// ==== 0x00484A80  sub_484A80  this=-  sig=csp ====
int __stdcall sub_484A80(int a1)
{
  ++*(_DWORD *)(a1 + 404); /*0x484a84*/
  return a1; /*0x484a8a*/
}


// ==== 0x00484AB0  InfantryClass::IsInBounds  this=InfantryClass  sig=csp ====
BOOL __thiscall InfantryClass_IsInBounds(int this)
{
  __int16 v1; // ax

  v1 = *(_WORD *)(this + 278); /*0x484ab0*/
  return v1 >= 0 && v1 < MEMORY[0x8B4148] && *(_DWORD *)(this + 236) == 10; /*0x484ad7*/
}


// ==== 0x00484AE0  InfantryClass::ValidateAttackPosition  this=InfantryClass  sig=csp ====
bool __thiscall InfantryClass_ValidateAttackPosition(int this)
{
  __int16 v2; // ax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _WORD *v6; // edi
  __int16 v7; // ax
  __int16 v8; // ax
  _WORD *v9; // eax
  __int16 v10; // cx
  __int16 v11; // cx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _WORD *v14; // edi
  __int16 v15; // ax
  __int16 v16; // ax
  void *v17; // esi
  int v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  int v21; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = *(_WORD *)(this + 278); /*0x484ae8*/
  if ( v2 >= 0 && v2 < MEMORY[0x8B4148] && *(_DWORD *)(this + 236) == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  v18 = *(_DWORD *)(this + 36); /*0x484b20*/
  v19 = *CellStruct::Add(&v18, &v21, MEMORY[0x89F688]); /*0x484b3a*/
  v4 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    v18 = v4[9]; /*0x484b59*/
    v20 = *CellStruct::Add(&v18, &v21, MEMORY[0x89F688]); /*0x484b73*/
    v6 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = *((_WORD *)v5 + 139); /*0x484b8b*/
      if ( v7 >= 0 && v7 < MEMORY[0x8B4148] && v5[59] == 10 ) /*0x484baa*/
      {
        v8 = v6[139]; /*0x484bac*/
        if ( v8 < 0 || v8 >= MEMORY[0x8B4148] || *((_DWORD *)v6 + 59) != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      v18 = *((_DWORD *)v6 + 9); /*0x484bd6*/
      v21 = *NeighborCoord(&v22, &v18, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = v6[139]; /*0x484c00*/
        if ( v10 >= 0 && v10 < MEMORY[0x8B4148] && *((_DWORD *)v6 + 59) == 10 ) /*0x484c1f*/
        {
          v11 = v9[139]; /*0x484c21*/
          if ( v11 < 0 || v11 >= MEMORY[0x8B4148] || *((_DWORD *)v9 + 59) != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  v21 = *(_DWORD *)(this + 36); /*0x484c4b*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x484c6c*/
  v13 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  v21 = v12[9]; /*0x484c80*/
  v19 = *NeighborCoord(&v22, &v21, 6); /*0x484c9d*/
  v14 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = *((_WORD *)v13 + 139); /*0x484cb0*/
  if ( v15 >= 0 && v15 < MEMORY[0x8B4148] && v13[59] == 10 ) /*0x484ccf*/
  {
    v16 = v14[139]; /*0x484cd1*/
    if ( v16 < 0 || v16 >= MEMORY[0x8B4148] || *((_DWORD *)v14 + 59) != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  v21 = *((_DWORD *)v14 + 9); /*0x484cfb*/
  v20 = *NeighborCoord(&v22, &v21, 6); /*0x484d18*/
  v17 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v20); /*0x484d21*/
  return v17 && InfantryClass::IsInBounds((int)v14) && !InfantryClass::IsInBounds((int)v17); /*0x484d40*/
}


// ==== 0x00484D60  InfantryClass::CanMoveThroughCell  this=InfantryClass  sig=csp ====
bool __thiscall sub_484D60(int this)
{
  __int16 v1; // ax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _WORD *v5; // eax
  __int16 v6; // cx
  __int16 v7; // cx
  int v8; // eax
  _WORD *v9; // edi
  _WORD *v10; // eax
  __int16 v11; // cx
  __int16 v12; // cx
  int v13; // [esp+Ch] [ebp-14h] BYREF
  int v14; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch] BYREF
  int v16; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = *(_WORD *)(this + 278); /*0x484d60*/
  if ( v1 >= 0 && v1 < MEMORY[0x8B4148] && *(_DWORD *)(this + 236) == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  v13 = *(_DWORD *)(this + 36); /*0x484d9c*/
  v14 = *CellStruct::Add(&v13, &v16, &MEMORY[0x89F694]); /*0x484db6*/
  v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x484dbf*/
  v4 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  v13 = v3[9]; /*0x484dd5*/
  v15 = *CellStruct::Add(&v13, &v16, &MEMORY[0x89F694]); /*0x484def*/
  v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = *((_WORD *)v4 + 139); /*0x484e05*/
  if ( v6 >= 0 && v6 < MEMORY[0x8B4148] && v4[59] == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5[139]; /*0x484e2a*/
  if ( v7 >= 0 && v7 < MEMORY[0x8B4148] && *((_DWORD *)v5 + 59) == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v4[9]; /*0x484e49*/
  LOWORD(v13) = MEMORY[0x89F698] + v8; /*0x484e58*/
  HIWORD(v13) = HIWORD(v8) + HIWORD(MEMORY[0x89F698]); /*0x484e6d*/
  v15 = v13; /*0x484e76*/
  v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v15); /*0x484e88*/
  v13 = v4[9]; /*0x484e97*/
  v16 = *CellStruct::Add(&v13, &v17, &MEMORY[0x89F690]); /*0x484eac*/
  v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9[139]; /*0x484ebd*/
  if ( v11 >= 0 && v11 < MEMORY[0x8B4148] && *((_DWORD *)v9 + 59) == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10[139]; /*0x484ede*/
  return v12 >= 0 && v12 < MEMORY[0x8B4148] && *((_DWORD *)v10 + 59) == 10; /*0x484efb*/
}


// ==== 0x00484F10  globalHelper_084F10  this=InfantryClass  sig=csp ====
char __stdcall sub_484F10(int a1)
{
  return 1; /*0x484f12*/
}


// ==== 0x00484F20  InfantryClass::GetType  this=InfantryClass  sig=csp ====
int __thiscall InfantryClass_GetType(__int16 *this)
{
  __int16 v1; // ax

  v1 = this->q08B; /*0x484f20*/
  if ( v1 < 0 || v1 >= MEMORY[0x8B4148] ) /*0x484f37*/
    return 0; /*0x484f43*/
  else
    return *((_DWORD *)MEMORY[0x8B413C] + v1); /*0x484f3f*/
}


// ==== 0x00484F50  ObjectClass::method_484F50  this=ObjectClass  sig=csp ====
int __thiscall sub_484F50(int this)
{
  int v2; // ecx
  int result; // eax
  int *v4; // edx
  _DWORD *v5; // edi
  int v6; // ebx
  _DWORD *v7; // esi
  _BYTE v8[40]; // [esp+4h] [ebp-28h] BYREF

  v2 = 0; /*0x484f56*/
  result = *(_DWORD *)(this + 228); /*0x484f58*/
  if ( result ) /*0x484f60*/
  {
    v4 = (int *)v8; /*0x484f62*/
    do /*0x484f76*/
    {
      if ( v2 >= 10 ) /*0x484f69*/
        break; /*0x484f69*/
      *v4 = result; /*0x484f6b*/
      result = *(_DWORD *)(result + 48); /*0x484f6d*/
      ++v2; /*0x484f70*/
      ++v4; /*0x484f71*/
    }
    while ( result ); /*0x484f76*/
  }
  if ( v2 > 0 ) /*0x484f7a*/
  {
    v5 = v8; /*0x484f7f*/
    v6 = v2; /*0x484f83*/
    do /*0x484fd8*/
    {
      v7 = (_DWORD *)*v5; /*0x484f85*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v5 + 460))(*v5, 0); /*0x484f8d*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 1 /*0x484fa9*/
        || (result = (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7), result == 2) )
      {
        if ( !v7[413] ) /*0x484fab*/
          WinAPI::Wrapper(-2147467261); /*0x484fba*/
        result = (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v7[413] + 124))( /*0x484fd1*/
                   v7[413],
                   *(unsigned __int8 *)(this + 284));
      }
      ++v5; /*0x484fd4*/
      --v6; /*0x484fd7*/
    }
    while ( v6 ); /*0x484fd8*/
  }
  return result; /*0x484fdd*/
}


// ==== 0x00484FF0  CellClass::GetUIName  this=CellClass  sig=csp ====
int __thiscall CellClass::GetUIName(int *this)
{
  int BuildingByTiberiumType; // eax

  BuildingByTiberiumType = FindBuildingByTiberiumType(this->q044); /*0x484ff3*/
  if ( BuildingByTiberiumType == -1 ) /*0x484ffb*/
    return 0; /*0x48500a*/
  else
    return *(_DWORD *)(*(_DWORD *)&MEMORY[0xB0F4EC]->__pad_0[4 * BuildingByTiberiumType] + 96); /*0x485006*/
}


// ==== 0x00485010  BuildingClass::FindByCellHash  this=BuildingClass  sig=csp ====
int __thiscall BuildingClass_FindByCellHash(_DWORD *this)
{
  return FindBuildingByTiberiumType(this->q044);
}


// ==== 0x00485020  Building::GetNthOfType  this=Building  sig=csp ====
int __thiscall Building_GetNthOfType(int this)
{
  int v2; // eax

  v2 = FindBuildingByTiberiumType(*(_DWORD *)(this + 68)); /*0x485026*/
  if ( v2 == -1 ) /*0x48502e*/
    return 0; /*0x485030*/
  else
    return (*(unsigned __int8 *)(this + 286) + 1) * *(_DWORD *)(*((_DWORD *)MEMORY[0xB0F4EC] + v2) + 184); /*0x48504f*/
}


// ==== 0x00485060  Cell::IsValidHeight  this=Cell  sig=csp ====
BOOL __thiscall Cell_IsValidHeight(int *this)
{
  int v1; // eax

  v1 = this->q038; /*0x485060*/
  return v1 >= dword_AA0738 && v1 < dword_AA0738 + 14; /*0x485079*/
}


// ==== 0x00485080  JumpjetLocomotionClass::FindClosestOccupiableCell  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::FindClosestOccupiableCell(_DWORD *this)
{
  int inited; // ebp
  int v3; // esi
  int *v5; // eax
  int v6; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  _BYTE v8[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = 128; /*0x48508f*/
  v7 = 128; /*0x485097*/
  inited = Isometric::InitTables((int)this, (IUnknown *)&v6); /*0x4850a3*/
  if ( MEMORY[0xA8D63C].__pad_1258[268] && (v3 = this->q0E4) != 0 ) /*0x4850b6*/
  {
    while ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) != 6 ) /*0x4850c2*/
    {
      v3 = *(_DWORD *)(v3 + 48); /*0x4850c4*/
      if ( !v3 ) /*0x4850c9*/
        goto LABEL_5; /*0x4850c9*/
    }
    v5 = (int *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(v3 + 1312) + 124))(*(_DWORD *)(v3 + 1312), v8); /*0x48510c*/
    v6 = *v5; /*0x485112*/
    v7 = v5[1]; /*0x48511a*/
    return v5[2] + inited; /*0x485121*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4850cb*/
    v7 = 0; /*0x4850de*/
    if ( Object::FindClosestObjectCell(this, (IUnknown *)&v6, 0, 0) ) /*0x4850e6*/
      inited += 85; /*0x4850ef*/
    return inited; /*0x4850f3*/
  }
}


// ==== 0x00485130  MapClass::RemoveCellReference  this=MapClass  sig=csp ====
int __thiscall sub_485130(int *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ecx

  v3 = a2; /*0x485134*/
  v4 = this->q03C; /*0x485138*/
  if ( v4 == a2 ) /*0x48513d*/
  {
    if ( v4 ) /*0x485141*/
      --*(_DWORD *)(v4 + 44); /*0x485143*/
    this->q03C = 0; /*0x485146*/
    v5 = (*(int (__thiscall **)(int *, int *))(MEMORY[0x880944] + 16))(&MEMORY[0x880944], this + 9); /*0x48515c*/
    if ( v5 != -1 && v5 < MEMORY[0x880954] && v5 < --MEMORY[0x880954] ) /*0x485177*/
    {
      do /*0x48518f*/
      {
        ++v5; /*0x48517f*/
        *(_DWORD *)(MEMORY[0x880948] + 4 * v5 - 4) = *(_DWORD *)(MEMORY[0x880948] + 4 * v5); /*0x485183*/
      }
      while ( v5 < MEMORY[0x880954] ); /*0x48518f*/
    }
  }
  if ( this->q02C == v3 ) /*0x485194*/
    this->q02C = 0; /*0x485196*/
  if ( this->q00C == v3 ) /*0x4851a0*/
    this->q00C = 0; /*0x4851a2*/
  result = this->q028; /*0x4851a9*/
  if ( result ) /*0x4851ae*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3); /*0x4851b4*/
    if ( result == 61 ) /*0x4851ba*/
    {
      v7 = (_DWORD *)this->q028; /*0x4851bc*/
      a2 = v3; /*0x4851bf*/
      result = (*(int (__thiscall **)(_DWORD *, int *))(*v7 + 16))(v7, &a2); /*0x4851cc*/
      if ( result != -1 ) /*0x4851d2*/
      {
        v8 = v7[4]; /*0x4851d4*/
        if ( result < v8 ) /*0x4851d9*/
        {
          v9 = v8 - 1; /*0x4851db*/
          for ( v7[4] = v9; result < v7[4]; *(_DWORD *)(v7[1] + 4 * result - 4) = *(_DWORD *)(v7[1] + 4 * result) ) /*0x4851e1*/
            ++result; /*0x4851e6*/
        }
      }
    }
  }
  return result; /*0x4851f5*/
}


// ==== 0x00485200  CellClass::ddtor  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt03(#378 *this)
{
  _DWORD *v2; // [esp+8h] [ebp+8h]

  if ( !v2 ) /*0x485206*/
    return -2147467261; /*0x485208*/
  *v2 = -1044407858; /*0x485216*/
  v2[1] = 298982028; /*0x48521e*/
  v2[2] = 1610642817; /*0x485227*/
  v2[3] = -1252326136; /*0x485230*/
  return 0; /*0x48520d*/
}


// ==== 0x00485240  ObjectClass::SetMember09  this=ObjectClass  sig=csp ====
_DWORD *__thiscall ObjectClass_SetMember09(_DWORD *this, _DWORD *a2)
{
  this->objectTypeFlags = *a2; /*0x485246*/
  return a2; /*0x485249*/
}


// ==== 0x00485250  ObjectClass::SetTriggerTarget  this=AbstractClass  sig=csp ====
int __thiscall ObjectClass::SetTriggerTarget(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax

  v3 = this->q03C; /*0x485253*/
  if ( v3 ) /*0x485258*/
    --*(_DWORD *)(v3 + 44); /*0x48525a*/
  result = a2; /*0x48525d*/
  this->q03C = a2; /*0x485263*/
  if ( a2 ) /*0x485266*/
  {
    result = MEMORY[0x88094C]; /*0x485268*/
    if ( MEMORY[0x880954] < MEMORY[0x88094C] /*0x4852a3*/
      || (MEMORY[0x880951] || !MEMORY[0x88094C])
      && MEMORY[0x880958] > 0
      && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0x880944] + 8))(
                     &MEMORY[0x880944],
                     MEMORY[0x88094C] + MEMORY[0x880958],
                     0),
          (_BYTE)result) )
    {
      result = MEMORY[0x880954]++; /*0x4852b1*/
      *(_DWORD *)(MEMORY[0x880948] + 4 * result) = this->q024; /*0x4852bd*/
    }
    ++*(_DWORD *)(this->q03C + 44); /*0x4852c3*/
  }
  return result; /*0x4852c6*/
}


// ==== 0x004852D0  BuildingClass::CreateDestructionCrater  this=BuildingClass  sig=csp ====
char __thiscall sub_4852D0(int this)
{
  int v2; // kr04_4
  int v3; // kr00_4
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (*(__int16 *)(this + 36) << 8) + 128; /*0x4852f9*/
  v3 = (*(__int16 *)(this + 38) << 8) + 128; /*0x485306*/
  v6[2] = 0; /*0x485308*/
  v6[1] = (v3 / 256) << 8; /*0x485312*/
  v6[0] = (v2 / 256) << 8; /*0x48532c*/
  Coord::To_Screen((_DWORD *)MEMORY[0x87F7E8][7887], v6, v5); /*0x485330*/
  return Cell::CreateCrater(v5[0] - 30, MEMORY[0x87F7E8][7663] - 15 * *(char *)(this + 283) + v5[1] - 15, 60, 30, 0); /*0x485389*/
}


// ==== 0x00485390  CellClass::GetBridgeBitfield  this=VectorClass  sig=csp ====
int __thiscall CellClass_GetBridgeBitfield(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ebp
  int i; // edi
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF

  v1 = MEMORY[0xA83D84]; /*0x485390*/
  v2 = 0; /*0x48539d*/
  for ( i = 0; i < 4; ++i ) /*0x4853a1*/
  {
    if ( (unsigned int)(2 * i) < 8 ) /*0x4853a9*/
    {
      v6 = (2 * (_BYTE)i) & 7; /*0x4853b2*/
      v10 = this->q024; /*0x4853b5*/
      LOWORD(v9) = v10 + LOWORD(MEMORY[0x89F688][v6]); /*0x4853cf*/
      HIWORD(v9) = HIWORD(v10) + HIWORD(MEMORY[0x89F688][v6]); /*0x4853de*/
      v10 = v9; /*0x4853e7*/
      v5 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x4853f0*/
      v1 = MEMORY[0xA83D84]; /*0x4853f5*/
    }
    else
    {
      v5 = this; /*0x4853ab*/
    }
    v7 = v5[17]; /*0x4853fb*/
    if ( v7 != -1 && (!*((_BYTE *)v5 + 284) || *(_BYTE *)(v1[v7] + 686)) ) /*0x485410*/
    {
      if ( v7 == 126 ) /*0x48541c*/
      {
        if ( *((_BYTE *)v5 + 286) < 0x30u ) /*0x485436*/
          continue; /*0x485436*/
LABEL_12:
        v2 |= 1 << i; /*0x485441*/
        continue; /*0x485441*/
      }
      if ( *(_BYTE *)(v1[v7] + 686) ) /*0x485421*/
        goto LABEL_12; /*0x485428*/
    }
  }
  return v2; /*0x48544d*/
}


// ==== 0x00485460  BuildingClass::CheckAdjacentCells  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_CheckAdjacentCells(int this)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // esi
  bool v6; // cf
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 284) <= 4u ) /*0x48546e*/
  {
    v2 = *(_DWORD *)(this + 236); /*0x485474*/
    if ( v2 != 2 && v2 != 3 && v2 != 8 && v2 != 6 ) /*0x485498*/
    {
      v3 = *(_DWORD *)(this + 68); /*0x48549e*/
      v4 = MEMORY[0xA83D84]; /*0x4854a1*/
      if ( v3 == -1 || *(_BYTE *)(*((_DWORD *)MEMORY[0xA83D84] + v3) + 686) ) /*0x4854af*/
      {
        v5 = 0; /*0x4854bd*/
        v6 = 1; /*0x4854bf*/
        while ( 1 ) /*0x4854c2*/
        {
          if ( v6 ) /*0x4854c2*/
          {
            v8 = v5 & 7; /*0x4854cd*/
            v14 = *(_DWORD *)(this + 36); /*0x4854d0*/
            LOWORD(v13) = v14 + LOWORD(MEMORY[0x89F688][v8]); /*0x4854ef*/
            HIWORD(v13) = HIWORD(v14) + HIWORD(MEMORY[0x89F688][v8]); /*0x4854f8*/
            v14 = v13; /*0x485501*/
            v7 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v14); /*0x48550b*/
            v4 = MEMORY[0xA83D84]; /*0x485510*/
          }
          else
          {
            v7 = (_DWORD *)this; /*0x4854c4*/
          }
          if ( *((_BYTE *)v7 + 284) > 4u && !*(_BYTE *)(this + 284) ) /*0x48551f*/
          {
            v9 = v7[17]; /*0x485529*/
            if ( v9 == -1 || !*(_BYTE *)(v4[v9] + 686) ) /*0x485534*/
              break; /*0x485534*/
          }
          v10 = v7[59]; /*0x48553d*/
          if ( v10 == 2 ) /*0x485546*/
            break; /*0x485546*/
          if ( v10 == 3 ) /*0x48554b*/
            break; /*0x48554b*/
          if ( v10 == 8 ) /*0x485550*/
            break; /*0x485550*/
          if ( v10 == 6 ) /*0x485555*/
            break; /*0x485555*/
          v11 = v7[17]; /*0x485557*/
          if ( v11 != -1 && !*(_BYTE *)(v4[v11] + 686) ) /*0x485562*/
            break; /*0x485562*/
          v5 += 2; /*0x48556c*/
          v6 = (unsigned int)v5 < 8; /*0x48556f*/
          if ( v5 >= 8 ) /*0x485572*/
            return 1; /*0x48557f*/
        }
      }
    }
  }
  return 0; /*0x485578*/
}


// ==== 0x00485590  CellClass::ProcessBridgeRepair  this=VectorClass  sig=csp ====
void __thiscall CellClass::ProcessBridgeRepair(_DWORD *this)
{
  _DWORD *v1; // ebp
  IUnknown *PlacementRect; // esi
  int *StartCoords; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edi
  int v7; // ebx
  IUnknown *v8; // eax
  int v9; // esi
  LONG right; // edx
  int v11; // eax
  int v12; // ebp
  LONG bottom; // esi
  char *v14; // edi
  int BridgeBitfield; // eax
  signed int v16; // edi
  IUnknown *NeighbourContent; // esi
  MouseClass *v18; // ebx
  struct tagRECT *v19; // ebp
  struct tagRECT *v20; // eax
  LONG left; // edx
  LONG v22; // ecx
  LONG v23; // ebx
  LONG top; // edi
  char *v25; // eax
  bool v26; // cc
  IUnknown *v27; // ebp
  LONG v28; // ebx
  int *v29; // eax
  IUnknown *v30; // eax
  int *v31; // eax
  _DWORD *v32; // eax
  IUnknown *v33; // eax
  AbstractClass *v34; // eax
  IUnknown *v35; // eax
  int *v36; // eax
  int *v37; // eax
  IUnknown *v38; // [esp-Ch] [ebp-10Ch]
  AbstractClass *v39; // [esp-8h] [ebp-108h]
  const RECT *v40; // [esp-8h] [ebp-108h]
  IUnknown *v41; // [esp-8h] [ebp-108h]
  IUnknown *v42; // [esp-4h] [ebp-104h]
  AbstractClass *v43; // [esp-4h] [ebp-104h]
  const RECT *v44; // [esp-4h] [ebp-104h]
  const RECT *v45; // [esp-4h] [ebp-104h]
  _DWORD *v46; // [esp-4h] [ebp-104h]
  const RECT *v47; // [esp+0h] [ebp-100h]
  const RECT *v48; // [esp+0h] [ebp-100h]
  const RECT *v49; // [esp+0h] [ebp-100h]
  const RECT *v50; // [esp+4h] [ebp-FCh]
  const RECT *v51; // [esp+4h] [ebp-FCh]
  const RECT *v52; // [esp+4h] [ebp-FCh]
  int v53; // [esp+10h] [ebp-F0h]
  int v54; // [esp+10h] [ebp-F0h]
  struct tagRECT rcDst; // [esp+14h] [ebp-ECh] BYREF
  int v56; // [esp+24h] [ebp-DCh]
  int v57; // [esp+28h] [ebp-D8h]
  LONG v58; // [esp+2Ch] [ebp-D4h]
  LONG v59; // [esp+30h] [ebp-D0h]
  signed int v60; // [esp+34h] [ebp-CCh]
  int v61; // [esp+38h] [ebp-C8h]
  IUnknown *v62; // [esp+3Ch] [ebp-C4h]
  MouseClass *v63; // [esp+40h] [ebp-C0h]
  IUnknown *v64; // [esp+44h] [ebp-BCh]
  IUnknown *v65; // [esp+48h] [ebp-B8h]
  int v66; // [esp+4Ch] [ebp-B4h]
  MouseClass *v67; // [esp+50h] [ebp-B0h]
  int v68; // [esp+54h] [ebp-ACh]
  _DWORD v69[2]; // [esp+58h] [ebp-A8h] BYREF
  int v70; // [esp+60h] [ebp-A0h] BYREF
  LONG v71; // [esp+68h] [ebp-98h]
  _BYTE v72[8]; // [esp+70h] [ebp-90h] BYREF
  int v73[4]; // [esp+78h] [ebp-88h] BYREF
  _DWORD v74[4]; // [esp+88h] [ebp-78h] BYREF
  AbstractClass aP1; // [esp+98h] [ebp-68h] BYREF
  int v76[4]; // [esp+C0h] [ebp-40h] BYREF
  int v77[4]; // [esp+E0h] [ebp-20h] BYREF
  int v78[4]; // [esp+F0h] [ebp-10h] BYREF

  v1 = this; /*0x48559e*/
  v66 = (int)this; /*0x4855a3*/
  v56 = 0; /*0x4855a7*/
  v57 = 0; /*0x4855ab*/
  v58 = 0; /*0x4855af*/
  v59 = 0; /*0x4855b3*/
  PlacementRect = (IUnknown *)BuildingClass::GetPlacementRect((int)this, (IUnknown *)&v70); /*0x4855c0*/
  StartCoords = House::GetStartCoords((int)v1, (IUnknown *)&rcDst); /*0x4855c5*/
  if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4855d6*/
  {
    v4 = PlacementRect->field_0; /*0x48565e*/
    v6 = PlacementRect->field_4; /*0x485660*/
    v7 = PlacementRect->field_8; /*0x485663*/
    v8 = (IUnknown *)PlacementRect->field_C; /*0x485666*/
    goto LABEL_16; /*0x485666*/
  }
  v53 = PlacementRect->field_8; /*0x4855e1*/
  if ( v53 <= 0 || (v65 = (IUnknown *)PlacementRect->field_C, (int)v65 <= 0) ) /*0x4855f0*/
  {
    v4 = *StartCoords; /*0x485651*/
    v6 = StartCoords[1]; /*0x485653*/
    v7 = StartCoords[2]; /*0x485656*/
    v8 = (IUnknown *)StartCoords[3]; /*0x485659*/
LABEL_16:
    v64 = v8; /*0x485669*/
    goto LABEL_17; /*0x485669*/
  }
  v4 = *StartCoords; /*0x4855f2*/
  v5 = PlacementRect->field_0; /*0x4855f4*/
  v6 = StartCoords[1]; /*0x4855f6*/
  v7 = StartCoords[2]; /*0x4855f9*/
  v8 = (IUnknown *)StartCoords[3]; /*0x4855fc*/
  if ( v4 > PlacementRect->field_0 ) /*0x485601*/
  {
    v7 += v4 - v5; /*0x485605*/
    v4 = PlacementRect->field_0; /*0x485607*/
  }
  v9 = PlacementRect->field_4; /*0x485609*/
  v60 = v9; /*0x48560e*/
  if ( v6 > v9 ) /*0x485612*/
  {
    v8 = (IUnknown *)((char *)v8 + v6 - v9); /*0x485616*/
    v6 = v9; /*0x485618*/
  }
  if ( v7 + v4 < v5 + v53 ) /*0x485625*/
    v7 = v5 - v4 + v53 + 1; /*0x48562d*/
  if ( (int)v8 + v6 < (int)v65 + v60 ) /*0x485640*/
    v8 = (IUnknown *)((char *)&v65->field_0 + v60 - v6 + 1); /*0x485645*/
  v1 = (_DWORD *)v66; /*0x485647*/
  v64 = v8; /*0x48564b*/
LABEL_17:
  right = v58; /*0x48566d*/
  if ( v58 <= 0 || v59 <= 0 ) /*0x48567f*/
  {
    right = v7; /*0x485706*/
  }
  else if ( v7 <= 0 || (int)v8 <= 0 ) /*0x48568b*/
  {
    v4 = v56; /*0x4856fa*/
    v6 = v57; /*0x4856fe*/
    v8 = (IUnknown *)v59; /*0x485702*/
  }
  else
  {
    v11 = v56; /*0x48568d*/
    v12 = v57; /*0x485691*/
    rcDst.bottom = v59; /*0x485695*/
    rcDst.right = v58; /*0x48569d*/
    if ( v56 > v4 ) /*0x4856a1*/
    {
      v11 = v4; /*0x4856a5*/
      rcDst.right = v56 + v58 - v4; /*0x4856a9*/
    }
    if ( v57 > v6 ) /*0x4856af*/
    {
      v12 = v6; /*0x4856b9*/
      rcDst.bottom += v57 - v6; /*0x4856bb*/
    }
    if ( v11 + rcDst.right >= v4 + v7 ) /*0x4856ca*/
      right = rcDst.right; /*0x4856d4*/
    else
      right = v4 - v11 + v7 + 1; /*0x4856ce*/
    bottom = rcDst.bottom; /*0x4856dc*/
    v14 = (char *)v64 + v6; /*0x4856e0*/
    if ( rcDst.bottom + v12 < (int)v14 ) /*0x4856e7*/
      bottom = (LONG)&v14[-v12 + 1]; /*0x4856ec*/
    v4 = v11; /*0x4856ee*/
    v6 = v12; /*0x4856f0*/
    v1 = (_DWORD *)v66; /*0x4856f2*/
    v8 = (IUnknown *)bottom; /*0x4856f6*/
  }
  v56 = v4; /*0x485708*/
  v57 = v6; /*0x48570e*/
  v58 = right; /*0x485712*/
  v59 = (LONG)v8; /*0x485716*/
  *((_BYTE *)v1 + 286) = 0; /*0x48571a*/
  BridgeBitfield = CellClass::GetBridgeBitfield(v1); /*0x485721*/
  if ( !BridgeBitfield || *((_BYTE *)v1 + 284) ) /*0x48572c*/
    v1[17] = -1; /*0x485768*/
  else
    *((_BYTE *)v1 + 286) = 3 * BridgeBitfield /*0x485760*/
                         + abs32(Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536)) % 3);
  BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(v1 + 9)); /*0x485778*/
  v16 = 0; /*0x48577d*/
  v60 = 0; /*0x48577f*/
  do /*0x485a30*/
  {
    NeighbourContent = (IUnknown *)Cell::GetNeighbourContent(v1, v16); /*0x48578b*/
    if ( !NeighbourContent->__pad_11C[0] && NeighbourContent->field_44 == 126 && NeighbourContent->__pad_11C[2] < 0x30u ) /*0x4857ac*/
    {
      v18 = (MouseClass *)CellClass::GetBridgeBitfield(NeighbourContent); /*0x4857c0*/
      v67 = v18; /*0x4857c7*/
      v61 = 0; /*0x4857cb*/
      v62 = 0; /*0x4857cf*/
      v63 = 0; /*0x4857d3*/
      v64 = 0; /*0x4857d7*/
      v19 = (struct tagRECT *)BuildingClass::GetPlacementRect((int)NeighbourContent, (IUnknown *)v77); /*0x4857ea*/
      v20 = (struct tagRECT *)House::GetStartCoords((int)NeighbourContent, (IUnknown *)v78); /*0x4857ec*/
      if ( v20->right <= 0 || v20->bottom <= 0 ) /*0x485801*/
      {
        rcDst = *v19; /*0x4858be*/
      }
      else
      {
        v54 = v19->right; /*0x48580c*/
        if ( v54 <= 0 || (v68 = v19->bottom, v68 <= 0) ) /*0x48581f*/
        {
          rcDst = *v20; /*0x4858a0*/
        }
        else
        {
          left = v20->left; /*0x485821*/
          v22 = v19->left; /*0x485823*/
          v23 = v20->right; /*0x485826*/
          top = v20->top; /*0x485829*/
          v25 = (char *)v20->bottom; /*0x48582c*/
          v26 = left <= v19->left; /*0x48582f*/
          v71 = v23; /*0x485831*/
          if ( !v26 ) /*0x485835*/
          {
            v23 += left - v22; /*0x485839*/
            left = v22; /*0x48583b*/
            v71 = v23; /*0x48583d*/
          }
          v27 = (IUnknown *)v19->top; /*0x485841*/
          v65 = v27; /*0x485846*/
          if ( top > (int)v27 ) /*0x48584a*/
          {
            v25 += top - (_DWORD)v27; /*0x48584e*/
            top = (LONG)v27; /*0x485850*/
          }
          if ( left + v23 >= v22 + v54 ) /*0x48585c*/
            v28 = v71; /*0x48586a*/
          else
            v28 = v22 - left + v54 + 1; /*0x485864*/
          if ( (int)&v25[top] < (int)v65 + v68 ) /*0x48587d*/
            v25 = (char *)&v65->field_0 + v68 - top + 1; /*0x485882*/
          rcDst.top = top; /*0x485884*/
          v16 = v60; /*0x485888*/
          rcDst.right = v28; /*0x48588c*/
          v18 = v67; /*0x485890*/
          rcDst.left = left; /*0x485894*/
          rcDst.bottom = (LONG)v25; /*0x485898*/
        }
      }
      v29 = (int *)Rect::Union((IUnknown *)&rcDst, v47, v50); /*0x4858e7*/
      v61 = *v29; /*0x4858ee*/
      v62 = (IUnknown *)v29[1]; /*0x4858f5*/
      v63 = (MouseClass *)v29[2]; /*0x4858fc*/
      v64 = (IUnknown *)v29[3]; /*0x485905*/
      if ( v18 ) /*0x485909*/
        NeighbourContent->__pad_11C[2] = 3 * (_BYTE)v18 /*0x48593d*/
                                       + abs32(
                                           Random::State((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536))
                                         % 3);
      else
        NeighbourContent->field_44 = -1; /*0x48590b*/
      House::AnnounceUpgrade((int)NeighbourContent, (IUnknown *)0xFFFFFFFF); /*0x485947*/
      v69[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x485957*/
      v69[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x48595f*/
      v42 = (IUnknown *)BuildingClass::GetPlacementRect((int)NeighbourContent, (IUnknown *)v73); /*0x485972*/
      House::GetStartCoords((int)NeighbourContent, (IUnknown *)v74); /*0x485976*/
      v30 = (IUnknown *)Rect::Union(v42, v48, v51); /*0x485984*/
      v31 = (int *)Rect::Union(v30, v49, v52); /*0x485995*/
      v43 = (AbstractClass *)v31[3]; /*0x4859a0*/
      v39 = (AbstractClass *)v31[2]; /*0x4859a5*/
      v32 = CellStruct::Copy(v31, (IUnknown *)v72); /*0x4859b6*/
      v33 = (IUnknown *)Coord2D::Sub(v32, &aP1, (IUnknown *)v69); /*0x4859bd*/
      v34 = Rect::Construct(&aP1.nextArrayIndex, v33, v39, v43); /*0x4859ca*/
      v61 = *(_DWORD *)v34->__pad_0; /*0x4859d8*/
      v62 = *(IUnknown **)&v34->__pad_0[4]; /*0x4859df*/
      v63 = *(MouseClass **)&v34->__pad_0[8]; /*0x4859e6*/
      v64 = *(IUnknown **)&v34->__pad_0[12]; /*0x4859ef*/
      Cell::CreateCrater( /*0x485a0f*/
        *(_DWORD *)v34->__pad_0,
        *(_DWORD *)&v34->__pad_0[4],
        *(_DWORD *)&v34->__pad_0[8],
        *(_DWORD *)&v34->__pad_0[12],
        0);
      BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)&NeighbourContent->field_24); /*0x485a1d*/
      v1 = (_DWORD *)v66; /*0x485a22*/
    }
    v16 += 2; /*0x485a26*/
    v60 = v16; /*0x485a2c*/
  }
  while ( v16 < 8 ); /*0x485a30*/
  v44 = (const RECT *)CellStruct::Copy((int *)&stru_87C374.__pad_579C[21648], (IUnknown *)v72); /*0x485a45*/
  v38 = (IUnknown *)BuildingClass::GetPlacementRect((int)v1, (IUnknown *)v76); /*0x485a64*/
  House::GetStartCoords((int)v1, (IUnknown *)&aP1.__pad_0[8]); /*0x485a68*/
  v35 = (IUnknown *)Rect::Union(v38, (const RECT *)&aP1.nextArrayIndex, v44); /*0x485a76*/
  v36 = (int *)Rect::Union(v35, v40, v45); /*0x485a87*/
  v37 = Bounds::Subtract(v36, v41, v46); /*0x485a8e*/
  v56 = *v37; /*0x485a9c*/
  v57 = v37[1]; /*0x485aa3*/
  v58 = v37[2]; /*0x485aaa*/
  v59 = v37[3]; /*0x485ab3*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x485ad3*/
  House::AnnounceUpgrade((int)v1, (IUnknown *)0xFFFFFFFF); /*0x485adc*/
}


// ==== 0x00485AF0  BuildingClass::VisualizePlacement  this=AbstractClass  sig=csp ====
void __thiscall BuildingClass::VisualizePlacement(_BYTE *this)
{
  _BYTE *v1; // ebp
  int *PlacementRect; // esi
  _DWORD *StartCoords; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  char v8; // al
  signed int v9; // ebx
  _DWORD *NeighbourContent; // esi
  int v11; // eax
  int BridgeBitfield; // edi
  int v13; // eax
  int *v14; // ebp
  int *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ebx
  int v19; // edi
  int v20; // eax
  bool v21; // cc
  int v22; // ebp
  int v23; // edx
  int v24; // eax
  int *v25; // edi
  int *v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // ebp
  int v30; // ebx
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int *v34; // eax
  _DWORD *v35; // eax
  int *v36; // eax
  int *v37; // eax
  int v38; // eax
  int *v39; // eax
  int v40; // edx
  int v41; // eax
  int *v42; // eax
  int *v43; // eax
  int v44; // eax
  int *v45; // eax
  int *v46; // eax
  int *v47; // [esp-Ch] [ebp-1C4h]
  int *v48; // [esp-Ch] [ebp-1C4h]
  int v49; // [esp-8h] [ebp-1C0h]
  int v50; // [esp-4h] [ebp-1BCh]
  int *v51; // [esp-4h] [ebp-1BCh]
  _DWORD *v52; // [esp-4h] [ebp-1BCh]
  _DWORD *v53; // [esp-4h] [ebp-1BCh]
  int v54; // [esp+10h] [ebp-1A8h]
  int v55; // [esp+10h] [ebp-1A8h]
  signed int v56; // [esp+34h] [ebp-184h]
  int v57; // [esp+38h] [ebp-180h] BYREF
  int v58; // [esp+3Ch] [ebp-17Ch]
  int v59; // [esp+40h] [ebp-178h]
  int v60; // [esp+44h] [ebp-174h]
  int v61; // [esp+48h] [ebp-170h]
  int v62; // [esp+4Ch] [ebp-16Ch]
  int v63; // [esp+50h] [ebp-168h]
  _BYTE *v64; // [esp+54h] [ebp-164h]
  _DWORD rcDst[6]; // [esp+58h] [ebp-160h] BYREF
  int v66; // [esp+74h] [ebp-144h]
  int v67; // [esp+80h] [ebp-138h]
  int v68; // [esp+84h] [ebp-134h]
  _DWORD v69[2]; // [esp+88h] [ebp-130h] BYREF
  int v70; // [esp+90h] [ebp-128h] BYREF
  int v71; // [esp+98h] [ebp-120h]
  int v72; // [esp+A0h] [ebp-118h] BYREF
  int v73; // [esp+A8h] [ebp-110h]
  _DWORD v74[2]; // [esp+B0h] [ebp-108h] BYREF
  int v75; // [esp+B8h] [ebp-100h] BYREF
  __int128 rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
  int v77[4]; // [esp+D0h] [ebp-E8h] BYREF
  __int128 v78; // [esp+E0h] [ebp-D8h] BYREF
  _DWORD v79[4]; // [esp+F0h] [ebp-C8h] BYREF
  int v80; // [esp+100h] [ebp-B8h] BYREF
  int v81[4]; // [esp+108h] [ebp-B0h] BYREF
  int v82[4]; // [esp+118h] [ebp-A0h] BYREF
  int v83[4]; // [esp+128h] [ebp-90h] BYREF
  int v84[4]; // [esp+138h] [ebp-80h] BYREF
  int v85[4]; // [esp+148h] [ebp-70h] BYREF
  int v86[4]; // [esp+168h] [ebp-50h] BYREF
  int v87[4]; // [esp+178h] [ebp-40h] BYREF
  int v88[4]; // [esp+1A8h] [ebp-10h] BYREF

  v1 = this; /*0x485afa*/
  v64 = this; /*0x485afe*/
  if ( !BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
    return; /*0x485b19*/
  PlacementRect = BuildingClass::GetPlacementRect((int)v1, &v72); /*0x485b35*/
  StartCoords = House::GetStartCoords((int)v1, &v70); /*0x485b3a*/
  if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
  {
    v7 = PlacementRect[3]; /*0x485bdb*/
  }
  else
  {
    if ( PlacementRect[2] > 0 ) /*0x485b5a*/
    {
      v63 = PlacementRect[3]; /*0x485b61*/
      if ( v63 > 0 ) /*0x485b65*/
      {
        v4 = StartCoords[1]; /*0x485b6b*/
        v5 = StartCoords[3]; /*0x485b71*/
        v6 = PlacementRect[1]; /*0x485b7e*/
        if ( v4 > v6 ) /*0x485b87*/
        {
          v5 += v4 - v6; /*0x485b8b*/
          v4 = v6; /*0x485b8d*/
        }
        if ( v5 + v4 < v63 + v6 ) /*0x485bb5*/
          v5 = v63 + v6 - v4 + 1; /*0x485bba*/
        v1 = v64; /*0x485bbc*/
        v66 = v5; /*0x485bc0*/
        goto LABEL_14; /*0x485bc4*/
      }
    }
    v7 = StartCoords[3]; /*0x485bce*/
  }
  v66 = v7; /*0x485bde*/
LABEL_14:
  BuildingClass::AddUpgrade((int)MEMORY[0x87F7E8], (int)(v1 + 36)); /*0x485c7d*/
  v8 = v1[284]; /*0x485c9b*/
  *((_DWORD *)v1 + 17) = 126; /*0x485ca1*/
  if ( !v8 ) /*0x485caa*/
  {
    v9 = 0; /*0x485cd0*/
    v1[286] = (int)abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) % 3 + 48; /*0x485cd2*/
    v56 = 0; /*0x485cd8*/
    while ( 1 ) /*0x485ce4*/
    {
      NeighbourContent = Cell::GetNeighbourContent(v1, v9); /*0x485ce4*/
      v11 = NeighbourContent[17]; /*0x485ce6*/
      if ( v11 == 126 ) /*0x485cec*/
      {
        if ( *((_BYTE *)NeighbourContent + 286) < 0x30u ) /*0x485cf5*/
          goto LABEL_21; /*0x485cf5*/
      }
      else if ( v11 == -1 || !*(_BYTE *)(*(_DWORD *)(MEMORY[0x87F7E8][528743] + 4 * v11) + 686) ) /*0x485d0d*/
      {
LABEL_21:
        if ( *((_BYTE *)NeighbourContent + 284) ) /*0x485d1b*/
        {
          Rect::Set(&v57, 0, 0, 0, 0); /*0x486142*/
          v51 = BuildingClass::GetPlacementRect((int)NeighbourContent, v84); /*0x48615d*/
          House::GetStartCoords((int)NeighbourContent, v87); /*0x486161*/
          v38 = Rect::Union(v51); /*0x48616f*/
          v39 = (int *)Rect::Union(v38); /*0x486180*/
          v57 = *v39; /*0x486187*/
          v58 = v39[1]; /*0x48618e*/
          v59 = v39[2]; /*0x486195*/
          v40 = v39[3]; /*0x486199*/
          NeighbourContent[17] = 126; /*0x48619c*/
          v60 = v40; /*0x4861a8*/
          *((_BYTE *)NeighbourContent + 286) = 2 * *((_BYTE *)NeighbourContent + 284) /*0x4861d7*/
                                             + (abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) & 1)
                                             + 51;
          v52 = CellStruct::Copy(&MEMORY[0x87F7E8][7662], v74); /*0x4861e2*/
          v47 = BuildingClass::GetPlacementRect((int)NeighbourContent, v77); /*0x486201*/
          House::GetStartCoords((int)NeighbourContent, v79); /*0x486205*/
          v41 = Rect::Union(v47); /*0x486213*/
          v42 = (int *)Rect::Union(v41); /*0x486224*/
          v43 = Bounds::Subtract(v42, &rcSrc1, v52); /*0x48622b*/
          v57 = *v43; /*0x486239*/
          v58 = v43[1]; /*0x486240*/
          v59 = v43[2]; /*0x486247*/
          v60 = v43[3]; /*0x486250*/
          Cell::CreateCrater(*v43, v43[1], v43[2], v43[3], 0); /*0x486270*/
        }
        else
        {
          BridgeBitfield = CellClass::GetBridgeBitfield(NeighbourContent); /*0x485d30*/
          v13 = NeighbourContent[17]; /*0x485d32*/
          v61 = BridgeBitfield; /*0x485d38*/
          if ( v13 == -1 || BridgeBitfield <= 15 && *((unsigned __int8 *)NeighbourContent + 286) / 3 != BridgeBitfield ) /*0x485d5f*/
          {
            v14 = BuildingClass::GetPlacementRect((int)NeighbourContent, v88); /*0x485d86*/
            v15 = House::GetStartCoords((int)NeighbourContent, v83); /*0x485d92*/
            if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
            {
              v67 = v14[2]; /*0x485e60*/
              v20 = v14[3]; /*0x485e67*/
            }
            else
            {
              v54 = v14[2]; /*0x485db2*/
              if ( v54 <= 0 || (v62 = v14[3], v62 <= 0) ) /*0x485dc5*/
              {
                v23 = v15[2]; /*0x485e43*/
                v20 = v15[3]; /*0x485e4b*/
                v67 = v23; /*0x485e4e*/
              }
              else
              {
                v16 = *v15; /*0x485dc7*/
                v17 = *v14; /*0x485dc9*/
                v18 = v15[2]; /*0x485dcc*/
                v19 = v15[1]; /*0x485dcf*/
                v20 = v15[3]; /*0x485dd2*/
                v21 = v16 <= *v14; /*0x485dd5*/
                v71 = v18; /*0x485dd7*/
                if ( !v21 ) /*0x485dde*/
                {
                  v18 += v16 - v17; /*0x485de2*/
                  v16 = v17; /*0x485de4*/
                  v71 = v18; /*0x485de6*/
                }
                v22 = v14[1]; /*0x485ded*/
                v63 = v22; /*0x485df2*/
                if ( v19 > v22 ) /*0x485df6*/
                {
                  v20 += v19 - v22; /*0x485dfa*/
                  v19 = v22; /*0x485dfc*/
                }
                if ( v16 + v18 < v17 + v54 ) /*0x485e08*/
                  v71 = v17 - v16 + v54 + 1; /*0x485e14*/
                if ( v20 + v19 < v62 + v63 ) /*0x485e2a*/
                  v20 = v62 + v63 - v19 + 1; /*0x485e2f*/
                v67 = v71; /*0x485e3a*/
              }
            }
            v68 = v20; /*0x485e6e*/
            NeighbourContent[17] = 126; /*0x485f28*/
            v24 = Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536)); /*0x485f47*/
            *((_BYTE *)NeighbourContent + 286) = 3 * v61 + abs32(v24 % 3); /*0x485f69*/
            House::AnnounceUpgrade((int)NeighbourContent, (_DWORD *)0xFFFFFFFF); /*0x485f71*/
            v69[0] = MEMORY[0x87F7E8][7662]; /*0x485f81*/
            v69[1] = MEMORY[0x87F7E8][7663]; /*0x485f8f*/
            v25 = House::GetStartCoords((int)NeighbourContent, v85); /*0x485fa5*/
            v26 = BuildingClass::GetPlacementRect((int)NeighbourContent, v86); /*0x485faa*/
            if ( v25[2] <= 0 || v25[3] <= 0 ) /*0x485fbf*/
            {
              rcDst[0] = *v26; /*0x48607b*/
              rcDst[1] = v26[1]; /*0x486082*/
              rcDst[2] = v26[2]; /*0x486089*/
              rcDst[3] = v26[3]; /*0x486090*/
            }
            else
            {
              v55 = v26[2]; /*0x485fca*/
              if ( v55 <= 0 || (v61 = v26[3], v61 <= 0) ) /*0x485fdd*/
              {
                rcDst[0] = *v25; /*0x48605e*/
                rcDst[1] = v25[1]; /*0x486065*/
                rcDst[2] = v25[2]; /*0x48606c*/
                rcDst[3] = v25[3]; /*0x486073*/
              }
              else
              {
                v27 = *v25; /*0x485fdf*/
                v28 = *v26; /*0x485fe1*/
                v29 = v25[2]; /*0x485fe3*/
                v30 = v25[1]; /*0x485fe6*/
                v31 = v25[3]; /*0x485fe9*/
                v21 = v27 <= *v26; /*0x485fec*/
                v73 = v29; /*0x485fee*/
                if ( !v21 ) /*0x485ff5*/
                {
                  v29 += v27 - v28; /*0x485ff9*/
                  v27 = v28; /*0x485ffb*/
                  v73 = v29; /*0x485ffd*/
                }
                v32 = v26[1]; /*0x486004*/
                v62 = v32; /*0x486009*/
                if ( v30 > v32 ) /*0x48600d*/
                {
                  v31 += v30 - v32; /*0x486011*/
                  v30 = v32; /*0x486013*/
                }
                if ( v27 + v29 >= v28 + v55 ) /*0x48601f*/
                  v33 = v73; /*0x48602d*/
                else
                  v33 = v28 - v27 + v55 + 1; /*0x486027*/
                if ( v31 + v30 < v62 + v61 ) /*0x486043*/
                  v31 = v62 + v61 - v30 + 1; /*0x486048*/
                rcDst[0] = v27; /*0x48604a*/
                rcDst[1] = v30; /*0x48604e*/
                rcDst[2] = v33; /*0x486052*/
                rcDst[3] = v31; /*0x486056*/
              }
            }
            v34 = (int *)Rect::Union(rcDst); /*0x4860a4*/
            v50 = v34[3]; /*0x4860af*/
            v49 = v34[2]; /*0x4860b7*/
            v35 = CellStruct::Copy(v34, &v75); /*0x4860cb*/
            v36 = Coord2D::Sub(v35, &v80, v69); /*0x4860d2*/
            v37 = Rect::Construct(v82, v36, v49, v50); /*0x4860df*/
            Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
            v9 = v56; /*0x486129*/
            v1 = v64; /*0x48612d*/
          }
        }
        BuildingClass::AddUpgrade((int)MEMORY[0x87F7E8], (int)(NeighbourContent + 9)); /*0x48627e*/
      }
      v9 += 2; /*0x486283*/
      v56 = v9; /*0x486289*/
      if ( v9 >= 8 ) /*0x48628d*/
      {
        BuildingClass::CreateIdleAnim((int)v1); /*0x486295*/
        goto LABEL_62; /*0x48629a*/
      }
    }
  }
  v1[286] = 2 * v1[284] + (abs32(Random::State((_DWORD *)(MEMORY[0x87F7E8][536210] + 536))) & 1) + 51; /*0x4862c0*/
LABEL_62:
  v53 = CellStruct::Copy(&MEMORY[0x87F7E8][7662], v74); /*0x4862c6*/
  v48 = BuildingClass::GetPlacementRect((int)v1, v81); /*0x4862f0*/
  House::GetStartCoords((int)v1, v79); /*0x4862fb*/
  v44 = Rect::Union(v48); /*0x486309*/
  v45 = (int *)Rect::Union(v44); /*0x48631a*/
  v46 = Bounds::Subtract(v45, &v78, v53); /*0x486321*/
  Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
  House::AnnounceUpgrade((int)v1, (_DWORD *)0xFFFFFFFF); /*0x48636f*/
}


// ==== 0x00486380  Cell::IsEmpty  this=VectorClass  sig=csp ====
bool __thiscall Cell_IsEmpty(_DWORD *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x486380*/
  return v1 == 0xFFFF || !v1; /*0x486390*/
}


// ==== 0x004863A0  ObjectClass::method_4863A0  this=VectorClass  sig=csp ====
bool __thiscall sub_4863A0(int *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x4863a0*/
  return v1 >= g_CellTileLookup && v1 < g_CellTileLookup + 20 || v1 >= unk_AA1058 && v1 < unk_AA1058 + 12; /*0x4863c7*/
}


// ==== 0x004863D0  CellLand::IsBuildable  this=CellLand  sig=csp ====
bool __thiscall CellLand_IsBuildable(int this)
{
  int v1; // eax
  int v3; // eax
  char v4; // cl
  int v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char v9; // cl
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx

  if ( unk_AA1020 != -1 ) /*0x4863da*/
  {
    v1 = *(_DWORD *)(this + 56); /*0x4863dc*/
    if ( v1 >= unk_AA1020 && v1 < unk_AA1020 + 40 ) /*0x4863e8*/
      return 1; /*0x4863ed*/
  }
  if ( unk_AA073C == -1 || (v3 = *(_DWORD *)(this + 56), v3 < unk_AA073C) || v3 >= unk_AA073C + 4 ) /*0x486405*/
  {
    if ( dword_ABB110 == -1 || (v5 = *(_DWORD *)(this + 56), v5 < dword_ABB110) || v5 >= dword_ABB110 + 4 ) /*0x486448*/
    {
      if ( unk_AA1050 == -1 || (v7 = *(_DWORD *)(this + 56), v7 < unk_AA1050) || v7 >= unk_AA1050 + 4 ) /*0x48648c*/
      {
        if ( unk_AA10A0 == -1 || (v8 = *(_DWORD *)(this + 56), v8 < unk_AA10A0) || v8 >= unk_AA10A0 + 4 ) /*0x4864cf*/
        {
          if ( dword_ABBEBC != -1 ) /*0x486505*/
          {
            v10 = *(_DWORD *)(this + 56); /*0x486507*/
            if ( v10 >= dword_ABBEBC && v10 < dword_ABBEBC + 20 ) /*0x486513*/
              return 1; /*0x486518*/
          }
          if ( dword_ABAD24 != -1 ) /*0x486522*/
          {
            v11 = *(_DWORD *)(this + 56); /*0x486524*/
            if ( v11 >= dword_ABAD24 && v11 < dword_ABAD24 + 4 ) /*0x486530*/
              return 1; /*0x486535*/
          }
          if ( unk_AA0E28 != -1 ) /*0x48653f*/
          {
            v12 = *(_DWORD *)(this + 56); /*0x486541*/
            if ( v12 >= unk_AA0E28 && v12 < unk_AA0E28 + 16 ) /*0x48654d*/
              return 1; /*0x486552*/
          }
          if ( g_TerrainBridgeIndex != -1 ) /*0x48655c*/
          {
            v13 = *(_DWORD *)(this + 56); /*0x48655e*/
            if ( v13 >= g_TerrainBridgeIndex && v13 < g_TerrainBridgeIndex + 16 ) /*0x48656a*/
              return 1; /*0x48656f*/
          }
          if ( dword_ABC2C8 != -1 ) /*0x486579*/
          {
            v14 = *(_DWORD *)(this + 56); /*0x48657b*/
            if ( v14 >= dword_ABC2C8 && v14 < dword_ABC2C8 + 2 ) /*0x486587*/
              return 1; /*0x48658c*/
          }
          if ( unk_AA101C == -1 ) /*0x486595*/
            return 0; /*0x486595*/
          v15 = *(_DWORD *)(this + 56); /*0x486597*/
          if ( v15 < unk_AA101C || v15 >= unk_AA101C + 28 ) /*0x4865a3*/
            return 0; /*0x4865a3*/
        }
        else if ( v8 == unk_AA10A0 || v8 == unk_AA10A0 + 3 ) /*0x4864da*/
        {
          v9 = *(_BYTE *)(this + 282); /*0x4864e0*/
          return v9 != 2 && v9 != 3; /*0x4864f2*/
        }
      }
      else if ( v7 == unk_AA1050 || v7 == unk_AA1050 + 3 ) /*0x486497*/
      {
        return *(_BYTE *)(this + 282) >= 2u; /*0x4864a5*/
      }
    }
    else if ( v5 == dword_ABB110 || v5 == dword_ABB110 + 3 ) /*0x486453*/
    {
      v6 = *(_BYTE *)(this + 282); /*0x486459*/
      return v6 != 1 && v6 != 3; /*0x48646b*/
    }
    return 1; /*0x4865a8*/
  }
  if ( v3 != unk_AA073C && v3 != unk_AA073C + 3 ) /*0x486410*/
    return 1; /*0x486410*/
  v4 = *(_BYTE *)(this + 282); /*0x486416*/
  return v4 && v4 != 4; /*0x4863ec*/
}


// ==== 0x004865B0  CellClass::IsTerrainType  this=CellClass  sig=csp ====
bool __thiscall CellClass_IsTerrainType(int *this)
{
  int v1; // eax

  v1 = this->q038; /*0x4865b0*/
  return v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42; /*0x4865c6*/
}


// ==== 0x004865D0  Cell::IsGroundTypeRange  this=RandomMap  sig=csp ====
bool __thiscall sub_4865D0(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x4865d0*/
  if ( v1 >= dword_ABAD28 && v1 < dword_ABAD28 + 42 ) /*0x4865e2*/
    return 1; /*0x4865e4*/
  return v1 >= dword_AA0738 && v1 < dword_AA0738 + 14 /*0x48663a*/
      || v1 >= unk_AA073C && v1 < unk_AA073C + 4
      || v1 >= dword_ABB110 && v1 < dword_ABB110 + 4
      || v1 >= unk_AA1050 && v1 < unk_AA1050 + 4
      || v1 >= unk_AA10A0 && v1 < unk_AA10A0 + 4;
}


// ==== 0x00486650  CellClass::InMapDataRange  this=CellStruct  sig=csp ====
bool __thiscall CellClass_InMapDataRange(int *this)
{
  int v1; // eax

  v1 = this->q00E; /*0x486650*/
  return v1 >= unk_AA10A4 && v1 < unk_AA10A4 + 14; /*0x486666*/
}


// ==== 0x00486670  CellClass::InBounds  this=CellStruct  sig=csp ====
bool __thiscall CellClass_InBounds(int *this)
{
  int v1; // eax

  v1 = this->q00E; /*0x486670*/
  return v1 >= dword_ABC2B0 && v1 < dword_ABC2B0 + 16; /*0x486686*/
}


// ==== 0x004866D0  ObjectClass::method_4866D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866D0(int *this)
{
  int v1; // eax

  v1 = this->attachedBomb; /*0x4866d0*/
  return v1 >= g_CellTileTypeCache && v1 < g_CellTileTypeCache + 15; /*0x4866e6*/
}


// ==== 0x004866F0  ObjectClass::method_4866F0  this=ObjectClass  sig=csp ====
bool __thiscall sub_4866F0(int *this)
{
  int v1; // eax

  v1 = this->attachedBomb; /*0x4866f0*/
  return v1 >= dword_ABBEC4 && v1 < dword_ABBEC4 + 4; /*0x486706*/
}


// ==== 0x00486730  Value::InRange  this=VectorClass  sig=csp ====
bool __thiscall Value_InRange(int *this)
{
  int v1; // eax

  v1 = this->tail_E; /*0x486730*/
  return v1 >= unk_AA0E20 && v1 < unk_AA0E20 + 14; /*0x486746*/
}


// ==== 0x00486750  Cell::IsInRange  this=Cell  sig=csp ====
bool __thiscall Cell_IsInRange(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48676c*/
  if ( unk_AA0E28 != -1 ) /*0x486759*/
  {
    v1 = this->q038; /*0x48675b*/
    if ( v1 >= unk_AA0E28 && v1 < unk_AA0E28 + 16 ) /*0x486767*/
      return 1; /*0x486759*/
  }
  return result; /*0x48676b*/
}


// ==== 0x00486770  Cell::IsInRange2  this=Cell  sig=csp ====
bool __thiscall Cell_IsInRange2(int *this)
{
  int v1; // eax
  bool result; // al

  result = 0; /*0x48678c*/
  if ( g_TerrainBridgeIndex != -1 ) /*0x486779*/
  {
    v1 = this->q038; /*0x48677b*/
    if ( v1 >= g_TerrainBridgeIndex && v1 < g_TerrainBridgeIndex + 16 ) /*0x486787*/
      return 1; /*0x486779*/
  }
  return result; /*0x48678b*/
}


// ==== 0x00486790  RandomMap::Check  this=RandomMap  sig=csp ====
bool __thiscall sub_486790(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x486790*/
  return v1 >= unk_AA0E24 && v1 < unk_AA0E24 + 16; /*0x4867a6*/
}


// ==== 0x004867B0  Cell::IsShore  this=RandomMap  sig=csp ====
bool __thiscall Cell_IsShore(int *this)
{
  int v1; // eax

  v1 = this->u32_38; /*0x4867b0*/
  return v1 == unk_AA0E18 || v1 >= unk_AA0748 && v1 < unk_AA0748 + 16; /*0x4867d0*/
}


// ==== 0x004867E0  CellClass::GetCellType  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt20(#378 *this)
{
  int result; // eax

  result = this->q038; /*0x4867e0*/
  LOBYTE(result) = result < dword_AA0738 || result >= dword_AA0738 + 14; /*0x4867f7*/
  return result; /*0x4867f6*/
}


// ==== 0x00486840  CellClass::GetOccupier  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt18(#378 *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+14h] [ebp+4h]

  v2 = (*((__int16 *)this + 19) << 8) + 128; /*0x48685d*/
  v5[0] = (*((__int16 *)this + 18) << 8) + 128; /*0x486864*/
  v1 = v5[0]; /*0x486857*/
  v5[1] = v2; /*0x486868*/
  inited = Isometric::InitTables((int)this, v5); /*0x48686c*/
  *v6 = v1; /*0x486877*/
  v6[1] = v2; /*0x486879*/
  v6[2] = inited; /*0x48687e*/
  return (int)v6; /*0x48687c*/
}


// ==== 0x00486890  CellClass::CheckProperty  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt22(#378 *this)
{
  int v1; // esi
  int *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  _DWORD *v7; // ecx
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp+4h]

  if ( (this->wallOwnerIndex & 0x100) != 0 ) /*0x48689d*/
  {
    v1 = MEMORY[0x89E7B4]; /*0x4868a1*/
    v2 = (int *)(*(int (__thiscall **)(#378 *, _BYTE *))(this->q048)(this, v8); /*0x4868ad*/
    v3 = *v2; /*0x4868b0*/
    v4 = v2[1]; /*0x4868b2*/
    v5 = v1 + v2[2]; /*0x4868b8*/
    *v9 = v3; /*0x4868c0*/
    v9[1] = v4; /*0x4868c2*/
    v9[2] = v5; /*0x4868c5*/
    return (int)v9; /*0x4868c8*/
  }
  else
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(#378 *, _BYTE *))(this->q048)(this, v8); /*0x4868dc*/
    *v9 = *v7; /*0x4868e6*/
    v9[1] = v7[1]; /*0x4868eb*/
    v9[2] = v7[2]; /*0x4868f2*/
    return (int)v9; /*0x4868de*/
  }
}


// ==== 0x00486900  CellClass::IsActiveOrNext  this=AbstractClass  sig=csp ====
bool __thiscall CellClass_IsActiveOrNext(_DWORD *this)
{
  int v1; // eax

  v1 = this->q038; /*0x486900*/
  return v1 == dword_ABC2C8 || v1 == dword_ABC2C8 + 1; /*0x48690f*/
}


// ==== 0x00486920  BuildingClass::CreateIdleAnim  this=BuildingClass  sig=csp ====
void __thiscall BuildingClass::CreateIdleAnim(int this)
{
  float *v2; // esi
  void **v3; // ebp
  int inited; // eax
  float *v5; // [esp+Ch] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-18h]
  _DWORD v7[2]; // [esp+14h] [ebp-14h] BYREF
  CoordStruct aP2; // [esp+1Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 68) == 126 /*0x486956*/
    && *(_BYTE *)(this + 286) >= 0x30u
    && !*(_BYTE *)(this + 284)
    && (*(_DWORD *)(this + 320) & 0x20000) == 0 )
  {
    v2 = *(float **)(this + 228); /*0x48695c*/
    v5 = v2; /*0x486964*/
    if ( v2 ) /*0x486968*/
    {
      while ( 1 ) /*0x486976*/
      {
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 456))(v2) <= 5 /*0x4869bd*/
          && ((_BYTE)v2[5] & 1) != 0
          && !*(_BYTE *)((*(int (__thiscall **)(float *))(*(_DWORD *)v2 + 132))(v2) + 3217)
          && !TechnoClass::HasVoiceResponse(v2, 8) )
        {
          v3 = (void **)__2_YAPAXI_Z(0x1C8u); /*0x4869d4*/
          if ( v3 ) /*0x4869db*/
          {
            v6 = *(_DWORD *)(this + 36); /*0x4869e2*/
            v7[0] = 128; /*0x4869fd*/
            v7[1] = 128; /*0x486a01*/
            inited = Isometric::InitTables(this, (IUnknown *)v7); /*0x486a0a*/
            aP2.Y = SHIWORD(v6) << 8; /*0x486a15*/
            aP2.X = (__int16)v6 << 8; /*0x486a23*/
            aP2.Z = inited; /*0x486a2c*/
            AnimClass::ctor( /*0x486a42*/
              v3,
              *(CoordStruct **)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 232),
              &aP2,
              0,
              (CoordStruct *)1,
              (void *)0x600,
              0,
              0);
            v2 = v5; /*0x486a47*/
          }
          *(_DWORD *)(this + 320) |= 0x20000u; /*0x486a4b*/
        }
        v5 = (float *)*((_DWORD *)v2 + 12); /*0x486a5a*/
        if ( !v5 ) /*0x486a5e*/
          break; /*0x486a5e*/
        v2 = (float *)*((_DWORD *)v2 + 12); /*0x486972*/
      }
    }
  }
}


// ==== 0x00486A70  CellClass::CreateFoggedObjects  this=CellClass  sig=csp ====
char __thiscall sub_486A70(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // ebp
  _DWORD *v4; // eax
  int *v5; // edi
  _DWORD *v6; // esi
  char v7; // al
  int v9; // [esp+10h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  _BYTE v12[4]; // [esp+1Ch] [ebp-4h] BYREF

  LOBYTE(v1) = (_BYTE)MEMORY[0xA8B230]; /*0x486a70*/
  if ( (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0 ) /*0x486a7d*/
  {
    v2 = 1; /*0x486a89*/
    v9 = this->smudgeTypeIndex; /*0x486a8f*/
    for ( i = 1; i <= 15; i += 2 ) /*0x486a93*/
    {
      v3 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v9); /*0x486aa8*/
      v1 = *((char *)v3 + 283); /*0x486aad*/
      if ( v1 >= v2 - 2 && v1 <= v2 ) /*0x486abe*/
      {
        v1 = v3[80]; /*0x486ac4*/
        if ( (v1 & 0x400000) == 0 ) /*0x486ad1*/
        {
          v4 = __2_YAPAXI_Z(0x18u); /*0x486ad9*/
          if ( v4 ) /*0x486ae3*/
          {
            v4[1] = 0; /*0x486ae5*/
            v4[2] = 0; /*0x486ae8*/
            *((_BYTE *)v4 + 12) = 1; /*0x486aeb*/
            *((_BYTE *)v4 + 13) = 0; /*0x486aef*/
            *v4 = &vt_DynamicVectorClass_FoggedObjectClass; /*0x486af2*/
            v4[5] = 10; /*0x486af8*/
            v4[4] = 0; /*0x486aff*/
            v5 = v4; /*0x486b02*/
          }
          else
          {
            v5 = 0; /*0x486b06*/
          }
          LOBYTE(v1) = (*(int (__thiscall **)(int *, int, _DWORD))(*v5 + 8))(v5, 1, 0); /*0x486b0f*/
          v5[5] = 1; /*0x486b12*/
          v6 = (_DWORD *)v3[57]; /*0x486b21*/
          for ( v3[80] |= 0x400000u; v6; v6 = (_DWORD *)v6[12] ) /*0x486b2f*/
          {
            v1 = (*(int (__stdcall **)(_DWORD *))(v6[1] + 12))(v6 + 1); /*0x486b38*/
            if ( v1 == 6 ) /*0x486b3e*/
            {
              (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v6 + 440))(v6, v12); /*0x486b49*/
              LOBYTE(v1) = sub_457A10((_DWORD **)v6); /*0x486b51*/
              if ( (_BYTE)v1 ) /*0x486b58*/
              {
                if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 128))(v6) /*0x486b75*/
                  || (v7 = *((_BYTE *)v6 + 1773), LOBYTE(v10) = 1, v7 == 15) )
                {
                  LOBYTE(v10) = 0; /*0x486b77*/
                }
                LOBYTE(v1) = BuildingClass::CreateFoggedObjects(v6, (int)v5, v3, v10); /*0x486b84*/
              }
            }
            else if ( v1 == 1 || v1 == 2 || v1 == 15 ) /*0x486b98*/
            {
              LOBYTE(v1) = (*(int (__thiscall **)(_DWORD *))(*v6 + 336))(v6); /*0x486b9e*/
            }
          }
          if ( v5[4] <= 0 ) /*0x486bae*/
          {
            if ( v5 ) /*0x486bb7*/
              LOBYTE(v1) = (*(int (__thiscall **)(int *, int))*v5)(v5, 1); /*0x486bbf*/
          }
          else
          {
            v3[10] = v5; /*0x486bb0*/
          }
        }
      }
      LOWORD(v9) = v9 + 1; /*0x486bc5*/
      ++HIWORD(v9); /*0x486bca*/
      v2 = i + 2; /*0x486bcf*/
    }
  }
  return v1; /*0x486be3*/
}


// ==== 0x00486BF0  CellClass::UpdateZone  this=IUnknown  sig=csp ====
_DWORD *__thiscall CellClass_UpdateZone(_DWORD *this)
{
  int i; // esi
  _DWORD *result; // eax
  int v3; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  v4 = this->ptr_24; /*0x486bf5*/
  for ( i = 1; i < 15; i += 2 ) /*0x486bf9*/
  {
    result = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v4); /*0x486c08*/
    v3 = *((char *)result + 283); /*0x486c0d*/
    if ( v3 >= i - 2 && v3 <= i ) /*0x486c1d*/
    {
      result[80] &= ~0x400000u; /*0x486c2b*/
      result = (_DWORD *)CellClass::ClearCellContents(result); /*0x486c33*/
    }
    LOWORD(v4) = v4 + 1; /*0x486c38*/
    ++HIWORD(v4); /*0x486c3d*/
  }
  return result; /*0x486c4a*/
}


// ==== 0x00486C50  CellClass::ClearCellContents  this=AbstractClass  sig=csp ====
int __thiscall sub_486C50(int *this)
{
  int result; // eax
  int i; // ebp
  __int16 *j; // edi
  __int16 v5; // si
  int v6; // eax
  int v7; // ecx
  __int16 v8; // dx
  int *v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int (__thiscall ***v14)(_DWORD, int); // ecx
  _DWORD *v15; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v16; // [esp+8h] [ebp-18h]
  __int16 v17; // [esp+Ah] [ebp-16h]
  int v18; // [esp+Ch] [ebp-14h]
  _DWORD v19[4]; // [esp+10h] [ebp-10h] BYREF

  result = this->q028; /*0x486c56*/
  if ( result ) /*0x486c5b*/
  {
    for ( i = *(_DWORD *)(result + 16) - 1; i >= 0; --i ) /*0x486c66*/
    {
      v15 = *(_DWORD **)(*(_DWORD *)(this->q028 + 4) + 4 * i); /*0x486c77*/
      if ( CellClass::recalcPassability((int)v15) ) /*0x486c7b*/
      {
        for ( j = (__int16 *)CellClass::recalcPassability((int)v15); ; j += 2 ) /*0x486c91*/
        {
          v5 = *j; /*0x486c93*/
          if ( *j == 0x7FFF && j[1] == 0x7FFF ) /*0x486ca1*/
            break; /*0x486ca1*/
          v6 = v15[13]; /*0x486cae*/
          v7 = v15[14]; /*0x486cb0*/
          v19[3] = v15[15]; /*0x486cb6*/
          v16 = v6 / 256; /*0x486cc6*/
          v8 = j[1]; /*0x486cd6*/
          v17 = v7 / 256; /*0x486cdd*/
          LOWORD(v18) = v16 + v5; /*0x486cef*/
          HIWORD(v18) = v17 + v8; /*0x486cf4*/
          v19[0] = v18; /*0x486d03*/
          v9 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v19); /*0x486d07*/
          if ( v9 != this ) /*0x486d0e*/
          {
            v10 = (_DWORD *)v9[10]; /*0x486d10*/
            if ( v10 ) /*0x486d15*/
            {
              v11 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(*v10 + 16))(v10, &v15); /*0x486d20*/
              if ( v11 != -1 ) /*0x486d26*/
              {
                v12 = v10[4]; /*0x486d28*/
                if ( v11 < v12 ) /*0x486d2d*/
                {
                  v13 = v12 - 1; /*0x486d2f*/
                  for ( v10[4] = v13; v11 < v10[4]; *(_DWORD *)(v10[1] + 4 * v11 - 4) = *(_DWORD *)(v10[1] + 4 * v11) ) /*0x486d35*/
                    ++v11; /*0x486d3a*/
                }
              }
            }
          }
        }
      }
      if ( v15 ) /*0x486d57*/
        (*(void (__thiscall **)(_DWORD *, int))(*v15 + 32))(v15, 1); /*0x486d5d*/
    }
    result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 12))(this->q028); /*0x486d6e*/
    v14 = (int (__thiscall ***)(_DWORD, int))this->q028; /*0x486d71*/
    if ( v14 ) /*0x486d77*/
      result = (**v14)(v14, 1); /*0x486d7d*/
    this->q028 = 0; /*0x486d7f*/
  }
  return result; /*0x486d86*/
}


// ==== 0x00486D90  ObjectClass::method_486D90  this=SpeedType  sig=csp ====
int __thiscall sub_486D90(_DWORD *this, char a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // ebp
  bool v7; // cf
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-4h] BYREF
  int v11; // [esp+10h] [ebp+4h]

  v3 = 1 << a2; /*0x486da4*/
  if ( (*(this + 55) & (1 << a2)) == 0 ) /*0x486da8*/
    return -1; /*0x486dab*/
  v5 = 0; /*0x486db5*/
  v6 = 0; /*0x486db7*/
  v7 = 1; /*0x486db9*/
  do /*0x486e22*/
  {
    if ( v7 ) /*0x486dbc*/
    {
      v9 = v5 & 7; /*0x486dc7*/
      v10 = *(this + 9); /*0x486dca*/
      LOWORD(v11) = LOWORD(MEMORY[0x89F688][v9]) + v10; /*0x486dee*/
      HIWORD(v11) = HIWORD(v10) + HIWORD(MEMORY[0x89F688][v9]); /*0x486df3*/
      v10 = v11; /*0x486e02*/
      v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v10); /*0x486e06*/
    }
    else
    {
      v8 = this; /*0x486dbe*/
    }
    if ( (v3 & v8[55]) != 0 ) /*0x486e11*/
      v6 |= 1 << v5; /*0x486e1c*/
    v7 = (unsigned int)++v5 < 8; /*0x486e1f*/
  }
  while ( v5 < 8 ); /*0x486e22*/
  return v6; /*0x486daa*/
}


// ==== 0x00486E30  ObjectClass::Helper_486E30  this=ObjectClass  sig=csp ====
int __thiscall Helper_486E30(__int16 *this)
{
  __int16 *v2; // edi
  void *v3; // eax
  _DWORD *v5; // eax

  v2 = this + 18; /*0x486e34*/
  v3 = (void *)Helper_486E30_Helper(this + 18); /*0x486e39*/
  if ( v3 ) /*0x486e40*/
  {
    RandomMap::RemoveMatching(v3, (IUnknown *)this); /*0x486e45*/
  }
  else
  {
    v5 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], v2); /*0x486e55*/
    CellClass::ProcessBridgeRepair(v5); /*0x486e5c*/
  }
  return 0; /*0x486e4a*/
}


// ==== 0x00486E70  BuildingClass::CreatePlacementCrater  this=AbstractClass  sig=csp ====
char __thiscall BuildingClass::CreatePlacementCrater(char *this)
{
  int *ScreenRect; // edi
  int *StartCoords; // eax
  int v4; // edx
  int v5; // esi
  int v6; // ecx
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int *PlacementRect; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v19; // [esp+14h] [ebp-3Ch]
  int v20; // [esp+1Ch] [ebp-34h]
  int v21[4]; // [esp+20h] [ebp-30h] BYREF
  int v22[4]; // [esp+30h] [ebp-20h] BYREF
  int v23[4]; // [esp+40h] [ebp-10h] BYREF

  ScreenRect = CellClass::GetScreenRect((int)this, (IUnknown *)v21); /*0x486e8b*/
  StartCoords = House::GetStartCoords((int)this, (IUnknown *)v22); /*0x486e90*/
  if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 ) /*0x486ea1*/
  {
    v5 = *StartCoords; /*0x486f19*/
    v7 = StartCoords[1]; /*0x486f1b*/
    v8 = StartCoords[2]; /*0x486f1e*/
    v9 = StartCoords[3]; /*0x486f21*/
  }
  else
  {
    v4 = StartCoords[2]; /*0x486ea3*/
    if ( v4 <= 0 || (v20 = StartCoords[3], v20 <= 0) ) /*0x486eb7*/
    {
      v5 = *ScreenRect; /*0x486f0c*/
      v7 = ScreenRect[1]; /*0x486f0e*/
      v8 = ScreenRect[2]; /*0x486f11*/
      v9 = ScreenRect[3]; /*0x486f14*/
    }
    else
    {
      v5 = *ScreenRect; /*0x486eb9*/
      v6 = *StartCoords; /*0x486ebb*/
      v7 = ScreenRect[1]; /*0x486ebd*/
      v8 = ScreenRect[2]; /*0x486ec0*/
      v9 = ScreenRect[3]; /*0x486ec3*/
      if ( v5 > *StartCoords ) /*0x486ec8*/
      {
        v8 += v5 - v6; /*0x486ecc*/
        v5 = *StartCoords; /*0x486ece*/
      }
      v10 = StartCoords[1]; /*0x486ed0*/
      if ( v7 > v10 ) /*0x486ed9*/
      {
        v9 += v7 - v10; /*0x486edd*/
        v7 = v10; /*0x486edf*/
      }
      if ( v8 + v5 < v6 + v4 ) /*0x486ee8*/
        v8 = v6 - v5 + v4 + 1; /*0x486ef0*/
      if ( v9 + v7 < v20 + v10 ) /*0x486f03*/
        v9 = v20 + v10 - v7 + 1; /*0x486f08*/
    }
  }
  PlacementRect = BuildingClass::GetPlacementRect((int)this, (IUnknown *)v23); /*0x486f2d*/
  if ( v8 <= 0 || v9 <= 0 ) /*0x486f38*/
  {
    v5 = *PlacementRect; /*0x486f9e*/
    v15 = PlacementRect[1]; /*0x486fa0*/
    v8 = PlacementRect[2]; /*0x486fa3*/
    v16 = PlacementRect[3]; /*0x486fa6*/
  }
  else
  {
    v12 = PlacementRect[2]; /*0x486f3a*/
    if ( v12 > 0 ) /*0x486f43*/
    {
      v19 = PlacementRect[3]; /*0x486f4a*/
      if ( v19 > 0 ) /*0x486f4e*/
      {
        v13 = *PlacementRect; /*0x486f50*/
        if ( v5 > *PlacementRect ) /*0x486f54*/
        {
          v8 += v5 - v13; /*0x486f5a*/
          v5 = *PlacementRect; /*0x486f5c*/
        }
        v14 = PlacementRect[1]; /*0x486f5e*/
        if ( v7 > v14 ) /*0x486f67*/
        {
          v9 += v7 - v14; /*0x486f6b*/
          v7 = v14; /*0x486f6d*/
        }
        if ( v8 + v5 < v13 + v12 ) /*0x486f76*/
          v8 = v13 - v5 + v12 + 1; /*0x486f7e*/
        if ( v9 + v7 < v14 + v19 ) /*0x486f91*/
          v9 = v14 + v19 - v7 + 1; /*0x486f96*/
      }
    }
    v15 = v7; /*0x486f98*/
    v16 = v9; /*0x486f9a*/
  }
  Cell::CreateCrater( /*0x486fd1*/
    v5 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532],
    v15 - *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536],
    v8,
    v16,
    0);
  return BuildingClass::AddUpgrade((int)&MEMORY[0x87F7E8], (IUnknown *)(this + 36)); /*0x486fe8*/
}


// ==== 0x00486FF0  Cell::IsBuildableAdvanced  this=Cell  sig=csp ====
char __thiscall Cell_IsBuildableAdvanced(int this)
{
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi

  if ( !Type::CheckAmbiguity(&MEMORY[0x87F7E8], this, 1) ) /*0x486ffc*/
    return 1; /*0x487009*/
  v3 = *(_DWORD *)(this + 56); /*0x48700a*/
  if ( v3 >= 0 && v3 < MEMORY[0xA8ED38] && !*(_BYTE *)(*((_DWORD *)MEMORY[0xA8ED2C] + v3) + 773) /*0x48703f*/
    || *(_BYTE *)(this + 284)
    || (*(_DWORD *)(this + 320) & 0x500) != 0 )
  {
    return 0; /*0x48703f*/
  }
  if ( !MEMORY[0xA8E9A0] ) /*0x487048*/
    return 1; /*0x487048*/
  v4 = *(_DWORD **)(this + 228); /*0x48704a*/
  if ( v4 ) /*0x487052*/
  {
    while ( (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 6 ) /*0x48705e*/
    {
      v4 = (_DWORD *)v4[12]; /*0x487060*/
      if ( !v4 ) /*0x487065*/
        goto LABEL_14; /*0x487065*/
    }
    return 0; /*0x48705e*/
  }
LABEL_14:
  if ( !MEMORY[0xA8E9A0] ) /*0x487074*/
    return 1; /*0x487074*/
  v5 = *(_DWORD **)(this + 228); /*0x487076*/
  if ( !v5 ) /*0x48707e*/
    return 1; /*0x4870a0*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) != 36 ) /*0x48708a*/
  {
    v5 = (_DWORD *)v5[12]; /*0x48708c*/
    if ( !v5 ) /*0x487091*/
      return 1; /*0x487097*/
  }
  return 0; /*0x487005*/
}


// ==== 0x004870B0  Cell::HasOccupierBit  this=IUnknown  sig=csp ====
BOOL __thiscall Cell::HasOccupierBit(_DWORD *this, IUnknown *aP1)
{
  return ((1 << (char)aP1) & this->q1E0) != 0; /*0x4870c8*/
}


// ==== 0x004870D0  Cell::IsPassableOffset  this=IUnknown  sig=csp ====
BOOL __thiscall Cell::IsPassableOffset(_WORD *this, IUnknown *aP1)
{
  return *(this + (_DWORD)aP1 + 62) > 0; /*0x4870de*/
}


// ==== 0x004870F0  HouseClass::HasType  this=HouseClass  sig=csp ====
BOOL __thiscall HouseClass_HasType(_WORD *this, int a2)
{
  return *(this + a2 + 86) > 0; /*0x487101*/
}


// ==== 0x00487110  BuildingClass::checkOccupant  this=IUnknown  sig=csp ====
_DWORD *__thiscall sub_487110(_DWORD *this, char a2)
{
  this->q1E0 |= 1 << a2; /*0x48711d*/
  return this; /*0x487120*/
}


// ==== 0x00487130  BuildingClass::updateOccupiedState  this=IUnknown  sig=csp ====
_DWORD *__thiscall sub_487130(_DWORD *this, char a2)
{
  this->q1E0 &= ~(1 << a2); /*0x487144*/
  return this; /*0x487147*/
}


// ==== 0x00487150  FootClass::checkTerrainSpeed  this=IUnknown  sig=csp ====
int __thiscall sub_487150(_WORD *this, int a2)
{
  ++*(this + a2 + 62); /*0x487154*/
  return a2; /*0x487159*/
}


// ==== 0x00487160  FootClass::updateLocomotion  this=IUnknown  sig=csp ====
int __thiscall FootClass::updateLocomotion(_WORD *this, IUnknown *aP1)
{
  --*(this + (_DWORD)aP1 + 62); /*0x487164*/
  return (int)aP1; /*0x487169*/
}


// ==== 0x00487170  BuildingClass::processGarrison  this=BuildingClass  sig=csp ====
int __thiscall sub_487170(_WORD *this, int a2)
{
  ++*(this + a2 + 86); /*0x487174*/
  return a2; /*0x48717c*/
}


// ==== 0x00487180  BuildingClass::evaulateDefense  this=BuildingClass  sig=csp ====
int __thiscall sub_487180(_WORD *this, int a2)
{
  --*(this + a2 + 86); /*0x487184*/
  return a2; /*0x48718c*/
}


// ==== 0x00487190  Crate::FindPlacement  this=IUnknown  sig=csp ====
char __thiscall Crate::FindPlacement(int this, IUnknown *aP1, int a3)
{
  ObjectClass *v4; // edi
  void *v5; // ebp
  int v6; // eax
  void *v7; // ebp
  int v8; // eax
  int *v9; // eax
  MouseClass *v10; // ecx
  _DWORD *v11; // eax
  IUnknown *v12; // eax
  AbstractClass *v13; // eax
  int BuildingByTiberiumType; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  void *attachedBomb; // edi
  int *ScreenRect; // ebx
  int *v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // ebp
  IUnknown *v24; // edx
  int v25; // ebx
  bool v26; // cc
  IUnknown *v27; // eax
  int v28; // ecx
  int v29; // ebp
  IUnknown *v30; // ecx
  int *v31; // eax
  int v32; // ecx
  IUnknown *v33; // edx
  int v34; // eax
  int v35; // eax
  IUnknown *v36; // ecx
  int *v37; // eax
  AbstractClass *v38; // [esp-Ch] [ebp-A0h]
  MouseClass *StartCoords; // [esp-8h] [ebp-9Ch]
  MouseClass *v40; // [esp-8h] [ebp-9Ch]
  const RECT *PlacementRect; // [esp-4h] [ebp-98h]
  IUnknown *v42; // [esp-4h] [ebp-98h]
  const RECT *v43; // [esp+0h] [ebp-94h]
  const RECT *v44; // [esp+0h] [ebp-94h]
  const RECT *v45; // [esp+4h] [ebp-90h]
  int v46; // [esp+10h] [ebp-84h] BYREF
  int v47[2]; // [esp+14h] [ebp-80h] BYREF
  AbstractClass *v48; // [esp+1Ch] [ebp-78h]
  MouseClass *v49; // [esp+20h] [ebp-74h]
  int v50; // [esp+24h] [ebp-70h] BYREF
  IUnknown *v51; // [esp+28h] [ebp-6Ch]
  AbstractClass aP1a; // [esp+34h] [ebp-60h] BYREF
  int v53; // [esp+58h] [ebp-3Ch]
  int v54[4]; // [esp+64h] [ebp-30h] BYREF
  int v55[4]; // [esp+74h] [ebp-20h] BYREF
  int v56[4]; // [esp+84h] [ebp-10h] BYREF

  v4 = *(ObjectClass **)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * (_DWORD)aP1); /*0x4871af*/
  aP1a.NeedsSaveOrLink = v4; /*0x4871b2*/
  if ( a3 >= (int)v4[1].attachedBomb ) /*0x4871bc*/
    return 0; /*0x4871bc*/
  if ( IsCoordValidMap(this, v4) ) /*0x4871c3*/
  {
    if ( *(_BYTE *)(this + 284) ) /*0x4871d0*/
    {
      v5 = (void *)__2_YAPAXI_Z(0xB0u); /*0x4871e4*/
      if ( v5 ) /*0x4871eb*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x4871fa*/
        v6 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)1); /*0x487208*/
        Object::SpawnAtCell( /*0x48723f*/
          v5,
          *(IUnknown **)(HouseClass_Player.field_38
                       + 4
                       * (v6
                        + v4[1].ambientSoundController[0]
                        + *((_DWORD *)v4[1].attachedTag + 165)
                        + 2 * *(unsigned __int8 *)(this + 284))
                       - 8),
          (IUnknown *)&v46,
          (BuildingTypeClass *)0xFFFFFFFF);
      }
    }
    else
    {
      v7 = (void *)__2_YAPAXI_Z(0xB0u); /*0x487246*/
      if ( v7 ) /*0x48724d*/
      {
        v46 = *(_DWORD *)(this + 36); /*0x487258*/
        v8 = Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0xB); /*0x487266*/
        Object::SpawnAtCell( /*0x48728c*/
          v7,
          *(IUnknown **)(HouseClass_Player.field_38 + 4 * (v8 + *((_DWORD *)v4[1].attachedTag + 165))),
          (IUnknown *)&v46,
          (BuildingTypeClass *)0xFFFFFFFF);
      }
    }
    CellClass::RegisterForRedraw((int)v4, (MouseClass *)(this + 36)); /*0x487297*/
    *(_BYTE *)(this + 286) = a3; /*0x4872a0*/
    PlacementRect = (const RECT *)BuildingClass::GetPlacementRect(this, (IUnknown *)&aP1a.uniqueId); /*0x4872b2*/
    StartCoords = (MouseClass *)House::GetStartCoords(this, (IUnknown *)&aP1a.NeedsSaveOrLink); /*0x4872bb*/
    CellClass::GetScreenRect(this, (IUnknown *)&aP1a); /*0x4872c3*/
    Rect::Union((IUnknown *)StartCoords, PlacementRect, v43); /*0x4872ce*/
    v9 = (int *)Rect::Union(v42, v44, v45); /*0x4872d9*/
    v47[0] = *v9; /*0x4872ea*/
    v47[1] = v9[1]; /*0x4872f7*/
    v48 = (AbstractClass *)v9[2]; /*0x4872fe*/
    v10 = (MouseClass *)v9[3]; /*0x487302*/
    aP1a.NeedsSaveOrLink = *(void **)&stru_87C374.__pad_579C[21648]; /*0x487305*/
    v49 = v10; /*0x487309*/
    v40 = v10; /*0x48730d*/
    v38 = v48; /*0x487312*/
    v53 = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x487322*/
    v11 = CellStruct::Copy(v47, (IUnknown *)&v50); /*0x487326*/
    v12 = (IUnknown *)Coord2D::Sub(v11, &aP1a, (IUnknown *)&aP1a.NeedsSaveOrLink); /*0x48732d*/
    v13 = Rect::Construct(v54, v12, v38, (AbstractClass *)v40); /*0x487337*/
    Cell::CreateCrater( /*0x48735d*/
      *(_DWORD *)v13->__pad_0,
      *(_DWORD *)&v13->__pad_0[4],
      *(_DWORD *)&v13->__pad_0[8],
      *(_DWORD *)&v13->__pad_0[12],
      0);
    BuildingClass::AddUpgrade((int)&stru_87C374.__pad_14B0[8132], (IUnknown *)(this + 36)); /*0x487368*/
    return 1; /*0x487379*/
  }
  if ( !*(_BYTE *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 13478) ) /*0x487382*/
    return 0; /*0x487382*/
  BuildingByTiberiumType = FindBuildingByTiberiumType(*(IUnknown **)(this + 68)); /*0x487393*/
  if ( BuildingByTiberiumType == -1 ) /*0x48739b*/
    return 0; /*0x48739b*/
  v16 = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[18632] + 4 * BuildingByTiberiumType); /*0x4873af*/
  if ( *(_BYTE *)(this + 284) /*0x4873f0*/
    || *(unsigned __int8 *)(this + 286) >= *(_DWORD *)(v16 + 228) - 1
    || *(double *)(v16 + 176) < 0.00001
    || (IUnknown *)FindBuildingByTiberiumType(*(IUnknown **)(this + 68)) != aP1 )
  {
    return 0; /*0x487621*/
  }
  v17 = a3 + *(_BYTE *)(this + 286); /*0x4873fc*/
  *(_BYTE *)(this + 286) = v17; /*0x4873fe*/
  attachedBomb = v4[1].attachedBomb; /*0x487404*/
  if ( v17 >= (int)attachedBomb - 1 ) /*0x487414*/
    v17 = (_BYTE)attachedBomb - 1; /*0x487416*/
  *(_BYTE *)(this + 286) = v17; /*0x487418*/
  ScreenRect = CellClass::GetScreenRect(this, (IUnknown *)v54); /*0x487431*/
  v20 = House::GetStartCoords(this, (IUnknown *)v56); /*0x487436*/
  if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 ) /*0x48744b*/
  {
    v21 = *v20; /*0x4874e5*/
    v29 = v20[2]; /*0x4874e7*/
    v25 = v20[3]; /*0x4874ea*/
    v51 = (IUnknown *)v20[1]; /*0x4874ed*/
  }
  else
  {
    v46 = v20[2]; /*0x487456*/
    if ( v46 <= 0 || (*(_DWORD *)aP1a.__pad_0 = v20[3], *(int *)aP1a.__pad_0 <= 0) ) /*0x487465*/
    {
      v30 = (IUnknown *)ScreenRect[1]; /*0x4874d1*/
      v21 = *ScreenRect; /*0x4874d4*/
      v29 = ScreenRect[2]; /*0x4874d6*/
      v25 = ScreenRect[3]; /*0x4874d9*/
      v51 = v30; /*0x4874dc*/
    }
    else
    {
      v21 = *ScreenRect; /*0x487467*/
      v22 = *v20; /*0x487469*/
      v23 = ScreenRect[2]; /*0x48746b*/
      v24 = (IUnknown *)ScreenRect[1]; /*0x48746e*/
      v25 = ScreenRect[3]; /*0x487471*/
      v26 = v21 <= *v20; /*0x487474*/
      v48 = (AbstractClass *)v23; /*0x487476*/
      if ( !v26 ) /*0x48747a*/
      {
        v23 += v21 - v22; /*0x48747e*/
        v21 = v22; /*0x487480*/
        v48 = (AbstractClass *)v23; /*0x487482*/
      }
      v27 = (IUnknown *)v20[1]; /*0x487486*/
      v50 = (int)v27; /*0x48748b*/
      if ( (int)v24 > (int)v27 ) /*0x48748f*/
      {
        v25 += (char *)v24 - (char *)v27; /*0x487493*/
        v24 = v27; /*0x487495*/
      }
      if ( v21 + v23 >= v22 + v46 ) /*0x4874a1*/
        v28 = (int)v48; /*0x4874af*/
      else
        v28 = v22 - v21 + v46 + 1; /*0x4874a9*/
      if ( (int)v24 + v25 < *(_DWORD *)aP1a.__pad_0 + v50 ) /*0x4874c2*/
        v25 = *(_DWORD *)aP1a.__pad_0 + v50 - (_DWORD)v24 + 1; /*0x4874c7*/
      v51 = v24; /*0x4874c9*/
      v29 = v28; /*0x4874cd*/
    }
  }
  v31 = BuildingClass::GetPlacementRect(this, (IUnknown *)v55); /*0x4874f8*/
  if ( v29 <= 0 || v25 <= 0 ) /*0x487507*/
  {
    v21 = *v31; /*0x487599*/
    v36 = (IUnknown *)v31[1]; /*0x48759b*/
    v29 = v31[2]; /*0x48759e*/
    v35 = v31[3]; /*0x4875a1*/
  }
  else
  {
    v46 = v31[2]; /*0x487512*/
    if ( v46 <= 0 || (*(_DWORD *)aP1a.__pad_0 = v31[3], *(int *)aP1a.__pad_0 <= 0) ) /*0x487521*/
    {
      v36 = v51; /*0x487591*/
      v35 = v25; /*0x487595*/
    }
    else
    {
      v32 = *v31; /*0x487523*/
      v33 = v51; /*0x487525*/
      v26 = v21 <= *v31; /*0x487529*/
      v47[0] = v21; /*0x48752b*/
      v49 = (MouseClass *)v25; /*0x48752f*/
      if ( v26 ) /*0x487533*/
      {
        v21 = v47[0]; /*0x48753f*/
      }
      else
      {
        v29 += v21 - v32; /*0x487539*/
        v21 = v32; /*0x48753b*/
      }
      v34 = v31[1]; /*0x487543*/
      v50 = v34; /*0x487548*/
      if ( (int)v51 > v34 ) /*0x48754c*/
      {
        v33 = (IUnknown *)v34; /*0x487556*/
        v49 = (MouseClass *)((char *)v49 + (_DWORD)v51 - v34); /*0x487558*/
      }
      if ( v21 + v29 < v32 + v46 ) /*0x487567*/
        v29 = v32 - v21 + v46 + 1; /*0x48756f*/
      v35 = (int)v49; /*0x48757d*/
      if ( (int)v33 + (int)v49 < v50 + *(_DWORD *)aP1a.__pad_0 ) /*0x487586*/
        v35 = v50 + *(_DWORD *)aP1a.__pad_0 - (_DWORD)v33 + 1; /*0x48758b*/
      v36 = v33; /*0x48758d*/
    }
  }
  aP1a.abstractFlags = (int)v36; /*0x4875a4*/
  *(_DWORD *)&aP1a.__pad_0[4] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x4875ae*/
  aP1a.referenceCount = v35; /*0x4875b6*/
  aP1a.uniqueId = v21; /*0x4875cb*/
  aP1a.nextArrayIndex = v29; /*0x4875cf*/
  *(_DWORD *)aP1a.__pad_0 = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x4875d3*/
  v37 = Bounds::Subtract(&aP1a.uniqueId, (IUnknown *)v55, &aP1a); /*0x4875d7*/
  Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x4875fd*/
  BuildingClass::AddOccupancy((int)aP1a.NeedsSaveOrLink, (__int16 *)(this + 36)); /*0x48760a*/
  return 1; /*0x48736f*/
}


// ==== 0x00487630  DisplayClass::UpdateDisplayTimer  this=DisplayClass  sig=csp ====
char __thiscall sub_487630(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax

  if ( this->q130 == 1 ) /*0x487637*/
    this->q130 = 0; /*0x487639*/
  v1 = this->q130 - 1; /*0x487649*/
  this->q130 = v1; /*0x48764a*/
  v2 = v1; /*0x487650*/
  v3 = this->q12C; /*0x487652*/
  if ( (v3 & 8) != 0 && (v3 & 0x10) != 0 ) /*0x48765e*/
  {
    if ( v2 <= 0 ) /*0x48766f*/
    {
      v3 = this->q140; /*0x487671*/
      if ( (*(_BYTE *)(this + 80) & 0x20) == 0x20 ) /*0x48767f*/
      {
        LOBYTE(v3) = v3 & 0xDF; /*0x487681*/
        this->q140 = v3; /*0x487683*/
      }
    }
  }
  else if ( v2 <= 0 ) /*0x487662*/
  {
    LOBYTE(v3) = v3 | 0x18; /*0x487664*/
    this->q12C = v3; /*0x487666*/
  }
  return v3; /*0x48766c*/
}


// ==== 0x00487690  DisplayClass::AdvanceFrameCounter  this=DisplayClass  sig=csp ====
int __thiscall sub_487690(int *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edx
  int result; // eax

  v1 = this->q04C; /*0x487691*/
  if ( v1 == -1 ) /*0x48769a*/
    this->q04C = 0; /*0x48769c*/
  v2 = this->q04C + 1; /*0x4876ac*/
  this->q04C = v2; /*0x4876ad*/
  v3 = v2; /*0x4876b3*/
  result = this->q134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->q04C = result; /*0x4876bf*/
  if ( v1 <= 0 ) /*0x4876c8*/
  {
    result = this->q04C; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = this->q050; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->q050 = result; /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/
}


// ==== 0x004876F0  CellClass::Unshroud  this=CellClass  sig=csp ====
int __thiscall CellClass::Unshroud(int *this)
{
  int v1; // eax
  int result; // eax

  v1 = this->copyFlags; /*0x4876f0*/
  LOBYTE(v1) = v1 | 0x18; /*0x4876f6*/
  this->copyFlags = v1; /*0x4876f8*/
  result = this->CellClass_field_4C; /*0x4876fe*/
  if ( result > 0 ) /*0x487706*/
  {
    result = this->wallOwnerIndex; /*0x487708*/
    LOBYTE(result) = result | 0x20; /*0x48770e*/
    this->wallOwnerIndex = result; /*0x487710*/
  }
  return result; /*0x487716*/
}


// ==== 0x00487720  TechnoClass::ApplySplashDamageToNeighbors  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::ApplySplashDamageToNeighbors(int this)
{
  __int16 *v1; // edi
  char result; // al
  int v3; // ecx
  __int16 v4; // ax
  __int16 *v5; // eax
  int *v6; // esi
  int v7; // edx
  int *v8; // esi
  int v9; // edx
  int *v10; // [esp+58h] [ebp-2Ch]
  int *v11; // [esp+58h] [ebp-2Ch]
  int v12; // [esp+5Ch] [ebp-28h]
  int v13; // [esp+60h] [ebp-24h]
  int v15; // [esp+68h] [ebp-1Ch]
  int v16; // [esp+6Ch] [ebp-18h] BYREF
  int v17; // [esp+70h] [ebp-14h] BYREF
  __int16 *v18; // [esp+74h] [ebp-10h] BYREF
  int v19; // [esp+78h] [ebp-Ch] BYREF
  int v20; // [esp+7Ch] [ebp-8h]
  int v21; // [esp+80h] [ebp-4h]

  v1 = (__int16 *)this; /*0x487727*/
  result = *(_BYTE *)(this + 296); /*0x48772d*/
  if ( result ) /*0x487735*/
  {
    v3 = *(__int16 *)(this + 38) << 8; /*0x48774d*/
    v19 = (v1[18] << 8) + 128; /*0x487756*/
    v20 = v3 + 128; /*0x48775e*/
    v21 = 0; /*0x487768*/
    v12 = -2; /*0x487777*/
    v21 = MEMORY[0x89E7B4] + Cell::GetGroundHeight(&v19); /*0x487781*/
    do /*0x487934*/
    {
      v4 = -2; /*0x487785*/
      v15 = -2; /*0x48778a*/
      do /*0x487922*/
      {
        HIWORD(v13) = v4 + v1[19]; /*0x48779e*/
        LOWORD(v13) = v12 + v1[18]; /*0x4877a3*/
        v16 = v13; /*0x4877b0*/
        v5 = (__int16 *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v16); /*0x4877ba*/
        v18 = v5; /*0x4877c1*/
        if ( v5 != v1 ) /*0x4877c5*/
        {
          v6 = (int *)*((_DWORD *)v5 + 58); /*0x4877cb*/
          if ( v6 ) /*0x4877d3*/
          {
            do /*0x487864*/
            {
              v10 = (int *)v6[12]; /*0x4877de*/
              if ( v6 && (v6[5] & 4) != 0 ) /*0x4877f0*/
              {
                if ( !v6[413] ) /*0x4877f2*/
                  WinAPI::Wrapper(-2147467261); /*0x48780d*/
                if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(_DWORD *)v6[413] + 160))( /*0x487828*/
                       v6[413],
                       v19,
                       v20,
                       v21) )
                {
                  v7 = *v6; /*0x487835*/
                  v17 = v6[27]; /*0x487837*/
                  (*(void (__thiscall **)(int *, int *, _DWORD, int, _DWORD, int, int, _DWORD))(v7 + 364))( /*0x487858*/
                    v6,
                    &v17,
                    0,
                    MEMORY[0x8871E0]->?[5],
                    0,
                    1,
                    1,
                    0);
                }
              }
              v6 = v10; /*0x48785e*/
            }
            while ( v10 ); /*0x487864*/
            v5 = v18; /*0x48786a*/
            v1 = (__int16 *)this; /*0x48786e*/
          }
          v8 = (int *)*((_DWORD *)v5 + 57); /*0x487872*/
          if ( v8 ) /*0x48787a*/
          {
            do /*0x48790c*/
            {
              v11 = (int *)v8[12]; /*0x487885*/
              if ( v8 && (v8[5] & 4) != 0 ) /*0x487898*/
              {
                if ( !v8[413] ) /*0x48789a*/
                  WinAPI::Wrapper(-2147467261); /*0x4878b5*/
                if ( (*(unsigned __int8 (__stdcall **)(int, int, int, int))(*(_DWORD *)v8[413] + 160))( /*0x4878d0*/
                       v8[413],
                       v19,
                       v20,
                       v21) )
                {
                  v9 = *v8; /*0x4878dd*/
                  v18 = (__int16 *)v8[27]; /*0x4878df*/
                  (*(void (__thiscall **)(int *, __int16 **, _DWORD, int, _DWORD, int, int, _DWORD))(v9 + 364))( /*0x487900*/
                    v8,
                    &v18,
                    0,
                    MEMORY[0x8871E0]->?[5],
                    0,
                    1,
                    1,
                    0);
                }
              }
              v8 = v11; /*0x487906*/
            }
            while ( v11 ); /*0x48790c*/
            v1 = (__int16 *)this; /*0x487912*/
          }
        }
        v4 = ++v15; /*0x48791a*/
      }
      while ( v15 < 3 ); /*0x487922*/
      result = ++v12; /*0x48792c*/
    }
    while ( v12 < 3 ); /*0x487934*/
  }
  return result; /*0x48793a*/
}


// ==== 0x00487950  CellClass::QuickPassable  this=IUnknown  sig=csp ====
bool __thiscall CellClass_QuickPassable(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->ptr_24 << 8) + 128; /*0x48796f*/
  v2 = ((__int16)HIWORD(this->ptr_24) << 8) + 128; /*0x487971*/
  v5[0] = 128; /*0x487973*/
  v5[1] = 128; /*0x487977*/
  inited = Isometric::InitTables((int)this, v5); /*0x487980*/
  v6[0] = v1; /*0x487989*/
  v6[1] = v2; /*0x487993*/
  v6[2] = inited; /*0x487997*/
  return Cell::IsPassable(v6); /*0x4879a0*/
}


// ==== 0x004879B0  ObjectClass::method_4879B0  this=ObjectClass  sig=csp ====
char __thiscall sub_4879B0(_DWORD *this)
{
  int v1; // esi
  int v2; // edi
  int inited; // eax
  _DWORD v5[2]; // [esp+8h] [ebp-14h] BYREF
  _DWORD v6[3]; // [esp+10h] [ebp-Ch] BYREF

  v1 = ((__int16)this->objectTypeFlags << 8) + 128; /*0x4879cf*/
  v2 = ((__int16)HIWORD(this->objectTypeFlags) << 8) + 128; /*0x4879d1*/
  v5[0] = 128; /*0x4879d3*/
  v5[1] = 128; /*0x4879d7*/
  inited = Isometric::InitTables((int)this, v5); /*0x4879e0*/
  v6[0] = v1; /*0x4879e9*/
  v6[1] = v2; /*0x4879f3*/
  v6[2] = inited; /*0x4879f7*/
  return Game::Stub3((int)v6); /*0x487a00*/
}


// ==== 0x00487A10  Cell::SearchEnemies  this=AbstractClass  sig=csp ====
int __thiscall Cell::SearchEnemies(int this, IUnknown *aP1)
{
  _DWORD *v3; // esi
  char v4; // bl
  _DWORD *v5; // ebp
  int v6; // edx
  AbstractClass *v7; // ebx
  int v8; // ebp
  _DWORD *v9; // eax
  int *v10; // esi
  bool v11; // zf
  int v12; // edx
  int result; // eax
  int v14; // [esp+70h] [ebp-1Ch]
  IUnknown *v15; // [esp+74h] [ebp-18h]
  _DWORD v16[2]; // [esp+78h] [ebp-14h] BYREF
  _DWORD v17[3]; // [esp+80h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)(this + 228); /*0x487a19*/
  if ( v3 ) /*0x487a21*/
  {
    v4 = (char)aP1; /*0x487a27*/
    while ( 1 ) /*0x487a2d*/
    {
      v5 = (_DWORD *)v3[12]; /*0x487a2d*/
      if ( (*(int (__thiscall **)(_DWORD *, int, int, int, _DWORD, int))(*v3 + 428))(v3, this, -1, -1, 0, 1) == 7 ) /*0x487a44*/
        goto LABEL_10; /*0x487a44*/
      if ( !v4 ) /*0x487a48*/
        goto LABEL_8; /*0x487a48*/
      if ( v3 ) /*0x487a4c*/
        break; /*0x487a4c*/
LABEL_11:
      v3 = v5; /*0x487aa4*/
      if ( !v5 ) /*0x487aa8*/
        goto LABEL_12; /*0x487aa8*/
    }
    if ( (v3[5] & 1) == 0 || !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v3 + 132))(v3) + 3476) ) /*0x487a5e*/
    {
LABEL_8:
      if ( !v3 || (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 2 ) /*0x487a76*/
        goto LABEL_11; /*0x487a76*/
    }
LABEL_10:
    v6 = *v3; /*0x487a78*/
    aP1 = (IUnknown *)v3[27]; /*0x487a84*/
    (*(void (__thiscall **)(_DWORD *, IUnknown **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v6 + 364))( /*0x487a9e*/
      v3,
      &aP1,
      0,
      *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
      0,
      1,
      1,
      0);
    goto LABEL_11; /*0x487a9e*/
  }
LABEL_12:
  aP1 = *(IUnknown **)(this + 36); /*0x487aaa*/
  Coord::Subtract(v17, (IUnknown *)(((__int16)aP1 << 8) + 128), (IUnknown *)((SHIWORD(aP1) << 8) + 128), 0); /*0x487ad0*/
  v16[0] = 128; /*0x487adc*/
  v16[1] = 128; /*0x487ae0*/
  v7 = (AbstractClass *)Isometric::InitTables(this, (IUnknown *)v16); /*0x487ae9*/
  v14 = -2; /*0x487aeb*/
  do /*0x487bff*/
  {
    v8 = -2; /*0x487af3*/
    v16[0] = -2; /*0x487af8*/
    do /*0x487bed*/
    {
      HIWORD(v15) = v8 + *(_WORD *)(this + 38); /*0x487b0c*/
      LOWORD(v15) = v14 + *(_WORD *)(this + 36); /*0x487b11*/
      aP1 = v15; /*0x487b1e*/
      v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&aP1); /*0x487b28*/
      if ( v9 != (_DWORD *)this ) /*0x487b2f*/
      {
        v10 = (int *)v9[57]; /*0x487b35*/
        if ( v10 ) /*0x487b3d*/
        {
          do /*0x487bdb*/
          {
            v11 = (v10[5] & 4) == 0; /*0x487b49*/
            LOBYTE(aP1) = (v10[5] & 4) != 0; /*0x487b4c*/
            if ( !v11 ) /*0x487b50*/
            {
              if ( !v10[413] ) /*0x487b56*/
                WinAPI::Wrapper(-2147467261); /*0x487b65*/
              if ( (*(unsigned __int8 (__stdcall **)(int, _DWORD, _DWORD, AbstractClass *))(*(_DWORD *)v10[413] + 160))( /*0x487b88*/
                     v10[413],
                     v17[0],
                     v17[1],
                     v7) )
              {
                if ( (*(int (__thiscall **)(int *, int, int, int, _DWORD, int))(*v10 + 428))(v10, this, -1, -1, 0, 1) == 7 ) /*0x487ba8*/
                {
                  v12 = *v10; /*0x487bb2*/
                  aP1 = (IUnknown *)v10[27]; /*0x487bb6*/
                  (*(void (__thiscall **)(int *, IUnknown **, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(v12 + 364))( /*0x487bd0*/
                    v10,
                    &aP1,
                    0,
                    *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9108] + 4008),
                    0,
                    1,
                    1,
                    0);
                }
              }
            }
            v10 = (int *)v10[12]; /*0x487bd6*/
          }
          while ( v10 ); /*0x487bdb*/
          v8 = v16[0]; /*0x487be1*/
        }
      }
      v16[0] = ++v8; /*0x487be9*/
    }
    while ( v8 < 3 ); /*0x487bed*/
    result = ++v14; /*0x487bf7*/
  }
  while ( v14 < 3 ); /*0x487bff*/
  return result; /*0x487c05*/
}


// ==== 0x00487C10  BuildingClass::CheckC4Active  this=BuildingClass  sig=csp ====
char __thiscall BuildingClass_CheckC4Active(int this)
{
  _DWORD *v3; // esi

  if ( *(_BYTE *)(this + 284) ) /*0x487c14*/
    return 0; /*0x487c1f*/
  if ( !MEMORY[0xA8E9A0] ) /*0x487c2a*/
    return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)]; /*0x487c2a*/
  v3 = *(_DWORD **)(this + 228); /*0x487c2c*/
  if ( !v3 ) /*0x487c34*/
    return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)]; /*0x487c49*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v3 + 44))(v3) != 6 ) /*0x487c40*/
  {
    v3 = (_DWORD *)v3[12]; /*0x487c42*/
    if ( !v3 ) /*0x487c47*/
      return MEMORY[0x89EA60][36 * *(_DWORD *)(this + 236)]; /*0x487c47*/
  }
  return 0; /*0x487c1e*/
}


// ==== 0x00487C70  TerrainClass::SetFieldF8  this=CellStruct  sig=csp ====
int __thiscall TerrainClass::SetFieldF8(_DWORD *this, int a2)
{
  this->q0F8 = a2; /*0x487c74*/
  return a2; /*0x487c7a*/
}


// ==== 0x00487C80  ObjectClass::?GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(
        Concurrency::details::SchedulerBase *this)
{
  return this->q0F8; /*0x487c86*/
}


// ==== 0x00487CB0  Cell::GetTraversability  this=Cell  sig=csp ====
__int64 __thiscall Cell_GetTraversability(double *this)
{
  double v1; // st7

  v1 = (double)*((int *)MEMORY[0x8871E0] + 1539); /*0x487cb5*/
  if ( this->q01E < v1 ) /*0x487cc8*/
    v1 = this->q01E; /*0x487ccc*/
  return Math::RoundToInt(v1);
}


// ==== 0x00487CE0  CellClass::RadLevel_Increase  this=CellStruct  sig=csp ====
void __thiscall CellClass::RadLevel_Increase(double *this, double a2)
{
  this->q01E = a2 + this->q01E; /*0x487cea*/
}


// ==== 0x00487D00  CellClass::RadLevel_Decrease  this=CellStruct  sig=csp ====
void __thiscall CellClass::RadLevel_Decrease(int this, double a2)
{
  double v2; // st7

  v2 = *(double *)(this + 240) - a2; /*0x487d06*/
  *(double *)(this + 240) = v2; /*0x487d0a*/
  if ( v2 >= 0.0 ) /*0x487d1d*/
  {
    *(double *)(this + 240) = v2; /*0x487d38*/
  }
  else
  {
    *(_DWORD *)(this + 240) = 0; /*0x487d1f*/
    *(_DWORD *)(this + 244) = 0; /*0x487d29*/
  }
}


// ==== 0x00487D50  Cell::GetSlopeIndex  this=IUnknown  sig=csp ====
int __thiscall Cell_GetSlopeIndex(int this)
{
  return *(char *)(this + 283) + 4 * ((*(_DWORD *)(this + 320) >> 7) & 1); /*0x487d66*/
}


// ==== 0x00487D70  CellClass::AttachObject  this=AbstractClass  sig=csp ====
char __thiscall CellClass_AttachObject(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = this->q0E0; /*0x487d77*/
  if ( a2 ) /*0x487d7f*/
  {
    if ( !v3 || v3 == a2 ) /*0x487dc0*/
    {
      this->q0E0 = a2; /*0x487dc8*/
      if ( (*(_BYTE *)(a2 + 20) & 4) != 0 ) /*0x487dd3*/
        FootClass::Jumpjet_OccupyCell(this->q024); /*0x487dd9*/
      return 1; /*0x487dde*/
    }
    else
    {
      return 0; /*0x487dc2*/
    }
  }
  else
  {
    if ( v3 ) /*0x487d83*/
    {
      if ( (*(_BYTE *)(v3 + 20) & 4) != 0 ) /*0x487d89*/
        FootClass::Jumpjet_OccupyCell(MEMORY[0x89E748]); /*0x487da5*/
    }
    this->q0E0 = 0; /*0x487daa*/
    return 1; /*0x487db4*/
  }
}


// ==== 0x00487DF0  Cell::IsBridge2  this=Building  sig=csp ====
bool __thiscall Cell_IsBridge2(_DWORD *this)
{
  return *(this + 59) == 5; /*0x487dfa*/
}


// ==== 0x00487E00  MovementAI::IsPathMovementAllowed  this=MovementAI  sig=csp ====
bool __thiscall sub_487E00(_DWORD *this)
{
  _DWORD *v2; // esi

  if ( !MEMORY[0xA8E9A0] ) /*0x487e0b*/
    return this->q100 != 0; /*0x487e0b*/
  v2 = (_DWORD *)this->u32_E4; /*0x487e0d*/
  if ( !v2 ) /*0x487e15*/
    return this->q100 != 0; /*0x487e15*/
  while ( (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) != 6 ) /*0x487e21*/
  {
    v2 = (_DWORD *)v2[12]; /*0x487e23*/
    if ( !v2 ) /*0x487e28*/
      return this->q100 != 0; /*0x487e28*/
  }
  return this->q100 != 1 && this->q100 != 0; /*0x487e48*/
}


// ==== 0x00487E50  AbstractClass::compareType  this=AbstractClass  sig=csp ====
int __stdcall AbstractClass::sub_487E50(int a1)
{
  return 11; /*0x487e55*/
}


// ==== 0x00487E60  CellClass::StubReturn11  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt11(#378 *this)
{
  return 11; /*0x487e65*/
}


// ==== 0x00487E70  CellClass::StubReturn328  this=CellClass  sig=csp ====
int __thiscall CellClass::_vt12(#378 *this)
{
  return 328; /*0x487e75*/
}


// ==== 0x00487E80  CellClass::CopyTo  this=CellClass  sig=csp ====
int __thiscall CellClass::CopyTo(#378 *this)
{
  char v3; // [esp+8h] [ebp+4h]

  CellClass::DTOR(this); /*0x487e83*/
  if ( (v3 & 1) != 0 ) /*0x487e8d*/
    __3_YAXPAX_Z(this); /*0x487e90*/
  return (int)this; /*0x487e9a*/
}


// ==== 0x00487EA0  NeighborCoord  this=-  sig=csp ====
_DWORD *__fastcall Coord_Neighbor(_DWORD *a1, _WORD *a2, char a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // [esp+8h] [ebp+4h]

  result = a1; /*0x487ea0*/
  v4 = a3 & 7; /*0x487ea7*/
  LOWORD(v5) = *a2 + LOWORD(MEMORY[0x89F688][v4]); /*0x487ec4*/
  HIWORD(v5) = a2[1] + HIWORD(MEMORY[0x89F688][v4]); /*0x487eca*/
  *result = v5; /*0x487ed3*/
  return result; /*0x487ec9*/
}


// ==== 0x00487EE0  Bounds::Subtract  this=AbstractClass  sig=csp ====
_DWORD *__thiscall Bounds::Subtract(int *this, IUnknown *aP1, _DWORD *a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // edx

  v3 = this->vtable2; /*0x487ee0*/
  v4 = *this; /*0x487ee3*/
  v5 = this->vtable3; /*0x487ef1*/
  v6 = this->vtable4; /*0x487ef4*/
  v7 = v3 - a2[1]; /*0x487ef7*/
  aP1->field_0 = v4 - *a2; /*0x487f01*/
  aP1->field_4 = v7; /*0x487f06*/
  aP1->field_8 = v5; /*0x487f09*/
  aP1->field_C = v6; /*0x487f0d*/
  return &aP1->field_0; /*0x487f05*/
}


// ==== 0x00487F20  Coord2D::Sub  this=IUnknown  sig=csp ====
int *__thiscall Coord2D::Sub(_DWORD *this, AbstractClass *aP1, IUnknown *aP2)
{
  int v3; // edx
  int v5; // ecx

  v3 = *this; /*0x487f24*/
  v5 = this->ptr_4 - aP2->field_4; /*0x487f35*/
  *(_DWORD *)aP1->__pad_0 = v3 - aP2->field_0; /*0x487f38*/
  *(_DWORD *)&aP1->__pad_0[4] = v5; /*0x487f3a*/
  return (int *)aP1->__pad_0; /*0x487f37*/
}


// ==== 0x00487F40  Rect::Union  this=IUnknown  sig=csp ====
BOOL __stdcall Rect::Union(IUnknown *aP0, const RECT *lprcSrc1, const RECT *lprcSrc2)
{
  int *v3; // edx
  int *v4; // ecx
  int *v5; // edi
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edx
  int v12; // ecx
  int v14; // [esp+Ch] [ebp-8h]
  int *v15; // [esp+10h] [ebp-4h]
  LPRECT lprcDst; // [esp+18h] [ebp+4h]

  v5 = v4; /*0x487f48*/
  v15 = v4; /*0x487f4c*/
  if ( v3[2] <= 0 || v3[3] <= 0 ) /*0x487f5b*/
  {
    *v4 = aP0->field_0; /*0x488012*/
    v4[1] = aP0->field_4; /*0x488017*/
    v4[2] = aP0->field_8; /*0x48801d*/
    v4[3] = aP0->field_C; /*0x488023*/
    return (BOOL)v4; /*0x488026*/
  }
  else
  {
    lprcDst = (LPRECT)aP0->field_8; /*0x487f6a*/
    if ( (int)lprcDst <= 0 || (v14 = aP0->field_C, v14 <= 0) ) /*0x487f79*/
    {
      *v5 = *v3; /*0x487ff0*/
      v5[1] = v3[1]; /*0x487ff5*/
      v5[2] = v3[2]; /*0x487ffb*/
      v5[3] = v3[3]; /*0x488001*/
      return (BOOL)v5; /*0x487fec*/
    }
    else
    {
      v7 = *v3; /*0x487f7b*/
      v8 = aP0->field_0; /*0x487f7d*/
      v9 = v3[1]; /*0x487f80*/
      v10 = v3[2]; /*0x487f84*/
      v11 = v3[3]; /*0x487f87*/
      if ( v7 > aP0->field_0 ) /*0x487f8c*/
      {
        v10 += v7 - v8; /*0x487f90*/
        v7 = aP0->field_0; /*0x487f92*/
      }
      v12 = aP0->field_4; /*0x487f94*/
      if ( v9 > v12 ) /*0x487f9d*/
      {
        v11 += v9 - v12; /*0x487fa1*/
        v9 = v12; /*0x487fa3*/
      }
      if ( v7 + v10 < (int)lprcDst + v8 ) /*0x487fac*/
        v10 = (int)&lprcDst->left + v8 - v7 + 1; /*0x487fb4*/
      if ( v11 + v9 < v12 + v14 ) /*0x487fc8*/
        v11 = v12 + v14 - v9 + 1; /*0x487fcd*/
      *v15 = v7; /*0x487fd5*/
      v15[1] = v9; /*0x487fd7*/
      v15[2] = v10; /*0x487fda*/
      v15[3] = v11; /*0x487fe0*/
      return (BOOL)v15; /*0x487fcf*/
    }
  }
}


// ==== 0x00488030  _DynamicVectorClass_PAVObjectClass::Constructor_VectorClass_ObjectClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall Buffer::Constructor_VectorClass_ObjectClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x488033*/
  *Block = &vt_VectorClass_ObjectClass; /*0x488036*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x488040*/
  {
    __3_YAXPAX_Z(v3); /*0x488048*/
    *(Block + 1) = 0; /*0x488050*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48805b*/
  *(Block + 2) = 0; /*0x488061*/
  if ( (a2 & 1) != 0 ) /*0x488068*/
    __3_YAXPAX_Z(Block); /*0x48806b*/
  return (DynamicVector *)Block; /*0x488075*/
}


// ==== 0x00488080  CellClass::clearOccupationFlags  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_488080(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x48808b*/
  this->Capacity = a2; /*0x48808e*/
  this->q030 = 1; /*0x488091*/
  this->q034 = 0; /*0x488095*/
  *this = &vt_VectorClass_FoggedObjectClass; /*0x488098*/
  if ( a2 ) /*0x48809e*/
  {
    if ( a3 ) /*0x4880a6*/
    {
      this->Items = a3; /*0x4880a8*/
      return this; /*0x4880ae*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x4880bd*/
    this->q034 = 1; /*0x4880c0*/
  }
  return this; /*0x4880ad*/
}


// ==== 0x004880D0  sub_4880D0  this=-  sig=ida-proto ====
int sub_4880D0()
{
  MEMORY[0x89E7C8] = 0; /*0x4880d2*/
  MEMORY[0x89E7CC] = 0; /*0x4880d7*/
  MEMORY[0x89E7D0] = 0; /*0x4880dc*/
  MEMORY[0x89E7D4] = 0; /*0x4880e1*/
  return 0; /*0x4880e6*/
}


// ==== 0x004880F0  ObjectClass::method_4880F0  this=ObjectClass  sig=csp ====
int __thiscall sub_4880F0(int this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v15; // [esp+8h] [ebp-10h] BYREF
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  if ( !Control::DispatchClick((_DWORD *)this, a2) ) /*0x4880fb*/
    return 0; /*0x488204*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x488110*/
  v3 = *(_DWORD *)(this + 16); /*0x488116*/
  v4 = *(_DWORD *)(this + 20); /*0x488119*/
  v15 = *(_DWORD *)(this + 12); /*0x48811c*/
  v5 = *(_DWORD *)(this + 24); /*0x488120*/
  v16 = v3; /*0x488123*/
  v17 = v4; /*0x488127*/
  v18 = v5; /*0x488133*/
  DrawBuildingTilesSHP(&v15, 0, 0); /*0x488137*/
  if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x488145*/
    v6 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 13); /*0x48814f*/
  else
    v6 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 26); /*0x48815c*/
  v7 = *(_DWORD *)(this + 16) + 1; /*0x488167*/
  v15 = *(_DWORD *)(this + 12) + 1; /*0x488168*/
  v8 = *(_DWORD *)(this + 20); /*0x48816c*/
  v16 = v7; /*0x48816f*/
  v9 = *(_DWORD *)(this + 24) - 1; /*0x488177*/
  v17 = v8 - 1; /*0x488178*/
  v18 = v9; /*0x488183*/
  (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v15, v6); /*0x48818e*/
  if ( *(_BYTE *)(this + 45) ) /*0x488191*/
  {
    if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x4881a1*/
      v10 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 4); /*0x4881ab*/
    else
      v10 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 8); /*0x4881b8*/
    v11 = *(_DWORD *)(this + 16) + 1; /*0x4881c3*/
    v15 = *(_DWORD *)(this + 12) + 1; /*0x4881c4*/
    v12 = *(_DWORD *)(this + 20); /*0x4881c8*/
    v16 = v11; /*0x4881cb*/
    v13 = *(_DWORD *)(this + 24) - 1; /*0x4881d3*/
    v17 = v12 - 1; /*0x4881d4*/
    v18 = v13; /*0x4881df*/
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], &v15, v10); /*0x4881ea*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x4881f5*/
  return 1; /*0x4881fd*/
}


// ==== 0x00488210  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_488210(_BYTE *this, unsigned int a2, _DWORD *a3, int a4)
{
  if ( (a2 & 4) != 0 ) /*0x48821b*/
  {
    if ( this->q0B4 ) /*0x48821d*/
    {
      GadgetClass::Hide(this); /*0x488224*/
      return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x48823a*/
    }
    GadgetClass::Show(this); /*0x48823d*/
  }
  return GadgetClass::ProcessMouseOver(this, a2, a3, 0); /*0x488238*/
}


// ==== 0x00488260  sub_488260  this=-  sig=ida-proto ====
int sub_488260()
{
  MEMORY[0x89E7D8] = 0; /*0x488262*/
  MEMORY[0x89E7DC] = 0; /*0x488267*/
  MEMORY[0x89E7E0] = 0; /*0x48826c*/
  MEMORY[0x89E7E4] = 0; /*0x488271*/
  return 0; /*0x488276*/
}


// ==== 0x00488280  CheckListClass::method  this=CheckListClass  sig=csp ====
CheckListClass *__thiscall sub_488280(
        _BYTE *this,
        ListClass *aP1,
        int a3,
        int a4,
        ListClass *aP4,
        int a6,
        ControlClass *aP6,
        ListClass *aP7,
        int a9)
{
  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x4882ad*/
  this->q174 = 0; /*0x4882b2*/
  *(_DWORD *)this = &vt_CheckListClass; /*0x4882b9*/
  return (CheckListClass *)this; /*0x4882c1*/
}


// ==== 0x00488310  CheckListClass::?  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = __2_YAPAXI_Z(8); /*0x488315*/
  if ( !v3 ) /*0x48831f*/
    return ListClass::AddItem(this, 0); /*0x48833c*/
  *(_DWORD *)v3 = a2; /*0x488326*/
  *(_BYTE *)(v3 + 4) = 0; /*0x48832a*/
  return ListClass::AddItem(this, v3); /*0x488333*/
}


// ==== 0x00488350  CheckListClass::Clear  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt39(_DWORD *this)
{
  int v1; // eax

  v1 = ColorListClass::SetColor(this); /*0x488350*/
  if ( v1 ) /*0x488357*/
    return *(_DWORD *)v1; /*0x488359*/
  else
    return 0; /*0x48835c*/
}


// ==== 0x00488360  CheckListClass::ScrollUp  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::ScrollUp(_DWORD *this, CheckListClass *aP1)
{
  int *Clamped; // eax

  Clamped = (int *)Array::GetClamped(this, aP1); /*0x488365*/
  if ( Clamped ) /*0x48836c*/
    return *Clamped; /*0x48836e*/
  else
    return 0; /*0x488373*/
}


// ==== 0x00488380  CheckListClass::GetSelected  this=CheckListClass  sig=csp ====
void __thiscall CheckListClass::GetSelected(unsigned int *this, wchar_t *String2)
{
  CheckListClass *v3; // ebx
  WinModemClass *Clamped; // eax
  WinModemClass *v5; // edi

  v3 = 0; /*0x488386*/
  if ( (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) > 0 ) /*0x488392*/
  {
    while ( 1 ) /*0x48839b*/
    {
      Clamped = (WinModemClass *)Array::GetClamped(this, v3); /*0x48839b*/
      v5 = Clamped; /*0x4883a0*/
      if ( Clamped ) /*0x4883a4*/
      {
        if ( !_wcsicmp(*(const wchar_t **)Clamped->__pad_0, String2) ) /*0x4883aa*/
          break; /*0x4883aa*/
      }
      v3 = (CheckListClass *)((char *)v3 + 1); /*0x4883ba*/
      if ( (int)v3 >= (*(int (__thiscall **)(unsigned int *))(*this + 148))(this) ) /*0x4883c3*/
        return; /*0x4883c3*/
    }
    ListClass::RemoveItem(this, (signed int)v3); /*0x4883cf*/
    __3_YAXPAX_Z(v5); /*0x4883d5*/
  }
}


// ==== 0x004883F0  CheckListClass::SetItemData  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::SetItemData(_DWORD *this, wchar_t *String2)
{
  CheckListClass *v3; // edi
  int result; // eax
  const wchar_t **Clamped; // eax

  v3 = 0; /*0x4883f5*/
  result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this); /*0x4883f9*/
  if ( result > 0 ) /*0x488401*/
  {
    while ( 1 ) /*0x48840a*/
    {
      Clamped = (const wchar_t **)Array::GetClamped(this, v3); /*0x48840a*/
      if ( Clamped ) /*0x488411*/
      {
        if ( !_wcsicmp(*Clamped, String2) ) /*0x488417*/
          break; /*0x488417*/
      }
      v3 = (CheckListClass *)((char *)v3 + 1); /*0x488427*/
      result = (*(int (__thiscall **)(_DWORD *))(*this + 148))(this); /*0x488428*/
      if ( (int)v3 >= result ) /*0x488430*/
        return result; /*0x488430*/
    }
    return (*(int (__thiscall **)(_DWORD *, CheckListClass *))(*this + 184))(this, v3); /*0x48843d*/
  }
  return result; /*0x488432*/
}


// ==== 0x004884A0  CheckListClass::GetItem  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::GetItem(int this, int a2, _DWORD *a3, int a4)
{
  int v6; // edi
  int Clamped; // eax
  char v8; // al
  char v9; // bl
  int v10; // eax

  if ( *(_BYTE *)(this + 372) ) /*0x4884a3*/
    return 0; /*0x4884ad*/
  v6 = CellClass::DrawWithFlags((_DWORD *)this, a2, a3, 0); /*0x4884cb*/
  if ( (a2 & 1) != 0 ) /*0x4884cd*/
  {
    Clamped = Array::GetClamped((_DWORD *)this, *(CheckListClass **)(this + 364)); /*0x4884d8*/
    if ( Clamped ) /*0x4884df*/
      v8 = *(_BYTE *)(Clamped + 4); /*0x4884e1*/
    else
      v8 = 0; /*0x4884e6*/
    v9 = v8 == 0; /*0x4884f3*/
    v10 = Array::GetClamped((_DWORD *)this, *(CheckListClass **)(this + 364)); /*0x4884f6*/
    if ( v10 ) /*0x4884fd*/
    {
      if ( *(_BYTE *)(v10 + 4) != v9 ) /*0x488502*/
      {
        *(_BYTE *)(v10 + 4) = v9; /*0x488504*/
        (*(void (__thiscall **)(int))(this->u32_48)(this); /*0x48850b*/
      }
    }
  }
  return v6; /*0x4884af*/
}


// ==== 0x00488520  CheckListClass::OnClick  this=CheckListClass  sig=csp ====
CheckListClass *__userpurge CheckListClass::OnClick@<eax>(
        _DWORD *a1@<ecx>,
        const wchar_t *a2@<edi>,
        CampaignScore *a3@<ebp>,
        CheckListClass *aP1,
        int a5,
        int a6,
        int a7,
        int a8)
{
  CheckListClass *result; // eax
  int v10; // edi
  wchar_t *Type; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // [esp-20h] [ebp-114h]
  size_t v17; // [esp-10h] [ebp-104h]
  int v18; // [esp-10h] [ebp-104h]
  _DWORD v19[4]; // [esp+4h] [ebp-F0h] BYREF
  int v20[2]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v21[16]; // [esp+1Ch] [ebp-D8h] BYREF
  _WORD v22[100]; // [esp+2Ch] [ebp-C8h] BYREF

  result = (CheckListClass *)(*(int (__thiscall **)(_DWORD *))(*a1 + 148))(a1); /*0x48852b*/
  if ( (int)aP1 < (int)result )
  {
    result = (CheckListClass *)Array::GetClamped(a1, aP1); /*0x488543*/
    if ( result )
    {
      memset(&v22[1], 0, 198); /*0x488560*/
      v17 = *(_DWORD *)result->__pad_0; /*0x48856b*/
      v22[0] = LOBYTE(result->CheckListClass_field_0x04) != 0 ? 3 : 32;
      v22[1] = 32; /*0x48857e*/
      swprintf(&v22[2], v17, a2, a3); /*0x488585*/
      v10 = a1[11]; /*0x48858a*/
      Type = (wchar_t *)BuildingAnim::GetType(); /*0x48859c*/
      if ( a8 ) /*0x4885a7*/
      {
        v10 |= 0x2000u; /*0x4885b4*/
        v12 = *(_DWORD *)(*(_DWORD *)(stru_B05488.field_4C + 4 * (_DWORD)Type) + 796); /*0x4885bd*/
        if ( *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 4) == 1 ) /*0x4885c9*/
          v13 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372) + v12); /*0x4885d6*/
        else
          v13 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7840] + 372) + 2 * v12); /*0x4885e2*/
        v19[0] = a5; /*0x4885f4*/
        v19[3] = a1[19]; /*0x4885fb*/
        v19[1] = a6; /*0x488606*/
        v19[2] = a7; /*0x48860a*/
        (*(void (__thiscall **)(_DWORD, _DWORD *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 20))( /*0x488615*/
          *(_DWORD *)&stru_87C374.__pad_579C[22532],
          v19,
          v13);
      }
      else if ( (v10 & 0x4000) == 0 ) /*0x488620*/
      {
        v10 |= 0x1000u; /*0x488622*/
      }
      v14 = a1[12]; /*0x48862f*/
      v20[0] = a5; /*0x488639*/
      v18 = v14; /*0x488643*/
      v20[1] = a6; /*0x488644*/
      v16 = *(_DWORD *)(stru_B05488.field_4C + 4 * (_DWORD)Type); /*0x488659*/
      v15 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)&stru_87C374.__pad_579C[22532] + 120))( /*0x488662*/
              *(_DWORD *)&stru_87C374.__pad_579C[22532],
              v21);
      return (CheckListClass *)FillRectangle( /*0x488675*/
                                 (IUnknown *)v19,
                                 (IUnknown *)v22,
                                 *(int *)&stru_87C374.__pad_579C[22532],
                                 v15,
                                 (int)v20,
                                 v16,
                                 0,
                                 v10,
                                 a7,
                                 v18);
    }
  }
  return result; /*0x48867d*/
}


// ==== 0x00488690  GadgetClass::DetachPrimary  this=GadgetClass  sig=csp ====
void COMObject_DetachPrimary()
{
  MEMORY[0x8B3E8C] = 0; /*0x488690*/
}


// ==== 0x004886A0  GadgetClass::GetStateFlag  this=GadgetClass  sig=csp ====
char __thiscall ObjectClass_GetStateFlag(_BYTE *this)
{
  return this->q01C; /*0x4886a3*/
}


// ==== 0x004886B0  ListClass::COMStub  this=ListClass  sig=csp ====
int __thiscall CheckListClass::_vt37(_DWORD *this)
{
  return this->q044; /*0x4886b3*/
}


// ==== 0x004886C0  CheckListClass::SelectItem  this=CheckListClass  sig=csp ====
char __thiscall CheckListClass::_vt42(unsigned int *this, signed int a2)
{
  return ListClass::RemoveItem(this, a2); /*0x4886ca*/
}


// ==== 0x004886D0  CheckListClass::SetFocus  this=CheckListClass  sig=csp ====
int __thiscall CheckListClass::_vt46(int *this, unsigned int a2)
{
  return ColorListClass::Clear(this, a2); /*0x4886da*/
}


// ==== 0x004886E0  CheckListClass::QueryInterface  this=CheckListClass  sig=csp ====
CheckListClass *__thiscall CheckListClass::QueryInterface(unsigned int *Block, char a2)
{
  CCINIClass *Clamped; // edi

  *Block = (unsigned int)&vt_CheckListClass; /*0x4886e3*/
  while ( *(Block + 17) ) /*0x4886e9*/
  {
    Clamped = (CCINIClass *)Array::GetClamped(Block, 0); /*0x4886fe*/
    ListClass::RemoveItem(Block, 0); /*0x488700*/
    __3_YAXPAX_Z(Clamped); /*0x488706*/
  }
  ListClass::Destruct(Block); /*0x488718*/
  if ( (a2 & 1) != 0 ) /*0x488722*/
    __3_YAXPAX_Z(Block); /*0x488725*/
  return (CheckListClass *)Block; /*0x48872f*/
}


// ==== 0x00488740  sub_488740  this=-  sig=ida-proto ====
int sub_488740()
{
  MEMORY[0x89E7E8] = 0; /*0x488742*/
  MEMORY[0x89E7EC] = 0; /*0x488747*/
  MEMORY[0x89E7F0] = 0; /*0x48874c*/
  MEMORY[0x89E7F4] = 0; /*0x488751*/
  return 0; /*0x488756*/
}


// ==== 0x00488760  ColorListClass::method  this=ColorListClass  sig=csp ====
ColorListClass *__thiscall sub_488760(
        _DWORD *this,
        ListClass *aP1,
        int a3,
        int a4,
        ListClass *aP4,
        int a6,
        ControlClass *aP6,
        ListClass *aP7,
        int a9)
{
  ListClass::Construct((int)this, aP1, a3, a4, aP4, a6, aP6, aP7, a9); /*0x48878d*/
  this->q178 = 0; /*0x488799*/
  this->q05F = 0; /*0x48879f*/
  this->q180 = 1; /*0x4887a5*/
  this->q604 = 0; /*0x4887ab*/
  this->q174 = &vt_DynamicVectorClass_int; /*0x4887b1*/
  this->q188 = 10; /*0x4887bb*/
  this->q184 = 0; /*0x4887c5*/
  this->q064 = 0; /*0x4887cb*/
  this->q18C = 1; /*0x4887d1*/
  *this = &vt_ColorListClass; /*0x4887d7*/
  return (ColorListClass *)this; /*0x4887df*/
}


// ==== 0x004887F0  ColorListClass::method_4887F0  this=ColorListClass  sig=csp ====
int __thiscall sub_4887F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  void *v4; // eax

  v2 = this->q174; /*0x4887f5*/
  v3 = this + 93; /*0x4887fb*/
  *this = &vt_ColorListClass; /*0x488803*/
  (*(void (__thiscall **)(_DWORD *))(v2 + 12))(this + 93); /*0x488809*/
  this->q190 = 0; /*0x48880e*/
  v4 = (void *)v3[1]; /*0x488814*/
  *v3 = &vt_VectorClass_int; /*0x488819*/
  if ( v4 && *((_BYTE *)v3 + 13) ) /*0x488821*/
  {
    __3_YAXPAX_Z(v4); /*0x488827*/
    v3[1] = 0; /*0x48882f*/
  }
  *((_BYTE *)v3 + 13) = 0; /*0x488834*/
  v3[2] = 0; /*0x488837*/
  return ListClass::Destruct(this); /*0x48883f*/
}


// ==== 0x00488850  ColorListClass::GetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt51(int this, int a2, int a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  v4 = *(_DWORD *)(this + 380); /*0x488854*/
  if ( *(_DWORD *)(this + 388) < v4 /*0x488885*/
    || (*(_BYTE *)(this + 385) || !v4)
    && (v5 = *(_DWORD *)(this + 392), v5 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 372) + 8))(this + 372, v4 + v5, 0) )
  {
    v6 = *(_DWORD *)(this + 388); /*0x48888c*/
    v7 = *(_DWORD *)(this + 376); /*0x48888f*/
    *(_DWORD *)(this + 388) = v6 + 1; /*0x488895*/
    *(_DWORD *)(v7 + 4 * v6) = a3; /*0x48889c*/
  }
  return ListClass::AddItem((_DWORD *)this, a2); /*0x4888ab*/
}


// ==== 0x004888B0  ColorListClass::AddColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt43(int *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (*(int (__thiscall **)(int *, int *))(this->q034 + 16))(this + 13, &a2); /*0x4888be*/
  if ( result != -1 ) /*0x4888c4*/
  {
    v4 = this->q184; /*0x4888c6*/
    if ( result < v4 ) /*0x4888ce*/
    {
      v5 = v4 - 1; /*0x4888d0*/
      for ( this->q184 = v5; /*0x4888d9*/
            result < this->q184;
            *(_DWORD *)(this->q178 + 4 * result - 4) = *(_DWORD *)(this->q178 + 4 * result) )
      {
        ++result; /*0x4888e1*/
      }
    }
    return ListClass::Destru_vt43(this, a2); /*0x4888fa*/
  }
  return result; /*0x4888ff*/
}


// ==== 0x00488910  ColorListClass::GetCount  this=ColorListClass  sig=csp ====
void __thiscall ColorListClass::_vt42(unsigned int *this, signed int a2)
{
  signed int v2; // eax
  unsigned int v3; // edx
  signed int v4; // eax

  if ( a2 != -1 ) /*0x488918*/
  {
    v2 = this->q184; /*0x48891a*/
    if ( a2 < v2 ) /*0x488922*/
    {
      v3 = v2 - 1; /*0x488924*/
      v4 = a2; /*0x488927*/
      for ( this->q184 = v3; /*0x488931*/
            v4 < (int)this->q184;
            *(_DWORD *)(this->q178 + 4 * v4 - 4) = *(_DWORD *)(this->q178 + 4 * v4) )
      {
        ++v4; /*0x48893a*/
      }
    }
    ListClass::RemoveItem(this, a2); /*0x48894e*/
  }
}


// ==== 0x00488960  ColorListClass::SetIndex  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt52(_DWORD *this, int a2, int a3)
{
  this->q18C = a2; /*0x488968*/
  this->q190 = a3; /*0x48896e*/
  return a2; /*0x488974*/
}


// ==== 0x00488980  ColorListClass::DrawColorRect  this=ColorListClass  sig=csp ====
_DWORD *__thiscall ColorListClass::DrawColorRect(int *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  int v8; // eax
  _DWORD *result; // eax
  int v10; // ecx
  int v11; // ecx
  int *v12; // ebx
  int v13; // eax
  int v14; // eax
  int *v15; // edi
  int v16; // eax
  int *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // edi
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  bool v29; // zf
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // edi
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // [esp-14h] [ebp-124h]
  int v48; // [esp-14h] [ebp-124h]
  int v49; // [esp-14h] [ebp-124h]
  int v50; // [esp-14h] [ebp-124h]
  int v51; // [esp-10h] [ebp-120h]
  int v52; // [esp-10h] [ebp-120h]
  int v53; // [esp-10h] [ebp-120h]
  int v54; // [esp-Ch] [ebp-11Ch]
  int v55; // [esp-Ch] [ebp-11Ch]
  int v56; // [esp-Ch] [ebp-11Ch]
  int v57; // [esp-Ch] [ebp-11Ch]
  int v58; // [esp-8h] [ebp-118h]
  int v59; // [esp-8h] [ebp-118h]
  int v60; // [esp-8h] [ebp-118h]
  int v61; // [esp-4h] [ebp-114h]
  int v62; // [esp-4h] [ebp-114h]
  int v63; // [esp-4h] [ebp-114h]
  int v64; // [esp-4h] [ebp-114h]
  int v65; // [esp+10h] [ebp-100h] BYREF
  int v66; // [esp+14h] [ebp-FCh]
  int v67; // [esp+18h] [ebp-F8h] BYREF
  _DWORD v68[2]; // [esp+1Ch] [ebp-F4h] BYREF
  int v69; // [esp+24h] [ebp-ECh] BYREF
  _DWORD v70[3]; // [esp+28h] [ebp-E8h] BYREF
  int v71; // [esp+34h] [ebp-DCh] BYREF
  _DWORD v72[2]; // [esp+38h] [ebp-D8h] BYREF
  _DWORD v73[4]; // [esp+40h] [ebp-D0h] BYREF
  _DWORD v74[4]; // [esp+50h] [ebp-C0h] BYREF
  _DWORD v75[4]; // [esp+60h] [ebp-B0h] BYREF
  _DWORD v76[4]; // [esp+70h] [ebp-A0h] BYREF
  int v77; // [esp+80h] [ebp-90h] BYREF
  int v78; // [esp+88h] [ebp-88h] BYREF
  int v79; // [esp+90h] [ebp-80h] BYREF
  int v80; // [esp+98h] [ebp-78h] BYREF
  int v81; // [esp+A0h] [ebp-70h] BYREF
  int v82; // [esp+A8h] [ebp-68h] BYREF
  _BYTE v83[20]; // [esp+B0h] [ebp-60h] BYREF
  _BYTE v84[12]; // [esp+C4h] [ebp-4Ch] BYREF
  _BYTE v85[20]; // [esp+D0h] [ebp-40h] BYREF
  _BYTE v86[12]; // [esp+E4h] [ebp-2Ch] BYREF
  _BYTE v87[20]; // [esp+F0h] [ebp-20h] BYREF
  _BYTE v88[12]; // [esp+104h] [ebp-Ch] BYREF

  if ( a6 ) /*0x488992*/
  {
    v10 = this->q064; /*0x488a1b*/
    if ( !v10 ) /*0x488a2a*/
      v10 = a2; /*0x488a2c*/
    result = (_DWORD *)this->q18C; /*0x488a2e*/
    switch ( (unsigned int)result ) /*0x488a3d*/
    {
      case 0u: /*0x488a3d*/
        v11 = this->q00C; /*0x488a52*/
        v65 = a3; /*0x488a55*/
        v66 = a4; /*0x488a60*/
        v62 = v11; /*0x488a67*/
        v55 = this->q02C; /*0x488a72*/
        v12 = (int *)(4 * a2 + this->q038); /*0x488a80*/
        v48 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(this->q178 + 4 * a2)); /*0x488a89*/
        v13 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v83); /*0x488a9b*/
        result = FillRectangle(&v82, *v12, MEMORY[0x887314], v13, (int)&v65, v48, 0, v55, a5, v62); /*0x488aae*/
        break; /*0x488abd*/
      case 1u: /*0x488a3d*/
        v14 = this->q02C; /*0x488ac0*/
        if ( (v14 & 6) != 0 ) /*0x488acc*/
        {
          v72[0] = a3; /*0x488ace*/
          v72[1] = a4; /*0x488ad9*/
          BYTE1(v14) |= 0x20u; /*0x488ae0*/
          v15 = (int *)(this->q038 + 4 * a2); /*0x488ae3*/
          v63 = this->q00C; /*0x488ae9*/
          v56 = v14; /*0x488af2*/
          v49 = *((_DWORD *)MEMORY[0xB054D4] + v10); /*0x488b01*/
          v16 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v85); /*0x488b13*/
          result = FillRectangle(&v81, *v15, MEMORY[0x887314], v16, (int)v72, v49, 0, v56, a5, v63); /*0x488b26*/
        }
        else
        {
          v70[0] = a3; /*0x488b38*/
          v70[1] = a4; /*0x488b43*/
          v17 = (int *)(this->q038 + 4 * a2); /*0x488b4a*/
          v64 = this->q00C; /*0x488b50*/
          v57 = v14; /*0x488b59*/
          v50 = *((_DWORD *)MEMORY[0xB054D4] + v10); /*0x488b68*/
          v18 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v87); /*0x488b7a*/
          result = FillRectangle(&v78, *v17, MEMORY[0x887314], v18, (int)v70, v50, 0, v57, a5, v64); /*0x488b8d*/
        }
        break; /*0x488b35*/
      case 2u: /*0x488a3d*/
        v19 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v10) + 788); /*0x488ba8*/
        v20 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x488bb9*/
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x488bbf*/
          v21 = *(unsigned __int8 *)(v20 + v19); /*0x488bc3*/
        else
          v21 = *(unsigned __int16 *)(v20 + 2 * v19); /*0x488bca*/
        v22 = this->q04C; /*0x488be8*/
        v74[2] = a3 + a5 - 2; /*0x488beb*/
        v74[0] = a3; /*0x488bef*/
        v74[1] = a4; /*0x488bfd*/
        v74[3] = v22 + a4 - 2; /*0x488c01*/
        (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 88))(MEMORY[0x887314], v74, v21); /*0x488c0c*/
        v23 = this->q02C; /*0x488c1a*/
        v24 = this->q038; /*0x488c24*/
        v25 = this->q178; /*0x488c28*/
        v71 = a3; /*0x488c2e*/
        v72[0] = a4; /*0x488c32*/
        v58 = v23; /*0x488c3b*/
        v51 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v25 + 4 * a2)); /*0x488c51*/
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314]); /*0x488c5d*/
        result = FillRectangle( /*0x488c71*/
                   &v80,
                   *(_DWORD *)(4 * a2 + v24),
                   MEMORY[0x887314],
                   v26,
                   (int)v84,
                   (int)&v71,
                   v51,
                   0,
                   v58,
                   a6);
        break; /*0x488c80*/
      case 3u: /*0x488a3d*/
        v27 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + v10) + 788); /*0x488c91*/
        v28 = *(_DWORD *)(MEMORY[0x87F6C4] + 4); /*0x488c9c*/
        if ( (*(_BYTE *)(this + 11) & 6) != 0 ) /*0x488c9f*/
        {
          v29 = v28 == 1; /*0x488ca5*/
          v30 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x488ca8*/
          if ( v29 ) /*0x488cae*/
            v31 = *(unsigned __int8 *)(v30 + v27); /*0x488cb2*/
          else
            v31 = *(unsigned __int16 *)(v30 + 2 * v27); /*0x488cb9*/
          v32 = this->q04C; /*0x488cd2*/
          v75[2] = a5; /*0x488cd5*/
          v75[0] = a3; /*0x488ce0*/
          v75[1] = a4; /*0x488ce4*/
          v75[3] = v32; /*0x488ce8*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v75, v31); /*0x488cf3*/
          v33 = this->q02C; /*0x488d01*/
          v34 = this->q038; /*0x488d0b*/
          v35 = this->q178; /*0x488d0f*/
          BYTE1(v33) |= 0x20u; /*0x488d15*/
          v69 = a3; /*0x488d18*/
          v70[0] = a4; /*0x488d1c*/
          v59 = v33; /*0x488d25*/
          v52 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v35 + 4 * a2)); /*0x488d3b*/
          v36 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314]); /*0x488d47*/
          result = FillRectangle( /*0x488d5b*/
                     &v77,
                     *(_DWORD *)(4 * a2 + v34),
                     MEMORY[0x887314],
                     v36,
                     (int)v86,
                     (int)&v69,
                     v52,
                     0,
                     v59,
                     a6);
        }
        else
        {
          v29 = v28 == 1; /*0x488d6d*/
          v37 = *(_DWORD *)(MEMORY[0x87F6C4] + 372); /*0x488d70*/
          if ( v29 ) /*0x488d76*/
            v38 = *(unsigned __int8 *)(v37 + v27); /*0x488d7a*/
          else
            v38 = *(unsigned __int16 *)(v37 + 2 * v27); /*0x488d81*/
          v39 = this->q04C - 1; /*0x488d9e*/
          v76[2] = a5 - 1; /*0x488d9f*/
          v76[0] = a3; /*0x488daa*/
          v76[1] = a4; /*0x488dae*/
          v76[3] = v39; /*0x488db2*/
          (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))(MEMORY[0x887314], v76, v38); /*0x488dc0*/
          v40 = this->q02C; /*0x488dce*/
          v41 = this->q038; /*0x488dd8*/
          v42 = this->q178; /*0x488ddc*/
          v68[0] = a3; /*0x488de2*/
          v68[1] = a4; /*0x488de6*/
          v60 = v40; /*0x488def*/
          v53 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(v42 + 4 * a2)); /*0x488e05*/
          v43 = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314]); /*0x488e11*/
          result = FillRectangle( /*0x488e25*/
                     &v79,
                     *(_DWORD *)(4 * a2 + v41),
                     MEMORY[0x887314],
                     v43,
                     (int)v88,
                     (int)v68,
                     v53,
                     0,
                     v60,
                     a6);
        }
        break; /*0x488d6a*/
      case 4u: /*0x488a3d*/
        v44 = *(_DWORD *)(*((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(this->q178 + 4 * a2)) + 788); /*0x488e4e*/
        if ( *(_DWORD *)(MEMORY[0x87F6C4] + 4) == 1 ) /*0x488e5a*/
          v45 = *(unsigned __int8 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + v44); /*0x488e67*/
        else
          v45 = *(unsigned __int16 *)(*(_DWORD *)(MEMORY[0x87F6C4] + 372) + 2 * v44); /*0x488e73*/
        v73[0] = a3; /*0x488e85*/
        v73[1] = a4; /*0x488e90*/
        v46 = this->q04C; /*0x488e94*/
        v73[2] = a5; /*0x488e97*/
        v73[3] = v46; /*0x488ea2*/
        result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)MEMORY[0x887314] + 20))( /*0x488ead*/
                             MEMORY[0x887314],
                             v73,
                             v45);
        break; /*0x488ead*/
      default:
        return result;
    }
  }
  else
  {
    v7 = this->q038; /*0x4889ad*/
    v65 = a3; /*0x4889b0*/
    v66 = a4; /*0x4889b4*/
    v61 = this->q00C; /*0x4889c9*/
    v54 = this->q02C; /*0x4889d6*/
    v47 = *((_DWORD *)MEMORY[0xB054D4] + *(_DWORD *)(this->q178 + 4 * a2)); /*0x4889ef*/
    v8 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)MEMORY[0x887314] + 120))(MEMORY[0x887314], v73); /*0x4889f8*/
    return FillRectangle(&v67, *(_DWORD *)(4 * a2 + v7), MEMORY[0x887314], v8, (int)&v65, v47, 0, v54, a5, v61); /*0x488a09*/
  }
  return result; /*0x488a0e*/
}


// ==== 0x00488EE0  ColorListClass::GetColor  this=ColorListClass  sig=csp ====
int __thiscall ColorListClass::_vt34(void *this, int a2)
{
  return (*(int (__thiscall **)(void *, int, _DWORD))(this->q0CC)(this, a2, 0); /*0x488eef*/
}


// ==== 0x00488F00  ColorListClass::QueryInterface  this=ColorListClass  sig=csp ====
ColorListClass *__thiscall ColorListClass::QueryInterface(char *Block, char a2)
{
  int v3; // eax
  char *v4; // esi
  void *v5; // eax

  v3 = *((_DWORD *)Block + 93); /*0x488f05*/
  v4 = Block + 372; /*0x488f0b*/
  *(_DWORD *)Block = &vt_ColorListClass; /*0x488f13*/
  (*(void (__thiscall **)(char *))(v3 + 12))(Block + 372); /*0x488f19*/
  *((_DWORD *)Block + 100) = 0; /*0x488f1e*/
  v5 = (void *)*((_DWORD *)v4 + 1); /*0x488f24*/
  *(_DWORD *)v4 = &vt_VectorClass_int; /*0x488f29*/
  if ( v5 && v4[13] ) /*0x488f31*/
  {
    __3_YAXPAX_Z(v5); /*0x488f37*/
    *((_DWORD *)v4 + 1) = 0; /*0x488f3f*/
  }
  v4[13] = 0; /*0x488f44*/
  *((_DWORD *)v4 + 2) = 0; /*0x488f47*/
  ListClass::Destruct(Block); /*0x488f4a*/
  if ( (a2 & 1) != 0 ) /*0x488f54*/
    __3_YAXPAX_Z(Block); /*0x488f57*/
  return (ColorListClass *)Block; /*0x488f61*/
}


// ==== 0x00488F70  sub_488F70  this=-  sig=ida-proto ====
int sub_488F70()
{
  MEMORY[0x89E800] = 0; /*0x488f72*/
  MEMORY[0x89E804] = 0; /*0x488f77*/
  MEMORY[0x89E808] = 0; /*0x488f7c*/
  MEMORY[0x89E80C] = 0; /*0x488f81*/
  return 0; /*0x488f86*/
}


// ==== 0x00488F90  sub_488F90  this=-  sig=ida-proto ====
void sub_488F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x488f9c*/
  MEMORY[0x89E818] = Math::Sqrt(v0 + v0); /*0x488fae*/
}


// ==== 0x00488FC0  sub_488FC0  this=-  sig=ida-proto ====
void sub_488FC0()
{
  MEMORY[0x89E868] = MEMORY[0x89E818] / 60.0; /*0x488fcc*/
}


// ==== 0x00488FE0  sub_488FE0  this=-  sig=ida-proto ====
void sub_488FE0()
{
  MEMORY[0x89E850] = 1.0 / MEMORY[0x89E868]; /*0x488fec*/
}


// ==== 0x00489000  sub_489000  this=-  sig=ida-proto ====
void sub_489000()
{
  MEMORY[0x89E848] = 0.0174532925199433 * 45.0; /*0x48900c*/
}


// ==== 0x00489020  sub_489020  this=-  sig=ida-proto ====
void sub_489020()
{
  MEMORY[0x89E820] = 0.0174532925199433 * 60.0; /*0x48902c*/
}


// ==== 0x00489040  sub_489040  this=-  sig=ida-proto ====
void sub_489040()
{
  MEMORY[0x89E7F8] = 0.0174532925199433 * 90.0; /*0x48904c*/
}


// ==== 0x00489060  sub_489060  this=-  sig=ida-proto ====
__int64 sub_489060()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E7F8] - MEMORY[0x89E820]); /*0x489072*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E818] * 0.5); /*0x489086*/
  MEMORY[0x89E870] = result; /*0x48908b*/
  return result; /*0x489090*/
}


// ==== 0x004890A0  sub_4890A0  this=-  sig=ida-proto ====
void sub_4890A0()
{
  MEMORY[0x89E828] = Math::ArcTan((double)MEMORY[0x89E870] * 0.00390625); /*0x4890b7*/
}


// ==== 0x004890D0  sub_4890D0  this=-  sig=ida-proto ====
void sub_4890D0()
{
  MEMORY[0x89E840] = Math::ArcTan((double)(2 * MEMORY[0x89E870]) / MEMORY[0x89E818]); /*0x4890f2*/
}


// ==== 0x00489100  sub_489100  this=-  sig=ida-proto ====
__int64 sub_489100()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E870]) + 0.5); /*0x48911b*/
  MEMORY[0x89E864] = result; /*0x489120*/
  return result; /*0x489126*/
}


// ==== 0x00489130  sub_489130  this=-  sig=ida-proto ====
int sub_489130()
{
  MEMORY[0x89E810] = 0; /*0x489132*/
  MEMORY[0x89E812] = 0; /*0x489138*/
  return 0; /*0x48913e*/
}


// ==== 0x00489140  sub_489140  this=-  sig=ida-proto ====
int sub_489140()
{
  MEMORY[0x89E830] = 0; /*0x489142*/
  MEMORY[0x89E834] = 0; /*0x489147*/
  MEMORY[0x89E838] = 0; /*0x48914c*/
  return 0; /*0x489151*/
}


// ==== 0x00489160  sub_489160  this=-  sig=ida-proto ====
int sub_489160()
{
  MEMORY[0x89E860] = 0; /*0x489165*/
  MEMORY[0x89E858] = 128; /*0x48916f*/
  MEMORY[0x89E85C] = 128; /*0x489174*/
  return 128; /*0x489179*/
}


// ==== 0x00489180  ComputeTechnoClassDamageFalloff  this=-  sig=csp ====
int __fastcall Network_SendTimestamp(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  double v7; // st7
  int v8; // ecx
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]

  v4 = a1; /*0x489184*/
  if ( !a1 || (*(_BYTE *)MEMORY[0xA8B230] & 0x20) != 0 || !a2 ) /*0x4891a5*/
    return 0; /*0x489263*/
  if ( a1 < 0 )
    return a4 >= 8 ? 0 : a1;
  v7 = (double)a1; /*0x4891c6*/
  v9 = v7; /*0x4891ca*/
  v10 = v7 * *(float *)(a2 + 300); /*0x4891d4*/
  v8 = Math::RoundToInt(*(float *)(a2 + 292) * 256.0); /*0x4891f1*/
  if ( v10 != v9 && v8 ) /*0x489200*/
    v4 = Math::RoundToInt((v9 - v10) * (double)(v8 - a4) / (double)v8 + v10); /*0x489225*/
  result = Math::RoundToInt((double)(v4 <= 0 ? 0 : v4) * *(double *)(a2 + 8 * a3 + 160));
  if ( result >= *((_DWORD *)MEMORY[0x8871E0] + 1458) ) /*0x489257*/
    return *((_DWORD *)MEMORY[0x8871E0] + 1458); /*0x48925a*/
  return result; /*0x4891b8*/
}


// ==== 0x00489270  ObjectClass::CellChainReact  this=ObjectClass  sig=csp ====
void CellChainReact()
{
  ; /*0x489270*/
}


// ==== 0x00489280  PlaySoundEffectAt  this=AbstractClass  sig=csp ====
int __fastcall PlaySoundEffectAt(TechnoClass *aP0, IUnknown *aP1, _DWORD *a2, ObjectClass *aP3, char a5, int aP6)
{
  ObjectClass *v8; // esi
  VectorClass *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  IUnknown *v15; // eax
  int v16; // eax
  IUnknown *v17; // eax
  int v18; // eax
  IUnknown *v19; // eax
  int v20; // eax
  int v21; // ecx
  __int16 ax29; // ax
  TechnoClass *v22; // ebx
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  _DWORD *v30; // ebx
  int *v31; // ebx
  _DWORD *eax61a; // eax
  IUnknown *v32; // eax
  BuildingTypeClass *v34; // edx
  double v35; // st7
  int v36; // eax
  _DWORD *eax63; // eax
  IUnknown *v37; // eax
  double st7_63; // st7
  BuildingTypeClass *v39; // edx
  double v41; // st6
  double v42; // st5
  _DWORD *eax64; // eax
  IUnknown *v43; // eax
  BuildingTypeClass *v44; // edx
  BuildingTypeClass *v45; // eax
  double v47; // st7
  IUnknown *v48; // eax
  IUnknown *v49; // ecx
  BuildingTypeClass **eax83; // eax
  BuildingTypeClass *v51; // esi
  BuildingTypeClass *v50; // edi
  int v53; // edx
  int v54; // esi
  int v55; // esi
  double v57; // st7
  ObjectClass *v58; // ebx
  int v59; // esi
  IUnknown *ebx112; // ebx
  ObjectClass *v61; // eax
  ObjectClass *v60; // edi
  int *v63; // esi
  BuildingTypeClass *v62; // ecx
  int v65; // edx
  double v66; // st7
  float v67; // edx
  int v68; // edi
  int v69; // ebx
  int v70; // eax
  BuildingTypeClass *ecx123; // ecx
  int eax123a; // eax
  IUnknown *v71; // edi
  ParticleSystemClass *v72; // eax
  int v75; // esi
  _DWORD *eax137; // eax
  int eax138; // eax
  AbstractClass *v76; // ebx
  AbstractClass *v77; // edx
  int v80; // eax
  int Z; // ecx
  int v82; // eax
  int v83; // esi
  AbstractClass *v84; // eax
  int ecx167; // ecx
  int v86; // eax
  BuildingTypeClass *v85; // ecx
  int v88; // eax
  int v89; // esi
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int eax203; // eax
  void **v95; // eax
  CoordStruct *v94; // esi
  int v97; // edi
  void *v98; // eax
  int v99; // eax
  ParticleSystemClass *v100; // eax
  int v101; // eax
  ParticleSystemClass *v102; // eax
  BOOL v103; // esi
  float aP0a; // [esp+38h] [ebp-E8h]
  float aP0b; // [esp+38h] [ebp-E8h]
  bool v106; // [esp+4Fh] [ebp-D1h]
  bool v107; // [esp+4Fh] [ebp-D1h]
  int v108; // [esp+50h] [ebp-D0h]
  int *v109; // [esp+50h] [ebp-D0h]
  int v110; // [esp+50h] [ebp-D0h]
  int i; // [esp+50h] [ebp-D0h]
  int v112; // [esp+50h] [ebp-D0h]
  _DWORD *v113; // [esp+50h] [ebp-D0h]
  char v114; // [esp+57h] [ebp-C9h]
  int v115; // [esp+58h] [ebp-C8h] BYREF
  bool varC3; // [esp+5Dh] [ebp-C3h]
  char varC2; // [esp+5Eh] [ebp-C2h]
  char v118; // [esp+5Fh] [ebp-C1h]
  VectorClass *aP1a; // [esp+60h] [ebp-C0h]
  TechnoClass *v120; // [esp+64h] [ebp-BCh]
  CoordStruct *aP2; // [esp+68h] [ebp-B8h]
  _DWORD v122[2]; // [esp+6Ch] [ebp-B4h] BYREF
  BuildingTypeClass *v116; // [esp+74h] [ebp-ACh]
  IUnknown *v117; // [esp+78h] [ebp-A8h] BYREF
  void *Block; // [esp+7Ch] [ebp-A4h]
  int v126; // [esp+80h] [ebp-A0h]
  int v127; // [esp+84h] [ebp-9Ch]
  IUnknown *v121; // [esp+88h] [ebp-98h]
  int var94; // [esp+8Ch] [ebp-94h]
  __int64 v130; // [esp+90h] [ebp-90h] BYREF
  float v131; // [esp+98h] [ebp-88h]
  __int64 v132; // [esp+9Ch] [ebp-84h] BYREF
  float v133; // [esp+A4h] [ebp-7Ch]
  int v134; // [esp+A8h] [ebp-78h] BYREF
  int v135; // [esp+ACh] [ebp-74h] BYREF
  IUnknown *v129; // [esp+B0h] [ebp-70h]
  BuildingTypeClass *v137; // [esp+B4h] [ebp-6Ch]
  IUnknown *v138; // [esp+B8h] [ebp-68h] BYREF
  __int64 v139; // [esp+BCh] [ebp-64h]
  BuildingTypeClass *v140; // [esp+C4h] [ebp-5Ch]
  double v141; // [esp+C8h] [ebp-58h] BYREF
  IUnknown *j; // [esp+D4h] [ebp-4Ch] BYREF
  __int64 v143; // [esp+D8h] [ebp-48h] BYREF
  float v144; // [esp+E0h] [ebp-40h]
  int v145[3]; // [esp+E4h] [ebp-3Ch] BYREF
  char v146[12]; // [esp+F0h] [ebp-30h] BYREF
  int v147[3]; // [esp+FCh] [ebp-24h] BYREF
  int v148[3]; // [esp+108h] [ebp-18h] BYREF
  char v149[12]; // [esp+114h] [ebp-Ch] BYREF

  v120 = (TechnoClass *)aP1;
  aP2 = (CoordStruct *)aP0;
  sub_48B070(&v117, 0, 0);
  v117 = (IUnknown *)&DynamicVectorClass<DamageGroup *>::`vftable';
  var94 = 10;
  v121 = 0;
  if ( !aP1 || (**(_BYTE **)&HouseClass_Player.__pad_5568[8060] & 0x20) != 0 || (v8 = aP3) == 0 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block && BYTE1(v127) )
      __3_YAXPAX_Z(Block);
    return 1;
  }
  v134 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus * 256.0);
  v106 = aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4012);
  LOWORD(v108) = *(_DWORD *)aP0->__pad_0 / 256;
  HIWORD(v108) = *(_DWORD *)&aP0->__pad_0[4] / 256;
  v115 = v108;
  v9 = (VectorClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v115);
  v10 = *(float *)&aP3[1].spawnStatus;
  aP1a = v9;
  varC2 = 0;
  v118 = 0;
  v114 = 0;
  varC3 = v10 <= 0.5;
  LODWORD(v143) = ((__int16)v115 << 8) + 128;
  HIDWORD(v143) = (SHIWORD(v115) << 8) + 128;
  v144 = 0.0;
  if ( Cell::GetGroundHeight((IUnknown *)&v143) < *(_DWORD *)&aP0->__pad_0[8] )
  {
    v11 = Math::RoundToInt(*(float *)&aP3[1].spawnStatus);
    AircraftTrackerClass::FillCurrentVector((int)&stru_87C374.__pad_579C[23928], aP1a, v11);
    v12 = VectorClass::RemoveObjectById((int)&stru_87C374.__pad_579C[23928]);
    if ( v12 )
    {
      do
      {
        if ( *(_BYTE *)(v12 + 144) )
        {
          if ( *(_BYTE *)(v12 + 116) )
          {
            if ( *(int *)(v12 + 108) > 0 )
            {
              v13 = *(_DWORD *)(v12 + 156);
              v14 = *(_DWORD *)(v12 + 160);
              v140 = *(BuildingTypeClass **)(v12 + 164);
              v15 = Coord::Subtract(
                      &v135,
                      (IUnknown *)(*(_DWORD *)aP0->__pad_0 - v13),
                      (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - v14),
                      (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - (_DWORD)v140));
              v143 = *(_QWORD *)&v15->field_0;
              v144 = *(float *)&v15->field_8;
              Coord::Length((int *)&v143);
              if ( v16 <= v134 )
              {
                if ( varC3
                  && v16 < 85
                  && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 352))(v12)
                  && !*(_DWORD *)(v12 + 452) )
                {
                  v114 = 1;
                }
                v109 = (int *)__2_YAPAXI_Z(8u);
                *v109 = v12;
                v17 = Coord::Subtract(
                        &v130,
                        (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *(_DWORD *)(v12 + 156)),
                        (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - *(_DWORD *)(v12 + 160)),
                        (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - *(_DWORD *)(v12 + 164)));
                v132 = *(_QWORD *)&v17->field_0;
                v133 = *(float *)&v17->field_8;
                Coord::Length((int *)&v132);
                v109[1] = v18;
                if ( (int)v121 < v126
                  || (BYTE1(v127) || !v126)
                  && var94 > 0
                  && ((unsigned __int8 (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, var94 + v126, 0) )
                {
                  v19 = v121;
                  v121 = (IUnknown *)((char *)v121 + 1);
                  *((_DWORD *)Block + (_DWORD)v19) = v109;
                }
              }
            }
          }
        }
        v12 = VectorClass::RemoveObjectById((int)&stru_87C374.__pad_579C[23928]);
      }
      while ( v12 );
      v8 = aP3;
    }
  }
  if ( ((int)aP1a[20].vtable0 & 0x100) != 0
    && *(_DWORD *)&aP0->__pad_0[8] > *(_DWORD *)&stru_89E138.__pad_71C[16] / 2 + Cell::GetGroundHeight((IUnknown *)aP0) )
  {
    varC2 = 1;
  }
  v20 = Math::RoundToInt(*(float *)&v8[1].spawnStatus + 0.99);
  v21 = dword_7ED3D0[v20];
  v122[0] = v20;
  v110 = 0;
  if ( v21 > 0 )
  {
    while ( 1 )
    {
      ax29 = HIWORD(v115) + HIWORD(dword_ABD490[v110]);
      LOWORD(v138) = v115 + LOWORD(dword_ABD490[v110]);
      HIWORD(v138) = ax29;
      j = v138;
      v22 = (TechnoClass *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&j);
      aP1a = (VectorClass *)v22;
      v24 = v22->ambientSoundController[2];
      if ( v24 != -1 )
      {
        v25 = *(_DWORD *)(HouseClass_Player.field_38 + 4 * v24);
        LODWORD(v141) = v25;
        if ( *(_BYTE *)(v25 + 689) && (!*(_BYTE *)(v25 + 681) || LOBYTE(v8[1].location[0])) && a5 )
        {
          CellClass::ReduceTiberium((int)v22, (InfantryTypeClass *)((int)v120 / 10));
          v25 = LODWORD(v141);
        }
        if ( *(_BYTE *)(v25 + 680) )
        {
          if ( v8[1].isVisible )
          {
            BuildingClass::SellEffects((int)v22, (TechnoClass *)0xFFFFFFFF);
          }
          else if ( v8[1].isInLogic || v8[1].alignmentPadding99[1] && *(_DWORD *)(v25 + 156) == 6 )
          {
            BuildingClass::SellEffects((int)v22, v120);
          }
        }
        if ( v22->ambientSoundController[2] == -1 )
          AbstractClass::ClearTargetToMeClearManagerTarget((int)v22);
      }
      v26 = varC2 ? v22->flashing[1] : v22->flashing[0];
      if ( v26 )
        break;
LABEL_81:
      if ( ++v110 >= dword_7ED3D0[v122[0]] )
        goto LABEL_82;
      v8 = aP3;
    }
    while ( (_DWORD *)v26 == a2 && !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a2 + 132))(a2) + 3232) && !v106
         || !*(_BYTE *)(v26 + 144) )
    {
LABEL_80:
      v26 = *(_DWORD *)(v26 + 48);
      if ( !v26 )
        goto LABEL_81;
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 1
      && (**(_DWORD **)&HouseClass_Player.__pad_5568[8060] & 0x800) != 0 )
    {
      v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 136))(v26);
      v28 = 0;
      v29 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2892);
      if ( v29 > 0 )
      {
        v30 = *(_DWORD **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 2880);
        while ( *v30 != v27 )
        {
          ++v28;
          ++v30;
          if ( v28 >= v29 )
            goto LABEL_58;
        }
        goto LABEL_80;
      }
    }
LABEL_58:
    v31 = (int *)__2_YAPAXI_Z(8u);
    *v31 = v26;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 44))(v26) == 6 )
    {
      if ( !v110 )
      {
        if ( *(_DWORD *)&aP0->__pad_0[8]
           - *(_DWORD *)((*((int (__thiscall **)(VectorClass *, __int64 *))aP1a->vtable0 + 18))(aP1a, &v143) + 8) <= 2 * *(_DWORD *)&stru_89E138.__pad_71C[28] )
        {
          v31[1] = 0;
          goto LABEL_67;
        }
        eax61a = (_DWORD *)(*((int (__thiscall **)(VectorClass *, __int64 *))aP1a->vtable0 + 18))(aP1a, &v130);
        v32 = Coord::Subtract(
                v148,
                (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax61a),
                (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax61a[1]),
                (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax61a[2]));
        LODWORD(v132) = v32->field_0;
        v34 = (BuildingTypeClass *)v32->field_8;
        HIDWORD(v132) = v32->field_4;
        v133 = *(float *)&v34;
        v35 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(int)v34 * (double)(int)v34
                                          + (double)SHIDWORD(v132) * (double)SHIDWORD(v132)
                                          + (double)(int)v132 * (double)(int)v132));
        v36 = Math::RoundToInt(v35) - 2 * *(_DWORD *)&stru_89E138.__pad_71C[28];
LABEL_66:
        v31[1] = v36;
LABEL_67:
        if ( varC3 && !v110 )
        {
          HIBYTE(v116) = *(_BYTE *)(v26 + 20) & 1;
          if ( HIBYTE(v116) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 352))(v26)
              && !*(_DWORD *)(v26 + 452)
              && v31[1] < 85 )
            {
              v114 = 1;
            }
          }
        }
        if ( (int)v121 < v126
          || (BYTE1(v127) || !v126)
          && var94 > 0
          && ((unsigned __int8 (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, var94 + v126, 0) )
        {
          v48 = v121;
          v121 = (IUnknown *)((char *)v121 + 1);
          *((_DWORD *)Block + (_DWORD)v48) = v31;
        }
        goto LABEL_80;
      }
      eax63 = (_DWORD *)(*((int (__thiscall **)(VectorClass *, char *))aP1a->vtable0 + 18))(aP1a, v149);
      v37 = Coord::Subtract(
              v145,
              (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax63),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax63[1]),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax63[2]));
      LODWORD(v139) = v37->field_0;
      st7_63 = (double)(int)v139;
      v39 = (BuildingTypeClass *)v37->field_8;
      HIDWORD(v139) = v37->field_4;
      v41 = (double)SHIDWORD(v139);
      v140 = v39;
      v42 = (double)(int)v39;
    }
    else
    {
      eax64 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v26 + 164))(v26, v146);
      v43 = Coord::Subtract(
              v147,
              (IUnknown *)(*(_DWORD *)aP0->__pad_0 - *eax64),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[4] - eax64[1]),
              (IUnknown *)(*(_DWORD *)&aP0->__pad_0[8] - eax64[2]));
      v135 = v43->field_0;
      v44 = (BuildingTypeClass *)v43->field_4;
      st7_63 = (double)v135;
      v45 = (BuildingTypeClass *)v43->field_8;
      v129 = (IUnknown *)v44;
      v41 = (double)(int)v44;
      v137 = v45;
      v42 = (double)(int)v45;
    }
    v47 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(v42 * v42 + v41 * v41 + st7_63 * st7_63));
    v36 = Math::RoundToInt(v47);
    goto LABEL_66;
  }
LABEL_82:
  v49 = v121;
  for ( i = 0; i < (int)v121; ++i )
  {
    eax83 = (BuildingTypeClass **)*((_DWORD *)Block + i);
    v51 = *eax83;
    v50 = eax83[1];
    if ( (*eax83)->Name[44]
      && ((*(int (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 44))(v51) != 6
       || !*(_BYTE *)(v51->DieSound[4] + 5889))
      && (!v114
       || v51
       && (HIBYTE(v116) = v51->abstractFlags & 1) != 0
       && (*(unsigned __int8 (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 352))(v51)) )
    {
      if ( (*(int (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 44))(v51) == 2
        && (*(unsigned __int8 (__thiscall **)(BuildingTypeClass *))(v51->vtable0 + 84))(v51) )
      {
        v50 = (BuildingTypeClass *)((int)v50 / 2);
      }
      if ( *(int *)&v51->Name[8] > 0 && v51->Name[16] && !v51->Name[29] && (int)v50 <= v134 )
      {
        v53 = v51->vtable0;
        v122[0] = v120;
        (*(void (__thiscall **)(BuildingTypeClass *, _DWORD *, BuildingTypeClass *, ObjectClass *, _DWORD *, _DWORD, _DWORD, int))(v53 + 364))(
          v51,
          v122,
          v50,
          aP3,
          a2,
          0,
          0,
          aP6);
        v118 = 1;
      }
    }
    v49 = v121;
  }
  v54 = 0;
  if ( (int)v49 > 0 )
  {
    do
      __3_YAXPAX_Z(*((void **)Block + v54++));
    while ( v54 < (int)v121 );
  }
  v55 = v126;
  ((void (__thiscall *)(IUnknown **))v117->field_C)(&v117);
  ((void (__thiscall *)(IUnknown **, int, _DWORD))v117->field_8)(&v117, v55, 0);
  if ( v114 )
  {
    v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
    if ( Block )
    {
      if ( BYTE1(v127) )
        __3_YAXPAX_Z(Block);
    }
    return 2;
  }
  v57 = (double)(int)v120 * 0.01;
  if ( v57 >= 4.0 )
    v141 = 4.0;
  else
    v141 = v57;
  v58 = aP3;
  if ( BYTE2(aP3[1].location[1]) )
  {
    if ( v141 > 0.3 )
    {
      v59 = (__int16)v115 - 3;
      v112 = v59;
      if ( v59 <= (__int16)v115 + 3 )
      {
        do
        {
          ebx112 = (IUnknown *)(SHIWORD(v115) - 3);
          for ( j = ebx112; (int)ebx112 <= SHIWORD(v115) + 3; j = ebx112 )
          {
            if ( varC2 )
            {
              LOWORD(v134) = v59;
              HIWORD(v134) = (_WORD)ebx112;
              v61 = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v134)
                                   + 58);
            }
            else
            {
              LOWORD(v138) = v59;
              HIWORD(v138) = (_WORD)ebx112;
              v61 = (ObjectClass *)*((_DWORD *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v138)
                                   + 57);
            }
            v60 = v61;
            aP1a = (VectorClass *)v61;
            if ( v61 )
            {
              do
              {
                v63 = (int *)AbstractClass::IsTechnoType(v60);
                if ( v63 )
                {
                  if ( __PAIR32__((unsigned __int16)ebx112, v112) == v115 && a2 )
                  {
                    v135 = v63[39];
                    v129 = (IUnknown *)v63[40];
                    v137 = (BuildingTypeClass *)v63[41];
                    v62 = (BuildingTypeClass *)a2[40];
                    v122[0] = a2[39] - v135;
                    v65 = a2[41] - (_DWORD)v137;
                    *(float *)&v130 = (float)v122[0];
                    v122[0] = v65;
                    *((float *)&v130 + 1) = (float)((char *)v62 - (char *)v129);
                    v131 = (float)v65;
                    v66 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                                        *(float *)&v130 * *(float *)&v130
                                                      + *((float *)&v130 + 1) * *((float *)&v130 + 1)
                                                      + v131 * v131));
                    if ( v66 == 0.0 )
                    {
                      v67 = v131;
                      v139 = v130;
                    }
                    else
                    {
                      *(float *)&v143 = *(float *)&v130 / v66;
                      *((float *)&v143 + 1) = *((float *)&v130 + 1) / v66;
                      v139 = v143;
                      v144 = v131 / v66;
                      v67 = v144;
                    }
                    v140 = (BuildingTypeClass *)LODWORD(v67);
                    *(float *)&v132 = *(float *)&v139 * 10.0;
                    *((float *)&v132 + 1) = *((float *)&v139 + 1) * 10.0;
                    v130 = v132;
                    v133 = v67 * 10.0;
                    v131 = v133;
                    v68 = Math::RoundToInt(*(float *)&v132);
                    v69 = Math::RoundToInt(*((float *)&v132 + 1));
                    v70 = Math::RoundToInt(v133);
                    v135 += v68;
                    ecx123 = (BuildingTypeClass *)((char *)v137 + v70);
                    eax123a = *v63;
                    v137 = ecx123;
                    aP0a = v141;
                    v129 = (IUnknown *)((char *)v129 + v69);
                    (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD))(eax123a + 984))(v63, &v135, LODWORD(aP0a), 0);
                    ebx112 = j;
                    v60 = (ObjectClass *)aP1a;
                  }
                  else if ( *(float *)&aP3[1].spawnStatus > 0.0 )
                  {
                    aP0b = v141;
                    (*(void (__thiscall **)(int *, CoordStruct *, _DWORD, _DWORD))(*v63 + 984))(
                      v63,
                      aP2,
                      LODWORD(aP0b),
                      0);
                  }
                }
                v60 = (ObjectClass *)v60->nextObject;
                aP1a = (VectorClass *)v60;
              }
              while ( v60 );
              v59 = v112;
            }
            ebx112 = (IUnknown *)((char *)ebx112 + 1);
          }
          v112 = ++v59;
        }
        while ( v59 <= (__int16)v115 + 3 );
        v58 = aP3;
      }
    }
  }
  v107 = v58 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080);
  v71 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)&v115);
  if ( (BYTE1(**(_DWORD **)&HouseClass_Player.__pad_5568[8060]) & 0x80u) != 0 && v58[1].isInLogic )
  {
    v72 = (ParticleSystemClass *)v71->field_140;
    v75 = v71->field_38 - unk_AA0E28 + 1;
    v113 = 0;
    if ( (BYTE1(v72) & 1) != 0
      && ((char)v72 >= 0 ? (v122[0] = *(_DWORD *)(*(_DWORD *)&v71->__pad_28[4] + 36)) : (v122[0] = v71->field_24),
          (eax137 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (__int16 *)v122), (v113 = eax137) != 0)
       && ((eax138 = eax137[17], eax138 == 24) || eax138 == 25)) )
    {
      v76 = (AbstractClass *)g_TerrainSoundTable2;
    }
    else
    {
      v76 = (AbstractClass *)g_TerrainSoundTable2;
      if ( v75 != g_TerrainSoundTable2
        && v75 != g_TerrainSoundTable2 + 1
        && v75 != g_TerrainSoundTable2 + 2
        && v75 != g_TerrainSoundTable2 + 3 )
      {
        v77 = (AbstractClass *)unk_AA1028;
        if ( v75 != unk_AA1028 && v75 != unk_AA1028 + 1 && v75 != unk_AA1028 + 2 && v75 != unk_AA1028 + 3 )
        {
LABEL_166:
          v84 = (AbstractClass *)(v71->field_38 - g_TerrainBridgeIndex + 1);
          if ( v113 && ((ecx167 = v113[17], ecx167 == 237) || ecx167 == 238)
            || v84 == v76
            || v84 == (AbstractClass *)&v76->__pad_0[1]
            || v84 == (AbstractClass *)&v76->__pad_0[2]
            || v84 == (AbstractClass *)&v76->__pad_0[3]
            || v84 == v77
            || v84 == (AbstractClass *)&v77->__pad_0[1]
            || v84 == (AbstractClass *)&v77->__pad_0[2]
            || v84 == (AbstractClass *)&v77->__pad_0[3] )
          {
            if ( (v71->field_140 & 0x100) == 0
              || (v86 = SHIBYTE(v71->field_118),
                  v85 = (BuildingTypeClass *)aP2->Z,
                  (int)v85 <= *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v86 + 1))
              && (int)v85 > *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v86 - 2) )
            {
              if ( aP3[1].isInLogic )
              {
                if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
                  || (v88 = Random::Range(
                              (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                              (IUnknown *)1,
                              *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                      v88 < (int)v120) )
                {
                  v89 = 3;
                  if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                  {
LABEL_189:
                    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
                  }
                  else
                  {
                    while ( v107 && v89 > 0 )
                    {
                      --v89;
                      if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                        goto LABEL_189;
                    }
                  }
                  Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP2, (IUnknown *)v122);
                  ((void (__stdcall *)(int, int, int, int, char))Cell::CreateCrater)(
                    v122[0] - 96,
                    v122[1] - 96,
                    192,
                    192,
                    0);
                }
              }
            }
          }
          v90 = v71->field_44;
          if ( v90 >= 74 && v90 <= 99 )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v91 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                  v91 < (int)v120) )
            {
              if ( CellClass::CheckTilePassable2((IUnknown *)&v115) )
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
            }
          }
          v92 = v71->field_44;
          if ( v92 >= 205 && v92 <= 230 )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v93 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                  v93 < (int)v120) )
            {
              if ( CellClass::CheckTilePassable((IUnknown *)&v115) )
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
            }
          }
          goto LABEL_203;
        }
LABEL_151:
        if ( (v71->field_140 & 0x100) == 0
          || (v80 = SHIBYTE(v71->field_118),
              Z = aP2->Z,
              Z <= *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v80 + 1))
          && Z > *(_DWORD *)&stru_89E138.__pad_71C[16] + *(_DWORD *)&stru_89E138.__pad_71C[28] * (v80 - 2) )
        {
          if ( aP3[1].isInLogic )
          {
            if ( aP3 == *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4080)
              || (v82 = Random::Range(
                          (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                          (IUnknown *)1,
                          *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5952)),
                  v82 < (int)v120) )
            {
              v83 = 3;
              if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
              {
LABEL_163:
                AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
              }
              else
              {
                while ( v107 && v83 > 0 )
                {
                  --v83;
                  if ( CellClass::SetTerrainType(&stru_87C374.__pad_14B0[8132], (IUnknown *)&v115) )
                    goto LABEL_163;
                }
              }
              Coord::To_Screen(*(_DWORD **)&stru_87C374.__pad_579C[22548], aP2, (IUnknown *)&v141);
              ((void (__stdcall *)(int, int, int, int, char))Cell::CreateCrater)(
                LODWORD(v141) - 128,
                HIDWORD(v141) - 128,
                256,
                256,
                0);
            }
            v76 = (AbstractClass *)g_TerrainSoundTable2;
            v77 = (AbstractClass *)unk_AA1028;
          }
        }
        goto LABEL_166;
      }
    }
    v77 = (AbstractClass *)unk_AA1028;
    goto LABEL_151;
  }
LABEL_203:
  eax203 = v71->field_44;
  if ( eax203 == -1 || !*(_BYTE *)(*(_DWORD *)(HouseClass_Player.field_38 + 4 * eax203) + 688) )
  {
    v94 = aP2;
  }
  else
  {
    BuildingClass::CreatePlacementCrater((char *)v71);
    v71->field_44 = -1;
    House::AnnounceUpgrade((int)v71, (IUnknown *)0xFFFFFFFF);
    Cell::SetRadar((int *)&stru_87C374.__pad_14B0[8132], (IUnknown *)&v71->field_24);
    Radar::Update((IUnknown *)&stru_87C374.__pad_14B0[8132], (IUnknown *)&v71->field_24);
    AbstractClass::ClearTargetToMeClearManagerTarget((int)v71);
    v95 = (void **)__2_YAPAXI_Z(0x1C8u);
    v94 = aP2;
    if ( v95 )
      AnimClass::ctor(
        v95,
        *(CoordStruct **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 84),
        aP2,
        0,
        (CoordStruct *)1,
        (void *)0x600,
        0,
        0);
    PlaySoundEffectAt(
      (TechnoClass *)v94,
      *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 12),
      0,
      *(ObjectClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 4008),
      1,
      aP6);
    v97 = 0;
    if ( *(int *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 104) > 0 )
    {
      while ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) >= 15 )
      {
        if ( ++v97 >= *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 104) )
          goto LABEL_213;
      }
      v98 = (void *)__2_YAPAXI_Z(0x148u);
      if ( v98 )
        DamageAnimClass::Constructor(
          v98,
          *(VoxelAnimClass **)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 92) + 4 * v97),
          (IUnknown *)v94,
          0);
    }
LABEL_213:
    if ( Random::Range((_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536), 0, (IUnknown *)0x63) < 25 )
    {
      v99 = __2_YAPAXI_Z(0x100u);
      if ( v99 )
      {
        v100 = ParticleSystemClass::Constructor(
                 v99,
                 *(IUnknown **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 116),
                 (IUnknown *)v94,
                 0,
                 0,
                 (IUnknown *)&stru_89E138.__pad_690[104],
                 0);
        ParticleSystemClass::CreateParticle(v100, (IUnknown *)v94, (IUnknown *)v94);
      }
      else
      {
        ParticleSystemClass::CreateParticle(0, (IUnknown *)v94, (IUnknown *)v94);
      }
    }
  }
  if ( aP3[1].lastLayer )
  {
    v101 = __2_YAPAXI_Z(0x100u);
    if ( v101 )
      v102 = ParticleSystemClass::Constructor(
               v101,
               (IUnknown *)aP3[1].lastLayer,
               (IUnknown *)v94,
               0,
               0,
               (IUnknown *)&stru_89E138.__pad_690[104],
               (IUnknown *)aP6);
    else
      v102 = 0;
    ParticleSystemClass::CreateParticle(v102, (IUnknown *)v94, (IUnknown *)v94);
  }
  v103 = v118 == 0;
  v117 = (IUnknown *)&vt_VectorClass_DamageGroup;
  if ( Block && BYTE1(v127) )
    __3_YAXPAX_Z(Block);
  return v103;
}


// ==== 0x0048A4F0  GetWarheadVersusMultiplier  this=Coord  sig=csp ====
int __fastcall GetWarheadVersusMultiplier(CoordStruct *aP0, BuildingTypeClass *aP1, CoordStruct *aP2, BulletClass *aP3)
{
  CoordStruct *v4; // edi
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // eax

  v4 = aP0; /*0x48a4f3*/
  if ( !aP0 || !aP1 ) /*0x48a501*/
    return 0; /*0x48a501*/
  if ( aP2 == (CoordStruct *)2 /*0x48a54f*/
    && aP1->__pad_14D[0]
    && (*((_DWORD *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)aP3) + 80) & 0x100) == 0
    && (int)aP3->field_8 < Cell::GetGroundHeight((IUnknown *)aP3) + 2 * *(_DWORD *)&stru_89E138.__pad_71C[28] )
  {
    v6 = *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3024); /*0x48a557*/
    if ( v6 ) /*0x48a55f*/
    {
      v7 = 35 * v6 - 1; /*0x48a56e*/
      if ( (int)v4 < v7 ) /*0x48a574*/
        v7 = (int)v4; /*0x48a576*/
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 3012) + 4 * (v7 / 35)); /*0x48a597*/
    }
    return 0; /*0x48a61a*/
  }
  if ( aP1 == *(BuildingTypeClass **)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 6068) ) /*0x48a5a5*/
    return *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 756); /*0x48a5b0*/
  v9 = aP1->ChargerBarrels[4]; /*0x48a5b3*/
  if ( !v9 ) /*0x48a5bb*/
    return 0; /*0x48a5bb*/
  if ( aP1->__pad_14D[7] ) /*0x48a5bd*/
    return *(_DWORD *)(aP1->ChargerBarrels[1] /*0x48a5e4*/
                     + 4
                     * Random::Range(
                         (_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[8060] + 536),
                         0,
                         (IUnknown *)(v9 - 1)));
  v10 = 25 * v9 - 1; /*0x48a5ee*/
  if ( (int)v4 >= v10 ) /*0x48a5f4*/
    v4 = (CoordStruct *)v10; /*0x48a5f6*/
  return *(_DWORD *)(aP1->ChargerBarrels[1] + 4 * ((int)v4 / 25)); /*0x48a57d*/
}


// ==== 0x0048A620  CreateSmokeEffectAt  this=BulletClass  sig=csp ====
char __fastcall CreateSmokeEffectAt(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  unsigned int v7; // eax
  double v10; // st7
  int v11; // esi

  LOBYTE(v7) = MEMORY[0xA8EB78]; /*0x48a620*/
  if ( MEMORY[0xA8EB78] && (v7 = PingPongBuffer::GetWriteOffset(), (unsigned int)dword_ABCD44 >= v7) || (a7 & 0xF) != 0 ) /*0x48a644*/
  {
    LOBYTE(v7) = a6; /*0x48a64a*/
    if ( a6 || a2 && (LOBYTE(v7) = *(_BYTE *)(a2 + 336), (_BYTE)v7) ) /*0x48a662*/
    {
      v10 = *(float *)(a2 + 316); /*0x48a668*/
      if ( v10 <= 0.0 ) /*0x48a679*/
      {
        v11 = (char)(a1 >> 2); /*0x48a6a2*/
        if ( v11 < 63 ) /*0x48a6aa*/
        {
          if ( v11 <= 21 ) /*0x48a6b6*/
            v11 = 21; /*0x48a6b8*/
        }
        else
        {
          v11 = 63; /*0x48a6ac*/
        }
      }
      else
      {
        if ( v10 > 1.0 ) /*0x48a686*/
          v10 = 1.0; /*0x48a68a*/
        v11 = Math::RoundToInt(v10 * 63.0); /*0x48a69b*/
      }
      if ( __2_YAPAXI_Z(0x18u) ) /*0x48a6bf*/
      {
        v7 = ObjectClass::RegisterInArray(a3, a4, a5, v11); /*0x48a6e7*/
        *(_DWORD *)(v7 + 20) |= a7; /*0x48a6ec*/
      }
      else
      {
        MEMORY[0x14] |= a7; /*0x48a6f7*/
        LOBYTE(v7) = 0; /*0x48a6f5*/
      }
    }
  }
  return v7; /*0x48a6ef*/
}


// ==== 0x0048A8D0  ComputeMathFacingAngle  this=-  sig=csp ====
char __fastcall Math_ComputeFacingAngle(char a1, int a2, int a3, int a4, double a5, _DWORD *a6)
{
  double v6; // kr00_8
  char v10; // c0
  int v11[2]; // [esp+10h] [ebp-8h] BYREF

  v6 = a5; /*0x48a8df*/
  if ( !(unsigned __int8)SolveMathTrajectory(a3, a4, a5, (int)&a5) ) /*0x48a8f8*/
    return 0; /*0x48a9c4*/
  if ( a1 ) /*0x48a907*/
  {
    LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a91e*/
    *a6 = a4; /*0x48a92d*/
    return 1; /*0x48a930*/
  }
  else
  {
    SolveMathTrajectory(a3 + 1, a4, v6, (int)v11); /*0x48a94f*/
    if ( v10 ) /*0x48a965*/
      LOWORD(a4) = Math::RoundToInt((-a5 - 1.570796326794897) * -10430.06004058427); /*0x48a97e*/
    else
      LOWORD(a4) = Math::RoundToInt((a5 - 1.570796326794897) * -10430.06004058427); /*0x48a9aa*/
    *a6 = a4; /*0x48a989*/
    return 1; /*0x48a98c*/
  }
}


// ==== 0x0048A9D0  SolveMathTrajectory  this=-  sig=csp ====
char __fastcall Math_SolveTrajectory(char a1, int a2, int a3, int a4, double a5, int a6)
{
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // [esp+8h] [ebp-20h]
  double v12; // [esp+8h] [ebp-20h]
  double v13; // [esp+10h] [ebp-18h]
  double v14; // [esp+10h] [ebp-18h]
  double v15; // [esp+18h] [ebp-10h]
  double v16; // [esp+20h] [ebp-8h]

  if ( a4 <= 0 )
  {
    if ( (double)a3 == 0.0 ) /*0x48aa0a*/
      a3 = 0; /*0x48aa0c*/
    v7 = (double)a4; /*0x48aa1a*/
    v16 = (double)a2; /*0x48aa25*/
    v15 = v16 * v16 - v7 * a5; /*0x48aa38*/
    v13 = (double)a3 * (double)a3; /*0x48aa44*/
    v11 = v16 * v16 * v16 * v16 - (v16 * v16 * v7 * a5 + v16 * v16 * v7 * a5) - a5 * a5 * v13; /*0x48aa64*/
    v8 = v7 * v7 / v13 + 1.0 + v7 * v7 / v13 + 1.0; /*0x48aa7a*/
    v14 = v8; /*0x48aa7c*/
    if ( v11 < 0.0 || v8 == 0.0 ) /*0x48aa9c*/
      return 0; /*0x48aa9c*/
    v9 = a1 ? v15 - Math::Sqrt(v11) : Math::Sqrt(v11) + v15;
    v12 = v9 / v14; /*0x48aad4*/
    if ( v12 < 0.0 ) /*0x48aae3*/
    {
      return 0; /*0x48ab12*/
    }
    else
    {
      v10 = Math::Sqrt(v12); /*0x48aaef*/
      *(double *)a6 = Math::ArcTan2_Table(v10 / v16); /*0x48ab06*/
      return 1; /*0x48ab08*/
    }
  }
  else
  {
    *(_DWORD *)a6 = -187466734; /*0x48a9e7*/
    *(_DWORD *)(a6 + 4) = 1072243161; /*0x48a9ed*/
    return 1; /*0x48a9f4*/
  }
}


// ==== 0x0048AB90  TechnoClass::ComputeScanRange  this=TechnoClass  sig=csp ====
__int64 __thiscall TechnoClass_ComputeScanRange(void *this, double a2)
{
  double v2; // st7

  v2 = Math::Sqrt((double)(int)this * a2 * 1.2); /*0x48aba9*/
  return Math::RoundToInt(v2); /*0x48abb6*/
}


// ==== 0x0048ABC0  globalHelper_08ABC0  this=-  sig=csp ====
bool __fastcall globalHelper_08ABC0(IUnknown *aP0, int a2, int a3, double a4)
{
  double v4; // st7
  double v5; // st6
  double v7; // [esp+0h] [ebp-28h]
  double v8; // [esp+8h] [ebp-20h]
  double v9; // [esp+10h] [ebp-18h]
  double v10; // [esp+10h] [ebp-18h]
  double aP0a; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  v4 = (double)(int)aP0; /*0x48abd1*/
  v5 = (double)a2; /*0x48abd5*/
  if ( v5 == 0.0 ) /*0x48abe6*/
    v5 = 0.001; /*0x48abea*/
  v8 = (double)a3; /*0x48abf3*/
  v7 = v4 * v4; /*0x48abfb*/
  v9 = v5 * v5; /*0x48ac03*/
  aP0a = v4 * (v7 * v4) - (v7 * v8 * a4 + v7 * v8 * a4) - a4 * a4 * v9; /*0x48ac2c*/
  if ( aP0a < 0.0 ) /*0x48ac3b*/
    return 0; /*0x48ac3d*/
  v12 = v8 * v8 / v9 + 1.0 + v8 * v8 / v9 + 1.0; /*0x48ac5b*/
  if ( v12 == 0.0 ) /*0x48ac6a*/
    return 0; /*0x48ac6c*/
  v10 = v7 - v8 * a4; /*0x48ac8b*/
  return (Math::Sqrt((AbstractClass *)LODWORD(aP0a)) + v10) / v12 >= 0.0 /*0x48ac41*/
      || (v10 - Math::Sqrt((AbstractClass *)LODWORD(aP0a))) / v12 >= 0.0;
}


// ==== 0x0048ACE0  Return::HRESULT_Fail  this=RecoilData  sig=csp ====
int __stdcall Return::HRESULT_Fail(BulletClass *aP0, int a2, int a3)
{
  return -15; /*0x48ace5*/
}


// ==== 0x0048ACF0  RulesClass::GetFiringDistance  this=RulesClass  sig=ida-proto ====
double RulesClass_GetFiringDistance()
{
  return (double)*((int *)MEMORY[0x8871E0] + 1454) * 0.5; /*0x48ad01*/
}


// ==== 0x0048AD10  _DynamicVectorClass_PAUDamageGroup::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::sub_48AD10(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x48ad16*/
  *(_DWORD *)(this + 16) = 0; /*0x48ad19*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x48ad20*/
  {
    __3_YAXPAX_Z(v2); /*0x48ad26*/
    *(_DWORD *)(this + 4) = 0; /*0x48ad2e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x48ad31*/
  *(_DWORD *)(this + 8) = 0; /*0x48ad34*/
}


// ==== 0x0048AD40  _DynamicVectorClass_PAUDamageGroup::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::sub_48AD40(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x48ad40*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x48ad55*/
  else
    return 0; /*0x48ad47*/
}


// ==== 0x0048AD60  _VectorClass_PAUDamageGroup::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x48ad6a*/
}


// ==== 0x0048AD70  _VectorClass_PAUDamageGroup::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x48ad72*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x48ad7d*/
  {
    v3 = 0; /*0x48ad7f*/
    if ( v2 <= 0 ) /*0x48ad83*/
      return 1; /*0x48ada3*/
    v4 = (_DWORD *)this->Items; /*0x48ad85*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x48ad8b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x48ad94*/
    {
      ++v3; /*0x48ad96*/
      ++v4; /*0x48ad97*/
      if ( v3 >= v2 ) /*0x48ad9c*/
        return 1; /*0x48ad9c*/
    }
  }
  return 0; /*0x48ad9e*/
}


// ==== 0x0048ADB0  _VectorClass_PAUDamageGroup::Remove  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::Remove(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x48adbc*/
  {
    this->IsInitialized = 0; /*0x48adc6*/
    if ( a3 ) /*0x48adcc*/
      v4 = a3; /*0x48ade2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x48adde*/
    this->IsInitialized = 1; /*0x48ade6*/
    if ( v4 ) /*0x48adea*/
    {
      if ( this->Items ) /*0x48adf5*/
      {
        v6 = this->Capacity; /*0x48adfc*/
        if ( a2 < v6 ) /*0x48ae01*/
          v6 = a2; /*0x48ae03*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x48ae09*/
          ++i; /*0x48ae0e*/
        if ( this->IsAllocated ) /*0x48ae1b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x48ae26*/
          this->Items = 0; /*0x48ae2e*/
        }
      }
      this->Items = v4; /*0x48ae37*/
      this->Capacity = a2; /*0x48ae3f*/
      this->IsAllocated = a3 == 0; /*0x48ae42*/
      return 1; /*0x48ae48*/
    }
    else
    {
      return 0; /*0x48adef*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x48ae52*/
    return 1; /*0x48ae58*/
  }
}


// ==== 0x0048AE60  _VectorClass_PAUDamageGroup::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_DamageGroup::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x48ae6d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x48ae73*/
    *(_DWORD *)(this + 4) = 0; /*0x48ae7b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x48ae7e*/
  *(_DWORD *)(this + 8) = 0; /*0x48ae81*/
}


// ==== 0x0048AE90  _VectorClass_PAUDamageGroup::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x48ae90*/
    return 0; /*0x48ae98*/
  v3 = *(_DWORD *)(this + 8); /*0x48ae9e*/
  result = 0; /*0x48aea1*/
  if ( v3 <= 0 ) /*0x48aea5*/
    return -1; /*0x48aebc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x48aeab*/
  {
    if ( ++result >= v3 ) /*0x48aeba*/
      return -1; /*0x48aeba*/
  }
  return result; /*0x48ae9a*/
}


// ==== 0x0048AED0  _VectorClass_PAUDamageGroup::Get  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_DamageGroup::Get(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x48aed0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x48aee5*/
  else
    return 0; /*0x48aed7*/
}


// ==== 0x0048AEF0  _DynamicVectorClass_PAUDamageGroup::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_DamageGroup::sub_48AEF0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x48aefc*/
  {
    this->IsInitialized = 0; /*0x48af02*/
    if ( a3 ) /*0x48af08*/
      v4 = a3; /*0x48af1e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x48af1a*/
    this->IsInitialized = 1; /*0x48af22*/
    if ( !v4 ) /*0x48af26*/
      return 0; /*0x48af9a*/
    if ( this->Items ) /*0x48af28*/
    {
      v5 = this->q008; /*0x48af2f*/
      if ( a2 < v5 ) /*0x48af34*/
        v5 = a2; /*0x48af36*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x48af3c*/
        ++i; /*0x48af41*/
      if ( this->IsAllocated ) /*0x48af4e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x48af59*/
        this->Items = 0; /*0x48af61*/
      }
    }
    this->Items = v4; /*0x48af6a*/
    this->q008 = a2; /*0x48af72*/
    this->IsAllocated = a3 == 0; /*0x48af75*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x48af7e*/
  }
  v7 = this->q008; /*0x48af81*/
  if ( v7 < this->Items ) /*0x48af89*/
    this->Items = v7; /*0x48af8b*/
  return 1; /*0x48af8e*/
}


// ==== 0x0048AFA0  _DynamicVectorClass_PAUDamageGroup::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_DamageGroup::sub_48AFA0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x48afa0*/
  result = 0; /*0x48afa3*/
  if ( v2 <= 0 ) /*0x48afa8*/
    return -1; /*0x48afbf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x48afae*/
  {
    if ( ++result >= v2 ) /*0x48afbd*/
      return -1; /*0x48afbd*/
  }
  return result; /*0x48afc2*/
}


// ==== 0x0048AFD0  _VectorClass_PAUDamageGroup::Add  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_DamageGroup::Add(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x48afd3*/
  *Block = &vt_VectorClass_DamageGroup; /*0x48afd6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x48afe0*/
  {
    __3_YAXPAX_Z(v3); /*0x48afe8*/
    *(Block + 1) = 0; /*0x48aff0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48affb*/
  *(Block + 2) = 0; /*0x48b001*/
  if ( (a2 & 1) != 0 ) /*0x48b008*/
    __3_YAXPAX_Z(Block); /*0x48b00b*/
  return (VectorClass *)Block; /*0x48b015*/
}


// ==== 0x0048B020  _DynamicVectorClass_PAUDamageGroup::Constructor_VectorClass_DamageGroup___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_DamageGroup::Constructor_VectorClass_DamageGroup___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x48b023*/
  *Block = &vt_VectorClass_DamageGroup; /*0x48b026*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x48b030*/
  {
    __3_YAXPAX_Z(v3); /*0x48b038*/
    *(Block + 1) = 0; /*0x48b040*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x48b04b*/
  *(Block + 2) = 0; /*0x48b051*/
  if ( (a2 & 1) != 0 ) /*0x48b058*/
    __3_YAXPAX_Z(Block); /*0x48b05b*/
  return (DynamicVector *)Block; /*0x48b065*/
}


// ==== 0x0048B070  VectorClass::sub_48B070  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_48B070(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x48b07b*/
  this->Capacity = a2; /*0x48b07e*/
  this->q030 = 1; /*0x48b081*/
  this->q034 = 0; /*0x48b085*/
  *this = &vt_VectorClass_DamageGroup; /*0x48b088*/
  if ( a2 ) /*0x48b08e*/
  {
    if ( a3 ) /*0x48b096*/
    {
      this->Items = a3; /*0x48b098*/
      return this; /*0x48b09e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x48b0ad*/
    this->q034 = 1; /*0x48b0b0*/
  }
  return this; /*0x48b09d*/
}


// ==== 0x0048B0C0  sub_48B0C0  this=-  sig=ida-proto ====
int sub_48B0C0()
{
  MEMORY[0x89E878] = 0; /*0x48b0c2*/
  MEMORY[0x89E87C] = 0; /*0x48b0c7*/
  MEMORY[0x89E880] = 0; /*0x48b0cc*/
  MEMORY[0x89E884] = 0; /*0x48b0d1*/
  return 0; /*0x48b0d6*/
}


// ==== 0x0048B0E0  CommBufferClass::method_48B0E0  this=CommBufferClass  sig=csp ====
CommBufferClass *__thiscall sub_48B0E0(CommBufferClass *this, int a2, int a3, size_t Size, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // ebx
  int v9; // edi

  *(_DWORD *)this->__pad_0 = &vt_CommBufferClass; /*0x48b0fd*/
  *(_DWORD *)&this->__pad_0[4] = a2; /*0x48b103*/
  this->field_8 = a3; /*0x48b106*/
  *(_DWORD *)this->__pad_C = Size; /*0x48b109*/
  this->field_10 = a5; /*0x48b10c*/
  this->field_24 = __2_YAPAXI_Z(36 * a2); /*0x48b117*/
  this->field_34 = __2_YAPAXI_Z(24 * a3); /*0x48b123*/
  *(_DWORD *)&this->__pad_28[8] = __2_YAPAXI_Z(4 * a2); /*0x48b13a*/
  this->q010 = __2_YAPAXI_Z(4 * a3); /*0x48b143*/
  v6 = 0; /*0x48b14c*/
  if ( *(int *)&this->__pad_0[4] > 0 ) /*0x48b150*/
  {
    v7 = 0; /*0x48b152*/
    do /*0x48b191*/
    {
      *(_DWORD *)(this->field_24 + v7 + 20) = __2_YAPAXI_Z(Size); /*0x48b160*/
      if ( this->field_10 <= 0 ) /*0x48b169*/
        *(_DWORD *)(this->field_24 + v7 + 28) = 0; /*0x48b180*/
      else
        *(_DWORD *)(this->field_24 + v7 + 28) = __2_YAPAXI_Z(this->field_10); /*0x48b177*/
      ++v6; /*0x48b18b*/
      v7 += 36; /*0x48b18c*/
    }
    while ( v6 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b191*/
  }
  v8 = 0; /*0x48b196*/
  if ( this->field_8 > 0 ) /*0x48b19a*/
  {
    v9 = 0; /*0x48b19c*/
    do /*0x48b1db*/
    {
      *(_DWORD *)(v9 + this->field_34 + 12) = __2_YAPAXI_Z(Size); /*0x48b1aa*/
      if ( this->field_10 <= 0 ) /*0x48b1b3*/
        *(_DWORD *)(v9 + this->field_34 + 20) = 0; /*0x48b1ca*/
      else
        *(_DWORD *)(v9 + this->field_34 + 20) = __2_YAPAXI_Z(this->field_10); /*0x48b1c1*/
      ++v8; /*0x48b1d5*/
      v9 += 24; /*0x48b1d6*/
    }
    while ( v8 < this->field_8 ); /*0x48b1db*/
  }
  Struct::ClearAllMemberFlags(this); /*0x48b1df*/
  return this; /*0x48b1e6*/
}


// ==== 0x0048B1F0  CommBufferClass::method_48B1F0  this=CommBufferClass  sig=csp ====
void __thiscall sub_48B1F0(CommBufferClass *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  CCINIClass *v5; // edx
  int v6; // ebx
  int v7; // edi
  CCINIClass *v8; // edx

  v2 = 0; /*0x48b1f4*/
  v3 = *(_DWORD *)&this->__pad_0[4]; /*0x48b1f7*/
  *(_DWORD *)this->__pad_0 = &vt_CommBufferClass; /*0x48b1fa*/
  if ( v3 > 0 ) /*0x48b202*/
  {
    v4 = 0; /*0x48b204*/
    do /*0x48b233*/
    {
      __3_YAXPAX_Z(*(void **)(this->field_24 + v4 * 4 + 20)); /*0x48b20e*/
      v5 = (CCINIClass *)this->field_24; /*0x48b213*/
      if ( v5->sectionHead[v4 + 3] ) /*0x48b219*/
        __3_YAXPAX_Z((void *)v5->sectionHead[v4 + 3]); /*0x48b222*/
      ++v2; /*0x48b22d*/
      v4 += 9; /*0x48b22e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b233*/
  }
  v6 = 0; /*0x48b238*/
  if ( this->field_8 > 0 ) /*0x48b23c*/
  {
    v7 = 0; /*0x48b23e*/
    do /*0x48b26d*/
    {
      __3_YAXPAX_Z(*(void **)(this->field_34 + v7 * 4 + 12)); /*0x48b248*/
      v8 = (CCINIClass *)this->field_34; /*0x48b24d*/
      if ( v8->sectionHead[v7 + 1] ) /*0x48b253*/
        __3_YAXPAX_Z((void *)v8->sectionHead[v7 + 1]); /*0x48b25c*/
      ++v6; /*0x48b267*/
      v7 += 6; /*0x48b268*/
    }
    while ( v6 < this->field_8 ); /*0x48b26d*/
  }
  __3_YAXPAX_Z((void *)this->field_24); /*0x48b273*/
  __3_YAXPAX_Z((void *)this->field_34); /*0x48b27c*/
  __3_YAXPAX_Z(*(void **)&this->__pad_28[8]); /*0x48b285*/
  __3_YAXPAX_Z(*((void **)this + 16)); /*0x48b28e*/
}


// ==== 0x0048B2A0  Struct::ClearAllMemberFlags  this=CommBufferClass  sig=csp ====
int __thiscall Struct::ClearAllMemberFlags(CommBufferClass *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // edi
  int result; // eax
  int v6; // esi
  _DWORD *v7; // edi

  v1 = *(_DWORD *)&this->__pad_0[4]; /*0x48b2a0*/
  v2 = 0; /*0x48b2a7*/
  *(_DWORD *)&this->__pad_28[4] = 0; /*0x48b2ac*/
  *((_DWORD *)this + 15) = 0; /*0x48b2af*/
  *(_DWORD *)this->__pad_14 = 0; /*0x48b2b2*/
  *(_DWORD *)&this->__pad_14[4] = 0; /*0x48b2b5*/
  *(_DWORD *)&this->__pad_14[8] = 0; /*0x48b2b8*/
  *(_DWORD *)&this->__pad_14[12] = 0; /*0x48b2bb*/
  *(_DWORD *)this->__pad_28 = 0; /*0x48b2be*/
  *((_DWORD *)this + 14) = 0; /*0x48b2c1*/
  if ( v1 > 0 ) /*0x48b2c4*/
  {
    v3 = 0; /*0x48b2c6*/
    do /*0x48b327*/
    {
      *(_DWORD *)(v3 + this->field_24) &= ~1u; /*0x48b2d2*/
      *(_DWORD *)(v3 + this->field_24) &= ~2u; /*0x48b2de*/
      v4 = (_DWORD *)(v3 + this->field_24); /*0x48b2e3*/
      v3 += 36; /*0x48b2e5*/
      ++v2; /*0x48b2ed*/
      *v4 &= ~4u; /*0x48b2ee*/
      *(_DWORD *)(v3 + this->field_24 - 32) = 0; /*0x48b2f3*/
      *(_DWORD *)(v3 + this->field_24 - 28) = 0; /*0x48b2fa*/
      *(_DWORD *)(v3 + this->field_24 - 24) = 0; /*0x48b301*/
      *(_DWORD *)(v3 + this->field_24 - 20) = 0; /*0x48b308*/
      *(_DWORD *)(v3 + this->field_24 - 12) = 0; /*0x48b30f*/
      *(_WORD *)(v3 + this->field_24 - 4) = 0; /*0x48b316*/
      *(_DWORD *)(*(_DWORD *)&this->__pad_28[8] + 4 * v2 - 4) = 0; /*0x48b31e*/
    }
    while ( v2 < *(_DWORD *)&this->__pad_0[4] ); /*0x48b327*/
  }
  result = this->field_8; /*0x48b329*/
  v6 = 0; /*0x48b32c*/
  if ( result > 0 ) /*0x48b330*/
  {
    result = 0; /*0x48b332*/
    do /*0x48b37d*/
    {
      *(_DWORD *)(result + this->field_34) &= ~1u; /*0x48b33e*/
      *(_DWORD *)(result + this->field_34) &= ~2u; /*0x48b34a*/
      v7 = (_DWORD *)(result + this->field_34); /*0x48b34f*/
      result += 24; /*0x48b351*/
      ++v6; /*0x48b359*/
      *v7 &= ~4u; /*0x48b35a*/
      *(_DWORD *)(this->field_34 + result - 20) = 0; /*0x48b35f*/
      *(_DWORD *)(this->field_34 + result - 16) = 0; /*0x48b366*/
      *(_DWORD *)(this->field_34 + result - 8) = 0; /*0x48b36d*/
      *(_DWORD *)(this->q010 + 4 * v6 - 4) = 0; /*0x48b374*/
    }
    while ( v6 < this->field_8 ); /*0x48b37d*/
  }
  this->q110 = 0; /*0x48b381*/
  this->q012 = 0; /*0x48b384*/
  this->q04C = 0; /*0x48b387*/
  this->q054 = 0; /*0x48b38a*/
  return result; /*0x48b37f*/
}


// ==== 0x0048B390  EventClass::serializeEvent  this=EventClass  sig=csp ====
int __thiscall sub_48B390(int *this)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edx

  result = this->q004; /*0x48b390*/
  v2 = 0; /*0x48b397*/
  this->q028 = 0; /*0x48b39b*/
  if ( result > 0 ) /*0x48b39e*/
  {
    result = 0; /*0x48b3a1*/
    do /*0x48b402*/
    {
      *(_DWORD *)(result + this->q024) &= ~1u; /*0x48b3ad*/
      *(_DWORD *)(result + this->q024) &= ~2u; /*0x48b3b9*/
      v3 = (_DWORD *)(result + this->q024); /*0x48b3be*/
      result += 36; /*0x48b3c0*/
      ++v2; /*0x48b3c8*/
      *v3 &= ~4u; /*0x48b3c9*/
      *(_DWORD *)(this->q024 + result - 32) = 0; /*0x48b3ce*/
      *(_DWORD *)(this->q024 + result - 28) = 0; /*0x48b3d5*/
      *(_DWORD *)(this->q024 + result - 24) = 0; /*0x48b3dc*/
      *(_DWORD *)(this->q024 + result - 20) = 0; /*0x48b3e3*/
      *(_DWORD *)(this->q024 + result - 12) = 0; /*0x48b3ea*/
      *(_WORD *)(this->q024 + result - 4) = 0; /*0x48b3f1*/
      *(_DWORD *)(this->q00C + 4 * v2 - 4) = 0; /*0x48b3f9*/
    }
    while ( v2 < this->q004 ); /*0x48b402*/
  }
  return result; /*0x48b405*/
}


// ==== 0x0048B410  ConnectionClass::queueSendPacket  this=ConnectionClass  sig=csp ====
void __thiscall ConnectionClass::queueSendPacket(#487 *this, #473 *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  _BYTE *i; // edi
  int v9; // eax
  int v10; // ecx
  signed int v11; // [esp+20h] [ebp+10h]
  __int16 v12; // [esp+24h] [ebp+14h]

  v5 = this->PlayerIndex; /*0x48b418*/
  v6 = this->q028; /*0x48b41c*/
  if ( v6 == v5 || a3 > this->LastPacketTime ) /*0x48b42b*/
  {
    Debug::Log(); /*0x48b536*/
  }
  else
  {
    v7 = 0; /*0x48b433*/
    if ( v5 > 0 ) /*0x48b437*/
    {
      for ( i = (_BYTE *)this->q009; (*i & 1) != 0; i += 36 ) /*0x48b440*/
      {
        if ( ++v7 >= v5 ) /*0x48b44d*/
          return; /*0x48b44d*/
      }
      if ( v7 != -1 ) /*0x48b45b*/
      {
        v9 = 36 * v7; /*0x48b464*/
        *(_DWORD *)(this->q009 + v9) = *(_DWORD *)(this->q009 + 36 * v7) | 1; /*0x48b46d*/
        *(_DWORD *)(36 * v7 + this->q009) &= ~2u; /*0x48b47a*/
        *(_DWORD *)(36 * v7 + this->q009) &= ~4u; /*0x48b486*/
        *(_DWORD *)(v9 + this->q009 + 4) = 0; /*0x48b490*/
        *(_DWORD *)(v9 + this->q009 + 8) = 0; /*0x48b497*/
        *(_DWORD *)(v9 + this->q009 + 12) = 0; /*0x48b49e*/
        *(_DWORD *)(v9 + this->q009 + 16) = a3; /*0x48b4a5*/
        *(_WORD *)(v9 + this->q009 + 32) = v12; /*0x48b4ae*/
        qmemcpy(*(void **)(36 * v7 + this->q009 + 20), a2, a3); /*0x48b4c1*/
        if ( a4 && v11 > 0 && v11 <= this->PlayerIndex ) /*0x48b4dd*/
        {
          qmemcpy(*(void **)(v9 + this->q009 + 28), (const void *)a4, v11); /*0x48b4eb*/
          *(_DWORD *)(v9 + this->q009 + 24) = v11; /*0x48b4f9*/
        }
        else
        {
          *(_DWORD *)(v9 + this->q009 + 24) = 0; /*0x48b502*/
        }
        *(_DWORD *)(this->LastPacketTime + 4 * this->q028) = v7; /*0x48b512*/
        v10 = this->q028 + 1; /*0x48b51b*/
        ++this->q02C; /*0x48b51e*/
        this->q028 = v10; /*0x48b521*/
      }
    }
  }
}


// ==== 0x0048B570  PacketQueue::ExtractEntry  this=PacketQueue  sig=csp ====
int __thiscall sub_48B570(_DWORD *this, void *a2, _DWORD *a3, int a4, void *a5, _DWORD *a6, _WORD *a7)
{
  int v8; // esi
  int v9; // esi
  _DWORD *v10; // ecx
  int i; // ecx

  if ( !this->q00A ) /*0x48b576*/
    return 0; /*0x48b576*/
  v8 = this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4); /*0x48b58f*/
  if ( (*(_BYTE *)v8 & 1) == 0 ) /*0x48b595*/
    return 0; /*0x48b712*/
  if ( a2 ) /*0x48b5a3*/
  {
    qmemcpy(a2, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b5b0*/
    *a3 = *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 16); /*0x48b5cd*/
  }
  if ( a5 && a6 ) /*0x48b5db*/
  {
    v9 = this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4); /*0x48b5e9*/
    qmemcpy(a5, *(const void **)(v9 + 28), *(_DWORD *)(v9 + 24)); /*0x48b5f7*/
    *a6 = *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 24); /*0x48b614*/
  }
  if ( a7 ) /*0x48b61c*/
    *a7 = *(_WORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 32); /*0x48b62f*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)) &= ~1u; /*0x48b647*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)) &= ~2u; /*0x48b65e*/
  v10 = (_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4)); /*0x48b66e*/
  *v10 &= ~4u; /*0x48b676*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 4) = 0; /*0x48b684*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 8) = 0; /*0x48b694*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 12) = 0; /*0x48b6a4*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 16) = 0; /*0x48b6b4*/
  *(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 24) = 0; /*0x48b6c4*/
  *(_WORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a4) + 32) = 0; /*0x48b6d4*/
  for ( i = a4; i < this->q00A - 1; *(_DWORD *)(this->q030 + 4 * i - 4) = *(_DWORD *)(this->q030 + 4 * i) ) /*0x48b6e1*/
    ++i; /*0x48b6e6*/
  *(_DWORD *)(this->q030 + 4 * (this->q00A)-- - 4) = 0; /*0x48b6fd*/
  return 1; /*0x48b6fc*/
}


// ==== 0x0048B720  Terrain::GetTileIndex  this=Terrain  sig=csp ====
int __thiscall Terrain_GetTileIndex(_DWORD *this, int a2)
{
  return (*(_DWORD *)(this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)) & 1) != 0
       ? this->q024 + 36 * *(_DWORD *)(this->q030 + 4 * a2)
       : 0;
}


// ==== 0x0048B750  ConnectionClass::allocPacketSlot  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_AllocPacketSlot(int *this, const void *a2, signed int a3, const void *a4, signed int a5)
{
  int v6; // edx
  int v8; // ebx
  _BYTE *v9; // eax
  _BYTE *v10; // ecx
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // [esp+14h] [ebp+8h]

  v6 = this->Active; /*0x48b755*/
  if ( this->q038 == v6 || a3 > this->LastPacketTime ) /*0x48b768*/
    return 0; /*0x48b768*/
  v8 = 0; /*0x48b76a*/
  if ( v6 <= 0 ) /*0x48b772*/
    goto LABEL_9; /*0x48b772*/
  v9 = (_BYTE *)this->q034; /*0x48b774*/
  v10 = v9; /*0x48b777*/
  while ( (*v10 & 1) != 0 ) /*0x48b77c*/
  {
    ++v8; /*0x48b77e*/
    v10 += 24; /*0x48b77f*/
    if ( v8 >= v6 ) /*0x48b784*/
      goto LABEL_9; /*0x48b784*/
  }
  v15 = v8; /*0x48b78f*/
  if ( v8 == -1 ) /*0x48b793*/
  {
LABEL_9:
    Debug::Log(); /*0x48b795*/
    return 0; /*0x48b7a7*/
  }
  v12 = 24 * v8; /*0x48b7ae*/
  *(_DWORD *)&v9[v12] |= 1u; /*0x48b7b7*/
  *(_DWORD *)(v12 + this->q034) &= ~2u; /*0x48b7c4*/
  *(_DWORD *)(this->q034 + v12) &= ~4u; /*0x48b7d2*/
  v13 = MEMORY[0x887340]; /*0x48b7d9*/
  if ( MEMORY[0x887338] != -1 ) /*0x48b7e2*/
    v13 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48b7f4*/
  *(_DWORD *)(this->q034 + v12 + 4) = v13; /*0x48b7fb*/
  *(_DWORD *)(this->q034 + v12 + 8) = a3; /*0x48b806*/
  qmemcpy(*(void **)(this->q034 + v12 + 12), a2, a3); /*0x48b816*/
  if ( a4 && a5 > 0 && a5 <= this->PlayerIndex ) /*0x48b832*/
  {
    qmemcpy(*(void **)(this->q034 + v12 + 20), a4, a5); /*0x48b842*/
    *(_DWORD *)(this->q034 + v12 + 16) = a5; /*0x48b84e*/
  }
  else
  {
    *(_DWORD *)(this->q034 + v12 + 16) = 0; /*0x48b857*/
  }
  *(_DWORD *)(this->PacketsSent + 4 * this->q038) = v15; /*0x48b86a*/
  v14 = this->q03C + 1; /*0x48b874*/
  ++this->q038; /*0x48b875*/
  this->q03C = v14; /*0x48b878*/
  return 1; /*0x48b7a2*/
}


// ==== 0x0048B890  PacketQueue::ReleaseEntry  this=PacketQueue  sig=csp ====
int __thiscall PacketQueue::ReleaseEntry(_DWORD *this, void *a1, _DWORD *a2, AnimClass *aP3, void *a4, _DWORD *a5)
{
  int v7; // esi
  int v8; // esi
  _DWORD *v9; // ecx
  AnimClass *i; // ecx

  if ( !this->u32_38 ) /*0x48b896*/
    return 0; /*0x48b896*/
  v7 = this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3); /*0x48b8af*/
  if ( (*(_BYTE *)v7 & 1) == 0 ) /*0x48b8b5*/
    return 0; /*0x48b9d5*/
  if ( a1 ) /*0x48b8c3*/
  {
    qmemcpy(a1, *(const void **)(v7 + 12), *(_DWORD *)(v7 + 8)); /*0x48b8d0*/
    *a2 = *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3) + 8); /*0x48b8ed*/
  }
  if ( a4 && a5 ) /*0x48b8fd*/
  {
    v8 = this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3); /*0x48b90b*/
    qmemcpy(a4, *(const void **)(v8 + 20), *(_DWORD *)(v8 + 16)); /*0x48b919*/
    *a5 = *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3) + 16); /*0x48b934*/
  }
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3)) &= ~1u; /*0x48b94b*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3)) &= ~2u; /*0x48b962*/
  v9 = (_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3)); /*0x48b972*/
  *v9 &= ~4u; /*0x48b97a*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3) + 8) = 0; /*0x48b988*/
  *(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->u32_40 + 4 * (_DWORD)aP3) + 16) = 0; /*0x48b998*/
  for ( i = aP3; /*0x48b9a4*/
        (int)i < this->u32_38 - 1;
        *(_DWORD *)(this->u32_40 + 4 * (_DWORD)i - 4) = *(_DWORD *)(this->u32_40 + 4 * (_DWORD)i) )
  {
    i = (AnimClass *)((char *)i + 1); /*0x48b9a9*/
  }
  *(_DWORD *)(this->u32_40 + 4 * (this->u32_38)-- - 4) = 0; /*0x48b9c0*/
  return 1; /*0x48b9bf*/
}


// ==== 0x0048B9E0  Terrain::GetTileType  this=Terrain  sig=csp ====
int __thiscall Terrain::GetTileType(_DWORD *this, AnimClass *aP1)
{
  return (*(_DWORD *)(this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * (_DWORD)aP1)) & 1) != 0
       ? this->q034 + 24 * *(_DWORD *)(this->q040 + 4 * (_DWORD)aP1)
       : 0;
}


// ==== 0x0048BA10  ConnectionClass::initQueue  this=ConnectionClass  sig=csp ====
unsigned int __thiscall sub_48BA10(unsigned int *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int result; // eax

  v2 = this->q018; /*0x48ba10*/
  if ( v2 == 256 ) /*0x48ba1c*/
  {
    v3 = a2 - this->q01C + this->PacketsReceived; /*0x48ba2c*/
    this->PacketsReceived = v3; /*0x48ba2e*/
    v4 = ((unsigned __int8)v3 > 0x7Fu) + (v3 >> 8); /*0x48ba46*/
  }
  else
  {
    v5 = v2 + 1; /*0x48ba4e*/
    v6 = a2 + this->PacketsReceived; /*0x48ba56*/
    this->q018 = v5; /*0x48ba58*/
    this->PacketsReceived = v6; /*0x48ba5b*/
    v4 = v6 / v5; /*0x48ba5e*/
  }
  this->q01C = v4; /*0x48ba60*/
  result = this->Active; /*0x48ba63*/
  if ( a2 > result ) /*0x48ba68*/
    this->Active = a2; /*0x48ba6a*/
  return result; /*0x48ba6d*/
}


// ==== 0x0048BA80  CellClass::GetBridgeIndex  this=CellClass  sig=csp ====
int __thiscall CellClass_GetBridgeIndex(_DWORD *this)
{
  return this->rubble; /*0x48ba83*/
}


// ==== 0x0048BA90  IPXManagerClass::init  this=IPXManagerClass  sig=csp ====
int __thiscall sub_48BA90(_DWORD *this)
{
  return this->q020; /*0x48ba93*/
}


// ==== 0x0048BAA0  Rect::SetRedraw  this=Rect  sig=csp ====
int __thiscall Rect_SetRedraw(_DWORD *this, char a2)
{
  int result; // eax

  result = 0; /*0x48baa4*/
  if ( a2 ) /*0x48baa8*/
  {
    this->q014 = 0; /*0x48baaa*/
    this->q018 = 0; /*0x48baad*/
    this->q01C = 0; /*0x48bab0*/
  }
  else
  {
    result = this->q01C; /*0x48bab9*/
    this->q018 = 1; /*0x48babc*/
    this->q014 = result; /*0x48bac3*/
  }
  this->q020 = result; /*0x48bab3*/
  return result; /*0x48bab6*/
}


// ==== 0x0048BAD0  EventClass::SetData  this=EventClass  sig=csp ====
int __thiscall EventClass::SetData(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  this->q044 = a2; /*0x48bad8*/
  this->q048 = a3; /*0x48badf*/
  this->u32_4C = a4; /*0x48bae6*/
  this->q050 = a5; /*0x48baed*/
  this->q054 = a6; /*0x48baf0*/
  return a6; /*0x48baf3*/
}


// ==== 0x0048BB00  ObjectClass::method_48BB00  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_48BB00(void *Block, char a2)
{
  sub_48B1F0(Block); /*0x48bb03*/
  if ( (a2 & 1) != 0 ) /*0x48bb0d*/
    __3_YAXPAX_Z(Block); /*0x48bb10*/
  return (ObjectClass *)Block; /*0x48bb1a*/
}


// ==== 0x0048BB20  sub_48BB20  this=-  sig=ida-proto ====
int sub_48BB20()
{
  MEMORY[0x89E888] = 0; /*0x48bb22*/
  MEMORY[0x89E88C] = 0; /*0x48bb27*/
  MEMORY[0x89E890] = 0; /*0x48bb2c*/
  MEMORY[0x89E894] = 0; /*0x48bb31*/
  return 0; /*0x48bb36*/
}


// ==== 0x0048BB40  sub_48BB40  this=-  sig=ida-proto ====
bool __fastcall sub_48BB40(int a1, int a2)
{
  int v2; // eax

  BYTE1(a2) &= ~8u; /*0x48bb40*/
  v2 = a2; /*0x48bb43*/
  BYTE1(v2) = BYTE1(a2) & 0xE8; /*0x48bb45*/
  return a2 == v2 || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2) == 0; /*0x48bb57*/
}


// ==== 0x0048BB60  sub_48BB60  this=-  sig=ida-proto ====
bool __fastcall sub_48BB60(int a1)
{
  int v1; // ebp
  int v2; // esi
  int v3; // ebx
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // edx
  _DWORD *v7; // eax

  BYTE1(a1) &= ~8u; /*0x48bb61*/
  v1 = a1; /*0x48bb65*/
  v2 = MEMORY[0x87F684]; /*0x48bb68*/
  v3 = a1; /*0x48bb6e*/
  BYTE1(v3) = BYTE1(a1) & 0xE8; /*0x48bb71*/
  if ( !MEMORY[0x87F684] ) /*0x48bb76*/
    goto LABEL_12; /*0x48bb76*/
  v4 = MEMORY[0x87F690]; /*0x48bb78*/
  if ( MEMORY[0x87F690] && *(_DWORD *)MEMORY[0x87F690] == v3 ) /*0x48bb84*/
  {
LABEL_17:
    v7 = (_DWORD *)(v4 + 4); /*0x48bc0b*/
    return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc0e*/
  }
  if ( !MEMORY[0x87F68C] ) /*0x48bb91*/
  {
    qsort(MEMORY[0x87F680], MEMORY[0x87F684], 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFuncInt); /*0x48bba1*/
    v2 = MEMORY[0x87F684]; /*0x48bba6*/
    MEMORY[0x87F690] = 0; /*0x48bbaf*/
    MEMORY[0x87F68C] = 1; /*0x48bbb9*/
  }
  v5 = MEMORY[0x87F680]; /*0x48bbc0*/
  if ( v2 <= 0 ) /*0x48bbc8*/
    goto LABEL_12; /*0x48bbc8*/
  while ( 1 ) /*0x48bbd1*/
  {
    v6 = v5[2 * (v2 / 2)]; /*0x48bbd1*/
    v4 = (int)&v5[2 * (v2 / 2)]; /*0x48bbd4*/
    if ( v6 <= v3 ) /*0x48bbd9*/
      break; /*0x48bbd9*/
    v2 /= 2; /*0x48bbdb*/
LABEL_11:
    if ( v2 <= 0 ) /*0x48bbed*/
      goto LABEL_12; /*0x48bbed*/
  }
  if ( v6 != v3 ) /*0x48bbdf*/
  {
    v5 = (_DWORD *)(v4 + 8); /*0x48bbe1*/
    v2 += -1 - v2 / 2; /*0x48bbe9*/
    goto LABEL_11; /*0x48bbe9*/
  }
  if ( v4 ) /*0x48bc03*/
  {
    MEMORY[0x87F690] = (int)&v5[2 * (v2 / 2)]; /*0x48bc05*/
    goto LABEL_17; /*0x48bc05*/
  }
LABEL_12:
  v7 = &unk_B7883C; /*0x48bbef*/
  return !*v7 || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*v7 + 20))(*v7, v1) == 0; /*0x48bc1d*/
}


// ==== 0x0048BC20  CompareFuncInt  this=-  sig=ida-proto ====
int __cdecl CompareFuncInt(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x48bc30*/
  else
    return *a1 >= *a2 ? 1 : -1;
}


// ==== 0x0048BC50  sub_48BC50  this=-  sig=ida-proto ====
int sub_48BC50()
{
  MEMORY[0x89E8A0] = 0; /*0x48bc52*/
  MEMORY[0x89E8A4] = 0; /*0x48bc57*/
  MEMORY[0x89E8A8] = 0; /*0x48bc5c*/
  MEMORY[0x89E8AC] = 0; /*0x48bc61*/
  return 0; /*0x48bc66*/
}


// ==== 0x0048BC70  sub_48BC70  this=-  sig=ida-proto ====
void sub_48BC70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48bc7c*/
  MEMORY[0x89E8B8] = Math::Sqrt(v0 + v0); /*0x48bc8e*/
}


// ==== 0x0048BCA0  sub_48BCA0  this=-  sig=ida-proto ====
void sub_48BCA0()
{
  MEMORY[0x89E908] = MEMORY[0x89E8B8] / 60.0; /*0x48bcac*/
}


// ==== 0x0048BCC0  sub_48BCC0  this=-  sig=ida-proto ====
void sub_48BCC0()
{
  MEMORY[0x89E8F0] = 1.0 / MEMORY[0x89E908]; /*0x48bccc*/
}


// ==== 0x0048BCE0  sub_48BCE0  this=-  sig=ida-proto ====
void sub_48BCE0()
{
  MEMORY[0x89E8E8] = 0.0174532925199433 * 45.0; /*0x48bcec*/
}


// ==== 0x0048BD00  sub_48BD00  this=-  sig=ida-proto ====
void sub_48BD00()
{
  MEMORY[0x89E8C0] = 0.0174532925199433 * 60.0; /*0x48bd0c*/
}


// ==== 0x0048BD20  sub_48BD20  this=-  sig=ida-proto ====
void sub_48BD20()
{
  MEMORY[0x89E898] = 0.0174532925199433 * 90.0; /*0x48bd2c*/
}


// ==== 0x0048BD40  sub_48BD40  this=-  sig=ida-proto ====
__int64 sub_48BD40()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E898] - MEMORY[0x89E8C0]); /*0x48bd52*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E8B8] * 0.5); /*0x48bd66*/
  MEMORY[0x89E910] = result; /*0x48bd6b*/
  return result; /*0x48bd70*/
}


// ==== 0x0048BD80  sub_48BD80  this=-  sig=ida-proto ====
void sub_48BD80()
{
  MEMORY[0x89E8C8] = Math::ArcTan((double)MEMORY[0x89E910] * 0.00390625); /*0x48bd97*/
}


// ==== 0x0048BDB0  sub_48BDB0  this=-  sig=ida-proto ====
void sub_48BDB0()
{
  MEMORY[0x89E8E0] = Math::ArcTan((double)(2 * MEMORY[0x89E910]) / MEMORY[0x89E8B8]); /*0x48bdd2*/
}


// ==== 0x0048BDE0  sub_48BDE0  this=-  sig=ida-proto ====
__int64 sub_48BDE0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E910]) + 0.5); /*0x48bdfb*/
  MEMORY[0x89E904] = result; /*0x48be00*/
  return result; /*0x48be06*/
}


// ==== 0x0048BE10  sub_48BE10  this=-  sig=ida-proto ====
int sub_48BE10()
{
  MEMORY[0x89E8B0] = 0; /*0x48be12*/
  MEMORY[0x89E8B2] = 0; /*0x48be18*/
  return 0; /*0x48be1e*/
}


// ==== 0x0048BE20  sub_48BE20  this=-  sig=ida-proto ====
int sub_48BE20()
{
  MEMORY[0x89E8D0] = 0; /*0x48be22*/
  MEMORY[0x89E8D4] = 0; /*0x48be27*/
  MEMORY[0x89E8D8] = 0; /*0x48be2c*/
  return 0; /*0x48be31*/
}


// ==== 0x0048BE40  sub_48BE40  this=-  sig=ida-proto ====
int sub_48BE40()
{
  MEMORY[0x89E900] = 0; /*0x48be45*/
  MEMORY[0x89E8F8] = 128; /*0x48be4f*/
  MEMORY[0x89E8FC] = 128; /*0x48be54*/
  return 128; /*0x48be59*/
}


// ==== 0x0048BE60  ConnectionClass::initConnection  this=ConnectionClass  sig=csp ====
void *__thiscall IPXConnClass::initConnection(
        void *this,
        IPXConnClass *aP1,
        int a3,
        ConnectionClass *aP3,
        IPXConnClass *aP4,
        int a6,
        int a7,
        TechnoTypeClass *aP7,
        CampaignScore *aP8)
{
  CommBufferClass *v10; // eax

  this->q012 = (_WORD)aP4; /*0x48be73*/
  this->q028 = a6; /*0x48be7b*/
  *(_DWORD *)this = &vt_ConnectionClass; /*0x48be83*/
  this->q01C = (char *)&aP3->LastPacketTime + 2; /*0x48be89*/
  this->q02C = a7; /*0x48be8c*/
  this->LastPacketTime = aP7; /*0x48be8f*/
  this->Active = __2_YAPAXI_Z((size_t)&aP3->LastPacketTime + 2); /*0x48be99*/
  v10 = (CommBufferClass *)__2_YAPAXI_Z(0x58u); /*0x48be9c*/
  if ( v10 ) /*0x48bea6*/
    this->PlayerIndex = sub_48B0E0(v10, (int)aP1, a3, this->q01C, (int)aP8); /*0x48bec2*/
  else
    this->PlayerIndex = 0; /*0x48becd*/
  return this; /*0x48bec7*/
}


// ==== 0x0048BEE0  ConnectionClass::dtor  this=ConnectionClass  sig=csp ====
void __thiscall ConnectionClass_Dtor(_DWORD *this)
{
  void *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void *)this->q020; /*0x48bee3*/
  *this = &vt_ConnectionClass; /*0x48bee6*/
  __3_YAXPAX_Z(v2); /*0x48beed*/
  v3 = (void (__thiscall ***)(_DWORD, int))this->PlayerIndex; /*0x48bef2*/
  if ( v3 ) /*0x48befb*/
    (**v3)(v3, 1); /*0x48bf01*/
}


// ==== 0x0048BF10  ConnectionClass::ZeroInitAndSetup  this=ConnectionClass  sig=csp ====
int __thiscall Struct_ZeroInitAndSetup(_DWORD *this)
{
  this->q034 = 0; /*0x48bf12*/
  this->q038 = 0; /*0x48bf15*/
  this->q03C = 0; /*0x48bf18*/
  this->q040 = 0; /*0x48bf1b*/
  this->Active = 0; /*0x48bf1e*/
  this->LastPacketTime = 0; /*0x48bf21*/
  this->PacketsSent = 0; /*0x48bf24*/
  this->PacketsReceived = 0; /*0x48bf27*/
  this->q018 = 0; /*0x48bf2a*/
  this->q044 = -1; /*0x48bf30*/
  this->q048 = -1; /*0x48bf33*/
  return Struct::ClearAllMemberFlags(this->PlayerIndex);
}


// ==== 0x0048BF40  ConnectionClass::sendAck  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::sendAck(int this, AnimClass *aP1, AnimClass *aP2, AnimClass *aP3, AnimClass *aP4)
{
  **(_WORD **)(this + 32) = *(_WORD *)(this + 36); /*0x48bf4b*/
  if ( aP3 ) /*0x48bf54*/
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 0; /*0x48bf59*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 64); /*0x48bf63*/
    Debug::Log(); /*0x48bf6f*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(this + 32) + 2) = 1; /*0x48bf7c*/
    *(_DWORD *)(*(_DWORD *)(this + 32) + 4) = *(_DWORD *)(this + 60); /*0x48bf86*/
  }
  if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8D63C].__pad_524[64] ) /*0x48bf99*/
    *(_BYTE *)(*(_DWORD *)(this + 32) + 3) = (_BYTE)aP4; /*0x48bfa2*/
  if ( *(_DWORD *)(this + 28) < (int)aP2 ) /*0x48bfae*/
  {
    Debug::Log(); /*0x48bfb6*/
    Debug::Log(); /*0x48bfc1*/
    return 0; /*0x48bfcd*/
  }
  qmemcpy((void *)(*(_DWORD *)(this + 32) + 14), aP1, (unsigned int)aP2); /*0x48bfe5*/
  if ( !ConnectionClass::queueSendPacket( /*0x48c006*/
          *(int **)(this + 4),
          *(const void **)(this + 32),
          (signed int)&aP2->__pad_C[2],
          0,
          0,
          0) )
    return 0; /*0x48c006*/
  if ( aP3 ) /*0x48c00e*/
    ++*(_DWORD *)(this + 64); /*0x48c015*/
  else
    ++*(_DWORD *)(this + 60); /*0x48c026*/
  return 1; /*0x48bfc9*/
}


// ==== 0x0048C040  ConnectionClass::receivePacket  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ReceivePacket(_DWORD *this, int a2, int a3)
{
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // edi
  _DWORD *TileIndex; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edi
  int TileType; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ecx
  int v20; // edi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int16 v25; // [esp+10h] [ebp-10h] BYREF
  char v26; // [esp+12h] [ebp-Eh]
  _BYTE v27[13]; // [esp+13h] [ebp-Dh]

  if ( *(_WORD *)a2 != this->q048 ) /*0x48c054*/
  {
    ++this->q018; /*0x48c05b*/
    return 0; /*0x48c066*/
  }
  v5 = *(_BYTE *)(a2 + 2); /*0x48c069*/
  if ( v5 != 2 ) /*0x48c06e*/
  {
    if ( v5 == 1 ) /*0x48c0d5*/
    {
      if ( *(_DWORD *)(this->PlayerIndex + 8) - *(_DWORD *)(this->PlayerIndex + 56) > 1 ) /*0x48c0e9*/
      {
        if ( ConnectionClass::allocPacketSlot(a2, a3, 0, 0) ) /*0x48c115*/
        {
          v10 = this->q034 + 1; /*0x48c14b*/
          this->q034 = v10; /*0x48c14c*/
          this->LastPacketTime = *(_DWORD *)(a2 + 4) - v10 + 1; /*0x48c155*/
          v11 = *(_DWORD *)(a2 + 4); /*0x48c158*/
          if ( v11 ) /*0x48c15d*/
            this->PacketsSent = 100 - 100 * v10 / (unsigned int)(v11 + 1); /*0x48c174*/
          return 1; /*0x48c17a*/
        }
        else
        {
          Debug::Log(); /*0x48c12d*/
          ++this->PacketsReceived; /*0x48c139*/
          return 0; /*0x48c13f*/
        }
      }
      else
      {
        ++this->PacketsReceived; /*0x48c0f4*/
        Debug::Log(); /*0x48c0f7*/
        return 0; /*0x48c0ff*/
      }
    }
    if ( !v5 ) /*0x48c188*/
    {
      v12 = this->q044; /*0x48c18e*/
      if ( *(_DWORD *)(a2 + 4) <= v12 && v12 != -1 ) /*0x48c19b*/
      {
LABEL_40:
        v23 = *(_DWORD *)(a2 + 4); /*0x48c288*/
        v25 = this->q048; /*0x48c28f*/
        v26 = 2; /*0x48c29c*/
        *(_DWORD *)&v27[1] = v23; /*0x48c2a1*/
        if ( MEMORY[0xA8DBA0] ) /*0x48c2a5*/
          v27[0] = *(_BYTE *)(a2 + 3); /*0x48c2aa*/
        else
          v27[0] = 0; /*0x48c2b0*/
        Debug::Log(); /*0x48c2c6*/
        v24 = MEMORY[0xA8EA0C]; /*0x48c2cb*/
        LOBYTE(v24) = this == (_DWORD *)MEMORY[0xA8EA0C]; /*0x48c2d7*/
        (*(void (__thiscall **)(_DWORD *, __int16 *, int, _DWORD, _DWORD, int, _DWORD))(*this + 36))( /*0x48c2ea*/
          this,
          &v25,
          14,
          0,
          0,
          v24,
          0);
        return 1; /*0x48c2f9*/
      }
      v13 = (_DWORD *)this->PlayerIndex; /*0x48c1a1*/
      v14 = 0; /*0x48c1a4*/
      if ( (int)v13[14] > 0 ) /*0x48c1ab*/
      {
        do /*0x48c1ae*/
        {
          TileType = Terrain::GetTileType(v13, v14); /*0x48c1ae*/
          if ( TileType ) /*0x48c1b5*/
          {
            v16 = *(_DWORD *)(TileType + 12); /*0x48c1b7*/
            if ( !*(_BYTE *)(v16 + 2) && *(_DWORD *)(v16 + 4) == *(_DWORD *)(a2 + 4) ) /*0x48c1c9*/
              goto LABEL_40; /*0x48c1c9*/
          }
          v13 = (_DWORD *)this->PlayerIndex; /*0x48c1cf*/
        }
        while ( ++v14 < v13[14] ); /*0x48c1ae*/
      }
      if ( (*(_DWORD *)(this->PlayerIndex + 8) - *(_DWORD *)(this->PlayerIndex + 56) > 1 || *(_DWORD *)(a2 + 4) == this->q044 + 1) /*0x48c216*/
        && ConnectionClass::allocPacketSlot(a2, a3, 0, 0) )
      {
        v17 = this->q044 + 1; /*0x48c23f*/
        ++this->q038; /*0x48c240*/
        v18 = *(_DWORD *)(a2 + 4); /*0x48c243*/
        if ( v18 == v17 ) /*0x48c248*/
        {
          while ( 1 ) /*0x48c24a*/
          {
            v19 = (_DWORD *)this->PlayerIndex; /*0x48c24a*/
            this->q044 = v18; /*0x48c24d*/
            v20 = 0; /*0x48c250*/
            if ( (int)v19[14] <= 0 ) /*0x48c257*/
              break; /*0x48c257*/
            while ( 1 ) /*0x48c25a*/
            {
              v21 = Terrain::GetTileType(v19, v20); /*0x48c25a*/
              if ( v21 ) /*0x48c261*/
              {
                v22 = *(_DWORD *)(v21 + 12); /*0x48c263*/
                if ( !*(_BYTE *)(v22 + 2) && *(_DWORD *)(v22 + 4) == this->q044 + 1 ) /*0x48c276*/
                  break; /*0x48c276*/
              }
              v19 = (_DWORD *)this->PlayerIndex; /*0x48c278*/
              if ( ++v20 >= v19[14] ) /*0x48c27f*/
                goto LABEL_40; /*0x48c27f*/
            }
            v18 = *(_DWORD *)(v22 + 4); /*0x48c283*/
          }
        }
        goto LABEL_40; /*0x48c257*/
      }
    }
    Debug::Log(); /*0x48c301*/
    return 0; /*0x48c309*/
  }
  Debug::Log(); /*0x48c079*/
  v6 = (_DWORD *)this->PlayerIndex; /*0x48c07e*/
  v7 = 0; /*0x48c084*/
  if ( (int)v6[10] > 0 ) /*0x48c08b*/
  {
    while ( 1 ) /*0x48c08e*/
    {
      TileIndex = (_DWORD *)Terrain::GetTileIndex(v6, v7); /*0x48c08e*/
      if ( TileIndex ) /*0x48c095*/
      {
        v9 = TileIndex[5]; /*0x48c097*/
        if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)(v9 + 4) && !*(_BYTE *)(v9 + 2) ) /*0x48c0a2*/
          break; /*0x48c0a2*/
      }
      v6 = (_DWORD *)this->PlayerIndex; /*0x48c0a9*/
      if ( ++v7 >= v6[10] ) /*0x48c0b0*/
        return 1; /*0x48c0be*/
    }
    *TileIndex |= 2u; /*0x48c0c1*/
  }
  return 1; /*0x48c059*/
}


// ==== 0x0048C320  ConnectionClass::processTileUpdate  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ProcessTileUpdate(_DWORD *this, void *a2, signed int *a3)
{
  int v4; // esi
  _DWORD *v5; // ecx
  int TileType; // eax
  int v7; // ecx
  char v8; // dl
  signed int v10; // edx
  bool v11; // zf

  v4 = 0; /*0x48c326*/
  v5 = (_DWORD *)this->PlayerIndex; /*0x48c328*/
  if ( (int)v5[14] <= 0 ) /*0x48c330*/
    return 0; /*0x48c36a*/
  while ( 1 ) /*0x48c333*/
  {
    TileType = Terrain::GetTileType(v5, v4); /*0x48c333*/
    if ( !TileType || (*(_BYTE *)TileType & 2) != 0 ) /*0x48c33f*/
      goto LABEL_7; /*0x48c33f*/
    v7 = *(_DWORD *)(TileType + 12); /*0x48c341*/
    v8 = *(_BYTE *)(v7 + 2); /*0x48c344*/
    if ( !v8 && *(_DWORD *)(v7 + 4) == this->q048 + 1 ) /*0x48c354*/
      break; /*0x48c354*/
    if ( v8 == 1 ) /*0x48c359*/
      goto LABEL_10; /*0x48c359*/
LABEL_7:
    v5 = (_DWORD *)this->PlayerIndex; /*0x48c35b*/
    if ( ++v4 >= v5[14] ) /*0x48c362*/
      return 0; /*0x48c362*/
  }
  this->q048 = *(_DWORD *)(v7 + 4); /*0x48c370*/
LABEL_10:
  v10 = *(_DWORD *)(TileType + 8) - 14; /*0x48c373*/
  v11 = *(_DWORD *)(TileType + 8) == 14; /*0x48c37e*/
  *(_DWORD *)TileType |= 2u; /*0x48c380*/
  if ( v10 >= 0 && !v11 ) /*0x48c382*/
    qmemcpy(a2, (const void *)(*(_DWORD *)(TileType + 12) + 14), v10); /*0x48c395*/
  *a3 = v10; /*0x48c3a5*/
  return 1; /*0x48c364*/
}


// ==== 0x0048C3B0  ConnectionClass::IsValid  this=ConnectionClass  sig=csp ====
BOOL __thiscall COMObject_IsValid(void *this)
{
  return (*(int (__thiscall **)(void *))(this->q01C)(this) /*0x48c3cc*/
      && (*(int (__thiscall **)(void *))(this->q020)(this);
}


// ==== 0x0048C3E0  ConnectionClass::serviceSendQueue  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass_ServiceSendQueue(unsigned int *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int TileIndex; // eax
  int v5; // ebx
  int v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebp
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  int v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x48c3e9*/
  v21 = 0; /*0x48c3eb*/
  v3 = (_DWORD *)this->PlayerIndex; /*0x48c3f3*/
  if ( (int)v3[10] > 0 ) /*0x48c3fb*/
  {
    do /*0x48c45f*/
    {
      TileIndex = Terrain::GetTileIndex(v3, v2); /*0x48c3fe*/
      v5 = TileIndex; /*0x48c403*/
      if ( (*(_BYTE *)TileIndex & 2) != 0 ) /*0x48c408*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) ) /*0x48c40d*/
        {
          v6 = MEMORY[0x887340]; /*0x48c419*/
          if ( MEMORY[0x887338] != -1 ) /*0x48c422*/
            v6 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48c434*/
          ConnectionClass::initQueue(v6 - *(_DWORD *)(v5 + 4)); /*0x48c43f*/
        }
        PacketQueue::ExtractEntry(0, 0, v2--, 0, 0, 0); /*0x48c452*/
      }
      v3 = (_DWORD *)this->PlayerIndex; /*0x48c458*/
      ++v2; /*0x48c45b*/
    }
    while ( v2 < v3[10] ); /*0x48c45f*/
  }
  v7 = 0; /*0x48c464*/
  v22 = *(_DWORD *)(this->PlayerIndex + 40); /*0x48c46b*/
  if ( v22 <= 0 ) /*0x48c46f*/
    return 1; /*0x48c46f*/
  do /*0x48c552*/
  {
    v8 = Terrain::GetTileIndex((_DWORD *)this->PlayerIndex, v7); /*0x48c47e*/
    if ( (*(_BYTE *)v8 & 2) == 0 ) /*0x48c483*/
    {
      v9 = MEMORY[0x887340]; /*0x48c48e*/
      if ( MEMORY[0x887338] != -1 ) /*0x48c497*/
        v9 += Timer::GetTicks() - MEMORY[0x887338]; /*0x48c4a9*/
      v10 = *(_DWORD *)(v8 + 8); /*0x48c4ab*/
      if ( v9 - v10 > this->q028 ) /*0x48c4b7*/
      {
        v11 = MEMORY[0xA8EA0C]; /*0x48c4bd*/
        LOWORD(v10) = *(_WORD *)(v8 + 32); /*0x48c4c3*/
        LOBYTE(v11) = this == (unsigned int *)MEMORY[0xA8EA0C]; /*0x48c4cb*/
        (*(void (__thiscall **)(unsigned int *, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*this + 36))( /*0x48c4e2*/
          this,
          *(_DWORD *)(v8 + 20),
          *(_DWORD *)(v8 + 16),
          *(_DWORD *)(v8 + 28),
          *(_DWORD *)(v8 + 24),
          v11,
          v10);
        v12 = *(_DWORD *)(v8 + 12); /*0x48c4e5*/
        *(_DWORD *)(v8 + 8) = v9; /*0x48c4e8*/
        if ( v12 ) /*0x48c4ed*/
        {
          ++this->Active; /*0x48c503*/
        }
        else
        {
          v13 = *(_DWORD *)(v8 + 20); /*0x48c4ef*/
          *(_DWORD *)(v8 + 4) = v9; /*0x48c4f2*/
          if ( *(_BYTE *)(v13 + 2) == 1 ) /*0x48c4f9*/
          {
            v14 = *(_DWORD *)v8; /*0x48c4fb*/
            LOBYTE(v14) = *(_DWORD *)v8 | 2; /*0x48c4fd*/
            *(_DWORD *)v8 = v14; /*0x48c4ff*/
          }
        }
        v15 = *(_DWORD *)(v8 + 12) + 1; /*0x48c509*/
        *(_DWORD *)(v8 + 12) = v15; /*0x48c50a*/
        v16 = this->q02C; /*0x48c50d*/
        if ( v16 != -1 && v15 > v16 ) /*0x48c519*/
        {
          v17 = *(_DWORD *)v8; /*0x48c51b*/
          v21 = 1; /*0x48c51d*/
          LOBYTE(v17) = *(_DWORD *)v8 | 4; /*0x48c525*/
          *(_DWORD *)v8 = v17; /*0x48c527*/
        }
        v18 = this->LastPacketTime; /*0x48c529*/
        if ( v18 != -1 && *(_DWORD *)(v8 + 8) - *(_DWORD *)(v8 + 4) > v18 ) /*0x48c53b*/
        {
          v19 = *(_DWORD *)v8; /*0x48c53d*/
          v21 = 1; /*0x48c53f*/
          LOBYTE(v19) = *(_DWORD *)v8 | 4; /*0x48c547*/
          *(_DWORD *)v8 = v19; /*0x48c549*/
        }
      }
    }
    ++v7; /*0x48c54f*/
  }
  while ( v7 < v22 ); /*0x48c552*/
  if ( !v21 ) /*0x48c55e*/
    return 1; /*0x48c57a*/
  Debug::Log(); /*0x48c565*/
  return 0; /*0x48c56f*/
}


// ==== 0x0048C590  ConnectionClass::StubReturnFalse  this=ConnectionClass  sig=csp ====
int ConnectionClass::_vt06()
{
  return 0; /*0x48c592*/
}


// ==== 0x0048C5A0  ConnectionClass::connect  this=ConnectionClass  sig=csp ====
int __thiscall ConnectionClass::_vt08(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int TileType; // eax
  int v5; // eax

  v2 = 0; /*0x48c5a4*/
  v3 = (_DWORD *)this->PlayerIndex; /*0x48c5a6*/
  if ( (int)v3[14] > 0 ) /*0x48c5ae*/
  {
    do /*0x48c5e7*/
    {
      TileType = Terrain::GetTileType(v3, v2); /*0x48c5b1*/
      if ( (*(_BYTE *)TileType & 2) != 0 ) /*0x48c5b9*/
      {
        v5 = *(_DWORD *)(TileType + 12); /*0x48c5bb*/
        if ( *(_BYTE *)(v5 + 2) == 1 || *(_DWORD *)(v5 + 4) < this->q044 ) /*0x48c5cc*/
          PacketQueue::ReleaseEntry((_DWORD *)this->PlayerIndex, 0, 0, v2--, 0, 0); /*0x48c5da*/
      }
      v3 = (_DWORD *)this->PlayerIndex; /*0x48c5e0*/
      ++v2; /*0x48c5e3*/
    }
    while ( v2 < v3[14] ); /*0x48c5e7*/
  }
  return 1; /*0x48c5e9*/
}


// ==== 0x0048C650  ConnectionClass::QueryInterface  this=ConnectionClass  sig=csp ====
ConnectionClass *__thiscall ConnectionClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // ecx

  v3 = (void *)*(Block + 8); /*0x48c653*/
  *Block = &vt_ConnectionClass; /*0x48c656*/
  __3_YAXPAX_Z(v3); /*0x48c65d*/
  v4 = (void (__thiscall ***)(_DWORD, int))*(Block + 1); /*0x48c662*/
  if ( v4 ) /*0x48c66a*/
    (**v4)(v4, 1); /*0x48c670*/
  if ( (a2 & 1) != 0 ) /*0x48c677*/
    __3_YAXPAX_Z(Block); /*0x48c67a*/
  return (ConnectionClass *)Block; /*0x48c684*/
}


// ==== 0x0048C690  sub_48C690  this=-  sig=ida-proto ====
int sub_48C690()
{
  MEMORY[0x89E930] = 0; /*0x48c692*/
  MEMORY[0x89E934] = 0; /*0x48c697*/
  MEMORY[0x89E938] = 0; /*0x48c69c*/
  MEMORY[0x89E93C] = 0; /*0x48c6a1*/
  return 0; /*0x48c6a6*/
}


// ==== 0x0048C6B0  sub_48C6B0  this=-  sig=ida-proto ====
void sub_48C6B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48c6bc*/
  MEMORY[0x89E948] = Math::Sqrt(v0 + v0); /*0x48c6ce*/
}


// ==== 0x0048C6E0  sub_48C6E0  this=-  sig=ida-proto ====
void sub_48C6E0()
{
  MEMORY[0x89E9A0] = MEMORY[0x89E948] / 60.0; /*0x48c6ec*/
}


// ==== 0x0048C700  sub_48C700  this=-  sig=ida-proto ====
void sub_48C700()
{
  MEMORY[0x89E988] = 1.0 / MEMORY[0x89E9A0]; /*0x48c70c*/
}


// ==== 0x0048C720  sub_48C720  this=-  sig=ida-proto ====
void sub_48C720()
{
  MEMORY[0x89E980] = 0.0174532925199433 * 45.0; /*0x48c72c*/
}


// ==== 0x0048C740  sub_48C740  this=-  sig=ida-proto ====
void sub_48C740()
{
  MEMORY[0x89E958] = 0.0174532925199433 * 60.0; /*0x48c74c*/
}


// ==== 0x0048C760  sub_48C760  this=-  sig=ida-proto ====
void sub_48C760()
{
  MEMORY[0x89E918] = 0.0174532925199433 * 90.0; /*0x48c76c*/
}


// ==== 0x0048C780  sub_48C780  this=-  sig=ida-proto ====
__int64 sub_48C780()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E918] - MEMORY[0x89E958]); /*0x48c792*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E948] * 0.5); /*0x48c7a6*/
  MEMORY[0x89E9A8] = result; /*0x48c7ab*/
  return result; /*0x48c7b0*/
}


// ==== 0x0048C7C0  sub_48C7C0  this=-  sig=ida-proto ====
void sub_48C7C0()
{
  MEMORY[0x89E960] = Math::ArcTan((double)MEMORY[0x89E9A8] * 0.00390625); /*0x48c7d7*/
}


// ==== 0x0048C7F0  sub_48C7F0  this=-  sig=ida-proto ====
void sub_48C7F0()
{
  MEMORY[0x89E978] = Math::ArcTan((double)(2 * MEMORY[0x89E9A8]) / MEMORY[0x89E948]); /*0x48c812*/
}


// ==== 0x0048C820  sub_48C820  this=-  sig=ida-proto ====
__int64 sub_48C820()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89E9A8]) + 0.5); /*0x48c83b*/
  MEMORY[0x89E99C] = result; /*0x48c840*/
  return result; /*0x48c846*/
}


// ==== 0x0048C850  sub_48C850  this=-  sig=ida-proto ====
int sub_48C850()
{
  MEMORY[0x89E940] = 0; /*0x48c852*/
  MEMORY[0x89E942] = 0; /*0x48c858*/
  return 0; /*0x48c85e*/
}


// ==== 0x0048C860  sub_48C860  this=-  sig=ida-proto ====
int sub_48C860()
{
  MEMORY[0x89E968] = 0; /*0x48c862*/
  MEMORY[0x89E96C] = 0; /*0x48c867*/
  MEMORY[0x89E970] = 0; /*0x48c86c*/
  return 0; /*0x48c871*/
}


// ==== 0x0048C880  sub_48C880  this=-  sig=ida-proto ====
int sub_48C880()
{
  MEMORY[0x89E998] = 0; /*0x48c885*/
  MEMORY[0x89E990] = 128; /*0x48c88f*/
  MEMORY[0x89E994] = 128; /*0x48c894*/
  return 128; /*0x48c899*/
}


// ==== 0x0048C8A0  nullsub_112  this=-  sig=ida-proto ====
void nullsub_112()
{
  ; /*0x48c8a0*/
}


// ==== 0x0048C8B0  ObjectClass::MainGameFrame  this=ObjectClass  sig=csp ====
int MainGameFrame()
{
  int result; // eax
  int v1; // eax
  bool v2; // zf
  char *v3; // eax
  char *v4; // eax
  #72 *StringCSF; // eax
  char *v6; // eax
  _BYTE v7[4]; // [esp+8h] [ebp-154h] BYREF
  char v8[112]; // [esp+Ch] [ebp-150h] BYREF
  char v9[112]; // [esp+7Ch] [ebp-E0h] BYREF
  char v10[112]; // [esp+ECh] [ebp-70h] BYREF

  result = dword_A8ED54[19]; /*0x48c8b0*/
  if ( !dword_A8ED54[19] ) /*0x48c8c0*/
    return result; /*0x48c8c0*/
  if ( MEMORY[0x87F7E8][536212] ) /*0x48c8cc*/
  {
    result = MEMORY[0x87F7E8][528729]; /*0x48c8ce*/
    if ( *(_BYTE *)(MEMORY[0x87F7E8][528729] + 504) /*0x48c8ef*/
      || *(_BYTE *)(MEMORY[0x87F7E8][528729] + 503)
      || *(_BYTE *)(MEMORY[0x87F7E8][528729] + 502) )
    {
      goto LABEL_15; /*0x48c8f7*/
    }
    if ( !g_GameLoopActive ) /*0x48c905*/
    {
      if ( *(_BYTE *)(MEMORY[0x87F7E8][528729] + 501) ) /*0x48c907*/
      {
        g_GameLoopActive = 1; /*0x48c911*/
        goto LABEL_9; /*0x48c911*/
      }
LABEL_15:
      dword_A8ED54[19] = 0; /*0x48c98a*/
      return result; /*0x48c997*/
    }
  }
LABEL_9:
  ScenarioClass::CleanupTemporary(); /*0x48c918*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 20))(MEMORY[0x87F7E8][8086]); /*0x48c925*/
  while ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 40))(MEMORY[0x87F7E8][8086]) ) /*0x48c930*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x48c93f*/
  v1 = dword_A8ED54[19]; /*0x48c951*/
  if ( dword_A8ED54[19] ) /*0x48c95a*/
  {
    while ( 2 ) /*0x48c968*/
    {
      switch ( v1 ) /*0x48c968*/
      {
        case 1: /*0x48c968*/
          OpenGameUI(); /*0x48c9ba*/
          v1 = dword_A8ED54[19]; /*0x48c9bf*/
          v2 = dword_A8ED54[19] == 1; /*0x48c9c4*/
          goto LABEL_17; /*0x48c9c7*/
        case 2: /*0x48c968*/
          if ( dword_A8ED54[51421] ) /*0x48cb40*/
          {
LABEL_34:
            Network::AddFrameEvent(); /*0x48cb42*/
          }
          else if ( !*(_BYTE *)(MEMORY[0x87F7E8][528729] + 501) /*0x48cb7b*/
                 && !*(_BYTE *)(MEMORY[0x87F7E8][528729] + 503)
                 && !*(_BYTE *)(MEMORY[0x87F7E8][528729] + 504)
                 && !*(_BYTE *)(MEMORY[0x87F7E8][528729] + 502) )
          {
            StringCSF = GetStringCSF((#72 *)aTxtSurrender, 0, g_Str_File_Conquer_CPP, 487); /*0x48cb9a*/
            if ( ShowConfirmDialog(StringCSF) ) /*0x48cba1*/
            {
              v6 = EventClass::AddEvent(v10, *(_DWORD *)(MEMORY[0x87F7E8][528729] + 48), 8u); /*0x48cbc0*/
              if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x48cbcf*/
              {
                qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v6, 0x6Fu); /*0x48cbeb*/
                MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x48cbfc*/
                MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x48cc13*/
                ++MEMORY[0x87F7E8][524984]; /*0x48cc19*/
              }
              Network::AddFrameEvent(); /*0x48cc1e*/
              g_GameLoopActive = 0; /*0x48cc23*/
            }
          }
          goto LABEL_44; /*0x48cb47*/
        case 3: /*0x48c968*/
          switch ( ShowGameDialog() ) /*0x48ca2d*/
          {
            case 2: /*0x48ca2d*/
              goto LABEL_34;
            case 3: /*0x48ca2d*/
              v3 = EventClass::AddEvent(v8, *(_DWORD *)(MEMORY[0x87F7E8][528729] + 48), 8u); /*0x48ca43*/
              if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x48ca52*/
              {
                qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v3, 0x6Fu); /*0x48ca6e*/
                MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x48ca7f*/
                MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x48ca96*/
                ++MEMORY[0x87F7E8][524984]; /*0x48ca9c*/
              }
              g_GameLoopActive = 0; /*0x48caa1*/
              goto LABEL_34; /*0x48caa8*/
            case 4: /*0x48ca2d*/
              v4 = EventClass::AddEvent(v9, *(_DWORD *)(MEMORY[0x87F7E8][528729] + 48), 8u); /*0x48cac4*/
              if ( MEMORY[0x87F7E8][524984] < 128 ) /*0x48cad3*/
              {
                qmemcpy((char *)&MEMORY[0x87F7E8][524987] + 111 * MEMORY[0x87F7E8][524986], v4, 0x6Fu); /*0x48caef*/
                MEMORY[0x87F7E8][MEMORY[0x87F7E8][524986] + 528539] = ((int (*)(void))timeGetTime)(); /*0x48cb00*/
                MEMORY[0x87F7E8][524986] = (LOBYTE(MEMORY[0x87F7E8][524986]) + 1) & 0x7F; /*0x48cb17*/
                ++MEMORY[0x87F7E8][524984]; /*0x48cb1d*/
              }
              g_GameLoopActive = 0; /*0x48cb22*/
              break; /*0x48cb29*/
            case 5: /*0x48ca2d*/
              LOBYTE(MEMORY[0x87F7E8][53878]) = 1; /*0x48cb2e*/
              break; /*0x48cb35*/
            default:
              goto LABEL_44;
          }
          goto LABEL_44;
        case 4: /*0x48c968*/
          ShowHotkeyOptionsDialog(); /*0x48ca08*/
          v1 = 5; /*0x48ca0d*/
          dword_A8ED54[19] = 5; /*0x48ca12*/
          continue; /*0x48ca17*/
        case 5: /*0x48c968*/
          Main::CreateDialog((#44 *)v7); /*0x48c9cd*/
          v1 = dword_A8ED54[19]; /*0x48c9d2*/
          if ( dword_A8ED54[19] != 5 ) /*0x48c9da*/
            goto LABEL_18; /*0x48c9da*/
          v1 = 1; /*0x48c9dc*/
          dword_A8ED54[19] = 1; /*0x48c9e1*/
          continue; /*0x48c9e6*/
        case 6: /*0x48c968*/
          ShowAudioSettingsDialog(); /*0x48c9ef*/
          v1 = 5; /*0x48c9f4*/
          dword_A8ED54[19] = 5; /*0x48c9f9*/
          continue; /*0x48c9fe*/
        case 7: /*0x48c968*/
          ShowWOLLobbyDialog(); /*0x48cc2c*/
          goto LABEL_44; /*0x48cc2c*/
        case 8: /*0x48c968*/
          ShowDiplomacyDialog(); /*0x48c99d*/
          v1 = dword_A8ED54[19]; /*0x48c9a2*/
          v2 = dword_A8ED54[19] == 8; /*0x48c9a7*/
LABEL_17:
          if ( !v2 ) /*0x48c9aa*/
            goto LABEL_18; /*0x48c9aa*/
          goto LABEL_44; /*0x48c9aa*/
        case 9: /*0x48c968*/
          ScenarioClass::ShowMissionBriefing((unsigned __int8 *)MEMORY[0x87F7E8][536210]); /*0x48c975*/
          v1 = dword_A8ED54[19]; /*0x48c97a*/
          if ( dword_A8ED54[19] != 9 ) /*0x48c982*/
            goto LABEL_18; /*0x48c982*/
LABEL_44:
          dword_A8ED54[19] = 0; /*0x48cc31*/
          goto LABEL_45; /*0x48cc31*/
        default:
LABEL_18:
          if ( v1 ) /*0x48c9b2*/
            continue; /*0x48c9b2*/
          goto LABEL_45; /*0x48c9b2*/
      }
    }
  }
LABEL_45:
  ((void (__stdcall *)(int))UpdateWindow)(dword_A8ED54[233983]); /*0x48cc37*/
  if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13730) ) /*0x48cc4b*/
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x48cc5d*/
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 24))(MEMORY[0x87F7E8][8086]); /*0x48cc68*/
  WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x48cc70*/
  return PostFrameCleanup(); /*0x48c990*/
}


// ==== 0x0048CCC0  ObjectClass::MainGame  this=ObjectClass  sig=csp ====
char MainGame()
{
  int inited; // eax
  #72 *StringCSF; // eax
  #72 *v2; // eax
  char v3; // cl
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v8; // [esp+0h] [ebp-1C30h] BYREF
  _BYTE MultiByteStr[5120]; // [esp+8h] [ebp-1C28h] BYREF
  _BYTE v10[2048]; // [esp+1408h] [ebp-828h] BYREF
  _DWORD mbp[10]; // [esp+1C08h] [ebp-28h] BYREF
  int savedregs; // [esp+1C30h] [ebp+0h] BYREF

  inited = InitGame(); /*0x48cccf*/
  if ( inited ) /*0x48ccd8*/
  {
    if ( inited < 0 ) /*0x48ccde*/
    {
      StringCSF = GetStringCSF((#72 *)aTxtInitgameFai, 0, g_Str_File_Conquer_CPP, 566); /*0x48cd05*/
      ((void (__stdcall *)(_DWORD, _DWORD, #72 *, int, _BYTE *, int, _DWORD, _DWORD))WideCharToMultiByte)( /*0x48cd13*/
        0,
        0,
        StringCSF,
        -1,
        MultiByteStr,
        5120,
        0,
        0);
      v2 = GetStringCSF((#72 *)g_Str_TXT_SHORT_TITLE, 0, g_Str_File_Conquer_CPP, 567); /*0x48cd36*/
      ((void (__stdcall *)(_DWORD, _DWORD, #72 *, int, _BYTE *, int, _DWORD, _DWORD))WideCharToMultiByte)( /*0x48cd3e*/
        0,
        0,
        v2,
        -1,
        v10,
        2048,
        0,
        0);
      mbp[2] = dword_A8ED54[233831]; /*0x48cd4b*/
      mbp[1] = dword_A8ED54[233983]; /*0x48cd4e*/
      mbp[0] = 40; /*0x48cd61*/
      mbp[3] = MultiByteStr; /*0x48cd68*/
      mbp[4] = v10; /*0x48cd6b*/
      mbp[5] = 327696; /*0x48cd6e*/
      memset(&mbp[6], 0, 12); /*0x48cd75*/
      mbp[9] = 1024; /*0x48cd7e*/
      LOBYTE(inited) = MessageBoxIndirectA((const MSGBOXPARAMSA *)mbp); /*0x48cd85*/
    }
    return inited; /*0x48cd90*/
  }
  MEMORY[0x87F7E8][53413] = &v8; /*0x48cd91*/
  MEMORY[0x87F7E8][53415] = &savedregs; /*0x48cd97*/
  MEMORY[0x87F7E8][53414] = &loc_48CDA8; /*0x48cda3*/
  Debug::Log(); /*0x48cdb4*/
  Debug::Log(); /*0x48cdc5*/
  LOBYTE(inited) = MenuSelect(); /*0x48cdd3*/
  while ( (_BYTE)inited ) /*0x48cdda*/
  {
    MEMORY[0x87F7E8][539633] = 0; /*0x48cdf0*/
    g_MenuReturnState = 1; /*0x48cdf6*/
    FadePalette(&MEMORY[0x87F7E8][6118], 15, 0); /*0x48cdfd*/
    Timer::PumpMessages(MEMORY[0x87F6C0][44]); /*0x48ce08*/
    if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x48ce14*/
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 12))(MEMORY[0x87F7E8][8086]); /*0x48ce1e*/
      dword_A8ED54[47146] = 0; /*0x48ce21*/
      dword_A8ED54[47147] = 0; /*0x48ce27*/
    }
    if ( MEMORY[0x87F7E8][536212] == 4 ) /*0x48ce33*/
    {
      InitSkirmishSettings(); /*0x48ce35*/
      LOBYTE(dword_A8ED54[747]) = 0; /*0x48ce3a*/
      dword_A8ED54[128025] = 0; /*0x48ce40*/
      LOBYTE(dword_A8ED54[128009]) = 0; /*0x48ce46*/
    }
    if ( MEMORY[0x87F7E8][7904] ) /*0x48ce54*/
      Tooltip::Enable((void *)MEMORY[0x87F7E8][7904], MEMORY[0x87F7E8][539878]); /*0x48ce5d*/
    v3 = *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13730); /*0x48ce67*/
    dword_A8ED54[19] = 0; /*0x48ce6d*/
    LOBYTE(dword_A8ED54[18]) = v3; /*0x48ce73*/
    g_GameLoopActive = 1; /*0x48ce7e*/
    WTFMode::Init(&MEMORY[0x87F7E8][536212]); /*0x48ce85*/
    do /*0x48cea8*/
    {
      if ( GameFrameLoop() && (unsigned __int8)GameFrameCheck() ) /*0x48ce93*/
        break; /*0x48ce9a*/
      MainGameFrame(); /*0x48ce9c*/
    }
    while ( !(unsigned __int8)GameFrameCheck() ); /*0x48cea8*/
    InitLoadingScreenResources(); /*0x48ceaa*/
    WTFMode::Shutdown(&MEMORY[0x87F7E8][536212]); /*0x48ceb4*/
    LOBYTE(dword_A8ED54[2]) = 0; /*0x48cebf*/
    LOBYTE(MEMORY[0x87F7E8][539364]) = 0; /*0x48cec7*/
    Debug::Log(); /*0x48cee2*/
    DumpNetworkStats(); /*0x48ceea*/
    if ( !g_Is16BitMode ) /*0x48cef5*/
      FadePalette(&MEMORY[0x87F7E8][5542], 30, 0); /*0x48cf02*/
    LOBYTE(v4) = 1; /*0x48cf07*/
    ScreenSaver::Process(v4); /*0x48cf09*/
    if ( (MEMORY[0x87F7E8][538500] & 3) != 0 ) /*0x48cf15*/
      CCFileClass::Reset(&MEMORY[0x87F7E8][538473]); /*0x48cf1c*/
    v5 = MEMORY[0x87F7E8][536212]; /*0x48cf21*/
    if ( MEMORY[0x87F7E8][536212] == 2 || MEMORY[0x87F7E8][536212] == 1 ) /*0x48cf2e*/
    {
      if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x48cf4c*/
        goto LABEL_27; /*0x48cf4c*/
      CleanupCampaignResources(); /*0x48cf4e*/
    }
    else
    {
      if ( MEMORY[0x87F7E8][536212] != 3 ) /*0x48cf33*/
        goto LABEL_28; /*0x48cf33*/
      if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x48cf3c*/
        goto LABEL_34; /*0x48cf3c*/
      Network::ShutdownInterface(); /*0x48cf3e*/
    }
    v5 = MEMORY[0x87F7E8][536212]; /*0x48cf53*/
LABEL_27:
    if ( v5 == 3 ) /*0x48cf5b*/
      goto LABEL_31; /*0x48cf5b*/
LABEL_28:
    if ( v5 == 4 || v5 == 2 || v5 == 1 ) /*0x48cf69*/
    {
LABEL_31:
      if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x48cf72*/
        goto LABEL_34; /*0x48cf72*/
      ScenarioClass::SaveMultiplayerSettings((char *)&MEMORY[0x87F7E8][536212]); /*0x48cf79*/
    }
    if ( (MEMORY[0x87F7E8][538500] & 2) != 0 ) /*0x48cf85*/
    {
LABEL_34:
      v6 = MEMORY[0x87F7E8][538500]; /*0x48cf87*/
      LOBYTE(v6) = MEMORY[0x87F7E8][538500] & 0xFD; /*0x48cf92*/
      MEMORY[0x87F7E8][536212] = 0; /*0x48cf94*/
      MEMORY[0x87F7E8][538500] = v6; /*0x48cf9a*/
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 16))(MEMORY[0x87F7E8][8086]); /*0x48cfa1*/
    }
    LOBYTE(inited) = MenuSelect(); /*0x48cfa4*/
  }
  if ( MEMORY[0x87F7E8][8086] ) /*0x48cfbf*/
    LOBYTE(inited) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 20))(MEMORY[0x87F7E8][8086]); /*0x48cfc3*/
  return inited; /*0x48cd8b*/
}


// ==== 0x0048D080  Event::Dispatch  this=Event  sig=csp ====
char Event::Dispatch()
{
  int v0; // eax
  _BYTE v2[4]; // [esp+10h] [ebp-100h] BYREF
  _DWORD v3[6]; // [esp+14h] [ebp-FCh] BYREF
  _BYTE v4[228]; // [esp+2Ch] [ebp-E4h]

  UpdateAudioVideo(); /*0x48d08c*/
  if ( dword_A8ED54[187269] > 0 && *(_DWORD *)dword_A8ED54[187266] ) /*0x48d09f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)dword_A8ED54[187266] + 8))(*(_DWORD *)dword_A8ED54[187266]); /*0x48d0a7*/
  v0 = MEMORY[0x87F7E8][536212]; /*0x48d0aa*/
  if ( MEMORY[0x87F7E8][536212] == 3 || MEMORY[0x87F7E8][536212] == 4 ) /*0x48d0b7*/
  {
    Network::Dispatch(); /*0x48d0b9*/
    v0 = MEMORY[0x87F7E8][536212]; /*0x48d0be*/
  }
  if ( v0 == 1 ) /*0x48d0c6*/
  {
    if ( (MEMORY[0x87F7E8][538804] & 1) == 0 ) /*0x48d0da*/
      return v0; /*0x48d0da*/
    goto LABEL_11; /*0x48d0da*/
  }
  if ( v0 == 2 ) /*0x48d0cb*/
  {
LABEL_11:
    Stream::ReadPacket((int)&MEMORY[0x87F7E8][539810]); /*0x48d0e0*/
    if ( *(_BYTE *)(MEMORY[0x87F7E8][536210] + 13720) /*0x48d10f*/
      && ObjectTypeClass::CreateInstance((int)&MEMORY[0x87F7E8][539810], (int)v3, (int)v2) > 0 )
    {
      do /*0x48d15f*/
      {
        if ( v3[0] == 108 && v4[0] != MEMORY[0x87F7E8][538834] ) /*0x48d129*/
          Network::UpdateLatencyDisplay((int)&dword_A8ED54[55425], 1, (double)*(int *)&v4[1], NAN); /*0x48d144*/
      }
      while ( ObjectTypeClass::CreateInstance((int)&MEMORY[0x87F7E8][539810], (int)v3, (int)v2) > 0 ); /*0x48d15f*/
    }
    v0 = MEMORY[0x87F7E8][536212]; /*0x48d161*/
  }
  if ( v0 == 4 ) /*0x48d169*/
  {
    LOBYTE(v0) = BYTE2(dword_A8ED54[238619]); /*0x48d16b*/
    if ( !BYTE2(dword_A8ED54[238619]) ) /*0x48d172*/
    {
      v0 = time(0); /*0x48d176*/
      if ( v0 != MEMORY[0x87F7E8][31858] ) /*0x48d186*/
      {
        if ( dword_A8ED54[51462] && !dword_A8ED54[238622] ) /*0x48d199*/
          (*(void (__stdcall **)(int))(*(_DWORD *)dword_A8ED54[51462] + 12))(dword_A8ED54[51462]); /*0x48d19e*/
        if ( dword_A8ED54[51463] ) /*0x48d1a8*/
          (*(void (__stdcall **)(int))(*(_DWORD *)dword_A8ED54[51463] + 28))(dword_A8ED54[51463]); /*0x48d1ad*/
        v0 = time(0); /*0x48d1b2*/
        MEMORY[0x87F7E8][31858] = v0; /*0x48d1ba*/
      }
    }
  }
  return v0; /*0x48d1bf*/
}


// ==== 0x0048D1D0  Event_Dispatch::Return0  this=Event_Dispatch  sig=ida-proto ====
char Event_Dispatch_Return0()
{
  Event::Dispatch(); /*0x48d1d0*/
  return 0; /*0x48d1d7*/
}


// ==== 0x0048D1E0  Network::Dispatch  this=Network  sig=csp ====
char Network_Dispatch()
{
  int v0; // esi
  int i; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  bool v6; // zf
  const char *v7; // eax
  LPARAM *v8; // edi
  int v9; // ebx
  const void *v10; // ebp
  const void *v11; // eax
  int v12; // edi
  const char *v13; // eax
  int v14; // ecx
  unsigned __int16 v15; // ax
  const char *v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  const char *v25; // eax
  int v26; // ebx
  const void *v27; // eax
  LPARAM *v28; // esi
  int v29; // edi
  const void *v30; // ebp
  const void *v31; // eax
  int v32; // esi
  unsigned __int16 v33; // si
  int v34; // edi
  int j; // esi
  int v36; // edi
  int v37; // eax
  wchar_t *v38; // esi
  int v39; // eax
  int v40; // esi
  const void *v41; // eax
  char v43; // [esp+8h] [ebp-208h]
  int v44; // [esp+20h] [ebp-1F0h]
  int *v45; // [esp+20h] [ebp-1F0h]
  _WORD *v46; // [esp+24h] [ebp-1ECh]
  int v47; // [esp+24h] [ebp-1ECh]
  int v48; // [esp+28h] [ebp-1E8h] BYREF
  int v49; // [esp+2Ch] [ebp-1E4h] BYREF
  char v50[4]; // [esp+30h] [ebp-1E0h] BYREF
  int v51; // [esp+34h] [ebp-1DCh]
  char v52[8]; // [esp+38h] [ebp-1D8h] BYREF
  int v53; // [esp+40h] [ebp-1D0h] BYREF
  _DWORD v54[22]; // [esp+48h] [ebp-1C8h] BYREF
  __int16 v55; // [esp+A0h] [ebp-170h]
  char v56; // [esp+A2h] [ebp-16Eh]

  if ( (MEMORY[0x89E950] & 1) == 0 ) /*0x48d1fc*/
  {
    v0 = dword_81D4E4; /*0x48d1fe*/
    MEMORY[0x89E950] |= 1u; /*0x48d20d*/
    MEMORY[0x89E920] = Timer::GetTicks(&MEMORY[0x89E924]); /*0x48d218*/
    MEMORY[0x89E928] = v0; /*0x48d21d*/
    atexit(nullsub_8); /*0x48d228*/
  }
  MessageLoop(); /*0x48d230*/
  Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d23a*/
  if ( MEMORY[0xA8B238] == 4 ) /*0x48d24b*/
  {
    LOBYTE(i) = MEMORY[0xA8D60E]; /*0x48d251*/
    if ( MEMORY[0xA8D60E] ) /*0x48d258*/
      return i; /*0x48d258*/
    v2 = MEMORY[0x89E928]; /*0x48d263*/
    if ( MEMORY[0x89E920] != -1 ) /*0x48d26c*/
    {
      v3 = Timer::GetTicks(&MEMORY[0x89E924]) - MEMORY[0x89E920]; /*0x48d278*/
      if ( v3 >= v2 ) /*0x48d280*/
        goto LABEL_10; /*0x48d280*/
      v2 -= v3; /*0x48d282*/
    }
    if ( !v2 || MEMORY[0xA8E2A4] ) /*0x48d28f*/
    {
LABEL_10:
      if ( MEMORY[0xA8DA84] ) /*0x48d29c*/
      {
        MessageLoop(); /*0x48d2a2*/
        Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d2ac*/
        if ( !Network::GetQueueCount(&MEMORY[0xA8E9C0]) ) /*0x48d2b6*/
        {
          memset(v54, 0, sizeof(v54)); /*0x48d2cc*/
          v55 = 0; /*0x48d2ce*/
          v56 = 0; /*0x48d2d0*/
          v54[0] = 41; /*0x48d2d6*/
          CopyWideToChar(-1); /*0x48d2e6*/
          Network_Disconnect(); /*0x48d2eb*/
          Debug::Log(aSendingNetPort); /*0x48d2f5*/
          HIWORD(v4) = HIWORD(MEMORY[0xA8DA84]); /*0x48d2fa*/
          v5 = 1; /*0x48d304*/
          if ( MEMORY[0xA8DA84] > 1 ) /*0x48d306*/
          {
            v46 = (_WORD *)&MEMORY[0xA8E2B2] + 1; /*0x48d30c*/
            do /*0x48d484*/
            {
              LOWORD(v4) = *v46; /*0x48d318*/
              v6 = *v46 == 0; /*0x48d31b*/
              v48 = v4; /*0x48d31e*/
              if ( !v6 ) /*0x48d322*/
              {
                v7 = (const char *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5)); /*0x48d331*/
                Debug::Log("Sending to %s\n", v7); /*0x48d33c*/
                Network::SendMessage(v54, 91, 0, *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5) + 40, v48, 0); /*0x48d366*/
                MessageLoop(); /*0x48d36b*/
                Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d375*/
                v44 = 0; /*0x48d37a*/
                v8 = &MEMORY[0xA8DA90]; /*0x48d382*/
                while ( 1 ) /*0x48d38d*/
                {
                  v9 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d38d*/
                  v10 = (const void *)ToWideStringChar(*v8); /*0x48d399*/
                  v11 = (const void *)ToWideStringChar(v9); /*0x48d39b*/
                  if ( !_strcmpi(v10, v11) ) /*0x48d3a2*/
                    break; /*0x48d3a2*/
                  ++v8; /*0x48d3b2*/
                  ++v44; /*0x48d3bc*/
                  if ( (int)v8 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d3c0*/
                    goto LABEL_25; /*0x48d3c0*/
                }
                v12 = MEMORY[0x887340]; /*0x48d3cc*/
                if ( MEMORY[0x887338] != -1 ) /*0x48d3d5*/
                  v12 += Timer::GetTicks(&MEMORY[0x88733C]) - MEMORY[0x887338]; /*0x48d3e7*/
                if ( v12 - MEMORY[0xA8E284][v44] > 2400 ) /*0x48d3fa*/
                {
                  v13 = (const char *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5)); /*0x48d404*/
                  Debug::Log("No PORT_PROBE from %s in the last 40 seconds\n", v13); /*0x48d40f*/
                  v14 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d41d*/
                  v15 = *(_WORD *)(v14 + 131); /*0x48d420*/
                  if ( v15 != (_WORD)v48 && v15 >= 0x400u ) /*0x48d432*/
                  {
                    v16 = (const char *)ToWideStringChar(v14); /*0x48d434*/
                    Debug::Log("Sending to %s on mangled port from pserver\n", v16); /*0x48d43f*/
                    v17 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v5); /*0x48d44d*/
                    LOWORD(v18) = *(_WORD *)(v17 + 131); /*0x48d456*/
                    Network::SendMessage(v54, 91, 0, v17 + 40, v18, 0); /*0x48d46c*/
                  }
                }
              }
LABEL_25:
              HIWORD(v4) = HIWORD(MEMORY[0xA8DA84]); /*0x48d471*/
              ++v5; /*0x48d47a*/
              ++v46; /*0x48d480*/
            }
            while ( v5 < MEMORY[0xA8DA84] ); /*0x48d484*/
          }
          v49 = Timer::GetTicks(v50); /*0x48d49d*/
          v51 = 120; /*0x48d4a1*/
          while ( Network::GetQueueCount(&MEMORY[0xA8E9C0]) > 0 ) /*0x48d4b0*/
          {
            v19 = v51; /*0x48d4b6*/
            if ( v49 != -1 ) /*0x48d4bd*/
            {
              v20 = Timer::GetTicks(v50) - v49; /*0x48d4c8*/
              if ( v20 >= v19 ) /*0x48d4ce*/
                break; /*0x48d4ce*/
              v19 -= v20; /*0x48d4d0*/
            }
            if ( v19 <= 0 ) /*0x48d4d4*/
              break; /*0x48d4d4*/
            MessageLoop(); /*0x48d4d6*/
            Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48d4e0*/
          }
          v21 = dword_81D4E4; /*0x48d4f3*/
          MEMORY[0x89E920] = Timer::GetTicks(&v53); /*0x48d502*/
          MEMORY[0x89E924] = v53; /*0x48d510*/
          MEMORY[0x89E928] = v21; /*0x48d515*/
          MEMORY[0xA8E2A4] = 0; /*0x48d51b*/
          Connection::Close(&MEMORY[0xA8E9C0]); /*0x48d522*/
        }
      }
    }
  }
  LOBYTE(i) = MEMORY[0xA8D60E]; /*0x48d527*/
  if ( !MEMORY[0xA8D60E] ) /*0x48d52e*/
  {
    for ( i = Network::Send(&MEMORY[0xA8D638], &MEMORY[0xA8D800], &MEMORY[0xA8D804], &MEMORY[0xA8D810]); /*0x48d554*/
          i;
          i = Network::Send(&MEMORY[0xA8D638], &MEMORY[0xA8D800], &MEMORY[0xA8D804], &MEMORY[0xA8D810]) )
    {
      if ( MEMORY[0xA8D810] == -22012 ) /*0x48d563*/
      {
        v22 = MEMORY[0xA8D638]; /*0x48d569*/
        switch ( MEMORY[0xA8D638] ) /*0x48d583*/
        {
          case 10: /*0x48d583*/
            for ( j = 0; j < Network::GetSendCount(&MEMORY[0xA8E9C0]); ++j ) /*0x48d828*/
            {
              v36 = Network::GetConnectionSpeed(j); /*0x48d839*/
              v37 = Network::FindPlayerByID(v36); /*0x48d841*/
              if ( (unsigned __int8)GUID::Compare(v37) ) /*0x48d84c*/
                HandleNetworkPlayerDisconnect(v36, 0); /*0x48d859*/
            }
            break; /*0x48d86b*/
          case 12: /*0x48d583*/
            if ( (!MEMORY[0xA8D60D] || MEMORY[0xA8D74C] == WideString::Hash(&MEMORY[0xA8D610])) /*0x48d925*/
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111))
                 & (unsigned __int8)MEMORY[0xA8D667]) != 0) )
            {
              v38 = (wchar_t *)CharToWideString(MEMORY[0xA8D63C]); /*0x48d935*/
              v43 = Math::RoundToInt(*((double *)MEMORY[0x8871E0] + 664) * 900.0); /*0x48d955*/
              v39 = SessionClass::GetPlayerColorScheme(MEMORY[0xA8D748]); /*0x48d961*/
              MessageListClass::AddMessage( /*0x48d979*/
                v38,
                MEMORY[0xA8D748],
                (wchar_t *)((char *)&MEMORY[0xA8D667] + 1),
                v39,
                16454,
                v43,
                0);
              PlayVocClass(1.0, 0); /*0x48d995*/
              MapClass::MarkForRedraw(2); /*0x48d9a1*/
              wcscpy((wchar_t *)&MEMORY[0xA8D110] + 1, (wchar_t *)((char *)&MEMORY[0xA8D667] + 1)); /*0x48d9b0*/
            }
            break; /*0x48d9b8*/
          case 15: /*0x48d583*/
            Debug::Log(aProcessingNetP); /*0x48da4a*/
            v40 = 0; /*0x48da57*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48da5b*/
            {
              while ( 1 ) /*0x48da6e*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&MEMORY[0xA8D804]) ) /*0x48da6e*/
                {
                  v41 = (const void *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v40)); /*0x48da85*/
                  if ( !_strcmpi(v41, MEMORY[0xA8D63C]) ) /*0x48da8b*/
                    break; /*0x48da8b*/
                }
                if ( ++v40 >= MEMORY[0xA8DA84] ) /*0x48da9f*/
                  goto LABEL_95; /*0x48da9f*/
              }
              Network::UpdateLatencyDisplay(v40, (double)*(int *)&MEMORY[0xA8D667], NAN); /*0x48dabd*/
            }
            break; /*0x48dac2*/
          case 16: /*0x48d583*/
          case 19: /*0x48d583*/
            break;
          case 28: /*0x48d583*/
            Network::syncGameState(&MEMORY[0xA8D638], &MEMORY[0xA8D804]); /*0x48d594*/
            break; /*0x48d599*/
          case 29: /*0x48d583*/
            if ( (!MEMORY[0xA8D60D] || *(_DWORD *)(&MEMORY[0xA8D667] + 3) == WideString::Hash(&MEMORY[0xA8D610])) /*0x48da2f*/
              && (!MEMORY[0xA8DBA0]
               || ((unsigned __int8)Factory::GetLinkedIndex(*(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111))
                 & (unsigned __int8)MEMORY[0xA8D667]) != 0)
              && ((_BYTE)MEMORY[0xA8D110] && MEMORY[0xA8B238] == 3 || BYTE1(MEMORY[0xA8D110]) && MEMORY[0xA8B238] == 4) )
            {
              LOBYTE(v22) = HIBYTE(MEMORY[0xA8D667]); /*0x48da35*/
              PlayTauntClass(v22); /*0x48da3b*/
            }
            break; /*0x48da40*/
          case 32: /*0x48d583*/
            PlacePlayerBeacon( /*0x48d7cb*/
              SBYTE1(MEMORY[0xA8D673]),
              *(_DWORD *)&MEMORY[0xA8D667],
              *((_DWORD *)&MEMORY[0xA8D667] + 1),
              MEMORY[0xA8D66F],
              (char)MEMORY[0xA8D673]);
            break; /*0x48d7d0*/
          case 33: /*0x48d583*/
            Network::SendBeaconDelete(SBYTE1(MEMORY[0xA8D673]), (char)MEMORY[0xA8D673]); /*0x48d7ea*/
            break; /*0x48d7ef*/
          case 34: /*0x48d583*/
            Network::SendBeacon(&MEMORY[0xA8D667] + 1, SHIBYTE(MEMORY[0xA8D667]), (char)MEMORY[0xA8D667], 0); /*0x48d810*/
            break; /*0x48d815*/
          case 39: /*0x48d583*/
            if ( MEMORY[0xA8B238] == 4 ) /*0x48d5a4*/
            {
              if ( MEMORY[0xA8DBA0] ) /*0x48d5b1*/
              {
                v23 = 0; /*0x48d5bc*/
                if ( Network::GetSendCount(&MEMORY[0xA8E9C0]) > 0 ) /*0x48d5c5*/
                {
                  while ( Network::GetConnectionSpeed(v23) != *(_DWORD *)&MEMORY[0xA8D667] ) /*0x48d5de*/
                  {
                    if ( ++v23 >= Network::GetSendCount(&MEMORY[0xA8E9C0]) ) /*0x48d5ed*/
                      goto LABEL_95; /*0x48d5ed*/
                  }
                  v24 = Network::GetClass(*(_DWORD *)&MEMORY[0xA8D667]); /*0x48d5fa*/
                  v25 = (const char *)ToWideStringChar(v24); /*0x48d601*/
                  Debug::Log("Got NET_IM_STILL_HERE packet from %s.\n", v25); /*0x48d60c*/
                  Network_Helper_646DF0(v23); /*0x48d616*/
                }
              }
            }
            break; /*0x48d61b*/
          case 41: /*0x48d583*/
            Debug::Log( /*0x48d635*/
              "Got NET_PORT_PROBE packet from %s - port = %d\n",
              MEMORY[0xA8D63C],
              (unsigned __int16)MEMORY[0xA8D804]);
            v26 = 0; /*0x48d642*/
            if ( MEMORY[0xA8DA84] > 0 ) /*0x48d646*/
            {
              v45 = &MEMORY[0xA8E2B2]; /*0x48d64c*/
              do /*0x48d788*/
              {
                if ( (unsigned __int8)NetworkID::Compare(&MEMORY[0xA8D804]) ) /*0x48d665*/
                {
                  v27 = (const void *)ToWideStringChar(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26)); /*0x48d680*/
                  if ( !_strcmpi(v27, MEMORY[0xA8D63C]) ) /*0x48d686*/
                  {
                    v47 = 0; /*0x48d696*/
                    v28 = &MEMORY[0xA8DA90]; /*0x48d69a*/
                    while ( 1 ) /*0x48d6a6*/
                    {
                      v29 = *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26); /*0x48d6a6*/
                      v30 = (const void *)ToWideStringChar(*v28); /*0x48d6b0*/
                      v31 = (const void *)ToWideStringChar(v29); /*0x48d6b2*/
                      if ( !_strcmpi(v30, v31) ) /*0x48d6b9*/
                        break; /*0x48d6b9*/
                      ++v28; /*0x48d6c9*/
                      ++v47; /*0x48d6d3*/
                      if ( (int)v28 >= (int)&MEMORY[0xA8DAB0] ) /*0x48d6d7*/
                        goto LABEL_56; /*0x48d6d7*/
                    }
                    v32 = MEMORY[0x887340]; /*0x48d6e0*/
                    if ( MEMORY[0x887338] != -1 ) /*0x48d6e9*/
                      v32 += Timer::GetTicks(&MEMORY[0x88733C]) - MEMORY[0x887338]; /*0x48d6fb*/
                    MEMORY[0xA8E284][v47] = v32; /*0x48d701*/
LABEL_56:
                    v33 = MEMORY[0xA8D804]; /*0x48d708*/
                    if ( (_WORD)MEMORY[0xA8D804] != *(_WORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v26) + 40) /*0x48d724*/
                      || (_WORD)MEMORY[0xA8D804] != *(_WORD *)v45 )
                    {
                      Debug::Log(aStrangePortNum); /*0x48d72b*/
                      v34 = *(unsigned __int16 *)v45; /*0x48d739*/
                      if ( !v33 ) /*0x48d73f*/
                        v33 = 1234; /*0x48d741*/
                      *(_WORD *)v45 = v33; /*0x48d746*/
                      Network::SetPort(v33); /*0x48d756*/
                      Debug::Log("Adjusting port number for player %s from %d to %d\n", MEMORY[0xA8D63C], v34, v33); /*0x48d76d*/
                    }
                  }
                }
                ++v26; /*0x48d77e*/
                v45 = (int *)((char *)v45 + 2); /*0x48d784*/
              }
              while ( v26 < MEMORY[0xA8DA84] ); /*0x48d788*/
            }
            break; /*0x48d788*/
          case 47: /*0x48d583*/
            Debug::Log("Got NET_PORT_UNREACHABLE message from %s\n", MEMORY[0xA8D63C]); /*0x48d87c*/
            if ( MEMORY[0xA8B238] == 4 && MEMORY[0x887628] ) /*0x48d898*/
            {
              Network::processAcknowledgment(MEMORY[0xA8D63C]); /*0x48d8a8*/
              Network::GetAddress(v52, &v49, &v48); /*0x48d8be*/
              (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)MEMORY[0x887628] + 120))(MEMORY[0x887628], &v49, v48); /*0x48d8d5*/
            }
            break; /*0x48d8d8*/
          default:
            SendNetworkPlayerOptions(&MEMORY[0xA8D638], &MEMORY[0xA8D804]); /*0x48dace*/
            break; /*0x48dace*/
        }
      }
LABEL_95:
      MessageLoop(); /*0x48dad3*/
      Network::ReceiveLoop(&MEMORY[0xA8E9C0]); /*0x48dadd*/
    }
  }
  return i; /*0x48db08*/
}


// ==== 0x0048DB70  nullsub_8  this=-  sig=ida-proto ====
void __cdecl nullsub_8()
{
  ; /*0x48db70*/
}


// ==== 0x0048DB80  HouseClass::FindHouseIndexByName  this=ObjectClass  sig=csp ====
int __thiscall HouseClass::FindHouseIndexByName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48db87*/
    return -1; /*0x48dbac*/
  v2 = 0; /*0x48db89*/
  v3 = (const void **)&off_7E1B60; /*0x48db8b*/
  while ( _strcmpi(*v3, this) ) /*0x48db9e*/
  {
    ++v3; /*0x48dba0*/
    ++v2; /*0x48dba3*/
    if ( (int)v3 >= (int)&dword_7E1B74 ) /*0x48dbaa*/
      return -1; /*0x48dbaa*/
  }
  return v2; /*0x48dbac*/
}


// ==== 0x0048DBE0  ScenarioClass::FindTerrainTypeIndex  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall ScenarioClass::FindTerrainTypeIndex(void *this)
{
  ObjectClass *v2; // edi
  const char *v3; // esi

  v2 = 0; /*0x48dbe5*/
  v3 = "TEMPERATE"; /*0x48dbe7*/
  while ( _strcmpi(this, v3) ) /*0x48dbf8*/
  {
    v3 += 112; /*0x48dbfa*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x48dbfd*/
    if ( (int)v3 >= (int)&dbl_7E1E18 ) /*0x48dc04*/
      return (ObjectClass *)-1; /*0x48dc0c*/
  }
  return v2; /*0x48dc06*/
}


// ==== 0x0048DC90  MapClass::UnselectAll_ClearLimboLaunchers  this=MapClass  sig=csp ====
int MapClass_UnselectAll_ClearLimboLaunchers()
{
  int result; // eax
  int v1; // esi
  int v2; // edx
  int *v3; // ecx

  while ( MEMORY[0xA8ECC8] ) /*0x48dc97*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)MEMORY[0xA8ECBC] + 336))(*(_DWORD *)MEMORY[0xA8ECBC]); /*0x48dca2*/
  Selection::SetCurrent(0); /*0x48dcb3*/
  v3 = dword_89C3B0; /*0x48dcb8*/
  result = unk_89C410; /*0x431060*/
  if ( unk_89C410 ) /*0x431065*/
  {
    v1 = 8; /*0x431069*/
    do /*0x431085*/
    {
      v2 = 3; /*0x431070*/
      do /*0x431082*/
      {
        result = *v3; /*0x431075*/
        if ( *v3 ) /*0x431075*/
          *(_BYTE *)(result + 12) &= ~2u; /*0x43107b*/
        ++v3; /*0x43107e*/
        --v2; /*0x431081*/
      }
      while ( v2 ); /*0x431082*/
      --v1; /*0x431084*/
    }
    while ( v1 ); /*0x431085*/
  }
  return result; /*0x431089*/
}


// ==== 0x0048DCD0  TechnoTypeClass::GetByTypeAndIndex  this=TechnoTypeClass  sig=csp ====
int __fastcall FactoryClass_LookupType(int a1, int a2)
{
  int result; // eax

  switch ( a1 ) /*0x48dce0*/
  {
    case 1: /*0x48dce0*/
    case 40: /*0x48dce0*/
      result = *((_DWORD *)g_UnitTypeCount2 + a2); /*0x48dcec*/
      break; /*0x48dcef*/
    case 2: /*0x48dce0*/
    case 3: /*0x48dce0*/
      result = *((_DWORD *)MEMORY[0xA8B21C] + a2); /*0x48dd09*/
      break; /*0x48dd0c*/
    case 6: /*0x48dce0*/
    case 7: /*0x48dce0*/
      result = *((_DWORD *)g_TriggerTypeCount + a2); /*0x48dcf6*/
      break; /*0x48dcf9*/
    case 15: /*0x48dce0*/
    case 16: /*0x48dce0*/
      result = *((_DWORD *)MEMORY[0xA8E34C] + a2); /*0x48dcff*/
      break; /*0x48dd02*/
    default:
      result = 0; /*0x48dd0d*/
      break; /*0x48dd0d*/
  }
  return result; /*0x48dcef*/
}


// ==== 0x0048DD50  DiskSpace::CheckAvailable  this=DiskSpace  sig=ida-proto ====
DWORD DiskSpace_CheckAvailable()
{
  HMODULE ModuleHandleA; // eax
  FARPROC ProcAddress; // esi
  int v2; // esi
  DWORD v4; // esi
  DWORD SectorsPerCluster; // [esp+4h] [ebp-28h] BYREF
  DWORD BytesPerSector; // [esp+8h] [ebp-24h] BYREF
  DWORD NumberOfFreeClusters; // [esp+Ch] [ebp-20h] BYREF
  DWORD TotalNumberOfClusters; // [esp+10h] [ebp-1Ch] BYREF
  _DWORD v9[2]; // [esp+14h] [ebp-18h] BYREF
  _BYTE v10[8]; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v11[8]; // [esp+24h] [ebp-8h] BYREF

  Debug::Log(); /*0x48dd59*/
  ModuleHandleA = GetModuleHandleA(ModuleName); /*0x48dd66*/
  if ( ModuleHandleA ) /*0x48dd6e*/
  {
    ProcAddress = GetProcAddress(ModuleHandleA, ProcName); /*0x48dd80*/
    if ( ProcAddress ) /*0x48dd84*/
    {
      Debug::Log(); /*0x48dd8b*/
      if ( ((unsigned __int8 (__stdcall *)(_DWORD, _DWORD *, _BYTE *, _BYTE *))ProcAddress)(0, v9, v11, v10) ) /*0x48dda4*/
      {
        v2 = Math::RoundToInt(((double)v9[1] * 4294967296.0 + (double)v9[0]) * 0.0009765625); /*0x48dddb*/
        Debug::Log(); /*0x48dde6*/
        return v2; /*0x48ddf4*/
      }
      GetLastError(); /*0x48ddac*/
      Debug::Log(); /*0x48ddb8*/
    }
    else
    {
      GetLastError(); /*0x48ddf7*/
      Debug::Log(); /*0x48de03*/
    }
  }
  else
  {
    Debug::Log(); /*0x48de12*/
  }
  if ( !GetDiskFreeSpaceA(0, &SectorsPerCluster, &BytesPerSector, &NumberOfFreeClusters, &TotalNumberOfClusters) ) /*0x48de30*/
    return 0; /*0x48de65*/
  v4 = NumberOfFreeClusters * ((BytesPerSector * SectorsPerCluster) >> 10); /*0x48de46*/
  Debug::Log(); /*0x48de56*/
  return v4; /*0x48ddf0*/
}


// ==== 0x0048DE70  INIClass::readSection  this=INIClass  sig=csp ====
int __thiscall INIClass::readSection(char *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48de77*/
    return 0; /*0x48de9c*/
  v2 = 0; /*0x48de79*/
  v3 = (const void **)&off_7E523C; /*0x48de7b*/
  while ( _strcmpi(this, *v3) ) /*0x48de8e*/
  {
    ++v3; /*0x48de90*/
    ++v2; /*0x48de93*/
    if ( (int)v3 >= (int)&off_7E5288 ) /*0x48de9a*/
      return 0; /*0x48de9a*/
  }
  return v2; /*0x48de9c*/
}


// ==== 0x0048DEB0  ObjectClass::COMStub_48DEB0  this=IUnknown  sig=csp ====
int __thiscall sub_48DEB0(void *this)
{
  int v1; // eax

  v1 = SuperWeaponTypeClass::FindByName(this); /*0x48deb3*/
  if ( v1 == -1 ) /*0x48debd*/
    return 0; /*0x48dec8*/
  else
    return 1 << v1; /*0x48dec5*/
}


// ==== 0x0048DED0  ObjectClass::nullsub_51  this=ObjectClass  sig=csp ====
void nullsub_51()
{
  ; /*0x48ded0*/
}


// ==== 0x0048DEE0  sub_48DEE0  this=-  sig=csp ====
void __fastcall sub_48DEE0(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  bool v4; // zf

  if ( a1 ) /*0x48dee4*/
  {
    v3 = a3; /*0x48dee6*/
    if ( a3 ) /*0x48deec*/
    {
      if ( a2 <= 0 ) /*0x48def5*/
      {
LABEL_7:
        *(_DWORD *)(v3 - 4) = 2147450879; /*0x48df11*/
      }
      else
      {
        while ( 1 ) /*0x48def9*/
        {
          v4 = (unsigned __int16)*a1 == 0x7FFF; /*0x48def9*/
          *(_DWORD *)v3 = *a1; /*0x48defc*/
          if ( v4 && *(_WORD *)(v3 + 2) == 0x7FFF ) /*0x48df04*/
            break; /*0x48df04*/
          v3 += 4; /*0x48df06*/
          ++a1; /*0x48df09*/
          if ( --a2 <= 0 ) /*0x48df0f*/
            goto LABEL_7; /*0x48df0f*/
        }
      }
    }
  }
}


// ==== 0x0048DF30  ObjectClass::LookupNameIndex  this=ObjectClass  sig=csp ====
int __thiscall LookupNameIndex(void *this)
{
  int v2; // esi

  if ( !this ) /*0x48df36*/
    return -1; /*0x48df36*/
  if ( !_strcmpi(&stru_817460.sectionHead[1], this) ) /*0x48df3e*/
    return -1; /*0x48df3e*/
  v2 = 0; /*0x48df4f*/
  if ( (int)*(&g_MatrixTransformState + 356) <= 0 ) /*0x48df53*/
    return -1; /*0x48df75*/
  while ( _strcmpi(this, *((const void **)&(*(&g_MatrixTransformState + 353))->X + v2)) ) /*0x48df69*/
  {
    if ( ++v2 >= (int)*(&g_MatrixTransformState + 356) ) /*0x48df73*/
      return -1; /*0x48df73*/
  }
  return v2; /*0x48df75*/
}


// ==== 0x0048DF80  OverlayTypeClass::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall OverlayTypeClass::LookupByName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !_strcmpi(&stru_817460.sectionHead[1], this) || !this ) /*0x48df99*/
    return -1; /*0x48dfbe*/
  v2 = 0; /*0x48df9b*/
  v3 = (const void **)&unk_81DA28; /*0x48df9d*/
  while ( _strcmpi(*v3, this) ) /*0x48dfb0*/
  {
    ++v3; /*0x48dfb2*/
    ++v2; /*0x48dfb5*/
    if ( (int)v3 >= (int)&unk_81DA58 ) /*0x48dfbc*/
      return -1; /*0x48dfbc*/
  }
  return v2; /*0x48dfbe*/
}


// ==== 0x0048DFD0  sub_48DFD0  this=-  sig=csp ====
char *__fastcall sub_48DFD0(unsigned int a1)
{
  if ( a1 >= 0xC ) /*0x48dfd3*/
    return MEMORY[0x817474]; /*0x48dfdd*/
  else
    return unk_81DA28[a1]; /*0x48dfd5*/
}


// ==== 0x0048DFF0  ObjectTypeClass::loadTypeMember_48DFF0  this=ObjectClass  sig=csp ====
int __thiscall ObjectTypeClass::loadTypeMember_48DFF0(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48dff7*/
    return -1; /*0x48e01c*/
  v2 = 0; /*0x48dff9*/
  v3 = (const void **)&unk_81DA58; /*0x48dffb*/
  while ( _strcmpi(*v3, this) ) /*0x48e00e*/
  {
    ++v3; /*0x48e010*/
    ++v2; /*0x48e013*/
    if ( (int)v3 >= (int)off_81DA78 ) /*0x48e01a*/
      return -1; /*0x48e01a*/
  }
  return v2; /*0x48e01c*/
}


// ==== 0x0048E030  sub_48E030  this=-  sig=csp ====
char *__fastcall sub_48E030(unsigned int a1)
{
  if ( a1 >= 8 ) /*0x48e033*/
    return MEMORY[0x817474]; /*0x48e03d*/
  else
    return unk_81DA58[a1]; /*0x48e035*/
}


// ==== 0x0048E050  AnimTypeClass::LookupByName  this=ObjectClass  sig=csp ====
int __thiscall AnimTypeClass::LookupByName(void *this)
{
  int v2; // edi
  const void **v3; // esi

  if ( !this ) /*0x48e057*/
    return -1; /*0x48e07c*/
  v2 = 0; /*0x48e059*/
  v3 = (const void **)off_81DA78; /*0x48e05b*/
  while ( _strcmpi(*v3, this) ) /*0x48e06e*/
  {
    ++v3; /*0x48e070*/
    ++v2; /*0x48e073*/
    if ( (int)v3 >= (int)dword_81DA8C ) /*0x48e07a*/
      return -1; /*0x48e07a*/
  }
  return v2; /*0x48e07c*/
}


// ==== 0x0048E090  globalHelper_08E090  this=-  sig=csp ====
char *__fastcall sub_48E090(unsigned int a1)
{
  if ( a1 >= 5 ) /*0x48e093*/
    return MEMORY[0x817474]; /*0x48e09d*/
  else
    return off_81DA78[a1]; /*0x48e095*/
}


// ==== 0x0048E0B0  ObjectClass::DumpNetworkStats  this=ObjectClass  sig=csp ====
FILE *sub_48E0B0()
{
  FILE *result; // eax
  FILE *v1; // esi
  unsigned int v2; // eax
  int i; // edi
  _DWORD *v4; // eax
  unsigned __int16 *v5; // edi
  char *v6; // eax

  result = (FILE *)MEMORY[0xA8B238][0]; /*0x48e0b1*/
  if ( MEMORY[0xA8B238][0] == 4 )
  {
    result = fopen(aMpstatsTxt, Mode); /*0x48e0ca*/
    v1 = result; /*0x48e0cf*/
    if ( result )
    {
      fprintf(result, "Frames: %d\n", MEMORY[0xA8ED84]);
      if ( g_FrameCounter_Samples ) /*0x48e0f8*/
        v2 = g_FrameCounter_Total / (unsigned int)g_FrameCounter_Samples; /*0x48e101*/
      else
        v2 = 0; /*0x48e105*/
      fprintf(v1, "Average FPS: %d\n", v2);
      fprintf(v1, "Max MaxAhead: %d\n", MEMORY[0xA8B568]);
      fprintf(v1, "Latency setting: %d\n", MEMORY[0xA8DB9C]);
      fprintf(v1, "Game speed setting: %d\n", *(_DWORD *)MEMORY[0xA8EB60]);
      if ( MEMORY[0x887628] )
      {
        for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 72))(MEMORY[0x887628]); ++i )
        {
          v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)MEMORY[0x887628] + 76))(MEMORY[0x887628], i); /*0x48e16a*/
          if ( v4 )
            fprintf(
              v1,
              "Local address: %d.%d.%d.%d\n",
              (unsigned __int8)*v4,
              BYTE1(*v4),
              (unsigned __int8)BYTE2(*v4),
              HIBYTE(*v4));
        }
      }
      v5 = (unsigned __int16 *)&MEMORY[0xA8B5C4]; /*0x48e1ad*/
      do
      {
        if ( *((_BYTE *)v5 - 80) )
        {
          fprintf(v1, "\nName: %s\n", (const char *)v5 - 80);
          v6 = Network::FormatAddress(v5 + 6, 0); /*0x48e1d4*/
          fprintf(v1, "Address: %s\n", v6);
          fprintf(v1, "Max avg round trip: %d\n", *(_DWORD *)v5);
          fprintf(v1, "Max round trip: %d\n", *((_DWORD *)v5 - 4));
          fprintf(v1, "Resends: %d\n", *((_DWORD *)v5 - 3));
          fprintf(v1, "Frame sync stalls: %d\n", *((_DWORD *)v5 + 1));
          fprintf(v1, "Command cound stalls: %d\n", *((_DWORD *)v5 + 2));
          fprintf(v1, "Lost: %d\n", *((_DWORD *)v5 - 2));
          fprintf(v1, "Percent lost: %d\n", *((_DWORD *)v5 - 1));
        }
        v5 += 52; /*0x48e253*/
      }
      while ( (int)v5 < (int)MEMORY[0xA8B904] );
      return (FILE *)fclose(v1); /*0x48e263*/
    }
  }
  return result; /*0x48e26c*/
}


// ==== 0x0048E270  sub_48E270  this=-  sig=ida-proto ====
int sub_48E270()
{
  MEMORY[0x89E9C0] = 0; /*0x48e272*/
  MEMORY[0x89E9C4] = 0; /*0x48e277*/
  MEMORY[0x89E9C8] = 0; /*0x48e27c*/
  MEMORY[0x89E9CC] = 0; /*0x48e281*/
  return 0; /*0x48e286*/
}


// ==== 0x0048E290  sub_48E290  this=-  sig=ida-proto ====
void sub_48E290()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x48e29c*/
  MEMORY[0x89E9D8] = Math::Sqrt(v0 + v0); /*0x48e2ae*/
}


// ==== 0x0048E2C0  sub_48E2C0  this=-  sig=ida-proto ====
void sub_48E2C0()
{
  MEMORY[0x89EC18] = MEMORY[0x89E9D8] / 60.0; /*0x48e2cc*/
}


// ==== 0x0048E2E0  sub_48E2E0  this=-  sig=ida-proto ====
void sub_48E2E0()
{
  MEMORY[0x89EC00] = 1.0 / MEMORY[0x89EC18]; /*0x48e2ec*/
}


// ==== 0x0048E300  sub_48E300  this=-  sig=ida-proto ====
void sub_48E300()
{
  MEMORY[0x89EBF8] = 0.0174532925199433 * 45.0; /*0x48e30c*/
}


// ==== 0x0048E320  sub_48E320  this=-  sig=ida-proto ====
void sub_48E320()
{
  MEMORY[0x89E9E0] = 0.0174532925199433 * 60.0; /*0x48e32c*/
}


// ==== 0x0048E340  sub_48E340  this=-  sig=ida-proto ====
void sub_48E340()
{
  MEMORY[0x89E9B8] = 0.0174532925199433 * 90.0; /*0x48e34c*/
}


// ==== 0x0048E360  sub_48E360  this=-  sig=ida-proto ====
__int64 sub_48E360()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x89E9B8] - MEMORY[0x89E9E0]); /*0x48e372*/
  result = Math::RoundToInt(v0 * MEMORY[0x89E9D8] * 0.5); /*0x48e386*/
  MEMORY[0x89EC20] = result; /*0x48e38b*/
  return result; /*0x48e390*/
}


// ==== 0x0048E3A0  sub_48E3A0  this=-  sig=ida-proto ====
void sub_48E3A0()
{
  MEMORY[0x89E9E8] = Math::ArcTan((double)MEMORY[0x89EC20] * 0.00390625); /*0x48e3b7*/
}


// ==== 0x0048E3D0  sub_48E3D0  this=-  sig=ida-proto ====
void sub_48E3D0()
{
  MEMORY[0x89EBF0] = Math::ArcTan((double)(2 * MEMORY[0x89EC20]) / MEMORY[0x89E9D8]); /*0x48e3f2*/
}


// ==== 0x0048E400  sub_48E400  this=-  sig=ida-proto ====
__int64 sub_48E400()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x89EC20]) + 0.5); /*0x48e41b*/
  MEMORY[0x89EC14] = result; /*0x48e420*/
  return result; /*0x48e426*/
}


// ==== 0x0048E430  sub_48E430  this=-  sig=ida-proto ====
int sub_48E430()
{
  MEMORY[0x89E9D0] = 0; /*0x48e432*/
  MEMORY[0x89E9D2] = 0; /*0x48e438*/
  return 0; /*0x48e43e*/
}


// ==== 0x0048E440  sub_48E440  this=-  sig=ida-proto ====
int sub_48E440()
{
  MEMORY[0x89EA30] = 0; /*0x48e442*/
  MEMORY[0x89EA34] = 0; /*0x48e447*/
  MEMORY[0x89EA38] = 0; /*0x48e44c*/
  return 0; /*0x48e451*/
}


// ==== 0x0048E460  sub_48E460  this=-  sig=ida-proto ====
int sub_48E460()
{
  MEMORY[0x89EC10] = 0; /*0x48e465*/
  MEMORY[0x89EC08] = 128; /*0x48e46f*/
  MEMORY[0x89EC0C] = 128; /*0x48e474*/
  return 128; /*0x48e479*/
}


// ==== 0x0048E480  sub_48E480  this=-  sig=ida-proto ====
int sub_48E480()
{
  MEMORY[0x89E9F0][0] = 128; /*0x48e489*/
  MEMORY[0x89E9F4][0] = 128; /*0x48e493*/
  MEMORY[0x89E9FC] = 64; /*0x48e49b*/
  MEMORY[0x89EA00] = 64; /*0x48e4a5*/
  MEMORY[0x89EA08] = 192; /*0x48e4ab*/
  MEMORY[0x89EA0C] = 64; /*0x48e4b0*/
  MEMORY[0x89EA14] = 64; /*0x48e4bd*/
  MEMORY[0x89E9F8][0] = 0; /*0x48e4c4*/
  MEMORY[0x89EA04] = 0; /*0x48e4ca*/
  MEMORY[0x89EA10] = 0; /*0x48e4d0*/
  MEMORY[0x89EA18] = 192; /*0x48e4d6*/
  MEMORY[0x89EA1C] = 0; /*0x48e4dc*/
  MEMORY[0x89EA20] = 192; /*0x48e4e2*/
  MEMORY[0x89EA24] = 192; /*0x48e4e7*/
  MEMORY[0x89EA28] = 0; /*0x48e4ed*/
  return 192; /*0x48e4f3*/
}


// ==== 0x0048E500  sub_48E500  this=-  sig=ida-proto ====
int sub_48E500()
{
  MEMORY[0x89ECD8] = 0; /*0x48e502*/
  MEMORY[0x89ECDC] = 0; /*0x48e507*/
  MEMORY[0x89ECE0] = 0; /*0x48e50c*/
  MEMORY[0x89ECE4] = 0; /*0x48e511*/
  return 0; /*0x48e516*/
}


// ==== 0x0048E520  ControlClass::Construct  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::Construct(
        _DWORD *this,
        ControlClass *aP1,
        ControlClass *aP2,
        ControlClass *aP3,
        ControlClass *aP4,
        ControlClass *aP5,
        int a7,
        ControlClass *aP7)
{
  GadgetClass::Construct( /*0x48e543*/
    this,
    (GadgetClass *)aP2,
    (GadgetClass *)aP3,
    (GadgetClass *)aP4,
    aP5,
    (GadgetClass *)a7,
    (GadgetClass *)aP7);
  this->q028 = 0; /*0x48e54c*/
  this->q024 = aP1; /*0x48e553*/
  *this = &ControlClass::`vftable'; /*0x48e556*/
  return this; /*0x48e55e*/
}


// ==== 0x0048E570  ControlClass::CtorFromData  this=ControlClass  sig=csp ====
_DWORD *__thiscall ControlClass::CtorFromData(_DWORD *this, EditClass *aP1)
{
  ControlClass::Constructor(this, aP1); /*0x48e579*/
  this->q024 = aP1[9]; /*0x48e581*/
  this->q028 = aP1[10]; /*0x48e587*/
  *this = &ControlClass::`vftable'; /*0x48e58a*/
  return this; /*0x48e592*/
}


// ==== 0x0048E5A0  ControlClass::Draw  this=ControlClass  sig=csp ====
int __thiscall CellClass_Draw(int this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  int v6; // ecx

  if ( a2 ) /*0x48e5af*/
  {
    v5 = *(_DWORD *)(this + 36); /*0x48e5b1*/
    if ( v5 ) /*0x48e5b6*/
    {
      BYTE1(v5) |= 0x80u; /*0x48e5b8*/
      *a3 = v5; /*0x48e5be*/
      if ( (a2 & 0x40) != 0 && (*(_BYTE *)(this + 32) & 0x10) != 0 ) /*0x48e5c6*/
      {
        BYTE1(v5) |= 0x40u; /*0x48e5c8*/
        *a3 = v5; /*0x48e5cb*/
      }
    }
    else
    {
      *a3 = 0; /*0x48e5cf*/
    }
  }
  v6 = *(_DWORD *)(this + 40); /*0x48e5d5*/
  if ( v6 ) /*0x48e5da*/
    (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v6 + 76))(v6, a2, a3, this); /*0x48e5e1*/
  return COMObject::ActivateThunk(a2, a3, 0); /*0x48e5ef*/
}


// ==== 0x0048E600  ControlClass::SetMember10  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e600(_DWORD *this, int a2)
{
  this->q028 = a2; /*0x48e604*/
  return a2; /*0x48e607*/
}


// ==== 0x0048E610  ControlClass::GetMember09  this=ControlClass  sig=csp ====
int __thiscall MiniStub_48e610(_DWORD *this)
{
  return this->q024; /*0x48e613*/
}


// ==== 0x0048E620  ControlClass::DispatchClick  this=ControlClass  sig=csp ====
int __thiscall Control::DispatchClick(_DWORD *this, ControlClass *aP1)
{
  int v3; // ecx

  v3 = this->q028; /*0x48e623*/
  if ( v3 ) /*0x48e628*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 108))(v3, 0); /*0x48e62e*/
  return GadgetClass::ClearState(this, aP1); /*0x48e63d*/
}


// ==== 0x0048E650  GadgetClass::StubReturnFalse  this=GadgetClass  sig=csp ====
void __stdcall CheckListClass::StubReturnFalse(int a1, int a2, int a3)
{
  ; /*0x48e650*/
}


// ==== 0x0048E660  ControlClass::QueryInterface  this=ControlClass  sig=csp ====
ControlClass *__thiscall ControlClass::QueryInterface(_DWORD *Block, char a2)
{
  GadgetClass::Dtor(Block); /*0x48e663*/
  if ( (a2 & 1) != 0 ) /*0x48e66d*/
    __3_YAXPAX_Z(Block); /*0x48e670*/
  return (ControlClass *)Block; /*0x48e67a*/
}


// ==== 0x0048E680  sub_48E680  this=-  sig=ida-proto ====
int sub_48E680()
{
  MEMORY[0x89ECE8] = 0; /*0x48e682*/
  MEMORY[0x89ECEC] = 0; /*0x48e687*/
  MEMORY[0x89ECF0] = 0; /*0x48e68c*/
  MEMORY[0x89ECF4] = 0; /*0x48e691*/
  return 0; /*0x48e696*/
}


// ==== 0x0048E6A0  sub_48E6A0  this=-  sig=ida-proto ====
int sub_48E6A0()
{
  MEMORY[0x89ECFC] = 0; /*0x48e6a7*/
  MEMORY[0x89ED00] = 0; /*0x48e6ac*/
  MEMORY[0x89ED04] = 1; /*0x48e6b1*/
  MEMORY[0x89ED05] = 0; /*0x48e6b8*/
  MEMORY[0x89ECF8] = (int)&vt_DynamicVectorClass_ConvertClass; /*0x48e6bd*/
  MEMORY[0x89ED0C] = 10; /*0x48e6c7*/
  MEMORY[0x89ED08] = 0; /*0x48e6d1*/
  return atexit(sub_48E6E0); /*0x48e6dc*/
}


// ==== 0x0048E6E0  sub_48E6E0  this=-  sig=ida-proto ====
void __cdecl sub_48E6E0()
{
  if ( (MEMORY[0x89ED10] & 1) == 0 ) /*0x48e6ea*/
  {
    MEMORY[0x89ECF8] = (int)&vt_VectorClass_ConvertClass; /*0x48e6ee*/
    MEMORY[0x89ED10] |= 1u; /*0x48e701*/
    if ( MEMORY[0x89ECFC] ) /*0x48e707*/
    {
      if ( MEMORY[0x89ED05] ) /*0x48e711*/
      {
        __3_YAXPAX_Z(MEMORY[0x89ECFC]); /*0x48e714*/
        MEMORY[0x89ECFC] = 0; /*0x48e71c*/
      }
    }
    MEMORY[0x89ED05] = 0; /*0x48e726*/
    MEMORY[0x89ED00] = 0; /*0x48e72d*/
  }
}


// ==== 0x0048E740  ConvertClass::Construct  this=ConvertClass  sig=csp ====
int *__thiscall ConvertClass::Construct(int *this, char *a2, char *a3, int a4, int a5, char a6)
{
  int v7; // eax
  int v8; // edi
  bool v9; // cc
  _BYTE *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // edi
  int v16; // eax
  _BYTE *v17; // edi
  int i; // ebp
  int j; // ebp
  int v20; // eax
  unsigned __int8 v21; // cl
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // eax
  _BYTE v28[4]; // [esp+Ch] [ebp-14h] BYREF
  __int16 v29; // [esp+10h] [ebp-10h] BYREF
  char v30; // [esp+12h] [ebp-Eh]
  int v31; // [esp+14h] [ebp-Ch]
  int v32; // [esp+1Ah] [ebp-6h]

  this->q004 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 112))(a4); /*0x48e753*/
  this->q008 = 0; /*0x48e756*/
  this->q00C = 0; /*0x48e759*/
  this->q004 = 0; /*0x48e75c*/
  this->q014 = 0; /*0x48e75f*/
  this->q018 = 0; /*0x48e762*/
  this->q01C = 0; /*0x48e765*/
  this->q008 = 0; /*0x48e768*/
  this->q024 = 0; /*0x48e76b*/
  this->q028 = 0; /*0x48e76e*/
  this->q02C = 0; /*0x48e771*/
  this->q00C = 0; /*0x48e774*/
  this->q034 = 0; /*0x48e777*/
  this->q038 = 0; /*0x48e77a*/
  this->q03C = 0; /*0x48e77d*/
  this->q010 = 0; /*0x48e780*/
  this->q044 = 0; /*0x48e783*/
  this->q012 = 0; /*0x48e786*/
  this->q04C = 0; /*0x48e789*/
  this->q014 = 0; /*0x48e78c*/
  this->q054 = 0; /*0x48e78f*/
  this->q016 = 0; /*0x48e792*/
  this->q05C = 0; /*0x48e795*/
  this->q018 = 0; /*0x48e798*/
  this->q064 = 0; /*0x48e79b*/
  this->q068 = 0; /*0x48e79e*/
  this->q06C = 0; /*0x48e7a1*/
  this->q01C = 0; /*0x48e7a4*/
  this->q074 = 0; /*0x48e7a7*/
  this->q078 = 0; /*0x48e7aa*/
  this->q07C = 0; /*0x48e7ad*/
  this->q020 = 0; /*0x48e7b0*/
  this->q084 = 0; /*0x48e7b6*/
  this->q022 = 0; /*0x48e7bc*/
  this->q08C = 0; /*0x48e7c2*/
  this->q024 = 0; /*0x48e7c8*/
  this->q094 = 0; /*0x48e7ce*/
  this->q098 = 0; /*0x48e7d4*/
  this->q09C = 0; /*0x48e7da*/
  this->q028 = 0; /*0x48e7e0*/
  this->q0A4 = 0; /*0x48e7e6*/
  this->q0A8 = 0; /*0x48e7ec*/
  this->q0AC = 0; /*0x48e7f2*/
  this->q02C = 0; /*0x48e7f8*/
  this->q0B4 = 0; /*0x48e7fe*/
  this->q0B8 = 0; /*0x48e804*/
  this->q0BC = 0; /*0x48e80a*/
  this->q030 = 0; /*0x48e810*/
  this->q0C4 = 0; /*0x48e816*/
  this->q032 = 0; /*0x48e81c*/
  this->q0CC = 0; /*0x48e822*/
  this->q034 = 0; /*0x48e828*/
  this->q0D4 = 0; /*0x48e82e*/
  this->q036 = 0; /*0x48e834*/
  this->q0DC = 0; /*0x48e83a*/
  this->q038 = 0; /*0x48e840*/
  this->q0E4 = 0; /*0x48e846*/
  this->q0E8 = 0; /*0x48e84c*/
  this->q0EC = 0; /*0x48e852*/
  this->q03C = 0; /*0x48e858*/
  this->q0F4 = 0; /*0x48e85e*/
  this->q0F8 = 0; /*0x48e864*/
  this->q0FC = 0; /*0x48e86a*/
  this->q040 = 0; /*0x48e870*/
  this->q104 = 0; /*0x48e876*/
  this->q108 = 0; /*0x48e87c*/
  this->q10C = 0; /*0x48e882*/
  this->q044 = 0; /*0x48e888*/
  this->q114 = 0; /*0x48e88e*/
  this->q118 = 0; /*0x48e894*/
  this->q11C = 0; /*0x48e89a*/
  this->q048 = 0; /*0x48e8a0*/
  v7 = a5; /*0x48e8a6*/
  v8 = 1; /*0x48e8aa*/
  v9 = a5 < 1; /*0x48e8af*/
  this->q124 = 0; /*0x48e8b1*/
  this->q128 = 0; /*0x48e8b7*/
  this->q12C = 0; /*0x48e8bd*/
  this->q04C = 0; /*0x48e8c3*/
  this->q134 = 0; /*0x48e8c9*/
  this->q138 = 0; /*0x48e8cf*/
  this->q13C = 0; /*0x48e8d5*/
  this->q050 = 0; /*0x48e8db*/
  this->q144 = 0; /*0x48e8e1*/
  this->q052 = 0; /*0x48e8e7*/
  this->q14C = 0; /*0x48e8ed*/
  this->q054 = 0; /*0x48e8f3*/
  this->q154 = 0; /*0x48e8f9*/
  this->q056 = 0; /*0x48e8ff*/
  this->q15C = 0; /*0x48e905*/
  this->q058 = 0; /*0x48e90b*/
  this->q164 = 0; /*0x48e911*/
  this->q168 = 0; /*0x48e917*/
  this->q16C = v7; /*0x48e91d*/
  this->q05C = 0; /*0x48e923*/
  this->q174 = 0; /*0x48e929*/
  this->q178 = 0; /*0x48e92f*/
  this->q17C = 0; /*0x48e935*/
  *this = (int)&ConvertClass::`vftable'; /*0x48e93b*/
  if ( v9 ) /*0x48e941*/
    this->q16C = 1; /*0x48e943*/
  if ( this->q004 == 1 ) /*0x48e94f*/
  {
    v10 = (_BYTE *)__2_YAPAXI_Z(256); /*0x48e95a*/
    this->q178 = (int)v10; /*0x48e95f*/
    *v10 = 0; /*0x48e968*/
    do /*0x48e9df*/
    {
      v11 = ComputeColorSaturation((unsigned int)&a2[2 * (v8 % 256) + v8 % 256], (int)&a2[2 * (v8 % 256)], (int)&a5); /*0x48e98b*/
      v12 = *(_WORD *)v11; /*0x48e990*/
      LOBYTE(v11) = *(_BYTE *)(v11 + 2); /*0x48e993*/
      v29 = v12; /*0x48e996*/
      v30 = (unsigned __int8)v11 >> 1; /*0x48e9a5*/
      v13 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48e9ae*/
      LOWORD(a4) = *(_WORD *)v13; /*0x48e9b6*/
      BYTE2(a4) = *(_BYTE *)(v13 + 2); /*0x48e9c5*/
      ++v8; /*0x48e9d4*/
      *(_BYTE *)(this->q178 + v8 - 1) = Palette::FindClosestColor(a2, (int)&a4); /*0x48e9db*/
    }
    while ( v8 < 256 ); /*0x48e9df*/
    v14 = (_BYTE *)__2_YAPAXI_Z(this->q16C << 8); /*0x48e9eb*/
    this->q05C = (int)v14; /*0x48e9f0*/
    v15 = v14; /*0x48e9f6*/
    v16 = this->q16C; /*0x48e9f8*/
    this->q174 = (int)&v15[256 * ((v16 - 1) >> 1)]; /*0x48ea10*/
    if ( v16 == 1 ) /*0x48ea16*/
    {
      *v15 = 0; /*0x48ea18*/
      v17 = v15 + 1; /*0x48ea1a*/
      for ( i = 1; i < 256; ++i ) /*0x48ea1b*/
        *v17++ = Palette::FindClosestColor(a3, (int)&a2[2 * (i % 256) + i % 256]); /*0x48ea40*/
    }
    else
    {
      v31 = 0; /*0x48ea53*/
      if ( v16 - 1 >= 0 ) /*0x48ea57*/
      {
        do /*0x48eb0a*/
        {
          *v15++ = 0; /*0x48ea5d*/
          for ( j = 1; j < 256; ++j ) /*0x48ea60*/
          {
            v20 = ComputeColorSaturation((unsigned int)&a2[2 * (j % 256) + j % 256], (int)a2, (int)&a5); /*0x48ea85*/
            v21 = *(_BYTE *)(v20 + 2); /*0x48ea8f*/
            v29 = *(_WORD *)v20; /*0x48ea92*/
            LOBYTE(v32) = v21; /*0x48ea97*/
            v30 = v21; /*0x48eaa4*/
            v30 = 2 * v31 * v21 / (this->q16C - 1); /*0x48eac2*/
            v22 = Color::ConvertToRGB((unsigned __int8 *)&v29, (int)v28); /*0x48eac6*/
            LOWORD(a4) = *(_WORD *)v22; /*0x48eace*/
            BYTE2(a4) = *(_BYTE *)(v22 + 2); /*0x48eadf*/
            *v15++ = Palette::FindClosestColor(a3, (int)&a4); /*0x48eae8*/
          }
          v23 = this->q16C - 1; /*0x48eb03*/
          ++v31; /*0x48eb06*/
        }
        while ( v31 <= v23 ); /*0x48eb0a*/
      }
    }
  }
  else
  {
    v24 = __2_YAPAXI_Z(this->q16C << 9); /*0x48eb1c*/
    v25 = this->q16C; /*0x48eb21*/
    this->q05C = v24; /*0x48eb2a*/
    this->q174 = v24 + ((v25 - 1) >> 1 << 9); /*0x48eb3a*/
    if ( !a6 ) /*0x48eb46*/
      DSurface::BlitStretch(v24, v25, (int)a2); /*0x48eb51*/
    this->q060 = LOWORD(MEMORY[0x87F7E8][34176]); /*0x48eb60*/
    this->q184 = HIWORD(MEMORY[0x87F7E8][34176]); /*0x48eb6d*/
  }
  if ( !a6 ) /*0x48eb7a*/
    ConvertClass::InitTables((int)this); /*0x48eb7e*/
  if ( MEMORY[0x87F7E8][32072] < MEMORY[0x87F7E8][32070] /*0x48ebb7*/
    || (BYTE1(MEMORY[0x87F7E8][32071]) || !MEMORY[0x87F7E8][32070])
    && MEMORY[0x87F7E8][32073] > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(MEMORY[0x87F7E8][32068] + 8))(
         &MEMORY[0x87F7E8][32068],
         MEMORY[0x87F7E8][32073] + MEMORY[0x87F7E8][32070],
         0) )
  {
    v26 = MEMORY[0x87F7E8][32072]++; /*0x48ebc4*/
    *(_DWORD *)(MEMORY[0x87F7E8][32069] + 4 * v26) = this; /*0x48ebd3*/
  }
  return this; /*0x48ebd8*/
}


// ==== 0x0048EBF0  ConvertClass::InitTables  this=ConvertClass  sig=csp ====
_DWORD *__thiscall ConvertClass_InitTables(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // ecx
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // ecx
  _DWORD *v24; // eax
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  _DWORD *v28; // eax
  int v29; // ecx
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  int v35; // ecx
  _DWORD *v36; // eax
  int v37; // ecx
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // eax
  int v41; // ecx
  _DWORD *v42; // eax
  int v43; // ecx
  _DWORD *v44; // eax
  int v45; // ecx
  _DWORD *v46; // eax
  int v47; // ecx
  _DWORD *v48; // eax
  int v49; // ecx
  _DWORD *result; // eax
  int v51; // ecx
  _DWORD *v52; // eax
  int v53; // ecx
  _DWORD *v54; // eax
  int v55; // ecx
  _DWORD *v56; // eax
  int v57; // ecx
  _WORD *v58; // eax
  __int16 v59; // cx
  _DWORD *v60; // eax
  __int16 v61; // cx
  _DWORD *v62; // eax
  __int16 v63; // cx
  _DWORD *v64; // eax
  __int16 v65; // cx
  _DWORD *v66; // eax
  int v67; // ecx
  _DWORD *v68; // eax
  int v69; // ecx
  _DWORD *v70; // eax
  int v71; // ecx
  _WORD *v72; // eax
  __int16 v73; // cx
  _DWORD *v74; // eax
  __int16 v75; // cx
  _DWORD *v76; // eax
  __int16 v77; // cx
  _DWORD *v78; // eax
  __int16 v79; // cx
  _DWORD *v80; // eax
  __int16 v81; // cx
  _DWORD *v82; // eax
  __int16 v83; // cx
  _DWORD *v84; // eax
  __int16 v85; // cx
  _DWORD *v86; // eax
  int v87; // ecx
  _DWORD *v88; // eax
  int v89; // ecx
  _DWORD *v90; // eax
  int v91; // ecx
  _WORD *v92; // eax
  __int16 v93; // cx
  _DWORD *v94; // eax
  __int16 v95; // cx
  _DWORD *v96; // eax
  __int16 v97; // cx
  _DWORD *v98; // eax
  __int16 v99; // cx
  _DWORD *v100; // edi
  int v101; // eax
  _DWORD *v102; // edi
  int v103; // eax
  _DWORD *v104; // edi
  int v105; // eax
  _DWORD *v106; // edi
  __int16 v107; // ax
  _DWORD *v108; // edi
  __int16 v109; // ax
  _DWORD *v110; // edi
  __int16 v111; // ax
  _DWORD *v112; // eax
  _DWORD *v113; // eax
  _DWORD *v114; // eax
  int v115; // ecx
  _DWORD *v116; // eax
  __int16 v117; // cx
  _DWORD *v118; // eax
  __int16 v119; // cx
  _DWORD *v120; // edi
  int v121; // eax
  _DWORD *v122; // edi
  int v123; // eax
  _DWORD *v124; // edi
  int v125; // ecx
  _DWORD *v126; // edi
  __int16 v127; // ax
  int v128; // ecx
  _DWORD *v129; // edi
  __int16 v130; // ax
  int v131; // ecx
  _DWORD *v132; // edi
  __int16 v133; // ax
  int v134; // ecx
  _DWORD *v135; // edi
  __int16 v136; // ax
  int v137; // ecx
  _DWORD *v138; // edi
  __int16 v139; // ax
  int v140; // ecx
  _DWORD *v141; // edi
  __int16 v142; // ax
  int v143; // ecx
  _DWORD *v144; // edi
  int v145; // eax
  _DWORD *v146; // edi
  int v147; // eax
  _DWORD *v148; // edi
  int v149; // ecx
  _DWORD *v150; // edi
  __int16 v151; // ax
  int v152; // ecx
  _DWORD *v153; // edi
  __int16 v154; // ax
  int v155; // ecx
  _DWORD *v156; // edi
  __int16 v157; // ax
  int v158; // ecx
  _DWORD *v159; // eax
  _DWORD *v160; // eax
  int v161; // ecx
  _WORD *v162; // eax
  _DWORD *v163; // eax
  __int16 v164; // cx
  _DWORD *v165; // eax
  __int16 v166; // cx
  _DWORD *v167; // eax
  __int16 v168; // cx
  _DWORD *v169; // eax
  _DWORD *v170; // eax
  int v171; // ecx
  _WORD *v172; // eax
  _DWORD *v173; // eax
  __int16 v174; // cx
  _DWORD *v175; // eax
  __int16 v176; // cx
  _DWORD *v177; // eax
  __int16 v178; // cx
  _DWORD *v179; // eax
  __int16 v180; // cx
  _DWORD *v181; // eax
  __int16 v182; // cx
  _DWORD *v183; // eax
  __int16 v184; // cx
  _DWORD *v185; // eax
  _DWORD *v186; // eax
  int v187; // ecx
  _WORD *v188; // eax
  _DWORD *v189; // eax
  __int16 v190; // cx
  _DWORD *v191; // eax
  __int16 v192; // cx
  _DWORD *v193; // eax
  __int16 v194; // cx
  _DWORD *v195; // edi
  int v196; // eax
  _DWORD *v197; // edi
  int v198; // ecx
  _DWORD *v199; // edi
  __int16 v200; // ax
  int v201; // ecx
  _DWORD *v202; // edi
  __int16 v203; // ax
  int v204; // ecx
  _DWORD *v205; // edi
  __int16 v206; // ax
  int v207; // ecx
  _DWORD *v208; // edi
  int v209; // eax
  _DWORD *v210; // edi
  int v211; // ecx
  _DWORD *v212; // edi
  __int16 v213; // ax
  int v214; // ecx
  _DWORD *v215; // edi
  __int16 v216; // ax
  int v217; // ecx
  _DWORD *v218; // edi
  __int16 v219; // ax
  int v220; // ecx
  _DWORD *v221; // edi
  __int16 v222; // ax
  int v223; // ecx
  _DWORD *v224; // edi
  __int16 v225; // ax
  int v226; // ecx
  _DWORD *v227; // edi
  __int16 v228; // ax
  int v229; // ecx
  _DWORD *v230; // edi
  int v231; // eax
  _DWORD *v232; // edi
  int v233; // ecx
  _DWORD *v234; // edi
  __int16 v235; // ax
  int v236; // ecx
  _DWORD *v237; // edi
  __int16 v238; // ax
  int v239; // ecx
  _DWORD *v240; // edi
  __int16 v241; // ax
  int v242; // ecx
  int v243; // [esp-8h] [ebp-10h]
  int v244; // [esp-8h] [ebp-10h]
  int v245; // [esp-8h] [ebp-10h]
  int v246; // [esp-8h] [ebp-10h]
  int v247; // [esp-8h] [ebp-10h]
  int v248; // [esp-8h] [ebp-10h]
  int v249; // [esp-8h] [ebp-10h]
  int v250; // [esp-8h] [ebp-10h]

  if ( *(_DWORD *)(this + 4) == 1 )
  {
    v2 = __2_YAPAXI_Z(8u);
    if ( v2 )
    {
      v3 = *(_DWORD *)(this + 372);
      *v2 = &BlitPlainXlat<unsigned char>::`vftable';
      v2[1] = v3;
    }
    else
    {
      v2 = 0;
    }
    *(_DWORD *)(this + 8) = v2;
    v4 = __2_YAPAXI_Z(8u);
    if ( v4 )
    {
      v5 = *(_DWORD *)(this + 372);
      *v4 = &BlitTransXlat<unsigned char>::`vftable';
      v4[1] = v5;
    }
    else
    {
      v4 = 0;
    }
    *(_DWORD *)(this + 12) = v4;
    v6 = __2_YAPAXI_Z(0xCu);
    if ( v6 )
    {
      v7 = *(_DWORD *)(this + 372);
      v6[1] = this + 380;
      v6[2] = v7;
      *v6 = &BlitTransZRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v6 = 0;
    }
    *(_DWORD *)(this + 20) = v6;
    v8 = __2_YAPAXI_Z(8u);
    if ( v8 )
    {
      v9 = *(_DWORD *)(this + 376);
      *v8 = &BlitTransRemapDest<unsigned char>::`vftable';
      v8[1] = v9;
    }
    else
    {
      v8 = 0;
    }
    *(_DWORD *)(this + 16) = v8;
    v10 = __2_YAPAXI_Z(0xCu);
    if ( v10 )
    {
      v11 = *(_DWORD *)(this + 372);
      v10[1] = *(_DWORD *)(this + 376);
      v10[2] = v11;
      *v10 = &BlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v10 = 0;
    }
    *(_DWORD *)(this + 24) = v10;
    v12 = __2_YAPAXI_Z(0xCu);
    if ( v12 )
    {
      v13 = *(_DWORD *)(this + 372);
      v12[1] = *(_DWORD *)(this + 376);
      v12[2] = v13;
      *v12 = &BlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v12 = 0;
    }
    *(_DWORD *)(this + 28) = v12;
    v14 = __2_YAPAXI_Z(0xCu);
    if ( v14 )
    {
      v15 = *(_DWORD *)(this + 372);
      v14[1] = *(_DWORD *)(this + 376);
      v14[2] = v15;
      *v14 = &BlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v14 = 0;
    }
    *(_DWORD *)(this + 32) = v14;
    v16 = __2_YAPAXI_Z(8u);
    if ( v16 )
    {
      v17 = *(_DWORD *)(this + 372);
      *v16 = &RLEBlitTransXlat<unsigned char>::`vftable';
      v16[1] = v17;
    }
    else
    {
      v16 = 0;
    }
    *(_DWORD *)(this + 208) = v16;
    v18 = __2_YAPAXI_Z(0xCu);
    if ( v18 )
    {
      v19 = *(_DWORD *)(this + 372);
      v18[1] = this + 380;
      v18[2] = v19;
      *v18 = &RLEBlitTransZRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v18 = 0;
    }
    *(_DWORD *)(this + 216) = v18;
    v20 = __2_YAPAXI_Z(8u);
    if ( v20 )
    {
      v21 = *(_DWORD *)(this + 376);
      *v20 = &RLEBlitTransRemapDest<unsigned char>::`vftable';
      v20[1] = v21;
    }
    else
    {
      v20 = 0;
    }
    *(_DWORD *)(this + 212) = v20;
    v22 = __2_YAPAXI_Z(0xCu);
    if ( v22 )
    {
      v23 = *(_DWORD *)(this + 372);
      v22[1] = *(_DWORD *)(this + 376);
      v22[2] = v23;
      *v22 = &RLEBlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)(this + 220) = v22;
    v24 = __2_YAPAXI_Z(0xCu);
    if ( v24 )
    {
      v25 = *(_DWORD *)(this + 372);
      v24[1] = *(_DWORD *)(this + 376);
      v24[2] = v25;
      *v24 = &RLEBlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v24 = 0;
    }
    *(_DWORD *)(this + 224) = v24;
    v26 = __2_YAPAXI_Z(0xCu);
    if ( v26 )
    {
      v27 = *(_DWORD *)(this + 372);
      v26[1] = *(_DWORD *)(this + 376);
      v26[2] = v27;
      *v26 = &RLEBlitTransRemapXlat<unsigned char>::`vftable';
    }
    else
    {
      v26 = 0;
    }
    *(_DWORD *)(this + 228) = v26;
    v28 = __2_YAPAXI_Z(8u);
    if ( v28 )
    {
      v29 = *(_DWORD *)(this + 372);
      *v28 = &RLEBlitTransXlatZRead<unsigned char>::`vftable';
      v28[1] = v29;
    }
    else
    {
      v28 = 0;
    }
    *(_DWORD *)(this + 232) = v28;
    v30 = __2_YAPAXI_Z(0xCu);
    if ( v30 )
    {
      v31 = *(_DWORD *)(this + 372);
      v30[1] = this + 380;
      v30[2] = v31;
      *v30 = &RLEBlitTransZRemapXlatZRead<unsigned char>::`vftable';
    }
    else
    {
      v30 = 0;
    }
    *(_DWORD *)(this + 236) = v30;
    v32 = __2_YAPAXI_Z(8u);
    if ( v32 )
    {
      v33 = *(_DWORD *)(this + 376);
      *v32 = &RLEBlitTransRemapDestZRead<unsigned char>::`vftable';
      v32[1] = v33;
    }
    else
    {
      v32 = 0;
    }
    *(_DWORD *)(this + 240) = v32;
    v34 = __2_YAPAXI_Z(0xCu);
    if ( v34 )
    {
      v35 = *(_DWORD *)(this + 372);
      v34[1] = *(_DWORD *)(this + 376);
      v34[2] = v35;
      *v34 = &RLEBlitTransRemapXlatZRead<unsigned char>::`vftable';
    }
    else
    {
      v34 = 0;
    }
    *(_DWORD *)(this + 244) = v34;
    v36 = __2_YAPAXI_Z(0xCu);
    if ( v36 )
    {
      v37 = *(_DWORD *)(this + 372);
      v36[1] = *(_DWORD *)(this + 376);
      v36[2] = v37;
      *v36 = &RLEBlitTransRemapXlatZRead<unsigned char>::`vftable';
    }
    else
    {
      v36 = 0;
    }
    *(_DWORD *)(this + 248) = v36;
    v38 = __2_YAPAXI_Z(0xCu);
    if ( v38 )
    {
      v39 = *(_DWORD *)(this + 372);
      v38[1] = *(_DWORD *)(this + 376);
      v38[2] = v39;
      *v38 = &RLEBlitTransRemapXlatZRead<unsigned char>::`vftable';
    }
    else
    {
      v38 = 0;
    }
    *(_DWORD *)(this + 252) = v38;
    v40 = __2_YAPAXI_Z(8u);
    if ( v40 )
    {
      v41 = *(_DWORD *)(this + 372);
      *v40 = &RLEBlitTransXlatZReadWrite<unsigned char>::`vftable';
      v40[1] = v41;
    }
    else
    {
      v40 = 0;
    }
    *(_DWORD *)(this + 268) = v40;
    v42 = __2_YAPAXI_Z(0xCu);
    if ( v42 )
    {
      v43 = *(_DWORD *)(this + 372);
      v42[1] = this + 380;
      v42[2] = v43;
      *v42 = &RLEBlitTransZRemapXlatZReadWrite<unsigned char>::`vftable';
    }
    else
    {
      v42 = 0;
    }
    *(_DWORD *)(this + 272) = v42;
    v44 = __2_YAPAXI_Z(8u);
    if ( v44 )
    {
      v45 = *(_DWORD *)(this + 376);
      *v44 = &RLEBlitTransRemapDestZReadWrite<unsigned char>::`vftable';
      v44[1] = v45;
    }
    else
    {
      v44 = 0;
    }
    *(_DWORD *)(this + 276) = v44;
    v46 = __2_YAPAXI_Z(0xCu);
    if ( v46 )
    {
      v47 = *(_DWORD *)(this + 372);
      v46[1] = *(_DWORD *)(this + 376);
      v46[2] = v47;
      *v46 = &RLEBlitTransRemapXlatZReadWrite<unsigned char>::`vftable';
    }
    else
    {
      v46 = 0;
    }
    *(_DWORD *)(this + 280) = v46;
    v48 = __2_YAPAXI_Z(0xCu);
    if ( v48 )
    {
      v49 = *(_DWORD *)(this + 372);
      v48[1] = *(_DWORD *)(this + 376);
      v48[2] = v49;
      *v48 = &RLEBlitTransRemapXlatZReadWrite<unsigned char>::`vftable';
    }
    else
    {
      v48 = 0;
    }
    *(_DWORD *)(this + 284) = v48;
    result = __2_YAPAXI_Z(0xCu);
    if ( result )
    {
      v51 = *(_DWORD *)(this + 372);
      result[1] = *(_DWORD *)(this + 376);
      result[2] = v51;
      *result = &RLEBlitTransRemapXlatZReadWrite<unsigned char>::`vftable';
      *(_DWORD *)(this + 288) = result;
    }
    else
    {
      *(_DWORD *)(this + 288) = 0;
      return 0;
    }
  }
  else
  {
    v52 = __2_YAPAXI_Z(8u);
    if ( v52 )
    {
      v53 = *(_DWORD *)(this + 372);
      *v52 = &BlitPlainXlat<unsigned short>::`vftable';
      v52[1] = v53;
    }
    else
    {
      v52 = 0;
    }
    *(_DWORD *)(this + 8) = v52;
    v54 = __2_YAPAXI_Z(8u);
    if ( v54 )
    {
      v55 = *(_DWORD *)(this + 372);
      *v54 = &BlitTransXlat<unsigned short>::`vftable';
      v54[1] = v55;
    }
    else
    {
      v54 = 0;
    }
    *(_DWORD *)(this + 12) = v54;
    v56 = __2_YAPAXI_Z(0xCu);
    if ( v56 )
    {
      v57 = *(_DWORD *)(this + 372);
      v56[1] = this + 380;
      v56[2] = v57;
      *v56 = &BlitTransZRemapXlat<unsigned short>::`vftable';
    }
    else
    {
      v56 = 0;
    }
    *(_DWORD *)(this + 20) = v56;
    v58 = __2_YAPAXI_Z(8u);
    if ( v58 )
    {
      v59 = *(_WORD *)(this + 384);
      *(_DWORD *)v58 = &BlitTransDarken<unsigned short>::`vftable';
      v58[2] = v59;
    }
    else
    {
      v58 = 0;
    }
    *(_DWORD *)(this + 16) = v58;
    v60 = __2_YAPAXI_Z(0xCu);
    if ( v60 )
    {
      v61 = *(_WORD *)(this + 388);
      v60[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v60 + 4) = v61;
      *v60 = &BlitTransLucent75<unsigned short>::`vftable';
    }
    else
    {
      v60 = 0;
    }
    *(_DWORD *)(this + 24) = v60;
    v62 = __2_YAPAXI_Z(0xCu);
    if ( v62 )
    {
      v63 = *(_WORD *)(this + 384);
      v62[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v62 + 4) = v63;
      *v62 = &BlitTransLucent50<unsigned short>::`vftable';
    }
    else
    {
      v62 = 0;
    }
    *(_DWORD *)(this + 28) = v62;
    v64 = __2_YAPAXI_Z(0xCu);
    if ( v64 )
    {
      v65 = *(_WORD *)(this + 388);
      v64[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v64 + 4) = v65;
      *v64 = &BlitTransLucent25<unsigned short>::`vftable';
    }
    else
    {
      v64 = 0;
    }
    *(_DWORD *)(this + 32) = v64;
    v66 = __2_YAPAXI_Z(8u);
    if ( v66 )
    {
      v67 = *(_DWORD *)(this + 372);
      *v66 = &BlitPlainXlatZRead<unsigned short>::`vftable';
      v66[1] = v67;
    }
    else
    {
      v66 = 0;
    }
    *(_DWORD *)(this + 36) = v66;
    v68 = __2_YAPAXI_Z(8u);
    if ( v68 )
    {
      v69 = *(_DWORD *)(this + 372);
      *v68 = &BlitTransXlatZRead<unsigned short>::`vftable';
      v68[1] = v69;
    }
    else
    {
      v68 = 0;
    }
    *(_DWORD *)(this + 40) = v68;
    v70 = __2_YAPAXI_Z(0xCu);
    if ( v70 )
    {
      v71 = *(_DWORD *)(this + 372);
      v70[1] = this + 380;
      v70[2] = v71;
      *v70 = &BlitTransZRemapXlatZRead<unsigned short>::`vftable';
    }
    else
    {
      v70 = 0;
    }
    *(_DWORD *)(this + 48) = v70;
    v72 = __2_YAPAXI_Z(8u);
    if ( v72 )
    {
      v73 = *(_WORD *)(this + 384);
      *(_DWORD *)v72 = &BlitTransDarkenZRead<unsigned short>::`vftable';
      v72[2] = v73;
    }
    else
    {
      v72 = 0;
    }
    *(_DWORD *)(this + 44) = v72;
    v74 = __2_YAPAXI_Z(0xCu);
    if ( v74 )
    {
      v75 = *(_WORD *)(this + 388);
      v74[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v74 + 4) = v75;
      *v74 = &BlitTransLucent75ZRead<unsigned short>::`vftable';
    }
    else
    {
      v74 = 0;
    }
    *(_DWORD *)(this + 52) = v74;
    v76 = __2_YAPAXI_Z(0xCu);
    if ( v76 )
    {
      v77 = *(_WORD *)(this + 384);
      v76[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v76 + 4) = v77;
      *v76 = &BlitTransLucent50ZRead<unsigned short>::`vftable';
    }
    else
    {
      v76 = 0;
    }
    *(_DWORD *)(this + 56) = v76;
    v78 = __2_YAPAXI_Z(0xCu);
    if ( v78 )
    {
      v79 = *(_WORD *)(this + 388);
      v78[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v78 + 4) = v79;
      *v78 = &BlitTransLucent25ZRead<unsigned short>::`vftable';
    }
    else
    {
      v78 = 0;
    }
    *(_DWORD *)(this + 60) = v78;
    v80 = __2_YAPAXI_Z(0xCu);
    if ( v80 )
    {
      v81 = *(_WORD *)(this + 388);
      v80[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v80 + 4) = v81;
      *v80 = &BlitTransLucent75ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v80 = 0;
    }
    *(_DWORD *)(this + 64) = v80;
    v82 = __2_YAPAXI_Z(0xCu);
    if ( v82 )
    {
      v83 = *(_WORD *)(this + 384);
      v82[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v82 + 4) = v83;
      *v82 = &BlitTransLucent50ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v82 = 0;
    }
    *(_DWORD *)(this + 68) = v82;
    v84 = __2_YAPAXI_Z(0xCu);
    if ( v84 )
    {
      v85 = *(_WORD *)(this + 388);
      v84[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v84 + 4) = v85;
      *v84 = &BlitTransLucent25ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v84 = 0;
    }
    *(_DWORD *)(this + 72) = v84;
    v86 = __2_YAPAXI_Z(8u);
    if ( v86 )
    {
      v87 = *(_DWORD *)(this + 372);
      *v86 = &BlitPlainXlatZReadWrite<unsigned short>::`vftable';
      v86[1] = v87;
    }
    else
    {
      v86 = 0;
    }
    *(_DWORD *)(this + 76) = v86;
    v88 = __2_YAPAXI_Z(8u);
    if ( v88 )
    {
      v89 = *(_DWORD *)(this + 372);
      *v88 = &BlitTransXlatZReadWrite<unsigned short>::`vftable';
      v88[1] = v89;
    }
    else
    {
      v88 = 0;
    }
    *(_DWORD *)(this + 80) = v88;
    v90 = __2_YAPAXI_Z(0xCu);
    if ( v90 )
    {
      v91 = *(_DWORD *)(this + 372);
      v90[1] = this + 380;
      v90[2] = v91;
      *v90 = &BlitTransZRemapXlatZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v90 = 0;
    }
    *(_DWORD *)(this + 88) = v90;
    v92 = __2_YAPAXI_Z(8u);
    if ( v92 )
    {
      v93 = *(_WORD *)(this + 384);
      *(_DWORD *)v92 = &BlitTransDarkenZReadWrite<unsigned short>::`vftable';
      v92[2] = v93;
    }
    else
    {
      v92 = 0;
    }
    *(_DWORD *)(this + 84) = v92;
    v94 = __2_YAPAXI_Z(0xCu);
    if ( v94 )
    {
      v95 = *(_WORD *)(this + 388);
      v94[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v94 + 4) = v95;
      *v94 = &BlitTransLucent75ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v94 = 0;
    }
    *(_DWORD *)(this + 92) = v94;
    v96 = __2_YAPAXI_Z(0xCu);
    if ( v96 )
    {
      v97 = *(_WORD *)(this + 384);
      v96[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v96 + 4) = v97;
      *v96 = &BlitTransLucent50ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v96 = 0;
    }
    *(_DWORD *)(this + 96) = v96;
    v98 = __2_YAPAXI_Z(0xCu);
    if ( v98 )
    {
      v99 = *(_WORD *)(this + 388);
      v98[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v98 + 4) = v99;
      *v98 = &BlitTransLucent25ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v98 = 0;
    }
    *(_DWORD *)(this + 100) = v98;
    v100 = __2_YAPAXI_Z(0xCu);
    if ( v100 )
    {
      v101 = *(_DWORD *)(this + 364);
      v100[1] = *(_DWORD *)(this + 368);
      v100[2] = 0;
      *v100 = &BlitPlainXlatAlpha<unsigned short>::`vftable';
      v100[2] = CreateFractalNoise(v101);
    }
    else
    {
      v100 = 0;
    }
    *(_DWORD *)(this + 104) = v100;
    v102 = __2_YAPAXI_Z(0xCu);
    if ( v102 )
    {
      v103 = *(_DWORD *)(this + 364);
      v102[1] = *(_DWORD *)(this + 368);
      v102[2] = 0;
      *v102 = &vt_BlitTransXlatAlpha_unsigned_short;
      v102[2] = CreateFractalNoise(v103);
    }
    else
    {
      v102 = 0;
    }
    *(_DWORD *)(this + 108) = v102;
    v104 = __2_YAPAXI_Z(0x10u);
    if ( v104 )
    {
      v105 = *(_DWORD *)(this + 364);
      v104[2] = *(_DWORD *)(this + 368);
      v104[1] = this + 380;
      v104[3] = 0;
      *v104 = &BlitTransZRemapXlatAlpha<unsigned short>::`vftable';
      v104[3] = CreateFractalNoise(v105);
    }
    else
    {
      v104 = 0;
    }
    *(_DWORD *)(this + 112) = v104;
    v106 = __2_YAPAXI_Z(0x10u);
    if ( v106 )
    {
      v107 = *(_WORD *)(this + 388);
      v243 = *(_DWORD *)(this + 364);
      v106[1] = *(_DWORD *)(this + 368);
      v106[2] = 0;
      *((_WORD *)v106 + 6) = v107;
      *v106 = &BlitTransLucent75Alpha<unsigned short>::`vftable';
      v106[2] = CreateFractalNoise(v243);
    }
    else
    {
      v106 = 0;
    }
    *(_DWORD *)(this + 116) = v106;
    v108 = __2_YAPAXI_Z(0x10u);
    if ( v108 )
    {
      v109 = *(_WORD *)(this + 384);
      v244 = *(_DWORD *)(this + 364);
      v108[1] = *(_DWORD *)(this + 368);
      v108[2] = 0;
      *((_WORD *)v108 + 6) = v109;
      *v108 = &BlitTransLucent50Alpha<unsigned short>::`vftable';
      v108[2] = CreateFractalNoise(v244);
    }
    else
    {
      v108 = 0;
    }
    *(_DWORD *)(this + 120) = v108;
    v110 = __2_YAPAXI_Z(0x10u);
    if ( v110 )
    {
      v111 = *(_WORD *)(this + 388);
      v245 = *(_DWORD *)(this + 364);
      v110[1] = *(_DWORD *)(this + 368);
      v110[2] = 0;
      *((_WORD *)v110 + 6) = v111;
      *v110 = &vt_BlitTransLucent25Alpha_unsigned_short;
      v110[2] = CreateFractalNoise(v245);
    }
    else
    {
      v110 = 0;
    }
    *(_DWORD *)(this + 124) = v110;
    v112 = __2_YAPAXI_Z(4u);
    if ( v112 )
      *v112 = &BlitTransXlatWriteAlpha<unsigned short>::`vftable';
    else
      v112 = 0;
    *(_DWORD *)(this + 128) = v112;
    v113 = __2_YAPAXI_Z(4u);
    if ( v113 )
      *v113 = &BlitTransXlatMultWriteAlpha<unsigned short>::`vftable';
    else
      v113 = 0;
    *(_DWORD *)(this + 132) = v113;
    v114 = __2_YAPAXI_Z(8u);
    if ( v114 )
    {
      v115 = *(_DWORD *)(this + 368);
      *v114 = &BlitTranslucentWriteAlpha<unsigned short>::`vftable';
      v114[1] = v115;
    }
    else
    {
      v114 = 0;
    }
    *(_DWORD *)(this + 136) = v114;
    v116 = __2_YAPAXI_Z(0xCu);
    if ( v116 )
    {
      v117 = *(_WORD *)(this + 384);
      v116[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v116 + 4) = v117;
      *v116 = &BlitTranslucent50NonzeroAlpha<unsigned short>::`vftable';
    }
    else
    {
      v116 = 0;
    }
    *(_DWORD *)(this + 140) = v116;
    v118 = __2_YAPAXI_Z(0xCu);
    if ( v118 )
    {
      v119 = *(_WORD *)(this + 384);
      v118[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v118 + 4) = v119;
      *v118 = &BlitTranslucent50ZeroAlpha<unsigned short>::`vftable';
    }
    else
    {
      v118 = 0;
    }
    *(_DWORD *)(this + 144) = v118;
    v120 = __2_YAPAXI_Z(0xCu);
    if ( v120 )
    {
      v121 = *(_DWORD *)(this + 364);
      v120[1] = *(_DWORD *)(this + 368);
      v120[2] = 0;
      *v120 = &BlitPlainXlatAlpha<unsigned short>::`vftable';
      v120[2] = CreateFractalNoise(v121);
    }
    else
    {
      v120 = 0;
    }
    *(_DWORD *)(this + 148) = v120;
    v122 = __2_YAPAXI_Z(0xCu);
    if ( v122 )
    {
      v123 = *(_DWORD *)(this + 364);
      v122[1] = *(_DWORD *)(this + 368);
      v122[2] = 0;
      *v122 = &vt_BlitTransXlatAlphaZRead_unsigned_short;
      v122[2] = CreateFractalNoise(v123);
    }
    else
    {
      v122 = 0;
    }
    *(_DWORD *)(this + 152) = v122;
    v124 = __2_YAPAXI_Z(0x10u);
    if ( v124 )
    {
      v125 = *(_DWORD *)(this + 368);
      v246 = *(_DWORD *)(this + 364);
      v124[1] = this + 380;
      v124[2] = v125;
      v124[3] = 0;
      *v124 = &BlitTransZRemapXlatAlphaZRead<unsigned short>::`vftable';
      v124[3] = CreateFractalNoise(v246);
    }
    else
    {
      v124 = 0;
    }
    *(_DWORD *)(this + 156) = v124;
    v126 = __2_YAPAXI_Z(0x10u);
    if ( v126 )
    {
      v127 = *(_WORD *)(this + 388);
      v128 = *(_DWORD *)(this + 364);
      v126[1] = *(_DWORD *)(this + 368);
      v126[2] = 0;
      *((_WORD *)v126 + 6) = v127;
      *v126 = &BlitTransLucent75AlphaZRead<unsigned short>::`vftable';
      v126[2] = CreateFractalNoise(v128);
    }
    else
    {
      v126 = 0;
    }
    *(_DWORD *)(this + 160) = v126;
    v129 = __2_YAPAXI_Z(0x10u);
    if ( v129 )
    {
      v130 = *(_WORD *)(this + 384);
      v131 = *(_DWORD *)(this + 364);
      v129[1] = *(_DWORD *)(this + 368);
      v129[2] = 0;
      *((_WORD *)v129 + 6) = v130;
      *v129 = &BlitTransLucent50AlphaZRead<unsigned short>::`vftable';
      v129[2] = CreateFractalNoise(v131);
    }
    else
    {
      v129 = 0;
    }
    *(_DWORD *)(this + 164) = v129;
    v132 = __2_YAPAXI_Z(0x10u);
    if ( v132 )
    {
      v133 = *(_WORD *)(this + 388);
      v134 = *(_DWORD *)(this + 364);
      v132[1] = *(_DWORD *)(this + 368);
      v132[2] = 0;
      *((_WORD *)v132 + 6) = v133;
      *v132 = &BlitTransLucent25AlphaZRead<unsigned short>::`vftable';
      v132[2] = CreateFractalNoise(v134);
    }
    else
    {
      v132 = 0;
    }
    *(_DWORD *)(this + 168) = v132;
    v135 = __2_YAPAXI_Z(0x10u);
    if ( v135 )
    {
      v136 = *(_WORD *)(this + 388);
      v137 = *(_DWORD *)(this + 364);
      v135[1] = *(_DWORD *)(this + 368);
      v135[2] = 0;
      *((_WORD *)v135 + 6) = v136;
      *v135 = &BlitTransLucent75AlphaZReadWarp<unsigned short>::`vftable';
      v135[2] = CreateFractalNoise(v137);
    }
    else
    {
      v135 = 0;
    }
    *(_DWORD *)(this + 172) = v135;
    v138 = __2_YAPAXI_Z(0x10u);
    if ( v138 )
    {
      v139 = *(_WORD *)(this + 384);
      v140 = *(_DWORD *)(this + 364);
      v138[1] = *(_DWORD *)(this + 368);
      v138[2] = 0;
      *((_WORD *)v138 + 6) = v139;
      *v138 = &BlitTransLucent50AlphaZReadWarp<unsigned short>::`vftable';
      v138[2] = CreateFractalNoise(v140);
    }
    else
    {
      v138 = 0;
    }
    *(_DWORD *)(this + 176) = v138;
    v141 = __2_YAPAXI_Z(0x10u);
    if ( v141 )
    {
      v142 = *(_WORD *)(this + 388);
      v143 = *(_DWORD *)(this + 364);
      v141[1] = *(_DWORD *)(this + 368);
      v141[2] = 0;
      *((_WORD *)v141 + 6) = v142;
      *v141 = &BlitTransLucent25AlphaZReadWarp<unsigned short>::`vftable';
      v141[2] = CreateFractalNoise(v143);
    }
    else
    {
      v141 = 0;
    }
    *(_DWORD *)(this + 180) = v141;
    v144 = __2_YAPAXI_Z(0xCu);
    if ( v144 )
    {
      v145 = *(_DWORD *)(this + 364);
      v144[1] = *(_DWORD *)(this + 368);
      v144[2] = 0;
      *v144 = &BlitPlainXlatAlpha<unsigned short>::`vftable';
      v144[2] = CreateFractalNoise(v145);
    }
    else
    {
      v144 = 0;
    }
    *(_DWORD *)(this + 184) = v144;
    v146 = __2_YAPAXI_Z(0xCu);
    if ( v146 )
    {
      v147 = *(_DWORD *)(this + 364);
      v146[1] = *(_DWORD *)(this + 368);
      v146[2] = 0;
      *v146 = &BlitTransXlatAlphaZReadWrite<unsigned short>::`vftable';
      v146[2] = CreateFractalNoise(v147);
    }
    else
    {
      v146 = 0;
    }
    *(_DWORD *)(this + 188) = v146;
    v148 = __2_YAPAXI_Z(0x10u);
    if ( v148 )
    {
      v149 = *(_DWORD *)(this + 368);
      v247 = *(_DWORD *)(this + 364);
      v148[1] = this + 380;
      v148[2] = v149;
      v148[3] = 0;
      *v148 = &BlitTransZRemapXlatAlphaZReadWrite<unsigned short>::`vftable';
      v148[3] = CreateFractalNoise(v247);
    }
    else
    {
      v148 = 0;
    }
    *(_DWORD *)(this + 192) = v148;
    v150 = __2_YAPAXI_Z(0x10u);
    if ( v150 )
    {
      v151 = *(_WORD *)(this + 388);
      v152 = *(_DWORD *)(this + 364);
      v150[1] = *(_DWORD *)(this + 368);
      v150[2] = 0;
      *((_WORD *)v150 + 6) = v151;
      *v150 = &BlitTransLucent75AlphaZReadWrite<unsigned short>::`vftable';
      v150[2] = CreateFractalNoise(v152);
    }
    else
    {
      v150 = 0;
    }
    *(_DWORD *)(this + 196) = v150;
    v153 = __2_YAPAXI_Z(0x10u);
    if ( v153 )
    {
      v154 = *(_WORD *)(this + 384);
      v155 = *(_DWORD *)(this + 364);
      v153[1] = *(_DWORD *)(this + 368);
      v153[2] = 0;
      *((_WORD *)v153 + 6) = v154;
      *v153 = &BlitTransLucent50AlphaZReadWrite<unsigned short>::`vftable';
      v153[2] = CreateFractalNoise(v155);
    }
    else
    {
      v153 = 0;
    }
    *(_DWORD *)(this + 200) = v153;
    v156 = __2_YAPAXI_Z(0x10u);
    if ( v156 )
    {
      v157 = *(_WORD *)(this + 388);
      v158 = *(_DWORD *)(this + 364);
      v156[1] = *(_DWORD *)(this + 368);
      v156[2] = 0;
      *((_WORD *)v156 + 6) = v157;
      *v156 = &vt_BlitTransLucent25AlphaZReadWrite_unsigned_short;
      v156[2] = CreateFractalNoise(v158);
    }
    else
    {
      v156 = 0;
    }
    *(_DWORD *)(this + 204) = v156;
    v159 = __2_YAPAXI_Z(8u);
    if ( v159 )
    {
      v159[1] = *(_DWORD *)(this + 372);
      *v159 = &RLEBlitTransXlat<unsigned short>::`vftable';
    }
    else
    {
      v159 = 0;
    }
    *(_DWORD *)(this + 208) = v159;
    v160 = __2_YAPAXI_Z(0xCu);
    if ( v160 )
    {
      v161 = *(_DWORD *)(this + 372);
      v160[1] = this + 380;
      v160[2] = v161;
      *v160 = &RLEBlitTransZRemapXlat<unsigned short>::`vftable';
    }
    else
    {
      v160 = 0;
    }
    *(_DWORD *)(this + 216) = v160;
    v162 = __2_YAPAXI_Z(8u);
    if ( v162 )
    {
      v162[2] = *(_WORD *)(this + 384);
      *(_DWORD *)v162 = &RLEBlitTransDarken<unsigned short>::`vftable';
    }
    else
    {
      v162 = 0;
    }
    *(_DWORD *)(this + 212) = v162;
    v163 = __2_YAPAXI_Z(0xCu);
    if ( v163 )
    {
      v164 = *(_WORD *)(this + 388);
      v163[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v163 + 4) = v164;
      *v163 = &RLEBlitTransLucent75<unsigned short>::`vftable';
    }
    else
    {
      v163 = 0;
    }
    *(_DWORD *)(this + 220) = v163;
    v165 = __2_YAPAXI_Z(0xCu);
    if ( v165 )
    {
      v166 = *(_WORD *)(this + 384);
      v165[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v165 + 4) = v166;
      *v165 = &RLEBlitTransLucent50<unsigned short>::`vftable';
    }
    else
    {
      v165 = 0;
    }
    *(_DWORD *)(this + 224) = v165;
    v167 = __2_YAPAXI_Z(0xCu);
    if ( v167 )
    {
      v168 = *(_WORD *)(this + 388);
      v167[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v167 + 4) = v168;
      *v167 = &RLEBlitTransLucent25<unsigned short>::`vftable';
    }
    else
    {
      v167 = 0;
    }
    *(_DWORD *)(this + 228) = v167;
    v169 = __2_YAPAXI_Z(8u);
    if ( v169 )
    {
      v169[1] = *(_DWORD *)(this + 372);
      *v169 = &RLEBlitTransXlatZRead<unsigned short>::`vftable';
    }
    else
    {
      v169 = 0;
    }
    *(_DWORD *)(this + 232) = v169;
    v170 = __2_YAPAXI_Z(0xCu);
    if ( v170 )
    {
      v171 = *(_DWORD *)(this + 372);
      v170[1] = this + 380;
      v170[2] = v171;
      *v170 = &RLEBlitTransZRemapXlatZRead<unsigned short>::`vftable';
    }
    else
    {
      v170 = 0;
    }
    *(_DWORD *)(this + 236) = v170;
    v172 = __2_YAPAXI_Z(8u);
    if ( v172 )
    {
      v172[2] = *(_WORD *)(this + 384);
      *(_DWORD *)v172 = &RLEBlitTransDarkenZRead<unsigned short>::`vftable';
    }
    else
    {
      v172 = 0;
    }
    *(_DWORD *)(this + 240) = v172;
    v173 = __2_YAPAXI_Z(0xCu);
    if ( v173 )
    {
      v174 = *(_WORD *)(this + 388);
      v173[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v173 + 4) = v174;
      *v173 = &RLEBlitTransLucent75ZRead<unsigned short>::`vftable';
    }
    else
    {
      v173 = 0;
    }
    *(_DWORD *)(this + 244) = v173;
    v175 = __2_YAPAXI_Z(0xCu);
    if ( v175 )
    {
      v176 = *(_WORD *)(this + 384);
      v175[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v175 + 4) = v176;
      *v175 = &RLEBlitTransLucent50ZRead<unsigned short>::`vftable';
    }
    else
    {
      v175 = 0;
    }
    *(_DWORD *)(this + 248) = v175;
    v177 = __2_YAPAXI_Z(0xCu);
    if ( v177 )
    {
      v178 = *(_WORD *)(this + 388);
      v177[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v177 + 4) = v178;
      *v177 = &RLEBlitTransLucent25ZRead<unsigned short>::`vftable';
    }
    else
    {
      v177 = 0;
    }
    *(_DWORD *)(this + 252) = v177;
    v179 = __2_YAPAXI_Z(0xCu);
    if ( v179 )
    {
      v180 = *(_WORD *)(this + 388);
      v179[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v179 + 4) = v180;
      *v179 = &RLEBlitTransLucent75ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v179 = 0;
    }
    *(_DWORD *)(this + 256) = v179;
    v181 = __2_YAPAXI_Z(0xCu);
    if ( v181 )
    {
      v182 = *(_WORD *)(this + 384);
      v181[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v181 + 4) = v182;
      *v181 = &RLEBlitTransLucent50ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v181 = 0;
    }
    *(_DWORD *)(this + 260) = v181;
    v183 = __2_YAPAXI_Z(0xCu);
    if ( v183 )
    {
      v184 = *(_WORD *)(this + 388);
      v183[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v183 + 4) = v184;
      *v183 = &RLEBlitTransLucent25ZReadWarp<unsigned short>::`vftable';
    }
    else
    {
      v183 = 0;
    }
    *(_DWORD *)(this + 264) = v183;
    v185 = __2_YAPAXI_Z(8u);
    if ( v185 )
    {
      v185[1] = *(_DWORD *)(this + 372);
      *v185 = &RLEBlitTransXlatZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v185 = 0;
    }
    *(_DWORD *)(this + 268) = v185;
    v186 = __2_YAPAXI_Z(0xCu);
    if ( v186 )
    {
      v187 = *(_DWORD *)(this + 372);
      v186[1] = this + 380;
      v186[2] = v187;
      *v186 = &RLEBlitTransZRemapXlatZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v186 = 0;
    }
    *(_DWORD *)(this + 272) = v186;
    v188 = __2_YAPAXI_Z(8u);
    if ( v188 )
    {
      v188[2] = *(_WORD *)(this + 384);
      *(_DWORD *)v188 = &RLEBlitTransDarkenZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v188 = 0;
    }
    *(_DWORD *)(this + 276) = v188;
    v189 = __2_YAPAXI_Z(0xCu);
    if ( v189 )
    {
      v190 = *(_WORD *)(this + 388);
      v189[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v189 + 4) = v190;
      *v189 = &RLEBlitTransLucent75ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v189 = 0;
    }
    *(_DWORD *)(this + 280) = v189;
    v191 = __2_YAPAXI_Z(0xCu);
    if ( v191 )
    {
      v192 = *(_WORD *)(this + 384);
      v191[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v191 + 4) = v192;
      *v191 = &RLEBlitTransLucent50ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v191 = 0;
    }
    *(_DWORD *)(this + 284) = v191;
    v193 = __2_YAPAXI_Z(0xCu);
    if ( v193 )
    {
      v194 = *(_WORD *)(this + 388);
      v193[1] = *(_DWORD *)(this + 372);
      *((_WORD *)v193 + 4) = v194;
      *v193 = &RLEBlitTransLucent25ZReadWrite<unsigned short>::`vftable';
    }
    else
    {
      v193 = 0;
    }
    *(_DWORD *)(this + 288) = v193;
    v195 = __2_YAPAXI_Z(0xCu);
    if ( v195 )
    {
      v196 = *(_DWORD *)(this + 364);
      v195[1] = *(_DWORD *)(this + 368);
      v195[2] = 0;
      *v195 = &RLEBlitTransXlatAlpha<unsigned short>::`vftable';
      v195[2] = CreateFractalNoise(v196);
    }
    else
    {
      v195 = 0;
    }
    *(_DWORD *)(this + 292) = v195;
    v197 = __2_YAPAXI_Z(0x10u);
    if ( v197 )
    {
      v198 = *(_DWORD *)(this + 368);
      v248 = *(_DWORD *)(this + 364);
      v197[1] = this + 380;
      v197[2] = v198;
      v197[3] = 0;
      *v197 = &vt_RLEBlitTransZRemapXlatAlpha_unsigned_short;
      v197[3] = CreateFractalNoise(v248);
    }
    else
    {
      v197 = 0;
    }
    *(_DWORD *)(this + 296) = v197;
    v199 = __2_YAPAXI_Z(0x10u);
    if ( v199 )
    {
      v200 = *(_WORD *)(this + 388);
      v201 = *(_DWORD *)(this + 364);
      v199[1] = *(_DWORD *)(this + 368);
      v199[2] = 0;
      *((_WORD *)v199 + 6) = v200;
      *v199 = &RLEBlitTransLucent75Alpha<unsigned short>::`vftable';
      v199[2] = CreateFractalNoise(v201);
    }
    else
    {
      v199 = 0;
    }
    *(_DWORD *)(this + 300) = v199;
    v202 = __2_YAPAXI_Z(0x10u);
    if ( v202 )
    {
      v203 = *(_WORD *)(this + 384);
      v204 = *(_DWORD *)(this + 364);
      v202[1] = *(_DWORD *)(this + 368);
      v202[2] = 0;
      *((_WORD *)v202 + 6) = v203;
      *v202 = &RLEBlitTransLucent50Alpha<unsigned short>::`vftable';
      v202[2] = CreateFractalNoise(v204);
    }
    else
    {
      v202 = 0;
    }
    *(_DWORD *)(this + 304) = v202;
    v205 = __2_YAPAXI_Z(0x10u);
    if ( v205 )
    {
      v206 = *(_WORD *)(this + 388);
      v207 = *(_DWORD *)(this + 364);
      v205[1] = *(_DWORD *)(this + 368);
      v205[2] = 0;
      *((_WORD *)v205 + 6) = v206;
      *v205 = &RLEBlitTransLucent25Alpha<unsigned short>::`vftable';
      v205[2] = CreateFractalNoise(v207);
    }
    else
    {
      v205 = 0;
    }
    *(_DWORD *)(this + 308) = v205;
    v208 = __2_YAPAXI_Z(0xCu);
    if ( v208 )
    {
      v209 = *(_DWORD *)(this + 364);
      v208[1] = *(_DWORD *)(this + 368);
      v208[2] = 0;
      *v208 = &RLEBlitTransXlatAlphaZRead<unsigned short>::`vftable';
      v208[2] = CreateFractalNoise(v209);
    }
    else
    {
      v208 = 0;
    }
    *(_DWORD *)(this + 312) = v208;
    v210 = __2_YAPAXI_Z(0x10u);
    if ( v210 )
    {
      v211 = *(_DWORD *)(this + 368);
      v249 = *(_DWORD *)(this + 364);
      v210[1] = this + 380;
      v210[2] = v211;
      v210[3] = 0;
      *v210 = &RLEBlitTransZRemapXlatAlphaZRead<unsigned short>::`vftable';
      v210[3] = CreateFractalNoise(v249);
    }
    else
    {
      v210 = 0;
    }
    *(_DWORD *)(this + 316) = v210;
    v212 = __2_YAPAXI_Z(0x10u);
    if ( v212 )
    {
      v213 = *(_WORD *)(this + 388);
      v214 = *(_DWORD *)(this + 364);
      v212[1] = *(_DWORD *)(this + 368);
      v212[2] = 0;
      *((_WORD *)v212 + 6) = v213;
      *v212 = &RLEBlitTransLucent75AlphaZRead<unsigned short>::`vftable';
      v212[2] = CreateFractalNoise(v214);
    }
    else
    {
      v212 = 0;
    }
    *(_DWORD *)(this + 320) = v212;
    v215 = __2_YAPAXI_Z(0x10u);
    if ( v215 )
    {
      v216 = *(_WORD *)(this + 384);
      v217 = *(_DWORD *)(this + 364);
      v215[1] = *(_DWORD *)(this + 368);
      v215[2] = 0;
      *((_WORD *)v215 + 6) = v216;
      *v215 = &RLEBlitTransLucent50AlphaZRead<unsigned short>::`vftable';
      v215[2] = CreateFractalNoise(v217);
    }
    else
    {
      v215 = 0;
    }
    *(_DWORD *)(this + 324) = v215;
    v218 = __2_YAPAXI_Z(0x10u);
    if ( v218 )
    {
      v219 = *(_WORD *)(this + 388);
      v220 = *(_DWORD *)(this + 364);
      v218[1] = *(_DWORD *)(this + 368);
      v218[2] = 0;
      *((_WORD *)v218 + 6) = v219;
      *v218 = &RLEBlitTransLucent25AlphaZRead<unsigned short>::`vftable';
      v218[2] = CreateFractalNoise(v220);
    }
    else
    {
      v218 = 0;
    }
    *(_DWORD *)(this + 328) = v218;
    v221 = __2_YAPAXI_Z(0x10u);
    if ( v221 )
    {
      v222 = *(_WORD *)(this + 388);
      v223 = *(_DWORD *)(this + 364);
      v221[1] = *(_DWORD *)(this + 368);
      v221[2] = 0;
      *((_WORD *)v221 + 6) = v222;
      *v221 = &RLEBlitTransLucent75AlphaZReadWarp<unsigned short>::`vftable';
      v221[2] = CreateFractalNoise(v223);
    }
    else
    {
      v221 = 0;
    }
    *(_DWORD *)(this + 332) = v221;
    v224 = __2_YAPAXI_Z(0x10u);
    if ( v224 )
    {
      v225 = *(_WORD *)(this + 384);
      v226 = *(_DWORD *)(this + 364);
      v224[1] = *(_DWORD *)(this + 368);
      v224[2] = 0;
      *((_WORD *)v224 + 6) = v225;
      *v224 = &RLEBlitTransLucent50AlphaZReadWarp<unsigned short>::`vftable';
      v224[2] = CreateFractalNoise(v226);
    }
    else
    {
      v224 = 0;
    }
    *(_DWORD *)(this + 336) = v224;
    v227 = __2_YAPAXI_Z(0x10u);
    if ( v227 )
    {
      v228 = *(_WORD *)(this + 388);
      v229 = *(_DWORD *)(this + 364);
      v227[1] = *(_DWORD *)(this + 368);
      v227[2] = 0;
      *((_WORD *)v227 + 6) = v228;
      *v227 = &RLEBlitTransLucent25AlphaZReadWarp<unsigned short>::`vftable';
      v227[2] = CreateFractalNoise(v229);
    }
    else
    {
      v227 = 0;
    }
    *(_DWORD *)(this + 340) = v227;
    v230 = __2_YAPAXI_Z(0xCu);
    if ( v230 )
    {
      v231 = *(_DWORD *)(this + 364);
      v230[1] = *(_DWORD *)(this + 368);
      v230[2] = 0;
      *v230 = &RLEBlitTransXlatAlphaZReadWrite<unsigned short>::`vftable';
      v230[2] = CreateFractalNoise(v231);
    }
    else
    {
      v230 = 0;
    }
    *(_DWORD *)(this + 344) = v230;
    v232 = __2_YAPAXI_Z(0x10u);
    if ( v232 )
    {
      v233 = *(_DWORD *)(this + 368);
      v250 = *(_DWORD *)(this + 364);
      v232[1] = this + 380;
      v232[2] = v233;
      v232[3] = 0;
      *v232 = &RLEBlitTransZRemapXlatAlphaZReadWrite<unsigned short>::`vftable';
      v232[3] = CreateFractalNoise(v250);
    }
    else
    {
      v232 = 0;
    }
    *(_DWORD *)(this + 348) = v232;
    v234 = __2_YAPAXI_Z(0x10u);
    if ( v234 )
    {
      v235 = *(_WORD *)(this + 388);
      v236 = *(_DWORD *)(this + 364);
      v234[1] = *(_DWORD *)(this + 368);
      v234[2] = 0;
      *((_WORD *)v234 + 6) = v235;
      *v234 = &RLEBlitTransLucent75AlphaZReadWrite<unsigned short>::`vftable';
      v234[2] = CreateFractalNoise(v236);
    }
    else
    {
      v234 = 0;
    }
    *(_DWORD *)(this + 352) = v234;
    v237 = __2_YAPAXI_Z(0x10u);
    if ( v237 )
    {
      v238 = *(_WORD *)(this + 384);
      v239 = *(_DWORD *)(this + 364);
      v237[1] = *(_DWORD *)(this + 368);
      v237[2] = 0;
      *((_WORD *)v237 + 6) = v238;
      *v237 = &RLEBlitTransLucent50AlphaZReadWrite<unsigned short>::`vftable';
      v237[2] = CreateFractalNoise(v239);
    }
    else
    {
      v237 = 0;
    }
    *(_DWORD *)(this + 356) = v237;
    result = __2_YAPAXI_Z(0x10u);
    v240 = result;
    if ( result )
    {
      v241 = *(_WORD *)(this + 388);
      v242 = *(_DWORD *)(this + 364);
      v240[1] = *(_DWORD *)(this + 368);
      v240[2] = 0;
      *((_WORD *)v240 + 6) = v241;
      *v240 = &RLEBlitTransLucent25AlphaZReadWrite<unsigned short>::`vftable';
      result = CreateFractalNoise(v242);
      v240[2] = result;
      *(_DWORD *)(this + 360) = v240;
    }
    else
    {
      *(_DWORD *)(this + 360) = 0;
    }
  }
  return result;
}

